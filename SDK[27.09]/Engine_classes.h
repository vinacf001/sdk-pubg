// Class Engine.Actor
// Size: 0x408 (Inherited: 0x30)
struct AActor : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x40(0x10)
	struct FMulticastDelegate OnClicked; // 0x50(0x10)
	char pad_60_0 : 3; // 0x60(0x01)
	char *6a29209afc : 1; // 0x60(0x01)
	char pad_60_4 : 4; // 0x60(0x01)
	char pad_61_0 : 1; // 0x61(0x01)
	char *6583edce58 : 1; // 0x61(0x01)
	char bReplicates : 1; // 0x61(0x01)
	char pad_61_3 : 5; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct FName *332fd811ca; // 0x68(0x08)
	enum class ENetRole RemoteRole; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct AActor* Owner; // 0x78(0x08)
	struct FRepMovement ReplicatedMovement; // 0x80(0x34)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb8(0x40)
	struct FMulticastDelegate OnInputTouchBegin; // 0xf8(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x108(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct TArray<struct FName> Tags; // 0x120(0x10)
	struct FGuid DestructibleId; // 0x130(0x10)
	bool bIsDestroyedVersion; // 0x140(0x01)
	bool RemoveFromLevelLOD; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
	struct F*2066290a18 PrimaryActorTick; // 0x148(0x58)
	float *ae3e81fc86; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1a8(0x10)
	char bAutoDestroyWhenFinished : 1; // 0x1b8(0x01)
	char bCanBeDamaged : 1; // 0x1b8(0x01)
	char *50cd51ed38 : 1; // 0x1b8(0x01)
	char *e002b42072 : 1; // 0x1b8(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x1b8(0x01)
	char *a4c704a3e5 : 1; // 0x1b8(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x1b8(0x01)
	char *13aea9b43a : 1; // 0x1b8(0x01)
	char *4211b886bf : 1; // 0x1b9(0x01)
	char pad_1B9_1 : 7; // 0x1b9(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
	struct FMulticastDelegate OnTakePointDamage; // 0x1c0(0x10)
	enum class ENetRole Role; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	struct UChildActorComponent* *129513d23d; // 0x1d4(0x08)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct FMulticastDelegate OnActorEndOverlap; // 0x1e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	float NetUpdateFrequency; // 0x1f4(0x04)
	float MinNetUpdateFrequency; // 0x1f8(0x04)
	float InitialLifeSpan; // 0x1fc(0x04)
	char *97cac516e7 : 1; // 0x200(0x01)
	char pad_200_1 : 4; // 0x200(0x01)
	char *cd27b8552b : 1; // 0x200(0x01)
	char *8aabd64ff4 : 1; // 0x200(0x01)
	char *3cd32b903e : 1; // 0x200(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x201(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x202(0x01)
	char pad_203[0x5]; // 0x203(0x05)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x208(0x10)
	int32 *2bc7f7749a; // 0x218(0x04)
	char pad_21C[0x1]; // 0x21c(0x01)
	enum class *66c1dada81 InputConsumeOption; // 0x21d(0x01)
	char pad_21E[0xa]; // 0x21e(0x0a)
	struct USceneComponent* RootComponent; // 0x228(0x08)
	struct FMulticastDelegate OnInputTouchEnter; // 0x230(0x10)
	float CustomTimeDilation; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct TArray<struct AActor*> Children; // 0x248(0x10)
	char pad_258[0x8]; // 0x258(0x08)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct AActor* ParentComponentActor; // 0x270(0x08)
	float NetCullDistanceSquared; // 0x278(0x04)
	char pad_27C[0x54]; // 0x27c(0x54)
	struct FMulticastDelegate OnActorHit; // 0x2d0(0x10)
	int32 *2d89f8ef7f; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x2e8(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x2f8(0x08)
	struct FMulticastDelegate OnEndCursorOver; // 0x300(0x10)
	char bHidden : 1; // 0x310(0x01)
	char *0854a90e26 : 1; // 0x310(0x01)
	char *013332e5c6 : 1; // 0x310(0x01)
	char bOnlyRelevantToOwner : 1; // 0x310(0x01)
	char bAlwaysRelevant : 1; // 0x310(0x01)
	char *9ddfc785f1 : 1; // 0x310(0x01)
	char *05594c4443 : 1; // 0x310(0x01)
	char *ef19f6b6c9 : 1; // 0x310(0x01)
	char *dca9d9a72a : 1; // 0x311(0x01)
	char pad_311_1 : 1; // 0x311(0x01)
	char *16d69885c9 : 1; // 0x311(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x311(0x01)
	char *59968c9633 : 1; // 0x311(0x01)
	char pad_311_5 : 1; // 0x311(0x01)
	char *02848ec998 : 1; // 0x311(0x01)
	char pad_311_7 : 1; // 0x311(0x01)
	char pad_312[0x6]; // 0x312(0x06)
	struct APawn* Instigator; // 0x318(0x08)
	struct TArray<struct FName> Layers; // 0x320(0x10)
	uint64 *f99b84bc94; // 0x330(0x08)
	struct FMulticastDelegate OnInputTouchLeave; // 0x338(0x10)
	float NetPriority; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FMulticastDelegate OnReleased; // 0x350(0x10)
	char pad_360[0x8]; // 0x360(0x08)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x368(0x10)
	char pad_378[0x60]; // 0x378(0x60)
	struct FMulticastDelegate OnDestroyed; // 0x3d8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3e8(0x10)
	char pad_3F8[0x10]; // 0x3f8(0x10)

	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1300
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // Native|Protected // @ game+0xc30d48
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // Native|Public|BlueprintCallable // @ game+0x67c1f34
	void *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67adce4
	void *6f6713dfba(); // Function Engine.Actor.*6f6713dfba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ad7a8
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // Native|Public|BlueprintCallable // @ game+0xcdc258
	void *2a43ddf3b4(); // Function Engine.Actor.*2a43ddf3b4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67acb0c
	void *694ac52e11(); // Function Engine.Actor.*694ac52e11 // Final|Native|Public|BlueprintCallable // @ game+0x67b47d8
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae6c4
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa770
	void *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // Final|Native|Public|BlueprintCallable // @ game+0x67b7a58
	void K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b5c04
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aca6c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1398
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // Native|Public // @ game+0x654b64
	void K2_AddActorLocalOffset(); // Function Engine.Actor.K2_AddActorLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b20a8
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aaf64
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x67aa11c
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67af5a8
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0538
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // Final|Native|Public|BlueprintCallable // @ game+0x67c3704
	void *e13072354b(); // Function Engine.Actor.*e13072354b // Final|Native|Public|BlueprintCallable // @ game+0x6f2fcc
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // Native|Public|BlueprintCallable // @ game+0x67b4670
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x67a32b4
	void K2_AddActorWorldTransform(); // Function Engine.Actor.K2_AddActorWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b2a34
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // Native|Public|BlueprintCallable // @ game+0x67b96f4
	void GetActorBounds(); // Function Engine.Actor.GetActorBounds // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa330
	void K2_SetActorRotation(); // Function Engine.Actor.K2_SetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x7d29f4
	void K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b5fb4
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // Final|Native|Public|BlueprintCallable // @ game+0x67c25b4
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa4d8
	void K2_AddActorWorldOffset(); // Function Engine.Actor.K2_AddActorWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b2684
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae5fc
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // Native|Public // @ game+0xc56b64
	void K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // Final|Native|Public|BlueprintCallable // @ game+0x67b3d30
	void HasAuthority(); // Function Engine.Actor.HasAuthority // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xaaf328
	void K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b5ddc
	void *ca2fce53c9(); // Function Engine.Actor.*ca2fce53c9 // Final|Native|Public|BlueprintCallable // @ game+0x67b4030
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa97c
	void ReceivePointDamage(); // Function Engine.Actor.ReceivePointDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22ddc4
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void K2_SetActorTransform(); // Function Engine.Actor.K2_SetActorTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b61e0
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // Final|Native|Public|BlueprintCallable // @ game+0x67c249c
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // Native|Public|BlueprintCallable // @ game+0x67b981c
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // Native|Public|BlueprintCallable // @ game+0x67bc820
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // Native|Public|BlueprintCallable // @ game+0x67c43f4
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x67aa130
	void *2bbda76e95(); // Function Engine.Actor.*2bbda76e95 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac25c
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x67c1fcc
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // Native|Public // @ game+0x9f5e54
	void DisableInput(); // Function Engine.Actor.DisableInput // Native|Public|BlueprintCallable // @ game+0x67a80ec
	void *a487955527(); // Function Engine.Actor.*a487955527 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4b48
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67af738
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // Final|Native|Public|BlueprintCallable // @ game+0x67bcbc4
	void K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // Final|Native|Public|BlueprintCallable // @ game+0x67b3bb0
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67aafcc
	void K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b285c
	void ActorHasTag(); // Function Engine.Actor.ActorHasTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a161c
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // Final|Native|Public|BlueprintCallable // @ game+0x67b4688
	void *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac164
	void *8ff8fb0472(); // Function Engine.Actor.*8ff8fb0472 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae3f4
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *094169766b(); // Function Engine.Actor.*094169766b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae614
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bca84
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b12e4
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // Final|Native|Public|BlueprintCallable // @ game+0x67b0804
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void K2_SetActorLocation(); // Function Engine.Actor.K2_SetActorLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b57e8
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void GetTransform(); // Function Engine.Actor.GetTransform // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xb841c8
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67aad68
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67accb4
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4c50
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // Final|Native|Public|BlueprintCallable // @ game+0x67bcc58
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // Native|Public // @ game+0xc89268
	void *58360a298b(); // Function Engine.Actor.*58360a298b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1b14
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67af830
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa500
	void AddComponent(); // Function Engine.Actor.AddComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xb3a898
	void *679babdbe9(); // Function Engine.Actor.*679babdbe9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67b7420
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa7a4
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa60c
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aaf88
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0c4c
	void K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b59cc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ad708
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac34c
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *77574d4d00(); // Function Engine.Actor.*77574d4d00 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67c4ad4
	void ReceiveHit(); // Function Engine.Actor.ReceiveHit // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22ddc4
	void K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b2458
	void *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67addd8
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67af80c
	void *7952614099(); // Function Engine.Actor.*7952614099 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa954
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bcb24
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // Final|Native|Public|BlueprintCallable // @ game+0x67bc788
	void *82b3653b7b(); // Function Engine.Actor.*82b3653b7b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0c84
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void SetOwner(); // Function Engine.Actor.SetOwner // Native|Public|BlueprintCallable // @ game+0x5aea00c
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // Native|Public // @ game+0xc2dbb8
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0078
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void MakeNoise(); // Function Engine.Actor.MakeNoise // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67b7ad4
	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa93c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // Final|Native|Public|BlueprintCallable // @ game+0x67a8058
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // Native|Public|BlueprintCallable // @ game+0x67a33dc
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // Native|Public|BlueprintCallable // @ game+0x67a9b94
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b50d4
	void ReceiveAnyDamage(); // Function Engine.Actor.ReceiveAnyDamage // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ReceiveRadialDamage(); // Function Engine.Actor.ReceiveRadialDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22ddc4
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa908
	void GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67af348
	void K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b2280
};

// Class Engine.AnimInstance
// Size: 0x3a0 (Inherited: 0x30)
struct UAnimInstance : UObject {
	float DeltaTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct USkeleton* *3d26a0f5a9; // 0x38(0x08)
	enum class *70bf4a9cf2 *06b775a106; // 0x40(0x01)
	bool bRunUpdatesInWorkerThreads; // 0x41(0x01)
	bool bCanUseParallelUpdateAnimation; // 0x42(0x01)
	bool *b16fe671be; // 0x43(0x01)
	bool bWarnAboutBlueprintUsage; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FMulticastDelegate OnMontageBlendingOut; // 0x48(0x10)
	struct FMulticastDelegate OnMontageStarted; // 0x58(0x10)
	struct FMulticastDelegate OnMontageEnded; // 0x68(0x10)
	struct FMulticastDelegate OnMontageInterrupted; // 0x78(0x10)
	struct FMulticastDelegate OnAllMontageInstancesEnded; // 0x88(0x10)
	char pad_98[0x60]; // 0x98(0x60)
	bool *9e5b2e55cd; // 0xf8(0x01)
	char pad_F9[0x9f]; // 0xf9(0x9f)
	struct TArray<struct FAnimNotifyEvent> *e83d212201; // 0x198(0x10)
	char pad_1A8[0x1f8]; // 0x1a8(0x1f8)

	void *1049bf0142(); // Function Engine.AnimInstance.*1049bf0142 // Final|Native|Public|BlueprintCallable // @ game+0x67fb85c
	void *fb3df011d9(); // Function Engine.AnimInstance.*fb3df011d9 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e38b8
	void *ad69a18e5a(); // Function Engine.AnimInstance.*ad69a18e5a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67f0764
	void GetStateWeight(); // Function Engine.AnimInstance.GetStateWeight // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67eaea0
	void *d46dc5dc83(); // Function Engine.AnimInstance.*d46dc5dc83 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67fb1c4
	void PlaySlotAnimation(); // Function Engine.AnimInstance.PlaySlotAnimation // Final|Native|Public|BlueprintCallable // @ game+0x67ff280
	void Montage_Play(); // Function Engine.AnimInstance.Montage_Play // Native|Public|BlueprintCallable // @ game+0x6f33fc
	void *242396e0df(); // Function Engine.AnimInstance.*242396e0df // Native|Public|BlueprintCallable // @ game+0x5a7eb54
	void *0c3e0ee134(); // Function Engine.AnimInstance.*0c3e0ee134 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67eb458
	void *8c0c4894ae(); // Function Engine.AnimInstance.*8c0c4894ae // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67f0e90
	void *691ee180b3(); // Function Engine.AnimInstance.*691ee180b3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67fb300
	void *e267668cef(); // Function Engine.AnimInstance.*e267668cef // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e5848
	void *723eae25e1(); // Function Engine.AnimInstance.*723eae25e1 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e60b8
	void GetCurrentStateElapsedTime(); // Function Engine.AnimInstance.GetCurrentStateElapsedTime // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e3818
	void *91ee611ffd(); // Function Engine.AnimInstance.*91ee611ffd // Native|Public|BlueprintCallable // @ game+0x79ecec
	void *e146fc91b1(); // Function Engine.AnimInstance.*e146fc91b1 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e5dc4
	void *057fda6034(); // Function Engine.AnimInstance.*057fda6034 // Final|Native|Public|BlueprintCallable // @ game+0x680f1ac
	void GetAnimAssetPlayerTimeFromEnd(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e1d68
	void *48c662fc37(); // Function Engine.AnimInstance.*48c662fc37 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e67b8
	void *245284edb6(); // Function Engine.AnimInstance.*245284edb6 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e566c
	void *f364c6828d(); // Function Engine.AnimInstance.*f364c6828d // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e93c4
	void *bf78400b8f(); // Function Engine.AnimInstance.*bf78400b8f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67fb4e0
	void *5eeab7b91c(); // Function Engine.AnimInstance.*5eeab7b91c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67fb124
	void *bca340010a(); // Function Engine.AnimInstance.*bca340010a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67fb260
	void *c5fd55eb88(); // Function Engine.AnimInstance.*c5fd55eb88 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x67f6c88
	void *fd0ea4aa33(); // Function Engine.AnimInstance.*fd0ea4aa33 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e5a0c
	void *ccdbbc4b23(); // Function Engine.AnimInstance.*ccdbbc4b23 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67fb3a0
	void *1ab31cd97b(); // Function Engine.AnimInstance.*1ab31cd97b // Final|Native|Public|BlueprintCallable // @ game+0x6811018
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *3ae29e8bbb(); // Function Engine.AnimInstance.*3ae29e8bbb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67f1418
	void *f61ade023a(); // Function Engine.AnimInstance.*f61ade023a // Final|Native|Public|BlueprintCallable // @ game+0x67fb77c
	void *9b89db3b5d(); // Function Engine.AnimInstance.*9b89db3b5d // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e65a4
	void *058de0418c(); // Function Engine.AnimInstance.*058de0418c // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x514c80
	void *66a3995478(); // Function Engine.AnimInstance.*66a3995478 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67eee3c
	void *899177a2d7(); // Function Engine.AnimInstance.*899177a2d7 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e5490
	void *e8a9ba9091(); // Function Engine.AnimInstance.*e8a9ba9091 // Native|Public|HasOutParms|BlueprintCallable // @ game+0x68170c8
	void *3c7c31cc75(); // Function Engine.AnimInstance.*3c7c31cc75 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e94ac
	void *66f0434692(); // Function Engine.AnimInstance.*66f0434692 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ebb08
	void *5e755e4562(); // Function Engine.AnimInstance.*5e755e4562 // Native|Public|BlueprintCallable // @ game+0x6804328
	void *79ed44711d(); // Function Engine.AnimInstance.*79ed44711d // Final|Native|Public|BlueprintCallable // @ game+0x67fb6ec
	void *ccd070a982(); // Function Engine.AnimInstance.*ccd070a982 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc54294
	void *84bfa05c08(); // Function Engine.AnimInstance.*84bfa05c08 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d2f40
	void *3ae1a9d556(); // Function Engine.AnimInstance.*3ae1a9d556 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e69c8
	void *f6100f1f77(); // Function Engine.AnimInstance.*f6100f1f77 // Native|Public|BlueprintCallable // @ game+0x8ee3b4
	void *ec3409ea7b(); // Function Engine.AnimInstance.*ec3409ea7b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e3430
	void *905d29ade2(); // Function Engine.AnimInstance.*905d29ade2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xcb8014
	void *3080ec9377(); // Function Engine.AnimInstance.*3080ec9377 // Final|Native|Public|BlueprintCallable // @ game+0x67fb65c
	void *8c5198f019(); // Function Engine.AnimInstance.*8c5198f019 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0xa0a9fc
	void PlaySlotAnimationAsDynamicMontage(); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage // Final|Native|Public|BlueprintCallable // @ game+0x67ff4a4
	void *f36dfe6065(); // Function Engine.AnimInstance.*f36dfe6065 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x44f1d0
	void GetAnimAssetPlayerLength(); // Function Engine.AnimInstance.GetAnimAssetPlayerLength // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e1bf4
	void *0d4faf3909(); // Function Engine.AnimInstance.*0d4faf3909 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x67f6c88
	void GetAnimAssetPlayerTimeFromEndFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e1e6c
	void *24d7f1731e(); // Function Engine.AnimInstance.*24d7f1731e // Final|Native|Public|BlueprintCallable // @ game+0x67fb580
	void *a6e097a5c0(); // Function Engine.AnimInstance.*a6e097a5c0 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e5bd0
	void *07eb4aa7bc(); // Function Engine.AnimInstance.*07eb4aa7bc // Final|Native|Public|BlueprintCallable // @ game+0x67d61e8
	void *d9cbacaeac(); // Function Engine.AnimInstance.*d9cbacaeac // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67e96d8
	void *9687b3535a(); // Function Engine.AnimInstance.*9687b3535a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0xa0ac7c
	void GetAnimAssetPlayerTimeFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e1c88
	void *771de70e87(); // Function Engine.AnimInstance.*771de70e87 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67fb440
	void *53d492fe87(); // Function Engine.AnimInstance.*53d492fe87 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x681dddc
	void BlueprintUpdateAnimation(); // Function Engine.AnimInstance.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *3b5b96bdbc(); // Function Engine.AnimInstance.*3b5b96bdbc // Final|Native|Public|BlueprintCallable // @ game+0x681c094
};

// Class Engine.ActorComponent
// Size: 0x200 (Inherited: 0x30)
struct UActorComponent : UObject {
	char pad_30[0xf0]; // 0x30(0xf0)
	struct F*64c6f9629b PrimaryComponentTick; // 0x120(0x58)
	struct TArray<struct FName> ComponentTags; // 0x178(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x188(0x10)
	char pad_198_0 : 3; // 0x198(0x01)
	char bReplicates : 1; // 0x198(0x01)
	char bNetAddressable : 1; // 0x198(0x01)
	char *d9de2ce983 : 1; // 0x198(0x01)
	char pad_198_6 : 2; // 0x198(0x01)
	char pad_199[0x1]; // 0x199(0x01)
	char pad_19A_0 : 2; // 0x19a(0x01)
	char bCreatedByConstructionScript : 1; // 0x19a(0x01)
	char bInstanceComponent : 1; // 0x19a(0x01)
	char bAutoActivate : 1; // 0x19a(0x01)
	char *eedbc91ee9 : 1; // 0x19a(0x01)
	char *8016acb0c2 : 1; // 0x19a(0x01)
	char pad_19A_7 : 1; // 0x19a(0x01)
	char pad_19B[0x1]; // 0x19b(0x01)
	struct FGuid DestructibleId; // 0x19c(0x10)
	bool bIsDestroyedVersion; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	char *cb59e077f1 : 1; // 0x1b0(0x01)
	char pad_1B0_1 : 2; // 0x1b0(0x01)
	char bIsEditorOnly : 1; // 0x1b0(0x01)
	char pad_1B0_4 : 4; // 0x1b0(0x01)
	char pad_1B1[0x4]; // 0x1b1(0x04)
	enum class EComponentCreationMethod CreationMethod; // 0x1b5(0x01)
	enum class EPendingCreationType *a029c1f885; // 0x1b6(0x01)
	char pad_1B7[0x9]; // 0x1b7(0x09)
	struct TArray<struct FSimpleMemberReference> *1c5b1ecf7e; // 0x1c0(0x10)
	struct FMulticastDelegate OnComponentActivated; // 0x1d0(0x10)
	struct FMulticastDelegate OnComponentDeactivated; // 0x1e0(0x10)
	char pad_1F0[0x9]; // 0x1f0(0x09)
	char *6583edce58 : 1; // 0x1f9(0x01)
	char pad_1F9_1 : 7; // 0x1f9(0x01)
	char pad_1FA[0x6]; // 0x1fa(0x06)

	void *b3ab644ab0(); // Function Engine.ActorComponent.*b3ab644ab0 // Native|Public|BlueprintCallable // @ game+0x67bd28c
	void *7fc2785714(); // Function Engine.ActorComponent.*7fc2785714 // Native|Public|BlueprintCallable // @ game+0x67b9788
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive // Final|Native|Public // @ game+0x67b804c
	void AddTickPrerequisiteActor(); // Function Engine.ActorComponent.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x67a3348
	void Activate(); // Function Engine.ActorComponent.Activate // Native|Public|BlueprintCallable // @ game+0xcdaed0
	void Deactivate(); // Function Engine.ActorComponent.Deactivate // Native|Public|BlueprintCallable // @ game+0xbef000
	void *7e6bf7eb55(); // Function Engine.ActorComponent.*7e6bf7eb55 // Final|Native|Public|BlueprintCallable // @ game+0x67c0478
	void *eda0f1fdef(); // Function Engine.ActorComponent.*eda0f1fdef // Final|Native|Public|BlueprintCallable // @ game+0x67c264c
	void IsActive(); // Function Engine.ActorComponent.IsActive // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b12bc
	void *7af955f165(); // Function Engine.ActorComponent.*7af955f165 // Native|Public|BlueprintCallable // @ game+0x67b98b0
	void *b6de83bb83(); // Function Engine.ActorComponent.*b6de83bb83 // Native|Public|BlueprintCallable // @ game+0x6246d90
	void ReceiveTick(); // Function Engine.ActorComponent.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *d30428cd54(); // Function Engine.ActorComponent.*d30428cd54 // Final|Native|Public|BlueprintCallable // @ game+0x67c2528
	void *ef1420b078(); // Function Engine.ActorComponent.*ef1420b078 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac20c
	void *cc59ee805b(); // Function Engine.ActorComponent.*cc59ee805b // Native|Public|BlueprintCallable // @ game+0x67bc694
	void *7664b363a1(); // Function Engine.ActorComponent.*7664b363a1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xbc99c8
	void *70313663c3(); // Function Engine.ActorComponent.*70313663c3 // Final|Native|Public|BlueprintCallable // @ game+0x67beed8
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *9ffc398f85(); // Function Engine.ActorComponent.*9ffc398f85 // Native|Public|BlueprintCallable // @ game+0x67a3470
	void *65f31f10a3(); // Function Engine.ActorComponent.*65f31f10a3 // Native|Public|BlueprintCallable // @ game+0x67bee40
	void ReceiveEndPlay(); // Function Engine.ActorComponent.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *db9ec7e456(); // Function Engine.ActorComponent.*db9ec7e456 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b137c
	void *baf5caeb25(); // Function Engine.ActorComponent.*baf5caeb25 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b14f8
	void *298b7db98d(); // Function Engine.ActorComponent.*298b7db98d // Final|Native|Public|BlueprintCallable // @ game+0x67b4720
	void *d920280472(); // Function Engine.ActorComponent.*d920280472 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a7088
};

// Class Engine.Pawn
// Size: 0x468 (Inherited: 0x408)
struct APawn : AActor {
	char pad_408[0x8]; // 0x408(0x08)
	char bUseControllerRotationPitch : 1; // 0x410(0x01)
	char bUseControllerRotationYaw : 1; // 0x410(0x01)
	char bUseControllerRotationRoll : 1; // 0x410(0x01)
	char bCanAffectNavigationGeneration : 1; // 0x410(0x01)
	char pad_410_4 : 4; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float BaseEyeHeight; // 0x414(0x04)
	enum class EAutoReceiveInput AutoPossessPlayer; // 0x418(0x01)
	enum class EAutoPossessAI *ae9b8791a2; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct UClass* AIControllerClass; // 0x420(0x08)
	struct AController* *f127658d48; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)
	struct AController* Controller; // 0x438(0x08)
	struct APlayerState* PlayerState; // 0x440(0x08)
	uint16 *015f228c35; // 0x448(0x02)
	char pad_44A[0x6]; // 0x44a(0x06)
	struct FVector *0bd692bd5a; // 0x450(0x0c)
	struct FVector *77f948b8f9; // 0x45c(0x0c)

	void ReceivePossessed(); // Function Engine.Pawn.ReceivePossessed // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void AddControllerRollInput(); // Function Engine.Pawn.AddControllerRollInput // Native|Public|BlueprintCallable // @ game+0x67a1940
	void *ceaebf3734(); // Function Engine.Pawn.*ceaebf3734 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1a9c
	void AddControllerPitchInput(); // Function Engine.Pawn.AddControllerPitchInput // Native|Public|BlueprintCallable // @ game+0x67a18a4
	void *aea6d1fc21(); // Function Engine.Pawn.*aea6d1fc21 // Final|Native|Public|BlueprintCallable // @ game+0x67be31c
	void *b5c3a53167(); // Function Engine.Pawn.*b5c3a53167 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc4e94c
	void *e777ec86c5(); // Function Engine.Pawn.*e777ec86c5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae69c
	void *f8ca4cbaf3(); // Function Engine.Pawn.*f8ca4cbaf3 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a3d568
	void *e6a1adb893(); // Function Engine.Pawn.*e6a1adb893 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a0b288
	void OnRep_Controller(); // Function Engine.Pawn.OnRep_Controller // Native|Public // @ game+0x5a82544
	void *a90e1eb5c4(); // Function Engine.Pawn.*a90e1eb5c4 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a2ad0
	void *3d498218ec(); // Function Engine.Pawn.*3d498218ec // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab0b4
	void *ff0cdc3443(); // Function Engine.Pawn.*ff0cdc3443 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67aee20
	void K2_GetMovementInputVector(); // Function Engine.Pawn.K2_GetMovementInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67afbbc
	void *3faa338288(); // Function Engine.Pawn.*3faa338288 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67b7678
	void *85e6be51d8(); // Function Engine.Pawn.*85e6be51d8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1524
	void AddControllerYawInput(); // Function Engine.Pawn.AddControllerYawInput // Native|Public|BlueprintCallable // @ game+0x67a19dc
	void ReceiveUnpossessed(); // Function Engine.Pawn.ReceiveUnpossessed // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *a62a63aaf3(); // Function Engine.Pawn.*a62a63aaf3 // Native|Public|BlueprintCallable // @ game+0x67c38e8
	void OnRep_PlayerState(); // Function Engine.Pawn.OnRep_PlayerState // Native|Public // @ game+0xa1de88
	void *1d88abf6ea(); // Function Engine.Pawn.*1d88abf6ea // Native|Public|BlueprintCallable // @ game+0x5a06cb4
	void GetControlRotation(); // Function Engine.Pawn.GetControlRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac4c4
	void *cd903f5bc1(); // Function Engine.Pawn.*cd903f5bc1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67afbbc
	void *5a325d1f01(); // Function Engine.Pawn.*5a325d1f01 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67aef58
	void *3b0d0a8384(); // Function Engine.Pawn.*3b0d0a8384 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a74a0
	void *1dde1276de(); // Function Engine.Pawn.*1dde1276de // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67b8470
	void GetController(); // Function Engine.Pawn.GetController // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac4f8
};

// Class Engine.DataAsset
// Size: 0x38 (Inherited: 0x30)
struct UDataAsset : UObject {
	struct UClass* *d62375829a; // 0x30(0x08)
};

// Class Engine.SceneComponent
// Size: 0x4d0 (Inherited: 0x200)
struct USceneComponent : UActorComponent {
	struct TArray<struct USceneComponent*> AttachChildren; // 0x200(0x10)
	struct FVector *49e84c2fad; // 0x210(0x0c)
	char pad_21C[0x1c]; // 0x21c(0x1c)
	struct FVector RelativeLocation; // 0x238(0x0c)
	char pad_244_0 : 1; // 0x244(0x01)
	char bReplicatesAttachmentReference : 1; // 0x244(0x01)
	char bReplicatesAttachment : 1; // 0x244(0x01)
	char *9874f81ad0 : 1; // 0x244(0x01)
	char pad_244_4 : 1; // 0x244(0x01)
	char bAbsoluteLocation : 1; // 0x244(0x01)
	char bAbsoluteRotation : 1; // 0x244(0x01)
	char bAbsoluteScale : 1; // 0x244(0x01)
	char bVisible : 1; // 0x245(0x01)
	char bHiddenInGame : 1; // 0x245(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x245(0x01)
	char *131f3529c6 : 1; // 0x245(0x01)
	char bUseAttachParentBound : 1; // 0x245(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x245(0x01)
	char pad_245_6 : 2; // 0x245(0x01)
	char pad_246[0x2a]; // 0x246(0x2a)
	char bAbsoluteTranslation : 1; // 0x270(0x01)
	char pad_270_1 : 7; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	struct APhysicsVolume* PhysicsVolume; // 0x274(0x08)
	char pad_27C[0x64]; // 0x27c(0x64)
	enum class *1d65b135dd DetailMode; // 0x2e0(0x01)
	char pad_2E1[0x2f]; // 0x2e1(0x2f)
	struct FVector RelativeTranslation; // 0x310(0x0c)
	char pad_31C[0x4]; // 0x31c(0x04)
	SetProperty *815e178173; // 0x320(0x50)
	char pad_370[0x1]; // 0x370(0x01)
	enum class EComponentMobility Mobility; // 0x371(0x01)
	char pad_372[0x2]; // 0x372(0x02)
	struct FRotator RelativeRotation; // 0x374(0x0c)
	struct FVector RelativeScale3D; // 0x380(0x0c)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct FName *055f551900; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)
	struct USceneComponent* AttachParent; // 0x3a0(0x08)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x3a8(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate; // 0x3b8(0x10)
	char pad_3C8[0x108]; // 0x3c8(0x108)

	void K2_AddWorldTransform(); // Function Engine.SceneComponent.K2_AddWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b3984
	void K2_AddLocalRotation(); // Function Engine.SceneComponent.K2_AddLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b2e38
	void K2_AddWorldOffset(); // Function Engine.SceneComponent.K2_AddWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b35d4
	void *24d4692696(); // Function Engine.SceneComponent.*24d4692696 // Final|Native|Public|BlueprintCallable // @ game+0x67c0340
	void K2_AddWorldRotation(); // Function Engine.SceneComponent.K2_AddWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b37ac
	void K2_SetRelativeLocation(); // Function Engine.SceneComponent.K2_SetRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b6414
	void DetachFromParent(); // Function Engine.SceneComponent.DetachFromParent // Native|Public|BlueprintCallable // @ game+0x67a7f64
	void K2_SetWorldRotation(); // Function Engine.SceneComponent.K2_SetWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b701c
	void *a4c0c6dacf(); // Function Engine.SceneComponent.*a4c0c6dacf // Final|Native|Public|BlueprintCallable // @ game+0x67b9974
	void K2_SetWorldTransform(); // Function Engine.SceneComponent.K2_SetWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b71f4
	void *c95aa311e1(); // Function Engine.SceneComponent.*c95aa311e1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c33d4
	void *64c6a50e0e(); // Function Engine.SceneComponent.*64c6a50e0e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1354
	void OnRep_Visibility(); // Function Engine.SceneComponent.OnRep_Visibility // Final|Native|Private // @ game+0x67b8140
	void K2_AddLocalOffset(); // Function Engine.SceneComponent.K2_AddLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b2c60
	void *1ab06a479c(); // Function Engine.SceneComponent.*1ab06a479c // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac224
	void *8ecb931576(); // Function Engine.SceneComponent.*8ecb931576 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67abd04
	void *e94c620b17(); // Function Engine.SceneComponent.*e94c620b17 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a8198
	void K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4ea4
	void *71b355cc39(); // Function Engine.SceneComponent.*71b355cc39 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc8c518
	void *c7f3749d3f(); // Function Engine.SceneComponent.*c7f3749d3f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1e9c
	void *47f11c6aa4(); // Function Engine.SceneComponent.*47f11c6aa4 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67abda4
	void *7b9f3977eb(); // Function Engine.SceneComponent.*7b9f3977eb // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4e60
	void K2_AddLocalTransform(); // Function Engine.SceneComponent.K2_AddLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b3010
	void *d6237c56a2(); // Function Engine.SceneComponent.*d6237c56a2 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b6dec
	void *fdc9f4ce48(); // Function Engine.SceneComponent.*fdc9f4ce48 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0a7c
	void *c983529eeb(); // Function Engine.SceneComponent.*c983529eeb // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c1cb0
	void *fadfce2f5c(); // Function Engine.SceneComponent.*fadfce2f5c // Final|Native|Public|BlueprintCallable // @ game+0x67c37e0
	void *fe65a776a5(); // Function Engine.SceneComponent.*fe65a776a5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4ddc
	void SetVisibility(); // Function Engine.SceneComponent.SetVisibility // Final|Native|Public|BlueprintCallable // @ game+0xc58c14
	void *e51a15ac42(); // Function Engine.SceneComponent.*e51a15ac42 // Final|Native|Public|BlueprintCallable // @ game+0x67c03dc
	void K2_SetRelativeRotation(); // Function Engine.SceneComponent.K2_SetRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b6810
	void *a0c587c4d6(); // Function Engine.SceneComponent.*a0c587c4d6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67af164
	void *a17d5e84b8(); // Function Engine.SceneComponent.*a17d5e84b8 // Final|Native|Public|BlueprintCallable // @ game+0x6f2d54
	void *f0cbf81c2a(); // Function Engine.SceneComponent.*f0cbf81c2a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b65e0
	void K2_AddRelativeLocation(); // Function Engine.SceneComponent.K2_AddRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b323c
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren // Final|Native|Private // @ game+0xba31b4
	void *330134b8c2(); // Function Engine.SceneComponent.*330134b8c2 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0020
	void *cb975ed8ba(); // Function Engine.SceneComponent.*cb975ed8ba // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67acc10
	void K2_SetRelativeTransform(); // Function Engine.SceneComponent.K2_SetRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b69e8
	void *5b447b62b7(); // Function Engine.SceneComponent.*5b447b62b7 // Final|Native|Public|BlueprintCallable // @ game+0x67bc550
	void *a27f6d4764(); // Function Engine.SceneComponent.*a27f6d4764 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b01e8
	void *287e49cc7e(); // Function Engine.SceneComponent.*287e49cc7e // Final|Native|Public|BlueprintCallable // @ game+0x67c0068
	void *6f297235ba(); // Function Engine.SceneComponent.*6f297235ba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67afe18
	void IsVisible(); // Function Engine.SceneComponent.IsVisible // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1f90
	void *bb79d1adbb(); // Function Engine.SceneComponent.*bb79d1adbb // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67afaac
	void K2_AttachTo(); // Function Engine.SceneComponent.K2_AttachTo // Final|Native|Public|BlueprintCallable // @ game+0x67b3eb0
	void K2_SetWorldLocation(); // Function Engine.SceneComponent.K2_SetWorldLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b6c14
	void *709ad87786(); // Function Engine.SceneComponent.*709ad87786 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aae98
	void *716c958ce4(); // Function Engine.SceneComponent.*716c958ce4 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0408
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent // Final|Native|Private // @ game+0xcc61b0
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName // Final|Native|Private // @ game+0xcc61b0
	void K2_AddRelativeRotation(); // Function Engine.SceneComponent.K2_AddRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b3408
	void *77cf8156db(); // Function Engine.SceneComponent.*77cf8156db // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0350
	void *c786340f98(); // Function Engine.SceneComponent.*c786340f98 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aafb4
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // Final|Native|Private // @ game+0xc5c464
	void *8686c19d5c(); // Function Engine.SceneComponent.*8686c19d5c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b008c
	void *e13072354b(); // Function Engine.SceneComponent.*e13072354b // Final|Native|Public|BlueprintCallable // @ game+0x67b4250
	void ToggleVisibility(); // Function Engine.SceneComponent.ToggleVisibility // Final|Native|Public|BlueprintCallable // @ game+0x67c4558
	void *45081e78dc(); // Function Engine.SceneComponent.*45081e78dc // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b02a0
	void *4883fee90d(); // Function Engine.SceneComponent.*4883fee90d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4d98
};

// Class Engine.PrimitiveComponent
// Size: 0xa00 (Inherited: 0x4d0)
struct UPrimitiveComponent : USceneComponent {
	char pad_4D0[0x8]; // 0x4d0(0x08)
	float MinDrawDistance; // 0x4d8(0x04)
	float LDMaxDrawDistance; // 0x4dc(0x04)
	float CachedMaxDrawDistance; // 0x4e0(0x04)
	enum class *3c659ab94c *7512e3d028; // 0x4e4(0x01)
	enum class *3c659ab94c *d9fcd9b4bb; // 0x4e5(0x01)
	char pad_4E6[0x2]; // 0x4e6(0x02)
	char pad_4E8_0 : 3; // 0x4e8(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x4e8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4e8(0x01)
	char bMultiBodyOverlap : 1; // 0x4e8(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x4e8(0x01)
	char bTraceComplexOnMove : 1; // 0x4e8(0x01)
	char bDisableForceFromCharacter : 1; // 0x4e9(0x01)
	char bReturnMaterialOnMove : 1; // 0x4e9(0x01)
	char *3e4d34552d : 1; // 0x4e9(0x01)
	char bAllowCullDistanceVolume : 1; // 0x4e9(0x01)
	char bImportantMesh : 1; // 0x4e9(0x01)
	char bOverrideCullingDistances : 1; // 0x4e9(0x01)
	char pad_4E9_6 : 2; // 0x4e9(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	float HLODScreenSize; // 0x4ec(0x04)
	char *2f091bbd0e : 1; // 0x4f0(0x01)
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
	char *afd92d8969 : 1; // 0x4f1(0x01)
	char bForceMipStreaming : 1; // 0x4f1(0x01)
	char *4c581fbba9 : 1; // 0x4f1(0x01)
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
	char *27b0806be5 : 1; // 0x4f4(0x01)
	char *6f3b773115 : 1; // 0x4f4(0x01)
	char *b11801b90d : 1; // 0x4f4(0x01)
	char bRenderCustomDepth : 1; // 0x4f4(0x01)
	char pad_4F4_7 : 1; // 0x4f4(0x01)
	char pad_4F5_0 : 7; // 0x4f5(0x01)
	char *668636af81 : 1; // 0x4f5(0x01)
	char *b3a3eee86b : 1; // 0x4f6(0x01)
	char *07830a14a6 : 1; // 0x4f6(0x01)
	char pad_4F6_2 : 6; // 0x4f6(0x01)
	char pad_4F7[0x1]; // 0x4f7(0x01)
	enum class EDecalChannel DecalChannel; // 0x4f8(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x4f9(0x01)
	struct FLightingChannels LightingChannels; // 0x4fa(0x03)
	enum class *d315e71b47 IndirectLightingCacheQuality; // 0x4fd(0x01)
	bool CustomDepthStencilValue; // 0x4fe(0x01)
	enum class *6e131cfc7f CustomDepthStencilWriteMask; // 0x4ff(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x500(0x10)
	int32 TranslucencySortPriority; // 0x510(0x04)
	int32 *6862844184; // 0x514(0x04)
	char pad_518[0x4]; // 0x518(0x04)
	float LpvBiasMultiplier; // 0x51c(0x04)
	struct FBodyInstance BodyInstance; // 0x520(0x230)
	char pad_750[0x8]; // 0x750(0x08)
	enum class EHasCustomNavigableGeometry *9a13a32dd1; // 0x758(0x01)
	char pad_759[0x3b]; // 0x759(0x3b)
	float BoundsScale; // 0x794(0x04)
	float *aa675c3c9f; // 0x798(0x04)
	float *8aba3be418; // 0x79c(0x04)
	float *69906a8560; // 0x7a0(0x04)
	enum class *ed39c8987e CanBeCharacterBase; // 0x7a4(0x01)
	char pad_7A5[0x1]; // 0x7a5(0x01)
	enum class *ed39c8987e CanCharacterStepUpOn; // 0x7a6(0x01)
	char pad_7A7[0x1]; // 0x7a7(0x01)
	struct TArray<struct AActor*> *5559023e99; // 0x7a8(0x10)
	struct TArray<struct UPrimitiveComponent*> *34f682ee35; // 0x7b8(0x10)
	char pad_7C8[0xb8]; // 0x7c8(0xb8)
	struct FMulticastDelegate OnComponentHit; // 0x880(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x890(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x8a0(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x8b0(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x8c0(0x10)
	char pad_8D0[0x10]; // 0x8d0(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x8e0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8f0(0x10)
	struct FMulticastDelegate OnClicked; // 0x900(0x10)
	struct FMulticastDelegate OnReleased; // 0x910(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x920(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x930(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x940(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x950(0x10)
	char pad_960[0x28]; // 0x960(0x28)
	struct UPrimitiveComponent* *afbfc200cf; // 0x988(0x08)
	struct UPrimitiveComponent* *c423c7f1c7; // 0x990(0x08)
	struct F*1d83c9bd93 *605bfc3d64; // 0x998(0x58)
	char pad_9F0[0x10]; // 0x9f0(0x10)

	void AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a20d0
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae850
	void *3f4951ae21(); // Function Engine.PrimitiveComponent.*3f4951ae21 // Native|Public|BlueprintCallable // @ game+0x67c0814
	void *aa442ff688(); // Function Engine.PrimitiveComponent.*aa442ff688 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b181c
	void *2acabdc4bc(); // Function Engine.PrimitiveComponent.*2acabdc4bc // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a2e70
	void *dfb097147a(); // Function Engine.PrimitiveComponent.*dfb097147a // Native|Public|BlueprintCallable // @ game+0x43ea88
	void *1d5b572e97(); // Function Engine.PrimitiveComponent.*1d5b572e97 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b51cc
	void *58360a298b(); // Function Engine.PrimitiveComponent.*58360a298b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1bb4
	void CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // Native|Public|BlueprintCallable // @ game+0x67a7778
	void *155e776c01(); // Function Engine.PrimitiveComponent.*155e776c01 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac0bc
	void *776b623f1e(); // Function Engine.PrimitiveComponent.*776b623f1e // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a3044
	void *401e8be8c9(); // Function Engine.PrimitiveComponent.*401e8be8c9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b51fc
	void *6c17800325(); // Function Engine.PrimitiveComponent.*6c17800325 // Native|Public|BlueprintCallable // @ game+0x67be96c
	void *1060cf1432(); // Function Engine.PrimitiveComponent.*1060cf1432 // Final|Native|Public|BlueprintCallable // @ game+0x67bf1a0
	void *733d8ffdab(); // Function Engine.PrimitiveComponent.*733d8ffdab // Native|Public|BlueprintCallable // @ game+0x67c14b8
	void *c09d067d0f(); // Function Engine.PrimitiveComponent.*c09d067d0f // Final|Native|Public|BlueprintCallable // @ game+0x67c1d54
	void *dfc478eaef(); // Function Engine.PrimitiveComponent.*dfc478eaef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0e50
	void *d70adb1efd(); // Function Engine.PrimitiveComponent.*d70adb1efd // Native|Public|BlueprintCallable // @ game+0x67c0a84
	void K2_LineTraceComponent(); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b5230
	void *8f296e8ac0(); // Function Engine.PrimitiveComponent.*8f296e8ac0 // Final|Native|Public|BlueprintCallable // @ game+0x67c135c
	void *3579dd87c5(); // Function Engine.PrimitiveComponent.*3579dd87c5 // Native|Public|BlueprintCallable // @ game+0x67b132c
	void *c513e9cfca(); // Function Engine.PrimitiveComponent.*c513e9cfca // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae9e0
	void CreateAndSetMaterialInstanceDynamic(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // Native|Public|BlueprintCallable // @ game+0x67a7688
	void SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // Native|Public|BlueprintCallable // @ game+0x5a7f180
	void *c602cc5bf9(); // Function Engine.PrimitiveComponent.*c602cc5bf9 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae93c
	void *6f5a420568(); // Function Engine.PrimitiveComponent.*6f5a420568 // Final|Native|Public|BlueprintCallable // @ game+0x67c1e7c
	void *4179761c58(); // Function Engine.PrimitiveComponent.*4179761c58 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a3c7c
	void SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // Native|Public|BlueprintCallable // @ game+0xc3d1c8
	void GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67afc30
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // Final|Native|Public|BlueprintCallable // @ game+0x67a7578
	void *c4ebdc3c8f(); // Function Engine.PrimitiveComponent.*c4ebdc3c8f // Final|Native|Public|BlueprintCallable // @ game+0x67b0f34
	void AddTorque(); // Function Engine.PrimitiveComponent.AddTorque // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a3504
	void *5b3c874cbe(); // Function Engine.PrimitiveComponent.*5b3c874cbe // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67bcd88
	void *baff305a0b(); // Function Engine.PrimitiveComponent.*baff305a0b // Native|Public|BlueprintCallable // @ game+0x67bea00
	void *b24da2aba6(); // Function Engine.PrimitiveComponent.*b24da2aba6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67af19c
	void *6d15f9d7fc(); // Function Engine.PrimitiveComponent.*6d15f9d7fc // Final|Native|Public|BlueprintCallable // @ game+0x67a42cc
	void *bba26f131c(); // Function Engine.PrimitiveComponent.*bba26f131c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1c54
	void SetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x812984
	void SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // Final|Native|Public|BlueprintCallable // @ game+0x67c154c
	void *10c86d98d5(); // Function Engine.PrimitiveComponent.*10c86d98d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67af2d0
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // Native|Public|BlueprintCallable // @ game+0x67a1940
	void *fc3da87902(); // Function Engine.PrimitiveComponent.*fc3da87902 // Native|Public|BlueprintCallable // @ game+0x67c1170
	void *1e088aa233(); // Function Engine.PrimitiveComponent.*1e088aa233 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67c3300
	void *9d203d4e3a(); // Function Engine.PrimitiveComponent.*9d203d4e3a // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ad8a8
	void *7ab8b110bc(); // Function Engine.PrimitiveComponent.*7ab8b110bc // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae71c
	void *cefd2a89e7(); // Function Engine.PrimitiveComponent.*cefd2a89e7 // Native|Public|BlueprintCallable // @ game+0x67c0bb0
	void *4135b69ecb(); // Function Engine.PrimitiveComponent.*4135b69ecb // Final|Native|Public|BlueprintCallable // @ game+0x67c1de8
	void AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a16bc
	void *065d5e11f8(); // Function Engine.PrimitiveComponent.*065d5e11f8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67abba0
	void *e06446eb04(); // Function Engine.PrimitiveComponent.*e06446eb04 // Final|Native|Public|BlueprintCallable // @ game+0x67b93d0
	void *f6986ba874(); // Function Engine.PrimitiveComponent.*f6986ba874 // Final|Native|Public|BlueprintCallable // @ game+0x67c286c
	void *285b57600a(); // Function Engine.PrimitiveComponent.*285b57600a // Native|Public|BlueprintCallable // @ game+0x67c2b10
	void *5cdc853a89(); // Function Engine.PrimitiveComponent.*5cdc853a89 // Final|Native|Public|BlueprintCallable // @ game+0x67bf230
	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // Native|Public|BlueprintCallable // @ game+0x67be8d4
	void AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a2770
	void *b9e13958df(); // Function Engine.PrimitiveComponent.*b9e13958df // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac034
	void SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bce80
	void *29c20efb0b(); // Function Engine.PrimitiveComponent.*29c20efb0b // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aaf38
	void *056cc90593(); // Function Engine.PrimitiveComponent.*056cc90593 // Final|Native|Public|BlueprintCallable // @ game+0x67be438
	void SetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xbc6ed4
	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // Native|Public|BlueprintCallable // @ game+0x67bd018
	void AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a2630
	void *58f998cca1(); // Function Engine.PrimitiveComponent.*58f998cca1 // Native|Public|BlueprintCallable // @ game+0x67bea98
	void *6ad19621d9(); // Function Engine.PrimitiveComponent.*6ad19621d9 // Final|Native|Public|BlueprintCallable // @ game+0x67c1208
	void *6721a3eb8a(); // Function Engine.PrimitiveComponent.*6721a3eb8a // Final|Native|Public|BlueprintCallable // @ game+0x67a42e8
	void *601c402444(); // Function Engine.PrimitiveComponent.*601c402444 // Native|Public|BlueprintCallable // @ game+0x67c4858
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67af670
	void AddForce(); // Function Engine.PrimitiveComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a1f90
	void *1f028ad67d(); // Function Engine.PrimitiveComponent.*1f028ad67d // Final|Native|Public|BlueprintCallable // @ game+0x67ac084
	void *75116bc348(); // Function Engine.PrimitiveComponent.*75116bc348 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b9e50
	void *46193842e9(); // Function Engine.PrimitiveComponent.*46193842e9 // Final|Native|Public|BlueprintCallable // @ game+0x67a7600
	void *10f75e50ac(); // Function Engine.PrimitiveComponent.*10f75e50ac // Final|Native|Public|BlueprintCallable // @ game+0x67be1e0
	void *e3b0f43f9e(); // Function Engine.PrimitiveComponent.*e3b0f43f9e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67afce0
	void *36ad2d15e7(); // Function Engine.PrimitiveComponent.*36ad2d15e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67abed8
	void *fec7ca08f4(); // Function Engine.PrimitiveComponent.*fec7ca08f4 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae87c
	void *0e38375bb9(); // Function Engine.PrimitiveComponent.*0e38375bb9 // Final|Native|Public|BlueprintCallable // @ game+0x67b1014
	void *23f39ad152(); // Function Engine.PrimitiveComponent.*23f39ad152 // Native|Public|BlueprintCallable // @ game+0x67bf4e0
	void AddForceAtLocationLocal(); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a221c
	void CreateDynamicMaterialInstance(); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x67a7868
	void *923a62a1b9(); // Function Engine.PrimitiveComponent.*923a62a1b9 // Final|Native|Public|BlueprintCallable // @ game+0x67bf108
	void GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x8f5264
	void *41428e55af(); // Function Engine.PrimitiveComponent.*41428e55af // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b51a0
	void *9f5fbe7730(); // Function Engine.PrimitiveComponent.*9f5fbe7730 // Native|Public|BlueprintCallable // @ game+0x67bef70
	void SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67be564
	void *95f3208c0a(); // Function Engine.PrimitiveComponent.*95f3208c0a // Native|Public|BlueprintCallable // @ game+0x67bcf80
	void *926dc117b6(); // Function Engine.PrimitiveComponent.*926dc117b6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac05c
	void *d7c852a7d5(); // Function Engine.PrimitiveComponent.*d7c852a7d5 // Native|Public|BlueprintCallable // @ game+0x67b7dec
	void GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67af478
	void *b76664dec1(); // Function Engine.PrimitiveComponent.*b76664dec1 // Native|Public|BlueprintCallable // @ game+0x67c4840
	void *a306d03f54(); // Function Engine.PrimitiveComponent.*a306d03f54 // Native|Public|BlueprintCallable // @ game+0xbf0050
};

// Class Engine.MeshComponent
// Size: 0xb00 (Inherited: 0xa00)
struct UMeshComponent : UPrimitiveComponent {
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x9f8(0x10)
	char pad_A10[0xf0]; // 0xa10(0xf0)

	void *dea9e46c09(); // Function Engine.MeshComponent.*dea9e46c09 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aeb2c
	void *2f56f6caf5(); // Function Engine.MeshComponent.*2f56f6caf5 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c2e80
	void *86f42457e0(); // Function Engine.MeshComponent.*86f42457e0 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b19cc
	void *e340f5fc1d(); // Function Engine.MeshComponent.*e340f5fc1d // Final|Native|Public|BlueprintCallable // @ game+0x90cea8
	void *514a111da7(); // Function Engine.MeshComponent.*514a111da7 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aebb8
	void *28b95d47eb(); // Function Engine.MeshComponent.*28b95d47eb // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aea84
};

// Class Engine.StaticMeshComponent
// Size: 0xba0 (Inherited: 0xb00)
struct UStaticMeshComponent : UMeshComponent {
	int32 ForcedLodModel; // 0xb00(0x04)
	int32 *66a6cd3343; // 0xb04(0x04)
	bool bOverrideMinLOD; // 0xb08(0x01)
	char pad_B09[0x3]; // 0xb09(0x03)
	int32 MinLOD; // 0xb0c(0x04)
	struct UStaticMesh* StaticMesh; // 0xb10(0x08)
	bool bOverrideWireframeColor; // 0xb18(0x01)
	char pad_B19[0x3]; // 0xb19(0x03)
	struct FColor WireframeColorOverride; // 0xb1c(0x04)
	struct FLinearColor PerInstanceCustomData; // 0xb20(0x10)
	char *a28fc20375 : 1; // 0xb30(0x01)
	char *a6e890a6e8 : 1; // 0xb30(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0xb30(0x01)
	char *72ad19ace5 : 1; // 0xb30(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0xb30(0x01)
	char bOverrideLightMapRes : 1; // 0xb30(0x01)
	char pad_B30_6 : 2; // 0xb30(0x01)
	char pad_B31[0x3]; // 0xb31(0x03)
	int32 OverriddenLightMapRes; // 0xb34(0x04)
	char bCastDistanceFieldIndirectShadow : 1; // 0xb38(0x01)
	char pad_B38_1 : 7; // 0xb38(0x01)
	char pad_B39[0x3]; // 0xb39(0x03)
	float DistanceFieldIndirectShadowMinVisibility; // 0xb3c(0x04)
	float StreamingDistanceMultiplier; // 0xb40(0x04)
	int32 *0f0f75dabf; // 0xb44(0x04)
	char *9a59516d8b : 1; // 0xb48(0x01)
	char pad_B48_1 : 7; // 0xb48(0x01)
	char pad_B49[0x7]; // 0xb49(0x07)
	struct TArray<struct FGuid> IrrelevantLights; // 0xb50(0x10)
	struct TArray<struct F*e52484916f> *6f651a8a78; // 0xb60(0x10)
	struct TArray<struct F*2680edbad5> *65df47e5bb; // 0xb70(0x10)
	bool *5b1ebb8f11; // 0xb80(0x01)
	char pad_B81[0x3]; // 0xb81(0x03)
	struct F*553842a41b LightmassSettings; // 0xb84(0x18)
	char pad_B9C[0x4]; // 0xb9c(0x04)

	void SetStaticMesh(); // Function Engine.StaticMeshComponent.SetStaticMesh // Native|Public|BlueprintCallable // @ game+0x6257b40
	void *34b9302e3c(); // Function Engine.StaticMeshComponent.*34b9302e3c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae748
	void OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // Final|Native|Public // @ game+0x67b8098
	void *488bd86f9f(); // Function Engine.StaticMeshComponent.*488bd86f9f // Final|Native|Public|BlueprintCallable // @ game+0x67bf8a0
};

// Class Engine.SkinnedMeshComponent
// Size: 0xca0 (Inherited: 0xb00)
struct USkinnedMeshComponent : UMeshComponent {
	struct USkeletalMesh* SkeletalMesh; // 0xb00(0x08)
	struct USkinnedMeshComponent* MasterPoseComponent; // 0xb08(0x08)
	char pad_B10[0x60]; // 0xb10(0x60)
	char bUseBoundsFromMasterPoseComponent : 1; // 0xb70(0x01)
	char pad_B70_1 : 7; // 0xb70(0x01)
	char pad_B71[0x7]; // 0xb71(0x07)
	struct TArray<struct FBoxSphereBounds> *f30ef9aca0; // 0xb78(0x10)
	char pad_B88[0x20]; // 0xb88(0x20)
	struct UPhysicsAsset* PhysicsAssetOverride; // 0xba8(0x08)
	int32 ForcedLodModel; // 0xbb0(0x04)
	int32 MinLodModel; // 0xbb4(0x04)
	char pad_BB8[0x10]; // 0xbb8(0x10)
	struct TArray<struct F*cbe45bb4a6> LODInfo; // 0xbc8(0x10)
	float StreamingDistanceMultiplier; // 0xbd8(0x04)
	struct FColor WireframeColor; // 0xbdc(0x04)
	char *9e69394ecc : 1; // 0xbe0(0x01)
	char *9903a4c840 : 1; // 0xbe0(0x01)
	char bDisableMorphTarget : 1; // 0xbe0(0x01)
	char *355eef0bc4 : 1; // 0xbe0(0x01)
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
	char *4589ff7cf8 : 1; // 0xc00(0x01)
	char *96a8417c7f : 1; // 0xc00(0x01)
	char *f4e5e3198a : 1; // 0xc00(0x01)
	char pad_C00_3 : 5; // 0xc00(0x01)
	char pad_C01[0x3]; // 0xc01(0x03)
	bool *0ca1f88bf0; // 0xc04(0x01)
	char pad_C05[0x3]; // 0xc05(0x03)
	char bCastCapsuleDirectShadow : 1; // 0xc08(0x01)
	char bCastCapsuleIndirectShadow : 1; // 0xc08(0x01)
	char pad_C08_2 : 6; // 0xc08(0x01)
	char pad_C09[0x3]; // 0xc09(0x03)
	char bRenderStatic : 1; // 0xc0c(0x01)
	char pad_C0C_1 : 7; // 0xc0c(0x01)
	char pad_C0D[0x3]; // 0xc0d(0x03)
	float CapsuleIndirectShadowMinVisibility; // 0xc10(0x04)
	char *f4e58c294b : 1; // 0xc14(0x01)
	char pad_C14_1 : 7; // 0xc14(0x01)
	char pad_C15[0xf]; // 0xc15(0x0f)
	struct FBoxSphereBounds *cd78e2e3f1; // 0xc24(0x1c)
	bool *51163366b3; // 0xc40(0x01)
	bool bEnableUpdateRateOptimizations; // 0xc41(0x01)
	bool bDisplayDebugUpdateRateOptimizations; // 0xc42(0x01)
	char pad_C43[0x4e]; // 0xc43(0x4e)
	bool *6ee4d78242; // 0xc91(0x01)
	bool *7c960d48b8; // 0xc92(0x01)
	char pad_C93[0xd]; // 0xc93(0x0d)

	void *6a5f21ad4e(); // Function Engine.SkinnedMeshComponent.*6a5f21ad4e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67eab68
	void *3c865e7779(); // Function Engine.SkinnedMeshComponent.*3c865e7779 // Final|Native|Public|BlueprintCallable // @ game+0x681de04
	void *fc7ead4db2(); // Function Engine.SkinnedMeshComponent.*fc7ead4db2 // Final|Native|Public|BlueprintCallable // @ game+0x680efc0
	void *10d664b446(); // Function Engine.SkinnedMeshComponent.*10d664b446 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67df240
	void *71a2310595(); // Function Engine.SkinnedMeshComponent.*71a2310595 // Final|Native|Public|BlueprintCallable // @ game+0x6808990
	void *67471412a8(); // Function Engine.SkinnedMeshComponent.*67471412a8 // Final|Native|Public|BlueprintCallable // @ game+0x6808430
	void *e1f9ca9449(); // Function Engine.SkinnedMeshComponent.*e1f9ca9449 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e84fc
	void SetSkeletalMesh(); // Function Engine.SkinnedMeshComponent.SetSkeletalMesh // Native|Public|BlueprintCallable // @ game+0x68113d8
	void *2400ce1346(); // Function Engine.SkinnedMeshComponent.*2400ce1346 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e297c
	void *a0035d9d4e(); // Function Engine.SkinnedMeshComponent.*a0035d9d4e // Final|Native|Public|BlueprintCallable // @ game+0x67f0830
	void GetBoneIndex(); // Function Engine.SkinnedMeshComponent.GetBoneIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e26c0
	void *0838ed640a(); // Function Engine.SkinnedMeshComponent.*0838ed640a // Final|Native|Public|BlueprintCallable // @ game+0x6810e28
	void *6c2f9d9de6(); // Function Engine.SkinnedMeshComponent.*6c2f9d9de6 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x681d7f8
	void *5ee5688cd0(); // Function Engine.SkinnedMeshComponent.*5ee5688cd0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67cf0d8
	void *b6a1e57216(); // Function Engine.SkinnedMeshComponent.*b6a1e57216 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e8178
	void *fd2b1bbf5b(); // Function Engine.SkinnedMeshComponent.*fd2b1bbf5b // Final|Native|Public|BlueprintCallable // @ game+0x680c288
	void *c47c945cda(); // Function Engine.SkinnedMeshComponent.*c47c945cda // Final|Native|Public|BlueprintCallable // @ game+0x680ee90
	void *b41c79226e(); // Function Engine.SkinnedMeshComponent.*b41c79226e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68146dc
	void *c8ca57db8d(); // Function Engine.SkinnedMeshComponent.*c8ca57db8d // Final|Native|Public|BlueprintCallable // @ game+0x67ef36c
	void SetSkinWeightOverride(); // Function Engine.SkinnedMeshComponent.SetSkinWeightOverride // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x681154c
	void *96c3ec4c09(); // Function Engine.SkinnedMeshComponent.*96c3ec4c09 // Final|Native|Public|BlueprintCallable // @ game+0x67d6614
	void *feffa71d19(); // Function Engine.SkinnedMeshComponent.*feffa71d19 // Native|Public|BlueprintCallable // @ game+0x680fef8
	void *ceffae9960(); // Function Engine.SkinnedMeshComponent.*ceffae9960 // Final|Native|Public|BlueprintCallable // @ game+0x67d62ac
	void *727d19e44f(); // Function Engine.SkinnedMeshComponent.*727d19e44f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x681dbcc
	void *a7e2c33601(); // Function Engine.SkinnedMeshComponent.*a7e2c33601 // Final|Native|Public|BlueprintCallable // @ game+0x68088e0
};

// Class Engine.SkeletalMeshComponent
// Size: 0x1190 (Inherited: 0xca0)
struct USkeletalMeshComponent : USkinnedMeshComponent {
	struct UAnimBlueprintGeneratedClass* AnimBlueprintGeneratedClass; // 0xca0(0x08)
	struct UClass* AnimClass; // 0xca8(0x08)
	struct UAnimInstance* AnimScriptInstance; // 0xcb0(0x08)
	struct TArray<struct UAnimInstance*> *b1a0aa7521; // 0xcb8(0x10)
	struct UAnimInstance* *08eabd4801; // 0xcc8(0x08)
	struct F*030036a724 AnimationData; // 0xcd0(0x18)
	char pad_CE8[0x30]; // 0xce8(0x30)
	struct TArray<struct FTransform> *58c21de2e0; // 0xd18(0x10)
	struct TArray<struct FTransform> *545370af98; // 0xd28(0x10)
	char pad_D38[0x20]; // 0xd38(0x20)
	float GlobalAnimRateScale; // 0xd58(0x04)
	enum class EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0xd5c(0x01)
	enum class *ab2c643b8f PhysicsTransformUpdateMode; // 0xd5d(0x01)
	char pad_D5E[0x1]; // 0xd5e(0x01)
	enum class EAnimationMode AnimationMode; // 0xd5f(0x01)
	char pad_D60[0x4]; // 0xd60(0x04)
	char pad_D64_0 : 1; // 0xd64(0x01)
	char *3383585ca2 : 1; // 0xd64(0x01)
	char pad_D64_2 : 1; // 0xd64(0x01)
	char *f16a7a3dd7 : 1; // 0xd64(0x01)
	char pad_D64_4 : 2; // 0xd64(0x01)
	char bEnablePhysicsOnDedicatedServer : 1; // 0xd64(0x01)
	char bUpdateJointsFromAnimation : 1; // 0xd64(0x01)
	char bDisableClothSimulation : 1; // 0xd65(0x01)
	char pad_D65_1 : 2; // 0xd65(0x01)
	char bCollideWithEnvironment : 1; // 0xd65(0x01)
	char bCollideWithAttachedChildren : 1; // 0xd65(0x01)
	char bLocalSpaceSimulation : 1; // 0xd65(0x01)
	char *be67cfdb15 : 1; // 0xd65(0x01)
	char bResetAfterTeleport : 1; // 0xd65(0x01)
	char pad_D66_0 : 1; // 0xd66(0x01)
	char bNoSkeletonUpdate : 1; // 0xd66(0x01)
	char bPauseAnims : 1; // 0xd66(0x01)
	char *39749c2751 : 1; // 0xd66(0x01)
	char bEnablePerPolyCollision : 1; // 0xd66(0x01)
	char *2eab519db0 : 1; // 0xd66(0x01)
	char *e494fcf5fb : 1; // 0xd66(0x01)
	char *4035845260 : 1; // 0xd66(0x01)
	char *c6d7dbb4f5 : 1; // 0xd67(0x01)
	char *ac6a357b1a : 1; // 0xd67(0x01)
	char *36b974a93b : 1; // 0xd67(0x01)
	char *6821fc8c10 : 1; // 0xd67(0x01)
	char bIncludeComponentLocationIntoBounds : 1; // 0xd67(0x01)
	char *602b32a36f : 1; // 0xd67(0x01)
	char pad_D67_6 : 2; // 0xd67(0x01)
	char *660210df46 : 1; // 0xd68(0x01)
	char pad_D68_1 : 7; // 0xd68(0x01)
	char pad_D69_0 : 2; // 0xd69(0x01)
	char bDefaultLooping : 1; // 0xd69(0x01)
	char bDefaultPlaying : 1; // 0xd69(0x01)
	char pad_D69_4 : 4; // 0xd69(0x01)
	uint16 *2fe5eefb66; // 0xd6a(0x02)
	float ClothBlendWeight; // 0xd6c(0x04)
	struct FVector *a41d195774; // 0xd70(0x0c)
	char pad_D7C[0x4]; // 0xd7c(0x04)
	struct UBodySetup* BodySetup; // 0xd80(0x08)
	float TeleportDistanceThreshold; // 0xd88(0x04)
	float TeleportRotationThreshold; // 0xd8c(0x04)
	struct FVector *b77df095c1; // 0xd90(0x0c)
	char pad_D9C[0x4]; // 0xd9c(0x04)
	struct FMulticastDelegate OnConstraintBroken; // 0xda0(0x10)
	char pad_DB0[0xe0]; // 0xdb0(0xe0)
	struct UClass* *b14b3c8b7b; // 0xe90(0x08)
	char pad_E98[0x1e8]; // 0xe98(0x1e8)
	struct UAnimSequence* SequenceToPlay; // 0x1080(0x08)
	struct UAnimationAsset* AnimToPlay; // 0x1088(0x08)
	float DefaultPosition; // 0x1090(0x04)
	float DefaultPlayRate; // 0x1094(0x04)
	uint32 *5f8fe91e99; // 0x1098(0x04)
	float *3993dbc972; // 0x109c(0x04)
	char pad_10A0[0xf0]; // 0x10a0(0xf0)

	void *a9c661b6a0(); // Function Engine.SkeletalMeshComponent.*a9c661b6a0 // Final|Native|Public|BlueprintCallable // @ game+0x6808fb0
	void *38a8d94d2a(); // Function Engine.SkeletalMeshComponent.*38a8d94d2a // Final|Native|Public|BlueprintCallable // @ game+0x67df848
	void *d6b31f7555(); // Function Engine.SkeletalMeshComponent.*d6b31f7555 // Final|Native|Public|BlueprintCallable // @ game+0x7e8790
	void *5f9211f1eb(); // Function Engine.SkeletalMeshComponent.*5f9211f1eb // Final|Native|Public|BlueprintCallable // @ game+0x67e0c00
	void *78951d1396(); // Function Engine.SkeletalMeshComponent.*78951d1396 // Final|Native|Public|BlueprintCallable // @ game+0x67e2fdc
	void *a81e6d31fe(); // Function Engine.SkeletalMeshComponent.*a81e6d31fe // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6805388
	void *1d127e5a31(); // Function Engine.SkeletalMeshComponent.*1d127e5a31 // Final|Native|Public|BlueprintCallable // @ game+0x680552c
	void *057fda6034(); // Function Engine.SkeletalMeshComponent.*057fda6034 // Final|Native|Public|BlueprintCallable // @ game+0x680f28c
	void Stop(); // Function Engine.SkeletalMeshComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x7e8844
	void *01291de0e1(); // Function Engine.SkeletalMeshComponent.*01291de0e1 // Final|Native|Public|BlueprintCallable // @ game+0x6803cf4
	void *07eb4aa7bc(); // Function Engine.SkeletalMeshComponent.*07eb4aa7bc // Final|Native|Public|BlueprintCallable // @ game+0x67d61fc
	void *2862b5ed5a(); // Function Engine.SkeletalMeshComponent.*2862b5ed5a // Final|Native|Public|BlueprintCallable // @ game+0x6809540
	void SetAnimation(); // Function Engine.SkeletalMeshComponent.SetAnimation // Final|Native|Public|BlueprintCallable // @ game+0x7e775c
	void *2b1529526f(); // Function Engine.SkeletalMeshComponent.*2b1529526f // Final|Native|Public|BlueprintCallable // @ game+0x67fe090
	void *8c3e6ac131(); // Function Engine.SkeletalMeshComponent.*8c3e6ac131 // Final|Native|Public|BlueprintCallable // @ game+0x6805740
	void *fdb6af384f(); // Function Engine.SkeletalMeshComponent.*fdb6af384f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e1f64
	void GetPlayRate(); // Function Engine.SkeletalMeshComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e8758
	void *78c795bb04(); // Function Engine.SkeletalMeshComponent.*78c795bb04 // Final|Native|Public|BlueprintCallable // @ game+0x6805884
	void *d19cf19dad(); // Function Engine.SkeletalMeshComponent.*d19cf19dad // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x966ec8
	void *bbd30f0694(); // Function Engine.SkeletalMeshComponent.*bbd30f0694 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e2890
	void *8eccb076f1(); // Function Engine.SkeletalMeshComponent.*8eccb076f1 // Native|Public|BlueprintCallable // @ game+0x68074e4
	void *49a5d89dc7(); // Function Engine.SkeletalMeshComponent.*49a5d89dc7 // Final|Native|Public|BlueprintCallable // @ game+0x67f0780
	void *a95306e281(); // Function Engine.SkeletalMeshComponent.*a95306e281 // Final|Native|Public|BlueprintCallable // @ game+0x67e0c18
	void SetPlayRate(); // Function Engine.SkeletalMeshComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0xbb83e8
	void SetAnimInstanceClass(); // Function Engine.SkeletalMeshComponent.SetAnimInstanceClass // Final|Native|Public|BlueprintCallable // @ game+0x6806764
	void Play(); // Function Engine.SkeletalMeshComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0xbb2e78
	void *5b7b02a51f(); // Function Engine.SkeletalMeshComponent.*5b7b02a51f // Final|Native|Public|BlueprintCallable // @ game+0x67cde24
	void *12330879fc(); // Function Engine.SkeletalMeshComponent.*12330879fc // Final|Native|Public|BlueprintCallable // @ game+0x681cb40
	void *a1620df48e(); // Function Engine.SkeletalMeshComponent.*a1620df48e // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c8ff4
	void *20c9711831(); // Function Engine.SkeletalMeshComponent.*20c9711831 // Final|Native|Public|BlueprintCallable // @ game+0x6805d04
	void *7b5470eac3(); // Function Engine.SkeletalMeshComponent.*7b5470eac3 // Final|Native|Public|BlueprintCallable // @ game+0x680ffdc
	void *eafb4489c9(); // Function Engine.SkeletalMeshComponent.*eafb4489c9 // Final|Native|Public|BlueprintCallable // @ game+0x67f08e4
	void *3386d7f324(); // Function Engine.SkeletalMeshComponent.*3386d7f324 // Final|Native|Public|BlueprintCallable // @ game+0x680afac
	void *370e1608b9(); // Function Engine.SkeletalMeshComponent.*370e1608b9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67d1dbc
	void *b72e6b1694(); // Function Engine.SkeletalMeshComponent.*b72e6b1694 // Final|Native|Public|BlueprintCallable // @ game+0x6803a20
	void *b1a20c6186(); // Function Engine.SkeletalMeshComponent.*b1a20c6186 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e1f4c
	void PlayAnimation(); // Function Engine.SkeletalMeshComponent.PlayAnimation // Final|Native|Public|BlueprintCallable // @ game+0x67febd0
	void *30ca989855(); // Function Engine.SkeletalMeshComponent.*30ca989855 // Final|Native|Public|BlueprintCallable // @ game+0x681de94
	void IsPlaying(); // Function Engine.SkeletalMeshComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67f0e50
	void *a1048a9859(); // Function Engine.SkeletalMeshComponent.*a1048a9859 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e807c
	void *23cd46227b(); // Function Engine.SkeletalMeshComponent.*23cd46227b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ef224
	void *e8a9ba9091(); // Function Engine.SkeletalMeshComponent.*e8a9ba9091 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68171c0
	void *cc72975abc(); // Function Engine.SkeletalMeshComponent.*cc72975abc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67f194c
	void *4200524a62(); // Function Engine.SkeletalMeshComponent.*4200524a62 // Final|Native|Public|BlueprintCallable // @ game+0x68055c0
	void *a61324ada6(); // Function Engine.SkeletalMeshComponent.*a61324ada6 // Final|Native|Public|BlueprintCallable // @ game+0x680abfc
	void *66eace9a8c(); // Function Engine.SkeletalMeshComponent.*66eace9a8c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eab34
	void *114aeda594(); // Function Engine.SkeletalMeshComponent.*114aeda594 // Final|Native|Public|BlueprintCallable // @ game+0x680ace8
	void *20b809a325(); // Function Engine.SkeletalMeshComponent.*20b809a325 // Final|Native|Public|BlueprintCallable // @ game+0x680397c
	void *a3c4621c5f(); // Function Engine.SkeletalMeshComponent.*a3c4621c5f // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c9188
	void *4403e63617(); // Function Engine.SkeletalMeshComponent.*4403e63617 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67e3454
	void *5fb2b74dad(); // Function Engine.SkeletalMeshComponent.*5fb2b74dad // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67c8870
	void *04f817017d(); // Function Engine.SkeletalMeshComponent.*04f817017d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e9204
	void *a5309d0c43(); // Function Engine.SkeletalMeshComponent.*a5309d0c43 // Final|Native|Public|BlueprintCallable // @ game+0xc2ac8c
	void *dcf02b5cb4(); // Function Engine.SkeletalMeshComponent.*dcf02b5cb4 // Final|Native|Public|BlueprintCallable // @ game+0x5a0769c
	void GetPosition(); // Function Engine.SkeletalMeshComponent.GetPosition // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e8ec0
	void *f0efd7be35(); // Function Engine.SkeletalMeshComponent.*f0efd7be35 // Final|Native|Public|BlueprintCallable // @ game+0x6809410
	void SetPosition(); // Function Engine.SkeletalMeshComponent.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x68105c4
	void *34f2079b29(); // Function Engine.SkeletalMeshComponent.*34f2079b29 // Native|Public|BlueprintCallable // @ game+0x680f718
};

// Class Engine.Info
// Size: 0x408 (Inherited: 0x408)
struct AInfo : AActor {
};

// Class Engine.GameModeBase
// Size: 0x4a8 (Inherited: 0x408)
struct AGameModeBase : AInfo {
	struct FString OptionsString; // 0x408(0x10)
	struct UClass* GameSessionClass; // 0x418(0x08)
	struct UClass* GameStateClass; // 0x420(0x08)
	struct UClass* PlayerControllerClass; // 0x428(0x08)
	struct UClass* PlayerStateClass; // 0x430(0x08)
	struct FStringClassReference HUDClass; // 0x438(0x10)
	struct UClass* DefaultPawnClass; // 0x448(0x08)
	struct FStringClassReference SpectatorClass; // 0x450(0x10)
	struct UClass* ReplaySpectatorPlayerControllerClass; // 0x460(0x08)
	struct AGameSession* GameSession; // 0x468(0x08)
	struct AGameStateBase* GameState; // 0x470(0x08)
	struct FText *02f2c38855; // 0x478(0x18)
	char bUseSeamlessTravel : 1; // 0x490(0x01)
	char bStartPlayersAsSpectators : 1; // 0x490(0x01)
	char bPauseable : 1; // 0x490(0x01)
	char pad_490_3 : 5; // 0x490(0x01)
	char pad_491[0x17]; // 0x491(0x17)

	void HandleStartingNewPlayer(); // Function Engine.GameModeBase.HandleStartingNewPlayer // Native|Event|Public|BlueprintEvent // @ game+0xb2d074
	void InitStartSpot(); // Function Engine.GameModeBase.InitStartSpot // Native|Event|Public|BlueprintEvent // @ game+0xd7d974
	void K2_OnRestartPlayer(); // Function Engine.GameModeBase.K2_OnRestartPlayer // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void SpawnDefaultPawnFor(); // Function Engine.GameModeBase.SpawnDefaultPawnFor // Native|Event|Public|BlueprintEvent // @ game+0xc919a4
	void *df82bef3d0(); // Function Engine.GameModeBase.*df82bef3d0 // Native|Public|BlueprintCallable // @ game+0xb13710
	void PlayerCanRestart(); // Function Engine.GameModeBase.PlayerCanRestart // Native|Event|Public|BlueprintEvent // @ game+0xb2cfb4
	void FindPlayerStart(); // Function Engine.GameModeBase.FindPlayerStart // Native|Event|Public|BlueprintEvent // @ game+0xc45680
	void *49c7068d30(); // Function Engine.GameModeBase.*49c7068d30 // Native|Public|BlueprintCallable // @ game+0x67a4144
	void GetDefaultPawnClassForController(); // Function Engine.GameModeBase.GetDefaultPawnClassForController // Native|Event|Public|BlueprintEvent // @ game+0xcae51c
	void ResetLevel(); // Function Engine.GameModeBase.ResetLevel // Native|Public|BlueprintCallable // @ game+0x5aa55a4
	void K2_OnLogout(); // Function Engine.GameModeBase.K2_OnLogout // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void SpawnDefaultPawnAtTransform(); // Function Engine.GameModeBase.SpawnDefaultPawnAtTransform // Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0xcdb6dc
	void *a2a2e5aa70(); // Function Engine.GameModeBase.*a2a2e5aa70 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a3d568
	void K2_OnSwapPlayerControllers(); // Function Engine.GameModeBase.K2_OnSwapPlayerControllers // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *d170795d09(); // Function Engine.GameModeBase.*d170795d09 // Native|Public|BlueprintCallable // @ game+0x67af2a8
	void *5e6c791ad6(); // Function Engine.GameModeBase.*5e6c791ad6 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67b4a2c
	void StartPlay(); // Function Engine.GameModeBase.StartPlay // Native|Public|BlueprintCallable // @ game+0xbd25e0
	void MustSpectate(); // Function Engine.GameModeBase.MustSpectate // Native|Event|Public|BlueprintEvent|Const // @ game+0xc7f3bc
	void RestartPlayerAtPlayerStart(); // Function Engine.GameModeBase.RestartPlayerAtPlayerStart // Native|Public|BlueprintCallable // @ game+0x67b9ae8
	void *18dad4e118(); // Function Engine.GameModeBase.*18dad4e118 // Native|Public|BlueprintCallable // @ game+0x67af1c4
	void ChoosePlayerStart(); // Function Engine.GameModeBase.ChoosePlayerStart // Native|Event|Public|BlueprintEvent // @ game+0xc90778
	void ShouldReset(); // Function Engine.GameModeBase.ShouldReset // Native|Event|Public|BlueprintEvent // @ game+0x67b956c
	void RestartPlayerAtTransform(); // Function Engine.GameModeBase.RestartPlayerAtTransform // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b9bc8
	void K2_OnChangeName(); // Function Engine.GameModeBase.K2_OnChangeName // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void K2_PostLogin(); // Function Engine.GameModeBase.K2_PostLogin // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void RestartPlayer(); // Function Engine.GameModeBase.RestartPlayer // Native|Public|BlueprintCallable // @ game+0x67b9a54
	void CanSpectate(); // Function Engine.GameModeBase.CanSpectate // Native|Event|Public|BlueprintEvent // @ game+0x67a3d70
	void InitializeHUDForPlayer(); // Function Engine.GameModeBase.InitializeHUDForPlayer // Native|Event|Protected|BlueprintEvent // @ game+0xd8a5e8
};

// Class Engine.GameMode
// Size: 0x4e8 (Inherited: 0x4a8)
struct AGameMode : AGameModeBase {
	struct FName *cad7def02a; // 0x4a8(0x08)
	char bDelayedStart : 1; // 0x4b0(0x01)
	char pad_4B0_1 : 7; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	int32 NumSpectators; // 0x4b4(0x04)
	int32 NumPlayers; // 0x4b8(0x04)
	int32 NumBots; // 0x4bc(0x04)
	float MinRespawnDelay; // 0x4c0(0x04)
	int32 NumTravellingPlayers; // 0x4c4(0x04)
	struct UClass* *aff3dca9f7; // 0x4c8(0x08)
	struct TArray<struct APlayerState*> *27501ccd21; // 0x4d0(0x10)
	float *67a73490ca; // 0x4e0(0x04)
	bool bHandleDedicatedServerReplays; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)

	void *d8ff867182(); // Function Engine.GameMode.*d8ff867182 // Native|Public|BlueprintCallable // @ game+0x5a40118
	void *a5ef978767(); // Function Engine.GameMode.*a5ef978767 // Native|Public|BlueprintCallable // @ game+0x5a3fcdc
	void *e72bb40788(); // Function Engine.GameMode.*e72bb40788 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b19a4
	void *93681d758c(); // Function Engine.GameMode.*93681d758c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0eb8
	void *82e263a9c2(); // Function Engine.GameMode.*82e263a9c2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae924
	void ReadyToStartMatch(); // Function Engine.GameMode.ReadyToStartMatch // Native|Event|Protected|BlueprintEvent // @ game+0xce6448
	void SetBandwidthLimit(); // Function Engine.GameMode.SetBandwidthLimit // Exec|Native|Public // @ game+0x67bd808
	void ReadyToEndMatch(); // Function Engine.GameMode.ReadyToEndMatch // Native|Event|Protected|BlueprintEvent // @ game+0x9e915c
	void *7fb112d056(); // Function Engine.GameMode.*7fb112d056 // Native|Public|BlueprintCallable // @ game+0x5a3c5e4
	void Say(); // Function Engine.GameMode.Say // Exec|Native|Public|BlueprintCallable // @ game+0x67b9d8c
	void K2_OnSetMatchState(); // Function Engine.GameMode.K2_OnSetMatchState // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *713722b23e(); // Function Engine.GameMode.*713722b23e // Native|Public|BlueprintCallable // @ game+0x67b9988
};

// Class Engine.*c5e4cb7a4d
// Size: 0x38 (Inherited: 0x30)
struct U*c5e4cb7a4d : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.*ed75cbc976
// Size: 0x38 (Inherited: 0x38)
struct U*ed75cbc976 : U*c5e4cb7a4d {
};

// Class Engine.*401688bf57
// Size: 0x30 (Inherited: 0x30)
struct U*401688bf57 : UObject {
};

// Class Engine.*498af98d1d
// Size: 0x48 (Inherited: 0x30)
struct U*498af98d1d : UObject {
	char bCausedByWorld : 1; // 0x30(0x01)
	char bScaleMomentumByMass : 1; // 0x30(0x01)
	char bRadialDamageVelChange : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DamageImpulse; // 0x34(0x04)
	float DestructibleImpulse; // 0x38(0x04)
	float DestructibleDamageSpreadScale; // 0x3c(0x04)
	float DamageFalloff; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.MovementComponent
// Size: 0x250 (Inherited: 0x200)
struct UMovementComponent : UActorComponent {
	struct USceneComponent* UpdatedComponent; // 0x200(0x08)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0x208(0x08)
	char pad_210[0x4]; // 0x210(0x04)
	struct FVector Velocity; // 0x214(0x0c)
	char bConstrainToPlane : 1; // 0x220(0x01)
	char bSnapToPlaneAtStart : 1; // 0x220(0x01)
	char pad_220_2 : 6; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	enum class EPlaneConstraintAxisSetting *5ff5e09fff; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	struct FVector PlaneConstraintNormal; // 0x228(0x0c)
	struct FVector PlaneConstraintOrigin; // 0x234(0x0c)
	char bUpdateOnlyIfRendered : 1; // 0x240(0x01)
	char bAutoUpdateTickRegistration : 1; // 0x240(0x01)
	char bTickBeforeOwner : 1; // 0x240(0x01)
	char bAutoRegisterUpdatedComponent : 1; // 0x240(0x01)
	char pad_240_4 : 4; // 0x240(0x01)
	char pad_241[0xf]; // 0x241(0x0f)

	void *b6c8efbdb0(); // Function Engine.MovementComponent.*b6c8efbdb0 // Native|Public|BlueprintCallable // @ game+0x67c2a7c
	void ConstrainLocationToPlane(); // Function Engine.MovementComponent.ConstrainLocationToPlane // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67a72d8
	void *bfb832781f(); // Function Engine.MovementComponent.*bfb832781f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aecc8
	void *c31d3003ec(); // Function Engine.MovementComponent.*c31d3003ec // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67accdc
	void *c4f8250805(); // Function Engine.MovementComponent.*c4f8250805 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67b559c
	void *ff3b5ade2b(); // Function Engine.MovementComponent.*ff3b5ade2b // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c17ac
	void *d1555190f1(); // Function Engine.MovementComponent.*d1555190f1 // Native|Public|BlueprintCallable // @ game+0x67c1680
	void *fab8102e5d(); // Function Engine.MovementComponent.*fab8102e5d // Native|Public|BlueprintCallable // @ game+0x67c1714
	void *94b67ee95b(); // Function Engine.MovementComponent.*94b67ee95b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67afe7c
	void *c0ba54ba1b(); // Function Engine.MovementComponent.*c0ba54ba1b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67afe54
	void *01f7b059b5(); // Function Engine.MovementComponent.*01f7b059b5 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67a73a0
	void K2_GetModifiedMaxSpeed(); // Function Engine.MovementComponent.K2_GetModifiedMaxSpeed // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4f64
	void *5950858757(); // Function Engine.MovementComponent.*5950858757 // Native|Public|BlueprintCallable // @ game+0x67c38d0
	void *6f297235ba(); // Function Engine.MovementComponent.*6f297235ba // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67afdf0
	void *318cdd375a(); // Function Engine.MovementComponent.*318cdd375a // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67a7210
	void *5acff43dcb(); // Function Engine.MovementComponent.*5acff43dcb // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c195c
	void PhysicsVolumeChanged(); // Function Engine.MovementComponent.PhysicsVolumeChanged // Native|Public // @ game+0xc4eea4
	void K2_GetMaxSpeedModifier(); // Function Engine.MovementComponent.K2_GetMaxSpeedModifier // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4f0c
	void *1283f915c9(); // Function Engine.MovementComponent.*1283f915c9 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c18b8
	void *f4e98dfee9(); // Function Engine.MovementComponent.*f4e98dfee9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67afe3c
	void *b8cd8cd7b7(); // Function Engine.MovementComponent.*b8cd8cd7b7 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1720
	void *9ed3de3e6c(); // Function Engine.MovementComponent.*9ed3de3e6c // Native|Public|BlueprintCallable // @ game+0x67c4220
};

// Class Engine.NavMovementComponent
// Size: 0x280 (Inherited: 0x250)
struct UNavMovementComponent : UMovementComponent {
	struct F*112b6d08d9 NavAgentProps; // 0x248(0x20)
	float *77ddb5b058; // 0x268(0x04)
	char *89266b4845 : 1; // 0x26c(0x01)
	char bUseAccelerationForPaths : 1; // 0x26c(0x01)
	char bUseFixedBrakingDistanceForPaths : 1; // 0x26c(0x01)
	struct F*37b25a6e05 *aee1222c17; // 0x270(0x04)
	char pad_278_3 : 5; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)

	void *732c78efb2(); // Function Engine.NavMovementComponent.*732c78efb2 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b16c8
	void *5edeeddff6(); // Function Engine.NavMovementComponent.*5edeeddff6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b17f4
	void *8e52db34a0(); // Function Engine.NavMovementComponent.*8e52db34a0 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1aec
	void *1361befc6e(); // Function Engine.NavMovementComponent.*1361befc6e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1f68
	void IsFalling(); // Function Engine.NavMovementComponent.IsFalling // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b17cc
	void StopActiveMovement(); // Function Engine.NavMovementComponent.StopActiveMovement // Native|Public|BlueprintCallable // @ game+0x67c3bec
	void *bf14594621(); // Function Engine.NavMovementComponent.*bf14594621 // Final|Native|Public|BlueprintCallable // @ game+0x67c4238
};

// Class Engine.PawnMovementComponent
// Size: 0x290 (Inherited: 0x280)
struct UPawnMovementComponent : UNavMovementComponent {
	struct APawn* *dac5b5e3f6; // 0x280(0x08)
	char pad_288[0x8]; // 0x288(0x08)

	void *b4adeff535(); // Function Engine.PawnMovementComponent.*b4adeff535 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae63c
	void K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4ed8
	void *ceaebf3734(); // Function Engine.PawnMovementComponent.*ceaebf3734 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1ac4
	void *449559473e(); // Function Engine.PawnMovementComponent.*449559473e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67afb74
	void *d72920eaf6(); // Function Engine.PawnMovementComponent.*d72920eaf6 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a7468
	void *9abbf4048c(); // Function Engine.PawnMovementComponent.*9abbf4048c // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a28bc
	void *f8c3127bfa(); // Function Engine.PawnMovementComponent.*f8c3127bfa // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67afb8c
};

// Class Engine.CharacterMovementComponent
// Size: 0x930 (Inherited: 0x290)
struct UCharacterMovementComponent : UPawnMovementComponent {
	char pad_290[0x8]; // 0x290(0x08)
	struct ACharacter* *9715095276; // 0x298(0x08)
	char bApplyGravityWhileJumping : 1; // 0x2a0(0x01)
	char pad_2A0_1 : 7; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float GravityScale; // 0x2a4(0x04)
	float MaxStepHeight; // 0x2a8(0x04)
	float JumpZVelocity; // 0x2ac(0x04)
	float JumpOffJumpZFactor; // 0x2b0(0x04)
	float *6e4a728753; // 0x2b4(0x04)
	float *5d81580070; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	float *14261b064c; // 0x2c0(0x04)
	float *3b0102ed15; // 0x2c4(0x04)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	enum class EMovementMode MovementMode; // 0x2d0(0x01)
	bool CustomMovementMode; // 0x2d1(0x01)
	char pad_2D2[0x1e]; // 0x2d2(0x1e)
	float GroundFriction; // 0x2f0(0x04)
	float MaxWalkSpeed; // 0x2f4(0x04)
	float MaxWalkSpeedCrouched; // 0x2f8(0x04)
	float MaxSwimSpeed; // 0x2fc(0x04)
	float MaxFlySpeed; // 0x300(0x04)
	float MaxCustomMovementSpeed; // 0x304(0x04)
	float MaxAcceleration; // 0x308(0x04)
	float BrakingFrictionFactor; // 0x30c(0x04)
	float BrakingFriction; // 0x310(0x04)
	char bUseSeparateBrakingFriction : 1; // 0x314(0x01)
	char pad_314_1 : 7; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	float BrakingDecelerationWalking; // 0x318(0x04)
	float BrakingDecelerationFalling; // 0x31c(0x04)
	float BrakingDecelerationSwimming; // 0x320(0x04)
	float BrakingDecelerationFlying; // 0x324(0x04)
	float AirControl; // 0x328(0x04)
	float AirControlBoostMultiplier; // 0x32c(0x04)
	float AirControlBoostVelocityThreshold; // 0x330(0x04)
	float FallingLateralFriction; // 0x334(0x04)
	float CrouchedHalfHeight; // 0x338(0x04)
	float PronedHalfHeight; // 0x33c(0x04)
	float PronedRadius; // 0x340(0x04)
	float Buoyancy; // 0x344(0x04)
	float PerchRadiusThreshold; // 0x348(0x04)
	float PerchAdditionalHeight; // 0x34c(0x04)
	struct FRotator RotationRate; // 0x350(0x0c)
	char bUseControllerDesiredRotation : 1; // 0x35c(0x01)
	char bOrientRotationToMovement : 1; // 0x35c(0x01)
	char bSweepWhileNavWalking : 1; // 0x35c(0x01)
	char pad_35C_3 : 2; // 0x35c(0x01)
	char *6b80ed3b3f : 1; // 0x35c(0x01)
	char *a5883f41aa : 1; // 0x35c(0x01)
	char bForceMaxAccel : 1; // 0x35c(0x01)
	char bRunPhysicsWithNoController : 1; // 0x35d(0x01)
	char bForceNextFloorCheck : 1; // 0x35d(0x01)
	char *6913829b5c : 1; // 0x35d(0x01)
	char bCanWalkOffLedges : 1; // 0x35d(0x01)
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x35d(0x01)
	char pad_35D_5 : 2; // 0x35d(0x01)
	char *2acc0ba126 : 1; // 0x35d(0x01)
	char *bfdbad290e : 1; // 0x35e(0x01)
	char pad_35E_1 : 7; // 0x35e(0x01)
	char pad_35F[0x1]; // 0x35f(0x01)
	struct USceneComponent* *24362ccfd4; // 0x360(0x08)
	float MaxOutOfWaterStepHeight; // 0x368(0x04)
	float OutofWaterZ; // 0x36c(0x04)
	float Mass; // 0x370(0x04)
	bool bEnablePhysicsInteraction; // 0x374(0x01)
	bool bTouchForceScaledToMass; // 0x375(0x01)
	bool bPushForceScaledToMass; // 0x376(0x01)
	bool bPushForceUsingZOffset; // 0x377(0x01)
	bool bScalePushForceToVelocity; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	float StandingDownwardForceScale; // 0x37c(0x04)
	float InitialPushForceFactor; // 0x380(0x04)
	float PushForceFactor; // 0x384(0x04)
	float PushForcePointZOffsetFactor; // 0x388(0x04)
	float TouchForceFactor; // 0x38c(0x04)
	float MinTouchForce; // 0x390(0x04)
	float MaxTouchForce; // 0x394(0x04)
	float RepulsionForce; // 0x398(0x04)
	char bForceBraking : 1; // 0x39c(0x01)
	char pad_39C_1 : 7; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	float CrouchedSpeedMultiplier; // 0x3a0(0x04)
	float UpperImpactNormalScale; // 0x3a4(0x04)
	struct FVector Acceleration; // 0x3a8(0x0c)
	struct FVector *8b5e33641b; // 0x3b4(0x0c)
	struct FQuat *1a53230ea5; // 0x3c0(0x10)
	struct FVector *d6e0b7821e; // 0x3d0(0x0c)
	float *706c733206; // 0x3dc(0x04)
	float *798fbf4376; // 0x3e0(0x04)
	float *2140231fbc; // 0x3e4(0x04)
	struct FVector *3b23e36cb0; // 0x3e8(0x0c)
	struct FVector *ff6cbe42b6; // 0x3f4(0x0c)
	float *d094d992c4; // 0x400(0x04)
	char pad_404[0x8]; // 0x404(0x08)
	float MaxSimulationTimeStep; // 0x40c(0x04)
	int32 MaxSimulationIterations; // 0x410(0x04)
	float MaxDepenetrationWithGeometry; // 0x414(0x04)
	float MaxDepenetrationWithGeometryAsProxy; // 0x418(0x04)
	float MaxDepenetrationWithPawn; // 0x41c(0x04)
	float MaxDepenetrationWithPawnAsProxy; // 0x420(0x04)
	float *d96e75a69b; // 0x424(0x04)
	float *328143b81d; // 0x428(0x04)
	float *353663b1d9; // 0x42c(0x04)
	float *4490412dcb; // 0x430(0x04)
	float *4a53713c71; // 0x434(0x04)
	float *dbf6f973a9; // 0x438(0x04)
	float *95402cbdcf; // 0x43c(0x04)
	float *217c092b35; // 0x440(0x04)
	enum class ENetworkSmoothingMode NetworkSmoothingMode; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	float *d489da6ed0; // 0x448(0x04)
	float *c12b5bd00f; // 0x44c(0x04)
	float *b066376fab; // 0x450(0x04)
	float *b24861907a; // 0x454(0x04)
	float LedgeCheckThreshold; // 0x458(0x04)
	float JumpOutOfWaterPitch; // 0x45c(0x04)
	struct F*771b3804ba CurrentFloor; // 0x460(0x98)
	enum class EMovementMode DefaultLandMovementMode; // 0x4f8(0x01)
	enum class EMovementMode DefaultWaterMovementMode; // 0x4f9(0x01)
	enum class EMovementMode *138fe62722; // 0x4fa(0x01)
	char pad_4FB[0x1]; // 0x4fb(0x01)
	char bMaintainHorizontalGroundVelocity : 1; // 0x4fc(0x01)
	char bImpartBaseVelocityX : 1; // 0x4fc(0x01)
	char bImpartBaseVelocityY : 1; // 0x4fc(0x01)
	char bImpartBaseVelocityZ : 1; // 0x4fc(0x01)
	char bImpartBaseAngularVelocity : 1; // 0x4fc(0x01)
	char bJustTeleported : 1; // 0x4fc(0x01)
	char *53d48d06f9 : 1; // 0x4fc(0x01)
	char *971521425c : 1; // 0x4fc(0x01)
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x4fd(0x01)
	char bNotifyApex : 1; // 0x4fd(0x01)
	char *be016c8dd7 : 1; // 0x4fd(0x01)
	char bWantsToCrouch : 1; // 0x4fd(0x01)
	char bCrouchMaintainsBaseLocation : 1; // 0x4fd(0x01)
	char pad_4FD_5 : 3; // 0x4fd(0x01)
	char pad_4FE[0x2]; // 0x4fe(0x02)
	enum class EStanceMode StanceMode; // 0x500(0x01)
	enum class EStanceMode WantsToStanceMode; // 0x501(0x01)
	char pad_502[0x2]; // 0x502(0x02)
	char bIgnoreBaseRotation : 1; // 0x504(0x01)
	char *ba3af84fa8 : 1; // 0x504(0x01)
	char bAlwaysCheckFloor : 1; // 0x504(0x01)
	char bUseFlatBaseForFloorChecks : 1; // 0x504(0x01)
	char *9f41cc585f : 1; // 0x504(0x01)
	char *c4ad66876b : 1; // 0x504(0x01)
	char bUseRVOAvoidance : 1; // 0x504(0x01)
	char bRequestedMoveUseAcceleration : 1; // 0x504(0x01)
	char pad_505[0xf]; // 0x505(0x0f)
	char *3d670ca35e : 1; // 0x514(0x01)
	char *c226f59fd2 : 1; // 0x514(0x01)
	char *0dbc1fe19f : 1; // 0x514(0x01)
	char pad_514_3 : 2; // 0x514(0x01)
	char bProjectNavMeshWalking : 1; // 0x514(0x01)
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x514(0x01)
	char pad_514_7 : 1; // 0x514(0x01)
	char pad_515[0x13]; // 0x515(0x13)
	float AvoidanceConsiderationRadius; // 0x528(0x04)
	struct FVector *512e308fe4; // 0x52c(0x0c)
	int32 AvoidanceUID; // 0x538(0x04)
	struct F*4c8082789d AvoidanceGroup; // 0x53c(0x04)
	struct F*4c8082789d GroupsToAvoid; // 0x540(0x04)
	struct F*4c8082789d GroupsToIgnore; // 0x544(0x04)
	float AvoidanceWeight; // 0x548(0x04)
	struct FVector *2aeb3bd7b1; // 0x54c(0x0c)
	char pad_558[0xa8]; // 0x558(0xa8)
	float NavMeshProjectionInterval; // 0x600(0x04)
	float *c4f2aeded7; // 0x604(0x04)
	float NavMeshProjectionInterpSpeed; // 0x608(0x04)
	float NavMeshProjectionHeightScaleUp; // 0x60c(0x04)
	float NavMeshProjectionHeightScaleDown; // 0x610(0x04)
	float NavWalkingFloorDistTolerance; // 0x614(0x04)
	char pad_618[0xb0]; // 0x618(0xb0)
	struct F*d33504fa9e *89cb9e5c44; // 0x6c8(0x58)
	char pad_720[0x10]; // 0x720(0x10)
	float *0330c4ec91; // 0x730(0x04)
	char pad_734[0x4]; // 0x734(0x04)
	struct FRootMotionSourceGroup *0bec0f1727; // 0x738(0x100)
	char pad_838[0x98]; // 0x838(0x98)
	struct F*f882669a6a *8ac2e140c6; // 0x8d0(0x40)
	struct FVector *9aff4f664b; // 0x910(0x0c)
	bool *dbe8d61961; // 0x91c(0x01)
	char pad_91D[0x3]; // 0x91d(0x03)
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x920(0x01)
	char pad_920_1 : 7; // 0x920(0x01)
	char pad_921[0xf]; // 0x921(0x0f)

	void *90a546eabb(); // Function Engine.CharacterMovementComponent.*90a546eabb // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ad848
	void *71dafd4d4d(); // Function Engine.CharacterMovementComponent.*71dafd4d4d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b5188
	void *2753af4362(); // Function Engine.CharacterMovementComponent.*2753af4362 // Final|Native|Public|BlueprintCallable // @ game+0x67c3268
	void *7f80478723(); // Function Engine.CharacterMovementComponent.*7f80478723 // Final|Native|Public|BlueprintCallable // @ game+0x67c31d0
	void *90faa9aff7(); // Function Engine.CharacterMovementComponent.*90faa9aff7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aedfc
	void *38cde05eb4(); // Function Engine.CharacterMovementComponent.*38cde05eb4 // Native|Public|BlueprintCallable // @ game+0x67a3a5c
	void *95acad96b5(); // Function Engine.CharacterMovementComponent.*95acad96b5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67afbe4
	void *74ec3726b8(); // Function Engine.CharacterMovementComponent.*74ec3726b8 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aec9c
	void AddForce(); // Function Engine.CharacterMovementComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a1eec
	void *b32b5ec1b0(); // Function Engine.CharacterMovementComponent.*b32b5ec1b0 // Final|Native|Public|BlueprintCallable // @ game+0x67bd6e0
	void *7069f250d4(); // Function Engine.CharacterMovementComponent.*7069f250d4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67abc50
	void *015f95d0bb(); // Function Engine.CharacterMovementComponent.*015f95d0bb // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aec44
	void *462bbc0ddd(); // Function Engine.CharacterMovementComponent.*462bbc0ddd // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4f38
	void *0c170a562b(); // Function Engine.CharacterMovementComponent.*0c170a562b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0b20
	void AddImpulse(); // Function Engine.CharacterMovementComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a2530
	void *db1edcad4b(); // Function Engine.CharacterMovementComponent.*db1edcad4b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4914
	void *84929fc112(); // Function Engine.CharacterMovementComponent.*84929fc112 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67bfe9c
	void *43edff4ae6(); // Function Engine.CharacterMovementComponent.*43edff4ae6 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1fb8
	void *e03b5e7dc5(); // Function Engine.CharacterMovementComponent.*e03b5e7dc5 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aec70
	void *2c03648be5(); // Function Engine.CharacterMovementComponent.*2c03648be5 // Final|Native|Public|BlueprintCallable // @ game+0x67bd64c
	void *c64386b7f7(); // Function Engine.CharacterMovementComponent.*c64386b7f7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1aec
	void *9b005623ac(); // Function Engine.CharacterMovementComponent.*9b005623ac // Native|Public|BlueprintCallable // @ game+0x3911c8
	void *63889f1173(); // Function Engine.CharacterMovementComponent.*63889f1173 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a38df0
	void *ee419b5fd8(); // Function Engine.CharacterMovementComponent.*ee419b5fd8 // Final|Native|Public|BlueprintCallable // @ game+0x67c1b7c
	void DisableMovement(); // Function Engine.CharacterMovementComponent.DisableMovement // Native|Public|BlueprintCallable // @ game+0x67a8180
	void *60ff66bd47(); // Function Engine.CharacterMovementComponent.*60ff66bd47 // Final|Native|Public|BlueprintCallable // @ game+0x67bfe10
	void *8381acd31f(); // Function Engine.CharacterMovementComponent.*8381acd31f // Final|Native|Public|BlueprintCallable // @ game+0x67bfce8
	void *c58989e56b(); // Function Engine.CharacterMovementComponent.*c58989e56b // Net|Native|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x67c3474
	void *e8afdd8741(); // Function Engine.CharacterMovementComponent.*e8afdd8741 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a7c738
	void CapsuleTouched(); // Function Engine.CharacterMovementComponent.CapsuleTouched // Native|Protected|HasOutParms // @ game+0x67a3e60
	void *0f142f89b9(); // Function Engine.CharacterMovementComponent.*0f142f89b9 // Native|Public|BlueprintCallable // @ game+0x67c0fcc
	void *8514fb3447(); // Function Engine.CharacterMovementComponent.*8514fb3447 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac918
	void *11603f3271(); // Function Engine.CharacterMovementComponent.*11603f3271 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67bfd74
	void *4f63486679(); // Function Engine.CharacterMovementComponent.*4f63486679 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4470
	void *2ff626d6d1(); // Function Engine.CharacterMovementComponent.*2ff626d6d1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aaf20
	void *fb06094432(); // Function Engine.CharacterMovementComponent.*fb06094432 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67bd76c
};

// Class Engine.BlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintFunctionLibrary : UObject {

	void MakeStringAssetReference(); // Function Engine.BlueprintFunctionLibrary.MakeStringAssetReference // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f8b84
};

// Class Engine.StaticMeshActor
// Size: 0x418 (Inherited: 0x408)
struct AStaticMeshActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x408(0x08)
	bool bStaticMeshReplicateMovement; // 0x410(0x01)
	enum class ENavDataGatheringMode *e2328b2504; // 0x411(0x01)
	char pad_412[0x6]; // 0x412(0x06)
};

// Class Engine.HUD
// Size: 0x4f0 (Inherited: 0x408)
struct AHUD : AActor {
	struct APlayerController* PlayerOwner; // 0x408(0x08)
	char bLostFocusPaused : 1; // 0x410(0x01)
	char bShowHUD : 1; // 0x410(0x01)
	char bShowDebugInfo : 1; // 0x410(0x01)
	char bShowHitBoxDebugInfo : 1; // 0x410(0x01)
	char bShowOverlays : 1; // 0x410(0x01)
	char bEnableDebugTextShadow : 1; // 0x410(0x01)
	char pad_410_6 : 2; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct TArray<struct AActor*> *e03555f483; // 0x418(0x10)
	char pad_428[0x8]; // 0x428(0x08)
	struct TArray<struct FName> DebugDisplay; // 0x430(0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x440(0x10)
	struct UCanvas* Canvas; // 0x450(0x08)
	struct UCanvas* *62b97b751a; // 0x458(0x08)
	struct TArray<struct F*fae183bc56> *fe8d86efa1; // 0x460(0x10)
	struct UClass* *fb904319b5; // 0x470(0x08)
	struct AActor* *463b4dc366; // 0x478(0x08)
	char pad_480[0x70]; // 0x480(0x70)

	void ReceiveHitBoxBeginCursorOver(); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *df4061b0be(); // Function Engine.HUD.*df4061b0be // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67aaae0
	void AddHitBox(); // Function Engine.HUD.AddHitBox // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a2368
	void Project(); // Function Engine.HUD.Project // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b91b8
	void ReceiveHitBoxClick(); // Function Engine.HUD.ReceiveHitBoxClick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *0246c1a4d4(); // Function Engine.HUD.*0246c1a4d4 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67b05d8
	void *fe035ce755(); // Function Engine.HUD.*fe035ce755 // Final|Native|Public|BlueprintCallable // @ game+0x67a88d4
	void *c23d7d1b95(); // Function Engine.HUD.*c23d7d1b95 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a9098
	void ShowHUD(); // Function Engine.HUD.ShowHUD // Exec|Native|Public // @ game+0xdb4c0c
	void *96bc26c00a(); // Function Engine.HUD.*96bc26c00a // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x67b9614
	void *7ae35533f0(); // Function Engine.HUD.*7ae35533f0 // Final|Native|Public|BlueprintCallable // @ game+0x67a9860
	void *73cee3e4ca(); // Function Engine.HUD.*73cee3e4ca // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a8240
	void ShowDebugToggleSubCategory(); // Function Engine.HUD.ShowDebugToggleSubCategory // Final|Exec|Native|Public // @ game+0x67c3674
	void *2693eb47f0(); // Function Engine.HUD.*2693eb47f0 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x67af7e8
	void *9947d93eda(); // Function Engine.HUD.*9947d93eda // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5a9dc28
	void ShowDebugForReticleTargetToggle(); // Function Engine.HUD.ShowDebugForReticleTargetToggle // Final|Exec|Native|Public // @ game+0x67c35b4
	void Deproject(); // Function Engine.HUD.Deproject // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67a7b2c
	void ReceiveHitBoxEndCursorOver(); // Function Engine.HUD.ReceiveHitBoxEndCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void DrawTexture(); // Function Engine.HUD.DrawTexture // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a9350
	void ReceiveDrawHUD(); // Function Engine.HUD.ReceiveDrawHUD // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *f7fdb39fc4(); // Function Engine.HUD.*f7fdb39fc4 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a8ebc
	void *872a042141(); // Function Engine.HUD.*872a042141 // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x67b9460
	void *54873e95c6(); // Function Engine.HUD.*54873e95c6 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a846c
	void ReceiveHitBoxRelease(); // Function Engine.HUD.ReceiveHitBoxRelease // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *40f4edae17(); // Function Engine.HUD.*40f4edae17 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a8b4c
	void ShowDebug(); // Function Engine.HUD.ShowDebug // Exec|Native|Public // @ game+0x67c3520
	void *c5ab2302bc(); // Function Engine.HUD.*c5ab2302bc // Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x67a1a78
};

// Class Engine.Brush
// Size: 0x440 (Inherited: 0x408)
struct ABrush : AActor {
	enum class *5e5e5eab6b *0b26d2092e; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	struct FColor BrushColor; // 0x40c(0x04)
	int32 PolyFlags; // 0x410(0x04)
	char *aea2cb31c1 : 1; // 0x414(0x01)
	char *a1acb90bd3 : 1; // 0x414(0x01)
	char *d80e65bbb7 : 1; // 0x414(0x01)
	char *eac65cc66b : 1; // 0x414(0x01)
	char pad_414_4 : 4; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	struct UModel* Brush; // 0x418(0x08)
	struct UBrushComponent* BrushComponent; // 0x420(0x08)
	char *76c1f76587 : 1; // 0x428(0x01)
	char pad_428_1 : 7; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct TArray<struct F*d4dfcacc3f> *39006b633f; // 0x430(0x10)
};

// Class Engine.Volume
// Size: 0x440 (Inherited: 0x440)
struct AVolume : ABrush {
};

// Class Engine.AnimNotify
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotify : UObject {
	char pad_30[0x10]; // 0x30(0x10)

	void GetNotifyName(); // Function Engine.AnimNotify.GetNotifyName // Native|Event|Public|BlueprintEvent|Const // @ game+0x67af06c
	void Received_Notify(); // Function Engine.AnimNotify.Received_Notify // Event|Public|BlueprintEvent|Const // @ game+0x22ddc4
};

// Class Engine.AnimNotify_PlayParticleEffect
// Size: 0x80 (Inherited: 0x40)
struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	struct UParticleSystem* PSTemplate; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	char pad_60[0x10]; // 0x60(0x10)
	char Attached : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FName SocketName; // 0x78(0x08)
};

// Class Engine.AnimNotifyState
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState : UObject {
	char pad_30[0x8]; // 0x30(0x08)

	void Received_NotifyBegin(); // Function Engine.AnimNotifyState.Received_NotifyBegin // Event|Public|BlueprintEvent|Const // @ game+0x22ddc4
	void Received_NotifyEnd(); // Function Engine.AnimNotifyState.Received_NotifyEnd // Event|Public|BlueprintEvent|Const // @ game+0x22ddc4
	void GetNotifyName(); // Function Engine.AnimNotifyState.GetNotifyName // Native|Event|Public|BlueprintEvent|Const // @ game+0x67af06c
	void Received_NotifyTick(); // Function Engine.AnimNotifyState.Received_NotifyTick // Event|Public|BlueprintEvent|Const // @ game+0x22ddc4
};

// Class Engine.DataTable
// Size: 0x88 (Inherited: 0x30)
struct UDataTable : UObject {
	struct UScriptStruct* *6517b67220; // 0x30(0x08)
	char pad_38[0x50]; // 0x38(0x50)
};

// Class Engine.Character
// Size: 0x880 (Inherited: 0x468)
struct ACharacter : APawn {
	int32 JumpCurrentCount; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UCapsuleComponent* ProneCapsuleComponent; // 0x470(0x08)
	float *242f050da7; // 0x478(0x04)
	char bPressedJump : 1; // 0x47c(0x01)
	char *1e345fa424 : 1; // 0x47c(0x01)
	char *e8e73f092d : 1; // 0x47c(0x01)
	char *69cbbf7dd8 : 1; // 0x47c(0x01)
	char *8668c6e0ea : 1; // 0x47c(0x01)
	char *148d9ff30a : 1; // 0x47c(0x01)
	char *cb3edb2730 : 1; // 0x47c(0x01)
	char *053cd11427 : 1; // 0x47c(0x01)
	char bWasJumping : 1; // 0x47d(0x01)
	char pad_47D_1 : 7; // 0x47d(0x01)
	char pad_47E[0x2]; // 0x47e(0x02)
	float JumpKeyHoldTime; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct F*c6f03cdc0f *e9a9c9cc0a; // 0x488(0x48)
	bool *c5a0c89d9e; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct F*c6f03cdc0f *98c683696e; // 0x4d8(0x48)
	int32 JumpMaxCount; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct UCharacterMovementComponent* CharacterMovement; // 0x528(0x08)
	bool *6588c92738; // 0x530(0x01)
	char pad_531[0x3]; // 0x531(0x03)
	float *8bd307ef37; // 0x534(0x04)
	float CrouchedEyeHeight; // 0x538(0x04)
	char bIsCrouched : 1; // 0x53c(0x01)
	char pad_53C_1 : 7; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	struct FVector *25042cf667; // 0x540(0x0c)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct FQuat *f12a07eecd; // 0x550(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x560(0x08)
	float JumpMaxHoldTime; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct USkeletalMeshComponent* Mesh; // 0x570(0x08)
	struct FMulticastDelegate OnReachedJumpApex; // 0x578(0x10)
	char pad_588[0x10]; // 0x588(0x10)
	struct FMulticastDelegate MovementModeChangedDelegate; // 0x598(0x10)
	struct FMulticastDelegate OnCharacterMovementUpdated; // 0x5a8(0x10)
	struct FRootMotionSourceGroup *c561841b57; // 0x5b8(0x100)
	char pad_6B8[0x8]; // 0x6b8(0x08)
	struct F*f882669a6a *d1160de8cb; // 0x6c0(0x40)
	struct TArray<struct F*f1a5265894> *bfa8d6a6b0; // 0x700(0x10)
	struct F*e60dc8ad15 *4ffa8bec6a; // 0x710(0x160)
	char pad_870[0x10]; // 0x870(0x10)

	void OnRep_IsCrouched(); // Function Engine.Character.OnRep_IsCrouched // Native|Public // @ game+0x5a13a8c
	void *11701e6c86(); // Function Engine.Character.*11701e6c86 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x67bb964
	void *ca8dfc4730(); // Function Engine.Character.*ca8dfc4730 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a4d04
	void K2_OnMovementModeChanged(); // Function Engine.Character.K2_OnMovementModeChanged // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *99ee38b5a3(); // Function Engine.Character.*99ee38b5a3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab114
	void OnLanded(); // Function Engine.Character.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void ClientAckGoodMove(); // Function Engine.Character.ClientAckGoodMove // Net|Native|Event|Public|NetClient // @ game+0x1aa354
	void *f8a8a87a99(); // Function Engine.Character.*f8a8a87a99 // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x67a6cd0
	void OnRep_ReplicatedBasedMovement(); // Function Engine.Character.OnRep_ReplicatedBasedMovement // Native|Public // @ game+0x99a8ec
	void ServerMove(); // Function Engine.Character.ServerMove // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x67ba25c
	void *8df9beeffc(); // Function Engine.Character.*8df9beeffc // Native|Public|BlueprintCallable // @ game+0x67c1f34
	void *862039a00c(); // Function Engine.Character.*862039a00c // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x67a47f0
	void *6539aa112e(); // Function Engine.Character.*6539aa112e // Final|Native|Public|BlueprintCallable // @ game+0x67ac940
	void *07222f33a7(); // Function Engine.Character.*07222f33a7 // Native|Public|BlueprintCallable // @ game+0x67b8860
	void Jump(); // Function Engine.Character.Jump // Native|Public|BlueprintCallable // @ game+0x67b2090
	void *2bca3b9c1d(); // Function Engine.Character.*2bca3b9c1d // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x67a445c
	void *82691fa526(); // Function Engine.Character.*82691fa526 // Native|Public|BlueprintCallable // @ game+0x67c3efc
	void *7f0a1239ad(); // Function Engine.Character.*7f0a1239ad // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x67bb158
	void OnWalkingOffLedge(); // Function Engine.Character.OnWalkingOffLedge // Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x67b8290
	void CanJumpInternal(); // Function Engine.Character.CanJumpInternal // Native|Event|Protected|BlueprintEvent|Const // @ game+0x67a3d48
	void OnJumped(); // Function Engine.Character.OnJumped // Native|Event|Public|BlueprintEvent // @ game+0x67b8020
	void OnRep_RootMotion(); // Function Engine.Character.OnRep_RootMotion // Final|Native|Public // @ game+0x67b8084
	void CanJump(); // Function Engine.Character.CanJump // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a3d24
	void *866417e915(); // Function Engine.Character.*866417e915 // Native|Public|BlueprintCallable // @ game+0x67c4694
	void IsJumpProvidingForce(); // Function Engine.Character.IsJumpProvidingForce // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b132c
	void *1a3809edda(); // Function Engine.Character.*1a3809edda // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x67babd8
	void *d3e75881e1(); // Function Engine.Character.*d3e75881e1 // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0xab2968
	void *48d57a327e(); // Function Engine.Character.*48d57a327e // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67a3950
	void *b39a015335(); // Function Engine.Character.*b39a015335 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a4cec
	void *5b41406dd2(); // Function Engine.Character.*5b41406dd2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59ec790
	void *56fb21a6d3(); // Function Engine.Character.*56fb21a6d3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab15c
	void OnLaunched(); // Function Engine.Character.OnLaunched // Event|Public|HasDefaults|BlueprintEvent // @ game+0x22ddc4
	void K2_OnEndCrouch(); // Function Engine.Character.K2_OnEndCrouch // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *0bf24fb690(); // Function Engine.Character.*0bf24fb690 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1d10
	void *779dfbaabd(); // Function Engine.Character.*779dfbaabd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1d34
	void *fceda4a8d6(); // Function Engine.Character.*fceda4a8d6 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x67ba658
	void Crouch(); // Function Engine.Character.Crouch // Native|Public|BlueprintCallable // @ game+0x67a7a48
	void K2_UpdateCustomMovement(); // Function Engine.Character.K2_UpdateCustomMovement // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *729216e5f2(); // Function Engine.Character.*729216e5f2 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x59b82bc
	void *7adff78f36(); // Function Engine.Character.*7adff78f36 // Native|Public|BlueprintCallable // @ game+0x67c41f0
	void *82e7d06301(); // Function Engine.Character.*82e7d06301 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x67bb620
	void LaunchCharacter(); // Function Engine.Character.LaunchCharacter // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67b7534
	void K2_OnStartCrouch(); // Function Engine.Character.K2_OnStartCrouch // Event|Public|BlueprintEvent // @ game+0x22ddc4
};

// Class Engine.Controller
// Size: 0x488 (Inherited: 0x408)
struct AController : AActor {
	char pad_408[0x8]; // 0x408(0x08)
	struct FName StateName; // 0x410(0x08)
	char pad_418[0x10]; // 0x418(0x10)
	struct USceneComponent* TransformComponent; // 0x428(0x08)
	struct FRotator *e40e8dabb2; // 0x430(0x0c)
	char pad_43C[0xc]; // 0x43c(0x0c)
	struct ACharacter* Character; // 0x448(0x08)
	char pad_450[0x10]; // 0x450(0x10)
	char *a05757ae10 : 1; // 0x460(0x01)
	char *68b329ef67 : 1; // 0x460(0x01)
	char pad_460_2 : 6; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct APlayerState* PlayerState; // 0x468(0x08)
	struct APawn* Pawn; // 0x470(0x08)
	struct FMulticastDelegate OnInstigatedAnyDamage; // 0x478(0x10)

	void *d35e8bc247(); // Function Engine.Controller.*d35e8bc247 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0d24
	void *6e6db3fd99(); // Function Engine.Controller.*6e6db3fd99 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b181c
	void *205665ad55(); // Function Engine.Controller.*205665ad55 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67bf008
	void *36e4787827(); // Function Engine.Controller.*36e4787827 // Native|Public|BlueprintCallable // @ game+0x5a3e1e0
	void *8a22f11f09(); // Function Engine.Controller.*8a22f11f09 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b77b8
	void *1e35afc686(); // Function Engine.Controller.*1e35afc686 // Final|Native|Public|BlueprintCallable // @ game+0x67a40b4
	void *27250128fa(); // Function Engine.Controller.*27250128fa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1cf4
	void *f2a72b13b5(); // Function Engine.Controller.*f2a72b13b5 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67aca34
	void K2_GetPawn(); // Function Engine.Controller.K2_GetPawn // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b4f90
	void *19175e6cf7(); // Function Engine.Controller.*19175e6cf7 // Native|Public|BlueprintCallable // @ game+0x67b9944
	void *15f0d36de2(); // Function Engine.Controller.*15f0d36de2 // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0xc920d8
	void ReceiveInstigatedAnyDamage(); // Function Engine.Controller.ReceiveInstigatedAnyDamage // BlueprintAuthorityOnly|Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *ceaebf3734(); // Function Engine.Controller.*ceaebf3734 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1a74
	void *ee8f3b4c63(); // Function Engine.Controller.*ee8f3b4c63 // Native|Public|BlueprintCallable // @ game+0x67c015c
	void *ed16c719d1(); // Function Engine.Controller.*ed16c719d1 // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x67a6100
	void OnRep_Pawn(); // Function Engine.Controller.OnRep_Pawn // Native|Public // @ game+0xa71730
	void StopMovement(); // Function Engine.Controller.StopMovement // Native|Public|BlueprintCallable // @ game+0x67c4208
	void *bd544094f0(); // Function Engine.Controller.*bd544094f0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1960
	void *128814cef7(); // Function Engine.Controller.*128814cef7 // Native|Public|BlueprintCallable // @ game+0x59fffd0
	void Possess(); // Function Engine.Controller.Possess // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x59f0ea8
	void *70f7882012(); // Function Engine.Controller.*70f7882012 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1938
	void GetControlRotation(); // Function Engine.Controller.GetControlRotation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac48c
	void *a590a631c1(); // Function Engine.Controller.*a590a631c1 // Native|Public|BlueprintCallable // @ game+0x67c472c
	void *c9e2d88f05(); // Function Engine.Controller.*c9e2d88f05 // Native|Public|BlueprintCallable // @ game+0x67b995c
	void OnRep_PlayerState(); // Function Engine.Controller.OnRep_PlayerState // Native|Public // @ game+0x59a712c
};

// Class Engine.SpringArmComponent
// Size: 0x560 (Inherited: 0x4d0)
struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x4d0(0x04)
	struct FVector SocketOffset; // 0x4d4(0x0c)
	struct FVector TargetOffset; // 0x4e0(0x0c)
	float ProbeSize; // 0x4ec(0x04)
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
	float CameraLagSpeed; // 0x4f8(0x04)
	float CameraRotationLagSpeed; // 0x4fc(0x04)
	float CameraLagMaxTimeStep; // 0x500(0x04)
	float CameraLagMaxDistance; // 0x504(0x04)
	char pad_508[0x58]; // 0x508(0x58)
};

// Class Engine.PlayerController
// Size: 0x7c0 (Inherited: 0x488)
struct APlayerController : AController {
	struct UPlayer* Player; // 0x488(0x08)
	char pad_490[0x8]; // 0x490(0x08)
	struct APawn* *52577c9cf3; // 0x498(0x08)
	struct U*bf68adb116* *2118536042; // 0x4a0(0x08)
	char pad_4A8[0x8]; // 0x4a8(0x08)
	struct AHUD* *0174a95ec0; // 0x4b0(0x08)
	struct APlayerCameraManager* PlayerCameraManager; // 0x4b8(0x08)
	struct UClass* PlayerCameraManagerClass; // 0x4c0(0x08)
	bool *a3e4cbf23c; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	struct FRotator TargetViewRotation; // 0x4cc(0x0c)
	char pad_4D8[0xc]; // 0x4d8(0x0c)
	float SmoothTargetViewRotationSpeed; // 0x4e4(0x04)
	struct TArray<struct AActor*> *96a0afe110; // 0x4e8(0x10)
	char pad_4F8[0x4]; // 0x4f8(0x04)
	float *744175bbfd; // 0x4fc(0x04)
	struct FVector *91545f0f7d; // 0x500(0x0c)
	struct FRotator *1aa871ab47; // 0x50c(0x0c)
	int32 *c1e8e27c17; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct UCheatManager* CheatManager; // 0x520(0x08)
	struct UClass* CheatClass; // 0x528(0x08)
	struct UPlayerInput* PlayerInput; // 0x530(0x08)
	struct TArray<struct F*846c4d8d15> *00b46b06f5; // 0x538(0x10)
	char pad_548[0x90]; // 0x548(0x90)
	char pad_5D8_0 : 3; // 0x5d8(0x01)
	char bPlayerIsWaiting : 1; // 0x5d8(0x01)
	char pad_5D8_4 : 4; // 0x5d8(0x01)
	char pad_5D9[0x3]; // 0x5d9(0x03)
	bool *de61ed25a1; // 0x5dc(0x01)
	char pad_5DD[0x3b]; // 0x5dd(0x3b)
	struct UNetConnection* *4d8dd0dd7c; // 0x618(0x08)
	struct UNetConnection* NetConnection; // 0x620(0x08)
	char pad_628[0xc]; // 0x628(0x0c)
	float InputYawScale; // 0x634(0x04)
	float InputPitchScale; // 0x638(0x04)
	float InputRollScale; // 0x63c(0x04)
	char bShowMouseCursor : 1; // 0x640(0x01)
	char bEnableClickEvents : 1; // 0x640(0x01)
	char bEnableTouchEvents : 1; // 0x640(0x01)
	char bEnableMouseOverEvents : 1; // 0x640(0x01)
	char bEnableTouchOverEvents : 1; // 0x640(0x01)
	char bForceFeedbackEnabled : 1; // 0x640(0x01)
	char pad_640_6 : 2; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	struct TArray<struct FKey> ClickEventKeys; // 0x648(0x10)
	enum class EMouseCursor DefaultMouseCursor; // 0x658(0x01)
	enum class EMouseCursor CurrentMouseCursor; // 0x659(0x01)
	enum class ECollisionChannel DefaultClickTraceChannel; // 0x65a(0x01)
	enum class ECollisionChannel CurrentClickTraceChannel; // 0x65b(0x01)
	float HitResultTraceDistance; // 0x65c(0x04)
	char pad_660[0x80]; // 0x660(0x80)
	struct U*63b14265fa* *a84aed1ac2; // 0x6e0(0x08)
	char pad_6E8_0 : 3; // 0x6e8(0x01)
	char bShouldPerformFullTickWhenPaused : 1; // 0x6e8(0x01)
	char pad_6E8_4 : 4; // 0x6e8(0x01)
	char pad_6E9[0x17]; // 0x6e9(0x17)
	struct UTouchInterface* *353d824492; // 0x700(0x08)
	char pad_708[0x40]; // 0x708(0x40)
	struct ASpectatorPawn* SpectatorPawn; // 0x748(0x08)
	struct FVector SpawnLocation; // 0x750(0x0c)
	char pad_75C[0x4]; // 0x75c(0x04)
	bool *66411eec05; // 0x760(0x01)
	char pad_761[0x1]; // 0x761(0x01)
	uint16 *3d54acd8a3; // 0x762(0x02)
	uint16 *e5470d9a99; // 0x764(0x02)
	char pad_766[0x2]; // 0x766(0x02)
	struct AActor* *2f9c762523; // 0x768(0x08)
	struct AActor* *dd387e3bdd; // 0x770(0x08)
	char pad_778[0x48]; // 0x778(0x48)

	void *9414589630(); // Function Engine.PlayerController.*9414589630 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a5114
	void *234979df54(); // Function Engine.PlayerController.*234979df54 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xbaa058
	void *5b13f1daeb(); // Function Engine.PlayerController.*5b13f1daeb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ade80
	void *d53e3d94e0(); // Function Engine.PlayerController.*d53e3d94e0 // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x67a64b0
	void *bee6588995(); // Function Engine.PlayerController.*bee6588995 // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x67a63cc
	void *27660cb1ad(); // Function Engine.PlayerController.*27660cb1ad // Final|Native|Public|BlueprintCallable // @ game+0x67b8d28
	void *138bf4a368(); // Function Engine.PlayerController.*138bf4a368 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67ba210
	void *808761b431(); // Function Engine.PlayerController.*808761b431 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a593c
	void *58ac560ffc(); // Function Engine.PlayerController.*58ac560ffc // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ad500
	void *207d75612e(); // Function Engine.PlayerController.*207d75612e // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0xdb25ac
	void *82afa3a7b9(); // Function Engine.PlayerController.*82afa3a7b9 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcc16f0
	void *5b0dec685d(); // Function Engine.PlayerController.*5b0dec685d // Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable // @ game+0x67a5230
	void *b6936626e5(); // Function Engine.PlayerController.*b6936626e5 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67bbfc4
	void ConsoleKey(); // Function Engine.PlayerController.ConsoleKey // Exec|Native|Public // @ game+0x67a7128
	void EnableDLSS(); // Function Engine.PlayerController.EnableDLSS // Exec|Native|Public // @ game+0x67a9a34
	void *80ddefce3e(); // Function Engine.PlayerController.*80ddefce3e // Net|NetReliableNative|Event|Public|NetClient // @ game+0x91e80c
	void *0ef4224a1c(); // Function Engine.PlayerController.*0ef4224a1c // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae13c
	void *f403e28121(); // Function Engine.PlayerController.*f403e28121 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae240
	void *58d19cd040(); // Function Engine.PlayerController.*58d19cd040 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bf07c
	void *f2732fc920(); // Function Engine.PlayerController.*f2732fc920 // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a4d4c
	void *b9be4bfa5c(); // Function Engine.PlayerController.*b9be4bfa5c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a5de8
	void *1b9bad8269(); // Function Engine.PlayerController.*1b9bad8269 // Final|Native|Public|HasDefaults // @ game+0x67a674c
	void OnRep_TargetViewRotation(); // Function Engine.PlayerController.OnRep_TargetViewRotation // Native|Public // @ game+0x5a13f0c
	void *fbc51829ff(); // Function Engine.PlayerController.*fbc51829ff // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x67a5680
	void *2f8889f3a5(); // Function Engine.PlayerController.*2f8889f3a5 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a5fd8
	void *b56aa098d6(); // Function Engine.PlayerController.*b56aa098d6 // Net|Native|Event|Public|NetClient|BlueprintCallable // @ game+0xbdcc7c
	void SetName(); // Function Engine.PlayerController.SetName // Exec|Native|Public // @ game+0x67c10ac
	void *3fc73b6f13(); // Function Engine.PlayerController.*3fc73b6f13 // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x8d0ef8
	void *088499e4d0(); // Function Engine.PlayerController.*088499e4d0 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0xc9b3d8
	void *eeb30ba19c(); // Function Engine.PlayerController.*eeb30ba19c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67b81f8
	void *dd4c51e1e3(); // Function Engine.PlayerController.*dd4c51e1e3 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xb628ac
	void *2d910e8d72(); // Function Engine.PlayerController.*2d910e8d72 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a4f14
	void ServerUpdateLevelVisibility(); // Function Engine.PlayerController.ServerUpdateLevelVisibility // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0xba56d4
	void *2918ec2068(); // Function Engine.PlayerController.*2918ec2068 // Net|Native|Event|Public|NetClient|BlueprintCallable // @ game+0x67a62a4
	void SwitchLevel(); // Function Engine.PlayerController.SwitchLevel // Exec|Native|Public // @ game+0x67c4330
	void *d916e2a943(); // Function Engine.PlayerController.*d916e2a943 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a4fac
	void *2c45b56710(); // Function Engine.PlayerController.*2c45b56710 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ad350
	void *34a03dd82e(); // Function Engine.PlayerController.*34a03dd82e // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67bbd24
	void DecDISPSharpness(); // Function Engine.PlayerController.DecDISPSharpness // Exec|Native|Public // @ game+0x67a7b14
	void *f2ad11dc1b(); // Function Engine.PlayerController.*f2ad11dc1b // Net|NetReliableNative|Event|Public|NetClient // @ game+0xa77e44
	void EnableTAA(); // Function Engine.PlayerController.EnableTAA // Exec|Native|Public // @ game+0x67a9c28
	void *c5ab1bf288(); // Function Engine.PlayerController.*c5ab1bf288 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a6fb4
	void *f01c6ad62c(); // Function Engine.PlayerController.*f01c6ad62c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a4dd0
	void *60e8fd4016(); // Function Engine.PlayerController.*60e8fd4016 // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67bc250
	void *9806f2220c(); // Function Engine.PlayerController.*9806f2220c // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67bbf78
	void *2e287bf09c(); // Function Engine.PlayerController.*2e287bf09c // Final|Native|Public|BlueprintCallable // @ game+0x67c4158
	void EnableCheats(); // Function Engine.PlayerController.EnableCheats // Exec|Native|Public // @ game+0x5a415ac
	void *2a9d12a666(); // Function Engine.PlayerController.*2a9d12a666 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a6338
	void *8cada05a90(); // Function Engine.PlayerController.*8cada05a90 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a5804
	void *0fc967239a(); // Function Engine.PlayerController.*0fc967239a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67b9278
	void *c2427940d5(); // Function Engine.PlayerController.*c2427940d5 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67bbeb8
	void *d884ceb98a(); // Function Engine.PlayerController.*d884ceb98a // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x67bc42c
	void *c693ef733b(); // Function Engine.PlayerController.*c693ef733b // Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x67a4318
	void *4d701bd8a2(); // Function Engine.PlayerController.*4d701bd8a2 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a6af8
	void *1d880e774d(); // Function Engine.PlayerController.*1d880e774d // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a4cd4
	void *498dad03e0(); // Function Engine.PlayerController.*498dad03e0 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a6c14
	void FOV(); // Function Engine.PlayerController.FOV // Exec|Native|Public // @ game+0x67a9c54
	void *9fe7d18e40(); // Function Engine.PlayerController.*9fe7d18e40 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ad960
	void ServerUpdateCamera(); // Function Engine.PlayerController.ServerUpdateCamera // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x67bc124
	void *d98ebc4243(); // Function Engine.PlayerController.*d98ebc4243 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a4de8
	void *3347c2ead1(); // Function Engine.PlayerController.*3347c2ead1 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67acfe8
	void *a7b14ec9b0(); // Function Engine.PlayerController.*a7b14ec9b0 // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x67a4d1c
	void *d36fe357cf(); // Function Engine.PlayerController.*d36fe357cf // Native|Public|BlueprintCallable // @ game+0x67c2f70
	void *d488eaf060(); // Function Engine.PlayerController.*d488eaf060 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5aa5a60
	void RestartLevel(); // Function Engine.PlayerController.RestartLevel // Exec|Native|Public // @ game+0x67b99a0
	void *6da664389f(); // Function Engine.PlayerController.*6da664389f // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67aecf4
	void *9d04a2a54b(); // Function Engine.PlayerController.*9d04a2a54b // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x67a6920
	void *6f13f17807(); // Function Engine.PlayerController.*6f13f17807 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67acd08
	void *2c95dc8fa1(); // Function Engine.PlayerController.*2c95dc8fa1 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67adb9c
	void *693b11e6e8(); // Function Engine.PlayerController.*693b11e6e8 // Final|Native|Public|BlueprintCallable // @ game+0x67b9034
	void *125ef13e4f(); // Function Engine.PlayerController.*125ef13e4f // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67ba028
	void StartFire(); // Function Engine.PlayerController.StartFire // Exec|Native|Public // @ game+0x67c3b2c
	void *1cd2062287(); // Function Engine.PlayerController.*1cd2062287 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bd144
	void *83f70de997(); // Function Engine.PlayerController.*83f70de997 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67ba0dc
	void ClientRetryClientRestart(); // Function Engine.PlayerController.ClientRetryClientRestart // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5aa0dc0
	void Pause(); // Function Engine.PlayerController.Pause // Exec|Native|Public // @ game+0x67b8458
	void *8ad4a54cf6(); // Function Engine.PlayerController.*8ad4a54cf6 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ad1a0
	void *9674400037(); // Function Engine.PlayerController.*9674400037 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0520
	void *930cb558f2(); // Function Engine.PlayerController.*930cb558f2 // Native|Public|BlueprintCallable // @ game+0x67be6e4
	void *b41250e3ae(); // Function Engine.PlayerController.*b41250e3ae // Net|Native|Event|Public|NetServer|HasDefaults|NetValidate // @ game+0x67bbd70
	void *a31819daef(); // Function Engine.PlayerController.*a31819daef // Final|Native|Public|BlueprintCallable // @ game+0x67a42a8
	void IncDISPSharpness(); // Function Engine.PlayerController.IncDISPSharpness // Exec|Native|Public // @ game+0x67b10f4
	void LocalTravel(); // Function Engine.PlayerController.LocalTravel // Exec|Native|Public // @ game+0x67b78fc
	void *c11f968a6d(); // Function Engine.PlayerController.*c11f968a6d // Net|NetReliableNative|Event|Public|NetClient // @ game+0xdbbef0
	void *a235b1fcfa(); // Function Engine.PlayerController.*a235b1fcfa // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a5ac8
	void AddYawInput(); // Function Engine.PlayerController.AddYawInput // Native|Public|BlueprintCallable // @ game+0x67a3640
	void *90c95e2107(); // Function Engine.PlayerController.*90c95e2107 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdbc50c
	void *7fa4dd7244(); // Function Engine.PlayerController.*7fa4dd7244 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a6590
	void *c56a5327cc(); // Function Engine.PlayerController.*c56a5327cc // Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable // @ game+0xb4d388
	void *977cb2e1ec(); // Function Engine.PlayerController.*977cb2e1ec // Net|Native|Event|Public|NetClient // @ game+0x67a555c
	void *bad6120f6b(); // Function Engine.PlayerController.*bad6120f6b // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x67a5e00
	void *71377d6c43(); // Function Engine.PlayerController.*71377d6c43 // Final|Native|Public|BlueprintCallable // @ game+0x67c0e5c
	void *c7482859e6(); // Function Engine.PlayerController.*c7482859e6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1844
	void SendToConsole(); // Function Engine.PlayerController.SendToConsole // Exec|Native|Public // @ game+0x67b9f64
	void *46d7f5c82f(); // Function Engine.PlayerController.*46d7f5c82f // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x67ba1c4
	void *90034fd277(); // Function Engine.PlayerController.*90034fd277 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67bbcd8
	void AddPitchInput(); // Function Engine.PlayerController.AddPitchInput // Native|Public|BlueprintCallable // @ game+0x67a2dd4
	void *894d5aab0c(); // Function Engine.PlayerController.*894d5aab0c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a620c
	void *8a25e3a3ec(); // Function Engine.PlayerController.*8a25e3a3ec // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a4d34
	void *91fb0f1f53(); // Function Engine.PlayerController.*91fb0f1f53 // Native|Public|BlueprintCallable // @ game+0x67c3138
	void Camera(); // Function Engine.PlayerController.Camera // Exec|Native|Public // @ game+0x67a3be8
	void DeprojectMousePositionToWorld(); // Function Engine.PlayerController.DeprojectMousePositionToWorld // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67a7cc0
	void *e7688c5ab7(); // Function Engine.PlayerController.*e7688c5ab7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0d4c
	void *73cf67a757(); // Function Engine.PlayerController.*73cf67a757 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae4f8
	void *86b835f913(); // Function Engine.PlayerController.*86b835f913 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67acbd8
	void *52a0531220(); // Function Engine.PlayerController.*52a0531220 // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67bbc2c
	void *a41eb8f989(); // Function Engine.PlayerController.*a41eb8f989 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67c48ec
	void *929bd9b49d(); // Function Engine.PlayerController.*929bd9b49d // Native|Public|BlueprintCallable // @ game+0x67a1588
	void *6b7eb93d95(); // Function Engine.PlayerController.*6b7eb93d95 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67bbacc
	void *162964937a(); // Function Engine.PlayerController.*162964937a // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x67bc3e0
	void *4e12e82776(); // Function Engine.PlayerController.*4e12e82776 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67a7dc8
	void *5d69b1297b(); // Function Engine.PlayerController.*5d69b1297b // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcd8418
	void *07bb10948f(); // Function Engine.PlayerController.*07bb10948f // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a5d24
	void *7f7a5cd988(); // Function Engine.PlayerController.*7f7a5cd988 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a5c90
	void *b94ca05f4b(); // Function Engine.PlayerController.*b94ca05f4b // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5aa5480
	void *f330680f5c(); // Function Engine.PlayerController.*f330680f5c // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x67bc394
	void *c0e5d05621(); // Function Engine.PlayerController.*c0e5d05621 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5a14140
	void *8e5ce08dca(); // Function Engine.PlayerController.*8e5ce08dca // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ace78
	void *23d2eeffeb(); // Function Engine.PlayerController.*23d2eeffeb // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67bc348
	void ToggleSpeaking(); // Function Engine.PlayerController.ToggleSpeaking // Exec|Native|Public // @ game+0x67c44c0
	void *a5bdbf96a2(); // Function Engine.PlayerController.*a5bdbf96a2 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ada54
	void ClientRestart(); // Function Engine.PlayerController.ClientRestart // Net|NetReliableNative|Event|Public|NetClient // @ game+0x92e770
	void *e5134f0647(); // Function Engine.PlayerController.*e5134f0647 // Final|Native|Public|BlueprintCallable // @ game+0x67bff38
	void *a3ca820659(); // Function Engine.PlayerController.*a3ca820659 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67adf74
	void AddRollInput(); // Function Engine.PlayerController.AddRollInput // Native|Public|BlueprintCallable // @ game+0x67a3218
	void *36545cdce1(); // Function Engine.PlayerController.*36545cdce1 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a4e7c
	void *adaa944e6a(); // Function Engine.PlayerController.*adaa944e6a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67c49e0
	void *2fa8097c4a(); // Function Engine.PlayerController.*2fa8097c4a // Net|NetReliableNative|Event|Public|NetClient // @ game+0xced87c
};

// Class Engine.PlayerState
// Size: 0x498 (Inherited: 0x408)
struct APlayerState : AInfo {
	bool Ping; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	int32 PlayerId; // 0x40c(0x04)
	struct UClass* *aff3dca9f7; // 0x410(0x08)
	int32 StartTime; // 0x418(0x04)
	char bIsSpectator : 1; // 0x41c(0x01)
	char *9f71f07fd6 : 1; // 0x41c(0x01)
	char bIsABot : 1; // 0x41c(0x01)
	char pad_41C_3 : 1; // 0x41c(0x01)
	char *7750580eb7 : 1; // 0x41c(0x01)
	char *019f6d2826 : 1; // 0x41c(0x01)
	char pad_41C_6 : 2; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	struct FUniqueNetIdRepl UniqueId; // 0x420(0x18)
	struct FString PlayerName; // 0x438(0x10)
	char pad_448[0x10]; // 0x448(0x10)
	struct FString *de846607a1; // 0x458(0x10)
	char pad_468[0x10]; // 0x468(0x10)
	float Score; // 0x478(0x04)
	char pad_47C[0x18]; // 0x47c(0x18)
	bool *4f96db3413; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)

	void OnRep_bIsInactive(); // Function Engine.PlayerState.OnRep_bIsInactive // Native|Public // @ game+0x5fb79c
	void ReceiveCopyProperties(); // Function Engine.PlayerState.ReceiveCopyProperties // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void OnRep_UniqueId(); // Function Engine.PlayerState.OnRep_UniqueId // Native|Public // @ game+0x5a77d08
	void ReceiveOverrideWith(); // Function Engine.PlayerState.ReceiveOverrideWith // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void OnRep_Score(); // Function Engine.PlayerState.OnRep_Score // Native|Public // @ game+0xdb4c0c
	void OnRep_PlayerName(); // Function Engine.PlayerState.OnRep_PlayerName // Native|Public // @ game+0x5fc3d0
};

// Class Engine.SkeletalMeshActor
// Size: 0x490 (Inherited: 0x408)
struct ASkeletalMeshActor : AActor {
	char pad_408[0x8]; // 0x408(0x08)
	char bShouldDoAnimNotifies : 1; // 0x410(0x01)
	char bWakeOnLevelStart : 1; // 0x410(0x01)
	char pad_410_2 : 6; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x418(0x08)
	struct USkeletalMesh* *986438ef50; // 0x420(0x08)
	struct UPhysicsAsset* *eddbd99a3c; // 0x428(0x08)
	struct UMaterialInterface* *71ff89817b; // 0x430(0x08)
	struct UMaterialInterface* *36ea37d0f9; // 0x438(0x08)
	char pad_440[0x50]; // 0x440(0x50)

	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset // Native|Public // @ game+0x5fc3d0
	void OnRep_ReplicatedMaterial1(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1 // Native|Public // @ game+0x5a77d08
	void OnRep_ReplicatedMesh(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh // Native|Public // @ game+0xdb4c0c
	void OnRep_ReplicatedMaterial0(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0 // Native|Public // @ game+0x5fb79c
};

// Class Engine.SaveGame
// Size: 0x30 (Inherited: 0x30)
struct USaveGame : UObject {
};

// Class Engine.*9de72ef8ed
// Size: 0xa20 (Inherited: 0xa00)
struct U*9de72ef8ed : UPrimitiveComponent {
	struct FColor ShapeColor; // 0x9f8(0x04)
	struct UBodySetup* *461f84b5c9; // 0xa00(0x08)
	char *9bba926356 : 1; // 0xa08(0x01)
	char *c85f8034f3 : 1; // 0xa08(0x01)
	char *838f7c099e : 1; // 0xa08(0x01)
	char pad_A0C_3 : 5; // 0xa0c(0x01)
	char pad_A0D[0x3]; // 0xa0d(0x03)
	struct UClass* AreaClass; // 0xa10(0x08)
	char pad_A18[0x8]; // 0xa18(0x08)
};

// Class Engine.TargetPoint
// Size: 0x408 (Inherited: 0x408)
struct ATargetPoint : AActor {
};

// Class Engine.GameStateBase
// Size: 0x448 (Inherited: 0x408)
struct AGameStateBase : AInfo {
	struct UClass* GameModeClass; // 0x408(0x08)
	struct AGameModeBase* AuthorityGameMode; // 0x410(0x08)
	struct UClass* SpectatorClass; // 0x418(0x08)
	struct TArray<struct APlayerState*> PlayerArray; // 0x420(0x10)
	bool *b3165990bb; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float *0f4cbda7e4; // 0x434(0x04)
	float *beee9616a2; // 0x438(0x04)
	float *72d0135ba7; // 0x43c(0x04)
	char pad_440[0x8]; // 0x440(0x08)

	void *3a712c20b7(); // Function Engine.GameStateBase.*3a712c20b7 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aff78
	void *a2a2e5aa70(); // Function Engine.GameStateBase.*a2a2e5aa70 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0ee0
	void *16cf218094(); // Function Engine.GameStateBase.*16cf218094 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5abf348
	void OnRep_ReplicatedWorldTimeSeconds(); // Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds // Native|Protected // @ game+0xbd25e0
	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass // Native|Protected // @ game+0x3911c8
	void OnRep_GameModeClass(); // Function Engine.GameStateBase.OnRep_GameModeClass // Native|Protected // @ game+0xcc52d8
	void *a8f929f84f(); // Function Engine.GameStateBase.*a8f929f84f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67afed0
	void *32d9e0fcf6(); // Function Engine.GameStateBase.*32d9e0fcf6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a3a1cc
	void *c133fde381(); // Function Engine.GameStateBase.*c133fde381 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0e90
	void OnRep_ReplicatedHasBegunPlay(); // Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay // Native|Protected // @ game+0x5a61e50
	void *3712aecb1b(); // Function Engine.GameStateBase.*3712aecb1b // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aec44
};

// Class Engine.GameState
// Size: 0x468 (Inherited: 0x448)
struct AGameState : AGameStateBase {
	struct FName MatchState; // 0x448(0x08)
	struct FName PreviousMatchState; // 0x450(0x08)
	int32 ElapsedTime; // 0x458(0x04)
	char pad_45C[0xc]; // 0x45c(0x0c)

	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState // Native|Public // @ game+0xb13710
	void OnRep_ElapsedTime(); // Function Engine.GameState.OnRep_ElapsedTime // Native|Public // @ game+0x5a06cb4
};

// Class Engine.BoxComponent
// Size: 0xa30 (Inherited: 0xa20)
struct UBoxComponent : U*9de72ef8ed {
	struct FVector BoxExtent; // 0xa18(0x0c)
	char pad_A2C[0x4]; // 0xa2c(0x04)

	void *98e9dedda9(); // Function Engine.BoxComponent.*98e9dedda9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea640
	void *0f9344886a(); // Function Engine.BoxComponent.*0f9344886a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eca98
	void *47e32f31b3(); // Function Engine.BoxComponent.*47e32f31b3 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6808130
};

// Class Engine.ProjectileMovementComponent
// Size: 0x310 (Inherited: 0x250)
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0x248(0x04)
	float MaxSpeed; // 0x24c(0x04)
	char bRotationFollowsVelocity : 1; // 0x250(0x01)
	char bShouldBounce : 1; // 0x250(0x01)
	char bInitialVelocityInLocalSpace : 1; // 0x250(0x01)
	char bForceSubStepping : 1; // 0x250(0x01)
	char bSimulationEnabled : 1; // 0x250(0x01)
	char bSweepCollision : 1; // 0x250(0x01)
	char bIsHomingProjectile : 1; // 0x250(0x01)
	char bBounceAngleAffectsFriction : 1; // 0x250(0x01)
	char bIsSliding : 1; // 0x251(0x01)
	char bInterpMovement : 1; // 0x251(0x01)
	char bInterpRotation : 1; // 0x251(0x01)
	float PreviousHitTime; // 0x254(0x04)
	struct FVector PreviousHitNormal; // 0x258(0x0c)
	float ProjectileGravityScale; // 0x264(0x04)
	float *e4135d57da; // 0x268(0x04)
	float Bounciness; // 0x26c(0x04)
	float Friction; // 0x270(0x04)
	float BounceVelocityStopSimulatingThreshold; // 0x274(0x04)
	float MinFrictionFraction; // 0x278(0x04)
	struct FMulticastDelegate OnProjectileBounce; // 0x280(0x10)
	struct FMulticastDelegate OnProjectileStop; // 0x290(0x10)
	float HomingAccelerationMagnitude; // 0x2a0(0x04)
	struct USceneComponent* HomingTargetComponent; // 0x2a4(0x08)
	float MaxSimulationTimeStep; // 0x2ac(0x04)
	int32 MaxSimulationIterations; // 0x2b0(0x04)
	int32 BounceAdditionalIterations; // 0x2b4(0x04)
	float InterpLocationTime; // 0x2b8(0x04)
	float InterpRotationTime; // 0x2bc(0x04)
	float InterpLocationMaxLagDistance; // 0x2c0(0x04)
	float InterpLocationSnapToTargetDistance; // 0x2c4(0x04)
	char pad_2C9[0x47]; // 0x2c9(0x47)

	void *831dfc768a(); // Function Engine.ProjectileMovementComponent.*831dfc768a // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6814598
	void OnProjectileBounceDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x22ddc4
	void *00e85c5c6c(); // Function Engine.ProjectileMovementComponent.*00e85c5c6c // Native|Public|BlueprintCallable // @ game+0x680d8d8
	void StopSimulating(); // Function Engine.ProjectileMovementComponent.StopSimulating // Native|Public|HasOutParms|BlueprintCallable // @ game+0x681bfcc
	void *623c7ebb72(); // Function Engine.ProjectileMovementComponent.*623c7ebb72 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67f1640
	void *09e7043d49(); // Function Engine.ProjectileMovementComponent.*09e7043d49 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67fbca4
	void *b58938a410(); // Function Engine.ProjectileMovementComponent.*b58938a410 // Native|Public|BlueprintCallable // @ game+0x5a41594
	void LimitVelocity(); // Function Engine.ProjectileMovementComponent.LimitVelocity // Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67f4078
	void *6da4a97058(); // Function Engine.ProjectileMovementComponent.*6da4a97058 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67f0ba4
	void OnProjectileStopDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
};

// Class Engine.CurveBase
// Size: 0x38 (Inherited: 0x30)
struct UCurveBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)

	void *278bc785ce(); // Function Engine.CurveBase.*278bc785ce // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0820
	void *09895f0919(); // Function Engine.CurveBase.*09895f0919 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0b48
};

// Class Engine.GameUserSettings
// Size: 0x118 (Inherited: 0x30)
struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x30(0x01)
	bool bUseDynamicResolution; // 0x31(0x01)
	char pad_32[0x4e]; // 0x32(0x4e)
	uint32 ResolutionSizeX; // 0x80(0x04)
	uint32 ResolutionSizeY; // 0x84(0x04)
	uint32 LastUserConfirmedResolutionSizeX; // 0x88(0x04)
	uint32 LastUserConfirmedResolutionSizeY; // 0x8c(0x04)
	int32 WindowPosX; // 0x90(0x04)
	int32 WindowPosY; // 0x94(0x04)
	int32 FullscreenMode; // 0x98(0x04)
	int32 LastConfirmedFullscreenMode; // 0x9c(0x04)
	int32 PreferredFullscreenMode; // 0xa0(0x04)
	uint32 Version; // 0xa4(0x04)
	int32 AudioQualityLevel; // 0xa8(0x04)
	float FrameRateLimit; // 0xac(0x04)
	char pad_B0[0x4]; // 0xb0(0x04)
	int32 DesiredScreenWidth; // 0xb4(0x04)
	bool bUseDesiredScreenHeight; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 DesiredScreenHeight; // 0xbc(0x04)
	float LastRecommendedScreenWidth; // 0xc0(0x04)
	float LastRecommendedScreenHeight; // 0xc4(0x04)
	float LastCPUBenchmarkResult; // 0xc8(0x04)
	float LastGPUBenchmarkResult; // 0xcc(0x04)
	struct TArray<float> LastCPUBenchmarkSteps; // 0xd0(0x10)
	struct TArray<float> LastGPUBenchmarkSteps; // 0xe0(0x10)
	float LastGPUBenchmarkMultiplier; // 0xf0(0x04)
	bool bUseHDRDisplayOutput; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	int32 HDRDisplayOutputNits; // 0xf8(0x04)
	enum class EGraphicsAPIType GraphicsAPI; // 0xfc(0x01)
	bool bGPUDebug; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	struct FDateTime GPUDebugActiveDateTime; // 0x100(0x08)
	struct FMulticastDelegate OnGameUserSettingsUINeedsUpdate; // 0x108(0x10)

	void *ff165ed312(); // Function Engine.GameUserSettings.*ff165ed312 // Final|Native|Public|BlueprintCallable // @ game+0x6838580
	void *f99fd71384(); // Function Engine.GameUserSettings.*f99fd71384 // Native|Public|BlueprintCallable // @ game+0x6830ce4
	void GetResolutionScaleInformation(); // Function Engine.GameUserSettings.GetResolutionScaleInformation // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6830df4
	void *b90135664f(); // Function Engine.GameUserSettings.*b90135664f // Native|Public|BlueprintCallable // @ game+0x682f24c
	void *d578d2b56d(); // Function Engine.GameUserSettings.*d578d2b56d // Final|Native|Public|BlueprintCallable // @ game+0x683831c
	void *aa506a5c7e(); // Function Engine.GameUserSettings.*aa506a5c7e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68311f0
	void *4e377c31c3(); // Function Engine.GameUserSettings.*4e377c31c3 // Final|Native|Public|BlueprintCallable // @ game+0x68384e4
	void *12bb8cc58b(); // Function Engine.GameUserSettings.*12bb8cc58b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6832190
	void *1b246fdda3(); // Function Engine.GameUserSettings.*1b246fdda3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x682fd24
	void *e712800bb5(); // Function Engine.GameUserSettings.*e712800bb5 // Native|Public|BlueprintCallable // @ game+0x6246d90
	void *005b909a0a(); // Function Engine.GameUserSettings.*005b909a0a // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x683a0b4
	void *8d0b38839e(); // Function Engine.GameUserSettings.*8d0b38839e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6831cbc
	void *e8aec7750c(); // Function Engine.GameUserSettings.*e8aec7750c // Final|Native|Public|BlueprintCallable // @ game+0x6838290
	void *e6f6ac1408(); // Function Engine.GameUserSettings.*e6f6ac1408 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68311cc
	void *7028637d24(); // Function Engine.GameUserSettings.*7028637d24 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68321c8
	void *694048f68a(); // Function Engine.GameUserSettings.*694048f68a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6831978
	void *34010b7d81(); // Function Engine.GameUserSettings.*34010b7d81 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x682f278
	void *e79626d820(); // Function Engine.GameUserSettings.*e79626d820 // Final|Native|Public|BlueprintCallable // @ game+0x6838618
	void *5bd816f8fd(); // Function Engine.GameUserSettings.*5bd816f8fd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x682fd48
	void *8dfb8f9e1f(); // Function Engine.GameUserSettings.*8dfb8f9e1f // Native|Public|BlueprintCallable // @ game+0x6838880
	void *e4cadefc91(); // Function Engine.GameUserSettings.*e4cadefc91 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x682f290
	void *0919531070(); // Function Engine.GameUserSettings.*0919531070 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x682f84c
	void *8d4e34d1cd(); // Function Engine.GameUserSettings.*8d4e34d1cd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6832718
	void *037ccbd6e4(); // Function Engine.GameUserSettings.*037ccbd6e4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6830248
	void *0f8563b766(); // Function Engine.GameUserSettings.*0f8563b766 // Final|Native|Public|BlueprintCallable // @ game+0x6837bac
	void *8816de7f70(); // Function Engine.GameUserSettings.*8816de7f70 // Final|Native|Public|BlueprintCallable // @ game+0x6826e34
	void *fcb1fc9a28(); // Function Engine.GameUserSettings.*fcb1fc9a28 // Final|Native|Public|BlueprintCallable // @ game+0x68389a0
	void *a5f557ab6c(); // Function Engine.GameUserSettings.*a5f557ab6c // Final|Native|Public|BlueprintCallable // @ game+0x6839134
	void *eea34f3e4c(); // Function Engine.GameUserSettings.*eea34f3e4c // Native|Public|BlueprintCallable // @ game+0x6838120
	void *f589301822(); // Function Engine.GameUserSettings.*f589301822 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6831cd0
	void *9df0b9d539(); // Function Engine.GameUserSettings.*9df0b9d539 // Final|Native|Public|BlueprintCallable // @ game+0x682a960
	void *881d90f45c(); // Function Engine.GameUserSettings.*881d90f45c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x682f834
	void *9305fec020(); // Function Engine.GameUserSettings.*9305fec020 // Final|Native|Public|BlueprintCallable // @ game+0x68390a8
	void *0f1c6cd359(); // Function Engine.GameUserSettings.*0f1c6cd359 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x95eea8
	void *b4854cc3a2(); // Function Engine.GameUserSettings.*b4854cc3a2 // Final|Native|Public|BlueprintCallable // @ game+0x6838ae4
	void *9f9b7968e7(); // Function Engine.GameUserSettings.*9f9b7968e7 // Native|Public|BlueprintCallable // @ game+0xac1580
	void *27602f449d(); // Function Engine.GameUserSettings.*27602f449d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6838cf0
	void *0d72aba354(); // Function Engine.GameUserSettings.*0d72aba354 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68326b0
	void *929ac2c34a(); // Function Engine.GameUserSettings.*929ac2c34a // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6830fec
	void LoadSettings(); // Function Engine.GameUserSettings.LoadSettings // Native|Public|BlueprintCallable // @ game+0x682d2c8
	void *37684c88cb(); // Function Engine.GameUserSettings.*37684c88cb // Native|Public|BlueprintCallable // @ game+0xc30d48
	void *35535da485(); // Function Engine.GameUserSettings.*35535da485 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68321ec
	void *83a6aa3d9c(); // Function Engine.GameUserSettings.*83a6aa3d9c // Final|Native|Public|BlueprintCallable // @ game+0x5a45768
	void *a40f28e95a(); // Function Engine.GameUserSettings.*a40f28e95a // Final|Native|Static|Public|BlueprintCallable // @ game+0x682f94c
	void SetResolutionScaleValue(); // Function Engine.GameUserSettings.SetResolutionScaleValue // Final|Native|Public|BlueprintCallable // @ game+0x6838a50
	void *461f940e49(); // Function Engine.GameUserSettings.*461f940e49 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x682f22c
	void *b114a91f6a(); // Function Engine.GameUserSettings.*b114a91f6a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x682edd0
	void *15262d6763(); // Function Engine.GameUserSettings.*15262d6763 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68321b4
	void *1a1197a006(); // Function Engine.GameUserSettings.*1a1197a006 // Final|Native|Static|Public|BlueprintCallable // @ game+0x59ee978
	void *bbfc2c9965(); // Function Engine.GameUserSettings.*bbfc2c9965 // Final|Native|Public|BlueprintCallable // @ game+0x68392b0
	void *483de8d97e(); // Function Engine.GameUserSettings.*483de8d97e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x682f820
	void *a2b82d5ffa(); // Function Engine.GameUserSettings.*a2b82d5ffa // Native|Public|BlueprintCallable // @ game+0x6826e1c
	void *8f07a62fc0(); // Function Engine.GameUserSettings.*8f07a62fc0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x682ede4
	void *a0cc2f9b1f(); // Function Engine.GameUserSettings.*a0cc2f9b1f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68326f4
	void *f17918e2e4(); // Function Engine.GameUserSettings.*f17918e2e4 // Final|Native|Public|BlueprintCallable // @ game+0x6838914
	void *791bb98775(); // Function Engine.GameUserSettings.*791bb98775 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x682a51c
	void *edc46fa1a0(); // Function Engine.GameUserSettings.*edc46fa1a0 // Final|Native|Public|BlueprintCallable // @ game+0x68383a8
	void *a0bcd9f088(); // Function Engine.GameUserSettings.*a0bcd9f088 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68307bc
	void SaveSettings(); // Function Engine.GameUserSettings.SaveSettings // Native|Public|BlueprintCallable // @ game+0x5a6f65c
	void *d99fdc2874(); // Function Engine.GameUserSettings.*d99fdc2874 // Final|Native|Public|BlueprintCallable // @ game+0x6838d7c
	void *ea56882abd(); // Function Engine.GameUserSettings.*ea56882abd // Final|Native|Public|BlueprintCallable // @ game+0x6838458
	void *20ab35464e(); // Function Engine.GameUserSettings.*20ab35464e // Native|Public|BlueprintCallable // @ game+0x5a4b2b4
	void *714d4f65b8(); // Function Engine.GameUserSettings.*714d4f65b8 // Final|Native|Public|BlueprintCallable // @ game+0x682d64c
	void *d685dce1b6(); // Function Engine.GameUserSettings.*d685dce1b6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68307d0
	void *f390c26976(); // Function Engine.GameUserSettings.*f390c26976 // Native|Public|BlueprintCallable // @ game+0x5a4b204
	void *922b274ba7(); // Function Engine.GameUserSettings.*922b274ba7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x682f010
};

// Class Engine.GameInstance
// Size: 0x1f0 (Inherited: 0x30)
struct UGameInstance : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct U*6653cc84aa* *6653cc84aa; // 0x38(0x08)
	char pad_40[0x90]; // 0x40(0x90)
	struct U*41ff50be2e* *41ff50be2e; // 0xd0(0x08)
	char pad_D8[0x30]; // 0xd8(0x30)
	struct FMulticastDelegate OnKillcamLoadingFinished; // 0x108(0x10)
	char pad_118[0xd8]; // 0x118(0xd8)

	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void HandleTravelError(); // Function Engine.GameInstance.HandleTravelError // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ReceiveInit(); // Function Engine.GameInstance.ReceiveInit // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void DebugRemovePlayer(); // Function Engine.GameInstance.DebugRemovePlayer // Exec|Native|Public // @ game+0x67d9f60
	void HandleNetworkError(); // Function Engine.GameInstance.HandleNetworkError // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void KillcamLoadingFinishedDelegate__DelegateSignature(); // DelegateFunction Engine.GameInstance.KillcamLoadingFinishedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void DebugCreatePlayer(); // Function Engine.GameInstance.DebugCreatePlayer // Exec|Native|Public // @ game+0x67d9ecc
};

// Class Engine.TriggerBase
// Size: 0x410 (Inherited: 0x408)
struct ATriggerBase : AActor {
	struct U*9de72ef8ed* CollisionComponent; // 0x408(0x08)
};

// Class Engine.TriggerBox
// Size: 0x410 (Inherited: 0x410)
struct ATriggerBox : ATriggerBase {
};

// Class Engine.CapsuleComponent
// Size: 0xa30 (Inherited: 0xa20)
struct UCapsuleComponent : U*9de72ef8ed {
	float CapsuleHalfHeight; // 0xa18(0x04)
	float CapsuleRadius; // 0xa1c(0x04)
	float CapsuleHeight; // 0xa20(0x04)
	char pad_A2C[0x4]; // 0xa2c(0x04)

	void *5e7387deea(); // Function Engine.CapsuleComponent.*5e7387deea // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea788
	void *6c17800325(); // Function Engine.CapsuleComponent.*6c17800325 // Native|Public|BlueprintCallable // @ game+0x67be96c
	void *15572a149a(); // Function Engine.CapsuleComponent.*15572a149a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ecafc
	void *baff305a0b(); // Function Engine.CapsuleComponent.*baff305a0b // Native|Public|BlueprintCallable // @ game+0x67bea00
	void *00f4749d00(); // Function Engine.CapsuleComponent.*00f4749d00 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea73c
	void *4ecc54f469(); // Function Engine.CapsuleComponent.*4ecc54f469 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ecad8
	void *01db1cc2f0(); // Function Engine.CapsuleComponent.*01db1cc2f0 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ecc1c
	void *f7e693ed7e(); // Function Engine.CapsuleComponent.*f7e693ed7e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea6e8
	void *c03bd11c98(); // Function Engine.CapsuleComponent.*c03bd11c98 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea69c
	void *6b957cfb76(); // Function Engine.CapsuleComponent.*6b957cfb76 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ecac0
	void *038749a2fe(); // Function Engine.CapsuleComponent.*038749a2fe // Final|Native|Public|BlueprintCallable // @ game+0x6808344
	void *58f998cca1(); // Function Engine.CapsuleComponent.*58f998cca1 // Native|Public|BlueprintCallable // @ game+0x67bea98
	void *4fba3aec1b(); // Function Engine.CapsuleComponent.*4fba3aec1b // Final|Native|Public|BlueprintCallable // @ game+0x68085c8
	void *fed358e535(); // Function Engine.CapsuleComponent.*fed358e535 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea8bc
	void *2e030b6a4a(); // Function Engine.CapsuleComponent.*2e030b6a4a // Final|Native|Public|BlueprintCallable // @ game+0x68084dc
	void *7f740f17f8(); // Function Engine.CapsuleComponent.*7f740f17f8 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ecb14
	void *b260e3db57(); // Function Engine.CapsuleComponent.*b260e3db57 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67eaaf0
};

// Class Engine.PhysicsVolume
// Size: 0x458 (Inherited: 0x440)
struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x440(0x04)
	int32 Priority; // 0x444(0x04)
	float FluidFriction; // 0x448(0x04)
	char bWaterVolume : 1; // 0x44c(0x01)
	char bPhysicsOnContact : 1; // 0x44c(0x01)
	char pad_44C_2 : 6; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	bool *1ffd8a4414; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
};

// Class Engine.DebugCameraController
// Size: 0x810 (Inherited: 0x7c0)
struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x7c0(0x01)
	char *a68cb7b46b : 1; // 0x7c0(0x01)
	char pad_7C0_2 : 6; // 0x7c0(0x01)
	char pad_7C1[0x7]; // 0x7c1(0x07)
	struct U*7516137630* *fbb1cd85af; // 0x7c8(0x08)
	char pad_7D0[0x20]; // 0x7d0(0x20)
	float SpeedScale; // 0x7f0(0x04)
	float InitialMaxSpeed; // 0x7f4(0x04)
	float InitialAccel; // 0x7f8(0x04)
	float InitialDecel; // 0x7fc(0x04)
	char pad_800[0x10]; // 0x800(0x10)

	void *d4e8039368(); // Function Engine.DebugCameraController.*d4e8039368 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0130
	void ReceiveOnActorSelected(); // Function Engine.DebugCameraController.ReceiveOnActorSelected // Event|Protected|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22ddc4
	void ReceiveOnActivate(); // Function Engine.DebugCameraController.ReceiveOnActivate // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ReceiveOnDeactivate(); // Function Engine.DebugCameraController.ReceiveOnDeactivate // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *5048ac03eb(); // Function Engine.DebugCameraController.*5048ac03eb // Final|Native|Public|BlueprintCallable // @ game+0x67c1414
	void ShowDebugSelectedInfo(); // Function Engine.DebugCameraController.ShowDebugSelectedInfo // Exec|Native|Public // @ game+0x67c365c
	void *2a0c85c652(); // Function Engine.DebugCameraController.*2a0c85c652 // Final|Native|Public|BlueprintCallable // @ game+0x67c445c
};

// Class Engine.Channel
// Size: 0x70 (Inherited: 0x30)
struct UChannel : UObject {
	struct UNetConnection* Connection; // 0x30(0x08)
	char pad_38[0x38]; // 0x38(0x38)
};

// Class Engine.ActorChannel
// Size: 0x370 (Inherited: 0x70)
struct UActorChannel : UChannel {
	struct AActor* Actor; // 0x70(0x08)
	char pad_78[0x2f8]; // 0x78(0x2f8)
};

// Class Engine.DemoActorChannel
// Size: 0x390 (Inherited: 0x370)
struct UDemoActorChannel : UActorChannel {
	char pad_370[0x20]; // 0x370(0x20)
};

// Class Engine.NavigationObjectBase
// Size: 0x430 (Inherited: 0x408)
struct ANavigationObjectBase : AActor {
	char pad_408[0x8]; // 0x408(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x410(0x08)
	struct UBillboardComponent* *e995b1374d; // 0x418(0x08)
	struct UBillboardComponent* *3a07fdffe9; // 0x420(0x08)
	char *13444ae17a : 1; // 0x428(0x01)
	char pad_428_1 : 7; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
};

// Class Engine.PlayerStart
// Size: 0x438 (Inherited: 0x430)
struct APlayerStart : ANavigationObjectBase {
	struct FName PlayerStartTag; // 0x430(0x08)
};

// Class Engine.CheatManager
// Size: 0x80 (Inherited: 0x30)
struct UCheatManager : UObject {
	struct ADebugCameraController* *fd70a6f96b; // 0x30(0x08)
	struct UClass* DebugCameraControllerClass; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)

	void StreamLevelIn(); // Function Engine.CheatManager.StreamLevelIn // Exec|Native|Public // @ game+0x6839ca0
	void LogLoc(); // Function Engine.CheatManager.LogLoc // Exec|Native|Public // @ game+0x68357f8
	void InvertMouse(); // Function Engine.CheatManager.InvertMouse // Final|Exec|Native|Public // @ game+0x6832124
	void FlushLog(); // Function Engine.CheatManager.FlushLog // Exec|Native|Public // @ game+0x682ec28
	void CheatScript(); // Function Engine.CheatManager.CheatScript // Final|Exec|Native|Public // @ game+0x682a5e0
	void TestCollisionDistance(); // Function Engine.CheatManager.TestCollisionDistance // Exec|Native|Public // @ game+0x683a0dc
	void DumpChatState(); // Function Engine.CheatManager.DumpChatState // Exec|Native|Public // @ game+0x682d478
	void PlayersOnly(); // Function Engine.CheatManager.PlayersOnly // Exec|Native|Public|BlueprintCallable // @ game+0x6837200
	void StreamLevelOut(); // Function Engine.CheatManager.StreamLevelOut // Exec|Native|Public // @ game+0x6839d34
	void God(); // Function Engine.CheatManager.God // Exec|Native|Public|BlueprintCallable // @ game+0x5a6f5c4
	void ViewSelf(); // Function Engine.CheatManager.ViewSelf // Exec|Native|Public // @ game+0x9f5e54
	void ViewPlayer(); // Function Engine.CheatManager.ViewPlayer // Exec|Native|Public // @ game+0x683b700
	void DebugCapsuleSweepCapture(); // Function Engine.CheatManager.DebugCapsuleSweepCapture // Exec|Native|Public // @ game+0x682cfc4
	void Slomo(); // Function Engine.CheatManager.Slomo // Exec|Native|Public|BlueprintCallable // @ game+0x6839708
	void DestroyPawns(); // Function Engine.CheatManager.DestroyPawns // Exec|Native|Public // @ game+0x615bcd4
	void RebuildNavigation(); // Function Engine.CheatManager.RebuildNavigation // Exec|Native|Public // @ game+0x6837410
	void Summon(); // Function Engine.CheatManager.Summon // Exec|Native|Public // @ game+0x6839ff0
	void DumpPartyState(); // Function Engine.CheatManager.DumpPartyState // Exec|Native|Public // @ game+0x682d490
	void ToggleDebugCamera(); // Function Engine.CheatManager.ToggleDebugCamera // Exec|Native|Public // @ game+0x683aea0
	void DebugCapsuleSweepSize(); // Function Engine.CheatManager.DebugCapsuleSweepSize // Exec|Native|Public // @ game+0x682d13c
	void OnlyLoadLevel(); // Function Engine.CheatManager.OnlyLoadLevel // Exec|Native|Public // @ game+0x6836c80
	void Ghost(); // Function Engine.CheatManager.Ghost // Exec|Native|Public|BlueprintCallable // @ game+0x5a4b204
	void Fly(); // Function Engine.CheatManager.Fly // Exec|Native|Public|BlueprintCallable // @ game+0x5a6f674
	void ToggleAILogging(); // Function Engine.CheatManager.ToggleAILogging // Exec|Native|Public // @ game+0x683ae88
	void DebugCapsuleSweep(); // Function Engine.CheatManager.DebugCapsuleSweep // Exec|Native|Public // @ game+0xc2dbb8
	void BugItGo(); // Function Engine.CheatManager.BugItGo // Exec|Native|Public // @ game+0x6828a14
	void DestroyAllPawnsExceptTarget(); // Function Engine.CheatManager.DestroyAllPawnsExceptTarget // Exec|Native|Public // @ game+0x682d2b0
	void *9806f2220c(); // Function Engine.CheatManager.*9806f2220c // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6838244
	void SetMouseSensitivityToDefault(); // Function Engine.CheatManager.SetMouseSensitivityToDefault // Final|Exec|Native|Public // @ game+0x68387d4
	void *1dc29b1854(); // Function Engine.CheatManager.*1dc29b1854 // Native|Protected|BlueprintCallable // @ game+0x682d540
	void DamageTarget(); // Function Engine.CheatManager.DamageTarget // Exec|Native|Public|BlueprintCallable // @ game+0x682cf28
	void DebugCapsuleSweepPawn(); // Function Engine.CheatManager.DebugCapsuleSweepPawn // Exec|Native|Public // @ game+0x682d124
	void DumpVoiceMutingState(); // Function Engine.CheatManager.DumpVoiceMutingState // Exec|Native|Public // @ game+0x682d4a8
	void ReceiveEndPlay(); // Function Engine.CheatManager.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void Walk(); // Function Engine.CheatManager.Walk // Exec|Native|Public|BlueprintCallable // @ game+0x5a6f65c
	void ChangeSize(); // Function Engine.CheatManager.ChangeSize // Exec|Native|Public|BlueprintCallable // @ game+0x682a544
	void DestroyTarget(); // Function Engine.CheatManager.DestroyTarget // Exec|Native|Public|BlueprintCallable // @ game+0x5a6f68c
	void Teleport(); // Function Engine.CheatManager.Teleport // Exec|Native|Public|BlueprintCallable // @ game+0x5a6f61c
	void ViewActor(); // Function Engine.CheatManager.ViewActor // Exec|Native|Public // @ game+0x683b5d8
	void FreezeFrame(); // Function Engine.CheatManager.FreezeFrame // Exec|Native|Public|BlueprintCallable // @ game+0x682ec40
	void BugItStringCreator(); // Function Engine.CheatManager.BugItStringCreator // Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x6828c30
	void DestroyAll(); // Function Engine.CheatManager.DestroyAll // Exec|Native|Public // @ game+0x682d21c
	void BugIt(); // Function Engine.CheatManager.BugIt // Exec|Native|Public // @ game+0x6828950
	void DebugCapsuleSweepComplex(); // Function Engine.CheatManager.DebugCapsuleSweepComplex // Exec|Native|Public // @ game+0x682d08c
	void DebugCapsuleSweepChannel(); // Function Engine.CheatManager.DebugCapsuleSweepChannel // Exec|Native|Public // @ game+0x682cfdc
	void SetNavDrawDistance(); // Function Engine.CheatManager.SetNavDrawDistance // Final|Exec|Native|Public // @ game+0x68387e8
	void SetWorldOrigin(); // Function Engine.CheatManager.SetWorldOrigin // Final|Exec|Native|Public // @ game+0x683933c
	void *9548b29d4b(); // Function Engine.CheatManager.*9548b29d4b // Native|Protected|BlueprintCallable // @ game+0xcc7a50
	void DumpOnlineSessionState(); // Function Engine.CheatManager.DumpOnlineSessionState // Exec|Native|Public // @ game+0x59f0bd4
	void DebugCapsuleSweepClear(); // Function Engine.CheatManager.DebugCapsuleSweepClear // Exec|Native|Public // @ game+0x682d074
	void ReceiveInitCheatManager(); // Function Engine.CheatManager.ReceiveInitCheatManager // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ViewClass(); // Function Engine.CheatManager.ViewClass // Exec|Native|Public // @ game+0x683b66c
};

// Class Engine.*1b1f1e4584
// Size: 0xa10 (Inherited: 0xa00)
struct U*1b1f1e4584 : UPrimitiveComponent {
	struct TArray<struct FNavigationLink> Links; // 0xa00(0x10)
};

// Class Engine.NavArea
// Size: 0x48 (Inherited: 0x30)
struct UNavArea : UObject {
	float DefaultCost; // 0x30(0x04)
	float FixedAreaEnteringCost; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x3c(0x04)
	char bSupportsAgent0 : 1; // 0x40(0x01)
	char bSupportsAgent1 : 1; // 0x40(0x01)
	char bSupportsAgent2 : 1; // 0x40(0x01)
	char bSupportsAgent3 : 1; // 0x40(0x01)
	char bSupportsAgent4 : 1; // 0x40(0x01)
	char bSupportsAgent5 : 1; // 0x40(0x01)
	char bSupportsAgent6 : 1; // 0x40(0x01)
	char bSupportsAgent7 : 1; // 0x40(0x01)
	char bSupportsAgent8 : 1; // 0x41(0x01)
	char bSupportsAgent9 : 1; // 0x41(0x01)
	char bSupportsAgent10 : 1; // 0x41(0x01)
	char bSupportsAgent11 : 1; // 0x41(0x01)
	char bSupportsAgent12 : 1; // 0x41(0x01)
	char bSupportsAgent13 : 1; // 0x41(0x01)
	char bSupportsAgent14 : 1; // 0x41(0x01)
	char bSupportsAgent15 : 1; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class Engine.LevelScriptActor
// Size: 0x410 (Inherited: 0x408)
struct ALevelScriptActor : AActor {
	char *9fe0b32409 : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)

	void *930cb558f2(); // Function Engine.LevelScriptActor.*930cb558f2 // Native|Public|BlueprintCallable // @ game+0xb62080
	void WorldOriginLocationChanged(); // Function Engine.LevelScriptActor.WorldOriginLocationChanged // Event|Public|HasDefaults|BlueprintEvent // @ game+0x22ddc4
	void *60b99c5d37(); // Function Engine.LevelScriptActor.*60b99c5d37 // Native|Public|BlueprintCallable // @ game+0x5a755b0
	void LevelReset(); // Function Engine.LevelScriptActor.LevelReset // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x22ddc4
};

// Class Engine.ChildActorComponent
// Size: 0x500 (Inherited: 0x4d0)
struct UChildActorComponent : USceneComponent {
	struct UClass* ChildActorClass; // 0x4d0(0x08)
	struct AActor* ChildActor; // 0x4d8(0x08)
	struct AActor* ChildActorTemplate; // 0x4e0(0x08)
	char pad_4E8[0x18]; // 0x4e8(0x18)

	void *d9cb75fbb5(); // Function Engine.ChildActorComponent.*d9cb75fbb5 // Final|Native|Public|BlueprintCallable // @ game+0x67be654
};

// Class Engine.CameraComponent
// Size: 0xac0 (Inherited: 0x4d0)
struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x4d0(0x04)
	float OrthoWidth; // 0x4d4(0x04)
	float OrthoNearClipPlane; // 0x4d8(0x04)
	float OrthoFarClipPlane; // 0x4dc(0x04)
	float AspectRatio; // 0x4e0(0x04)
	char bConstrainAspectRatio : 1; // 0x4e4(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x4e4(0x01)
	char bLockToHmd : 1; // 0x4e4(0x01)
	char bUsePawnControlRotation : 1; // 0x4e4(0x01)
	char pad_4E4_4 : 4; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	enum class ECameraProjectionMode ProjectionMode; // 0x4e8(0x01)
	char pad_4E9[0x3]; // 0x4e9(0x03)
	float PostProcessBlendWeight; // 0x4ec(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x4f0(0x570)
	char pad_A60[0x58]; // 0xa60(0x58)
	char bUseControllerViewRotation : 1; // 0xab8(0x01)
	char pad_AB8_1 : 7; // 0xab8(0x01)
	char pad_AB9[0x7]; // 0xab9(0x07)

	void *8a619a71fe(); // Function Engine.CameraComponent.*8a619a71fe // Final|Native|Public|BlueprintCallable // @ game+0x6806bc4
	void *79844d1a03(); // Function Engine.CameraComponent.*79844d1a03 // Final|Native|Public|BlueprintCallable // @ game+0x680d718
	void *334e73d773(); // Function Engine.CameraComponent.*334e73d773 // Final|Native|Public|BlueprintCallable // @ game+0x680fd34
	void *ecceb55aba(); // Function Engine.CameraComponent.*ecceb55aba // Final|Native|Public|BlueprintCallable // @ game+0x67c9c40
	void *5c14709928(); // Function Engine.CameraComponent.*5c14709928 // Final|Native|Public|BlueprintCallable // @ game+0x68107dc
	void *05dd1e25b7(); // Function Engine.CameraComponent.*05dd1e25b7 // Final|Native|Public|BlueprintCallable // @ game+0x6810b68
	void *c77d39d54d(); // Function Engine.CameraComponent.*c77d39d54d // Final|Native|Public|BlueprintCallable // @ game+0x6809378
	void *cb0966e862(); // Function Engine.CameraComponent.*cb0966e862 // Final|Native|Public|BlueprintCallable // @ game+0x680b9cc
	void *06060d8a3e(); // Function Engine.CameraComponent.*06060d8a3e // Final|Native|Public|BlueprintCallable // @ game+0x680fc9c
	void *f1c8bde037(); // Function Engine.CameraComponent.*f1c8bde037 // Native|Public|HasOutParms|BlueprintCallable // @ game+0x67e2db8
	void *cb5cdd69b3(); // Function Engine.CameraComponent.*cb5cdd69b3 // Final|Native|Public|BlueprintCallable // @ game+0x6814050
};

// Class Engine.Engine
// Size: 0xf50 (Inherited: 0x30)
struct UEngine : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UFont* TinyFont; // 0x38(0x08)
	struct FStringAssetReference TinyFontName; // 0x40(0x10)
	struct UFont* SmallFont; // 0x50(0x08)
	struct FStringAssetReference SmallFontName; // 0x58(0x10)
	struct UFont* *b2fb6d5918; // 0x68(0x08)
	struct FStringAssetReference MediumFontName; // 0x70(0x10)
	struct UFont* LargeFont; // 0x80(0x08)
	struct FStringAssetReference LargeFontName; // 0x88(0x10)
	struct UFont* *17d1a5c92f; // 0x98(0x08)
	struct FStringAssetReference SubtitleFontName; // 0xa0(0x10)
	struct TArray<struct UFont*> *dddf4c9088; // 0xb0(0x10)
	struct FStringClassReference DefaultBlueprintBaseClassName; // 0xc0(0x10)
	int32 *4a63163b75; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FStringAssetReference DefaultBloomKernelTextureName; // 0xd8(0x10)
	struct FString VertexColorViewModeMaterialName_ColorOnly; // 0xe8(0x10)
	struct FString WireframeMaterialName; // 0xf8(0x10)
	struct UMaterial* *904e29baa1; // 0x108(0x08)
	float DisplayGamma; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct UMaterial* DebugMeshMaterial; // 0x118(0x08)
	struct FFloatRange SmoothedFrameRateRange; // 0x120(0x10)
	struct UMaterial* *fdd0f56f71; // 0x130(0x08)
	struct FStringAssetReference HighFrequencyNoiseTextureName; // 0x138(0x10)
	struct TArray<struct F*588c0e2b3a> ActiveGameNameRedirects; // 0x148(0x10)
	struct UMaterial* *8c96c8d713; // 0x158(0x08)
	char pad_160[0x50]; // 0x160(0x50)
	struct UGameUserSettings* GameUserSettings; // 0x1b0(0x08)
	struct FStringAssetReference DefaultBSPVertexTextureName; // 0x1b8(0x10)
	struct FStringAssetReference RemoveSurfaceMaterialName; // 0x1c8(0x10)
	struct UTexture* WeightMapPlaceholderTexture; // 0x1d8(0x08)
	struct UMaterialInstanceDynamic* *419956b350; // 0x1e0(0x08)
	struct TArray<struct FString> AdditionalFontNames; // 0x1e8(0x10)
	char bHardwareSurveyEnabled : 1; // 0x1f8(0x01)
	char pad_1F8_1 : 7; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FStringClassReference AIControllerClassName; // 0x200(0x10)
	struct TArray<struct FLinearColor> LightComplexityColors; // 0x210(0x10)
	struct FStringAssetReference DefaultBokehTextureName; // 0x220(0x10)
	struct FStringAssetReference PreIntegratedSkinBRDFTextureName; // 0x230(0x10)
	float RenderLightMapDensityGrayscaleScale; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct FStringAssetReference DefaultTextureName; // 0x248(0x10)
	float PrimitiveProbablyVisibleTime; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UMaterial* *e7a58e7605; // 0x260(0x08)
	struct UTexture2D* *8bd6845839; // 0x268(0x08)
	struct UClass* *cfd562edce; // 0x270(0x08)
	struct UTexture2D* *07a2faa8d2; // 0x278(0x08)
	struct TArray<struct FLinearColor> StreamingAccuracyColors; // 0x280(0x10)
	int32 *3fd60cfe7a; // 0x290(0x04)
	enum class *ea60031bfe *52dc8ce7e2; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UMaterialInstanceDynamic* *882cf2b119; // 0x298(0x08)
	struct UMaterial* RemoveSurfaceMaterial; // 0x2a0(0x08)
	struct UTexture2D* *cdaf3acb6f; // 0x2a8(0x08)
	struct FStringClassReference LocalPlayerClassName; // 0x2b0(0x10)
	struct UClass* *e7983e4706; // 0x2c0(0x08)
	float NearClipPlane; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UMaterial* *569ed0c9a4; // 0x2d0(0x08)
	struct FStringClassReference PhysicsCollisionHandlerClassName; // 0x2d8(0x10)
	struct FString PlayOnConsoleSaveDir; // 0x2e8(0x10)
	float MinDesiredFrameRate; // 0x2f8(0x04)
	float NetClientTicksPerSecond; // 0x2fc(0x04)
	struct UMaterial* *6095551fc5; // 0x300(0x08)
	struct UTexture2D* MiniFontTexture; // 0x308(0x08)
	struct UMaterial* ShadedLevelColorationLitMaterial; // 0x310(0x08)
	struct UClass* *db10b3ff9c; // 0x318(0x08)
	char bSubtitlesForcedOff : 1; // 0x320(0x01)
	char pad_320_1 : 7; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct TArray<struct FLinearColor> QuadComplexityColors; // 0x328(0x10)
	struct UTexture2D* *9735291500; // 0x338(0x08)
	struct UAssetManager* AssetManager; // 0x340(0x08)
	struct FColor *18889b23a4; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FStringClassReference AvoidanceManagerClassName; // 0x350(0x10)
	struct FStringClassReference GameViewportClientClassName; // 0x360(0x10)
	struct TArray<struct F*96501223f2> ActiveClassRedirects; // 0x370(0x10)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x380(0x10)
	struct FColor *a1f148b920; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FString *9a7e172902; // 0x398(0x10)
	struct FStringClassReference NavigationSystemClassName; // 0x3a8(0x10)
	char bRenderLightMapDensityGrayscale : 1; // 0x3b8(0x01)
	char pad_3B8_1 : 7; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct UClass* *3b5143fa7c; // 0x3c0(0x08)
	struct UMaterialInstanceDynamic* *67a2670d5b; // 0x3c8(0x08)
	struct UObject* *bc69c4c2bd; // 0x3d0(0x08)
	struct FString ShadedLevelColorationLitMaterialName; // 0x3d8(0x10)
	struct FColor *4c5bc6371e; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct FStringAssetReference DefaultReflectionCaptureTextureName; // 0x3f0(0x10)
	struct UGameViewportClient* GameViewport; // 0x400(0x08)
	struct FString *258f8c994b; // 0x408(0x10)
	struct FString ShadedLevelColorationUnlitMaterialName; // 0x418(0x10)
	struct FString VertexColorMaterialName; // 0x428(0x10)
	struct FStringAssetReference WeightMapPlaceholderTextureName; // 0x438(0x10)
	struct UMaterial* LevelColorationLitMaterial; // 0x448(0x08)
	struct FColor *0aed2d0bb7; // 0x450(0x04)
	char bPauseOnLossOfFocus : 1; // 0x454(0x01)
	char pad_454_1 : 7; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	int32 MaxParticleResize; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FStringAssetReference LightMapDensityTextureName; // 0x460(0x10)
	struct FStringAssetReference MiniFontTextureName; // 0x470(0x10)
	struct TArray<struct F*305cf84e03> ActiveStructRedirects; // 0x480(0x10)
	struct UClass* *bae4c5214e; // 0x490(0x08)
	char bAllowMatureLanguage : 1; // 0x498(0x01)
	char pad_498_1 : 7; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	float CameraRotationThreshold; // 0x49c(0x04)
	struct FStringClassReference GameSingletonClassName; // 0x4a0(0x10)
	struct FString VertexColorViewModeMaterialName_GreenOnly; // 0x4b0(0x10)
	struct UClass* *920ed2f2c5; // 0x4c0(0x08)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x4c8(0x01)
	char pad_4C8_1 : 7; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	int32 NumPawnsAllowedToBeSpawnedInAFrame; // 0x4cc(0x04)
	char bShouldGenerateLowQualityLightmaps : 1; // 0x4d0(0x01)
	char pad_4D0_1 : 7; // 0x4d0(0x01)
	char pad_4D1[0xf]; // 0x4d1(0x0f)
	struct UMaterial* *b2d86d5e63; // 0x4e0(0x08)
	struct FColor *57697de8c8; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct TArray<struct FString> *4fa0bda95b; // 0x4f0(0x10)
	char pad_500[0x18]; // 0x500(0x18)
	struct UMaterial* *158ef2b728; // 0x518(0x08)
	struct UTexture2D* *3354aa5029; // 0x520(0x08)
	struct FString LightingTexelDensityName; // 0x528(0x10)
	float CameraTranslationThreshold; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct TArray<struct FLinearColor> ShaderComplexityColors; // 0x540(0x10)
	struct FLinearColor LightingOnlyBrightness; // 0x550(0x10)
	struct FLinearColor LightingOnlySpecular; // 0x560(0x10)
	int32 MaximumLoopIterationCount; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct FStringAssetReference DefaultDiffuseTextureName; // 0x578(0x10)
	float *b1796a28c0; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct UClass* *ec063d291c; // 0x590(0x08)
	struct FLinearColor LightMapDensitySelectedColor; // 0x598(0x10)
	struct TArray<struct FLinearColor> LODColorationColors; // 0x5a8(0x10)
	struct FStringAssetReference PreviewShadowsIndicatorMaterialName; // 0x5b8(0x10)
	struct UMaterial* LevelColorationUnlitMaterial; // 0x5c8(0x08)
	struct UClass* *6618489028; // 0x5d0(0x08)
	char bSubtitlesEnabled : 1; // 0x5d8(0x01)
	char pad_5D8_1 : 7; // 0x5d8(0x01)
	char pad_5D9[0x3]; // 0x5d9(0x03)
	struct FColor *cb2dd6ab2d; // 0x5dc(0x04)
	struct FStringAssetReference DebugMeshMaterialName; // 0x5e0(0x10)
	struct FString VertexColorViewModeMaterialName_BlueOnly; // 0x5f0(0x10)
	float IdealLightMapDensity; // 0x600(0x04)
	char pad_604[0x4]; // 0x604(0x04)
	struct TArray<struct F*93620d28f2> ActivePluginRedirects; // 0x608(0x10)
	struct TArray<struct FLinearColor> StationaryLightOverlapColors; // 0x618(0x10)
	struct FString LevelColorationUnlitMaterialName; // 0x628(0x10)
	struct FStringClassReference WorldSettingsClassName; // 0x638(0x10)
	struct UMaterial* WireframeMaterial; // 0x648(0x08)
	float MaxPixelShaderAdditiveComplexityCount; // 0x650(0x04)
	float MaxLightMapDensity; // 0x654(0x04)
	struct UMaterial* *289fbcf95e; // 0x658(0x08)
	struct UMaterialInstanceDynamic* *5b15e6100a; // 0x660(0x08)
	float MeshLODRange; // 0x668(0x04)
	char pad_66C[0x4]; // 0x66c(0x04)
	struct FStringClassReference ConsoleClassName; // 0x670(0x10)
	struct FColor *c2b218ca0a; // 0x680(0x04)
	char pad_684[0x4]; // 0x684(0x04)
	struct FStringClassReference LevelScriptActorClassName; // 0x688(0x10)
	struct UTexture* DefaultDiffuseTexture; // 0x698(0x08)
	struct UMaterial* *13a610002f; // 0x6a0(0x08)
	struct UTexture2D* *d8417c9941; // 0x6a8(0x08)
	struct TArray<struct F*ecc95ccbfb> *6ae7184684; // 0x6b0(0x10)
	struct FStringAssetReference DefaultPhysMaterialName; // 0x6c0(0x10)
	struct FString LevelColorationLitMaterialName; // 0x6d0(0x10)
	float FixedFrameRate; // 0x6e0(0x04)
	char pad_6E4[0x4]; // 0x6e4(0x04)
	struct FStringClassReference GameUserSettingsClassName; // 0x6e8(0x10)
	struct FLinearColor DefaultSelectedMaterialColor; // 0x6f8(0x10)
	struct FLinearColor *44bd42ad56; // 0x708(0x10)
	struct FLinearColor *ba04574914; // 0x718(0x10)
	struct FLinearColor *8e0bdb2efe; // 0x728(0x10)
	struct FLinearColor *613128785f; // 0x738(0x10)
	bool *f9293e381d; // 0x748(0x01)
	char pad_749[0x3]; // 0x749(0x03)
	char bEnableOnScreenDebugMessages : 1; // 0x74c(0x01)
	char *216307556a : 1; // 0x74c(0x01)
	char bSuppressMapWarnings : 1; // 0x74c(0x01)
	char bDisableAILogging : 1; // 0x74c(0x01)
	char pad_74C_4 : 4; // 0x74c(0x01)
	char pad_74D[0x3]; // 0x74d(0x03)
	uint32 bEnableVisualLogRecordingOnStart; // 0x750(0x04)
	struct FBox *3dc6cbcd94; // 0x754(0x1c)
	char pad_770[0x4]; // 0x770(0x04)
	int32 *7b0f12bdd7; // 0x774(0x04)
	char *8bdcda74ad : 1; // 0x778(0x01)
	char pad_778_1 : 7; // 0x778(0x01)
	char pad_779[0x7]; // 0x779(0x07)
	struct FString ParticleEventManagerClassPath; // 0x780(0x10)
	char pad_790[0x20]; // 0x790(0x20)
	float SelectionHighlightIntensity; // 0x7b0(0x04)
	float *460eba5c32; // 0x7b4(0x04)
	float BSPSelectionHighlightIntensity; // 0x7b8(0x04)
	float HoverHighlightIntensity; // 0x7bc(0x04)
	float *fdb4353d84; // 0x7c0(0x04)
	float PrimitiveBaseIntensity; // 0x7c4(0x04)
	float PrimitiveSelectedIntensity; // 0x7c8(0x04)
	float PrimitiveHoverIntensity; // 0x7cc(0x04)
	char pad_7D0[0x290]; // 0x7d0(0x290)
	struct F*eab1f0d427 PhysicErrorCorrection; // 0xa60(0x1c)
	char bCanBlueprintsTickByDefault : 1; // 0xa7c(0x01)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0xa7c(0x01)
	char bAllowMultiThreadedAnimationUpdate : 1; // 0xa7c(0x01)
	char bEnableEditorPSysRealtimeLOD : 1; // 0xa7c(0x01)
	char pad_A7C_4 : 1; // 0xa7c(0x01)
	char bSmoothFrameRate : 1; // 0xa7c(0x01)
	char bUseFixedFrameRate : 1; // 0xa7c(0x01)
	char pad_A7C_7 : 1; // 0xa7c(0x01)
	char pad_A7D[0x3]; // 0xa7d(0x03)
	struct UTexture2D* DefaultTexture; // 0xa80(0x08)
	struct FColor *701230078d; // 0xa88(0x04)
	float MaxOcclusionPixelsFraction; // 0xa8c(0x04)
	struct FStringAssetReference ArrowMaterialName; // 0xa90(0x10)
	struct FColor *c79f672cb1; // 0xaa0(0x04)
	char pad_AA4[0x4]; // 0xaa4(0x04)
	struct UMaterialInstanceDynamic* *41801eae84; // 0xaa8(0x08)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0xab0(0x08)
	int32 *6953cade36; // 0xab8(0x04)
	char pad_ABC[0x1d4]; // 0xabc(0x1d4)
	struct TArray<struct F*34e3a3f3fe> NetDriverDefinitions; // 0xc90(0x10)
	struct TArray<struct FString> ServerActors; // 0xca0(0x10)
	struct TArray<struct FString> *ac79ee85a0; // 0xcb0(0x10)
	char *2eec60230d : 1; // 0xcc0(0x01)
	char pad_CC0_1 : 7; // 0xcc0(0x01)
	char pad_CC1[0x3]; // 0xcc1(0x03)
	struct FColor *1786a736fd; // 0xcc4(0x04)
	struct FLinearColor LightMapDensityVertexMappedColor; // 0xcc8(0x10)
	struct FString VertexColorViewModeMaterialName_RedOnly; // 0xcd8(0x10)
	struct FColor *d488e8b15f; // 0xce8(0x04)
	char pad_CEC[0xc]; // 0xcec(0x0c)
	struct FStringClassReference AssetManagerClassName; // 0xcf8(0x10)
	struct TArray<struct F*1c8a6a1959> StatColorMappings; // 0xd08(0x10)
	struct FColor *f8920bc53c; // 0xd18(0x04)
	char pad_D1C[0x4]; // 0xd1c(0x04)
	struct UMaterialInstanceDynamic* *5ecd46dbd6; // 0xd20(0x08)
	float RenderLightMapDensityColorScale; // 0xd28(0x04)
	char pad_D2C[0x4]; // 0xd2c(0x04)
	struct UTextureCube* *c142ea92cf; // 0xd30(0x08)
	struct FStringAssetReference InvalidLightmapSettingsMaterialName; // 0xd38(0x10)
	struct FColor *f649ca17a3; // 0xd48(0x04)
	char pad_D4C[0x4]; // 0xd4c(0x04)
	struct UMaterialInstanceDynamic* *7d728f8e49; // 0xd50(0x08)
	float MaxES2PixelShaderAdditiveComplexityCount; // 0xd58(0x04)
	char pad_D5C[0x4]; // 0xd5c(0x04)
	struct UClass* *7ebef4665a; // 0xd60(0x08)
	struct TArray<struct FLinearColor> HLODColorationColors; // 0xd68(0x10)
	struct UMaterial* *d4696a6c50; // 0xd78(0x08)
	struct UMaterial* VertexColorMaterial; // 0xd80(0x08)
	float MinLightMapDensity; // 0xd88(0x04)
	int32 MaxParticleResizeWarn; // 0xd8c(0x04)
	char pad_D90[0x18]; // 0xd90(0x18)
	int32 *978b7abcd7; // 0xda8(0x04)
	char pad_DAC[0x1a4]; // 0xdac(0x1a4)
};

// Class Engine.*e0f0196484
// Size: 0x40 (Inherited: 0x30)
struct U*e0f0196484 : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.GameViewportClient
// Size: 0x670 (Inherited: 0x40)
struct UGameViewportClient : U*e0f0196484 {
	char pad_40[0x1c0]; // 0x40(0x1c0)
	struct TArray<struct F*a821055bfd> *74869acfa5; // 0x200(0x10)
	char pad_210[0x248]; // 0x210(0x248)
	struct UGameInstance* GameInstance; // 0x458(0x08)
	char pad_460[0x1f0]; // 0x460(0x1f0)
	struct UConsole* *9690a62fe8; // 0x650(0x08)
	char pad_658[0x18]; // 0x658(0x18)

	void SetConsoleTarget(); // Function Engine.GameViewportClient.SetConsoleTarget // Exec|Native|Public // @ game+0x6809164
	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers // Exec|Native|Public // @ game+0x67c43f4
	void ShowTitleSafeArea(); // Function Engine.GameViewportClient.ShowTitleSafeArea // Exec|Native|Public // @ game+0xc56b64
};

// Class Engine.Console
// Size: 0x110 (Inherited: 0x30)
struct UConsole : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct ULocalPlayer* *2d14c03552; // 0x40(0x08)
	struct UTexture2D* *a3cbd11a2c; // 0x48(0x08)
	struct UTexture2D* *102ee2a7c7; // 0x50(0x08)
	char pad_58[0x18]; // 0x58(0x18)
	struct TArray<struct FString> HistoryBuffer; // 0x70(0x10)
	char pad_80[0x90]; // 0x80(0x90)
};

// Class Engine.NetDriver
// Size: 0x4c8 (Inherited: 0x30)
struct UNetDriver : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString NetConnectionClassName; // 0x38(0x10)
	int32 MaxDownloadSize; // 0x48(0x04)
	char bClampListenServerTickRate : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32 NetServerMaxTickRate; // 0x50(0x04)
	int32 MaxInternetClientRate; // 0x54(0x04)
	int32 MaxClientRate; // 0x58(0x04)
	float ServerTravelPause; // 0x5c(0x04)
	float SpawnPrioritySeconds; // 0x60(0x04)
	float RelevantTimeout; // 0x64(0x04)
	float KeepAliveTime; // 0x68(0x04)
	float InitialConnectTimeout; // 0x6c(0x04)
	float ConnectionTimeout; // 0x70(0x04)
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x74(0x04)
	bool bNoTimeouts; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UNetConnection* *4c8591292a; // 0x80(0x08)
	struct TArray<struct UNetConnection*> *b7c94b0f77; // 0x88(0x10)
	char pad_98[0x28]; // 0x98(0x28)
	struct UWorld* World; // 0xc0(0x08)
	struct UPackage* *2848450d7c; // 0xc8(0x08)
	char pad_D0[0x20]; // 0xd0(0x20)
	struct UClass* *b10fcf621a; // 0xf0(0x08)
	struct UProperty* *85730e860f; // 0xf8(0x08)
	struct UProperty* *225fd045d9; // 0x100(0x08)
	struct FName NetDriverName; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)
	float Time; // 0x118(0x04)
	char pad_11C[0x3ac]; // 0x11c(0x3ac)
};

// Class Engine.DemoNetDriver
// Size: 0xc60 (Inherited: 0x4c8)
struct UDemoNetDriver : UNetDriver {
	char pad_4C8[0xf8]; // 0x4c8(0xf8)
	struct TMap<struct FString, struct F*5a3c4c23cd> *32f47fcbd9; // 0x5c0(0x50)
	char pad_610[0x430]; // 0x610(0x430)
	bool *6235ee652d; // 0xa40(0x01)
	char pad_A41[0x21f]; // 0xa41(0x21f)
};

// Class Engine.DestructibleComponent
// Size: 0xd60 (Inherited: 0xca0)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0xc98(0x01)
	struct TArray<struct F*ea886402eb> FractureEffects; // 0xca0(0x10)
	bool bEnableHardSleeping; // 0xcb0(0x01)
	char pad_CB1_1 : 7; // 0xcb1(0x01)
	char pad_CB2[0x2]; // 0xcb2(0x02)
	float LargeChunkThreshold; // 0xcb4(0x04)
	char pad_CB8[0x10]; // 0xcb8(0x10)
	struct FMulticastDelegate OnComponentFracture; // 0xcc8(0x10)
	char pad_CD8[0x88]; // 0xcd8(0x88)

	void *d2f2b4878a(); // Function Engine.DestructibleComponent.*d2f2b4878a // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67cc11c
	void *8719907661(); // Function Engine.DestructibleComponent.*8719907661 // Final|Native|Public|BlueprintCallable // @ game+0x67e435c
	void *ead89ecafd(); // Function Engine.DestructibleComponent.*ead89ecafd // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67caf20
	void *68e3b0e890(); // Function Engine.DestructibleComponent.*68e3b0e890 // Final|Native|Public|BlueprintCallable // @ game+0x680a2e4
};

// Class Engine.GameEngine
// Size: 0xfb0 (Inherited: 0xf50)
struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xf50(0x04)
	float ServerFlushLogInterval; // 0xf54(0x04)
	struct UGameInstance* GameInstance; // 0xf58(0x08)
	char pad_F60[0x40]; // 0xf60(0x40)
	struct TArray<struct UWorld*> *3c599a0734; // 0xfa0(0x10)
};

// Class Engine.Player
// Size: 0x50 (Inherited: 0x30)
struct UPlayer : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	int32 *271682eb8c; // 0x40(0x04)
	int32 ConfiguredInternetSpeed; // 0x44(0x04)
	int32 ConfiguredLanSpeed; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.NetConnection
// Size: 0x65850 (Inherited: 0x50)
struct UNetConnection : UPlayer {
	struct TArray<struct UChildConnection*> Children; // 0x50(0x10)
	struct UNetDriver* Driver; // 0x60(0x08)
	struct UClass* *2620c0f95a; // 0x68(0x08)
	struct UPackageMap* PackageMap; // 0x70(0x08)
	struct TArray<struct UChannel*> *db17e81f9a; // 0x78(0x10)
	struct TArray<struct AActor*> *4c97345279; // 0x88(0x10)
	struct AActor* ViewTarget; // 0x98(0x08)
	struct AActor* *52a10bb853; // 0xa0(0x08)
	int32 *31a15aa452; // 0xa8(0x04)
	char *2b1c0c33d1 : 1; // 0xac(0x01)
	char pad_AC_1 : 1; // 0xac(0x01)
	char *ae08848d84 : 1; // 0xac(0x01)
	char pad_AC_3 : 5; // 0xac(0x01)
	char pad_AD[0x8b]; // 0xad(0x8b)
	struct TArray<struct UChannel*> *c0c274a36f; // 0x138(0x10)
	char pad_148[0x28]; // 0x148(0x28)
	struct FUniqueNetIdRepl PlayerId; // 0x170(0x18)
	char pad_188[0x68]; // 0x188(0x68)
	double *5be392aec6; // 0x1f0(0x08)
	char pad_1F8[0x65538]; // 0x1f8(0x65538)
	struct TArray<struct UChannel*> *923a8e82b0; // 0x65730(0x10)
	char pad_65740[0x110]; // 0x65740(0x110)
};

// Class Engine.ForceFeedbackEffect
// Size: 0x48 (Inherited: 0x30)
struct UForceFeedbackEffect : UObject {
	struct TArray<struct F*4d87801027> ChannelDetails; // 0x30(0x10)
	float Duration; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.GameSession
// Size: 0x420 (Inherited: 0x408)
struct AGameSession : AInfo {
	int32 MaxSpectators; // 0x408(0x04)
	int32 MaxPlayers; // 0x40c(0x04)
	int32 *9a06514058; // 0x410(0x04)
	bool MaxSplitscreensPerConnection; // 0x414(0x01)
	bool bRequiresPushToTalk; // 0x415(0x01)
	char pad_416[0x2]; // 0x416(0x02)
	struct FName SessionName; // 0x418(0x08)
};

// Class Engine.InstancedStaticMeshComponent
// Size: 0xc80 (Inherited: 0xba0)
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	struct TArray<struct F*75ea8e2bf3> PerInstanceSMData; // 0xba0(0x10)
	int32 InstancingRandomSeed; // 0xbb0(0x04)
	int32 InstanceStartCullDistance; // 0xbb4(0x04)
	int32 InstanceEndCullDistance; // 0xbb8(0x04)
	char pad_BBC[0x4]; // 0xbbc(0x04)
	struct TArray<int32> *6f47c66abe; // 0xbc0(0x10)
	struct TArray<int32> *56331a2d03; // 0xbd0(0x10)
	char pad_BE0[0x78]; // 0xbe0(0x78)
	struct UPhysicsSerializer* PhysicsSerializer; // 0xc58(0x08)
	bool *66d9b36bd0; // 0xc60(0x01)
	char pad_C61[0x3]; // 0xc61(0x03)
	int32 *0f124e2c4d; // 0xc64(0x04)
	struct TArray<struct F*379f451670> *98820ffda4; // 0xc68(0x10)
	char pad_C78[0x8]; // 0xc78(0x08)

	void *ceef77ed7f(); // Function Engine.InstancedStaticMeshComponent.*ceef77ed7f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x680d228
	void *2a75f57149(); // Function Engine.InstancedStaticMeshComponent.*2a75f57149 // Native|Public|BlueprintCallable // @ game+0x6803480
	void *a984b9a9ce(); // Function Engine.InstancedStaticMeshComponent.*a984b9a9ce // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67c9a4c
	void *19b8138a81(); // Function Engine.InstancedStaticMeshComponent.*19b8138a81 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e6428
	void *028d8429ac(); // Function Engine.InstancedStaticMeshComponent.*028d8429ac // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67c960c
	void *7786d1a996(); // Function Engine.InstancedStaticMeshComponent.*7786d1a996 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e5dac
	void *43aa6233e3(); // Function Engine.InstancedStaticMeshComponent.*43aa6233e3 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e6bdc
	void *b96a030999(); // Function Engine.InstancedStaticMeshComponent.*b96a030999 // Final|Native|Public|BlueprintCallable // @ game+0x6809d14
	void *1ab6a18aad(); // Function Engine.InstancedStaticMeshComponent.*1ab6a18aad // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e5f98
	void *0b1ef7cb51(); // Function Engine.InstancedStaticMeshComponent.*0b1ef7cb51 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e6d44
	void *95a4257f8b(); // Function Engine.InstancedStaticMeshComponent.*95a4257f8b // Native|Public|BlueprintCallable // @ game+0xcbd24c
	void *6075d3ac8a(); // Function Engine.InstancedStaticMeshComponent.*6075d3ac8a // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x681e05c
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0xdb0 (Inherited: 0xc80)
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	char pad_C80[0x68]; // 0xc80(0x68)
	struct TArray<int32> *6f5dc765ea; // 0xce8(0x10)
	int32 *eaed97f0e4; // 0xcf8(0x04)
	char pad_CFC[0x4]; // 0xcfc(0x04)
	struct FBox *1bd5797291; // 0xd00(0x1c)
	struct FBox *cf161024f3; // 0xd1c(0x1c)
	struct TArray<struct FBox> *7d5adf59ca; // 0xd38(0x10)
	char pad_D48[0x20]; // 0xd48(0x20)
	int32 *64f5d9de39; // 0xd68(0x04)
	struct FBoxSphereBounds *bfbf84d4cc; // 0xd6c(0x1c)
	char *0870e284ac : 1; // 0xd88(0x01)
	char *bea543a7e6 : 1; // 0xd88(0x01)
	char pad_D88_2 : 6; // 0xd88(0x01)
	char pad_D89[0x27]; // 0xd89(0x27)

	void *ba760e9eef(); // Function Engine.HierarchicalInstancedStaticMeshComponent.*ba760e9eef // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6803524
};

// Class Engine.*fc79daab3f
// Size: 0xdb0 (Inherited: 0xdb0)
struct U*fc79daab3f : UHierarchicalInstancedStaticMeshComponent {
	int32 MinVertsToSplitNodeForGrid; // 0xda8(0x04)
};

// Class Engine.LocalPlayer
// Size: 0x290 (Inherited: 0x50)
struct ULocalPlayer : UPlayer {
	char pad_50[0x14]; // 0x50(0x14)
	char *87852b9d3b : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct UClass* *2d967ee0dc; // 0x68(0x08)
	char pad_70[0x220]; // 0x70(0x220)
};

// Class Engine.*4d0023a102
// Size: 0x30 (Inherited: 0x30)
struct U*4d0023a102 : UObject {
};

// Class Engine.PlayerCameraManager
// Size: 0x1d10 (Inherited: 0x408)
struct APlayerCameraManager : AActor {
	struct APlayerController* *9709ac5021; // 0x408(0x08)
	struct USceneComponent* TransformComponent; // 0x410(0x08)
	char pad_418[0x4]; // 0x418(0x04)
	struct FVector FreeCamOffset; // 0x41c(0x0c)
	float DefaultFOV; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	float DefaultOrthoWidth; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	float FreeCamDistance; // 0x438(0x04)
	float ViewRollMax; // 0x43c(0x04)
	char pad_440[0x20]; // 0x440(0x20)
	struct F*0653442295 *41f267243b; // 0x460(0x5e0)
	char pad_A40[0x4]; // 0xa40(0x04)
	float ViewYawMax; // 0xa44(0x04)
	char pad_A48[0xc]; // 0xa48(0x0c)
	float ViewYawMin; // 0xa54(0x04)
	char pad_A58[0x8]; // 0xa58(0x08)
	struct F*af5ae819d5 *5e40474673; // 0xa60(0x5d0)
	char pad_1030[0x8]; // 0x1030(0x08)
	struct TArray<struct UClass*> DefaultModifiers; // 0x1038(0x10)
	float ViewPitchMin; // 0x1048(0x04)
	char pad_104C[0x4]; // 0x104c(0x04)
	struct TArray<struct U*ea345062c7*> *a8a6f91d9b; // 0x1050(0x10)
	char pad_1060[0x10]; // 0x1060(0x10)
	struct F*0653442295 ViewTarget; // 0x1070(0x5e0)
	struct F*af5ae819d5 *bdd4a92675; // 0x1650(0x5d0)
	char pad_1C20[0x10]; // 0x1c20(0x10)
	float DefaultAspectRatio; // 0x1c30(0x04)
	char pad_1C34[0x4]; // 0x1c34(0x04)
	struct TArray<struct AEmitterCameraLensEffectBase*> *d3c8bed385; // 0x1c38(0x10)
	struct U*436388bfde* *c32a2345bf; // 0x1c48(0x08)
	struct U*de6aae17ea* *480f64fe2f[0x08]; // 0x1c50(0x40)
	struct TArray<struct FPostProcessSettings> *3626307aef; // 0x1c90(0x10)
	char pad_1CA0[0x10]; // 0x1ca0(0x10)
	struct TArray<struct U*de6aae17ea*> *0ec866bd4e; // 0x1cb0(0x10)
	struct TArray<struct U*de6aae17ea*> *295e276da3; // 0x1cc0(0x10)
	struct ACameraActor* *463d40d827; // 0x1cd0(0x08)
	char bIsOrthographic : 1; // 0x1cd8(0x01)
	char bDefaultConstrainAspectRatio : 1; // 0x1cd8(0x01)
	char pad_1CD8_2 : 5; // 0x1cd8(0x01)
	char bUseClientSideCameraUpdates : 1; // 0x1cd8(0x01)
	char pad_1CD9[0x1b]; // 0x1cd9(0x1b)
	float ViewRollMin; // 0x1cf4(0x04)
	char pad_1CF8[0x8]; // 0x1cf8(0x08)
	float ViewPitchMax; // 0x1d00(0x04)
	struct FVector ViewTargetOffset; // 0x1d04(0x0c)

	void *fd287b77ad(); // Function Engine.PlayerCameraManager.*fd287b77ad // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67acbac
	void *ed9ad74d63(); // Function Engine.PlayerCameraManager.*ed9ad74d63 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67b8998
	void *71bebfc691(); // Function Engine.PlayerCameraManager.*71bebfc691 // Native|Public|BlueprintCallable // @ game+0x67c3d34
	void *b93793f9f5(); // Function Engine.PlayerCameraManager.*b93793f9f5 // Native|Public|BlueprintCallable // @ game+0x5a9c470
	void *2c3667dab0(); // Function Engine.PlayerCameraManager.*2c3667dab0 // Native|Public|BlueprintCallable // @ game+0x67a9ee4
	void *abe4210355(); // Function Engine.PlayerCameraManager.*abe4210355 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xa94c18
	void *c109a4af55(); // Function Engine.PlayerCameraManager.*c109a4af55 // Native|Public|BlueprintCallable // @ game+0x67c3c9c
	void *99927376d9(); // Function Engine.PlayerCameraManager.*99927376d9 // Native|Public|BlueprintCallable // @ game+0x67a17fc
	void PhotographyCameraModify(); // Function Engine.PlayerCameraManager.PhotographyCameraModify // BlueprintCosmetic|Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x67b8604
	void *9947d93eda(); // Function Engine.PlayerCameraManager.*9947d93eda // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a5df10
	void *ecad5d6db1(); // Function Engine.PlayerCameraManager.*ecad5d6db1 // Native|Public|BlueprintCallable // @ game+0x67c4074
	void *310c2a0c34(); // Function Engine.PlayerCameraManager.*310c2a0c34 // Native|Public|BlueprintCallable // @ game+0x67b94d8
	void OnPhotographySessionEnd(); // Function Engine.PlayerCameraManager.OnPhotographySessionEnd // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x5fb79c
	void *bc8833b492(); // Function Engine.PlayerCameraManager.*bc8833b492 // Native|Public|BlueprintCallable // @ game+0x67c3c04
	void *9bb7469531(); // Function Engine.PlayerCameraManager.*9bb7469531 // Native|Public|BlueprintCallable // @ game+0x67c3f90
	void OnPhotographyMultiPartCaptureStart(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x5fc3d0
	void *46f1bc277b(); // Function Engine.PlayerCameraManager.*46f1bc277b // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c0944
	void *b9aa07e814(); // Function Engine.PlayerCameraManager.*b9aa07e814 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67abb78
	void *1f3d8a2b99(); // Function Engine.PlayerCameraManager.*1f3d8a2b99 // Native|Public|HasDefaults|BlueprintCallable // @ game+0xb4db14
	void *e931c3da1d(); // Function Engine.PlayerCameraManager.*e931c3da1d // Native|Public|BlueprintCallable // @ game+0x67a2c18
	void *0d58a7376f(); // Function Engine.PlayerCameraManager.*0d58a7376f // Native|Public|BlueprintCallable // @ game+0x59fffe8
	void BlueprintUpdateCamera(); // Function Engine.PlayerCameraManager.BlueprintUpdateCamera // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22ddc4
	void *98b7b74d50(); // Function Engine.PlayerCameraManager.*98b7b74d50 // Native|Public|BlueprintCallable // @ game+0x67c3e18
	void *bfe31feb0f(); // Function Engine.PlayerCameraManager.*bfe31feb0f // Native|Public|BlueprintCallable // @ game+0x67b956c
	void *101753f358(); // Function Engine.PlayerCameraManager.*101753f358 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c3900
	void OnPhotographySessionStart(); // Function Engine.PlayerCameraManager.OnPhotographySessionStart // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x5a77d08
	void OnPhotographyMultiPartCaptureEnd(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0xdb4c0c
};

// Class Engine.PlayerInput
// Size: 0x490 (Inherited: 0x30)
struct UPlayerInput : UObject {
	char pad_30[0xf8]; // 0x30(0xf8)
	struct TArray<struct F*c1a57810c7> DebugExecBindings; // 0x128(0x10)
	char pad_138[0x30]; // 0x138(0x30)
	struct TArray<struct FName> InvertedAxis; // 0x168(0x10)
	char pad_178[0x318]; // 0x178(0x318)

	void SetGamePadDeadZone(); // Function Engine.PlayerInput.SetGamePadDeadZone // Final|Exec|Native|Public // @ game+0x67bf940
	void SetGamePadSensitivityOf(); // Function Engine.PlayerInput.SetGamePadSensitivityOf // Final|Exec|Native|Public // @ game+0x67bfbac
	void SetMouseSensitivity(); // Function Engine.PlayerInput.SetMouseSensitivity // Final|Exec|Native|Public // @ game+0x67c0f34
	void SetGamePadDeadZoneOf(); // Function Engine.PlayerInput.SetGamePadDeadZoneOf // Final|Exec|Native|Public // @ game+0x67bf9d8
	void SetGamePadSensitivity(); // Function Engine.PlayerInput.SetGamePadSensitivity // Final|Exec|Native|Public // @ game+0x67bfb14
	void InvertAxisKey(); // Function Engine.PlayerInput.InvertAxisKey // Final|Exec|Native|Public // @ game+0x67b119c
	void SetBind(); // Function Engine.PlayerInput.SetBind // Final|Exec|Native|Public // @ game+0x67be0e0
	void ClearSmoothing(); // Function Engine.PlayerInput.ClearSmoothing // Final|Exec|Native|Public // @ game+0x67a4304
	void InvertAxis(); // Function Engine.PlayerInput.InvertAxis // Final|Exec|Native|Public // @ game+0x67b110c
};

// Class Engine.NavigationData
// Size: 0x5b0 (Inherited: 0x408)
struct ANavigationData : AActor {
	struct UPrimitiveComponent* RenderingComp; // 0x408(0x08)
	struct F*b471f00637 *b471f00637; // 0x410(0x50)
	char *df1535e956 : 1; // 0x460(0x01)
	char bForceRebuildOnLoad : 1; // 0x460(0x01)
	char bCanBeMainNavData : 1; // 0x460(0x01)
	char bCanSpawnOnRebuild : 1; // 0x460(0x01)
	char bRebuildAtRuntime : 1; // 0x460(0x01)
	char pad_460_5 : 3; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	float ObservedPathsTickInterval; // 0x468(0x04)
	char *706aa73b33 : 1; // 0x46c(0x01)
	char pad_46C_1 : 7; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	uint32 DataVersion; // 0x470(0x04)
	char pad_474[0xd4]; // 0x474(0xd4)
	struct TArray<struct F*4474e4d98f> *2b8f015cb0; // 0x548(0x10)
	char pad_558[0x58]; // 0x558(0x58)
};

// Class Engine.RecastNavMesh
// Size: 0x6c0 (Inherited: 0x5b0)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x5b0(0x01)
	char bDrawPolyEdges : 1; // 0x5b0(0x01)
	char bDrawFilledPolys : 1; // 0x5b0(0x01)
	char bDrawNavMeshEdges : 1; // 0x5b0(0x01)
	char *46090cb9f2 : 1; // 0x5b0(0x01)
	char *a1477ce159 : 1; // 0x5b0(0x01)
	char *5db3fd3ad2 : 1; // 0x5b0(0x01)
	char *5fb9c971a8 : 1; // 0x5b0(0x01)
	char *002079ed4a : 1; // 0x5b1(0x01)
	char *b21e7a7c06 : 1; // 0x5b1(0x01)
	char *eeca050b48 : 1; // 0x5b1(0x01)
	char *d3d77d15ca : 1; // 0x5b1(0x01)
	char *643ea53fc0 : 1; // 0x5b1(0x01)
	char *4ed371a330 : 1; // 0x5b1(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x5b1(0x01)
	char *05cdc8618a : 1; // 0x5b1(0x01)
	char pad_5B2[0x2]; // 0x5b2(0x02)
	float DrawOffset; // 0x5b4(0x04)
	char bFixedTilePoolSize : 1; // 0x5b8(0x01)
	char pad_5B8_1 : 7; // 0x5b8(0x01)
	char pad_5B9[0x3]; // 0x5b9(0x03)
	int32 TilePoolSize; // 0x5bc(0x04)
	float TileSizeUU; // 0x5c0(0x04)
	float CellSize; // 0x5c4(0x04)
	float CellHeight; // 0x5c8(0x04)
	float AgentRadius; // 0x5cc(0x04)
	float AgentHeight; // 0x5d0(0x04)
	float AgentMaxHeight; // 0x5d4(0x04)
	float AgentMaxSlope; // 0x5d8(0x04)
	float AgentMaxStepHeight; // 0x5dc(0x04)
	float MinRegionArea; // 0x5e0(0x04)
	float MergeRegionSize; // 0x5e4(0x04)
	float MaxSimplificationError; // 0x5e8(0x04)
	int32 MaxSimultaneousTileGenerationJobsCount; // 0x5ec(0x04)
	int32 TileNumberHardLimit; // 0x5f0(0x04)
	int32 *b2cc0e49e0; // 0x5f4(0x04)
	int32 *eceaad5847; // 0x5f8(0x04)
	int32 *b000b456cd; // 0x5fc(0x04)
	float DefaultDrawDistance; // 0x600(0x04)
	float DefaultMaxSearchNodes; // 0x604(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x608(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x60c(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x60d(0x01)
	char pad_60E[0x2]; // 0x60e(0x02)
	int32 RegionChunkSplits; // 0x610(0x04)
	int32 LayerChunkSplits; // 0x614(0x04)
	char bSortNavigationAreasByCost : 1; // 0x618(0x01)
	char bPerformVoxelFiltering : 1; // 0x618(0x01)
	char bMarkLowHeightAreas : 1; // 0x618(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x618(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x618(0x01)
	char bStoreEmptyTileLayers : 1; // 0x618(0x01)
	char bUseVirtualFilters : 1; // 0x618(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x618(0x01)
	char pad_619[0x3]; // 0x619(0x03)
	bool bOnlySavedOnDS; // 0x61c(0x01)
	char pad_61D[0x3]; // 0x61d(0x03)
	char bUseVoxelCache : 1; // 0x620(0x01)
	char pad_620_1 : 7; // 0x620(0x01)
	char pad_621[0x3]; // 0x621(0x03)
	float TileSetUpdateInterval; // 0x624(0x04)
	float HeuristicScale; // 0x628(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x62c(0x04)
	char pad_630[0x90]; // 0x630(0x90)
};

// Class Engine.*6653cc84aa
// Size: 0x40 (Inherited: 0x30)
struct U*6653cc84aa : UObject {
	struct TArray<struct F*1d24f23e59> *c899da6a1d; // 0x30(0x10)
};

// Class Engine.SceneCaptureComponent
// Size: 0x550 (Inherited: 0x4d0)
struct USceneCaptureComponent : USceneComponent {
	struct TArray<struct UPrimitiveComponent*> *1b85a647bc; // 0x4d0(0x10)
	struct TArray<struct AActor*> HiddenActors; // 0x4e0(0x10)
	struct TArray<struct UPrimitiveComponent*> *2c21281200; // 0x4f0(0x10)
	struct TArray<struct AActor*> ShowOnlyActors; // 0x500(0x10)
	bool bIsLobbyCapture; // 0x510(0x01)
	bool bCaptureEveryFrame; // 0x511(0x01)
	bool bCaptureOnMovement; // 0x512(0x01)
	char pad_513[0x1]; // 0x513(0x01)
	float LODDistanceFactor; // 0x514(0x04)
	float MaxViewDistanceOverride; // 0x518(0x04)
	int32 CaptureSortPriority; // 0x51c(0x04)
	struct TArray<struct F*8f41bd28ce> ShowFlagSettings; // 0x520(0x10)
	char pad_530[0x20]; // 0x530(0x20)

	void *c79e20c089(); // Function Engine.SceneCaptureComponent.*c79e20c089 // Final|Native|Public|BlueprintCallable // @ game+0x6816c54
	void *a013f7703f(); // Function Engine.SceneCaptureComponent.*a013f7703f // Final|Native|Public|BlueprintCallable // @ game+0x68086fc
	void *e10656b7d7(); // Function Engine.SceneCaptureComponent.*e10656b7d7 // Final|Native|Public|BlueprintCallable // @ game+0x6816ce4
	void *501173f52c(); // Function Engine.SceneCaptureComponent.*501173f52c // Final|Native|Public|BlueprintCallable // @ game+0x67d6218
	void *603a4566ca(); // Function Engine.SceneCaptureComponent.*603a4566ca // Final|Native|Public|BlueprintCallable // @ game+0x67ef2a8
	void *6b6e40642f(); // Function Engine.SceneCaptureComponent.*6b6e40642f // Final|Native|Public|BlueprintCallable // @ game+0x67ef448
	void *37577cf286(); // Function Engine.SceneCaptureComponent.*37577cf286 // Final|Native|Public|BlueprintCallable // @ game+0x6803770
	void *ec2de27f06(); // Function Engine.SceneCaptureComponent.*ec2de27f06 // Final|Native|Public|BlueprintCallable // @ game+0x6803800
};

// Class Engine.SceneCaptureComponent2D
// Size: 0xb90 (Inherited: 0x550)
struct USceneCaptureComponent2D : USceneCaptureComponent {
	enum class ECameraProjectionMode ProjectionType; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	float FOVAngle; // 0x554(0x04)
	bool *7ed08cdd15; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	float *447c892cd2; // 0x55c(0x04)
	float OrthoWidth; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct UTextureRenderTarget2D* TextureTarget; // 0x568(0x08)
	enum class *fc99d3fe06 CaptureSource; // 0x570(0x01)
	enum class *0a7c972e56 CompositeMode; // 0x571(0x01)
	char pad_572[0x2]; // 0x572(0x02)
	struct FLinearColor LightingOnlyBrightness; // 0x574(0x10)
	struct FLinearColor LightingOnlySpecular; // 0x584(0x10)
	struct FLinearColor LightingOnlyCustomData; // 0x594(0x10)
	float LightingOnlyCustomDataAlpha; // 0x5a4(0x04)
	char pad_5A8[0x8]; // 0x5a8(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x5b0(0x570)
	float PostProcessBlendWeight; // 0xb20(0x04)
	bool bUseCustomProjectionMatrix; // 0xb24(0x01)
	char pad_B25[0xb]; // 0xb25(0x0b)
	struct FMatrix CustomProjectionMatrix; // 0xb30(0x40)
	char *02c554f858 : 1; // 0xb70(0x01)
	char pad_B70_1 : 7; // 0xb70(0x01)
	char pad_B71[0x3]; // 0xb71(0x03)
	bool bEnableClipPlane; // 0xb74(0x01)
	char pad_B75[0x3]; // 0xb75(0x03)
	struct FVector ClipPlaneBase; // 0xb78(0x0c)
	struct FVector ClipPlaneNormal; // 0xb84(0x0c)

	void *ecceb55aba(); // Function Engine.SceneCaptureComponent2D.*ecceb55aba // Final|Native|Public|BlueprintCallable // @ game+0x67c9e68
	void CaptureScene(); // Function Engine.SceneCaptureComponent2D.CaptureScene // Final|Native|Public|BlueprintCallable // @ game+0x67d5b1c
};

// Class Engine.ArrowComponent
// Size: 0xa10 (Inherited: 0xa00)
struct UArrowComponent : UPrimitiveComponent {
	struct FColor ArrowColor; // 0x9f8(0x04)
	float ArrowSize; // 0x9fc(0x04)
	bool bIsScreenSizeScaled; // 0xa00(0x01)
	float ScreenSize; // 0xa04(0x04)
	char bTreatAsASprite : 1; // 0xa08(0x01)
	char pad_A0D_1 : 7; // 0xa0d(0x01)
	char pad_A0E[0x2]; // 0xa0e(0x02)

	void SetArrowColor(); // Function Engine.ArrowComponent.SetArrowColor // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6806b28
};

// Class Engine.ParticleSystemComponent
// Size: 0xc60 (Inherited: 0xa00)
struct UParticleSystemComponent : UPrimitiveComponent {
	struct UParticleSystem* Template; // 0x9f8(0x08)
	struct TArray<struct UMaterialInterface*> *cdc8d40e7a; // 0xa00(0x10)
	struct TArray<struct USkeletalMeshComponent*> *edfb091a25; // 0xa10(0x10)
	char pad_A28_0 : 7; // 0xa28(0x01)
	char bResetOnDetach : 1; // 0xa20(0x01)
	char *806c2063a4 : 1; // 0xa21(0x01)
	char bAllowRecycling : 1; // 0xa21(0x01)
	char bAutoManageAttachment : 1; // 0xa21(0x01)
	char *30c974bd36 : 1; // 0xa21(0x01)
	char bOverrideLODMethod : 1; // 0xa22(0x01)
	char *5a36da03b4 : 1; // 0xa22(0x01)
	char *338b144ca2 : 1; // 0xa22(0x01)
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0xa28(0x10)
	struct FMulticastDelegate OnParticleSpawn; // 0xa38(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0xa48(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0xa58(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0xa68(0x10)
	struct FVector *780596f89d; // 0xa78(0x0c)
	struct FVector *34a7719c48; // 0xa84(0x0c)
	float WarmupTime; // 0xa90(0x04)
	float *05a26e85b5; // 0xa94(0x04)
	char pad_A99[0x3]; // 0xa99(0x03)
	float SecondsBeforeInactive; // 0xa9c(0x04)
	char pad_AA0[0x4]; // 0xaa0(0x04)
	float *94ce59f5f2; // 0xaa4(0x04)
	char pad_AA8[0x8]; // 0xaa8(0x08)
	enum class *22978e1300 LODMethod; // 0xab0(0x01)
	enum class EParticleSignificanceLevel RequiredSignificance; // 0xab1(0x01)
	char pad_AB2[0x16]; // 0xab2(0x16)
	struct TArray<struct U*0fc7361301*> *b22bc451b7; // 0xac8(0x10)
	char pad_AD8[0x60]; // 0xad8(0x60)
	float CustomTimeDilation; // 0xb38(0x04)
	char pad_B3C[0x4]; // 0xb3c(0x04)
	struct FMulticastDelegate OnSystemFinished; // 0xb40(0x10)
	struct USceneComponent* AutoAttachParent; // 0xb50(0x08)
	struct FName AutoAttachSocketName; // 0xb58(0x08)
	enum class EAttachLocation AutoAttachLocationType; // 0xb60(0x01)
	enum class EAttachmentRule AutoAttachLocationRule; // 0xb61(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0xb62(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0xb63(0x01)
	char pad_B64[0xfc]; // 0xb64(0xfc)

	void *0f4a05e7ce(); // Function Engine.ParticleSystemComponent.*0f4a05e7ce // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab500
	void *27ac79d500(); // Function Engine.ParticleSystemComponent.*27ac79d500 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aeeb0
	void *93ce0c42a3(); // Function Engine.ParticleSystemComponent.*93ce0c42a3 // Final|Native|Public|BlueprintCallable // @ game+0x67bd46c
	void *d95cd5304d(); // Function Engine.ParticleSystemComponent.*d95cd5304d // Final|Native|Public|BlueprintCallable // @ game+0x67a37c8
	void *03d49cfae4(); // Function Engine.ParticleSystemComponent.*03d49cfae4 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bdfa4
	void *1978396d1f(); // Function Engine.ParticleSystemComponent.*1978396d1f // Final|Native|Public|BlueprintCallable // @ game+0x67bc9a8
	void *956e07ae37(); // Function Engine.ParticleSystemComponent.*956e07ae37 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab3c0
	void *932c7c018d(); // Function Engine.ParticleSystemComponent.*932c7c018d // Native|Public|BlueprintCallable // @ game+0x67bde7c
	void *8ef0a658ae(); // Function Engine.ParticleSystemComponent.*8ef0a658ae // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab644
	void *4e7a6e62b5(); // Function Engine.ParticleSystemComponent.*4e7a6e62b5 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bdc04
	void *92fa2201de(); // Function Engine.ParticleSystemComponent.*92fa2201de // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bdd40
	void *1ec3649205(); // Function Engine.ParticleSystemComponent.*1ec3649205 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67af0f8
	void *4cd338f0fb(); // Function Engine.ParticleSystemComponent.*4cd338f0fb // Native|Public|BlueprintCallable // @ game+0x67bf3fc
	void *e7af8658ce(); // Function Engine.ParticleSystemComponent.*e7af8658ce // Native|Public|BlueprintCallable // @ game+0x67bdadc
	void *c00c5b640d(); // Function Engine.ParticleSystemComponent.*c00c5b640d // Native|Public|BlueprintCallable // @ game+0x67a7958
	void *70c41e648e(); // Function Engine.ParticleSystemComponent.*70c41e648e // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab8c8
	void *3e55e7d95c(); // Function Engine.ParticleSystemComponent.*3e55e7d95c // Final|Native|Public|BlueprintCallable // @ game+0x67c0d80
	void *cb9b6e1f75(); // Function Engine.ParticleSystemComponent.*cb9b6e1f75 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab184
	void *9b5dcbfbeb(); // Function Engine.ParticleSystemComponent.*9b5dcbfbeb // Final|Native|Public|BlueprintCallable // @ game+0x67c240c
	void *3ed14454d9(); // Function Engine.ParticleSystemComponent.*3ed14454d9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c2d90
	void *090136d69a(); // Function Engine.ParticleSystemComponent.*090136d69a // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab27c
	void *7f2d6dd8db(); // Function Engine.ParticleSystemComponent.*7f2d6dd8db // Final|Native|Public|BlueprintCallable // @ game+0x67bd324
	void *03bf17d814(); // Function Engine.ParticleSystemComponent.*03bf17d814 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bd8a4
	void *7c98b28202(); // Function Engine.ParticleSystemComponent.*7c98b28202 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab788
	void *565424fca2(); // Function Engine.ParticleSystemComponent.*565424fca2 // Final|Native|Public|BlueprintCallable // @ game+0x67a9c40
	void *9252cbf5cf(); // Function Engine.ParticleSystemComponent.*9252cbf5cf // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bed50
	void *72c115cb68(); // Function Engine.ParticleSystemComponent.*72c115cb68 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bd9a0
	void SetFloatParameter(); // Function Engine.ParticleSystemComponent.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x67bf7c0
	void *0ba4a0733f(); // Function Engine.ParticleSystemComponent.*0ba4a0733f // Final|Native|Public|BlueprintCallable // @ game+0x67c26e4
	void *5aad5cdf33(); // Function Engine.ParticleSystemComponent.*5aad5cdf33 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67aa148
};

// Class Engine.DefaultPawn
// Size: 0x490 (Inherited: 0x468)
struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x468(0x04)
	float BaseLookUpRate; // 0x46c(0x04)
	struct UPawnMovementComponent* MovementComponent; // 0x470(0x08)
	struct USphereComponent* CollisionComponent; // 0x478(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x480(0x08)
	char bAddDefaultMovementBindings : 1; // 0x488(0x01)
	char pad_488_1 : 7; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)

	void MoveRight(); // Function Engine.DefaultPawn.MoveRight // Native|Public|BlueprintCallable // @ game+0x67b7d50
	void *b29ee3df94(); // Function Engine.DefaultPawn.*b29ee3df94 // Final|Native|Public|BlueprintCallable // @ game+0x67c45fc
	void MoveForward(); // Function Engine.DefaultPawn.MoveForward // Native|Public|BlueprintCallable // @ game+0x67b7cb4
	void *db93078038(); // Function Engine.DefaultPawn.*db93078038 // Native|Public|BlueprintCallable // @ game+0x67b7dec
	void *0067206425(); // Function Engine.DefaultPawn.*0067206425 // Final|Native|Public|BlueprintCallable // @ game+0x67b79c0
};

// Class Engine.SpectatorPawn
// Size: 0x490 (Inherited: 0x490)
struct ASpectatorPawn : ADefaultPawn {
};

// Class Engine.FloatingPawnMovement
// Size: 0x2a0 (Inherited: 0x290)
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x288(0x04)
	float Acceleration; // 0x28c(0x04)
	float Deceleration; // 0x290(0x04)
	float TurningBoost; // 0x294(0x04)
	char *502d899bf1 : 1; // 0x298(0x01)
};

// Class Engine.SpectatorPawnMovement
// Size: 0x2b0 (Inherited: 0x2a0)
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char *8499a67b55 : 1; // 0x2a0(0x01)
	char pad_2A0_1 : 7; // 0x2a0(0x01)
	char pad_2A1[0xf]; // 0x2a1(0x0f)
};

// Class Engine.SplineComponent
// Size: 0xaf0 (Inherited: 0xa00)
struct USplineComponent : UPrimitiveComponent {
	struct FSplineCurves *5d0c3695ca; // 0x9f8(0x60)
	struct FInterpCurveVector SplineInfo; // 0xa58(0x18)
	struct FInterpCurveQuat SplineRotInfo; // 0xa70(0x18)
	struct FInterpCurveVector SplineScaleInfo; // 0xa88(0x18)
	struct FInterpCurveFloat SplineReparamTable; // 0xaa0(0x18)
	bool bAllowSplineEditingPerInstance; // 0xab8(0x01)
	int32 *12ac1bfde3; // 0xabc(0x04)
	bool *0fe780b02b; // 0xac0(0x01)
	bool *ebdb0cb481; // 0xac1(0x01)
	float *5deaafa98f; // 0xac4(0x04)
	float Duration; // 0xac8(0x04)
	bool bStationaryEndpoints; // 0xacc(0x01)
	bool *90c9232a35; // 0xacd(0x01)
	bool *cfa2a7f9d6; // 0xace(0x01)
	bool bInputSplinePointsToConstructionScript; // 0xacf(0x01)
	bool bDrawDebug; // 0xad0(0x01)
	bool *f088e06431; // 0xad1(0x01)
	bool bLoopPositionOverride; // 0xad2(0x01)
	float *0c6302c5b8; // 0xad4(0x04)
	struct FVector DefaultUpVector; // 0xad8(0x0c)
	char pad_AE6[0xa]; // 0xae6(0x0a)

	void *f521037389(); // Function Engine.SplineComponent.*f521037389 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e04f4
	void GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e81e4
	void *f2d9795463(); // Function Engine.SplineComponent.*f2d9795463 // Final|Native|Public|BlueprintCallable // @ game+0x6808e6c
	void *279afd97e4(); // Function Engine.SplineComponent.*279afd97e4 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6812104
	void *61729ae40b(); // Function Engine.SplineComponent.*61729ae40b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e9f4c
	void *14c6ac2ad7(); // Function Engine.SplineComponent.*14c6ac2ad7 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ecde0
	void *8e0da38491(); // Function Engine.SplineComponent.*8e0da38491 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ec400
	void *2442c3cfda(); // Function Engine.SplineComponent.*2442c3cfda // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67c9f7c
	void *0d1539b16e(); // Function Engine.SplineComponent.*0d1539b16e // Final|Native|Public|BlueprintCallable // @ game+0x68038a0
	void *0bd297ec0c(); // Function Engine.SplineComponent.*0bd297ec0c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e7bac
	void *715e15771d(); // Function Engine.SplineComponent.*715e15771d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eb624
	void *eaeef389ef(); // Function Engine.SplineComponent.*eaeef389ef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e74ec
	void *482c918b00(); // Function Engine.SplineComponent.*482c918b00 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e9c34
	void *8168c7d440(); // Function Engine.SplineComponent.*8168c7d440 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6813174
	void *0535ea2b38(); // Function Engine.SplineComponent.*0535ea2b38 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e9e14
	void *5bc3f87938(); // Function Engine.SplineComponent.*5bc3f87938 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ed60c
	void *c031841270(); // Function Engine.SplineComponent.*c031841270 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67edb04
	void *37ea769ce6(); // Function Engine.SplineComponent.*37ea769ce6 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea53c
	void *8342ca28b4(); // Function Engine.SplineComponent.*8342ca28b4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ed7dc
	void *93e1ad9183(); // Function Engine.SplineComponent.*93e1ad9183 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67eac04
	void *b2051880fc(); // Function Engine.SplineComponent.*b2051880fc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea468
	void *53522ec073(); // Function Engine.SplineComponent.*53522ec073 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e01d8
	void *7241eb6d5b(); // Function Engine.SplineComponent.*7241eb6d5b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eb524
	void *8e2c528b3c(); // Function Engine.SplineComponent.*8e2c528b3c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6812fe8
	void *ae66b82b13(); // Function Engine.SplineComponent.*ae66b82b13 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ec574
	void *561d92dd32(); // Function Engine.SplineComponent.*561d92dd32 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e42a8
	void *1e53d88498(); // Function Engine.SplineComponent.*1e53d88498 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e73c8
	void AddSplinePoint(); // Function Engine.SplineComponent.AddSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67ca268
	void *ace558dfb0(); // Function Engine.SplineComponent.*ace558dfb0 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67dfadc
	void *9bc798c6dd(); // Function Engine.SplineComponent.*9bc798c6dd // Final|Native|Public|BlueprintCallable // @ game+0x67d6580
	void *a497bf4f60(); // Function Engine.SplineComponent.*a497bf4f60 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e53e8
	void *93587c57a4(); // Function Engine.SplineComponent.*93587c57a4 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67ca098
	void *eb8b8b03c8(); // Function Engine.SplineComponent.*eb8b8b03c8 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ed954
	void *2a5354556b(); // Function Engine.SplineComponent.*2a5354556b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e99b8
	void *b2334fe3c5(); // Function Engine.SplineComponent.*b2334fe3c5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e00d4
	void *a4b5846717(); // Function Engine.SplineComponent.*a4b5846717 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67ca3b0
	void *8e0b29167c(); // Function Engine.SplineComponent.*8e0b29167c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59e7668
	void *e4d7315f08(); // Function Engine.SplineComponent.*e4d7315f08 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e7810
	void *d0fbe1200b(); // Function Engine.SplineComponent.*d0fbe1200b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67bf008
	void *f936f6802a(); // Function Engine.SplineComponent.*f936f6802a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e4a1c
	void *0008f1c73b(); // Function Engine.SplineComponent.*0008f1c73b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea148
	void *d5b3bb04f1(); // Function Engine.SplineComponent.*d5b3bb04f1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e067c
	void *4dcb5b3bb8(); // Function Engine.SplineComponent.*4dcb5b3bb8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68150dc
	void *267f16087a(); // Function Engine.SplineComponent.*267f16087a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67dfa30
	void *1ccda6641b(); // Function Engine.SplineComponent.*1ccda6641b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ed89c
	void *841cb0b102(); // Function Engine.SplineComponent.*841cb0b102 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67ca53c
	void *b6f1ea618d(); // Function Engine.SplineComponent.*b6f1ea618d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6811e9c
	void *f5754b1a86(); // Function Engine.SplineComponent.*f5754b1a86 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e7ab0
	void *6f43d569e7(); // Function Engine.SplineComponent.*6f43d569e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x680ebd8
	void *68e4d63e31(); // Function Engine.SplineComponent.*68e4d63e31 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e73c8
	void *78cf24de3f(); // Function Engine.SplineComponent.*78cf24de3f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e79b0
	void *8b89c44917(); // Function Engine.SplineComponent.*8b89c44917 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ec720
	void *34595addba(); // Function Engine.SplineComponent.*34595addba // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e45e4
	void *817d1e31e3(); // Function Engine.SplineComponent.*817d1e31e3 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6811ca0
	void *ca13fcab0a(); // Function Engine.SplineComponent.*ca13fcab0a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67df90c
	void *57c75d8184(); // Function Engine.SplineComponent.*57c75d8184 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e98b8
	void *0764c61ef4(); // Function Engine.SplineComponent.*0764c61ef4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea3b0
	void *805ba4563a(); // Function Engine.SplineComponent.*805ba4563a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67ca1c8
	void *b4f2515961(); // Function Engine.SplineComponent.*b4f2515961 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6813ec4
	void *24ae13b599(); // Function Engine.SplineComponent.*24ae13b599 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e0308
	void *b7c16d3638(); // Function Engine.SplineComponent.*b7c16d3638 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67eac2c
	void *25df325ea2(); // Function Engine.SplineComponent.*25df325ea2 // Final|Native|Public|BlueprintCallable // @ game+0x681e2d8
	void *ce1badd0f1(); // Function Engine.SplineComponent.*ce1badd0f1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ecee0
	void SetSplinePointType(); // Function Engine.SplineComponent.SetSplinePointType // Final|Native|Public|BlueprintCallable // @ game+0x6811d6c
	void *81a349303e(); // Function Engine.SplineComponent.*81a349303e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea04c
	void *2fbe7e676d(); // Function Engine.SplineComponent.*2fbe7e676d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67bf008
	void *175855f7ad(); // Function Engine.SplineComponent.*175855f7ad // Final|Native|Public|BlueprintCallable // @ game+0x680a884
	void *04eb39a8ec(); // Function Engine.SplineComponent.*04eb39a8ec // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67edbc4
	void *597a0fd09e(); // Function Engine.SplineComponent.*597a0fd09e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67edcd4
	void *f0e4b56ae4(); // Function Engine.SplineComponent.*f0e4b56ae4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ed6cc
	void *938009a2b9(); // Function Engine.SplineComponent.*938009a2b9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e9aec
	void *4b9fad82e6(); // Function Engine.SplineComponent.*4b9fad82e6 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x680a098
	void *f4221d3f9b(); // Function Engine.SplineComponent.*f4221d3f9b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e44e4
	void *092a5c45dd(); // Function Engine.SplineComponent.*092a5c45dd // Final|Native|Public|BlueprintCallable // @ game+0x6808d74
	void *6f307b627d(); // Function Engine.SplineComponent.*6f307b627d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e03d0
	void *b923bdee7e(); // Function Engine.SplineComponent.*b923bdee7e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e9d28
	void *7ed08d336d(); // Function Engine.SplineComponent.*7ed08d336d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ed014
	void *17cdd5e7dd(); // Function Engine.SplineComponent.*17cdd5e7dd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e46e0
	void *6b603f80ab(); // Function Engine.SplineComponent.*6b603f80ab // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67dffb0
	void *0997d90b54(); // Function Engine.SplineComponent.*0997d90b54 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e76b8
	void *5387c29b2a(); // Function Engine.SplineComponent.*5387c29b2a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e1f7c
};

// Class Engine.MaterialInterface
// Size: 0x78 (Inherited: 0x30)
struct UMaterialInterface : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct USubsurfaceProfile* SubsurfaceProfile; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
	struct F*5dc70d11a6 LightmassSettings; // 0x48(0x14)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct F*bed7a8a90d> *e928e50296; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)

	void *a8f9fd13ce(); // Function Engine.MaterialInterface.*a8f9fd13ce // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67ab0ec
	void *858264d1dd(); // Function Engine.MaterialInterface.*858264d1dd // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67afc08
};

// Class Engine.MaterialInstance
// Size: 0x1e8 (Inherited: 0x78)
struct UMaterialInstance : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x78(0x08)
	struct UMaterialInterface* Parent; // 0x80(0x08)
	char *8301cd2f62 : 1; // 0x88(0x01)
	char *7f383fa02f : 1; // 0x88(0x01)
	char pad_88_2 : 1; // 0x88(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0x88(0x01)
	char pad_88_4 : 4; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct F*e1e5e1e8bc> FontParameterValues; // 0x90(0x10)
	struct TArray<struct F*fffe4f3fbb> ScalarParameterValues; // 0xa0(0x10)
	struct TArray<struct F*d64a96c518> TextureParameterValues; // 0xb0(0x10)
	struct TArray<struct F*8b44e564ca> VectorParameterValues; // 0xc0(0x10)
	bool bOverrideBaseProperties; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xd4(0x24)
	char pad_F8[0xf0]; // 0xf8(0xf0)
};

// Class Engine.MaterialInstanceConstant
// Size: 0x1e8 (Inherited: 0x1e8)
struct UMaterialInstanceConstant : UMaterialInstance {
};

// Class Engine.MaterialExpression
// Size: 0x68 (Inherited: 0x30)
struct UMaterialExpression : UObject {
	struct UMaterial* Material; // 0x30(0x08)
	struct UMaterialFunction* Function; // 0x38(0x08)
	struct FString Desc; // 0x40(0x10)
	struct FColor BorderColor; // 0x50(0x04)
	char *1de66c58b2 : 1; // 0x54(0x01)
	char *983854d3fd : 1; // 0x54(0x01)
	char *23373f140d : 1; // 0x54(0x01)
	char *fcfa3c4f53 : 1; // 0x54(0x01)
	char *0dfd399f8d : 1; // 0x54(0x01)
	char *a9a0a72ccf : 1; // 0x54(0x01)
	char *f11152e06d : 1; // 0x54(0x01)
	char *2e1791687e : 1; // 0x54(0x01)
	char *c2835d8d12 : 1; // 0x55(0x01)
	char *f0c96f4fc4 : 1; // 0x55(0x01)
	char *1c92d522e2 : 1; // 0x55(0x01)
	char pad_55_3 : 5; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct TArray<struct FExpressionOutput> Outputs; // 0x58(0x10)
};

// Class Engine.*699123f0e5
// Size: 0x68 (Inherited: 0x68)
struct U*699123f0e5 : UMaterialExpression {
};

// Class Engine.*c9284c4e3d
// Size: 0x68 (Inherited: 0x68)
struct U*c9284c4e3d : UMaterialExpression {
};

// Class Engine.*4471bd9586
// Size: 0x30 (Inherited: 0x30)
struct U*4471bd9586 : UObject {

	void Activate(); // Function Engine.*4471bd9586.Activate // Native|Public|BlueprintCallable // @ game+0xc56b64
};

// Class Engine.BlueprintGeneratedClass
// Size: 0x3c8 (Inherited: 0x2c0)
struct UBlueprintGeneratedClass : UClass {
	int32 NumReplicatedProperties; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<struct U*cdcaa442f5*> *a7317b54d6; // 0x2c8(0x10)
	struct TArray<struct UActorComponent*> *9ef71c20e3; // 0x2d8(0x10)
	struct TArray<struct U*a7a0563fde*> *259f597d99; // 0x2e8(0x10)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x2f8(0x08)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x300(0x08)
	struct UStructProperty* *c9e96efa09; // 0x308(0x08)
	struct UFunction* *2dc08a4ade; // 0x310(0x08)
	struct TArray<struct F*3600aa5c0a> FastCallPairs; // 0x318(0x10)
	bool *6234aa4ebc; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct TMap<struct FName, struct F*02431ea27c> *54cd37d868; // 0x330(0x50)
	bool *e0afe426c6; // 0x380(0x01)
	char pad_381[0x47]; // 0x381(0x47)
};

// Class Engine.CameraActor
// Size: 0x9b0 (Inherited: 0x408)
struct ACameraActor : AActor {
	enum class EAutoReceiveInput *c43918eaa7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UCameraComponent* CameraComponent; // 0x410(0x08)
	struct USceneComponent* SceneComponent; // 0x418(0x08)
	char pad_420[0x8]; // 0x420(0x08)
	char bConstrainAspectRatio : 1; // 0x428(0x01)
	char pad_428_1 : 7; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	float AspectRatio; // 0x42c(0x04)
	float FOVAngle; // 0x430(0x04)
	float PostProcessBlendWeight; // 0x434(0x04)
	char pad_438[0x8]; // 0x438(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x440(0x570)

	void *d8f12ba800(); // Function Engine.CameraActor.*d8f12ba800 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab094
};

// Class Engine.UserDefinedStruct
// Size: 0x108 (Inherited: 0xf8)
struct UUserDefinedStruct : UScriptStruct {
	struct FGuid Guid; // 0xf8(0x10)
};

// Class Engine.AISystemBase
// Size: 0x50 (Inherited: 0x30)
struct UAISystemBase : UObject {
	struct FStringClassReference AISystemClassName; // 0x30(0x10)
	struct FName AISystemModuleName; // 0x40(0x08)
	bool bInstantiateAISystemOnClient; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*7faddb26b3
// Size: 0x50 (Inherited: 0x30)
struct U*7faddb26b3 : UObject {
	struct TArray<struct F*614c6831c7> Areas; // 0x30(0x10)
	struct F*dd97a4099e IncludeFlags; // 0x40(0x04)
	struct F*dd97a4099e ExcludeFlags; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Engine.*5cde8540b3
// Size: 0x40 (Inherited: 0x30)
struct U*5cde8540b3 : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.Model
// Size: 0x568 (Inherited: 0x30)
struct UModel : UObject {
	char pad_30[0x538]; // 0x30(0x538)
};

// Class Engine.*0e4851fd83
// Size: 0x30 (Inherited: 0x30)
struct U*0e4851fd83 : UObject {
};

// Class Engine.*ac81b8ce3c
// Size: 0x30 (Inherited: 0x30)
struct U*ac81b8ce3c : UObject {
};

// Class Engine.EdGraphNode
// Size: 0xa8 (Inherited: 0x30)
struct UEdGraphNode : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> DeprecatedPins; // 0x40(0x10)
	int32 *7fd1966a66; // 0x50(0x04)
	int32 *39ee486500; // 0x54(0x04)
	int32 *24c5dc7d16; // 0x58(0x04)
	int32 *a3c4327bc9; // 0x5c(0x04)
	char *a6a3b5d5fe : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString NodeComment; // 0x68(0x10)
	bool *28c2068cc1; // 0x78(0x01)
	bool *fcfa3c4f53; // 0x79(0x01)
	bool *3c855ef06e; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	int32 *b5ee58d6de; // 0x7c(0x04)
	struct FString *25e7648d30; // 0x80(0x10)
	struct FGuid NodeGuid; // 0x90(0x10)
	enum class ENodeAdvancedPins *a60922bdd6; // 0xa0(0x01)
	enum class ENodeEnabledState *a1d48742a2; // 0xa1(0x01)
	bool *bcbc8fe9b4; // 0xa2(0x01)
	bool bIsNodeEnabled; // 0xa3(0x01)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.EdGraphPin_Deprecated
// Size: 0x148 (Inherited: 0x30)
struct UEdGraphPin_Deprecated : UObject {
	struct FString PinName; // 0x30(0x10)
	struct FString PinToolTip; // 0x40(0x10)
	enum class EEdGraphPinDirection Direction; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct F*c760683241 PinType; // 0x58(0x80)
	struct FString DefaultValue; // 0xd8(0x10)
	struct FString *6681b284ab; // 0xe8(0x10)
	struct UObject* *3a208b4b78; // 0xf8(0x08)
	struct FText *e2e1d469ef; // 0x100(0x18)
	struct TArray<struct UEdGraphPin_Deprecated*> *fe4bb925c1; // 0x118(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> *4138ba5f80; // 0x128(0x10)
	struct UEdGraphPin_Deprecated* *e0e888d50f; // 0x138(0x08)
	struct UEdGraphPin_Deprecated* *cdfc22b853; // 0x140(0x08)
};

// Class Engine.*484eacf266
// Size: 0x30 (Inherited: 0x30)
struct U*484eacf266 : UInterface {
};

// Class Engine.Level
// Size: 0x330 (Inherited: 0x30)
struct ULevel : UObject {
	char pad_30[0x60]; // 0x30(0x60)
	struct TArray<struct FGuid> *452e3ab3b7; // 0x90(0x10)
	struct UWorld* *0c2ed5c6ba; // 0xa0(0x08)
	struct U*5b918d4999* ActorCluster; // 0xa8(0x08)
	struct TArray<struct U*d83febdd27*> *1988633d5a; // 0xb0(0x10)
	float *2bc81c7841; // 0xc0(0x04)
	struct FIntVector *b01974b4ce; // 0xc4(0x0c)
	struct TArray<struct U*204470fe3a*> *b8d105c335; // 0xd0(0x10)
	struct UMapBuildDataRegistry* *355caf4b0c; // 0xe0(0x08)
	struct ANavigationObjectBase* *285a8fdd46; // 0xe8(0x08)
	struct UModel* Model; // 0xf0(0x08)
	int32 *255d9e4e74; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct TArray<struct FVector> *c941c0bf37; // 0x100(0x10)
	bool *e41f9fc895; // 0x110(0x01)
	char pad_111[0x17]; // 0x111(0x17)
	struct ANavigationObjectBase* *49596c1750; // 0x128(0x08)
	char pad_130[0x70]; // 0x130(0x70)
	struct ALevelScriptActor* LevelScriptActor; // 0x1a0(0x08)
	int32 *41942aff95; // 0x1a8(0x04)
	char pad_1AC[0x3c]; // 0x1ac(0x3c)
	float *2013658f1c; // 0x1e8(0x04)
	char pad_1EC_0 : 2; // 0x1ec(0x01)
	char *04c05013b7 : 1; // 0x1ec(0x01)
	char bIsVisible : 1; // 0x1ec(0x01)
	char bLocked : 1; // 0x1ec(0x01)
	char *a243b3e55e : 1; // 0x1ec(0x01)
	char pad_1EC_6 : 2; // 0x1ec(0x01)
	char pad_1ED[0x8b]; // 0x1ed(0x8b)
	struct FGuid *47880ed3ea; // 0x278(0x10)
	char pad_288[0x78]; // 0x288(0x78)
	struct AWorldSettings* WorldSettings; // 0x300(0x08)
	char pad_308[0x8]; // 0x308(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x310(0x10)
	char pad_320[0x10]; // 0x320(0x10)
};

// Class Engine.*078dd500bb
// Size: 0x30 (Inherited: 0x30)
struct U*078dd500bb : UInterface {
};

// Class Engine.AmbientSound
// Size: 0x410 (Inherited: 0x408)
struct AAmbientSound : AActor {
	struct UAudioComponent* AudioComponent; // 0x408(0x08)

	void FadeOut(); // Function Engine.AmbientSound.FadeOut // Final|Native|Public|BlueprintCallable // @ game+0x67a9de0
	void Play(); // Function Engine.AmbientSound.Play // Final|Native|Public|BlueprintCallable // @ game+0x67b87c8
	void *c8b0393496(); // Function Engine.AmbientSound.*c8b0393496 // Final|Native|Public|BlueprintCallable // @ game+0x67a9cf0
	void AdjustVolume(); // Function Engine.AmbientSound.AdjustVolume // Final|Native|Public|BlueprintCallable // @ game+0x67a36dc
	void Stop(); // Function Engine.AmbientSound.Stop // Final|Native|Public|BlueprintCallable // @ game+0x67c3bc0
};

// Class Engine.AutoBenchSettings
// Size: 0x48 (Inherited: 0x30)
struct UAutoBenchSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*fc49b70054> Settings; // 0x38(0x10)
};

// Class Engine.AutoBenchControlActor
// Size: 0x408 (Inherited: 0x408)
struct AAutoBenchControlActor : AActor {
};

// Class Engine.*2f0001d6bf
// Size: 0x30 (Inherited: 0x30)
struct U*2f0001d6bf : UObject {
};

// Class Engine.*0a30f37bbc
// Size: 0x30 (Inherited: 0x30)
struct U*0a30f37bbc : UInterface {
};

// Class Engine.BillboardComponent
// Size: 0xa20 (Inherited: 0xa00)
struct UBillboardComponent : UPrimitiveComponent {
	struct UTexture2D* Sprite; // 0x9f8(0x08)
	char bIsScreenSizeScaled : 1; // 0xa00(0x01)
	float ScreenSize; // 0xa04(0x04)
	float U; // 0xa08(0x04)
	float UL; // 0xa0c(0x04)
	float V; // 0xa10(0x04)
	float VL; // 0xa14(0x04)
	struct FColor Color; // 0xa18(0x04)

	void *de3bcd9efe(); // Function Engine.BillboardComponent.*de3bcd9efe // Native|Public|BlueprintCallable // @ game+0x67c290c
	void SetColor(); // Function Engine.BillboardComponent.SetColor // Final|Native|Public|HasDefaults // @ game+0x67beb78
	void *d73d19ce7c(); // Function Engine.BillboardComponent.*d73d19ce7c // Native|Public|BlueprintCallable // @ game+0x67c21b8
	void *bcd91c059a(); // Function Engine.BillboardComponent.*bcd91c059a // Native|Public|BlueprintCallable // @ game+0x67c224c
};

// Class Engine.*526b625f4a
// Size: 0x30 (Inherited: 0x30)
struct U*526b625f4a : UInterface {
};

// Class Engine.StaticMesh
// Size: 0x178 (Inherited: 0x30)
struct UStaticMesh : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	int32 MinLOD; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x50(0x10)
	struct TArray<struct F*43af02caf0> StaticMaterials; // 0x60(0x10)
	float *7732c89687; // 0x70(0x04)
	int32 LightMapResolution; // 0x74(0x04)
	int32 *9726a81429; // 0x78(0x04)
	float *02c4f73f59; // 0x7c(0x04)
	struct UBodySetup* BodySetup; // 0x80(0x08)
	int32 *c247be02b2; // 0x88(0x04)
	char *c76a126daa : 1; // 0x8c(0x01)
	char *a54083ef41 : 1; // 0x8c(0x01)
	char bStripComplexCollisionForConsole : 1; // 0x8c(0x01)
	char *5fad43e82d : 1; // 0x8c(0x01)
	char bRequiresAreaWeightedSampling : 1; // 0x8c(0x01)
	char pad_8C_5 : 3; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float LpvBiasMultiplier; // 0x90(0x04)
	bool *ecb84c8f41; // 0x94(0x01)
	char pad_95[0x33]; // 0x95(0x33)
	struct TArray<struct U*51ab10dd10*> Sockets; // 0xc8(0x10)
	char pad_D8[0x10]; // 0xd8(0x10)
	struct FVector *288824cc7d; // 0xe8(0x0c)
	struct FVector *f93bcbf265; // 0xf4(0x0c)
	struct FBoxSphereBounds *a5cca5147a; // 0x100(0x1c)
	bool *f7f2e560f1; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	int32 *0f0507e036; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x128(0x10)
	struct UNavCollision* NavCollision; // 0x138(0x08)
	struct F*1dd977ee69 *e93e77c09b; // 0x140(0x28)
	struct TArray<struct UMaterialInstanceConstant*> *431663e11f; // 0x168(0x10)

	void *f36fae672e(); // Function Engine.StaticMesh.*f36fae672e // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67abb18
	void *ba56162d2e(); // Function Engine.StaticMesh.*ba56162d2e // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67af1ec
	void *7bd3928ea5(); // Function Engine.StaticMesh.*7bd3928ea5 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67af17c
	void *c8e9b0a557(); // Function Engine.StaticMesh.*c8e9b0a557 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67aba0c
};

// Class Engine.*00b670dc95
// Size: 0x5f0 (Inherited: 0x4d0)
struct U*00b670dc95 : USceneComponent {
	struct FVector Extents; // 0x4d0(0x0c)
	struct FVector FadeExtents_Neg; // 0x4dc(0x0c)
	struct FVector FadeExtents_Pos; // 0x4e8(0x0c)
	bool bOutdoorTransition; // 0x4f4(0x01)
	char pad_4F5[0x3]; // 0x4f5(0x03)
	float VolumeAlpha; // 0x4f8(0x04)
	float Brightness; // 0x4fc(0x04)
	float SkyIntensity; // 0x500(0x04)
	int32 Priority; // 0x504(0x04)
	struct F*47c2c57997 AmbientCube2; // 0x508(0xc8)
	char pad_5D0[0x20]; // 0x5d0(0x20)

	void *0c5a7fd6a0(); // Function Engine.*00b670dc95.*0c5a7fd6a0 // Final|Native|Public // @ game+0xbdbb4c
};

// Class Engine.GIVolumesContainerComponent
// Size: 0x4f0 (Inherited: 0x4d0)
struct UGIVolumesContainerComponent : USceneComponent {
	char pad_4D0[0x20]; // 0x4d0(0x20)
};

// Class Engine.BoxGIVolume
// Size: 0x410 (Inherited: 0x408)
struct ABoxGIVolume : AActor {
	struct U*00b670dc95* VolumeComponent; // 0x408(0x08)
};

// Class Engine.BrushShape
// Size: 0x440 (Inherited: 0x440)
struct ABrushShape : ABrush {
};

// Class Engine.AudioVolume
// Size: 0x488 (Inherited: 0x440)
struct AAudioVolume : AVolume {
	float Priority; // 0x440(0x04)
	char bEnabled : 1; // 0x444(0x01)
	char pad_444_1 : 7; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	struct FReverbSettings Settings; // 0x448(0x18)
	struct F*2b1daf3feb AmbientZoneSettings; // 0x460(0x24)
	char pad_484[0x4]; // 0x484(0x04)

	void *f938159d44(); // Function Engine.AudioVolume.*f938159d44 // Final|Native|Public|BlueprintCallable // @ game+0x67bf578
	void *bbd4275724(); // Function Engine.AudioVolume.*bbd4275724 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67c0290
	void SetPriority(); // Function Engine.AudioVolume.SetPriority // Final|Native|Public|BlueprintCallable // @ game+0x67c1ae4
	void SetReverbSettings(); // Function Engine.AudioVolume.SetReverbSettings // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67c2060
	void OnRep_bEnabled(); // Function Engine.AudioVolume.OnRep_bEnabled // Final|Native|Private // @ game+0x5a410a8
};

// Class Engine.BlockingVolume
// Size: 0x440 (Inherited: 0x440)
struct ABlockingVolume : AVolume {
};

// Class Engine.CameraBlockingVolume
// Size: 0x440 (Inherited: 0x440)
struct ACameraBlockingVolume : AVolume {
};

// Class Engine.CullDistanceVolume
// Size: 0x468 (Inherited: 0x440)
struct ACullDistanceVolume : AVolume {
	struct TArray<struct F*a4caa301c7> CullDistances; // 0x440(0x10)
	char bEnabled : 1; // 0x450(0x01)
	char pad_450_1 : 7; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	float CullDistanceForLODActor; // 0x454(0x04)
	float CullDistanceForLODActorTooFar; // 0x458(0x04)
	bool bUseActorBound; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	float IgnoreActorBoundSize; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
};

// Class Engine.LevelStreamingVolume
// Size: 0x458 (Inherited: 0x440)
struct ALevelStreamingVolume : AVolume {
	struct TArray<struct FName> StreamingLevelNames; // 0x440(0x10)
	char bEditorPreVisOnly : 1; // 0x450(0x01)
	char bDisabled : 1; // 0x450(0x01)
	char pad_450_2 : 6; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	enum class *bae5a64964 StreamingUsage; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
};

// Class Engine.LightmassCharacterIndirectDetailVolume
// Size: 0x440 (Inherited: 0x440)
struct ALightmassCharacterIndirectDetailVolume : AVolume {
};

// Class Engine.LightmassImportanceVolume
// Size: 0x440 (Inherited: 0x440)
struct ALightmassImportanceVolume : AVolume {
};

// Class Engine.MeshMergeCullingVolume
// Size: 0x440 (Inherited: 0x440)
struct AMeshMergeCullingVolume : AVolume {
};

// Class Engine.NavMeshBoundsVolume
// Size: 0x448 (Inherited: 0x440)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
};

// Class Engine.NavModifierVolume
// Size: 0x450 (Inherited: 0x440)
struct ANavModifierVolume : AVolume {
	char pad_440[0x8]; // 0x440(0x08)
	struct UClass* AreaClass; // 0x448(0x08)

	void *17584ae5c0(); // Function Engine.NavModifierVolume.*17584ae5c0 // Final|Native|Public|BlueprintCallable // @ game+0x67bd0b4
};

// Class Engine.DefaultPhysicsVolume
// Size: 0x458 (Inherited: 0x458)
struct ADefaultPhysicsVolume : APhysicsVolume {
};

// Class Engine.KillZVolume
// Size: 0x458 (Inherited: 0x458)
struct AKillZVolume : APhysicsVolume {
};

// Class Engine.PainCausingVolume
// Size: 0x480 (Inherited: 0x458)
struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 1; // 0x458(0x01)
	char pad_458_1 : 7; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	float DamagePerSec; // 0x45c(0x04)
	struct UClass* DamageType; // 0x460(0x08)
	float PainInterval; // 0x468(0x04)
	char bEntryPain : 1; // 0x46c(0x01)
	char *79b99203af : 1; // 0x46c(0x01)
	char pad_46C_2 : 6; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	struct AController* *f6a0b7550d; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)
};

// Class Engine.BlendableInterface
// Size: 0x30 (Inherited: 0x30)
struct UBlendableInterface : UInterface {
};

// Class Engine.Scene
// Size: 0x30 (Inherited: 0x30)
struct UScene : UObject {
};

// Class Engine.*c0fb985655
// Size: 0x30 (Inherited: 0x30)
struct U*c0fb985655 : UInterface {
};

// Class Engine.PostProcessVolume
// Size: 0x9d0 (Inherited: 0x440)
struct APostProcessVolume : AVolume {
	char pad_440[0x10]; // 0x440(0x10)
	struct FPostProcessSettings Settings; // 0x450(0x570)
	float Priority; // 0x9c0(0x04)
	float BlendRadius; // 0x9c4(0x04)
	float BlendWeight; // 0x9c8(0x04)
	char bEnabled : 1; // 0x9cc(0x01)
	char bUnbound : 1; // 0x9cc(0x01)
	char pad_9CC_2 : 6; // 0x9cc(0x01)
	char pad_9CD[0x3]; // 0x9cd(0x03)

	void *ecceb55aba(); // Function Engine.PostProcessVolume.*ecceb55aba // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67a2cc0
	void *7bdf8efba3(); // Function Engine.PostProcessVolume.*7bdf8efba3 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67c4744
};

// Class Engine.PrecomputedVisibilityOverrideVolume
// Size: 0x470 (Inherited: 0x440)
struct APrecomputedVisibilityOverrideVolume : AVolume {
	struct TArray<struct AActor*> OverrideVisibleActors; // 0x440(0x10)
	struct TArray<struct AActor*> OverrideInvisibleActors; // 0x450(0x10)
	struct TArray<struct FName> OverrideInvisibleLevels; // 0x460(0x10)
};

// Class Engine.PrecomputedVisibilityVolume
// Size: 0x440 (Inherited: 0x440)
struct APrecomputedVisibilityVolume : AVolume {
};

// Class Engine.TriggerVolume
// Size: 0x440 (Inherited: 0x440)
struct ATriggerVolume : AVolume {
};

// Class Engine.*e0a79ad73f
// Size: 0x30 (Inherited: 0x30)
struct U*e0a79ad73f : UInterface {
};

// Class Engine.CameraShake
// Size: 0x170 (Inherited: 0x30)
struct UCameraShake : UObject {
	char *1bcf2af904 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *bf3553f181; // 0x34(0x04)
	float *3148f5c3c5; // 0x38(0x04)
	float *8698cd9385; // 0x3c(0x04)
	struct F*673e053786 *ac240f8630; // 0x40(0x24)
	struct F*eff78d75d0 *b8c7dd6819; // 0x64(0x24)
	struct F*58787e3608 *511d76dce3; // 0x88(0x0c)
	float AnimPlayRate; // 0x94(0x04)
	float *5aee86e63b; // 0x98(0x04)
	float *b54198ecd1; // 0x9c(0x04)
	float *43bfb06925; // 0xa0(0x04)
	float *968bd93263; // 0xa4(0x04)
	struct UCameraAnim* Anim; // 0xa8(0x08)
	char bRandomAnimSegment : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x17]; // 0xb1(0x17)
	struct APlayerCameraManager* CameraOwner; // 0xc8(0x08)
	char pad_D0[0x88]; // 0xd0(0x88)
	float ShakeScale; // 0x158(0x04)
	float OscillatorTimeRemaining; // 0x15c(0x04)
	struct U*de6aae17ea* AnimInst; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)

	void ReceivePlayShake(); // Function Engine.CameraShake.ReceivePlayShake // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ReceiveStopShake(); // Function Engine.CameraShake.ReceiveStopShake // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void BlueprintUpdateCameraShake(); // Function Engine.CameraShake.BlueprintUpdateCameraShake // Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void ReceiveIsFinished(); // Function Engine.CameraShake.ReceiveIsFinished // Native|Event|Public|BlueprintEvent|Const // @ game+0xcc9138
};

// Class Engine.*63b14265fa
// Size: 0x290 (Inherited: 0x200)
struct U*63b14265fa : UActorComponent {
	char pad_200[0x70]; // 0x200(0x70)
	struct TArray<struct F*08ee4d66ce> *08ee4d66ce; // 0x270(0x10)
	char pad_280[0x10]; // 0x280(0x10)

	void *813159274a(); // Function Engine.*63b14265fa.*813159274a // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x67b15c0
	void OnInputOwnerEndPlayed(); // Function Engine.*63b14265fa.OnInputOwnerEndPlayed // Final|Native|Private // @ game+0x67b7ea8
	void *c51a2b8470(); // Function Engine.*63b14265fa.*c51a2b8470 // Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac800
	void *7e45599f79(); // Function Engine.*63b14265fa.*7e45599f79 // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac510
	void *a04458f0a0(); // Function Engine.*63b14265fa.*a04458f0a0 // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x67b15c0
	void *f02eefa657(); // Function Engine.*63b14265fa.*f02eefa657 // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0924
	void *cd26f7604c(); // Function Engine.*63b14265fa.*cd26f7604c // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac510
	void *d2538d0575(); // Function Engine.*63b14265fa.*d2538d0575 // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac618
	void *4f1eccd288(); // Function Engine.*63b14265fa.*4f1eccd288 // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac730
	void *dd977a3fde(); // Function Engine.*63b14265fa.*dd977a3fde // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x67b15c0
};

// Class Engine.CurveFloat
// Size: 0xb0 (Inherited: 0x38)
struct UCurveFloat : UCurveBase {
	struct FRichCurve *2d625a83c8; // 0x38(0x70)
	bool *2df1ab8272; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void *f3987cbe77(); // Function Engine.CurveFloat.*f3987cbe77 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x994e08
	void *1bf4f700b6(); // Function Engine.CurveFloat.*1bf4f700b6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac98c
};

// Class Engine.DecalActor
// Size: 0x410 (Inherited: 0x408)
struct ADecalActor : AActor {
	struct UDecalComponent* Decal; // 0x408(0x08)

	void *5ef8202fe7(); // Function Engine.DecalActor.*5ef8202fe7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ac964
	void CreateDynamicMaterialInstance(); // Function Engine.DecalActor.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x5a0b288
	void *e5a6406b5b(); // Function Engine.DecalActor.*e5a6406b5b // Final|Native|Public|BlueprintCallable // @ game+0x67bf2d0
};

// Class Engine.DestructibleActor
// Size: 0x428 (Inherited: 0x408)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x408(0x08)
	char bAffectNavigation : 1; // 0x410(0x01)
	char pad_410_1 : 7; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FMulticastDelegate OnActorFracture; // 0x418(0x10)
};

// Class Engine.DistanceFieldCapture
// Size: 0x410 (Inherited: 0x408)
struct ADistanceFieldCapture : AActor {
	struct U*8aed76bbf2* CaptureComponent; // 0x408(0x08)
};

// Class Engine.DocumentationActor
// Size: 0x410 (Inherited: 0x408)
struct ADocumentationActor : AActor {
	char pad_408[0x8]; // 0x408(0x08)
};

// Class Engine.Emitter
// Size: 0x458 (Inherited: 0x408)
struct AEmitter : AActor {
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x408(0x08)
	char *9139d37487 : 1; // 0x410(0x01)
	char bPostUpdateTickGroup : 1; // 0x410(0x01)
	char *1ba7876da8 : 1; // 0x410(0x01)
	char pad_410_3 : 5; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FMulticastDelegate OnParticleSpawn; // 0x418(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0x428(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0x438(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0x448(0x10)

	void *b6de83bb83(); // Function Engine.Emitter.*b6de83bb83 // Final|Native|Public|BlueprintCallable // @ game+0x67c440c
	void *9b5dcbfbeb(); // Function Engine.Emitter.*9b5dcbfbeb // Native|Public|BlueprintCallable // @ game+0x5aa2b20
	void OnRep_bCurrentlyActive(); // Function Engine.Emitter.OnRep_bCurrentlyActive // Native|Public // @ game+0x5fc3d0
	void Activate(); // Function Engine.Emitter.Activate // Final|Native|Public|BlueprintCallable // @ game+0x67a1550
	void OnParticleSystemFinished(); // Function Engine.Emitter.OnParticleSystemFinished // Native|Public // @ game+0x59c21e0
	void *3ed14454d9(); // Function Engine.Emitter.*3ed14454d9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c2c90
	void *3e55e7d95c(); // Function Engine.Emitter.*3e55e7d95c // Final|Native|Public|BlueprintCallable // @ game+0x67c0c90
	void *9252cbf5cf(); // Function Engine.Emitter.*9252cbf5cf // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67bec5c
	void Deactivate(); // Function Engine.Emitter.Deactivate // Final|Native|Public|BlueprintCallable // @ game+0x67a7ae0
	void *1978396d1f(); // Function Engine.Emitter.*1978396d1f // Final|Native|Public|BlueprintCallable // @ game+0x67bc8b8
	void SetFloatParameter(); // Function Engine.Emitter.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x67bf6cc
	void IsActive(); // Function Engine.Emitter.IsActive // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1280
};

// Class Engine.EmitterCameraLensEffectBase
// Size: 0x4c0 (Inherited: 0x458)
struct AEmitterCameraLensEffectBase : AEmitter {
	struct UParticleSystem* *b70d2a0387; // 0x458(0x08)
	struct UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x460(0x08)
	struct APlayerCameraManager* *26b4993c40; // 0x468(0x08)
	struct FTransform RelativeTransform; // 0x470(0x30)
	float *5d0f61c14f; // 0x4a0(0x04)
	char *5d42685f42 : 1; // 0x4a4(0x01)
	char *15ffb9a242 : 1; // 0x4a4(0x01)
	char pad_4A4_2 : 6; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	struct TArray<struct UClass*> *b15eb3abf8; // 0x4a8(0x10)
	float DistFromCamera; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
};

// Class Engine.FoliageBlockingVolumeActor
// Size: 0x410 (Inherited: 0x408)
struct AFoliageBlockingVolumeActor : AActor {
	struct U*1ee70631d9* FoliageBlockingVolumeComponent; // 0x408(0x08)
};

// Class Engine.DebugCameraHUD
// Size: 0x4f0 (Inherited: 0x4f0)
struct ADebugCameraHUD : AHUD {
};

// Class Engine.AtmosphericFog
// Size: 0x410 (Inherited: 0x408)
struct AAtmosphericFog : AInfo {
	struct UAtmosphericFogComponent* AtmosphericFogComponent; // 0x408(0x08)
};

// Class Engine.ExponentialHeightFog
// Size: 0x418 (Inherited: 0x408)
struct AExponentialHeightFog : AInfo {
	struct UExponentialHeightFogComponent* Component; // 0x408(0x08)
	char bEnabled : 1; // 0x410(0x01)
	char pad_410_1 : 7; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled // Native|Public // @ game+0xdb4c0c
};

// Class Engine.GameNetworkManager
// Size: 0x490 (Inherited: 0x408)
struct AGameNetworkManager : AInfo {
	int32 *f74a0bfe74; // 0x408(0x04)
	float *c5440b9f3d; // 0x40c(0x04)
	int32 TotalNetBandwidth; // 0x410(0x04)
	int32 MinDynamicBandwidth; // 0x414(0x04)
	int32 MaxDynamicBandwidth; // 0x418(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x41c(0x01)
	char *734f9b33bb : 1; // 0x41c(0x01)
	char pad_41C_2 : 6; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	float StandbyRxCheatTime; // 0x420(0x04)
	float StandbyTxCheatTime; // 0x424(0x04)
	int32 BadPingThreshold; // 0x428(0x04)
	float PercentMissingForRxStandby; // 0x42c(0x04)
	float PercentMissingForTxStandby; // 0x430(0x04)
	float PercentForBadPing; // 0x434(0x04)
	float JoinInProgressStandbyWaitTime; // 0x438(0x04)
	float MoveRepSize; // 0x43c(0x04)
	float MAXPOSITIONERRORSQUARED; // 0x440(0x04)
	float MAXNEARZEROVELOCITYSQUARED; // 0x444(0x04)
	float CLIENTADJUSTUPDATECOST; // 0x448(0x04)
	float MAXCLIENTUPDATEINTERVAL; // 0x44c(0x04)
	float MaxMoveDeltaTime; // 0x450(0x04)
	float ClientNetSendMoveDeltaTime; // 0x454(0x04)
	float ClientNetSendMoveDeltaTimeThrottled; // 0x458(0x04)
	int32 ClientNetSendMoveThrottleAtNetSpeed; // 0x45c(0x04)
	int32 ClientNetSendMoveThrottleOverPlayerCount; // 0x460(0x04)
	bool ClientAuthorativePosition; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	float ClientErrorUpdateRateLimit; // 0x468(0x04)
	bool bMovementTimeDiscrepancyDetection; // 0x46c(0x01)
	bool bMovementTimeDiscrepancyResolution; // 0x46d(0x01)
	char pad_46E[0x2]; // 0x46e(0x02)
	float MovementTimeDiscrepancyResolutionMinFPS; // 0x470(0x04)
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x474(0x04)
	float MovementTimeDiscrepancyMinTimeMargin; // 0x478(0x04)
	float MovementTimeDiscrepancyResolutionRate; // 0x47c(0x04)
	float MovementTimeDiscrepancyDriftAllowance; // 0x480(0x04)
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x484(0x01)
	bool bUseDistanceBasedRelevancy; // 0x485(0x01)
	char pad_486[0xa]; // 0x486(0x0a)
};

// Class Engine.SkyLight
// Size: 0x418 (Inherited: 0x408)
struct ASkyLight : AInfo {
	struct USkyLightComponent* LightComponent; // 0x408(0x08)
	char bEnabled : 1; // 0x410(0x01)
	char pad_410_1 : 7; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled // Native|Public // @ game+0xdb4c0c
};

// Class Engine.WindDirectionalSource
// Size: 0x410 (Inherited: 0x408)
struct AWindDirectionalSource : AInfo {
	struct U*4f57f7c40f* Component; // 0x408(0x08)
};

// Class Engine.WorldSettings
// Size: 0x5f0 (Inherited: 0x408)
struct AWorldSettings : AInfo {
	char pad_408[0x8]; // 0x408(0x08)
	char bEnableWorldBoundsChecks : 1; // 0x410(0x01)
	char bEnableNavigationSystem : 1; // 0x410(0x01)
	char bEnableAISystem : 1; // 0x410(0x01)
	char bEnableWorldComposition : 1; // 0x410(0x01)
	char bUseClientSideLevelStreamingVolumes : 1; // 0x410(0x01)
	char bEnableWorldOriginRebasing : 1; // 0x410(0x01)
	char *9b24f35904 : 1; // 0x410(0x01)
	char bGlobalGravitySet : 1; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float KillZ; // 0x414(0x04)
	struct AInfo* LevelAttribute; // 0x418(0x08)
	struct UClass* KillZDamageType; // 0x420(0x08)
	float *31017d6152; // 0x428(0x04)
	float GlobalGravityZ; // 0x42c(0x04)
	struct UClass* DefaultPhysicsVolumeClass; // 0x430(0x08)
	struct UClass* PhysicsCollisionHandlerClass; // 0x438(0x08)
	struct UClass* DefaultGameMode; // 0x440(0x08)
	struct UClass* *2c0407c054; // 0x448(0x08)
	int32 *481b17bd39; // 0x450(0x04)
	char *a0f57a4d2d : 1; // 0x454(0x01)
	char pad_454_1 : 7; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct FVector DefaultColorScale; // 0x458(0x0c)
	float *68b59b1aed; // 0x464(0x04)
	float *4cf3ade969; // 0x468(0x04)
	float *5e36eee532; // 0x46c(0x04)
	char *481faab933 : 1; // 0x470(0x01)
	char *832f46d73e : 1; // 0x470(0x01)
	char pad_470_2 : 6; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	int32 *3d149187d7; // 0x474(0x04)
	enum class *c5fa5b0d34 *8406c10b95; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	char *e13421b851 : 1; // 0x47c(0x01)
	char pad_47C_1 : 7; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	struct FLightmassWorldInfoSettings LightmassSettings; // 0x480(0x44)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct FReverbSettings DefaultReverbSettings; // 0x4c8(0x18)
	struct F*2b1daf3feb DefaultAmbientZoneSettings; // 0x4e0(0x24)
	char pad_504[0x4]; // 0x504(0x04)
	struct USoundMix* *8ec9299a48; // 0x508(0x08)
	float WorldToMeters; // 0x510(0x04)
	float MonoCullingDistance; // 0x514(0x04)
	struct U*ba77e92031* BookMarks[0x0a]; // 0x518(0x50)
	float TimeDilation; // 0x568(0x04)
	float *f46a1a2170; // 0x56c(0x04)
	float DemoPlayTimeDilation; // 0x570(0x04)
	float MinGlobalTimeDilation; // 0x574(0x04)
	float MaxGlobalTimeDilation; // 0x578(0x04)
	char pad_57C[0x8]; // 0x57c(0x08)
	struct FBox MBPBounds; // 0x584(0x1c)
	char bOverrideDefaultBroadphaseSettings : 1; // 0x5a0(0x01)
	char pad_5A0_1 : 7; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	char *5132123374 : 1; // 0x5a4(0x01)
	char *d43a2de1ac : 1; // 0x5a4(0x01)
	char pad_5A4_2 : 6; // 0x5a4(0x01)
	char pad_5A5[0x3]; // 0x5a5(0x03)
	struct TArray<struct F*6ca3c6038b> *260958dbb0; // 0x5a8(0x10)
	struct FMulticastDelegate *9f875f1f06; // 0x5b8(0x10)
	struct FMulticastDelegate *6e6574d2dd; // 0x5c8(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x5d8(0x10)
	struct APlayerState* *50a0801c85; // 0x5e8(0x08)

	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ // Native|Public // @ game+0x5fc3d0
	void TakeMBPBounds(); // Function Engine.WorldSettings.TakeMBPBounds // Native|Event|Public|BlueprintEvent // @ game+0xdb4c0c
};

// Class Engine.InstancedDeferredDecalActor
// Size: 0x440 (Inherited: 0x408)
struct AInstancedDeferredDecalActor : AActor {
	bool bUseInstancePool; // 0x408(0x01)
	bool bUseDynamicInstance; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct UMaterialInterface* SharedMaterial; // 0x410(0x08)
	struct U*23111f4fe9* RootDecalComponent; // 0x418(0x08)
	struct TArray<struct U*23111f4fe9*> decals; // 0x420(0x10)
	char pad_430[0x10]; // 0x430(0x10)

	void *028d8429ac(); // Function Engine.InstancedDeferredDecalActor.*028d8429ac // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67a29bc
	void *f5d3b0ecf2(); // Function Engine.InstancedDeferredDecalActor.*f5d3b0ecf2 // Final|Native|Public|BlueprintCallable // @ game+0x59c9e84
	void CreateDynamicMaterialInstance(); // Function Engine.InstancedDeferredDecalActor.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x5a0b288
	void *473627bd49(); // Function Engine.InstancedDeferredDecalActor.*473627bd49 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59bb028
	void *5ef8202fe7(); // Function Engine.InstancedDeferredDecalActor.*5ef8202fe7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a39ca0
	void *e5a6406b5b(); // Function Engine.InstancedDeferredDecalActor.*e5a6406b5b // Final|Native|Public|BlueprintCallable // @ game+0x67bf36c
	void *ba91a053fa(); // Function Engine.InstancedDeferredDecalActor.*ba91a053fa // Final|Native|Public|BlueprintCallable // @ game+0x67c2c00
	void *e44e849db7(); // Function Engine.InstancedDeferredDecalActor.*e44e849db7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59bafec
};

// Class Engine.InstancedSplineDecalActor
// Size: 0x410 (Inherited: 0x408)
struct AInstancedSplineDecalActor : AActor {
	struct U*611beb24ff* InstancedSplineDecalComponent; // 0x408(0x08)
};

// Class Engine.LevelBlockLandscapeGizmoActor
// Size: 0x410 (Inherited: 0x408)
struct ALevelBlockLandscapeGizmoActor : AActor {
	struct U*5c7832fd96* LandscapeGizmoComponent; // 0x408(0x08)
};

// Class Engine.LevelBlocksDataActor
// Size: 0x410 (Inherited: 0x408)
struct ALevelBlocksDataActor : AActor {
	struct U*686d9ef451* LevelBlocksDataComponent; // 0x408(0x08)
};

// Class Engine.LevelBlockSpawnedActor
// Size: 0x408 (Inherited: 0x408)
struct ALevelBlockSpawnedActor : AActor {
};

// Class Engine.LevelBlockSpawnPointActor
// Size: 0x410 (Inherited: 0x408)
struct ALevelBlockSpawnPointActor : AActor {
	struct U*fe01a1312a* SpawnPointComponent; // 0x408(0x08)
};

// Class Engine.LevelBounds
// Size: 0x410 (Inherited: 0x408)
struct ALevelBounds : AActor {
	bool *34ffd6f27e; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
};

// Class Engine.Light
// Size: 0x418 (Inherited: 0x408)
struct ALight : AActor {
	struct ULightComponent* LightComponent; // 0x408(0x08)
	char bEnabled : 1; // 0x410(0x01)
	char pad_410_1 : 7; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)

	void SetBrightness(); // Function Engine.Light.SetBrightness // Final|Native|Public|BlueprintCallable // @ game+0x67be288
	void *2754dcd2c9(); // Function Engine.Light.*2754dcd2c9 // Final|Native|Public|BlueprintCallable // @ game+0x67be4cc
	void *a183414a4c(); // Function Engine.Light.*a183414a4c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67abb4c
	void *87ec9d9ecc(); // Function Engine.Light.*87ec9d9ecc // Final|Native|Public|BlueprintCallable // @ game+0x67c4488
	void OnRep_bEnabled(); // Function Engine.Light.OnRep_bEnabled // Native|Public // @ game+0xdb4c0c
	void *c2ca621058(); // Function Engine.Light.*c2ca621058 // Final|Native|Public|BlueprintCallable // @ game+0x67c06dc
	void IsEnabled(); // Function Engine.Light.IsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b16f0
	void *22316da662(); // Function Engine.Light.*22316da662 // Final|Native|Public|BlueprintCallable // @ game+0x67bccf0
	void *f938159d44(); // Function Engine.Light.*f938159d44 // Final|Native|Public|BlueprintCallable // @ game+0x67bf634
	void *9f60627cae(); // Function Engine.Light.*9f60627cae // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c050c
	void *fc39c3eb5f(); // Function Engine.Light.*fc39c3eb5f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ae6f0
	void *b21589b6db(); // Function Engine.Light.*b21589b6db // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67c0770
	void *3a0fe26cd5(); // Function Engine.Light.*3a0fe26cd5 // Final|Native|Public|BlueprintCallable // @ game+0x67c0640
};

// Class Engine.DirectionalLight
// Size: 0x418 (Inherited: 0x418)
struct ADirectionalLight : ALight {
};

// Class Engine.PointLight
// Size: 0x420 (Inherited: 0x418)
struct APointLight : ALight {
	struct UPointLightComponent* PointLightComponent; // 0x418(0x08)

	void SetRadius(); // Function Engine.PointLight.SetRadius // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67c1c14
	void *6d22a703f6(); // Function Engine.PointLight.*6d22a703f6 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67c05a4
};

// Class Engine.spotlight
// Size: 0x420 (Inherited: 0x418)
struct Aspotlight : ALight {
	struct USpotLightComponent* SpotLightComponent; // 0x418(0x08)

	void *a41703425a(); // Function Engine.spotlight.*a41703425a // Final|Native|Public|BlueprintCallable // @ game+0x67c01f4
	void *88580bae0d(); // Function Engine.spotlight.*88580bae0d // Final|Native|Public|BlueprintCallable // @ game+0x67c12c0
};

// Class Engine.GeneratedMeshAreaLight
// Size: 0x420 (Inherited: 0x420)
struct AGeneratedMeshAreaLight : Aspotlight {
};

// Class Engine.LightmassPortal
// Size: 0x410 (Inherited: 0x408)
struct ALightmassPortal : AActor {
	struct U*e5ec23d71f* PortalComponent; // 0x408(0x08)
};

// Class Engine.LODActor
// Size: 0x440 (Inherited: 0x408)
struct ALODActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x408(0x08)
	struct TArray<struct AActor*> SubActors; // 0x410(0x10)
	float LODDrawDistance; // 0x420(0x04)
	int32 LODLevel; // 0x424(0x04)
	struct TArray<struct UObject*> SubObjects; // 0x428(0x10)
	char pad_438[0x8]; // 0x438(0x08)
};

// Class Engine.MaterialInstanceActor
// Size: 0x418 (Inherited: 0x408)
struct AMaterialInstanceActor : AActor {
	struct TArray<struct AActor*> TargetActors; // 0x408(0x10)
};

// Class Engine.MatineeActor
// Size: 0x4b0 (Inherited: 0x408)
struct AMatineeActor : AActor {
	struct UInterpData* MatineeData; // 0x408(0x08)
	struct FName *d517108a89; // 0x410(0x08)
	float PlayRate; // 0x418(0x04)
	char bPlayOnLevelLoad : 1; // 0x41c(0x01)
	char bForceStartPos : 1; // 0x41c(0x01)
	char pad_41C_2 : 6; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	float ForceStartPosition; // 0x420(0x04)
	char bLooping : 1; // 0x424(0x01)
	char bRewindOnPlay : 1; // 0x424(0x01)
	char bNoResetOnRewind : 1; // 0x424(0x01)
	char bRewindIfAlreadyPlaying : 1; // 0x424(0x01)
	char bDisableRadioFilter : 1; // 0x424(0x01)
	char bClientSideOnly : 1; // 0x424(0x01)
	char bSkipUpdateIfNotVisible : 1; // 0x424(0x01)
	char bIsSkippable : 1; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	int32 PreferredSplitScreenNum; // 0x428(0x04)
	char bDisableMovementInput : 1; // 0x42c(0x01)
	char bDisableLookAtInput : 1; // 0x42c(0x01)
	char bHidePlayer : 1; // 0x42c(0x01)
	char bHideHud : 1; // 0x42c(0x01)
	char pad_42C_4 : 4; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	struct TArray<struct F*d41fb53a74> GroupActorInfos; // 0x430(0x10)
	char *f5ed413053 : 1; // 0x440(0x01)
	char pad_440_1 : 7; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct TArray<struct U*27ba39bd87*> *97e1eb552f; // 0x448(0x10)
	struct TArray<struct F*b584e80f7c> CameraCuts; // 0x458(0x10)
	char bIsPlaying : 1; // 0x468(0x01)
	char *c74475af73 : 1; // 0x468(0x01)
	char *76e306fd2a : 1; // 0x468(0x01)
	char *f22a656563 : 1; // 0x468(0x01)
	char pad_468_4 : 4; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	float InterpPosition; // 0x46c(0x04)
	char pad_470[0x4]; // 0x470(0x04)
	bool *9a7736495d; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)
	struct FMulticastDelegate OnPlay; // 0x478(0x10)
	struct FMulticastDelegate OnStop; // 0x488(0x10)
	struct FMulticastDelegate OnPause; // 0x498(0x10)
	char pad_4A8[0x8]; // 0x4a8(0x08)

	void Pause(); // Function Engine.MatineeActor.Pause // Native|Public|BlueprintCallable // @ game+0x5a55740
	void *7e27b907ea(); // Function Engine.MatineeActor.*7e27b907ea // Final|Native|Public|BlueprintCallable // @ game+0x67a9a4c
	void Reverse(); // Function Engine.MatineeActor.Reverse // Native|Public|BlueprintCallable // @ game+0x5a77d08
	void *a193765da7(); // Function Engine.MatineeActor.*a193765da7 // Native|Public|BlueprintCallable // @ game+0x67c08ac
	void Stop(); // Function Engine.MatineeActor.Stop // Native|Public|BlueprintCallable // @ game+0x5fb79c
	void Play(); // Function Engine.MatineeActor.Play // Native|Public|BlueprintCallable // @ game+0x5fc3d0
	void *84b1451f3a(); // Function Engine.MatineeActor.*84b1451f3a // Native|Public|BlueprintCallable // @ game+0x5a410a8
	void SetPosition(); // Function Engine.MatineeActor.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x67c1a00
};

// Class Engine.MatineeActorCameraAnim
// Size: 0x4b8 (Inherited: 0x4b0)
struct AMatineeActorCameraAnim : AMatineeActor {
	struct UCameraAnim* CameraAnim; // 0x4b0(0x08)
};

// Class Engine.MinimapLabelActor
// Size: 0x410 (Inherited: 0x408)
struct AMinimapLabelActor : AActor {
	struct U*c155f3445f* MinimapLabelComponent; // 0x408(0x08)
};

// Class Engine.MinimapObjectActor
// Size: 0x410 (Inherited: 0x408)
struct AMinimapObjectActor : AActor {
	struct U*8fb9a22a45* MinimapObjectComponent; // 0x408(0x08)
};

// Class Engine.AbstractNavData
// Size: 0x5b0 (Inherited: 0x5b0)
struct AAbstractNavData : ANavigationData {
};

// Class Engine.NavigationGraph
// Size: 0x5b0 (Inherited: 0x5b0)
struct ANavigationGraph : ANavigationData {
};

// Class Engine.NavigationGraphNode
// Size: 0x408 (Inherited: 0x408)
struct ANavigationGraphNode : AActor {
};

// Class Engine.PlayerStartPIE
// Size: 0x438 (Inherited: 0x438)
struct APlayerStartPIE : APlayerStart {
};

// Class Engine.*015d0a26e0
// Size: 0x30 (Inherited: 0x30)
struct U*015d0a26e0 : UInterface {
};

// Class Engine.NavigationTestingActor
// Size: 0x510 (Inherited: 0x408)
struct ANavigationTestingActor : AActor {
	char pad_408[0x10]; // 0x408(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x418(0x08)
	struct U*12d62400b6* InvokerComponent; // 0x420(0x08)
	char bActAsNavigationInvoker : 1; // 0x428(0x01)
	char pad_428_1 : 7; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct F*112b6d08d9 *e8b9ac779a; // 0x430(0x20)
	struct FVector *429f6f1422; // 0x450(0x0c)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct ANavigationData* *e412750adf; // 0x460(0x08)
	struct FVector ProjectedLocation; // 0x468(0x0c)
	char bProjectedLocationValid : 1; // 0x474(0x01)
	char *9e99278733 : 1; // 0x474(0x01)
	char *4de10e3942 : 1; // 0x474(0x01)
	char *e6a488844c : 1; // 0x474(0x01)
	char *98d4a95d21 : 1; // 0x474(0x01)
	char *a7fc9c764a : 1; // 0x474(0x01)
	char *fbb629a10e : 1; // 0x474(0x01)
	char *123b53e566 : 1; // 0x474(0x01)
	char *8427b0c737 : 1; // 0x475(0x01)
	char pad_475_1 : 7; // 0x475(0x01)
	char pad_476[0x2]; // 0x476(0x02)
	enum class *37e79f34c9 *ba55c3b4dd; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	struct FVector2D *88e5e50062; // 0x47c(0x08)
	char bPathExist : 1; // 0x484(0x01)
	char bPathIsPartial : 1; // 0x484(0x01)
	char bPathSearchOutOfNodes : 1; // 0x484(0x01)
	char pad_484_3 : 5; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	float PathfindingTime; // 0x488(0x04)
	float PathCost; // 0x48c(0x04)
	int32 PathfindingSteps; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x498(0x08)
	struct UClass* *a2da6fc5f4; // 0x4a0(0x08)
	int32 *4498c148db; // 0x4a8(0x04)
	float *3f832759c3; // 0x4ac(0x04)
	char pad_4B0[0x60]; // 0x4b0(0x60)
};

// Class Engine.*d63c27cc87
// Size: 0x58 (Inherited: 0x30)
struct U*d63c27cc87 : UObject {
	struct TArray<struct FNavigationLink> Links; // 0x30(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class Engine.*e7dfee5ab5
// Size: 0x30 (Inherited: 0x30)
struct U*e7dfee5ab5 : UInterface {
};

// Class Engine.NavLinkProxy
// Size: 0x458 (Inherited: 0x408)
struct ANavLinkProxy : AActor {
	char pad_408[0x10]; // 0x408(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x418(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x428(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x438(0x08)
	bool *f231981172; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FMulticastDelegate OnSmartLinkReached; // 0x448(0x10)

	void *4d93b30a1c(); // Function Engine.NavLinkProxy.*4d93b30a1c // Final|Native|Public|BlueprintCallable // @ game+0x67b9cfc
	void *de034659c2(); // Function Engine.NavLinkProxy.*de034659c2 // Final|Native|Public|BlueprintCallable // @ game+0x67c2120
	void ReceiveSmartLinkReached(); // Function Engine.NavLinkProxy.ReceiveSmartLinkReached // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22ddc4
	void *7771ab0955(); // Function Engine.NavLinkProxy.*7771ab0955 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1f44
	void *3a1f0e1247(); // Function Engine.NavLinkProxy.*3a1f0e1247 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0f08
};

// Class Engine.Note
// Size: 0x408 (Inherited: 0x408)
struct ANote : AActor {
};

// Class Engine.ParticleSystem
// Size: 0x140 (Inherited: 0x30)
struct UParticleSystem : UObject {
	enum class *eb1687f01e *68fcd8e9ea; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float UpdateTime_FPS; // 0x34(0x04)
	float *32afe5b66e; // 0x38(0x04)
	float WarmupTime; // 0x3c(0x04)
	float *05a26e85b5; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct UParticleEmitter*> Emitters; // 0x48(0x10)
	struct UParticleSystemComponent* PreviewComponent; // 0x58(0x08)
	struct UInterpCurveEdSetup* *ff525ff7dd; // 0x60(0x08)
	char *70ce6c4b0d : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float *e1074ba83a; // 0x6c(0x04)
	enum class *22978e1300 LODMethod; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<float> *439ee0d4a3; // 0x78(0x10)
	char *8223960c17 : 1; // 0x88(0x01)
	char *27d8d17909 : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct F*ace7ccc201> LODSettings; // 0x90(0x10)
	char *ac07f373ed : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FBox *2d3d0ab58d; // 0xa4(0x1c)
	float *226294f92c; // 0xc0(0x04)
	char *a3996677f4 : 1; // 0xc4(0x01)
	char *ec875597df : 1; // 0xc4(0x01)
	char *eac174e3f1 : 1; // 0xc4(0x01)
	char *e6111571e6 : 1; // 0xc4(0x01)
	char pad_C4_4 : 4; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float Delay; // 0xc8(0x04)
	float *339a372f82; // 0xcc(0x04)
	char *160eb36400 : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	bool *cb8bf7fc91; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	uint32 *cb3d6c55fc; // 0xd8(0x04)
	enum class EParticleSystemInsignificanceReaction *cdecc94606; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float *00e3a95c95; // 0xe0(0x04)
	enum class EParticleSignificanceLevel *ecb76fc088; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct FVector MacroUVPosition; // 0xe8(0x0c)
	float MacroUVRadius; // 0xf4(0x04)
	enum class *3ef3e21fb0 *e0fa25a6be; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FBox *e4645a93e7; // 0xfc(0x1c)
	struct TArray<struct F*87ee2611df> *e7818e194f; // 0x118(0x10)
	struct TArray<struct F*dead56482b> *b11fa76f6b; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	void *9d70b5f343(); // Function Engine.ParticleSystem.*9d70b5f343 // Final|Native|Public|BlueprintCallable // @ game+0x67a74d8
};

// Class Engine.ParticleEventManager
// Size: 0x408 (Inherited: 0x408)
struct AParticleEventManager : AActor {
};

// Class Engine.SkeletalMesh
// Size: 0x2f0 (Inherited: 0x30)
struct USkeletalMesh : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct USkeleton* Skeleton; // 0x50(0x08)
	struct FBoxSphereBounds *de1d2f9b97; // 0x58(0x1c)
	struct FBoxSphereBounds *a5cca5147a; // 0x74(0x1c)
	struct FVector PositiveBoundsExtension; // 0x90(0x0c)
	struct FVector NegativeBoundsExtension; // 0x9c(0x0c)
	struct TArray<struct F*c98fa22526> Materials; // 0xa8(0x10)
	struct TArray<struct F*e996e4d3f5> *c6c7d39287; // 0xb8(0x10)
	enum class EAxis *a96d44c1c1; // 0xc8(0x01)
	enum class EAxis *4d3eabcc94; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo; // 0xd0(0x10)
	char bUseFullPrecisionUVs : 1; // 0xe0(0x01)
	char *7d0a6ca518 : 1; // 0xe0(0x01)
	char *fb78bdbbc5 : 1; // 0xe0(0x01)
	char bEnablePerPolyCollision : 1; // 0xe0(0x01)
	char pad_E0_4 : 4; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct UBodySetup* BodySetup; // 0xe8(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0xf0(0x08)
	struct UPhysicsAsset* ShadowPhysicsAsset; // 0xf8(0x08)
	struct TArray<struct U*d7b54547d6*> NodeMappingData; // 0x100(0x10)
	struct TArray<struct UMorphTarget*> MorphTargets; // 0x110(0x10)
	char pad_120[0x168]; // 0x120(0x168)
	struct TArray<struct FClothingAssetData_Legacy> ClothingAssets; // 0x288(0x10)
	struct UClass* PostProcessAnimBlueprint; // 0x298(0x08)
	struct TArray<struct U*9695c7a28c*> MeshClothingAssets; // 0x2a0(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x2b0(0x10)
	char pad_2C0[0x8]; // 0x2c0(0x08)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x2c8(0x10)
	char pad_2D8[0x18]; // 0x2d8(0x18)

	void *6efa11e736(); // Function Engine.SkeletalMesh.*6efa11e736 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a9f8c
	void *69093f5697(); // Function Engine.SkeletalMesh.*69093f5697 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1d58
	void *25ae708602(); // Function Engine.SkeletalMesh.*25ae708602 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aef94
	void *26bed055db(); // Function Engine.SkeletalMesh.*26bed055db // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b0148
	void *9e3042eac3(); // Function Engine.SkeletalMesh.*9e3042eac3 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67ad880
	void *f36fae672e(); // Function Engine.SkeletalMesh.*f36fae672e // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67abae8
	void *b4c1251f88(); // Function Engine.SkeletalMesh.*b4c1251f88 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b7e88
	void *fe20524fd1(); // Function Engine.SkeletalMesh.*fe20524fd1 // Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa024
};

// Class Engine.AnimationAsset
// Size: 0x80 (Inherited: 0x30)
struct UAnimationAsset : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct USkeleton* Skeleton; // 0x38(0x08)
	char pad_40[0x20]; // 0x40(0x20)
	struct TArray<struct U*460f026d00*> MetaData; // 0x60(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x70(0x10)
};

// Class Engine.ReflectionCapture
// Size: 0x410 (Inherited: 0x408)
struct AReflectionCapture : AActor {
	struct UReflectionCaptureComponent* CaptureComponent; // 0x408(0x08)
};

// Class Engine.BoxReflectionCapture
// Size: 0x410 (Inherited: 0x410)
struct ABoxReflectionCapture : AReflectionCapture {
};

// Class Engine.PlaneReflectionCapture
// Size: 0x410 (Inherited: 0x410)
struct APlaneReflectionCapture : AReflectionCapture {
};

// Class Engine.SphereReflectionCapture
// Size: 0x418 (Inherited: 0x410)
struct ASphereReflectionCapture : AReflectionCapture {
	struct U*9dff3f6d02* *cadc00535e; // 0x410(0x08)
};

// Class Engine.RigidBodyBase
// Size: 0x408 (Inherited: 0x408)
struct ARigidBodyBase : AActor {
};

// Class Engine.PhysicsConstraintActor
// Size: 0x428 (Inherited: 0x408)
struct APhysicsConstraintActor : ARigidBodyBase {
	struct UPhysicsConstraintComponent* ConstraintComp; // 0x408(0x08)
	struct AActor* ConstraintActor1; // 0x410(0x08)
	struct AActor* ConstraintActor2; // 0x418(0x08)
	char bDisableCollision : 1; // 0x420(0x01)
	char pad_420_1 : 7; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
};

// Class Engine.PhysicsThruster
// Size: 0x410 (Inherited: 0x408)
struct APhysicsThruster : ARigidBodyBase {
	struct UPhysicsThrusterComponent* ThrusterComponent; // 0x408(0x08)
};

// Class Engine.RadialForceActor
// Size: 0x410 (Inherited: 0x408)
struct ARadialForceActor : ARigidBodyBase {
	struct URadialForceComponent* ForceComponent; // 0x408(0x08)

	void *eb9db3d068(); // Function Engine.RadialForceActor.*eb9db3d068 // Native|Public|BlueprintCallable // @ game+0x5fc3d0
	void *5842739238(); // Function Engine.RadialForceActor.*5842739238 // Native|Public|BlueprintCallable // @ game+0x5a77d08
	void *9d3f73d5f3(); // Function Engine.RadialForceActor.*9d3f73d5f3 // Native|Public|BlueprintCallable // @ game+0xdb4c0c
	void *4826c1c9b4(); // Function Engine.RadialForceActor.*4826c1c9b4 // Native|Public|BlueprintCallable // @ game+0x5fb79c
};

// Class Engine.SceneCapture
// Size: 0x410 (Inherited: 0x408)
struct ASceneCapture : AActor {
	struct UStaticMeshComponent* MeshComp; // 0x408(0x08)
};

// Class Engine.PlanarReflection
// Size: 0x420 (Inherited: 0x410)
struct APlanarReflection : ASceneCapture {
	struct U*30ab50e62e* PlanarReflectionComponent; // 0x410(0x08)
	bool *aaed5a4262; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)

	void OnInterpToggle(); // Function Engine.PlanarReflection.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x67b7f84
};

// Class Engine.SceneCapture2D
// Size: 0x420 (Inherited: 0x410)
struct ASceneCapture2D : ASceneCapture {
	struct USceneCaptureComponent2D* CaptureComponent2D; // 0x410(0x08)
	struct U*7516137630* *fbb1cd85af; // 0x418(0x08)

	void OnInterpToggle(); // Function Engine.SceneCapture2D.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x67b7f84
};

// Class Engine.SceneCaptureCube
// Size: 0x420 (Inherited: 0x410)
struct ASceneCaptureCube : ASceneCapture {
	struct USceneCaptureComponentCube* CaptureComponentCube; // 0x410(0x08)
	struct U*7516137630* *fbb1cd85af; // 0x418(0x08)

	void OnInterpToggle(); // Function Engine.SceneCaptureCube.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x67b7f84
};

// Class Engine.*fe3ba32e6b
// Size: 0x30 (Inherited: 0x30)
struct U*fe3ba32e6b : UInterface {
};

// Class Engine.SplineMeshActor
// Size: 0x410 (Inherited: 0x408)
struct ASplineMeshActor : AActor {
	struct USplineMeshComponent* SplineMeshComponent; // 0x408(0x08)
};

// Class Engine.StaticMeshIndoorVolumeComponent
// Size: 0x530 (Inherited: 0x4d0)
struct UStaticMeshIndoorVolumeComponent : USceneComponent {
	struct UStaticMesh* StaticMesh; // 0x4d0(0x08)
	char pad_4D8[0x58]; // 0x4d8(0x58)
};

// Class Engine.StaticMeshIndoorVolumeContainerComponent
// Size: 0x510 (Inherited: 0x4d0)
struct UStaticMeshIndoorVolumeContainerComponent : USceneComponent {
	struct TArray<struct UStaticMesh*> StaticMeshes; // 0x4d0(0x10)
	struct TArray<struct F*d4bdb64586> *6735174b80; // 0x4e0(0x10)
	char pad_4F0[0x20]; // 0x4f0(0x20)
};

// Class Engine.StaticMeshIndoorVolume
// Size: 0x410 (Inherited: 0x408)
struct AStaticMeshIndoorVolume : AActor {
	struct UStaticMeshIndoorVolumeComponent* VolumeComponent; // 0x408(0x08)
};

// Class Engine.TextRenderActor
// Size: 0x410 (Inherited: 0x408)
struct ATextRenderActor : AActor {
	struct UTextRenderComponent* TextRender; // 0x408(0x08)
};

// Class Engine.TriggerCapsule
// Size: 0x410 (Inherited: 0x410)
struct ATriggerCapsule : ATriggerBase {
};

// Class Engine.TriggerSphere
// Size: 0x410 (Inherited: 0x410)
struct ATriggerSphere : ATriggerBase {
};

// Class Engine.VectorFieldVolume
// Size: 0x410 (Inherited: 0x408)
struct AVectorFieldVolume : AActor {
	struct UVectorFieldComponent* VectorFieldComponent; // 0x408(0x08)
};

// Class Engine.ApplicationLifecycleComponent
// Size: 0x250 (Inherited: 0x200)
struct UApplicationLifecycleComponent : UActorComponent {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate; // 0x200(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate; // 0x210(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x220(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x230(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate; // 0x240(0x10)

	void ApplicationLifetimeDelegate__DelegateSignature(); // DelegateFunction Engine.ApplicationLifecycleComponent.ApplicationLifetimeDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
};

// Class Engine.LevelBlocksData
// Size: 0x40 (Inherited: 0x30)
struct ULevelBlocksData : UObject {
	struct TArray<struct U*401688bf57*> *619bd0911f; // 0x30(0x10)
};

// Class Engine.*686d9ef451
// Size: 0x2c0 (Inherited: 0x200)
struct U*686d9ef451 : UActorComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct ULevelBlocksData* LevelBlocksData; // 0x208(0x08)
	char pad_210[0x18]; // 0x210(0x18)
	int32 RandomSeed; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct TArray<struct AActor*> *eeff6da04e; // 0x230(0x10)
	char pad_240[0x80]; // 0x240(0x80)

	void OnRep_RandomSeed(); // Function Engine.*686d9ef451.OnRep_RandomSeed // Final|Native|Private // @ game+0x67b8070
	void OnKillcamLoadingFinished(); // Function Engine.*686d9ef451.OnKillcamLoadingFinished // Final|Native|Private // @ game+0x67b8038
};

// Class Engine.*4e1a53212d
// Size: 0x2f0 (Inherited: 0x250)
struct U*4e1a53212d : UMovementComponent {
	float Duration; // 0x248(0x04)
	char bPauseOnImpact : 1; // 0x24c(0x01)
	enum class EInterpToBehaviourType BehaviourType; // 0x250(0x01)
	char bForceSubStepping : 1; // 0x254(0x01)
	char pad_255_2 : 6; // 0x255(0x01)
	char pad_256[0x2]; // 0x256(0x02)
	struct FMulticastDelegate OnInterpToReverse; // 0x258(0x10)
	struct FMulticastDelegate OnInterpToStop; // 0x268(0x10)
	struct FMulticastDelegate OnWaitBeginDelegate; // 0x278(0x10)
	struct FMulticastDelegate OnWaitEndDelegate; // 0x288(0x10)
	struct FMulticastDelegate OnResetDelegate; // 0x298(0x10)
	float MaxSimulationTimeStep; // 0x2a8(0x04)
	int32 MaxSimulationIterations; // 0x2ac(0x04)
	struct TArray<struct F*b7b753c7d1> ControlPoints; // 0x2b0(0x10)
	char pad_2C0[0x30]; // 0x2c0(0x30)

	void OnInterpToWaitEndDelegate__DelegateSignature(); // DelegateFunction Engine.*4e1a53212d.OnInterpToWaitEndDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
	void *6fe3ff1caf(); // Function Engine.*4e1a53212d.*6fe3ff1caf // Final|Native|Public|BlueprintCallable // @ game+0x67a9ed0
	void OnInterpToWaitBeginDelegate__DelegateSignature(); // DelegateFunction Engine.*4e1a53212d.OnInterpToWaitBeginDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
	void *2be2680041(); // Function Engine.*4e1a53212d.*2be2680041 // Final|Native|Public|BlueprintCallable // @ game+0x67b99b8
	void OnInterpToStopDelegate__DelegateSignature(); // DelegateFunction Engine.*4e1a53212d.OnInterpToStopDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
	void OnInterpToReverseDelegate__DelegateSignature(); // DelegateFunction Engine.*4e1a53212d.OnInterpToReverseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
	void StopSimulating(); // Function Engine.*4e1a53212d.StopSimulating // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67c426c
	void OnInterpToResetDelegate__DelegateSignature(); // DelegateFunction Engine.*4e1a53212d.OnInterpToResetDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
};

// Class Engine.AssetUserData
// Size: 0x30 (Inherited: 0x30)
struct UAssetUserData : UObject {
};

// Class Engine.Skeleton
// Size: 0x3a0 (Inherited: 0x30)
struct USkeleton : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*7c53f3877f> *4f46d16686; // 0x38(0x10)
	struct TArray<struct FTransform> RefLocalPoses; // 0x48(0x10)
	char pad_58[0x110]; // 0x58(0x110)
	struct FGuid *653333d3e6; // 0x168(0x10)
	struct TArray<struct F*58d120ed00> *a77ebe0430; // 0x178(0x10)
	struct TArray<struct F*6d20fa54b7> *982bb84834; // 0x188(0x10)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x198(0x10)
	char pad_1A8[0x50]; // 0x1a8(0x50)
	struct F*c7095221f3 *082dff64b9; // 0x1f8(0x50)
	char pad_248[0x18]; // 0x248(0x18)
	struct TArray<struct UBlendProfile*> *3d4acaeca3; // 0x260(0x10)
	struct TArray<struct F*6d4e23887b> *e50f12f238; // 0x270(0x10)
	char pad_280[0x110]; // 0x280(0x110)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x390(0x10)
};

// Class Engine.AnimSequenceBase
// Size: 0xa8 (Inherited: 0x80)
struct UAnimSequenceBase : UAnimationAsset {
	struct TArray<struct FAnimNotifyEvent> Notifies; // 0x80(0x10)
	float SequenceLength; // 0x90(0x04)
	float *5d1245bca9; // 0x94(0x04)
	struct F*861f26b4bb *50311a4812; // 0x98(0x10)

	void *7d91abc633(); // Function Engine.AnimSequenceBase.*7d91abc633 // RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67afea4
};

// Class Engine.*24a15a77a5
// Size: 0xa8 (Inherited: 0xa8)
struct U*24a15a77a5 : UAnimSequenceBase {
};

// Class Engine.AnimMontage
// Size: 0x1b0 (Inherited: 0xa8)
struct UAnimMontage : U*24a15a77a5 {
	struct FAlphaBlend *d735d492d3; // 0xa8(0x38)
	float BlendInTime; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FAlphaBlend *ed75150f57; // 0xe8(0x38)
	float BlendOutTime; // 0x120(0x04)
	float *cf4bee3266; // 0x124(0x04)
	struct FName SyncGroup; // 0x128(0x08)
	int32 *0cabdd544e; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct F*744d0d8f9a *b05b099a65; // 0x138(0x20)
	struct TArray<struct F*e65551b591> *932a39c870; // 0x158(0x10)
	struct TArray<struct F*e4cf0cd6cd> *874a3d370b; // 0x168(0x10)
	struct TArray<struct FBranchingPoint> BranchingPoints; // 0x178(0x10)
	bool *44e45914b5; // 0x188(0x01)
	bool *7f09fe2f3d; // 0x189(0x01)
	enum class ERootMotionRootLock *07020cca27; // 0x18a(0x01)
	char pad_18B[0x5]; // 0x18b(0x05)
	struct TArray<struct F*053a0453d8> *b4cee45506; // 0x190(0x10)
	struct TArray<int32> *f6f5752009; // 0x1a0(0x10)

	void OnMontageClosedMulticaster__DelegateSignature(); // DelegateFunction Engine.AnimMontage.OnMontageClosedMulticaster__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
};

// Class Engine.*8baf89a61b
// Size: 0x30 (Inherited: 0x30)
struct U*8baf89a61b : UInterface {
};

// Class Engine.*24e2a79452
// Size: 0x30 (Inherited: 0x30)
struct U*24e2a79452 : UInterface {
};

// Class Engine.RotatingMovementComponent
// Size: 0x270 (Inherited: 0x250)
struct URotatingMovementComponent : UMovementComponent {
	struct FRotator RotationRate; // 0x248(0x0c)
	struct FVector PivotTranslation; // 0x254(0x0c)
	char bRotationInLocalSpace : 1; // 0x260(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
};

// Class Engine.*12d62400b6
// Size: 0x210 (Inherited: 0x200)
struct U*12d62400b6 : UActorComponent {
	float *70a8f2bec5; // 0x200(0x04)
	float *8c62b864b4; // 0x204(0x04)
	char pad_208[0x8]; // 0x208(0x08)
};

// Class Engine.*45007992b8
// Size: 0x230 (Inherited: 0x200)
struct U*45007992b8 : UActorComponent {
	char pad_200[0x24]; // 0x200(0x24)
	char *671324be81 : 1; // 0x224(0x01)
	char pad_224_1 : 7; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	struct UObject* *274952ca68; // 0x228(0x08)

	void *8d87d87718(); // Function Engine.*45007992b8.*8d87d87718 // Final|Native|Public|BlueprintCallable // @ game+0x680f53c
};

// Class Engine.*3de3a6b8f1
// Size: 0x30 (Inherited: 0x30)
struct U*3de3a6b8f1 : UInterface {
};

// Class Engine.NavLinkCustomComponent
// Size: 0x340 (Inherited: 0x230)
struct UNavLinkCustomComponent : U*45007992b8 {
	char pad_230[0x8]; // 0x230(0x08)
	uint32 *5523f831eb; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct UClass* *0fc66b56f8; // 0x240(0x08)
	struct UClass* *1d7f0d4d70; // 0x248(0x08)
	struct FVector *8d7fd94284; // 0x250(0x0c)
	struct FVector *d0e69e785c; // 0x25c(0x0c)
	enum class ENavLinkDirection *1441f2d063; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	char *3cf2a4fe3a : 1; // 0x26c(0x01)
	char *21787b5d01 : 1; // 0x26c(0x01)
	char *ebff935628 : 1; // 0x26c(0x01)
	char *9cdf2c06e1 : 1; // 0x26c(0x01)
	char pad_26C_4 : 4; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct FVector *31f7f8460c; // 0x270(0x0c)
	struct FVector *9591ddb654; // 0x27c(0x0c)
	struct UClass* *61254f8c39; // 0x288(0x08)
	float *f02ad0b613; // 0x290(0x04)
	float *c31405aecb; // 0x294(0x04)
	enum class ECollisionChannel *f153424fb9; // 0x298(0x01)
	char pad_299[0xa7]; // 0x299(0xa7)
};

// Class Engine.NavModifierComponent
// Size: 0x260 (Inherited: 0x230)
struct UNavModifierComponent : U*45007992b8 {
	struct UClass* AreaClass; // 0x230(0x08)
	struct FVector *a7f47a9a32; // 0x238(0x0c)
	char pad_244[0x1c]; // 0x244(0x1c)

	void *17584ae5c0(); // Function Engine.NavModifierComponent.*17584ae5c0 // Final|Native|Public|BlueprintCallable // @ game+0x680692c
};

// Class Engine.PawnNoiseEmitterComponent
// Size: 0x230 (Inherited: 0x200)
struct UPawnNoiseEmitterComponent : UActorComponent {
	char *e3e8436a88 : 1; // 0x200(0x01)
	char pad_200_1 : 7; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	struct FVector *e9b710b95d; // 0x204(0x0c)
	float NoiseLifetime; // 0x210(0x04)
	float *a216c50f1d; // 0x214(0x04)
	float *6ee5db9527; // 0x218(0x04)
	float *5d661a7b1f; // 0x21c(0x04)
	float *50624e8f69; // 0x220(0x04)
	char pad_224[0xc]; // 0x224(0x0c)

	void MakeNoise(); // Function Engine.PawnNoiseEmitterComponent.MakeNoise // BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67f7c78
};

// Class Engine.*ac0300a030
// Size: 0x240 (Inherited: 0x200)
struct U*ac0300a030 : UActorComponent {
	float StrengthMultiplyer; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x208(0x08)
	char pad_210[0x30]; // 0x210(0x30)

	void *c27ff35db6(); // Function Engine.*ac0300a030.*c27ff35db6 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67cb50c
	void *cd40829f63(); // Function Engine.*ac0300a030.*cd40829f63 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e25f8
	void *30969388af(); // Function Engine.*ac0300a030.*30969388af // Final|Native|Public|BlueprintCallable // @ game+0x6812b6c
	void *6ac4cee3ef(); // Function Engine.*ac0300a030.*6ac4cee3ef // Final|Native|Public|BlueprintCallable // @ game+0x67cb288
	void *f528898007(); // Function Engine.*ac0300a030.*f528898007 // Final|Native|Public|BlueprintCallable // @ game+0x68114bc
	void *0f758bb9e7(); // Function Engine.*ac0300a030.*0f758bb9e7 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67cb408
};

// Class Engine.PhysicsHandleComponent
// Size: 0x2b0 (Inherited: 0x200)
struct UPhysicsHandleComponent : UActorComponent {
	struct UPrimitiveComponent* *6008847753; // 0x200(0x08)
	char pad_208[0xc]; // 0x208(0x0c)
	char pad_214_0 : 1; // 0x214(0x01)
	char bSoftAngularConstraint : 1; // 0x214(0x01)
	char bSoftLinearConstraint : 1; // 0x214(0x01)
	char bInterpolateTarget : 1; // 0x214(0x01)
	char pad_214_4 : 4; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	float LinearDamping; // 0x218(0x04)
	float LinearStiffness; // 0x21c(0x04)
	float AngularDamping; // 0x220(0x04)
	float AngularStiffness; // 0x224(0x04)
	char pad_228[0x68]; // 0x228(0x68)
	float InterpolationSpeed; // 0x290(0x04)
	char pad_294[0x1c]; // 0x294(0x1c)

	void *72380cd0b1(); // Function Engine.PhysicsHandleComponent.*72380cd0b1 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6813364
	void *ad527cd63e(); // Function Engine.PhysicsHandleComponent.*ad527cd63e // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6806014
	void *961ae85ded(); // Function Engine.PhysicsHandleComponent.*961ae85ded // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eb76c
	void *6aa1484aa0(); // Function Engine.PhysicsHandleComponent.*6aa1484aa0 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680d96c
	void *1b9079209d(); // Function Engine.PhysicsHandleComponent.*1b9079209d // RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67edebc
	void SetLinearDamping(); // Function Engine.PhysicsHandleComponent.SetLinearDamping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680e1f8
	void *5c2ffae88a(); // Function Engine.PhysicsHandleComponent.*5c2ffae88a // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680e60c
	void *724f2aa897(); // Function Engine.PhysicsHandleComponent.*724f2aa897 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67ee188
	void *ffece8c08e(); // Function Engine.PhysicsHandleComponent.*ffece8c08e // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67ee03c
	void *acef9b33a4(); // Function Engine.PhysicsHandleComponent.*acef9b33a4 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6813510
	void *295e94144c(); // Function Engine.PhysicsHandleComponent.*295e94144c // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6813408
	void *52304d7bbc(); // Function Engine.PhysicsHandleComponent.*52304d7bbc // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e5210
	void *543b90d6fe(); // Function Engine.PhysicsHandleComponent.*543b90d6fe // RequiredAPI|Native|Public|BlueprintCallable // @ game+0xcfd574
	void SetAngularDamping(); // Function Engine.PhysicsHandleComponent.SetAngularDamping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6805a74
};

// Class Engine.*1a02c66d00
// Size: 0x220 (Inherited: 0x200)
struct U*1a02c66d00 : UActorComponent {
	struct FMulticastDelegate PlatformChangedToLaptopModeDelegate; // 0x200(0x10)
	struct FMulticastDelegate PlatformChangedToTabletModeDelegate; // 0x210(0x10)

	void *4ed3e8ba43(); // Function Engine.*1a02c66d00.*4ed3e8ba43 // Final|Native|Public|BlueprintCallable // @ game+0x67f0b78
	void PlatformEventDelegate__DelegateSignature(); // DelegateFunction Engine.*1a02c66d00.PlatformEventDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void *a04761368f(); // Function Engine.*1a02c66d00.*a04761368f // Final|Native|Public|BlueprintCallable // @ game+0x67f0b4c
	void *9d75660e1a(); // Function Engine.*1a02c66d00.*9d75660e1a // Final|Native|Public|BlueprintCallable // @ game+0x681cb18
};

// Class Engine.AtmosphericFogComponent
// Size: 0x6f0 (Inherited: 0x4d0)
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x4d0(0x04)
	float FogMultiplier; // 0x4d4(0x04)
	float DensityMultiplier; // 0x4d8(0x04)
	float DensityOffset; // 0x4dc(0x04)
	float DistanceScale; // 0x4e0(0x04)
	float AltitudeScale; // 0x4e4(0x04)
	float DistanceOffset; // 0x4e8(0x04)
	float GroundOffset; // 0x4ec(0x04)
	float StartDistance; // 0x4f0(0x04)
	float SunDiscScale; // 0x4f4(0x04)
	struct TArray<struct F*4ac06f229c> HeightDensityLayers; // 0x4f8(0x10)
	float DefaultBrightness; // 0x508(0x04)
	struct FColor DefaultLightColor; // 0x50c(0x04)
	char bDisableSunDisk : 1; // 0x510(0x01)
	char bDisableGroundScattering : 1; // 0x510(0x01)
	char pad_510_2 : 6; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	struct F*662319d9f9 PrecomputeParams; // 0x514(0x2c)
	struct UTexture2D* TransmittanceTexture; // 0x540(0x08)
	struct UTexture2D* IrradianceTexture; // 0x548(0x08)
	char pad_550[0x1a0]; // 0x550(0x1a0)

	void *143b1e3469(); // Function Engine.AtmosphericFogComponent.*143b1e3469 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680a238
	void *b7b64fbe2b(); // Function Engine.AtmosphericFogComponent.*b7b64fbe2b // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6810874
	void *984883a967(); // Function Engine.AtmosphericFogComponent.*984883a967 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68123e0
	void *03221c70a5(); // Function Engine.AtmosphericFogComponent.*03221c70a5 // Final|Native|Public|BlueprintCallable // @ game+0xbdbb4c
	void *a7e4091f18(); // Function Engine.AtmosphericFogComponent.*a7e4091f18 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6809f34
	void *2b4c6efb08(); // Function Engine.AtmosphericFogComponent.*2b4c6efb08 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680a680
	void *f824bc6577(); // Function Engine.AtmosphericFogComponent.*f824bc6577 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67da860
	void *4085348853(); // Function Engine.AtmosphericFogComponent.*4085348853 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680bd14
	void *ee2a14d31b(); // Function Engine.AtmosphericFogComponent.*ee2a14d31b // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6809fe0
	void *780064cb88(); // Function Engine.AtmosphericFogComponent.*780064cb88 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680a72c
	void *bf93b14931(); // Function Engine.AtmosphericFogComponent.*bf93b14931 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68059c8
	void *be2a7a2c3c(); // Function Engine.AtmosphericFogComponent.*be2a7a2c3c // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680a18c
	void *8bd2b3571c(); // Function Engine.AtmosphericFogComponent.*8bd2b3571c // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680bfb0
	void *e152e71c6c(); // Function Engine.AtmosphericFogComponent.*e152e71c6c // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67da7a8
};

// Class Engine.*dd82106d9d
// Size: 0x30 (Inherited: 0x30)
struct U*dd82106d9d : UObject {
};

// Class Engine.*c56adf0d9d
// Size: 0x30 (Inherited: 0x30)
struct U*c56adf0d9d : UObject {
};

// Class Engine.*7ac139f02b
// Size: 0x30 (Inherited: 0x30)
struct U*7ac139f02b : UObject {
};

// Class Engine.SoundAttenuation
// Size: 0x160 (Inherited: 0x30)
struct USoundAttenuation : UObject {
	struct FSoundAttenuationSettings Attenuation; // 0x30(0x130)
};

// Class Engine.AudioComponent
// Size: 0x7a0 (Inherited: 0x4d0)
struct UAudioComponent : USceneComponent {
	struct USoundBase* Sound; // 0x4d0(0x08)
	struct TArray<struct F*71fadb6221> InstanceParameters; // 0x4d8(0x10)
	struct USoundClass* *74b597268e; // 0x4e8(0x08)
	char *2e8753955a : 1; // 0x4f0(0x01)
	char *d6fc981176 : 1; // 0x4f0(0x01)
	char *9635c18944 : 1; // 0x4f0(0x01)
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
	struct FName *ceae817621; // 0x500(0x08)
	float PitchModulationMin; // 0x508(0x04)
	float PitchModulationMax; // 0x50c(0x04)
	float VolumeModulationMin; // 0x510(0x04)
	float VolumeModulationMax; // 0x514(0x04)
	float VolumeMultiplier; // 0x518(0x04)
	float Priority; // 0x51c(0x04)
	float SubtitlePriority; // 0x520(0x04)
	float VolumeWeightedPriorityScale; // 0x524(0x04)
	float PitchMultiplier; // 0x528(0x04)
	float HighFrequencyGainMultiplier; // 0x52c(0x04)
	float LowPassFilterFrequency; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x538(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x540(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x670(0x08)
	char pad_678[0x8]; // 0x678(0x08)
	struct FMulticastDelegate OnAudioFinished; // 0x680(0x10)
	char pad_690[0x70]; // 0x690(0x70)
	struct FMulticastDelegate OnAudioPlaybackPercent; // 0x700(0x10)
	char pad_710[0x70]; // 0x710(0x70)
	DelegateProperty *6c1db6614a; // 0x780(0x10)
	char pad_790[0x10]; // 0x790(0x10)

	void IsPlaying(); // Function Engine.AudioComponent.IsPlaying // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67b1aec
	void AdjustAttenuation(); // Function Engine.AudioComponent.AdjustAttenuation // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67cab64
	void SetFloatParameter(); // Function Engine.AudioComponent.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x680bb88
	void FadeOut(); // Function Engine.AudioComponent.FadeOut // Native|Public|BlueprintCallable // @ game+0x67defcc
	void SetWaveParameter(); // Function Engine.AudioComponent.SetWaveParameter // Final|Native|Public|BlueprintCallable // @ game+0x6814e8c
	void SetBoolParameter(); // Function Engine.AudioComponent.SetBoolParameter // Final|Native|Public|BlueprintCallable // @ game+0x6807b54
	void *91a0b62f1d(); // Function Engine.AudioComponent.*91a0b62f1d // Final|Native|Public|BlueprintCallable // @ game+0x680fe64
	void SetVolumeMultiplier(); // Function Engine.AudioComponent.SetVolumeMultiplier // Final|Native|Public|BlueprintCallable // @ game+0x6814894
	void *172bd6cd1a(); // Function Engine.AudioComponent.*172bd6cd1a // Final|Native|Public|BlueprintCallable // @ game+0x6812da0
	void SetIntParameter(); // Function Engine.AudioComponent.SetIntParameter // Final|Native|Public|BlueprintCallable // @ game+0x680d348
	void Play(); // Function Engine.AudioComponent.Play // Native|Public|BlueprintCallable // @ game+0x67fe954
	void SetPitchMultiplier(); // Function Engine.AudioComponent.SetPitchMultiplier // Final|Native|Public|BlueprintCallable // @ game+0x6810074
	void AdjustVolume(); // Function Engine.AudioComponent.AdjustVolume // Final|Native|Public|BlueprintCallable // @ game+0x67cad74
	void *8da7bf332c(); // Function Engine.AudioComponent.*8da7bf332c // Final|Native|Public|BlueprintCallable // @ game+0x6811704
	void *c8b0393496(); // Function Engine.AudioComponent.*c8b0393496 // Native|Public|BlueprintCallable // @ game+0x67deea8
	void *3e910ce8f1(); // Function Engine.AudioComponent.*3e910ce8f1 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67cd7f0
	void *0c299b72ca(); // Function Engine.AudioComponent.*0c299b72ca // Final|Native|Public|BlueprintCallable // @ game+0x6813c74
	void Stop(); // Function Engine.AudioComponent.Stop // Native|Public|BlueprintCallable // @ game+0x681bf88
};

// Class Engine.DecalComponent
// Size: 0x560 (Inherited: 0x4d0)
struct UDecalComponent : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x4d0(0x08)
	int32 SortOrder; // 0x4d8(0x04)
	float FadeScreenSize; // 0x4dc(0x04)
	float FadeStartDelay; // 0x4e0(0x04)
	float FadeDuration; // 0x4e4(0x04)
	char bDestroyOwnerAfterFade : 1; // 0x4e8(0x01)
	char pad_4E8_1 : 7; // 0x4e8(0x01)
	struct F*09352ad00b DecalChannels; // 0x4e9(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	struct FVector DecalSize; // 0x4ec(0x0c)
	float NormalFadeStart; // 0x4f8(0x04)
	float NormalFadeEnd; // 0x4fc(0x04)
	char pad_500[0x60]; // 0x500(0x60)

	void *07d1205642(); // Function Engine.DecalComponent.*07d1205642 // Final|Native|Public|BlueprintCallable // @ game+0x680b898
	void CreateDynamicMaterialInstance(); // Function Engine.DecalComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x67d8fb4
	void *e5a6406b5b(); // Function Engine.DecalComponent.*e5a6406b5b // Final|Native|Public|BlueprintCallable // @ game+0x6809dfc
	void *5ef8202fe7(); // Function Engine.DecalComponent.*5ef8202fe7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e41ec
	void *ed3298e045(); // Function Engine.DecalComponent.*ed3298e045 // Final|Native|Public|BlueprintCallable // @ game+0x681166c
	void *8c6583d073(); // Function Engine.DecalComponent.*8c6583d073 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e4c90
	void *92db0ab782(); // Function Engine.DecalComponent.*92db0ab782 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e4c78
};

// Class Engine.*8aed76bbf2
// Size: 0x4e0 (Inherited: 0x4d0)
struct U*8aed76bbf2 : USceneComponent {
	char pad_4D0[0x10]; // 0x4d0(0x10)
};

// Class Engine.ExponentialHeightFogComponent
// Size: 0x590 (Inherited: 0x4d0)
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x4d0(0x04)
	struct FLinearColor FogInscatteringColor; // 0x4d4(0x10)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct TArray<struct F*22fe4d4845> HeightDensityLayers; // 0x4e8(0x10)
	struct UTextureCube* InscatteringColorCubemap; // 0x4f8(0x08)
	float InscatteringColorCubemapAngle; // 0x500(0x04)
	struct FLinearColor InscatteringTextureTint; // 0x504(0x10)
	float FullyDirectionalInscatteringColorDistance; // 0x514(0x04)
	float NonDirectionalInscatteringColorDistance; // 0x518(0x04)
	float DirectionalInscatteringExponent; // 0x51c(0x04)
	float DirectionalInscatteringStartDistance; // 0x520(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x524(0x10)
	float FogHeightFalloff; // 0x534(0x04)
	float FogMaxOpacity; // 0x538(0x04)
	float StartDistance; // 0x53c(0x04)
	float FogCutoffDistance; // 0x540(0x04)
	bool bEnableVolumetricFog; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	float VolumetricFogScatteringDistribution; // 0x548(0x04)
	struct FColor VolumetricFogAlbedo; // 0x54c(0x04)
	struct FLinearColor VolumetricFogEmissive; // 0x550(0x10)
	float VolumetricFogExtinctionScale; // 0x560(0x04)
	float VolumetricFogDistance; // 0x564(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x568(0x01)
	bool bUseExtendedFog; // 0x569(0x01)
	char pad_56A[0x2]; // 0x56a(0x02)
	float ExtendedFogStartDistance; // 0x56c(0x04)
	float ExtendedFogStartFalloffDistance; // 0x570(0x04)
	float ExtendedHeight; // 0x574(0x04)
	float ExtendedFallOff; // 0x578(0x04)
	float ExtendedFogDensity; // 0x57c(0x04)
	float UpDensity; // 0x580(0x04)
	float DownDensity; // 0x584(0x04)
	float Intensity; // 0x588(0x04)
	bool bUseAtmosphereScattering; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)

	void *ca2c6ce97a(); // Function Engine.ExponentialHeightFogComponent.*ca2c6ce97a // Final|Native|Public|BlueprintCallable // @ game+0x680bdc0
	void *84655b8f8a(); // Function Engine.ExponentialHeightFogComponent.*84655b8f8a // Final|Native|Public|BlueprintCallable // @ game+0x680b53c
	void *0b8f11951b(); // Function Engine.ExponentialHeightFogComponent.*0b8f11951b // Final|Native|Public|BlueprintCallable // @ game+0x6813e18
	void *d2b8e8de6a(); // Function Engine.ExponentialHeightFogComponent.*d2b8e8de6a // Final|Native|Public|BlueprintCallable // @ game+0x680b740
	void *5ab1142897(); // Function Engine.ExponentialHeightFogComponent.*5ab1142897 // Final|Native|Public|BlueprintCallable // @ game+0x680a460
	void *6ea8586081(); // Function Engine.ExponentialHeightFogComponent.*6ea8586081 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6814b18
	void *828c4a331a(); // Function Engine.ExponentialHeightFogComponent.*828c4a331a // Final|Native|Public|BlueprintCallable // @ game+0x6814c04
	void *78c504e527(); // Function Engine.ExponentialHeightFogComponent.*78c504e527 // Final|Native|Public|BlueprintCallable // @ game+0x680bc68
	void *1a7e95478d(); // Function Engine.ExponentialHeightFogComponent.*1a7e95478d // Final|Native|Public|BlueprintCallable // @ game+0x680bd14
	void *6bb9ce0153(); // Function Engine.ExponentialHeightFogComponent.*6bb9ce0153 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680d13c
	void *15c8257b98(); // Function Engine.ExponentialHeightFogComponent.*15c8257b98 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680a374
	void *bf13cbfd97(); // Function Engine.ExponentialHeightFogComponent.*bf13cbfd97 // Final|Native|Public|BlueprintCallable // @ game+0x680b7ec
	void *55840c330a(); // Function Engine.ExponentialHeightFogComponent.*55840c330a // Final|Native|Public|BlueprintCallable // @ game+0x680c4f8
	void SetIntensity(); // Function Engine.ExponentialHeightFogComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x680d53c
	void *561c494f49(); // Function Engine.ExponentialHeightFogComponent.*561c494f49 // Final|Native|Public|BlueprintCallable // @ game+0x680cfec
	void *9cb24428aa(); // Function Engine.ExponentialHeightFogComponent.*9cb24428aa // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68149d0
	void *ff88f259b9(); // Function Engine.ExponentialHeightFogComponent.*ff88f259b9 // Final|Native|Public|BlueprintCallable // @ game+0x680d090
	void *ee6f5e9774(); // Function Engine.ExponentialHeightFogComponent.*ee6f5e9774 // Final|Native|Public|BlueprintCallable // @ game+0x680bf04
	void *6a86934360(); // Function Engine.ExponentialHeightFogComponent.*6a86934360 // Final|Native|Public|BlueprintCallable // @ game+0x680b5e8
	void *235b40669e(); // Function Engine.ExponentialHeightFogComponent.*235b40669e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680be6c
	void *c6a2988444(); // Function Engine.ExponentialHeightFogComponent.*c6a2988444 // Final|Native|Public|BlueprintCallable // @ game+0x6814cb0
	void *5f52c731e0(); // Function Engine.ExponentialHeightFogComponent.*5f52c731e0 // Final|Native|Public|BlueprintCallable // @ game+0x680f66c
	void *e638edd607(); // Function Engine.ExponentialHeightFogComponent.*e638edd607 // Final|Native|Public|BlueprintCallable // @ game+0x680b694
	void *c86d814cb9(); // Function Engine.ExponentialHeightFogComponent.*c86d814cb9 // Final|Native|Public|BlueprintCallable // @ game+0x681492c
	void *d7268210c6(); // Function Engine.ExponentialHeightFogComponent.*d7268210c6 // Final|Native|Public|BlueprintCallable // @ game+0x680a50c
	void *f161ea0761(); // Function Engine.ExponentialHeightFogComponent.*f161ea0761 // Final|Native|Public|BlueprintCallable // @ game+0x6814a6c
	void *984883a967(); // Function Engine.ExponentialHeightFogComponent.*984883a967 // Final|Native|Public|BlueprintCallable // @ game+0x681248c
	void *0631f3959d(); // Function Engine.ExponentialHeightFogComponent.*0631f3959d // Final|Native|Public|BlueprintCallable // @ game+0x680a7d8
};

// Class Engine.*676c05a686
// Size: 0xd8 (Inherited: 0x30)
struct U*676c05a686 : UObject {
	struct FForceFeedbackAttenuationSettings Attenuation; // 0x30(0xa8)
};

// Class Engine.ForceFeedbackComponent
// Size: 0x5b0 (Inherited: 0x4d0)
struct UForceFeedbackComponent : USceneComponent {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x4d0(0x08)
	char *2e8753955a : 1; // 0x4d8(0x01)
	char *d6fc981176 : 1; // 0x4d8(0x01)
	char bLooping : 1; // 0x4d8(0x01)
	char bOverrideAttenuation : 1; // 0x4d8(0x01)
	char pad_4D8_4 : 4; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	float IntensityMultiplier; // 0x4dc(0x04)
	struct U*676c05a686* AttenuationSettings; // 0x4e0(0x08)
	struct FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x4e8(0xa8)
	struct FMulticastDelegate OnForceFeedbackFinished; // 0x590(0x10)
	char pad_5A0[0x10]; // 0x5a0(0x10)

	void Stop(); // Function Engine.ForceFeedbackComponent.Stop // Native|Public|BlueprintCallable // @ game+0x5a0cf40
	void *3e910ce8f1(); // Function Engine.ForceFeedbackComponent.*3e910ce8f1 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67cd8fc
	void *22a2af0c38(); // Function Engine.ForceFeedbackComponent.*22a2af0c38 // Final|Native|Public|BlueprintCallable // @ game+0x680d718
	void AdjustAttenuation(); // Function Engine.ForceFeedbackComponent.AdjustAttenuation // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67cac60
	void *eb40df9e94(); // Function Engine.ForceFeedbackComponent.*eb40df9e94 // Final|Native|Public|BlueprintCallable // @ game+0x680c114
	void Play(); // Function Engine.ForceFeedbackComponent.Play // Native|Public|BlueprintCallable // @ game+0x67fe9f0
};

// Class Engine.*23111f4fe9
// Size: 0x570 (Inherited: 0x4d0)
struct U*23111f4fe9 : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x4d0(0x08)
	bool KeepInstanceBufferCPUAccess; // 0x4d8(0x01)
	struct F*09352ad00b DecalChannels; // 0x4d9(0x01)
	char pad_4DA[0x96]; // 0x4da(0x96)

	void *5ef8202fe7(); // Function Engine.*23111f4fe9.*5ef8202fe7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e41ec
	void CreateDynamicMaterialInstance(); // Function Engine.*23111f4fe9.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x67d8fb4
	void *e5a6406b5b(); // Function Engine.*23111f4fe9.*e5a6406b5b // Final|Native|Public|BlueprintCallable // @ game+0x6809dfc
};

// Class Engine.*611beb24ff
// Size: 0x540 (Inherited: 0x4d0)
struct U*611beb24ff : USceneComponent {
	bool UseDynamicInstanceBuffer; // 0x4d0(0x01)
	bool KeepInstanceBufferCPUAccess; // 0x4d1(0x01)
	char pad_4D2[0x6]; // 0x4d2(0x06)
	struct TArray<struct F*56ae635e0d> PerInstanceDecalData; // 0x4d8(0x10)
	struct UStaticMesh* StaticMesh; // 0x4e8(0x08)
	struct UMaterialInterface* DecalMaterial; // 0x4f0(0x08)
	char pad_4F8[0x48]; // 0x4f8(0x48)

	void *95a4257f8b(); // Function Engine.*611beb24ff.*95a4257f8b // Native|Public|BlueprintCallable // @ game+0x5a41594
	void *028d8429ac(); // Function Engine.*611beb24ff.*028d8429ac // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67c931c
	void *e5a6406b5b(); // Function Engine.*611beb24ff.*e5a6406b5b // Final|Native|Public|BlueprintCallable // @ game+0x6809e98
	void *7786d1a996(); // Function Engine.*611beb24ff.*7786d1a996 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e4c90
	void *2a75f57149(); // Function Engine.*611beb24ff.*2a75f57149 // Native|Public|BlueprintCallable // @ game+0x68032ec
	void *5ef8202fe7(); // Function Engine.*611beb24ff.*5ef8202fe7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e4204
	void CreateDynamicMaterialInstance(); // Function Engine.*611beb24ff.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x67d8fdc
	void SetStaticMesh(); // Function Engine.*611beb24ff.SetStaticMesh // Final|Native|Public|BlueprintCallable // @ game+0x6812a2c
	void OnRep_StaticMesh(); // Function Engine.*611beb24ff.OnRep_StaticMesh // Final|Native|Public // @ game+0x67fdd00
	void *a984b9a9ce(); // Function Engine.*611beb24ff.*a984b9a9ce // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67c9764
};

// Class Engine.*d3fa1ca322
// Size: 0x38 (Inherited: 0x38)
struct U*d3fa1ca322 : UDataAsset {
};

// Class Engine.LevelBlockType
// Size: 0x60 (Inherited: 0x38)
struct ULevelBlockType : UDataAsset {
	enum class ESpawnPointRollType *3989035db7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*feddb3650a> Variants; // 0x40(0x10)
	struct TArray<struct F*24ee776f52> *c4fea64397; // 0x50(0x10)
};

// Class Engine.*fe01a1312a
// Size: 0x4e0 (Inherited: 0x4d0)
struct U*fe01a1312a : USceneComponent {
	struct ULevelBlockType* LevelBlockType; // 0x4d0(0x08)
	bool *14ebdf2b40; // 0x4d8(0x01)
	enum class EPreviewIndexType *b84d7a9ba9; // 0x4d9(0x01)
	char pad_4DA[0x2]; // 0x4da(0x02)
	int32 *3db831a6c6; // 0x4dc(0x04)
};

// Class Engine.LightComponentBase
// Size: 0x500 (Inherited: 0x4d0)
struct ULightComponentBase : USceneComponent {
	struct FGuid *1b62b9fe46; // 0x4d0(0x10)
	float Brightness; // 0x4e0(0x04)
	float Intensity; // 0x4e4(0x04)
	struct FColor LightColor; // 0x4e8(0x04)
	char bAffectsWorld : 1; // 0x4ec(0x01)
	char CastShadows : 1; // 0x4ec(0x01)
	char CastStaticShadows : 1; // 0x4ec(0x01)
	char CastDynamicShadows : 1; // 0x4ec(0x01)
	char bAffectTranslucentLighting : 1; // 0x4ec(0x01)
	char bCastVolumetricShadow : 1; // 0x4ec(0x01)
	char pad_4EC_6 : 2; // 0x4ec(0x01)
	char pad_4ED[0x3]; // 0x4ed(0x03)
	float IndirectLightingIntensity; // 0x4f0(0x04)
	float VolumetricScatteringIntensity; // 0x4f4(0x04)
	bool *8ff0181bcd; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)

	void *fc39c3eb5f(); // Function Engine.LightComponentBase.*fc39c3eb5f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e75d4
	void *4c8a691dc8(); // Function Engine.LightComponentBase.*4c8a691dc8 // Final|Native|Public|BlueprintCallable // @ game+0x6808adc
	void *2754dcd2c9(); // Function Engine.LightComponentBase.*2754dcd2c9 // Final|Native|Public|BlueprintCallable // @ game+0x6808a48
};

// Class Engine.LightComponent
// Size: 0x5f0 (Inherited: 0x500)
struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x500(0x04)
	float MaxDrawDistance; // 0x504(0x04)
	float *e7a4eb8e90; // 0x508(0x04)
	char bUseTemperature : 1; // 0x50c(0x01)
	char pad_50C_1 : 7; // 0x50c(0x01)
	char pad_50D[0x3]; // 0x50d(0x03)
	int32 ShadowMapChannel; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	float MinRoughness; // 0x518(0x04)
	float ShadowResolutionScale; // 0x51c(0x04)
	float ShadowBias; // 0x520(0x04)
	float ShadowSharpen; // 0x524(0x04)
	float ContactShadowLength; // 0x528(0x04)
	char InverseSquaredFalloff : 1; // 0x52c(0x01)
	char CastTranslucentShadows : 1; // 0x52c(0x01)
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x52c(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x52c(0x01)
	char pad_52C_4 : 4; // 0x52c(0x01)
	char pad_52D[0x3]; // 0x52d(0x03)
	struct FLightingChannels LightingChannels; // 0x530(0x03)
	char pad_533[0x5]; // 0x533(0x05)
	struct UMaterialInterface* LightFunctionMaterial; // 0x538(0x08)
	struct FVector LightFunctionScale; // 0x540(0x0c)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct U*b63877ce42* IESTexture; // 0x550(0x08)
	char bUseIESBrightness : 1; // 0x558(0x01)
	char pad_558_1 : 7; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	float IESBrightnessScale; // 0x55c(0x04)
	float LightFunctionFadeDistance; // 0x560(0x04)
	float DisabledBrightness; // 0x564(0x04)
	char bEnableLightShaftBloom : 1; // 0x568(0x01)
	char pad_568_1 : 7; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	float BloomScale; // 0x56c(0x04)
	float BloomThreshold; // 0x570(0x04)
	struct FColor BloomTint; // 0x574(0x04)
	bool bUseRayTracedDistanceFieldShadows; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float RayStartOffsetDepthScale; // 0x57c(0x04)
	char pad_580[0x70]; // 0x580(0x70)

	void *b21589b6db(); // Function Engine.LightComponent.*b21589b6db // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680de18
	void *3884be81c6(); // Function Engine.LightComponent.*3884be81c6 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6807438
	void *03c68eba20(); // Function Engine.LightComponent.*03c68eba20 // Final|Native|Public|BlueprintCallable // @ game+0x680dc58
	void *18fc77f460(); // Function Engine.LightComponent.*18fc77f460 // Final|Native|Public|BlueprintCallable // @ game+0x6807308
	void *4f9245bf81(); // Function Engine.LightComponent.*4f9245bf81 // Final|Native|Public|BlueprintCallable // @ game+0x68073a0
	void *22316da662(); // Function Engine.LightComponent.*22316da662 // Final|Native|Public|BlueprintCallable // @ game+0x68052f4
	void *9202409e75(); // Function Engine.LightComponent.*9202409e75 // Final|Native|Public|BlueprintCallable // @ game+0x680ae1c
	void *c2ca621058(); // Function Engine.LightComponent.*c2ca621058 // Final|Native|Public|BlueprintCallable // @ game+0x680dd88
	void *f706a38288(); // Function Engine.LightComponent.*f706a38288 // Final|Native|Public|BlueprintCallable // @ game+0x6805224
	void *15cc30e505(); // Function Engine.LightComponent.*15cc30e505 // Final|Native|Public|BlueprintCallable // @ game+0x680ccd8
	void *3a0fe26cd5(); // Function Engine.LightComponent.*3a0fe26cd5 // Final|Native|Public|BlueprintCallable // @ game+0x680dcf0
	void *42bfac96e0(); // Function Engine.LightComponent.*42bfac96e0 // Final|Native|Public|BlueprintCallable // @ game+0x680ce24
	void SetIntensity(); // Function Engine.LightComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x680d5e8
	void *019843ccd3(); // Function Engine.LightComponent.*019843ccd3 // Final|Native|Public|BlueprintCallable // @ game+0x6814d5c
	void *2a0a6fe701(); // Function Engine.LightComponent.*2a0a6fe701 // Final|Native|Public|BlueprintCallable // @ game+0x68135bc
	void *9f60627cae(); // Function Engine.LightComponent.*9f60627cae // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680da04
};

// Class Engine.DirectionalLightComponent
// Size: 0x670 (Inherited: 0x5f0)
struct UDirectionalLightComponent : ULightComponent {
	char bEnableLightShaftOcclusion : 1; // 0x5f0(0x01)
	char pad_5F0_1 : 7; // 0x5f0(0x01)
	char pad_5F1[0x3]; // 0x5f1(0x03)
	float OcclusionMaskDarkness; // 0x5f4(0x04)
	float OcclusionDepthRange; // 0x5f8(0x04)
	struct FVector LightShaftOverrideDirection; // 0x5fc(0x0c)
	float WholeSceneDynamicShadowRadius; // 0x608(0x04)
	float DynamicShadowDistanceMovableLight; // 0x60c(0x04)
	float DynamicShadowDistanceStationaryLight; // 0x610(0x04)
	int32 DynamicShadowCascades; // 0x614(0x04)
	float CascadeDistributionExponent; // 0x618(0x04)
	float CascadeTransitionFraction; // 0x61c(0x04)
	float ShadowDistanceFadeoutFraction; // 0x620(0x04)
	char bUseInsetShadowsForMovableObjects : 1; // 0x624(0x01)
	char pad_624_1 : 7; // 0x624(0x01)
	char pad_625[0x3]; // 0x625(0x03)
	int32 FarShadowCascadeCount; // 0x628(0x04)
	float FarShadowDistance; // 0x62c(0x04)
	float DistanceFieldShadowDistance; // 0x630(0x04)
	float LightSourceAngle; // 0x634(0x04)
	float TraceDistance; // 0x638(0x04)
	struct F*5257c413f1 LightmassSettings; // 0x63c(0x10)
	char bCastModulatedShadows : 1; // 0x64c(0x01)
	char pad_64C_1 : 7; // 0x64c(0x01)
	char pad_64D[0x3]; // 0x64d(0x03)
	struct FColor ModulatedShadowColor; // 0x650(0x04)
	char bUsedAsAtmosphereSunLight : 1; // 0x654(0x01)
	char bUseGridShadow : 1; // 0x654(0x01)
	char pad_654_2 : 6; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	struct TArray<struct F*0cc15d87bf> GridShadowSplitSettings; // 0x658(0x10)
	char pad_668[0x8]; // 0x668(0x08)

	void *b1c31bf504(); // Function Engine.DirectionalLightComponent.*b1c31bf504 // Final|Native|Public|BlueprintCallable // @ game+0x6808788
	void *1433186171(); // Function Engine.DirectionalLightComponent.*1433186171 // Final|Native|Public|BlueprintCallable // @ game+0x680a920
	void *51e1a0412a(); // Function Engine.DirectionalLightComponent.*51e1a0412a // Final|Native|Public|BlueprintCallable // @ game+0x680a9c0
	void *05392cb4ed(); // Function Engine.DirectionalLightComponent.*05392cb4ed // Final|Native|Public|BlueprintCallable // @ game+0x6808834
	void *d064d94619(); // Function Engine.DirectionalLightComponent.*d064d94619 // Final|Native|Public|BlueprintCallable // @ game+0x680aa6c
	void *18903c7f0e(); // Function Engine.DirectionalLightComponent.*18903c7f0e // Final|Native|Public|BlueprintCallable // @ game+0x680aee4
	void *601112413a(); // Function Engine.DirectionalLightComponent.*601112413a // Final|Native|Public|BlueprintCallable // @ game+0x681132c
	void *9730da13e9(); // Function Engine.DirectionalLightComponent.*9730da13e9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680deb8
	void *0a2484197c(); // Function Engine.DirectionalLightComponent.*0a2484197c // Final|Native|Public|BlueprintCallable // @ game+0x680f980
};

// Class Engine.PointLightComponent
// Size: 0x620 (Inherited: 0x5f0)
struct UPointLightComponent : ULightComponent {
	float Radius; // 0x5f0(0x04)
	float AttenuationRadius; // 0x5f4(0x04)
	char bUseInverseSquaredFalloff : 1; // 0x5f8(0x01)
	char pad_5F8_1 : 7; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	float LightFalloffExponent; // 0x5fc(0x04)
	float SourceRadius; // 0x600(0x04)
	float SourceLength; // 0x604(0x04)
	struct F*e2c22c44c3 LightmassSettings; // 0x608(0x0c)
	char pad_614[0xc]; // 0x614(0x0c)

	void *6d22a703f6(); // Function Engine.PointLightComponent.*6d22a703f6 // Final|Native|Public|BlueprintCallable // @ game+0x680dbc0
	void *769f31cfdc(); // Function Engine.PointLightComponent.*769f31cfdc // Final|Native|Public|BlueprintCallable // @ game+0x68119ec
	void SetAttenuationRadius(); // Function Engine.PointLightComponent.SetAttenuationRadius // Final|Native|Public|BlueprintCallable // @ game+0x6807024
	void *77d533bc3a(); // Function Engine.PointLightComponent.*77d533bc3a // Final|Native|Public|BlueprintCallable // @ game+0x6811a84
};

// Class Engine.SpotLightComponent
// Size: 0x630 (Inherited: 0x620)
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x618(0x04)
	float OuterConeAngle; // 0x61c(0x04)
	float *b1cbf4dcff; // 0x620(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)

	void *a41703425a(); // Function Engine.SpotLightComponent.*a41703425a // Final|Native|Public|BlueprintCallable // @ game+0x680cf54
	void *88580bae0d(); // Function Engine.SpotLightComponent.*88580bae0d // Final|Native|Public|BlueprintCallable // @ game+0x680fdcc
};

// Class Engine.SkyLightComponent
// Size: 0x6b0 (Inherited: 0x500)
struct USkyLightComponent : ULightComponentBase {
	enum class *c7ef9ae059 SourceType; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct UTextureCube* Cubemap; // 0x508(0x08)
	float SourceCubemapAngle; // 0x510(0x04)
	int32 CubemapResolution; // 0x514(0x04)
	float SkyDistanceThreshold; // 0x518(0x04)
	bool bCaptureEmissiveOnly; // 0x51c(0x01)
	bool bLowerHemisphereIsBlack; // 0x51d(0x01)
	char pad_51E[0x2]; // 0x51e(0x02)
	struct FLinearColor LowerHemisphereColor; // 0x520(0x10)
	float OcclusionMaxDistance; // 0x530(0x04)
	float Contrast; // 0x534(0x04)
	float OcclusionExponent; // 0x538(0x04)
	float MinOcclusion; // 0x53c(0x04)
	struct FColor OcclusionTint; // 0x540(0x04)
	enum class *efcdbf70d1 OcclusionCombineMode; // 0x544(0x01)
	char pad_545[0xa3]; // 0x545(0xa3)
	struct UTextureCube* *17e49282c0; // 0x5e8(0x08)
	char pad_5F0[0xc0]; // 0x5f0(0xc0)

	void *725f335b96(); // Function Engine.SkyLightComponent.*725f335b96 // Final|Native|Public|BlueprintCallable // @ game+0x68099f0
	void *9f60627cae(); // Function Engine.SkyLightComponent.*9f60627cae // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680daf8
	void *42bfac96e0(); // Function Engine.SkyLightComponent.*42bfac96e0 // Final|Native|Public|BlueprintCallable // @ game+0x680cebc
	void *501134db27(); // Function Engine.SkyLightComponent.*501134db27 // Final|Native|Public|BlueprintCallable // @ game+0x68031e8
	void *e7aed419a5(); // Function Engine.SkyLightComponent.*e7aed419a5 // Final|Native|Public|BlueprintCallable // @ game+0x680f8e8
	void *a2352450ce(); // Function Engine.SkyLightComponent.*a2352450ce // Final|Native|Public|BlueprintCallable // @ game+0x680f850
	void *af8e634b2d(); // Function Engine.SkyLightComponent.*af8e634b2d // Final|Native|Public|BlueprintCallable // @ game+0x6809aac
	void SetIntensity(); // Function Engine.SkyLightComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x680d680
	void *019843ccd3(); // Function Engine.SkyLightComponent.*019843ccd3 // Final|Native|Public|BlueprintCallable // @ game+0x6814df4
	void *202bcba166(); // Function Engine.SkyLightComponent.*202bcba166 // Final|Native|Public|BlueprintCallable // @ game+0x680f074
	void *3aceabb4c4(); // Function Engine.SkyLightComponent.*3aceabb4c4 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x680fa18
};

// Class Engine.*e5ec23d71f
// Size: 0x4e0 (Inherited: 0x4d0)
struct U*e5ec23d71f : USceneComponent {
	struct UBoxComponent* *a04c6cef4b; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)
};

// Class Engine.*a8796beffb
// Size: 0x500 (Inherited: 0x4d0)
struct U*a8796beffb : USceneComponent {
	struct F*ba6500be87 Node; // 0x4d0(0x18)
	struct U*a8796beffb* *741163ac67; // 0x4e8(0x08)
	struct U*a8796beffb* *4aceda5cf4; // 0x4f0(0x08)
	char pad_4F8[0x8]; // 0x4f8(0x08)
};

// Class Engine.PhysicsConstraintComponent
// Size: 0x710 (Inherited: 0x4d0)
struct UPhysicsConstraintComponent : USceneComponent {
	struct AActor* *35c8107d2b; // 0x4d0(0x08)
	struct F*9fec3d1c28 *ac0b67a613; // 0x4d8(0x08)
	struct AActor* *572abf2a37; // 0x4e0(0x08)
	struct F*9fec3d1c28 *2a1cab35c9; // 0x4e8(0x08)
	char pad_4F0[0x10]; // 0x4f0(0x10)
	struct UPhysicsConstraintTemplate* ConstraintSetup; // 0x500(0x08)
	struct FMulticastDelegate OnConstraintBroken; // 0x508(0x10)
	char pad_518[0x8]; // 0x518(0x08)
	struct FConstraintInstance ConstraintInstance; // 0x520(0x1f0)

	void *425e5d81af(); // Function Engine.PhysicsConstraintComponent.*425e5d81af // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x680e4f8
	void *708c7d6e4e(); // Function Engine.PhysicsConstraintComponent.*708c7d6e4e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6809754
	void *370e1608b9(); // Function Engine.PhysicsConstraintComponent.*370e1608b9 // Final|Native|Public|BlueprintCallable // @ game+0x67d1da0
	void *eb2d73fd60(); // Function Engine.PhysicsConstraintComponent.*eb2d73fd60 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e3984
	void *cfee95face(); // Function Engine.PhysicsConstraintComponent.*cfee95face // Final|Native|Public|BlueprintCallable // @ game+0x680a5b8
	void *1a54851b11(); // Function Engine.PhysicsConstraintComponent.*1a54851b11 // Final|Native|Public|BlueprintCallable // @ game+0x6806394
	void *131d112baf(); // Function Engine.PhysicsConstraintComponent.*131d112baf // Final|Native|Public|BlueprintCallable // @ game+0x68091f8
	void *d1cca28288(); // Function Engine.PhysicsConstraintComponent.*d1cca28288 // Final|Native|Public|BlueprintCallable // @ game+0x680655c
	void *572f1b7763(); // Function Engine.PhysicsConstraintComponent.*572f1b7763 // Final|Native|Public|BlueprintCallable // @ game+0x680e29c
	void *ba8890b74f(); // Function Engine.PhysicsConstraintComponent.*ba8890b74f // Final|Native|Public|BlueprintCallable // @ game+0x6805e84
	void *e4dca5022c(); // Function Engine.PhysicsConstraintComponent.*e4dca5022c // Final|Native|Public|BlueprintCallable // @ game+0x680fad8
	void *e6a59e245f(); // Function Engine.PhysicsConstraintComponent.*e6a59e245f // Final|Native|Public|BlueprintCallable // @ game+0x6805be0
	void *d6b18ed128(); // Function Engine.PhysicsConstraintComponent.*d6b18ed128 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e39b8
	void *035489ce50(); // Function Engine.PhysicsConstraintComponent.*035489ce50 // Final|Native|Public|BlueprintCallable // @ game+0x68060b8
	void *2677fbc364(); // Function Engine.PhysicsConstraintComponent.*2677fbc364 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x680e7e8
	void *3974017caa(); // Function Engine.PhysicsConstraintComponent.*3974017caa // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6805f78
	void *72f39068b2(); // Function Engine.PhysicsConstraintComponent.*72f39068b2 // Final|Native|Public|BlueprintCallable // @ game+0x680e6b0
	void *3ae68ba0fc(); // Function Engine.PhysicsConstraintComponent.*3ae68ba0fc // Final|Native|Public|BlueprintCallable // @ game+0x680e3c0
	void *b68202cbe8(); // Function Engine.PhysicsConstraintComponent.*b68202cbe8 // Final|Native|Public|BlueprintCallable // @ game+0x6806488
	void *ff59413164(); // Function Engine.PhysicsConstraintComponent.*ff59413164 // Final|Native|Public|BlueprintCallable // @ game+0x680e9f0
	void *432fcf33f0(); // Function Engine.PhysicsConstraintComponent.*432fcf33f0 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6809620
	void *6d5610fd63(); // Function Engine.PhysicsConstraintComponent.*6d5610fd63 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6806650
	void *ce4ed0cd83(); // Function Engine.PhysicsConstraintComponent.*ce4ed0cd83 // Final|Native|Public|BlueprintCallable // @ game+0x68061ac
	void *08befd12c6(); // Function Engine.PhysicsConstraintComponent.*08befd12c6 // Final|Native|Public|BlueprintCallable // @ game+0x680e8fc
	void *18791ddfd8(); // Function Engine.PhysicsConstraintComponent.*18791ddfd8 // Final|Native|Public|BlueprintCallable // @ game+0x680fba8
	void *1de68540e8(); // Function Engine.PhysicsConstraintComponent.*1de68540e8 // Final|Native|Public|BlueprintCallable // @ game+0x68062a0
	void *4febb9026a(); // Function Engine.PhysicsConstraintComponent.*4febb9026a // Final|Native|Public|BlueprintCallable // @ game+0x680eae4
	void *7de97efbeb(); // Function Engine.PhysicsConstraintComponent.*7de97efbeb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e3950
	void *b04b60caca(); // Function Engine.PhysicsConstraintComponent.*b04b60caca // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68098a4
	void *0ff411d931(); // Function Engine.PhysicsConstraintComponent.*0ff411d931 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67e3214
	void *2f229ed86e(); // Function Engine.PhysicsConstraintComponent.*2f229ed86e // Final|Native|Public|BlueprintCallable // @ game+0x6805b18
};

// Class Engine.*b82d9a729f
// Size: 0x500 (Inherited: 0x4d0)
struct U*b82d9a729f : USceneComponent {
	float SpringStiffness; // 0x4d0(0x04)
	float SpringDamping; // 0x4d4(0x04)
	float SpringLengthAtRest; // 0x4d8(0x04)
	float SpringRadius; // 0x4dc(0x04)
	enum class ECollisionChannel SpringChannel; // 0x4e0(0x01)
	bool bIgnoreSelf; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	float SpringCompression; // 0x4e4(0x04)
	char pad_4E8[0x18]; // 0x4e8(0x18)

	void *b93f5f0d8c(); // Function Engine.*b82d9a729f.*b93f5f0d8c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eada8
	void *d2cedcae53(); // Function Engine.*b82d9a729f.*d2cedcae53 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ead78
	void *72c09ee616(); // Function Engine.*b82d9a729f.*72c09ee616 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e8140
	void *1f91f8670f(); // Function Engine.*b82d9a729f.*1f91f8670f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ead44
};

// Class Engine.PhysicsThrusterComponent
// Size: 0x4e0 (Inherited: 0x4d0)
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x4d0(0x04)
	char pad_4D4[0xc]; // 0x4d4(0x0c)
};

// Class Engine.PostProcessComponent
// Size: 0xa60 (Inherited: 0x4d0)
struct UPostProcessComponent : USceneComponent {
	char pad_4D0[0x10]; // 0x4d0(0x10)
	struct FPostProcessSettings Settings; // 0x4e0(0x570)
	float Priority; // 0xa50(0x04)
	float BlendRadius; // 0xa54(0x04)
	float BlendWeight; // 0xa58(0x04)
	char bEnabled : 1; // 0xa5c(0x01)
	char bUnbound : 1; // 0xa5c(0x01)
	char pad_A5C_2 : 6; // 0xa5c(0x01)
	char pad_A5D[0x3]; // 0xa5d(0x03)

	void *ecceb55aba(); // Function Engine.PostProcessComponent.*ecceb55aba // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67c9d54
};

// Class Engine.BrushComponent
// Size: 0xa20 (Inherited: 0xa00)
struct UBrushComponent : UPrimitiveComponent {
	struct UModel* Brush; // 0x9f8(0x08)
	struct UBodySetup* BrushBodySetup; // 0xa00(0x08)
	struct FVector PrePivot; // 0xa08(0x0c)
	char pad_A1C[0x4]; // 0xa1c(0x04)
};

// Class Engine.*33a93474c7
// Size: 0xa30 (Inherited: 0xa00)
struct U*33a93474c7 : UPrimitiveComponent {
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0xa00(0x10)
	struct TArray<struct F*8558347a38> *1bb4efe87c; // 0xa10(0x10)
	struct UBodySetup* BodySetup; // 0xa20(0x08)
	char pad_A28[0x8]; // 0xa28(0x08)
};

// Class Engine.*7516137630
// Size: 0xa20 (Inherited: 0xa00)
struct U*7516137630 : UPrimitiveComponent {
	struct FColor FrustumColor; // 0x9f8(0x04)
	float FrustumAngle; // 0x9fc(0x04)
	float FrustumAspectRatio; // 0xa00(0x04)
	float FrustumStartDist; // 0xa04(0x04)
	float FrustumEndDist; // 0xa08(0x04)
	struct UTexture* Texture; // 0xa10(0x08)
	char pad_A1C[0x4]; // 0xa1c(0x04)
};

// Class Engine.*1ee70631d9
// Size: 0xa10 (Inherited: 0xa00)
struct U*1ee70631d9 : UPrimitiveComponent {
	struct TArray<struct FVector2D> Points; // 0x9f8(0x10)
};

// Class Engine.GrassVolumeComponent
// Size: 0xa30 (Inherited: 0xa30)
struct UGrassVolumeComponent : UBoxComponent {
};

// Class Engine.GrassVolumesContainerComponent
// Size: 0xa10 (Inherited: 0xa00)
struct UGrassVolumesContainerComponent : UPrimitiveComponent {
	struct TArray<struct F*3f1ec42700> *0cab476336; // 0x9f8(0x10)
};

// Class Engine.*5c7832fd96
// Size: 0xa50 (Inherited: 0xa00)
struct U*5c7832fd96 : UPrimitiveComponent {
	struct ALandscape* *7ebbb3ad89; // 0x9f8(0x1c)
	struct ALandscape* *8ed8c5b3b2; // 0xa14(0x1c)
	struct UTexture2D* *444dd6e00f; // 0xa30(0x08)
	struct FVector2D Extent; // 0xa38(0x08)
	struct FIntPoint *7f65cf71fa; // 0xa40(0x08)
	char *65f51e30f6 : 1; // 0xa48(0x01)
	char *165d2a4d50 : 1; // 0xa48(0x01)
	char *cc1157a8e7 : 1; // 0xa48(0x01)
	char *f5d55e540e : 1; // 0xa48(0x01)
};

// Class Engine.*d7f53fe8ac
// Size: 0xa40 (Inherited: 0xa00)
struct U*d7f53fe8ac : UPrimitiveComponent {
	char pad_A00[0x40]; // 0xa00(0x40)
};

// Class Engine.MaterialBillboardComponent
// Size: 0xa10 (Inherited: 0xa00)
struct UMaterialBillboardComponent : UPrimitiveComponent {
	struct TArray<struct F*001d4a8b3e> Elements; // 0x9f8(0x10)

	void *50e35084ca(); // Function Engine.MaterialBillboardComponent.*50e35084ca // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x680ab18
	void *ba9565b730(); // Function Engine.MaterialBillboardComponent.*ba9565b730 // Final|Native|Public|BlueprintCallable // @ game+0x67c8c68
};

// Class Engine.*e40182d502
// Size: 0xd80 (Inherited: 0xca0)
struct U*e40182d502 : USkinnedMeshComponent {
	char pad_CA0[0xe0]; // 0xca0(0xe0)

	void *d74b59b63b(); // Function Engine.*e40182d502.*d74b59b63b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680789c
	void *2b9125d5bb(); // Function Engine.*e40182d502.*2b9125d5bb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68079d8
	void *734d39aec1(); // Function Engine.*e40182d502.*734d39aec1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67e2760
	void *a75da91581(); // Function Engine.*e40182d502.*a75da91581 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67e2c74
	void *5da1e490f5(); // Function Engine.*e40182d502.*5da1e490f5 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6807710
	void *76a665c87f(); // Function Engine.*e40182d502.*76a665c87f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67e2a14
	void *31226dd93d(); // Function Engine.*e40182d502.*31226dd93d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67e2b44
	void *751e2944f4(); // Function Engine.*e40182d502.*751e2944f4 // Final|Native|Public|BlueprintCallable // @ game+0x67d8e0c
	void *faa1141dc8(); // Function Engine.*e40182d502.*faa1141dc8 // Final|Native|Public|BlueprintCallable // @ game+0x6803990
	void *99d03ff495(); // Function Engine.*e40182d502.*99d03ff495 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68075d4
};

// Class Engine.SplineMeshComponent
// Size: 0xc40 (Inherited: 0xba0)
struct USplineMeshComponent : UStaticMeshComponent {
	char pad_BA0[0x8]; // 0xba0(0x08)
	struct F*08d1cc2639 SplineParams; // 0xba8(0x58)
	struct FVector SplineUpDir; // 0xc00(0x0c)
	char *957f8c4d83 : 1; // 0xc0c(0x01)
	char *efd1d07b7b : 1; // 0xc0c(0x01)
	char pad_C0C_2 : 6; // 0xc0c(0x01)
	char pad_C0D[0x3]; // 0xc0d(0x03)
	enum class ESplineMeshAxis *95ac533207; // 0xc10(0x01)
	char pad_C11[0x3]; // 0xc11(0x03)
	float *c4492a0fef; // 0xc14(0x04)
	float *73c5371aee; // 0xc18(0x04)
	char pad_C1C[0x4]; // 0xc1c(0x04)
	struct UBodySetup* BodySetup; // 0xc20(0x08)
	struct FGuid *8adbbd2e25; // 0xc28(0x10)
	char *3dc8623213 : 1; // 0xc38(0x01)
	char pad_C38_1 : 7; // 0xc38(0x01)
	char pad_C39[0x7]; // 0xc39(0x07)

	void *f3362554d9(); // Function Engine.SplineMeshComponent.*f3362554d9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6812830
	void *923d84a9d1(); // Function Engine.SplineMeshComponent.*923d84a9d1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a07bf4
	void *6c9558dae5(); // Function Engine.SplineMeshComponent.*6c9558dae5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eae10
	void *faa8756c5d(); // Function Engine.SplineMeshComponent.*faa8756c5d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6812010
	void *baf6db0bae(); // Function Engine.SplineMeshComponent.*baf6db0bae // Final|Native|Public|BlueprintCallable // @ game+0x6807e44
	void *af57b824e3(); // Function Engine.SplineMeshComponent.*af57b824e3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e4bb8
	void *c9c864a1d3(); // Function Engine.SplineMeshComponent.*c9c864a1d3 // Final|Native|Public|BlueprintCallable // @ game+0x681e2b4
	void *371554fefa(); // Function Engine.SplineMeshComponent.*371554fefa // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680b440
	void *7074b54885(); // Function Engine.SplineMeshComponent.*7074b54885 // Final|Native|Public|BlueprintCallable // @ game+0x6812734
	void *7247037fee(); // Function Engine.SplineMeshComponent.*7247037fee // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6812930
	void *bf3055c969(); // Function Engine.SplineMeshComponent.*bf3055c969 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680b148
	void *5a749815e3(); // Function Engine.SplineMeshComponent.*5a749815e3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e4b90
	void *728567aed5(); // Function Engine.SplineMeshComponent.*728567aed5 // Final|Native|Public|BlueprintCallable // @ game+0x680c404
	void *72505d6334(); // Function Engine.SplineMeshComponent.*72505d6334 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e4b40
	void *ce475a92fb(); // Function Engine.SplineMeshComponent.*ce475a92fb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67eae38
	void *7c3f5159a8(); // Function Engine.SplineMeshComponent.*7c3f5159a8 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eade8
	void *f597cb4f37(); // Function Engine.SplineMeshComponent.*f597cb4f37 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eae78
	void *520ccf9b95(); // Function Engine.SplineMeshComponent.*520ccf9b95 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6812638
	void *ea6365bce8(); // Function Engine.SplineMeshComponent.*ea6365bce8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68121d4
	void *367e39b59e(); // Function Engine.SplineMeshComponent.*367e39b59e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a07d14
	void *652066da65(); // Function Engine.SplineMeshComponent.*652066da65 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e2da0
	void *ba854f8fcd(); // Function Engine.SplineMeshComponent.*ba854f8fcd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6812538
	void *7e6913c9f3(); // Function Engine.SplineMeshComponent.*7e6913c9f3 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680b048
	void *fd7cfa1b07(); // Function Engine.SplineMeshComponent.*fd7cfa1b07 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680b340
	void *a1507d32ff(); // Function Engine.SplineMeshComponent.*a1507d32ff // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e4b68
	void *f68504edc2(); // Function Engine.SplineMeshComponent.*f68504edc2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e4d9c
	void *3e30e2570d(); // Function Engine.SplineMeshComponent.*3e30e2570d // Final|Native|Public|BlueprintCallable // @ game+0x680b244
	void *ef0580d8d0(); // Function Engine.SplineMeshComponent.*ef0580d8d0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ead1c
	void *9160d9e068(); // Function Engine.SplineMeshComponent.*9160d9e068 // Final|Native|Public|BlueprintCallable // @ game+0x6808034
	void *130f68972e(); // Function Engine.SplineMeshComponent.*130f68972e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67d3048
	void *bfd48539a5(); // Function Engine.SplineMeshComponent.*bfd48539a5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eae50
};

// Class Engine.*b2159bc4a0
// Size: 0xc20 (Inherited: 0xba0)
struct U*b2159bc4a0 : UStaticMeshComponent {
	char pad_BA0[0x8]; // 0xba0(0x08)
	struct TArray<struct F*be7798eda9> PerInstanceSMData; // 0xba8(0x10)
	struct FVector SplineUpDir; // 0xbb8(0x0c)
	char *efd1d07b7b : 1; // 0xbc4(0x01)
	char pad_BC4_1 : 7; // 0xbc4(0x01)
	char pad_BC5[0x3]; // 0xbc5(0x03)
	enum class ESplineMeshAxis *95ac533207; // 0xbc8(0x01)
	char pad_BC9[0x3]; // 0xbc9(0x03)
	float *c4492a0fef; // 0xbcc(0x04)
	float *73c5371aee; // 0xbd0(0x04)
	struct FVector *d842fc714f; // 0xbd4(0x0c)
	int32 InstanceStartCullDistance; // 0xbe0(0x04)
	int32 InstanceEndCullDistance; // 0xbe4(0x04)
	char pad_BE8[0x18]; // 0xbe8(0x18)
	struct UBodySetup* BodySetup; // 0xc00(0x08)
	struct FGuid *8adbbd2e25; // 0xc08(0x10)
	uint32 *44013c9268; // 0xc18(0x04)
	char pad_C1C[0x4]; // 0xc1c(0x04)

	void *7786d1a996(); // Function Engine.*b2159bc4a0.*7786d1a996 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e5d94
	void *baf6db0bae(); // Function Engine.*b2159bc4a0.*baf6db0bae // Final|Native|Public|BlueprintCallable // @ game+0x6807d50
	void *652066da65(); // Function Engine.*b2159bc4a0.*652066da65 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e2d88
	void *c9c864a1d3(); // Function Engine.*b2159bc4a0.*c9c864a1d3 // Final|Native|Public|BlueprintCallable // @ game+0x681e2a0
	void *028d8429ac(); // Function Engine.*b2159bc4a0.*028d8429ac // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67c9498
	void *923d84a9d1(); // Function Engine.*b2159bc4a0.*923d84a9d1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a0870c
	void *728567aed5(); // Function Engine.*b2159bc4a0.*728567aed5 // Final|Native|Public|BlueprintCallable // @ game+0x680c318
	void *fa21ef9a0b(); // Function Engine.*b2159bc4a0.*fa21ef9a0b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e627c
	void *a984b9a9ce(); // Function Engine.*b2159bc4a0.*a984b9a9ce // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67c98dc
	void *b96a030999(); // Function Engine.*b2159bc4a0.*b96a030999 // Final|Native|Public|BlueprintCallable // @ game+0x6809be0
	void *f68504edc2(); // Function Engine.*b2159bc4a0.*f68504edc2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e4d84
	void *95a4257f8b(); // Function Engine.*b2159bc4a0.*95a4257f8b // Native|Public|BlueprintCallable // @ game+0x67d6150
	void *2a75f57149(); // Function Engine.*b2159bc4a0.*2a75f57149 // Native|Public|BlueprintCallable // @ game+0x6803390
	void *9160d9e068(); // Function Engine.*b2159bc4a0.*9160d9e068 // Final|Native|Public|BlueprintCallable // @ game+0x6807f40
};

// Class Engine.*65fe268759
// Size: 0xba0 (Inherited: 0xba0)
struct U*65fe268759 : UStaticMeshComponent {
};

// Class Engine.Texture
// Size: 0xc0 (Inherited: 0x30)
struct UTexture : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FGuid *72dc592e4f; // 0x38(0x10)
	int32 LODBias; // 0x48(0x04)
	int32 NumCinematicMipLevels; // 0x4c(0x04)
	int32 GlobalLODBias; // 0x50(0x04)
	char SRGB : 1; // 0x54(0x01)
	char NeverStream : 1; // 0x54(0x01)
	char *ee6fb9b455 : 1; // 0x54(0x01)
	char *020082ffed : 1; // 0x54(0x01)
	char *794d619cef : 1; // 0x54(0x01)
	char pad_54_5 : 3; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 *49b55c7409; // 0x58(0x04)
	enum class TextureCompressionSettings CompressionSettings; // 0x5c(0x01)
	enum class TextureFilter Filter; // 0x5d(0x01)
	enum class TextureGroup LODGroup; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
	struct FPerPlatformFloat *6391458466; // 0x60(0x04)
	enum class ETextureDownscaleOptions *dfb62cc908; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x68(0x10)
	char pad_78[0x48]; // 0x78(0x48)
};

// Class Engine.Texture2D
// Size: 0x100 (Inherited: 0xc0)
struct UTexture2D : UTexture {
	int32 *7236cc8f05; // 0xc0(0x04)
	int32 *018f2f6278; // 0xc4(0x04)
	int32 *7addae35f1; // 0xc8(0x04)
	struct FIntPoint *df15f4859d; // 0xcc(0x08)
	char pad_D4[0x4]; // 0xd4(0x04)
	double *6ab965470d; // 0xd8(0x08)
	char *c11c956f83 : 1; // 0xe0(0x01)
	char *8308a3a0af : 1; // 0xe0(0x01)
	char *f2f0197326 : 1; // 0xe0(0x01)
	char *28e0f53cbc : 1; // 0xe0(0x01)
	char *89b6eea276 : 1; // 0xe0(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0xe0(0x01)
	char *2a91aef5b9 : 1; // 0xe0(0x01)
	char pad_E0_7 : 1; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	enum class *6486b70fc0 AddressX; // 0xe4(0x01)
	enum class *6486b70fc0 AddressY; // 0xe5(0x01)
	char pad_E6[0x1a]; // 0xe6(0x1a)

	void *3f69542928(); // Function Engine.Texture2D.*3f69542928 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ce1c0
	void *0d452de5c1(); // Function Engine.Texture2D.*0d452de5c1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ce1e8
	void *77e5a6ccb5(); // Function Engine.Texture2D.*77e5a6ccb5 // Native|Public|BlueprintCallable // @ game+0x680c1a4
};

// Class Engine.*ae010490f6
// Size: 0x58 (Inherited: 0x38)
struct U*ae010490f6 : UDataAsset {
	struct UTexture2D* Color; // 0x38(0x20)
};

// Class Engine.*c155f3445f
// Size: 0xa10 (Inherited: 0xa00)
struct U*c155f3445f : UPrimitiveComponent {
	struct U*ae010490f6* LabelData; // 0x9f8(0x08)
	struct FVector2D Offset; // 0xa00(0x08)
};

// Class Engine.*51d3af11ce
// Size: 0xf0 (Inherited: 0x38)
struct U*51d3af11ce : UDataAsset {
	struct UTexture2D* Color; // 0x38(0x20)
	struct UTexture2D* Normal; // 0x58(0x20)
	float Height; // 0x78(0x04)
	char pad_7C[0x74]; // 0x7c(0x74)
};

// Class Engine.*8fb9a22a45
// Size: 0xa00 (Inherited: 0xa00)
struct U*8fb9a22a45 : UPrimitiveComponent {
	struct U*51d3af11ce* ObjectData; // 0x9f8(0x08)
};

// Class Engine.*204470fe3a
// Size: 0xa40 (Inherited: 0xa00)
struct U*204470fe3a : UPrimitiveComponent {
	char pad_A00[0x10]; // 0xa00(0x10)
	struct UBodySetup* *4da416d40d; // 0xa10(0x08)
	char pad_A18[0x28]; // 0xa18(0x28)
};

// Class Engine.*7c1b3933ee
// Size: 0xa00 (Inherited: 0xa00)
struct U*7c1b3933ee : UPrimitiveComponent {
};

// Class Engine.NavMeshRenderingComponent
// Size: 0xa10 (Inherited: 0xa00)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char pad_A00[0x10]; // 0xa00(0x10)
};

// Class Engine.*c8c3c0f3e4
// Size: 0xa00 (Inherited: 0xa00)
struct U*c8c3c0f3e4 : UPrimitiveComponent {
};

// Class Engine.MeshClippingUnderwaterComponent
// Size: 0xa60 (Inherited: 0xa30)
struct UMeshClippingUnderwaterComponent : UBoxComponent {
	bool bEnabled; // 0xa28(0x01)
	bool bUseParentBounds; // 0xa29(0x01)
	float ExtendUpwards; // 0xa2c(0x04)
	float ExtendDownwards; // 0xa30(0x04)
	char pad_A3A[0x26]; // 0xa3a(0x26)

	void *82a7f4086c(); // Function Engine.MeshClippingUnderwaterComponent.*82a7f4086c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e83cc
};

// Class Engine.SphereComponent
// Size: 0xa20 (Inherited: 0xa20)
struct USphereComponent : U*9de72ef8ed {
	float SphereRadius; // 0xa18(0x04)

	void *1abcd804d2(); // Function Engine.SphereComponent.*1abcd804d2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ea69c
	void *b260e3db57(); // Function Engine.SphereComponent.*b260e3db57 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67eaaf0
	void *2f3634333f(); // Function Engine.SphereComponent.*2f3634333f // Final|Native|Public|BlueprintCallable // @ game+0x6811bbc
	void *68beb37286(); // Function Engine.SphereComponent.*68beb37286 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ecac0
};

// Class Engine.*9dff3f6d02
// Size: 0xa20 (Inherited: 0xa20)
struct U*9dff3f6d02 : USphereComponent {
};

// Class Engine.TextRenderComponent
// Size: 0xa50 (Inherited: 0xa00)
struct UTextRenderComponent : UPrimitiveComponent {
	struct FText Text; // 0x9f8(0x18)
	struct UMaterialInterface* TextMaterial; // 0xa10(0x08)
	struct UFont* Font; // 0xa18(0x08)
	enum class *df0763a63b HorizontalAlignment; // 0xa20(0x01)
	enum class *4dcbcda624 VerticalAlignment; // 0xa21(0x01)
	struct FColor TextRenderColor; // 0xa24(0x04)
	float XScale; // 0xa28(0x04)
	float YScale; // 0xa2c(0x04)
	float WorldSize; // 0xa30(0x04)
	float *ab61ef1a5f; // 0xa34(0x04)
	float HorizSpacingAdjust; // 0xa38(0x04)
	float VertSpacingAdjust; // 0xa3c(0x04)
	char bAlwaysRenderAsText : 1; // 0xa40(0x01)
	char pad_A46_1 : 7; // 0xa46(0x01)
	char pad_A47[0x9]; // 0xa47(0x09)

	void *a9cb2f5a9e(); // Function Engine.TextRenderComponent.*a9cb2f5a9e // Final|Native|Public|BlueprintCallable // @ game+0x68147fc
	void *2c7f3184f4(); // Function Engine.TextRenderComponent.*2c7f3184f4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eb8bc
	void *00be626f8e(); // Function Engine.TextRenderComponent.*00be626f8e // Final|Native|Public|BlueprintCallable // @ game+0x68154f0
	void *09ea111001(); // Function Engine.TextRenderComponent.*09ea111001 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67eb950
	void SetText(); // Function Engine.TextRenderComponent.SetText // Final|Native|Public|BlueprintCallable // @ game+0x6813654
	void *9407988de6(); // Function Engine.TextRenderComponent.*9407988de6 // Final|Native|Public|BlueprintCallable // @ game+0x680cba0
	void *f2db948d68(); // Function Engine.TextRenderComponent.*f2db948d68 // Final|Native|Public|BlueprintCallable // @ game+0x681463c
	void *b39989fab8(); // Function Engine.TextRenderComponent.*b39989fab8 // Final|Native|Public|BlueprintCallable // @ game+0x6813754
	void *bdc5471a2f(); // Function Engine.TextRenderComponent.*bdc5471a2f // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67f2b34
	void *49de05b8e9(); // Function Engine.TextRenderComponent.*49de05b8e9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68137f0
	void *6a23b654f4(); // Function Engine.TextRenderComponent.*6a23b654f4 // Final|Native|Public|BlueprintCallable // @ game+0x6815450
	void *850a5424e1(); // Function Engine.TextRenderComponent.*850a5424e1 // Final|Native|Public|BlueprintCallable // @ game+0x680cc40
	void *d11bb11796(); // Function Engine.TextRenderComponent.*d11bb11796 // Final|Native|Public|BlueprintCallable // @ game+0x680c05c
	void *8ca07644c2(); // Function Engine.TextRenderComponent.*8ca07644c2 // Final|Native|Public|BlueprintCallable // @ game+0x68152d4
};

// Class Engine.VectorFieldComponent
// Size: 0xa20 (Inherited: 0xa00)
struct UVectorFieldComponent : UPrimitiveComponent {
	struct UVectorField* VectorField; // 0x9f8(0x08)
	float Intensity; // 0xa00(0x04)
	float Tightness; // 0xa04(0x04)
	char *62daaa2b79 : 1; // 0xa08(0x01)
	char pad_A10_1 : 7; // 0xa10(0x01)
	char pad_A11[0xf]; // 0xa11(0x0f)

	void SetIntensity(); // Function Engine.VectorFieldComponent.SetIntensity // Native|Public|BlueprintCallable // @ game+0x5a6bbcc
};

// Class Engine.RadialForceComponent
// Size: 0x500 (Inherited: 0x4d0)
struct URadialForceComponent : USceneComponent {
	float Radius; // 0x4d0(0x04)
	enum class *d6dc0510f4 Falloff; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)
	float ImpulseStrength; // 0x4d8(0x04)
	char bImpulseVelChange : 1; // 0x4dc(0x01)
	char bIgnoreOwningActor : 1; // 0x4dc(0x01)
	char pad_4DC_2 : 6; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)
	float ForceStrength; // 0x4e0(0x04)
	float DestructibleDamage; // 0x4e4(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectTypesToAffect; // 0x4e8(0x10)
	char pad_4F8[0x8]; // 0x4f8(0x08)

	void *2df1905387(); // Function Engine.RadialForceComponent.*2df1905387 // Native|Public|BlueprintCallable // @ game+0x67c9ba0
	void *2170013cc4(); // Function Engine.RadialForceComponent.*2170013cc4 // Native|Public|BlueprintCallable // @ game+0x68035f8
	void *9d3f73d5f3(); // Function Engine.RadialForceComponent.*9d3f73d5f3 // Native|Public|BlueprintCallable // @ game+0x5a60de4
};

// Class Engine.TextureCube
// Size: 0x158 (Inherited: 0xc0)
struct UTextureCube : UTexture {
	bool *3dbb71015c; // 0xc0(0x01)
	char pad_C1[0x97]; // 0xc1(0x97)
};

// Class Engine.ReflectionCaptureComponent
// Size: 0x520 (Inherited: 0x4d0)
struct UReflectionCaptureComponent : USceneComponent {
	struct UBillboardComponent* *6707c4ef7e; // 0x4d0(0x08)
	enum class *87c08bb85b ReflectionSourceType; // 0x4d8(0x01)
	bool bOverrideCullDistance; // 0x4d9(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x4da(0x01)
	char pad_4DB[0x5]; // 0x4db(0x05)
	struct UTextureCube* Cubemap; // 0x4e0(0x08)
	struct UTextureCube* *2aa695f13a; // 0x4e8(0x08)
	float SourceCubemapAngle; // 0x4f0(0x04)
	float Brightness; // 0x4f4(0x04)
	struct FVector CaptureOffset; // 0x4f8(0x0c)
	float CullDistance; // 0x504(0x04)
	char pad_508[0x18]; // 0x508(0x18)
};

// Class Engine.BoxReflectionCaptureComponent
// Size: 0x530 (Inherited: 0x520)
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x518(0x04)
	struct UBoxComponent* PreviewInfluenceBox; // 0x520(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x528(0x08)
};

// Class Engine.BoxReflectionCaptureSAComponent
// Size: 0x530 (Inherited: 0x530)
struct UBoxReflectionCaptureSAComponent : UBoxReflectionCaptureComponent {
};

// Class Engine.*90b95f474a
// Size: 0x530 (Inherited: 0x520)
struct U*90b95f474a : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x518(0x04)
	struct U*9dff3f6d02* *c0fec6c2ff; // 0x520(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x528(0x08)
};

// Class Engine.*9e69e793c0
// Size: 0x530 (Inherited: 0x520)
struct U*9e69e793c0 : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x518(0x04)
	float *777d957ad8; // 0x51c(0x04)
	struct U*9dff3f6d02* *c0fec6c2ff; // 0x520(0x08)
};

// Class Engine.*30ab50e62e
// Size: 0x630 (Inherited: 0x550)
struct U*30ab50e62e : USceneCaptureComponent {
	struct UBoxComponent* *a04c6cef4b; // 0x550(0x08)
	float *b32cd4dbb1; // 0x558(0x04)
	float *ab9b7a30fe; // 0x55c(0x04)
	float *79a04946cc; // 0x560(0x04)
	int32 ScreenPercentage; // 0x564(0x04)
	float *ebc802595c; // 0x568(0x04)
	float DistanceFromPlaneFadeStart; // 0x56c(0x04)
	float DistanceFromPlaneFadeEnd; // 0x570(0x04)
	float *a0122c20dc; // 0x574(0x04)
	float *bcbddc034a; // 0x578(0x04)
	float *ddc7910fab; // 0x57c(0x04)
	float *afe83153a7; // 0x580(0x04)
	bool *6d919610af; // 0x584(0x01)
	char pad_585[0xab]; // 0x585(0xab)
};

// Class Engine.SceneCaptureComponentCube
// Size: 0x560 (Inherited: 0x550)
struct USceneCaptureComponentCube : USceneCaptureComponent {
	struct UTextureRenderTargetCube* TextureTarget; // 0x550(0x08)
	char pad_558[0x8]; // 0x558(0x08)

	void CaptureScene(); // Function Engine.SceneCaptureComponentCube.CaptureScene // Final|Native|Public|BlueprintCallable // @ game+0x67d5b30
};

// Class Engine.*911a43bfb5
// Size: 0x570 (Inherited: 0x4d0)
struct U*911a43bfb5 : USceneComponent {
	char bLiveTexture : 1; // 0x4d0(0x01)
	char bSupportsDepth : 1; // 0x4d0(0x01)
	char bNoAlphaChannel : 1; // 0x4d0(0x01)
	char pad_4D0_3 : 5; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct UTexture* Texture; // 0x4d8(0x08)
	struct UTexture* LeftTexture; // 0x4e0(0x08)
	char bQuadPreserveTextureRatio : 1; // 0x4e8(0x01)
	char pad_4E8_1 : 7; // 0x4e8(0x01)
	char pad_4E9[0x3]; // 0x4e9(0x03)
	struct FVector2D QuadSize; // 0x4ec(0x08)
	struct FBox2D UVRect; // 0x4f4(0x14)
	float CylinderRadius; // 0x508(0x04)
	float CylinderOverlayArc; // 0x50c(0x04)
	int32 CylinderHeight; // 0x510(0x04)
	enum class EStereoLayerType StereoLayerType; // 0x514(0x01)
	enum class *c7b3a2efca StereoLayerShape; // 0x515(0x01)
	char pad_516[0x2]; // 0x516(0x02)
	int32 Priority; // 0x518(0x04)
	char pad_51C[0x54]; // 0x51c(0x54)

	void *606c98efc6(); // Function Engine.*911a43bfb5.*606c98efc6 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67e9284
	void *8f7c198bdb(); // Function Engine.*911a43bfb5.*8f7c198bdb // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6810bf4
	void *db293a2f33(); // Function Engine.*911a43bfb5.*db293a2f33 // Final|Native|Public|BlueprintCallable // @ game+0x6813884
	void *6d0dd3363f(); // Function Engine.*911a43bfb5.*6d0dd3363f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6813d6c
	void *a6d94b133b(); // Function Engine.*911a43bfb5.*a6d94b133b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6243688
	void SetPriority(); // Function Engine.*911a43bfb5.SetPriority // Final|Native|Public|BlueprintCallable // @ game+0x6810acc
	void *76afd527e1(); // Function Engine.*911a43bfb5.*76afd527e1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67ec8e4
	void *c962c0f7b2(); // Function Engine.*911a43bfb5.*c962c0f7b2 // Final|Native|Public|BlueprintCallable // @ game+0x67fa134
	void *2652d136fe(); // Function Engine.*911a43bfb5.*2652d136fe // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e926c
};

// Class Engine.*4f57f7c40f
// Size: 0x4f0 (Inherited: 0x4d0)
struct U*4f57f7c40f : USceneComponent {
	float Strength; // 0x4d0(0x04)
	float Speed; // 0x4d4(0x04)
	float MinGustAmount; // 0x4d8(0x04)
	float MaxGustAmount; // 0x4dc(0x04)
	float Radius; // 0x4e0(0x04)
	char bPointWind : 1; // 0x4e4(0x01)
	char pad_4E4_1 : 7; // 0x4e4(0x01)
	char pad_4E5[0xb]; // 0x4e5(0x0b)

	void *e9d6f0ecae(); // Function Engine.*4f57f7c40f.*e9d6f0ecae // Final|Native|Public|BlueprintCallable // @ game+0x680f10c
	void *9e3e8f6729(); // Function Engine.*4f57f7c40f.*9e3e8f6729 // Final|Native|Public|BlueprintCallable // @ game+0x6814f68
	void *42f175d2e5(); // Function Engine.*4f57f7c40f.*42f175d2e5 // Final|Native|Public|BlueprintCallable // @ game+0x680ef20
	void SetRadius(); // Function Engine.*4f57f7c40f.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x6810ca8
	void *5a3df888b7(); // Function Engine.*4f57f7c40f.*5a3df888b7 // Final|Native|Public|BlueprintCallable // @ game+0x6812acc
	void SetSpeed(); // Function Engine.*4f57f7c40f.SetSpeed // Final|Native|Public|BlueprintCallable // @ game+0x6811b1c
};

// Class Engine.TimelineComponent
// Size: 0x2f0 (Inherited: 0x200)
struct UTimelineComponent : UActorComponent {
	struct FTimeline *ddc0e3ef6d; // 0x200(0xe0)
	char *8499a67b55 : 1; // 0x2e0(0x01)
	char pad_2E0_1 : 7; // 0x2e0(0x01)
	char pad_2E1[0xf]; // 0x2e1(0x0f)

	void *6970975b29(); // Function Engine.TimelineComponent.*6970975b29 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e8798
	void SetVectorCurve(); // Function Engine.TimelineComponent.SetVectorCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68141e8
	void PlayFromStart(); // Function Engine.TimelineComponent.PlayFromStart // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67ff26c
	void Stop(); // Function Engine.TimelineComponent.Stop // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x681bfa0
	void Play(); // Function Engine.TimelineComponent.Play // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67fea8c
	void SetLooping(); // Function Engine.TimelineComponent.SetLooping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680edf8
	void SetNewTime(); // Function Engine.TimelineComponent.SetNewTime // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680f5d0
	void *1a6a17d1b9(); // Function Engine.TimelineComponent.*1a6a17d1b9 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68139d4
	void *ca163c2520(); // Function Engine.TimelineComponent.*ca163c2520 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e53cc
	void *92b2288bf0(); // Function Engine.TimelineComponent.*92b2288bf0 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67f12ac
	void *d4609e55f2(); // Function Engine.TimelineComponent.*d4609e55f2 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680cd8c
	void *7be3f24ace(); // Function Engine.TimelineComponent.*7be3f24ace // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ebc48
	void GetPlayRate(); // Function Engine.TimelineComponent.GetPlayRate // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67e8780
	void OnRep_Timeline(); // Function Engine.TimelineComponent.OnRep_Timeline // Final|Native|Public // @ game+0x67fdd98
	void SetFloatCurve(); // Function Engine.TimelineComponent.SetFloatCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680ba64
	void IsLooping(); // Function Engine.TimelineComponent.IsLooping // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67f0d70
	void *1b997b291a(); // Function Engine.TimelineComponent.*1b997b291a // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6813924
	void Reverse(); // Function Engine.TimelineComponent.Reverse // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6803e50
	void IsPlaying(); // Function Engine.TimelineComponent.IsPlaying // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67f0e74
	void SetPlayRate(); // Function Engine.TimelineComponent.SetPlayRate // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68101a4
	void SetPlaybackPosition(); // Function Engine.TimelineComponent.SetPlaybackPosition // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x681023c
	void ReverseFromEnd(); // Function Engine.TimelineComponent.ReverseFromEnd // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6803e80
	void SetLinearColorCurve(); // Function Engine.TimelineComponent.SetLinearColorCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680dfb4
};

// Class Engine.AnimComposite
// Size: 0xb8 (Inherited: 0xa8)
struct UAnimComposite : U*24a15a77a5 {
	struct FAnimTrack *4c954c24e8; // 0xa8(0x10)
};

// Class Engine.AnimSequence
// Size: 0x1a8 (Inherited: 0xa8)
struct UAnimSequence : UAnimSequenceBase {
	int32 NumFrames; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct F*8d35e74c36> *115c55abd8; // 0xb0(0x10)
	char pad_C0[0x98]; // 0xc0(0x98)
	enum class EAdditiveAnimationType *bf6856f3a7; // 0x158(0x01)
	enum class *2fbaf4b5a5 *325a99b29c; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct UAnimSequence* *72e70c09c9; // 0x160(0x08)
	int32 *930424804c; // 0x168(0x04)
	int32 *b41d655f3e; // 0x16c(0x04)
	struct FName RetargetSource; // 0x170(0x08)
	enum class EAnimInterpolationType Interpolation; // 0x178(0x01)
	bool *b887810756; // 0x179(0x01)
	bool *7c185100a9; // 0x17a(0x01)
	enum class ERootMotionRootLock *07020cca27; // 0x17b(0x01)
	bool *f29e88e9a6; // 0x17c(0x01)
	bool *d7d080b14e; // 0x17d(0x01)
	char pad_17E[0x2]; // 0x17e(0x02)
	struct TArray<struct F*faa7441826> AuthoredSyncMarkers; // 0x180(0x10)
	char pad_190[0x18]; // 0x190(0x18)
};

// Class Engine.BlendSpaceBase
// Size: 0x148 (Inherited: 0x80)
struct UBlendSpaceBase : UAnimationAsset {
	char pad_80[0x8]; // 0x80(0x08)
	bool *71d5693568; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float AnimLength; // 0x8c(0x04)
	struct TArray<struct F*727ca29295> *42ad741748; // 0x90(0x10)
	struct FInterpolationParameter *5c0266ffaa[0x03]; // 0xa0(0x18)
	float *be76083362; // 0xb8(0x04)
	enum class ENotifyTriggerMode *f9db58d433; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	int32 *ed511ec57c; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FBlendSample> SampleData; // 0xc8(0x10)
	struct TArray<struct F*fff699ec0f> *f6564ccf92; // 0xd8(0x10)
	struct FBlendParameter *38b59e1e4b[0x03]; // 0xe8(0x60)
};

// Class Engine.BlendSpace
// Size: 0x150 (Inherited: 0x148)
struct UBlendSpace : UBlendSpaceBase {
	enum class *cb265b0a55 *4f26ae5e03; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class Engine.AimOffsetBlendSpace
// Size: 0x150 (Inherited: 0x150)
struct UAimOffsetBlendSpace : UBlendSpace {
};

// Class Engine.BlendSpace1D
// Size: 0x150 (Inherited: 0x148)
struct UBlendSpace1D : UBlendSpaceBase {
	bool *64b4179e57; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class Engine.AimOffsetBlendSpace1D
// Size: 0x150 (Inherited: 0x150)
struct UAimOffsetBlendSpace1D : UBlendSpace1D {
};

// Class Engine.PoseAsset
// Size: 0x190 (Inherited: 0x80)
struct UPoseAsset : UAnimationAsset {
	struct F*64d360f6b1 *4c33ffe94e; // 0x80(0x90)
	bool *7cce72fd22; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	int32 *4dd8d47817; // 0x114(0x04)
	struct FName RetargetSource; // 0x118(0x08)
	char pad_120[0x70]; // 0x120(0x70)
};

// Class Engine.*33edc04730
// Size: 0x30 (Inherited: 0x30)
struct U*33edc04730 : UObject {
};

// Class Engine.*bcf9a878a8
// Size: 0x30 (Inherited: 0x30)
struct U*bcf9a878a8 : UInterface {
};

// Class Engine.AnimClassData
// Size: 0xa0 (Inherited: 0x30)
struct UAnimClassData : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*426a5c2b9f> *930da18c23; // 0x38(0x10)
	struct USkeleton* TargetSkeleton; // 0x48(0x08)
	struct TArray<struct FAnimNotifyEvent> *aa7eeb7962; // 0x50(0x10)
	int32 *d30f64b6dd; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<int32> *ec05e139be; // 0x68(0x10)
	struct UStructProperty* *77f01af6c0; // 0x78(0x08)
	struct TArray<struct UStructProperty*> *08e4ac3c89; // 0x80(0x10)
	struct TArray<struct FName> *672092d76b; // 0x90(0x10)
};

// Class Engine.AnimCompress
// Size: 0x50 (Inherited: 0x30)
struct UAnimCompress : UObject {
	struct FString Description; // 0x30(0x10)
	char *6f2b554c06 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class AnimationCompressionFormat *b6136e48ec; // 0x44(0x01)
	enum class AnimationCompressionFormat *e93b168264; // 0x45(0x01)
	enum class AnimationCompressionFormat *1def19490b; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	float *cb16fd1092; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.AnimCompress_Automatic
// Size: 0x58 (Inherited: 0x50)
struct UAnimCompress_Automatic : UAnimCompress {
	float *d7b3706a87; // 0x50(0x04)
	char *d3f514a708 : 1; // 0x54(0x01)
	char *85cd2fc7cf : 1; // 0x54(0x01)
	char *46c9ce3438 : 1; // 0x54(0x01)
	char *d254646ccf : 1; // 0x54(0x01)
	char *223ed4a3d1 : 1; // 0x54(0x01)
	char *600954dc9f : 1; // 0x54(0x01)
	char *03c9893596 : 1; // 0x54(0x01)
	char pad_54_7 : 1; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.AnimCompress_BitwiseCompressOnly
// Size: 0x50 (Inherited: 0x50)
struct UAnimCompress_BitwiseCompressOnly : UAnimCompress {
};

// Class Engine.AnimCompress_LeastDestructive
// Size: 0x50 (Inherited: 0x50)
struct UAnimCompress_LeastDestructive : UAnimCompress {
};

// Class Engine.AnimCompress_RemoveEverySecondKey
// Size: 0x58 (Inherited: 0x50)
struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32 *83d01e5fcb; // 0x50(0x04)
	char *a331c8c0ed : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.AnimCompress_RemoveLinearKeys
// Size: 0x70 (Inherited: 0x50)
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float *c14fa7b1ee; // 0x50(0x04)
	float *5813cddbdd; // 0x54(0x04)
	float *4d48aa5596; // 0x58(0x04)
	float *3b90f88db0; // 0x5c(0x04)
	float *42372c7c86; // 0x60(0x04)
	float *f64af338ca; // 0x64(0x04)
	float *e808aa3fb6; // 0x68(0x04)
	char *be773b7791 : 1; // 0x6c(0x01)
	char *2e931d4a2b : 1; // 0x6c(0x01)
	char pad_6C_2 : 6; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.AnimCompress_PerTrackCompression
// Size: 0xf0 (Inherited: 0x70)
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float *870cd19dbd; // 0x70(0x04)
	float *6e6c5feb28; // 0x74(0x04)
	float *988ab33e09; // 0x78(0x04)
	float *2dc46e36cf; // 0x7c(0x04)
	struct TArray<enum class AnimationCompressionFormat> *3dbfa29c5c; // 0x80(0x10)
	struct TArray<enum class AnimationCompressionFormat> *d4b8fba86b; // 0x90(0x10)
	struct TArray<enum class AnimationCompressionFormat> *f4100b5a40; // 0xa0(0x10)
	char bResampleAnimation : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float *765d184b4c; // 0xb4(0x04)
	int32 *3ee3dce5b1; // 0xb8(0x04)
	char *d9f7f24cc1 : 1; // 0xbc(0x01)
	char *8619cf6436 : 1; // 0xbc(0x01)
	char pad_BC_2 : 6; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	int32 *c1c4920d80; // 0xc0(0x04)
	float *9ea115adbe; // 0xc4(0x04)
	float *274386c7b7; // 0xc8(0x04)
	char *56ecfe3479 : 1; // 0xcc(0x01)
	char pad_CC_1 : 7; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float *a371f512e2; // 0xd0(0x04)
	float *582ed16713; // 0xd4(0x04)
	float *b1c3fe1c25; // 0xd8(0x04)
	float *242dbe76db; // 0xdc(0x04)
	float *cc475e81d0; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
// Size: 0x60 (Inherited: 0x50)
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float *c14fa7b1ee; // 0x50(0x04)
	float *5813cddbdd; // 0x54(0x04)
	float *4d48aa5596; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.*559e64016f
// Size: 0x3b8 (Inherited: 0x3a0)
struct U*559e64016f : UAnimInstance {
	struct UAnimationAsset* *f9193b4ce9; // 0x3a0(0x08)
	DelegateProperty *f5d52508c8; // 0x3a8(0x10)

	void *f4a952625d(); // Function Engine.*559e64016f.*f4a952625d // Final|Native|Public|BlueprintCallable // @ game+0x68106a8
	void *df5001ae95(); // Function Engine.*559e64016f.*df5001ae95 // Final|Native|Public|BlueprintCallable // @ game+0x681044c
	void SetPlayRate(); // Function Engine.*559e64016f.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x681010c
	void *c44bfe7db3(); // Function Engine.*559e64016f.*c44bfe7db3 // Final|Native|Public|BlueprintCallable // @ game+0x6810ed8
	void SetLooping(); // Function Engine.*559e64016f.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x680ed64
	void *6994a9b2f1(); // Function Engine.*559e64016f.*6994a9b2f1 // Final|Native|Public|BlueprintCallable // @ game+0x67feaa0
	void *9d6faa9657(); // Function Engine.*559e64016f.*9d6faa9657 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6810988
	void *77287b7822(); // Function Engine.*559e64016f.*77287b7822 // Final|Native|Public|BlueprintCallable // @ game+0x681bfb8
	void SetPosition(); // Function Engine.*559e64016f.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x68104e0
	void *34bdb257a2(); // Function Engine.*559e64016f.*34bdb257a2 // Native|Public|BlueprintCallable // @ game+0x68067f4
	void *1ab067b5fe(); // Function Engine.*559e64016f.*1ab067b5fe // Final|Native|Public|BlueprintCallable // @ game+0x67e74c4
	void *33f5eeb816(); // Function Engine.*559e64016f.*33f5eeb816 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68071d8
};

// Class Engine.*460f026d00
// Size: 0x30 (Inherited: 0x30)
struct U*460f026d00 : UObject {
};

// Class Engine.AnimNotify_PlaySound
// Size: 0x60 (Inherited: 0x40)
struct UAnimNotify_PlaySound : UAnimNotify {
	struct USoundBase* Sound; // 0x40(0x08)
	float VolumeMultiplier; // 0x48(0x04)
	float PitchMultiplier; // 0x4c(0x04)
	char bFollow : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FName AttachName; // 0x58(0x08)
};

// Class Engine.*12d27e31b4
// Size: 0x40 (Inherited: 0x40)
struct U*12d27e31b4 : UAnimNotify {
};

// Class Engine.*fd55961460
// Size: 0x38 (Inherited: 0x38)
struct U*fd55961460 : UAnimNotifyState {
};

// Class Engine.AnimNotifyState_TimedParticleEffect
// Size: 0x68 (Inherited: 0x38)
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FName SocketName; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	bool bDestroyAtEnd; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.AnimNotifyState_Trail
// Size: 0x68 (Inherited: 0x38)
struct UAnimNotifyState_Trail : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FName FirstSocketName; // 0x40(0x08)
	struct FName SecondSocketName; // 0x48(0x08)
	enum class *7c7293e9c8 WidthScaleMode; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FName WidthScaleCurve; // 0x58(0x08)
	char bRecycleSpawnedSystems : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	void OverridePSTemplate(); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate // Event|Public|BlueprintEvent|Const // @ game+0x22ddc4
};

// Class Engine.AnimSet
// Size: 0xf8 (Inherited: 0x30)
struct UAnimSet : UObject {
	char *0d245a1407 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FName> *3e22d1a080; // 0x38(0x10)
	struct TArray<struct F*04c2f29f5d> *982bb84834; // 0x48(0x10)
	struct TArray<bool> *79f6901398; // 0x58(0x10)
	struct TArray<bool> *8333017942; // 0x68(0x10)
	struct TArray<struct FName> *5c3db89f0b; // 0x78(0x10)
	struct TArray<struct FName> *bf851a2748; // 0x88(0x10)
	struct FName *50a2bc3395; // 0x98(0x08)
	struct FName *1a9705dabb; // 0xa0(0x08)
	char pad_A8[0x50]; // 0xa8(0x50)
};

// Class Engine.AssetImportData
// Size: 0x30 (Inherited: 0x30)
struct UAssetImportData : UObject {
};

// Class Engine.AssetManager
// Size: 0x3a8 (Inherited: 0x30)
struct UAssetManager : UObject {
	char pad_30[0x260]; // 0x30(0x260)
	struct TArray<struct UObject*> *80e9455ddf; // 0x290(0x10)
	bool *1b1c16c05f; // 0x2a0(0x01)
	bool *0a2563d751; // 0x2a1(0x01)
	bool *96b1a4a072; // 0x2a2(0x01)
	bool *a819758304; // 0x2a3(0x01)
	bool *19d9ebcfed; // 0x2a4(0x01)
	bool *2021e72610; // 0x2a5(0x01)
	bool *ec35153584; // 0x2a6(0x01)
	char pad_2A7[0x101]; // 0x2a7(0x101)
};

// Class Engine.AssetMappingTable
// Size: 0x40 (Inherited: 0x30)
struct UAssetMappingTable : UObject {
	struct TArray<struct F*cf68db82ff> *9fadd2535a; // 0x30(0x10)
};

// Class Engine.AutomationTestSettings
// Size: 0x328 (Inherited: 0x30)
struct UAutomationTestSettings : UObject {
	struct TArray<struct FString> EngineTestModules; // 0x30(0x10)
	struct TArray<struct FString> EditorTestModules; // 0x40(0x10)
	struct FStringAssetReference AutomationTestmap; // 0x50(0x10)
	struct TArray<struct F*8c7469d46d> EditorPerformanceTestMaps; // 0x60(0x10)
	struct TArray<struct FStringAssetReference> AssetsToOpen; // 0x70(0x10)
	struct F*db82af7711 BuildPromotionTest; // 0x80(0x1f0)
	struct F*c6045635b7 MaterialEditorPromotionTest; // 0x270(0x30)
	struct F*fba027fbea ParticleEditorPromotionTest; // 0x2a0(0x10)
	struct F*843ed1145e BlueprintEditorPromotionTest; // 0x2b0(0x30)
	struct TArray<struct FString> TestLevelFolders; // 0x2e0(0x10)
	struct TArray<struct F*7fe8ecb7f7> ExternalTools; // 0x2f0(0x10)
	struct TArray<struct F*c115a4f143> ImportExportTestDefinitions; // 0x300(0x10)
	struct TArray<struct F*60c520701f> LaunchOnSettings; // 0x310(0x10)
	struct FIntPoint DefaultScreenshotResolution; // 0x320(0x08)
};

// Class Engine.AvoidanceManager
// Size: 0xe8 (Inherited: 0x30)
struct UAvoidanceManager : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	float DefaultTimeToLive; // 0x38(0x04)
	float LockTimeAfterAvoid; // 0x3c(0x04)
	float LockTimeAfterClean; // 0x40(0x04)
	float DeltaTimeToPredict; // 0x44(0x04)
	float ArtificialRadiusExpansion; // 0x48(0x04)
	float TestHeightDifference; // 0x4c(0x04)
	float HeightCheckMargin; // 0x50(0x04)
	char pad_54[0x94]; // 0x54(0x94)

	void *f810028411(); // Function Engine.AvoidanceManager.*f810028411 // Final|Native|Public|BlueprintCallable // @ game+0x68031fc
	void *da036e80eb(); // Function Engine.AvoidanceManager.*da036e80eb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67e2114
	void *46b2345596(); // Function Engine.AvoidanceManager.*46b2345596 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67e223c
	void *16debf4022(); // Function Engine.AvoidanceManager.*16debf4022 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67e22ec
	void *3313048d73(); // Function Engine.AvoidanceManager.*3313048d73 // Final|Native|Public|BlueprintCallable // @ game+0x67e82b8
	void *bab82256dd(); // Function Engine.AvoidanceManager.*bab82256dd // Final|Native|Public|BlueprintCallable // @ game+0x67e811c
};

// Class Engine.BlendProfile
// Size: 0x50 (Inherited: 0x30)
struct UBlendProfile : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct USkeleton* *09bab62682; // 0x38(0x08)
	struct TArray<struct F*706cda68b7> *27b7e873f4; // 0x40(0x10)
};

// Class Engine.BlueprintCore
// Size: 0x58 (Inherited: 0x30)
struct UBlueprintCore : UObject {
	struct UClass* *0c3b5e225a; // 0x30(0x08)
	struct UClass* GeneratedClass; // 0x38(0x08)
	bool *c05171fa02; // 0x40(0x01)
	bool *f90b5ecb2b; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	struct FGuid *cd7b464eda; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.Blueprint
// Size: 0x1a0 (Inherited: 0x58)
struct UBlueprint : UBlueprintCore {
	char bRecompileOnLoad : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UClass* ParentClass; // 0x60(0x08)
	struct UObject* *dc844bd7af; // 0x68(0x08)
	char *7285e5f110 : 1; // 0x70(0x01)
	char *cab1411839 : 1; // 0x70(0x01)
	char pad_70_2 : 6; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x78(0x08)
	struct TArray<struct UActorComponent*> *9ef71c20e3; // 0x80(0x10)
	struct TArray<struct U*a7a0563fde*> *259f597d99; // 0x90(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0xa0(0x08)
	enum class EBlueprintType BlueprintType; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32 *d085bc18a1; // 0xac(0x04)
	char pad_B0[0xe0]; // 0xb0(0xe0)
	bool bNativize; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)
};

// Class Engine.AnimBlueprint
// Size: 0x1c0 (Inherited: 0x1a0)
struct UAnimBlueprint : UBlueprint {
	struct USkeleton* TargetSkeleton; // 0x198(0x08)
	struct TArray<struct F*00a65185c9> Groups; // 0x1a0(0x10)
	bool *b16fe671be; // 0x1b0(0x01)
	bool *ce51a937f1; // 0x1b1(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
};

// Class Engine.LevelScriptBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct ULevelScriptBlueprint : UBlueprint {
};

// Class Engine.*f74249eacd
// Size: 0x30 (Inherited: 0x30)
struct U*f74249eacd : UBlueprintFunctionLibrary {

	void *ed74625b52(); // Function Engine.*f74249eacd.*ed74625b52 // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67f94fc
	void *1ea68b38ad(); // Function Engine.*f74249eacd.*1ea68b38ad // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x67f93f0
	void *495a004f7c(); // Function Engine.*f74249eacd.*495a004f7c // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67f9720
	void *c5393df108(); // Function Engine.*f74249eacd.*c5393df108 // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67f9c2c
	void *a8350a16c1(); // Function Engine.*f74249eacd.*a8350a16c1 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x67f9d4c
	void *189231dc69(); // Function Engine.*f74249eacd.*189231dc69 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x67f90f4
	void *bc376f55b3(); // Function Engine.*f74249eacd.*bc376f55b3 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x67f9f6c
	void *aa40081227(); // Function Engine.*f74249eacd.*aa40081227 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x67f9a64
};

// Class Engine.*bdc40fd461
// Size: 0x38 (Inherited: 0x38)
struct U*bdc40fd461 : U*c5e4cb7a4d {
};

// Class Engine.*877a214e49
// Size: 0x38 (Inherited: 0x38)
struct U*877a214e49 : U*c5e4cb7a4d {
};

// Class Engine.*b2cdc39baa
// Size: 0x2a0 (Inherited: 0x1f0)
struct U*b2cdc39baa : UGameInstance {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate; // 0x1f0(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate; // 0x200(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x210(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x220(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate; // 0x230(0x10)
	struct FMulticastDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x240(0x10)
	struct FMulticastDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x250(0x10)
	struct FMulticastDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x260(0x10)
	struct FMulticastDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x270(0x10)
	struct FMulticastDelegate ApplicationReceivedLocalNotificationDelegate; // 0x280(0x10)
	struct FMulticastDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x290(0x10)

	void PlatformRegisteredForUserNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformRegisteredForUserNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void PlatformScreenOrientationChangedDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformScreenOrientationChangedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void PlatformReceivedRemoteNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformReceivedRemoteNotificationDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void PlatformReceivedLocalNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformReceivedLocalNotificationDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void PlatformDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
};

// Class Engine.*aca7435b3d
// Size: 0x30 (Inherited: 0x30)
struct U*aca7435b3d : UBlueprintFunctionLibrary {

	void ScheduleLocalNotificationAtTime(); // Function Engine.*aca7435b3d.ScheduleLocalNotificationAtTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68043bc
	void CancelLocalNotification(); // Function Engine.*aca7435b3d.CancelLocalNotification // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d33cc
	void ClearAllLocalNotifications(); // Function Engine.*aca7435b3d.ClearAllLocalNotifications // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d6128
	void *0880dc61b3(); // Function Engine.*aca7435b3d.*0880dc61b3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x68046f8
	void GetLaunchNotification(); // Function Engine.*aca7435b3d.GetLaunchNotification // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67e723c
};

// Class Engine.*c7f4dd461b
// Size: 0x30 (Inherited: 0x30)
struct U*c7f4dd461b : UBlueprintFunctionLibrary {

	void *e5e891c3b6(); // Function Engine.*c7f4dd461b.*e5e891c3b6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x68166d4
	void *a7aacfde72(); // Function Engine.*c7f4dd461b.*a7aacfde72 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x681650c
	void *cc531226df(); // Function Engine.*c7f4dd461b.*cc531226df // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x68157b0
	void *e791192a4f(); // Function Engine.*c7f4dd461b.*e791192a4f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6815ca4
	void *c3a5ef075e(); // Function Engine.*c7f4dd461b.*c3a5ef075e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6815f38
	void *f0c1d980f3(); // Function Engine.*c7f4dd461b.*f0c1d980f3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6815a84
	void *0e304d940e(); // Function Engine.*c7f4dd461b.*0e304d940e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6815978
	void *87a364c371(); // Function Engine.*c7f4dd461b.*87a364c371 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6815590
	void *bcb822dcf7(); // Function Engine.*c7f4dd461b.*bcb822dcf7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x68162ec
	void *dc90f1e06f(); // Function Engine.*c7f4dd461b.*dc90f1e06f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x681689c
	void *aabfa561d1(); // Function Engine.*c7f4dd461b.*aabfa561d1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x68161cc
};

// Class Engine.*7e2f3c2c81
// Size: 0x30 (Inherited: 0x30)
struct U*7e2f3c2c81 : UBlueprintFunctionLibrary {

	void *cbf609da44(); // Function Engine.*7e2f3c2c81.*cbf609da44 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67e3e1c
	void *3605df5b27(); // Function Engine.*7e2f3c2c81.*3605df5b27 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67e39ec
	void *3c6df950aa(); // Function Engine.*7e2f3c2c81.*3c6df950aa // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67de530
};

// Class Engine.*f416fdb428
// Size: 0x30 (Inherited: 0x30)
struct U*f416fdb428 : UBlueprintFunctionLibrary {
};

// Class Engine.CollisionProfile
// Size: 0x160 (Inherited: 0x40)
struct UCollisionProfile : U*5cde8540b3 {
	struct TArray<struct F*c681dac543> Profiles; // 0x40(0x10)
	struct TArray<struct F*14863ddeb2> DefaultChannelResponses; // 0x50(0x10)
	struct TArray<struct FCustomProfile> EditProfiles; // 0x60(0x10)
	struct TArray<struct FRedirector> ProfileRedirects; // 0x70(0x10)
	struct TArray<struct FRedirector> CollisionChannelRedirects; // 0x80(0x10)
	char pad_90[0xd0]; // 0x90(0xd0)
};

// Class Engine.KismetSystemLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetSystemLibrary : UBlueprintFunctionLibrary {

	void *5f97fb83b3(); // Function Engine.KismetSystemLibrary.*5f97fb83b3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f24b4
	void CapsuleTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d55a8
	void *a76f3ccea8(); // Function Engine.KismetSystemLibrary.*a76f3ccea8 // Final|Native|Static|Public|BlueprintCallable // @ game+0xbdbb4c
	void GetActorBounds(); // Function Engine.KismetSystemLibrary.GetActorBounds // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e13d0
	void *f4bfbf2937(); // Function Engine.KismetSystemLibrary.*f4bfbf2937 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e86d0
	void *00daf7120b(); // Function Engine.KismetSystemLibrary.*00daf7120b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67e1514
	void StackTrace(); // Function Engine.KismetSystemLibrary.StackTrace // Final|Native|Static|Public|BlueprintCallable // @ game+0x681bf3c
	void *e9d43deb86(); // Function Engine.KismetSystemLibrary.*e9d43deb86 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67f64b8
	void *4b9acd1d36(); // Function Engine.KismetSystemLibrary.*4b9acd1d36 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc802bc
	void DrawDebugCone(); // Function Engine.KismetSystemLibrary.DrawDebugCone // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67dbec0
	void *c3bf315f4d(); // Function Engine.KismetSystemLibrary.*c3bf315f4d // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xba3360
	void *c03b602908(); // Function Engine.KismetSystemLibrary.*c03b602908 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f22ec
	void SphereTraceMulti(); // Function Engine.KismetSystemLibrary.SphereTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x681a020
	void *28af987609(); // Function Engine.KismetSystemLibrary.*28af987609 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f2f38
	void ShowAdBanner(); // Function Engine.KismetSystemLibrary.ShowAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x6816b30
	void *ab41c00eb9(); // Function Engine.KismetSystemLibrary.*ab41c00eb9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f25f4
	void Delay(); // Function Engine.KismetSystemLibrary.Delay // Final|Native|Static|Public|BlueprintCallable // @ game+0x91d174
	void *ea5c4d3fb1(); // Function Engine.KismetSystemLibrary.*ea5c4d3fb1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f3238
	void CapsuleTraceMulti(); // Function Engine.KismetSystemLibrary.CapsuleTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d3b40
	void BoxOverlapActors(); // Function Engine.KismetSystemLibrary.BoxOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67cf4cc
	void CapsuleTraceSingle(); // Function Engine.KismetSystemLibrary.CapsuleTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d4b0c
	void LineTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.LineTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67f5d10
	void LineTraceMulti(); // Function Engine.KismetSystemLibrary.LineTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67f45ec
	void *08d13f988e(); // Function Engine.KismetSystemLibrary.*08d13f988e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67db048
	void *c40106440f(); // Function Engine.KismetSystemLibrary.*c40106440f // Final|Native|Static|Public|BlueprintCallable // @ game+0x59bccf4
	void ComponentOverlapActors(); // Function Engine.KismetSystemLibrary.ComponentOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d66d8
	void BoxTraceMulti(); // Function Engine.KismetSystemLibrary.BoxTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67cfb1c
	void *e5846861cd(); // Function Engine.KismetSystemLibrary.*e5846861cd // Final|Native|Static|Public|BlueprintCallable // @ game+0x67de794
	void *dc3dd43e5e(); // Function Engine.KismetSystemLibrary.*dc3dd43e5e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6809048
	void *c2f9a78d99(); // Function Engine.KismetSystemLibrary.*c2f9a78d99 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67e764c
	void *1e925dde31(); // Function Engine.KismetSystemLibrary.*1e925dde31 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67dd18c
	void *5f82bcc50e(); // Function Engine.KismetSystemLibrary.*5f82bcc50e // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f2840
	void *634ac41f0d(); // Function Engine.KismetSystemLibrary.*634ac41f0d // Final|Native|Static|Public|BlueprintCallable // @ game+0x67e921c
	void *9c69dd1176(); // Function Engine.KismetSystemLibrary.*9c69dd1176 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f79c0
	void *7c527169ea(); // Function Engine.KismetSystemLibrary.*7c527169ea // Final|Native|Static|Public|BlueprintCallable // @ game+0x6807c34
	void *35ae0f32e6(); // Function Engine.KismetSystemLibrary.*35ae0f32e6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f0bc4
	void *9612ce98a7(); // Function Engine.KismetSystemLibrary.*9612ce98a7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e2efc
	void *072f9250da(); // Function Engine.KismetSystemLibrary.*072f9250da // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f1874
	void IsValid(); // Function Engine.KismetSystemLibrary.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x92d1f4
	void SphereOverlapActors(); // Function Engine.KismetSystemLibrary.SphereOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6819a00
	void *93dfeaef1f(); // Function Engine.KismetSystemLibrary.*93dfeaef1f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f350c
	void *868665a09c(); // Function Engine.KismetSystemLibrary.*868665a09c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x680f3c4
	void *def39ba02c(); // Function Engine.KismetSystemLibrary.*def39ba02c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6806e40
	void K2_SetTimer(); // Function Engine.KismetSystemLibrary.K2_SetTimer // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f2c10
	void *613934c498(); // Function Engine.KismetSystemLibrary.*613934c498 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f32dc
	void HideAdBanner(); // Function Engine.KismetSystemLibrary.HideAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x67ef338
	void PrintString(); // Function Engine.KismetSystemLibrary.PrintString // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6f2e64
	void SphereOverlapComponents(); // Function Engine.KismetSystemLibrary.SphereOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6819d10
	void *61c1a0a336(); // Function Engine.KismetSystemLibrary.*61c1a0a336 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67dbec0
	void *d86f410eae(); // Function Engine.KismetSystemLibrary.*d86f410eae // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67f2118
	void *a582da620b(); // Function Engine.KismetSystemLibrary.*a582da620b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f12cc
	void *349aa47a59(); // Function Engine.KismetSystemLibrary.*349aa47a59 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f26a8
	void *f80184ccc9(); // Function Engine.KismetSystemLibrary.*f80184ccc9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x59ee978
	void *1b2e840646(); // Function Engine.KismetSystemLibrary.*1b2e840646 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6808b70
	void *277a23b44d(); // Function Engine.KismetSystemLibrary.*277a23b44d // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f17d0
	void *82dc2642d8(); // Function Engine.KismetSystemLibrary.*82dc2642d8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc33204
	void DrawDebugPlane(); // Function Engine.KismetSystemLibrary.DrawDebugPlane // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67dce2c
	void *3b3e519c49(); // Function Engine.KismetSystemLibrary.*3b3e519c49 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d66c4
	void *bee29fc1fc(); // Function Engine.KismetSystemLibrary.*bee29fc1fc // Final|Native|Static|Public|BlueprintCallable // @ game+0x9b3f08
	void *e43cc68dbd(); // Function Engine.KismetSystemLibrary.*e43cc68dbd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e16a8
	void *a2ddc3c904(); // Function Engine.KismetSystemLibrary.*a2ddc3c904 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f6a04
	void *4b845ed0df(); // Function Engine.KismetSystemLibrary.*4b845ed0df // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68110a4
	void *c466bdb516(); // Function Engine.KismetSystemLibrary.*c466bdb516 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f0900
	void *568b866418(); // Function Engine.KismetSystemLibrary.*568b866418 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f1e44
	void LineTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.LineTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67f4f00
	void *d19f30e36a(); // Function Engine.KismetSystemLibrary.*d19f30e36a // Final|Native|Static|Public|BlueprintCallable // @ game+0x5a0769c
	void *b6a74a4b69(); // Function Engine.KismetSystemLibrary.*b6a74a4b69 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e97e4
	void *b1f1a4d484(); // Function Engine.KismetSystemLibrary.*b1f1a4d484 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d7e5c
	void SphereTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.SphereTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x681a4f8
	void GetPathName(); // Function Engine.KismetSystemLibrary.GetPathName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e8598
	void LaunchURL(); // Function Engine.KismetSystemLibrary.LaunchURL // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f397c
	void *2307c87c8a(); // Function Engine.KismetSystemLibrary.*2307c87c8a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e50e4
	void SphereTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.SphereTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x681a9d4
	void CapsuleTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d4070
	void BoxTraceSingle(); // Function Engine.KismetSystemLibrary.BoxTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d0b50
	void *7299c8c140(); // Function Engine.KismetSystemLibrary.*7299c8c140 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f7938
	void *305f8bd094(); // Function Engine.KismetSystemLibrary.*305f8bd094 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f21ac
	void FlushPersistentDebugLines(); // Function Engine.KismetSystemLibrary.FlushPersistentDebugLines // Final|Native|Static|Public|BlueprintCallable // @ game+0x59bccf4
	void *d1c38f5fe8(); // Function Engine.KismetSystemLibrary.*d1c38f5fe8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f78b0
	void *25fe8acdec(); // Function Engine.KismetSystemLibrary.*25fe8acdec // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67dca70
	void ForceCloseAdBanner(); // Function Engine.KismetSystemLibrary.ForceCloseAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x67e0bcc
	void CapsuleOverlapComponents(); // Function Engine.KismetSystemLibrary.CapsuleOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d37e4
	void *ad6b63ab28(); // Function Engine.KismetSystemLibrary.*ad6b63ab28 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f1b70
	void *d8f9ee0bf3(); // Function Engine.KismetSystemLibrary.*d8f9ee0bf3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e307c
	void OnAssetClassLoaded__DelegateSignature(); // DelegateFunction Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void *26a7c89898(); // Function Engine.KismetSystemLibrary.*26a7c89898 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d3304
	void *ebd6faf623(); // Function Engine.KismetSystemLibrary.*ebd6faf623 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f1cb4
	void *1c4a55921c(); // Function Engine.KismetSystemLibrary.*1c4a55921c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x680d7b0
	void *fb24ceb92a(); // Function Engine.KismetSystemLibrary.*fb24ceb92a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x680e0d8
	void GetDisplayName(); // Function Engine.KismetSystemLibrary.GetDisplayName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e493c
	void *c2b148057c(); // Function Engine.KismetSystemLibrary.*c2b148057c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x68140ec
	void *d272b0364d(); // Function Engine.KismetSystemLibrary.*d272b0364d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ec908
	void LineTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.LineTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67f5860
	void SphereTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.SphereTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x681b3d0
	void *6d080f73a9(); // Function Engine.KismetSystemLibrary.*6d080f73a9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67db868
	void *d6657933d6(); // Function Engine.KismetSystemLibrary.*d6657933d6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6809048
	void *b69cd95e58(); // Function Engine.KismetSystemLibrary.*b69cd95e58 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e43f0
	void *0b12886cad(); // Function Engine.KismetSystemLibrary.*0b12886cad // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e4db4
	void *d495353d7e(); // Function Engine.KismetSystemLibrary.*d495353d7e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f1374
	void *b969039197(); // Function Engine.KismetSystemLibrary.*b969039197 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x59ee978
	void LineTraceSingle(); // Function Engine.KismetSystemLibrary.LineTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67f53bc
	void *133bb8bda6(); // Function Engine.KismetSystemLibrary.*133bb8bda6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f2a24
	void *07c8e6d6aa(); // Function Engine.KismetSystemLibrary.*07c8e6d6aa // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6813afc
	void *c2c140fa10(); // Function Engine.KismetSystemLibrary.*c2c140fa10 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f2fec
	void *60cfa58660(); // Function Engine.KismetSystemLibrary.*60cfa58660 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67e2ff4
	void BoxTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.BoxTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d1614
	void *7fdf49fa35(); // Function Engine.KismetSystemLibrary.*7fdf49fa35 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67db978
	void *b84934edb6(); // Function Engine.KismetSystemLibrary.*b84934edb6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67e336c
	void *43138a2bf4(); // Function Engine.KismetSystemLibrary.*43138a2bf4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67db654
	void *85e234444b(); // Function Engine.KismetSystemLibrary.*85e234444b // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67dd000
	void *c79793151c(); // Function Engine.KismetSystemLibrary.*c79793151c // Final|Native|Static|Public|BlueprintCallable // @ game+0x680822c
	void *af8e796534(); // Function Engine.KismetSystemLibrary.*af8e796534 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f0984
	void *1eb7592ed9(); // Function Engine.KismetSystemLibrary.*1eb7592ed9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67dbbd4
	void *f2ab1e1145(); // Function Engine.KismetSystemLibrary.*f2ab1e1145 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f203c
	void ShowPlatformSpecificLeaderboardScreen(); // Function Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen // Final|Native|Static|Public|BlueprintCallable // @ game+0x6816e24
	void *ed3d0c20fb(); // Function Engine.KismetSystemLibrary.*ed3d0c20fb // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f1690
	void *612d3142c4(); // Function Engine.KismetSystemLibrary.*612d3142c4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f0ce0
	void *24fcb76bb1(); // Function Engine.KismetSystemLibrary.*24fcb76bb1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67db43c
	void *c41b60b5f8(); // Function Engine.KismetSystemLibrary.*c41b60b5f8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67dc378
	void *2fdee92cab(); // Function Engine.KismetSystemLibrary.*2fdee92cab // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f2980
	void *c646e1c3cf(); // Function Engine.KismetSystemLibrary.*c646e1c3cf // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67dc5d4
	void CapsuleTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d505c
	void LineTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.LineTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67f4a70
	void *7e73bd44f2(); // Function Engine.KismetSystemLibrary.*7e73bd44f2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6801478
	void *9deefce573(); // Function Engine.KismetSystemLibrary.*9deefce573 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e97c0
	void *b5a8b0aa8e(); // Function Engine.KismetSystemLibrary.*b5a8b0aa8e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6815010
	void *c2b57039cc(); // Function Engine.KismetSystemLibrary.*c2b57039cc // Final|Native|Static|Public|BlueprintCallable // @ game+0x5a0769c
	void CapsuleOverlapActors(); // Function Engine.KismetSystemLibrary.CapsuleOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d3488
	void *75fa4142da(); // Function Engine.KismetSystemLibrary.*75fa4142da // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f30f8
	void BoxTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.BoxTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d0084
	void *950aebd5a6(); // Function Engine.KismetSystemLibrary.*950aebd5a6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e4be0
	void *508ece64fe(); // Function Engine.KismetSystemLibrary.*508ece64fe // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f1f88
	void *3facbce4bb(); // Function Engine.KismetSystemLibrary.*3facbce4bb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e7ee0
	void *eeef46f219(); // Function Engine.KismetSystemLibrary.*eeef46f219 // Final|Native|Static|Public|BlueprintCallable // @ game+0xbdbb4c
	void *e05ca9c84f(); // Function Engine.KismetSystemLibrary.*e05ca9c84f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6814478
	void *b885a1a61e(); // Function Engine.KismetSystemLibrary.*b885a1a61e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x92d1f4
	void BoxTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.BoxTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d10b4
	void *ab753c618b(); // Function Engine.KismetSystemLibrary.*ab753c618b // Final|Native|Static|Public|BlueprintCallable // @ game+0x6816da4
	void *e580ff6bbd(); // Function Engine.KismetSystemLibrary.*e580ff6bbd // Final|Native|Static|Public|BlueprintCallable // @ game+0x67e764c
	void *1e4fef9c05(); // Function Engine.KismetSystemLibrary.*1e4fef9c05 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6800bbc
	void *037667f05c(); // Function Engine.KismetSystemLibrary.*037667f05c // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f0c0c
	void *2f270ef953(); // Function Engine.KismetSystemLibrary.*2f270ef953 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f7b00
	void *6351b05cb4(); // Function Engine.KismetSystemLibrary.*6351b05cb4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67fb93c
	void *0b58bf0dfb(); // Function Engine.KismetSystemLibrary.*0b58bf0dfb // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67eb064
	void *e532087e06(); // Function Engine.KismetSystemLibrary.*e532087e06 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67dcc5c
	void PrintWarning(); // Function Engine.KismetSystemLibrary.PrintWarning // Final|Native|Static|Public|BlueprintCallable // @ game+0x5a260f8
	void BoxOverlapComponents(); // Function Engine.KismetSystemLibrary.BoxOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67cf7f4
	void *12989913ef(); // Function Engine.KismetSystemLibrary.*12989913ef // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67dc1a8
	void *236477e897(); // Function Engine.KismetSystemLibrary.*236477e897 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e421c
	void *5aa3ffdd4e(); // Function Engine.KismetSystemLibrary.*5aa3ffdd4e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e4f58
	void CapsuleTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d459c
	void *462fe6d88c(); // Function Engine.KismetSystemLibrary.*462fe6d88c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f27bc
	void *7d37c177a2(); // Function Engine.KismetSystemLibrary.*7d37c177a2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x7893ac
	void *c394d1aad0(); // Function Engine.KismetSystemLibrary.*c394d1aad0 // Final|Native|Static|Public|BlueprintCallable // @ game+0xbc86bc
	void *6f84fde289(); // Function Engine.KismetSystemLibrary.*6f84fde289 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67f66cc
	void *dcc1980474(); // Function Engine.KismetSystemLibrary.*dcc1980474 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f1d68
	void *fb9bdb1370(); // Function Engine.KismetSystemLibrary.*fb9bdb1370 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67d78c0
	void *2925421f0b(); // Function Engine.KismetSystemLibrary.*2925421f0b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67d77c0
	void *7dbc45b509(); // Function Engine.KismetSystemLibrary.*7dbc45b509 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6816c20
	void *a5f344afee(); // Function Engine.KismetSystemLibrary.*a5f344afee // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67dc7f8
	void *aa28a08d11(); // Function Engine.KismetSystemLibrary.*aa28a08d11 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6803d10
	void ComponentOverlapComponents(); // Function Engine.KismetSystemLibrary.ComponentOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d69f0
	void *c03ad31ee0(); // Function Engine.KismetSystemLibrary.*c03ad31ee0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680d424
	void SetSuppressViewportTransitionMessage(); // Function Engine.KismetSystemLibrary.SetSuppressViewportTransitionMessage // Final|Native|Static|Public|BlueprintCallable // @ game+0x6812f10
	void SphereTraceSingle(); // Function Engine.KismetSystemLibrary.SphereTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x681aed8
	void *0bafecc074(); // Function Engine.KismetSystemLibrary.*0bafecc074 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f23a0
	void *ac40871bbb(); // Function Engine.KismetSystemLibrary.*ac40871bbb // Final|Native|Static|Public|BlueprintCallable // @ game+0x5a0769c
	void *f11d7f55bd(); // Function Engine.KismetSystemLibrary.*f11d7f55bd // Final|Native|Static|Public|BlueprintCallable // @ game+0x6812c04
	void *6fcec3ae2d(); // Function Engine.KismetSystemLibrary.*6fcec3ae2d // Final|Native|Static|Public|BlueprintCallable // @ game+0xb534c8
	void *5b6587162c(); // Function Engine.KismetSystemLibrary.*5b6587162c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67d86dc
	void *c01691c709(); // Function Engine.KismetSystemLibrary.*c01691c709 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e7f00
	void SphereTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.SphereTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x681b8c8
	void *65160b7861(); // Function Engine.KismetSystemLibrary.*65160b7861 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67dd3a4
	void OnAssetLoaded__DelegateSignature(); // DelegateFunction Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void *4feb5acdf5(); // Function Engine.KismetSystemLibrary.*4feb5acdf5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d8f34
	void *f4701d6df2(); // Function Engine.KismetSystemLibrary.*f4701d6df2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6806c5c
	void *2e1c5c341b(); // Function Engine.KismetSystemLibrary.*2e1c5c341b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67c8e90
	void BoxTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.BoxTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d05d8
	void *04ad5300ed(); // Function Engine.KismetSystemLibrary.*04ad5300ed // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f2df8
};

// Class Engine.GameplayStatics
// Size: 0x30 (Inherited: 0x30)
struct UGameplayStatics : UBlueprintFunctionLibrary {

	void *5afaa1a06e(); // Function Engine.GameplayStatics.*5afaa1a06e // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68172b4
	void *c5a1db358c(); // Function Engine.GameplayStatics.*c5a1db358c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ec9fc
	void *d413f47a37(); // Function Engine.GameplayStatics.*d413f47a37 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e4e38
	void *3fbd63f91e(); // Function Engine.GameplayStatics.*3fbd63f91e // Final|Native|Static|Public|BlueprintCallable // @ game+0x67e3744
	void BreakHitResult(); // Function Engine.GameplayStatics.BreakHitResult // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d2220
	void SpawnDecalAttached(); // Function Engine.GameplayStatics.SpawnDecalAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68174f4
	void *992cf63add(); // Function Engine.GameplayStatics.*992cf63add // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67fef04
	void *d1d2c3cdb1(); // Function Engine.GameplayStatics.*d1d2c3cdb1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e81fc
	void RemovePlayer(); // Function Engine.GameplayStatics.RemovePlayer // Final|Native|Static|Public|BlueprintCallable // @ game+0x6803698
	void LoadStreamLevel(); // Function Engine.GameplayStatics.LoadStreamLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f6a94
	void SetGlobalPitchModulation(); // Function Engine.GameplayStatics.SetGlobalPitchModulation // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x680c9ac
	void *00b1853672(); // Function Engine.GameplayStatics.*00b1853672 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67eed68
	void *9f27d92bf3(); // Function Engine.GameplayStatics.*9f27d92bf3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67cc43c
	void *94607664ef(); // Function Engine.GameplayStatics.*94607664ef // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68011c8
	void *a33ffb834f(); // Function Engine.GameplayStatics.*a33ffb834f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67cea70
	void *9a8bfdd896(); // Function Engine.GameplayStatics.*9a8bfdd896 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e6ef0
	void *d36e58e9f7(); // Function Engine.GameplayStatics.*d36e58e9f7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67cde38
	void *179b902ebb(); // Function Engine.GameplayStatics.*179b902ebb // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67ce210
	void SetSoundMixClassOverride(); // Function Engine.GameplayStatics.SetSoundMixClassOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x6811794
	void *70217398a8(); // Function Engine.GameplayStatics.*70217398a8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6817a78
	void *c014ef26c3(); // Function Engine.GameplayStatics.*c014ef26c3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67ff970
	void *9b77826041(); // Function Engine.GameplayStatics.*9b77826041 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6810378
	void GetPlayerCameraManager(); // Function Engine.GameplayStatics.GetPlayerCameraManager // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f4948
	void *f0ce07f5a2(); // Function Engine.GameplayStatics.*f0ce07f5a2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x30ac28
	void *333b8e1957(); // Function Engine.GameplayStatics.*333b8e1957 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6819218
	void *77a835324f(); // Function Engine.GameplayStatics.*77a835324f // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x681872c
	void *ad5b82f5bf(); // Function Engine.GameplayStatics.*ad5b82f5bf // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67fecb0
	void *88b2a9e36c(); // Function Engine.GameplayStatics.*88b2a9e36c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67e1850
	void *c5f57d0f1b(); // Function Engine.GameplayStatics.*c5f57d0f1b // Final|Native|Static|Public|BlueprintCallable // @ game+0x67e3608
	void *ac2abd9ff0(); // Function Engine.GameplayStatics.*ac2abd9ff0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e8888
	void *3580105ab6(); // Function Engine.GameplayStatics.*3580105ab6 // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67cbcd0
	void *ead89ecafd(); // Function Engine.GameplayStatics.*ead89ecafd // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x67cb0c8
	void *647238bc7b(); // Function Engine.GameplayStatics.*647238bc7b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67ff76c
	void *45533cccb5(); // Function Engine.GameplayStatics.*45533cccb5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67da4c0
	void SetGlobalListenerFocusParameters(); // Function Engine.GameplayStatics.SetGlobalListenerFocusParameters // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x680c6b0
	void *ea3aed2545(); // Function Engine.GameplayStatics.*ea3aed2545 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67ee32c
	void *0144b40e5c(); // Function Engine.GameplayStatics.*0144b40e5c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67e11f8
	void *35c53cbbcc(); // Function Engine.GameplayStatics.*35c53cbbcc // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67eda64
	void BeginSpawningActorFromBlueprint(); // Function Engine.GameplayStatics.BeginSpawningActorFromBlueprint // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67cda1c
	void SetBaseSoundMix(); // Function Engine.GameplayStatics.SetBaseSoundMix // Final|Native|Static|Public|BlueprintCallable // @ game+0x68070bc
	void *87c1b677ba(); // Function Engine.GameplayStatics.*87c1b677ba // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f49f4
	void *9e3fe43b91(); // Function Engine.GameplayStatics.*9e3fe43b91 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fe278
	void *6fa057fa54(); // Function Engine.GameplayStatics.*6fa057fa54 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67cc300
	void *5856106326(); // Function Engine.GameplayStatics.*5856106326 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67dd8a8
	void *a5b0b1cae8(); // Function Engine.GameplayStatics.*a5b0b1cae8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67f68e8
	void SetGlobalTimeDilation(); // Function Engine.GameplayStatics.SetGlobalTimeDilation // Final|Native|Static|Public|BlueprintCallable // @ game+0x680cac4
	void *7bbd51430b(); // Function Engine.GameplayStatics.*7bbd51430b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e2078
	void *1b7ba3bf44(); // Function Engine.GameplayStatics.*1b7ba3bf44 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6802fd0
	void *401ac167fa(); // Function Engine.GameplayStatics.*401ac167fa // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67d9320
	void *c2bfe8d9d6(); // Function Engine.GameplayStatics.*c2bfe8d9d6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67eaf88
	void *7af1304dd1(); // Function Engine.GameplayStatics.*7af1304dd1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d33b8
	void *558a663b68(); // Function Engine.GameplayStatics.*558a663b68 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68030dc
	void CreateSaveGameObject(); // Function Engine.GameplayStatics.CreateSaveGameObject // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d9200
	void *0e564e310c(); // Function Engine.GameplayStatics.*0e564e310c // Final|Native|Static|Public|BlueprintCallable // @ game+0x68041d4
	void ApplyRadialDamage(); // Function Engine.GameplayStatics.ApplyRadialDamage // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67cb910
	void MakeHitResult(); // Function Engine.GameplayStatics.MakeHitResult // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f732c
	void OpenLevel(); // Function Engine.GameplayStatics.OpenLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x67fdddc
	void Blueprint_PredictProjectilePath_ByObjectType(); // Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByObjectType // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67ce3dc
	void *96a6f73e52(); // Function Engine.GameplayStatics.*96a6f73e52 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ef0ac
	void *7021d57d9c(); // Function Engine.GameplayStatics.*7021d57d9c // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x68177d4
	void *79f7ae5739(); // Function Engine.GameplayStatics.*79f7ae5739 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67e8960
	void ClearSoundMixModifiers(); // Function Engine.GameplayStatics.ClearSoundMixModifiers // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d64c4
	void *f9164f4531(); // Function Engine.GameplayStatics.*f9164f4531 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f0a14
	void GetGameState(); // Function Engine.GameplayStatics.GetGameState // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e5054
	void *1f9f3644e2(); // Function Engine.GameplayStatics.*1f9f3644e2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67e4ca8
	void ClearSoundMixClassOverride(); // Function Engine.GameplayStatics.ClearSoundMixClassOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d635c
	void *e643ca30d7(); // Function Engine.GameplayStatics.*e643ca30d7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6818a5c
	void BeginSpawningActorFromClass(); // Function Engine.GameplayStatics.BeginSpawningActorFromClass // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67cdbec
	void *fca9a3beb2(); // Function Engine.GameplayStatics.*fca9a3beb2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6818e7c
	void *190d2baf31(); // Function Engine.GameplayStatics.*190d2baf31 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67df6e0
	void *85b384e233(); // Function Engine.GameplayStatics.*85b384e233 // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67cb65c
	void GetAllActorsOfClass(); // Function Engine.GameplayStatics.GetAllActorsOfClass // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67e16f0
	void SpawnSoundAttached(); // Function Engine.GameplayStatics.SpawnSoundAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x681958c
	void PushSoundMixModifier(); // Function Engine.GameplayStatics.PushSoundMixModifier // Final|Native|Static|Public|BlueprintCallable // @ game+0x6801354
	void *b54f1f2732(); // Function Engine.GameplayStatics.*b54f1f2732 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c8a64
	void *dfb943bf3c(); // Function Engine.GameplayStatics.*dfb943bf3c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67da604
	void *63a71c7c40(); // Function Engine.GameplayStatics.*63a71c7c40 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d9d9c
	void *fb00b49dcb(); // Function Engine.GameplayStatics.*fb00b49dcb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e5180
	void *c0af85369d(); // Function Engine.GameplayStatics.*c0af85369d // Final|Native|Static|Public|BlueprintCallable // @ game+0x67db120
	void *e1abc93e94(); // Function Engine.GameplayStatics.*e1abc93e94 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67e7080
	void *0b7be9cb63(); // Function Engine.GameplayStatics.*0b7be9cb63 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67eba78
	void *8144fc45bf(); // Function Engine.GameplayStatics.*8144fc45bf // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x681c8d0
	void *abc2022f64(); // Function Engine.GameplayStatics.*abc2022f64 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f48d4
	void SpawnEmitterAttached(); // Function Engine.GameplayStatics.SpawnEmitterAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68184b0
	void *4a7ba7a37b(); // Function Engine.GameplayStatics.*4a7ba7a37b // Final|Native|Static|Public|BlueprintCallable // @ game+0x67e0b4c
	void *b117919b62(); // Function Engine.GameplayStatics.*b117919b62 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6812e80
	void *a34d3c80d6(); // Function Engine.GameplayStatics.*a34d3c80d6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68151d8
	void *a251180348(); // Function Engine.GameplayStatics.*a251180348 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680c5a4
	void *e91a609c51(); // Function Engine.GameplayStatics.*e91a609c51 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68182dc
	void GetGameMode(); // Function Engine.GameplayStatics.GetGameMode // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e4ec8
	void *b0f4a74115(); // Function Engine.GameplayStatics.*b0f4a74115 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67ffc88
	void PopSoundMixModifier(); // Function Engine.GameplayStatics.PopSoundMixModifier // Final|Native|Static|Public|BlueprintCallable // @ game+0x6800a9c
	void *24a52cbbe3(); // Function Engine.GameplayStatics.*24a52cbbe3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e87b0
	void GetPlayerPawn(); // Function Engine.GameplayStatics.GetPlayerPawn // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e89f0
	void CreateSaveGameObjectFromBlueprint(); // Function Engine.GameplayStatics.CreateSaveGameObjectFromBlueprint // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d9290
	void *23221c5e42(); // Function Engine.GameplayStatics.*23221c5e42 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67e0fe4
	void *dd61ae6fa7(); // Function Engine.GameplayStatics.*dd61ae6fa7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67e19b0
	void *205c7027fa(); // Function Engine.GameplayStatics.*205c7027fa // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67e1124
	void *94ab00dafc(); // Function Engine.GameplayStatics.*94ab00dafc // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d90e0
	void *29c48ce1fe(); // Function Engine.GameplayStatics.*29c48ce1fe // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67eb128
	void *3e11163b4d(); // Function Engine.GameplayStatics.*3e11163b4d // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6818f58
	void FinishSpawningActor(); // Function Engine.GameplayStatics.FinishSpawningActor // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x488058
	void UnloadStreamLevel(); // Function Engine.GameplayStatics.UnloadStreamLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x681df20
	void SpawnDialogueAttached(); // Function Engine.GameplayStatics.SpawnDialogueAttached // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6817e2c
};

// Class Engine.HeadMountedDisplayFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void *8fa8cd4d49(); // Function Engine.HeadMountedDisplayFunctionLibrary.*8fa8cd4d49 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ebfb0
	void SetTrackingOrigin(); // Function Engine.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin // Final|Native|Static|Public|BlueprintCallable // @ game+0x6813a60
	void GetTrackingOrigin(); // Function Engine.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ebf6c
	void *972fcae67d(); // Function Engine.HeadMountedDisplayFunctionLibrary.*972fcae67d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e8ee8
	void *c28ef86eb0(); // Function Engine.HeadMountedDisplayFunctionLibrary.*c28ef86eb0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6815374
	void *7863519807(); // Function Engine.HeadMountedDisplayFunctionLibrary.*7863519807 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x95eea8
	void *4977cb5418(); // Function Engine.HeadMountedDisplayFunctionLibrary.*4977cb5418 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ea9fc
	void *0be9f4db29(); // Function Engine.HeadMountedDisplayFunctionLibrary.*0be9f4db29 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6808c88
	void *7eb9c26ce2(); // Function Engine.HeadMountedDisplayFunctionLibrary.*7eb9c26ce2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67edd94
	void *5694bf44fb(); // Function Engine.HeadMountedDisplayFunctionLibrary.*5694bf44fb // Final|Native|Static|Public|BlueprintCallable // @ game+0x6803ac4
	void *0cfde4413f(); // Function Engine.HeadMountedDisplayFunctionLibrary.*0cfde4413f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ef244
	void *009c73723b(); // Function Engine.HeadMountedDisplayFunctionLibrary.*009c73723b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67ed278
	void *1bf0839e2f(); // Function Engine.HeadMountedDisplayFunctionLibrary.*1bf0839e2f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f0b00
	void *286934936c(); // Function Engine.HeadMountedDisplayFunctionLibrary.*286934936c // Final|Native|Static|Public|BlueprintCallable // @ game+0x5a0769c
	void *58fd59bc9f(); // Function Engine.HeadMountedDisplayFunctionLibrary.*58fd59bc9f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f0ab8
	void *18e29d0e4b(); // Function Engine.HeadMountedDisplayFunctionLibrary.*18e29d0e4b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e82d4
	void *cc5bba383a(); // Function Engine.HeadMountedDisplayFunctionLibrary.*cc5bba383a // Final|Native|Static|Public|BlueprintCallable // @ game+0x67dd7c8
	void *ae295ad897(); // Function Engine.HeadMountedDisplayFunctionLibrary.*ae295ad897 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e81a0
	void *5372276f48(); // Function Engine.HeadMountedDisplayFunctionLibrary.*5372276f48 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e5228
};

// Class Engine.KismetArrayLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetArrayLibrary : UBlueprintFunctionLibrary {

	void *c5d91212fc(); // Function Engine.KismetArrayLibrary.*c5d91212fc // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67ccf84
	void *9440df1111(); // Function Engine.KismetArrayLibrary.*9440df1111 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67df0ac
	void *f20f2c2cc1(); // Function Engine.KismetArrayLibrary.*f20f2c2cc1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67cd1b0
	void *b7ba04f529(); // Function Engine.KismetArrayLibrary.*b7ba04f529 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67cd308
	void *c60d779ed0(); // Function Engine.KismetArrayLibrary.*c60d779ed0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xbd35d8
	void *402cf4f2fa(); // Function Engine.KismetArrayLibrary.*402cf4f2fa // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67ccd14
	void *d65f6385ec(); // Function Engine.KismetArrayLibrary.*d65f6385ec // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67cce2c
	void *8ba429c4af(); // Function Engine.KismetArrayLibrary.*8ba429c4af // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3a9a58
	void *c2f36b1a27(); // Function Engine.KismetArrayLibrary.*c2f36b1a27 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x68069bc
	void Array_Get(); // Function Engine.KismetArrayLibrary.Array_Get // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xc037fc
	void *897f433b5f(); // Function Engine.KismetArrayLibrary.*897f433b5f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb2be88
	void *88070336cf(); // Function Engine.KismetArrayLibrary.*88070336cf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67cc6cc
	void Array_Clear(); // Function Engine.KismetArrayLibrary.Array_Clear // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb824f0
	void Array_Add(); // Function Engine.KismetArrayLibrary.Array_Add // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb2c104
	void *2d1b847b80(); // Function Engine.KismetArrayLibrary.*2d1b847b80 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67cc464
	void *0d5665fae7(); // Function Engine.KismetArrayLibrary.*0d5665fae7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67ccba8
	void *b66e4984be(); // Function Engine.KismetArrayLibrary.*b66e4984be // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xc40efc
	void *b7d3964d0d(); // Function Engine.KismetArrayLibrary.*b7d3964d0d // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67cc8f8
};

// Class Engine.*2b72a7254e
// Size: 0x30 (Inherited: 0x30)
struct U*2b72a7254e : UBlueprintFunctionLibrary {

	void *df70cdae8e(); // Function Engine.*2b72a7254e.*df70cdae8e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f1598
	void *07e7b88d70(); // Function Engine.*2b72a7254e.*07e7b88d70 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fe428
	void *21e027f6b0(); // Function Engine.*2b72a7254e.*21e027f6b0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fce78
	void *9c32bb8c70(); // Function Engine.*2b72a7254e.*9c32bb8c70 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d82dc
	void *8febfffeda(); // Function Engine.*2b72a7254e.*8febfffeda // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67f00ac
	void *7f633e0384(); // Function Engine.*2b72a7254e.*7f633e0384 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67dda14
	void *453fe91a0a(); // Function Engine.*2b72a7254e.*453fe91a0a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fd6bc
};

// Class Engine.KismetInputLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetInputLibrary : UBlueprintFunctionLibrary {

	void *b5c49dc1ab(); // Function Engine.KismetInputLibrary.*b5c49dc1ab // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67efa18
	void *c402f0f392(); // Function Engine.KismetInputLibrary.*c402f0f392 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67f35a8
	void *dd383bbc7e(); // Function Engine.KismetInputLibrary.*dd383bbc7e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67dddb8
	void *26fe1af44e(); // Function Engine.KismetInputLibrary.*26fe1af44e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6800604
	void *bed7832f62(); // Function Engine.KismetInputLibrary.*bed7832f62 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67ef79c
	void *af0f557cc2(); // Function Engine.KismetInputLibrary.*af0f557cc2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6800420
	void *a9b19a37a8(); // Function Engine.KismetInputLibrary.*a9b19a37a8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67fffec
	void *931309a19b(); // Function Engine.KismetInputLibrary.*931309a19b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67effd8
	void *69ee6d3192(); // Function Engine.KismetInputLibrary.*69ee6d3192 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67efe30
	void *b0e5447186(); // Function Engine.KismetInputLibrary.*b0e5447186 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x68006f0
	void *a03841c806(); // Function Engine.KismetInputLibrary.*a03841c806 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67eff04
	void *60eabf2d67(); // Function Engine.KismetInputLibrary.*60eabf2d67 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67ef6c8
	void *ed2b88d5db(); // Function Engine.KismetInputLibrary.*ed2b88d5db // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67efd5c
	void *3df8b807c1(); // Function Engine.KismetInputLibrary.*3df8b807c1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67d7588
	void *41220c2474(); // Function Engine.KismetInputLibrary.*41220c2474 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x789308
	void *43422c657d(); // Function Engine.KismetInputLibrary.*43422c657d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67ef944
	void *147617f07e(); // Function Engine.KismetInputLibrary.*147617f07e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67ef5f4
	void *9643a5cc9a(); // Function Engine.KismetInputLibrary.*9643a5cc9a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67f34c4
	void *b452d96224(); // Function Engine.KismetInputLibrary.*b452d96224 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x680023c
	void *0d64b6c219(); // Function Engine.KismetInputLibrary.*0d64b6c219 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xb3a3bc
	void GetKey(); // Function Engine.KismetInputLibrary.GetKey // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb550ec
	void *4b93b192b5(); // Function Engine.KismetInputLibrary.*4b93b192b5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67e1b10
	void *d5bbae13bd(); // Function Engine.KismetInputLibrary.*d5bbae13bd // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d32cc
	void GetUserIndex(); // Function Engine.KismetInputLibrary.GetUserIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67ed15c
	void *f2f180697c(); // Function Engine.KismetInputLibrary.*f2f180697c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67efc88
	void *ec995526fd(); // Function Engine.KismetInputLibrary.*ec995526fd // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67ef870
	void *bf03a7f867(); // Function Engine.KismetInputLibrary.*bf03a7f867 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67f33e0
	void *2b94a29c6b(); // Function Engine.KismetInputLibrary.*2b94a29c6b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67efbbc
	void *237040ab9f(); // Function Engine.KismetInputLibrary.*237040ab9f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6800144
	void *95716a8398(); // Function Engine.KismetInputLibrary.*95716a8398 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67f36d0
	void *7b369a5fe7(); // Function Engine.KismetInputLibrary.*7b369a5fe7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67f3898
	void *e9fad926c3(); // Function Engine.KismetInputLibrary.*e9fad926c3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6800518
	void *b0248c7187(); // Function Engine.KismetInputLibrary.*b0248c7187 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67d74a8
	void *83f231e632(); // Function Engine.KismetInputLibrary.*83f231e632 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67d76e0
	void *e56c7738ad(); // Function Engine.KismetInputLibrary.*e56c7738ad // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ffef4
	void *ad08c2f2dc(); // Function Engine.KismetInputLibrary.*ad08c2f2dc // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6800334
	void *74ea6d7a4c(); // Function Engine.KismetInputLibrary.*74ea6d7a4c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6800880
	void *5ec77d74b6(); // Function Engine.KismetInputLibrary.*5ec77d74b6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67efaec
	void *86057783c3(); // Function Engine.KismetInputLibrary.*86057783c3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ddb44
	void *34951b1206(); // Function Engine.KismetInputLibrary.*34951b1206 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67f37b4
};

// Class Engine.KismetMaterialLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetMaterialLibrary : UBlueprintFunctionLibrary {

	void SetVectorParameterValue(); // Function Engine.KismetMaterialLibrary.SetVectorParameterValue // Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x681430c
	void GetVectorParameterValue(); // Function Engine.KismetMaterialLibrary.GetVectorParameterValue // Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67ed4e4
	void SetScalarParameterValue(); // Function Engine.KismetMaterialLibrary.SetScalarParameterValue // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x68111c4
	void GetScalarParameterValue(); // Function Engine.KismetMaterialLibrary.GetScalarParameterValue // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x67ea290
	void CreateDynamicMaterialInstance(); // Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x67d9004
};

// Class Engine.KismetMathLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetMathLibrary : UBlueprintFunctionLibrary {

	void *d326d1f6f0(); // Function Engine.KismetMathLibrary.*d326d1f6f0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681eac0
	void *c85db600d1(); // Function Engine.KismetMathLibrary.*c85db600d1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f3c20
	void RandomFloatFromStream(); // Function Engine.KismetMathLibrary.RandomFloatFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68023e8
	void MapRangeUnclamped(); // Function Engine.KismetMathLibrary.MapRangeUnclamped // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f8f20
	void *a78f36df7d(); // Function Engine.KismetMathLibrary.*a78f36df7d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681ec0c
	void *ff15f76fbb(); // Function Engine.KismetMathLibrary.*ff15f76fbb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x680402c
	void *e9697fa57a(); // Function Engine.KismetMathLibrary.*e9697fa57a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d8238
	void *85e37053b3(); // Function Engine.KismetMathLibrary.*85e37053b3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f6e34
	void Max(); // Function Engine.KismetMathLibrary.Max // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fa14c
	void *dbd35b3fe4(); // Function Engine.KismetMathLibrary.*dbd35b3fe4 // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67fadec
	void *56a8b1a1a0(); // Function Engine.KismetMathLibrary.*56a8b1a1a0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fbffc
	void *0af3fd3425(); // Function Engine.KismetMathLibrary.*0af3fd3425 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e84e4
	void DaysInYear(); // Function Engine.KismetMathLibrary.DaysInYear // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d9d04
	void RandomBoolFromStream(); // Function Engine.KismetMathLibrary.RandomBoolFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6802154
	void Log(); // Function Engine.KismetMathLibrary.Log // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f6d58
	void Atan(); // Function Engine.KismetMathLibrary.Atan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67cd5a0
	void *ed1abbb2c6(); // Function Engine.KismetMathLibrary.*ed1abbb2c6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67da428
	void InverseTransformLocation(); // Function Engine.KismetMathLibrary.InverseTransformLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f0264
	void *6710e594ae(); // Function Engine.KismetMathLibrary.*6710e594ae // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d9910
	void *68c164a352(); // Function Engine.KismetMathLibrary.*68c164a352 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67dd948
	void *e588ba1ed2(); // Function Engine.KismetMathLibrary.*e588ba1ed2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d7f74
	void MakeTimespan(); // Function Engine.KismetMathLibrary.MakeTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f8c70
	void *c22e42a3a5(); // Function Engine.KismetMathLibrary.*c22e42a3a5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f38f0
	void RandomUnitVector(); // Function Engine.KismetMathLibrary.RandomUnitVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6802c88
	void *0123ab6661(); // Function Engine.KismetMathLibrary.*0123ab6661 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6801ebc
	void FromSeconds(); // Function Engine.KismetMathLibrary.FromSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e0f48
	void *b0155f4f59(); // Function Engine.KismetMathLibrary.*b0155f4f59 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f6370
	void *6b58303b9e(); // Function Engine.KismetMathLibrary.*6b58303b9e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fd394
	void *0ada2a744d(); // Function Engine.KismetMathLibrary.*0ada2a744d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6804bb4
	void *9260abe7f9(); // Function Engine.KismetMathLibrary.*9260abe7f9 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68049f4
	void *9739756330(); // Function Engine.KismetMathLibrary.*9739756330 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fc97c
	void *dc35eaa6f4(); // Function Engine.KismetMathLibrary.*dc35eaa6f4 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb5d8cc
	void Conv_VectorToTransform(); // Function Engine.KismetMathLibrary.Conv_VectorToTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d8b2c
	void RandomIntegerInRangeFromStream(); // Function Engine.KismetMathLibrary.RandomIntegerInRangeFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68027fc
	void *d5469326b9(); // Function Engine.KismetMathLibrary.*d5469326b9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67df3fc
	void *d3464a2910(); // Function Engine.KismetMathLibrary.*d3464a2910 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681ce44
	void *2c1e214aa5(); // Function Engine.KismetMathLibrary.*2c1e214aa5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6802d70
	void *2d712baf25(); // Function Engine.KismetMathLibrary.*2d712baf25 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67c87e4
	void *72543cd47d(); // Function Engine.KismetMathLibrary.*72543cd47d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d6e1c
	void MakeDateTime(); // Function Engine.KismetMathLibrary.MakeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f70d4
	void *cbbf8b8a13(); // Function Engine.KismetMathLibrary.*cbbf8b8a13 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681e708
	void *30cb231df1(); // Function Engine.KismetMathLibrary.*30cb231df1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ed3a8
	void Round(); // Function Engine.KismetMathLibrary.Round // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6804130
	void *273e6a6b79(); // Function Engine.KismetMathLibrary.*273e6a6b79 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fbdb0
	void MakeTransform(); // Function Engine.KismetMathLibrary.MakeTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb42770
	void TEase(); // Function Engine.KismetMathLibrary.TEase // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681cb58
	void *3fb2c95058(); // Function Engine.KismetMathLibrary.*3fb2c95058 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f3dc0
	void *ff8b2aebc8(); // Function Engine.KismetMathLibrary.*ff8b2aebc8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d95d4
	void *3db18bd31d(); // Function Engine.KismetMathLibrary.*3db18bd31d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f7ec4
	void DaysInMonth(); // Function Engine.KismetMathLibrary.DaysInMonth // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d9c0c
	void *6d51f93134(); // Function Engine.KismetMathLibrary.*6d51f93134 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e7e4c
	void Dot_VectorVector(); // Function Engine.KismetMathLibrary.Dot_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67db340
	void *d65639d7e8(); // Function Engine.KismetMathLibrary.*d65639d7e8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x681c174
	void RandomFloat(); // Function Engine.KismetMathLibrary.RandomFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68023b0
	void MakeVector(); // Function Engine.KismetMathLibrary.MakeVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f3d74
	void MultiplyMultiply_FloatFloat(); // Function Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fbe48
	void BooleanOR(); // Function Engine.KismetMathLibrary.BooleanOR // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x8aa6bc
	void *0bbefccd3e(); // Function Engine.KismetMathLibrary.*0bbefccd3e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61bea00
	void *50d2643cc5(); // Function Engine.KismetMathLibrary.*50d2643cc5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67da388
	void *6d9598bf53(); // Function Engine.KismetMathLibrary.*6d9598bf53 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67da910
	void *58a526a7ed(); // Function Engine.KismetMathLibrary.*58a526a7ed // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fc874
	void *01938d0037(); // Function Engine.KismetMathLibrary.*01938d0037 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d8bf0
	void BreakDateTime(); // Function Engine.KismetMathLibrary.BreakDateTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d1f04
	void *53559178b1(); // Function Engine.KismetMathLibrary.*53559178b1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fe5b0
	void *917c13b33f(); // Function Engine.KismetMathLibrary.*917c13b33f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f3340
	void *fd702677e1(); // Function Engine.KismetMathLibrary.*fd702677e1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67de294
	void *7361dcd000(); // Function Engine.KismetMathLibrary.*7361dcd000 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6801d0c
	void *1b921ceaff(); // Function Engine.KismetMathLibrary.*1b921ceaff // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e244c
	void *6cdfc9b3b1(); // Function Engine.KismetMathLibrary.*6cdfc9b3b1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fd9ac
	void *179261048b(); // Function Engine.KismetMathLibrary.*179261048b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f4328
	void *750a680b2f(); // Function Engine.KismetMathLibrary.*750a680b2f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ee71c
	void *a8eee93482(); // Function Engine.KismetMathLibrary.*a8eee93482 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d9bf0
	void *a42291166c(); // Function Engine.KismetMathLibrary.*a42291166c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fe860
	void *b01d990afd(); // Function Engine.KismetMathLibrary.*b01d990afd // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681d368
	void GetTotalMinutes(); // Function Engine.KismetMathLibrary.GetTotalMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ebe3c
	void *2532952b5e(); // Function Engine.KismetMathLibrary.*2532952b5e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67faa3c
	void *c987f41393(); // Function Engine.KismetMathLibrary.*c987f41393 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ee57c
	void *5924b28c1f(); // Function Engine.KismetMathLibrary.*5924b28c1f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67eeae8
	void *fcbea5a675(); // Function Engine.KismetMathLibrary.*fcbea5a675 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d5e5c
	void GetYear(); // Function Engine.KismetMathLibrary.GetYear // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ede24
	void *1ab0050491(); // Function Engine.KismetMathLibrary.*1ab0050491 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6801840
	void *4bae256033(); // Function Engine.KismetMathLibrary.*4bae256033 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f85c0
	void *b4897e1a67(); // Function Engine.KismetMathLibrary.*b4897e1a67 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67eb50c
	void *6341fe8e68(); // Function Engine.KismetMathLibrary.*6341fe8e68 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67da0ac
	void *12755b228c(); // Function Engine.KismetMathLibrary.*12755b228c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x99588c
	void *7fcf3786e0(); // Function Engine.KismetMathLibrary.*7fcf3786e0 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x680504c
	void *b811cd1f68(); // Function Engine.KismetMathLibrary.*b811cd1f68 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e07a0
	void *6a718aa94c(); // Function Engine.KismetMathLibrary.*6a718aa94c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67dfbf0
	void *96e30e05ff(); // Function Engine.KismetMathLibrary.*96e30e05ff // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ca868
	void *e1c16bbb58(); // Function Engine.KismetMathLibrary.*e1c16bbb58 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6816ee4
	void *b2bbe8df8c(); // Function Engine.KismetMathLibrary.*b2bbe8df8c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d8820
	void *d0d0f36bfb(); // Function Engine.KismetMathLibrary.*d0d0f36bfb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67cd638
	void *6dd4226031(); // Function Engine.KismetMathLibrary.*6dd4226031 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d89c0
	void FromDays(); // Function Engine.KismetMathLibrary.FromDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e0cd0
	void *0e17f6ccbd(); // Function Engine.KismetMathLibrary.*0e17f6ccbd // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fc4c0
	void MakeRotator(); // Function Engine.KismetMathLibrary.MakeRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f3ca0
	void *fb229fb405(); // Function Engine.KismetMathLibrary.*fb229fb405 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6804a90
	void *2f7c7a233f(); // Function Engine.KismetMathLibrary.*2f7c7a233f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67dea30
	void Ease(); // Function Engine.KismetMathLibrary.Ease // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67dd5bc
	void *b4ba78411b(); // Function Engine.KismetMathLibrary.*b4ba78411b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x99d550
	void *19c1e04e14(); // Function Engine.KismetMathLibrary.*19c1e04e14 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc676d8
	void *f15492e66c(); // Function Engine.KismetMathLibrary.*f15492e66c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681c4cc
	void *e33209deeb(); // Function Engine.KismetMathLibrary.*e33209deeb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ee648
	void RandomIntegerInRange(); // Function Engine.KismetMathLibrary.RandomIntegerInRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xba50e8
	void *60cfaf5335(); // Function Engine.KismetMathLibrary.*60cfaf5335 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f4140
	void IsLeapYear(); // Function Engine.KismetMathLibrary.IsLeapYear // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f0c54
	void *b77f93929d(); // Function Engine.KismetMathLibrary.*b77f93929d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681d4f8
	void *d1e61c6dc2(); // Function Engine.KismetMathLibrary.*d1e61c6dc2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67dee00
	void *61304c50b6(); // Function Engine.KismetMathLibrary.*61304c50b6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67dd948
	void GetTotalHours(); // Function Engine.KismetMathLibrary.GetTotalHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ebd0c
	void *511596ffb1(); // Function Engine.KismetMathLibrary.*511596ffb1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681ecb4
	void *77468a57e3(); // Function Engine.KismetMathLibrary.*77468a57e3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6802070
	void *21a224a62c(); // Function Engine.KismetMathLibrary.*21a224a62c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fdc48
	void *fbc383f9f6(); // Function Engine.KismetMathLibrary.*fbc383f9f6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb5cd94
	void MakeBox2D(); // Function Engine.KismetMathLibrary.MakeBox2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f6ecc
	void *db4db40bab(); // Function Engine.KismetMathLibrary.*db4db40bab // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681e8b8
	void *a13212b487(); // Function Engine.KismetMathLibrary.*a13212b487 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ee834
	void GetMonth(); // Function Engine.KismetMathLibrary.GetMonth // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e7fe4
	void Sqrt(); // Function Engine.KismetMathLibrary.Sqrt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x681bdec
	void *062e967a5f(); // Function Engine.KismetMathLibrary.*062e967a5f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6816f98
	void *0df3cc985b(); // Function Engine.KismetMathLibrary.*0df3cc985b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d2994
	void *7b79b5c6eb(); // Function Engine.KismetMathLibrary.*7b79b5c6eb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f3fac
	void *971848de24(); // Function Engine.KismetMathLibrary.*971848de24 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d9ff4
	void GetMilliseconds(); // Function Engine.KismetMathLibrary.GetMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e7d88
	void NotEqual_IntInt(); // Function Engine.KismetMathLibrary.NotEqual_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbbdfe0
	void FromMinutes(); // Function Engine.KismetMathLibrary.FromMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e0eac
	void *6ae8cc4647(); // Function Engine.KismetMathLibrary.*6ae8cc4647 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6800e2c
	void *ac4cde1261(); // Function Engine.KismetMathLibrary.*ac4cde1261 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5a6e40c
	void RandomFloatInRange(); // Function Engine.KismetMathLibrary.RandomFloatInRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f367c
	void *7f3315af32(); // Function Engine.KismetMathLibrary.*7f3315af32 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67dac30
	void *8ff8109f23(); // Function Engine.KismetMathLibrary.*8ff8109f23 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ee908
	void *db4cd40cff(); // Function Engine.KismetMathLibrary.*db4cd40cff // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6802e74
	void *4e8a5ac707(); // Function Engine.KismetMathLibrary.*4e8a5ac707 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67df570
	void Clamp(); // Function Engine.KismetMathLibrary.Clamp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d5b44
	void Abs(); // Function Engine.KismetMathLibrary.Abs // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa30530
	void *8b1947abe7(); // Function Engine.KismetMathLibrary.*8b1947abe7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67fa5d0
	void *6cba2fc4ae(); // Function Engine.KismetMathLibrary.*6cba2fc4ae // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681c6b8
	void *0826ecade4(); // Function Engine.KismetMathLibrary.*0826ecade4 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d9a7c
	void RandomRotatorFromStream(); // Function Engine.KismetMathLibrary.RandomRotatorFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6802b80
	void GetTotalSeconds(); // Function Engine.KismetMathLibrary.GetTotalSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ebed4
	void *395c8e873f(); // Function Engine.KismetMathLibrary.*395c8e873f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6803ed0
	void *b795917151(); // Function Engine.KismetMathLibrary.*b795917151 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6802230
	void IsAfternoon(); // Function Engine.KismetMathLibrary.IsAfternoon // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f06a0
	void *497ec3e7b5(); // Function Engine.KismetMathLibrary.*497ec3e7b5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f3580
	void *520d4afeaf(); // Function Engine.KismetMathLibrary.*520d4afeaf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ee9d4
	void *b5a181db94(); // Function Engine.KismetMathLibrary.*b5a181db94 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d8008
	void ProjectVectorOnToVector(); // Function Engine.KismetMathLibrary.ProjectVectorOnToVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68010b4
	void *cb975ed8ba(); // Function Engine.KismetMathLibrary.*cb975ed8ba // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d8820
	void RandomFloatInRangeFromStream(); // Function Engine.KismetMathLibrary.RandomFloatInRangeFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68024b4
	void *d1b7f5dc7b(); // Function Engine.KismetMathLibrary.*d1b7f5dc7b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbeeebc
	void *b1a1a6f5cd(); // Function Engine.KismetMathLibrary.*b1a1a6f5cd // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f04a0
	void EqualEqual_RotatorRotator(); // Function Engine.KismetMathLibrary.EqualEqual_RotatorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ddf50
	void *4e879417a2(); // Function Engine.KismetMathLibrary.*4e879417a2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61bea00
	void *72ed3d5557(); // Function Engine.KismetMathLibrary.*72ed3d5557 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681c7c8
	void Square(); // Function Engine.KismetMathLibrary.Square // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x681bea8
	void *14e6bc7964(); // Function Engine.KismetMathLibrary.*14e6bc7964 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f8490
	void *0fd03d50ab(); // Function Engine.KismetMathLibrary.*0fd03d50ab // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681eb5c
	void *8df1941453(); // Function Engine.KismetMathLibrary.*8df1941453 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d877c
	void *b9de271210(); // Function Engine.KismetMathLibrary.*b9de271210 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d8580
	void *277cc7c0de(); // Function Engine.KismetMathLibrary.*277cc7c0de // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f61ec
	void RandomBool(); // Function Engine.KismetMathLibrary.RandomBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6802108
	void *7b37d9d6d8(); // Function Engine.KismetMathLibrary.*7b37d9d6d8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681d084
	void GetTotalMilliseconds(); // Function Engine.KismetMathLibrary.GetTotalMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ebda4
	void BooleanXOR(); // Function Engine.KismetMathLibrary.BooleanXOR // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67cf3e4
	void *f35349dc59(); // Function Engine.KismetMathLibrary.*f35349dc59 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e7cf4
	void MakeBox(); // Function Engine.KismetMathLibrary.MakeBox // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f6fc4
	void *0ea99285d1(); // Function Engine.KismetMathLibrary.*0ea99285d1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67e08c0
	void Now(); // Function Engine.KismetMathLibrary.Now // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fdcd0
	void TimespanRatio(); // Function Engine.KismetMathLibrary.TimespanRatio // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681d514
	void Cross_VectorVector(); // Function Engine.KismetMathLibrary.Cross_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d97e4
	void *c0e768bca1(); // Function Engine.KismetMathLibrary.*c0e768bca1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6810d48
	void *254021fe6a(); // Function Engine.KismetMathLibrary.*254021fe6a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f476c
	void REase(); // Function Engine.KismetMathLibrary.REase // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6801598
	void *401ba23199(); // Function Engine.KismetMathLibrary.*401ba23199 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fc5d0
	void BooleanAND(); // Function Engine.KismetMathLibrary.BooleanAND // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x23246c
	void *4faf9eb4d2(); // Function Engine.KismetMathLibrary.*4faf9eb4d2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61bcd7c
	void *fdc9f4ce48(); // Function Engine.KismetMathLibrary.*fdc9f4ce48 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ecd30
	void *8b507e9b59(); // Function Engine.KismetMathLibrary.*8b507e9b59 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681c248
	void TransformLocation(); // Function Engine.KismetMathLibrary.TransformLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681da08
	void *b3329aa5da(); // Function Engine.KismetMathLibrary.*b3329aa5da // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e92ac
	void *2ad863e6f1(); // Function Engine.KismetMathLibrary.*2ad863e6f1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f3c04
	void *5f2341b253(); // Function Engine.KismetMathLibrary.*5f2341b253 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67da164
	void *0589f8b0da(); // Function Engine.KismetMathLibrary.*0589f8b0da // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6804cf8
	void *dc292520ef(); // Function Engine.KismetMathLibrary.*dc292520ef // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ddce4
	void IsMorning(); // Function Engine.KismetMathLibrary.IsMorning // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f0d8c
	void *546b7da4b8(); // Function Engine.KismetMathLibrary.*546b7da4b8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67fa870
	void *8a7743de51(); // Function Engine.KismetMathLibrary.*8a7743de51 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6803a38
	void *f87325bff2(); // Function Engine.KismetMathLibrary.*f87325bff2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fe6ac
	void *b4a95ca863(); // Function Engine.KismetMathLibrary.*b4a95ca863 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6800f9c
	void RandomIntegerFromStream(); // Function Engine.KismetMathLibrary.RandomIntegerFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68026cc
	void *4dcdf99e3e(); // Function Engine.KismetMathLibrary.*4dcdf99e3e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681c248
	void *9fd695779d(); // Function Engine.KismetMathLibrary.*9fd695779d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67daa0c
	void GetHours(); // Function Engine.KismetMathLibrary.GetHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e530c
	void MakeRandomStream(); // Function Engine.KismetMathLibrary.MakeRandomStream // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f8018
	void FClamp(); // Function Engine.KismetMathLibrary.FClamp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f4258
	void *776e4a37c0(); // Function Engine.KismetMathLibrary.*776e4a37c0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67cf2f4
	void GetHour(); // Function Engine.KismetMathLibrary.GetHour // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e530c
	void *2ed70580f9(); // Function Engine.KismetMathLibrary.*2ed70580f9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d6050
	void *9df7d48f33(); // Function Engine.KismetMathLibrary.*9df7d48f33 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681c3e4
	void *feb910b2c2(); // Function Engine.KismetMathLibrary.*feb910b2c2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d8a78
	void *1c4f46d253(); // Function Engine.KismetMathLibrary.*1c4f46d253 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fcea8
	void GetSeconds(); // Function Engine.KismetMathLibrary.GetSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67eaa24
	void RandomInteger(); // Function Engine.KismetMathLibrary.RandomInteger // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6802618
	void *0ad69dc826(); // Function Engine.KismetMathLibrary.*0ad69dc826 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d2dac
	void NotEqual_NameName(); // Function Engine.KismetMathLibrary.NotEqual_NameName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb5ccc4
	void GetDirectionUnitVector(); // Function Engine.KismetMathLibrary.GetDirectionUnitVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e4828
	void *dd97adc858(); // Function Engine.KismetMathLibrary.*dd97adc858 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67dad84
	void *52d8b64f88(); // Function Engine.KismetMathLibrary.*52d8b64f88 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ee57c
	void *fcabb791b9(); // Function Engine.KismetMathLibrary.*fcabb791b9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d8468
	void *6259db0fad(); // Function Engine.KismetMathLibrary.*6259db0fad // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fc6b0
	void BreakTimespan(); // Function Engine.KismetMathLibrary.BreakTimespan // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d2b48
	void *583a607fa8(); // Function Engine.KismetMathLibrary.*583a607fa8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f3fac
	void GetMinute(); // Function Engine.KismetMathLibrary.GetMinute // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e7f20
	void BreakRotator(); // Function Engine.KismetMathLibrary.BreakRotator // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x9e5f88
	void *bcd6d1c345(); // Function Engine.KismetMathLibrary.*bcd6d1c345 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f88e0
	void RandomRotator(); // Function Engine.KismetMathLibrary.RandomRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6802a8c
	void *2dce8b1063(); // Function Engine.KismetMathLibrary.*2dce8b1063 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fd5f0
	void *b5ce5fd3e6(); // Function Engine.KismetMathLibrary.*b5ce5fd3e6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681e560
	void *7614870b1d(); // Function Engine.KismetMathLibrary.*7614870b1d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f1110
	void BreakVector(); // Function Engine.KismetMathLibrary.BreakVector // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x968304
	void *cd770083f9(); // Function Engine.KismetMathLibrary.*cd770083f9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67da2e8
	void *3ba4f92e48(); // Function Engine.KismetMathLibrary.*3ba4f92e48 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x962cb8
	void *05d6bae8f8(); // Function Engine.KismetMathLibrary.*05d6bae8f8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fcdc0
	void *c10569a8dc(); // Function Engine.KismetMathLibrary.*c10569a8dc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d83e4
	void *7ec9d3b4ef(); // Function Engine.KismetMathLibrary.*7ec9d3b4ef // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ee4a8
	void BreakRandomStream(); // Function Engine.KismetMathLibrary.BreakRandomStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d28a8
	void GetMillisecond(); // Function Engine.KismetMathLibrary.GetMillisecond // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e7d88
	void *013d893f8d(); // Function Engine.KismetMathLibrary.*013d893f8d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67cd714
	void *e7dfeedd6e(); // Function Engine.KismetMathLibrary.*e7dfeedd6e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fc294
	void *44acd59336(); // Function Engine.KismetMathLibrary.*44acd59336 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f3ed8
	void *ceb34741ac(); // Function Engine.KismetMathLibrary.*ceb34741ac // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f82a0
	void *f879594a32(); // Function Engine.KismetMathLibrary.*f879594a32 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d88d4
	void *990b0ac25e(); // Function Engine.KismetMathLibrary.*990b0ac25e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fc0dc
	void Tan(); // Function Engine.KismetMathLibrary.Tan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x681d2d0
	void VEase(); // Function Engine.KismetMathLibrary.VEase // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681e31c
	void Acos(); // Function Engine.KismetMathLibrary.Acos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67c89b4
	void *d1dc8d513d(); // Function Engine.KismetMathLibrary.*d1dc8d513d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6802974
	void *9ad5c5dfba(); // Function Engine.KismetMathLibrary.*9ad5c5dfba // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6804a90
	void *d5c0fa2498(); // Function Engine.KismetMathLibrary.*d5c0fa2498 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f0144
	void *e127f4baf6(); // Function Engine.KismetMathLibrary.*e127f4baf6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x681efc4
	void *353b23372d(); // Function Engine.KismetMathLibrary.*353b23372d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d7e5c
	void *9c35cb5a8f(); // Function Engine.KismetMathLibrary.*9c35cb5a8f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f86f0
	void *cfb9622dda(); // Function Engine.KismetMathLibrary.*cfb9622dda // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ef4e8
	void *b07503cc38(); // Function Engine.KismetMathLibrary.*b07503cc38 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681ee3c
	void *3a85905df3(); // Function Engine.KismetMathLibrary.*3a85905df3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d8090
	void *44335d307e(); // Function Engine.KismetMathLibrary.*44335d307e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6803ba0
	void *6417e18af8(); // Function Engine.KismetMathLibrary.*6417e18af8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681ea20
	void *654782558d(); // Function Engine.KismetMathLibrary.*654782558d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f8a10
	void *8a2cec4a36(); // Function Engine.KismetMathLibrary.*8a2cec4a36 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681d63c
	void *09f051554d(); // Function Engine.KismetMathLibrary.*09f051554d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f8170
	void Cos(); // Function Engine.KismetMathLibrary.Cos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d8e9c
	void *b8cad62f4a(); // Function Engine.KismetMathLibrary.*b8cad62f4a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d84f0
	void *0957cf2544(); // Function Engine.KismetMathLibrary.*0957cf2544 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d6d08
	void *b66f6d2743(); // Function Engine.KismetMathLibrary.*b66f6d2743 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d5c60
	void UtcNow(); // Function Engine.KismetMathLibrary.UtcNow // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681e2ec
	void RandomUnitVectorFromStream(); // Function Engine.KismetMathLibrary.RandomUnitVectorFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6802cc0
	void *247a76ab00(); // Function Engine.KismetMathLibrary.*247a76ab00 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f40f4
	void FMax(); // Function Engine.KismetMathLibrary.FMax // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f3f20
	void *673b5a8ea6(); // Function Engine.KismetMathLibrary.*673b5a8ea6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67caa54
	void BreakVector2D(); // Function Engine.KismetMathLibrary.BreakVector2D // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb3d66c
	void *778740dc65(); // Function Engine.KismetMathLibrary.*778740dc65 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fd274
	void *23b9ac6099(); // Function Engine.KismetMathLibrary.*23b9ac6099 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f3cec
	void *3f7ed3229a(); // Function Engine.KismetMathLibrary.*3f7ed3229a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61bcd7c
	void *20b52a6c85(); // Function Engine.KismetMathLibrary.*20b52a6c85 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681d4dc
	void *93d62765c1(); // Function Engine.KismetMathLibrary.*93d62765c1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f0f80
	void *c5bdfd5337(); // Function Engine.KismetMathLibrary.*c5bdfd5337 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67eec74
	void *db5e653804(); // Function Engine.KismetMathLibrary.*db5e653804 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6804cf8
	void *63133c96bb(); // Function Engine.KismetMathLibrary.*63133c96bb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d9704
	void *7e2403ed42(); // Function Engine.KismetMathLibrary.*7e2403ed42 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xba311c
	void GetDate(); // Function Engine.KismetMathLibrary.GetDate // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e3f90
	void *60c544dab5(); // Function Engine.KismetMathLibrary.*60c544dab5 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67de110
	void GetHour12(); // Function Engine.KismetMathLibrary.GetHour12 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e5278
	void FromMilliseconds(); // Function Engine.KismetMathLibrary.FromMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e0e10
	void *7f6558d399(); // Function Engine.KismetMathLibrary.*7f6558d399 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ca780
	void *da2ea47dfe(); // Function Engine.KismetMathLibrary.*da2ea47dfe // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f3b68
	void NotEqual_ByteByte(); // Function Engine.KismetMathLibrary.NotEqual_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f4620
	void *e449783933(); // Function Engine.KismetMathLibrary.*e449783933 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67cae50
	void *9132ad9439(); // Function Engine.KismetMathLibrary.*9132ad9439 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb92ee0
	void MakeVector2D(); // Function Engine.KismetMathLibrary.MakeVector2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f8e44
	void Today(); // Function Engine.KismetMathLibrary.Today // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681d5f8
	void Sin(); // Function Engine.KismetMathLibrary.Sin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6817030
	void *21fd41a274(); // Function Engine.KismetMathLibrary.*21fd41a274 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d1b8c
	void *0826317a3f(); // Function Engine.KismetMathLibrary.*0826317a3f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67cf204
	void *544a56714e(); // Function Engine.KismetMathLibrary.*544a56714e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e8c00
	void *04ed3d6949(); // Function Engine.KismetMathLibrary.*04ed3d6949 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ca944
	void *31071bb6e5(); // Function Engine.KismetMathLibrary.*31071bb6e5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6801b5c
	void FMin(); // Function Engine.KismetMathLibrary.FMin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67dec98
	void *ae77746bf2(); // Function Engine.KismetMathLibrary.*ae77746bf2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fcaa4
	void *f67070b753(); // Function Engine.KismetMathLibrary.*f67070b753 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fbf24
	void *7dbb4cb5ac(); // Function Engine.KismetMathLibrary.*7dbb4cb5ac // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ca5e0
	void *ae60dcbe74(); // Function Engine.KismetMathLibrary.*ae60dcbe74 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f4058
	void *f8103537ea(); // Function Engine.KismetMathLibrary.*f8103537ea // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f83d0
	void *2dbcab7488(); // Function Engine.KismetMathLibrary.*2dbcab7488 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fd18c
	void Exp(); // Function Engine.KismetMathLibrary.Exp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67de8ec
	void *186bbd38e9(); // Function Engine.KismetMathLibrary.*186bbd38e9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fc4c0
	void *8686c19d5c(); // Function Engine.KismetMathLibrary.*8686c19d5c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e9808
	void Not_PreBool(); // Function Engine.KismetMathLibrary.Not_PreBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x8e0adc
	void Min(); // Function Engine.KismetMathLibrary.Min // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fa79c
	void NotEqual_RotatorRotator(); // Function Engine.KismetMathLibrary.NotEqual_RotatorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fd7ec
	void *9158a60ea0(); // Function Engine.KismetMathLibrary.*9158a60ea0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xaf7798
	void Normal(); // Function Engine.KismetMathLibrary.Normal // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fcfec
	void Asin(); // Function Engine.KismetMathLibrary.Asin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67cd414
	void *5f6d85c477(); // Function Engine.KismetMathLibrary.*5f6d85c477 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fc3b0
	void *3ef0c93fbc(); // Function Engine.KismetMathLibrary.*3ef0c93fbc // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ca6b4
	void *f14e69eda9(); // Function Engine.KismetMathLibrary.*f14e69eda9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fcd0c
	void *b879ad582d(); // Function Engine.KismetMathLibrary.*b879ad582d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x681c314
	void FromHours(); // Function Engine.KismetMathLibrary.FromHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e0d70
	void *fffec3ccdb(); // Function Engine.KismetMathLibrary.*fffec3ccdb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fd5f0
	void *9e2ca1f651(); // Function Engine.KismetMathLibrary.*9e2ca1f651 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67db260
	void Fraction(); // Function Engine.KismetMathLibrary.Fraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67e0c30
	void *a1e2a43882(); // Function Engine.KismetMathLibrary.*a1e2a43882 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb3d9d8
	void *742c7f76a0(); // Function Engine.KismetMathLibrary.*742c7f76a0 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67dfd44
	void EqualEqual_VectorVector(); // Function Engine.KismetMathLibrary.EqualEqual_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67de3d0
	void *c27d3631cb(); // Function Engine.KismetMathLibrary.*c27d3631cb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa2f494
	void *e9728c3cb8(); // Function Engine.KismetMathLibrary.*e9728c3cb8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fd508
	void *84c3381e9f(); // Function Engine.KismetMathLibrary.*84c3381e9f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f3144
	void *07944b2f02(); // Function Engine.KismetMathLibrary.*07944b2f02 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67ded70
	void *b2840709e3(); // Function Engine.KismetMathLibrary.*b2840709e3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67dab00
	void *d1b7da2a10(); // Function Engine.KismetMathLibrary.*d1b7da2a10 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f3fbc
	void *2141b71f22(); // Function Engine.KismetMathLibrary.*2141b71f22 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f3b4c
	void *4b0e328c81(); // Function Engine.KismetMathLibrary.*4b0e328c81 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f43fc
	void *8911099506(); // Function Engine.KismetMathLibrary.*8911099506 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5a6e40c
	void GetTotalDays(); // Function Engine.KismetMathLibrary.GetTotalDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ebc74
	void *47aa012f37(); // Function Engine.KismetMathLibrary.*47aa012f37 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67daee4
	void *711ad4ea5d(); // Function Engine.KismetMathLibrary.*711ad4ea5d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e8d60
	void *7eb6af9b59(); // Function Engine.KismetMathLibrary.*7eb6af9b59 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6801a68
	void NotEqual_VectorVector(); // Function Engine.KismetMathLibrary.NotEqual_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fdae8
	void ConvertTransformToRelative(); // Function Engine.KismetMathLibrary.ConvertTransformToRelative // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d8c80
	void *56044b4265(); // Function Engine.KismetMathLibrary.*56044b4265 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d8180
	void *1c4045ff3b(); // Function Engine.KismetMathLibrary.*1c4045ff3b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f80b0
	void *76ed283d71(); // Function Engine.KismetMathLibrary.*76ed283d71 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67fa3ec
	void *5c67e75fc8(); // Function Engine.KismetMathLibrary.*5c67e75fc8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681c5a8
	void *0024e0b531(); // Function Engine.KismetMathLibrary.*0024e0b531 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x681f29c
	void *9cb3f68b51(); // Function Engine.KismetMathLibrary.*9cb3f68b51 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67fdfc0
	void GetDuration(); // Function Engine.KismetMathLibrary.GetDuration // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e4abc
	void *0ac78e4476(); // Function Engine.KismetMathLibrary.*0ac78e4476 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f398c
	void *cd60d899db(); // Function Engine.KismetMathLibrary.*cd60d899db // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f3acc
	void FMod(); // Function Engine.KismetMathLibrary.FMod // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f3e48
	void *337d904e9b(); // Function Engine.KismetMathLibrary.*337d904e9b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x680096c
	void *0d08d3aeaa(); // Function Engine.KismetMathLibrary.*0d08d3aeaa // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x681c248
	void *8ae6b4cb20(); // Function Engine.KismetMathLibrary.*8ae6b4cb20 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d5d80
	void *12952a0ad9(); // Function Engine.KismetMathLibrary.*12952a0ad9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f31e8
	void *e06e8c3023(); // Function Engine.KismetMathLibrary.*e06e8c3023 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67dead4
	void *51a4af6e71(); // Function Engine.KismetMathLibrary.*51a4af6e71 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f3a28
	void GetTimeOfDay(); // Function Engine.KismetMathLibrary.GetTimeOfDay // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67eb9e4
	void *f492b8c8e1(); // Function Engine.KismetMathLibrary.*f492b8c8e1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f7db4
	void GetDays(); // Function Engine.KismetMathLibrary.GetDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e4158
	void MakeColor(); // Function Engine.KismetMathLibrary.MakeColor // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f37e0
	void Atan2(); // Function Engine.KismetMathLibrary.Atan2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67cd4c4
	void *b4e876e056(); // Function Engine.KismetMathLibrary.*b4e876e056 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67da248
	void *e7f560c48a(); // Function Engine.KismetMathLibrary.*e7f560c48a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f4364
	void *5a3e94455b(); // Function Engine.KismetMathLibrary.*5a3e94455b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ee908
	void GetSecond(); // Function Engine.KismetMathLibrary.GetSecond // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67eaa24
	void *df265e03b2(); // Function Engine.KismetMathLibrary.*df265e03b2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67ca6b4
	void *ee615e0b8e(); // Function Engine.KismetMathLibrary.*ee615e0b8e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67de984
	void *ff42e0e500(); // Function Engine.KismetMathLibrary.*ff42e0e500 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67fa220
	void *10b0236ab6(); // Function Engine.KismetMathLibrary.*10b0236ab6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xcb8c58
	void *4dfd098e90(); // Function Engine.KismetMathLibrary.*4dfd098e90 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fc1ac
	void GetDay(); // Function Engine.KismetMathLibrary.GetDay // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e402c
	void *6610ed3799(); // Function Engine.KismetMathLibrary.*6610ed3799 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67fc798
	void *9ab165194f(); // Function Engine.KismetMathLibrary.*9ab165194f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67fac20
	void *5ceda47520(); // Function Engine.KismetMathLibrary.*5ceda47520 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d860c
	void *5eb27b9d15(); // Function Engine.KismetMathLibrary.*5eb27b9d15 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6803c2c
	void Lerp(); // Function Engine.KismetMathLibrary.Lerp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67f3a2c
	void GetDayOfYear(); // Function Engine.KismetMathLibrary.GetDayOfYear // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e40c4
	void *e0b4b70ffc(); // Function Engine.KismetMathLibrary.*e0b4b70ffc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d7ee8
	void *203e14bfeb(); // Function Engine.KismetMathLibrary.*203e14bfeb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e92ac
	void *885b1c1b77(); // Function Engine.KismetMathLibrary.*885b1c1b77 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68022c4
	void BreakTransform(); // Function Engine.KismetMathLibrary.BreakTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x99eeac
	void *5faa8978e8(); // Function Engine.KismetMathLibrary.*5faa8978e8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f87b0
	void GetMinutes(); // Function Engine.KismetMathLibrary.GetMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67e7f20
	void *b59a600010(); // Function Engine.KismetMathLibrary.*b59a600010 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6804e50
	void *d4d25ae58b(); // Function Engine.KismetMathLibrary.*d4d25ae58b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67f3c20
};

// Class Engine.*3c9e89be4b
// Size: 0x30 (Inherited: 0x30)
struct U*3c9e89be4b : UBlueprintFunctionLibrary {

	void *34eeff6826(); // Function Engine.*3c9e89be4b.*34eeff6826 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6831ed8
	void *9e37fcaaa9(); // Function Engine.*3c9e89be4b.*9e37fcaaa9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6831b04
	void *52f357234f(); // Function Engine.*3c9e89be4b.*52f357234f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6831dd8
	void *48a4e77440(); // Function Engine.*3c9e89be4b.*48a4e77440 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x682a6dc
	void *d70ae43481(); // Function Engine.*3c9e89be4b.*d70ae43481 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68284b4
	void *78b19382ee(); // Function Engine.*3c9e89be4b.*78b19382ee // Final|Native|Static|Public|BlueprintCallable // @ game+0x682f708
	void *6fb5de772e(); // Function Engine.*3c9e89be4b.*6fb5de772e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x682a760
	void *72727e17f0(); // Function Engine.*3c9e89be4b.*72727e17f0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682f61c
	void *cbcf5283c0(); // Function Engine.*3c9e89be4b.*cbcf5283c0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6835ec8
	void *ca1314ba30(); // Function Engine.*3c9e89be4b.*ca1314ba30 // Final|Native|Static|Public|BlueprintCallable // @ game+0x683198c
	void *ff2d650e3a(); // Function Engine.*3c9e89be4b.*ff2d650e3a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6830bcc
	void *7bc80ab87f(); // Function Engine.*3c9e89be4b.*7bc80ab87f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682f3f0
	void *0adc2a1df1(); // Function Engine.*3c9e89be4b.*0adc2a1df1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682f4e4
};

// Class Engine.KismetRenderingLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetRenderingLibrary : UBlueprintFunctionLibrary {

	void *c98dbd10b2(); // Function Engine.KismetRenderingLibrary.*c98dbd10b2 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x682c808
	void *acdf3381fc(); // Function Engine.KismetRenderingLibrary.*acdf3381fc // Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x682a844
	void ExportTexture2D(); // Function Engine.KismetRenderingLibrary.ExportTexture2D // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x682e264
	void ExportRenderTarget(); // Function Engine.KismetRenderingLibrary.ExportRenderTarget // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x682e09c
	void DrawMaterialToRenderTarget(); // Function Engine.KismetRenderingLibrary.DrawMaterialToRenderTarget // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x682d360
	void BeginDrawCanvasToRenderTarget(); // Function Engine.KismetRenderingLibrary.BeginDrawCanvasToRenderTarget // Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68282c4
	void EndDrawCanvasToRenderTarget(); // Function Engine.KismetRenderingLibrary.EndDrawCanvasToRenderTarget // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x682d7f8
	void BreakSkinWeightInfo(); // Function Engine.KismetRenderingLibrary.BreakSkinWeightInfo // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6828588
	void MakeSkinWeightInfo(); // Function Engine.KismetRenderingLibrary.MakeSkinWeightInfo // Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6835c04
	void *e333424a30(); // Function Engine.KismetRenderingLibrary.*e333424a30 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x682ccb0
};

// Class Engine.*47f1d7b161
// Size: 0x30 (Inherited: 0x30)
struct U*47f1d7b161 : UBlueprintFunctionLibrary {

	void *5cc9cdd750(); // Function Engine.*47f1d7b161.*5cc9cdd750 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6829770
	void *af974acc13(); // Function Engine.*47f1d7b161.*af974acc13 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682bb44
	void *3ff484a4e6(); // Function Engine.*47f1d7b161.*3ff484a4e6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6829534
	void *19586dcb3b(); // Function Engine.*47f1d7b161.*19586dcb3b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x682cdcc
	void *e529365baa(); // Function Engine.*47f1d7b161.*e529365baa // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682a2c8
	void *e34eecc6cf(); // Function Engine.*47f1d7b161.*e34eecc6cf // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682c174
	void *61fa25de1f(); // Function Engine.*47f1d7b161.*61fa25de1f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682b70c
	void *937960435d(); // Function Engine.*47f1d7b161.*937960435d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682b8f4
	void *9fae8a1ce2(); // Function Engine.*47f1d7b161.*9fae8a1ce2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682ad20
	void *02273aa833(); // Function Engine.*47f1d7b161.*02273aa833 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68290a8
	void *1727c2b21b(); // Function Engine.*47f1d7b161.*1727c2b21b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6829c00
	void NotEqual_StrStr(); // Function Engine.*47f1d7b161.NotEqual_StrStr // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x683675c
	void *868ba8d86f(); // Function Engine.*47f1d7b161.*868ba8d86f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68313d0
	void Reverse(); // Function Engine.*47f1d7b161.Reverse // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6837a60
	void Replace(); // Function Engine.*47f1d7b161.Replace // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68375e4
	void *76c1e08ee8(); // Function Engine.*47f1d7b161.*76c1e08ee8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682eee0
	void EndsWith(); // Function Engine.*47f1d7b161.EndsWith // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682d8e0
	void *4fc6b55061(); // Function Engine.*47f1d7b161.*4fc6b55061 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6832744
	void *07319db199(); // Function Engine.*47f1d7b161.*07319db199 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6834fb0
	void *b64aecf57e(); // Function Engine.*47f1d7b161.*b64aecf57e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x683518c
	void *98d9542821(); // Function Engine.*47f1d7b161.*98d9542821 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68299c4
	void *db05eecaaa(); // Function Engine.*47f1d7b161.*db05eecaaa // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6828e5c
	void *f4978c5d64(); // Function Engine.*47f1d7b161.*f4978c5d64 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682dd80
	void *bf06f6d6e8(); // Function Engine.*47f1d7b161.*bf06f6d6e8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682a090
	void Right(); // Function Engine.*47f1d7b161.Right // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6837be0
	void NotEqual_StriStri(); // Function Engine.*47f1d7b161.NotEqual_StriStri // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68368d4
	void Len(); // Function Engine.*47f1d7b161.Len // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68352fc
	void *1fe229d7b7(); // Function Engine.*47f1d7b161.*1fe229d7b7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682b370
	void Split(); // Function Engine.*47f1d7b161.Split // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x68397a4
	void Mid(); // Function Engine.*47f1d7b161.Mid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6836140
	void *7e368307b7(); // Function Engine.*47f1d7b161.*7e368307b7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68292f4
	void *eae3a5720f(); // Function Engine.*47f1d7b161.*eae3a5720f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6837020
	void StartsWith(); // Function Engine.*47f1d7b161.StartsWith // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6839a78
	void *e5ff56c335(); // Function Engine.*47f1d7b161.*e5ff56c335 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6837dc4
	void *7b832495cc(); // Function Engine.*47f1d7b161.*7b832495cc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682dc08
	void *4043f9925e(); // Function Engine.*47f1d7b161.*4043f9925e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682ab54
	void *d3814dd131(); // Function Engine.*47f1d7b161.*d3814dd131 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6829e3c
	void Contains(); // Function Engine.*47f1d7b161.Contains // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbfad74
	void *e4959400e5(); // Function Engine.*47f1d7b161.*e4959400e5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb91bc8
	void *6c8c18e616(); // Function Engine.*47f1d7b161.*6c8c18e616 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682bf98
	void *7e70508ff1(); // Function Engine.*47f1d7b161.*7e70508ff1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682a994
	void *d03917fad9(); // Function Engine.*47f1d7b161.*d03917fad9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc19324
	void *0261206bdc(); // Function Engine.*47f1d7b161.*0261206bdc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682edfc
	void *3d90dff87c(); // Function Engine.*47f1d7b161.*3d90dff87c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682c620
	void *acf515eb09(); // Function Engine.*47f1d7b161.*acf515eb09 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb9463c
	void *cec222e2b1(); // Function Engine.*47f1d7b161.*cec222e2b1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6837fb0
	void *b17047a1c1(); // Function Engine.*47f1d7b161.*b17047a1c1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682ba70
	void ToUpper(); // Function Engine.*47f1d7b161.ToUpper // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x683ad70
	void *e44eca9d54(); // Function Engine.*47f1d7b161.*e44eca9d54 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682bc10
	void *482a942fec(); // Function Engine.*47f1d7b161.*482a942fec // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682e834
	void *0474f15646(); // Function Engine.*47f1d7b161.*0474f15646 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68323c8
	void Left(); // Function Engine.*47f1d7b161.Left // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6834dd8
	void Trim(); // Function Engine.*47f1d7b161.Trim // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x683aeb8
	void *5bfaba32f3(); // Function Engine.*47f1d7b161.*5bfaba32f3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x683b048
	void ToLower(); // Function Engine.*47f1d7b161.ToLower // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x683ac58
	void *ef07fa8218(); // Function Engine.*47f1d7b161.*ef07fa8218 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6837838
	void *5b293e83ab(); // Function Engine.*47f1d7b161.*5b293e83ab // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb942b8
	void *06e7fbbeee(); // Function Engine.*47f1d7b161.*06e7fbbeee // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682bdec
	void *0a5d3a922d(); // Function Engine.*47f1d7b161.*0a5d3a922d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6835fac
	void *edc080a44e(); // Function Engine.*47f1d7b161.*edc080a44e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f28b8
	void *46496c4f95(); // Function Engine.*47f1d7b161.*46496c4f95 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x683ab70
	void *af9442f8cb(); // Function Engine.*47f1d7b161.*af9442f8cb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682c444
	void *1081a3add4(); // Function Engine.*47f1d7b161.*1081a3add4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682b554
};

// Class Engine.*d2a05b0f4f
// Size: 0x30 (Inherited: 0x30)
struct U*d2a05b0f4f : UBlueprintFunctionLibrary {

	void *ceb6f181e5(); // Function Engine.*d2a05b0f4f.*ceb6f181e5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6831728
	void *5a610f025a(); // Function Engine.*d2a05b0f4f.*5a610f025a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682fffc
	void *e5f7571394(); // Function Engine.*d2a05b0f4f.*e5f7571394 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6831894
	void *423351b16a(); // Function Engine.*d2a05b0f4f.*423351b16a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682fc64
	void *ae86eb4f4b(); // Function Engine.*d2a05b0f4f.*ae86eb4f4b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68324b0
	void *e26fd84716(); // Function Engine.*d2a05b0f4f.*e26fd84716 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68325cc
	void *2d3a48cc9b(); // Function Engine.*d2a05b0f4f.*2d3a48cc9b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6830d10
	void *d55a7920c3(); // Function Engine.*d2a05b0f4f.*d55a7920c3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6831578
};

// Class Engine.*ff3e418260
// Size: 0x30 (Inherited: 0x30)
struct U*ff3e418260 : UBlueprintFunctionLibrary {

	void *2c06b1fff4(); // Function Engine.*ff3e418260.*2c06b1fff4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x683aa50
	void *d95d843a03(); // Function Engine.*ff3e418260.*d95d843a03 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682ae14
	void *3f8ab32e28(); // Function Engine.*ff3e418260.*3f8ab32e28 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682819c
	void *00f05f3809(); // Function Engine.*ff3e418260.*00f05f3809 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6827710
	void *f01dc0c90b(); // Function Engine.*ff3e418260.*f01dc0c90b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x683a810
	void *2be3aa493b(); // Function Engine.*ff3e418260.*2be3aa493b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68273d4
	void *47f2b80b3f(); // Function Engine.*ff3e418260.*47f2b80b3f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x683a334
	void *af4085643f(); // Function Engine.*ff3e418260.*af4085643f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x683a5d0
	void *6ce8278792(); // Function Engine.*ff3e418260.*6ce8278792 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68278d0
	void *6e2e0faf1b(); // Function Engine.*ff3e418260.*6e2e0faf1b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x683a930
	void *118e3222ec(); // Function Engine.*ff3e418260.*118e3222ec // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbbf610
	void *87d6e5189a(); // Function Engine.*ff3e418260.*87d6e5189a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x683a6f0
	void *24c3fefcba(); // Function Engine.*ff3e418260.*24c3fefcba // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682aa78
	void *933b03eac4(); // Function Engine.*ff3e418260.*933b03eac4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6836a60
	void *308cc34fb4(); // Function Engine.*ff3e418260.*308cc34fb4 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68280bc
	void *59452d6e1c(); // Function Engine.*ff3e418260.*59452d6e1c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68277f0
	void *ae7fe0d852(); // Function Engine.*ff3e418260.*ae7fe0d852 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x683a4f4
	void *e7efd8b0be(); // Function Engine.*ff3e418260.*e7efd8b0be // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6827b90
	void *e1a92ff28c(); // Function Engine.*ff3e418260.*e1a92ff28c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6827094
	void *56961e40d1(); // Function Engine.*ff3e418260.*56961e40d1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6826ec8
	void *22ba5f535b(); // Function Engine.*ff3e418260.*22ba5f535b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x683a418
	void *d954408233(); // Function Engine.*ff3e418260.*d954408233 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x682ea50
	void *78e81888eb(); // Function Engine.*ff3e418260.*78e81888eb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x68365c8
	void *e95ba037ed(); // Function Engine.*ff3e418260.*e95ba037ed // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xb2e5b4
	void *0e9b0ac517(); // Function Engine.*ff3e418260.*0e9b0ac517 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x682da74
	void *4de9601df9(); // Function Engine.*ff3e418260.*4de9601df9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682c720
	void *ea38a76056(); // Function Engine.*ff3e418260.*ea38a76056 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x683a258
	void *443d56e615(); // Function Engine.*ff3e418260.*443d56e615 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x682df0c
	void *9be8064d90(); // Function Engine.*ff3e418260.*9be8064d90 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6827f04
	void *1d140e6fd8(); // Function Engine.*ff3e418260.*1d140e6fd8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6839dc8
	void *67be4343b4(); // Function Engine.*ff3e418260.*67be4343b4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682f2c0
	void *665cf55d4e(); // Function Engine.*ff3e418260.*665cf55d4e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6827d4c
	void *ed3b2b4430(); // Function Engine.*ff3e418260.*ed3b2b4430 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682b1b4
	void *54932d6864(); // Function Engine.*ff3e418260.*54932d6864 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682c2b4
	void *40bfd0b4e2(); // Function Engine.*ff3e418260.*40bfd0b4e2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682b634
	void *4724d26c69(); // Function Engine.*ff3e418260.*4724d26c69 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682b80c
	void Format(); // Function Engine.*ff3e418260.Format // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xab0bc0
	void *cd12f14473(); // Function Engine.*ff3e418260.*cd12f14473 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x682c54c
	void *2c8e0decce(); // Function Engine.*ff3e418260.*2c8e0decce // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682b470
	void *ace63d1958(); // Function Engine.*ff3e418260.*ace63d1958 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682aef4
	void *41365b73ed(); // Function Engine.*ff3e418260.*41365b73ed // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x683a0f4
	void *2513435080(); // Function Engine.*ff3e418260.*2513435080 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682ac48
};

// Class Engine.*87e6af4089
// Size: 0x30 (Inherited: 0x30)
struct U*87e6af4089 : UBlueprintFunctionLibrary {

	void *f76eac07a0(); // Function Engine.*87e6af4089.*f76eac07a0 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6836d14
	void *7537f87748(); // Function Engine.*87e6af4089.*7537f87748 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6837550
	void *68a116315d(); // Function Engine.*87e6af4089.*68a116315d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6836ef0
};

// Class Engine.World
// Size: 0xc80 (Inherited: 0x30)
struct UWorld : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*f52b0ce0bc> *ed08dc647f; // 0x38(0x10)
	char pad_48[0x118]; // 0x48(0x118)
	struct UAISystemBase* AISystem; // 0x160(0x08)
	char pad_168[0x68]; // 0x168(0x68)
	struct UNetDriver* NetDriver; // 0x1d0(0x08)
	char pad_1D8[0x10]; // 0x1d8(0x10)
	struct UCanvas* *bd84ceb728; // 0x1e8(0x08)
	char pad_1F0[0x18]; // 0x1f0(0x18)
	struct U*d7f53fe8ac* *7609cd9440; // 0x208(0x08)
	char pad_210[0x78]; // 0x210(0x78)
	struct TArray<struct UObject*> *7cdcd7039a; // 0x288(0x10)
	char pad_298[0x10]; // 0x298(0x10)
	struct TArray<struct U*541523bba7*> *722782e6ab; // 0x2a8(0x10)
	char pad_2B8[0x18]; // 0x2b8(0x18)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x2d0(0x08)
	char pad_2D8[0x10]; // 0x2d8(0x10)
	struct APhysicsVolume* *6cf3d5d6b3; // 0x2e8(0x08)
	struct TArray<struct ULevelStreaming*> *74611d959c; // 0x2f0(0x10)
	char pad_300[0x18]; // 0x300(0x18)
	struct AGameNetworkManager* *3c10b8cdc3; // 0x318(0x08)
	char pad_320[0x8]; // 0x320(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x328(0x08)
	struct AGameModeBase* *e94ebbf0c0; // 0x330(0x08)
	char pad_338[0x3d8]; // 0x338(0x3d8)
	struct U*d7f53fe8ac* *1fddd1a9e5; // 0x710(0x08)
	char pad_718[0x30]; // 0x718(0x30)
	struct UWorldComposition* WorldComposition; // 0x748(0x08)
	char pad_750[0x10]; // 0x750(0x10)
	struct AParticleEventManager* *db571e5a7d; // 0x760(0x08)
	char pad_768[0x10]; // 0x768(0x10)
	struct TArray<struct UObject*> *40352b6f95; // 0x778(0x10)
	char pad_788[0x88]; // 0x788(0x88)
	struct FString *4e615ac9b8; // 0x810(0x10)
	struct ULevel* *77c4b4a828; // 0x820(0x08)
	struct ULevel* *75877b23f2; // 0x828(0x08)
	char pad_830[0xd0]; // 0x830(0xd0)
	struct U*d7f53fe8ac* *1f30cd41c8; // 0x900(0x08)
	struct TArray<struct ULevel*> Levels; // 0x908(0x10)
	struct UDirectionalLightComponent* *61037ddb82; // 0x918(0x08)
	char pad_920[0x88]; // 0x920(0x88)
	struct UNavigationSystem* NavigationSystem; // 0x9a8(0x08)
	char pad_9B0[0x8]; // 0x9b0(0x08)
	struct UCanvas* *944a120df6; // 0x9b8(0x08)
	char pad_9C0[0x20]; // 0x9c0(0x20)
	struct ULevel* CurrentLevel; // 0x9e0(0x08)
	char pad_9E8[0x10]; // 0x9e8(0x10)
	struct UAvoidanceManager* AvoidanceManager; // 0x9f8(0x08)
	char pad_A00[0x52]; // 0xa00(0x52)
	char *f5c396fc84 : 1; // 0xa52(0x01)
	char pad_A52_1 : 7; // 0xa52(0x01)
	char pad_A53[0x6d]; // 0xa53(0x6d)
	struct TMap<struct F*fa6445d1a1, struct F*65d445c338> *fa29bbb6b9; // 0xac0(0x50)
	char pad_B10[0x170]; // 0xb10(0x170)
};

// Class Engine.NavigationSystem
// Size: 0x4e0 (Inherited: 0x30)
struct UNavigationSystem : UBlueprintFunctionLibrary {
	struct ANavigationData* *13d6d0723b; // 0x30(0x08)
	struct ANavigationData* *59bd0a8f56; // 0x38(0x08)
	char bAutoCreateNavigationData : 1; // 0x40(0x01)
	char bAllowClientSideNavigation : 1; // 0x40(0x01)
	char *6c25b430fa : 1; // 0x40(0x01)
	char bInitialBuildingLocked : 1; // 0x40(0x01)
	char pad_40_4 : 1; // 0x40(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x40(0x01)
	char pad_40_6 : 2; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float ActiveTilesUpdateInterval; // 0x4c(0x04)
	struct TArray<struct F*b471f00637> SupportedAgents; // 0x50(0x10)
	float DirtyAreasUpdateFreq; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct ANavigationData*> *acbf324277; // 0x68(0x10)
	struct TArray<struct FBox> *d0b42718c2; // 0x78(0x10)
	struct TMap<int32, struct ANavigationData*> *97976ce32f; // 0x88(0x50)
	struct TArray<struct ANavigationData*> *fb4253cc8d; // 0xd8(0x10)
	char pad_E8[0x60]; // 0xe8(0x60)
	struct FMulticastDelegate *1b92e6af8c; // 0x148(0x10)
	struct FMulticastDelegate OnNavigationGenerationFinishedDelegate; // 0x158(0x10)
	char pad_168[0x12c]; // 0x168(0x12c)
	enum class FNavigationSystemRunMode OperationMode; // 0x294(0x01)
	char pad_295[0x243]; // 0x295(0x243)
	uint32 DynamicNavThreadNum; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)

	void *42a4502d76(); // Function Engine.NavigationSystem.*42a4502d76 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6839550
	void GetRandomReachablePointInRadius(); // Function Engine.NavigationSystem.GetRandomReachablePointInRadius // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68309dc
	void *09b41f9b47(); // Function Engine.NavigationSystem.*09b41f9b47 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68348e8
	void *bf1f893fb8(); // Function Engine.NavigationSystem.*bf1f893fb8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68302ec
	void *c59df34011(); // Function Engine.NavigationSystem.*c59df34011 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6830168
	void *13a0c8c642(); // Function Engine.NavigationSystem.*13a0c8c642 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6839628
	void *05a7bcbad1(); // Function Engine.NavigationSystem.*05a7bcbad1 // Final|Native|Public|BlueprintCallable // @ game+0x6838744
	void *48728cd54d(); // Function Engine.NavigationSystem.*48728cd54d // Final|Native|Public|BlueprintCallable // @ game+0x683b3c8
	void *5b8e13ac2a(); // Function Engine.NavigationSystem.*5b8e13ac2a // Final|Native|Public|BlueprintCallable // @ game+0x6836bf0
	void *f1084f83c2(); // Function Engine.NavigationSystem.*f1084f83c2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6832240
	void *280ffc9e60(); // Function Engine.NavigationSystem.*280ffc9e60 // Final|Native|Public|BlueprintCallable // @ game+0x68386ac
	void *78ff767515(); // Function Engine.NavigationSystem.*78ff767515 // Final|Native|Public|BlueprintCallable // @ game+0x6837a4c
	void *6a6c8dcd2d(); // Function Engine.NavigationSystem.*6a6c8dcd2d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x683637c
	void *0e44be043b(); // Function Engine.NavigationSystem.*0e44be043b // Final|Native|Public|BlueprintCallable // @ game+0x683b4bc
	void ProjectPointToNavigation(); // Function Engine.NavigationSystem.ProjectPointToNavigation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6837218
	void *921192497e(); // Function Engine.NavigationSystem.*921192497e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x682e658
	void *7bbb15c288(); // Function Engine.NavigationSystem.*7bbb15c288 // Final|Native|Public|BlueprintCallable // @ game+0x6837428
	void *50d1bd596a(); // Function Engine.NavigationSystem.*50d1bd596a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68342b4
	void GetPathLength(); // Function Engine.NavigationSystem.GetPathLength // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6830568
	void *e159211865(); // Function Engine.NavigationSystem.*e159211865 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x682e42c
	void *2aca15a518(); // Function Engine.NavigationSystem.*2aca15a518 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6832304
	void *d9e83aceb0(); // Function Engine.NavigationSystem.*d9e83aceb0 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6834084
	void GetRandomPointInNavigableRadius(); // Function Engine.NavigationSystem.GetRandomPointInNavigableRadius // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68307ec
};

// Class Engine.*76e6993898
// Size: 0x30 (Inherited: 0x30)
struct U*76e6993898 : UBlueprintFunctionLibrary {

	void *38f7cd7b55(); // Function Engine.*76e6993898.*38f7cd7b55 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6839350
	void *9d4d2dd073(); // Function Engine.*76e6993898.*9d4d2dd073 // Final|Native|Static|Public|BlueprintCallable // @ game+0x682d4c0
	void *1d67e764d8(); // Function Engine.*76e6993898.*1d67e764d8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6838e08
	void *1c14ce5109(); // Function Engine.*76e6993898.*1c14ce5109 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6831fac
};

// Class Engine.*4ee0a3c07f
// Size: 0x38 (Inherited: 0x38)
struct U*4ee0a3c07f : U*bdc40fd461 {
};

// Class Engine.*2827acbe4b
// Size: 0x38 (Inherited: 0x38)
struct U*2827acbe4b : U*c5e4cb7a4d {
};

// Class Engine.*8610e413d0
// Size: 0x30 (Inherited: 0x30)
struct U*8610e413d0 : UBlueprintFunctionLibrary {

	void *8d986b3aca(); // Function Engine.*8610e413d0.*8d986b3aca // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682f870
	void *62f534e42a(); // Function Engine.*8610e413d0.*62f534e42a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6831ce4
	void *4efc6d251e(); // Function Engine.*8610e413d0.*4efc6d251e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682f354
	void *14c669b42e(); // Function Engine.*8610e413d0.*14c669b42e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682ff20
	void *c201e59fbd(); // Function Engine.*8610e413d0.*c201e59fbd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x682fe44
};

// Class Engine.*b578d37854
// Size: 0x30 (Inherited: 0x30)
struct U*b578d37854 : UBlueprintFunctionLibrary {

	void LogLocation(); // Function Engine.*b578d37854.LogLocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6835810
	void *0889c637bf(); // Function Engine.*b578d37854.*0889c637bf // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68355e0
	void LogText(); // Function Engine.*b578d37854.LogText // Final|Native|Static|Public|BlueprintCallable // @ game+0x6835a78
};

// Class Engine.*55091781de
// Size: 0x40 (Inherited: 0x30)
struct U*55091781de : UObject {
	struct UEdGraphNode* Node; // 0x30(0x08)
	struct FColor *a79b134445; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.AnimBlueprintGeneratedClass
// Size: 0x438 (Inherited: 0x3c8)
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct TArray<struct F*426a5c2b9f> *930da18c23; // 0x3d0(0x10)
	struct USkeleton* TargetSkeleton; // 0x3e0(0x08)
	struct TArray<struct FAnimNotifyEvent> *aa7eeb7962; // 0x3e8(0x10)
	int32 *d30f64b6dd; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct TArray<int32> *ec05e139be; // 0x400(0x10)
	char pad_410[0x18]; // 0x410(0x18)
	struct TArray<struct FName> *672092d76b; // 0x428(0x10)
};

// Class Engine.BodySetup
// Size: 0x3b0 (Inherited: 0x30)
struct UBodySetup : UObject {
	struct F*b1850c8096 *80b9fb922b; // 0x30(0x48)
	struct FName BoneName; // 0x78(0x08)
	enum class EPhysicsType PhysicsType; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	char bAlwaysFullAnimWeight : 1; // 0x84(0x01)
	char bConsiderForBounds : 1; // 0x84(0x01)
	char *0e73fa0501 : 1; // 0x84(0x01)
	char *37c9a7c76f : 1; // 0x84(0x01)
	char *da966dab1e : 1; // 0x84(0x01)
	char *bf7bb012c1 : 1; // 0x84(0x01)
	char *b3ec6c1919 : 1; // 0x84(0x01)
	char pad_84_7 : 1; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x88(0x08)
	enum class *ab299be711 CollisionReponse; // 0x90(0x01)
	enum class ECollisionTraceFlag *a4be1e0fa2; // 0x91(0x01)
	char pad_92[0xe]; // 0x92(0x0e)
	struct FBodyInstance DefaultInstance; // 0xa0(0x230)
	struct F*de38513b35 *de38513b35; // 0x2d0(0x10)
	float MinContactOffset; // 0x2e0(0x04)
	float BuildScale; // 0x2e4(0x04)
	struct FVector BuildScale3D; // 0x2e8(0x0c)
	char pad_2F4[0xbc]; // 0x2f4(0xbc)
};

// Class Engine.*62eb7cfdfd
// Size: 0x3e0 (Inherited: 0x3b0)
struct U*62eb7cfdfd : UBodySetup {
	struct F*6922805fd0 *2f3eabe98b; // 0x3b0(0x30)
};

// Class Engine.PhysicsAsset
// Size: 0x110 (Inherited: 0x30)
struct UPhysicsAsset : UObject {
	struct TArray<int32> *6bbd754b6d; // 0x30(0x10)
	struct TArray<struct USkeletalBodySetup*> *83e3bc961d; // 0x40(0x10)
	struct TArray<struct UPhysicsConstraintTemplate*> *875003d086; // 0x50(0x10)
	char pad_60[0xa0]; // 0x60(0xa0)
	struct TArray<struct UBodySetup*> BodySetup; // 0x100(0x10)
};

// Class Engine.SkeletalBodySetup
// Size: 0x3c0 (Inherited: 0x3b0)
struct USkeletalBodySetup : UBodySetup {
	struct TArray<struct F*2fcd8cc2b2> *a8d9e92905; // 0x3b0(0x10)
};

// Class Engine.*95d9f6ced5
// Size: 0x40 (Inherited: 0x30)
struct U*95d9f6ced5 : UObject {
	struct TArray<struct FInputBlendPose> *b54b50db37; // 0x30(0x10)
};

// Class Engine.*ba77e92031
// Size: 0x58 (Inherited: 0x30)
struct U*ba77e92031 : UObject {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	struct TArray<struct FString> *0b01cd737a; // 0x48(0x10)
};

// Class Engine.*178d04d42b
// Size: 0x40 (Inherited: 0x30)
struct U*178d04d42b : UObject {
	float *e58a3b1158; // 0x30(0x04)
	struct FIntPoint Location; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.Breakpoint
// Size: 0x48 (Inherited: 0x30)
struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UEdGraphNode* Node; // 0x38(0x08)
	char *92650f4471 : 1; // 0x40(0x01)
	char *aade429b90 : 1; // 0x40(0x01)
	char *e43faea80b : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.BrushBuilder
// Size: 0x88 (Inherited: 0x30)
struct UBrushBuilder : UObject {
	struct FString *8e057f880f; // 0x30(0x10)
	struct FString Tooltip; // 0x40(0x10)
	char *59ff87b409 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FVector> Vertices; // 0x58(0x10)
	struct TArray<struct F*b53522766a> Polys; // 0x68(0x10)
	struct FName Layer; // 0x78(0x08)
	char *24d5de6ec3 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ButtonStyleAsset
// Size: 0x2d8 (Inherited: 0x30)
struct UButtonStyleAsset : UObject {
	struct F*d5cdd95f37 *d5cdd95f37; // 0x30(0x2a8)
};

// Class Engine.CameraAnim
// Size: 0x5e0 (Inherited: 0x30)
struct UCameraAnim : UObject {
	struct U*e3d2da250a* *eee4f230c8; // 0x30(0x08)
	float AnimLength; // 0x38(0x04)
	struct FBox BoundingBox; // 0x3c(0x1c)
	char *e231bfa1a1 : 1; // 0x58(0x01)
	char *aac45e143a : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float *5d0f61c14f; // 0x5c(0x04)
	struct FPostProcessSettings *287c44571f; // 0x60(0x570)
	float *a57471c92e; // 0x5d0(0x04)
	char pad_5D4[0xc]; // 0x5d4(0x0c)
};

// Class Engine.*de6aae17ea
// Size: 0x120 (Inherited: 0x30)
struct U*de6aae17ea : UObject {
	struct UCameraAnim* *308e812b9c; // 0x30(0x08)
	struct U*27ba39bd87* *27ba39bd87; // 0x38(0x08)
	char pad_40[0x18]; // 0x40(0x18)
	float PlayRate; // 0x58(0x04)
	char pad_5C[0x14]; // 0x5c(0x14)
	struct U*423dfd5b29* *1fa87c2ae5; // 0x70(0x08)
	struct U*b12b5709af* *7ce2782896; // 0x78(0x08)
	enum class ECameraAnimPlaySpace *b6a684a682; // 0x80(0x01)
	char pad_81[0x9f]; // 0x81(0x9f)

	void SetDuration(); // Function Engine.*de6aae17ea.SetDuration // Final|Native|Public|BlueprintCallable // @ game+0x68383c0
	void SetScale(); // Function Engine.*de6aae17ea.SetScale // Final|Native|Public|BlueprintCallable // @ game+0x6838c5c
	void Stop(); // Function Engine.*de6aae17ea.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6839c0c
};

// Class Engine.*ea345062c7
// Size: 0x50 (Inherited: 0x30)
struct U*ea345062c7 : UObject {
	char *f806e08ca5 : 1; // 0x30(0x01)
	char bExclusive : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	bool Priority; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct APlayerCameraManager* CameraOwner; // 0x38(0x08)
	float AlphaInTime; // 0x40(0x04)
	float AlphaOutTime; // 0x44(0x04)
	float Alpha; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	void *1abc07ca04(); // Function Engine.*ea345062c7.*1abc07ca04 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x682a51c
	void *35a9047805(); // Function Engine.*ea345062c7.*35a9047805 // Native|Public|BlueprintCallable // @ game+0x5a6f65c
	void *d35e8bc247(); // Function Engine.*ea345062c7.*d35e8bc247 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdab090
	void *8895e00330(); // Function Engine.*ea345062c7.*8895e00330 // Native|Public|BlueprintCallable // @ game+0x682d2c8
	void BlueprintModifyCamera(); // Function Engine.*ea345062c7.BlueprintModifyCamera // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22ddc4
	void BlueprintModifyPostProcess(); // Function Engine.*ea345062c7.BlueprintModifyPostProcess // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
};

// Class Engine.*436388bfde
// Size: 0x68 (Inherited: 0x50)
struct U*436388bfde : U*ea345062c7 {
	struct TArray<struct UCameraShake*> *1398dcb0d4; // 0x50(0x10)
	float *50cff3ed94; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.Canvas
// Size: 0x2f0 (Inherited: 0x30)
struct UCanvas : UObject {
	float OrgX; // 0x30(0x04)
	float OrgY; // 0x34(0x04)
	float *e7afc99bde; // 0x38(0x04)
	float *1cb4ab84f1; // 0x3c(0x04)
	struct FColor DrawColor; // 0x40(0x04)
	char *ba0ab01520 : 1; // 0x44(0x01)
	char *07c809e203 : 1; // 0x44(0x01)
	char *bcf02c972b : 1; // 0x44(0x01)
	char pad_44_3 : 5; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32 SizeX; // 0x48(0x04)
	int32 SizeY; // 0x4c(0x04)
	struct FPlane *e2f36d0902; // 0x50(0x10)
	struct UTexture2D* DefaultTexture; // 0x60(0x08)
	struct UTexture2D* GradientTexture0; // 0x68(0x08)
	struct U*1a90702b7b* *1a90702b7b; // 0x70(0x08)
	char pad_78[0x278]; // 0x78(0x278)

	void *411d1afe45(); // Function Engine.Canvas.*411d1afe45 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6832acc
	void *8423334782(); // Function Engine.Canvas.*8423334782 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6834b20
	void *f268b391c9(); // Function Engine.Canvas.*f268b391c9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6833020
	void *d3ee9f0fea(); // Function Engine.Canvas.*d3ee9f0fea // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x683380c
	void *750cb34243(); // Function Engine.Canvas.*750cb34243 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6833148
	void *8b24afb08d(); // Function Engine.Canvas.*8b24afb08d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6833640
	void *7e9e72f33b(); // Function Engine.Canvas.*7e9e72f33b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x683329c
	void *7b15aeae2c(); // Function Engine.Canvas.*7b15aeae2c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6834c4c
	void *05305dc5d0(); // Function Engine.Canvas.*05305dc5d0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6833c30
	void *f59e3e5a0a(); // Function Engine.Canvas.*f59e3e5a0a // Final|Native|Public|BlueprintCallable // @ game+0x6833f4c
	void *6422081192(); // Function Engine.Canvas.*6422081192 // Final|Native|Public|BlueprintCallable // @ game+0x6833508
	void *d5ebe0e136(); // Function Engine.Canvas.*d5ebe0e136 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6834824
	void *c2be887da1(); // Function Engine.Canvas.*c2be887da1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6832978
};

// Class Engine.*29f7d38a7b
// Size: 0x88 (Inherited: 0x70)
struct U*29f7d38a7b : UChannel {
	char pad_70[0x18]; // 0x70(0x18)
};

// Class Engine.VoiceChannel
// Size: 0x80 (Inherited: 0x70)
struct UVoiceChannel : UChannel {
	char pad_70[0x10]; // 0x70(0x10)
};

// Class Engine.*1ceec92b0d
// Size: 0x610 (Inherited: 0x30)
struct U*1ceec92b0d : UObject {
	struct F*ea1c6f5c2e *ea1c6f5c2e; // 0x30(0x5e0)
};

// Class Engine.Commandlet
// Size: 0x88 (Inherited: 0x30)
struct UCommandlet : UObject {
	struct FString HelpDescription; // 0x30(0x10)
	struct FString HelpUsage; // 0x40(0x10)
	struct FString HelpWebLink; // 0x50(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x60(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x70(0x10)
	char IsServer : 1; // 0x80(0x01)
	char IsClient : 1; // 0x80(0x01)
	char IsEditor : 1; // 0x80(0x01)
	char LogToConsole : 1; // 0x80(0x01)
	char ShowErrorCount : 1; // 0x80(0x01)
	char pad_80_5 : 3; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*c15025d53a
// Size: 0xd0 (Inherited: 0x30)
struct U*c15025d53a : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UNetDriver* NetDriver; // 0x38(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x40(0x08)
	char pad_48[0x88]; // 0x48(0x88)
};

// Class Engine.GPCFakeEngine
// Size: 0xf50 (Inherited: 0xf50)
struct UGPCFakeEngine : UEngine {
};

// Class Engine.GatherPackageChainCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UGatherPackageChainCommandlet : UCommandlet {
};

// Class Engine.PluginCommandlet
// Size: 0xa8 (Inherited: 0x88)
struct UPluginCommandlet : UCommandlet {
	char pad_88[0x20]; // 0x88(0x20)
};

// Class Engine.SmokeTestCommandlet
// Size: 0x88 (Inherited: 0x88)
struct USmokeTestCommandlet : UCommandlet {
};

// Class Engine.*70e791465d
// Size: 0x30 (Inherited: 0x30)
struct U*70e791465d : UInterface {
};

// Class Engine.*1fa4fa0482
// Size: 0x1f8 (Inherited: 0x38)
struct U*1fa4fa0482 : UCurveBase {
	struct FRichCurve *87b8344682[0x04]; // 0x38(0x1c0)

	void *5d9d78cb4c(); // Function Engine.*1fa4fa0482.*5d9d78cb4c // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x682fd94
};

// Class Engine.*1ba2d2b086
// Size: 0x188 (Inherited: 0x38)
struct U*1ba2d2b086 : UCurveBase {
	struct FRichCurve *87b8344682[0x03]; // 0x38(0x150)

	void *694989347b(); // Function Engine.*1ba2d2b086.*694989347b // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6831c04
};

// Class Engine.CurveEdPresetCurve
// Size: 0x30 (Inherited: 0x30)
struct UCurveEdPresetCurve : UObject {
};

// Class Engine.*5154f1be97
// Size: 0x30 (Inherited: 0x30)
struct U*5154f1be97 : UInterface {

	void GetCurveValue(); // Function Engine.*5154f1be97.GetCurveValue // Native|Event|Public|BlueprintEvent|Const // @ game+0x682f038
	void GetCurves(); // Function Engine.*5154f1be97.GetCurves // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x682f0dc
	void GetBindingName(); // Function Engine.*5154f1be97.GetBindingName // Native|Event|Public|BlueprintEvent|Const // @ game+0x5a39c70
};

// Class Engine.CurveTable
// Size: 0x88 (Inherited: 0x30)
struct UCurveTable : UObject {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class Engine.PreviewMeshCollection
// Size: 0x50 (Inherited: 0x38)
struct UPreviewMeshCollection : UDataAsset {
	struct USkeleton* Skeleton; // 0x38(0x08)
	struct TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40(0x10)
};

// Class Engine.PrimaryAssetLabel
// Size: 0x70 (Inherited: 0x38)
struct UPrimaryAssetLabel : U*d3fa1ca322 {
	struct F*18043fceb7 Rules; // 0x38(0x10)
	char *3eccd700aa : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UObject*> *8f35d1c799; // 0x50(0x10)
	struct TArray<struct UClass*> *1bef7f8043; // 0x60(0x10)
};

// Class Engine.*3ce513432f
// Size: 0x40 (Inherited: 0x38)
struct U*3ce513432f : UDataAsset {
	float *7b5d5a514f; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*055d2cb90e
// Size: 0xc0 (Inherited: 0x30)
struct U*055d2cb90e : UObject {
	int32 *c8905551b6; // 0x30(0x04)
	struct F*5263c872a6 *9d0e8e99dc; // 0x34(0x24)
	int32 RandomSeed; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FVector> *3e524f90d7; // 0x60(0x10)
	int32 *4d0617330f; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x78(0x10)
	struct TArray<struct F*4841245fc4> ChunkParameters; // 0x88(0x10)
	char pad_98[0x28]; // 0x98(0x28)
};

// Class Engine.AnimationSettings
// Size: 0x78 (Inherited: 0x40)
struct UAnimationSettings : U*5cde8540b3 {
	int32 CompressCommandletVersion; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray; // 0x48(0x10)
	struct UClass* DefaultCompressionAlgorithm; // 0x58(0x08)
	enum class AnimationCompressionFormat RotationCompressionFormat; // 0x60(0x01)
	enum class AnimationCompressionFormat TranslationCompressionFormat; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float MaxCurveError; // 0x64(0x04)
	float AlternativeCompressionThreshold; // 0x68(0x04)
	bool ForceRecompression; // 0x6c(0x01)
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x6d(0x01)
	bool bForceBelowThreshold; // 0x6e(0x01)
	bool bFirstRecompressUsingCurrentOrDefault; // 0x6f(0x01)
	bool bRaiseMaxErrorToExisting; // 0x70(0x01)
	bool bTryFixedBitwiseCompression; // 0x71(0x01)
	bool bTryPerTrackBitwiseCompression; // 0x72(0x01)
	bool bTryLinearKeyRemovalCompression; // 0x73(0x01)
	bool bTryIntervalKeyRemoval; // 0x74(0x01)
	bool bEnablePerformanceLog; // 0x75(0x01)
	bool bStripAnimationDataOnDedicatedServer; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
};

// Class Engine.AssetManagerSettings
// Size: 0xa8 (Inherited: 0x40)
struct UAssetManagerSettings : U*5cde8540b3 {
	struct TArray<struct F*141f1c5ea7> PrimaryAssetTypesToScan; // 0x40(0x10)
	struct TArray<struct FDirectoryPath> DirectoriesToExclude; // 0x50(0x10)
	struct TArray<struct F*6841a79db6> PrimaryAssetRules; // 0x60(0x10)
	bool bOnlyCookProductionAssets; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct F*f367913f49> PrimaryAssetIdRedirects; // 0x78(0x10)
	struct TArray<struct F*f367913f49> PrimaryAssetTypeRedirects; // 0x88(0x10)
	struct TArray<struct F*f367913f49> AssetPathRedirects; // 0x98(0x10)
};

// Class Engine.AudioSettings
// Size: 0xb8 (Inherited: 0x40)
struct UAudioSettings : U*5cde8540b3 {
	struct FStringAssetReference DefaultSoundClassName; // 0x40(0x10)
	struct FStringAssetReference DefaultSoundConcurrencyName; // 0x50(0x10)
	struct FStringAssetReference DefaultBaseSoundMix; // 0x60(0x10)
	struct FStringAssetReference VoiPSoundClass; // 0x70(0x10)
	float LowPassFilterResonance; // 0x80(0x04)
	int32 MaximumConcurrentStreams; // 0x84(0x04)
	struct TArray<struct F*66e470be9a> QualityLevels; // 0x88(0x10)
	char bAllowVirtualizedSounds : 1; // 0x98(0x01)
	char bDisableMasterEQ : 1; // 0x98(0x01)
	char bDisableMasterReverb : 1; // 0x98(0x01)
	char bAllowCenterChannel3DPanning : 1; // 0x98(0x01)
	char pad_98_4 : 4; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FString DialogueFilenameFormat; // 0xa0(0x10)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class Engine.ExcludedPackageSettings
// Size: 0x60 (Inherited: 0x40)
struct UExcludedPackageSettings : U*5cde8540b3 {
	struct TArray<struct FString> CommonExcludedPackages; // 0x40(0x10)
	struct TArray<struct FString> MinSpecExcludedPackages; // 0x50(0x10)
};

// Class Engine.StreamingSettings
// Size: 0x78 (Inherited: 0x40)
struct UStreamingSettings : U*5cde8540b3 {
	char AsyncLoadingThreadEnabled : 1; // 0x40(0x01)
	char WarnIfTimeLimitExceeded : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float TimeLimitExceededMultiplier; // 0x44(0x04)
	float TimeLimitExceededMinTime; // 0x48(0x04)
	int32 MinBulkDataSizeForAsyncLoading; // 0x4c(0x04)
	float AsyncIOBandwidthLimit; // 0x50(0x04)
	char UseBackgroundLevelStreaming : 1; // 0x54(0x01)
	char AsyncLoadingUseFullTimeLimit : 1; // 0x54(0x01)
	char LoadAllStreamingLevels : 1; // 0x54(0x01)
	char pad_54_3 : 5; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float AsyncLoadingTimeLimit; // 0x58(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x5c(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x60(0x04)
	int32 LevelStreamingComponentsRegistrationGranularity; // 0x64(0x04)
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x68(0x04)
	int32 LevelStreamingComponentsUnregistrationGranularity; // 0x6c(0x04)
	char EventDrivenLoaderEnabled : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.GarbageCollectionSettings
// Size: 0x60 (Inherited: 0x40)
struct UGarbageCollectionSettings : U*5cde8540b3 {
	float TimeBetweenPurgingPendingKillObjects; // 0x40(0x04)
	char FlushStreamingOnGC : 1; // 0x44(0x01)
	char AllowParallelGC : 1; // 0x44(0x01)
	char IncrementalBeginDestroyEnabled : 1; // 0x44(0x01)
	char CreateGCClusters : 1; // 0x44(0x01)
	char MergeGCClusters : 1; // 0x44(0x01)
	char ActorClusteringEnabled : 1; // 0x44(0x01)
	char BlueprintClusteringEnabled : 1; // 0x44(0x01)
	char pad_44_7 : 1; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32 NumRetriesBeforeForcingGC; // 0x48(0x04)
	int32 MaxObjectsNotConsideredByGC; // 0x4c(0x04)
	int32 SizeOfPermanentObjectPool; // 0x50(0x04)
	int32 MaxObjectsInGame; // 0x54(0x04)
	int32 MaxObjectsInEditor; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.MeshSimplificationSettings
// Size: 0x48 (Inherited: 0x40)
struct UMeshSimplificationSettings : U*5cde8540b3 {
	struct FName MeshReductionModuleName; // 0x40(0x08)
};

// Class Engine.NetworkSettings
// Size: 0x50 (Inherited: 0x40)
struct UNetworkSettings : U*5cde8540b3 {
	char bVerifyPeer : 1; // 0x40(0x01)
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 MaxRepArraySize; // 0x44(0x04)
	int32 MaxRepArrayMemory; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.PhysicsSettings
// Size: 0xf0 (Inherited: 0x40)
struct UPhysicsSettings : U*5cde8540b3 {
	float DefaultGravityZ; // 0x40(0x04)
	float DefaultTerminalVelocity; // 0x44(0x04)
	float DefaultFluidFriction; // 0x48(0x04)
	int32 SimulateScratchMemorySize; // 0x4c(0x04)
	int32 RagdollAggregateThreshold; // 0x50(0x04)
	float TriangleMeshTriangleMinAreaThreshold; // 0x54(0x04)
	bool bEnableComplexForSim; // 0x58(0x01)
	bool bEnableComplexForSimOnDedicatedServer; // 0x59(0x01)
	bool bEnablePCM; // 0x5a(0x01)
	bool bEnableStabilization; // 0x5b(0x01)
	bool bWarnMissingLocks; // 0x5c(0x01)
	bool bEnable2DPhysics; // 0x5d(0x01)
	enum class ESettingsLockedAxis LockedAxis; // 0x5e(0x01)
	enum class ESettingsDOF DefaultDegreesOfFreedom; // 0x5f(0x01)
	float BounceThresholdVelocity; // 0x60(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x64(0x01)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	float MaxAngularVelocity; // 0x68(0x04)
	float MaxDepenetrationVelocity; // 0x6c(0x04)
	float ContactOffsetMultiplier; // 0x70(0x04)
	float MinContactOffset; // 0x74(0x04)
	float MaxContactOffset; // 0x78(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x7c(0x01)
	enum class ECollisionTraceFlag DefaultShapeComplexity; // 0x7d(0x01)
	bool bDefaultHasComplexCollision; // 0x7e(0x01)
	bool bSuppressFaceRemapTable; // 0x7f(0x01)
	bool bSupportUVFromHitResults; // 0x80(0x01)
	bool bDisableActiveActors; // 0x81(0x01)
	bool bDisableCCD; // 0x82(0x01)
	char pad_83[0x1]; // 0x83(0x01)
	float MaxPhysicsDeltaTime; // 0x84(0x04)
	bool bSubstepping; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float MaxSubstepDeltaTime; // 0x8c(0x04)
	int32 MaxSubsteps; // 0x90(0x04)
	float SyncSceneSmoothingFactor; // 0x94(0x04)
	float InitialAverageFrameRate; // 0x98(0x04)
	float MaxPhysicsDeltaTimeOnDedicatedServer; // 0x9c(0x04)
	bool bSubsteppingOnDedicatedServer; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float MaxSubstepDeltaTimeOnDedicatedServer; // 0xa4(0x04)
	int32 MaxSubstepsOnDedicatedServer; // 0xa8(0x04)
	float SyncSceneSmoothingFactorOnDedicatedServer; // 0xac(0x04)
	float InitialAverageFrameRateOnDedicatedServer; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct F*694ea3d910> PhysicalSurfaces; // 0xb8(0x10)
	struct F*ffa7c96f53 DefaultBroadphaseSettings; // 0xc8(0x28)
};

// Class Engine.RendererSettings
// Size: 0xc8 (Inherited: 0x40)
struct URendererSettings : U*5cde8540b3 {
	char bMobileHDR : 1; // 0x40(0x01)
	char bMobileDisableVertexFog : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 MaxMobileCascades; // 0x44(0x04)
	enum class EMobileMSAASampleCount MobileMSAASampleCount; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	char bDiscardUnusedQualityLevels : 1; // 0x4c(0x01)
	char bOcclusionCulling : 1; // 0x4c(0x01)
	char pad_4C_2 : 6; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float MinScreenRadiusForLights; // 0x50(0x04)
	float MinScreenRadiusForEarlyZPass; // 0x54(0x04)
	float MinScreenRadiusForCSMdepth; // 0x58(0x04)
	char bPrecomputedVisibilityWarning : 1; // 0x5c(0x01)
	char bTextureStreaming : 1; // 0x5c(0x01)
	char bUseDXT5NormalMaps : 1; // 0x5c(0x01)
	char bClearCoatEnableSecondNormal : 1; // 0x5c(0x01)
	char pad_5C_4 : 4; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32 ReflectionCaptureResolution; // 0x60(0x04)
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x64(0x01)
	char bForwardShading : 1; // 0x64(0x01)
	char bVertexFoggingForOpaque : 1; // 0x64(0x01)
	char bAllowStaticLighting : 1; // 0x64(0x01)
	char bUseNormalMapsForStaticLighting : 1; // 0x64(0x01)
	char bGenerateMeshDistanceFields : 1; // 0x64(0x01)
	char bEightBitMeshDistanceFields : 1; // 0x64(0x01)
	char bGenerateLandscapeGIData : 1; // 0x64(0x01)
	char bCompressMeshDistanceFields : 1; // 0x65(0x01)
	char pad_65_1 : 7; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	float TessellationAdaptivePixelsPerTriangle; // 0x68(0x04)
	char bSeparateTranslucency : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	enum class *ed001dc914 TranslucentSortPolicy; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FVector TranslucentSortAxis; // 0x74(0x0c)
	enum class ECustomDepthStencil CustomDepthStencil; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	char bCustomDepthTaaJitter : 1; // 0x84(0x01)
	char bDefaultFeatureBloom : 1; // 0x84(0x01)
	char bDefaultFeatureAmbientOcclusion : 1; // 0x84(0x01)
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x84(0x01)
	char bDefaultFeatureAutoExposure : 1; // 0x84(0x01)
	char pad_84_5 : 3; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	enum class EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	char bDefaultFeatureMotionBlur : 1; // 0x8c(0x01)
	char bDefaultFeatureLensFlare : 1; // 0x8c(0x01)
	char bTemporalUpsampling : 1; // 0x8c(0x01)
	char pad_8C_3 : 5; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	enum class *2781f012c1 DefaultFeatureAntiAliasing; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	char bStencilForLODDither : 1; // 0x94(0x01)
	char pad_94_1 : 7; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	enum class EEarlyZPass EarlyZPass; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	char bEarlyZPassMovable : 1; // 0x9c(0x01)
	char bEarlyZPassOnlyMaterialMasking : 1; // 0x9c(0x01)
	char bEarlyZPassForceFull : 1; // 0x9c(0x01)
	char bDBuffer : 1; // 0x9c(0x01)
	char pad_9C_4 : 4; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	enum class EClearSceneOptions ClearSceneMethod; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	char bBasePassOutputsVelocity : 1; // 0xa4(0x01)
	char bSelectiveBasePassOutputs : 1; // 0xa4(0x01)
	char bDefaultParticleCutouts : 1; // 0xa4(0x01)
	char bGlobalClipPlane : 1; // 0xa4(0x01)
	char pad_A4_4 : 4; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	enum class EGBufferFormat GBufferFormat; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	char bUseGPUMorphTargets : 1; // 0xac(0x01)
	char bNvidiaAftermathEnabled : 1; // 0xac(0x01)
	char bInstancedStereo : 1; // 0xac(0x01)
	char bMultiView : 1; // 0xac(0x01)
	char bMobileMultiView : 1; // 0xac(0x01)
	char bMobileMultiViewDirect : 1; // 0xac(0x01)
	char bMonoscopicFarField : 1; // 0xac(0x01)
	char pad_AC_7 : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float WireframeCullThreshold; // 0xb0(0x04)
	char bSupportStationarySkylight : 1; // 0xb4(0x01)
	char bSupportLowQualityLightmaps : 1; // 0xb4(0x01)
	char bSupportPointLightWholeSceneShadows : 1; // 0xb4(0x01)
	char bSupportAtmosphericFog : 1; // 0xb4(0x01)
	char bSupportSkinCacheShaders : 1; // 0xb4(0x01)
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xb4(0x01)
	char bMobileAllowDistanceFieldShadows : 1; // 0xb4(0x01)
	char bMobileAllowMovableDirectionalLights : 1; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	uint32 MobileNumDynamicPointLights; // 0xb8(0x04)
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xbc(0x01)
	char pad_BC_1 : 7; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float SkinCacheSceneMemoryLimitInMB; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class Engine.RendererOverrideSettings
// Size: 0x48 (Inherited: 0x40)
struct URendererOverrideSettings : U*5cde8540b3 {
	char bSupportAllShaderPermutations : 1; // 0x40(0x01)
	char bForceRecomputeTangents : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.UserInterfaceSettings
// Size: 0x210 (Inherited: 0x40)
struct UUserInterfaceSettings : U*5cde8540b3 {
	enum class ERenderFocusRule RenderFocusRule; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TMap<enum class EMouseCursor, struct F*1a10c5dd28> HardwareCursors; // 0x48(0x50)
	struct TMap<enum class EMouseCursor, struct FStringClassReference> SoftwareCursors; // 0x98(0x50)
	struct FStringClassReference DefaultCursor; // 0xe8(0x10)
	struct FStringClassReference TextEditBeamCursor; // 0xf8(0x10)
	struct FStringClassReference CrosshairsCursor; // 0x108(0x10)
	struct FStringClassReference HandCursor; // 0x118(0x10)
	struct FStringClassReference GrabHandCursor; // 0x128(0x10)
	struct FStringClassReference GrabHandClosedCursor; // 0x138(0x10)
	struct FStringClassReference SlashedCircleCursor; // 0x148(0x10)
	float ApplicationScale; // 0x158(0x04)
	enum class EUIScalingRule UIScaleRule; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	struct FStringClassReference CustomScalingRuleClass; // 0x160(0x10)
	struct FRuntimeFloatCurve UIScaleCurve; // 0x170(0x78)
	bool bLoadWidgetsOnDedicatedServer; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct TArray<struct UObject*> *d78f0caf59; // 0x1f0(0x10)
	struct UClass* *6073098e7a; // 0x200(0x08)
	struct UDPICustomScalingRule* *bece28f6b7; // 0x208(0x08)
};

// Class Engine.DeviceProfileManager
// Size: 0x110 (Inherited: 0x30)
struct UDeviceProfileManager : UObject {
	struct TArray<struct UObject*> Profiles; // 0x30(0x10)
	char pad_40[0xd0]; // 0x40(0xd0)
};

// Class Engine.DialogueVoice
// Size: 0x48 (Inherited: 0x30)
struct UDialogueVoice : UObject {
	enum class EGrammaticalGender Gender; // 0x30(0x01)
	enum class EGrammaticalNumber Plurality; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FGuid *3d95bb485d; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.DialogueWave
// Size: 0x78 (Inherited: 0x30)
struct UDialogueWave : UObject {
	char *8a3cc4a7c8 : 1; // 0x30(0x01)
	char bOverride_SubtitleOverride : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString *622c8764d8; // 0x38(0x10)
	struct FString *3d6813da97; // 0x48(0x10)
	struct TArray<struct F*3e9e0dd38d> ContextMappings; // 0x58(0x10)
	struct FGuid *3d95bb485d; // 0x68(0x10)
};

// Class Engine.Distribution
// Size: 0x38 (Inherited: 0x30)
struct UDistribution : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.*137fe4d756
// Size: 0x40 (Inherited: 0x38)
struct U*137fe4d756 : UDistribution {
	char *ef0ba1cff8 : 1; // 0x38(0x01)
	char pad_38_1 : 1; // 0x38(0x01)
	char *6f6a0ba17c : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*87764d2e43
// Size: 0x48 (Inherited: 0x40)
struct U*87764d2e43 : U*137fe4d756 {
	float Constant; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*3f4598f881
// Size: 0x68 (Inherited: 0x48)
struct U*3f4598f881 : U*87764d2e43 {
	struct FName ParameterName; // 0x48(0x08)
	float *d06b5e0c4b; // 0x50(0x04)
	float *716d12f667; // 0x54(0x04)
	float *01cec3e680; // 0x58(0x04)
	float *8e4a070922; // 0x5c(0x04)
	enum class *13640aca16 *474527ade7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.DistributionFloatParticleParameter
// Size: 0x68 (Inherited: 0x68)
struct UDistributionFloatParticleParameter : U*3f4598f881 {
};

// Class Engine.*1b820e48b1
// Size: 0x58 (Inherited: 0x40)
struct U*1b820e48b1 : U*137fe4d756 {
	struct FInterpCurveFloat *6f4370848d; // 0x40(0x18)
};

// Class Engine.*e6459a55f2
// Size: 0x48 (Inherited: 0x40)
struct U*e6459a55f2 : U*137fe4d756 {
	float Min; // 0x40(0x04)
	float Max; // 0x44(0x04)
};

// Class Engine.*9f4cbd39e5
// Size: 0x58 (Inherited: 0x40)
struct U*9f4cbd39e5 : U*137fe4d756 {
	struct FInterpCurveVector2D *6f4370848d; // 0x40(0x18)
};

// Class Engine.*422628e054
// Size: 0x40 (Inherited: 0x38)
struct U*422628e054 : UDistribution {
	char *ef0ba1cff8 : 1; // 0x38(0x01)
	char *285abea55f : 1; // 0x38(0x01)
	char *6f6a0ba17c : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*a0b7a497c4
// Size: 0x58 (Inherited: 0x40)
struct U*a0b7a497c4 : U*422628e054 {
	struct FVector Constant; // 0x40(0x0c)
	char *5a8b292a52 : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	enum class *d405335704 *120ff8fd00; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.*28aa1ec097
// Size: 0x98 (Inherited: 0x58)
struct U*28aa1ec097 : U*a0b7a497c4 {
	struct FName ParameterName; // 0x58(0x08)
	struct FVector *d06b5e0c4b; // 0x60(0x0c)
	struct FVector *716d12f667; // 0x6c(0x0c)
	struct FVector *01cec3e680; // 0x78(0x0c)
	struct FVector *8e4a070922; // 0x84(0x0c)
	enum class *13640aca16 *8638d796f0[0x03]; // 0x90(0x03)
	char pad_93[0x5]; // 0x93(0x05)
};

// Class Engine.DistributionVectorParticleParameter
// Size: 0x98 (Inherited: 0x98)
struct UDistributionVectorParticleParameter : U*28aa1ec097 {
};

// Class Engine.*7b80fb5b5d
// Size: 0x60 (Inherited: 0x40)
struct U*7b80fb5b5d : U*422628e054 {
	struct FInterpCurveVector *6f4370848d; // 0x40(0x18)
	char *5a8b292a52 : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class *d405335704 *120ff8fd00; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.*56781538d7
// Size: 0x68 (Inherited: 0x40)
struct U*56781538d7 : U*422628e054 {
	struct FVector Max; // 0x40(0x0c)
	struct FVector Min; // 0x4c(0x0c)
	char *5a8b292a52 : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class *d405335704 *120ff8fd00; // 0x5c(0x01)
	enum class *ca25bbc2a0 *589628b300[0x03]; // 0x5d(0x03)
	char *908d11f9ca : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*d55567cc8f
// Size: 0x68 (Inherited: 0x40)
struct U*d55567cc8f : U*422628e054 {
	struct FInterpCurveTwoVectors *6f4370848d; // 0x40(0x18)
	char *261476a453 : 1; // 0x58(0x01)
	char *fd939c2804 : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class *d405335704 *120ff8fd00[0x02]; // 0x5c(0x02)
	enum class *ca25bbc2a0 *589628b300[0x03]; // 0x5e(0x03)
	char pad_61[0x3]; // 0x61(0x03)
	char *908d11f9ca : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.DPICustomScalingRule
// Size: 0x30 (Inherited: 0x30)
struct UDPICustomScalingRule : UObject {
};

// Class Engine.*cdcaa442f5
// Size: 0x30 (Inherited: 0x30)
struct U*cdcaa442f5 : UObject {
};

// Class Engine.*7cfe1d1b10
// Size: 0x40 (Inherited: 0x30)
struct U*7cfe1d1b10 : U*cdcaa442f5 {
	struct TArray<struct F*b36bc1f2de> *07a574de3a; // 0x30(0x10)
};

// Class Engine.*99e3821cc8
// Size: 0x30 (Inherited: 0x30)
struct U*99e3821cc8 : U*cdcaa442f5 {
};

// Class Engine.*0a928bde3e
// Size: 0x40 (Inherited: 0x30)
struct U*0a928bde3e : U*99e3821cc8 {
	struct TArray<struct F*062fdaa0ce> *6ee0e9d1cf; // 0x30(0x10)
};

// Class Engine.*b92251ec7e
// Size: 0x40 (Inherited: 0x30)
struct U*b92251ec7e : U*99e3821cc8 {
	struct TArray<struct F*8422347cf3> *9c733444c5; // 0x30(0x10)
};

// Class Engine.*0b9330b6ef
// Size: 0x40 (Inherited: 0x30)
struct U*0b9330b6ef : U*99e3821cc8 {
	struct TArray<struct F*1a61e6dd37> *e4343f0d6e; // 0x30(0x10)
};

// Class Engine.*b1ebba501e
// Size: 0x40 (Inherited: 0x40)
struct U*b1ebba501e : U*0b9330b6ef {
};

// Class Engine.*8baf9848b5
// Size: 0x40 (Inherited: 0x30)
struct U*8baf9848b5 : U*99e3821cc8 {
	struct TArray<struct F*850d970b7b> *d57ec12780; // 0x30(0x10)
};

// Class Engine.*4334385383
// Size: 0x40 (Inherited: 0x30)
struct U*4334385383 : U*99e3821cc8 {
	struct TArray<struct F*58db994419> *6de60f76b1; // 0x30(0x10)
};

// Class Engine.EdGraph
// Size: 0xc0 (Inherited: 0x30)
struct UEdGraph : UObject {
	struct UClass* Schema; // 0x30(0x08)
	struct TArray<struct UEdGraphNode*> Nodes; // 0x38(0x10)
	char *ad2b9ed579 : 1; // 0x48(0x01)
	char *5bc22113c5 : 1; // 0x48(0x01)
	char *7c7faeed1c : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x77]; // 0x49(0x77)
};

// Class Engine.*13e2ca2242
// Size: 0xc8 (Inherited: 0xa8)
struct U*13e2ca2242 : UEdGraphNode {
	struct FString Link; // 0xa8(0x10)
	struct FString Excerpt; // 0xb8(0x10)
};

// Class Engine.*00ef7a7928
// Size: 0x30 (Inherited: 0x30)
struct U*00ef7a7928 : UObject {
};

// Class Engine.*f47b9f9db6
// Size: 0x30 (Inherited: 0x30)
struct U*f47b9f9db6 : UInterface {
};

// Class Engine.EndUserSettings
// Size: 0x40 (Inherited: 0x30)
struct UEndUserSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	bool bSendAnonymousUsageDataToEpic; // 0x38(0x01)
	bool bSendMeanTimeBetweenFailureDataToEpic; // 0x39(0x01)
	bool bAllowUserIdInUsageData; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// Class Engine.EngineHandlerComponentFactory
// Size: 0x30 (Inherited: 0x30)
struct UEngineHandlerComponentFactory : U*69f5424441 {
};

// Class Engine.*9535b9aebb
// Size: 0x70 (Inherited: 0x30)
struct U*9535b9aebb : UObject {
	struct UClass* *a9bc0e3835; // 0x30(0x08)
	struct UObject* *3c31ff16fc; // 0x38(0x08)
	struct TArray<struct FString> *84d9f27196; // 0x40(0x10)
	struct TArray<struct FString> *749944e94a; // 0x50(0x10)
	int32 *e9fdca4b13; // 0x60(0x04)
	int32 *22296d6911; // 0x64(0x04)
	char *6a191a4073 : 1; // 0x68(0x01)
	char *c312838659 : 1; // 0x68(0x01)
	char *a6d54abfe7 : 1; // 0x68(0x01)
	char pad_68_3 : 5; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*75f1be6fae
// Size: 0x58 (Inherited: 0x30)
struct U*75f1be6fae : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class Engine.*6dfe3240af
// Size: 0x58 (Inherited: 0x30)
struct U*6dfe3240af : U*401688bf57 {
	struct TArray<struct FVector2D> Points; // 0x30(0x10)
	struct TArray<struct F*a33400ce28> Instances; // 0x40(0x10)
	struct U*75f1be6fae* Manager; // 0x50(0x08)
};

// Class Engine.*242aced217
// Size: 0xe0 (Inherited: 0x30)
struct U*242aced217 : UObject {
	struct F*ecf6e0eed3 Data; // 0x30(0xb0)
};

// Class Engine.Font
// Size: 0x1c8 (Inherited: 0x30)
struct UFont : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EFontCacheType *b0b3915759; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*f9faf08d7f> Characters; // 0x40(0x10)
	struct TArray<struct UTexture2D*> Textures; // 0x50(0x10)
	int32 *0f6db10730; // 0x60(0x04)
	float *fb161daf30; // 0x64(0x04)
	float Ascent; // 0x68(0x04)
	float Descent; // 0x6c(0x04)
	float Leading; // 0x70(0x04)
	int32 Kerning; // 0x74(0x04)
	struct F*ecf6e0eed3 ImportOptions; // 0x78(0xb0)
	int32 *7039902c31; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<int32> *c78f7b7c6e; // 0x130(0x10)
	float *a9162dd93c; // 0x140(0x04)
	int32 *f58b9fe4da; // 0x144(0x04)
	struct FName *ca1357c5b3; // 0x148(0x08)
	struct F*31082a6d69 *31082a6d69; // 0x150(0x28)
	char pad_178[0x50]; // 0x178(0x50)
};

// Class Engine.FontFace
// Size: 0x60 (Inherited: 0x30)
struct UFontFace : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString SourceFilename; // 0x38(0x10)
	enum class EFontHinting Hinting; // 0x48(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x49(0x01)
	enum class EFontLoadingPolicy LoadingPolicyConsole; // 0x4a(0x01)
	enum class EFontLayoutMethod LayoutMethod; // 0x4b(0x01)
	char pad_4C[0x14]; // 0x4c(0x14)
};

// Class Engine.*3e3af884c4
// Size: 0x30 (Inherited: 0x30)
struct U*3e3af884c4 : UObject {
};

// Class Engine.HapticFeedbackEffect_Buffer
// Size: 0x70 (Inherited: 0x30)
struct UHapticFeedbackEffect_Buffer : U*3e3af884c4 {
	struct TArray<bool> *4d16f0a0cb; // 0x30(0x10)
	int32 SampleRate; // 0x40(0x04)
	char pad_44[0x2c]; // 0x44(0x2c)
};

// Class Engine.HapticFeedbackEffect_Curve
// Size: 0x120 (Inherited: 0x30)
struct UHapticFeedbackEffect_Curve : U*3e3af884c4 {
	struct FHapticFeedbackDetails_Curve HapticDetails; // 0x30(0xf0)
};

// Class Engine.HapticFeedbackEffect_SoundWave
// Size: 0x68 (Inherited: 0x30)
struct UHapticFeedbackEffect_SoundWave : U*3e3af884c4 {
	struct USoundWave* SoundWave; // 0x30(0x08)
	char pad_38[0x30]; // 0x38(0x30)
};

// Class Engine.InheritableComponentHandler
// Size: 0x50 (Inherited: 0x30)
struct UInheritableComponentHandler : UObject {
	struct TArray<struct F*b577448d97> Records; // 0x30(0x10)
	struct TArray<struct UActorComponent*> *3aa39ae115; // 0x40(0x10)
};

// Class Engine.InputSettings
// Size: 0xb0 (Inherited: 0x30)
struct UInputSettings : UObject {
	struct TArray<struct FInputAxisConfigEntry> AxisConfig; // 0x30(0x10)
	char bAltEnterTogglesFullscreen : 1; // 0x40(0x01)
	char bF11TogglesFullscreen : 1; // 0x40(0x01)
	char bUseMouseForTouch : 1; // 0x40(0x01)
	char bEnableMouseSmoothing : 1; // 0x40(0x01)
	char bEnableFOVScaling : 1; // 0x40(0x01)
	char pad_40_5 : 3; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float FOVScale; // 0x44(0x04)
	float DoubleClickTime; // 0x48(0x04)
	bool bCaptureMouseOnLaunch; // 0x4c(0x01)
	enum class EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x4d(0x01)
	bool bDefaultViewportMouseLock; // 0x4e(0x01)
	enum class EMouseLockMode DefaultViewportMouseLockMode; // 0x4f(0x01)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x50(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0x60(0x10)
	bool bAlwaysShowTouchInterface; // 0x70(0x01)
	bool bShowConsoleOnFourFingerTap; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct FStringAssetReference DefaultTouchInterface; // 0x78(0x10)
	struct FKey ConsoleKey; // 0x88(0x18)
	struct TArray<struct FKey> ConsoleKeys; // 0xa0(0x10)
};

// Class Engine.InterpCurveEdSetup
// Size: 0x48 (Inherited: 0x30)
struct UInterpCurveEdSetup : UObject {
	struct TArray<struct F*04a25d94c7> Tabs; // 0x30(0x10)
	int32 *853b9629e1; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.InterpData
// Size: 0x78 (Inherited: 0x30)
struct UInterpData : UObject {
	float InterpLength; // 0x30(0x04)
	float *1cbb0846ad; // 0x34(0x04)
	struct TArray<struct U*e3d2da250a*> *d32619165e; // 0x38(0x10)
	struct UInterpCurveEdSetup* *ff525ff7dd; // 0x48(0x08)
	float *7c45ae5005; // 0x50(0x04)
	float *dd4c3cf29c; // 0x54(0x04)
	char *25baedba5d : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct U*a5f71b1e91* *d0fc9c1ba5; // 0x60(0x08)
	struct TArray<struct FName> *0e8d60df63; // 0x68(0x10)
};

// Class Engine.*dedaa4862d
// Size: 0x40 (Inherited: 0x30)
struct U*dedaa4862d : UObject {
	struct FString Caption; // 0x30(0x10)
};

// Class Engine.*58b76cdff3
// Size: 0x40 (Inherited: 0x40)
struct U*58b76cdff3 : U*dedaa4862d {
};

// Class Engine.*1fa9a38fa9
// Size: 0x40 (Inherited: 0x40)
struct U*1fa9a38fa9 : U*dedaa4862d {
};

// Class Engine.*e3d2da250a
// Size: 0x58 (Inherited: 0x30)
struct U*e3d2da250a : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct U*2d530f7a8e*> *7c4ffdf279; // 0x38(0x10)
	struct FName GroupName; // 0x48(0x08)
	struct FColor *eb16cf41fb; // 0x50(0x04)
	char *2e1791687e : 1; // 0x54(0x01)
	char bVisible : 1; // 0x54(0x01)
	char *0d93014d0f : 1; // 0x54(0x01)
	char *4d7e2c58c2 : 1; // 0x54(0x01)
	char *9172b38034 : 1; // 0x54(0x01)
	char pad_54_5 : 3; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.*c7db479ecf
// Size: 0x68 (Inherited: 0x58)
struct U*c7db479ecf : U*e3d2da250a {
	struct UCameraAnim* *de6aae17ea; // 0x58(0x08)
	float *4e1addc2da; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.*a5f71b1e91
// Size: 0x58 (Inherited: 0x58)
struct U*a5f71b1e91 : U*e3d2da250a {
};

// Class Engine.*27ba39bd87
// Size: 0x50 (Inherited: 0x30)
struct U*27ba39bd87 : UObject {
	struct U*e3d2da250a* Group; // 0x30(0x08)
	struct AActor* GroupActor; // 0x38(0x08)
	struct TArray<struct U*3bd2ba0b9b*> *9a51f2d626; // 0x40(0x10)
};

// Class Engine.*eabf372146
// Size: 0x50 (Inherited: 0x50)
struct U*eabf372146 : U*27ba39bd87 {
};

// Class Engine.*2e536453f4
// Size: 0x50 (Inherited: 0x50)
struct U*2e536453f4 : U*27ba39bd87 {
};

// Class Engine.*2d530f7a8e
// Size: 0x78 (Inherited: 0x30)
struct U*2d530f7a8e : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct U*2d530f7a8e*> *dc576ac06d; // 0x40(0x10)
	struct UClass* *75495a77ec; // 0x50(0x08)
	enum class *bfc03452b3 *29a1ea0f15; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString TrackTitle; // 0x60(0x10)
	char *c747356351 : 1; // 0x70(0x01)
	char *b9e3428bb4 : 1; // 0x70(0x01)
	char *9e1526445a : 1; // 0x70(0x01)
	char *9172b38034 : 1; // 0x70(0x01)
	char *0f9d9a6cb6 : 1; // 0x70(0x01)
	char *9cdf77c1d8 : 1; // 0x70(0x01)
	char bVisible : 1; // 0x70(0x01)
	char *7c099d5ca9 : 1; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.*30ebea26d3
// Size: 0x90 (Inherited: 0x78)
struct U*30ebea26d3 : U*2d530f7a8e {
	struct TArray<struct F*8cd41f99f9> *f588dff541; // 0x78(0x10)
	struct FName PropertyName; // 0x88(0x08)
};

// Class Engine.*acdac9d583
// Size: 0x90 (Inherited: 0x78)
struct U*acdac9d583 : U*2d530f7a8e {
	struct TArray<struct F*39bb57c7aa> *c6f8c035ab; // 0x78(0x10)
	char *47be31d5ee : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*2f8c729901
// Size: 0x90 (Inherited: 0x78)
struct U*2f8c729901 : U*2d530f7a8e {
	struct TArray<struct F*76fda87b17> *31126fd5ec; // 0x78(0x10)
	char *f910bc4e96 : 1; // 0x88(0x01)
	char *3b4aa2c40a : 1; // 0x88(0x01)
	char *cb0fb35238 : 1; // 0x88(0x01)
	char *6a3384b132 : 1; // 0x88(0x01)
	char pad_88_4 : 4; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*6e2748e3e3
// Size: 0x98 (Inherited: 0x78)
struct U*6e2748e3e3 : U*2d530f7a8e {
	struct FInterpCurveFloat *68bbdff8b6; // 0x78(0x18)
	float *68048360fb; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*2fee0aac29
// Size: 0xb8 (Inherited: 0x98)
struct U*2fee0aac29 : U*6e2748e3e3 {
	struct FName SlotName; // 0x98(0x08)
	struct TArray<struct F*f6a436c9e5> *1e6b5608ce; // 0xa0(0x10)
	char *13cd415402 : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class Engine.*9ac588d197
// Size: 0xb0 (Inherited: 0x98)
struct U*9ac588d197 : U*6e2748e3e3 {
	char *94f8625a0d : 1; // 0x98(0x01)
	char *a7d566211e : 1; // 0x98(0x01)
	char pad_98_2 : 6; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FLinearColor *43c44276e7; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class Engine.*3b69a94ba7
// Size: 0xb8 (Inherited: 0x98)
struct U*3b69a94ba7 : U*6e2748e3e3 {
	struct UAnimBlueprintGeneratedClass* *c52ff7f7f9; // 0x98(0x08)
	struct UClass* *35b0a291dc; // 0xa0(0x08)
	struct FName ParamName; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class Engine.*53772a2f86
// Size: 0xb0 (Inherited: 0x98)
struct U*53772a2f86 : U*6e2748e3e3 {
	struct TArray<struct UMaterialInterface*> *e919d1d29b; // 0x98(0x10)
	struct FName ParamName; // 0xa8(0x08)
};

// Class Engine.*37c5ac84fb
// Size: 0xa0 (Inherited: 0x98)
struct U*37c5ac84fb : U*6e2748e3e3 {
	struct FName ParamName; // 0x98(0x08)
};

// Class Engine.*2b6059db25
// Size: 0xa0 (Inherited: 0x98)
struct U*2b6059db25 : U*6e2748e3e3 {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*423dfd5b29
// Size: 0xd0 (Inherited: 0x78)
struct U*423dfd5b29 : U*2d530f7a8e {
	struct FInterpCurveVector *98afa116e2; // 0x78(0x18)
	struct FInterpCurveVector *48dac84b38; // 0x90(0x18)
	struct F*d33f89aed3 *adb8d4b10b; // 0xa8(0x10)
	struct FName *aedc2a7715; // 0xb8(0x08)
	float *18556cd42f; // 0xc0(0x04)
	float *f86e4aab57; // 0xc4(0x04)
	char *ca34bb0eed : 1; // 0xc8(0x01)
	char *0126051333 : 1; // 0xc8(0x01)
	char *8d95ab00ef : 1; // 0xc8(0x01)
	char *6abd8271e7 : 1; // 0xc8(0x01)
	char *432c5bae9f : 1; // 0xc8(0x01)
	char *a7223a4b15 : 1; // 0xc8(0x01)
	char pad_C8_6 : 2; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	enum class *bacb481790 *00559283c7; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
};

// Class Engine.*e1ac022c36
// Size: 0xb0 (Inherited: 0x98)
struct U*e1ac022c36 : U*6e2748e3e3 {
	enum class *92c90abcb2 *994762506a; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct F*d33f89aed3 *adb8d4b10b; // 0xa0(0x10)
};

// Class Engine.*1b839aab93
// Size: 0x98 (Inherited: 0x98)
struct U*1b839aab93 : U*6e2748e3e3 {
};

// Class Engine.*ce1f775c02
// Size: 0x98 (Inherited: 0x78)
struct U*ce1f775c02 : U*2d530f7a8e {
	struct FInterpCurveLinearColor *81142043cb; // 0x78(0x18)
	float *68048360fb; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*8f8c32589d
// Size: 0xa0 (Inherited: 0x98)
struct U*8f8c32589d : U*ce1f775c02 {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*0183a8cc20
// Size: 0x88 (Inherited: 0x78)
struct U*0183a8cc20 : U*2d530f7a8e {
	struct TArray<struct F*ca7a93bcf9> *aafd25018a; // 0x78(0x10)
};

// Class Engine.*955361533a
// Size: 0x90 (Inherited: 0x78)
struct U*955361533a : U*2d530f7a8e {
	struct TArray<struct F*700ed3cbaf> *209d1a1af0; // 0x78(0x10)
	char *35d022ef5a : 1; // 0x88(0x01)
	char *3c4337758f : 1; // 0x88(0x01)
	char *f910bc4e96 : 1; // 0x88(0x01)
	char *3b4aa2c40a : 1; // 0x88(0x01)
	char *cb0fb35238 : 1; // 0x88(0x01)
	char pad_88_5 : 3; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*4b768f09da
// Size: 0x98 (Inherited: 0x78)
struct U*4b768f09da : U*2d530f7a8e {
	struct FInterpCurveVector *efb707c76d; // 0x78(0x18)
	float *68048360fb; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*f8a90ac0d9
// Size: 0x98 (Inherited: 0x98)
struct U*f8a90ac0d9 : U*4b768f09da {
};

// Class Engine.*78c5dbc470
// Size: 0xa0 (Inherited: 0x98)
struct U*78c5dbc470 : U*4b768f09da {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*0c9d64cd73
// Size: 0x98 (Inherited: 0x98)
struct U*0c9d64cd73 : U*4b768f09da {
};

// Class Engine.*5071a5963c
// Size: 0xb0 (Inherited: 0x98)
struct U*5071a5963c : U*4b768f09da {
	struct TArray<struct F*438b64dc3f> Sounds; // 0x98(0x10)
	char *143b7b7b53 : 1; // 0xa8(0x01)
	char *5314edc752 : 1; // 0xa8(0x01)
	char *cf7d228117 : 1; // 0xa8(0x01)
	char *24d2db6177 : 1; // 0xa8(0x01)
	char *6408506e9d : 1; // 0xa8(0x01)
	char pad_A8_5 : 3; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.*0b9a886d8d
// Size: 0xb0 (Inherited: 0x98)
struct U*0b9a886d8d : U*4b768f09da {
	struct TArray<struct UMaterialInterface*> *e919d1d29b; // 0x98(0x10)
	struct FName ParamName; // 0xa8(0x08)
};

// Class Engine.*f78e6f217f
// Size: 0xa0 (Inherited: 0x98)
struct U*f78e6f217f : U*4b768f09da {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*7089f44292
// Size: 0x90 (Inherited: 0x78)
struct U*7089f44292 : U*2d530f7a8e {
	struct TArray<struct F*a47b54e36d> *8ea0cb7da0; // 0x78(0x10)
	char *f910bc4e96 : 1; // 0x88(0x01)
	char *3b4aa2c40a : 1; // 0x88(0x01)
	char *cb0fb35238 : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*3bd2ba0b9b
// Size: 0x30 (Inherited: 0x30)
struct U*3bd2ba0b9b : UObject {
};

// Class Engine.*823df2ceb8
// Size: 0x38 (Inherited: 0x30)
struct U*823df2ceb8 : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*d61faddf12
// Size: 0x30 (Inherited: 0x30)
struct U*d61faddf12 : U*3bd2ba0b9b {
};

// Class Engine.*1316b590ad
// Size: 0x30 (Inherited: 0x30)
struct U*1316b590ad : U*3bd2ba0b9b {
};

// Class Engine.*bf68adb116
// Size: 0x38 (Inherited: 0x30)
struct U*bf68adb116 : U*3bd2ba0b9b {
	struct AActor* *9ef3cfbf66; // 0x30(0x08)
};

// Class Engine.*175671fec4
// Size: 0x38 (Inherited: 0x30)
struct U*175671fec4 : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*118ad48cc3
// Size: 0x30 (Inherited: 0x30)
struct U*118ad48cc3 : U*3bd2ba0b9b {
};

// Class Engine.*6e1242c95e
// Size: 0x48 (Inherited: 0x30)
struct U*6e1242c95e : U*3bd2ba0b9b {
	struct UAnimInstance* AnimScriptInstance; // 0x30(0x08)
	float *921177e308; // 0x38(0x04)
	char pad_3C[0xc]; // 0x3c(0x0c)
};

// Class Engine.*5fe8f2936b
// Size: 0x68 (Inherited: 0x30)
struct U*5fe8f2936b : U*3bd2ba0b9b {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x30(0x10)
	struct TArray<float> *2735f6c6fa; // 0x40(0x10)
	struct TArray<struct F*c6f92a96cc> *0f357e5a7e; // 0x50(0x10)
	struct U*53772a2f86* *d74edfc1ed; // 0x60(0x08)
};

// Class Engine.*203555ce05
// Size: 0x38 (Inherited: 0x30)
struct U*203555ce05 : U*3bd2ba0b9b {
	float *921177e308; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*b12b5709af
// Size: 0x48 (Inherited: 0x30)
struct U*b12b5709af : U*3bd2ba0b9b {
	struct FVector ResetLocation; // 0x30(0x0c)
	struct FRotator ResetRotation; // 0x3c(0x0c)
};

// Class Engine.*4eadc32ab2
// Size: 0x38 (Inherited: 0x30)
struct U*4eadc32ab2 : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*e921f03dac
// Size: 0x40 (Inherited: 0x30)
struct U*e921f03dac : U*3bd2ba0b9b {
	struct UProperty* *5981ae39f7; // 0x30(0x08)
	struct UObject* *e543823ea3; // 0x38(0x08)
};

// Class Engine.*56cbb95d67
// Size: 0x58 (Inherited: 0x40)
struct U*56cbb95d67 : U*e921f03dac {
	char pad_40[0x8]; // 0x40(0x08)
	struct UBoolProperty* BoolProperty; // 0x48(0x08)
	bool *f2fd267da8; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.*ec31a05743
// Size: 0x50 (Inherited: 0x40)
struct U*ec31a05743 : U*e921f03dac {
	char pad_40[0x8]; // 0x40(0x08)
	struct FColor *5d4116fc15; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*7bd9454df1
// Size: 0x50 (Inherited: 0x40)
struct U*7bd9454df1 : U*e921f03dac {
	char pad_40[0x8]; // 0x40(0x08)
	float *921177e308; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*2afb9e99d4
// Size: 0x58 (Inherited: 0x40)
struct U*2afb9e99d4 : U*e921f03dac {
	char pad_40[0x8]; // 0x40(0x08)
	struct FLinearColor *5d4116fc15; // 0x48(0x10)
};

// Class Engine.*b65c181e29
// Size: 0x58 (Inherited: 0x40)
struct U*b65c181e29 : U*e921f03dac {
	char pad_40[0x8]; // 0x40(0x08)
	struct FVector *43884f683d; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.*9e4a8092cc
// Size: 0x38 (Inherited: 0x30)
struct U*9e4a8092cc : U*3bd2ba0b9b {
	float *4ee927c55c; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*9c8320ecea
// Size: 0x40 (Inherited: 0x30)
struct U*9c8320ecea : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UAudioComponent* *f5511daba1; // 0x38(0x08)
};

// Class Engine.*782a5b353c
// Size: 0x40 (Inherited: 0x30)
struct U*782a5b353c : U*3bd2ba0b9b {
	enum class *9539c54071 Action; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *10ab2b4a66; // 0x34(0x04)
	char *aca23f429a : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*1723da8378
// Size: 0x68 (Inherited: 0x30)
struct U*1723da8378 : U*3bd2ba0b9b {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x30(0x10)
	struct TArray<struct FVector> *022a229281; // 0x40(0x10)
	struct TArray<struct F*c6f92a96cc> *0f357e5a7e; // 0x50(0x10)
	struct U*0b9a886d8d* *d74edfc1ed; // 0x60(0x08)
};

// Class Engine.*7f88564689
// Size: 0x38 (Inherited: 0x30)
struct U*7f88564689 : U*3bd2ba0b9b {
	enum class *787860b0e3 Action; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *10ab2b4a66; // 0x34(0x04)
};

// Class Engine.*4c2ff4e636
// Size: 0x58 (Inherited: 0x30)
struct U*4c2ff4e636 : UObject {
	uint16 *340c3d3481; // 0x30(0x02)
	char pad_32[0x2]; // 0x32(0x02)
	uint32 *1ec8a0c04f; // 0x34(0x04)
	uint64 *6368a38246; // 0x38(0x08)
	int8 *e253ba18f7; // 0x40(0x01)
	char pad_41[0x1]; // 0x41(0x01)
	int16 *dd78123408; // 0x42(0x02)
	char pad_44[0x4]; // 0x44(0x04)
	int64 *33b06e401c; // 0x48(0x08)
	bool *15766050fa; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 *9cd01a7602; // 0x54(0x04)
};

// Class Engine.*6035905e92
// Size: 0x50 (Inherited: 0x30)
struct U*6035905e92 : U*401688bf57 {
	struct TArray<struct U*c4a9dbb552*> *0360521b84; // 0x30(0x10)
	struct TArray<struct F*291da25063> Instances; // 0x40(0x10)
};

// Class Engine.*c4a9dbb552
// Size: 0x1d0 (Inherited: 0x30)
struct U*c4a9dbb552 : UObject {
	struct UWorld* World; // 0x30(0x08)
	struct ALandscape* Landscape; // 0x38(0x1c)
	struct FGuid *50b1b2bcf5; // 0x54(0x10)
	struct FIntRect *562a538796; // 0x64(0x10)
	char pad_74[0xc]; // 0x74(0x0c)
	struct F*291da25063 *84585d2b8e; // 0x80(0x110)
	struct UMaterialInterface* LandscapeMaterial; // 0x190(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x198(0x08)
	uint32 *74a2e856e6; // 0x1a0(0x04)
	int32 *f7d062b604; // 0x1a4(0x04)
	struct TArray<struct F*23fe8b97ca> *fd89319904; // 0x1a8(0x10)
	struct TArray<struct F*1027900afb> *cbc37353a2; // 0x1b8(0x10)
	char pad_1C8[0x8]; // 0x1c8(0x08)
};

// Class Engine.Layer
// Size: 0x50 (Inherited: 0x30)
struct ULayer : UObject {
	struct FName LayerName; // 0x30(0x08)
	char bIsVisible : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*fe32b3613f> ActorStats; // 0x40(0x10)
};

// Class Engine.*5b918d4999
// Size: 0x40 (Inherited: 0x30)
struct U*5b918d4999 : UObject {
	struct TArray<struct AActor*> Actors; // 0x30(0x10)
};

// Class Engine.*73d6f593c1
// Size: 0x60 (Inherited: 0x30)
struct U*73d6f593c1 : U*401688bf57 {
	struct TArray<struct F*eac2fdaa49> Variants; // 0x30(0x10)
	struct TArray<struct FTransform> Instances; // 0x40(0x10)
	struct TArray<struct F*88ee8c31b8> *ff0ce90267; // 0x50(0x10)
};

// Class Engine.*abd1b70fcf
// Size: 0x40 (Inherited: 0x30)
struct U*abd1b70fcf : U*401688bf57 {
	struct TArray<struct F*db27cffb30> Instances; // 0x30(0x10)
};

// Class Engine.*1c36ada67f
// Size: 0x50 (Inherited: 0x30)
struct U*1c36ada67f : U*401688bf57 {
	struct TArray<struct F*f413e38e41> *1ca4c0552f; // 0x30(0x10)
	struct TArray<struct F*c34a007b7e> Instances; // 0x40(0x10)
};

// Class Engine.TextureRenderTarget
// Size: 0xc8 (Inherited: 0xc0)
struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class Engine.TextureRenderTarget2D
// Size: 0xf0 (Inherited: 0xc8)
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32 SizeX; // 0xc8(0x04)
	int32 SizeY; // 0xcc(0x04)
	struct FLinearColor ClearColor; // 0xd0(0x10)
	enum class *6486b70fc0 AddressX; // 0xe0(0x01)
	enum class *6486b70fc0 AddressY; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	char *0fcaada11b : 1; // 0xe4(0x01)
	char *a6de577b35 : 1; // 0xe4(0x01)
	char bHDR : 1; // 0xe4(0x01)
	char bGPUSharedFlag : 1; // 0xe4(0x01)
	char bAutoGenerateMips : 1; // 0xe4(0x01)
	char pad_E4_5 : 3; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	enum class EPixelFormat *4b5f52ef85; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class Engine.*6f39a1ecbb
// Size: 0xa0 (Inherited: 0x30)
struct U*6f39a1ecbb : UObject {
	char pad_30[0x30]; // 0x30(0x30)
	struct UTexture2D* *29ef5dc63e; // 0x60(0x08)
	struct UTextureRenderTarget2D* *70cc59b2a0; // 0x68(0x08)
	struct TArray<struct F*258dc007a5> *83292143c9; // 0x70(0x10)
	struct TArray<struct F*709f7529e1> *ce7638869e; // 0x80(0x10)
	struct TArray<struct UObject*> *51de67fc3d; // 0x90(0x10)
};

// Class Engine.*03b2770c78
// Size: 0x58 (Inherited: 0x30)
struct U*03b2770c78 : U*401688bf57 {
	struct TArray<struct F*258dc007a5> *6979260240; // 0x30(0x10)
	struct TArray<struct F*709f7529e1> *acaecf60b6; // 0x40(0x10)
	struct U*6f39a1ecbb* Manager; // 0x50(0x08)
};

// Class Engine.*c9bc10f6b8
// Size: 0x68 (Inherited: 0x30)
struct U*c9bc10f6b8 : U*401688bf57 {
	char pad_30[0x38]; // 0x30(0x38)
};

// Class Engine.*1cbde2545c
// Size: 0x60 (Inherited: 0x30)
struct U*1cbde2545c : U*401688bf57 {
	struct TArray<struct F*04c4db89c2> Variants; // 0x30(0x10)
	struct TArray<struct FTransform> Instances; // 0x40(0x10)
	struct TArray<struct F*88ee8c31b8> *ff0ce90267; // 0x50(0x10)
};

// Class Engine.*e49f40fed1
// Size: 0x40 (Inherited: 0x30)
struct U*e49f40fed1 : U*401688bf57 {
	struct TArray<struct F*88ee8c31b8> *ff0ce90267; // 0x30(0x10)
};

// Class Engine.*b0d506ae2b
// Size: 0x60 (Inherited: 0x30)
struct U*b0d506ae2b : U*401688bf57 {
	struct TArray<struct F*1f1a8c60da> Variants; // 0x30(0x10)
	struct TArray<struct F*f2959ab045> Instances; // 0x40(0x10)
	struct TArray<struct F*88ee8c31b8> *ff0ce90267; // 0x50(0x10)
};

// Class Engine.LevelStreaming
// Size: 0x190 (Inherited: 0x30)
struct ULevelStreaming : UObject {
	struct FName PackageName; // 0x30(0x08)
	struct UWorld* WorldAsset; // 0x38(0x20)
	char pad_58[0x10]; // 0x58(0x10)
	struct FName *f74aac41d2; // 0x68(0x08)
	struct TArray<struct FName> *f0772185df; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	char bLocked : 1; // 0x90(0x01)
	char pad_90_1 : 2; // 0x90(0x01)
	char *23df38c1e1 : 1; // 0x90(0x01)
	char bShouldBeLoaded : 1; // 0x90(0x01)
	char bShouldBeVisible : 1; // 0x90(0x01)
	char bShouldBlockOnLoad : 1; // 0x90(0x01)
	char pad_90_7 : 1; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32 LevelLODIndex; // 0x94(0x04)
	char pad_98[0x4]; // 0x98(0x04)
	struct FColor DrawColor; // 0x9c(0x04)
	struct FLinearColor LevelColor; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
	struct ULevel* *351c4cfadf; // 0xc0(0x08)
	struct ULevel* *918d7cb9b2; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct TArray<struct ALevelStreamingVolume*> *b4acd47735; // 0xd8(0x10)
	float *faba900335; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FMulticastDelegate OnLevelLoaded; // 0xf0(0x10)
	struct FMulticastDelegate OnLevelUnloaded; // 0x100(0x10)
	struct FMulticastDelegate OnLevelShown; // 0x110(0x10)
	struct FMulticastDelegate OnLevelHidden; // 0x120(0x10)
	struct TArray<struct FString> Keywords; // 0x130(0x10)
	struct FTransform LevelTransform; // 0x140(0x30)
	char pad_170[0x14]; // 0x170(0x14)
	char *d33c5865c6 : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x7]; // 0x185(0x07)
	char bDisableDistanceStreaming : 1; // 0x18c(0x01)
	char *cc4a2abcfb : 1; // 0x18c(0x01)
	char pad_18C_2 : 6; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)

	void *83c7974850(); // Function Engine.LevelStreaming.*83c7974850 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6832204
	void CreateInstance(); // Function Engine.LevelStreaming.CreateInstance // Final|Native|Public|BlueprintCallable // @ game+0x682cba8
	void *f6794aa4b7(); // Function Engine.LevelStreaming.*f6794aa4b7 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6832220
	void *1c2db0b2bb(); // Function Engine.LevelStreaming.*1c2db0b2bb // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68326d0
	void *f047b6261f(); // Function Engine.LevelStreaming.*f047b6261f // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x682fd6c
};

// Class Engine.LevelStreamingAlwaysLoaded
// Size: 0x190 (Inherited: 0x190)
struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
};

// Class Engine.LevelStreamingKismet
// Size: 0x1a0 (Inherited: 0x190)
struct ULevelStreamingKismet : ULevelStreaming {
	char *21a94df709 : 1; // 0x190(0x01)
	char *1602012ce2 : 1; // 0x190(0x01)
	char pad_190_2 : 6; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)

	void *09950b360d(); // Function Engine.LevelStreamingKismet.*09950b360d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68353bc
};

// Class Engine.*a03695a4f0
// Size: 0x190 (Inherited: 0x190)
struct U*a03695a4f0 : ULevelStreaming {
};

// Class Engine.*2acdc98da1
// Size: 0x48 (Inherited: 0x30)
struct U*2acdc98da1 : UObject {
	struct UModel* *de54bc93c0; // 0x30(0x08)
	struct TArray<int32> Surfaces; // 0x38(0x10)
};

// Class Engine.*55ca195ab7
// Size: 0x48 (Inherited: 0x30)
struct U*55ca195ab7 : UObject {
	struct F*553842a41b LightmassSettings; // 0x30(0x18)
};

// Class Engine.*6f84ea874b
// Size: 0x30 (Inherited: 0x30)
struct U*6f84ea874b : UObject {
};

// Class Engine.*fb767c1b75
// Size: 0xb0 (Inherited: 0x30)
struct U*fb767c1b75 : U*6f84ea874b {
	struct FString *639433fb1b; // 0x30(0x10)
	struct FString *be52f6db89; // 0x40(0x10)
	struct FString *f40aae97bb; // 0x50(0x10)
	struct FString *b221368133; // 0x60(0x10)
	struct FString *663654f172; // 0x70(0x10)
	struct FString *acf077800d; // 0x80(0x10)
	struct FString *ca004d3ff6; // 0x90(0x10)
	struct FString *a274624eef; // 0xa0(0x10)
};

// Class Engine.MapBuildDataRegistry
// Size: 0x128 (Inherited: 0x30)
struct UMapBuildDataRegistry : UObject {
	enum class *457a9c5b67 *acec29dfe5; // 0x30(0x01)
	char pad_31[0xf7]; // 0x31(0xf7)
};

// Class Engine.*7a8513a33d
// Size: 0xa0 (Inherited: 0x68)
struct U*7a8513a33d : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*e39e92c94d
// Size: 0x68 (Inherited: 0x68)
struct U*e39e92c94d : UMaterialExpression {
};

// Class Engine.MaterialExpressionAdd
// Size: 0xe0 (Inherited: 0x68)
struct UMaterialExpressionAdd : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *50a1248030; // 0xd8(0x04)
	float *2ec866cf1d; // 0xdc(0x04)
};

// Class Engine.*8da53697a6
// Size: 0xd8 (Inherited: 0x68)
struct U*8da53697a6 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*be9c26f6c8
// Size: 0xa0 (Inherited: 0x68)
struct U*be9c26f6c8 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*0e606759c9
// Size: 0xa0 (Inherited: 0x68)
struct U*0e606759c9 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*b5757a30ea
// Size: 0xa0 (Inherited: 0x68)
struct U*b5757a30ea : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*fc5794ddb2
// Size: 0xa0 (Inherited: 0x68)
struct U*fc5794ddb2 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*52df9cabf6
// Size: 0xa0 (Inherited: 0x68)
struct U*52df9cabf6 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*ed10e86ab3
// Size: 0xd8 (Inherited: 0x68)
struct U*ed10e86ab3 : UMaterialExpression {
	struct FExpressionInput Y; // 0x68(0x38)
	struct FExpressionInput X; // 0xa0(0x38)
};

// Class Engine.*2d35646719
// Size: 0xd8 (Inherited: 0x68)
struct U*2d35646719 : UMaterialExpression {
	struct FExpressionInput Y; // 0x68(0x38)
	struct FExpressionInput X; // 0xa0(0x38)
};

// Class Engine.*5166d70fcc
// Size: 0xa0 (Inherited: 0x68)
struct U*5166d70fcc : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*7ea5931c31
// Size: 0xa0 (Inherited: 0x68)
struct U*7ea5931c31 : UMaterialExpression {
	struct FExpressionInput WorldPosition; // 0x68(0x38)
};

// Class Engine.MaterialExpressionAtmosphericLightColor
// Size: 0x68 (Inherited: 0x68)
struct UMaterialExpressionAtmosphericLightColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionAtmosphericLightVector
// Size: 0x68 (Inherited: 0x68)
struct UMaterialExpressionAtmosphericLightVector : UMaterialExpression {
};

// Class Engine.MaterialExpressionBlackBody
// Size: 0xa0 (Inherited: 0x68)
struct UMaterialExpressionBlackBody : UMaterialExpression {
	struct FExpressionInput Temp; // 0x68(0x38)
};

// Class Engine.*a2903aa395
// Size: 0x128 (Inherited: 0x68)
struct U*a2903aa395 : UMaterialExpression {
	struct FMaterialAttributesInput A; // 0x68(0x40)
	struct FMaterialAttributesInput B; // 0xa8(0x40)
	struct FExpressionInput Alpha; // 0xe8(0x38)
	enum class EMaterialAttributeBlend *8fd222c68a; // 0x120(0x01)
	enum class EMaterialAttributeBlend *5bdbb3a094; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
};

// Class Engine.*205088b386
// Size: 0xa8 (Inherited: 0x68)
struct U*205088b386 : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x68(0x40)
};

// Class Engine.MaterialExpressionBumpOffset
// Size: 0x120 (Inherited: 0x68)
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x68(0x38)
	struct FExpressionInput Height; // 0xa0(0x38)
	struct FExpressionInput HeightRatioInput; // 0xd8(0x38)
	float *5d8e7e2b26; // 0x110(0x04)
	float *7f44565464; // 0x114(0x04)
	uint32 *9d489d4a01; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class Engine.*4f386825a2
// Size: 0x68 (Inherited: 0x68)
struct U*4f386825a2 : UMaterialExpression {
};

// Class Engine.*694daeca8a
// Size: 0x68 (Inherited: 0x68)
struct U*694daeca8a : UMaterialExpression {
};

// Class Engine.*2c66594b25
// Size: 0xa0 (Inherited: 0x68)
struct U*2c66594b25 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*10030e4d04
// Size: 0x120 (Inherited: 0x68)
struct U*10030e4d04 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	struct FExpressionInput Min; // 0xa0(0x38)
	struct FExpressionInput Max; // 0xd8(0x38)
	enum class *78626736fd *5bacd138cd; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float *ca69e53bf5; // 0x114(0x04)
	float *adc6d54f4f; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class Engine.*c5b2ac5ce5
// Size: 0x88 (Inherited: 0x68)
struct U*c5b2ac5ce5 : UMaterialExpression {
	struct UMaterialParameterCollection* Collection; // 0x68(0x08)
	struct FName ParameterName; // 0x70(0x08)
	struct FGuid *be3f59cf86; // 0x78(0x10)
};

// Class Engine.*6b66a26fde
// Size: 0x90 (Inherited: 0x68)
struct U*6b66a26fde : UMaterialExpression {
	int32 SizeX; // 0x68(0x04)
	int32 SizeY; // 0x6c(0x04)
	struct FString Text; // 0x70(0x10)
	struct FLinearColor *68be6a22f6; // 0x80(0x10)
};

// Class Engine.*f01e3a5e93
// Size: 0xa8 (Inherited: 0x68)
struct U*f01e3a5e93 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	char R : 1; // 0xa0(0x01)
	char G : 1; // 0xa0(0x01)
	char B : 1; // 0xa0(0x01)
	char A : 1; // 0xa0(0x01)
	char pad_A0_4 : 4; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.MaterialExpressionConstant
// Size: 0x70 (Inherited: 0x68)
struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionConstant2Vector
// Size: 0x70 (Inherited: 0x68)
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x68(0x04)
	float G; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionConstant3Vector
// Size: 0x78 (Inherited: 0x68)
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x68(0x10)
};

// Class Engine.MaterialExpressionConstant4Vector
// Size: 0x78 (Inherited: 0x68)
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x68(0x10)
};

// Class Engine.*6cdcba1fe1
// Size: 0xa8 (Inherited: 0x68)
struct U*6cdcba1fe1 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Bias; // 0xa0(0x04)
	float Scale; // 0xa4(0x04)
};

// Class Engine.*8904b615c9
// Size: 0xa8 (Inherited: 0x68)
struct U*8904b615c9 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Period; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*37663da93b
// Size: 0xd8 (Inherited: 0x68)
struct U*37663da93b : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*3484d16433
// Size: 0xa0 (Inherited: 0x68)
struct U*3484d16433 : UMaterialExpression {
	struct FString Code; // 0x68(0x10)
	enum class *a5faa45b37 OutputType; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString Description; // 0x80(0x10)
	struct TArray<struct F*ce20c9df3f> Inputs; // 0x90(0x10)
};

// Class Engine.*00fbe15eb0
// Size: 0xa0 (Inherited: 0x68)
struct U*00fbe15eb0 : U*c9284c4e3d {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*63c28c3ced
// Size: 0xa0 (Inherited: 0x68)
struct U*63c28c3ced : U*c9284c4e3d {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*ef81ce75e8
// Size: 0xb0 (Inherited: 0x68)
struct U*ef81ce75e8 : U*c9284c4e3d {
	struct FExpressionInput Input; // 0x68(0x38)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class Engine.*204d4072ab
// Size: 0xa0 (Inherited: 0x68)
struct U*204d4072ab : UMaterialExpression {
	struct FExpressionInput Value; // 0x68(0x38)
};

// Class Engine.*2fd0357af1
// Size: 0xa0 (Inherited: 0x68)
struct U*2fd0357af1 : UMaterialExpression {
	struct FExpressionInput Value; // 0x68(0x38)
};

// Class Engine.*8f6ca60946
// Size: 0x68 (Inherited: 0x68)
struct U*8f6ca60946 : UMaterialExpression {
};

// Class Engine.*117c525dfa
// Size: 0x68 (Inherited: 0x68)
struct U*117c525dfa : UMaterialExpression {
};

// Class Engine.*063cc7c8a7
// Size: 0xa8 (Inherited: 0x68)
struct U*063cc7c8a7 : UMaterialExpression {
	struct FExpressionInput TextureSize; // 0x68(0x38)
	float *2def7177f5; // 0xa0(0x04)
	float *1754f6b141; // 0xa4(0x04)
};

// Class Engine.*cfa3e4eddc
// Size: 0xe0 (Inherited: 0x68)
struct U*cfa3e4eddc : UMaterialExpression {
	struct FExpressionInput InOpacity; // 0x68(0x38)
	struct FExpressionInput FadeDistance; // 0xa0(0x38)
	float *7d921157e6; // 0xd8(0x04)
	float *7491a6d9c7; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// Size: 0xa8 (Inherited: 0x68)
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	enum class *d210fbb932 *ece23de0c2; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput Depth; // 0x70(0x38)
};

// Class Engine.*326c4ca14e
// Size: 0xa0 (Inherited: 0x68)
struct U*326c4ca14e : UMaterialExpression {
	struct FExpressionInput *523b356fd2; // 0x68(0x38)
};

// Class Engine.*e6ada76c1a
// Size: 0xe8 (Inherited: 0x68)
struct U*e6ada76c1a : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	struct FExpressionInput Fraction; // 0xa0(0x38)
	struct FLinearColor *a9988e804e; // 0xd8(0x10)
};

// Class Engine.*9d9cabf424
// Size: 0xd8 (Inherited: 0x68)
struct U*9d9cabf424 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*d57c64796b
// Size: 0x68 (Inherited: 0x68)
struct U*d57c64796b : UMaterialExpression {
};

// Class Engine.*b516df5471
// Size: 0xa0 (Inherited: 0x68)
struct U*b516df5471 : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
};

// Class Engine.*996252739a
// Size: 0xa0 (Inherited: 0x68)
struct U*996252739a : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
};

// Class Engine.MaterialExpressionDivide
// Size: 0xe0 (Inherited: 0x68)
struct UMaterialExpressionDivide : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *50a1248030; // 0xd8(0x04)
	float *2ec866cf1d; // 0xdc(0x04)
};

// Class Engine.*9e90c2f62a
// Size: 0xd8 (Inherited: 0x68)
struct U*9e90c2f62a : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*e2921c327e
// Size: 0x88 (Inherited: 0x68)
struct U*e2921c327e : UMaterialExpression {
	struct TArray<struct FString> ParamNames; // 0x68(0x10)
	struct FLinearColor DefaultValue; // 0x78(0x10)
};

// Class Engine.*aa9de280b8
// Size: 0x68 (Inherited: 0x68)
struct U*aa9de280b8 : UMaterialExpression {
};

// Class Engine.*907b56d793
// Size: 0x180 (Inherited: 0x68)
struct U*907b56d793 : UMaterialExpression {
	struct FExpressionInput Default; // 0x68(0x38)
	struct FExpressionInput Inputs[0x04]; // 0xa0(0xe0)
};

// Class Engine.*e405073cbf
// Size: 0xa0 (Inherited: 0x68)
struct U*e405073cbf : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*65acbde2ea
// Size: 0xd8 (Inherited: 0x68)
struct U*65acbde2ea : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*3edaf65177
// Size: 0x78 (Inherited: 0x68)
struct U*3edaf65177 : UMaterialExpression {
	struct UFont* Font; // 0x68(0x08)
	int32 *97fa7c4ce0; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Engine.*78ae309e00
// Size: 0x98 (Inherited: 0x78)
struct U*78ae309e00 : U*3edaf65177 {
	struct FName ParameterName; // 0x78(0x08)
	struct FGuid *eac668cb87; // 0x80(0x10)
	struct FName Group; // 0x90(0x08)
};

// Class Engine.*fcace9ab00
// Size: 0xa0 (Inherited: 0x68)
struct U*fcace9ab00 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*df5c3e8b80
// Size: 0x120 (Inherited: 0x68)
struct U*df5c3e8b80 : UMaterialExpression {
	struct FExpressionInput ExponentIn; // 0x68(0x38)
	float Exponent; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FExpressionInput BaseReflectFractionIn; // 0xa8(0x38)
	float *b12f0aebea; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FExpressionInput Normal; // 0xe8(0x38)
};

// Class Engine.*47e9beaddb
// Size: 0x140 (Inherited: 0x68)
struct U*47e9beaddb : UMaterialExpression {
	struct FExpressionInput Preview; // 0x68(0x38)
	struct FString InputName; // 0xa0(0x10)
	struct FString Description; // 0xb0(0x10)
	struct FGuid ID; // 0xc0(0x10)
	enum class *635627cf2e InputType; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
	struct FVector4 *e555d3542c; // 0xe0(0x10)
	char *eb505df2e4 : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32 *fd7eb9d855; // 0xf4(0x04)
	char *497a1a6cde : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x47]; // 0xf9(0x47)
};

// Class Engine.*8eaf84e920
// Size: 0xe0 (Inherited: 0x68)
struct U*8eaf84e920 : UMaterialExpression {
	struct FString OutputName; // 0x68(0x10)
	struct FString Description; // 0x78(0x10)
	int32 *fd7eb9d855; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FExpressionInput A; // 0x90(0x38)
	char *c690c96fd8 : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FGuid ID; // 0xcc(0x10)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionGetMaterialAttributes
// Size: 0xb8 (Inherited: 0x68)
struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x68(0x40)
	struct TArray<struct FGuid> *9c59ff1049; // 0xa8(0x10)
};

// Class Engine.*7567d4955a
// Size: 0x110 (Inherited: 0x68)
struct U*7567d4955a : UMaterialExpression {
	struct FExpressionInput Default; // 0x68(0x38)
	struct FExpressionInput *38d890f558; // 0xa0(0x38)
	struct FExpressionInput *6290b4acf1; // 0xd8(0x38)
};

// Class Engine.MaterialExpressionIf
// Size: 0x190 (Inherited: 0x68)
struct UMaterialExpressionIf : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	struct FExpressionInput AGreaterThanB; // 0xd8(0x38)
	struct FExpressionInput AEqualsB; // 0x110(0x38)
	struct FExpressionInput ALessThanB; // 0x148(0x38)
	float *49cc8db7e3; // 0x180(0x04)
	float *2ec866cf1d; // 0x184(0x04)
	float ConstAEqualsB; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
};

// Class Engine.*e950920538
// Size: 0x68 (Inherited: 0x68)
struct U*e950920538 : UMaterialExpression {
};

// Class Engine.*32c98e8edd
// Size: 0xd8 (Inherited: 0x68)
struct U*32c98e8edd : UMaterialExpression {
	struct FExpressionInput RealTime; // 0x68(0x38)
	struct FExpressionInput Lightmass; // 0xa0(0x38)
};

// Class Engine.*4a69a2d9a9
// Size: 0x68 (Inherited: 0x68)
struct U*4a69a2d9a9 : UMaterialExpression {
};

// Class Engine.MaterialExpressionLinearInterpolate
// Size: 0x120 (Inherited: 0x68)
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	struct FExpressionInput Alpha; // 0xd8(0x38)
	float *50a1248030; // 0x110(0x04)
	float *2ec866cf1d; // 0x114(0x04)
	float *e88f1d14ea; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class Engine.*855dfc39a2
// Size: 0xa0 (Inherited: 0x68)
struct U*855dfc39a2 : UMaterialExpression {
	struct FExpressionInput X; // 0x68(0x38)
};

// Class Engine.*df44d18ab4
// Size: 0x650 (Inherited: 0x68)
struct U*df44d18ab4 : UMaterialExpression {
	struct FExpressionInput BaseColor; // 0x68(0x38)
	struct FExpressionInput Metallic; // 0xa0(0x38)
	struct FExpressionInput Specular; // 0xd8(0x38)
	struct FExpressionInput Roughness; // 0x110(0x38)
	struct FExpressionInput EmissiveColor; // 0x148(0x38)
	struct FExpressionInput Opacity; // 0x180(0x38)
	struct FExpressionInput OpacityMask; // 0x1b8(0x38)
	struct FExpressionInput Normal; // 0x1f0(0x38)
	struct FExpressionInput WorldPositionOffset; // 0x228(0x38)
	struct FExpressionInput WorldDisplacement; // 0x260(0x38)
	struct FExpressionInput TessellationMultiplier; // 0x298(0x38)
	struct FExpressionInput SubsurfaceColor; // 0x2d0(0x38)
	struct FExpressionInput ClearCoat; // 0x308(0x38)
	struct FExpressionInput ClearCoatRoughness; // 0x340(0x38)
	struct FExpressionInput AmbientOcclusion; // 0x378(0x38)
	struct FExpressionInput Refraction; // 0x3b0(0x38)
	struct FExpressionInput *699f8b87dd[0x08]; // 0x3e8(0x1c0)
	struct FExpressionInput PixelDepthOffset; // 0x5a8(0x38)
	struct FExpressionInput Temperature; // 0x5e0(0x38)
	struct FExpressionInput TemperatureAlpha; // 0x618(0x38)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
// Size: 0x90 (Inherited: 0x68)
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	struct UMaterialFunction* MaterialFunction; // 0x68(0x08)
	struct TArray<struct F*f6335bfdb5> *36d56dd710; // 0x70(0x10)
	struct TArray<struct F*52e5e1b80a> *2d606d3802; // 0x80(0x10)
};

// Class Engine.*e3857481f8
// Size: 0xd8 (Inherited: 0x68)
struct U*e3857481f8 : UMaterialExpression {
	struct FExpressionInput RealTime; // 0x68(0x38)
	struct FExpressionInput *292301d435; // 0xa0(0x38)
};

// Class Engine.*a1002947d1
// Size: 0xe0 (Inherited: 0x68)
struct U*a1002947d1 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *50a1248030; // 0xd8(0x04)
	float *2ec866cf1d; // 0xdc(0x04)
};

// Class Engine.*d14454e734
// Size: 0xe0 (Inherited: 0x68)
struct U*d14454e734 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *50a1248030; // 0xd8(0x04)
	float *2ec866cf1d; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionMultiply
// Size: 0xe0 (Inherited: 0x68)
struct UMaterialExpressionMultiply : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *50a1248030; // 0xd8(0x04)
	float *2ec866cf1d; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionNoise
// Size: 0x100 (Inherited: 0x68)
struct UMaterialExpressionNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
	struct FExpressionInput *f4eba49d57; // 0xa0(0x38)
	float Scale; // 0xd8(0x04)
	int32 Quality; // 0xdc(0x04)
	enum class ENoiseFunction *52e843ae4f; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	char *fc87d63df9 : 1; // 0xe4(0x01)
	char pad_E4_1 : 7; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	int32 Levels; // 0xe8(0x04)
	float *c89fd367b1; // 0xec(0x04)
	float *745e0e8d1c; // 0xf0(0x04)
	float *4bcbc6671c; // 0xf4(0x04)
	char *0c791141e7 : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	uint32 RepeatSize; // 0xfc(0x04)
};

// Class Engine.MaterialExpressionNormalize
// Size: 0xa0 (Inherited: 0x68)
struct UMaterialExpressionNormalize : UMaterialExpression {
	struct FExpressionInput *b6a4a02a64; // 0x68(0x38)
};

// Class Engine.*84add71a64
// Size: 0x68 (Inherited: 0x68)
struct U*84add71a64 : UMaterialExpression {
};

// Class Engine.*6e54340ca1
// Size: 0x68 (Inherited: 0x68)
struct U*6e54340ca1 : UMaterialExpression {
};

// Class Engine.*e2e36ade21
// Size: 0x70 (Inherited: 0x68)
struct U*e2e36ade21 : UMaterialExpression {
	enum class *cb3930940e *5ed77e7d27; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*77f6f75c5c
// Size: 0x68 (Inherited: 0x68)
struct U*77f6f75c5c : UMaterialExpression {
};

// Class Engine.MaterialExpressionOneMinus
// Size: 0xa0 (Inherited: 0x68)
struct UMaterialExpressionOneMinus : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.MaterialExpressionPanner
// Size: 0x120 (Inherited: 0x68)
struct UMaterialExpressionPanner : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x68(0x38)
	struct FExpressionInput Time; // 0xa0(0x38)
	struct FExpressionInput Speed; // 0xd8(0x38)
	float *fb28eeab10; // 0x110(0x04)
	float *3fa02c69f3; // 0x114(0x04)
	uint32 *9d489d4a01; // 0x118(0x04)
	bool *6e856cca1c; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
};

// Class Engine.*2885fda387
// Size: 0x88 (Inherited: 0x68)
struct U*2885fda387 : UMaterialExpression {
	struct FName ParameterName; // 0x68(0x08)
	struct FGuid *eac668cb87; // 0x70(0x10)
	struct FName Group; // 0x80(0x08)
};

// Class Engine.MaterialExpressionScalarParameter
// Size: 0x98 (Inherited: 0x88)
struct UMaterialExpressionScalarParameter : U*2885fda387 {
	float DefaultValue; // 0x88(0x04)
	float SliderMin; // 0x8c(0x04)
	float SliderMax; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*4ab25df152
// Size: 0x90 (Inherited: 0x88)
struct U*4ab25df152 : U*2885fda387 {
	char DefaultValue : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*31e4ce6393
// Size: 0x100 (Inherited: 0x90)
struct U*31e4ce6393 : U*4ab25df152 {
	struct FExpressionInput A; // 0x90(0x38)
	struct FExpressionInput B; // 0xc8(0x38)
};

// Class Engine.*a9e84f2f13
// Size: 0xc8 (Inherited: 0x88)
struct U*a9e84f2f13 : U*2885fda387 {
	struct FExpressionInput Input; // 0x88(0x38)
	char *cbfdfd98e8 : 1; // 0xc0(0x01)
	char *d505dc68c4 : 1; // 0xc0(0x01)
	char *3683b34757 : 1; // 0xc0(0x01)
	char *fc36ec8043 : 1; // 0xc0(0x01)
	char pad_C0_4 : 4; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.MaterialExpressionVectorParameter
// Size: 0x98 (Inherited: 0x88)
struct UMaterialExpressionVectorParameter : U*2885fda387 {
	struct FLinearColor DefaultValue; // 0x88(0x10)
};

// Class Engine.*0ffa4604b8
// Size: 0x68 (Inherited: 0x68)
struct U*0ffa4604b8 : UMaterialExpression {
};

// Class Engine.*b632975aba
// Size: 0x70 (Inherited: 0x68)
struct U*b632975aba : UMaterialExpression {
	struct U*5ca6d5a987* Layer; // 0x68(0x08)
};

// Class Engine.*292f14708a
// Size: 0x68 (Inherited: 0x68)
struct U*292f14708a : UMaterialExpression {
};

// Class Engine.*c33194ee0e
// Size: 0x68 (Inherited: 0x68)
struct U*c33194ee0e : UMaterialExpression {
};

// Class Engine.*066465b6de
// Size: 0x68 (Inherited: 0x68)
struct U*066465b6de : UMaterialExpression {
};

// Class Engine.*b52055a4fd
// Size: 0x68 (Inherited: 0x68)
struct U*b52055a4fd : UMaterialExpression {
};

// Class Engine.*4f55ed1644
// Size: 0x68 (Inherited: 0x68)
struct U*4f55ed1644 : UMaterialExpression {
};

// Class Engine.*3e42e41b23
// Size: 0x68 (Inherited: 0x68)
struct U*3e42e41b23 : UMaterialExpression {
};

// Class Engine.*2f73f446e3
// Size: 0x68 (Inherited: 0x68)
struct U*2f73f446e3 : UMaterialExpression {
};

// Class Engine.*fd544ed7ed
// Size: 0x68 (Inherited: 0x68)
struct U*fd544ed7ed : UMaterialExpression {
};

// Class Engine.*28ae69ad8f
// Size: 0x68 (Inherited: 0x68)
struct U*28ae69ad8f : UMaterialExpression {
};

// Class Engine.*628c23b902
// Size: 0x68 (Inherited: 0x68)
struct U*628c23b902 : UMaterialExpression {
};

// Class Engine.*b0d053a359
// Size: 0x68 (Inherited: 0x68)
struct U*b0d053a359 : UMaterialExpression {
};

// Class Engine.*410195bce7
// Size: 0x68 (Inherited: 0x68)
struct U*410195bce7 : UMaterialExpression {
};

// Class Engine.*53a9deb369
// Size: 0x68 (Inherited: 0x68)
struct U*53a9deb369 : UMaterialExpression {
};

// Class Engine.*ecf5d93cf4
// Size: 0x68 (Inherited: 0x68)
struct U*ecf5d93cf4 : UMaterialExpression {
};

// Class Engine.MaterialExpressionPower
// Size: 0xe0 (Inherited: 0x68)
struct UMaterialExpressionPower : UMaterialExpression {
	struct FExpressionInput Base; // 0x68(0x38)
	struct FExpressionInput Exponent; // 0xa0(0x38)
	float *b32b04bc69; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class Engine.*0c9b2446de
// Size: 0x68 (Inherited: 0x68)
struct U*0c9b2446de : UMaterialExpression {
};

// Class Engine.*ec2456f5b1
// Size: 0x68 (Inherited: 0x68)
struct U*ec2456f5b1 : UMaterialExpression {
};

// Class Engine.*ee91a62b01
// Size: 0x68 (Inherited: 0x68)
struct U*ee91a62b01 : UMaterialExpression {
};

// Class Engine.*bc77f188aa
// Size: 0xd8 (Inherited: 0x68)
struct U*bc77f188aa : UMaterialExpression {
	struct FExpressionInput CurrentFrame; // 0x68(0x38)
	struct FExpressionInput *d64ad82768; // 0xa0(0x38)
};

// Class Engine.*e83eda278d
// Size: 0x148 (Inherited: 0x68)
struct U*e83eda278d : UMaterialExpression {
	struct FExpressionInput Default; // 0x68(0x38)
	struct FExpressionInput Inputs[0x03]; // 0xa0(0xa8)
};

// Class Engine.MaterialExpressionReflectionVectorWS
// Size: 0xa8 (Inherited: 0x68)
struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	struct FExpressionInput *f174da00c4; // 0x68(0x38)
	char *5ca7a4e154 : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.*a4abeb7f0c
// Size: 0xa0 (Inherited: 0x68)
struct U*a4abeb7f0c : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*c83bd3a8c2
// Size: 0x150 (Inherited: 0x68)
struct U*c83bd3a8c2 : UMaterialExpression {
	struct FExpressionInput *e333fe85f0; // 0x68(0x38)
	struct FExpressionInput RotationAngle; // 0xa0(0x38)
	struct FExpressionInput *4d9ed79430; // 0xd8(0x38)
	struct FExpressionInput Position; // 0x110(0x38)
	float Period; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class Engine.*35c7ca6e5d
// Size: 0xe8 (Inherited: 0x68)
struct U*35c7ca6e5d : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x68(0x38)
	struct FExpressionInput Time; // 0xa0(0x38)
	float *c17c807309; // 0xd8(0x04)
	float *bec753ef1d; // 0xdc(0x04)
	float Speed; // 0xe0(0x04)
	uint32 *9d489d4a01; // 0xe4(0x04)
};

// Class Engine.*1a405d659b
// Size: 0xa0 (Inherited: 0x68)
struct U*1a405d659b : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*b340281fc0
// Size: 0xa0 (Inherited: 0x68)
struct U*b340281fc0 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*eca9fb5b57
// Size: 0xe8 (Inherited: 0x68)
struct U*eca9fb5b57 : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput Input; // 0x70(0x38)
	struct FExpressionInput OffsetFraction; // 0xa8(0x38)
	struct FVector2D *71b958be3a; // 0xe0(0x08)
};

// Class Engine.*5587afbea2
// Size: 0xe8 (Inherited: 0x68)
struct U*5587afbea2 : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput Input; // 0x70(0x38)
	struct FExpressionInput Coordinates; // 0xa8(0x38)
	struct FVector2D *71b958be3a; // 0xe0(0x08)
};

// Class Engine.*9760953ad9
// Size: 0x68 (Inherited: 0x68)
struct U*9760953ad9 : UMaterialExpression {
};

// Class Engine.*a15591ba4b
// Size: 0xa8 (Inherited: 0x68)
struct U*a15591ba4b : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x68(0x38)
	enum class ESceneTextureId *e7f13b10fc; // 0xa0(0x01)
	bool *ce9e2ba434; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// Class Engine.*bde8b25b7d
// Size: 0x70 (Inherited: 0x68)
struct U*bde8b25b7d : UMaterialExpression {
	enum class *284a1fbeb1 *ac65e4d142; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*bbb67920e4
// Size: 0x68 (Inherited: 0x68)
struct U*bbb67920e4 : UMaterialExpression {
};

// Class Engine.MaterialExpressionSetMaterialAttributes
// Size: 0x88 (Inherited: 0x68)
struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	struct TArray<struct FExpressionInput> Inputs; // 0x68(0x10)
	struct TArray<struct FGuid> *7966cba92e; // 0x78(0x10)
};

// Class Engine.*373cfdc3b2
// Size: 0xa0 (Inherited: 0x68)
struct U*373cfdc3b2 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*d8e279e36a
// Size: 0xa8 (Inherited: 0x68)
struct U*d8e279e36a : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Period; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*4d4503b586
// Size: 0x158 (Inherited: 0x68)
struct U*4d4503b586 : UMaterialExpression {
	struct FExpressionInput *54e049ca0b; // 0x68(0x38)
	struct FExpressionInput *cf911ca468; // 0xa0(0x38)
	struct FExpressionInput *ce6099576e; // 0xd8(0x38)
	struct FExpressionInput *6649218d32; // 0x110(0x38)
	enum class *67be135327 GeometryType; // 0x148(0x01)
	enum class *90c803502f *eec761fdde; // 0x149(0x01)
	enum class *fe11250864 LODType; // 0x14a(0x01)
	char pad_14B[0x1]; // 0x14b(0x01)
	float BillboardThreshold; // 0x14c(0x04)
	bool *dbd68770fc; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class Engine.*014ca69945
// Size: 0x150 (Inherited: 0x68)
struct U*014ca69945 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	struct FExpressionInput Radius; // 0xd8(0x38)
	struct FExpressionInput Hardness; // 0x110(0x38)
	float AttenuationRadius; // 0x148(0x04)
	float *8fff97f46c; // 0x14c(0x04)
};

// Class Engine.*514229abda
// Size: 0xa8 (Inherited: 0x68)
struct U*514229abda : UMaterialExpression {
	struct FExpressionInput Density; // 0x68(0x38)
	float *5e18939062; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*427bc176a7
// Size: 0xa0 (Inherited: 0x68)
struct U*427bc176a7 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*8d9cfc18fa
// Size: 0x70 (Inherited: 0x68)
struct U*8d9cfc18fa : UMaterialExpression {
	char Value : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*7a9ec54fe6
// Size: 0x118 (Inherited: 0x68)
struct U*7a9ec54fe6 : UMaterialExpression {
	char DefaultValue : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	struct FExpressionInput Value; // 0xe0(0x38)
};

// Class Engine.*c387697226
// Size: 0xe0 (Inherited: 0x68)
struct U*c387697226 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *50a1248030; // 0xd8(0x04)
	float *2ec866cf1d; // 0xdc(0x04)
};

// Class Engine.*dfb7d9afe2
// Size: 0xa8 (Inherited: 0x68)
struct U*dfb7d9afe2 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Period; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*ab1a646197
// Size: 0xc0 (Inherited: 0x68)
struct U*ab1a646197 : U*699123f0e5 {
	struct FExpressionInput UV; // 0x68(0x38)
	struct TArray<struct F*72d0292f10> Inputs; // 0xa0(0x10)
	uint32 *9d489d4a01; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)
};

// Class Engine.*083dfe759e
// Size: 0xc8 (Inherited: 0x68)
struct U*083dfe759e : U*699123f0e5 {
	struct FExpressionInput UV; // 0x68(0x38)
	struct TArray<struct F*c183a88925> Inputs; // 0xa0(0x10)
	uint32 *9d489d4a01; // 0xb0(0x04)
	char pad_B4[0x14]; // 0xb4(0x14)
};

// Class Engine.*b8e2566d07
// Size: 0x100 (Inherited: 0x68)
struct U*b8e2566d07 : U*699123f0e5 {
	struct FExpressionInput UV; // 0x68(0x38)
	struct FExpressionInput *de5c116ee2; // 0xa0(0x38)
	struct TArray<struct F*90a39ffcd1> Inputs; // 0xd8(0x10)
	uint32 *9d489d4a01; // 0xe8(0x04)
	char pad_EC[0x14]; // 0xec(0x14)
};

// Class Engine.*e783e15fe6
// Size: 0x78 (Inherited: 0x68)
struct U*e783e15fe6 : UMaterialExpression {
	struct UTexture* Texture; // 0x68(0x08)
	enum class EMaterialSamplerType *7dc6d3fe3a; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	char IsDefaultMeshpaintTexture : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Engine.*475e4fca6e
// Size: 0x78 (Inherited: 0x78)
struct U*475e4fca6e : U*e783e15fe6 {
};

// Class Engine.MaterialExpressionTextureSample
// Size: 0x1f0 (Inherited: 0x78)
struct UMaterialExpressionTextureSample : U*e783e15fe6 {
	struct FExpressionInput Coordinates; // 0x78(0x38)
	struct FExpressionInput TextureObject; // 0xb0(0x38)
	struct FExpressionInput *4b923e37d6; // 0xe8(0x38)
	struct FExpressionInput *eeaa5aec06; // 0x120(0x38)
	struct FExpressionInput *6e6527438f; // 0x158(0x38)
	struct FExpressionInput SampleCondition; // 0x190(0x38)
	enum class *a9f1f9067c MipValueMode; // 0x1c8(0x01)
	enum class *5e9a895575 *14325d8bab; // 0x1c9(0x01)
	char pad_1CA[0x2]; // 0x1ca(0x02)
	uint32 *9d489d4a01; // 0x1cc(0x04)
	int32 *74ad6e9e7f; // 0x1d0(0x04)
	char *6eadd7df03 : 1; // 0x1d4(0x01)
	char pad_1D4_1 : 7; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
	bool *9954edb9d0; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	struct FLinearColor DefaultValue; // 0x1dc(0x10)
	char pad_1EC[0x4]; // 0x1ec(0x04)
};

// Class Engine.*9a396b4f6b
// Size: 0x1f8 (Inherited: 0x1f0)
struct U*9a396b4f6b : UMaterialExpressionTextureSample {
	char *4615a06f33 : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
};

// Class Engine.*53d7ac5dcb
// Size: 0x210 (Inherited: 0x1f0)
struct U*53d7ac5dcb : UMaterialExpressionTextureSample {
	struct FName ParameterName; // 0x1f0(0x08)
	struct FGuid *eac668cb87; // 0x1f8(0x10)
	struct FName Group; // 0x208(0x08)
};

// Class Engine.*33beb79b5f
// Size: 0x210 (Inherited: 0x210)
struct U*33beb79b5f : U*53d7ac5dcb {
};

// Class Engine.*ba54cde862
// Size: 0x210 (Inherited: 0x210)
struct U*ba54cde862 : U*53d7ac5dcb {
};

// Class Engine.*1c216c9a53
// Size: 0x218 (Inherited: 0x210)
struct U*1c216c9a53 : U*ba54cde862 {
	float Threshold; // 0x210(0x04)
	enum class *8af4bb4d51 Channel; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
};

// Class Engine.*c3648fe128
// Size: 0x218 (Inherited: 0x210)
struct U*c3648fe128 : U*ba54cde862 {
	char *4615a06f33 : 1; // 0x210(0x01)
	char pad_210_1 : 7; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
};

// Class Engine.*2d92e288bc
// Size: 0x210 (Inherited: 0x210)
struct U*2d92e288bc : U*53d7ac5dcb {
};

// Class Engine.*7600be2779
// Size: 0x210 (Inherited: 0x210)
struct U*7600be2779 : U*53d7ac5dcb {
};

// Class Engine.MaterialExpressionTextureCoordinate
// Size: 0x78 (Inherited: 0x68)
struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32 *afc7652008; // 0x68(0x04)
	float *cd5cd1ea45; // 0x6c(0x04)
	float *58ed3c7ea2; // 0x70(0x04)
	char UnMirrorU : 1; // 0x74(0x01)
	char UnMirrorV : 1; // 0x74(0x01)
	char pad_74_2 : 6; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Engine.*ec9bccd893
// Size: 0xa8 (Inherited: 0x68)
struct U*ec9bccd893 : UMaterialExpression {
	struct FExpressionInput TextureObject; // 0x68(0x38)
	enum class EMaterialExposedTextureProperty Property; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.*16d784e1ec
// Size: 0x70 (Inherited: 0x68)
struct U*16d784e1ec : UMaterialExpression {
	char *f0b28c1916 : 1; // 0x68(0x01)
	char bOverride_Period : 1; // 0x68(0x01)
	char pad_68_2 : 6; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float Period; // 0x6c(0x04)
};

// Class Engine.*c0fb7112ab
// Size: 0xa8 (Inherited: 0x68)
struct U*c0fb7112ab : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	enum class EMaterialVectorCoordTransformSource *435dc16597; // 0xa0(0x01)
	enum class EMaterialVectorCoordTransform TransformType; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// Class Engine.*f730149037
// Size: 0xa8 (Inherited: 0x68)
struct U*f730149037 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	enum class EMaterialPositionTransformSource *435dc16597; // 0xa0(0x01)
	enum class EMaterialPositionTransformSource TransformType; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// Class Engine.*0fb2b6519f
// Size: 0xa0 (Inherited: 0x68)
struct U*0fb2b6519f : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*dc78d701cf
// Size: 0x68 (Inherited: 0x68)
struct U*dc78d701cf : UMaterialExpression {
};

// Class Engine.MaterialExpressionVectorNoise
// Size: 0xb0 (Inherited: 0x68)
struct UMaterialExpressionVectorNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
	enum class *a33dc43e2a *52e843ae4f; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 Quality; // 0xa4(0x04)
	char *0c791141e7 : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	uint32 TileSize; // 0xac(0x04)
};

// Class Engine.*5d4fe8ca37
// Size: 0x68 (Inherited: 0x68)
struct U*5d4fe8ca37 : UMaterialExpression {
};

// Class Engine.*bb5a2bd637
// Size: 0x68 (Inherited: 0x68)
struct U*bb5a2bd637 : UMaterialExpression {
};

// Class Engine.*5671b68df7
// Size: 0x68 (Inherited: 0x68)
struct U*5671b68df7 : UMaterialExpression {
};

// Class Engine.*39b3eefcdd
// Size: 0x70 (Inherited: 0x68)
struct U*39b3eefcdd : UMaterialExpression {
	enum class EMaterialExposedViewProperty Property; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*bfd408cd42
// Size: 0x68 (Inherited: 0x68)
struct U*bfd408cd42 : UMaterialExpression {
};

// Class Engine.*207abc4c3c
// Size: 0x70 (Inherited: 0x68)
struct U*207abc4c3c : UMaterialExpression {
	enum class *f9aa85ba4d *ef815b766d; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.MaterialFunction
// Size: 0x70 (Inherited: 0x30)
struct UMaterialFunction : UObject {
	struct FGuid *f498029bb1; // 0x30(0x10)
	struct FString Description; // 0x40(0x10)
	char bExposeToLibrary : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct UMaterialExpression*> *d17c288f90; // 0x58(0x10)
	char *f54ce8a897 : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.Material
// Size: 0xa88 (Inherited: 0x78)
struct UMaterial : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x78(0x08)
	struct FColorMaterialInput DiffuseColor; // 0x80(0x40)
	struct FColorMaterialInput SpecularColor; // 0xc0(0x40)
	struct FColorMaterialInput BaseColor; // 0x100(0x40)
	struct FScalarMaterialInput Metallic; // 0x140(0x40)
	struct FScalarMaterialInput Specular; // 0x180(0x40)
	struct FScalarMaterialInput Roughness; // 0x1c0(0x40)
	struct FVectorMaterialInput Normal; // 0x200(0x48)
	struct FColorMaterialInput EmissiveColor; // 0x248(0x40)
	struct FScalarMaterialInput Opacity; // 0x288(0x40)
	struct FScalarMaterialInput OpacityMask; // 0x2c8(0x40)
	enum class EMaterialDomain MaterialDomain; // 0x308(0x01)
	enum class EBlendMode BlendMode; // 0x309(0x01)
	enum class *c252e1179d *892f5f0689; // 0x30a(0x01)
	enum class *d97bcb1730 MaterialDecalResponse; // 0x30b(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	float OpacityMaskClipValue; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct FVectorMaterialInput WorldPositionOffset; // 0x318(0x48)
	struct FVectorMaterialInput WorldDisplacement; // 0x360(0x48)
	struct FScalarMaterialInput TessellationMultiplier; // 0x3a8(0x40)
	struct FColorMaterialInput SubsurfaceColor; // 0x3e8(0x40)
	struct FScalarMaterialInput ClearCoat; // 0x428(0x40)
	struct FScalarMaterialInput ClearCoatRoughness; // 0x468(0x40)
	struct FScalarMaterialInput AmbientOcclusion; // 0x4a8(0x40)
	struct FScalarMaterialInput Refraction; // 0x4e8(0x40)
	struct FVector2MaterialInput *699f8b87dd[0x08]; // 0x528(0x240)
	struct FMaterialAttributesInput MaterialAttributes; // 0x768(0x40)
	struct FScalarMaterialInput PixelDepthOffset; // 0x7a8(0x40)
	struct FScalarMaterialInput Temperature; // 0x7e8(0x40)
	struct FScalarMaterialInput TemperatureAlpha; // 0x828(0x40)
	char bPrepassMasked : 1; // 0x868(0x01)
	char *c19f4da185 : 1; // 0x868(0x01)
	char *4bfb2217bc : 1; // 0x868(0x01)
	char *d694a3b6b8 : 1; // 0x868(0x01)
	char *ab6106af04 : 1; // 0x868(0x01)
	char TwoSided : 1; // 0x868(0x01)
	char DitheredLODTransition : 1; // 0x868(0x01)
	char *0a942eba30 : 1; // 0x868(0x01)
	char *fe5ec1506a : 1; // 0x869(0x01)
	char *f598d55538 : 1; // 0x869(0x01)
	char pad_869_2 : 6; // 0x869(0x01)
	char pad_86A[0x2]; // 0x86a(0x02)
	int32 *da559cb041; // 0x86c(0x04)
	enum class ETranslucencyLightingMode *7fb2c8391e; // 0x870(0x01)
	char pad_871[0x3]; // 0x871(0x03)
	float *7b25f6c5fd; // 0x874(0x04)
	char *344c624756 : 1; // 0x878(0x01)
	char pad_878_1 : 7; // 0x878(0x01)
	char pad_879[0x3]; // 0x879(0x03)
	float *b61a711808; // 0x87c(0x04)
	float *6bd1f1497a; // 0x880(0x04)
	float *dc74a8847a; // 0x884(0x04)
	float *ed3772e6f2; // 0x888(0x04)
	float *fc79fdf720; // 0x88c(0x04)
	struct FLinearColor *09ae97c03d; // 0x890(0x10)
	float TranslucentShadowStartOffset; // 0x8a0(0x04)
	char *b6c7cfe243 : 1; // 0x8a4(0x01)
	char *9363ff76c2 : 1; // 0x8a4(0x01)
	char *1ed2b9f61d : 1; // 0x8a4(0x01)
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x8a4(0x01)
	char bBlockGI : 1; // 0x8a4(0x01)
	char *c3df8e47d7 : 1; // 0x8a4(0x01)
	char bUsedWithSkeletalMesh : 1; // 0x8a4(0x01)
	char bUsedWithEditorCompositing : 1; // 0x8a4(0x01)
	char bUsedWithParticleSprites : 1; // 0x8a5(0x01)
	char bUsedWithBeamTrails : 1; // 0x8a5(0x01)
	char bUsedWithMeshParticles : 1; // 0x8a5(0x01)
	char bUsedWithNiagaraSprites : 1; // 0x8a5(0x01)
	char bUsedWithNiagaraRibbons : 1; // 0x8a5(0x01)
	char bUsedWithNiagaraMeshParticles : 1; // 0x8a5(0x01)
	char bUsedWithStaticLighting : 1; // 0x8a5(0x01)
	char bUsedWithMorphTargets : 1; // 0x8a5(0x01)
	char bUsedWithSplineMeshes : 1; // 0x8a6(0x01)
	char bUsedWithInstancedStaticMeshes : 1; // 0x8a6(0x01)
	char bUsedWithInstancedSplineMeshes : 1; // 0x8a6(0x01)
	char bUsedWithInstancedDeferredDecals : 1; // 0x8a6(0x01)
	char bUsesDistortion : 1; // 0x8a6(0x01)
	char bUsedWithClothing : 1; // 0x8a6(0x01)
	char bUsedWithUI : 1; // 0x8a6(0x01)
	char bAutomaticallySetUsageInEditor : 1; // 0x8a6(0x01)
	char bFullyRough : 1; // 0x8a7(0x01)
	char bUseFullPrecision : 1; // 0x8a7(0x01)
	char bUseLightmapDirectionality : 1; // 0x8a7(0x01)
	char bUseHQForwardReflections : 1; // 0x8a7(0x01)
	char bUsePlanarForwardReflections : 1; // 0x8a7(0x01)
	char bNormalCurvatureToRoughness : 1; // 0x8a7(0x01)
	char pad_8A7_6 : 2; // 0x8a7(0x01)
	enum class *bde18ceaed D3D11TessellationMode; // 0x8a8(0x01)
	char pad_8A9[0x3]; // 0x8a9(0x03)
	char bEnableCrackFreeDisplacement : 1; // 0x8ac(0x01)
	char bEnableAdaptiveTessellation : 1; // 0x8ac(0x01)
	char pad_8AC_2 : 6; // 0x8ac(0x01)
	char pad_8AD[0x3]; // 0x8ad(0x03)
	float *c1f7ce3eec; // 0x8b0(0x04)
	char Wireframe : 1; // 0x8b4(0x01)
	char *b64d9369f4 : 1; // 0x8b4(0x01)
	char *04b54a3ffd : 1; // 0x8b4(0x01)
	char bApplyMaterialClipVolumes : 1; // 0x8b4(0x01)
	char pad_8B4_4 : 4; // 0x8b4(0x01)
	char pad_8B5[0x3]; // 0x8b5(0x03)
	struct F*b8e9ab889d MaterialClipVolumeTypes; // 0x8b8(0x04)
	enum class *71f1052399 MaterialClipVolumeImportance; // 0x8bc(0x01)
	char pad_8BD[0x3]; // 0x8bd(0x03)
	float MaterialClipVolumeFadeRange; // 0x8c0(0x04)
	char bMaterialClipVolumesUseDiscardForTranslucent : 1; // 0x8c4(0x01)
	char bIsMaterialClipVolumeWater : 1; // 0x8c4(0x01)
	char bUseMeshClipping : 1; // 0x8c4(0x01)
	char pad_8C4_3 : 5; // 0x8c4(0x01)
	char pad_8C5[0x3]; // 0x8c5(0x03)
	int32 *bba7e8fc50; // 0x8c8(0x04)
	int32 *115b380a47; // 0x8cc(0x04)
	int32 *e0547e79c6; // 0x8d0(0x04)
	int32 *3aec914426; // 0x8d4(0x04)
	struct TArray<struct UMaterialExpression*> Expressions; // 0x8d8(0x10)
	struct TArray<struct F*ee799b23b1> *efc07589dc; // 0x8e8(0x10)
	struct TArray<struct F*3dfa74d6b2> *fd6d2cfa6e; // 0x8f8(0x10)
	char *8f177f19ef : 1; // 0x908(0x01)
	char bIsMasked : 1; // 0x908(0x01)
	char *87af04c193 : 1; // 0x908(0x01)
	char *5e93ea2718 : 1; // 0x908(0x01)
	char *4b0e8fddfa : 1; // 0x908(0x01)
	char *3ba2dc2d43 : 1; // 0x908(0x01)
	char *7b83fc8a2b : 1; // 0x908(0x01)
	char *e61e16db8f : 1; // 0x908(0x01)
	char *86377d83bc : 1; // 0x909(0x01)
	char pad_909_1 : 7; // 0x909(0x01)
	char pad_90A[0x2]; // 0x90a(0x02)
	uint32 *d044a09482; // 0x90c(0x04)
	enum class *e61ae830b3 BlendableLocation; // 0x910(0x01)
	char pad_911[0x3]; // 0x911(0x03)
	int32 BlendablePriority; // 0x914(0x04)
	bool BlendableOutputAlpha; // 0x918(0x01)
	enum class *80cf585e22 *b11b76b520; // 0x919(0x01)
	char pad_91A[0x2]; // 0x91a(0x02)
	float RefractionDepthBias; // 0x91c(0x04)
	struct FGuid *f498029bb1; // 0x920(0x10)
	char pad_930[0x148]; // 0x930(0x148)
	struct TArray<struct UTexture*> *e007a6b9ff; // 0xa78(0x10)
};

// Class Engine.MaterialInstanceDynamic
// Size: 0x238 (Inherited: 0x1e8)
struct UMaterialInstanceDynamic : UMaterialInstance {
	char pad_1E8[0x50]; // 0x1e8(0x50)

	void *05219ac810(); // Function Engine.MaterialInstanceDynamic.*05219ac810 // Final|Native|Public|BlueprintCallable // @ game+0x683458c
	void SetScalarParameterValue(); // Function Engine.MaterialInstanceDynamic.SetScalarParameterValue // Final|Native|Public|BlueprintCallable // @ game+0x6838b7c
	void *b67ff23c04(); // Function Engine.MaterialInstanceDynamic.*b67ff23c04 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6834638
	void SetVectorParameterValue(); // Function Engine.MaterialInstanceDynamic.SetVectorParameterValue // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68391c0
	void *53d3fe37f9(); // Function Engine.MaterialInstanceDynamic.*53d3fe37f9 // Final|Native|Public|BlueprintCallable // @ game+0x6838fcc
	void K2_InterpolateMaterialInstanceParams(); // Function Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams // Final|Native|Public|BlueprintCallable // @ game+0x68346f0
	void K2_CopyMaterialInstanceParameters(); // Function Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters // Final|Native|Public|BlueprintCallable // @ game+0x68328e8
	void CopyParameterOverrides(); // Function Engine.MaterialInstanceDynamic.CopyParameterOverrides // Final|Native|Public|BlueprintCallable // @ game+0x682c9b0
	void CopyInterpParameters(); // Function Engine.MaterialInstanceDynamic.CopyInterpParameters // Final|Native|Public // @ game+0x682c920
	void *2cc58b3966(); // Function Engine.MaterialInstanceDynamic.*2cc58b3966 // Final|Native|Public|BlueprintCallable // @ game+0x68344e4
};

// Class Engine.MaterialParameterCollection
// Size: 0x70 (Inherited: 0x30)
struct UMaterialParameterCollection : UObject {
	struct FGuid *f498029bb1; // 0x30(0x10)
	struct TArray<struct F*13143d2a53> *c8da72c377; // 0x40(0x10)
	struct TArray<struct F*fcd664c80d> *a7f4a9d12b; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class Engine.*541523bba7
// Size: 0xf0 (Inherited: 0x30)
struct U*541523bba7 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UMaterialParameterCollection* Collection; // 0x38(0x08)
	struct UWorld* World; // 0x40(0x08)
	char pad_48[0xa8]; // 0x48(0xa8)
};

// Class Engine.*fbde80e5eb
// Size: 0x30 (Inherited: 0x30)
struct U*fbde80e5eb : UInterface {
};

// Class Engine.MorphTarget
// Size: 0x48 (Inherited: 0x30)
struct UMorphTarget : UObject {
	struct USkeletalMesh* *37e84b6c76; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Engine.NavArea_Default
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Default : UNavArea {
};

// Class Engine.NavArea_LowHeight
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_LowHeight : UNavArea {
};

// Class Engine.NavArea_Null
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Null : UNavArea {
};

// Class Engine.NavArea_Obstacle
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Obstacle : UNavArea {
};

// Class Engine.NavAreaMeta
// Size: 0x48 (Inherited: 0x48)
struct UNavAreaMeta : UNavArea {
};

// Class Engine.NavAreaMeta_SwitchByAgent
// Size: 0xc8 (Inherited: 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UClass* *29ce06d179; // 0x48(0x08)
	struct UClass* *bd412f6bf1; // 0x50(0x08)
	struct UClass* *b5a668045b; // 0x58(0x08)
	struct UClass* *80cbe2a2b0; // 0x60(0x08)
	struct UClass* *761a7abe42; // 0x68(0x08)
	struct UClass* *814e885537; // 0x70(0x08)
	struct UClass* *46421c2054; // 0x78(0x08)
	struct UClass* *b6274570ab; // 0x80(0x08)
	struct UClass* *ba36e33033; // 0x88(0x08)
	struct UClass* *de936b648d; // 0x90(0x08)
	struct UClass* *de41208c7c; // 0x98(0x08)
	struct UClass* *a69a67b489; // 0xa0(0x08)
	struct UClass* *7c7db32eab; // 0xa8(0x08)
	struct UClass* *cb7f9a2cd0; // 0xb0(0x08)
	struct UClass* *867ce2a761; // 0xb8(0x08)
	struct UClass* *55f691a9f2; // 0xc0(0x08)
};

// Class Engine.NavCollision
// Size: 0x118 (Inherited: 0x30)
struct UNavCollision : UObject {
	char pad_30[0x50]; // 0x30(0x50)
	struct TArray<struct F*c6cc752dac> *7a337e213f; // 0x80(0x10)
	struct TArray<struct F*5c4b944774> *a0856ed098; // 0x90(0x10)
	struct UClass* AreaClass; // 0xa0(0x08)
	char bIsDynamicObstacle : 1; // 0xa8(0x01)
	char bGatherConvexGeometry : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x6f]; // 0xa9(0x6f)
};

// Class Engine.*6d6f0bc575
// Size: 0x30 (Inherited: 0x30)
struct U*6d6f0bc575 : UInterface {
};

// Class Engine.*d83febdd27
// Size: 0x38 (Inherited: 0x30)
struct U*d83febdd27 : UObject {
	struct FName *91900c0c0a; // 0x30(0x08)
};

// Class Engine.*0934e781d0
// Size: 0x48 (Inherited: 0x38)
struct U*0934e781d0 : U*d83febdd27 {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Engine.NavigationPath
// Size: 0xd0 (Inherited: 0x30)
struct UNavigationPath : UObject {
	struct FMulticastDelegate PathUpdatedNotifier; // 0x30(0x10)
	struct TArray<struct FVector> PathPoints; // 0x40(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x50(0x01)
	char pad_51[0x7f]; // 0x51(0x7f)

	void GetPathLength(); // Function Engine.NavigationPath.GetPathLength // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6830540
	void *2d428a7310(); // Function Engine.NavigationPath.*2d428a7310 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x95eea8
	void *b59f06f159(); // Function Engine.NavigationPath.*b59f06f159 // Final|Native|Public|BlueprintCallable // @ game+0x682d738
	void IsValid(); // Function Engine.NavigationPath.IsValid // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x683272c
	void *3f49d0bda4(); // Function Engine.NavigationPath.*3f49d0bda4 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x682d558
	void *0fd557f300(); // Function Engine.NavigationPath.*0fd557f300 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x682f1a4
	void *8ee7f170f0(); // Function Engine.NavigationPath.*8ee7f170f0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6832484
	void *bf1f893fb8(); // Function Engine.NavigationPath.*bf1f893fb8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68302b0
};

// Class Engine.*410883bdaa
// Size: 0x30 (Inherited: 0x30)
struct U*410883bdaa : UInterface {
};

// Class Engine.*cc09a47377
// Size: 0x50 (Inherited: 0x50)
struct U*cc09a47377 : U*7faddb26b3 {
};

// Class Engine.*f0b311c453
// Size: 0x58 (Inherited: 0x58)
struct U*f0b311c453 : U*d63c27cc87 {
};

// Class Engine.*5fa8034eea
// Size: 0x30 (Inherited: 0x30)
struct U*5fa8034eea : UInterface {
};

// Class Engine.*14dc1b4005
// Size: 0x378 (Inherited: 0xe8)
struct U*14dc1b4005 : UPackageMap {
	char pad_E8[0x290]; // 0xe8(0x290)
};

// Class Engine.DemoNetConnection
// Size: 0x659c0 (Inherited: 0x65850)
struct UDemoNetConnection : UNetConnection {
	char pad_65850[0x20]; // 0x65850(0x20)
	struct FStringClassReference OverrideActorChannel; // 0x65870(0x10)
	char pad_65880[0x140]; // 0x65880(0x140)
};

// Class Engine.*03d8c2b98e
// Size: 0x30 (Inherited: 0x30)
struct U*03d8c2b98e : UInterface {
};

// Class Engine.*d7b54547d6
// Size: 0xa0 (Inherited: 0x30)
struct U*d7b54547d6 : UObject {
	struct TMap<struct FName, struct F*0c71031120> NodeMapping; // 0x30(0x50)
	struct UBlueprint* *5970d93c9a; // 0x80(0x20)
};

// Class Engine.ObjectLibrary
// Size: 0x160 (Inherited: 0x30)
struct UObjectLibrary : UObject {
	struct UClass* *866761b53f; // 0x30(0x08)
	bool bHasBlueprintClasses; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct UObject*> Objects; // 0x40(0x10)
	struct TArray<struct UObject*> *bdaaf9434e; // 0x50(0x10)
	bool *0bab0d8d8c; // 0x60(0x01)
	bool *c4249b6cb2; // 0x61(0x01)
	char pad_62[0xfe]; // 0x62(0xfe)
};

// Class Engine.*d1847240ea
// Size: 0x40 (Inherited: 0x30)
struct U*d1847240ea : UObject {
	struct TArray<struct UObject*> *66b14009b5; // 0x30(0x10)
};

// Class Engine.*d387283508
// Size: 0x30 (Inherited: 0x30)
struct U*d387283508 : UObject {

	void Activate(); // Function Engine.*d387283508.Activate // Native|Public|BlueprintCallable // @ game+0xc56b64
};

// Class Engine.*064a1a15d1
// Size: 0x30 (Inherited: 0x30)
struct U*064a1a15d1 : UObject {
};

// Class Engine.*41ff50be2e
// Size: 0x30 (Inherited: 0x30)
struct U*41ff50be2e : UObject {
};

// Class Engine.ParticleEmitter
// Size: 0x188 (Inherited: 0x30)
struct UParticleEmitter : UObject {
	struct FName *e0182d3b3c; // 0x30(0x08)
	int32 *66cf9aca30; // 0x38(0x04)
	enum class *fdac681ce6 *e2b31efd7c; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct UParticleLODLevel*> *a01bd85945; // 0x40(0x10)
	char *f898ec614c : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 *28dd93b140; // 0x54(0x04)
	int32 *c41c5a9fe6; // 0x58(0x04)
	float MediumDetailSpawnRateScale; // 0x5c(0x04)
	float *0dd6b2454f; // 0x60(0x04)
	enum class *1d65b135dd DetailMode; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	char *30a4bfc8a7 : 1; // 0x68(0x01)
	char *c2de77a827 : 1; // 0x68(0x01)
	char *7837e1b3ca : 1; // 0x68(0x01)
	char *ac073d2231 : 1; // 0x68(0x01)
	char pad_68_4 : 4; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class EParticleSignificanceLevel *2bb1ef59f1; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float *e80b3617dc; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct U*5ca6d5a987* *5ca6d5a987; // 0x78(0x08)
	char pad_80[0x108]; // 0x80(0x108)
};

// Class Engine.*c4467c72af
// Size: 0x188 (Inherited: 0x188)
struct U*c4467c72af : UParticleEmitter {
};

// Class Engine.ParticleLODLevel
// Size: 0xc0 (Inherited: 0x30)
struct UParticleLODLevel : UObject {
	int32 Level; // 0x30(0x04)
	char bEnabled : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UParticleModuleRequired* *86c9bb9e83; // 0x38(0x08)
	struct TArray<struct UParticleModule*> Modules; // 0x40(0x10)
	struct UParticleModuleTypeDataBase* *496192c1f8; // 0x50(0x08)
	struct UParticleModuleSpawn* *c37cd4e0ac; // 0x58(0x08)
	struct UParticleModuleEventGenerator* *ff5f8067ba; // 0x60(0x08)
	struct TArray<struct U*78d18b0c9e*> *48ef7ca47f; // 0x68(0x10)
	struct TArray<struct UParticleModule*> *49e23a7ff1; // 0x78(0x10)
	struct TArray<struct UParticleModule*> *7a23f6842f; // 0x88(0x10)
	struct TArray<struct UParticleModuleOrbit*> *9fb7b67318; // 0x98(0x10)
	struct TArray<struct UParticleModuleEventReceiverBase*> *6ae280a902; // 0xa8(0x10)
	char *f898ec614c : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 *28dd93b140; // 0xbc(0x04)
};

// Class Engine.ParticleModule
// Size: 0x38 (Inherited: 0x30)
struct UParticleModule : UObject {
	char *3fd5df839d : 1; // 0x30(0x01)
	char *26e1b7522c : 1; // 0x30(0x01)
	char *4a1475a14e : 1; // 0x30(0x01)
	char *89365a870e : 1; // 0x30(0x01)
	char *f0a816e9df : 1; // 0x30(0x01)
	char *a638f1083c : 1; // 0x30(0x01)
	char *35bd70b225 : 1; // 0x30(0x01)
	char bEnabled : 1; // 0x30(0x01)
	char *ad2b9ed579 : 1; // 0x31(0x01)
	char *4e3823b1e7 : 1; // 0x31(0x01)
	char *a7396396f8 : 1; // 0x31(0x01)
	char *3bdbac3b3b : 1; // 0x31(0x01)
	char pad_31_4 : 4; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	bool *3fc88a1a97; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class Engine.*2dfdd21be9
// Size: 0x40 (Inherited: 0x38)
struct U*2dfdd21be9 : UParticleModule {
	char *284da7a4e3 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleAcceleration
// Size: 0x98 (Inherited: 0x40)
struct UParticleModuleAcceleration : U*2dfdd21be9 {
	struct FRawDistributionVector Acceleration; // 0x40(0x50)
	char *8bbed36aa3 : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class Engine.*5307705f68
// Size: 0x50 (Inherited: 0x40)
struct U*5307705f68 : U*2dfdd21be9 {
	struct FVector Acceleration; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleAccelerationDrag
// Size: 0x80 (Inherited: 0x40)
struct UParticleModuleAccelerationDrag : U*2dfdd21be9 {
	struct U*137fe4d756* DragCoefficient; // 0x40(0x08)
	struct F*fc532221d4 *8942563c93; // 0x48(0x38)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// Size: 0x80 (Inherited: 0x40)
struct UParticleModuleAccelerationDragScaleOverLife : U*2dfdd21be9 {
	struct U*137fe4d756* DragScale; // 0x40(0x08)
	struct F*fc532221d4 *28eaeb28bf; // 0x48(0x38)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
// Size: 0x90 (Inherited: 0x40)
struct UParticleModuleAccelerationOverLifetime : U*2dfdd21be9 {
	struct FRawDistributionVector *c21151d15e; // 0x40(0x50)
};

// Class Engine.*d26889f35f
// Size: 0x38 (Inherited: 0x38)
struct U*d26889f35f : UParticleModule {
};

// Class Engine.ParticleModuleAttractorLine
// Size: 0xc0 (Inherited: 0x38)
struct UParticleModuleAttractorLine : U*d26889f35f {
	struct FVector *e02d64df51; // 0x38(0x0c)
	struct FVector *ab946f7dd7; // 0x44(0x0c)
	struct F*fc532221d4 Range; // 0x50(0x38)
	struct F*fc532221d4 Strength; // 0x88(0x38)
};

// Class Engine.ParticleModuleAttractorParticle
// Size: 0xc8 (Inherited: 0x38)
struct UParticleModuleAttractorParticle : U*d26889f35f {
	struct FName *e0182d3b3c; // 0x38(0x08)
	struct F*fc532221d4 Range; // 0x40(0x38)
	char *adf1421665 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct F*fc532221d4 Strength; // 0x80(0x38)
	char *ac1d0e089d : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	enum class *f9a745e81c *744176f2df; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	char *a5e7e5ff5a : 1; // 0xc0(0x01)
	char *8b6ad6aa19 : 1; // 0xc0(0x01)
	char pad_C0_2 : 6; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32 *c0ee42aa27; // 0xc4(0x04)
};

// Class Engine.ParticleModuleAttractorPoint
// Size: 0x100 (Inherited: 0x38)
struct UParticleModuleAttractorPoint : U*d26889f35f {
	struct FRawDistributionVector Position; // 0x38(0x50)
	struct F*fc532221d4 Range; // 0x88(0x38)
	struct F*fc532221d4 Strength; // 0xc0(0x38)
	char *137617c5a3 : 1; // 0xf8(0x01)
	char *ac1d0e089d : 1; // 0xf8(0x01)
	char *9fc62253ea : 1; // 0xf8(0x01)
	char *4578090061 : 1; // 0xf8(0x01)
	char *bdb70d765d : 1; // 0xf8(0x01)
	char *1e6a554923 : 1; // 0xf8(0x01)
	char *b93059d8cb : 1; // 0xf8(0x01)
	char *4531ca41d7 : 1; // 0xf8(0x01)
	char *c70c82e78c : 1; // 0xf9(0x01)
	char *7a9747a8ac : 1; // 0xf9(0x01)
	char pad_F9_2 : 6; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
};

// Class Engine.ParticleModuleAttractorPointGravity
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleAttractorPointGravity : U*d26889f35f {
	struct FVector Position; // 0x38(0x0c)
	float Radius; // 0x44(0x04)
	struct U*137fe4d756* Strength; // 0x48(0x08)
	struct F*fc532221d4 *a5336815d4; // 0x50(0x38)
};

// Class Engine.ParticleModuleBeamBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleBeamBase : UParticleModule {
};

// Class Engine.*c992bec286
// Size: 0x128 (Inherited: 0x38)
struct U*c992bec286 : UParticleModuleBeamBase {
	enum class *dee7e4bc1f *ebb8483ca6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct F*fab7a05abf *ae9a3a405d; // 0x3c(0x04)
	struct FRawDistributionVector Position; // 0x40(0x50)
	struct F*fab7a05abf *7c1b485ec6; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FRawDistributionVector Tangent; // 0x98(0x50)
	char *80e6e2ffbd : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct F*fab7a05abf *c44ab15495; // 0xec(0x04)
	struct F*fc532221d4 Strength; // 0xf0(0x38)
};

// Class Engine.*19f3b8195d
// Size: 0x1c0 (Inherited: 0x38)
struct U*19f3b8195d : UParticleModuleBeamBase {
	char *4ba902573a : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 Frequency; // 0x3c(0x04)
	int32 *53b2d78012; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FRawDistributionVector *ed1b0d3e41; // 0x48(0x50)
	struct F*fc532221d4 *a4aa40d628; // 0x98(0x38)
	char *aaa52a25ca : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FRawDistributionVector *6b1a03e949; // 0xd8(0x50)
	char *81ada2f873 : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float *caa0762b0a; // 0x12c(0x04)
	char *09a456ac0b : 1; // 0x130(0x01)
	char *c14cf9599b : 1; // 0x130(0x01)
	char pad_130_2 : 6; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float *80a055c1a3; // 0x134(0x04)
	float *c9d10b581a; // 0x138(0x04)
	char *80144aebfc : 1; // 0x13c(0x01)
	char pad_13C_1 : 7; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct F*fc532221d4 *aa378308f3; // 0x140(0x38)
	int32 NoiseTessellation; // 0x178(0x04)
	char *46dc60bad4 : 1; // 0x17c(0x01)
	char pad_17C_1 : 7; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	float *7ee857a11f; // 0x180(0x04)
	char *83b53e8a65 : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct F*fc532221d4 NoiseScale; // 0x188(0x38)
};

// Class Engine.*538e255463
// Size: 0x140 (Inherited: 0x38)
struct U*538e255463 : UParticleModuleBeamBase {
	enum class *d31ea083ff *b48e706969; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName SourceName; // 0x40(0x08)
	char *5a6c64d2ac : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FRawDistributionVector Source; // 0x50(0x50)
	char *cf087fe060 : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	enum class *5dccb754d3 *95a9385594; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct FRawDistributionVector *e85db8d8cc; // 0xa8(0x50)
	char *0313b043b8 : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct F*fc532221d4 *f94672ee56; // 0x100(0x38)
	char *7b013eb13c : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class Engine.*d6a600410b
// Size: 0x140 (Inherited: 0x38)
struct U*d6a600410b : UParticleModuleBeamBase {
	enum class *d31ea083ff *65c2c72a00; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName TargetName; // 0x40(0x08)
	struct FRawDistributionVector Target; // 0x48(0x50)
	char *150d6b0fa7 : 1; // 0x98(0x01)
	char *1e5303ea30 : 1; // 0x98(0x01)
	char pad_98_2 : 6; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	enum class *5dccb754d3 *fbae626f19; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct FRawDistributionVector *1e99e11ba5; // 0xa0(0x50)
	char *25d2a87504 : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct F*fc532221d4 *ce798c9095; // 0xf8(0x38)
	char *f9fcd52a27 : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float *51d23eb2e1; // 0x134(0x04)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class Engine.ParticleModuleCameraBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleCameraBase : UParticleModule {
};

// Class Engine.*97093acad1
// Size: 0x78 (Inherited: 0x38)
struct U*97093acad1 : UParticleModuleCameraBase {
	struct F*fc532221d4 *3e06b195ab; // 0x38(0x38)
	char *77ab155c53 : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	enum class *8f2815d394 *f9137e16d7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Engine.*8583321e85
// Size: 0x38 (Inherited: 0x38)
struct U*8583321e85 : UParticleModule {
};

// Class Engine.ParticleModuleCollision
// Size: 0x1c0 (Inherited: 0x38)
struct UParticleModuleCollision : U*8583321e85 {
	struct FRawDistributionVector *21ddb3a806; // 0x38(0x50)
	struct FRawDistributionVector *864eeca1e1; // 0x88(0x50)
	struct F*fc532221d4 *d89a1b7347; // 0xd8(0x38)
	enum class *b19f33b08c *28bf48647c; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct TArray<enum class EObjectTypeQuery> *d39db20c2d; // 0x118(0x10)
	char pad_128[0x8]; // 0x128(0x08)
	char *c3320c4f1b : 1; // 0x130(0x01)
	char *e01106a4c7 : 1; // 0x130(0x01)
	char pad_130_2 : 6; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct F*fc532221d4 ParticleMass; // 0x138(0x38)
	float *0b6a8d215d; // 0x170(0x04)
	char *0c4d5e883c : 1; // 0x174(0x01)
	char *a0ff13c71f : 1; // 0x174(0x01)
	char pad_174_2 : 6; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	float *0f8df353b9; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct F*fc532221d4 *0eabdddd58; // 0x180(0x38)
	char *0cb44e58f9 : 1; // 0x1b8(0x01)
	char *d1d03b8e39 : 1; // 0x1b8(0x01)
	char *4194bdef09 : 1; // 0x1b8(0x01)
	char pad_1B8_3 : 5; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float *46ebcdb4bb; // 0x1bc(0x04)
};

// Class Engine.ParticleModuleCollisionGPU
// Size: 0xc0 (Inherited: 0x38)
struct UParticleModuleCollisionGPU : U*8583321e85 {
	struct F*fc532221d4 *35cca64f48; // 0x38(0x38)
	struct F*fc532221d4 ResilienceScaleOverLife; // 0x70(0x38)
	float Friction; // 0xa8(0x04)
	float *e900b741c6; // 0xac(0x04)
	float *f9ca710dbe; // 0xb0(0x04)
	float RadiusScale; // 0xb4(0x04)
	float *f7ff021d7c; // 0xb8(0x04)
	enum class EParticleCollisionResponse Response; // 0xbc(0x01)
	enum class EParticleCollisionMode *bb3231f9ad; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
};

// Class Engine.*d911908ff9
// Size: 0x38 (Inherited: 0x38)
struct U*d911908ff9 : UParticleModule {
};

// Class Engine.*c3f7955ae9
// Size: 0xc8 (Inherited: 0x38)
struct U*c3f7955ae9 : U*d911908ff9 {
	struct FRawDistributionVector *393dc09546; // 0x38(0x50)
	struct F*fc532221d4 *c089dc917c; // 0x88(0x38)
	char bClampAlpha : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.*0cc4454eac
// Size: 0xe8 (Inherited: 0xc8)
struct U*0cc4454eac : U*c3f7955ae9 {
	struct F*0889995bc8 *85be4a61ef; // 0xc8(0x20)
};

// Class Engine.*76c8527ce5
// Size: 0xc8 (Inherited: 0x38)
struct U*76c8527ce5 : U*d911908ff9 {
	struct FRawDistributionVector *368c361e9c; // 0x38(0x50)
	struct F*fc532221d4 *ec8164ddb7; // 0x88(0x38)
	char bClampAlpha : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.*ce25e0e472
// Size: 0xc8 (Inherited: 0x38)
struct U*ce25e0e472 : U*d911908ff9 {
	struct FRawDistributionVector *2149abf3bf; // 0x38(0x50)
	struct F*fc532221d4 *14c7c77307; // 0x88(0x38)
	char *6223e846a9 : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.*c72ca72990
// Size: 0x38 (Inherited: 0x38)
struct U*c72ca72990 : UParticleModule {
};

// Class Engine.ParticleModuleEventGenerator
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleEventGenerator : U*c72ca72990 {
	struct TArray<struct F*881fc87473> Events; // 0x38(0x10)
};

// Class Engine.ParticleModuleEventReceiverBase
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleEventReceiverBase : U*c72ca72990 {
	enum class EParticleEventType *b42fd0a74c; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName EventName; // 0x40(0x08)
};

// Class Engine.*391388bfe8
// Size: 0x50 (Inherited: 0x48)
struct U*391388bfe8 : UParticleModuleEventReceiverBase {
	char *8f91b89b06 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*0d9c86f62f
// Size: 0xf0 (Inherited: 0x48)
struct U*0d9c86f62f : UParticleModuleEventReceiverBase {
	struct F*fc532221d4 SpawnCount; // 0x48(0x38)
	char *407bc0a71c : 1; // 0x80(0x01)
	char *f20ab17d37 : 1; // 0x80(0x01)
	char *ffd1dce33c : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FRawDistributionVector *3697f42974; // 0x88(0x50)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0xd8(0x10)
	char *9c17886dda : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class Engine.ParticleModuleKillBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleKillBase : UParticleModule {
};

// Class Engine.*92485a0dbe
// Size: 0xe0 (Inherited: 0x38)
struct U*92485a0dbe : UParticleModuleKillBase {
	struct FRawDistributionVector *ef2eb77ff9; // 0x38(0x50)
	struct FRawDistributionVector *0c18293e45; // 0x88(0x50)
	char *1f122488e0 : 1; // 0xd8(0x01)
	char *51fcb4abc4 : 1; // 0xd8(0x01)
	char *0102a3b62b : 1; // 0xd8(0x01)
	char pad_D8_3 : 5; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class Engine.*40ea20d82c
// Size: 0x78 (Inherited: 0x38)
struct U*40ea20d82c : UParticleModuleKillBase {
	struct F*fc532221d4 Height; // 0x38(0x38)
	char *1f122488e0 : 1; // 0x70(0x01)
	char *61148324e0 : 1; // 0x70(0x01)
	char *d8f6a13d19 : 1; // 0x70(0x01)
	char pad_70_3 : 5; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.*9f23cb87f6
// Size: 0x38 (Inherited: 0x38)
struct U*9f23cb87f6 : UParticleModule {
};

// Class Engine.*380ee4e72b
// Size: 0x70 (Inherited: 0x38)
struct U*380ee4e72b : U*9f23cb87f6 {
	struct F*fc532221d4 LifeTime; // 0x38(0x38)
};

// Class Engine.*9b64f8e010
// Size: 0x90 (Inherited: 0x70)
struct U*9b64f8e010 : U*380ee4e72b {
	struct F*0889995bc8 *85be4a61ef; // 0x70(0x20)
};

// Class Engine.ParticleModuleLightBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleLightBase : UParticleModule {
};

// Class Engine.*712415000d
// Size: 0x150 (Inherited: 0x38)
struct U*712415000d : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x38(0x01)
	bool *5bd5352062; // 0x39(0x01)
	bool *762f6e5c39; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float *371316e0ec; // 0x3c(0x04)
	struct FRawDistributionVector *2149abf3bf; // 0x40(0x50)
	struct F*fc532221d4 *2dee75a2e0; // 0x90(0x38)
	struct F*fc532221d4 RadiusScale; // 0xc8(0x38)
	struct F*fc532221d4 *611124579e; // 0x100(0x38)
	struct FLightingChannels LightingChannels; // 0x138(0x03)
	char pad_13B[0x1]; // 0x13b(0x01)
	float VolumetricScatteringIntensity; // 0x13c(0x04)
	bool *4c08e7690c; // 0x140(0x01)
	bool *44a1c62718; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
	struct U*b63877ce42* IESTexture; // 0x148(0x08)
};

// Class Engine.*367e8bef7d
// Size: 0x170 (Inherited: 0x150)
struct U*367e8bef7d : U*712415000d {
	struct F*0889995bc8 *85be4a61ef; // 0x150(0x20)
};

// Class Engine.*465a2bcfcd
// Size: 0x38 (Inherited: 0x38)
struct U*465a2bcfcd : UParticleModule {
};

// Class Engine.*ccdeee53dd
// Size: 0x90 (Inherited: 0x38)
struct U*ccdeee53dd : U*465a2bcfcd {
	struct FRawDistributionVector StartLocation; // 0x38(0x50)
	float *1c5c5aec5b; // 0x88(0x04)
	float *1361bfd053; // 0x8c(0x04)
};

// Class Engine.*94d76d7322
// Size: 0xb0 (Inherited: 0x90)
struct U*94d76d7322 : U*ccdeee53dd {
	struct F*0889995bc8 *85be4a61ef; // 0x90(0x20)
};

// Class Engine.*5e8150ad59
// Size: 0x90 (Inherited: 0x90)
struct U*5e8150ad59 : U*ccdeee53dd {
};

// Class Engine.*03071dcaf9
// Size: 0xb0 (Inherited: 0x90)
struct U*03071dcaf9 : U*5e8150ad59 {
	struct F*0889995bc8 *85be4a61ef; // 0x90(0x20)
};

// Class Engine.*e91c2b1a13
// Size: 0x78 (Inherited: 0x38)
struct U*e91c2b1a13 : U*465a2bcfcd {
	enum class *4c02ea1264 SourceType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector *24458bb2b1; // 0x3c(0x0c)
	struct TArray<struct F*e0b8298693> *3be98f9117; // 0x48(0x10)
	enum class *a270a99a65 *744176f2df; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	char *88d021f1ad : 1; // 0x5c(0x01)
	char *577c57b7b3 : 1; // 0x5c(0x01)
	char *29e42e4f6e : 1; // 0x5c(0x01)
	char pad_5C_3 : 5; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float *3697f42974; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FName *6e19341414; // 0x68(0x08)
	int32 *2f88a16f8c; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Engine.ParticleModuleLocationDirect
// Size: 0x178 (Inherited: 0x38)
struct UParticleModuleLocationDirect : U*465a2bcfcd {
	struct FRawDistributionVector Location; // 0x38(0x50)
	struct FRawDistributionVector *60056591c2; // 0x88(0x50)
	struct FRawDistributionVector ScaleFactor; // 0xd8(0x50)
	struct FRawDistributionVector Direction; // 0x128(0x50)
};

// Class Engine.*123025c8d8
// Size: 0x58 (Inherited: 0x38)
struct U*123025c8d8 : U*465a2bcfcd {
	struct FName *e0182d3b3c; // 0x38(0x08)
	enum class *39e5765864 *744176f2df; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char *3c285a6140 : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *fd4d1beb23; // 0x48(0x04)
	char *beaf03370e : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float *68d371ba44; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.ParticleModuleLocationEmitterDirect
// Size: 0x40 (Inherited: 0x38)
struct UParticleModuleLocationEmitterDirect : U*465a2bcfcd {
	struct FName *e0182d3b3c; // 0x38(0x08)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xc8 (Inherited: 0x38)
struct UParticleModuleLocationPrimitiveBase : U*465a2bcfcd {
	char *bdb70d765d : 1; // 0x38(0x01)
	char *1e6a554923 : 1; // 0x38(0x01)
	char *b93059d8cb : 1; // 0x38(0x01)
	char *4531ca41d7 : 1; // 0x38(0x01)
	char *c70c82e78c : 1; // 0x38(0x01)
	char *7a9747a8ac : 1; // 0x38(0x01)
	char *c479df674e : 1; // 0x38(0x01)
	char Velocity : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct F*fc532221d4 *22117c41b1; // 0x40(0x38)
	struct FRawDistributionVector StartLocation; // 0x78(0x50)
};

// Class Engine.*8feaac8489
// Size: 0x148 (Inherited: 0xc8)
struct U*8feaac8489 : UParticleModuleLocationPrimitiveBase {
	char *3465e82c38 : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct F*fc532221d4 *5fae28bd37; // 0xd0(0x38)
	struct F*fc532221d4 *0d3851be87; // 0x108(0x38)
	enum class *8b567e68d5 *5e632ab129; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class Engine.*f4239a4d58
// Size: 0x168 (Inherited: 0x148)
struct U*f4239a4d58 : U*8feaac8489 {
	struct F*0889995bc8 *85be4a61ef; // 0x148(0x20)
};

// Class Engine.*5698645447
// Size: 0x100 (Inherited: 0xc8)
struct U*5698645447 : UParticleModuleLocationPrimitiveBase {
	struct F*fc532221d4 *5fae28bd37; // 0xc8(0x38)
};

// Class Engine.*c1703b72a6
// Size: 0x120 (Inherited: 0x100)
struct U*c1703b72a6 : U*5698645447 {
	struct F*0889995bc8 *85be4a61ef; // 0x100(0x20)
};

// Class Engine.*7f6e50d5fa
// Size: 0x130 (Inherited: 0x38)
struct U*7f6e50d5fa : U*465a2bcfcd {
	struct FRawDistributionVector StartOffset; // 0x38(0x50)
	struct F*fc532221d4 Height; // 0x88(0x38)
	struct F*fc532221d4 Angle; // 0xc0(0x38)
	struct F*fc532221d4 Thickness; // 0xf8(0x38)
};

// Class Engine.*554a307c2a
// Size: 0x98 (Inherited: 0x38)
struct U*554a307c2a : U*465a2bcfcd {
	enum class *5715644d59 SourceType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector *24458bb2b1; // 0x3c(0x0c)
	char *88d021f1ad : 1; // 0x48(0x01)
	char *577c57b7b3 : 1; // 0x48(0x01)
	char *29e42e4f6e : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float *3697f42974; // 0x4c(0x04)
	struct FName *6e19341414; // 0x50(0x08)
	struct TArray<struct FName> *b83d9c9cb5; // 0x58(0x10)
	char *9fd7496115 : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FVector *0bddc9ec5b; // 0x6c(0x0c)
	float NormalCheckToleranceDegrees; // 0x78(0x04)
	float *b3ca1cd604; // 0x7c(0x04)
	struct TArray<int32> *35bced1ccb; // 0x80(0x10)
	char *64ed8db495 : 1; // 0x90(0x01)
	char *f5b8631ac0 : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	uint32 *1f4d8c49ef; // 0x94(0x04)
};

// Class Engine.*98cc2aac34
// Size: 0x40 (Inherited: 0x38)
struct U*98cc2aac34 : U*465a2bcfcd {
	struct FVector2D *4bbe52a103; // 0x38(0x08)
};

// Class Engine.ParticleModuleSourceMovement
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleSourceMovement : U*465a2bcfcd {
	struct FRawDistributionVector *a635dc5696; // 0x38(0x50)
};

// Class Engine.*93023b9c9a
// Size: 0x38 (Inherited: 0x38)
struct U*93023b9c9a : UParticleModule {
};

// Class Engine.ParticleModuleMeshMaterial
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleMeshMaterial : U*93023b9c9a {
	struct TArray<struct UMaterialInterface*> *3223471d3b; // 0x38(0x10)
};

// Class Engine.*ed91484cfa
// Size: 0x40 (Inherited: 0x38)
struct U*ed91484cfa : UParticleModule {
	char *8dd4e477e9 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleOrbit
// Size: 0x150 (Inherited: 0x40)
struct UParticleModuleOrbit : U*ed91484cfa {
	enum class *908050ad81 *f2b2b8da64; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FRawDistributionVector OffsetAmount; // 0x48(0x50)
	struct F*c3a6c65e4e *c2bb0220a6; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FRawDistributionVector RotationAmount; // 0xa0(0x50)
	struct F*c3a6c65e4e *cbda817560; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FRawDistributionVector RotationRateAmount; // 0xf8(0x50)
	struct F*c3a6c65e4e *c8bbbbe28c; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class Engine.*0d3e6291da
// Size: 0x38 (Inherited: 0x38)
struct U*0d3e6291da : UParticleModule {
};

// Class Engine.*1177a6e90e
// Size: 0x40 (Inherited: 0x38)
struct U*1177a6e90e : U*0d3e6291da {
	enum class *5c5c218809 LockAxisFlags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleParameterBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleParameterBase : UParticleModule {
};

// Class Engine.*3ba35fdda6
// Size: 0x50 (Inherited: 0x38)
struct U*3ba35fdda6 : UParticleModuleParameterBase {
	struct TArray<struct F*da76af86ba> *e9a5695241; // 0x38(0x10)
	int32 *4a5bcb5561; // 0x48(0x04)
	char *3c8a38c53a : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.*808b495e96
// Size: 0x70 (Inherited: 0x50)
struct U*808b495e96 : U*3ba35fdda6 {
	struct F*0889995bc8 *85be4a61ef; // 0x50(0x20)
};

// Class Engine.SubUVAnimation
// Size: 0x68 (Inherited: 0x30)
struct USubUVAnimation : UObject {
	struct UTexture2D* *dbe19c3222; // 0x30(0x08)
	int32 *a05a7fa61b; // 0x38(0x04)
	int32 *70071eabe8; // 0x3c(0x04)
	enum class *2b2beae94a *daea689255; // 0x40(0x01)
	enum class *664714f462 *d665611e8b; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float *19e728fde4; // 0x44(0x04)
	char pad_48[0x20]; // 0x48(0x20)
};

// Class Engine.ParticleModuleRequired
// Size: 0x190 (Inherited: 0x38)
struct UParticleModuleRequired : UParticleModule {
	struct UMaterialInterface* Material; // 0x38(0x08)
	struct UMaterialInterface* *3b33ce54db; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
	struct FVector4 *d30d54539e; // 0x50(0x10)
	struct FVector *c178d00895; // 0x60(0x0c)
	struct FRotator *05c879980f; // 0x6c(0x0c)
	enum class *43c2dc77ea *bbce4d12e2; // 0x78(0x01)
	enum class *1a708bdd1c SortMode; // 0x79(0x01)
	enum class *73b0841750 *e864325772; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	float *00ed6ce147; // 0x7c(0x04)
	float *f76cf32bac; // 0x80(0x04)
	float *5f8b6dad3c; // 0x84(0x04)
	char *c0140b2be8 : 1; // 0x88(0x01)
	char *6225bd0dc4 : 1; // 0x88(0x01)
	char *2e30a17283 : 1; // 0x88(0x01)
	char *3d34c1799f : 1; // 0x88(0x01)
	char *bfbaa256eb : 1; // 0x88(0x01)
	char *490ffcaeba : 1; // 0x88(0x01)
	char *b0125600c0 : 1; // 0x88(0x01)
	char *50686dc526 : 1; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float *979743a478; // 0x8c(0x04)
	float *4f19bad287; // 0x90(0x04)
	int32 *4baac6a938; // 0x94(0x04)
	struct F*fc532221d4 SpawnRate; // 0x98(0x38)
	struct TArray<struct F*ac69912133> *f94745bb13; // 0xd0(0x10)
	float *ada4982907; // 0xe0(0x04)
	float *c21b7b7577; // 0xe4(0x04)
	char *28ea99aaa8 : 1; // 0xe8(0x01)
	char *63054e9aba : 1; // 0xe8(0x01)
	char pad_E8_2 : 6; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	enum class EParticleSubUVInterpMethod InterpolationMethod; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	int32 *a05a7fa61b; // 0xf0(0x04)
	int32 *70071eabe8; // 0xf4(0x04)
	char *c823a30e27 : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float *9d0a051c6b; // 0xfc(0x04)
	int32 *3593ab3c94; // 0x100(0x04)
	char *4eeba502b1 : 1; // 0x104(0x01)
	char pad_104_1 : 7; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FVector MacroUVPosition; // 0x108(0x0c)
	float MacroUVRadius; // 0x114(0x04)
	char *84931ae83c : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	int32 MaxDrawCount; // 0x11c(0x04)
	enum class EParticleUVFlipMode *8319f2871e; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UTexture2D* *2521cf46ac; // 0x128(0x08)
	enum class *2b2beae94a *daea689255; // 0x130(0x01)
	enum class *664714f462 *d665611e8b; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	float *19e728fde4; // 0x134(0x04)
	enum class *e739d46098 *3bc5eeb5dc; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FVector *4deeea7cfb; // 0x13c(0x0c)
	struct FVector *b0b993b74c; // 0x148(0x0c)
	char *0b13797135 : 1; // 0x154(0x01)
	char pad_154_1 : 7; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct TArray<struct FName> *6dd5386571; // 0x158(0x10)
	char pad_168[0x28]; // 0x168(0x28)
};

// Class Engine.*bcf8ccd975
// Size: 0x38 (Inherited: 0x38)
struct U*bcf8ccd975 : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotation
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleMeshRotation : U*bcf8ccd975 {
	struct FRawDistributionVector *86386793c9; // 0x38(0x50)
	char *db9dda97c5 : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
// Size: 0xb0 (Inherited: 0x90)
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	struct F*0889995bc8 *85be4a61ef; // 0x90(0x20)
};

// Class Engine.*b1e2a9ab8c
// Size: 0x70 (Inherited: 0x38)
struct U*b1e2a9ab8c : U*bcf8ccd975 {
	struct F*fc532221d4 *86386793c9; // 0x38(0x38)
};

// Class Engine.*2e54e43d61
// Size: 0x90 (Inherited: 0x70)
struct U*2e54e43d61 : U*b1e2a9ab8c {
	struct F*0889995bc8 *85be4a61ef; // 0x70(0x20)
};

// Class Engine.ParticleModuleRotationOverLifetime
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleRotationOverLifetime : U*bcf8ccd975 {
	struct F*fc532221d4 *d558923017; // 0x38(0x38)
	char Scale : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.*b2b7e87763
// Size: 0x38 (Inherited: 0x38)
struct U*b2b7e87763 : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotationRate
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleMeshRotationRate : U*b2b7e87763 {
	struct FRawDistributionVector *78ec218f4d; // 0x38(0x50)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// Size: 0xa8 (Inherited: 0x88)
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	struct F*0889995bc8 *85be4a61ef; // 0x88(0x20)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleMeshRotationRateMultiplyLife : U*b2b7e87763 {
	struct FRawDistributionVector LifeMultiplier; // 0x38(0x50)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleMeshRotationRateOverLife : U*b2b7e87763 {
	struct FRawDistributionVector *4e9a6746b5; // 0x38(0x50)
	char *9ba1291671 : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*32a6f5b7de
// Size: 0x70 (Inherited: 0x38)
struct U*32a6f5b7de : U*b2b7e87763 {
	struct F*fc532221d4 *78ec218f4d; // 0x38(0x38)
};

// Class Engine.*82e2300d39
// Size: 0x90 (Inherited: 0x70)
struct U*82e2300d39 : U*32a6f5b7de {
	struct F*0889995bc8 *85be4a61ef; // 0x70(0x20)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleRotationRateMultiplyLife : U*b2b7e87763 {
	struct F*fc532221d4 LifeMultiplier; // 0x38(0x38)
};

// Class Engine.*cc00fbaa13
// Size: 0x38 (Inherited: 0x38)
struct U*cc00fbaa13 : UParticleModule {
};

// Class Engine.*a21212ca29
// Size: 0x88 (Inherited: 0x38)
struct U*a21212ca29 : U*cc00fbaa13 {
	struct FRawDistributionVector *b84ebd7be1; // 0x38(0x50)
};

// Class Engine.*7850921717
// Size: 0xa8 (Inherited: 0x88)
struct U*7850921717 : U*a21212ca29 {
	struct F*0889995bc8 *85be4a61ef; // 0x88(0x20)
};

// Class Engine.ParticleModuleSizeMultiplyLife
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleSizeMultiplyLife : U*cc00fbaa13 {
	struct FRawDistributionVector LifeMultiplier; // 0x38(0x50)
	char *074e67893e : 1; // 0x88(0x01)
	char *64f8f340ee : 1; // 0x88(0x01)
	char *665ce26d6e : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleSizeScale
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleSizeScale : U*cc00fbaa13 {
	struct FRawDistributionVector SizeScale; // 0x38(0x50)
	char *8848257a56 : 1; // 0x88(0x01)
	char *15b29e7f41 : 1; // 0x88(0x01)
	char *352bf07817 : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleSizeScaleBySpeed : U*cc00fbaa13 {
	struct FVector2D *8933a11582; // 0x38(0x08)
	struct FVector2D *abcd5c2c56; // 0x40(0x08)
};

// Class Engine.*78d18b0c9e
// Size: 0x40 (Inherited: 0x38)
struct U*78d18b0c9e : UParticleModule {
	char *9031a1dbdc : 1; // 0x38(0x01)
	char *078894934a : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleSpawn
// Size: 0x108 (Inherited: 0x40)
struct UParticleModuleSpawn : U*78d18b0c9e {
	struct F*fc532221d4 Rate; // 0x40(0x38)
	struct F*fc532221d4 *5d1245bca9; // 0x78(0x38)
	enum class *73b0841750 *e864325772; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct F*ac69912133> *f94745bb13; // 0xb8(0x10)
	struct F*fc532221d4 *68796f8a51; // 0xc8(0x38)
	char *484fd05938 : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class Engine.*750747a9b2
// Size: 0x90 (Inherited: 0x40)
struct U*750747a9b2 : U*78d18b0c9e {
	float *9ac97202a0; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct F*fc532221d4 SpawnPerUnit; // 0x48(0x38)
	char *cb811be9b9 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *63a6a779c4; // 0x84(0x04)
	float *a345d297e0; // 0x88(0x04)
	char *a2ce618c8e : 1; // 0x8c(0x01)
	char *18ee28dd36 : 1; // 0x8c(0x01)
	char *1ad3e53675 : 1; // 0x8c(0x01)
	char pad_8C_3 : 5; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// Class Engine.*63d7f8c9e3
// Size: 0x38 (Inherited: 0x38)
struct U*63d7f8c9e3 : UParticleModule {
};

// Class Engine.ParticleModuleSubUV
// Size: 0x80 (Inherited: 0x38)
struct UParticleModuleSubUV : U*63d7f8c9e3 {
	struct USubUVAnimation* Animation; // 0x38(0x08)
	struct F*fc532221d4 SubImageIndex; // 0x40(0x38)
	char *434ef6cd2b : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Engine.ParticleModuleSubUVMovie
// Size: 0xc8 (Inherited: 0x80)
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char *8dd4e477e9 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct F*fc532221d4 FrameRate; // 0x88(0x38)
	int32 *b6c61a9a1b; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class Engine.ParticleModuleTrailBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleTrailBase : UParticleModule {
};

// Class Engine.*5b687eb977
// Size: 0xa0 (Inherited: 0x38)
struct U*5b687eb977 : UParticleModuleTrailBase {
	enum class *8b37ea4efe *b48e706969; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName SourceName; // 0x40(0x08)
	struct F*fc532221d4 *f94672ee56; // 0x48(0x38)
	char *7b013eb13c : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32 SourceOffsetCount; // 0x84(0x04)
	struct TArray<struct FVector> *db847a224a; // 0x88(0x10)
	enum class *d03f858603 *744176f2df; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	char *405115a596 : 1; // 0x9c(0x01)
	char pad_9C_1 : 7; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// Class Engine.ParticleModuleTypeDataBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleTypeDataBase : UParticleModule {
};

// Class Engine.*a08c7cee43
// Size: 0x50 (Inherited: 0x38)
struct U*a08c7cee43 : UParticleModuleTypeDataBase {
	char *4cb20f7bde : 1; // 0x38(0x01)
	char *48518500c7 : 1; // 0x38(0x01)
	char *77a99474cc : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *ab99179724; // 0x3c(0x04)
	float *ef725aee1c; // 0x40(0x04)
	float *b7f6716db3; // 0x44(0x04)
	float *3fc868da31; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleTypeDataBeam2
// Size: 0x170 (Inherited: 0x38)
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	enum class *90ca329b1e *e887e6c6ed; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 *29b81a8d12; // 0x3c(0x04)
	float *0f102a8002; // 0x40(0x04)
	int32 Sheets; // 0x44(0x04)
	int32 MaxBeamCount; // 0x48(0x04)
	float Speed; // 0x4c(0x04)
	int32 InterpolationPoints; // 0x50(0x04)
	char *0f609d3bbc : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 *eda7633acc; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FName *93d7c93271; // 0x60(0x08)
	struct F*fc532221d4 Distance; // 0x68(0x38)
	enum class *1ecae58e04 *9c7b0bf761; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct F*fc532221d4 TaperFactor; // 0xa8(0x38)
	struct F*fc532221d4 *eab012946f; // 0xe0(0x38)
	char RenderGeometry : 1; // 0x118(0x01)
	char *87c196e389 : 1; // 0x118(0x01)
	char *4f609a0bf5 : 1; // 0x118(0x01)
	char *3d1308fef5 : 1; // 0x118(0x01)
	char pad_118_4 : 4; // 0x118(0x01)
	char pad_119[0x57]; // 0x119(0x57)
};

// Class Engine.ParticleModuleTypeDataGpu
// Size: 0x470 (Inherited: 0x38)
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct F*0989906fcf *6963524d43; // 0x40(0x2c0)
	struct F*056d307c7f *3bb408d6b9; // 0x300(0x160)
	float *638a243aa0; // 0x460(0x04)
	char *37bbbf521b : 1; // 0x464(0x01)
	char pad_464_1 : 7; // 0x464(0x01)
	char pad_465[0xb]; // 0x465(0x0b)
};

// Class Engine.ParticleModuleTypeDataMesh
// Size: 0xc0 (Inherited: 0x38)
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	struct UStaticMesh* Mesh; // 0x38(0x08)
	char *d9c761f3f4 : 1; // 0x40(0x01)
	char *97b2f6556f : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class *bfacc8b2ec *7788e29897; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	char *326a255c3a : 1; // 0x48(0x01)
	char bOverrideDefaultMotionBlurSettings : 1; // 0x48(0x01)
	char *19b77cc725 : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float Pitch; // 0x4c(0x04)
	float Roll; // 0x50(0x04)
	float Yaw; // 0x54(0x04)
	struct FRawDistributionVector *869c2c2ea7; // 0x58(0x50)
	char pad_A8[0x8]; // 0xa8(0x08)
	enum class *5c5c218809 *b296e1f747; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	char *466901206e : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	enum class *0c5fa472da CameraFacingUpAxisOption; // 0xb8(0x01)
	enum class *57ffc5ed46 *2facf73106; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	char *ea127b8024 : 1; // 0xbc(0x01)
	char *e494ccc822 : 1; // 0xbc(0x01)
	char *76f1ae1f02 : 1; // 0xbc(0x01)
	char pad_BC_3 : 5; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
};

// Class Engine.ParticleModuleTypeDataRibbon
// Size: 0x68 (Inherited: 0x38)
struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32 MaxTessellationBetweenParticles; // 0x38(0x04)
	int32 SheetsPerTrail; // 0x3c(0x04)
	int32 MaxTrailCount; // 0x40(0x04)
	int32 MaxParticleInTrailCount; // 0x44(0x04)
	char *4cb20f7bde : 1; // 0x48(0x01)
	char *8be550ae4d : 1; // 0x48(0x01)
	char *b1d5490c43 : 1; // 0x48(0x01)
	char *48518500c7 : 1; // 0x48(0x01)
	char *77a99474cc : 1; // 0x48(0x01)
	char *e2cc17e2ca : 1; // 0x48(0x01)
	char pad_48_6 : 2; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	enum class *48af3acf71 *b4e2380452; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float *6285aadcf7; // 0x50(0x04)
	char *611b55fc84 : 1; // 0x54(0x01)
	char *81acf09e02 : 1; // 0x54(0x01)
	char *bcbb932fd3 : 1; // 0x54(0x01)
	char *8d63610130 : 1; // 0x54(0x01)
	char pad_54_4 : 4; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float *ab99179724; // 0x58(0x04)
	float *ef725aee1c; // 0x5c(0x04)
	char *800c4b7f9a : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float *4b26eee813; // 0x64(0x04)
};

// Class Engine.ParticleModuleVectorFieldBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleVectorFieldBase : UParticleModule {
};

// Class Engine.*ea114d6a00
// Size: 0x48 (Inherited: 0x38)
struct U*ea114d6a00 : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *f60f309f93; // 0x3c(0x04)
	float *63b2ec5993; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*2bd23c51a2
// Size: 0x70 (Inherited: 0x38)
struct U*2bd23c51a2 : UParticleModuleVectorFieldBase {
	struct UVectorField* VectorField; // 0x38(0x08)
	struct FVector RelativeTranslation; // 0x40(0x0c)
	struct FRotator RelativeRotation; // 0x4c(0x0c)
	struct FVector RelativeScale3D; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float *69d4d190a0; // 0x68(0x04)
	char *a2287d8520 : 1; // 0x6c(0x01)
	char *54870b99bc : 1; // 0x6c(0x01)
	char *f873985f9e : 1; // 0x6c(0x01)
	char *515eae2e01 : 1; // 0x6c(0x01)
	char *95b0976aeb : 1; // 0x6c(0x01)
	char pad_6C_5 : 3; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*f428d463bf
// Size: 0x50 (Inherited: 0x38)
struct U*f428d463bf : UParticleModuleVectorFieldBase {
	struct FVector *d6ce7d1064; // 0x38(0x0c)
	struct FVector *ed76c7c70f; // 0x44(0x0c)
};

// Class Engine.*890493e073
// Size: 0x48 (Inherited: 0x38)
struct U*890493e073 : UParticleModuleVectorFieldBase {
	struct FVector RotationRate; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleVectorFieldScale
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	struct U*137fe4d756* VectorFieldScale; // 0x38(0x08)
	struct F*fc532221d4 *34120d0615; // 0x40(0x38)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	struct U*137fe4d756* VectorFieldScaleOverLife; // 0x38(0x08)
	struct F*fc532221d4 *4d9812663f; // 0x40(0x38)
};

// Class Engine.*d87f0e35e8
// Size: 0x40 (Inherited: 0x38)
struct U*d87f0e35e8 : UParticleModule {
	char *6338885046 : 1; // 0x38(0x01)
	char *8bbed36aa3 : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*c071c44e7a
// Size: 0xc8 (Inherited: 0x40)
struct U*c071c44e7a : U*d87f0e35e8 {
	struct FRawDistributionVector *21ff1e4bd8; // 0x40(0x50)
	struct F*fc532221d4 *c4f8029b70; // 0x90(0x38)
};

// Class Engine.*3472501513
// Size: 0xe8 (Inherited: 0xc8)
struct U*3472501513 : U*c071c44e7a {
	struct F*0889995bc8 *85be4a61ef; // 0xc8(0x20)
};

// Class Engine.*d3025132db
// Size: 0xc0 (Inherited: 0x40)
struct U*d3025132db : U*d87f0e35e8 {
	struct F*fc532221d4 Angle; // 0x40(0x38)
	struct F*fc532221d4 Velocity; // 0x78(0x38)
	struct FVector Direction; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.*e1f910b124
// Size: 0x90 (Inherited: 0x40)
struct U*e1f910b124 : U*d87f0e35e8 {
	struct FRawDistributionVector Scale; // 0x40(0x50)
};

// Class Engine.ParticleModuleVelocityOverLifetime
// Size: 0x98 (Inherited: 0x40)
struct UParticleModuleVelocityOverLifetime : U*d87f0e35e8 {
	struct FRawDistributionVector *9eb0ac15d3; // 0x40(0x50)
	char Absolute : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class Engine.*0fc7361301
// Size: 0x48 (Inherited: 0x30)
struct U*0fc7361301 : UObject {
	int32 *e4b542a085; // 0x30(0x04)
	char pad_34[0x14]; // 0x34(0x14)
};

// Class Engine.*b7fa71b437
// Size: 0xd0 (Inherited: 0xd0)
struct U*b7fa71b437 : U*c15025d53a {
};

// Class Engine.PhysicalMaterial
// Size: 0x88 (Inherited: 0x30)
struct UPhysicalMaterial : UObject {
	float Friction; // 0x30(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x34(0x01)
	bool bOverrideFrictionCombineMode; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float Restitution; // 0x38(0x04)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x3c(0x01)
	bool bOverrideRestitutionCombineMode; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	float Density; // 0x40(0x04)
	float RaiseMassToPower; // 0x44(0x04)
	float DestructibleDamageThresholdScale; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UPhysicalMaterialPropertyBase* *a795dfdcfa; // 0x50(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float *5c25833367; // 0x5c(0x04)
	struct TArray<struct F*753e15f292> *a50a4cf3a3; // 0x60(0x10)
	char pad_70[0x18]; // 0x70(0x18)
};

// Class Engine.PhysicalMaterialPropertyBase
// Size: 0x30 (Inherited: 0x30)
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class Engine.PhysicsCollisionHandler
// Size: 0x48 (Inherited: 0x30)
struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x30(0x04)
	float ImpactReFireDelay; // 0x34(0x04)
	struct USoundBase* DefaultImpactSound; // 0x38(0x08)
	float *7b34f79cd0; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.PhysicsConstraintTemplate
// Size: 0x340 (Inherited: 0x30)
struct UPhysicsConstraintTemplate : UObject {
	struct FConstraintInstance DefaultInstance; // 0x30(0x1f0)
	struct TArray<struct F*d974243b04> *a5bc824c7b; // 0x220(0x10)
	struct F*7fa5281433 DefaultProfile; // 0x230(0x104)
	char pad_334[0xc]; // 0x334(0x0c)
};

// Class Engine.PhysicsSerializer
// Size: 0xd8 (Inherited: 0x30)
struct UPhysicsSerializer : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
};

// Class Engine.*149aef0be1
// Size: 0x40 (Inherited: 0x30)
struct U*149aef0be1 : UObject {
	struct TArray<struct F*e476ce19c8> *92cb335a2e; // 0x30(0x10)
};

// Class Engine.*b8ae03abfa
// Size: 0x58 (Inherited: 0x40)
struct U*b8ae03abfa : U*149aef0be1 {
	struct TArray<struct FString> *66aca82236; // 0x40(0x10)
	char *8e6d4bb816 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.*dd36988dc2
// Size: 0x68 (Inherited: 0x40)
struct U*dd36988dc2 : U*149aef0be1 {
	char *a8a3244a7e : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<DelegateProperty> *d90c1a4832; // 0x48(0x10)
	struct TArray<DelegateProperty> *aee8d1bd7b; // 0x58(0x10)
};

// Class Engine.*184616d865
// Size: 0x70 (Inherited: 0x40)
struct U*184616d865 : U*149aef0be1 {
	struct TArray<struct F*ae24324a53> *4cdad5ada2; // 0x40(0x10)
	struct FString LastError; // 0x50(0x10)
	struct FString *430666c02e; // 0x60(0x10)
};

// Class Engine.*7073f552aa
// Size: 0x40 (Inherited: 0x40)
struct U*7073f552aa : U*149aef0be1 {

	void *71b79812df(); // Function Engine.*7073f552aa.*71b79812df // Native|Public // @ game+0x6839380
	void *fbf430a498(); // Function Engine.*7073f552aa.*fbf430a498 // Native|Public|HasOutParms // @ game+0x683b1d8
	void *d76dc8856b(); // Function Engine.*7073f552aa.*d76dc8856b // Native|Public // @ game+0x68301f8
	void *5015f413ce(); // Function Engine.*7073f552aa.*5015f413ce // Native|Public // @ game+0x682ecdc
	void *72fe9e4c3f(); // Function Engine.*7073f552aa.*72fe9e4c3f // Native|Public // @ game+0x67b12bc
	void Init(); // Function Engine.*7073f552aa.Init // Native|Public // @ game+0xbef000
	void *b9bc822f60(); // Function Engine.*7073f552aa.*b9bc822f60 // Native|Public // @ game+0x682a51c
};

// Class Engine.*2ce7cc9375
// Size: 0xb8 (Inherited: 0x30)
struct U*2ce7cc9375 : UObject {
	struct FString *427f4de588; // 0x30(0x10)
	int32 ResponseCode; // 0x40(0x04)
	int32 Tag; // 0x44(0x04)
	struct FString *201ca1184f; // 0x48(0x10)
	struct TArray<bool> *f57cfa8389; // 0x58(0x10)
	char pad_68[0x50]; // 0x68(0x50)

	void GetHeader(); // Function Engine.*2ce7cc9375.GetHeader // Native|Public|HasOutParms // @ game+0x682f998
	void *519f1eabe1(); // Function Engine.*2ce7cc9375.*519f1eabe1 // Native|Public // @ game+0x682fb40
	void *6e90316833(); // Function Engine.*2ce7cc9375.*6e90316833 // Native|Public // @ game+0x6830220
};

// Class Engine.ChildConnection
// Size: 0x65858 (Inherited: 0x65850)
struct UChildConnection : UNetConnection {
	struct UNetConnection* Parent; // 0x65850(0x08)
};

// Class Engine.Polys
// Size: 0x40 (Inherited: 0x30)
struct UPolys : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.*9a24a297c9
// Size: 0x38 (Inherited: 0x30)
struct U*9a24a297c9 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.*1a90702b7b
// Size: 0xb0 (Inherited: 0x38)
struct U*1a90702b7b : U*9a24a297c9 {
	char pad_38[0x78]; // 0x38(0x78)
};

// Class Engine.ReverbEffect
// Size: 0x60 (Inherited: 0x30)
struct UReverbEffect : UObject {
	float Density; // 0x30(0x04)
	float Diffusion; // 0x34(0x04)
	float Gain; // 0x38(0x04)
	float GainHF; // 0x3c(0x04)
	float DecayTime; // 0x40(0x04)
	float DecayHFRatio; // 0x44(0x04)
	float ReflectionsGain; // 0x48(0x04)
	float ReflectionsDelay; // 0x4c(0x04)
	float LateGain; // 0x50(0x04)
	float LateDelay; // 0x54(0x04)
	float AirAbsorptionGainHF; // 0x58(0x04)
	float RoomRolloffFactor; // 0x5c(0x04)
};

// Class Engine.Rig
// Size: 0x50 (Inherited: 0x30)
struct URig : UObject {
	struct TArray<struct F*3d3a9652a8> TransformBases; // 0x30(0x10)
	struct TArray<struct FNode> Nodes; // 0x40(0x10)
};

// Class Engine.SimpleConstructionScript
// Size: 0xc0 (Inherited: 0x30)
struct USimpleConstructionScript : UObject {
	struct TArray<struct USCS_Node*> *c95f4bde2d; // 0x30(0x10)
	struct TArray<struct USCS_Node*> *4af16a9e5d; // 0x40(0x10)
	struct USCS_Node* *5a3d806eb0; // 0x50(0x08)
	struct USCS_Node* RootNode; // 0x58(0x08)
	struct TArray<struct USCS_Node*> ActorComponentNodes; // 0x60(0x10)
	char pad_70[0x50]; // 0x70(0x50)
};

// Class Engine.SCS_Node
// Size: 0x150 (Inherited: 0x30)
struct USCS_Node : UObject {
	struct UClass* ComponentClass; // 0x30(0x08)
	struct UActorComponent* *24a02264b6; // 0x38(0x08)
	struct F*02431ea27c *54cd37d868; // 0x40(0x50)
	struct FName VariableName; // 0x90(0x08)
	struct FName *e825c77143; // 0x98(0x08)
	struct FName *86c70985a7; // 0xa0(0x08)
	struct FName *583951ebbc; // 0xa8(0x08)
	bool *cf64d7fccc; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct USCS_Node*> ChildNodes; // 0xb8(0x10)
	struct USCS_Node* *353b308dab; // 0xc8(0x08)
	struct TArray<struct F*2eaa2367a5> *f004f939a8; // 0xd0(0x10)
	struct FGuid VariableGuid; // 0xe0(0x10)
	bool bIsFalseRoot; // 0xf0(0x01)
	bool bIsNative; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct FName NativeComponentName; // 0xf8(0x08)
	bool bVariableNameAutoGenerated; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FName InternalVariableName; // 0x108(0x08)
	char pad_110[0x40]; // 0x110(0x40)
};

// Class Engine.Selection
// Size: 0x98 (Inherited: 0x30)
struct USelection : UObject {
	char pad_30[0x68]; // 0x30(0x68)
};

// Class Engine.DestructibleMesh
// Size: 0x398 (Inherited: 0x2f0)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x2f0(0x88)
	struct TArray<struct F*ea886402eb> *dff0921d35; // 0x378(0x10)
	char pad_388[0x10]; // 0x388(0x10)
};

// Class Engine.SkeletalMeshReductionSettings
// Size: 0x48 (Inherited: 0x30)
struct USkeletalMeshReductionSettings : UObject {
	struct TArray<struct F*57b813e296> Settings; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class Engine.SkeletalMeshSocket
// Size: 0x68 (Inherited: 0x30)
struct USkeletalMeshSocket : UObject {
	struct FName SocketName; // 0x30(0x08)
	struct FName BoneName; // 0x38(0x08)
	struct FVector RelativeLocation; // 0x40(0x0c)
	struct FRotator RelativeRotation; // 0x4c(0x0c)
	struct FVector RelativeScale; // 0x58(0x0c)
	bool bForceAlwaysAnimated; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)

	void *a27f6d4764(); // Function Engine.SkeletalMeshSocket.*a27f6d4764 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6831320
	void *b9e895a0b5(); // Function Engine.SkeletalMeshSocket.*b9e895a0b5 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6831fdc
};

// Class Engine.SlateBrushAsset
// Size: 0xc0 (Inherited: 0x30)
struct USlateBrushAsset : UObject {
	struct FSlateBrush Brush; // 0x30(0x90)
};

// Class Engine.SlateTextureAtlasInterface
// Size: 0x30 (Inherited: 0x30)
struct USlateTextureAtlasInterface : UInterface {
};

// Class Engine.SoundConcurrency
// Size: 0x40 (Inherited: 0x30)
struct USoundConcurrency : UObject {
	struct F*17676fbb1e Concurrency; // 0x30(0x10)
};

// Class Engine.*32151ea3ad
// Size: 0x48 (Inherited: 0x30)
struct U*32151ea3ad : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Engine.*8379a39c46
// Size: 0x48 (Inherited: 0x48)
struct U*8379a39c46 : U*32151ea3ad {
};

// Class Engine.SoundSubmix
// Size: 0x58 (Inherited: 0x30)
struct USoundSubmix : UObject {
	struct TArray<struct USoundSubmix*> *200b82b922; // 0x30(0x10)
	struct USoundSubmix* *10389acf51; // 0x40(0x08)
	struct TArray<struct U*8379a39c46*> *60ce38432b; // 0x48(0x10)
};

// Class Engine.SoundBase
// Size: 0xa8 (Inherited: 0x30)
struct USoundBase : UObject {
	struct USoundClass* *a8c19380f3; // 0x30(0x08)
	char *f806e08ca5 : 1; // 0x38(0x01)
	char bOverrideConcurrency : 1; // 0x38(0x01)
	char bIgnoreFocus : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct USoundConcurrency* SoundConcurrencySettings; // 0x40(0x08)
	struct F*17676fbb1e ConcurrencyOverrides; // 0x48(0x10)
	enum class EMaxConcurrentResolutionRule MaxConcurrentResolutionRule; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32 MaxConcurrentPlayCount; // 0x5c(0x04)
	float Duration; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x68(0x08)
	float Priority; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct USoundSubmix* SoundSubmixObject; // 0x78(0x08)
	struct TArray<struct F*3da6da8223> SoundSubmixSends; // 0x80(0x10)
	float DefaultMasterReverbSendAmount; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct U*844cf37c90* SourceEffectChain; // 0x98(0x08)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class Engine.*d5836d1cb7
// Size: 0xc8 (Inherited: 0xa8)
struct U*d5836d1cb7 : USoundBase {
	char pad_A8[0x20]; // 0xa8(0x20)
};

// Class Engine.SoundNode
// Size: 0x40 (Inherited: 0x30)
struct USoundNode : UObject {
	struct TArray<struct USoundNode*> ChildNodes; // 0x30(0x10)
};

// Class Engine.SoundCue
// Size: 0x200 (Inherited: 0xa8)
struct USoundCue : USoundBase {
	char bOverrideAttenuation : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct USoundNode* *2e42f86c77; // 0xb0(0x08)
	float *7435aa9c16; // 0xb8(0x04)
	float *bc8e2145da; // 0xbc(0x04)
	struct FSoundAttenuationSettings *5adfb44000; // 0xc0(0x130)
	char pad_1F0[0x10]; // 0x1f0(0x10)
};

// Class Engine.SoundGroups
// Size: 0x90 (Inherited: 0x30)
struct USoundGroups : UObject {
	struct TArray<struct FSoundGroup> SoundGroupProfiles; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class Engine.SoundWave
// Size: 0x290 (Inherited: 0xa8)
struct USoundWave : USoundBase {
	int32 CompressionQuality; // 0xa8(0x04)
	char bLooping : 1; // 0xac(0x01)
	char *edbf2ee878 : 1; // 0xac(0x01)
	char pad_AC_2 : 6; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	int32 *c616dc1f0a; // 0xb0(0x04)
	char pad_B4_0 : 3; // 0xb4(0x01)
	char *8a3cc4a7c8 : 1; // 0xb4(0x01)
	char *e0b2b13598 : 1; // 0xb4(0x01)
	char *ee39d4b19b : 1; // 0xb4(0x01)
	char *bf7c1f8eeb : 1; // 0xb4(0x01)
	char pad_B4_7 : 1; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	enum class ESoundGroup SoundGroup; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString *622c8764d8; // 0xc0(0x10)
	float *e293256a55; // 0xd0(0x04)
	float Volume; // 0xd4(0x04)
	float Pitch; // 0xd8(0x04)
	int32 *7907ef25cf; // 0xdc(0x04)
	int32 SampleRate; // 0xe0(0x04)
	int32 *3f11b6faa6; // 0xe4(0x04)
	struct TArray<struct F*cc00d9579b> Subtitles; // 0xe8(0x10)
	struct TArray<struct F*3f2b6dfbf7> *42066ff8d0; // 0xf8(0x10)
	struct UCurveTable* Curves; // 0x108(0x08)
	struct UCurveTable* *b3add4c6d5; // 0x110(0x08)
	char pad_118[0x178]; // 0x118(0x178)
};

// Class Engine.*4a2c8ddd5c
// Size: 0x310 (Inherited: 0x290)
struct U*4a2c8ddd5c : USoundWave {
	char pad_290[0x80]; // 0x290(0x80)
};

// Class Engine.SoundClass
// Size: 0x88 (Inherited: 0x30)
struct USoundClass : UObject {
	struct F*74cec90329 Properties; // 0x30(0x2c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct USoundClass*> ChildClasses; // 0x60(0x10)
	struct TArray<struct FPassiveSoundMixModifier> *da689c706a; // 0x70(0x10)
	struct USoundClass* ParentClass; // 0x80(0x08)
};

// Class Engine.*5062c4e189
// Size: 0x48 (Inherited: 0x48)
struct U*5062c4e189 : U*32151ea3ad {
};

// Class Engine.*844cf37c90
// Size: 0x48 (Inherited: 0x30)
struct U*844cf37c90 : UObject {
	struct TArray<struct F*97bac0c986> Chain; // 0x30(0x10)
	char *de6a9cecb3 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.SoundMix
// Size: 0x90 (Inherited: 0x30)
struct USoundMix : UObject {
	char *6eddb50f25 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *c9e5cc98e1; // 0x34(0x04)
	struct FAudioEQEffect *12dddbceac; // 0x38(0x38)
	struct TArray<struct F*3b312c0d05> *4e5a0b6598; // 0x70(0x10)
	float InitialDelay; // 0x80(0x04)
	float *36934d7c10; // 0x84(0x04)
	float Duration; // 0x88(0x04)
	float *8d537bca25; // 0x8c(0x04)
};

// Class Engine.*51a89cda1a
// Size: 0x40 (Inherited: 0x40)
struct U*51a89cda1a : USoundNode {
};

// Class Engine.SoundNodeWavePlayer
// Size: 0x70 (Inherited: 0x40)
struct USoundNodeWavePlayer : U*51a89cda1a {
	struct USoundWave* SoundWaveAssetPtr; // 0x40(0x20)
	struct USoundWave* SoundWave; // 0x60(0x08)
	char pad_68_0 : 1; // 0x68(0x01)
	char bLooping : 1; // 0x68(0x01)
	char pad_68_2 : 6; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*381d707f72
// Size: 0x180 (Inherited: 0x40)
struct U*381d707f72 : USoundNode {
	struct USoundAttenuation* AttenuationSettings; // 0x40(0x08)
	struct FSoundAttenuationSettings *5adfb44000; // 0x48(0x130)
	char bOverrideAttenuation : 1; // 0x178(0x01)
	char pad_178_1 : 7; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
};

// Class Engine.SoundNodeBranch
// Size: 0x48 (Inherited: 0x40)
struct USoundNodeBranch : USoundNode {
	struct FName *8a4fe00493; // 0x40(0x08)
};

// Class Engine.*c834d4e7ac
// Size: 0x50 (Inherited: 0x40)
struct U*c834d4e7ac : USoundNode {
	struct TArray<float> *56d9dad641; // 0x40(0x10)
};

// Class Engine.*2248b15248
// Size: 0x48 (Inherited: 0x40)
struct U*2248b15248 : USoundNode {
	float *b36308443c; // 0x40(0x04)
	float *37cb1d65b7; // 0x44(0x04)
};

// Class Engine.SoundNodeDialoguePlayer
// Size: 0x68 (Inherited: 0x40)
struct USoundNodeDialoguePlayer : USoundNode {
	struct FDialogueWaveParameter DialogueWaveParameter; // 0x40(0x20)
	char bLooping : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*51b73b6285
// Size: 0x50 (Inherited: 0x40)
struct U*51b73b6285 : USoundNode {
	struct TArray<struct FDistanceDatum> *b776c48b3b; // 0x40(0x10)
};

// Class Engine.*71b8839dd1
// Size: 0x58 (Inherited: 0x50)
struct U*71b8839dd1 : U*51b73b6285 {
	struct FName ParamName; // 0x50(0x08)
};

// Class Engine.*920c75af5b
// Size: 0x48 (Inherited: 0x40)
struct U*920c75af5b : USoundNode {
	float *32d0e74bfd; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*0010567464
// Size: 0x168 (Inherited: 0x40)
struct U*0010567464 : USoundNode {
	float *34d33596d4; // 0x40(0x04)
	float LoopEnd; // 0x44(0x04)
	float *a59e597eb1; // 0x48(0x04)
	int32 *a0c0e4483f; // 0x4c(0x04)
	char *fe6799cdfb : 1; // 0x50(0x01)
	char bLoop : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct U*1b820e48b1* VolumeInterpCurve; // 0x58(0x08)
	struct U*1b820e48b1* PitchInterpCurve; // 0x60(0x08)
	struct FRuntimeFloatCurve VolumeCurve; // 0x68(0x78)
	struct FRuntimeFloatCurve *f186bd97db; // 0xe0(0x78)
	float *ae53c26b45; // 0x158(0x04)
	float *e1cf34fd9f; // 0x15c(0x04)
	float *fc7ba3ef36; // 0x160(0x04)
	float *85478141fb; // 0x164(0x04)
};

// Class Engine.*dbe15053a3
// Size: 0x50 (Inherited: 0x40)
struct U*dbe15053a3 : USoundNode {
	struct TArray<int32> *a890440348; // 0x40(0x10)
};

// Class Engine.*fa4daf8888
// Size: 0x48 (Inherited: 0x40)
struct U*fa4daf8888 : USoundNode {
	int32 *a0c0e4483f; // 0x40(0x04)
	char *fe6799cdfb : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class Engine.SoundNodeMature
// Size: 0x40 (Inherited: 0x40)
struct USoundNodeMature : USoundNode {
};

// Class Engine.*78a553d526
// Size: 0x50 (Inherited: 0x40)
struct U*78a553d526 : USoundNode {
	struct TArray<float> *56d9dad641; // 0x40(0x10)
};

// Class Engine.*4296331bd3
// Size: 0x50 (Inherited: 0x40)
struct U*4296331bd3 : USoundNode {
	float *ae53c26b45; // 0x40(0x04)
	float *e1cf34fd9f; // 0x44(0x04)
	float *fc7ba3ef36; // 0x48(0x04)
	float *85478141fb; // 0x4c(0x04)
};

// Class Engine.*66a521f849
// Size: 0x80 (Inherited: 0x40)
struct U*66a521f849 : USoundNode {
	struct F*20ca22d1ea *1d3fd66d4b; // 0x40(0x20)
	struct F*20ca22d1ea *217959a05f; // 0x60(0x20)
};

// Class Engine.*1475fcdd62
// Size: 0x68 (Inherited: 0x40)
struct U*1475fcdd62 : USoundNode {
	char *086edf05ba : 1; // 0x40(0x01)
	char *e89bb13046 : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float *8c401a11f7; // 0x44(0x04)
	float *8162432a5d; // 0x48(0x04)
	float *bf186f4901; // 0x4c(0x04)
	float *e3234fd02a; // 0x50(0x04)
	float *5abc4384b2; // 0x54(0x04)
	float *526bbac056; // 0x58(0x04)
	float *26b6a1bad6; // 0x5c(0x04)
	float *6ea5fcd651; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.*67540fdaca
// Size: 0x40 (Inherited: 0x40)
struct U*67540fdaca : USoundNode {
};

// Class Engine.*e9b82ce35a
// Size: 0x70 (Inherited: 0x40)
struct U*e9b82ce35a : USoundNode {
	struct TArray<float> Weights; // 0x40(0x10)
	int32 *4d2de44604; // 0x50(0x04)
	char *ad41e765c7 : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct TArray<bool> *b0ce926e22; // 0x58(0x10)
	int32 *70de4d4cb9; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.*e64a12f17c
// Size: 0x48 (Inherited: 0x40)
struct U*e64a12f17c : USoundNode {
	struct USoundClass* *74b597268e; // 0x40(0x08)
};

// Class Engine.SoundNodeSwitch
// Size: 0x48 (Inherited: 0x40)
struct USoundNodeSwitch : USoundNode {
	struct FName *3e283b9ec7; // 0x40(0x08)
};

// Class Engine.*675fc1c59e
// Size: 0x48 (Inherited: 0x40)
struct U*675fc1c59e : USoundNode {
	struct FName *525e2f0675; // 0x40(0x08)
};

// Class Engine.*51ab10dd10
// Size: 0x70 (Inherited: 0x30)
struct U*51ab10dd10 : UObject {
	struct FName SocketName; // 0x30(0x08)
	struct FVector RelativeLocation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
	struct FVector RelativeScale; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Tag; // 0x60(0x10)
};

// Class Engine.StringTable
// Size: 0x48 (Inherited: 0x30)
struct UStringTable : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Engine.SubsurfaceProfile
// Size: 0x58 (Inherited: 0x30)
struct USubsurfaceProfile : UObject {
	struct FSubsurfaceProfileStruct Settings; // 0x30(0x24)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.*4b7c0f82cf
// Size: 0x78 (Inherited: 0x30)
struct U*4b7c0f82cf : UObject {
	struct FText DefaultedText; // 0x30(0x18)
	struct FText UndefaultedText; // 0x48(0x18)
	struct FText *ac02f95253; // 0x60(0x18)
};

// Class Engine.LightMapTexture2D
// Size: 0x108 (Inherited: 0x100)
struct ULightMapTexture2D : UTexture2D {
	char pad_100[0x8]; // 0x100(0x08)
};

// Class Engine.*5312181a32
// Size: 0x108 (Inherited: 0x100)
struct U*5312181a32 : UTexture2D {
	enum class *5cd2b0febe *41dbac1f74; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class Engine.Texture2DArray
// Size: 0x100 (Inherited: 0x100)
struct UTexture2DArray : UTexture2D {
};

// Class Engine.*b63877ce42
// Size: 0x108 (Inherited: 0x100)
struct U*b63877ce42 : UTexture2D {
	float Brightness; // 0x100(0x04)
	float *9bbfaed9c9; // 0x104(0x04)
};

// Class Engine.*ec6d9c8af4
// Size: 0xd8 (Inherited: 0xc0)
struct U*ec6d9c8af4 : UTexture {
	char pad_C0[0x8]; // 0xc0(0x08)
	enum class EPixelFormat Format; // 0xc8(0x01)
	char pad_C9[0xf]; // 0xc9(0x0f)
};

// Class Engine.*8c670b32d3
// Size: 0x110 (Inherited: 0xf0)
struct U*8c670b32d3 : UTextureRenderTarget2D {
	struct FMulticastDelegate OnCanvasRenderTargetUpdate; // 0xf0(0x10)
	struct UWorld* World; // 0x100(0x08)
	bool *20c2319b5d; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)

	void *652b510c19(); // Function Engine.*8c670b32d3.*652b510c19 // Final|Native|Static|Public|BlueprintCallable // @ game+0x682ca40
	void GetSize(); // Function Engine.*8c670b32d3.GetSize // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6831204
	void *592d2450bc(); // Function Engine.*8c670b32d3.*592d2450bc // Native|Public|BlueprintCallable // @ game+0xc56b64
	void ReceiveUpdate(); // Function Engine.*8c670b32d3.ReceiveUpdate // Event|Public|BlueprintEvent // @ game+0x22ddc4
};

// Class Engine.TextureRenderTargetCube
// Size: 0xe8 (Inherited: 0xc8)
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32 SizeX; // 0xc8(0x04)
	struct FLinearColor ClearColor; // 0xcc(0x10)
	enum class EPixelFormat *4b5f52ef85; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	char bHDR : 1; // 0xe0(0x01)
	char *0fcaada11b : 1; // 0xe0(0x01)
	char pad_E0_2 : 6; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// Class Engine.TextureLODSettings
// Size: 0x40 (Inherited: 0x30)
struct UTextureLODSettings : UObject {
	struct TArray<struct FTextureLODGroup> TextureLODGroups; // 0x30(0x10)
};

// Class Engine.DeviceProfile
// Size: 0xd0 (Inherited: 0x40)
struct UDeviceProfile : UTextureLODSettings {
	struct FString DeviceType; // 0x40(0x10)
	struct FString BaseProfileName; // 0x50(0x10)
	struct UObject* Parent; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)
	struct TArray<struct FString> CVars; // 0x80(0x10)
	char pad_90[0x40]; // 0x90(0x40)
};

// Class Engine.*31e2af0749
// Size: 0x30 (Inherited: 0x30)
struct U*31e2af0749 : UObject {
};

// Class Engine.*a7a0563fde
// Size: 0xa0 (Inherited: 0x30)
struct U*a7a0563fde : UObject {
	float *3b5f8b6db2; // 0x30(0x04)
	enum class *3519cdbfbf *11d5ce723d; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char *df97381279 : 1; // 0x38(0x01)
	char bLoop : 1; // 0x38(0x01)
	char bReplicated : 1; // 0x38(0x01)
	char *38361caa85 : 1; // 0x38(0x01)
	char *8499a67b55 : 1; // 0x38(0x01)
	char pad_38_5 : 3; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*b277d7168d> *4d9989edb6; // 0x40(0x10)
	struct TArray<struct F*fd571370e5> *ca58b41826; // 0x50(0x10)
	struct TArray<struct F*7fbc0d4a3d> *35ec9f630a; // 0x60(0x10)
	struct TArray<struct F*ae5448de9c> *c0e0539840; // 0x70(0x10)
	struct TArray<struct F*2eaa2367a5> *f004f939a8; // 0x80(0x10)
	struct FGuid *b17e299208; // 0x90(0x10)
};

// Class Engine.TouchInterface
// Size: 0x60 (Inherited: 0x30)
struct UTouchInterface : UObject {
	struct TArray<struct F*bdbe0e3e54> Controls; // 0x30(0x10)
	float *7b500e27de; // 0x40(0x04)
	float *0f1f0e8481; // 0x44(0x04)
	float *e263b3ba03; // 0x48(0x04)
	float *6862413592; // 0x4c(0x04)
	float *e7fe86c743; // 0x50(0x04)
	bool *53e75d12dd; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float StartupDelay; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.UserDefinedEnum
// Size: 0xc8 (Inherited: 0x78)
struct UUserDefinedEnum : UEnum {
	struct TMap<struct FName, struct FText> *c4132c74e7; // 0x78(0x50)
};

// Class Engine.VectorField
// Size: 0x50 (Inherited: 0x30)
struct UVectorField : UObject {
	struct FBox Bounds; // 0x30(0x1c)
	float Intensity; // 0x4c(0x04)
};

// Class Engine.*8a54046ee7
// Size: 0x90 (Inherited: 0x50)
struct U*8a54046ee7 : UVectorField {
	struct UTexture2D* Texture; // 0x50(0x08)
	enum class *02e6c5f744 *0901923304; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32 *949a907408; // 0x5c(0x04)
	int32 *8e4879ed24; // 0x60(0x04)
	int32 *cd73acc3fb; // 0x64(0x04)
	int32 *43d6dd38c1; // 0x68(0x04)
	int32 *cd7bcd8ace; // 0x6c(0x04)
	int32 FrameCount; // 0x70(0x04)
	float FramesPerSecond; // 0x74(0x04)
	char bLoop : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct U*5dab10ba86* NoiseField; // 0x80(0x08)
	float NoiseScale; // 0x88(0x04)
	float *8402be9496; // 0x8c(0x04)
};

// Class Engine.*5dab10ba86
// Size: 0xe8 (Inherited: 0x50)
struct U*5dab10ba86 : UVectorField {
	int32 SizeX; // 0x50(0x04)
	int32 SizeY; // 0x54(0x04)
	int32 *670b18789c; // 0x58(0x04)
	char pad_5C[0x8c]; // 0x5c(0x8c)
};

// Class Engine.*a9a02d5ef0
// Size: 0x30 (Inherited: 0x30)
struct U*a9a02d5ef0 : UObject {
};

// Class Engine.*a53c266637
// Size: 0x30 (Inherited: 0x30)
struct U*a53c266637 : UInterface {
};

// Class Engine.*5ca6d5a987
// Size: 0x60 (Inherited: 0x30)
struct U*5ca6d5a987 : UObject {
	struct FGuid ID; // 0x30(0x10)
	enum class EVolumetricDataFormat Format; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector VoxelSize; // 0x44(0x0c)
	float SamplingScale; // 0x50(0x04)
	float *27d6d8213a; // 0x54(0x04)
	float MaxDrawDistance; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.WorldComposition
// Size: 0x98 (Inherited: 0x30)
struct UWorldComposition : UObject {
	char pad_30[0x38]; // 0x30(0x38)
	struct TArray<struct ULevelStreaming*> *04125122e8; // 0x68(0x10)
	double TilesStreamingTimeThreshold; // 0x78(0x08)
	bool bLoadAllTilesDuringCinematic; // 0x80(0x01)
	bool bRebaseOriginIn3DSpace; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	float RebaseOriginDistance; // 0x84(0x04)
	struct TArray<struct FString> IgnoreStreamingPrefix; // 0x88(0x10)
};


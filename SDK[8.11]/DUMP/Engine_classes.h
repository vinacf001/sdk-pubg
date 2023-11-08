// Class Engine.Actor
// Size: 0x3e8 (Inherited: 0x28)
struct AActor : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	char pad_40_0 : 3; // 0x40(0x01)
	char *ee7fa09f2a : 1; // 0x40(0x01)
	char pad_40_4 : 4; // 0x40(0x01)
	char pad_41_0 : 1; // 0x41(0x01)
	char *1c1a603df8 : 1; // 0x41(0x01)
	char bReplicates : 1; // 0x41(0x01)
	char pad_41_3 : 5; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FName *9736d97f72; // 0x48(0x08)
	enum class ENetRole RemoteRole; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct AActor* Owner; // 0x58(0x08)
	struct FRepMovement ReplicatedMovement; // 0x60(0x34)
	char pad_94[0x4]; // 0x94(0x04)
	struct F*e12fd4230c *71a4a5335d; // 0x98(0x40)
	struct FMulticastDelegate OnReleased; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct TArray<struct AActor*> Children; // 0xf0(0x10)
	float *87e93a3748; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x108(0x10)
	float NetCullDistanceSquared; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FMulticastDelegate OnTakePointDamage; // 0x120(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x130(0x10)
	uint64 *3b8b1d07eb; // 0x140(0x08)
	struct FMulticastDelegate OnInputTouchEnter; // 0x148(0x10)
	char bAutoDestroyWhenFinished : 1; // 0x158(0x01)
	char bCanBeDamaged : 1; // 0x158(0x01)
	char *e5601844d6 : 1; // 0x158(0x01)
	char *f334832ed0 : 1; // 0x158(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x158(0x01)
	char *157511b45d : 1; // 0x158(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x158(0x01)
	char *13e484c425 : 1; // 0x158(0x01)
	char *6afb884530 : 1; // 0x159(0x01)
	char pad_159_1 : 7; // 0x159(0x01)
	char pad_15A[0x2]; // 0x15a(0x02)
	struct FGuid DestructibleId; // 0x15c(0x10)
	bool bIsDestroyedVersion; // 0x16c(0x01)
	bool RemoveFromLevelLOD; // 0x16d(0x01)
	char pad_16E[0x2]; // 0x16e(0x02)
	struct F*0a81d45cd1 PrimaryActorTick; // 0x170(0x58)
	char pad_1C8[0x60]; // 0x1c8(0x60)
	float MinNetUpdateFrequency; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct TArray<struct FName> Tags; // 0x230(0x10)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x240(0x10)
	char *e88d5f0d04 : 1; // 0x250(0x01)
	char pad_250_1 : 4; // 0x250(0x01)
	char *fa37ec8795 : 1; // 0x250(0x01)
	char *546a2c1ba4 : 1; // 0x250(0x01)
	char *9c48e84b30 : 1; // 0x250(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x251(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x252(0x01)
	enum class ENetRole Role; // 0x253(0x01)
	char pad_254[0x4]; // 0x254(0x04)
	struct FMulticastDelegate OnClicked; // 0x258(0x10)
	struct APawn* Instigator; // 0x268(0x08)
	float InitialLifeSpan; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	int32 *72feb06886; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x280(0x10)
	float CustomTimeDilation; // 0x290(0x04)
	enum class *3d79023269 InputConsumeOption; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct FMulticastDelegate OnInputTouchLeave; // 0x298(0x10)
	struct TArray<struct FName> Layers; // 0x2a8(0x10)
	enum class EAutoReceiveInput *63eb2f6239; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	int32 *bb4531cf18; // 0x2bc(0x04)
	struct AActor* ParentComponentActor; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct USceneComponent* RootComponent; // 0x2d0(0x08)
	float NetPriority; // 0x2d8(0x04)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x2e0(0x10)
	struct FMulticastDelegate OnActorEndOverlap; // 0x2f0(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x300(0x10)
	struct TArray<struct AMatineeActor*> *342408205b; // 0x310(0x10)
	struct U*37a897c2a6* *37a897c2a6; // 0x320(0x08)
	struct FMulticastDelegate OnActorHit; // 0x328(0x10)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x338(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x348(0x10)
	char bHidden : 1; // 0x358(0x01)
	char *203daa4969 : 1; // 0x358(0x01)
	char *ef18b22ab3 : 1; // 0x358(0x01)
	char bOnlyRelevantToOwner : 1; // 0x358(0x01)
	char bAlwaysRelevant : 1; // 0x358(0x01)
	char *8ba71f2430 : 1; // 0x358(0x01)
	char *c488fcabdb : 1; // 0x358(0x01)
	char *95a7dbac35 : 1; // 0x358(0x01)
	char *d360431085 : 1; // 0x359(0x01)
	char pad_359_1 : 1; // 0x359(0x01)
	char *0a42a36656 : 1; // 0x359(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x359(0x01)
	char *296d657336 : 1; // 0x359(0x01)
	char pad_359_5 : 1; // 0x359(0x01)
	char *73eeec1e6d : 1; // 0x359(0x01)
	char pad_359_7 : 1; // 0x359(0x01)
	char pad_35A[0x2]; // 0x35a(0x02)
	struct UChildActorComponent* *02788983e3; // 0x35c(0x08)
	char pad_364[0x4]; // 0x364(0x04)
	struct FMulticastDelegate OnDestroyed; // 0x368(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x378(0x10)
	char pad_388[0x4]; // 0x388(0x04)
	float NetUpdateFrequency; // 0x38c(0x04)
	char pad_390[0x58]; // 0x390(0x58)

	struct AActor* *3989b8b937(struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*3989b8b937 // Final|Native|Public|BlueprintCallable // @ game+0x64fa0ac
	struct AActor* *a681358bc4(); // Function Engine.Actor.*a681358bc4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2cf8
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x293938
	void *39298590ca(); // Function Engine.Actor.*39298590ca // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4950
	void *4018d0c632(); // Function Engine.Actor.*4018d0c632 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f098c
	void HasAuthority(); // Function Engine.Actor.HasAuthority // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xaaea34
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // Event|Public|BlueprintEvent // @ game+0x293938
	void *2c4afd0cc9(); // Function Engine.Actor.*2c4afd0cc9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f0c18
	void *34262bebc8(struct AActor* OtherActor); // Function Engine.Actor.*34262bebc8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f66b0
	void SetOwner(); // Function Engine.Actor.SetOwner // Native|Public|BlueprintCallable // @ game+0x573ff60
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // Event|Public|BlueprintEvent // @ game+0x293938
	struct AActor* *a6118fe2c0(); // Function Engine.Actor.*a6118fe2c0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f3a34
	void *1271c83ac5(); // Function Engine.Actor.*1271c83ac5 // Native|Public|BlueprintCallable // @ game+0x64ff5b8
	struct FHitResult K2_AddActorWorldRotation(struct FRotator DeltaRotation); // Function Engine.Actor.K2_AddActorWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f88d8
	void *61de3812ee(); // Function Engine.Actor.*61de3812ee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f0c64
	void *4b8ae6f2a5(); // Function Engine.Actor.*4b8ae6f2a5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f48a0
	void *2bb0c747eb(); // Function Engine.Actor.*2bb0c747eb // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x64f049c
	struct FHitResult K2_AddActorWorldTransform(struct FTransform DeltaTransform); // Function Engine.Actor.K2_AddActorWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f8ab0
	void *7a8a6dd052(); // Function Engine.Actor.*7a8a6dd052 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f127c
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5834
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // Native|Protected // @ game+0xb38908
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x293938
	enum class EAttachmentRule *79d6ce8944(enum class EAttachmentRule RotationRule); // Function Engine.Actor.*79d6ce8944 // Final|Native|Public|BlueprintCallable // @ game+0x673c58
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // Final|Native|Public|BlueprintCallable // @ game+0x64ee3d8
	struct FVector GetActorBounds(); // Function Engine.Actor.GetActorBounds // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f06b0
	void DisableInput(); // Function Engine.Actor.DisableInput // Native|Public|BlueprintCallable // @ game+0x64ee46c
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x64e959c
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // Final|Native|Public|BlueprintCallable // @ game+0x64f9dac
	struct FTransform K2_SetActorTransform(bool bSweep, bool bTeleport); // Function Engine.Actor.K2_SetActorTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fc144
	void *b895bffb9a(); // Function Engine.Actor.*b895bffb9a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f74f8
	void *e7e17038d8(); // Function Engine.Actor.*e7e17038d8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6502b98
	void *81b4039d6c(); // Function Engine.Actor.*81b4039d6c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1214
	void *53ba01cd9c(); // Function Engine.Actor.*53ba01cd9c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f3994
	void *7650e89956(); // Function Engine.Actor.*7650e89956 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7444
	void *2c9921815b(); // Function Engine.Actor.*2c9921815b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64fb070
	void *4f65c06a84(); // Function Engine.Actor.*4f65c06a84 // Final|Native|Public|BlueprintCallable // @ game+0x65086b8
	void ActorHasTag(struct FName Tag); // Function Engine.Actor.ActorHasTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64e7904
	void K2_AddActorLocalTransform(struct FTransform NewTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f84d4
	struct AActor* *586623e9e7(); // Function Engine.Actor.*586623e9e7 // Final|Native|Public|BlueprintCallable // @ game+0x6509808
	struct FRotator K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xa7e888
	void *fff52e4054(); // Function Engine.Actor.*fff52e4054 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6dfc
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fbb68
	void K2_AttachRootComponentTo(struct USceneComponent* InParent, struct FName InSocketName); // Function Engine.Actor.K2_AttachRootComponentTo // Final|Native|Public|BlueprintCallable // @ game+0x64f9c2c
	void *737d73e961(); // Function Engine.Actor.*737d73e961 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f0ab8
	void *714237daa5(); // Function Engine.Actor.*714237daa5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f59c4
	float *908e613f2a(); // Function Engine.Actor.*908e613f2a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x650abd8
	void *9b88d7e8d4(); // Function Engine.Actor.*9b88d7e8d4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f0c4c
	void *29508a4bf2(); // Function Engine.Actor.*29508a4bf2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7460
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64fac7c
	void *55f16db019(); // Function Engine.Actor.*55f16db019 // Final|Native|Public|BlueprintCallable // @ game+0x64f697c
	void *106e09f070(struct FRotator DestRotation); // Function Engine.Actor.*106e09f070 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64fd384
	void *925fe8d3ea(); // Function Engine.Actor.*925fe8d3ea // Native|Public|BlueprintCallable // @ game+0x6508038
	void *54a0becbfe(); // Function Engine.Actor.*54a0becbfe // Final|Native|Public|BlueprintCallable // @ game+0x64fa6ec
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // Event|Public|BlueprintEvent // @ game+0x293938
	struct AActor* ReceivePointDamage(struct U*f23bfe8a1c* DamageType, struct FVector HitNormal, struct FName BoneName); // Function Engine.Actor.ReceivePointDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x293938
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // Event|Public|BlueprintEvent // @ game+0x293938
	void *1aee2325a9(struct UMaterialInterface* Parent); // Function Engine.Actor.*1aee2325a9 // Final|Native|Public|BlueprintCallable // @ game+0x64fd9bc
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // Event|Public|BlueprintEvent // @ game+0x293938
	void *e67787df0d(); // Function Engine.Actor.*e67787df0d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7c38
	void *b559cd5bb6(); // Function Engine.Actor.*b559cd5bb6 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x65080d0
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // Event|Public|BlueprintEvent // @ game+0x293938
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // Native|Public // @ game+0x8a56c8
	void *9b7475c7cd(struct TArray<struct AActor*> ChildActors); // Function Engine.Actor.*9b7475c7cd // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1040
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // Native|Public // @ game+0x7b89c0
	void *b979e02c0b(); // Function Engine.Actor.*b979e02c0b // Native|Public|BlueprintCallable // @ game+0x650a510
	struct AActor* *bd080aece3(); // Function Engine.Actor.*bd080aece3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2d98
	void *cc2ec62328(); // Function Engine.Actor.*cc2ec62328 // Final|Native|Public|BlueprintCallable // @ game+0x65085a0
	struct AController* ReceiveAnyDamage(); // Function Engine.Actor.ReceiveAnyDamage // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x293938
	void *d0599f9969(); // Function Engine.Actor.*d0599f9969 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f61f0
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x293938
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // Native|Public // @ game+0xbf8060
	void GetTransform(); // Function Engine.Actor.GetTransform // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xb82d88
	void *ba856be1c7(); // Function Engine.Actor.*ba856be1c7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1238
	bool K2_AddActorLocalRotation(struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f82fc
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // Event|Public|BlueprintEvent // @ game+0x293938
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // Native|Public|BlueprintCallable // @ game+0x57e39e0
	void *1374553f9f(); // Function Engine.Actor.*1374553f9f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6502af8
	enum class *90c9408cc7 *0f5dc47999(enum class *90c9408cc7 RotationRule); // Function Engine.Actor.*0f5dc47999 // Final|Native|Public|BlueprintCallable // @ game+0x64fa83c
	void GetVelocity(); // Function Engine.Actor.GetVelocity // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6dc4
	struct FHitResult K2_AddActorLocalOffset(); // Function Engine.Actor.K2_AddActorLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f8124
	void ReceiveRadialDamage(struct U*f23bfe8a1c* DamageType, struct FHitResult HitInfo); // Function Engine.Actor.ReceiveRadialDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x293938
	void *a743e7718b(); // Function Engine.Actor.*a743e7718b // Native|Public|BlueprintCallable // @ game+0xc68424
	void *e9a85fdb39(); // Function Engine.Actor.*e9a85fdb39 // Final|Native|Public|BlueprintCallable // @ game+0x6502ccc
	void *0128a55b1c(); // Function Engine.Actor.*0128a55b1c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f0c8c
	void *7d96186e34(struct FKey InputAxisKey); // Function Engine.Actor.*7d96186e34 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4680
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // Event|Public|BlueprintEvent // @ game+0x293938
	void *7148b110dc(); // Function Engine.Actor.*7148b110dc // Native|Public|BlueprintCallable // @ game+0x64eff14
	void *3e6eb6bf5c(); // Function Engine.Actor.*3e6eb6bf5c // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x64f2f40
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // Event|Public|BlueprintEvent // @ game+0x293938
	struct FHitResult K2_AddActorWorldOffset(struct FVector DeltaLocation); // Function Engine.Actor.K2_AddActorWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f8700
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // Event|Public|BlueprintEvent // @ game+0x293938
	void MakeNoise(float Loudness, struct FVector NoiseLocation); // Function Engine.Actor.MakeNoise // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64fda38
	void *39323dc533(); // Function Engine.Actor.*39323dc533 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5a88
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fb930
	void *c92feec516(); // Function Engine.Actor.*c92feec516 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5a64
	void *1584fc199d(); // Function Engine.Actor.*1584fc199d // Native|Public|BlueprintCallable // @ game+0x64e96c4
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f55d4
	void *91098873e6(struct FName InputAxisName); // Function Engine.Actor.*91098873e6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4064
	struct UObject* AddComponent(bool bManualAttachment); // Function Engine.Actor.AddComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xb5c678
	struct UClass* *d59794b83e(); // Function Engine.Actor.*d59794b83e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f23d8
	void *2ba131945a(); // Function Engine.Actor.*2ba131945a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4888
	void *c47d432c57(); // Function Engine.Actor.*c47d432c57 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f0858
	void *4a0e7bcfa3(); // Function Engine.Actor.*4a0e7bcfa3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f0aec
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x64f04b0
	bool K2_SetActorLocation(struct FHitResult SweepHitResult); // Function Engine.Actor.K2_SetActorLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fb74c
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x293938
	void *486c8ab3b8(); // Function Engine.Actor.*486c8ab3b8 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64fabac
	struct FKey *7cd9bf7d62(); // Function Engine.Actor.*7cd9bf7d62 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f3f70
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // Native|Public // @ game+0xb932ac
	void *c04bf37fb1(struct FVector OutLocation); // Function Engine.Actor.*c04bf37fb1 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f0880
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // Event|Public|BlueprintEvent // @ game+0x293938
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // Native|Public|BlueprintCallable // @ game+0x6502894
	struct FRotator K2_SetActorRelativeRotation(bool bSweep); // Function Engine.Actor.K2_SetActorRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fbd40
	struct FVector ReceiveHit(struct UPrimitiveComponent* MyComp); // Function Engine.Actor.ReceiveHit // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x293938
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // Event|Public|BlueprintEvent // @ game+0x293938
	void K2_SetActorRelativeTransform(struct FTransform NewRelativeTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_SetActorRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fbf18
	struct UClass* *765007f9fa(); // Function Engine.Actor.*765007f9fa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f24d0
	void *b759798186(); // Function Engine.Actor.*b759798186 // Native|Public|BlueprintCallable // @ game+0x64ff490
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // Native|Public // @ game+0x4cdc00
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // Event|Public|BlueprintEvent // @ game+0x293938
	struct FName *47d2b9df79(); // Function Engine.Actor.*47d2b9df79 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f25c0
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // Final|Native|Public|BlueprintCallable // @ game+0x6502c38
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x293938
	void *e5d0e7e401(); // Function Engine.Actor.*e5d0e7e401 // Final|Native|Public|BlueprintCallable // @ game+0x65027fc
};

// Class Engine.AnimInstance
// Size: 0x3a0 (Inherited: 0x28)
struct UAnimInstance : UObject {
	float DeltaTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct USkeleton* *00f1a04d93; // 0x30(0x08)
	enum class *bad4eeba2c *64d499977d; // 0x38(0x01)
	bool bRunUpdatesInWorkerThreads; // 0x39(0x01)
	bool bCanUseParallelUpdateAnimation; // 0x3a(0x01)
	bool *19654fcffc; // 0x3b(0x01)
	bool bWarnAboutBlueprintUsage; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FMulticastDelegate OnMontageBlendingOut; // 0x40(0x10)
	struct FMulticastDelegate OnMontageStarted; // 0x50(0x10)
	struct FMulticastDelegate OnMontageEnded; // 0x60(0x10)
	struct FMulticastDelegate OnMontageInterrupted; // 0x70(0x10)
	struct FMulticastDelegate OnAllMontageInstancesEnded; // 0x80(0x10)
	char pad_90[0x60]; // 0x90(0x60)
	bool *b2f6e14773; // 0xf0(0x01)
	char pad_F1[0x9f]; // 0xf1(0x9f)
	struct TArray<struct FAnimNotifyEvent> *d4944da090; // 0x190(0x10)
	char pad_1A0[0x200]; // 0x1a0(0x200)

	int32 GetStateWeight(); // Function Engine.AnimInstance.GetStateWeight // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6530894
	struct UAnimMontage* *8b2dbddc42(); // Function Engine.AnimInstance.*8b2dbddc42 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6540ad4
	void GetAnimAssetPlayerTimeFromEnd(struct UAnimationAsset* AnimAsset); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6527920
	struct FName *b00a4c6977(); // Function Engine.AnimInstance.*b00a4c6977 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x348bd0
	int32 *1b44e35344(); // Function Engine.AnimInstance.*1b44e35344 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652ecbc
	void *1e685b1c44(); // Function Engine.AnimInstance.*1e685b1c44 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6528fe8
	int32 *576eca5fe6(); // Function Engine.AnimInstance.*576eca5fe6 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x9f5dbc
	struct FName *fc5123822e(); // Function Engine.AnimInstance.*fc5123822e // Native|Public|BlueprintCallable // @ game+0x347e90
	void *a508d5065e(); // Function Engine.AnimInstance.*a508d5065e // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x653c5a8
	void *0afc1c441a(int32 TransitionIndex); // Function Engine.AnimInstance.*0afc1c441a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652bec4
	struct UAnimMontage* *d975dc291b(); // Function Engine.AnimInstance.*d975dc291b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc5c780
	int32 *642b0d689d(); // Function Engine.AnimInstance.*642b0d689d // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652b6fc
	void *55851ebd85(struct FName InSyncGroupName, struct FName NextMarker); // Function Engine.AnimInstance.*55851ebd85 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536d34
	void BlueprintUpdateAnimation(); // Function Engine.AnimInstance.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x293938
	struct UAnimMontage* Montage_Play(enum class EMontagePlayReturnType ReturnValueType); // Function Engine.AnimInstance.Montage_Play // Native|Public|BlueprintCallable // @ game+0x673edc
	struct FName *09b1e8fd25(); // Function Engine.AnimInstance.*09b1e8fd25 // Final|Native|Public|BlueprintCallable // @ game+0x6540df0
	int32 GetCurrentStateElapsedTime(); // Function Engine.AnimInstance.GetCurrentStateElapsedTime // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x65293d0
	void *d20b45d812(); // Function Engine.AnimInstance.*d20b45d812 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6540a34
	void *a5725955ed(struct FName SlotNodeName); // Function Engine.AnimInstance.*a5725955ed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65367ac
	void *21224e4f15(); // Function Engine.AnimInstance.*21224e4f15 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xbe3a28
	struct UAnimationAsset* GetAnimAssetPlayerLength(); // Function Engine.AnimInstance.GetAnimAssetPlayerLength // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65277ac
	void *2fd908ba89(); // Function Engine.AnimInstance.*2fd908ba89 // Final|Native|Public|BlueprintCallable // @ game+0x65548a4
	int32 *4625570d97(); // Function Engine.AnimInstance.*4625570d97 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652efac
	void *39e1d97951(); // Function Engine.AnimInstance.*39e1d97951 // Native|Public|HasOutParms|BlueprintCallable // @ game+0x655c750
	void *7b42284f1f(struct FVector Velocity); // Function Engine.AnimInstance.*7b42284f1f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651906c
	void *4aa8d6f78e(int32 AssetPlayerIndex); // Function Engine.AnimInstance.*4aa8d6f78e // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x9f5940
	struct UAnimMontage* *ddf1ff6163(); // Function Engine.AnimInstance.*ddf1ff6163 // Final|Native|Public|BlueprintCallable // @ game+0x6540fec
	struct UAnimSequenceBase* PlaySlotAnimationAsDynamicMontage(struct FName SlotNodeName, float BlendOutTime, int32 LoopCount, float InTimeToStartMontageAt); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage // Final|Native|Public|BlueprintCallable // @ game+0x6544d00
	struct UAnimMontage* *e145e83604(); // Function Engine.AnimInstance.*e145e83604 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6540b70
	int32 *17d24ff813(int32 StateIndex); // Function Engine.AnimInstance.*17d24ff813 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x9f5b18
	void *ede2013dc0(int32 MachineIndex); // Function Engine.AnimInstance.*ede2013dc0 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652c0cc
	void *67800d693e(); // Function Engine.AnimInstance.*67800d693e // Final|Native|Public|BlueprintCallable // @ game+0x65566c0
	struct UAnimMontage* *56658b7153(); // Function Engine.AnimInstance.*56658b7153 // Final|Native|Public|BlueprintCallable // @ game+0x65410cc
	void PlaySlotAnimation(struct UAnimSequenceBase* Asset, float BlendInTime, float InPlayRate); // Function Engine.AnimInstance.PlaySlotAnimation // Final|Native|Public|BlueprintCallable // @ game+0x6544adc
	int32 *0979216d6d(); // Function Engine.AnimInstance.*0979216d6d // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652c2cc
	void *0af7b6e222(); // Function Engine.AnimInstance.*0af7b6e222 // Final|Native|Public|BlueprintCallable // @ game+0x6561710
	void *0da90049a4(); // Function Engine.AnimInstance.*0da90049a4 // Native|Public|BlueprintCallable // @ game+0x67411c
	float *d40af44efc(); // Function Engine.AnimInstance.*d40af44efc // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x653140c
	void *5f792f1e89(struct UAnimMontage* Montage); // Function Engine.AnimInstance.*5f792f1e89 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6540cb0
	void *0f4214a44c(); // Function Engine.AnimInstance.*0f4214a44c // Native|Public|BlueprintCallable // @ game+0x6549b84
	float GetAnimAssetPlayerTimeFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6527840
	int32 *a3d96e72ea(); // Function Engine.AnimInstance.*a3d96e72ea // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652eec4
	void *507b3ae08c(); // Function Engine.AnimInstance.*507b3ae08c // Final|Native|Public|BlueprintCallable // @ game+0x6540f5c
	void *d1802716c0(); // Function Engine.AnimInstance.*d1802716c0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652dddc
	struct FName *427acd4368(); // Function Engine.AnimInstance.*427acd4368 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6534740
	void *8d25a2b336(int32 AssetPlayerIndex); // Function Engine.AnimInstance.*8d25a2b336 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652b52c
	void GetAnimAssetPlayerTimeFromEndFraction(struct UAnimationAsset* AnimAsset); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6527a24
	int32 *97675e998b(); // Function Engine.AnimInstance.*97675e998b // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652b374
	int32 *74e6c97aea(); // Function Engine.AnimInstance.*74e6c97aea // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6529470
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation // Event|Public|BlueprintEvent // @ game+0x293938
	void *7f10900457(); // Function Engine.AnimInstance.*7f10900457 // Final|Native|Public|BlueprintCallable // @ game+0x651c314
	void *f24a483c94(); // Function Engine.AnimInstance.*f24a483c94 // Final|Native|Public|BlueprintCallable // @ game+0x6540ecc
	struct UAnimMontage* *aacf4df222(); // Function Engine.AnimInstance.*aacf4df222 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6540c10
	void *ffaf42859e(int32 AssetPlayerIndex); // Function Engine.AnimInstance.*ffaf42859e // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652b1a8
	void *7bf1dbb0b1(bool bLockMovement); // Function Engine.AnimInstance.*7bf1dbb0b1 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x653c5a8
	void *47f249075c(); // Function Engine.AnimInstance.*47f249075c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6563458
	struct FName *e8c2c21ba8(); // Function Engine.AnimInstance.*e8c2c21ba8 // Native|Public|BlueprintCallable // @ game+0x57fe58c
	void *445a0d40ab(int32 MachineIndex); // Function Engine.AnimInstance.*445a0d40ab // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652b9e4
	void *aa1433683b(struct UAnimMontage* Montage); // Function Engine.AnimInstance.*aa1433683b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6540d50
	struct FName *5c70e4f6eb(); // Function Engine.AnimInstance.*5c70e4f6eb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6530d5c
	int32 *7a139bbc29(int32 StateIndex); // Function Engine.AnimInstance.*7a139bbc29 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x3555a4
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x293938
	void *925ceab1f2(); // Function Engine.AnimInstance.*925ceab1f2 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x652afdc
	void *12bd0b8eee(); // Function Engine.AnimInstance.*12bd0b8eee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536068
};

// Class Engine.ActorComponent
// Size: 0x1f0 (Inherited: 0x28)
struct UActorComponent : UObject {
	char pad_28[0xe8]; // 0x28(0xe8)
	struct F*4325a9ec93 PrimaryComponentTick; // 0x110(0x58)
	struct TArray<struct FName> ComponentTags; // 0x168(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x178(0x10)
	char pad_188_0 : 3; // 0x188(0x01)
	char bReplicates : 1; // 0x188(0x01)
	char bNetAddressable : 1; // 0x188(0x01)
	char *e1ab54f0d0 : 1; // 0x188(0x01)
	char pad_188_6 : 2; // 0x188(0x01)
	char pad_189[0x1]; // 0x189(0x01)
	char pad_18A_0 : 2; // 0x18a(0x01)
	char bCreatedByConstructionScript : 1; // 0x18a(0x01)
	char bInstanceComponent : 1; // 0x18a(0x01)
	char bAutoActivate : 1; // 0x18a(0x01)
	char *bdff81749e : 1; // 0x18a(0x01)
	char *9049ba6b33 : 1; // 0x18a(0x01)
	char pad_18A_7 : 1; // 0x18a(0x01)
	char pad_18B[0x1]; // 0x18b(0x01)
	struct FGuid DestructibleId; // 0x18c(0x10)
	bool bIsDestroyedVersion; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	char *74755571f4 : 1; // 0x1a0(0x01)
	char pad_1A0_1 : 2; // 0x1a0(0x01)
	char bIsEditorOnly : 1; // 0x1a0(0x01)
	char pad_1A0_4 : 4; // 0x1a0(0x01)
	char pad_1A1[0x4]; // 0x1a1(0x04)
	enum class EComponentCreationMethod CreationMethod; // 0x1a5(0x01)
	enum class EPendingCreationType *c62b495b2d; // 0x1a6(0x01)
	char pad_1A7[0x9]; // 0x1a7(0x09)
	struct TArray<struct FSimpleMemberReference> *7a3c8367fe; // 0x1b0(0x10)
	struct FMulticastDelegate OnComponentActivated; // 0x1c0(0x10)
	struct FMulticastDelegate OnComponentDeactivated; // 0x1d0(0x10)
	char pad_1E0[0x9]; // 0x1e0(0x09)
	char *1c1a603df8 : 1; // 0x1e9(0x01)
	char pad_1E9_1 : 7; // 0x1e9(0x01)
	char pad_1EA[0x6]; // 0x1ea(0x06)

	struct FName *576122409c(); // Function Engine.ActorComponent.*576122409c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64ed454
	void IsActive(); // Function Engine.ActorComponent.IsActive // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f741c
	void Activate(); // Function Engine.ActorComponent.Activate // Native|Public|BlueprintCallable // @ game+0xcc3cf0
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x293938
	void *2b6de5a619(); // Function Engine.ActorComponent.*2b6de5a619 // Final|Native|Public|BlueprintCallable // @ game+0x6504f4c
	void *33759e78a8(); // Function Engine.ActorComponent.*33759e78a8 // Final|Native|Public|BlueprintCallable // @ game+0x65064e8
	void *4c6494a5d4(); // Function Engine.ActorComponent.*4c6494a5d4 // Native|Public|BlueprintCallable // @ game+0x5f9ce80
	void *00bf4cdabe(); // Function Engine.ActorComponent.*00bf4cdabe // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2480
	void *714237daa5(); // Function Engine.ActorComponent.*714237daa5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xb8f50c
	void *c791c9d07e(); // Function Engine.ActorComponent.*c791c9d07e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f74dc
	void ReceiveTick(); // Function Engine.ActorComponent.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x293938
	void *cc2ec62328(); // Function Engine.ActorComponent.*cc2ec62328 // Final|Native|Public|BlueprintCallable // @ game+0x650862c
	void Deactivate(); // Function Engine.ActorComponent.Deactivate // Native|Public|BlueprintCallable // @ game+0x8d3f30
	bool *e1b93fda8a(); // Function Engine.ActorComponent.*e1b93fda8a // Native|Public|BlueprintCallable // @ game+0x6502708
	void ReceiveEndPlay(); // Function Engine.ActorComponent.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x293938
	void *54a0becbfe(); // Function Engine.ActorComponent.*54a0becbfe // Final|Native|Public|BlueprintCallable // @ game+0x64fa784
	void *4f65c06a84(); // Function Engine.ActorComponent.*4f65c06a84 // Final|Native|Public|BlueprintCallable // @ game+0x6508750
	void *b759798186(); // Function Engine.ActorComponent.*b759798186 // Native|Public|BlueprintCallable // @ game+0x64ff524
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive // Final|Native|Public // @ game+0x64fdf98
	void AddTickPrerequisiteActor(); // Function Engine.ActorComponent.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x64e9630
	void *61043d392b(); // Function Engine.ActorComponent.*61043d392b // Native|Public|BlueprintCallable // @ game+0x6503300
	void *e2e0972c8e(); // Function Engine.ActorComponent.*e2e0972c8e // Native|Public|BlueprintCallable // @ game+0x6504eb4
	void *1271c83ac5(); // Function Engine.ActorComponent.*1271c83ac5 // Native|Public|BlueprintCallable // @ game+0x64ff64c
	void *f755d02be8(); // Function Engine.ActorComponent.*f755d02be8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f75f4
	void *1584fc199d(); // Function Engine.ActorComponent.*1584fc199d // Native|Public|BlueprintCallable // @ game+0x64e9758
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
	float BaseEyeHeight; // 0x3f4(0x04)
	enum class EAutoReceiveInput AutoPossessPlayer; // 0x3f8(0x01)
	enum class EAutoPossessAI *80f545fe29; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct UClass* AIControllerClass; // 0x400(0x08)
	struct AController* *771ed191dc; // 0x408(0x08)
	struct AController* Controller; // 0x410(0x08)
	struct APlayerState* PlayerState; // 0x418(0x08)
	uint16 *1fbcce05c7; // 0x420(0x02)
	char pad_422[0xa]; // 0x422(0x0a)
	struct FVector *7e7ad45e69; // 0x42c(0x0c)
	struct FVector *3b712bd90f; // 0x438(0x0c)
	char pad_444[0x4]; // 0x444(0x04)

	void *9f69700260(struct FVector NoiseLocation); // Function Engine.Pawn.*9f69700260 // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64fe20c
	void *d8774202a5(); // Function Engine.Pawn.*d8774202a5 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57bd35c
	void GetController(); // Function Engine.Pawn.GetController // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f276c
	void *710294f579(); // Function Engine.Pawn.*710294f579 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64ed86c
	void AddControllerPitchInput(); // Function Engine.Pawn.AddControllerPitchInput // Native|Public|BlueprintCallable // @ game+0x64e7b8c
	void *abdc1da901(); // Function Engine.Pawn.*abdc1da901 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc1279c
	void *98a6e6af0b(); // Function Engine.Pawn.*98a6e6af0b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5d34
	bool *b6c21f1d01(); // Function Engine.Pawn.*b6c21f1d01 // Final|Native|Public|BlueprintCallable // @ game+0x6504390
	void *ae94aa4833(bool bXYOverride); // Function Engine.Pawn.*ae94aa4833 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64fd5dc
	void AddControllerRollInput(); // Function Engine.Pawn.AddControllerRollInput // Native|Public|BlueprintCallable // @ game+0x64e7c28
	void K2_GetMovementInputVector(); // Function Engine.Pawn.K2_GetMovementInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5d34
	void *5062f1e06a(); // Function Engine.Pawn.*5062f1e06a // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x578b6e4
	void ReceivePossessed(); // Function Engine.Pawn.ReceivePossessed // Event|Public|BlueprintEvent // @ game+0x293938
	void *85f4ccf8cf(); // Function Engine.Pawn.*85f4ccf8cf // Native|Public|BlueprintCallable // @ game+0x5786f44
	void GetControlRotation(); // Function Engine.Pawn.GetControlRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2738
	float *bd818f4eae(); // Function Engine.Pawn.*bd818f4eae // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e8db8
	void AddControllerYawInput(); // Function Engine.Pawn.AddControllerYawInput // Native|Public|BlueprintCallable // @ game+0x64e7cc4
	void OnRep_Controller(); // Function Engine.Pawn.OnRep_Controller // Native|Public // @ game+0x7b1f8c
	struct APawn* *b6654ecead(); // Function Engine.Pawn.*b6654ecead // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x64f50ac
	void *05c9ee399f(); // Function Engine.Pawn.*05c9ee399f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7bc0
	void *5b6826bae8(); // Function Engine.Pawn.*5b6826bae8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7620
	void *01e8ed425d(); // Function Engine.Pawn.*01e8ed425d // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1364
	void *f994a202e6(); // Function Engine.Pawn.*f994a202e6 // Native|Public|BlueprintCallable // @ game+0x65099ec
	void ReceiveUnpossessed(); // Function Engine.Pawn.ReceiveUnpossessed // Event|Public|BlueprintEvent // @ game+0x293938
	void *7446c37470(); // Function Engine.Pawn.*7446c37470 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f51e4
	void OnRep_PlayerState(); // Function Engine.Pawn.OnRep_PlayerState // Native|Public // @ game+0x3f3df0
	void *cf0a44c8b8(); // Function Engine.Pawn.*cf0a44c8b8 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4928
};

// Class Engine.DataAsset
// Size: 0x30 (Inherited: 0x28)
struct UDataAsset : UObject {
	struct UClass* *a8f9540798; // 0x28(0x08)
};

// Class Engine.SceneComponent
// Size: 0x460 (Inherited: 0x1f0)
struct USceneComponent : UActorComponent {
	struct USceneComponent* AttachParent; // 0x1f0(0x08)
	struct FVector *47e17f1cb8; // 0x1f8(0x0c)
	enum class EComponentMobility Mobility; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	struct TArray<struct USceneComponent*> AttachChildren; // 0x208(0x10)
	char pad_218_0 : 1; // 0x218(0x01)
	char bReplicatesAttachmentReference : 1; // 0x218(0x01)
	char bReplicatesAttachment : 1; // 0x218(0x01)
	char *398fd0c0d1 : 1; // 0x218(0x01)
	char pad_218_4 : 1; // 0x218(0x01)
	char bAbsoluteLocation : 1; // 0x218(0x01)
	char bAbsoluteRotation : 1; // 0x218(0x01)
	char bAbsoluteScale : 1; // 0x218(0x01)
	char bVisible : 1; // 0x219(0x01)
	char bHiddenInGame : 1; // 0x219(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x219(0x01)
	char *e8ec283885 : 1; // 0x219(0x01)
	char bUseAttachParentBound : 1; // 0x219(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x219(0x01)
	char pad_219_6 : 2; // 0x219(0x01)
	char pad_21A_0 : 3; // 0x21a(0x01)
	char bAbsoluteTranslation : 1; // 0x21a(0x01)
	char pad_21A_4 : 4; // 0x21a(0x01)
	char pad_21B[0x1]; // 0x21b(0x01)
	struct APhysicsVolume* PhysicsVolume; // 0x21c(0x08)
	char pad_224[0x50]; // 0x224(0x50)
	struct FRotator RelativeRotation; // 0x274(0x0c)
	char pad_280[0x20]; // 0x280(0x20)
	SetProperty *5e68ef062e; // 0x2a0(0x50)
	struct FVector RelativeTranslation; // 0x2f0(0x0c)
	struct FVector RelativeLocation; // 0x2fc(0x0c)
	enum class *40da61f0d8 DetailMode; // 0x308(0x01)
	char pad_309[0xf]; // 0x309(0x0f)
	struct FVector RelativeScale3D; // 0x318(0x0c)
	char pad_324[0x4]; // 0x324(0x04)
	struct FName *d0cdbdd0fa; // 0x328(0x08)
	char pad_330[0x38]; // 0x330(0x38)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x368(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate; // 0x378(0x10)
	char pad_388[0xd8]; // 0x388(0xd8)

	void IsVisible(); // Function Engine.SceneComponent.IsVisible // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f800c
	void K2_AddWorldRotation(struct FRotator DeltaRotation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_AddWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f9828
	void *0c74739254(); // Function Engine.SceneComponent.*0c74739254 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5c24
	void *7ec7e6d06d(enum class *90c9408cc7 RotationRule); // Function Engine.SceneComponent.*7ec7e6d06d // Final|Native|Public|BlueprintCallable // @ game+0x673b48
	bool DetachFromParent(); // Function Engine.SceneComponent.DetachFromParent // Native|Public|BlueprintCallable // @ game+0x64ee2e4
	void *5517b00eba(); // Function Engine.SceneComponent.*5517b00eba // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2e9c
	void K2_AttachTo(struct FName InSocketName, bool bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachTo // Final|Native|Public|BlueprintCallable // @ game+0x64f9f2c
	struct FHitResult K2_AddLocalTransform(); // Function Engine.SceneComponent.K2_AddLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f908c
	void *e36ab2b188(); // Function Engine.SceneComponent.*e36ab2b188 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5f90
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // Final|Native|Private // @ game+0xb1a2cc
	void *2c76227353(bool bNewAbsoluteRotation); // Function Engine.SceneComponent.*2c76227353 // Final|Native|Public|BlueprintCallable // @ game+0x65025c4
	void *e177c790ac(); // Function Engine.SceneComponent.*e177c790ac // Final|Native|Public|BlueprintCallable // @ game+0x64ff710
	int32 *1ff5be215f(); // Function Engine.SceneComponent.*1ff5be215f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1f78
	void K2_SetRelativeRotation(struct FRotator NewRotation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fc774
	struct FHitResult K2_AddRelativeRotation(); // Function Engine.SceneComponent.K2_AddRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f9484
	void *2107af1f45(); // Function Engine.SceneComponent.*2107af1f45 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6204
	void *0c17c4ef20(); // Function Engine.SceneComponent.*0c17c4ef20 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6bf4
	void *02150347c8(); // Function Engine.SceneComponent.*02150347c8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1264
	struct FName *2529aa9c4b(); // Function Engine.SceneComponent.*2529aa9c4b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6360
	bool K2_SetWorldRotation(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fcf80
	void *e734bbfdd1(); // Function Engine.SceneComponent.*e734bbfdd1 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2498
	void *7b31d151fc(); // Function Engine.SceneComponent.*7b31d151fc // Final|Native|Public|BlueprintCallable // @ game+0x65063b0
	void *21797244da(); // Function Engine.SceneComponent.*21797244da // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xcb6a80
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName // Final|Native|Private // @ game+0xb5257c
	void K2_AddLocalOffset(bool bSweep); // Function Engine.SceneComponent.K2_AddLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f8cdc
	struct FName *c2d343c5f6(); // Function Engine.SceneComponent.*c2d343c5f6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64ee518
	struct FHitResult K2_SetWorldTransform(); // Function Engine.SceneComponent.K2_SetWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fd158
	void *841542b838(bool bIncludeAllDescendants); // Function Engine.SceneComponent.*841542b838 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2018
	enum class *22ea206da9 *32022b8b54(); // Function Engine.SceneComponent.*32022b8b54 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6580
	bool K2_SetWorldLocation(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fcb78
	void K2_SetRelativeLocation(struct FVector NewLocation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fc378
	struct FName *4ae5e515bf(); // Function Engine.SceneComponent.*4ae5e515bf // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5819758
	struct USceneComponent* *79d6ce8944(enum class EAttachmentRule ScaleRule); // Function Engine.SceneComponent.*79d6ce8944 // Final|Native|Public|BlueprintCallable // @ game+0x64fa2cc
	bool *3821db7cba(); // Function Engine.SceneComponent.*3821db7cba // Final|Native|Public|BlueprintCallable // @ game+0x65060d8
	void *2d79511c8a(struct USceneComponent* InParent); // Function Engine.SceneComponent.*2d79511c8a // Final|Native|Public|BlueprintCallable // @ game+0x65098e4
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren // Final|Native|Private // @ game+0xb97920
	void *0ac31b13a0(); // Function Engine.SceneComponent.*0ac31b13a0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f115c
	void *05ac12a2ed(); // Function Engine.SceneComponent.*05ac12a2ed // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6198
	void *ec6cc6480a(struct FName InSocketName); // Function Engine.SceneComponent.*ec6cc6480a // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6418
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent // Final|Native|Private // @ game+0xb5257c
	struct FHitResult K2_AddWorldOffset(); // Function Engine.SceneComponent.K2_AddWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f9650
	void *7f1c545765(); // Function Engine.SceneComponent.*7f1c545765 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64fad8c
	void *0f883d6ef4(); // Function Engine.SceneComponent.*0f883d6ef4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc38020
	void OnRep_Visibility(); // Function Engine.SceneComponent.OnRep_Visibility // Final|Native|Private // @ game+0x64fe0a4
	struct FHitResult *54b40a2d71(); // Function Engine.SceneComponent.*54b40a2d71 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fcd50
	void *dfe7f29b70(); // Function Engine.SceneComponent.*dfe7f29b70 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f74b4
	void *b97017c5f1(); // Function Engine.SceneComponent.*b97017c5f1 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f64c8
	void *8e756cd690(); // Function Engine.SceneComponent.*8e756cd690 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6507db4
	void *005bf0b0a1(); // Function Engine.SceneComponent.*005bf0b0a1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64fae10
	struct FTransform K2_SetRelativeTransform(bool bSweep); // Function Engine.SceneComponent.K2_SetRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fc94c
	void *3248871ca9(); // Function Engine.SceneComponent.*3248871ca9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f53f0
	struct FHitResult K2_AddWorldTransform(); // Function Engine.SceneComponent.K2_AddWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f9a00
	void *4047176641(); // Function Engine.SceneComponent.*4047176641 // Final|Native|Public|BlueprintCallable // @ game+0x650644c
	void K2_AddLocalRotation(bool bSweep); // Function Engine.SceneComponent.K2_AddLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f8eb4
	void ToggleVisibility(); // Function Engine.SceneComponent.ToggleVisibility // Final|Native|Public|BlueprintCallable // @ game+0x650a674
	void K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64fae54
	void *400454d1c2(); // Function Engine.SceneComponent.*400454d1c2 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65094d8
	void K2_AddRelativeLocation(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_AddRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64f92b8
	bool SetVisibility(); // Function Engine.SceneComponent.SetVisibility // Final|Native|Public|BlueprintCallable // @ game+0xc45194
	struct FVector *77558c73a3(struct FRotator NewRotation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.*77558c73a3 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fc544
};

// Class Engine.PrimitiveComponent
// Size: 0x990 (Inherited: 0x460)
struct UPrimitiveComponent : USceneComponent {
	float MinDrawDistance; // 0x460(0x04)
	float LDMaxDrawDistance; // 0x464(0x04)
	float CachedMaxDrawDistance; // 0x468(0x04)
	enum class *b2d3e352d1 *763e39a9cb; // 0x46c(0x01)
	enum class *b2d3e352d1 *9497012a6e; // 0x46d(0x01)
	char pad_46E[0x2]; // 0x46e(0x02)
	char pad_470_0 : 3; // 0x470(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x470(0x01)
	char bGenerateOverlapEvents : 1; // 0x470(0x01)
	char bMultiBodyOverlap : 1; // 0x470(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x470(0x01)
	char bTraceComplexOnMove : 1; // 0x470(0x01)
	char bDisableForceFromCharacter : 1; // 0x471(0x01)
	char bReturnMaterialOnMove : 1; // 0x471(0x01)
	char *3515772747 : 1; // 0x471(0x01)
	char bAllowCullDistanceVolume : 1; // 0x471(0x01)
	char bImportantMesh : 1; // 0x471(0x01)
	char bOverrideCullingDistances : 1; // 0x471(0x01)
	char pad_471_6 : 2; // 0x471(0x01)
	char pad_472[0x2]; // 0x472(0x02)
	float HLODScreenSize; // 0x474(0x04)
	char *fa107373d7 : 1; // 0x478(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x478(0x01)
	char bRenderInMainPass : 1; // 0x478(0x01)
	char bRenderInMono : 1; // 0x478(0x01)
	char bOwnerNoSee : 1; // 0x478(0x01)
	char bOnlyOwnerSee : 1; // 0x478(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x478(0x01)
	char bUseAsOccluder : 1; // 0x478(0x01)
	char bForceAsOccluder : 1; // 0x479(0x01)
	char bForceOcclusionQuerying : 1; // 0x479(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x479(0x01)
	char *4826fc9fad : 1; // 0x479(0x01)
	char bForceMipStreaming : 1; // 0x479(0x01)
	char *cca2f750f4 : 1; // 0x479(0x01)
	char pad_479_6 : 1; // 0x479(0x01)
	char CastShadow : 1; // 0x479(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x47a(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x47a(0x01)
	char bCastDynamicShadow : 1; // 0x47a(0x01)
	char bCastStaticShadow : 1; // 0x47a(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x47a(0x01)
	char bSelfShadowOnly : 1; // 0x47a(0x01)
	char bCastFarShadow : 1; // 0x47a(0x01)
	char bCastInsetShadow : 1; // 0x47a(0x01)
	char bCastCinematicShadow : 1; // 0x47b(0x01)
	char bCastHiddenShadow : 1; // 0x47b(0x01)
	char bCastShadowAsTwoSided : 1; // 0x47b(0x01)
	char bLightAsIfStatic : 1; // 0x47b(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x47b(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x47b(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x47b(0x01)
	char bIgnoreRadialImpulse : 1; // 0x47b(0x01)
	char bIgnoreRadialForce : 1; // 0x47c(0x01)
	char bApplyImpulseOnDamage : 1; // 0x47c(0x01)
	char bSyncBodySleep : 1; // 0x47c(0x01)
	char *fefaebb36c : 1; // 0x47c(0x01)
	char *7ccce4ff36 : 1; // 0x47c(0x01)
	char *92a6fd4e7c : 1; // 0x47c(0x01)
	char bRenderCustomDepth : 1; // 0x47c(0x01)
	char pad_47C_7 : 1; // 0x47c(0x01)
	char pad_47D_0 : 7; // 0x47d(0x01)
	char *d927c19d75 : 1; // 0x47d(0x01)
	char *bd65329126 : 1; // 0x47e(0x01)
	char *775983f410 : 1; // 0x47e(0x01)
	char pad_47E_2 : 6; // 0x47e(0x01)
	char pad_47F[0x1]; // 0x47f(0x01)
	enum class EDecalChannel DecalChannel; // 0x480(0x01)
	enum class *f1e85ae637 IndoorOutdoorMask; // 0x481(0x01)
	struct FLightingChannels LightingChannels; // 0x482(0x03)
	enum class *5b12535706 IndirectLightingCacheQuality; // 0x485(0x01)
	bool CustomDepthStencilValue; // 0x486(0x01)
	enum class *5081dde572 CustomDepthStencilWriteMask; // 0x487(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x488(0x10)
	int32 TranslucencySortPriority; // 0x498(0x04)
	int32 *09bfa079b0; // 0x49c(0x04)
	char pad_4A0[0x4]; // 0x4a0(0x04)
	float LpvBiasMultiplier; // 0x4a4(0x04)
	char pad_4A8[0x8]; // 0x4a8(0x08)
	struct FBodyInstance BodyInstance; // 0x4b0(0x230)
	char pad_6E0[0x8]; // 0x6e0(0x08)
	enum class EHasCustomNavigableGeometry *78051e740d; // 0x6e8(0x01)
	char pad_6E9[0x3b]; // 0x6e9(0x3b)
	float BoundsScale; // 0x724(0x04)
	float *af2466df12; // 0x728(0x04)
	float *582a6a05b9; // 0x72c(0x04)
	float *8aa40722fd; // 0x730(0x04)
	enum class *4c9c4152b1 CanBeCharacterBase; // 0x734(0x01)
	char pad_735[0x1]; // 0x735(0x01)
	enum class *4c9c4152b1 CanCharacterStepUpOn; // 0x736(0x01)
	char pad_737[0x1]; // 0x737(0x01)
	struct TArray<struct AActor*> *3263ebc401; // 0x738(0x10)
	struct TArray<struct UPrimitiveComponent*> *a555ecd237; // 0x748(0x10)
	char pad_758[0xb8]; // 0x758(0xb8)
	struct FMulticastDelegate OnComponentHit; // 0x810(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x820(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x830(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x840(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x850(0x10)
	char pad_860[0x10]; // 0x860(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x870(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x880(0x10)
	struct FMulticastDelegate OnClicked; // 0x890(0x10)
	struct FMulticastDelegate OnReleased; // 0x8a0(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x8b0(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x8c0(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x8d0(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x8e0(0x10)
	char pad_8F0[0x28]; // 0x8f0(0x28)
	struct UPrimitiveComponent* *17bfbe7021; // 0x918(0x08)
	struct UPrimitiveComponent* *b257202527; // 0x920(0x08)
	struct F*71789ef7cf *9449fd3492; // 0x928(0x58)
	char pad_980[0x10]; // 0x980(0x10)

	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // Native|Public|BlueprintCallable // @ game+0x6504948
	void *7b97c590ca(float MassInKg); // Function Engine.PrimitiveComponent.*7b97c590ca // Native|Public|BlueprintCallable // @ game+0x6506b90
	void CreateAndSetMaterialInstanceDynamic(int32 ElementIndex); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // Native|Public|BlueprintCallable // @ game+0x64eda54
	struct AActor* *a3ced43a9e(); // Function Engine.PrimitiveComponent.*a3ced43a9e // Final|Native|Public|BlueprintCallable // @ game+0x64f70ac
	struct FVector *01e27a1a47(struct FName BoneName); // Function Engine.PrimitiveComponent.*01e27a1a47 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64ffbec
	void SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65045d8
	int32 SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // Native|Public|BlueprintCallable // @ game+0xc13cdc
	void *d16743e48e(); // Function Engine.PrimitiveComponent.*d16743e48e // Native|Public|BlueprintCallable // @ game+0x6504fe4
	void *9f38f9fbc2(); // Function Engine.PrimitiveComponent.*9f38f9fbc2 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5428
	void *7693ea05a0(struct FName BoneName); // Function Engine.PrimitiveComponent.*7693ea05a0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64f5e58
	void *2a6b53140c(); // Function Engine.PrimitiveComponent.*2a6b53140c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x572bdf4
	void *fc59628470(); // Function Engine.PrimitiveComponent.*fc59628470 // Final|Native|Public|BlueprintCallable // @ game+0x6507e58
	void *632fed46bc(); // Function Engine.PrimitiveComponent.*632fed46bc // Native|Public|BlueprintCallable // @ game+0x6506cbc
	void *2faa0a8d88(struct UPrimitiveComponent* OtherComp); // Function Engine.PrimitiveComponent.*2faa0a8d88 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7d78
	struct APawn* *82d09edad4(); // Function Engine.PrimitiveComponent.*82d09edad4 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64e9f64
	void *1d887895df(); // Function Engine.PrimitiveComponent.*1d887895df // Native|Public|BlueprintCallable // @ game+0x650727c
	void SetMassScale(struct FName BoneName); // Function Engine.PrimitiveComponent.SetMassScale // Native|Public|BlueprintCallable // @ game+0x57febb8
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // Native|Public|BlueprintCallable // @ game+0x6506884
	struct FVector *3569fb64cc(); // Function Engine.PrimitiveComponent.*3569fb64cc // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6502dfc
	struct FName *2a28a4db69(); // Function Engine.PrimitiveComponent.*2a28a4db69 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64f1e4c
	void *30247e1b2f(); // Function Engine.PrimitiveComponent.*30247e1b2f // Native|Public|BlueprintCallable // @ game+0x6508c14
	int32 *3172cb3554(); // Function Engine.PrimitiveComponent.*3172cb3554 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4bc8
	void *e4d650bcfd(); // Function Engine.PrimitiveComponent.*e4d650bcfd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64fb104
	void *dcaed91866(); // Function Engine.PrimitiveComponent.*dcaed91866 // Final|Native|Public|BlueprintCallable // @ game+0x64ea5b4
	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // Native|Public|BlueprintCallable // @ game+0x650308c
	struct FName *f7e8b000d4(struct FVector Point); // Function Engine.PrimitiveComponent.*f7e8b000d4 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f214c
	void *ca937dc5a0(); // Function Engine.PrimitiveComponent.*ca937dc5a0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6fc8
	void *d9842fd919(); // Function Engine.PrimitiveComponent.*d9842fd919 // Final|Native|Public|BlueprintCallable // @ game+0x65044ac
	void AddAngularImpulse(struct FName BoneName); // Function Engine.PrimitiveComponent.AddAngularImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e79a4
	enum class *92e9a571fb *e3829bf1a9(); // Function Engine.PrimitiveComponent.*e3829bf1a9 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e932c
	void GetPhysicsLinearVelocity(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xbba8f0
	void *deff003dba(); // Function Engine.PrimitiveComponent.*deff003dba // Final|Native|Public|BlueprintCallable // @ game+0x64f22f8
	bool SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // Final|Native|Public|BlueprintCallable // @ game+0x6507650
	void *a413ad5332(); // Function Engine.PrimitiveComponent.*a413ad5332 // Native|Public|BlueprintCallable // @ game+0x6502ff4
	void *1f762b8275(); // Function Engine.PrimitiveComponent.*1f762b8275 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6509404
	void CreateDynamicMaterialInstance(struct UMaterialInterface* SourceMaterial); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x64edbe8
	void *d0b4bb5c03(); // Function Engine.PrimitiveComponent.*d0b4bb5c03 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64fb130
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5704
	void AddImpulse(struct FName BoneName); // Function Engine.PrimitiveComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e8918
	enum class *92e9a571fb *92fc76ae27(); // Function Engine.PrimitiveComponent.*92fc76ae27 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e9158
	void *9b10ee1e80(struct UPrimitiveComponent* Component); // Function Engine.PrimitiveComponent.*9b10ee1e80 // Final|Native|Public|BlueprintCallable // @ game+0x64f718c
	void *a7aa88bafe(); // Function Engine.PrimitiveComponent.*a7aa88bafe // Final|Native|Public|BlueprintCallable // @ game+0x6508970
	void *24021479fd(); // Function Engine.PrimitiveComponent.*24021479fd // Final|Native|Public|BlueprintCallable // @ game+0x64ea5d0
	void *b954d8828a(); // Function Engine.PrimitiveComponent.*b954d8828a // Final|Native|Public|BlueprintCallable // @ game+0x64ed9cc
	enum class ECollisionChannel *79e487c6f9(); // Function Engine.PrimitiveComponent.*79e487c6f9 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2330
	void *78fdfb4d17(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.*78fdfb4d17 // Native|Public|BlueprintCallable // @ game+0x6504b0c
	struct FVector AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e83b8
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f58fc
	void AddImpulseAtLocation(struct FVector Impulse); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e8a58
	struct UMaterialInterface* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // Native|Public|BlueprintCallable // @ game+0x64edaf8
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4adc
	void *5ffb7dcccd(); // Function Engine.PrimitiveComponent.*5ffb7dcccd // Native|Public|BlueprintCallable // @ game+0x6506920
	void *40a5d1cffa(); // Function Engine.PrimitiveComponent.*40a5d1cffa // Native|Public|BlueprintCallable // @ game+0x6505550
	void *bbb624a79d(); // Function Engine.PrimitiveComponent.*bbb624a79d // Final|Native|Public|BlueprintCallable // @ game+0x6507eec
	void *66aea35f5e(); // Function Engine.PrimitiveComponent.*66aea35f5e // Final|Native|Public|BlueprintCallable // @ game+0x6507314
	void *d282999091(); // Function Engine.PrimitiveComponent.*d282999091 // Final|Native|Public|BlueprintCallable // @ game+0x6507464
	void *039800f1f5(int32 FaceIndex); // Function Engine.PrimitiveComponent.*039800f1f5 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4c6c
	void SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6502ef4
	void *cce6c67132(); // Function Engine.PrimitiveComponent.*cce6c67132 // Native|Public|BlueprintCallable // @ game+0xbb3a6c
	void *e6b23a751f(); // Function Engine.PrimitiveComponent.*e6b23a751f // Native|Public|BlueprintCallable // @ game+0x650a95c
	void *332f931425(); // Function Engine.PrimitiveComponent.*332f931425 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64fb160
	void *f823da27dc(); // Function Engine.PrimitiveComponent.*f823da27dc // Final|Native|Public|BlueprintCallable // @ game+0x6504254
	struct FVector AddForceAtLocationLocal(); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e8504
	struct AActor* *e67787df0d(); // Function Engine.PrimitiveComponent.*e67787df0d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7cd8
	void *b03bf8da06(); // Function Engine.PrimitiveComponent.*b03bf8da06 // Final|Native|Public|BlueprintCallable // @ game+0x65052a4
	void *36485e4886(); // Function Engine.PrimitiveComponent.*36485e4886 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f22d0
	void *f0b5efc4d8(); // Function Engine.PrimitiveComponent.*f0b5efc4d8 // Native|Public|BlueprintCallable // @ game+0x6504a74
	struct FVector SetPhysicsAngularVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x90c774
	struct FHitResult K2_LineTraceComponent(struct FVector TraceStart, bool bTraceComplex); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fb194
	void GetPhysicsAngularVelocity(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64f5da8
	void AddForce(struct FVector force); // Function Engine.PrimitiveComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e8278
	void *fd716d5e78(); // Function Engine.PrimitiveComponent.*fd716d5e78 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f555c
	void *036f31ad96(); // Function Engine.PrimitiveComponent.*036f31ad96 // Native|Public|BlueprintCallable // @ game+0x64fdd50
	void *2faca86bd3(); // Function Engine.PrimitiveComponent.*2faca86bd3 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7918
	void *02681a1ced(); // Function Engine.PrimitiveComponent.*02681a1ced // Final|Native|Public|BlueprintCallable // @ game+0x650517c
	void *2887752cc3(); // Function Engine.PrimitiveComponent.*2887752cc3 // Final|Native|Public|BlueprintCallable // @ game+0x64ff16c
	void *16e97b9149(); // Function Engine.PrimitiveComponent.*16e97b9149 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f49a8
	void *164ed6c2a4(struct FName BoneName); // Function Engine.PrimitiveComponent.*164ed6c2a4 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f3b34
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // Final|Native|Public|BlueprintCallable // @ game+0x64ed944
	void *75e72496bd(); // Function Engine.PrimitiveComponent.*75e72496bd // Native|Public|BlueprintCallable // @ game+0x65075bc
	void *dfc676b7a3(); // Function Engine.PrimitiveComponent.*dfc676b7a3 // Final|Native|Public|BlueprintCallable // @ game+0x6507f80
	void *dab6d024ed(); // Function Engine.PrimitiveComponent.*dab6d024ed // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f22a8
	void AddTorque(struct FName BoneName); // Function Engine.PrimitiveComponent.AddTorque // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e97ec
	void *b5162d1d9b(); // Function Engine.PrimitiveComponent.*b5162d1d9b // Native|Public|BlueprintCallable // @ game+0xc59230
	void *69a6b1b25d(); // Function Engine.PrimitiveComponent.*69a6b1b25d // Native|Public|BlueprintCallable // @ game+0x64f748c
	struct FName *bbbb9b1909(); // Function Engine.PrimitiveComponent.*bbbb9b1909 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4b08
	void SetPhysicsLinearVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x90c68c
	void *5929e5407b(); // Function Engine.PrimitiveComponent.*5929e5407b // Final|Native|Public|BlueprintCallable // @ game+0x6505214
	void *c1ae168066(); // Function Engine.PrimitiveComponent.*c1ae168066 // Native|Public|BlueprintCallable // @ game+0x65049e0
	void *9d0af71f5d(); // Function Engine.PrimitiveComponent.*9d0af71f5d // Native|Public|BlueprintCallable // @ game+0x80e11c
};

// Class Engine.MeshComponent
// Size: 0xa90 (Inherited: 0x990)
struct UMeshComponent : UPrimitiveComponent {
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x988(0x10)
	char pad_9A0[0xf0]; // 0x9a0(0xf0)

	struct FName *52fc39a231(); // Function Engine.MeshComponent.*52fc39a231 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4d10
	void *eb1d5a0c74(); // Function Engine.MeshComponent.*eb1d5a0c74 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4e44
	struct FName *a07df3b67c(); // Function Engine.MeshComponent.*a07df3b67c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7af0
	struct FName *b7c03fab71(); // Function Engine.MeshComponent.*b7c03fab71 // Final|Native|Public|BlueprintCallable // @ game+0x9917f8
	void *4128bad4a1(); // Function Engine.MeshComponent.*4128bad4a1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6508f84
	void *bd0d269c5b(); // Function Engine.MeshComponent.*bd0d269c5b // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4db8
};

// Class Engine.StaticMeshComponent
// Size: 0xb30 (Inherited: 0xa90)
struct UStaticMeshComponent : UMeshComponent {
	int32 ForcedLodModel; // 0xa90(0x04)
	int32 *198fecb621; // 0xa94(0x04)
	bool bOverrideMinLOD; // 0xa98(0x01)
	char pad_A99[0x3]; // 0xa99(0x03)
	int32 MinLOD; // 0xa9c(0x04)
	struct UStaticMesh* StaticMesh; // 0xaa0(0x08)
	bool bOverrideWireframeColor; // 0xaa8(0x01)
	char pad_AA9[0x3]; // 0xaa9(0x03)
	struct FColor WireframeColorOverride; // 0xaac(0x04)
	struct FLinearColor PerInstanceCustomData; // 0xab0(0x10)
	char *7f859870b0 : 1; // 0xac0(0x01)
	char *4d9ef1a96b : 1; // 0xac0(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0xac0(0x01)
	char *c4be459603 : 1; // 0xac0(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0xac0(0x01)
	char bOverrideLightMapRes : 1; // 0xac0(0x01)
	char pad_AC0_6 : 2; // 0xac0(0x01)
	char pad_AC1[0x3]; // 0xac1(0x03)
	int32 OverriddenLightMapRes; // 0xac4(0x04)
	char bCastDistanceFieldIndirectShadow : 1; // 0xac8(0x01)
	char pad_AC8_1 : 7; // 0xac8(0x01)
	char pad_AC9[0x3]; // 0xac9(0x03)
	float DistanceFieldIndirectShadowMinVisibility; // 0xacc(0x04)
	float StreamingDistanceMultiplier; // 0xad0(0x04)
	int32 *d6ee954a0d; // 0xad4(0x04)
	char *3331e715ef : 1; // 0xad8(0x01)
	char pad_AD8_1 : 7; // 0xad8(0x01)
	char pad_AD9[0x7]; // 0xad9(0x07)
	struct TArray<struct FGuid> IrrelevantLights; // 0xae0(0x10)
	struct TArray<struct F*fec1278a78> *db24bbedf0; // 0xaf0(0x10)
	struct TArray<struct F*b5b893870e> *e396a7ceab; // 0xb00(0x10)
	bool *6fa59b2292; // 0xb10(0x01)
	char pad_B11[0x3]; // 0xb11(0x03)
	struct F*886b75ca22 LightmassSettings; // 0xb14(0x18)
	char pad_B2C[0x4]; // 0xb2c(0x04)

	void *e499d85100(); // Function Engine.StaticMeshComponent.*e499d85100 // Final|Native|Public|BlueprintCallable // @ game+0x6505910
	void SetStaticMesh(struct UStaticMesh* NewMesh); // Function Engine.StaticMeshComponent.SetStaticMesh // Native|Public|BlueprintCallable // @ game+0x5fad788
	void *231c06526a(); // Function Engine.StaticMeshComponent.*231c06526a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f49d4
	void OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // Final|Native|Public // @ game+0x64fdffc
};

// Class Engine.SkinnedMeshComponent
// Size: 0xc30 (Inherited: 0xa90)
struct USkinnedMeshComponent : UMeshComponent {
	struct USkeletalMesh* SkeletalMesh; // 0xa90(0x08)
	struct USkinnedMeshComponent* MasterPoseComponent; // 0xa98(0x08)
	char pad_AA0[0x60]; // 0xaa0(0x60)
	char bUseBoundsFromMasterPoseComponent : 1; // 0xb00(0x01)
	char pad_B00_1 : 7; // 0xb00(0x01)
	char pad_B01[0x7]; // 0xb01(0x07)
	struct TArray<struct FBoxSphereBounds> *a849bc8171; // 0xb08(0x10)
	char pad_B18[0x20]; // 0xb18(0x20)
	struct UPhysicsAsset* PhysicsAssetOverride; // 0xb38(0x08)
	int32 ForcedLodModel; // 0xb40(0x04)
	int32 MinLodModel; // 0xb44(0x04)
	char pad_B48[0x10]; // 0xb48(0x10)
	struct TArray<struct F*6785417a7c> LODInfo; // 0xb58(0x10)
	float StreamingDistanceMultiplier; // 0xb68(0x04)
	struct FColor WireframeColor; // 0xb6c(0x04)
	char *428602d4f6 : 1; // 0xb70(0x01)
	char *0ef0300f94 : 1; // 0xb70(0x01)
	char bDisableMorphTarget : 1; // 0xb70(0x01)
	char *39de54be4e : 1; // 0xb70(0x01)
	char pad_B70_4 : 4; // 0xb70(0x01)
	char pad_B71[0x17]; // 0xb71(0x17)
	char bPerBoneMotionBlur : 1; // 0xb88(0x01)
	char bComponentUseFixedSkelBounds : 1; // 0xb88(0x01)
	char bConsiderAllBodiesForBounds : 1; // 0xb88(0x01)
	char bSyncAttachParentLOD : 1; // 0xb88(0x01)
	char pad_B88_4 : 4; // 0xb88(0x01)
	char pad_B89[0x3]; // 0xb89(0x03)
	enum class EMeshComponentUpdateFlag MeshComponentUpdateFlag; // 0xb8c(0x01)
	char pad_B8D[0x3]; // 0xb8d(0x03)
	char *56b03ddea8 : 1; // 0xb90(0x01)
	char *6caa3c3fe1 : 1; // 0xb90(0x01)
	char *ab97d111d5 : 1; // 0xb90(0x01)
	char pad_B90_3 : 5; // 0xb90(0x01)
	char pad_B91[0x3]; // 0xb91(0x03)
	bool *cee1355191; // 0xb94(0x01)
	char pad_B95[0x3]; // 0xb95(0x03)
	char bCastCapsuleDirectShadow : 1; // 0xb98(0x01)
	char bCastCapsuleIndirectShadow : 1; // 0xb98(0x01)
	char pad_B98_2 : 6; // 0xb98(0x01)
	char pad_B99[0x3]; // 0xb99(0x03)
	char bRenderStatic : 1; // 0xb9c(0x01)
	char pad_B9C_1 : 7; // 0xb9c(0x01)
	char pad_B9D[0x3]; // 0xb9d(0x03)
	float CapsuleIndirectShadowMinVisibility; // 0xba0(0x04)
	char *15a4761d5b : 1; // 0xba4(0x01)
	char pad_BA4_1 : 7; // 0xba4(0x01)
	char pad_BA5[0xf]; // 0xba5(0x0f)
	struct FBoxSphereBounds *d470b2b7d1; // 0xbb4(0x1c)
	bool *4cd34b6758; // 0xbd0(0x01)
	bool bEnableUpdateRateOptimizations; // 0xbd1(0x01)
	bool bDisplayDebugUpdateRateOptimizations; // 0xbd2(0x01)
	char pad_BD3[0x4e]; // 0xbd3(0x4e)
	bool *e9990aed04; // 0xc21(0x01)
	bool *05a0730e26; // 0xc22(0x01)
	char pad_C23[0xd]; // 0xc23(0x0d)

	void *ec248b25a0(); // Function Engine.SkinnedMeshComponent.*ec248b25a0 // Final|Native|Public|BlueprintCallable // @ game+0x654e0e8
	void *c4f0ee9e4c(int32 BoneIndex); // Function Engine.SkinnedMeshComponent.*c4f0ee9e4c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652851c
	void *9c5d0b6944(); // Function Engine.SkinnedMeshComponent.*9c5d0b6944 // Final|Native|Public|BlueprintCallable // @ game+0x654e198
	int32 *604742927d(); // Function Engine.SkinnedMeshComponent.*604742927d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6559d70
	void *61a9693b85(); // Function Engine.SkinnedMeshComponent.*61a9693b85 // Final|Native|Public|BlueprintCallable // @ game+0x6554588
	void *69ce5b8b8d(); // Function Engine.SkinnedMeshComponent.*69ce5b8b8d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652de34
	void GetBoneIndex(); // Function Engine.SkinnedMeshComponent.GetBoneIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6528260
	struct FName *ef1192b277(); // Function Engine.SkinnedMeshComponent.*ef1192b277 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65151cc
	void *0e7e6cd84f(); // Function Engine.SkinnedMeshComponent.*0e7e6cd84f // Final|Native|Public|BlueprintCallable // @ game+0x6551994
	void *8bf10f391d(); // Function Engine.SkinnedMeshComponent.*8bf10f391d // Native|Public|BlueprintCallable // @ game+0x655554c
	void *559e974ba0(); // Function Engine.SkinnedMeshComponent.*559e974ba0 // Final|Native|Public|BlueprintCallable // @ game+0x655647c
	struct FVector *518eb77a8b(); // Function Engine.SkinnedMeshComponent.*518eb77a8b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6562e74
	void *cfacb7d388(); // Function Engine.SkinnedMeshComponent.*cfacb7d388 // Final|Native|Public|BlueprintCallable // @ game+0x654dc44
	void *d2f08d65bc(); // Function Engine.SkinnedMeshComponent.*d2f08d65bc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652da70
	void *be13762590(); // Function Engine.SkinnedMeshComponent.*be13762590 // Final|Native|Public|BlueprintCallable // @ game+0x651c73c
	struct FRotator *af2312fcf3(struct FVector OutPosition); // Function Engine.SkinnedMeshComponent.*af2312fcf3 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6563248
	void SetSkeletalMesh(struct USkeletalMesh* NewMesh); // Function Engine.SkinnedMeshComponent.SetSkeletalMesh // Native|Public|BlueprintCallable // @ game+0x6556a7c
	void *d9b06c421e(); // Function Engine.SkinnedMeshComponent.*d9b06c421e // Final|Native|Public|BlueprintCallable // @ game+0x6563480
	void *bf7d10d1b2(); // Function Engine.SkinnedMeshComponent.*bf7d10d1b2 // Final|Native|Public|BlueprintCallable // @ game+0x65546b8
	void *5a0c0a8877(struct FVector TestLocation, float IgnoreScale); // Function Engine.SkinnedMeshComponent.*5a0c0a8877 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6524df8
	void *a7992bfca2(); // Function Engine.SkinnedMeshComponent.*a7992bfca2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653055c
	int32 SetSkinWeightOverride(); // Function Engine.SkinnedMeshComponent.SetSkinWeightOverride // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6556bf0
	void *d2ec714e3f(); // Function Engine.SkinnedMeshComponent.*d2ec714e3f // Final|Native|Public|BlueprintCallable // @ game+0x6536134
	void *03bce2e129(); // Function Engine.SkinnedMeshComponent.*03bce2e129 // Final|Native|Public|BlueprintCallable // @ game+0x651c3d8
	struct FName *14d803ab8f(); // Function Engine.SkinnedMeshComponent.*14d803ab8f // Final|Native|Public|BlueprintCallable // @ game+0x6534c70
};

// Class Engine.SkeletalMeshComponent
// Size: 0x1130 (Inherited: 0xc30)
struct USkeletalMeshComponent : USkinnedMeshComponent {
	struct UAnimBlueprintGeneratedClass* AnimBlueprintGeneratedClass; // 0xc30(0x08)
	struct UClass* AnimClass; // 0xc38(0x08)
	struct UAnimInstance* AnimScriptInstance; // 0xc40(0x08)
	struct TArray<struct UAnimInstance*> *c85816968d; // 0xc48(0x10)
	struct UAnimInstance* *d41233ff0c; // 0xc58(0x08)
	struct F*6592b79d68 AnimationData; // 0xc60(0x18)
	char pad_C78[0x30]; // 0xc78(0x30)
	struct TArray<struct FTransform> *c4b76afb18; // 0xca8(0x10)
	struct TArray<struct FTransform> *2e37c7a139; // 0xcb8(0x10)
	char pad_CC8[0x20]; // 0xcc8(0x20)
	float GlobalAnimRateScale; // 0xce8(0x04)
	enum class EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0xcec(0x01)
	enum class *3c8dc5cc54 PhysicsTransformUpdateMode; // 0xced(0x01)
	char pad_CEE[0x1]; // 0xcee(0x01)
	enum class EAnimationMode AnimationMode; // 0xcef(0x01)
	char pad_CF0[0x4]; // 0xcf0(0x04)
	char pad_CF4_0 : 1; // 0xcf4(0x01)
	char *0765881b66 : 1; // 0xcf4(0x01)
	char pad_CF4_2 : 1; // 0xcf4(0x01)
	char *c88cf8b3b6 : 1; // 0xcf4(0x01)
	char pad_CF4_4 : 2; // 0xcf4(0x01)
	char bEnablePhysicsOnDedicatedServer : 1; // 0xcf4(0x01)
	char bUpdateJointsFromAnimation : 1; // 0xcf4(0x01)
	char bDisableClothSimulation : 1; // 0xcf5(0x01)
	char pad_CF5_1 : 2; // 0xcf5(0x01)
	char bCollideWithEnvironment : 1; // 0xcf5(0x01)
	char bCollideWithAttachedChildren : 1; // 0xcf5(0x01)
	char bLocalSpaceSimulation : 1; // 0xcf5(0x01)
	char *186c36d696 : 1; // 0xcf5(0x01)
	char bResetAfterTeleport : 1; // 0xcf5(0x01)
	char pad_CF6_0 : 1; // 0xcf6(0x01)
	char bNoSkeletonUpdate : 1; // 0xcf6(0x01)
	char bPauseAnims : 1; // 0xcf6(0x01)
	char *e321c6819c : 1; // 0xcf6(0x01)
	char bEnablePerPolyCollision : 1; // 0xcf6(0x01)
	char *b39284674e : 1; // 0xcf6(0x01)
	char *d4f8e0be1a : 1; // 0xcf6(0x01)
	char *4a2d21f86d : 1; // 0xcf6(0x01)
	char *e46c1d1db1 : 1; // 0xcf7(0x01)
	char *d42c156e9b : 1; // 0xcf7(0x01)
	char *cccca4cafe : 1; // 0xcf7(0x01)
	char *1fecf92850 : 1; // 0xcf7(0x01)
	char bIncludeComponentLocationIntoBounds : 1; // 0xcf7(0x01)
	char *c012ed566e : 1; // 0xcf7(0x01)
	char pad_CF7_6 : 2; // 0xcf7(0x01)
	char *bd8057b0dc : 1; // 0xcf8(0x01)
	char pad_CF8_1 : 7; // 0xcf8(0x01)
	char pad_CF9_0 : 2; // 0xcf9(0x01)
	char bDefaultLooping : 1; // 0xcf9(0x01)
	char bDefaultPlaying : 1; // 0xcf9(0x01)
	char pad_CF9_4 : 4; // 0xcf9(0x01)
	uint16 *e8a7b9de66; // 0xcfa(0x02)
	float ClothBlendWeight; // 0xcfc(0x04)
	struct FVector *dfd815ea46; // 0xd00(0x0c)
	char pad_D0C[0x4]; // 0xd0c(0x04)
	struct UBodySetup* BodySetup; // 0xd10(0x08)
	float TeleportDistanceThreshold; // 0xd18(0x04)
	float TeleportRotationThreshold; // 0xd1c(0x04)
	struct FVector *c599877e19; // 0xd20(0x0c)
	char pad_D2C[0x4]; // 0xd2c(0x04)
	struct FMulticastDelegate OnConstraintBroken; // 0xd30(0x10)
	char pad_D40[0xe0]; // 0xd40(0xe0)
	struct UClass* *41d1d8804c; // 0xe20(0x08)
	char pad_E28[0x1e8]; // 0xe28(0x1e8)
	struct UAnimSequence* SequenceToPlay; // 0x1010(0x08)
	struct UAnimationAsset* AnimToPlay; // 0x1018(0x08)
	float DefaultPosition; // 0x1020(0x04)
	float DefaultPlayRate; // 0x1024(0x04)
	uint32 *e648f1c23a; // 0x1028(0x04)
	float *a1f019615b; // 0x102c(0x04)
	char pad_1030[0x100]; // 0x1030(0x100)

	void *9e55cd1127(); // Function Engine.SkeletalMeshComponent.*9e55cd1127 // Final|Native|Public|BlueprintCallable // @ game+0x6555630
	void *c95e2eb189(); // Function Engine.SkeletalMeshComponent.*c95e2eb189 // Final|Native|Public|BlueprintCallable // @ game+0x6528b94
	void *32a72275c6(); // Function Engine.SkeletalMeshComponent.*32a72275c6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6527b04
	void *578f9a271e(); // Function Engine.SkeletalMeshComponent.*578f9a271e // Final|Native|Public|BlueprintCallable // @ game+0x65506e0
	void *88160de687(); // Function Engine.SkeletalMeshComponent.*88160de687 // Final|Native|Public|BlueprintCallable // @ game+0x65491d8
	void *7c7a4f8d4b(); // Function Engine.SkeletalMeshComponent.*7c7a4f8d4b // Final|Native|Public|BlueprintCallable // @ game+0x654927c
	void *82f85b462f(struct FName BoneName); // Function Engine.SkeletalMeshComponent.*82f85b462f // Native|Public|HasDefaults|BlueprintCallable // @ game+0x650f0f4
	float *7a2fd6088c(); // Function Engine.SkeletalMeshComponent.*7a2fd6088c // Final|Native|Public|BlueprintCallable // @ game+0x6543900
	int32 *d836f3cdcc(); // Function Engine.SkeletalMeshComponent.*d836f3cdcc // Final|Native|Public|BlueprintCallable // @ game+0x6525400
	void *88b6545993(); // Function Engine.SkeletalMeshComponent.*88b6545993 // Final|Native|Public|BlueprintCallable // @ game+0x654e7b4
	float *a16076bca9(); // Function Engine.SkeletalMeshComponent.*a16076bca9 // Final|Native|Public|BlueprintCallable // @ game+0x654b55c
	struct FName *37c1df285c(); // Function Engine.SkeletalMeshComponent.*37c1df285c // Final|Native|Public|BlueprintCallable // @ game+0x6536084
	void *7a87ebfeb9(bool bEnableGravity); // Function Engine.SkeletalMeshComponent.*7a87ebfeb9 // Final|Native|Public|BlueprintCallable // @ game+0x655041c
	void PlayAnimation(); // Function Engine.SkeletalMeshComponent.PlayAnimation // Final|Native|Public|BlueprintCallable // @ game+0x654442c
	void GetPosition(); // Function Engine.SkeletalMeshComponent.GetPosition // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652e7e8
	void SetAnimation(); // Function Engine.SkeletalMeshComponent.SetAnimation // Final|Native|Public|BlueprintCallable // @ game+0x98dcf0
	void *3f2c53189b(float AddPhysicsBlendWeight); // Function Engine.SkeletalMeshComponent.*3f2c53189b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x650e970
	bool *908191f82a(); // Function Engine.SkeletalMeshComponent.*908191f82a // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x654abe4
	void IsPlaying(); // Function Engine.SkeletalMeshComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653676c
	void SetAnimInstanceClass(); // Function Engine.SkeletalMeshComponent.SetAnimInstanceClass // Final|Native|Public|BlueprintCallable // @ game+0x654bfbc
	void *c3c91f087e(bool bEnableSwingDrive); // Function Engine.SkeletalMeshComponent.*c3c91f087e // Final|Native|Public|BlueprintCallable // @ game+0x654b0e0
	void *2863de562e(); // Function Engine.SkeletalMeshComponent.*2863de562e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6530528
	struct FName *42a4fc1ad0(float Swing1Angle); // Function Engine.SkeletalMeshComponent.*42a4fc1ad0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x652900c
	void GetPlayRate(); // Function Engine.SkeletalMeshComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652e090
	void SetPlayRate(); // Function Engine.SkeletalMeshComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0xb78790
	void *39e1d97951(); // Function Engine.SkeletalMeshComponent.*39e1d97951 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x655c848
	void *74ff591f58(); // Function Engine.SkeletalMeshComponent.*74ff591f58 // Final|Native|Public|BlueprintCallable // @ game+0x6513f18
	void *2fd908ba89(float Value); // Function Engine.SkeletalMeshComponent.*2fd908ba89 // Final|Native|Public|BlueprintCallable // @ game+0x6554984
	void *7bb96a0e6d(); // Function Engine.SkeletalMeshComponent.*7bb96a0e6d // Final|Native|Public|BlueprintCallable // @ game+0x6549550
	bool *e2235034c0(); // Function Engine.SkeletalMeshComponent.*e2235034c0 // Final|Native|Public|BlueprintCallable // @ game+0x654af9c
	void *ce530fa306(struct FVector WorldPosition, struct FVector Normal, float Distance); // Function Engine.SkeletalMeshComponent.*ce530fa306 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6537268
	float SetPosition(); // Function Engine.SkeletalMeshComponent.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x6555c18
	void *e93856bf3e(); // Function Engine.SkeletalMeshComponent.*e93856bf3e // Final|Native|Public|BlueprintCallable // @ game+0x65621bc
	void Play(); // Function Engine.SkeletalMeshComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x98dd64
	void *1a786e57d5(); // Function Engine.SkeletalMeshComponent.*1a786e57d5 // Final|Native|Public|BlueprintCallable // @ game+0x654ad88
	void *71d3f55db1(); // Function Engine.SkeletalMeshComponent.*71d3f55db1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x578c0f0
	void *04bd387e61(); // Function Engine.SkeletalMeshComponent.*04bd387e61 // Final|Native|Public|BlueprintCallable // @ game+0x6536200
	struct FName *ee48004024(); // Function Engine.SkeletalMeshComponent.*ee48004024 // Final|Native|Public|BlueprintCallable // @ game+0x654ecb0
	void *baef9ab32e(); // Function Engine.SkeletalMeshComponent.*baef9ab32e // Final|Native|Public|BlueprintCallable // @ game+0x65267d0
	void *10273169ee(); // Function Engine.SkeletalMeshComponent.*10273169ee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc6f870
	void *8afc579124(); // Function Engine.SkeletalMeshComponent.*8afc579124 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6534b28
	void *8cc93862cf(); // Function Engine.SkeletalMeshComponent.*8cc93862cf // Final|Native|Public|BlueprintCallable // @ game+0x57879bc
	struct FVector *0d7fe52d3f(struct FName BoneName); // Function Engine.SkeletalMeshComponent.*0d7fe52d3f // Native|Public|HasDefaults|BlueprintCallable // @ game+0x650f288
	void *18e31ec1ba(); // Function Engine.SkeletalMeshComponent.*18e31ec1ba // Final|Native|Public|BlueprintCallable // @ game+0x98ef10
	struct FVector *946b36923d(); // Function Engine.SkeletalMeshComponent.*946b36923d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6517ee8
	struct FName *b3d8eb2cbb(bool bScaleMass); // Function Engine.SkeletalMeshComponent.*b3d8eb2cbb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6528430
	void *a847fc7087(float PhysicsBlendWeight); // Function Engine.SkeletalMeshComponent.*a847fc7087 // Final|Native|Public|BlueprintCallable // @ game+0x80dc14
	struct FName *3e6b6b7c05(); // Function Engine.SkeletalMeshComponent.*3e6b6b7c05 // Native|Public|BlueprintCallable // @ game+0x6554d70
	void *a6e5e1b394(); // Function Engine.SkeletalMeshComponent.*a6e5e1b394 // Final|Native|Public|BlueprintCallable // @ game+0x6563510
	void Stop(); // Function Engine.SkeletalMeshComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x98efc4
	void *4adf88a322(float InSpring, float InForceLimit); // Function Engine.SkeletalMeshComponent.*4adf88a322 // Final|Native|Public|BlueprintCallable // @ game+0x654ae1c
	bool *9323118453(); // Function Engine.SkeletalMeshComponent.*9323118453 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x80da90
	void *7f10900457(); // Function Engine.SkeletalMeshComponent.*7f10900457 // Final|Native|Public|BlueprintCallable // @ game+0x651c328
	void *1c036a91e9(); // Function Engine.SkeletalMeshComponent.*1c036a91e9 // Final|Native|Public|BlueprintCallable // @ game+0x6550330
	struct FName *6d7e22c6e6(); // Function Engine.SkeletalMeshComponent.*6d7e22c6e6 // Final|Native|Public|BlueprintCallable // @ game+0x654eb80
	void *2c38e2c65f(); // Function Engine.SkeletalMeshComponent.*2c38e2c65f // Final|Native|Public|BlueprintCallable // @ game+0x65267b8
	struct FName *b21911ca74(); // Function Engine.SkeletalMeshComponent.*b21911ca74 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652d974
	void *e816aee7a9(bool bNewNotifyRigidBodyCollision); // Function Engine.SkeletalMeshComponent.*e816aee7a9 // Native|Public|BlueprintCallable // @ game+0x654ccf8
};

// Class Engine.*9f23a81057
// Size: 0x30 (Inherited: 0x28)
struct U*9f23a81057 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Engine.*7563a7fc65
// Size: 0x30 (Inherited: 0x30)
struct U*7563a7fc65 : U*9f23a81057 {
};

// Class Engine.*5c0419d42f
// Size: 0x28 (Inherited: 0x28)
struct U*5c0419d42f : UObject {
};

// Class Engine.*f23bfe8a1c
// Size: 0x40 (Inherited: 0x28)
struct U*f23bfe8a1c : UObject {
	char bCausedByWorld : 1; // 0x28(0x01)
	char bScaleMomentumByMass : 1; // 0x28(0x01)
	char bRadialDamageVelChange : 1; // 0x28(0x01)
	char pad_28_3 : 5; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DamageImpulse; // 0x2c(0x04)
	float DestructibleImpulse; // 0x30(0x04)
	float DestructibleDamageSpreadScale; // 0x34(0x04)
	float DamageFalloff; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.MovementComponent
// Size: 0x240 (Inherited: 0x1f0)
struct UMovementComponent : UActorComponent {
	struct USceneComponent* UpdatedComponent; // 0x1f0(0x08)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0x1f8(0x08)
	char pad_200[0x4]; // 0x200(0x04)
	struct FVector Velocity; // 0x204(0x0c)
	char bConstrainToPlane : 1; // 0x210(0x01)
	char bSnapToPlaneAtStart : 1; // 0x210(0x01)
	char pad_210_2 : 6; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	enum class EPlaneConstraintAxisSetting *a77cbf5800; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	struct FVector PlaneConstraintNormal; // 0x218(0x0c)
	struct FVector PlaneConstraintOrigin; // 0x224(0x0c)
	char bUpdateOnlyIfRendered : 1; // 0x230(0x01)
	char bAutoUpdateTickRegistration : 1; // 0x230(0x01)
	char bTickBeforeOwner : 1; // 0x230(0x01)
	char bAutoRegisterUpdatedComponent : 1; // 0x230(0x01)
	char pad_230_4 : 4; // 0x230(0x01)
	char pad_231[0xf]; // 0x231(0x0f)

	void K2_GetMaxSpeedModifier(); // Function Engine.MovementComponent.K2_GetMaxSpeedModifier // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64faebc
	void PhysicsVolumeChanged(); // Function Engine.MovementComponent.PhysicsVolumeChanged // Native|Public // @ game+0xa004f4
	void K2_GetModifiedMaxSpeed(); // Function Engine.MovementComponent.K2_GetModifiedMaxSpeed // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64faf14
	void *e6f44122ff(); // Function Engine.MovementComponent.*e6f44122ff // Native|Public|BlueprintCallable // @ game+0x650a33c
	void ConstrainLocationToPlane(); // Function Engine.MovementComponent.ConstrainLocationToPlane // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64ed6a4
	void *b4cb0012a1(); // Function Engine.MovementComponent.*b4cb0012a1 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2f68
	void *b04193052d(); // Function Engine.MovementComponent.*b04193052d // Native|Public|BlueprintCallable // @ game+0x6507818
	void *c3de771e31(); // Function Engine.MovementComponent.*c3de771e31 // Native|Public|BlueprintCallable // @ game+0x6507784
	void *cbfd9eb4d4(); // Function Engine.MovementComponent.*cbfd9eb4d4 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64ed76c
	float *9c8f4b265c(); // Function Engine.MovementComponent.*9c8f4b265c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f781c
	void *e36ab2b188(); // Function Engine.MovementComponent.*e36ab2b188 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5f68
	void *3eb8132b76(struct FVector Delta, struct FHitResult OutHit, bool bTeleport); // Function Engine.MovementComponent.*3eb8132b76 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64fb500
	void *6fecebcb5c(); // Function Engine.MovementComponent.*6fecebcb5c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5ff4
	void *2094bf75a9(); // Function Engine.MovementComponent.*2094bf75a9 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6507a60
	void *27b6012a40(); // Function Engine.MovementComponent.*27b6012a40 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65079bc
	void *34e8851871(); // Function Engine.MovementComponent.*34e8851871 // Native|Public|BlueprintCallable // @ game+0x65099d4
	void *3f3594939d(); // Function Engine.MovementComponent.*3f3594939d // Native|Public|BlueprintCallable // @ game+0x6508b80
	void *62cc96d62b(); // Function Engine.MovementComponent.*62cc96d62b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5fcc
	void *d7d499fbfa(); // Function Engine.MovementComponent.*d7d499fbfa // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4f54
	void *a027f13766(struct FVector Forward); // Function Engine.MovementComponent.*a027f13766 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65078b0
	void *f705c7d54e(struct FVector Direction); // Function Engine.MovementComponent.*f705c7d54e // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64ed5dc
	void *e45e138b8a(); // Function Engine.MovementComponent.*e45e138b8a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5fb4
};

// Class Engine.NavMovementComponent
// Size: 0x270 (Inherited: 0x240)
struct UNavMovementComponent : UMovementComponent {
	struct F*afffc9221e NavAgentProps; // 0x238(0x20)
	float *7b65d425cd; // 0x258(0x04)
	char *d2cfd1f855 : 1; // 0x25c(0x01)
	char bUseAccelerationForPaths : 1; // 0x25c(0x01)
	char bUseFixedBrakingDistanceForPaths : 1; // 0x25c(0x01)
	struct F*656446cb71 *1a07ad26f3; // 0x260(0x04)
	char pad_268_3 : 5; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)

	void *63853a7259(); // Function Engine.NavMovementComponent.*63853a7259 // Final|Native|Public|BlueprintCallable // @ game+0x650a354
	void StopActiveMovement(); // Function Engine.NavMovementComponent.StopActiveMovement // Native|Public|BlueprintCallable // @ game+0x6509cf0
	void *e453ff855f(); // Function Engine.NavMovementComponent.*e453ff855f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f77c4
	void IsFalling(); // Function Engine.NavMovementComponent.IsFalling // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f78c8
	void *a617f7fb8d(); // Function Engine.NavMovementComponent.*a617f7fb8d // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7c10
	void *80b74fcbc2(); // Function Engine.NavMovementComponent.*80b74fcbc2 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7fe4
	void *d8d4d3d439(); // Function Engine.NavMovementComponent.*d8d4d3d439 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f78f0
};

// Class Engine.PawnMovementComponent
// Size: 0x280 (Inherited: 0x270)
struct UPawnMovementComponent : UNavMovementComponent {
	struct APawn* *4e1d878be7; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)

	void *1c570a1aae(); // Function Engine.PawnMovementComponent.*1c570a1aae // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5d04
	struct FVector *96aa53ac22(); // Function Engine.PawnMovementComponent.*96aa53ac22 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e8ba4
	void *9cb1bf1b1b(); // Function Engine.PawnMovementComponent.*9cb1bf1b1b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f48c8
	void *533feeba94(); // Function Engine.PawnMovementComponent.*533feeba94 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64ed834
	void *05c9ee399f(); // Function Engine.PawnMovementComponent.*05c9ee399f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7be8
	void *4fe8686d15(); // Function Engine.PawnMovementComponent.*4fe8686d15 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5cec
	void K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64fae88
};

// Class Engine.CharacterMovementComponent
// Size: 0x920 (Inherited: 0x280)
struct UCharacterMovementComponent : UPawnMovementComponent {
	char pad_280[0x8]; // 0x280(0x08)
	struct ACharacter* *850fe79414; // 0x288(0x08)
	char bApplyGravityWhileJumping : 1; // 0x290(0x01)
	char pad_290_1 : 7; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float GravityScale; // 0x294(0x04)
	float MaxStepHeight; // 0x298(0x04)
	float JumpZVelocity; // 0x29c(0x04)
	float JumpOffJumpZFactor; // 0x2a0(0x04)
	float *fa8f1fd3c5; // 0x2a4(0x04)
	float *6a63fdee84; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	float *abc0cd5685; // 0x2b0(0x04)
	float *73183d834f; // 0x2b4(0x04)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	enum class EMovementMode MovementMode; // 0x2c0(0x01)
	bool CustomMovementMode; // 0x2c1(0x01)
	char pad_2C2[0x1e]; // 0x2c2(0x1e)
	float GroundFriction; // 0x2e0(0x04)
	float MaxWalkSpeed; // 0x2e4(0x04)
	float MaxWalkSpeedCrouched; // 0x2e8(0x04)
	float MaxSwimSpeed; // 0x2ec(0x04)
	float MaxFlySpeed; // 0x2f0(0x04)
	float MaxCustomMovementSpeed; // 0x2f4(0x04)
	float MaxAcceleration; // 0x2f8(0x04)
	float BrakingFrictionFactor; // 0x2fc(0x04)
	float BrakingFriction; // 0x300(0x04)
	char bUseSeparateBrakingFriction : 1; // 0x304(0x01)
	char pad_304_1 : 7; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	float BrakingDecelerationWalking; // 0x308(0x04)
	float BrakingDecelerationFalling; // 0x30c(0x04)
	float BrakingDecelerationSwimming; // 0x310(0x04)
	float BrakingDecelerationFlying; // 0x314(0x04)
	float AirControl; // 0x318(0x04)
	float AirControlBoostMultiplier; // 0x31c(0x04)
	float AirControlBoostVelocityThreshold; // 0x320(0x04)
	float FallingLateralFriction; // 0x324(0x04)
	float CrouchedHalfHeight; // 0x328(0x04)
	float PronedHalfHeight; // 0x32c(0x04)
	float PronedRadius; // 0x330(0x04)
	float Buoyancy; // 0x334(0x04)
	float PerchRadiusThreshold; // 0x338(0x04)
	float PerchAdditionalHeight; // 0x33c(0x04)
	struct FRotator RotationRate; // 0x340(0x0c)
	char bUseControllerDesiredRotation : 1; // 0x34c(0x01)
	char bOrientRotationToMovement : 1; // 0x34c(0x01)
	char bSweepWhileNavWalking : 1; // 0x34c(0x01)
	char pad_34C_3 : 2; // 0x34c(0x01)
	char *3a41001e8f : 1; // 0x34c(0x01)
	char *181cbd7fbd : 1; // 0x34c(0x01)
	char bForceMaxAccel : 1; // 0x34c(0x01)
	char bRunPhysicsWithNoController : 1; // 0x34d(0x01)
	char bForceNextFloorCheck : 1; // 0x34d(0x01)
	char *55d98c9816 : 1; // 0x34d(0x01)
	char bCanWalkOffLedges : 1; // 0x34d(0x01)
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x34d(0x01)
	char pad_34D_5 : 2; // 0x34d(0x01)
	char *a181fe0a7a : 1; // 0x34d(0x01)
	char *bc1853d4a4 : 1; // 0x34e(0x01)
	char pad_34E_1 : 7; // 0x34e(0x01)
	char pad_34F[0x1]; // 0x34f(0x01)
	struct USceneComponent* *dd5532d1f3; // 0x350(0x08)
	float MaxOutOfWaterStepHeight; // 0x358(0x04)
	float OutofWaterZ; // 0x35c(0x04)
	float Mass; // 0x360(0x04)
	bool bEnablePhysicsInteraction; // 0x364(0x01)
	bool bTouchForceScaledToMass; // 0x365(0x01)
	bool bPushForceScaledToMass; // 0x366(0x01)
	bool bPushForceUsingZOffset; // 0x367(0x01)
	bool bScalePushForceToVelocity; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	float StandingDownwardForceScale; // 0x36c(0x04)
	float InitialPushForceFactor; // 0x370(0x04)
	float PushForceFactor; // 0x374(0x04)
	float PushForcePointZOffsetFactor; // 0x378(0x04)
	float TouchForceFactor; // 0x37c(0x04)
	float MinTouchForce; // 0x380(0x04)
	float MaxTouchForce; // 0x384(0x04)
	float RepulsionForce; // 0x388(0x04)
	char bForceBraking : 1; // 0x38c(0x01)
	char pad_38C_1 : 7; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	float CrouchedSpeedMultiplier; // 0x390(0x04)
	float UpperImpactNormalScale; // 0x394(0x04)
	struct FVector Acceleration; // 0x398(0x0c)
	struct FVector *b38db9fa0a; // 0x3a4(0x0c)
	struct FQuat *cb13287acd; // 0x3b0(0x10)
	struct FVector *2326939532; // 0x3c0(0x0c)
	float *2c8a26d287; // 0x3cc(0x04)
	float *a5a6a835a3; // 0x3d0(0x04)
	float *21abb31899; // 0x3d4(0x04)
	struct FVector *3c6c846d6e; // 0x3d8(0x0c)
	struct FVector *e826a5d8b4; // 0x3e4(0x0c)
	float *c22b8bcc91; // 0x3f0(0x04)
	char pad_3F4[0x8]; // 0x3f4(0x08)
	float MaxSimulationTimeStep; // 0x3fc(0x04)
	int32 MaxSimulationIterations; // 0x400(0x04)
	float MaxDepenetrationWithGeometry; // 0x404(0x04)
	float MaxDepenetrationWithGeometryAsProxy; // 0x408(0x04)
	float MaxDepenetrationWithPawn; // 0x40c(0x04)
	float MaxDepenetrationWithPawnAsProxy; // 0x410(0x04)
	float *e1309db822; // 0x414(0x04)
	float *62cdf6b6f5; // 0x418(0x04)
	float *32491f59b3; // 0x41c(0x04)
	float *a3c5a0cc2f; // 0x420(0x04)
	float *9a25d8eb73; // 0x424(0x04)
	float *ecdd5ac4d1; // 0x428(0x04)
	float *6b8c95142c; // 0x42c(0x04)
	float *7119fd2666; // 0x430(0x04)
	enum class ENetworkSmoothingMode NetworkSmoothingMode; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	float *416fcf627d; // 0x438(0x04)
	float *212ee42817; // 0x43c(0x04)
	float *bfd8190383; // 0x440(0x04)
	float *71f6b1e9a2; // 0x444(0x04)
	float LedgeCheckThreshold; // 0x448(0x04)
	float JumpOutOfWaterPitch; // 0x44c(0x04)
	struct F*722e4d89eb CurrentFloor; // 0x450(0x98)
	enum class EMovementMode DefaultLandMovementMode; // 0x4e8(0x01)
	enum class EMovementMode DefaultWaterMovementMode; // 0x4e9(0x01)
	enum class EMovementMode *7f8d102d5b; // 0x4ea(0x01)
	char pad_4EB[0x1]; // 0x4eb(0x01)
	char bMaintainHorizontalGroundVelocity : 1; // 0x4ec(0x01)
	char bImpartBaseVelocityX : 1; // 0x4ec(0x01)
	char bImpartBaseVelocityY : 1; // 0x4ec(0x01)
	char bImpartBaseVelocityZ : 1; // 0x4ec(0x01)
	char bImpartBaseAngularVelocity : 1; // 0x4ec(0x01)
	char bJustTeleported : 1; // 0x4ec(0x01)
	char *4daca329e5 : 1; // 0x4ec(0x01)
	char *6c90dcabf5 : 1; // 0x4ec(0x01)
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x4ed(0x01)
	char bNotifyApex : 1; // 0x4ed(0x01)
	char *10ced04b9c : 1; // 0x4ed(0x01)
	char bWantsToCrouch : 1; // 0x4ed(0x01)
	char bCrouchMaintainsBaseLocation : 1; // 0x4ed(0x01)
	char pad_4ED_5 : 3; // 0x4ed(0x01)
	char pad_4EE[0x2]; // 0x4ee(0x02)
	enum class EStanceMode StanceMode; // 0x4f0(0x01)
	enum class EStanceMode WantsToStanceMode; // 0x4f1(0x01)
	char pad_4F2[0x2]; // 0x4f2(0x02)
	char bIgnoreBaseRotation : 1; // 0x4f4(0x01)
	char *38aadbe468 : 1; // 0x4f4(0x01)
	char bAlwaysCheckFloor : 1; // 0x4f4(0x01)
	char bUseFlatBaseForFloorChecks : 1; // 0x4f4(0x01)
	char *e2a28f8307 : 1; // 0x4f4(0x01)
	char *d68f5f981a : 1; // 0x4f4(0x01)
	char bUseRVOAvoidance : 1; // 0x4f4(0x01)
	char bRequestedMoveUseAcceleration : 1; // 0x4f4(0x01)
	char pad_4F5[0xf]; // 0x4f5(0x0f)
	char *7b3f475677 : 1; // 0x504(0x01)
	char *104ee2c836 : 1; // 0x504(0x01)
	char *628968668d : 1; // 0x504(0x01)
	char pad_504_3 : 2; // 0x504(0x01)
	char bProjectNavMeshWalking : 1; // 0x504(0x01)
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x504(0x01)
	char pad_504_7 : 1; // 0x504(0x01)
	char pad_505[0x13]; // 0x505(0x13)
	float AvoidanceConsiderationRadius; // 0x518(0x04)
	struct FVector *065ad3559c; // 0x51c(0x0c)
	int32 AvoidanceUID; // 0x528(0x04)
	struct F*056e48c16d AvoidanceGroup; // 0x52c(0x04)
	struct F*056e48c16d GroupsToAvoid; // 0x530(0x04)
	struct F*056e48c16d GroupsToIgnore; // 0x534(0x04)
	float AvoidanceWeight; // 0x538(0x04)
	struct FVector *2a911bb8e7; // 0x53c(0x0c)
	char pad_548[0xa8]; // 0x548(0xa8)
	float NavMeshProjectionInterval; // 0x5f0(0x04)
	float *d098fcb6a4; // 0x5f4(0x04)
	float NavMeshProjectionInterpSpeed; // 0x5f8(0x04)
	float NavMeshProjectionHeightScaleUp; // 0x5fc(0x04)
	float NavMeshProjectionHeightScaleDown; // 0x600(0x04)
	float NavWalkingFloorDistTolerance; // 0x604(0x04)
	char pad_608[0xb0]; // 0x608(0xb0)
	struct F*76138ff06a *9a60267788; // 0x6b8(0x58)
	char pad_710[0x10]; // 0x710(0x10)
	float *22fd1c7889; // 0x720(0x04)
	char pad_724[0x4]; // 0x724(0x04)
	struct FRootMotionSourceGroup *0568a1fe71; // 0x728(0x100)
	char pad_828[0x98]; // 0x828(0x98)
	struct F*627659f0e8 *add4ad8474; // 0x8c0(0x40)
	struct FVector *c3deac0730; // 0x900(0x0c)
	bool *2c10e261b6; // 0x90c(0x01)
	char pad_90D[0x3]; // 0x90d(0x03)
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x910(0x01)
	char pad_910_1 : 7; // 0x910(0x01)
	char pad_911[0xf]; // 0x911(0x0f)

	void *9fd6ee3699(); // Function Engine.CharacterMovementComponent.*9fd6ee3699 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65037e0
	void *658ba87d09(); // Function Engine.CharacterMovementComponent.*658ba87d09 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4ed0
	void *0c76887b2d(); // Function Engine.CharacterMovementComponent.*0c76887b2d // Final|Native|Public|BlueprintCallable // @ game+0x65036c0
	void *2dac781daa(); // Function Engine.CharacterMovementComponent.*2dac781daa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6c98
	void *fe0be86a58(); // Function Engine.CharacterMovementComponent.*fe0be86a58 // Final|Native|Public|BlueprintCallable // @ game+0x650936c
	void DisableMovement(); // Function Engine.CharacterMovementComponent.DisableMovement // Native|Public|BlueprintCallable // @ game+0x64ee500
	void AddForce(); // Function Engine.CharacterMovementComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e81d4
	void *6c8dd965b4(); // Function Engine.CharacterMovementComponent.*6c8dd965b4 // Net|Native|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x6509578
	void *94f636ce1d(); // Function Engine.CharacterMovementComponent.*94f636ce1d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64fa978
	void *0452b20aef(); // Function Engine.CharacterMovementComponent.*0452b20aef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64fb0ec
	bool CapsuleTouched(); // Function Engine.CharacterMovementComponent.CapsuleTouched // Native|Protected|HasOutParms // @ game+0x64ea148
	void *7f595838bc(); // Function Engine.CharacterMovementComponent.*7f595838bc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f11e4
	void *53963c7cc3(); // Function Engine.CharacterMovementComponent.*53963c7cc3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1efc
	struct FVector AddImpulse(); // Function Engine.CharacterMovementComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e8818
	void *147ef7dd14(); // Function Engine.CharacterMovementComponent.*147ef7dd14 // Final|Native|Public|BlueprintCallable // @ game+0x6503754
	void *13f0640241(); // Function Engine.CharacterMovementComponent.*13f0640241 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64faee8
	void *a29777516d(); // Function Engine.CharacterMovementComponent.*a29777516d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6505de4
	void *07353d85d0(); // Function Engine.CharacterMovementComponent.*07353d85d0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2b8c
	void *91171cfb26(); // Function Engine.CharacterMovementComponent.*91171cfb26 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5088
	void *7189be6350(); // Function Engine.CharacterMovementComponent.*7189be6350 // Final|Native|Public|BlueprintCallable // @ game+0x6507c80
	void *e9bb4bf72b(struct FHitResult Hit); // Function Engine.CharacterMovementComponent.*e9bb4bf72b // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f8034
	bool *1824662e69(); // Function Engine.CharacterMovementComponent.*1824662e69 // Native|Public|BlueprintCallable // @ game+0x64e9d44
	void *e7264375ff(); // Function Engine.CharacterMovementComponent.*e7264375ff // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57fc060
	void *d87d4eadbf(); // Function Engine.CharacterMovementComponent.*d87d4eadbf // Final|Native|Public|BlueprintCallable // @ game+0x6505d58
	void *e20c938d2b(); // Function Engine.CharacterMovementComponent.*e20c938d2b // Final|Native|Public|BlueprintCallable // @ game+0x6505e80
	float *fff693c5d1(); // Function Engine.CharacterMovementComponent.*fff693c5d1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64fa4ec
	void *f34d54f218(); // Function Engine.CharacterMovementComponent.*f34d54f218 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4efc
	void *52493b55a9(); // Function Engine.CharacterMovementComponent.*52493b55a9 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4f28
	void *6b112f30eb(); // Function Engine.CharacterMovementComponent.*6b112f30eb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5d5c
	void *c321d72587(); // Function Engine.CharacterMovementComponent.*c321d72587 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6505f0c
	void *6910913444(); // Function Engine.CharacterMovementComponent.*6910913444 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57b8e18
	void *d855a114c2(); // Function Engine.CharacterMovementComponent.*d855a114c2 // Final|Native|Public|BlueprintCallable // @ game+0x65092d4
	void *10628ed3f7(); // Function Engine.CharacterMovementComponent.*10628ed3f7 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f3ad4
	enum class EMovementMode *9f0cb1dccd(); // Function Engine.CharacterMovementComponent.*9f0cb1dccd // Native|Public|BlueprintCallable // @ game+0x65070d8
	void *3040c850fd(); // Function Engine.CharacterMovementComponent.*3040c850fd // Native|Public|BlueprintCallable // @ game+0x80b6c4
	void *ee2c7d3fc7(); // Function Engine.CharacterMovementComponent.*ee2c7d3fc7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7c10
};

// Class Engine.BlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintFunctionLibrary : UObject {

	struct FString MakeStringAssetReference(); // Function Engine.BlueprintFunctionLibrary.MakeStringAssetReference // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653e4a4
};

// Class Engine.StaticMeshActor
// Size: 0x3f8 (Inherited: 0x3e8)
struct AStaticMeshActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x3e8(0x08)
	bool bStaticMeshReplicateMovement; // 0x3f0(0x01)
	enum class ENavDataGatheringMode *c609dcac1c; // 0x3f1(0x01)
	char pad_3F2[0x6]; // 0x3f2(0x06)
};

// Class Engine.HUD
// Size: 0x4d0 (Inherited: 0x3e8)
struct AHUD : AActor {
	struct APlayerController* PlayerOwner; // 0x3e8(0x08)
	char bLostFocusPaused : 1; // 0x3f0(0x01)
	char bShowHUD : 1; // 0x3f0(0x01)
	char bShowDebugInfo : 1; // 0x3f0(0x01)
	char bShowHitBoxDebugInfo : 1; // 0x3f0(0x01)
	char bShowOverlays : 1; // 0x3f0(0x01)
	char bEnableDebugTextShadow : 1; // 0x3f0(0x01)
	char pad_3F0_6 : 2; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct TArray<struct AActor*> *ebd7d5061f; // 0x3f8(0x10)
	char pad_408[0x8]; // 0x408(0x08)
	struct TArray<struct FName> DebugDisplay; // 0x410(0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x420(0x10)
	struct UCanvas* Canvas; // 0x430(0x08)
	struct UCanvas* *0d29f139dd; // 0x438(0x08)
	struct TArray<struct F*3211ef0a69> *ecb7863718; // 0x440(0x10)
	struct UClass* *08814e006a; // 0x450(0x08)
	struct AActor* *af2f44f80d; // 0x458(0x08)
	char pad_460[0x70]; // 0x460(0x70)

	void ShowDebug(); // Function Engine.HUD.ShowDebug // Exec|Native|Public // @ game+0x6509624
	float *230588c472(struct FString Text, float ScreenX); // Function Engine.HUD.*230588c472 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64ef418
	float *79b5cb8643(float Param2, struct FVector Param4, bool Param6, bool Param8); // Function Engine.HUD.*79b5cb8643 // Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x64e7d60
	struct FVector2D *20afb725bc(struct FVector2D V0_UV, struct FVector2D V2_UV, struct FLinearColor V1_Color); // Function Engine.HUD.*20afb725bc // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64eeecc
	struct FVector Project(); // Function Engine.HUD.Project // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64fef54
	float *237a6ec72d(struct UFont* Font); // Function Engine.HUD.*237a6ec72d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6750
	bool *c58acecd13(float ScreenX, float Rotation); // Function Engine.HUD.*c58acecd13 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64ee7ec
	void ReceiveHitBoxClick(); // Function Engine.HUD.ReceiveHitBoxClick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void *7eacfe0be3(); // Function Engine.HUD.*7eacfe0be3 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x581cc1c
	struct FVector2D *8859b9196f(struct TArray<struct AActor*> OutActors); // Function Engine.HUD.*8859b9196f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x64f0db8
	void *1ac67b0b0c(); // Function Engine.HUD.*1ac67b0b0c // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5a40
	void ShowHUD(); // Function Engine.HUD.ShowHUD // Exec|Native|Public // @ game+0xd9c218
	void ReceiveHitBoxBeginCursorOver(); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	struct FLinearColor *d94ebbc912(float ScreenX, float ScreenW); // Function Engine.HUD.*d94ebbc912 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64ef23c
	void *a86621049b(); // Function Engine.HUD.*a86621049b // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ff1fc
	float *243680367d(); // Function Engine.HUD.*243680367d // Final|Native|Public|BlueprintCallable // @ game+0x64efbe0
	void Deproject(float ScreenX, struct FVector WorldPosition); // Function Engine.HUD.Deproject // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64edeac
	void *6f61339728(); // Function Engine.HUD.*6f61339728 // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ff3b0
	void ShowDebugToggleSubCategory(); // Function Engine.HUD.ShowDebugToggleSubCategory // Final|Exec|Native|Public // @ game+0x6509778
	struct FVector2D AddHitBox(struct FVector2D Size, bool bConsumesInput); // Function Engine.HUD.AddHitBox // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e8650
	void ShowDebugForReticleTargetToggle(); // Function Engine.HUD.ShowDebugForReticleTargetToggle // Final|Exec|Native|Public // @ game+0x65096b8
	struct FLinearColor *00ad7eb6f8(); // Function Engine.HUD.*00ad7eb6f8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64ee5c0
	float DrawTexture(struct UTexture* Texture, float ScreenY, float ScreenH); // Function Engine.HUD.DrawTexture // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64ef6d0
	void ReceiveHitBoxEndCursorOver(); // Function Engine.HUD.ReceiveHitBoxEndCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void ReceiveHitBoxRelease(); // Function Engine.HUD.ReceiveHitBoxRelease // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	int32 ReceiveDrawHUD(); // Function Engine.HUD.ReceiveDrawHUD // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	struct UMaterialInterface* *71be62ac5d(float ScreenX, float ScreenW, float Scale); // Function Engine.HUD.*71be62ac5d // Final|Native|Public|BlueprintCallable // @ game+0x64eec54
};

// Class Engine.Brush
// Size: 0x420 (Inherited: 0x3e8)
struct ABrush : AActor {
	enum class *6e8770e217 *e507f4dc1d; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	struct FColor BrushColor; // 0x3ec(0x04)
	int32 PolyFlags; // 0x3f0(0x04)
	char *41f7cd1aa2 : 1; // 0x3f4(0x01)
	char *dec024378d : 1; // 0x3f4(0x01)
	char *9d800fe794 : 1; // 0x3f4(0x01)
	char *a42f9041c9 : 1; // 0x3f4(0x01)
	char pad_3F4_4 : 4; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	struct UModel* Brush; // 0x3f8(0x08)
	struct UBrushComponent* BrushComponent; // 0x400(0x08)
	char *9daf5965a3 : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct TArray<struct F*9c7d57f967> *3c19074f41; // 0x410(0x10)
};

// Class Engine.Volume
// Size: 0x420 (Inherited: 0x420)
struct AVolume : ABrush {
};

// Class Engine.AnimNotify
// Size: 0x38 (Inherited: 0x28)
struct UAnimNotify : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void Received_Notify(struct USkeletalMeshComponent* MeshComp); // Function Engine.AnimNotify.Received_Notify // Event|Public|BlueprintEvent|Const // @ game+0x293938
	void GetNotifyName(); // Function Engine.AnimNotify.GetNotifyName // Native|Event|Public|BlueprintEvent|Const // @ game+0x64f52f8
};

// Class Engine.AnimNotify_PlayParticleEffect
// Size: 0x80 (Inherited: 0x38)
struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x0c)
	struct FRotator RotationOffset; // 0x4c(0x0c)
	char pad_58[0x18]; // 0x58(0x18)
	char Attached : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FName SocketName; // 0x78(0x08)
};

// Class Engine.AnimNotifyState
// Size: 0x30 (Inherited: 0x28)
struct UAnimNotifyState : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	float Received_NotifyTick(); // Function Engine.AnimNotifyState.Received_NotifyTick // Event|Public|BlueprintEvent|Const // @ game+0x293938
	void Received_NotifyBegin(struct UAnimSequenceBase* Animation); // Function Engine.AnimNotifyState.Received_NotifyBegin // Event|Public|BlueprintEvent|Const // @ game+0x293938
	struct UAnimSequenceBase* Received_NotifyEnd(); // Function Engine.AnimNotifyState.Received_NotifyEnd // Event|Public|BlueprintEvent|Const // @ game+0x293938
	void GetNotifyName(); // Function Engine.AnimNotifyState.GetNotifyName // Native|Event|Public|BlueprintEvent|Const // @ game+0x64f52f8
};

// Class Engine.DataTable
// Size: 0x80 (Inherited: 0x28)
struct UDataTable : UObject {
	struct UScriptStruct* *6a0e474767; // 0x28(0x08)
	char pad_30[0x50]; // 0x30(0x50)
};

// Class Engine.Character
// Size: 0x850 (Inherited: 0x448)
struct ACharacter : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x448(0x08)
	int32 JumpCurrentCount; // 0x450(0x04)
	float *8282d7bae1; // 0x454(0x04)
	bool *5487c0eb5a; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	float JumpKeyHoldTime; // 0x45c(0x04)
	struct UCapsuleComponent* ProneCapsuleComponent; // 0x460(0x08)
	struct F*fdb76a0b2f *3aef46cc56; // 0x468(0x48)
	struct FVector *9503c1703e; // 0x4b0(0x0c)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct UCharacterMovementComponent* CharacterMovement; // 0x4c0(0x08)
	float *2cfd1e1c0a; // 0x4c8(0x04)
	bool *a08ccf36b9; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	int32 JumpMaxCount; // 0x4d0(0x04)
	float CrouchedEyeHeight; // 0x4d4(0x04)
	char bIsCrouched : 1; // 0x4d8(0x01)
	char pad_4D8_1 : 7; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	float JumpMaxHoldTime; // 0x4dc(0x04)
	struct FQuat *9a1399a27e; // 0x4e0(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x4f0(0x08)
	struct F*fdb76a0b2f *35d4fdbf05; // 0x4f8(0x48)
	char bPressedJump : 1; // 0x540(0x01)
	char *b6ecb6139d : 1; // 0x540(0x01)
	char *f24257721c : 1; // 0x540(0x01)
	char *7c13366d17 : 1; // 0x540(0x01)
	char *4fb6a4f581 : 1; // 0x540(0x01)
	char *6e32dcbd7c : 1; // 0x540(0x01)
	char *1330ddef84 : 1; // 0x540(0x01)
	char *4c2b4c8150 : 1; // 0x540(0x01)
	char bWasJumping : 1; // 0x541(0x01)
	char pad_541_1 : 7; // 0x541(0x01)
	char pad_542[0x6]; // 0x542(0x06)
	struct FMulticastDelegate OnReachedJumpApex; // 0x548(0x10)
	char pad_558[0x10]; // 0x558(0x10)
	struct FMulticastDelegate MovementModeChangedDelegate; // 0x568(0x10)
	struct FMulticastDelegate OnCharacterMovementUpdated; // 0x578(0x10)
	struct FRootMotionSourceGroup *9e3b80c0bc; // 0x588(0x100)
	char pad_688[0x8]; // 0x688(0x08)
	struct F*627659f0e8 *f3302eb91e; // 0x690(0x40)
	struct TArray<struct F*9758e900e3> *2f15cfb895; // 0x6d0(0x10)
	struct F*a9dde184de *ed92183131; // 0x6e0(0x160)
	char pad_840[0x10]; // 0x840(0x10)

	bool *c843ca3e4f(bool Param2, float Param4, struct FVector_NetQuantize100 Param6, bool Param8); // Function Engine.Character.*c843ca3e4f // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x6500974
	void *8a872d2897(); // Function Engine.Character.*8a872d2897 // Native|Public|BlueprintCallable // @ game+0x650a30c
	bool *8370e81c2a(struct FVector Param1, struct FVector Param3, struct FName Param5); // Function Engine.Character.*8370e81c2a // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0xa38664
	float K2_OnEndCrouch(); // Function Engine.Character.K2_OnEndCrouch // Event|Public|BlueprintEvent // @ game+0x293938
	void OnRep_RootMotion(); // Function Engine.Character.OnRep_RootMotion // Final|Native|Public // @ game+0x64fdfe8
	void CanJumpInternal(); // Function Engine.Character.CanJumpInternal // Native|Event|Protected|BlueprintEvent|Const // @ game+0x64ea030
	void OnRep_ReplicatedBasedMovement(); // Function Engine.Character.OnRep_ReplicatedBasedMovement // Native|Public // @ game+0x85ffa4
	struct UPrimitiveComponent* ServerMove(struct FName Param7); // Function Engine.Character.ServerMove // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x64ffff8
	void *82a7fc0378(); // Function Engine.Character.*82a7fc0378 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7e58
	bool OnLaunched(); // Function Engine.Character.OnLaunched // Event|Public|HasDefaults|BlueprintEvent // @ game+0x293938
	void *2ffe47f2b1(); // Function Engine.Character.*2ffe47f2b1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f11fc
	void Jump(); // Function Engine.Character.Jump // Native|Public|BlueprintCallable // @ game+0x64f810c
	void OnWalkingOffLedge(struct FVector PreviousFloorContactNormal); // Function Engine.Character.OnWalkingOffLedge // Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0xcc0300
	void ClientAckGoodMove(); // Function Engine.Character.ClientAckGoodMove // Net|Native|Event|Public|NetClient // @ game+0xa39b08
	struct UAnimMontage* *972000ab2b(float InPlayRate); // Function Engine.Character.*972000ab2b // Native|Public|BlueprintCallable // @ game+0x64fe5fc
	void *b4b3ca13a4(); // Function Engine.Character.*b4b3ca13a4 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcaa068
	void *925fe8d3ea(); // Function Engine.Character.*925fe8d3ea // Native|Public|BlueprintCallable // @ game+0x6508038
	void *b84654cf54(); // Function Engine.Character.*b84654cf54 // Final|Native|Public|BlueprintCallable // @ game+0x64f2bb4
	void *6d4709a5ef(); // Function Engine.Character.*6d4709a5ef // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f13c4
	bool *edfb88bd75(float Param0, struct FVector Param2, float Param4); // Function Engine.Character.*edfb88bd75 // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x64ea744
	bool *9deef22338(struct FVector_NetQuantize10 Param1, uint32 Param3, struct FVector_NetQuantize10 Param5, bool Param7); // Function Engine.Character.*9deef22338 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x6500ef4
	void *8b6d00d4e5(); // Function Engine.Character.*8b6d00d4e5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f140c
	void *5c525c793d(); // Function Engine.Character.*5c525c793d // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64e9c38
	void K2_UpdateCustomMovement(); // Function Engine.Character.K2_UpdateCustomMovement // Event|Public|BlueprintEvent // @ game+0x293938
	void OnLanded(); // Function Engine.Character.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	bool LaunchCharacter(); // Function Engine.Character.LaunchCharacter // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64fd498
	void *a7355a3acf(); // Function Engine.Character.*a7355a3acf // Native|Public|BlueprintCallable // @ game+0x650a7b0
	void CanJump(); // Function Engine.Character.CanJump // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64ea00c
	struct FVector_NetQuantize100 *a56b7b5859(bool Param7, uint32 Param9, struct FName Param11); // Function Engine.Character.*a56b7b5859 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65003f4
	struct FVector_NetQuantize10 *21c34738dd(); // Function Engine.Character.*21c34738dd // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x6501700
	enum class EMovementMode K2_OnMovementModeChanged(enum class EMovementMode NewMovementMode); // Function Engine.Character.K2_OnMovementModeChanged // Event|Public|BlueprintEvent // @ game+0x293938
	void Crouch(); // Function Engine.Character.Crouch // Native|Public|BlueprintCallable // @ game+0x64eddc8
	float *403a59b916(struct UPrimitiveComponent* Param7, bool Param9); // Function Engine.Character.*403a59b916 // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x64eaad8
	bool *2168d1ee10(); // Function Engine.Character.*2168d1ee10 // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x64ed09c
	void OnJumped(); // Function Engine.Character.OnJumped // Native|Event|Public|BlueprintEvent // @ game+0x57bfce0
	void *bfd2003b09(); // Function Engine.Character.*bfd2003b09 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7e34
	void *bf5bca255c(); // Function Engine.Character.*bf5bca255c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5736f70
	float K2_OnStartCrouch(); // Function Engine.Character.K2_OnStartCrouch // Event|Public|BlueprintEvent // @ game+0x293938
	void *59137a9491(); // Function Engine.Character.*59137a9491 // Native|Public|BlueprintCallable // @ game+0x650a000
	bool *b10d651cf7(float Param0, struct FVector_NetQuantize100 Param2, bool Param4); // Function Engine.Character.*b10d651cf7 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65013bc
	void OnRep_IsCrouched(); // Function Engine.Character.OnRep_IsCrouched // Native|Public // @ game+0x5793b9c
	void IsJumpProvidingForce(); // Function Engine.Character.IsJumpProvidingForce // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f748c
	void *e33839d558(); // Function Engine.Character.*e33839d558 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x58241d0
};

// Class Engine.Controller
// Size: 0x470 (Inherited: 0x3e8)
struct AController : AActor {
	char pad_3E8[0x8]; // 0x3e8(0x08)
	struct APawn* Pawn; // 0x3f0(0x08)
	struct USceneComponent* TransformComponent; // 0x3f8(0x08)
	char pad_400[0x20]; // 0x400(0x20)
	char *2037508fdb : 1; // 0x420(0x01)
	char *e4df4b351c : 1; // 0x420(0x01)
	char pad_420_2 : 6; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct ACharacter* Character; // 0x428(0x08)
	char pad_430[0x4]; // 0x430(0x04)
	struct FRotator *86cbcf5377; // 0x434(0x0c)
	char pad_440[0x8]; // 0x440(0x08)
	struct FName StateName; // 0x448(0x08)
	char pad_450[0x8]; // 0x450(0x08)
	struct APlayerState* PlayerState; // 0x458(0x08)
	struct FMulticastDelegate OnInstigatedAnyDamage; // 0x460(0x10)

	void K2_GetPawn(); // Function Engine.Controller.K2_GetPawn // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64faf40
	void OnRep_PlayerState(); // Function Engine.Controller.OnRep_PlayerState // Native|Public // @ game+0x5721220
	bool *6b9f58d27f(); // Function Engine.Controller.*6b9f58d27f // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64fd71c
	void *a0460f48ea(); // Function Engine.Controller.*a0460f48ea // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7a5c
	void StopMovement(); // Function Engine.Controller.StopMovement // Native|Public|BlueprintCallable // @ game+0x650a324
	void *aff2b06803(); // Function Engine.Controller.*aff2b06803 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7e18
	void OnRep_Pawn(); // Function Engine.Controller.OnRep_Pawn // Native|Public // @ game+0x666fc4
	void *ab6c7d5021(); // Function Engine.Controller.*ab6c7d5021 // Native|Public|BlueprintCallable // @ game+0x65061cc
	struct FRotator *962f4aad33(); // Function Engine.Controller.*962f4aad33 // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0xc9ca34
	void *545f74ebe7(); // Function Engine.Controller.*545f74ebe7 // Final|Native|Public|BlueprintCallable // @ game+0x64ea39c
	struct AActor* ReceiveInstigatedAnyDamage(); // Function Engine.Controller.ReceiveInstigatedAnyDamage // BlueprintAuthorityOnly|Event|Protected|BlueprintEvent // @ game+0x293938
	void *05c9ee399f(); // Function Engine.Controller.*05c9ee399f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7b98
	void GetControlRotation(); // Function Engine.Controller.GetControlRotation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2700
	void *dfeb0b0e7e(); // Function Engine.Controller.*dfeb0b0e7e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x650507c
	void *c01988db06(); // Function Engine.Controller.*c01988db06 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7a34
	void *4f8918160c(); // Function Engine.Controller.*4f8918160c // Native|Public|BlueprintCallable // @ game+0x64ff6f8
	void *b10cb0e752(); // Function Engine.Controller.*b10cb0e752 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2cc0
	void *acd547e5d2(); // Function Engine.Controller.*acd547e5d2 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7aa0
	void *5029bb8f19(); // Function Engine.Controller.*5029bb8f19 // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x64ec4b4
	void *3e765612de(); // Function Engine.Controller.*3e765612de // Native|Public|BlueprintCallable // @ game+0x57bdf9c
	void *869d9be173(); // Function Engine.Controller.*869d9be173 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6e9c
	void Possess(); // Function Engine.Controller.Possess // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5770cac
	void *4405c697bf(); // Function Engine.Controller.*4405c697bf // Native|Public|BlueprintCallable // @ game+0x64ff6e0
	void *116e3e6556(); // Function Engine.Controller.*116e3e6556 // Native|Public|BlueprintCallable // @ game+0x650a848
	void *7315ed88c4(); // Function Engine.Controller.*7315ed88c4 // Native|Public|BlueprintCallable // @ game+0xc59230
};

// Class Engine.SpringArmComponent
// Size: 0x4e0 (Inherited: 0x460)
struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x458(0x04)
	struct FVector SocketOffset; // 0x45c(0x0c)
	struct FVector TargetOffset; // 0x468(0x0c)
	float ProbeSize; // 0x474(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x478(0x01)
	char bDoCollisionTest : 1; // 0x47c(0x01)
	char bUsePawnControlRotation : 1; // 0x47c(0x01)
	char bInheritPitch : 1; // 0x47c(0x01)
	char bInheritYaw : 1; // 0x47c(0x01)
	char bInheritRoll : 1; // 0x47c(0x01)
	char bLockPitchLag : 1; // 0x47c(0x01)
	char bLockYawLag : 1; // 0x47c(0x01)
	char bLockRollLag : 1; // 0x47c(0x01)
	char bEnableCameraLag : 1; // 0x47d(0x01)
	char bEnableCameraRotationLag : 1; // 0x47d(0x01)
	char bUseCameraLagSubstepping : 1; // 0x47d(0x01)
	char bDrawDebugLagMarkers : 1; // 0x47d(0x01)
	float CameraLagSpeed; // 0x480(0x04)
	float CameraRotationLagSpeed; // 0x484(0x04)
	float CameraLagMaxTimeStep; // 0x488(0x04)
	float CameraLagMaxDistance; // 0x48c(0x04)
	char pad_492[0x4e]; // 0x492(0x4e)
};

// Class Engine.PlayerController
// Size: 0x7a0 (Inherited: 0x470)
struct APlayerController : AController {
	struct UPlayer* Player; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)
	struct APawn* *6a4cba1840; // 0x480(0x08)
	struct U*e3e1c98a8e* *ba4f6cd603; // 0x488(0x08)
	char pad_490[0x8]; // 0x490(0x08)
	struct AHUD* *04081450f1; // 0x498(0x08)
	struct APlayerCameraManager* PlayerCameraManager; // 0x4a0(0x08)
	struct UClass* PlayerCameraManagerClass; // 0x4a8(0x08)
	bool *4ec6b44b0b; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	struct FRotator TargetViewRotation; // 0x4b4(0x0c)
	char pad_4C0[0xc]; // 0x4c0(0x0c)
	float SmoothTargetViewRotationSpeed; // 0x4cc(0x04)
	struct TArray<struct AActor*> *1c7ef4d523; // 0x4d0(0x10)
	char pad_4E0[0x4]; // 0x4e0(0x04)
	float *ba0265b64d; // 0x4e4(0x04)
	struct FVector *1a41b5e739; // 0x4e8(0x0c)
	struct FRotator *86cb465afb; // 0x4f4(0x0c)
	int32 *44b280390c; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct UCheatManager* CheatManager; // 0x508(0x08)
	struct UClass* CheatClass; // 0x510(0x08)
	struct UPlayerInput* PlayerInput; // 0x518(0x08)
	struct TArray<struct F*3715816a7a> *34d360a810; // 0x520(0x10)
	char pad_530[0x90]; // 0x530(0x90)
	char pad_5C0_0 : 3; // 0x5c0(0x01)
	char bPlayerIsWaiting : 1; // 0x5c0(0x01)
	char pad_5C0_4 : 4; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	bool *81aa8c666f; // 0x5c4(0x01)
	char pad_5C5[0x3b]; // 0x5c5(0x3b)
	struct UNetConnection* *44f81e9eea; // 0x600(0x08)
	struct UNetConnection* NetConnection; // 0x608(0x08)
	char pad_610[0xc]; // 0x610(0x0c)
	float InputYawScale; // 0x61c(0x04)
	float InputPitchScale; // 0x620(0x04)
	float InputRollScale; // 0x624(0x04)
	char bShowMouseCursor : 1; // 0x628(0x01)
	char bEnableClickEvents : 1; // 0x628(0x01)
	char bEnableTouchEvents : 1; // 0x628(0x01)
	char bEnableMouseOverEvents : 1; // 0x628(0x01)
	char bEnableTouchOverEvents : 1; // 0x628(0x01)
	char bForceFeedbackEnabled : 1; // 0x628(0x01)
	char pad_628_6 : 2; // 0x628(0x01)
	char pad_629[0x7]; // 0x629(0x07)
	struct TArray<struct FKey> ClickEventKeys; // 0x630(0x10)
	enum class EMouseCursor DefaultMouseCursor; // 0x640(0x01)
	enum class EMouseCursor CurrentMouseCursor; // 0x641(0x01)
	enum class ECollisionChannel DefaultClickTraceChannel; // 0x642(0x01)
	enum class ECollisionChannel CurrentClickTraceChannel; // 0x643(0x01)
	float HitResultTraceDistance; // 0x644(0x04)
	char pad_648[0x80]; // 0x648(0x80)
	struct U*37a897c2a6* *306ff6bcbf; // 0x6c8(0x08)
	char pad_6D0_0 : 3; // 0x6d0(0x01)
	char bShouldPerformFullTickWhenPaused : 1; // 0x6d0(0x01)
	char pad_6D0_4 : 4; // 0x6d0(0x01)
	char pad_6D1[0x17]; // 0x6d1(0x17)
	struct UTouchInterface* *df1d787aeb; // 0x6e8(0x08)
	char pad_6F0[0x40]; // 0x6f0(0x40)
	struct ASpectatorPawn* SpectatorPawn; // 0x730(0x08)
	struct FVector SpawnLocation; // 0x738(0x0c)
	char pad_744[0x4]; // 0x744(0x04)
	bool *87b6227a52; // 0x748(0x01)
	char pad_749[0x1]; // 0x749(0x01)
	uint16 *efcb195a25; // 0x74a(0x02)
	uint16 *d04a484e7d; // 0x74c(0x02)
	char pad_74E[0x2]; // 0x74e(0x02)
	struct AActor* *f63237023a; // 0x750(0x08)
	struct AActor* *d886600ea5; // 0x758(0x08)
	char pad_760[0x40]; // 0x760(0x40)

	void *ab46466854(); // Function Engine.PlayerController.*ab46466854 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64eb234
	bool *c9154578aa(); // Function Engine.PlayerController.*c9154578aa // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ebc5c
	void LocalTravel(); // Function Engine.PlayerController.LocalTravel // Exec|Native|Public // @ game+0x64fd860
	void ServerUpdateLevelVisibility(); // Function Engine.PlayerController.ServerUpdateLevelVisibility // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x95a934
	float *559f3a7288(); // Function Engine.PlayerController.*559f3a7288 // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x64ec1b4
	void *662f19b64b(float Param1); // Function Engine.PlayerController.*662f19b64b // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ec38c
	void *51bb1b7e14(); // Function Engine.PlayerController.*51bb1b7e14 // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65019c8
	void *d865da1570(); // Function Engine.PlayerController.*d865da1570 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ecec4
	void *b761367baa(); // Function Engine.PlayerController.*b761367baa // Native|Public|BlueprintCallable // @ game+0x650923c
	void *f9de26ecaa(); // Function Engine.PlayerController.*f9de26ecaa // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6ec4
	struct FName *7c562762e1(); // Function Engine.PlayerController.*7c562762e1 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ec95c
	void *c859b2be62(); // Function Engine.PlayerController.*c859b2be62 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64eafbc
	void *6a2f785a50(struct UClass* Shake); // Function Engine.PlayerController.*6a2f785a50 // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x64ec798
	void SetName(); // Function Engine.PlayerController.SetName // Exec|Native|Public // @ game+0x65071b8
	struct UForceFeedbackEffect* *9d5e26bec5(); // Function Engine.PlayerController.*9d5e26bec5 // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x64ec87c
	void *4468a93312(); // Function Engine.PlayerController.*4468a93312 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc43a58
	void *b485fdf911(struct FKey Key); // Function Engine.PlayerController.*b485fdf911 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x650a9f0
	float *c24283339d(struct U*f1b0840319* HapticEffect); // Function Engine.PlayerController.*c24283339d // Final|Native|Public|BlueprintCallable // @ game+0x64fedd0
	float *ae6aff6c58(); // Function Engine.PlayerController.*ae6aff6c58 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f3ce0
	void *13b471381b(); // Function Engine.PlayerController.*13b471381b // Net|NetReliableNative|Event|Public|NetClient // @ game+0xc24de4
	void *86157f4703(); // Function Engine.PlayerController.*86157f4703 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6501d98
	void SwitchLevel(); // Function Engine.PlayerController.SwitchLevel // Exec|Native|Public // @ game+0x650a44c
	void *08dee7b7b4(); // Function Engine.PlayerController.*08dee7b7b4 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcc0280
	struct UCameraAnim* *5d0a47f76b(float Scale, float BlendInTime, bool bLoop, enum class ECameraAnimPlaySpace Space); // Function Engine.PlayerController.*5d0a47f76b // Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable // @ game+0x64eb550
	void *dd4eed6524(); // Function Engine.PlayerController.*dd4eed6524 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x64ffe78
	void *92eb1c672a(); // Function Engine.PlayerController.*92eb1c672a // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6501d4c
	void *97866029a2(enum class ETouchIndex FingerIndex, bool bTraceComplex); // Function Engine.PlayerController.*97866029a2 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f342c
	void *8c147ac969(); // Function Engine.PlayerController.*8c147ac969 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ed380
	void *d418e4d62b(); // Function Engine.PlayerController.*d418e4d62b // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ec704
	struct UClass* *acfb0a2a60(int32 Param1, struct APlayerState* Param3); // Function Engine.PlayerController.*acfb0a2a60 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ebde8
	void *78fabe42dc(); // Function Engine.PlayerController.*78fabe42dc // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ec6ec
	void OnRep_TargetViewRotation(); // Function Engine.PlayerController.OnRep_TargetViewRotation // Native|Public // @ game+0x572d43c
	struct FKey *4d8a0fc0f4(); // Function Engine.PlayerController.*4d8a0fc0f4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4784
	void RestartLevel(); // Function Engine.PlayerController.RestartLevel // Exec|Native|Public // @ game+0x64ff73c
	void *9de9eaecfe(float Frequency); // Function Engine.PlayerController.*9de9eaecfe // Final|Native|Public|BlueprintCallable // @ game+0x6505fa8
	void *bbdb1bd24f(); // Function Engine.PlayerController.*bbdb1bd24f // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6501f2c
	void *43c33d58dd(); // Function Engine.PlayerController.*43c33d58dd // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6502038
	void Camera(); // Function Engine.PlayerController.Camera // Exec|Native|Public // @ game+0x64e9ed0
	void *403bdd06e1(struct FString Param0); // Function Engine.PlayerController.*403bdd06e1 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64eb2cc
	struct FHitResult *c0318a1033(); // Function Engine.PlayerController.*c0318a1033 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f3104
	void *2d0548b040(struct FKey Key); // Function Engine.PlayerController.*2d0548b040 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f3bec
	void *adf056a575(); // Function Engine.PlayerController.*adf056a575 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6698
	void *bf4dab2329(); // Function Engine.PlayerController.*bf4dab2329 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ec19c
	void *4fb67236ed(); // Function Engine.PlayerController.*4fb67236ed // Net|Native|Event|Public|NetClient|BlueprintCallable // @ game+0x64ec658
	bool *2ebb436600(); // Function Engine.PlayerController.*2ebb436600 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ebb24
	void AddPitchInput(); // Function Engine.PlayerController.AddPitchInput // Native|Public|BlueprintCallable // @ game+0x64e90bc
	void *795eba9f52(); // Function Engine.PlayerController.*795eba9f52 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6501fec
	void *d30eb8d01c(); // Function Engine.PlayerController.*d30eb8d01c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ec5c0
	void Pause(); // Function Engine.PlayerController.Pause // Exec|Native|Public // @ game+0x64fe1f4
	void *8a4a5b5e1e(); // Function Engine.PlayerController.*8a4a5b5e1e // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcc128c
	void *61f8c21999(float LocationY); // Function Engine.PlayerController.*61f8c21999 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4f80
	struct FVector *64beea8065(); // Function Engine.PlayerController.*64beea8065 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65031b8
	void *0ef1f5ec13(); // Function Engine.PlayerController.*0ef1f5ec13 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64eafec
	void *1b5a3aa90c(); // Function Engine.PlayerController.*1b5a3aa90c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64eb004
	void *56bb0f1181(); // Function Engine.PlayerController.*56bb0f1181 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ecfe0
	void *dfe66674ee(); // Function Engine.PlayerController.*dfe66674ee // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x64eb01c
	struct FHitResult *da0857f36b(); // Function Engine.PlayerController.*da0857f36b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f3274
	void *7a4fd55871(bool bTraceComplex); // Function Engine.PlayerController.*7a4fd55871 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2f94
	struct FKey *23845e204c(); // Function Engine.PlayerController.*23845e204c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7940
	void EnableDLSS(); // Function Engine.PlayerController.EnableDLSS // Exec|Native|Public // @ game+0x580b8bc
	struct FVector *cf2959b8be(); // Function Engine.PlayerController.*cf2959b8be // Net|Native|Event|Public|NetServer|HasDefaults|NetValidate // @ game+0x6501de4
	void ClientRestart(); // Function Engine.PlayerController.ClientRestart // Net|NetReliableNative|Event|Public|NetClient // @ game+0x9418a8
	void *e1ca3da977(); // Function Engine.PlayerController.*e1ca3da977 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6501868
	void *52b71b8a9e(); // Function Engine.PlayerController.*52b71b8a9e // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x64eafd4
	bool *c4ae2f176a(bool Param3); // Function Engine.PlayerController.*c4ae2f176a // Net|NetReliableNative|Event|Public|NetClient // @ game+0x49edb4
	void *1b6c599c99(); // Function Engine.PlayerController.*1b6c599c99 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ebfb0
	void *97ee96fbb0(); // Function Engine.PlayerController.*97ee96fbb0 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0xd994b0
	void *e3d2d62e3b(); // Function Engine.PlayerController.*e3d2d62e3b // Final|Native|Public|BlueprintCallable // @ game+0x64ea590
	float *cd0ed7643e(); // Function Engine.PlayerController.*cd0ed7643e // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x64eb9a0
	void *bd7480c73b(); // Function Engine.PlayerController.*bd7480c73b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65050f0
	void *5853422cfa(); // Function Engine.PlayerController.*5853422cfa // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x64fff60
	void *5fca0030f8(); // Function Engine.PlayerController.*5fca0030f8 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ec0d8
	struct FKey *b5eb53ad0e(); // Function Engine.PlayerController.*b5eb53ad0e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f410c
	void *b3c21183d2(float Duration, bool bAffectsLeftSmall, bool bAffectsRightSmall); // Function Engine.PlayerController.*b3c21183d2 // Final|Native|Public|BlueprintCallable // @ game+0x64feac4
	bool *35919963a5(struct FHitResult HitResult); // Function Engine.PlayerController.*35919963a5 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f378c
	void *68dfc2b6f7(float DeltaX); // Function Engine.PlayerController.*68dfc2b6f7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f43c8
	void *b2390ab0a2(); // Function Engine.PlayerController.*b2390ab0a2 // Native|Public|BlueprintCallable // @ game+0x64e7870
	void *d2e6055c43(); // Function Engine.PlayerController.*d2e6055c43 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x573787c
	void *1c9682404c(); // Function Engine.PlayerController.*1c9682404c // Final|Native|Public|BlueprintCallable // @ game+0x650a274
	void *7cab1cf9db(); // Function Engine.PlayerController.*7cab1cf9db // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x64ffdc4
	bool *6025a956b9(); // Function Engine.PlayerController.*6025a956b9 // Final|Native|Public|HasDefaults // @ game+0x64ecb18
	void *efcf0317d0(); // Function Engine.PlayerController.*efcf0317d0 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcd3358
	void FOV(); // Function Engine.PlayerController.FOV // Exec|Native|Public // @ game+0x64effd4
	void ToggleSpeaking(); // Function Engine.PlayerController.ToggleSpeaking // Exec|Native|Public // @ game+0x650a5dc
	enum class ECameraAnimPlaySpace *16669cfe05(); // Function Engine.PlayerController.*16669cfe05 // Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable // @ game+0xc03fa0
	void *5fce39e8de(); // Function Engine.PlayerController.*5fce39e8de // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x6502408
	void *827ed06000(struct FVector2D ScreenLocation); // Function Engine.PlayerController.*827ed06000 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64ff014
	void DecDISPSharpness(); // Function Engine.PlayerController.DecDISPSharpness // Exec|Native|Public // @ game+0x64ede94
	void *0a98009ba2(); // Function Engine.PlayerController.*0a98009ba2 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64eb19c
	void *5350f7c24f(); // Function Engine.PlayerController.*5350f7c24f // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65023bc
	void *b66b4cd46b(enum class ETouchIndex FingerIndex, bool bTraceComplex); // Function Engine.PlayerController.*b66b4cd46b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f35dc
	void *04a52a0e21(); // Function Engine.PlayerController.*04a52a0e21 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x650aae4
	float *eb438dd755(); // Function Engine.PlayerController.*eb438dd755 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f44cc
	void *703938c013(int32 X); // Function Engine.PlayerController.*703938c013 // Final|Native|Public|BlueprintCallable // @ game+0x6506f68
	void StartFire(); // Function Engine.PlayerController.StartFire // Exec|Native|Public // @ game+0x6509c30
	bool *affae98f27(); // Function Engine.PlayerController.*affae98f27 // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x64eccec
	void *0ef46105ab(float Param1); // Function Engine.PlayerController.*0ef46105ab // Net|Native|Event|Public|NetClient // @ game+0x64eb87c
	void *4706b0dd25(); // Function Engine.PlayerController.*4706b0dd25 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xda1c14
	void *68263df898(); // Function Engine.PlayerController.*68263df898 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65024a0
	struct AActor* *cf9e5e1026(); // Function Engine.PlayerController.*cf9e5e1026 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64eb0b8
	void *94de0543e5(float Param1); // Function Engine.PlayerController.*94de0543e5 // Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x64ea600
	void *d629fba752(); // Function Engine.PlayerController.*d629fba752 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64fe15c
	float *b8a2b9a959(); // Function Engine.PlayerController.*b8a2b9a959 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f3e28
	struct AActor* *4378cb5b7b(float BlendTime, float BlendExp); // Function Engine.PlayerController.*4378cb5b7b // Native|Public|BlueprintCallable // @ game+0x6509074
	struct FVector *0cb5679844(); // Function Engine.PlayerController.*0cb5679844 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64ee148
	void EnableTAA(); // Function Engine.PlayerController.EnableTAA // Exec|Native|Public // @ game+0x57c13c4
	void AddRollInput(); // Function Engine.PlayerController.AddRollInput // Native|Public|BlueprintCallable // @ game+0x64e9500
	void ServerUpdateCamera(struct FVector_NetQuantize Param0); // Function Engine.PlayerController.ServerUpdateCamera // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x6502198
	void *60d2f2e83e(); // Function Engine.PlayerController.*60d2f2e83e // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64eb0a0
	struct AActor* *3e63e83084(); // Function Engine.PlayerController.*3e63e83084 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xb8d88c
	void *26ecccb14e(); // Function Engine.PlayerController.*26ecccb14e // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64eb434
	void ClientRetryClientRestart(); // Function Engine.PlayerController.ClientRetryClientRestart // Net|NetReliableNative|Event|Public|NetClient // @ game+0x64ec044
	void *86c5638054(); // Function Engine.PlayerController.*86c5638054 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0xcb4764
	void *b41ac62737(); // Function Engine.PlayerController.*b41ac62737 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x64fffac
	struct FVector DeprojectMousePositionToWorld(); // Function Engine.PlayerController.DeprojectMousePositionToWorld // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64ee040
	void *bd105c49d6(); // Function Engine.PlayerController.*bd105c49d6 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x6502454
	void EnableCheats(); // Function Engine.PlayerController.EnableCheats // Exec|Native|Public // @ game+0x64efdb4
	bool *42c23c4926(); // Function Engine.PlayerController.*42c23c4926 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xb77a10
	void *4e8d0e40c4(); // Function Engine.PlayerController.*4e8d0e40c4 // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65022c4
	void IncDISPSharpness(); // Function Engine.PlayerController.IncDISPSharpness // Exec|Native|Public // @ game+0x5786b60
	void *1c4adf6d0b(struct FVector RotationRate); // Function Engine.PlayerController.*1c4adf6d0b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4200
	bool *278a1612b5(); // Function Engine.PlayerController.*278a1612b5 // Native|Public|BlueprintCallable // @ game+0x6504758
	void SendToConsole(); // Function Engine.PlayerController.SendToConsole // Exec|Native|Public // @ game+0x64ffd00
	void *a0b0a56a1d(); // Function Engine.PlayerController.*a0b0a56a1d // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0xa09b5c
	void ConsoleKey(); // Function Engine.PlayerController.ConsoleKey // Exec|Native|Public // @ game+0x64ed4f4
	void *68eef5585b(); // Function Engine.PlayerController.*68eef5585b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2e64
	void *271d361b1b(bool bLooping); // Function Engine.PlayerController.*271d361b1b // Net|Native|Event|Public|NetClient|BlueprintCallable // @ game+0xb14ca4
	void AddYawInput(); // Function Engine.PlayerController.AddYawInput // Native|Public|BlueprintCallable // @ game+0x64e9928
};

// Class Engine.Info
// Size: 0x3e8 (Inherited: 0x3e8)
struct AInfo : AActor {
};

// Class Engine.GameModeBase
// Size: 0x488 (Inherited: 0x3e8)
struct AGameModeBase : AInfo {
	struct FString OptionsString; // 0x3e8(0x10)
	struct UClass* GameSessionClass; // 0x3f8(0x08)
	struct UClass* GameStateClass; // 0x400(0x08)
	struct UClass* PlayerControllerClass; // 0x408(0x08)
	struct UClass* PlayerStateClass; // 0x410(0x08)
	struct FStringClassReference HUDClass; // 0x418(0x10)
	struct UClass* DefaultPawnClass; // 0x428(0x08)
	struct FStringClassReference SpectatorClass; // 0x430(0x10)
	struct UClass* ReplaySpectatorPlayerControllerClass; // 0x440(0x08)
	struct AGameSession* GameSession; // 0x448(0x08)
	struct AGameStateBase* GameState; // 0x450(0x08)
	struct FText *ea2300ff97; // 0x458(0x18)
	char bUseSeamlessTravel : 1; // 0x470(0x01)
	char bStartPlayersAsSpectators : 1; // 0x470(0x01)
	char bPauseable : 1; // 0x470(0x01)
	char pad_470_3 : 5; // 0x470(0x01)
	char pad_471[0x17]; // 0x471(0x17)

	void *54f66c09c1(); // Function Engine.GameModeBase.*54f66c09c1 // Native|Public|BlueprintCallable // @ game+0x64f5450
	struct APlayerController* PlayerCanRestart(); // Function Engine.GameModeBase.PlayerCanRestart // Native|Event|Public|BlueprintEvent // @ game+0x89cebc
	void *ff7bd76d7c(); // Function Engine.GameModeBase.*ff7bd76d7c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57bd35c
	void RestartPlayerAtPlayerStart(struct AController* NewPlayer); // Function Engine.GameModeBase.RestartPlayerAtPlayerStart // Native|Public|BlueprintCallable // @ game+0x64ff884
	void StartPlay(); // Function Engine.GameModeBase.StartPlay // Native|Public|BlueprintCallable // @ game+0xbae4f0
	struct FString *ef6066069a(); // Function Engine.GameModeBase.*ef6066069a // Native|Public|BlueprintCallable // @ game+0x64ea42c
	void RestartPlayer(); // Function Engine.GameModeBase.RestartPlayer // Native|Public|BlueprintCallable // @ game+0x64ff7f0
	void *b5028fdf32(); // Function Engine.GameModeBase.*b5028fdf32 // Native|Public|BlueprintCallable // @ game+0x64f5534
	void InitializeHUDForPlayer(); // Function Engine.GameModeBase.InitializeHUDForPlayer // Native|Event|Protected|BlueprintEvent // @ game+0xd72d2c
	struct AActor* SpawnDefaultPawnFor(); // Function Engine.GameModeBase.SpawnDefaultPawnFor // Native|Event|Public|BlueprintEvent // @ game+0xc91874
	void MustSpectate(); // Function Engine.GameModeBase.MustSpectate // Native|Event|Public|BlueprintEvent|Const // @ game+0xc6a28c
	struct FString FindPlayerStart(); // Function Engine.GameModeBase.FindPlayerStart // Native|Event|Public|BlueprintEvent // @ game+0xc302ec
	void K2_PostLogin(); // Function Engine.GameModeBase.K2_PostLogin // Event|Public|BlueprintEvent // @ game+0x293938
	void ChoosePlayerStart(struct AController* Player); // Function Engine.GameModeBase.ChoosePlayerStart // Native|Event|Public|BlueprintEvent // @ game+0xc796c0
	void CanSpectate(struct APlayerState* ViewTarget); // Function Engine.GameModeBase.CanSpectate // Native|Event|Public|BlueprintEvent // @ game+0x64ea058
	struct AController* GetDefaultPawnClassForController(); // Function Engine.GameModeBase.GetDefaultPawnClassForController // Native|Event|Public|BlueprintEvent // @ game+0xc9401c
	struct AController* SpawnDefaultPawnAtTransform(struct FTransform SpawnTransform); // Function Engine.GameModeBase.SpawnDefaultPawnAtTransform // Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0xcc47e4
	void HandleStartingNewPlayer(); // Function Engine.GameModeBase.HandleStartingNewPlayer // Native|Event|Public|BlueprintEvent // @ game+0x89cf7c
	struct AActor* InitStartSpot(); // Function Engine.GameModeBase.InitStartSpot // Native|Event|Public|BlueprintEvent // @ game+0xd66cd8
	void K2_OnRestartPlayer(); // Function Engine.GameModeBase.K2_OnRestartPlayer // Event|Public|BlueprintEvent // @ game+0x293938
	void RestartPlayerAtTransform(struct AController* NewPlayer); // Function Engine.GameModeBase.RestartPlayerAtTransform // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64ff964
	void K2_OnChangeName(struct AController* Other); // Function Engine.GameModeBase.K2_OnChangeName // Event|Public|BlueprintEvent // @ game+0x293938
	struct FString *86e3800e25(); // Function Engine.GameModeBase.*86e3800e25 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x64faa90
	struct APlayerController* K2_OnSwapPlayerControllers(); // Function Engine.GameModeBase.K2_OnSwapPlayerControllers // Event|Protected|BlueprintEvent // @ game+0x293938
	void K2_OnLogout(); // Function Engine.GameModeBase.K2_OnLogout // Event|Public|BlueprintEvent // @ game+0x293938
	void *3d35c0366a(); // Function Engine.GameModeBase.*3d35c0366a // Native|Public|BlueprintCallable // @ game+0x64fdfbc
	struct AActor* ShouldReset(); // Function Engine.GameModeBase.ShouldReset // Native|Event|Public|BlueprintEvent // @ game+0x64ff308
	void ResetLevel(); // Function Engine.GameModeBase.ResetLevel // Native|Public|BlueprintCallable // @ game+0x5823efc
};

// Class Engine.GameMode
// Size: 0x4c8 (Inherited: 0x488)
struct AGameMode : AGameModeBase {
	struct FName *fdf168a227; // 0x488(0x08)
	char bDelayedStart : 1; // 0x490(0x01)
	char pad_490_1 : 7; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	int32 NumSpectators; // 0x494(0x04)
	int32 NumPlayers; // 0x498(0x04)
	int32 NumBots; // 0x49c(0x04)
	float MinRespawnDelay; // 0x4a0(0x04)
	int32 NumTravellingPlayers; // 0x4a4(0x04)
	struct UClass* *e51b494abc; // 0x4a8(0x08)
	struct TArray<struct APlayerState*> *076b29c2b9; // 0x4b0(0x10)
	float *05697249b5; // 0x4c0(0x04)
	bool bHandleDedicatedServerReplays; // 0x4c4(0x01)
	char pad_4C5[0x3]; // 0x4c5(0x03)

	void *4fa79e4abc(); // Function Engine.GameMode.*4fa79e4abc // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7ac8
	void *59744331f1(); // Function Engine.GameMode.*59744331f1 // Native|Public|BlueprintCallable // @ game+0x64effa8
	void *b85bd19301(); // Function Engine.GameMode.*b85bd19301 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7030
	void K2_OnSetMatchState(); // Function Engine.GameMode.K2_OnSetMatchState // Event|Protected|BlueprintEvent // @ game+0x293938
	void Say(); // Function Engine.GameMode.Say // Exec|Native|Public|BlueprintCallable // @ game+0x64ffb28
	void *45c451c13d(); // Function Engine.GameMode.*45c451c13d // Native|Public|BlueprintCallable // @ game+0x64ff724
	void *088224d128(); // Function Engine.GameMode.*088224d128 // Native|Public|BlueprintCallable // @ game+0x57bc3c0
	void *9baee83b47(); // Function Engine.GameMode.*9baee83b47 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4bb0
	void SetBandwidthLimit(); // Function Engine.GameMode.SetBandwidthLimit // Exec|Native|Public // @ game+0x650387c
	void ReadyToStartMatch(); // Function Engine.GameMode.ReadyToStartMatch // Native|Event|Protected|BlueprintEvent // @ game+0xccfa60
	void *558b992273(); // Function Engine.GameMode.*558b992273 // Native|Public|BlueprintCallable // @ game+0x64e7820
	void ReadyToEndMatch(); // Function Engine.GameMode.ReadyToEndMatch // Native|Event|Protected|BlueprintEvent // @ game+0xaa6efc
};

// Class Engine.PlayerState
// Size: 0x478 (Inherited: 0x3e8)
struct APlayerState : AInfo {
	float Score; // 0x3e8(0x04)
	char pad_3EC[0xc]; // 0x3ec(0x0c)
	bool Ping; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	int32 PlayerId; // 0x3fc(0x04)
	char bIsSpectator : 1; // 0x400(0x01)
	char *d7a1fd552e : 1; // 0x400(0x01)
	char bIsABot : 1; // 0x400(0x01)
	char pad_400_3 : 1; // 0x400(0x01)
	char *6304b8eff5 : 1; // 0x400(0x01)
	char *7c4d44b809 : 1; // 0x400(0x01)
	char pad_400_6 : 2; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FString PlayerName; // 0x408(0x10)
	struct FUniqueNetIdRepl UniqueId; // 0x418(0x18)
	struct UClass* *e51b494abc; // 0x430(0x08)
	struct FString *7f441a13dc; // 0x438(0x10)
	char pad_448[0x10]; // 0x448(0x10)
	int32 StartTime; // 0x458(0x04)
	char pad_45C[0x18]; // 0x45c(0x18)
	bool *93f72aa7fc; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)

	void OnRep_PlayerName(); // Function Engine.PlayerState.OnRep_PlayerName // Native|Public // @ game+0x57e06f0
	void OnRep_Score(); // Function Engine.PlayerState.OnRep_Score // Native|Public // @ game+0xd9c218
	void OnRep_UniqueId(); // Function Engine.PlayerState.OnRep_UniqueId // Native|Public // @ game+0x581a384
	void ReceiveOverrideWith(); // Function Engine.PlayerState.ReceiveOverrideWith // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveCopyProperties(); // Function Engine.PlayerState.ReceiveCopyProperties // Event|Protected|BlueprintEvent // @ game+0x293938
	void OnRep_bIsInactive(); // Function Engine.PlayerState.OnRep_bIsInactive // Native|Public // @ game+0x581a36c
};

// Class Engine.SkeletalMeshActor
// Size: 0x470 (Inherited: 0x3e8)
struct ASkeletalMeshActor : AActor {
	char pad_3E8[0x8]; // 0x3e8(0x08)
	char bShouldDoAnimNotifies : 1; // 0x3f0(0x01)
	char bWakeOnLevelStart : 1; // 0x3f0(0x01)
	char pad_3F0_2 : 6; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x3f8(0x08)
	struct USkeletalMesh* *cc378d83c0; // 0x400(0x08)
	struct UPhysicsAsset* *89fe11466c; // 0x408(0x08)
	struct UMaterialInterface* *1e7caac314; // 0x410(0x08)
	struct UMaterialInterface* *db45004a8f; // 0x418(0x08)
	char pad_420[0x50]; // 0x420(0x50)

	void OnRep_ReplicatedMaterial0(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0 // Native|Public // @ game+0x581a36c
	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset // Native|Public // @ game+0x57e06f0
	void OnRep_ReplicatedMaterial1(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1 // Native|Public // @ game+0x581a384
	void OnRep_ReplicatedMesh(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh // Native|Public // @ game+0xd9c218
};

// Class Engine.DestructibleComponent
// Size: 0xcf0 (Inherited: 0xc30)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0xc28(0x01)
	struct TArray<struct F*096817792e> FractureEffects; // 0xc30(0x10)
	bool bEnableHardSleeping; // 0xc40(0x01)
	char pad_C41_1 : 7; // 0xc41(0x01)
	char pad_C42[0x2]; // 0xc42(0x02)
	float LargeChunkThreshold; // 0xc44(0x04)
	char pad_C48[0x10]; // 0xc48(0x10)
	struct FMulticastDelegate OnComponentFracture; // 0xc58(0x10)
	char pad_C68[0x88]; // 0xc68(0x88)

	void *4676ce6de9(); // Function Engine.DestructibleComponent.*4676ce6de9 // Final|Native|Public|BlueprintCallable // @ game+0x654fa3c
	float *339d88c256(); // Function Engine.DestructibleComponent.*339d88c256 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651221c
	void *c55dc2289f(); // Function Engine.DestructibleComponent.*c55dc2289f // Final|Native|Public|BlueprintCallable // @ game+0x6529edc
	struct FVector *150c20fc0e(float DamageAmount); // Function Engine.DestructibleComponent.*150c20fc0e // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6511020
};

// Class Engine.SaveGame
// Size: 0x28 (Inherited: 0x28)
struct USaveGame : UObject {
};

// Class Engine.*ecc7e9561f
// Size: 0x9b0 (Inherited: 0x990)
struct U*ecc7e9561f : UPrimitiveComponent {
	struct FColor ShapeColor; // 0x988(0x04)
	struct UBodySetup* *6d9ffc621f; // 0x990(0x08)
	char *5ad4a49835 : 1; // 0x998(0x01)
	char *b1a48519e8 : 1; // 0x998(0x01)
	char *d96fb7dd6c : 1; // 0x998(0x01)
	char pad_99C_3 : 5; // 0x99c(0x01)
	char pad_99D[0x3]; // 0x99d(0x03)
	struct UClass* AreaClass; // 0x9a0(0x08)
	char pad_9A8[0x8]; // 0x9a8(0x08)
};

// Class Engine.TargetPoint
// Size: 0x3e8 (Inherited: 0x3e8)
struct ATargetPoint : AActor {
};

// Class Engine.GameStateBase
// Size: 0x428 (Inherited: 0x3e8)
struct AGameStateBase : AInfo {
	struct UClass* GameModeClass; // 0x3e8(0x08)
	struct AGameModeBase* AuthorityGameMode; // 0x3f0(0x08)
	struct UClass* SpectatorClass; // 0x3f8(0x08)
	struct TArray<struct APlayerState*> PlayerArray; // 0x400(0x10)
	bool *d506f7e5e4; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float *83b1d93eee; // 0x414(0x04)
	float *c28d41fd4b; // 0x418(0x04)
	float *32844ee1a9; // 0x41c(0x04)
	char pad_420[0x8]; // 0x420(0x08)

	void *a9952ba0bf(); // Function Engine.GameStateBase.*a9952ba0bf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x572ea98
	void *8cab2d71c2(); // Function Engine.GameStateBase.*8cab2d71c2 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7008
	void *4b737c5214(); // Function Engine.GameStateBase.*4b737c5214 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f4ed0
	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass // Native|Protected // @ game+0x80b6c4
	void OnRep_ReplicatedHasBegunPlay(); // Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay // Native|Protected // @ game+0x57e1590
	struct AController* *e8df0b00a7(); // Function Engine.GameStateBase.*e8df0b00a7 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6048
	void *8ad83f8ecb(); // Function Engine.GameStateBase.*8ad83f8ecb // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f60f0
	void *ff7bd76d7c(); // Function Engine.GameStateBase.*ff7bd76d7c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7058
	void OnRep_ReplicatedWorldTimeSeconds(); // Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds // Native|Protected // @ game+0xbae4f0
	void OnRep_GameModeClass(); // Function Engine.GameStateBase.OnRep_GameModeClass // Native|Protected // @ game+0xcafb88
	void *f0b4c46c31(); // Function Engine.GameStateBase.*f0b4c46c31 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57ba224
};

// Class Engine.GameState
// Size: 0x448 (Inherited: 0x428)
struct AGameState : AGameStateBase {
	struct FName MatchState; // 0x428(0x08)
	struct FName PreviousMatchState; // 0x430(0x08)
	int32 ElapsedTime; // 0x438(0x04)
	char pad_43C[0xc]; // 0x43c(0x0c)

	void OnRep_ElapsedTime(); // Function Engine.GameState.OnRep_ElapsedTime // Native|Public // @ game+0x5786f44
	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState // Native|Public // @ game+0x64fdfbc
};

// Class Engine.BoxComponent
// Size: 0x9c0 (Inherited: 0x9b0)
struct UBoxComponent : U*ecc7e9561f {
	struct FVector BoxExtent; // 0x9a8(0x0c)
	char pad_9BC[0x4]; // 0x9bc(0x04)

	void *f1bf6a0bed(); // Function Engine.BoxComponent.*f1bf6a0bed // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653239c
	void *b9d99948c0(); // Function Engine.BoxComponent.*b9d99948c0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6530034
	struct FVector *17de6d8a81(); // Function Engine.BoxComponent.*17de6d8a81 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x654d944
};

// Class Engine.ProjectileMovementComponent
// Size: 0x300 (Inherited: 0x240)
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0x238(0x04)
	float MaxSpeed; // 0x23c(0x04)
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
	float PreviousHitTime; // 0x244(0x04)
	struct FVector PreviousHitNormal; // 0x248(0x0c)
	float ProjectileGravityScale; // 0x254(0x04)
	float *941c01e255; // 0x258(0x04)
	float Bounciness; // 0x25c(0x04)
	float Friction; // 0x260(0x04)
	float BounceVelocityStopSimulatingThreshold; // 0x264(0x04)
	float MinFrictionFraction; // 0x268(0x04)
	struct FMulticastDelegate OnProjectileBounce; // 0x270(0x10)
	struct FMulticastDelegate OnProjectileStop; // 0x280(0x10)
	float HomingAccelerationMagnitude; // 0x290(0x04)
	struct USceneComponent* HomingTargetComponent; // 0x294(0x08)
	float MaxSimulationTimeStep; // 0x29c(0x04)
	int32 MaxSimulationIterations; // 0x2a0(0x04)
	int32 BounceAdditionalIterations; // 0x2a4(0x04)
	float InterpLocationTime; // 0x2a8(0x04)
	float InterpRotationTime; // 0x2ac(0x04)
	float InterpLocationMaxLagDistance; // 0x2b0(0x04)
	float InterpLocationSnapToTargetDistance; // 0x2b4(0x04)
	char pad_2B9[0x47]; // 0x2b9(0x47)

	void OnProjectileStopDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void *bd4604da41(); // Function Engine.ProjectileMovementComponent.*bd4604da41 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536f5c
	struct FHitResult OnProjectileBounceDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x293938
	void *d542984fd9(); // Function Engine.ProjectileMovementComponent.*d542984fd9 // Native|Public|BlueprintCallable // @ game+0x57c13ac
	void *40a4d84143(); // Function Engine.ProjectileMovementComponent.*40a4d84143 // Native|Public|BlueprintCallable // @ game+0x6552fd0
	void LimitVelocity(); // Function Engine.ProjectileMovementComponent.LimitVelocity // Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6539994
	void *0e6e4bda92(); // Function Engine.ProjectileMovementComponent.*0e6e4bda92 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65364c0
	void *b1925dc644(); // Function Engine.ProjectileMovementComponent.*b1925dc644 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6559c2c
	void StopSimulating(); // Function Engine.ProjectileMovementComponent.StopSimulating // Native|Public|HasOutParms|BlueprintCallable // @ game+0x6561648
	void *a1edadaf82(struct FVector NewLocation); // Function Engine.ProjectileMovementComponent.*a1edadaf82 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6541514
};

// Class Engine.CurveBase
// Size: 0x30 (Inherited: 0x28)
struct UCurveBase : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void *66c74365d8(float MinValue); // Function Engine.CurveBase.*66c74365d8 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6cc0
	float *01a35ccac8(); // Function Engine.CurveBase.*01a35ccac8 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6998
};

// Class Engine.GameUserSettings
// Size: 0x110 (Inherited: 0x28)
struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x28(0x01)
	bool bUseDynamicResolution; // 0x29(0x01)
	char pad_2A[0x4e]; // 0x2a(0x4e)
	uint32 ResolutionSizeX; // 0x78(0x04)
	uint32 ResolutionSizeY; // 0x7c(0x04)
	uint32 LastUserConfirmedResolutionSizeX; // 0x80(0x04)
	uint32 LastUserConfirmedResolutionSizeY; // 0x84(0x04)
	int32 WindowPosX; // 0x88(0x04)
	int32 WindowPosY; // 0x8c(0x04)
	int32 FullscreenMode; // 0x90(0x04)
	int32 LastConfirmedFullscreenMode; // 0x94(0x04)
	int32 PreferredFullscreenMode; // 0x98(0x04)
	uint32 Version; // 0x9c(0x04)
	int32 AudioQualityLevel; // 0xa0(0x04)
	float FrameRateLimit; // 0xa4(0x04)
	char pad_A8[0x4]; // 0xa8(0x04)
	int32 DesiredScreenWidth; // 0xac(0x04)
	bool bUseDesiredScreenHeight; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32 DesiredScreenHeight; // 0xb4(0x04)
	float LastRecommendedScreenWidth; // 0xb8(0x04)
	float LastRecommendedScreenHeight; // 0xbc(0x04)
	float LastCPUBenchmarkResult; // 0xc0(0x04)
	float LastGPUBenchmarkResult; // 0xc4(0x04)
	struct TArray<float> LastCPUBenchmarkSteps; // 0xc8(0x10)
	struct TArray<float> LastGPUBenchmarkSteps; // 0xd8(0x10)
	float LastGPUBenchmarkMultiplier; // 0xe8(0x04)
	bool bUseHDRDisplayOutput; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	int32 HDRDisplayOutputNits; // 0xf0(0x04)
	enum class EGraphicsAPIType GraphicsAPI; // 0xf4(0x01)
	bool bGPUDebug; // 0xf5(0x01)
	char pad_F6[0x2]; // 0xf6(0x02)
	struct FDateTime GPUDebugActiveDateTime; // 0xf8(0x08)
	struct FMulticastDelegate OnGameUserSettingsUINeedsUpdate; // 0x100(0x10)

	void *3fa07a2c15(); // Function Engine.GameUserSettings.*3fa07a2c15 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6574ae8
	void *42adf84a10(); // Function Engine.GameUserSettings.*42adf84a10 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65740ac
	void *8a20ad8cd1(); // Function Engine.GameUserSettings.*8a20ad8cd1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6574540
	void LoadSettings(); // Function Engine.GameUserSettings.LoadSettings // Native|Public|BlueprintCallable // @ game+0x6572708
	void *41ac2628ab(); // Function Engine.GameUserSettings.*41ac2628ab // Final|Native|Public|BlueprintCallable // @ game+0x657e4bc
	void *053c3bb9c7(); // Function Engine.GameUserSettings.*053c3bb9c7 // Native|Public|BlueprintCallable // @ game+0x6575fac
	void *b7a04ffac6(); // Function Engine.GameUserSettings.*b7a04ffac6 // Final|Native|Public|BlueprintCallable // @ game+0x657d784
	void *42946d5ee0(); // Function Engine.GameUserSettings.*42946d5ee0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65779b4
	void *1a6266fca5(); // Function Engine.GameUserSettings.*1a6266fca5 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x657f2c0
	void *33c615124b(); // Function Engine.GameUserSettings.*33c615124b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6576c38
	void *39a5d552d0(); // Function Engine.GameUserSettings.*39a5d552d0 // Final|Native|Public|BlueprintCallable // @ game+0x657d648
	void *e7d97d07ad(); // Function Engine.GameUserSettings.*e7d97d07ad // Final|Native|Public|BlueprintCallable // @ game+0x657e2b4
	void *1b557feea9(); // Function Engine.GameUserSettings.*1b557feea9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65774ac
	void *639dffa7ed(); // Function Engine.GameUserSettings.*639dffa7ed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6575a84
	void *44991ed37a(); // Function Engine.GameUserSettings.*44991ed37a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65779d8
	void *febf6f3b86(); // Function Engine.GameUserSettings.*febf6f3b86 // Final|Native|Public|BlueprintCallable // @ game+0x657dbac
	void *4c04eab1f7(); // Function Engine.GameUserSettings.*4c04eab1f7 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x657defc
	int32 GetResolutionScaleInformation(); // Function Engine.GameUserSettings.GetResolutionScaleInformation // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65760bc
	void *551ad5a02b(); // Function Engine.GameUserSettings.*551ad5a02b // Final|Native|Public|BlueprintCallable // @ game+0x657e340
	void *1883a41186(float CurrentScaleValue); // Function Engine.GameUserSettings.*1883a41186 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65762b4
	void *7a9fb9af57(); // Function Engine.GameUserSettings.*7a9fb9af57 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6576f7c
	void *86347b2bd7(); // Function Engine.GameUserSettings.*86347b2bd7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6576f90
	void *3ebc1d55ed(); // Function Engine.GameUserSettings.*3ebc1d55ed // Final|Native|Public|BlueprintCallable // @ game+0x657df88
	void *96553099cc(); // Function Engine.GameUserSettings.*96553099cc // Native|Public|BlueprintCallable // @ game+0x57cb01c
	void *cdb9c52b4d(); // Function Engine.GameUserSettings.*cdb9c52b4d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6574098
	void *a09c0e4ab2(); // Function Engine.GameUserSettings.*a09c0e4ab2 // Final|Native|Static|Public|BlueprintCallable // @ game+0xc763f8
	void *3b9d09fcec(); // Function Engine.GameUserSettings.*3b9d09fcec // Final|Native|Public|BlueprintCallable // @ game+0x656fdc0
	void *d468322917(); // Function Engine.GameUserSettings.*d468322917 // Final|Native|Public|BlueprintCallable // @ game+0x657d8b8
	void *f140babb19(); // Function Engine.GameUserSettings.*f140babb19 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6574afc
	void *ed58553e72(); // Function Engine.GameUserSettings.*ed58553e72 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6577488
	void *afea566c1e(); // Function Engine.GameUserSettings.*afea566c1e // Native|Public|BlueprintCallable // @ game+0x5f9ce80
	void *8bd0d486a3(); // Function Engine.GameUserSettings.*8bd0d486a3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6574558
	void *d2dcc0db36(); // Function Engine.GameUserSettings.*d2dcc0db36 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x354bfc
	void *fca58327d0(); // Function Engine.GameUserSettings.*fca58327d0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6574fec
	void *4e0db130e4(); // Function Engine.GameUserSettings.*4e0db130e4 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x656f97c
	void *bd8d78e737(); // Function Engine.GameUserSettings.*bd8d78e737 // Final|Native|Public|BlueprintCallable // @ game+0x657dcf0
	void *625aed7dbe(); // Function Engine.GameUserSettings.*625aed7dbe // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65764b0
	void *288f53c0c3(bool bEnable); // Function Engine.GameUserSettings.*288f53c0c3 // Final|Native|Public|BlueprintCallable // @ game+0x6572a8c
	void *518e9c9ba4(); // Function Engine.GameUserSettings.*518e9c9ba4 // Final|Native|Public|BlueprintCallable // @ game+0x657d6f8
	void *4d5ec9c010(); // Function Engine.GameUserSettings.*4d5ec9c010 // Native|Public|BlueprintCallable // @ game+0xad8ecc
	void *576b1ee454(); // Function Engine.GameUserSettings.*576b1ee454 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6576494
	void *ade7a8eb7f(); // Function Engine.GameUserSettings.*ade7a8eb7f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6575a98
	void *7e207f2d19(); // Function Engine.GameUserSettings.*7e207f2d19 // Native|Public|BlueprintCallable // @ game+0x6574514
	void *5646d1bc97(); // Function Engine.GameUserSettings.*5646d1bc97 // Native|Public|BlueprintCallable // @ game+0x656c27c
	void *9ad0171dd6(); // Function Engine.GameUserSettings.*9ad0171dd6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65742d8
	void *c2386c6a9d(); // Function Engine.GameUserSettings.*c2386c6a9d // Final|Native|Public|BlueprintCallable // @ game+0x657d530
	void *70413184d2(); // Function Engine.GameUserSettings.*70413184d2 // Final|Native|Public|BlueprintCallable // @ game+0x657db20
	void SaveSettings(); // Function Engine.GameUserSettings.SaveSettings // Native|Public|BlueprintCallable // @ game+0x57eecc4
	void *af951b2cd6(); // Function Engine.GameUserSettings.*af951b2cd6 // Final|Native|Public|BlueprintCallable // @ game+0x57c5590
	void *ecd76f8120(); // Function Engine.GameUserSettings.*ecd76f8120 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6575010
	void *dfe3eff084(); // Function Engine.GameUserSettings.*dfe3eff084 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6574c14
	void *c68bfff735(); // Function Engine.GameUserSettings.*c68bfff735 // Final|Native|Public|BlueprintCallable // @ game+0x657d820
	void *9f1edd93aa(); // Function Engine.GameUserSettings.*9f1edd93aa // Final|Native|Public|BlueprintCallable // @ game+0x656c294
	void *511dbb1516(); // Function Engine.GameUserSettings.*511dbb1516 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6575510
	void SetResolutionScaleValue(); // Function Engine.GameUserSettings.SetResolutionScaleValue // Final|Native|Public|BlueprintCallable // @ game+0x657dc5c
	void *1bdc89e63d(); // Function Engine.GameUserSettings.*1bdc89e63d // Final|Native|Public|BlueprintCallable // @ game+0x657ce2c
	void *177680250c(); // Function Engine.GameUserSettings.*177680250c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6577450
	void *b847c10734(); // Function Engine.GameUserSettings.*b847c10734 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6574b14
	void *732707d3cd(); // Function Engine.GameUserSettings.*732707d3cd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6577474
	void *2610d883f2(); // Function Engine.GameUserSettings.*2610d883f2 // Native|Public|BlueprintCallable // @ game+0x651fc5c
	void *f4e03bd257(); // Function Engine.GameUserSettings.*f4e03bd257 // Native|Public|BlueprintCallable // @ game+0xb38908
	void *b5801bbd2f(); // Function Engine.GameUserSettings.*b5801bbd2f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6577970
	void *faa773b54d(); // Function Engine.GameUserSettings.*faa773b54d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65744f4
	float *28ad51e5eb(); // Function Engine.GameUserSettings.*28ad51e5eb // Native|Public|BlueprintCallable // @ game+0x657d3c0
	void *922ccd84f4(); // Function Engine.GameUserSettings.*922ccd84f4 // Final|Native|Public|BlueprintCallable // @ game+0x657d5bc
	void *ae8bd0cce0(); // Function Engine.GameUserSettings.*ae8bd0cce0 // Native|Public|BlueprintCallable // @ game+0x57cb0cc
};

// Class Engine.GameInstance
// Size: 0x1f0 (Inherited: 0x28)
struct UGameInstance : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct U*095debd2a0* *095debd2a0; // 0x38(0x08)
	char pad_40[0x28]; // 0x40(0x28)
	struct U*7e8b14b3a6* *7e8b14b3a6; // 0x68(0x08)
	char pad_70[0x90]; // 0x70(0x90)
	struct FMulticastDelegate OnKillcamLoadingFinished; // 0x100(0x10)
	char pad_110[0xe0]; // 0x110(0xe0)

	void DebugRemovePlayer(); // Function Engine.GameInstance.DebugRemovePlayer // Exec|Native|Public // @ game+0x651fcf0
	void KillcamLoadingFinishedDelegate__DelegateSignature(); // DelegateFunction Engine.GameInstance.KillcamLoadingFinishedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void DebugCreatePlayer(); // Function Engine.GameInstance.DebugCreatePlayer // Exec|Native|Public // @ game+0x651fc5c
	void HandleNetworkError(enum class ENetworkFailure FailureType); // Function Engine.GameInstance.HandleNetworkError // Event|Public|BlueprintEvent // @ game+0x293938
	void ReceiveInit(); // Function Engine.GameInstance.ReceiveInit // Event|Public|BlueprintEvent // @ game+0x293938
	void HandleTravelError(); // Function Engine.GameInstance.HandleTravelError // Event|Public|BlueprintEvent // @ game+0x293938
	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown // Event|Public|BlueprintEvent // @ game+0x293938
};

// Class Engine.TriggerBase
// Size: 0x3f0 (Inherited: 0x3e8)
struct ATriggerBase : AActor {
	struct U*ecc7e9561f* CollisionComponent; // 0x3e8(0x08)
};

// Class Engine.TriggerBox
// Size: 0x3f0 (Inherited: 0x3f0)
struct ATriggerBox : ATriggerBase {
};

// Class Engine.CapsuleComponent
// Size: 0x9c0 (Inherited: 0x9b0)
struct UCapsuleComponent : U*ecc7e9561f {
	float CapsuleHalfHeight; // 0x9a8(0x04)
	float CapsuleRadius; // 0x9ac(0x04)
	float CapsuleHeight; // 0x9b0(0x04)
	char pad_9BC[0x4]; // 0x9bc(0x04)

	float *ddfefb99fd(); // Function Engine.CapsuleComponent.*ddfefb99fd // Final|Native|Public|BlueprintCallable // @ game+0x654dcec
	float *b352bc1860(); // Function Engine.CapsuleComponent.*b352bc1860 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x653017c
	void *c1ae168066(); // Function Engine.CapsuleComponent.*c1ae168066 // Native|Public|BlueprintCallable // @ game+0x65049e0
	void *5c5966e669(float OutRadius); // Function Engine.CapsuleComponent.*5c5966e669 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6532520
	void *156cc7bd6d(); // Function Engine.CapsuleComponent.*156cc7bd6d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65300dc
	float *d8d9e8ddda(); // Function Engine.CapsuleComponent.*d8d9e8ddda // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65302b0
	void *9a3a3845fe(); // Function Engine.CapsuleComponent.*9a3a3845fe // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6532418
	void *78fdfb4d17(); // Function Engine.CapsuleComponent.*78fdfb4d17 // Native|Public|BlueprintCallable // @ game+0x6504b0c
	void *d18ea0f521(); // Function Engine.CapsuleComponent.*d18ea0f521 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6532400
	void *5ad9e5ebdb(); // Function Engine.CapsuleComponent.*5ad9e5ebdb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65323dc
	void *5cf3fa611a(float InHalfHeight); // Function Engine.CapsuleComponent.*5cf3fa611a // Final|Native|Public|BlueprintCallable // @ game+0x654ddd8
	void *4daa1f5aaf(); // Function Engine.CapsuleComponent.*4daa1f5aaf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65304e4
	float *656ab9bef3(); // Function Engine.CapsuleComponent.*656ab9bef3 // Final|Native|Public|BlueprintCallable // @ game+0x654db58
	void *f0b5efc4d8(); // Function Engine.CapsuleComponent.*f0b5efc4d8 // Native|Public|BlueprintCallable // @ game+0x6504a74
	void *32f034ebd4(); // Function Engine.CapsuleComponent.*32f034ebd4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65323c4
	void *3bc6d21068(); // Function Engine.CapsuleComponent.*3bc6d21068 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6530090
	void *197503b2c5(); // Function Engine.CapsuleComponent.*197503b2c5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6530130
};

// Class Engine.PhysicsVolume
// Size: 0x438 (Inherited: 0x420)
struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x420(0x04)
	int32 Priority; // 0x424(0x04)
	float FluidFriction; // 0x428(0x04)
	char bWaterVolume : 1; // 0x42c(0x01)
	char bPhysicsOnContact : 1; // 0x42c(0x01)
	char pad_42C_2 : 6; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	bool *c1e105b0ce; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
};

// Class Engine.DebugCameraController
// Size: 0x7f0 (Inherited: 0x7a0)
struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x7a0(0x01)
	char *0b2402a34c : 1; // 0x7a0(0x01)
	char pad_7A0_2 : 6; // 0x7a0(0x01)
	char pad_7A1[0x7]; // 0x7a1(0x07)
	struct U*e8224a1e62* *9324a8bb8c; // 0x7a8(0x08)
	char pad_7B0[0x20]; // 0x7b0(0x20)
	float SpeedScale; // 0x7d0(0x04)
	float InitialMaxSpeed; // 0x7d4(0x04)
	float InitialAccel; // 0x7d8(0x04)
	float InitialDecel; // 0x7dc(0x04)
	char pad_7E0[0x10]; // 0x7e0(0x10)

	void *2e4653783e(); // Function Engine.DebugCameraController.*2e4653783e // Final|Native|Public|BlueprintCallable // @ game+0x650a578
	void ShowDebugSelectedInfo(); // Function Engine.DebugCameraController.ShowDebugSelectedInfo // Exec|Native|Public // @ game+0x6509760
	void *b67f45561f(); // Function Engine.DebugCameraController.*b67f45561f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f62a8
	void *de56c362d2(); // Function Engine.DebugCameraController.*de56c362d2 // Final|Native|Public|BlueprintCallable // @ game+0x6507518
	void ReceiveOnActivate(); // Function Engine.DebugCameraController.ReceiveOnActivate // Event|Public|BlueprintEvent // @ game+0x293938
	void ReceiveOnDeactivate(); // Function Engine.DebugCameraController.ReceiveOnDeactivate // Event|Public|BlueprintEvent // @ game+0x293938
	void ReceiveOnActorSelected(struct FVector SelectHitLocation); // Function Engine.DebugCameraController.ReceiveOnActorSelected // Event|Protected|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x293938
};

// Class Engine.Channel
// Size: 0x68 (Inherited: 0x28)
struct UChannel : UObject {
	struct UNetConnection* Connection; // 0x28(0x08)
	char pad_30[0x38]; // 0x30(0x38)
};

// Class Engine.ActorChannel
// Size: 0x370 (Inherited: 0x68)
struct UActorChannel : UChannel {
	struct AActor* Actor; // 0x68(0x08)
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
	struct UCapsuleComponent* CapsuleComponent; // 0x3f0(0x08)
	struct UBillboardComponent* *6369e93122; // 0x3f8(0x08)
	struct UBillboardComponent* *83f6a9b2b9; // 0x400(0x08)
	char *9088118d89 : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
};

// Class Engine.PlayerStart
// Size: 0x418 (Inherited: 0x410)
struct APlayerStart : ANavigationObjectBase {
	struct FName PlayerStartTag; // 0x410(0x08)
};

// Class Engine.CheatManager
// Size: 0x78 (Inherited: 0x28)
struct UCheatManager : UObject {
	struct ADebugCameraController* *a08dd8a11c; // 0x28(0x08)
	struct UClass* DebugCameraControllerClass; // 0x30(0x08)
	char pad_38[0x40]; // 0x38(0x40)

	void OnlyLoadLevel(); // Function Engine.CheatManager.OnlyLoadLevel // Exec|Native|Public // @ game+0x657bf04
	void FreezeFrame(); // Function Engine.CheatManager.FreezeFrame // Exec|Native|Public|BlueprintCallable // @ game+0x6573f08
	void DestroyTarget(); // Function Engine.CheatManager.DestroyTarget // Exec|Native|Public|BlueprintCallable // @ game+0x57b6ce4
	void DumpVoiceMutingState(); // Function Engine.CheatManager.DumpVoiceMutingState // Exec|Native|Public // @ game+0x65728e8
	void CheatScript(); // Function Engine.CheatManager.CheatScript // Final|Exec|Native|Public // @ game+0x656fa40
	void *795eba9f52(); // Function Engine.CheatManager.*795eba9f52 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x657d4e4
	void DumpOnlineSessionState(); // Function Engine.CheatManager.DumpOnlineSessionState // Exec|Native|Public // @ game+0x57709d8
	void Summon(); // Function Engine.CheatManager.Summon // Exec|Native|Public // @ game+0x657f1fc
	void StreamLevelOut(); // Function Engine.CheatManager.StreamLevelOut // Exec|Native|Public // @ game+0x657ef40
	void DebugCapsuleSweepClear(); // Function Engine.CheatManager.DebugCapsuleSweepClear // Exec|Native|Public // @ game+0x65724cc
	void *f8b0d01959(); // Function Engine.CheatManager.*f8b0d01959 // Native|Protected|BlueprintCallable // @ game+0xbe8294
	void ChangeSize(); // Function Engine.CheatManager.ChangeSize // Exec|Native|Public|BlueprintCallable // @ game+0x656f9a4
	void ReceiveInitCheatManager(); // Function Engine.CheatManager.ReceiveInitCheatManager // Event|Public|BlueprintEvent // @ game+0x293938
	void ViewSelf(); // Function Engine.CheatManager.ViewSelf // Exec|Native|Public // @ game+0x658090c
	void DebugCapsuleSweepComplex(); // Function Engine.CheatManager.DebugCapsuleSweepComplex // Exec|Native|Public // @ game+0x65724e4
	void ViewPlayer(); // Function Engine.CheatManager.ViewPlayer // Exec|Native|Public // @ game+0x6580848
	void LogLoc(); // Function Engine.CheatManager.LogLoc // Exec|Native|Public // @ game+0x657aa90
	void ToggleDebugCamera(); // Function Engine.CheatManager.ToggleDebugCamera // Exec|Native|Public // @ game+0x7b89c0
	void DestroyAll(); // Function Engine.CheatManager.DestroyAll // Exec|Native|Public // @ game+0x657265c
	void Fly(); // Function Engine.CheatManager.Fly // Exec|Native|Public|BlueprintCallable // @ game+0x57eecdc
	void BugItGo(float Param0, float Param2, float Param4); // Function Engine.CheatManager.BugItGo // Exec|Native|Public // @ game+0x656de74
	void PlayersOnly(); // Function Engine.CheatManager.PlayersOnly // Exec|Native|Public|BlueprintCallable // @ game+0x657c484
	void DebugCapsuleSweepCapture(); // Function Engine.CheatManager.DebugCapsuleSweepCapture // Exec|Native|Public // @ game+0x8a56c8
	void DebugCapsuleSweepSize(float Param0); // Function Engine.CheatManager.DebugCapsuleSweepSize // Exec|Native|Public // @ game+0x657257c
	void RebuildNavigation(); // Function Engine.CheatManager.RebuildNavigation // Exec|Native|Public // @ game+0x657c694
	void God(); // Function Engine.CheatManager.God // Exec|Native|Public|BlueprintCallable // @ game+0x57eec54
	void ToggleAILogging(); // Function Engine.CheatManager.ToggleAILogging // Exec|Native|Public // @ game+0xb932ac
	struct FString BugItStringCreator(); // Function Engine.CheatManager.BugItStringCreator // Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x656e090
	void DestroyPawns(); // Function Engine.CheatManager.DestroyPawns // Exec|Native|Public // @ game+0x5eb8800
	void SetWorldOrigin(); // Function Engine.CheatManager.SetWorldOrigin // Final|Exec|Native|Public // @ game+0x657e548
	void DebugCapsuleSweepChannel(); // Function Engine.CheatManager.DebugCapsuleSweepChannel // Exec|Native|Public // @ game+0x6572434
	void DebugCapsuleSweepPawn(); // Function Engine.CheatManager.DebugCapsuleSweepPawn // Exec|Native|Public // @ game+0x650a510
	void Ghost(); // Function Engine.CheatManager.Ghost // Exec|Native|Public|BlueprintCallable // @ game+0x57cb01c
	void DamageTarget(); // Function Engine.CheatManager.DamageTarget // Exec|Native|Public|BlueprintCallable // @ game+0x6572380
	void DumpChatState(); // Function Engine.CheatManager.DumpChatState // Exec|Native|Public // @ game+0x65728b8
	void *9377c54237(); // Function Engine.CheatManager.*9377c54237 // Native|Protected|BlueprintCallable // @ game+0x6572980
	void StreamLevelIn(); // Function Engine.CheatManager.StreamLevelIn // Exec|Native|Public // @ game+0x657eeac
	void ReceiveEndPlay(); // Function Engine.CheatManager.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x293938
	void DumpPartyState(); // Function Engine.CheatManager.DumpPartyState // Exec|Native|Public // @ game+0x65728d0
	void FlushLog(); // Function Engine.CheatManager.FlushLog // Exec|Native|Public // @ game+0x6573ef0
	void Teleport(); // Function Engine.CheatManager.Teleport // Exec|Native|Public|BlueprintCallable // @ game+0x57eec84
	void InvertMouse(); // Function Engine.CheatManager.InvertMouse // Final|Exec|Native|Public // @ game+0x65773e4
	void BugIt(); // Function Engine.CheatManager.BugIt // Exec|Native|Public // @ game+0x656ddb0
	void SetMouseSensitivityToDefault(); // Function Engine.CheatManager.SetMouseSensitivityToDefault // Final|Exec|Native|Public // @ game+0x657da74
	void SetNavDrawDistance(); // Function Engine.CheatManager.SetNavDrawDistance // Final|Exec|Native|Public // @ game+0x657da88
	void ViewActor(); // Function Engine.CheatManager.ViewActor // Exec|Native|Public // @ game+0x65807b4
	void DestroyAllPawnsExceptTarget(); // Function Engine.CheatManager.DestroyAllPawnsExceptTarget // Exec|Native|Public // @ game+0x65726f0
	void DebugCapsuleSweep(); // Function Engine.CheatManager.DebugCapsuleSweep // Exec|Native|Public // @ game+0x657241c
	void Slomo(); // Function Engine.CheatManager.Slomo // Exec|Native|Public|BlueprintCallable // @ game+0x657e914
	void Walk(); // Function Engine.CheatManager.Walk // Exec|Native|Public|BlueprintCallable // @ game+0x57eecc4
	void TestCollisionDistance(); // Function Engine.CheatManager.TestCollisionDistance // Exec|Native|Public // @ game+0x657f2e8
	void ViewClass(); // Function Engine.CheatManager.ViewClass // Exec|Native|Public // @ game+0x64ff490
};

// Class Engine.*6df4f0aacf
// Size: 0x9a0 (Inherited: 0x990)
struct U*6df4f0aacf : UPrimitiveComponent {
	struct TArray<struct FNavigationLink> Links; // 0x990(0x10)
};

// Class Engine.NavArea
// Size: 0x40 (Inherited: 0x28)
struct UNavArea : UObject {
	float DefaultCost; // 0x28(0x04)
	float FixedAreaEnteringCost; // 0x2c(0x04)
	struct FColor DrawColor; // 0x30(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x34(0x04)
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
	char *6600a3ea98 : 1; // 0x3e8(0x01)
	char pad_3E8_1 : 7; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)

	void LevelReset(); // Function Engine.LevelScriptActor.LevelReset // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x293938
	bool *278a1612b5(); // Function Engine.LevelScriptActor.*278a1612b5 // Native|Public|BlueprintCallable // @ game+0xb772d4
	void WorldOriginLocationChanged(); // Function Engine.LevelScriptActor.WorldOriginLocationChanged // Event|Public|HasDefaults|BlueprintEvent // @ game+0x293938
	void *e55cf6f554(struct FName EventName); // Function Engine.LevelScriptActor.*e55cf6f554 // Native|Public|BlueprintCallable // @ game+0x57f4f2c
};

// Class Engine.ChildActorComponent
// Size: 0x490 (Inherited: 0x460)
struct UChildActorComponent : USceneComponent {
	struct UClass* ChildActorClass; // 0x458(0x08)
	struct AActor* ChildActor; // 0x460(0x08)
	struct AActor* ChildActorTemplate; // 0x468(0x08)
	char pad_478[0x18]; // 0x478(0x18)

	void *13873450fe(); // Function Engine.ChildActorComponent.*13873450fe // Final|Native|Public|BlueprintCallable // @ game+0x65046c8
};

// Class Engine.CameraComponent
// Size: 0xa50 (Inherited: 0x460)
struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x458(0x04)
	float OrthoWidth; // 0x45c(0x04)
	float OrthoNearClipPlane; // 0x460(0x04)
	float OrthoFarClipPlane; // 0x464(0x04)
	float AspectRatio; // 0x468(0x04)
	char bConstrainAspectRatio : 1; // 0x46c(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x46c(0x01)
	char bLockToHmd : 1; // 0x46c(0x01)
	char bUsePawnControlRotation : 1; // 0x46c(0x01)
	enum class ECameraProjectionMode ProjectionMode; // 0x470(0x01)
	float PostProcessBlendWeight; // 0x474(0x04)
	char pad_479_4 : 4; // 0x479(0x01)
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FPostProcessSettings PostProcessSettings; // 0x480(0x570)
	char pad_9F0[0x58]; // 0x9f0(0x58)
	char bUseControllerViewRotation : 1; // 0xa48(0x01)
	char pad_A48_1 : 7; // 0xa48(0x01)
	char pad_A49[0x7]; // 0xa49(0x07)

	void *3243136986(); // Function Engine.CameraComponent.*3243136986 // Final|Native|Public|BlueprintCallable // @ game+0x6555388
	void *319ffc6c21(); // Function Engine.CameraComponent.*319ffc6c21 // Final|Native|Public|BlueprintCallable // @ game+0x65552f0
	void *014a2540ed(); // Function Engine.CameraComponent.*014a2540ed // Final|Native|Public|BlueprintCallable // @ game+0x65596e4
	void *83f44d6997(); // Function Engine.CameraComponent.*83f44d6997 // Final|Native|Public|BlueprintCallable // @ game+0x6555e30
	float *1018ac5a95(); // Function Engine.CameraComponent.*1018ac5a95 // Native|Public|HasOutParms|BlueprintCallable // @ game+0x6528970
	void *2af209604c(); // Function Engine.CameraComponent.*2af209604c // Final|Native|Public|BlueprintCallable // @ game+0x654eae8
	void *2ac6b59eb0(); // Function Engine.CameraComponent.*2ac6b59eb0 // Final|Native|Public|BlueprintCallable // @ game+0x654c41c
	void *e3575fd8d0(); // Function Engine.CameraComponent.*e3575fd8d0 // Final|Native|Public|BlueprintCallable // @ game+0x6552e10
	TScriptInterface<struct UBlendableInterface> *279e5ee7e9(); // Function Engine.CameraComponent.*279e5ee7e9 // Final|Native|Public|BlueprintCallable // @ game+0x650fd40
	void *23da1c6514(); // Function Engine.CameraComponent.*23da1c6514 // Final|Native|Public|BlueprintCallable // @ game+0x65561bc
	void *e404a296b4(); // Function Engine.CameraComponent.*e404a296b4 // Final|Native|Public|BlueprintCallable // @ game+0x65510ec
};

// Class Engine.Engine
// Size: 0xf60 (Inherited: 0x28)
struct UEngine : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UFont* TinyFont; // 0x30(0x08)
	struct FStringAssetReference TinyFontName; // 0x38(0x10)
	struct UFont* SmallFont; // 0x48(0x08)
	struct FStringAssetReference SmallFontName; // 0x50(0x10)
	struct UFont* *d5575fd1a5; // 0x60(0x08)
	struct FStringAssetReference MediumFontName; // 0x68(0x10)
	struct UFont* LargeFont; // 0x78(0x08)
	struct FStringAssetReference LargeFontName; // 0x80(0x10)
	struct UFont* *eb5965c5ca; // 0x90(0x08)
	struct FStringAssetReference SubtitleFontName; // 0x98(0x10)
	struct TArray<struct UFont*> *6684f966fa; // 0xa8(0x10)
	float MaxLightMapDensity; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FStringClassReference AssetManagerClassName; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FColor *d4edb0cd71; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FString VertexColorViewModeMaterialName_BlueOnly; // 0xe0(0x10)
	char pad_F0[0x8]; // 0xf0(0x08)
	enum class *5bfc0775d8 *66a16761a7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FStringAssetReference DefaultPhysMaterialName; // 0x100(0x10)
	struct UMaterial* *728c6c3f00; // 0x110(0x08)
	struct UClass* *3ae64d6909; // 0x118(0x08)
	struct TArray<struct F*5d92169511> ActiveGameNameRedirects; // 0x120(0x10)
	struct FStringClassReference GameSingletonClassName; // 0x130(0x10)
	char bHardwareSurveyEnabled : 1; // 0x140(0x01)
	char pad_140_1 : 7; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	struct FLinearColor LightingOnlyBrightness; // 0x144(0x10)
	struct FLinearColor LightingOnlySpecular; // 0x154(0x10)
	char pad_164[0x4]; // 0x164(0x04)
	struct FStringClassReference DefaultBlueprintBaseClassName; // 0x168(0x10)
	struct UMaterial* *2a7f86453a; // 0x178(0x08)
	struct FStringClassReference AIControllerClassName; // 0x180(0x10)
	struct FStringAssetReference RemoveSurfaceMaterialName; // 0x190(0x10)
	struct FStringAssetReference DebugMeshMaterialName; // 0x1a0(0x10)
	struct UClass* *0a729b2cf7; // 0x1b0(0x08)
	struct UTexture2D* *54b303e300; // 0x1b8(0x08)
	struct UMaterial* WireframeMaterial; // 0x1c0(0x08)
	float CameraTranslationThreshold; // 0x1c8(0x04)
	struct FColor *d04cd288f8; // 0x1cc(0x04)
	float MaxOcclusionPixelsFraction; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct UTexture2D* *5512ddb13b; // 0x1d8(0x08)
	char bAllowMatureLanguage : 1; // 0x1e0(0x01)
	char pad_1E0_1 : 7; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	float CameraRotationThreshold; // 0x1e4(0x04)
	struct FString *f2905c8f30; // 0x1e8(0x10)
	struct UMaterial* LevelColorationLitMaterial; // 0x1f8(0x08)
	struct TArray<struct FString> AdditionalFontNames; // 0x200(0x10)
	struct FLinearColor LightMapDensitySelectedColor; // 0x210(0x10)
	float RenderLightMapDensityColorScale; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct UClass* *0578464ae5; // 0x228(0x08)
	struct FColor *92098a0da9; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct UTexture2D* DefaultTexture; // 0x238(0x08)
	struct FString VertexColorViewModeMaterialName_GreenOnly; // 0x240(0x10)
	float NetClientTicksPerSecond; // 0x250(0x04)
	float MinLightMapDensity; // 0x254(0x04)
	struct FStringClassReference PhysicsCollisionHandlerClassName; // 0x258(0x10)
	int32 *a116c62737; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct UMaterial* *14f279bb49; // 0x270(0x08)
	struct UMaterial* *7ace57a663; // 0x278(0x08)
	struct FStringAssetReference DefaultBSPVertexTextureName; // 0x280(0x10)
	struct UMaterialInstanceDynamic* *39ca5c3bcb; // 0x290(0x08)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x298(0x08)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x2a0(0x10)
	struct UMaterialInstanceDynamic* *8c82e4230b; // 0x2b0(0x08)
	struct UClass* *f01d850c6c; // 0x2b8(0x08)
	float NearClipPlane; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FString WireframeMaterialName; // 0x2c8(0x10)
	struct FString VertexColorMaterialName; // 0x2d8(0x10)
	int32 *16613c20a8; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FString LevelColorationUnlitMaterialName; // 0x2f0(0x10)
	struct TArray<struct FLinearColor> HLODColorationColors; // 0x300(0x10)
	int32 *07c764073a; // 0x310(0x04)
	struct FColor *ab8b895c94; // 0x314(0x04)
	struct FStringClassReference LevelScriptActorClassName; // 0x318(0x10)
	struct TArray<struct F*be03b16f81> ActiveClassRedirects; // 0x328(0x10)
	struct UMaterialInstanceDynamic* *1f05e695fb; // 0x338(0x08)
	struct FString PlayOnConsoleSaveDir; // 0x340(0x10)
	struct UMaterial* *840a3e28dd; // 0x350(0x08)
	struct FString VertexColorViewModeMaterialName_RedOnly; // 0x358(0x10)
	struct UMaterial* VertexColorMaterial; // 0x368(0x08)
	struct FStringClassReference GameViewportClientClassName; // 0x370(0x10)
	struct FStringAssetReference InvalidLightmapSettingsMaterialName; // 0x380(0x10)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x390(0x01)
	char pad_390_1 : 7; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	int32 NumPawnsAllowedToBeSpawnedInAFrame; // 0x394(0x04)
	char bShouldGenerateLowQualityLightmaps : 1; // 0x398(0x01)
	char pad_398_1 : 7; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FStringAssetReference LightMapDensityTextureName; // 0x3a0(0x10)
	struct FColor *7fbd372b8c; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct UTextureCube* *139a25f293; // 0x3b8(0x08)
	struct UClass* *4d2f7e062f; // 0x3c0(0x08)
	struct FFloatRange SmoothedFrameRateRange; // 0x3c8(0x10)
	struct FStringAssetReference HighFrequencyNoiseTextureName; // 0x3d8(0x10)
	struct UClass* *6fdc146635; // 0x3e8(0x08)
	struct UTexture2D* MiniFontTexture; // 0x3f0(0x08)
	struct TArray<struct FLinearColor> LightComplexityColors; // 0x3f8(0x10)
	struct TArray<struct FString> *06f7de7a1f; // 0x408(0x10)
	char pad_418[0x18]; // 0x418(0x18)
	struct FString ShadedLevelColorationUnlitMaterialName; // 0x430(0x10)
	struct FStringClassReference NavigationSystemClassName; // 0x440(0x10)
	struct TArray<struct FLinearColor> LODColorationColors; // 0x450(0x10)
	struct FString LevelColorationLitMaterialName; // 0x460(0x10)
	struct FColor *076b3a5e59; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct UTexture* DefaultDiffuseTexture; // 0x478(0x08)
	float RenderLightMapDensityGrayscaleScale; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct UMaterial* *4e145c5e75; // 0x488(0x08)
	struct UMaterial* *ec17bc7747; // 0x490(0x08)
	struct UTexture2D* *8d18d8f0e3; // 0x498(0x08)
	struct FColor *c2302d3d50; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FStringClassReference LocalPlayerClassName; // 0x4a8(0x10)
	struct FStringClassReference AvoidanceManagerClassName; // 0x4b8(0x10)
	char bPauseOnLossOfFocus : 1; // 0x4c8(0x01)
	char pad_4C8_1 : 7; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	int32 MaxParticleResize; // 0x4cc(0x04)
	float MaxES2PixelShaderAdditiveComplexityCount; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct FStringAssetReference DefaultDiffuseTextureName; // 0x4d8(0x10)
	float MaxPixelShaderAdditiveComplexityCount; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct UTexture2D* *68954a0e95; // 0x4f0(0x08)
	struct UMaterialInstanceDynamic* *26117a141b; // 0x4f8(0x08)
	struct UClass* *94e76c0b64; // 0x500(0x08)
	struct FColor *bedef1c2e2; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct FString VertexColorViewModeMaterialName_ColorOnly; // 0x510(0x10)
	struct UObject* *5d37fdbc39; // 0x520(0x08)
	struct FStringAssetReference WeightMapPlaceholderTextureName; // 0x528(0x10)
	float IdealLightMapDensity; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct UMaterial* *9d1254360e; // 0x540(0x08)
	struct UMaterial* *16717bdf0d; // 0x548(0x08)
	char bRenderLightMapDensityGrayscale : 1; // 0x550(0x01)
	char pad_550_1 : 7; // 0x550(0x01)
	char pad_551[0x57]; // 0x551(0x57)
	struct FColor *86c7fafaec; // 0x5a8(0x04)
	struct FColor *5a587410f9; // 0x5ac(0x04)
	struct TArray<struct FLinearColor> ShaderComplexityColors; // 0x5b0(0x10)
	struct FStringClassReference GameUserSettingsClassName; // 0x5c0(0x10)
	struct FString ShadedLevelColorationLitMaterialName; // 0x5d0(0x10)
	struct FColor *b2b0568658; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct FString *7d46f4c031; // 0x5e8(0x10)
	struct TArray<struct F*a26d903e83> ActiveStructRedirects; // 0x5f8(0x10)
	int32 MaximumLoopIterationCount; // 0x608(0x04)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct UTexture* WeightMapPlaceholderTexture; // 0x610(0x08)
	float *8d74b94f2c; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct UGameUserSettings* GameUserSettings; // 0x620(0x08)
	float FixedFrameRate; // 0x628(0x04)
	float MeshLODRange; // 0x62c(0x04)
	struct UMaterial* RemoveSurfaceMaterial; // 0x630(0x08)
	struct FStringAssetReference DefaultReflectionCaptureTextureName; // 0x638(0x10)
	char bSubtitlesForcedOff : 1; // 0x648(0x01)
	char pad_648_1 : 7; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct UTexture2D* *8e6f7d16a9; // 0x650(0x08)
	struct TArray<struct F*7bed299cf3> *8744020533; // 0x658(0x10)
	struct TArray<struct F*79d333047c> StatColorMappings; // 0x668(0x10)
	float PrimitiveProbablyVisibleTime; // 0x678(0x04)
	char pad_67C[0x4]; // 0x67c(0x04)
	struct UMaterialInstanceDynamic* *43a400f78e; // 0x680(0x08)
	struct UMaterialInstanceDynamic* *ae4f6d03a2; // 0x688(0x08)
	struct FLinearColor DefaultSelectedMaterialColor; // 0x690(0x10)
	struct FLinearColor *df438f7d68; // 0x6a0(0x10)
	struct FLinearColor *a4766efbe6; // 0x6b0(0x10)
	struct FLinearColor *7851acd877; // 0x6c0(0x10)
	struct FLinearColor *c4c5215f57; // 0x6d0(0x10)
	bool *2a0a2d4f68; // 0x6e0(0x01)
	char pad_6E1[0x3]; // 0x6e1(0x03)
	char bEnableOnScreenDebugMessages : 1; // 0x6e4(0x01)
	char *dbe8d54996 : 1; // 0x6e4(0x01)
	char bSuppressMapWarnings : 1; // 0x6e4(0x01)
	char bDisableAILogging : 1; // 0x6e4(0x01)
	char pad_6E4_4 : 4; // 0x6e4(0x01)
	char pad_6E5[0x3]; // 0x6e5(0x03)
	uint32 bEnableVisualLogRecordingOnStart; // 0x6e8(0x04)
	struct FBox *79b02780b5; // 0x6ec(0x1c)
	char pad_708[0x4]; // 0x708(0x04)
	int32 *5d401516ab; // 0x70c(0x04)
	char *c8c363118f : 1; // 0x710(0x01)
	char pad_710_1 : 7; // 0x710(0x01)
	char pad_711[0x7]; // 0x711(0x07)
	struct FString ParticleEventManagerClassPath; // 0x718(0x10)
	char pad_728[0x28]; // 0x728(0x28)
	float SelectionHighlightIntensity; // 0x750(0x04)
	float *66fa485314; // 0x754(0x04)
	float BSPSelectionHighlightIntensity; // 0x758(0x04)
	float HoverHighlightIntensity; // 0x75c(0x04)
	float *18588a0834; // 0x760(0x04)
	float PrimitiveBaseIntensity; // 0x764(0x04)
	float PrimitiveSelectedIntensity; // 0x768(0x04)
	float PrimitiveHoverIntensity; // 0x76c(0x04)
	char pad_770[0x290]; // 0x770(0x290)
	struct F*1d97e2f35e PhysicErrorCorrection; // 0xa00(0x1c)
	char pad_A1C[0x4]; // 0xa1c(0x04)
	struct TArray<struct FLinearColor> StreamingAccuracyColors; // 0xa20(0x10)
	struct FStringAssetReference DefaultBloomKernelTextureName; // 0xa30(0x10)
	struct UAssetManager* AssetManager; // 0xa40(0x08)
	struct FStringClassReference WorldSettingsClassName; // 0xa48(0x10)
	struct UMaterial* LevelColorationUnlitMaterial; // 0xa58(0x08)
	struct FStringAssetReference DefaultBokehTextureName; // 0xa60(0x10)
	struct UGameViewportClient* GameViewport; // 0xa70(0x08)
	char bCanBlueprintsTickByDefault : 1; // 0xa78(0x01)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0xa78(0x01)
	char bAllowMultiThreadedAnimationUpdate : 1; // 0xa78(0x01)
	char bEnableEditorPSysRealtimeLOD : 1; // 0xa78(0x01)
	char pad_A78_4 : 1; // 0xa78(0x01)
	char bSmoothFrameRate : 1; // 0xa78(0x01)
	char bUseFixedFrameRate : 1; // 0xa78(0x01)
	char pad_A78_7 : 1; // 0xa78(0x01)
	char pad_A79[0x7]; // 0xa79(0x07)
	struct UMaterialInstanceDynamic* *34d0d906a6; // 0xa80(0x08)
	struct UMaterial* DebugMeshMaterial; // 0xa88(0x08)
	char pad_A90[0x1d0]; // 0xa90(0x1d0)
	struct TArray<struct F*ac3a1c14b3> NetDriverDefinitions; // 0xc60(0x10)
	struct TArray<struct FString> ServerActors; // 0xc70(0x10)
	struct TArray<struct FString> *65faad95f3; // 0xc80(0x10)
	char *0dabd9a1d1 : 1; // 0xc90(0x01)
	char pad_C90_1 : 7; // 0xc90(0x01)
	char pad_C91[0x7]; // 0xc91(0x07)
	struct TArray<struct FLinearColor> StationaryLightOverlapColors; // 0xc98(0x10)
	struct FColor *6adb0523e6; // 0xca8(0x04)
	char pad_CAC[0x4]; // 0xcac(0x04)
	struct FStringClassReference ConsoleClassName; // 0xcb0(0x10)
	struct FStringAssetReference PreIntegratedSkinBRDFTextureName; // 0xcc0(0x10)
	struct UMaterial* ShadedLevelColorationLitMaterial; // 0xcd0(0x08)
	struct FString LightingTexelDensityName; // 0xcd8(0x10)
	struct FStringAssetReference ArrowMaterialName; // 0xce8(0x10)
	struct TArray<struct FLinearColor> QuadComplexityColors; // 0xcf8(0x10)
	float MinDesiredFrameRate; // 0xd08(0x04)
	char pad_D0C[0x4]; // 0xd0c(0x04)
	struct UTexture2D* *2897f70a3a; // 0xd10(0x08)
	struct FStringAssetReference MiniFontTextureName; // 0xd18(0x10)
	struct UMaterial* *c0e0776fba; // 0xd28(0x08)
	struct UClass* *54adc8e9b7; // 0xd30(0x08)
	struct FStringAssetReference DefaultTextureName; // 0xd38(0x10)
	struct UMaterial* *228f144519; // 0xd48(0x08)
	struct TArray<struct F*2dbfe53fec> ActivePluginRedirects; // 0xd50(0x10)
	struct UClass* *0b327eac45; // 0xd60(0x08)
	int32 MaxParticleResizeWarn; // 0xd68(0x04)
	struct FLinearColor LightMapDensityVertexMappedColor; // 0xd6c(0x10)
	char bSubtitlesEnabled : 1; // 0xd7c(0x01)
	char pad_D7C_1 : 7; // 0xd7c(0x01)
	char pad_D7D[0x3]; // 0xd7d(0x03)
	struct FColor *64dcbccba7; // 0xd80(0x04)
	float DisplayGamma; // 0xd84(0x04)
	struct FStringAssetReference PreviewShadowsIndicatorMaterialName; // 0xd88(0x10)
	char pad_D98[0x18]; // 0xd98(0x18)
	int32 *d47b04d98a; // 0xdb0(0x04)
	char pad_DB4[0x1ac]; // 0xdb4(0x1ac)
};

// Class Engine.*c2c4669a63
// Size: 0x38 (Inherited: 0x28)
struct U*c2c4669a63 : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Engine.GameViewportClient
// Size: 0x660 (Inherited: 0x38)
struct UGameViewportClient : U*c2c4669a63 {
	char pad_38[0x18]; // 0x38(0x18)
	struct UConsole* *8ac97c4fce; // 0x50(0x08)
	char pad_58[0x1d0]; // 0x58(0x1d0)
	struct TArray<struct F*fda7674ce5> *34de75708c; // 0x228(0x10)
	char pad_238[0x1e8]; // 0x238(0x1e8)
	struct UGameInstance* GameInstance; // 0x420(0x08)
	char pad_428[0x238]; // 0x428(0x238)

	void ShowTitleSafeArea(); // Function Engine.GameViewportClient.ShowTitleSafeArea // Exec|Native|Public // @ game+0x655c554
	void SetConsoleTarget(); // Function Engine.GameViewportClient.SetConsoleTarget // Exec|Native|Public // @ game+0x651fc5c
	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers // Exec|Native|Public // @ game+0xad8ecc
};

// Class Engine.Console
// Size: 0x108 (Inherited: 0x28)
struct UConsole : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct ULocalPlayer* *25aa99e4de; // 0x38(0x08)
	struct UTexture2D* *c25a475780; // 0x40(0x08)
	struct UTexture2D* *09a2d0b96a; // 0x48(0x08)
	char pad_50[0x18]; // 0x50(0x18)
	struct TArray<struct FString> HistoryBuffer; // 0x68(0x10)
	char pad_78[0x90]; // 0x78(0x90)
};

// Class Engine.NetDriver
// Size: 0x4c0 (Inherited: 0x28)
struct UNetDriver : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString NetConnectionClassName; // 0x30(0x10)
	int32 MaxDownloadSize; // 0x40(0x04)
	char bClampListenServerTickRate : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32 NetServerMaxTickRate; // 0x48(0x04)
	int32 MaxInternetClientRate; // 0x4c(0x04)
	int32 MaxClientRate; // 0x50(0x04)
	float ServerTravelPause; // 0x54(0x04)
	float SpawnPrioritySeconds; // 0x58(0x04)
	float RelevantTimeout; // 0x5c(0x04)
	float KeepAliveTime; // 0x60(0x04)
	float InitialConnectTimeout; // 0x64(0x04)
	float ConnectionTimeout; // 0x68(0x04)
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x6c(0x04)
	bool bNoTimeouts; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UNetConnection* *614083bb45; // 0x78(0x08)
	struct TArray<struct UNetConnection*> *a7669e53d2; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
	struct UWorld* World; // 0xb8(0x08)
	struct UPackage* *a40890d105; // 0xc0(0x08)
	char pad_C8[0x20]; // 0xc8(0x20)
	struct UClass* *349976212f; // 0xe8(0x08)
	struct UProperty* *603e7c60f1; // 0xf0(0x08)
	struct UProperty* *102db0a7dd; // 0xf8(0x08)
	struct FName NetDriverName; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)
	float Time; // 0x110(0x04)
	char pad_114[0x3ac]; // 0x114(0x3ac)
};

// Class Engine.DemoNetDriver
// Size: 0xc60 (Inherited: 0x4c0)
struct UDemoNetDriver : UNetDriver {
	char pad_4C0[0xf8]; // 0x4c0(0xf8)
	struct TMap<struct FString, struct F*ca62b3ee9d> *f53af746dc; // 0x5b8(0x50)
	char pad_608[0x438]; // 0x608(0x438)
	bool *250fd8a592; // 0xa40(0x01)
	char pad_A41[0x21f]; // 0xa41(0x21f)
};

// Class Engine.GameEngine
// Size: 0xfc0 (Inherited: 0xf60)
struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xf58(0x04)
	float ServerFlushLogInterval; // 0xf5c(0x04)
	struct UGameInstance* GameInstance; // 0xf60(0x08)
	char pad_F70[0x38]; // 0xf70(0x38)
	struct TArray<struct UWorld*> *9f9543648a; // 0xfa8(0x10)
	char pad_FB8[0x8]; // 0xfb8(0x08)
};

// Class Engine.Player
// Size: 0x48 (Inherited: 0x28)
struct UPlayer : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	int32 *e859f7f96e; // 0x38(0x04)
	int32 ConfiguredInternetSpeed; // 0x3c(0x04)
	int32 ConfiguredLanSpeed; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.NetConnection
// Size: 0x65848 (Inherited: 0x48)
struct UNetConnection : UPlayer {
	struct TArray<struct UChildConnection*> Children; // 0x48(0x10)
	struct UNetDriver* Driver; // 0x58(0x08)
	struct UClass* *f5d4b8f8cf; // 0x60(0x08)
	struct UPackageMap* PackageMap; // 0x68(0x08)
	struct TArray<struct UChannel*> *5b232f3ac5; // 0x70(0x10)
	struct TArray<struct AActor*> *3008bea0ae; // 0x80(0x10)
	struct AActor* ViewTarget; // 0x90(0x08)
	struct AActor* *d1679cf1be; // 0x98(0x08)
	int32 *26af5d53fc; // 0xa0(0x04)
	char *75d8776e4c : 1; // 0xa4(0x01)
	char pad_A4_1 : 1; // 0xa4(0x01)
	char *ad6c4fa058 : 1; // 0xa4(0x01)
	char pad_A4_3 : 5; // 0xa4(0x01)
	char pad_A5[0x8b]; // 0xa5(0x8b)
	struct TArray<struct UChannel*> *be2f9ef971; // 0x130(0x10)
	char pad_140[0x28]; // 0x140(0x28)
	struct FUniqueNetIdRepl PlayerId; // 0x168(0x18)
	char pad_180[0x68]; // 0x180(0x68)
	double *8efce3eca0; // 0x1e8(0x08)
	char pad_1F0[0x65538]; // 0x1f0(0x65538)
	struct TArray<struct UChannel*> *0f9ee5b029; // 0x65728(0x10)
	char pad_65738[0x110]; // 0x65738(0x110)
};

// Class Engine.ForceFeedbackEffect
// Size: 0x40 (Inherited: 0x28)
struct UForceFeedbackEffect : UObject {
	struct TArray<struct F*205de32a17> ChannelDetails; // 0x28(0x10)
	float Duration; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.GameSession
// Size: 0x400 (Inherited: 0x3e8)
struct AGameSession : AInfo {
	int32 MaxSpectators; // 0x3e8(0x04)
	int32 MaxPlayers; // 0x3ec(0x04)
	int32 *2ad8f4e517; // 0x3f0(0x04)
	bool MaxSplitscreensPerConnection; // 0x3f4(0x01)
	bool bRequiresPushToTalk; // 0x3f5(0x01)
	char pad_3F6[0x2]; // 0x3f6(0x02)
	struct FName SessionName; // 0x3f8(0x08)
};

// Class Engine.InstancedStaticMeshComponent
// Size: 0xc10 (Inherited: 0xb30)
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	struct TArray<struct F*4c863aba6e> PerInstanceSMData; // 0xb30(0x10)
	int32 InstancingRandomSeed; // 0xb40(0x04)
	int32 InstanceStartCullDistance; // 0xb44(0x04)
	int32 InstanceEndCullDistance; // 0xb48(0x04)
	char pad_B4C[0x4]; // 0xb4c(0x04)
	struct TArray<int32> *27d7b53530; // 0xb50(0x10)
	struct TArray<int32> *1e6d926d08; // 0xb60(0x10)
	char pad_B70[0x78]; // 0xb70(0x78)
	struct UPhysicsSerializer* PhysicsSerializer; // 0xbe8(0x08)
	bool *51ec92abde; // 0xbf0(0x01)
	char pad_BF1[0x3]; // 0xbf1(0x03)
	int32 *5a45105c4b; // 0xbf4(0x04)
	struct TArray<struct F*91c2e21207> *e45f5a1fc9; // 0xbf8(0x10)
	char pad_C08[0x8]; // 0xc08(0x08)

	struct FTransform *fb3e7943e7(struct FVector4 InPerInstanceCustomData); // Function Engine.InstancedStaticMeshComponent.*fb3e7943e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x650fb4c
	void *34858cee07(int32 InstanceIndex); // Function Engine.InstancedStaticMeshComponent.*34858cee07 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6552924
	bool *74896c1b04(); // Function Engine.InstancedStaticMeshComponent.*74896c1b04 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652bd48
	void *f11665ac8b(); // Function Engine.InstancedStaticMeshComponent.*f11665ac8b // Native|Public|BlueprintCallable // @ game+0x8889bc
	void *e3f589368d(float Radius, bool bSphereInWorldSpace); // Function Engine.InstancedStaticMeshComponent.*e3f589368d // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652c63c
	bool *a236834d4b(); // Function Engine.InstancedStaticMeshComponent.*a236834d4b // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65636d8
	void *5fa70cdbed(struct FVector4 OutPerInstanceCustomData); // Function Engine.InstancedStaticMeshComponent.*5fa70cdbed // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652b8c4
	struct FVector4 *a5fc070c25(); // Function Engine.InstancedStaticMeshComponent.*a5fc070c25 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x650f70c
	struct FBox *e2a0483047(bool bBoxInWorldSpace); // Function Engine.InstancedStaticMeshComponent.*e2a0483047 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652c4d4
	void *5d18775563(); // Function Engine.InstancedStaticMeshComponent.*5d18775563 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652b6e4
	int32 *8f18d87416(); // Function Engine.InstancedStaticMeshComponent.*8f18d87416 // Native|Public|BlueprintCallable // @ game+0x6548cdc
	int32 *b2a56a014a(); // Function Engine.InstancedStaticMeshComponent.*b2a56a014a // Final|Native|Public|BlueprintCallable // @ game+0x654f484
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0xd40 (Inherited: 0xc10)
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	char pad_C10[0x68]; // 0xc10(0x68)
	struct TArray<int32> *1ea986fdd9; // 0xc78(0x10)
	int32 *c1094df86a; // 0xc88(0x04)
	char pad_C8C[0x4]; // 0xc8c(0x04)
	struct FBox *54127f44a0; // 0xc90(0x1c)
	struct FBox *b92c55ee01; // 0xcac(0x1c)
	struct TArray<struct FBox> *135ab4ba4c; // 0xcc8(0x10)
	char pad_CD8[0x20]; // 0xcd8(0x20)
	int32 *d51b7513be; // 0xcf8(0x04)
	struct FBoxSphereBounds *492020ad6c; // 0xcfc(0x1c)
	char *e0205a426d : 1; // 0xd18(0x01)
	char *80d1f14af7 : 1; // 0xd18(0x01)
	char pad_D18_2 : 6; // 0xd18(0x01)
	char pad_D19[0x27]; // 0xd19(0x27)

	struct TArray<int32> *1ad0bfab12(); // Function Engine.HierarchicalInstancedStaticMeshComponent.*1ad0bfab12 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6548d80
};

// Class Engine.*b3661966b1
// Size: 0xd40 (Inherited: 0xd40)
struct U*b3661966b1 : UHierarchicalInstancedStaticMeshComponent {
	int32 MinVertsToSplitNodeForGrid; // 0xd38(0x04)
};

// Class Engine.NavLinkProxy
// Size: 0x438 (Inherited: 0x3e8)
struct ANavLinkProxy : AActor {
	char pad_3E8[0x10]; // 0x3e8(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x3f8(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x408(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x418(0x08)
	bool *4ca76d14ea; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FMulticastDelegate OnSmartLinkReached; // 0x428(0x10)

	void *2be3a03e1b(); // Function Engine.NavLinkProxy.*2be3a03e1b // Final|Native|Public|BlueprintCallable // @ game+0x64ffa98
	struct AActor* ReceiveSmartLinkReached(); // Function Engine.NavLinkProxy.ReceiveSmartLinkReached // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x293938
	void *b31ecb569a(); // Function Engine.NavLinkProxy.*b31ecb569a // Final|Native|Public|BlueprintCallable // @ game+0x6508224
	void *77f910379c(); // Function Engine.NavLinkProxy.*77f910379c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7080
	void *2d23854a56(); // Function Engine.NavLinkProxy.*2d23854a56 // Final|Native|Public // @ game+0xb8b52c
	void *39772e22ca(); // Function Engine.NavLinkProxy.*39772e22ca // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7fc0
};

// Class Engine.LocalPlayer
// Size: 0x288 (Inherited: 0x48)
struct ULocalPlayer : UPlayer {
	char pad_48[0x88]; // 0x48(0x88)
	char *c4e1796760 : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x37]; // 0xd1(0x37)
	struct UClass* *dba1add6cc; // 0x108(0x08)
	char pad_110[0x178]; // 0x110(0x178)
};

// Class Engine.*987a7e4edb
// Size: 0x28 (Inherited: 0x28)
struct U*987a7e4edb : UObject {
};

// Class Engine.PlayerCameraManager
// Size: 0x1cb0 (Inherited: 0x3e8)
struct APlayerCameraManager : AActor {
	struct APlayerController* *337303fb79; // 0x3e8(0x08)
	struct USceneComponent* TransformComponent; // 0x3f0(0x08)
	float ViewPitchMax; // 0x3f8(0x04)
	char pad_3FC[0xc]; // 0x3fc(0x0c)
	struct FVector ViewTargetOffset; // 0x408(0x0c)
	char pad_414[0x4]; // 0x414(0x04)
	float DefaultOrthoWidth; // 0x418(0x04)
	char pad_41C[0xc]; // 0x41c(0x0c)
	float FreeCamDistance; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct F*4156116286 *3db2ea3e19; // 0x430(0x5c0)
	float DefaultFOV; // 0x9f0(0x04)
	char pad_9F4[0xc]; // 0x9f4(0x0c)
	struct F*8aa6907eaa ViewTarget; // 0xa00(0x5d0)
	float ViewRollMin; // 0xfd0(0x04)
	char pad_FD4[0x1c]; // 0xfd4(0x1c)
	float ViewYawMax; // 0xff0(0x04)
	char pad_FF4[0x14]; // 0xff4(0x14)
	struct TArray<struct U*6f88f7780c*> *3ba8d1be87; // 0x1008(0x10)
	char pad_1018[0x18]; // 0x1018(0x18)
	struct F*4156116286 *b9e38e345e; // 0x1030(0x5c0)
	struct TArray<struct UClass*> DefaultModifiers; // 0x15f0(0x10)
	float ViewPitchMin; // 0x1600(0x04)
	char pad_1604[0x10]; // 0x1604(0x10)
	struct FVector FreeCamOffset; // 0x1614(0x0c)
	struct TArray<struct AEmitterCameraLensEffectBase*> *8de88dbdb2; // 0x1620(0x10)
	struct U*b78b10b0de* *31a29477e5; // 0x1630(0x08)
	struct U*6ec4247e64* *4f634c058f[0x08]; // 0x1638(0x40)
	struct TArray<struct FPostProcessSettings> *08ad61c413; // 0x1678(0x10)
	char pad_1688[0x10]; // 0x1688(0x10)
	struct TArray<struct U*6ec4247e64*> *618c273364; // 0x1698(0x10)
	struct TArray<struct U*6ec4247e64*> *9a08cca306; // 0x16a8(0x10)
	struct ACameraActor* *a53a740657; // 0x16b8(0x08)
	char bIsOrthographic : 1; // 0x16c0(0x01)
	char bDefaultConstrainAspectRatio : 1; // 0x16c0(0x01)
	char pad_16C0_2 : 5; // 0x16c0(0x01)
	char bUseClientSideCameraUpdates : 1; // 0x16c0(0x01)
	char pad_16C1[0x3]; // 0x16c1(0x03)
	float ViewYawMin; // 0x16c4(0x04)
	char pad_16C8[0x4]; // 0x16c8(0x04)
	float DefaultAspectRatio; // 0x16cc(0x04)
	char pad_16D0[0xc]; // 0x16d0(0x0c)
	float ViewRollMax; // 0x16dc(0x04)
	struct F*8aa6907eaa *c127c2df70; // 0x16e0(0x5d0)

	void OnPhotographySessionStart(); // Function Engine.PlayerCameraManager.OnPhotographySessionStart // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x581a384
	struct UClass* *e8095d1352(); // Function Engine.PlayerCameraManager.*e8095d1352 // Native|Public|BlueprintCallable // @ game+0x64e7ae4
	void OnPhotographyMultiPartCaptureEnd(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0xd9c218
	void *2e8b0c44f7(float FromAlpha, float Duration, bool bShouldFadeAudio); // Function Engine.PlayerCameraManager.*2e8b0c44f7 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6509a04
	void *c088fc72a2(); // Function Engine.PlayerCameraManager.*c088fc72a2 // Native|Public|BlueprintCallable // @ game+0x650a178
	void *fb39f794ac(); // Function Engine.PlayerCameraManager.*fb39f794ac // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xa98fcc
	struct UClass* *1f80dc24b8(); // Function Engine.PlayerCameraManager.*1f80dc24b8 // Native|Public|BlueprintCallable // @ game+0x6509f1c
	void *425fe6edc8(struct UClass* ModifierClass); // Function Engine.PlayerCameraManager.*425fe6edc8 // Native|Public|BlueprintCallable // @ game+0x64f0264
	struct U*6ec4247e64* *525fdb233a(); // Function Engine.PlayerCameraManager.*525fdb233a // Native|Public|BlueprintCallable // @ game+0x650a094
	float *8bc8bf3569(float BlendInTime, bool bLoop, float Duration, struct FRotator UserPlaySpaceRot); // Function Engine.PlayerCameraManager.*8bc8bf3569 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x64fe734
	void *7b429467f1(); // Function Engine.PlayerCameraManager.*7b429467f1 // Native|Public|BlueprintCallable // @ game+0x6509d08
	struct FVector PhotographyCameraModify(struct FVector OriginalCameraLocation); // Function Engine.PlayerCameraManager.PhotographyCameraModify // BlueprintCosmetic|Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x64fe3a0
	void *b6fe6d34c7(); // Function Engine.PlayerCameraManager.*b6fe6d34c7 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2e38
	void *2aa021959f(); // Function Engine.PlayerCameraManager.*2aa021959f // Native|Public|BlueprintCallable // @ game+0x578058c
	float BlueprintUpdateCamera(); // Function Engine.PlayerCameraManager.BlueprintUpdateCamera // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x293938
	void *8e5bd58a3c(struct UCameraShake* ShakeInstance); // Function Engine.PlayerCameraManager.*8e5bd58a3c // Native|Public|BlueprintCallable // @ game+0x650a190
	void *60f87ce7b1(float InFadeAmount); // Function Engine.PlayerCameraManager.*60f87ce7b1 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6506a50
	void *7eacfe0be3(); // Function Engine.PlayerCameraManager.*7eacfe0be3 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57dd5c4
	void OnPhotographySessionEnd(); // Function Engine.PlayerCameraManager.OnPhotographySessionEnd // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x581a36c
	void *21c6524708(struct UCameraAnim* Anim); // Function Engine.PlayerCameraManager.*21c6524708 // Native|Public|BlueprintCallable // @ game+0x6509e38
	void OnPhotographyMultiPartCaptureStart(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x57e06f0
	void *16a0f6ce64(); // Function Engine.PlayerCameraManager.*16a0f6ce64 // Native|Public|BlueprintCallable // @ game+0x64ff274
	struct FRotator *81fbfd81fe(); // Function Engine.PlayerCameraManager.*81fbfd81fe // Native|Public|HasDefaults|BlueprintCallable // @ game+0xc03e78
	void *77a059e7d8(); // Function Engine.PlayerCameraManager.*77a059e7d8 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1e24
	void *cb0d0af535(); // Function Engine.PlayerCameraManager.*cb0d0af535 // Native|Public|BlueprintCallable // @ game+0x64ff308
	struct UClass* *02258300bf(); // Function Engine.PlayerCameraManager.*02258300bf // Native|Public|BlueprintCallable // @ game+0x64e8f00
	void *2afd20dc05(); // Function Engine.PlayerCameraManager.*2afd20dc05 // Native|Public|BlueprintCallable // @ game+0x6509da0
};

// Class Engine.PlayerInput
// Size: 0x488 (Inherited: 0x28)
struct UPlayerInput : UObject {
	char pad_28[0xf8]; // 0x28(0xf8)
	struct TArray<struct F*2717edfafa> DebugExecBindings; // 0x120(0x10)
	char pad_130[0x30]; // 0x130(0x30)
	struct TArray<struct FName> InvertedAxis; // 0x160(0x10)
	char pad_170[0x318]; // 0x170(0x318)

	void SetGamePadSensitivity(); // Function Engine.PlayerInput.SetGamePadSensitivity // Final|Exec|Native|Public // @ game+0x6505b84
	struct FKey SetGamePadSensitivityOf(); // Function Engine.PlayerInput.SetGamePadSensitivityOf // Final|Exec|Native|Public // @ game+0x6505c1c
	void InvertAxis(); // Function Engine.PlayerInput.InvertAxis // Final|Exec|Native|Public // @ game+0x64f726c
	void InvertAxisKey(); // Function Engine.PlayerInput.InvertAxisKey // Final|Exec|Native|Public // @ game+0x64f72fc
	struct FName SetBind(); // Function Engine.PlayerInput.SetBind // Final|Exec|Native|Public // @ game+0x6504154
	void ClearSmoothing(); // Function Engine.PlayerInput.ClearSmoothing // Final|Exec|Native|Public // @ game+0x64ea5ec
	void SetMouseSensitivity(); // Function Engine.PlayerInput.SetMouseSensitivity // Final|Exec|Native|Public // @ game+0x6507040
	void SetGamePadDeadZone(); // Function Engine.PlayerInput.SetGamePadDeadZone // Final|Exec|Native|Public // @ game+0x65059b0
	struct FKey SetGamePadDeadZoneOf(); // Function Engine.PlayerInput.SetGamePadDeadZoneOf // Final|Exec|Native|Public // @ game+0x6505a48
};

// Class Engine.NavigationData
// Size: 0x590 (Inherited: 0x3e8)
struct ANavigationData : AActor {
	struct UPrimitiveComponent* RenderingComp; // 0x3e8(0x08)
	struct F*462177a17f *462177a17f; // 0x3f0(0x50)
	char *bac07b4450 : 1; // 0x440(0x01)
	char bForceRebuildOnLoad : 1; // 0x440(0x01)
	char bCanBeMainNavData : 1; // 0x440(0x01)
	char bCanSpawnOnRebuild : 1; // 0x440(0x01)
	char bRebuildAtRuntime : 1; // 0x440(0x01)
	char pad_440_5 : 3; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	float ObservedPathsTickInterval; // 0x448(0x04)
	char *2ebe96be74 : 1; // 0x44c(0x01)
	char pad_44C_1 : 7; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	uint32 DataVersion; // 0x450(0x04)
	char pad_454[0xd4]; // 0x454(0xd4)
	struct TArray<struct F*0d9672f37f> *d7200b38ad; // 0x528(0x10)
	char pad_538[0x58]; // 0x538(0x58)
};

// Class Engine.RecastNavMesh
// Size: 0x6a0 (Inherited: 0x590)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x590(0x01)
	char bDrawPolyEdges : 1; // 0x590(0x01)
	char bDrawFilledPolys : 1; // 0x590(0x01)
	char bDrawNavMeshEdges : 1; // 0x590(0x01)
	char *6c6c1af813 : 1; // 0x590(0x01)
	char *e038d03c15 : 1; // 0x590(0x01)
	char *562f95af0f : 1; // 0x590(0x01)
	char *9f56e33560 : 1; // 0x590(0x01)
	char *222ec416dc : 1; // 0x591(0x01)
	char *411252ef0e : 1; // 0x591(0x01)
	char *3fc58fe4e3 : 1; // 0x591(0x01)
	char *56901851bd : 1; // 0x591(0x01)
	char *976f67927b : 1; // 0x591(0x01)
	char *3a378a3576 : 1; // 0x591(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x591(0x01)
	char *3186dc8861 : 1; // 0x591(0x01)
	char pad_592[0x2]; // 0x592(0x02)
	float DrawOffset; // 0x594(0x04)
	char bFixedTilePoolSize : 1; // 0x598(0x01)
	char pad_598_1 : 7; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	int32 TilePoolSize; // 0x59c(0x04)
	float TileSizeUU; // 0x5a0(0x04)
	float CellSize; // 0x5a4(0x04)
	float CellHeight; // 0x5a8(0x04)
	float AgentRadius; // 0x5ac(0x04)
	float AgentHeight; // 0x5b0(0x04)
	float AgentMaxHeight; // 0x5b4(0x04)
	float AgentMaxSlope; // 0x5b8(0x04)
	float AgentMaxStepHeight; // 0x5bc(0x04)
	float MinRegionArea; // 0x5c0(0x04)
	float MergeRegionSize; // 0x5c4(0x04)
	float MaxSimplificationError; // 0x5c8(0x04)
	int32 MaxSimultaneousTileGenerationJobsCount; // 0x5cc(0x04)
	int32 TileNumberHardLimit; // 0x5d0(0x04)
	int32 *30c0de5171; // 0x5d4(0x04)
	int32 *880eefab19; // 0x5d8(0x04)
	int32 *02abe6f742; // 0x5dc(0x04)
	float DefaultDrawDistance; // 0x5e0(0x04)
	float DefaultMaxSearchNodes; // 0x5e4(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x5e8(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x5ec(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x5ed(0x01)
	char pad_5EE[0x2]; // 0x5ee(0x02)
	int32 RegionChunkSplits; // 0x5f0(0x04)
	int32 LayerChunkSplits; // 0x5f4(0x04)
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
	float TileSetUpdateInterval; // 0x604(0x04)
	float HeuristicScale; // 0x608(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x60c(0x04)
	char pad_610[0x90]; // 0x610(0x90)
};

// Class Engine.*095debd2a0
// Size: 0x38 (Inherited: 0x28)
struct U*095debd2a0 : UObject {
	struct TArray<struct F*94b0348d76> *fed618dac9; // 0x28(0x10)
};

// Class Engine.SceneCaptureComponent
// Size: 0x4e0 (Inherited: 0x460)
struct USceneCaptureComponent : USceneComponent {
	struct TArray<struct UPrimitiveComponent*> *ef56703d53; // 0x458(0x10)
	struct TArray<struct AActor*> HiddenActors; // 0x468(0x10)
	struct TArray<struct UPrimitiveComponent*> *331673c74c; // 0x478(0x10)
	struct TArray<struct AActor*> ShowOnlyActors; // 0x488(0x10)
	bool bIsLobbyCapture; // 0x498(0x01)
	bool bCaptureEveryFrame; // 0x499(0x01)
	bool bCaptureOnMovement; // 0x49a(0x01)
	float LODDistanceFactor; // 0x49c(0x04)
	float MaxViewDistanceOverride; // 0x4a0(0x04)
	int32 CaptureSortPriority; // 0x4a4(0x04)
	struct TArray<struct F*b7c981d2f2> ShowFlagSettings; // 0x4a8(0x10)
	char pad_4BF[0x21]; // 0x4bf(0x21)

	void *19e9f39c55(); // Function Engine.SceneCaptureComponent.*19e9f39c55 // Final|Native|Public|BlueprintCallable // @ game+0x6534bac
	void *65ed61b800(); // Function Engine.SceneCaptureComponent.*65ed61b800 // Final|Native|Public|BlueprintCallable // @ game+0x6534d4c
	void *e17a9e386f(); // Function Engine.SceneCaptureComponent.*e17a9e386f // Final|Native|Public|BlueprintCallable // @ game+0x654905c
	void *49d5d2a458(); // Function Engine.SceneCaptureComponent.*49d5d2a458 // Final|Native|Public|BlueprintCallable // @ game+0x655c2c4
	void *1248442e38(); // Function Engine.SceneCaptureComponent.*1248442e38 // Final|Native|Public|BlueprintCallable // @ game+0x654df0c
	void *779e2d00c6(); // Function Engine.SceneCaptureComponent.*779e2d00c6 // Final|Native|Public|BlueprintCallable // @ game+0x651c344
	void *f3cad6b200(); // Function Engine.SceneCaptureComponent.*f3cad6b200 // Final|Native|Public|BlueprintCallable // @ game+0x6548fcc
	void *4136dcbbf8(); // Function Engine.SceneCaptureComponent.*4136dcbbf8 // Final|Native|Public|BlueprintCallable // @ game+0x655c354
};

// Class Engine.SceneCaptureComponent2D
// Size: 0xb10 (Inherited: 0x4e0)
struct USceneCaptureComponent2D : USceneCaptureComponent {
	enum class ECameraProjectionMode ProjectionType; // 0x4d8(0x01)
	float FOVAngle; // 0x4dc(0x04)
	bool *0fe8ec7f05; // 0x4e0(0x01)
	float *3c48c0d9c6; // 0x4e4(0x04)
	float OrthoWidth; // 0x4e8(0x04)
	char pad_4EE[0x2]; // 0x4ee(0x02)
	struct UTextureRenderTarget2D* TextureTarget; // 0x4f0(0x08)
	enum class *b7ca9f4a0d CaptureSource; // 0x4f8(0x01)
	enum class *d1df128539 CompositeMode; // 0x4f9(0x01)
	char pad_4FA[0x2]; // 0x4fa(0x02)
	struct FLinearColor LightingOnlyBrightness; // 0x4fc(0x10)
	struct FLinearColor LightingOnlySpecular; // 0x50c(0x10)
	struct FLinearColor LightingOnlyCustomData; // 0x51c(0x10)
	float LightingOnlyCustomDataAlpha; // 0x52c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x530(0x570)
	float PostProcessBlendWeight; // 0xaa0(0x04)
	bool bUseCustomProjectionMatrix; // 0xaa4(0x01)
	char pad_AA5[0xb]; // 0xaa5(0x0b)
	struct FMatrix CustomProjectionMatrix; // 0xab0(0x40)
	char *32c0f2ecda : 1; // 0xaf0(0x01)
	char pad_AF0_1 : 7; // 0xaf0(0x01)
	char pad_AF1[0x3]; // 0xaf1(0x03)
	bool bEnableClipPlane; // 0xaf4(0x01)
	char pad_AF5[0x3]; // 0xaf5(0x03)
	struct FVector ClipPlaneBase; // 0xaf8(0x0c)
	struct FVector ClipPlaneNormal; // 0xb04(0x0c)

	void CaptureScene(); // Function Engine.SceneCaptureComponent2D.CaptureScene // Final|Native|Public|BlueprintCallable // @ game+0x651bc48
	TScriptInterface<struct UBlendableInterface> *279e5ee7e9(); // Function Engine.SceneCaptureComponent2D.*279e5ee7e9 // Final|Native|Public|BlueprintCallable // @ game+0x650ff68
};

// Class Engine.ArrowComponent
// Size: 0x9a0 (Inherited: 0x990)
struct UArrowComponent : UPrimitiveComponent {
	struct FColor ArrowColor; // 0x988(0x04)
	float ArrowSize; // 0x98c(0x04)
	bool bIsScreenSizeScaled; // 0x990(0x01)
	float ScreenSize; // 0x994(0x04)
	char bTreatAsASprite : 1; // 0x998(0x01)
	char pad_99D_1 : 7; // 0x99d(0x01)
	char pad_99E[0x2]; // 0x99e(0x02)

	void SetArrowColor(); // Function Engine.ArrowComponent.SetArrowColor // Native|Public|HasDefaults|BlueprintCallable // @ game+0x654c380
};

// Class Engine.NavModifierVolume
// Size: 0x430 (Inherited: 0x420)
struct ANavModifierVolume : AVolume {
	char pad_420[0x8]; // 0x420(0x08)
	struct UClass* AreaClass; // 0x428(0x08)

	void *d8bfb93e76(); // Function Engine.NavModifierVolume.*d8bfb93e76 // Final|Native|Public|BlueprintCallable // @ game+0x6503128
};

// Class Engine.ParticleSystemComponent
// Size: 0xbf0 (Inherited: 0x990)
struct UParticleSystemComponent : UPrimitiveComponent {
	struct UParticleSystem* Template; // 0x988(0x08)
	struct TArray<struct UMaterialInterface*> *00f7198f74; // 0x990(0x10)
	struct TArray<struct USkeletalMeshComponent*> *5a07e1add1; // 0x9a0(0x10)
	char pad_9B8_0 : 7; // 0x9b8(0x01)
	char bResetOnDetach : 1; // 0x9b0(0x01)
	char *ff8d451cae : 1; // 0x9b1(0x01)
	char bAllowRecycling : 1; // 0x9b1(0x01)
	char bAutoManageAttachment : 1; // 0x9b1(0x01)
	char *a2f085d08c : 1; // 0x9b1(0x01)
	char bOverrideLODMethod : 1; // 0x9b2(0x01)
	char *0ba5990fe1 : 1; // 0x9b2(0x01)
	char *7273167b2a : 1; // 0x9b2(0x01)
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0x9b8(0x10)
	struct FMulticastDelegate OnParticleSpawn; // 0x9c8(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0x9d8(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0x9e8(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0x9f8(0x10)
	struct FVector *133f54f9c1; // 0xa08(0x0c)
	struct FVector *03cebd95ff; // 0xa14(0x0c)
	float WarmupTime; // 0xa20(0x04)
	float *21f822f4fc; // 0xa24(0x04)
	char pad_A29[0x3]; // 0xa29(0x03)
	float SecondsBeforeInactive; // 0xa2c(0x04)
	char pad_A30[0x4]; // 0xa30(0x04)
	float *28094ea3db; // 0xa34(0x04)
	char pad_A38[0x8]; // 0xa38(0x08)
	enum class *d8246e725f LODMethod; // 0xa40(0x01)
	enum class EParticleSignificanceLevel RequiredSignificance; // 0xa41(0x01)
	char pad_A42[0x16]; // 0xa42(0x16)
	struct TArray<struct U*e7dabfb57c*> *69abc3880d; // 0xa58(0x10)
	char pad_A68[0x60]; // 0xa68(0x60)
	float CustomTimeDilation; // 0xac8(0x04)
	char pad_ACC[0x4]; // 0xacc(0x04)
	struct FMulticastDelegate OnSystemFinished; // 0xad0(0x10)
	struct USceneComponent* AutoAttachParent; // 0xae0(0x08)
	struct FName AutoAttachSocketName; // 0xae8(0x08)
	enum class EAttachLocation AutoAttachLocationType; // 0xaf0(0x01)
	enum class EAttachmentRule AutoAttachLocationRule; // 0xaf1(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0xaf2(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0xaf3(0x01)
	char pad_AF4[0xfc]; // 0xaf4(0xfc)

	void *af8f2729da(); // Function Engine.ParticleSystemComponent.*af8f2729da // Final|Native|Public|BlueprintCallable // @ game+0x65034e0
	struct FVector *9016027b91(); // Function Engine.ParticleSystemComponent.*9016027b91 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f17b0
	void *8f3b7c4a62(int32 emitterIndex); // Function Engine.ParticleSystemComponent.*8f3b7c4a62 // Native|Public|BlueprintCallable // @ game+0x6503b50
	void *23a60326d0(); // Function Engine.ParticleSystemComponent.*23a60326d0 // Final|Native|Public|BlueprintCallable // @ game+0x6508510
	struct FName *8dd7e62706(); // Function Engine.ParticleSystemComponent.*8dd7e62706 // Final|Native|Public|BlueprintCallable // @ game+0x6506e8c
	void *4a5ebe8285(int32 emitterIndex, struct FVector OutTargetPoint); // Function Engine.ParticleSystemComponent.*4a5ebe8285 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f18f4
	void *5da5ae8752(struct FName ParameterName); // Function Engine.ParticleSystemComponent.*5da5ae8752 // Final|Native|Public|BlueprintCallable // @ game+0x6502a1c
	struct FVector *9c94a2ccab(); // Function Engine.ParticleSystemComponent.*9c94a2ccab // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6504018
	void *bb78f88ed2(int32 emitterIndex); // Function Engine.ParticleSystemComponent.*bb78f88ed2 // Native|Public|BlueprintCallable // @ game+0x6503ef0
	void *8fbddde934(struct FName ParameterName); // Function Engine.ParticleSystemComponent.*8fbddde934 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6508e94
	int32 *b5b49ed10a(); // Function Engine.ParticleSystemComponent.*b5b49ed10a // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6503918
	void *cc31ded515(); // Function Engine.ParticleSystemComponent.*cc31ded515 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5384
	void *e0804ccf30(struct FName InName); // Function Engine.ParticleSystemComponent.*e0804ccf30 // Native|Public|BlueprintCallable // @ game+0x64edcd8
	enum class *37b72e83a6 *5e90794424(); // Function Engine.ParticleSystemComponent.*5e90794424 // Final|Native|Public|BlueprintCallable // @ game+0x65087e8
	int32 *91864b1bfc(float OutTargetStrength); // Function Engine.ParticleSystemComponent.*91864b1bfc // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1a38
	void *81aa9c9e01(int32 SourceIndex); // Function Engine.ParticleSystemComponent.*81aa9c9e01 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1670
	struct FName SetFloatParameter(); // Function Engine.ParticleSystemComponent.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x6505830
	void *dcd1366a40(); // Function Engine.ParticleSystemComponent.*dcd1366a40 // Final|Native|Public|BlueprintCallable // @ game+0x64effc0
	void *87d95bf46d(int32 emitterIndex); // Function Engine.ParticleSystemComponent.*87d95bf46d // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6503c78
	struct FVector *5a5e9d1b9b(); // Function Engine.ParticleSystemComponent.*5a5e9d1b9b // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6503db4
	enum class *37b72e83a6 *56ca8e695c(); // Function Engine.ParticleSystemComponent.*56ca8e695c // Final|Native|Public|BlueprintCallable // @ game+0x64e9ab0
	void *ffaa140e86(int32 emitterIndex, struct FVector OutTangentPoint); // Function Engine.ParticleSystemComponent.*ffaa140e86 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1b78
	struct FVector *c5fef19fba(); // Function Engine.ParticleSystemComponent.*c5fef19fba // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64f04c8
	void *d026be7050(int32 emitterIndex); // Function Engine.ParticleSystemComponent.*d026be7050 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1434
	struct FVector *d65be3badb(); // Function Engine.ParticleSystemComponent.*d65be3badb // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6503a14
	struct FName *0a63d98f02(); // Function Engine.ParticleSystemComponent.*0a63d98f02 // Final|Native|Public|BlueprintCallable // @ game+0x6503398
	void *2b029e7d25(struct FName ParameterName); // Function Engine.ParticleSystemComponent.*2b029e7d25 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6504dc4
	struct FVector *d513b656ba(); // Function Engine.ParticleSystemComponent.*d513b656ba // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f152c
	struct FName *4bf991f689(); // Function Engine.ParticleSystemComponent.*4bf991f689 // Native|Public|BlueprintCallable // @ game+0x650546c
	void *5a1c100be7(struct FName InName); // Function Engine.ParticleSystemComponent.*5a1c100be7 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f513c
};

// Class Engine.DefaultPawn
// Size: 0x470 (Inherited: 0x448)
struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x448(0x04)
	float BaseLookUpRate; // 0x44c(0x04)
	struct UPawnMovementComponent* MovementComponent; // 0x450(0x08)
	struct USphereComponent* CollisionComponent; // 0x458(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x460(0x08)
	char bAddDefaultMovementBindings : 1; // 0x468(0x01)
	char pad_468_1 : 7; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)

	void *b7bc4778c8(); // Function Engine.DefaultPawn.*b7bc4778c8 // Native|Public|BlueprintCallable // @ game+0x64fdd50
	void MoveRight(); // Function Engine.DefaultPawn.MoveRight // Native|Public|BlueprintCallable // @ game+0x64fdcb4
	void MoveForward(); // Function Engine.DefaultPawn.MoveForward // Native|Public|BlueprintCallable // @ game+0x64fdc18
	void *100c4e8c95(); // Function Engine.DefaultPawn.*100c4e8c95 // Final|Native|Public|BlueprintCallable // @ game+0x650a718
	void *f6d7ca130e(); // Function Engine.DefaultPawn.*f6d7ca130e // Final|Native|Public|BlueprintCallable // @ game+0x64fd924
};

// Class Engine.SpectatorPawn
// Size: 0x470 (Inherited: 0x470)
struct ASpectatorPawn : ADefaultPawn {
};

// Class Engine.FloatingPawnMovement
// Size: 0x290 (Inherited: 0x280)
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x278(0x04)
	float Acceleration; // 0x27c(0x04)
	float Deceleration; // 0x280(0x04)
	float TurningBoost; // 0x284(0x04)
	char *764464ee1e : 1; // 0x288(0x01)
};

// Class Engine.SpectatorPawnMovement
// Size: 0x2a0 (Inherited: 0x290)
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char *4c44f735ef : 1; // 0x290(0x01)
	char pad_290_1 : 7; // 0x290(0x01)
	char pad_291[0xf]; // 0x291(0x0f)
};

// Class Engine.SplineComponent
// Size: 0xa80 (Inherited: 0x990)
struct USplineComponent : UPrimitiveComponent {
	struct FSplineCurves *224d387ba3; // 0x988(0x60)
	struct FInterpCurveVector SplineInfo; // 0x9e8(0x18)
	struct FInterpCurveQuat SplineRotInfo; // 0xa00(0x18)
	struct FInterpCurveVector SplineScaleInfo; // 0xa18(0x18)
	struct FInterpCurveFloat SplineReparamTable; // 0xa30(0x18)
	bool bAllowSplineEditingPerInstance; // 0xa48(0x01)
	int32 *f8e649923a; // 0xa4c(0x04)
	bool *f2a977ad56; // 0xa50(0x01)
	bool *2893c957ff; // 0xa51(0x01)
	float *cdd4b1628c; // 0xa54(0x04)
	float Duration; // 0xa58(0x04)
	bool bStationaryEndpoints; // 0xa5c(0x01)
	bool *1e587541cf; // 0xa5d(0x01)
	bool *49d508f387; // 0xa5e(0x01)
	bool bInputSplinePointsToConstructionScript; // 0xa5f(0x01)
	bool bDrawDebug; // 0xa60(0x01)
	bool *c5ecf4ffed; // 0xa61(0x01)
	bool bLoopPositionOverride; // 0xa62(0x01)
	float *f6c05ad304; // 0xa64(0x04)
	struct FVector DefaultUpVector; // 0xa68(0x0c)
	char pad_A76[0xa]; // 0xa76(0x0a)

	void *d673f600e5(float Distance); // Function Engine.SplineComponent.*d673f600e5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652f940
	enum class ESplineCoordinateSpace *8ecb0fa226(); // Function Engine.SplineComponent.*8ecb0fa226 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6525c8c
	void *fdf9e67fe7(); // Function Engine.SplineComponent.*fdf9e67fe7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65102c8
	void *6ead38f785(float Distance); // Function Engine.SplineComponent.*6ead38f785 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652f628
	enum class ESplineCoordinateSpace *7408da665f(); // Function Engine.SplineComponent.*7408da665f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65254c4
	int32 *8b88c5dc14(); // Function Engine.SplineComponent.*8b88c5dc14 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652cde4
	void *13b012d465(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*13b012d465 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652fa40
	bool *ce47968eb4(); // Function Engine.SplineComponent.*ce47968eb4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6531d04
	struct FVector *c6a9416911(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*c6a9416911 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6525d90
	void *3710f7f090(struct FVector WorldLocation); // Function Engine.SplineComponent.*3710f7f090 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6525f88
	struct FVector *a9c9c456e5(); // Function Engine.SplineComponent.*a9c9c456e5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6525ec0
	enum class ESplineCoordinateSpace *8c35d1f7f5(); // Function Engine.SplineComponent.*8c35d1f7f5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652a064
	void *1660da9917(int32 Index); // Function Engine.SplineComponent.*1660da9917 // Final|Native|Public|BlueprintCallable // @ game+0x65490fc
	void *3195c7e671(); // Function Engine.SplineComponent.*3195c7e671 // Final|Native|Public|BlueprintCallable // @ game+0x651c6a8
	void *d87c8d6bad(); // Function Engine.SplineComponent.*d87c8d6bad // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65361e8
	int32 *f4439078ed(struct FVector LocalLocation); // Function Engine.SplineComponent.*f4439078ed // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652cfb0
	bool *ce6002c659(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*ce6002c659 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6532024
	float *33bc2a12af(); // Function Engine.SplineComponent.*33bc2a12af // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652af34
	void *4c7f033e12(bool bUseConstantVelocity); // Function Engine.SplineComponent.*4c7f033e12 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6533258
	void *bed6cf0bd0(float Time); // Function Engine.SplineComponent.*bed6cf0bd0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6532fd0
	bool *7c17f0a4fe(); // Function Engine.SplineComponent.*7c17f0a4fe // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652a260
	void *6aa9eb9d3e(); // Function Engine.SplineComponent.*6aa9eb9d3e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65305f8
	void *94d245fc05(); // Function Engine.SplineComponent.*94d245fc05 // Final|Native|Public|BlueprintCallable // @ game+0x6563954
	enum class ESplineCoordinateSpace *8310eb6ecf(); // Function Engine.SplineComponent.*8310eb6ecf // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652ccc0
	float *46b2142b51(); // Function Engine.SplineComponent.*46b2142b51 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65330e0
	void *66b7b68804(); // Function Engine.SplineComponent.*66b7b68804 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x650507c
	void *ade3704335(); // Function Engine.SplineComponent.*ade3704335 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651063c
	enum class ESplineCoordinateSpace *0934b4ef0b(); // Function Engine.SplineComponent.*0934b4ef0b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652d2a8
	float *a905ae0b50(); // Function Engine.SplineComponent.*a905ae0b50 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65335d8
	void *5e679265d5(struct FVector Location); // Function Engine.SplineComponent.*5e679265d5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652d108
	int32 *959750a15a(); // Function Engine.SplineComponent.*959750a15a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6530620
	enum class ESplineCoordinateSpace *f3e6cc0da5(); // Function Engine.SplineComponent.*f3e6cc0da5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652ccc0
	void SetSplinePointType(int32 PointIndex); // Function Engine.SplineComponent.SetSplinePointType // Final|Native|Public|BlueprintCallable // @ game+0x6557410
	struct FSplinePoint *9608efba38(); // Function Engine.SplineComponent.*9608efba38 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x651007c
	float *646a979561(); // Function Engine.SplineComponent.*646a979561 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652fda4
	void AddSplinePoint(struct FVector Position); // Function Engine.SplineComponent.AddSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6510368
	enum class ESplineCoordinateSpace *746eb47343(); // Function Engine.SplineComponent.*746eb47343 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6527b1c
	enum class ESplineCoordinateSpace *1a380c46df(); // Function Engine.SplineComponent.*1a380c46df // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65104b0
	void *19cbff31f5(); // Function Engine.SplineComponent.*19cbff31f5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65577a8
	bool *f774fd53f0(); // Function Engine.SplineComponent.*f774fd53f0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65334c8
	void *403b71cbdf(); // Function Engine.SplineComponent.*403b71cbdf // Final|Native|Public|BlueprintCallable // @ game+0x654ffc4
	void *1933a88fb1(); // Function Engine.SplineComponent.*1933a88fb1 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6557344
	enum class ESplineCoordinateSpace *b8941565d3(int32 PointIndex); // Function Engine.SplineComponent.*b8941565d3 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6558684
	bool *4bd1c9f850(); // Function Engine.SplineComponent.*4bd1c9f850 // Final|Native|Public|BlueprintCallable // @ game+0x654e578
	void *f8859c177b(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*f8859c177b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6525b68
	void *2924338abc(bool bInClosedLoop); // Function Engine.SplineComponent.*2924338abc // Final|Native|Public|BlueprintCallable // @ game+0x654e670
	bool *501b9a11ab(); // Function Engine.SplineComponent.*501b9a11ab // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652fb3c
	void *9e14956702(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.*9e14956702 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652f808
	enum class ESplineCoordinateSpace *56f46e0ef4(); // Function Engine.SplineComponent.*56f46e0ef4 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6526234
	enum class ESplineCoordinateSpace *1b5eaab969(bool bUseConstantVelocity); // Function Engine.SplineComponent.*1b5eaab969 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652f4e0
	void *4504979742(); // Function Engine.SplineComponent.*4504979742 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65255e8
	float *eda55d2a75(); // Function Engine.SplineComponent.*eda55d2a75 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6533408
	struct TArray<struct FVector> *f34dca8240(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*f34dca8240 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6557540
	void *7f0073e87c(int32 PointIndex); // Function Engine.SplineComponent.*7f0073e87c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65331a0
	enum class ESplineCoordinateSpace *47ea0cb673(); // Function Engine.SplineComponent.*47ea0cb673 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652f2ac
	int32 *c7a047602a(); // Function Engine.SplineComponent.*c7a047602a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x655a758
	void *256a13f2fc(struct FVector InLocation); // Function Engine.SplineComponent.*256a13f2fc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65542d0
	bool *7ec8746925(); // Function Engine.SplineComponent.*7ec8746925 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652d4a4
	void *c4855fe4f1(); // Function Engine.SplineComponent.*c4855fe4f1 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6510198
	void *8a52c93cee(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*8a52c93cee // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6532918
	enum class ESplineCoordinateSpace *b453b9e47e(); // Function Engine.SplineComponent.*b453b9e47e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652d3a8
	void *03a69497f9(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*03a69497f9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6531e78
	int32 *6bb1fc9463(); // Function Engine.SplineComponent.*6bb1fc9463 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652fe5c
	enum class ESplineCoordinateSpace *c80b104bf3(); // Function Engine.SplineComponent.*c80b104bf3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65327e4
	void *4c5972a9ee(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*4c5972a9ee // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6529e28
	void *5ff9d6f2ec(int32 PointIndex); // Function Engine.SplineComponent.*5ff9d6f2ec // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652a164
	int32 *569d25225d(); // Function Engine.SplineComponent.*569d25225d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652a59c
	void *ff1b454d4c(int32 PointIndex, struct FVector InLeaveTangent); // Function Engine.SplineComponent.*ff1b454d4c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6558810
	enum class ESplineCoordinateSpace *fb6ac9935d(); // Function Engine.SplineComponent.*fb6ac9935d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6559558
	enum class ESplineCoordinateSpace *1c8bc77998(); // Function Engine.SplineComponent.*1c8bc77998 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65326e4
	void GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652dadc
	enum class ESplineCoordinateSpace *25a54483b3(); // Function Engine.SplineComponent.*25a54483b3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652f71c
	enum class ESplineCoordinateSpace *df6beb22a8(); // Function Engine.SplineComponent.*df6beb22a8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6525694
	void *735d907566(struct FVector WorldLocation, bool bUseScale); // Function Engine.SplineComponent.*735d907566 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65260ac
	float *79680f8e7c(); // Function Engine.SplineComponent.*79680f8e7c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6532f10
	bool *4d42091b21(); // Function Engine.SplineComponent.*4d42091b21 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652ff30
	void *bbab5ff12a(); // Function Engine.SplineComponent.*bbab5ff12a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x654f7f8
	enum class ESplineCoordinateSpace *eda3f2865f(); // Function Engine.SplineComponent.*eda3f2865f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6530e28
	void *a14ead8189(); // Function Engine.SplineComponent.*a14ead8189 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x650507c
	void *cb028b19c9(int32 PointIndex); // Function Engine.SplineComponent.*cb028b19c9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652f3ac
	bool *92b5343530(float Time); // Function Engine.SplineComponent.*92b5343530 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6530f28
};

// Class Engine.MaterialInterface
// Size: 0x70 (Inherited: 0x28)
struct UMaterialInterface : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USubsurfaceProfile* SubsurfaceProfile; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct F*5f515f80fd LightmassSettings; // 0x40(0x14)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*ec346d410d> *500d5753a1; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)

	void *ea747ae92c(); // Function Engine.MaterialInterface.*ea747ae92c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5d80
	void *dab70eafa3(); // Function Engine.MaterialInterface.*dab70eafa3 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x64f139c
};

// Class Engine.MaterialInstance
// Size: 0x1e0 (Inherited: 0x70)
struct UMaterialInstance : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x70(0x08)
	struct UMaterialInterface* Parent; // 0x78(0x08)
	char *eaf1df3c01 : 1; // 0x80(0x01)
	char *72e525d9b9 : 1; // 0x80(0x01)
	char pad_80_2 : 1; // 0x80(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0x80(0x01)
	char pad_80_4 : 4; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct F*2f1f908113> FontParameterValues; // 0x88(0x10)
	struct TArray<struct F*40219917e5> ScalarParameterValues; // 0x98(0x10)
	struct TArray<struct F*a504c41607> TextureParameterValues; // 0xa8(0x10)
	struct TArray<struct F*ded523a6c8> VectorParameterValues; // 0xb8(0x10)
	bool bOverrideBaseProperties; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xcc(0x24)
	char pad_F0[0xf0]; // 0xf0(0xf0)
};

// Class Engine.MaterialInstanceConstant
// Size: 0x1e0 (Inherited: 0x1e0)
struct UMaterialInstanceConstant : UMaterialInstance {
};

// Class Engine.MaterialExpression
// Size: 0x60 (Inherited: 0x28)
struct UMaterialExpression : UObject {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *cea6bfdf23 : 1; // 0x4c(0x01)
	char *bd8ba0fbe0 : 1; // 0x4c(0x01)
	char *557ea9fb7b : 1; // 0x4c(0x01)
	char *ae1d26f90d : 1; // 0x4c(0x01)
	char *9e48e7b9cf : 1; // 0x4c(0x01)
	char *eb86d6d948 : 1; // 0x4c(0x01)
	char *40d454dad4 : 1; // 0x4c(0x01)
	char *90211ea547 : 1; // 0x4c(0x01)
	char *f80a46dfc4 : 1; // 0x4d(0x01)
	char *895388f7c0 : 1; // 0x4d(0x01)
	char *8316a56514 : 1; // 0x4d(0x01)
	char pad_4D_3 : 5; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*2f7623087a
// Size: 0x60 (Inherited: 0x60)
struct U*2f7623087a : UMaterialExpression {
};

// Class Engine.*f8e25a8f91
// Size: 0x60 (Inherited: 0x60)
struct U*f8e25a8f91 : UMaterialExpression {
};

// Class Engine.*528374bf77
// Size: 0x28 (Inherited: 0x28)
struct U*528374bf77 : UObject {

	void Activate(); // Function Engine.*528374bf77.Activate // Native|Public|BlueprintCallable // @ game+0x57e39e0
};

// Class Engine.BlueprintGeneratedClass
// Size: 0x3b8 (Inherited: 0x2b0)
struct UBlueprintGeneratedClass : UClass {
	int32 NumReplicatedProperties; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<struct U*f9ce876360*> *ba400071f6; // 0x2b8(0x10)
	struct TArray<struct UActorComponent*> *3cf3d68327; // 0x2c8(0x10)
	struct TArray<struct U*bd91982c84*> *196fc7dd02; // 0x2d8(0x10)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x2e8(0x08)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x2f0(0x08)
	struct UStructProperty* *1720bc2967; // 0x2f8(0x08)
	struct UFunction* *ebc54076cf; // 0x300(0x08)
	struct TArray<struct F*a3aa512dca> FastCallPairs; // 0x308(0x10)
	bool *b4339b2bed; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct TMap<struct FName, struct F*1489c052de> *8f11984777; // 0x320(0x50)
	bool *fafb82cdff; // 0x370(0x01)
	char pad_371[0x47]; // 0x371(0x47)
};

// Class Engine.CameraActor
// Size: 0x990 (Inherited: 0x3e8)
struct ACameraActor : AActor {
	enum class EAutoReceiveInput *0307a8293d; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UCameraComponent* CameraComponent; // 0x3f0(0x08)
	struct USceneComponent* SceneComponent; // 0x3f8(0x08)
	char pad_400[0x8]; // 0x400(0x08)
	char bConstrainAspectRatio : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float AspectRatio; // 0x40c(0x04)
	float FOVAngle; // 0x410(0x04)
	float PostProcessBlendWeight; // 0x414(0x04)
	char pad_418[0x8]; // 0x418(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x420(0x570)

	void *3333a6d15b(); // Function Engine.CameraActor.*3333a6d15b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1344
};

// Class Engine.UserDefinedStruct
// Size: 0x100 (Inherited: 0xf0)
struct UUserDefinedStruct : UScriptStruct {
	struct FGuid Guid; // 0xf0(0x10)
};

// Class Engine.AISystemBase
// Size: 0x48 (Inherited: 0x28)
struct UAISystemBase : UObject {
	struct FStringClassReference AISystemClassName; // 0x28(0x10)
	struct FName AISystemModuleName; // 0x38(0x08)
	bool bInstantiateAISystemOnClient; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.*10128294dc
// Size: 0x48 (Inherited: 0x28)
struct U*10128294dc : UObject {
	struct TArray<struct F*6c9a74e1a9> Areas; // 0x28(0x10)
	struct F*0fdc6dd237 IncludeFlags; // 0x38(0x04)
	struct F*0fdc6dd237 ExcludeFlags; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class Engine.*6080c6b78b
// Size: 0x38 (Inherited: 0x28)
struct U*6080c6b78b : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Engine.Model
// Size: 0x560 (Inherited: 0x28)
struct UModel : UObject {
	char pad_28[0x538]; // 0x28(0x538)
};

// Class Engine.*99e10d1a78
// Size: 0x28 (Inherited: 0x28)
struct U*99e10d1a78 : UObject {
};

// Class Engine.*a31a367d3b
// Size: 0x28 (Inherited: 0x28)
struct U*a31a367d3b : UObject {
};

// Class Engine.EdGraphNode
// Size: 0xa0 (Inherited: 0x28)
struct UEdGraphNode : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> DeprecatedPins; // 0x38(0x10)
	int32 *453eb07774; // 0x48(0x04)
	int32 *e8a7c66564; // 0x4c(0x04)
	int32 *41bb7e52ed; // 0x50(0x04)
	int32 *8ee5020f45; // 0x54(0x04)
	char *2c238b1825 : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString NodeComment; // 0x60(0x10)
	bool *fd61023e55; // 0x70(0x01)
	bool *ae1d26f90d; // 0x71(0x01)
	bool *60f8cb15f4; // 0x72(0x01)
	char pad_73[0x1]; // 0x73(0x01)
	int32 *93a1fb6944; // 0x74(0x04)
	struct FString *df390b77be; // 0x78(0x10)
	struct FGuid NodeGuid; // 0x88(0x10)
	enum class ENodeAdvancedPins *0aa90830dc; // 0x98(0x01)
	enum class ENodeEnabledState *9b625cf000; // 0x99(0x01)
	bool *2e79c61b80; // 0x9a(0x01)
	bool bIsNodeEnabled; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.EdGraphPin_Deprecated
// Size: 0x140 (Inherited: 0x28)
struct UEdGraphPin_Deprecated : UObject {
	struct FString PinName; // 0x28(0x10)
	struct FString PinToolTip; // 0x38(0x10)
	enum class EEdGraphPinDirection Direction; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct F*dcaec3c3e2 PinType; // 0x50(0x80)
	struct FString DefaultValue; // 0xd0(0x10)
	struct FString *89bfb03fc3; // 0xe0(0x10)
	struct UObject* *a79607a05b; // 0xf0(0x08)
	struct FText *7bd11a9b4a; // 0xf8(0x18)
	struct TArray<struct UEdGraphPin_Deprecated*> *e9dc81a250; // 0x110(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> *1934011d8f; // 0x120(0x10)
	struct UEdGraphPin_Deprecated* *2ddfa7bea5; // 0x130(0x08)
	struct UEdGraphPin_Deprecated* *9a0ee59ff0; // 0x138(0x08)
};

// Class Engine.*40ddb9dd5e
// Size: 0x28 (Inherited: 0x28)
struct U*40ddb9dd5e : UInterface {
};

// Class Engine.Level
// Size: 0x330 (Inherited: 0x28)
struct ULevel : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FGuid *75e39f3690; // 0x30(0x10)
	char pad_40[0xc0]; // 0x40(0xc0)
	struct TArray<struct FGuid> *e58b8f8bd9; // 0x100(0x10)
	struct ALevelScriptActor* LevelScriptActor; // 0x110(0x08)
	char pad_118[0x10]; // 0x118(0x10)
	struct ANavigationObjectBase* *f01e8b66cf; // 0x128(0x08)
	char pad_130_0 : 2; // 0x130(0x01)
	char *d629bf8c8b : 1; // 0x130(0x01)
	char bIsVisible : 1; // 0x130(0x01)
	char bLocked : 1; // 0x130(0x01)
	char *d752c4753f : 1; // 0x130(0x01)
	char pad_130_6 : 2; // 0x130(0x01)
	char pad_131[0x17]; // 0x131(0x17)
	float *372f07566a; // 0x148(0x04)
	char pad_14C[0xc]; // 0x14c(0x0c)
	struct UWorld* *16f61c64e0; // 0x158(0x08)
	char pad_160[0x30]; // 0x160(0x30)
	struct FIntVector *bea6ba621d; // 0x190(0x0c)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct UModel* Model; // 0x1a0(0x08)
	char pad_1A8[0x8]; // 0x1a8(0x08)
	int32 *8b1a426e8e; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct U*9a60b08820* ActorCluster; // 0x1b8(0x08)
	struct ANavigationObjectBase* *a3f1f8c9bf; // 0x1c0(0x08)
	char pad_1C8[0x78]; // 0x1c8(0x78)
	struct TArray<struct FVector> *1b020b5803; // 0x240(0x10)
	bool *863c6a3c52; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	float *3496d6af4a; // 0x254(0x04)
	char pad_258[0x8]; // 0x258(0x08)
	struct UMapBuildDataRegistry* *65a9a6cf12; // 0x260(0x08)
	int32 *752abb6ca7; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TArray<struct U*83352a2b89*> *7aa5102cd3; // 0x270(0x10)
	struct TArray<struct U*e52d54c0e0*> *6eb75bf41b; // 0x280(0x10)
	char pad_290[0x70]; // 0x290(0x70)
	struct AWorldSettings* WorldSettings; // 0x300(0x08)
	char pad_308[0x8]; // 0x308(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x310(0x10)
	char pad_320[0x10]; // 0x320(0x10)
};

// Class Engine.*067b0e25b7
// Size: 0x28 (Inherited: 0x28)
struct U*067b0e25b7 : UInterface {
};

// Class Engine.AmbientSound
// Size: 0x3f0 (Inherited: 0x3e8)
struct AAmbientSound : AActor {
	struct UAudioComponent* AudioComponent; // 0x3e8(0x08)

	void AdjustVolume(float AdjustVolumeDuration); // Function Engine.AmbientSound.AdjustVolume // Final|Native|Public|BlueprintCallable // @ game+0x64e99c4
	float FadeOut(); // Function Engine.AmbientSound.FadeOut // Final|Native|Public|BlueprintCallable // @ game+0x64f0160
	float *46088c3b7b(); // Function Engine.AmbientSound.*46088c3b7b // Final|Native|Public|BlueprintCallable // @ game+0x64f0070
	void Play(); // Function Engine.AmbientSound.Play // Final|Native|Public|BlueprintCallable // @ game+0x64fe564
	void Stop(); // Function Engine.AmbientSound.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6509cc4
};

// Class Engine.AutoBenchSettings
// Size: 0x40 (Inherited: 0x28)
struct UAutoBenchSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*cc01e78d73> Settings; // 0x30(0x10)
};

// Class Engine.AutoBenchControlActor
// Size: 0x3e8 (Inherited: 0x3e8)
struct AAutoBenchControlActor : AActor {
};

// Class Engine.*c03ab1e88c
// Size: 0x28 (Inherited: 0x28)
struct U*c03ab1e88c : UObject {
};

// Class Engine.*5351691cca
// Size: 0x28 (Inherited: 0x28)
struct U*5351691cca : UInterface {
};

// Class Engine.BillboardComponent
// Size: 0x9b0 (Inherited: 0x990)
struct UBillboardComponent : UPrimitiveComponent {
	struct UTexture2D* Sprite; // 0x988(0x08)
	char bIsScreenSizeScaled : 1; // 0x990(0x01)
	float ScreenSize; // 0x994(0x04)
	float U; // 0x998(0x04)
	float UL; // 0x99c(0x04)
	float V; // 0x9a0(0x04)
	float VL; // 0x9a4(0x04)
	struct FColor Color; // 0x9a8(0x04)

	int32 *b34a91956b(); // Function Engine.BillboardComponent.*b34a91956b // Native|Public|BlueprintCallable // @ game+0x6508350
	void *5a310660a0(int32 NewUL); // Function Engine.BillboardComponent.*5a310660a0 // Native|Public|BlueprintCallable // @ game+0x6508a10
	struct FColor SetColor(); // Function Engine.BillboardComponent.SetColor // Final|Native|Public|HasDefaults // @ game+0x6504bec
	void *73296e1372(); // Function Engine.BillboardComponent.*73296e1372 // Native|Public|BlueprintCallable // @ game+0x65082bc
};

// Class Engine.*1d5d887209
// Size: 0x28 (Inherited: 0x28)
struct U*1d5d887209 : UInterface {
};

// Class Engine.StaticMesh
// Size: 0x170 (Inherited: 0x28)
struct UStaticMesh : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	int32 MinLOD; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x48(0x10)
	struct TArray<struct F*9b3c03c912> StaticMaterials; // 0x58(0x10)
	float *65706d282d; // 0x68(0x04)
	int32 LightMapResolution; // 0x6c(0x04)
	int32 *9ed26776d4; // 0x70(0x04)
	float *2927a40459; // 0x74(0x04)
	struct UBodySetup* BodySetup; // 0x78(0x08)
	int32 *3c7ddc148a; // 0x80(0x04)
	char *4c18bc5776 : 1; // 0x84(0x01)
	char *bdcbbf1dd0 : 1; // 0x84(0x01)
	char bStripComplexCollisionForConsole : 1; // 0x84(0x01)
	char *1c6acdad28 : 1; // 0x84(0x01)
	char bRequiresAreaWeightedSampling : 1; // 0x84(0x01)
	char pad_84_5 : 3; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float LpvBiasMultiplier; // 0x88(0x04)
	bool *72b429015b; // 0x8c(0x01)
	char pad_8D[0x33]; // 0x8d(0x33)
	struct TArray<struct U*c90fb310e3*> Sockets; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)
	struct FVector *70f0883a57; // 0xe0(0x0c)
	struct FVector *a395dacd15; // 0xec(0x0c)
	struct FBoxSphereBounds *12c825a915; // 0xf8(0x1c)
	bool *3b56ad7171; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	int32 *46b6d7aa69; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x120(0x10)
	struct UNavCollision* NavCollision; // 0x130(0x08)
	struct F*9156f9f612 *9dbf5c9c9c; // 0x138(0x28)
	struct TArray<struct UMaterialInstanceConstant*> *7949b827cb; // 0x160(0x10)

	void *a8ad6da3c5(); // Function Engine.StaticMesh.*a8ad6da3c5 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1cbc
	void *3fdb8d2cbb(); // Function Engine.StaticMesh.*3fdb8d2cbb // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1dc4
	int32 *237c992952(); // Function Engine.StaticMesh.*237c992952 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5478
	void *10b99163ef(); // Function Engine.StaticMesh.*10b99163ef // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5408
};

// Class Engine.*fd5ad6fe6e
// Size: 0x570 (Inherited: 0x460)
struct U*fd5ad6fe6e : USceneComponent {
	struct FVector Extents; // 0x458(0x0c)
	struct FVector FadeExtents_Neg; // 0x464(0x0c)
	struct FVector FadeExtents_Pos; // 0x470(0x0c)
	bool bOutdoorTransition; // 0x47c(0x01)
	float VolumeAlpha; // 0x480(0x04)
	float Brightness; // 0x484(0x04)
	float SkyIntensity; // 0x488(0x04)
	int32 Priority; // 0x48c(0x04)
	struct F*8f50c6ced6 AmbientCube2; // 0x490(0xc8)
	char pad_55D[0x13]; // 0x55d(0x13)

	void *b8587251c4(); // Function Engine.*fd5ad6fe6e.*b8587251c4 // Final|Native|Public // @ game+0xb8b52c
};

// Class Engine.GIVolumesContainerComponent
// Size: 0x470 (Inherited: 0x460)
struct UGIVolumesContainerComponent : USceneComponent {
	char pad_460[0x10]; // 0x460(0x10)
};

// Class Engine.BoxGIVolume
// Size: 0x3f0 (Inherited: 0x3e8)
struct ABoxGIVolume : AActor {
	struct U*fd5ad6fe6e* VolumeComponent; // 0x3e8(0x08)
};

// Class Engine.BrushShape
// Size: 0x420 (Inherited: 0x420)
struct ABrushShape : ABrush {
};

// Class Engine.AudioVolume
// Size: 0x468 (Inherited: 0x420)
struct AAudioVolume : AVolume {
	float Priority; // 0x420(0x04)
	char bEnabled : 1; // 0x424(0x01)
	char pad_424_1 : 7; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	struct FReverbSettings Settings; // 0x428(0x18)
	struct F*391dcb41c3 AmbientZoneSettings; // 0x440(0x24)
	char pad_464[0x4]; // 0x464(0x04)

	void SetReverbSettings(); // Function Engine.AudioVolume.SetReverbSettings // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6508164
	void *ae23d1077e(); // Function Engine.AudioVolume.*ae23d1077e // Final|Native|Public|BlueprintCallable // @ game+0x65055e8
	void SetPriority(); // Function Engine.AudioVolume.SetPriority // Final|Native|Public|BlueprintCallable // @ game+0x6507be8
	void *402694ef73(); // Function Engine.AudioVolume.*402694ef73 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6506300
	void OnRep_bEnabled(); // Function Engine.AudioVolume.OnRep_bEnabled // Final|Native|Private // @ game+0x57c0ec0
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
	struct TArray<struct F*dcfd236c03> CullDistances; // 0x420(0x10)
	char bEnabled : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float CullDistanceForLODActor; // 0x434(0x04)
	float CullDistanceForLODActorTooFar; // 0x438(0x04)
	bool bUseActorBound; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	float IgnoreActorBoundSize; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
};

// Class Engine.LevelStreamingVolume
// Size: 0x438 (Inherited: 0x420)
struct ALevelStreamingVolume : AVolume {
	struct TArray<struct FName> StreamingLevelNames; // 0x420(0x10)
	char bEditorPreVisOnly : 1; // 0x430(0x01)
	char bDisabled : 1; // 0x430(0x01)
	char pad_430_2 : 6; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	enum class *7d7353c297 StreamingUsage; // 0x434(0x01)
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
	struct FNavAgentSelector SupportedAgents; // 0x420(0x04)
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
	float DamagePerSec; // 0x43c(0x04)
	struct UClass* DamageType; // 0x440(0x08)
	float PainInterval; // 0x448(0x04)
	char bEntryPain : 1; // 0x44c(0x01)
	char *d23089194a : 1; // 0x44c(0x01)
	char pad_44C_2 : 6; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	struct AController* *a06dab2416; // 0x450(0x08)
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

// Class Engine.*92425e8a49
// Size: 0x28 (Inherited: 0x28)
struct U*92425e8a49 : UInterface {
};

// Class Engine.PostProcessVolume
// Size: 0x9b0 (Inherited: 0x420)
struct APostProcessVolume : AVolume {
	char pad_420[0x10]; // 0x420(0x10)
	struct FPostProcessSettings Settings; // 0x430(0x570)
	float Priority; // 0x9a0(0x04)
	float BlendRadius; // 0x9a4(0x04)
	float BlendWeight; // 0x9a8(0x04)
	char bEnabled : 1; // 0x9ac(0x01)
	char bUnbound : 1; // 0x9ac(0x01)
	char pad_9AC_2 : 6; // 0x9ac(0x01)
	char pad_9AD[0x3]; // 0x9ad(0x03)

	void *c9d474ee9d(); // Function Engine.PostProcessVolume.*c9d474ee9d // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x650a860
	TScriptInterface<struct UBlendableInterface> *279e5ee7e9(); // Function Engine.PostProcessVolume.*279e5ee7e9 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x64e8fa8
};

// Class Engine.PrecomputedVisibilityOverrideVolume
// Size: 0x450 (Inherited: 0x420)
struct APrecomputedVisibilityOverrideVolume : AVolume {
	struct TArray<struct AActor*> OverrideVisibleActors; // 0x420(0x10)
	struct TArray<struct AActor*> OverrideInvisibleActors; // 0x430(0x10)
	struct TArray<struct FName> OverrideInvisibleLevels; // 0x440(0x10)
};

// Class Engine.PrecomputedVisibilityVolume
// Size: 0x420 (Inherited: 0x420)
struct APrecomputedVisibilityVolume : AVolume {
};

// Class Engine.TriggerVolume
// Size: 0x420 (Inherited: 0x420)
struct ATriggerVolume : AVolume {
};

// Class Engine.*f914516f16
// Size: 0x28 (Inherited: 0x28)
struct U*f914516f16 : UInterface {
};

// Class Engine.CameraShake
// Size: 0x160 (Inherited: 0x28)
struct UCameraShake : UObject {
	char *b704adf1d7 : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *3494df5f25; // 0x2c(0x04)
	float *abaaa2b446; // 0x30(0x04)
	float *8fa9951745; // 0x34(0x04)
	struct F*2f8ce11fce *082d0a181c; // 0x38(0x24)
	struct F*1b91ec26de *5b7a8129a5; // 0x5c(0x24)
	struct F*e34584cb7c *2282ddc178; // 0x80(0x0c)
	float AnimPlayRate; // 0x8c(0x04)
	float *f2b647a17e; // 0x90(0x04)
	float *bc412c6d67; // 0x94(0x04)
	float *624c126bbe; // 0x98(0x04)
	float *7f3f2c4230; // 0x9c(0x04)
	struct UCameraAnim* Anim; // 0xa0(0x08)
	char bRandomAnimSegment : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x17]; // 0xa9(0x17)
	struct APlayerCameraManager* CameraOwner; // 0xc0(0x08)
	char pad_C8[0x80]; // 0xc8(0x80)
	float ShakeScale; // 0x148(0x04)
	float OscillatorTimeRemaining; // 0x14c(0x04)
	struct U*6ec4247e64* AnimInst; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)

	void ReceiveIsFinished(); // Function Engine.CameraShake.ReceiveIsFinished // Native|Event|Public|BlueprintEvent|Const // @ game+0xda1b7c
	void ReceivePlayShake(); // Function Engine.CameraShake.ReceivePlayShake // Event|Public|BlueprintEvent // @ game+0x293938
	void ReceiveStopShake(); // Function Engine.CameraShake.ReceiveStopShake // Event|Public|BlueprintEvent // @ game+0x293938
	void BlueprintUpdateCameraShake(float DeltaTime, struct F*5cde951495 POV); // Function Engine.CameraShake.BlueprintUpdateCameraShake // Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
};

// Class Engine.*37a897c2a6
// Size: 0x280 (Inherited: 0x1f0)
struct U*37a897c2a6 : UActorComponent {
	char pad_1F0[0x70]; // 0x1f0(0x70)
	struct TArray<struct F*526a26a06d> *526a26a06d; // 0x260(0x10)
	char pad_270[0x10]; // 0x270(0x10)

	struct FKey *4e1e11b6f1(); // Function Engine.*37a897c2a6.*4e1e11b6f1 // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x64f76bc
	struct FKey *5c6989adde(); // Function Engine.*37a897c2a6.*5c6989adde // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x64f76bc
	void OnInputOwnerEndPlayed(); // Function Engine.*37a897c2a6.OnInputOwnerEndPlayed // Final|Native|Private // @ game+0x64fde0c
	void *fd267e57f5(); // Function Engine.*37a897c2a6.*fd267e57f5 // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2784
	struct FKey *d0cf4daf38(); // Function Engine.*37a897c2a6.*d0cf4daf38 // Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2a74
	float *e4664e535a(); // Function Engine.*37a897c2a6.*e4664e535a // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f288c
	void *8f23584155(float DeltaX); // Function Engine.*37a897c2a6.*8f23584155 // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f29a4
	struct FKey *3eafaa8a5c(); // Function Engine.*37a897c2a6.*3eafaa8a5c // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x64f76bc
	struct FKey *444e3d14dd(); // Function Engine.*37a897c2a6.*444e3d14dd // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2784
	void *45b87fdbeb(float LocationX); // Function Engine.*37a897c2a6.*45b87fdbeb // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f6a9c
};

// Class Engine.CurveFloat
// Size: 0xa8 (Inherited: 0x30)
struct UCurveFloat : UCurveBase {
	struct FRichCurve *aa79e9f954; // 0x30(0x70)
	bool *03e61e74a0; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	float *df1965b3ab(); // Function Engine.CurveFloat.*df1965b3ab // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2c18
	void *6e95764d2e(); // Function Engine.CurveFloat.*6e95764d2e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xa788b0
};

// Class Engine.DecalActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ADecalActor : AActor {
	struct UDecalComponent* Decal; // 0x3e8(0x08)

	void CreateDynamicMaterialInstance(); // Function Engine.DecalActor.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x578b6e4
	void *08eaa25dbb(); // Function Engine.DecalActor.*08eaa25dbb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2bd8
	void *8c06158828(); // Function Engine.DecalActor.*8c06158828 // Final|Native|Public|BlueprintCallable // @ game+0x6505344
};

// Class Engine.DestructibleActor
// Size: 0x408 (Inherited: 0x3e8)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x3e8(0x08)
	char bAffectNavigation : 1; // 0x3f0(0x01)
	char pad_3F0_1 : 7; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FMulticastDelegate OnActorFracture; // 0x3f8(0x10)
};

// Class Engine.DistanceFieldCapture
// Size: 0x3f0 (Inherited: 0x3e8)
struct ADistanceFieldCapture : AActor {
	struct U*04412402be* CaptureComponent; // 0x3e8(0x08)
};

// Class Engine.DocumentationActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ADocumentationActor : AActor {
	char pad_3E8[0x8]; // 0x3e8(0x08)
};

// Class Engine.Emitter
// Size: 0x438 (Inherited: 0x3e8)
struct AEmitter : AActor {
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x3e8(0x08)
	char *fe9f93d03d : 1; // 0x3f0(0x01)
	char bPostUpdateTickGroup : 1; // 0x3f0(0x01)
	char *d244e51257 : 1; // 0x3f0(0x01)
	char pad_3F0_3 : 5; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FMulticastDelegate OnParticleSpawn; // 0x3f8(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0x408(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0x418(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0x428(0x10)

	void OnRep_bCurrentlyActive(); // Function Engine.Emitter.OnRep_bCurrentlyActive // Native|Public // @ game+0x57e06f0
	void *4c6494a5d4(); // Function Engine.Emitter.*4c6494a5d4 // Final|Native|Public|BlueprintCallable // @ game+0x650a528
	void Activate(); // Function Engine.Emitter.Activate // Final|Native|Public|BlueprintCallable // @ game+0x64e7838
	struct FName SetFloatParameter(); // Function Engine.Emitter.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x650573c
	struct FName *5da5ae8752(); // Function Engine.Emitter.*5da5ae8752 // Final|Native|Public|BlueprintCallable // @ game+0x650292c
	void IsActive(); // Function Engine.Emitter.IsActive // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f73e0
	void Deactivate(); // Function Engine.Emitter.Deactivate // Final|Native|Public|BlueprintCallable // @ game+0x64ede60
	void OnParticleSystemFinished(); // Function Engine.Emitter.OnParticleSystemFinished // Native|Public // @ game+0x5736128
	struct FName *8dd7e62706(); // Function Engine.Emitter.*8dd7e62706 // Final|Native|Public|BlueprintCallable // @ game+0x6506d9c
	struct FName *8fbddde934(); // Function Engine.Emitter.*8fbddde934 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6508d94
	void *23a60326d0(); // Function Engine.Emitter.*23a60326d0 // Native|Public|BlueprintCallable // @ game+0x58212c8
	void *2b029e7d25(); // Function Engine.Emitter.*2b029e7d25 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6504cd0
};

// Class Engine.EmitterCameraLensEffectBase
// Size: 0x4a0 (Inherited: 0x438)
struct AEmitterCameraLensEffectBase : AEmitter {
	struct UParticleSystem* *a5befacac0; // 0x438(0x08)
	struct UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x440(0x08)
	struct APlayerCameraManager* *a21c9e72ea; // 0x448(0x08)
	struct FTransform RelativeTransform; // 0x450(0x30)
	float *bd3b0c7f5b; // 0x480(0x04)
	char *d06ba45ca2 : 1; // 0x484(0x01)
	char *c37e3bf0fd : 1; // 0x484(0x01)
	char pad_484_2 : 6; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	struct TArray<struct UClass*> *519f075044; // 0x488(0x10)
	float DistFromCamera; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
};

// Class Engine.FoliageBlockingVolumeActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct AFoliageBlockingVolumeActor : AActor {
	struct U*e5fd81cb47* FoliageBlockingVolumeComponent; // 0x3e8(0x08)
};

// Class Engine.DebugCameraHUD
// Size: 0x4d0 (Inherited: 0x4d0)
struct ADebugCameraHUD : AHUD {
};

// Class Engine.AtmosphericFog
// Size: 0x3f0 (Inherited: 0x3e8)
struct AAtmosphericFog : AInfo {
	struct UAtmosphericFogComponent* AtmosphericFogComponent; // 0x3e8(0x08)
};

// Class Engine.ExponentialHeightFog
// Size: 0x3f8 (Inherited: 0x3e8)
struct AExponentialHeightFog : AInfo {
	struct UExponentialHeightFogComponent* Component; // 0x3e8(0x08)
	char bEnabled : 1; // 0x3f0(0x01)
	char pad_3F0_1 : 7; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled // Native|Public // @ game+0xd9c218
};

// Class Engine.GameNetworkManager
// Size: 0x470 (Inherited: 0x3e8)
struct AGameNetworkManager : AInfo {
	int32 *ef5d0439e3; // 0x3e8(0x04)
	float *0f386d2a64; // 0x3ec(0x04)
	int32 TotalNetBandwidth; // 0x3f0(0x04)
	int32 MinDynamicBandwidth; // 0x3f4(0x04)
	int32 MaxDynamicBandwidth; // 0x3f8(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x3fc(0x01)
	char *24141e1a3d : 1; // 0x3fc(0x01)
	char pad_3FC_2 : 6; // 0x3fc(0x01)
	char pad_3FD[0x3]; // 0x3fd(0x03)
	float StandbyRxCheatTime; // 0x400(0x04)
	float StandbyTxCheatTime; // 0x404(0x04)
	int32 BadPingThreshold; // 0x408(0x04)
	float PercentMissingForRxStandby; // 0x40c(0x04)
	float PercentMissingForTxStandby; // 0x410(0x04)
	float PercentForBadPing; // 0x414(0x04)
	float JoinInProgressStandbyWaitTime; // 0x418(0x04)
	float MoveRepSize; // 0x41c(0x04)
	float MAXPOSITIONERRORSQUARED; // 0x420(0x04)
	float MAXNEARZEROVELOCITYSQUARED; // 0x424(0x04)
	float CLIENTADJUSTUPDATECOST; // 0x428(0x04)
	float MAXCLIENTUPDATEINTERVAL; // 0x42c(0x04)
	float MaxMoveDeltaTime; // 0x430(0x04)
	float ClientNetSendMoveDeltaTime; // 0x434(0x04)
	float ClientNetSendMoveDeltaTimeThrottled; // 0x438(0x04)
	int32 ClientNetSendMoveThrottleAtNetSpeed; // 0x43c(0x04)
	int32 ClientNetSendMoveThrottleOverPlayerCount; // 0x440(0x04)
	bool ClientAuthorativePosition; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	float ClientErrorUpdateRateLimit; // 0x448(0x04)
	bool bMovementTimeDiscrepancyDetection; // 0x44c(0x01)
	bool bMovementTimeDiscrepancyResolution; // 0x44d(0x01)
	char pad_44E[0x2]; // 0x44e(0x02)
	float MovementTimeDiscrepancyResolutionMinFPS; // 0x450(0x04)
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x454(0x04)
	float MovementTimeDiscrepancyMinTimeMargin; // 0x458(0x04)
	float MovementTimeDiscrepancyResolutionRate; // 0x45c(0x04)
	float MovementTimeDiscrepancyDriftAllowance; // 0x460(0x04)
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x464(0x01)
	bool bUseDistanceBasedRelevancy; // 0x465(0x01)
	char pad_466[0xa]; // 0x466(0x0a)
};

// Class Engine.SkyLight
// Size: 0x3f8 (Inherited: 0x3e8)
struct ASkyLight : AInfo {
	struct USkyLightComponent* LightComponent; // 0x3e8(0x08)
	char bEnabled : 1; // 0x3f0(0x01)
	char pad_3F0_1 : 7; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled // Native|Public // @ game+0xd9c218
};

// Class Engine.WindDirectionalSource
// Size: 0x3f0 (Inherited: 0x3e8)
struct AWindDirectionalSource : AInfo {
	struct U*87fcc6ad93* Component; // 0x3e8(0x08)
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
	char *b0505159ee : 1; // 0x3f0(0x01)
	char bGlobalGravitySet : 1; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float KillZ; // 0x3f4(0x04)
	struct AInfo* LevelAttribute; // 0x3f8(0x08)
	struct UClass* KillZDamageType; // 0x400(0x08)
	float *d7eefc9bf3; // 0x408(0x04)
	float GlobalGravityZ; // 0x40c(0x04)
	struct UClass* DefaultPhysicsVolumeClass; // 0x410(0x08)
	struct UClass* PhysicsCollisionHandlerClass; // 0x418(0x08)
	struct UClass* DefaultGameMode; // 0x420(0x08)
	struct UClass* *b8c5a160b5; // 0x428(0x08)
	int32 *5f020cc76c; // 0x430(0x04)
	char *6b7b864f7c : 1; // 0x434(0x01)
	char pad_434_1 : 7; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct FVector DefaultColorScale; // 0x438(0x0c)
	float *1280ea6a2b; // 0x444(0x04)
	float *e4288e06b5; // 0x448(0x04)
	float *23c1dada24; // 0x44c(0x04)
	char *08151265f3 : 1; // 0x450(0x01)
	char *9039853fed : 1; // 0x450(0x01)
	char pad_450_2 : 6; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	int32 *55baa3b104; // 0x454(0x04)
	enum class *192e2d8642 *76954e4444; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	char *72546282f6 : 1; // 0x45c(0x01)
	char pad_45C_1 : 7; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct FLightmassWorldInfoSettings LightmassSettings; // 0x460(0x44)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FReverbSettings DefaultReverbSettings; // 0x4a8(0x18)
	struct F*391dcb41c3 DefaultAmbientZoneSettings; // 0x4c0(0x24)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct USoundMix* *1d56151c26; // 0x4e8(0x08)
	float WorldToMeters; // 0x4f0(0x04)
	float MonoCullingDistance; // 0x4f4(0x04)
	struct U*88ca9ca6c8* BookMarks[0x0a]; // 0x4f8(0x50)
	float TimeDilation; // 0x548(0x04)
	float *50d737ab84; // 0x54c(0x04)
	float DemoPlayTimeDilation; // 0x550(0x04)
	float MinGlobalTimeDilation; // 0x554(0x04)
	float MaxGlobalTimeDilation; // 0x558(0x04)
	char pad_55C[0x8]; // 0x55c(0x08)
	struct FBox MBPBounds; // 0x564(0x1c)
	char bOverrideDefaultBroadphaseSettings : 1; // 0x580(0x01)
	char pad_580_1 : 7; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	char *c77babf064 : 1; // 0x584(0x01)
	char *1426f77fb2 : 1; // 0x584(0x01)
	char pad_584_2 : 6; // 0x584(0x01)
	char pad_585[0x3]; // 0x585(0x03)
	struct TArray<struct F*9916c97180> *1ce8b2a2b2; // 0x588(0x10)
	struct FMulticastDelegate *469d335ea0; // 0x598(0x10)
	struct FMulticastDelegate *1748cae803; // 0x5a8(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x5b8(0x10)
	struct APlayerState* *df11340cef; // 0x5c8(0x08)

	void TakeMBPBounds(); // Function Engine.WorldSettings.TakeMBPBounds // Native|Event|Public|BlueprintEvent // @ game+0xd9c218
	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ // Native|Public // @ game+0x57e06f0
};

// Class Engine.InstancedDeferredDecalActor
// Size: 0x420 (Inherited: 0x3e8)
struct AInstancedDeferredDecalActor : AActor {
	bool bUseInstancePool; // 0x3e8(0x01)
	bool bUseDynamicInstance; // 0x3e9(0x01)
	char pad_3EA[0x6]; // 0x3ea(0x06)
	struct UMaterialInterface* SharedMaterial; // 0x3f0(0x08)
	struct U*e256cf905f* RootDecalComponent; // 0x3f8(0x08)
	struct TArray<struct U*e256cf905f*> decals; // 0x400(0x10)
	char pad_410[0x10]; // 0x410(0x10)

	void *08eaa25dbb(); // Function Engine.InstancedDeferredDecalActor.*08eaa25dbb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f2c00
	void *8c06158828(); // Function Engine.InstancedDeferredDecalActor.*8c06158828 // Final|Native|Public|BlueprintCallable // @ game+0x65053dc
	void *aa1f8c0f63(); // Function Engine.InstancedDeferredDecalActor.*aa1f8c0f63 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x572ccd8
	void *a5fc070c25(struct FVector4 InstanceTransform); // Function Engine.InstancedDeferredDecalActor.*a5fc070c25 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x64e8ca4
	void *87d82523e3(); // Function Engine.InstancedDeferredDecalActor.*87d82523e3 // Final|Native|Public|BlueprintCallable // @ game+0x573e640
	void *298b138397(); // Function Engine.InstancedDeferredDecalActor.*298b138397 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x572cd14
	void *10e8719841(); // Function Engine.InstancedDeferredDecalActor.*10e8719841 // Final|Native|Public|BlueprintCallable // @ game+0x6508d04
	void CreateDynamicMaterialInstance(); // Function Engine.InstancedDeferredDecalActor.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x578b6e4
};

// Class Engine.InstancedSplineDecalActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct AInstancedSplineDecalActor : AActor {
	struct U*955d6d8679* InstancedSplineDecalComponent; // 0x3e8(0x08)
};

// Class Engine.LevelBlockLandscapeGizmoActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALevelBlockLandscapeGizmoActor : AActor {
	struct U*a821866557* LandscapeGizmoComponent; // 0x3e8(0x08)
};

// Class Engine.LevelBlocksDataActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALevelBlocksDataActor : AActor {
	struct U*22e9884031* LevelBlocksDataComponent; // 0x3e8(0x08)
};

// Class Engine.LevelBlockSpawnedActor
// Size: 0x3e8 (Inherited: 0x3e8)
struct ALevelBlockSpawnedActor : AActor {
};

// Class Engine.LevelBlockSpawnPointActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALevelBlockSpawnPointActor : AActor {
	struct U*66c5994ae5* SpawnPointComponent; // 0x3e8(0x08)
};

// Class Engine.LevelBounds
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALevelBounds : AActor {
	bool *89ef5dea50; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
};

// Class Engine.Light
// Size: 0x3f8 (Inherited: 0x3e8)
struct ALight : AActor {
	struct ULightComponent* LightComponent; // 0x3e8(0x08)
	char bEnabled : 1; // 0x3f0(0x01)
	char pad_3F0_1 : 7; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)

	void *ae23d1077e(); // Function Engine.Light.*ae23d1077e // Final|Native|Public|BlueprintCallable // @ game+0x65056a4
	void SetBrightness(); // Function Engine.Light.SetBrightness // Final|Native|Public|BlueprintCallable // @ game+0x65042fc
	void *daad0fc665(); // Function Engine.Light.*daad0fc665 // Final|Native|Public|BlueprintCallable // @ game+0x65066b0
	void *c7a28b5330(); // Function Engine.Light.*c7a28b5330 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64f497c
	void *b65a4f4795(); // Function Engine.Light.*b65a4f4795 // Final|Native|Public|BlueprintCallable // @ game+0x6504540
	void *1c7afaf549(); // Function Engine.Light.*1c7afaf549 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x650657c
	void *5cb7804e44(); // Function Engine.Light.*5cb7804e44 // Final|Native|Public|BlueprintCallable // @ game+0x650674c
	void OnRep_bEnabled(); // Function Engine.Light.OnRep_bEnabled // Native|Public // @ game+0xd9c218
	void *904fc8a6cf(); // Function Engine.Light.*904fc8a6cf // Final|Native|Public|BlueprintCallable // @ game+0x6502d64
	void *b7a3e9bcec(); // Function Engine.Light.*b7a3e9bcec // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65067e0
	void *ede83a5642(); // Function Engine.Light.*ede83a5642 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f1df8
	void *8afa85e688(); // Function Engine.Light.*8afa85e688 // Final|Native|Public|BlueprintCallable // @ game+0x650a5a4
	void IsEnabled(); // Function Engine.Light.IsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f77ec
};

// Class Engine.DirectionalLight
// Size: 0x3f8 (Inherited: 0x3f8)
struct ADirectionalLight : ALight {
};

// Class Engine.PointLight
// Size: 0x400 (Inherited: 0x3f8)
struct APointLight : ALight {
	struct UPointLightComponent* PointLightComponent; // 0x3f8(0x08)

	void *760d3b45fc(); // Function Engine.PointLight.*760d3b45fc // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6506614
	void SetRadius(); // Function Engine.PointLight.SetRadius // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6507d18
};

// Class Engine.spotlight
// Size: 0x400 (Inherited: 0x3f8)
struct Aspotlight : ALight {
	struct USpotLightComponent* SpotLightComponent; // 0x3f8(0x08)

	void *ee40750dcb(); // Function Engine.spotlight.*ee40750dcb // Final|Native|Public|BlueprintCallable // @ game+0x65073c8
	void *cae3ab155a(); // Function Engine.spotlight.*cae3ab155a // Final|Native|Public|BlueprintCallable // @ game+0x6506264
};

// Class Engine.GeneratedMeshAreaLight
// Size: 0x400 (Inherited: 0x400)
struct AGeneratedMeshAreaLight : Aspotlight {
};

// Class Engine.LightmassPortal
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALightmassPortal : AActor {
	struct U*f7fff1da2a* PortalComponent; // 0x3e8(0x08)
};

// Class Engine.LODActor
// Size: 0x420 (Inherited: 0x3e8)
struct ALODActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x3e8(0x08)
	struct TArray<struct AActor*> SubActors; // 0x3f0(0x10)
	float LODDrawDistance; // 0x400(0x04)
	int32 LODLevel; // 0x404(0x04)
	struct TArray<struct UObject*> SubObjects; // 0x408(0x10)
	char pad_418[0x8]; // 0x418(0x08)
};

// Class Engine.MaterialInstanceActor
// Size: 0x3f8 (Inherited: 0x3e8)
struct AMaterialInstanceActor : AActor {
	struct TArray<struct AActor*> TargetActors; // 0x3e8(0x10)
};

// Class Engine.MatineeActor
// Size: 0x490 (Inherited: 0x3e8)
struct AMatineeActor : AActor {
	struct UInterpData* MatineeData; // 0x3e8(0x08)
	struct FName *ed619d8d37; // 0x3f0(0x08)
	float PlayRate; // 0x3f8(0x04)
	char bPlayOnLevelLoad : 1; // 0x3fc(0x01)
	char bForceStartPos : 1; // 0x3fc(0x01)
	char pad_3FC_2 : 6; // 0x3fc(0x01)
	char pad_3FD[0x3]; // 0x3fd(0x03)
	float ForceStartPosition; // 0x400(0x04)
	char bLooping : 1; // 0x404(0x01)
	char bRewindOnPlay : 1; // 0x404(0x01)
	char bNoResetOnRewind : 1; // 0x404(0x01)
	char bRewindIfAlreadyPlaying : 1; // 0x404(0x01)
	char bDisableRadioFilter : 1; // 0x404(0x01)
	char bClientSideOnly : 1; // 0x404(0x01)
	char bSkipUpdateIfNotVisible : 1; // 0x404(0x01)
	char bIsSkippable : 1; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	int32 PreferredSplitScreenNum; // 0x408(0x04)
	char bDisableMovementInput : 1; // 0x40c(0x01)
	char bDisableLookAtInput : 1; // 0x40c(0x01)
	char bHidePlayer : 1; // 0x40c(0x01)
	char bHideHud : 1; // 0x40c(0x01)
	char pad_40C_4 : 4; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	struct TArray<struct F*a6ac1c6a52> GroupActorInfos; // 0x410(0x10)
	char *c6dca7b0ac : 1; // 0x420(0x01)
	char pad_420_1 : 7; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct TArray<struct U*a529baa140*> *ad78250d7d; // 0x428(0x10)
	struct TArray<struct F*7583eb68ff> CameraCuts; // 0x438(0x10)
	char bIsPlaying : 1; // 0x448(0x01)
	char *fbf73c90fe : 1; // 0x448(0x01)
	char *ea8de7c53c : 1; // 0x448(0x01)
	char *c0d612e00f : 1; // 0x448(0x01)
	char pad_448_4 : 4; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float InterpPosition; // 0x44c(0x04)
	char pad_450[0x4]; // 0x450(0x04)
	bool *f18e97cbb0; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct FMulticastDelegate OnPlay; // 0x458(0x10)
	struct FMulticastDelegate OnStop; // 0x468(0x10)
	struct FMulticastDelegate OnPause; // 0x478(0x10)
	char pad_488[0x8]; // 0x488(0x08)

	void Stop(); // Function Engine.MatineeActor.Stop // Native|Public|BlueprintCallable // @ game+0x581a36c
	void Play(); // Function Engine.MatineeActor.Play // Native|Public|BlueprintCallable // @ game+0x57e06f0
	void SetPosition(); // Function Engine.MatineeActor.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x6507b04
	void Pause(); // Function Engine.MatineeActor.Pause // Native|Public|BlueprintCallable // @ game+0x57d529c
	struct FString *ac3660091c(); // Function Engine.MatineeActor.*ac3660091c // Final|Native|Public|BlueprintCallable // @ game+0x64efdcc
	void *b873863dac(); // Function Engine.MatineeActor.*b873863dac // Native|Public|BlueprintCallable // @ game+0x65069b8
	void *76ad3d2497(); // Function Engine.MatineeActor.*76ad3d2497 // Native|Public|BlueprintCallable // @ game+0x57c0ec0
	void Reverse(); // Function Engine.MatineeActor.Reverse // Native|Public|BlueprintCallable // @ game+0x581a384
};

// Class Engine.MatineeActorCameraAnim
// Size: 0x498 (Inherited: 0x490)
struct AMatineeActorCameraAnim : AMatineeActor {
	struct UCameraAnim* CameraAnim; // 0x490(0x08)
};

// Class Engine.MinimapLabelActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct AMinimapLabelActor : AActor {
	struct U*fb8768b9e3* MinimapLabelComponent; // 0x3e8(0x08)
};

// Class Engine.MinimapObjectActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct AMinimapObjectActor : AActor {
	struct U*2a70fa0ff4* MinimapObjectComponent; // 0x3e8(0x08)
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

// Class Engine.*2f017b220d
// Size: 0x28 (Inherited: 0x28)
struct U*2f017b220d : UInterface {
};

// Class Engine.NavigationTestingActor
// Size: 0x4f0 (Inherited: 0x3e8)
struct ANavigationTestingActor : AActor {
	char pad_3E8[0x10]; // 0x3e8(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x3f8(0x08)
	struct U*cc0bd43bfb* InvokerComponent; // 0x400(0x08)
	char bActAsNavigationInvoker : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct F*afffc9221e *9522b55f52; // 0x410(0x20)
	struct FVector *17a26b51b0; // 0x430(0x0c)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct ANavigationData* *ffe00a80d5; // 0x440(0x08)
	struct FVector ProjectedLocation; // 0x448(0x0c)
	char bProjectedLocationValid : 1; // 0x454(0x01)
	char *170c8dccad : 1; // 0x454(0x01)
	char *c9b0f25139 : 1; // 0x454(0x01)
	char *65da9c2d3a : 1; // 0x454(0x01)
	char *6d0a57bf2b : 1; // 0x454(0x01)
	char *db7dfa87be : 1; // 0x454(0x01)
	char *2acc25c9ca : 1; // 0x454(0x01)
	char *d0be58058a : 1; // 0x454(0x01)
	char *deb4083d8f : 1; // 0x455(0x01)
	char pad_455_1 : 7; // 0x455(0x01)
	char pad_456[0x2]; // 0x456(0x02)
	enum class *79356f9b57 *c8b1e99c31; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	struct FVector2D *9fed367721; // 0x45c(0x08)
	char bPathExist : 1; // 0x464(0x01)
	char bPathIsPartial : 1; // 0x464(0x01)
	char bPathSearchOutOfNodes : 1; // 0x464(0x01)
	char pad_464_3 : 5; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	float PathfindingTime; // 0x468(0x04)
	float PathCost; // 0x46c(0x04)
	int32 PathfindingSteps; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x478(0x08)
	struct UClass* *7692f634d9; // 0x480(0x08)
	int32 *014b2d12c2; // 0x488(0x04)
	float *ebb8bfdd10; // 0x48c(0x04)
	char pad_490[0x60]; // 0x490(0x60)
};

// Class Engine.*3f3fffc028
// Size: 0x50 (Inherited: 0x28)
struct U*3f3fffc028 : UObject {
	struct TArray<struct FNavigationLink> Links; // 0x28(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Engine.*aa434726bd
// Size: 0x28 (Inherited: 0x28)
struct U*aa434726bd : UInterface {
};

// Class Engine.Note
// Size: 0x3e8 (Inherited: 0x3e8)
struct ANote : AActor {
};

// Class Engine.ParticleSystem
// Size: 0x138 (Inherited: 0x28)
struct UParticleSystem : UObject {
	enum class *f89e63963b *fefa20f8b9; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float UpdateTime_FPS; // 0x2c(0x04)
	float *8f0e28019c; // 0x30(0x04)
	float WarmupTime; // 0x34(0x04)
	float *21f822f4fc; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UParticleEmitter*> Emitters; // 0x40(0x10)
	struct UParticleSystemComponent* PreviewComponent; // 0x50(0x08)
	struct UInterpCurveEdSetup* *452adc132e; // 0x58(0x08)
	char *b26ee705f9 : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float *90aa4a8cd7; // 0x64(0x04)
	enum class *d8246e725f LODMethod; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<float> *82d1be6fd8; // 0x70(0x10)
	char *f732c69cb0 : 1; // 0x80(0x01)
	char *7ce8c12334 : 1; // 0x80(0x01)
	char pad_80_2 : 6; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct F*e0932b265f> LODSettings; // 0x88(0x10)
	char *5dc8873204 : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FBox *1f185e8990; // 0x9c(0x1c)
	float *59ac52c16d; // 0xb8(0x04)
	char *6f65f215ed : 1; // 0xbc(0x01)
	char *3bb92c6166 : 1; // 0xbc(0x01)
	char *c33c32ffb0 : 1; // 0xbc(0x01)
	char *929df16d7c : 1; // 0xbc(0x01)
	char pad_BC_4 : 4; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float Delay; // 0xc0(0x04)
	float *3213565296; // 0xc4(0x04)
	char *e09743159a : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	bool *85750bce6d; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	uint32 *c82184e00f; // 0xd0(0x04)
	enum class EParticleSystemInsignificanceReaction *7f4e5ed33f; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float *39e1995bad; // 0xd8(0x04)
	enum class EParticleSignificanceLevel *144225e53c; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FVector MacroUVPosition; // 0xe0(0x0c)
	float MacroUVRadius; // 0xec(0x04)
	enum class *cc65e5572c *eec2ad73a0; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FBox *bc013cca12; // 0xf4(0x1c)
	struct TArray<struct F*f3c706b9ad> *dabc75d870; // 0x110(0x10)
	struct TArray<struct F*e7e18997c1> *37ed026c86; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)

	void *cf24414c7e(struct UClass* TypeData); // Function Engine.ParticleSystem.*cf24414c7e // Final|Native|Public|BlueprintCallable // @ game+0x64ed8a4
};

// Class Engine.ParticleEventManager
// Size: 0x3e8 (Inherited: 0x3e8)
struct AParticleEventManager : AActor {
};

// Class Engine.SkeletalMesh
// Size: 0x2e8 (Inherited: 0x28)
struct USkeletalMesh : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	struct USkeleton* Skeleton; // 0x48(0x08)
	struct FBoxSphereBounds *b904c73f0f; // 0x50(0x1c)
	struct FBoxSphereBounds *12c825a915; // 0x6c(0x1c)
	struct FVector PositiveBoundsExtension; // 0x88(0x0c)
	struct FVector NegativeBoundsExtension; // 0x94(0x0c)
	struct TArray<struct F*e5b9c0d039> Materials; // 0xa0(0x10)
	struct TArray<struct F*af99d1f376> *471fecffb2; // 0xb0(0x10)
	enum class EAxis *2ede96d7ca; // 0xc0(0x01)
	enum class EAxis *fed1c04ff8; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo; // 0xc8(0x10)
	char bUseFullPrecisionUVs : 1; // 0xd8(0x01)
	char *9e942f2dc8 : 1; // 0xd8(0x01)
	char *cef680e2d8 : 1; // 0xd8(0x01)
	char bEnablePerPolyCollision : 1; // 0xd8(0x01)
	char pad_D8_4 : 4; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UBodySetup* BodySetup; // 0xe0(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0xe8(0x08)
	struct UPhysicsAsset* ShadowPhysicsAsset; // 0xf0(0x08)
	struct TArray<struct U*fb22c585da*> NodeMappingData; // 0xf8(0x10)
	struct TArray<struct UMorphTarget*> MorphTargets; // 0x108(0x10)
	char pad_118[0x168]; // 0x118(0x168)
	struct TArray<struct FClothingAssetData_Legacy> ClothingAssets; // 0x280(0x10)
	struct UClass* PostProcessAnimBlueprint; // 0x290(0x08)
	struct TArray<struct U*00b0d3ce78*> MeshClothingAssets; // 0x298(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x2a8(0x10)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x2c0(0x10)
	char pad_2D0[0x18]; // 0x2d0(0x18)

	void *7e464ef95b(); // Function Engine.SkeletalMesh.*7e464ef95b // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64f3b0c
	void *3fdb8d2cbb(); // Function Engine.SkeletalMesh.*3fdb8d2cbb // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x64f1d98
	int32 *052333dc9e(); // Function Engine.SkeletalMesh.*052333dc9e // Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x64f03a4
	void *6d1a81990d(struct FName InSocketName); // Function Engine.SkeletalMesh.*6d1a81990d // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f030c
	void *86f1a032f3(int32 InSectionIndex); // Function Engine.SkeletalMesh.*86f1a032f3 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7e7c
	int32 *d08c36b4d8(); // Function Engine.SkeletalMesh.*d08c36b4d8 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f62c0
	void *c266ffce79(); // Function Engine.SkeletalMesh.*c266ffce79 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64fddec
	void *d4b1477ab9(struct UBlueprint* SourceAsset); // Function Engine.SkeletalMesh.*d4b1477ab9 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f5220
};

// Class Engine.AnimationAsset
// Size: 0x78 (Inherited: 0x28)
struct UAnimationAsset : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USkeleton* Skeleton; // 0x30(0x08)
	char pad_38[0x20]; // 0x38(0x20)
	struct TArray<struct U*ab57198cce*> MetaData; // 0x58(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x68(0x10)
};

// Class Engine.ReflectionCapture
// Size: 0x3f0 (Inherited: 0x3e8)
struct AReflectionCapture : AActor {
	struct UReflectionCaptureComponent* CaptureComponent; // 0x3e8(0x08)
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
	struct U*24f0deff85* *7f5aa4fa71; // 0x3f0(0x08)
};

// Class Engine.RigidBodyBase
// Size: 0x3e8 (Inherited: 0x3e8)
struct ARigidBodyBase : AActor {
};

// Class Engine.PhysicsConstraintActor
// Size: 0x408 (Inherited: 0x3e8)
struct APhysicsConstraintActor : ARigidBodyBase {
	struct UPhysicsConstraintComponent* ConstraintComp; // 0x3e8(0x08)
	struct AActor* ConstraintActor1; // 0x3f0(0x08)
	struct AActor* ConstraintActor2; // 0x3f8(0x08)
	char bDisableCollision : 1; // 0x400(0x01)
	char pad_400_1 : 7; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
};

// Class Engine.PhysicsThruster
// Size: 0x3f0 (Inherited: 0x3e8)
struct APhysicsThruster : ARigidBodyBase {
	struct UPhysicsThrusterComponent* ThrusterComponent; // 0x3e8(0x08)
};

// Class Engine.RadialForceActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ARadialForceActor : ARigidBodyBase {
	struct URadialForceComponent* ForceComponent; // 0x3e8(0x08)

	void *969ec11312(); // Function Engine.RadialForceActor.*969ec11312 // Native|Public|BlueprintCallable // @ game+0x581a36c
	void *9640c6e4d1(); // Function Engine.RadialForceActor.*9640c6e4d1 // Native|Public|BlueprintCallable // @ game+0x57e06f0
	void *156690bbf1(); // Function Engine.RadialForceActor.*156690bbf1 // Native|Public|BlueprintCallable // @ game+0x581a384
	void *9160b92bf4(); // Function Engine.RadialForceActor.*9160b92bf4 // Native|Public|BlueprintCallable // @ game+0xd9c218
};

// Class Engine.SceneCapture
// Size: 0x3f0 (Inherited: 0x3e8)
struct ASceneCapture : AActor {
	struct UStaticMeshComponent* MeshComp; // 0x3e8(0x08)
};

// Class Engine.PlanarReflection
// Size: 0x400 (Inherited: 0x3f0)
struct APlanarReflection : ASceneCapture {
	struct U*01d4b0021b* PlanarReflectionComponent; // 0x3f0(0x08)
	bool *c073225764; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)

	void OnInterpToggle(); // Function Engine.PlanarReflection.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x64fdee8
};

// Class Engine.SceneCapture2D
// Size: 0x400 (Inherited: 0x3f0)
struct ASceneCapture2D : ASceneCapture {
	struct USceneCaptureComponent2D* CaptureComponent2D; // 0x3f0(0x08)
	struct U*e8224a1e62* *9324a8bb8c; // 0x3f8(0x08)

	void OnInterpToggle(); // Function Engine.SceneCapture2D.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x64fdee8
};

// Class Engine.SceneCaptureCube
// Size: 0x400 (Inherited: 0x3f0)
struct ASceneCaptureCube : ASceneCapture {
	struct USceneCaptureComponentCube* CaptureComponentCube; // 0x3f0(0x08)
	struct U*e8224a1e62* *9324a8bb8c; // 0x3f8(0x08)

	void OnInterpToggle(); // Function Engine.SceneCaptureCube.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x64fdee8
};

// Class Engine.*b585b74def
// Size: 0x28 (Inherited: 0x28)
struct U*b585b74def : UInterface {
};

// Class Engine.SplineMeshActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ASplineMeshActor : AActor {
	struct USplineMeshComponent* SplineMeshComponent; // 0x3e8(0x08)
};

// Class Engine.StaticMeshIndoorVolumeComponent
// Size: 0x4b0 (Inherited: 0x460)
struct UStaticMeshIndoorVolumeComponent : USceneComponent {
	struct UStaticMesh* StaticMesh; // 0x458(0x08)
	char pad_468[0x48]; // 0x468(0x48)
};

// Class Engine.StaticMeshIndoorVolumeContainerComponent
// Size: 0x490 (Inherited: 0x460)
struct UStaticMeshIndoorVolumeContainerComponent : USceneComponent {
	struct TArray<struct UStaticMesh*> StaticMeshes; // 0x458(0x10)
	struct TArray<struct F*77a1aee504> *ce33af8f1c; // 0x468(0x10)
	char pad_480[0x10]; // 0x480(0x10)
};

// Class Engine.StaticMeshIndoorVolume
// Size: 0x3f0 (Inherited: 0x3e8)
struct AStaticMeshIndoorVolume : AActor {
	struct UStaticMeshIndoorVolumeComponent* VolumeComponent; // 0x3e8(0x08)
};

// Class Engine.TextRenderActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ATextRenderActor : AActor {
	struct UTextRenderComponent* TextRender; // 0x3e8(0x08)
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
	struct UVectorFieldComponent* VectorFieldComponent; // 0x3e8(0x08)
};

// Class Engine.ApplicationLifecycleComponent
// Size: 0x240 (Inherited: 0x1f0)
struct UApplicationLifecycleComponent : UActorComponent {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate; // 0x1f0(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate; // 0x200(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x210(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x220(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate; // 0x230(0x10)

	void ApplicationLifetimeDelegate__DelegateSignature(); // DelegateFunction Engine.ApplicationLifecycleComponent.ApplicationLifetimeDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
};

// Class Engine.LevelBlocksData
// Size: 0x38 (Inherited: 0x28)
struct ULevelBlocksData : UObject {
	struct TArray<struct U*5c0419d42f*> *77ab62ecdb; // 0x28(0x10)
};

// Class Engine.*22e9884031
// Size: 0x2b0 (Inherited: 0x1f0)
struct U*22e9884031 : UActorComponent {
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct ULevelBlocksData* LevelBlocksData; // 0x1f8(0x08)
	char pad_200[0x18]; // 0x200(0x18)
	int32 RandomSeed; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct TArray<struct AActor*> *0a9adf0d8e; // 0x220(0x10)
	char pad_230[0x80]; // 0x230(0x80)

	void OnKillcamLoadingFinished(); // Function Engine.*22e9884031.OnKillcamLoadingFinished // Final|Native|Private // @ game+0x64fdf84
	void OnRep_RandomSeed(); // Function Engine.*22e9884031.OnRep_RandomSeed // Final|Native|Private // @ game+0x64fdfd4
};

// Class Engine.*ec3715cf6a
// Size: 0x2e0 (Inherited: 0x240)
struct U*ec3715cf6a : UMovementComponent {
	float Duration; // 0x238(0x04)
	char bPauseOnImpact : 1; // 0x23c(0x01)
	enum class EInterpToBehaviourType BehaviourType; // 0x240(0x01)
	char bForceSubStepping : 1; // 0x244(0x01)
	char pad_245_2 : 6; // 0x245(0x01)
	char pad_246[0x2]; // 0x246(0x02)
	struct FMulticastDelegate OnInterpToReverse; // 0x248(0x10)
	struct FMulticastDelegate OnInterpToStop; // 0x258(0x10)
	struct FMulticastDelegate OnWaitBeginDelegate; // 0x268(0x10)
	struct FMulticastDelegate OnWaitEndDelegate; // 0x278(0x10)
	struct FMulticastDelegate OnResetDelegate; // 0x288(0x10)
	float MaxSimulationTimeStep; // 0x298(0x04)
	int32 MaxSimulationIterations; // 0x29c(0x04)
	struct TArray<struct F*d29c4cc7dc> ControlPoints; // 0x2a0(0x10)
	char pad_2B0[0x30]; // 0x2b0(0x30)

	struct FHitResult OnInterpToStopDelegate__DelegateSignature(); // DelegateFunction Engine.*ec3715cf6a.OnInterpToStopDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	struct FHitResult OnInterpToReverseDelegate__DelegateSignature(); // DelegateFunction Engine.*ec3715cf6a.OnInterpToReverseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void OnInterpToResetDelegate__DelegateSignature(struct FHitResult ImpactResult); // DelegateFunction Engine.*ec3715cf6a.OnInterpToResetDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	struct FHitResult OnInterpToWaitEndDelegate__DelegateSignature(); // DelegateFunction Engine.*ec3715cf6a.OnInterpToWaitEndDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void *33bf471125(); // Function Engine.*ec3715cf6a.*33bf471125 // Final|Native|Public|BlueprintCallable // @ game+0x64f0250
	void *62c3bb2a4a(); // Function Engine.*ec3715cf6a.*62c3bb2a4a // Final|Native|Public|BlueprintCallable // @ game+0x64ff754
	void StopSimulating(); // Function Engine.*ec3715cf6a.StopSimulating // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x650a388
	void OnInterpToWaitBeginDelegate__DelegateSignature(struct FHitResult ImpactResult); // DelegateFunction Engine.*ec3715cf6a.OnInterpToWaitBeginDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
};

// Class Engine.AssetUserData
// Size: 0x28 (Inherited: 0x28)
struct UAssetUserData : UObject {
};

// Class Engine.Skeleton
// Size: 0x3a0 (Inherited: 0x28)
struct USkeleton : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*5968031f66> *7fb9ee21c6; // 0x30(0x10)
	struct TArray<struct FTransform> RefLocalPoses; // 0x40(0x10)
	char pad_50[0x110]; // 0x50(0x110)
	struct FGuid *a59e0eaed2; // 0x160(0x10)
	struct TArray<struct F*2594df2bfb> *7eca19f3ff; // 0x170(0x10)
	struct TArray<struct F*4e0ffd482b> *34b453a8fb; // 0x180(0x10)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x190(0x10)
	char pad_1A0[0x50]; // 0x1a0(0x50)
	struct F*40454bca06 *f2faf74c4e; // 0x1f0(0x50)
	char pad_240[0x18]; // 0x240(0x18)
	struct TArray<struct UBlendProfile*> *b8800209d1; // 0x258(0x10)
	struct TArray<struct F*02c9b626eb> *9def8f1fa8; // 0x268(0x10)
	char pad_278[0x118]; // 0x278(0x118)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x390(0x10)
};

// Class Engine.AnimSequenceBase
// Size: 0xa0 (Inherited: 0x78)
struct UAnimSequenceBase : UAnimationAsset {
	struct TArray<struct FAnimNotifyEvent> Notifies; // 0x78(0x10)
	float SequenceLength; // 0x88(0x04)
	float *3fb217b34a; // 0x8c(0x04)
	struct F*40925e0dd9 *c38187f4a3; // 0x90(0x10)

	void *71e1e0fb6c(); // Function Engine.AnimSequenceBase.*71e1e0fb6c // RequiredAPI|Native|Public|BlueprintCallable // @ game+0x64f601c
};

// Class Engine.*72d705a6ea
// Size: 0xa0 (Inherited: 0xa0)
struct U*72d705a6ea : UAnimSequenceBase {
};

// Class Engine.AnimMontage
// Size: 0x1a8 (Inherited: 0xa0)
struct UAnimMontage : U*72d705a6ea {
	struct FAlphaBlend *37506de2a6; // 0xa0(0x38)
	float BlendInTime; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FAlphaBlend *8465486351; // 0xe0(0x38)
	float BlendOutTime; // 0x118(0x04)
	float *9536f0d0f2; // 0x11c(0x04)
	struct FName SyncGroup; // 0x120(0x08)
	int32 *3f935f4e41; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct F*9623d1fbbe *efd016c608; // 0x130(0x20)
	struct TArray<struct F*2cb2c0879d> *f37f08ef15; // 0x150(0x10)
	struct TArray<struct F*957be081ef> *df0e9a627d; // 0x160(0x10)
	struct TArray<struct FBranchingPoint> BranchingPoints; // 0x170(0x10)
	bool *ee8618634b; // 0x180(0x01)
	bool *045f3da0ef; // 0x181(0x01)
	enum class ERootMotionRootLock *1240d362b2; // 0x182(0x01)
	char pad_183[0x5]; // 0x183(0x05)
	struct TArray<struct F*0b19d470e1> *2d5bf43a31; // 0x188(0x10)
	struct TArray<int32> *4acca54851; // 0x198(0x10)

	void OnMontageClosedMulticaster__DelegateSignature(); // DelegateFunction Engine.AnimMontage.OnMontageClosedMulticaster__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
};

// Class Engine.*35bacd2651
// Size: 0x28 (Inherited: 0x28)
struct U*35bacd2651 : UInterface {
};

// Class Engine.*8a2ca06c2d
// Size: 0x28 (Inherited: 0x28)
struct U*8a2ca06c2d : UInterface {
};

// Class Engine.RotatingMovementComponent
// Size: 0x260 (Inherited: 0x240)
struct URotatingMovementComponent : UMovementComponent {
	struct FRotator RotationRate; // 0x238(0x0c)
	struct FVector PivotTranslation; // 0x244(0x0c)
	char bRotationInLocalSpace : 1; // 0x250(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// Class Engine.*cc0bd43bfb
// Size: 0x200 (Inherited: 0x1f0)
struct U*cc0bd43bfb : UActorComponent {
	float *e325d8fdd9; // 0x1f0(0x04)
	float *fca594223c; // 0x1f4(0x04)
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// Class Engine.*fba5bf26d1
// Size: 0x220 (Inherited: 0x1f0)
struct U*fba5bf26d1 : UActorComponent {
	char pad_1F0[0x24]; // 0x1f0(0x24)
	char *baf88d19fa : 1; // 0x214(0x01)
	char pad_214_1 : 7; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	struct UObject* *698fcbbeb0; // 0x218(0x08)

	void *8f7bbcec02(); // Function Engine.*fba5bf26d1.*8f7bbcec02 // Final|Native|Public|BlueprintCallable // @ game+0x6554c34
};

// Class Engine.*246b5a10fe
// Size: 0x28 (Inherited: 0x28)
struct U*246b5a10fe : UInterface {
};

// Class Engine.NavLinkCustomComponent
// Size: 0x330 (Inherited: 0x220)
struct UNavLinkCustomComponent : U*fba5bf26d1 {
	char pad_220[0x8]; // 0x220(0x08)
	uint32 *909f22dfd7; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct UClass* *5c508acc05; // 0x230(0x08)
	struct UClass* *a5bda1c23c; // 0x238(0x08)
	struct FVector *1769e92a60; // 0x240(0x0c)
	struct FVector *2349b0961e; // 0x24c(0x0c)
	enum class ENavLinkDirection *b27e35d1a5; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	char *e7d1c9f55e : 1; // 0x25c(0x01)
	char *0e849f6476 : 1; // 0x25c(0x01)
	char *012ab3174c : 1; // 0x25c(0x01)
	char *a90bfb5668 : 1; // 0x25c(0x01)
	char pad_25C_4 : 4; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct FVector *ef97c79baa; // 0x260(0x0c)
	struct FVector *e2f2254672; // 0x26c(0x0c)
	struct UClass* *cd8a8eb37b; // 0x278(0x08)
	float *5f597176df; // 0x280(0x04)
	float *0af3690d79; // 0x284(0x04)
	enum class ECollisionChannel *4ecb248482; // 0x288(0x01)
	char pad_289[0xa7]; // 0x289(0xa7)
};

// Class Engine.NavModifierComponent
// Size: 0x250 (Inherited: 0x220)
struct UNavModifierComponent : U*fba5bf26d1 {
	struct UClass* AreaClass; // 0x220(0x08)
	struct FVector *a043c94045; // 0x228(0x0c)
	char pad_234[0x1c]; // 0x234(0x1c)

	void *d8bfb93e76(); // Function Engine.NavModifierComponent.*d8bfb93e76 // Final|Native|Public|BlueprintCallable // @ game+0x654c184
};

// Class Engine.PawnNoiseEmitterComponent
// Size: 0x220 (Inherited: 0x1f0)
struct UPawnNoiseEmitterComponent : UActorComponent {
	char *a6938766d9 : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	struct FVector *090ce4d2bb; // 0x1f4(0x0c)
	float NoiseLifetime; // 0x200(0x04)
	float *8b5f624909; // 0x204(0x04)
	float *dba1797a12; // 0x208(0x04)
	float *fc60bf7914; // 0x20c(0x04)
	float *a03c320bdb; // 0x210(0x04)
	char pad_214[0xc]; // 0x214(0x0c)

	void MakeNoise(struct AActor* NoiseMaker); // Function Engine.PawnNoiseEmitterComponent.MakeNoise // BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653d598
};

// Class Engine.*5732ce881f
// Size: 0x230 (Inherited: 0x1f0)
struct U*5732ce881f : UActorComponent {
	float StrengthMultiplyer; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x1f8(0x08)
	char pad_200[0x30]; // 0x200(0x30)

	void *37ffb5d44e(); // Function Engine.*5732ce881f.*37ffb5d44e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6511508
	void *6b5bfa7118(); // Function Engine.*5732ce881f.*6b5bfa7118 // Final|Native|Public|BlueprintCallable // @ game+0x6556b60
	void *a814512548(); // Function Engine.*5732ce881f.*a814512548 // Final|Native|Public|BlueprintCallable // @ game+0x6558208
	bool *ab50a92911(); // Function Engine.*5732ce881f.*ab50a92911 // Final|Native|Public|BlueprintCallable // @ game+0x6511388
	void *b1be5fe988(); // Function Engine.*5732ce881f.*b1be5fe988 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6528198
	struct F*ad43bd9124 *6c0c8908f5(); // Function Engine.*5732ce881f.*6c0c8908f5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x651160c
};

// Class Engine.PhysicsHandleComponent
// Size: 0x2a0 (Inherited: 0x1f0)
struct UPhysicsHandleComponent : UActorComponent {
	struct UPrimitiveComponent* *f4fcacaee8; // 0x1f0(0x08)
	char pad_1F8[0xc]; // 0x1f8(0x0c)
	char pad_204_0 : 1; // 0x204(0x01)
	char bSoftAngularConstraint : 1; // 0x204(0x01)
	char bSoftLinearConstraint : 1; // 0x204(0x01)
	char bInterpolateTarget : 1; // 0x204(0x01)
	char pad_204_4 : 4; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	float LinearDamping; // 0x208(0x04)
	float LinearStiffness; // 0x20c(0x04)
	float AngularDamping; // 0x210(0x04)
	float AngularStiffness; // 0x214(0x04)
	char pad_218[0x68]; // 0x218(0x68)
	float InterpolationSpeed; // 0x280(0x04)
	char pad_284[0x1c]; // 0x284(0x1c)

	void *03f949c5f5(struct FName InBoneName); // Function Engine.PhysicsHandleComponent.*03f949c5f5 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6533940
	void *8689921e62(); // Function Engine.PhysicsHandleComponent.*8689921e62 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc38020
	struct FName *a3abb229a4(struct FVector GrabLocation); // Function Engine.PhysicsHandleComponent.*a3abb229a4 // RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65337c0
	void *11d4354fa6(); // Function Engine.PhysicsHandleComponent.*11d4354fa6 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6558aa4
	void *52366ff053(); // Function Engine.PhysicsHandleComponent.*52366ff053 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x654b86c
	void *8bded8470b(); // Function Engine.PhysicsHandleComponent.*8bded8470b // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6558bac
	void SetLinearDamping(); // Function Engine.PhysicsHandleComponent.SetLinearDamping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65538f0
	void *693e386da9(); // Function Engine.PhysicsHandleComponent.*693e386da9 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6553d04
	void SetAngularDamping(); // Function Engine.PhysicsHandleComponent.SetAngularDamping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x654b2cc
	void *e94d596143(); // Function Engine.PhysicsHandleComponent.*e94d596143 // RequiredAPI|Native|Public|BlueprintCallable // @ game+0x79cdc8
	struct FVector *747d4692c9(); // Function Engine.PhysicsHandleComponent.*747d4692c9 // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6531070
	void *61f8536435(); // Function Engine.PhysicsHandleComponent.*61f8536435 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6558a00
	void *33d7f82772(struct FName InBoneName); // Function Engine.PhysicsHandleComponent.*33d7f82772 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6533a8c
	void *0965954243(); // Function Engine.PhysicsHandleComponent.*0965954243 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6553064
};

// Class Engine.*0736db87c2
// Size: 0x210 (Inherited: 0x1f0)
struct U*0736db87c2 : UActorComponent {
	struct FMulticastDelegate PlatformChangedToLaptopModeDelegate; // 0x1f0(0x10)
	struct FMulticastDelegate PlatformChangedToTabletModeDelegate; // 0x200(0x10)

	void *c8cb43d3bc(); // Function Engine.*0736db87c2.*c8cb43d3bc // Final|Native|Public|BlueprintCallable // @ game+0x6562194
	void *405e7cdef2(); // Function Engine.*0736db87c2.*405e7cdef2 // Final|Native|Public|BlueprintCallable // @ game+0x6536494
	void PlatformEventDelegate__DelegateSignature(); // DelegateFunction Engine.*0736db87c2.PlatformEventDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void *bab0ff7d94(); // Function Engine.*0736db87c2.*bab0ff7d94 // Final|Native|Public|BlueprintCallable // @ game+0x6536468
};

// Class Engine.AtmosphericFogComponent
// Size: 0x680 (Inherited: 0x460)
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x458(0x04)
	float FogMultiplier; // 0x45c(0x04)
	float DensityMultiplier; // 0x460(0x04)
	float DensityOffset; // 0x464(0x04)
	float DistanceScale; // 0x468(0x04)
	float AltitudeScale; // 0x46c(0x04)
	float DistanceOffset; // 0x470(0x04)
	float GroundOffset; // 0x474(0x04)
	float StartDistance; // 0x478(0x04)
	float SunDiscScale; // 0x47c(0x04)
	struct TArray<struct F*2f8ed02fc4> HeightDensityLayers; // 0x480(0x10)
	float DefaultBrightness; // 0x490(0x04)
	struct FColor DefaultLightColor; // 0x494(0x04)
	char bDisableSunDisk : 1; // 0x498(0x01)
	char bDisableGroundScattering : 1; // 0x498(0x01)
	struct F*d5fd68aa49 PrecomputeParams; // 0x49c(0x2c)
	struct UTexture2D* TransmittanceTexture; // 0x4c8(0x08)
	struct UTexture2D* IrradianceTexture; // 0x4d0(0x08)
	char pad_4DC_2 : 6; // 0x4dc(0x01)
	char pad_4DD[0x1a3]; // 0x4dd(0x1a3)

	void *b5efc99a83(); // Function Engine.AtmosphericFogComponent.*b5efc99a83 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x654f740
	void *1cf79dbf85(); // Function Engine.AtmosphericFogComponent.*1cf79dbf85 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x654f8ec
	void *2e60c44bd8(); // Function Engine.AtmosphericFogComponent.*2e60c44bd8 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x654f698
	void *a7005b31ef(); // Function Engine.AtmosphericFogComponent.*a7005b31ef // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x654b224
	int32 *ba3a56baff(); // Function Engine.AtmosphericFogComponent.*ba3a56baff // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6555ec8
	void *18d2ddeee3(); // Function Engine.AtmosphericFogComponent.*18d2ddeee3 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x654fe74
	void *4d5578ee8a(); // Function Engine.AtmosphericFogComponent.*4d5578ee8a // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x654fdcc
	void *93ca8072ae(); // Function Engine.AtmosphericFogComponent.*93ca8072ae // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65205ec
	void *ebb4739ccf(); // Function Engine.AtmosphericFogComponent.*ebb4739ccf // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6520538
	void *fb3440c0ff(); // Function Engine.AtmosphericFogComponent.*fb3440c0ff // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65516c0
	void *23ff6bdc84(); // Function Engine.AtmosphericFogComponent.*23ff6bdc84 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6557a84
	void *bdcc3a2466(); // Function Engine.AtmosphericFogComponent.*bdcc3a2466 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x654f994
	void *3421583007(); // Function Engine.AtmosphericFogComponent.*3421583007 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6551430
	void *ce29bf9b83(); // Function Engine.AtmosphericFogComponent.*ce29bf9b83 // Final|Native|Public|BlueprintCallable // @ game+0xb8b52c
};

// Class Engine.*0a501b0c59
// Size: 0x28 (Inherited: 0x28)
struct U*0a501b0c59 : UObject {
};

// Class Engine.*d1cdb13024
// Size: 0x28 (Inherited: 0x28)
struct U*d1cdb13024 : UObject {
};

// Class Engine.*d1399bd806
// Size: 0x28 (Inherited: 0x28)
struct U*d1399bd806 : UObject {
};

// Class Engine.SoundAttenuation
// Size: 0x158 (Inherited: 0x28)
struct USoundAttenuation : UObject {
	struct FSoundAttenuationSettings Attenuation; // 0x28(0x130)
};

// Class Engine.AudioComponent
// Size: 0x730 (Inherited: 0x460)
struct UAudioComponent : USceneComponent {
	struct USoundBase* Sound; // 0x458(0x08)
	struct TArray<struct F*962c094bd5> InstanceParameters; // 0x460(0x10)
	struct USoundClass* *d6ee480fd1; // 0x470(0x08)
	char *70ddd8d1f5 : 1; // 0x478(0x01)
	char *addefcece3 : 1; // 0x478(0x01)
	char *d9404cd17a : 1; // 0x478(0x01)
	char bAllowSpatialization : 1; // 0x478(0x01)
	char bOverrideAttenuation : 1; // 0x478(0x01)
	char bOverrideSubtitlePriority : 1; // 0x47c(0x01)
	char bIsUISound : 1; // 0x480(0x01)
	char bEnableLowPassFilter : 1; // 0x480(0x01)
	char bOverridePriority : 1; // 0x480(0x01)
	char bSuppressSubtitles : 1; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct FName *de3406b63c; // 0x488(0x08)
	float PitchModulationMin; // 0x490(0x04)
	float PitchModulationMax; // 0x494(0x04)
	float VolumeModulationMin; // 0x498(0x04)
	float VolumeModulationMax; // 0x49c(0x04)
	float VolumeMultiplier; // 0x4a0(0x04)
	float Priority; // 0x4a4(0x04)
	float SubtitlePriority; // 0x4a8(0x04)
	float VolumeWeightedPriorityScale; // 0x4ac(0x04)
	float PitchMultiplier; // 0x4b0(0x04)
	float HighFrequencyGainMultiplier; // 0x4b4(0x04)
	float LowPassFilterFrequency; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x4c0(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x4c8(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x5f8(0x08)
	char pad_600[0x8]; // 0x600(0x08)
	struct FMulticastDelegate OnAudioFinished; // 0x608(0x10)
	char pad_618[0x78]; // 0x618(0x78)
	struct FMulticastDelegate OnAudioPlaybackPercent; // 0x690(0x10)
	char pad_6A0[0x70]; // 0x6a0(0x70)
	DelegateProperty *49c893029b; // 0x710(0x10)
	char pad_720[0x10]; // 0x720(0x10)

	float *46088c3b7b(); // Function Engine.AudioComponent.*46088c3b7b // Native|Public|BlueprintCallable // @ game+0x6524a60
	void IsPlaying(); // Function Engine.AudioComponent.IsPlaying // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64f7fe4
	void *17184f860a(); // Function Engine.AudioComponent.*17184f860a // Final|Native|Public|BlueprintCallable // @ game+0x655930c
	void SetPitchMultiplier(); // Function Engine.AudioComponent.SetPitchMultiplier // Final|Native|Public|BlueprintCallable // @ game+0x65556c8
	float AdjustVolume(); // Function Engine.AudioComponent.AdjustVolume // Final|Native|Public|BlueprintCallable // @ game+0x6510e74
	void SetFloatParameter(); // Function Engine.AudioComponent.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x65512a8
	void SetVolumeMultiplier(); // Function Engine.AudioComponent.SetVolumeMultiplier // Final|Native|Public|BlueprintCallable // @ game+0x6559f28
	struct USoundSubmix* *54d15737d0(); // Function Engine.AudioComponent.*54d15737d0 // Final|Native|Public|BlueprintCallable // @ game+0x655843c
	void AdjustAttenuation(); // Function Engine.AudioComponent.AdjustAttenuation // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6510c64
	void SetIntParameter(); // Function Engine.AudioComponent.SetIntParameter // Final|Native|Public|BlueprintCallable // @ game+0x6552a44
	void SetBoolParameter(); // Function Engine.AudioComponent.SetBoolParameter // Final|Native|Public|BlueprintCallable // @ game+0x654d368
	struct FSoundAttenuationSettings *53a2a56b9c(); // Function Engine.AudioComponent.*53a2a56b9c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65138e4
	void FadeOut(float FadeOutDuration); // Function Engine.AudioComponent.FadeOut // Native|Public|BlueprintCallable // @ game+0x6524b84
	void Play(); // Function Engine.AudioComponent.Play // Native|Public|BlueprintCallable // @ game+0x65441c4
	void *e9d5e8cab0(); // Function Engine.AudioComponent.*e9d5e8cab0 // Final|Native|Public|BlueprintCallable // @ game+0x6556da8
	void *f0e1cd6550(); // Function Engine.AudioComponent.*f0e1cd6550 // Final|Native|Public|BlueprintCallable // @ game+0x65554b8
	void Stop(); // Function Engine.AudioComponent.Stop // Native|Public|BlueprintCallable // @ game+0x6561604
	void SetWaveParameter(struct FName InName); // Function Engine.AudioComponent.SetWaveParameter // Final|Native|Public|BlueprintCallable // @ game+0x655a50c
};

// Class Engine.DecalComponent
// Size: 0x4e0 (Inherited: 0x460)
struct UDecalComponent : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x458(0x08)
	int32 SortOrder; // 0x460(0x04)
	float FadeScreenSize; // 0x464(0x04)
	float FadeStartDelay; // 0x468(0x04)
	float FadeDuration; // 0x46c(0x04)
	char bDestroyOwnerAfterFade : 1; // 0x470(0x01)
	struct F*23e36f4259 DecalChannels; // 0x471(0x01)
	struct FVector DecalSize; // 0x474(0x0c)
	float NormalFadeStart; // 0x480(0x04)
	float NormalFadeEnd; // 0x484(0x04)
	char pad_48D_1 : 7; // 0x48d(0x01)
	char pad_48E[0x52]; // 0x48e(0x52)

	void *57235f509b(); // Function Engine.DecalComponent.*57235f509b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652a810
	void *246e0832ff(); // Function Engine.DecalComponent.*246e0832ff // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5768300
	float *faf45d362d(); // Function Engine.DecalComponent.*faf45d362d // Final|Native|Public|BlueprintCallable // @ game+0x6550fb8
	void *556fc18803(); // Function Engine.DecalComponent.*556fc18803 // Final|Native|Public|BlueprintCallable // @ game+0x6556d10
	void *8c06158828(); // Function Engine.DecalComponent.*8c06158828 // Final|Native|Public|BlueprintCallable // @ game+0x654f568
	void *08eaa25dbb(); // Function Engine.DecalComponent.*08eaa25dbb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x576c7b8
	void CreateDynamicMaterialInstance(); // Function Engine.DecalComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x651ed44
};

// Class Engine.*04412402be
// Size: 0x460 (Inherited: 0x460)
struct U*04412402be : USceneComponent {
};

// Class Engine.ExponentialHeightFogComponent
// Size: 0x520 (Inherited: 0x460)
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x458(0x04)
	struct FLinearColor FogInscatteringColor; // 0x45c(0x10)
	struct TArray<struct F*265c70b8b9> HeightDensityLayers; // 0x470(0x10)
	struct UTextureCube* InscatteringColorCubemap; // 0x480(0x08)
	float InscatteringColorCubemapAngle; // 0x488(0x04)
	struct FLinearColor InscatteringTextureTint; // 0x48c(0x10)
	float FullyDirectionalInscatteringColorDistance; // 0x49c(0x04)
	float NonDirectionalInscatteringColorDistance; // 0x4a0(0x04)
	float DirectionalInscatteringExponent; // 0x4a4(0x04)
	float DirectionalInscatteringStartDistance; // 0x4a8(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x4ac(0x10)
	float FogHeightFalloff; // 0x4bc(0x04)
	float FogMaxOpacity; // 0x4c0(0x04)
	float StartDistance; // 0x4c4(0x04)
	float FogCutoffDistance; // 0x4c8(0x04)
	bool bEnableVolumetricFog; // 0x4cc(0x01)
	float VolumetricFogScatteringDistribution; // 0x4d0(0x04)
	struct FColor VolumetricFogAlbedo; // 0x4d4(0x04)
	struct FLinearColor VolumetricFogEmissive; // 0x4d8(0x10)
	float VolumetricFogExtinctionScale; // 0x4e8(0x04)
	float VolumetricFogDistance; // 0x4ec(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x4f0(0x01)
	bool bUseExtendedFog; // 0x4f1(0x01)
	char pad_4F3[0x1]; // 0x4f3(0x01)
	float ExtendedFogStartDistance; // 0x4f4(0x04)
	float ExtendedFogStartFalloffDistance; // 0x4f8(0x04)
	float ExtendedHeight; // 0x4fc(0x04)
	float ExtendedFallOff; // 0x500(0x04)
	float ExtendedFogDensity; // 0x504(0x04)
	float UpDensity; // 0x508(0x04)
	float DownDensity; // 0x50c(0x04)
	float Intensity; // 0x510(0x04)
	bool bUseAtmosphereScattering; // 0x514(0x01)
	char pad_515[0xb]; // 0x515(0x0b)

	void *a8ef8305f0(); // Function Engine.ExponentialHeightFogComponent.*a8ef8305f0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6551580
	void *ede580dcfd(); // Function Engine.ExponentialHeightFogComponent.*ede580dcfd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x655a1a4
	void *c2d9270af9(); // Function Engine.ExponentialHeightFogComponent.*c2d9270af9 // Final|Native|Public|BlueprintCallable // @ game+0x6551c04
	void *064f51d0ee(); // Function Engine.ExponentialHeightFogComponent.*064f51d0ee // Final|Native|Public|BlueprintCallable // @ game+0x6550d18
	void *a3dac8d73e(); // Function Engine.ExponentialHeightFogComponent.*a3dac8d73e // Final|Native|Public|BlueprintCallable // @ game+0x6552794
	void *d481e6be9d(); // Function Engine.ExponentialHeightFogComponent.*d481e6be9d // Final|Native|Public|BlueprintCallable // @ game+0x6551388
	void *9fef76bb03(); // Function Engine.ExponentialHeightFogComponent.*9fef76bb03 // Final|Native|Public|BlueprintCallable // @ game+0x655a0fc
	void *82d98f2eae(); // Function Engine.ExponentialHeightFogComponent.*82d98f2eae // Final|Native|Public|BlueprintCallable // @ game+0x65526f4
	void *2a2613527e(); // Function Engine.ExponentialHeightFogComponent.*2a2613527e // Final|Native|Public|BlueprintCallable // @ game+0x654ff1c
	void *0ba0a72f33(); // Function Engine.ExponentialHeightFogComponent.*0ba0a72f33 // Final|Native|Public|BlueprintCallable // @ game+0x6550e68
	void *4f1e5b489a(); // Function Engine.ExponentialHeightFogComponent.*4f1e5b489a // Final|Native|Public|BlueprintCallable // @ game+0x6551618
	void *7ccd6e2163(); // Function Engine.ExponentialHeightFogComponent.*7ccd6e2163 // Final|Native|Public|BlueprintCallable // @ game+0x655a28c
	void *0d44623c69(); // Function Engine.ExponentialHeightFogComponent.*0d44623c69 // Final|Native|Public|BlueprintCallable // @ game+0x654fc5c
	void *0a051510ff(); // Function Engine.ExponentialHeightFogComponent.*0a051510ff // Final|Native|Public|BlueprintCallable // @ game+0x655a334
	void *23ff6bdc84(); // Function Engine.ExponentialHeightFogComponent.*23ff6bdc84 // Final|Native|Public|BlueprintCallable // @ game+0x6557b2c
	void *29cd836583(); // Function Engine.ExponentialHeightFogComponent.*29cd836583 // Final|Native|Public|BlueprintCallable // @ game+0x6551430
	void *3083318da1(); // Function Engine.ExponentialHeightFogComponent.*3083318da1 // Final|Native|Public|BlueprintCallable // @ game+0x6550f10
	void *4130037751(); // Function Engine.ExponentialHeightFogComponent.*4130037751 // Final|Native|Public|BlueprintCallable // @ game+0x65514d8
	void *bfb5b3f8da(); // Function Engine.ExponentialHeightFogComponent.*bfb5b3f8da // Final|Native|Public|BlueprintCallable // @ game+0x6550c70
	void *12587933c4(); // Function Engine.ExponentialHeightFogComponent.*12587933c4 // Final|Native|Public|BlueprintCallable // @ game+0x65594b0
	void *1349057590(); // Function Engine.ExponentialHeightFogComponent.*1349057590 // Final|Native|Public|BlueprintCallable // @ game+0x6550dc0
	void *0bd0575a7e(); // Function Engine.ExponentialHeightFogComponent.*0bd0575a7e // Final|Native|Public|BlueprintCallable // @ game+0x6559fc0
	void *27d55535ea(); // Function Engine.ExponentialHeightFogComponent.*27d55535ea // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x655a060
	void SetIntensity(); // Function Engine.ExponentialHeightFogComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x6552c38
	void *8de755d21b(); // Function Engine.ExponentialHeightFogComponent.*8de755d21b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x654facc
	void *7767b2615d(); // Function Engine.ExponentialHeightFogComponent.*7767b2615d // Final|Native|Public|BlueprintCallable // @ game+0x654fbb4
	void *7d609ee748(); // Function Engine.ExponentialHeightFogComponent.*7d609ee748 // Final|Native|Public|BlueprintCallable // @ game+0x6554cc8
	void *dc266b268d(); // Function Engine.ExponentialHeightFogComponent.*dc266b268d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x655283c
};

// Class Engine.*e3dd0ccfd3
// Size: 0xd0 (Inherited: 0x28)
struct U*e3dd0ccfd3 : UObject {
	struct FForceFeedbackAttenuationSettings Attenuation; // 0x28(0xa8)
};

// Class Engine.ForceFeedbackComponent
// Size: 0x530 (Inherited: 0x460)
struct UForceFeedbackComponent : USceneComponent {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x458(0x08)
	char *70ddd8d1f5 : 1; // 0x460(0x01)
	char *addefcece3 : 1; // 0x460(0x01)
	char bLooping : 1; // 0x460(0x01)
	char bOverrideAttenuation : 1; // 0x460(0x01)
	float IntensityMultiplier; // 0x464(0x04)
	struct U*e3dd0ccfd3* AttenuationSettings; // 0x468(0x08)
	struct FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x470(0xa8)
	struct FMulticastDelegate OnForceFeedbackFinished; // 0x518(0x10)
	char pad_52C_4 : 4; // 0x52c(0x01)
	char pad_52D[0x3]; // 0x52d(0x03)

	void Play(); // Function Engine.ForceFeedbackComponent.Play // Native|Public|BlueprintCallable // @ game+0x6544260
	void *4e52f773c2(); // Function Engine.ForceFeedbackComponent.*4e52f773c2 // Final|Native|Public|BlueprintCallable // @ game+0x6551820
	void *a18d3981c9(); // Function Engine.ForceFeedbackComponent.*a18d3981c9 // Final|Native|Public|BlueprintCallable // @ game+0x6552e10
	void AdjustAttenuation(); // Function Engine.ForceFeedbackComponent.AdjustAttenuation // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6510d60
	struct FForceFeedbackAttenuationSettings *53a2a56b9c(); // Function Engine.ForceFeedbackComponent.*53a2a56b9c // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65139f0
	void Stop(); // Function Engine.ForceFeedbackComponent.Stop // Native|Public|BlueprintCallable // @ game+0x57c13ac
};

// Class Engine.*e256cf905f
// Size: 0x500 (Inherited: 0x460)
struct U*e256cf905f : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x458(0x08)
	bool KeepInstanceBufferCPUAccess; // 0x460(0x01)
	struct F*23e36f4259 DecalChannels; // 0x461(0x01)
	char pad_46A[0x96]; // 0x46a(0x96)

	void CreateDynamicMaterialInstance(); // Function Engine.*e256cf905f.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x651ed44
	void *08eaa25dbb(); // Function Engine.*e256cf905f.*08eaa25dbb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x576c7b8
	void *8c06158828(); // Function Engine.*e256cf905f.*8c06158828 // Final|Native|Public|BlueprintCallable // @ game+0x654f568
};

// Class Engine.*955d6d8679
// Size: 0x4c0 (Inherited: 0x460)
struct U*955d6d8679 : USceneComponent {
	bool UseDynamicInstanceBuffer; // 0x458(0x01)
	bool KeepInstanceBufferCPUAccess; // 0x459(0x01)
	struct TArray<struct F*a0bf624a05> PerInstanceDecalData; // 0x460(0x10)
	struct UStaticMesh* StaticMesh; // 0x470(0x08)
	struct UMaterialInterface* DecalMaterial; // 0x478(0x08)
	char pad_482[0x3e]; // 0x482(0x3e)

	void *fb3e7943e7(struct FTransform WorldTransform); // Function Engine.*955d6d8679.*fb3e7943e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x650f864
	int32 *8f18d87416(); // Function Engine.*955d6d8679.*8f18d87416 // Native|Public|BlueprintCallable // @ game+0x6548b48
	struct FSplineParams *a5fc070c25(); // Function Engine.*955d6d8679.*a5fc070c25 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x650f41c
	void CreateDynamicMaterialInstance(); // Function Engine.*955d6d8679.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x651ed6c
	void *8c06158828(); // Function Engine.*955d6d8679.*8c06158828 // Final|Native|Public|BlueprintCallable // @ game+0x654f600
	struct UStaticMesh* SetStaticMesh(); // Function Engine.*955d6d8679.SetStaticMesh // Final|Native|Public|BlueprintCallable // @ game+0x65580c8
	void OnRep_StaticMesh(); // Function Engine.*955d6d8679.OnRep_StaticMesh // Final|Native|Public // @ game+0x6543570
	void *f11665ac8b(); // Function Engine.*955d6d8679.*f11665ac8b // Native|Public|BlueprintCallable // @ game+0x578d3ac
	void *5d18775563(); // Function Engine.*955d6d8679.*5d18775563 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5768300
	void *08eaa25dbb(); // Function Engine.*955d6d8679.*08eaa25dbb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x576b65c
};

// Class Engine.*36d6a6147d
// Size: 0x30 (Inherited: 0x30)
struct U*36d6a6147d : UDataAsset {
};

// Class Engine.LevelBlockType
// Size: 0x58 (Inherited: 0x30)
struct ULevelBlockType : UDataAsset {
	enum class ESpawnPointRollType *18da6fe1ee; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*c5bebe82ba> Variants; // 0x38(0x10)
	struct TArray<struct F*7228c1a296> *072c1223d8; // 0x48(0x10)
};

// Class Engine.*66c5994ae5
// Size: 0x470 (Inherited: 0x460)
struct U*66c5994ae5 : USceneComponent {
	struct ULevelBlockType* LevelBlockType; // 0x458(0x08)
	bool *64ab4844a1; // 0x460(0x01)
	enum class EPreviewIndexType *3789943065; // 0x461(0x01)
	int32 *82b96df079; // 0x464(0x04)
	char pad_46E[0x2]; // 0x46e(0x02)
};

// Class Engine.LightComponentBase
// Size: 0x490 (Inherited: 0x460)
struct ULightComponentBase : USceneComponent {
	struct FGuid *b8e3ac5c06; // 0x458(0x10)
	float Brightness; // 0x468(0x04)
	float Intensity; // 0x46c(0x04)
	struct FColor LightColor; // 0x470(0x04)
	char bAffectsWorld : 1; // 0x474(0x01)
	char CastShadows : 1; // 0x474(0x01)
	char CastStaticShadows : 1; // 0x474(0x01)
	char CastDynamicShadows : 1; // 0x474(0x01)
	char bAffectTranslucentLighting : 1; // 0x474(0x01)
	char bCastVolumetricShadow : 1; // 0x474(0x01)
	float IndirectLightingIntensity; // 0x478(0x04)
	float VolumetricScatteringIntensity; // 0x47c(0x04)
	bool *1c154d767e; // 0x480(0x01)
	char pad_485_6 : 2; // 0x485(0x01)
	char pad_486[0xa]; // 0x486(0x0a)

	void *2e4228a5be(); // Function Engine.LightComponentBase.*2e4228a5be // Final|Native|Public|BlueprintCallable // @ game+0x654e2e0
	void *c7a28b5330(); // Function Engine.LightComponentBase.*c7a28b5330 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652cecc
	void *b65a4f4795(); // Function Engine.LightComponentBase.*b65a4f4795 // Final|Native|Public|BlueprintCallable // @ game+0x654e24c
};

// Class Engine.LightComponent
// Size: 0x580 (Inherited: 0x490)
struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x488(0x04)
	float MaxDrawDistance; // 0x48c(0x04)
	float *f173d485a6; // 0x490(0x04)
	char bUseTemperature : 1; // 0x494(0x01)
	int32 ShadowMapChannel; // 0x498(0x04)
	float MinRoughness; // 0x4a0(0x04)
	float ShadowResolutionScale; // 0x4a4(0x04)
	float ShadowBias; // 0x4a8(0x04)
	float ShadowSharpen; // 0x4ac(0x04)
	float ContactShadowLength; // 0x4b0(0x04)
	char InverseSquaredFalloff : 1; // 0x4b4(0x01)
	char CastTranslucentShadows : 1; // 0x4b4(0x01)
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x4b4(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4b4(0x01)
	char pad_4B4_5 : 3; // 0x4b4(0x01)
	char pad_4B5[0x3]; // 0x4b5(0x03)
	struct FLightingChannels LightingChannels; // 0x4b8(0x03)
	char pad_4BB[0x5]; // 0x4bb(0x05)
	struct UMaterialInterface* LightFunctionMaterial; // 0x4c0(0x08)
	struct FVector LightFunctionScale; // 0x4c8(0x0c)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct U*42bee7f7f3* IESTexture; // 0x4d8(0x08)
	char bUseIESBrightness : 1; // 0x4e0(0x01)
	char pad_4E0_1 : 7; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	float IESBrightnessScale; // 0x4e4(0x04)
	float LightFunctionFadeDistance; // 0x4e8(0x04)
	float DisabledBrightness; // 0x4ec(0x04)
	char bEnableLightShaftBloom : 1; // 0x4f0(0x01)
	char pad_4F0_1 : 7; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	float BloomScale; // 0x4f4(0x04)
	float BloomThreshold; // 0x4f8(0x04)
	struct FColor BloomTint; // 0x4fc(0x04)
	bool bUseRayTracedDistanceFieldShadows; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float RayStartOffsetDepthScale; // 0x504(0x04)
	char pad_508[0x78]; // 0x508(0x78)

	void *258122c6f4(); // Function Engine.LightComponent.*258122c6f4 // Final|Native|Public|BlueprintCallable // @ game+0x655252c
	void *5cb7804e44(); // Function Engine.LightComponent.*5cb7804e44 // Final|Native|Public|BlueprintCallable // @ game+0x6553480
	void *f2f5720b48(); // Function Engine.LightComponent.*f2f5720b48 // Final|Native|Public|BlueprintCallable // @ game+0x6553350
	void *2702d9a161(); // Function Engine.LightComponent.*2702d9a161 // Final|Native|Public|BlueprintCallable // @ game+0x6550550
	void SetIntensity(); // Function Engine.LightComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x6552ce0
	void *daad0fc665(); // Function Engine.LightComponent.*daad0fc665 // Final|Native|Public|BlueprintCallable // @ game+0x65533e8
	void *904fc8a6cf(); // Function Engine.LightComponent.*904fc8a6cf // Final|Native|Public|BlueprintCallable // @ game+0x654ab50
	void *b7a3e9bcec(); // Function Engine.LightComponent.*b7a3e9bcec // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6553510
	void *21b24e6e19(); // Function Engine.LightComponent.*21b24e6e19 // Final|Native|Public|BlueprintCallable // @ game+0x6558c58
	void *1c7afaf549(struct FLinearColor NewLightColor); // Function Engine.LightComponent.*1c7afaf549 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65530fc
	void *abddac62e8(); // Function Engine.LightComponent.*abddac62e8 // Final|Native|Public|BlueprintCallable // @ game+0x654cbb8
	void *9e15c4aa32(); // Function Engine.LightComponent.*9e15c4aa32 // Final|Native|Public|BlueprintCallable // @ game+0x654aa80
	void *006aa08f65(); // Function Engine.LightComponent.*006aa08f65 // Final|Native|Public|BlueprintCallable // @ game+0x655a3dc
	void *2da9400063(); // Function Engine.LightComponent.*2da9400063 // Final|Native|Public|BlueprintCallable // @ game+0x65523e0
	void *7dae807e60(); // Function Engine.LightComponent.*7dae807e60 // Final|Native|Public|BlueprintCallable // @ game+0x654cb20
	void *800a1b0a61(); // Function Engine.LightComponent.*800a1b0a61 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x654cc50
};

// Class Engine.DirectionalLightComponent
// Size: 0x5f0 (Inherited: 0x580)
struct UDirectionalLightComponent : ULightComponent {
	char bEnableLightShaftOcclusion : 1; // 0x578(0x01)
	float OcclusionMaskDarkness; // 0x57c(0x04)
	float OcclusionDepthRange; // 0x580(0x04)
	struct FVector LightShaftOverrideDirection; // 0x584(0x0c)
	float WholeSceneDynamicShadowRadius; // 0x590(0x04)
	float DynamicShadowDistanceMovableLight; // 0x594(0x04)
	float DynamicShadowDistanceStationaryLight; // 0x598(0x04)
	int32 DynamicShadowCascades; // 0x59c(0x04)
	float CascadeDistributionExponent; // 0x5a0(0x04)
	float CascadeTransitionFraction; // 0x5a4(0x04)
	float ShadowDistanceFadeoutFraction; // 0x5a8(0x04)
	char bUseInsetShadowsForMovableObjects : 1; // 0x5ac(0x01)
	int32 FarShadowCascadeCount; // 0x5b0(0x04)
	float FarShadowDistance; // 0x5b4(0x04)
	float DistanceFieldShadowDistance; // 0x5b8(0x04)
	float LightSourceAngle; // 0x5bc(0x04)
	float TraceDistance; // 0x5c0(0x04)
	struct F*1a70427812 LightmassSettings; // 0x5c4(0x10)
	char bCastModulatedShadows : 1; // 0x5d4(0x01)
	char pad_5D4_3 : 5; // 0x5d4(0x01)
	char pad_5D5[0x3]; // 0x5d5(0x03)
	struct FColor ModulatedShadowColor; // 0x5d8(0x04)
	char bUsedAsAtmosphereSunLight : 1; // 0x5dc(0x01)
	char bUseGridShadow : 1; // 0x5dc(0x01)
	char pad_5DC_2 : 6; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	struct TArray<struct F*2a1f39e224> GridShadowSplitSettings; // 0x5e0(0x10)

	void *3efd23ee4b(); // Function Engine.DirectionalLightComponent.*3efd23ee4b // Final|Native|Public|BlueprintCallable // @ game+0x65501a4
	void *49f375f278(); // Function Engine.DirectionalLightComponent.*49f375f278 // Final|Native|Public|BlueprintCallable // @ game+0x655005c
	void *e5acff34a5(); // Function Engine.DirectionalLightComponent.*e5acff34a5 // Final|Native|Public|BlueprintCallable // @ game+0x6554fd8
	void *7a6966e009(); // Function Engine.DirectionalLightComponent.*7a6966e009 // Final|Native|Public|BlueprintCallable // @ game+0x6550618
	void *866491a2bb(); // Function Engine.DirectionalLightComponent.*866491a2bb // Final|Native|Public|BlueprintCallable // @ game+0x65569d4
	void *5fe6da5f2b(); // Function Engine.DirectionalLightComponent.*5fe6da5f2b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65535b0
	void *683e91f1fb(); // Function Engine.DirectionalLightComponent.*683e91f1fb // Final|Native|Public|BlueprintCallable // @ game+0x65500fc
	void *e8b3046c06(); // Function Engine.DirectionalLightComponent.*e8b3046c06 // Final|Native|Public|BlueprintCallable // @ game+0x654df98
	void *c880798a2c(); // Function Engine.DirectionalLightComponent.*c880798a2c // Final|Native|Public|BlueprintCallable // @ game+0x654e040
};

// Class Engine.PointLightComponent
// Size: 0x5a0 (Inherited: 0x580)
struct UPointLightComponent : ULightComponent {
	float Radius; // 0x578(0x04)
	float AttenuationRadius; // 0x57c(0x04)
	char bUseInverseSquaredFalloff : 1; // 0x580(0x01)
	float LightFalloffExponent; // 0x584(0x04)
	float SourceRadius; // 0x588(0x04)
	float SourceLength; // 0x58c(0x04)
	struct F*f8d7d65c3a LightmassSettings; // 0x590(0x0c)

	void *17759054ab(); // Function Engine.PointLightComponent.*17759054ab // Final|Native|Public|BlueprintCallable // @ game+0x6557128
	void *760d3b45fc(); // Function Engine.PointLightComponent.*760d3b45fc // Final|Native|Public|BlueprintCallable // @ game+0x65532b8
	void *217fa395ec(); // Function Engine.PointLightComponent.*217fa395ec // Final|Native|Public|BlueprintCallable // @ game+0x6557090
	void SetAttenuationRadius(); // Function Engine.PointLightComponent.SetAttenuationRadius // Final|Native|Public|BlueprintCallable // @ game+0x654c7d4
};

// Class Engine.SpotLightComponent
// Size: 0x5b0 (Inherited: 0x5a0)
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x5a0(0x04)
	float OuterConeAngle; // 0x5a4(0x04)
	float *79de17360b; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)

	void *ee40750dcb(); // Function Engine.SpotLightComponent.*ee40750dcb // Final|Native|Public|BlueprintCallable // @ game+0x6555420
	void *cae3ab155a(); // Function Engine.SpotLightComponent.*cae3ab155a // Final|Native|Public|BlueprintCallable // @ game+0x655265c
};

// Class Engine.SkyLightComponent
// Size: 0x640 (Inherited: 0x490)
struct USkyLightComponent : ULightComponentBase {
	enum class *0ea8f0310f SourceType; // 0x488(0x01)
	struct UTextureCube* Cubemap; // 0x490(0x08)
	float SourceCubemapAngle; // 0x498(0x04)
	int32 CubemapResolution; // 0x49c(0x04)
	float SkyDistanceThreshold; // 0x4a0(0x04)
	bool bCaptureEmissiveOnly; // 0x4a4(0x01)
	bool bLowerHemisphereIsBlack; // 0x4a5(0x01)
	char pad_4A7[0x1]; // 0x4a7(0x01)
	struct FLinearColor LowerHemisphereColor; // 0x4a8(0x10)
	float OcclusionMaxDistance; // 0x4b8(0x04)
	float Contrast; // 0x4bc(0x04)
	float OcclusionExponent; // 0x4c0(0x04)
	float MinOcclusion; // 0x4c4(0x04)
	struct FColor OcclusionTint; // 0x4c8(0x04)
	enum class *3285c2fab5 OcclusionCombineMode; // 0x4cc(0x01)
	char pad_4CD[0xab]; // 0x4cd(0xab)
	struct UTextureCube* *6eabfafe7d; // 0x578(0x08)
	char pad_580[0xc0]; // 0x580(0xc0)

	void *258122c6f4(); // Function Engine.SkyLightComponent.*258122c6f4 // Final|Native|Public|BlueprintCallable // @ game+0x65525c4
	void *006aa08f65(); // Function Engine.SkyLightComponent.*006aa08f65 // Final|Native|Public|BlueprintCallable // @ game+0x655a474
	void *066a12d634(); // Function Engine.SkyLightComponent.*066a12d634 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6555070
	void *2417c0c3b4(); // Function Engine.SkyLightComponent.*2417c0c3b4 // Final|Native|Public|BlueprintCallable // @ game+0x6554f40
	void *273dba6831(); // Function Engine.SkyLightComponent.*273dba6831 // Final|Native|Public|BlueprintCallable // @ game+0x655476c
	struct UTextureCube* *91665ba6a1(); // Function Engine.SkyLightComponent.*91665ba6a1 // Final|Native|Public|BlueprintCallable // @ game+0x654f21c
	void *976fef53cf(); // Function Engine.SkyLightComponent.*976fef53cf // Final|Native|Public|BlueprintCallable // @ game+0x654f160
	void *1c7afaf549(); // Function Engine.SkyLightComponent.*1c7afaf549 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65531f0
	void *716123ad33(); // Function Engine.SkyLightComponent.*716123ad33 // Final|Native|Public|BlueprintCallable // @ game+0x6548a44
	void *ff66758f17(); // Function Engine.SkyLightComponent.*ff66758f17 // Final|Native|Public|BlueprintCallable // @ game+0x6554ea8
	void SetIntensity(); // Function Engine.SkyLightComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x6552d78
};

// Class Engine.*f7fff1da2a
// Size: 0x460 (Inherited: 0x460)
struct U*f7fff1da2a : USceneComponent {
	struct UBoxComponent* *9c7a661c5d; // 0x458(0x08)
};

// Class Engine.*e640817420
// Size: 0x480 (Inherited: 0x460)
struct U*e640817420 : USceneComponent {
	struct F*c51e7b128b Node; // 0x458(0x18)
	struct U*e640817420* *dfcda93688; // 0x470(0x08)
	struct U*e640817420* *db7c68c0ba; // 0x478(0x08)
};

// Class Engine.PhysicsConstraintComponent
// Size: 0x690 (Inherited: 0x460)
struct UPhysicsConstraintComponent : USceneComponent {
	struct AActor* *8ddfebb1ba; // 0x458(0x08)
	struct F*6aefee631c *8bcebf8169; // 0x460(0x08)
	struct AActor* *661fdf3b58; // 0x468(0x08)
	struct F*6aefee631c *1c77ae3ad9; // 0x470(0x08)
	char pad_480[0x8]; // 0x480(0x08)
	struct UPhysicsConstraintTemplate* ConstraintSetup; // 0x488(0x08)
	struct FMulticastDelegate OnConstraintBroken; // 0x490(0x10)
	struct FConstraintInstance ConstraintInstance; // 0x4a0(0x1f0)

	void *946b36923d(); // Function Engine.PhysicsConstraintComponent.*946b36923d // Final|Native|Public|BlueprintCallable // @ game+0x6517ecc
	void *0eedbcaaaf(); // Function Engine.PhysicsConstraintComponent.*0eedbcaaaf // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6553bf0
	void *be912ca653(bool bEnableTwistDrive); // Function Engine.PhysicsConstraintComponent.*be912ca653 // Final|Native|Public|BlueprintCallable // @ game+0x65551fc
	void *2f39ee9842(); // Function Engine.PhysicsConstraintComponent.*2f39ee9842 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6529570
	void *019c5d0869(); // Function Engine.PhysicsConstraintComponent.*019c5d0869 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6553ee0
	void *8a1cad236d(float PositionStrength); // Function Engine.PhysicsConstraintComponent.*8a1cad236d // Final|Native|Public|BlueprintCallable // @ game+0x6553994
	void *c0aa285f28(); // Function Engine.PhysicsConstraintComponent.*c0aa285f28 // Final|Native|Public|BlueprintCallable // @ game+0x654ba04
	bool *ff53efaaf3(); // Function Engine.PhysicsConstraintComponent.*ff53efaaf3 // Final|Native|Public|BlueprintCallable // @ game+0x654bdb4
	bool *a8088f369f(); // Function Engine.PhysicsConstraintComponent.*a8088f369f // Final|Native|Public|BlueprintCallable // @ game+0x654bbec
	void *fdb9e217e9(); // Function Engine.PhysicsConstraintComponent.*fdb9e217e9 // Final|Native|Public|BlueprintCallable // @ game+0x65541dc
	void *730e7e5910(); // Function Engine.PhysicsConstraintComponent.*730e7e5910 // Final|Native|Public|BlueprintCallable // @ game+0x654baf8
	enum class *86b9f525fb *3f0ade1ffb(); // Function Engine.PhysicsConstraintComponent.*3f0ade1ffb // Final|Native|Public|BlueprintCallable // @ game+0x654b910
	void *2f95efcdac(enum class *31a328f8be Frame); // Function Engine.PhysicsConstraintComponent.*2f95efcdac // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x654eec4
	void *720ce21d7b(float PositionStrength); // Function Engine.PhysicsConstraintComponent.*720ce21d7b // Final|Native|Public|BlueprintCallable // @ game+0x654b438
	void *c84258abca(); // Function Engine.PhysicsConstraintComponent.*c84258abca // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x654b7d0
	void *6523ee95b4(); // Function Engine.PhysicsConstraintComponent.*6523ee95b4 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x654bea8
	void *528c50deb9(enum class *31a328f8be Frame); // Function Engine.PhysicsConstraintComponent.*528c50deb9 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x654ed90
	void *8242dbb818(); // Function Engine.PhysicsConstraintComponent.*8242dbb818 // Final|Native|Public|BlueprintCallable // @ game+0x6553ff4
	void *72d1f5620f(); // Function Engine.PhysicsConstraintComponent.*72d1f5620f // Final|Native|Public|BlueprintCallable // @ game+0x654b370
	struct UPrimitiveComponent* *6847e35be7(struct FName BoneName1); // Function Engine.PhysicsConstraintComponent.*6847e35be7 // Final|Native|Public|BlueprintCallable // @ game+0x654e968
	void *baf749e727(); // Function Engine.PhysicsConstraintComponent.*baf749e727 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6529508
	bool *c8ea8a307a(); // Function Engine.PhysicsConstraintComponent.*c8ea8a307a // Final|Native|Public|BlueprintCallable // @ game+0x6553ab8
	struct FVector *4d085840fa(); // Function Engine.PhysicsConstraintComponent.*4d085840fa // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6528dcc
	void *ee682847c5(); // Function Engine.PhysicsConstraintComponent.*ee682847c5 // Final|Native|Public|BlueprintCallable // @ game+0x65540e8
	bool *7522c7e310(); // Function Engine.PhysicsConstraintComponent.*7522c7e310 // Final|Native|Public|BlueprintCallable // @ game+0x6553da8
	bool *410192a316(); // Function Engine.PhysicsConstraintComponent.*410192a316 // Final|Native|Public|BlueprintCallable // @ game+0x654b6dc
	void *346190c807(); // Function Engine.PhysicsConstraintComponent.*346190c807 // Final|Native|Public|BlueprintCallable // @ game+0x654fd04
	void *ec9ca84851(); // Function Engine.PhysicsConstraintComponent.*ec9ca84851 // Final|Native|Public|BlueprintCallable // @ game+0x655512c
	void *80aaf691bb(); // Function Engine.PhysicsConstraintComponent.*80aaf691bb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652953c
	void *bbac2d0de6(); // Function Engine.PhysicsConstraintComponent.*bbac2d0de6 // Final|Native|Public|BlueprintCallable // @ game+0x654bce0
	enum class *31a328f8be *8e1fae6dbe(); // Function Engine.PhysicsConstraintComponent.*8e1fae6dbe // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x654f014
};

// Class Engine.*8ff725456d
// Size: 0x480 (Inherited: 0x460)
struct U*8ff725456d : USceneComponent {
	float SpringStiffness; // 0x458(0x04)
	float SpringDamping; // 0x45c(0x04)
	float SpringLengthAtRest; // 0x460(0x04)
	float SpringRadius; // 0x464(0x04)
	enum class ECollisionChannel SpringChannel; // 0x468(0x01)
	bool bIgnoreSelf; // 0x469(0x01)
	float SpringCompression; // 0x46c(0x04)
	char pad_476[0xa]; // 0x476(0x0a)

	void *005059953a(); // Function Engine.*8ff725456d.*005059953a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6530738
	void *c11e864f86(); // Function Engine.*8ff725456d.*c11e864f86 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653079c
	void *35830b25d2(); // Function Engine.*8ff725456d.*35830b25d2 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653076c
	void *7360f8f275(); // Function Engine.*8ff725456d.*7360f8f275 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652da38
};

// Class Engine.PhysicsThrusterComponent
// Size: 0x460 (Inherited: 0x460)
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x458(0x04)
};

// Class Engine.PostProcessComponent
// Size: 0x9e0 (Inherited: 0x460)
struct UPostProcessComponent : USceneComponent {
	struct FPostProcessSettings Settings; // 0x460(0x570)
	float Priority; // 0x9d0(0x04)
	float BlendRadius; // 0x9d4(0x04)
	float BlendWeight; // 0x9d8(0x04)
	char bEnabled : 1; // 0x9dc(0x01)
	char bUnbound : 1; // 0x9dc(0x01)
	char pad_9DC_2 : 6; // 0x9dc(0x01)
	char pad_9DD[0x3]; // 0x9dd(0x03)

	TScriptInterface<struct UBlendableInterface> *279e5ee7e9(); // Function Engine.PostProcessComponent.*279e5ee7e9 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x650fe54
};

// Class Engine.BrushComponent
// Size: 0x9b0 (Inherited: 0x990)
struct UBrushComponent : UPrimitiveComponent {
	struct UModel* Brush; // 0x988(0x08)
	struct UBodySetup* BrushBodySetup; // 0x990(0x08)
	struct FVector PrePivot; // 0x998(0x0c)
	char pad_9AC[0x4]; // 0x9ac(0x04)
};

// Class Engine.*44d2800dce
// Size: 0x9c0 (Inherited: 0x990)
struct U*44d2800dce : UPrimitiveComponent {
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x990(0x10)
	struct TArray<struct F*afa2d7bfe2> *35e36ee816; // 0x9a0(0x10)
	struct UBodySetup* BodySetup; // 0x9b0(0x08)
	char pad_9B8[0x8]; // 0x9b8(0x08)
};

// Class Engine.*e8224a1e62
// Size: 0x9b0 (Inherited: 0x990)
struct U*e8224a1e62 : UPrimitiveComponent {
	struct FColor FrustumColor; // 0x988(0x04)
	float FrustumAngle; // 0x98c(0x04)
	float FrustumAspectRatio; // 0x990(0x04)
	float FrustumStartDist; // 0x994(0x04)
	float FrustumEndDist; // 0x998(0x04)
	struct UTexture* Texture; // 0x9a0(0x08)
	char pad_9AC[0x4]; // 0x9ac(0x04)
};

// Class Engine.*e5fd81cb47
// Size: 0x9a0 (Inherited: 0x990)
struct U*e5fd81cb47 : UPrimitiveComponent {
	struct TArray<struct FVector2D> Points; // 0x988(0x10)
};

// Class Engine.GrassVolumeComponent
// Size: 0x9c0 (Inherited: 0x9c0)
struct UGrassVolumeComponent : UBoxComponent {
};

// Class Engine.GrassVolumesContainerComponent
// Size: 0x9a0 (Inherited: 0x990)
struct UGrassVolumesContainerComponent : UPrimitiveComponent {
	struct TArray<struct F*bb78d6493c> *09db76f375; // 0x988(0x10)
};

// Class Engine.*a821866557
// Size: 0x9e0 (Inherited: 0x990)
struct U*a821866557 : UPrimitiveComponent {
	struct ALandscape* *ce9f4062b2; // 0x988(0x1c)
	struct ALandscape* *d0f1b9b985; // 0x9a4(0x1c)
	struct UTexture2D* *109fde30ed; // 0x9c0(0x08)
	struct FVector2D Extent; // 0x9c8(0x08)
	struct FIntPoint *1656cab4d7; // 0x9d0(0x08)
	char *731a272553 : 1; // 0x9d8(0x01)
	char *01b0eb9f52 : 1; // 0x9d8(0x01)
	char *546382f7f0 : 1; // 0x9d8(0x01)
	char *edeb351581 : 1; // 0x9d8(0x01)
};

// Class Engine.*dbc24df428
// Size: 0x9d0 (Inherited: 0x990)
struct U*dbc24df428 : UPrimitiveComponent {
	char pad_990[0x40]; // 0x990(0x40)
};

// Class Engine.MaterialBillboardComponent
// Size: 0x9a0 (Inherited: 0x990)
struct UMaterialBillboardComponent : UPrimitiveComponent {
	struct TArray<struct F*ddb3f05e8a> Elements; // 0x988(0x10)

	struct UMaterialInterface* *a7b116f2f3(struct UCurveFloat* DistanceToOpacityCurve, float BaseSizeX); // Function Engine.MaterialBillboardComponent.*a7b116f2f3 // Final|Native|Public|BlueprintCallable // @ game+0x650ed68
	void *646a140dee(); // Function Engine.MaterialBillboardComponent.*646a140dee // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x655024c
};

// Class Engine.*e6b663660f
// Size: 0xd10 (Inherited: 0xc30)
struct U*e6b663660f : USkinnedMeshComponent {
	char pad_C30[0xe0]; // 0xc30(0xe0)

	struct FVector *db7a3dcb45(); // Function Engine.*e6b663660f.*db7a3dcb45 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x654cde8
	struct FName *90f0a16859(struct FRotator InRotation); // Function Engine.*e6b663660f.*90f0a16859 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x654cf24
	void *1d41ace20a(struct FTransform InTransform); // Function Engine.*e6b663660f.*1d41ace20a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x654d1ec
	enum class EBoneSpaces *a469b0c146(); // Function Engine.*e6b663660f.*a469b0c146 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65286e4
	void *87e48763a2(struct FName BoneName); // Function Engine.*e6b663660f.*87e48763a2 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6528300
	void *0c7b40ffd2(); // Function Engine.*e6b663660f.*0c7b40ffd2 // Final|Native|Public|BlueprintCallable // @ game+0x651eb9c
	void *1943839112(); // Function Engine.*e6b663660f.*1943839112 // Final|Native|Public|BlueprintCallable // @ game+0x65491ec
	struct FVector *c772d1c3f5(); // Function Engine.*e6b663660f.*c772d1c3f5 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x654d0b0
	void *1216e43a7b(struct FName BoneName); // Function Engine.*e6b663660f.*1216e43a7b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6528814
	enum class EBoneSpaces *caa26949a1(); // Function Engine.*e6b663660f.*caa26949a1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65285b4
};

// Class Engine.SplineMeshComponent
// Size: 0xbd0 (Inherited: 0xb30)
struct USplineMeshComponent : UStaticMeshComponent {
	char pad_B30[0x8]; // 0xb30(0x08)
	struct F*bc9959e0ff SplineParams; // 0xb38(0x58)
	struct FVector SplineUpDir; // 0xb90(0x0c)
	char *9dab9a37ca : 1; // 0xb9c(0x01)
	char *6ba5d5622e : 1; // 0xb9c(0x01)
	char pad_B9C_2 : 6; // 0xb9c(0x01)
	char pad_B9D[0x3]; // 0xb9d(0x03)
	enum class ESplineMeshAxis *040154a53e; // 0xba0(0x01)
	char pad_BA1[0x3]; // 0xba1(0x03)
	float *a8d0f12bb6; // 0xba4(0x04)
	float *9b419b881d; // 0xba8(0x04)
	char pad_BAC[0x4]; // 0xbac(0x04)
	struct UBodySetup* BodySetup; // 0xbb0(0x08)
	struct FGuid *51969baf5f; // 0xbb8(0x10)
	char *57988a97f8 : 1; // 0xbc8(0x01)
	char pad_BC8_1 : 7; // 0xbc8(0x01)
	char pad_BC9[0x7]; // 0xbc9(0x07)

	void *fec90f4a2d(); // Function Engine.SplineMeshComponent.*fec90f4a2d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6530804
	struct FVector2D *c7511f406f(); // Function Engine.SplineMeshComponent.*c7511f406f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6557ecc
	void *46bce4174f(); // Function Engine.SplineMeshComponent.*46bce4174f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652a6e8
	void *02c23b17ec(); // Function Engine.SplineMeshComponent.*02c23b17ec // Final|Native|Public|BlueprintCallable // @ game+0x6551b10
	void *fa094f661b(); // Function Engine.SplineMeshComponent.*fa094f661b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653082c
	float *f52eafc318(); // Function Engine.SplineMeshComponent.*f52eafc318 // Final|Native|Public|BlueprintCallable // @ game+0x6557dd0
	struct FVector2D *f2bd3acf41(); // Function Engine.SplineMeshComponent.*f2bd3acf41 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x655077c
	void *3e50fbd501(struct FVector EndTangent); // Function Engine.SplineMeshComponent.*3e50fbd501 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6550b74
	void *1284959921(); // Function Engine.SplineMeshComponent.*1284959921 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652a750
	float *b93ec875f7(); // Function Engine.SplineMeshComponent.*b93ec875f7 // Final|Native|Public|BlueprintCallable // @ game+0x6550978
	void *67013b78c2(); // Function Engine.SplineMeshComponent.*67013b78c2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652a904
	void *6aa8b6418f(); // Function Engine.SplineMeshComponent.*6aa8b6418f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652a6c0
	void *ae03774e27(); // Function Engine.SplineMeshComponent.*ae03774e27 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6528940
	void *fe0f25ecb8(); // Function Engine.SplineMeshComponent.*fe0f25ecb8 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652a728
	void *d3e5fbf70d(); // Function Engine.SplineMeshComponent.*d3e5fbf70d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65307dc
	void *81bbbaa049(struct FVector2D StartOffset); // Function Engine.SplineMeshComponent.*81bbbaa049 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6557bd4
	void *ec325f27c5(); // Function Engine.SplineMeshComponent.*ec325f27c5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57880bc
	struct FVector2D *92a418c1de(); // Function Engine.SplineMeshComponent.*92a418c1de // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6550a74
	void *5d36a881f0(); // Function Engine.SplineMeshComponent.*5d36a881f0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6530844
	void *cdafa0799e(); // Function Engine.SplineMeshComponent.*cdafa0799e // Final|Native|Public|BlueprintCallable // @ game+0x6563930
	void *2e1392cac0(); // Function Engine.SplineMeshComponent.*2e1392cac0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6530710
	void *142198e504(struct FVector StartPos); // Function Engine.SplineMeshComponent.*142198e504 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6557cd4
	bool *fee7a493be(struct TArray<struct F*bc9959e0ff> SegmentParams); // Function Engine.SplineMeshComponent.*fee7a493be // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6519174
	void *d4f42f7d38(); // Function Engine.SplineMeshComponent.*d4f42f7d38 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652a710
	void *241d70d3fc(); // Function Engine.SplineMeshComponent.*241d70d3fc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653086c
	struct FVector *71989596f9(); // Function Engine.SplineMeshComponent.*71989596f9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6557fcc
	void *a1a5856df8(float InBoundaryMax); // Function Engine.SplineMeshComponent.*a1a5856df8 // Final|Native|Public|BlueprintCallable // @ game+0x654d658
	void *bbcc275dec(); // Function Engine.SplineMeshComponent.*bbcc275dec // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x655087c
	struct FVector *2ad7d35e66(); // Function Engine.SplineMeshComponent.*2ad7d35e66 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65576b4
	struct FVector *76f50ac0e0(struct FVector EndPos); // Function Engine.SplineMeshComponent.*76f50ac0e0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6557878
	void *10b755a621(); // Function Engine.SplineMeshComponent.*10b755a621 // Final|Native|Public|BlueprintCallable // @ game+0x654d848
};

// Class Engine.*9553728478
// Size: 0xbb0 (Inherited: 0xb30)
struct U*9553728478 : UStaticMeshComponent {
	char pad_B30[0x8]; // 0xb30(0x08)
	struct TArray<struct F*1d08b113c9> PerInstanceSMData; // 0xb38(0x10)
	struct FVector SplineUpDir; // 0xb48(0x0c)
	char *6ba5d5622e : 1; // 0xb54(0x01)
	char pad_B54_1 : 7; // 0xb54(0x01)
	char pad_B55[0x3]; // 0xb55(0x03)
	enum class ESplineMeshAxis *040154a53e; // 0xb58(0x01)
	char pad_B59[0x3]; // 0xb59(0x03)
	float *a8d0f12bb6; // 0xb5c(0x04)
	float *9b419b881d; // 0xb60(0x04)
	struct FVector *fe67d36d3f; // 0xb64(0x0c)
	int32 InstanceStartCullDistance; // 0xb70(0x04)
	int32 InstanceEndCullDistance; // 0xb74(0x04)
	char pad_B78[0x18]; // 0xb78(0x18)
	struct UBodySetup* BodySetup; // 0xb90(0x08)
	struct FGuid *51969baf5f; // 0xb98(0x10)
	uint32 *830eb0c59a; // 0xba8(0x04)
	char pad_BAC[0x4]; // 0xbac(0x04)

	bool *fb3e7943e7(); // Function Engine.*9553728478.*fb3e7943e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x650f9dc
	void *f11665ac8b(); // Function Engine.*9553728478.*f11665ac8b // Native|Public|BlueprintCallable // @ game+0x651c27c
	void *a5fc070c25(struct F*bc9959e0ff SplineSegment, bool bUpdateMesh); // Function Engine.*9553728478.*a5fc070c25 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x650f598
	void *67013b78c2(); // Function Engine.*9553728478.*67013b78c2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57dd7e0
	float *a1a5856df8(); // Function Engine.*9553728478.*a1a5856df8 // Final|Native|Public|BlueprintCallable // @ game+0x654d564
	void *b2a56a014a(int32 EndCullDistance); // Function Engine.*9553728478.*b2a56a014a // Final|Native|Public|BlueprintCallable // @ game+0x654f350
	void *ae03774e27(); // Function Engine.*9553728478.*ae03774e27 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6528928
	enum class ESplineMeshAxis *02c23b17ec(); // Function Engine.*9553728478.*02c23b17ec // Final|Native|Public|BlueprintCallable // @ game+0x6551a24
	void *10b755a621(float InBoundaryMin); // Function Engine.*9553728478.*10b755a621 // Final|Native|Public|BlueprintCallable // @ game+0x654d754
	void *8f18d87416(bool bUpdateMesh); // Function Engine.*9553728478.*8f18d87416 // Native|Public|BlueprintCallable // @ game+0x6548bec
	void *ec325f27c5(); // Function Engine.*9553728478.*ec325f27c5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6528958
	void *5d18775563(); // Function Engine.*9553728478.*5d18775563 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57bba20
	void *868c886ed7(struct F*bc9959e0ff OutSplineSegment, bool bWorldSpace); // Function Engine.*9553728478.*868c886ed7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652bb9c
	void *cdafa0799e(); // Function Engine.*9553728478.*cdafa0799e // Final|Native|Public|BlueprintCallable // @ game+0x656391c
};

// Class Engine.*9460cc6525
// Size: 0xb30 (Inherited: 0xb30)
struct U*9460cc6525 : UStaticMeshComponent {
};

// Class Engine.Texture
// Size: 0x170 (Inherited: 0x28)
struct UTexture : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FGuid *329a2d5c47; // 0x30(0x10)
	int32 LODBias; // 0x40(0x04)
	int32 NumCinematicMipLevels; // 0x44(0x04)
	int32 GlobalLODBias; // 0x48(0x04)
	char SRGB : 1; // 0x4c(0x01)
	char NeverStream : 1; // 0x4c(0x01)
	char *2326e1fb1b : 1; // 0x4c(0x01)
	char *6130c9d52d : 1; // 0x4c(0x01)
	char *496e691a62 : 1; // 0x4c(0x01)
	char pad_4C_5 : 3; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32 *5c4f00faab; // 0x50(0x04)
	enum class TextureCompressionSettings CompressionSettings; // 0x54(0x01)
	enum class TextureFilter Filter; // 0x55(0x01)
	enum class TextureGroup LODGroup; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FPerPlatformFloat *a672ac06c4; // 0x58(0x04)
	enum class ETextureDownscaleOptions *77c365cd28; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x60(0x10)
	char pad_70[0x100]; // 0x70(0x100)
};

// Class Engine.Texture2D
// Size: 0x260 (Inherited: 0x170)
struct UTexture2D : UTexture {
	int32 *62f7cc810a; // 0x170(0x04)
	int32 *551f378f44; // 0x174(0x04)
	int32 *df9856dd9d; // 0x178(0x04)
	struct FIntPoint *b248bdcafe; // 0x17c(0x08)
	char pad_184[0x4]; // 0x184(0x04)
	double *7eed340508; // 0x188(0x08)
	char *62a3ea2008 : 1; // 0x190(0x01)
	char *e9095e2a55 : 1; // 0x190(0x01)
	char *e2dc32cc75 : 1; // 0x190(0x01)
	char *e504de2873 : 1; // 0x190(0x01)
	char *7d01fec16b : 1; // 0x190(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0x190(0x01)
	char *34beda989b : 1; // 0x190(0x01)
	char pad_190_7 : 1; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	enum class *5476cf1861 AddressX; // 0x194(0x01)
	enum class *5476cf1861 AddressY; // 0x195(0x01)
	char pad_196[0xca]; // 0x196(0xca)

	void *f698cbaf93(); // Function Engine.Texture2D.*f698cbaf93 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65142dc
	void *302cb06369(); // Function Engine.Texture2D.*302cb06369 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65142b4
	void *d9fde2c66e(); // Function Engine.Texture2D.*d9fde2c66e // Native|Public|BlueprintCallable // @ game+0x65518b0
};

// Class Engine.*4731177e12
// Size: 0x50 (Inherited: 0x30)
struct U*4731177e12 : UDataAsset {
	struct UTexture2D* Color; // 0x30(0x20)
};

// Class Engine.*fb8768b9e3
// Size: 0x9a0 (Inherited: 0x990)
struct U*fb8768b9e3 : UPrimitiveComponent {
	struct U*4731177e12* LabelData; // 0x988(0x08)
	struct FVector2D Offset; // 0x990(0x08)
};

// Class Engine.*4032b41f9c
// Size: 0xf0 (Inherited: 0x30)
struct U*4032b41f9c : UDataAsset {
	struct UTexture2D* Color; // 0x30(0x20)
	struct UTexture2D* Normal; // 0x50(0x20)
	float Height; // 0x70(0x04)
	char pad_74[0x7c]; // 0x74(0x7c)
};

// Class Engine.*2a70fa0ff4
// Size: 0x990 (Inherited: 0x990)
struct U*2a70fa0ff4 : UPrimitiveComponent {
	struct U*4032b41f9c* ObjectData; // 0x988(0x08)
};

// Class Engine.*83352a2b89
// Size: 0x9d0 (Inherited: 0x990)
struct U*83352a2b89 : UPrimitiveComponent {
	char pad_990[0x10]; // 0x990(0x10)
	struct UBodySetup* *ea8f305bb4; // 0x9a0(0x08)
	char pad_9A8[0x28]; // 0x9a8(0x28)
};

// Class Engine.*e5b9f80e89
// Size: 0x990 (Inherited: 0x990)
struct U*e5b9f80e89 : UPrimitiveComponent {
};

// Class Engine.NavMeshRenderingComponent
// Size: 0x9a0 (Inherited: 0x990)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char pad_990[0x10]; // 0x990(0x10)
};

// Class Engine.*c33da1e85e
// Size: 0x990 (Inherited: 0x990)
struct U*c33da1e85e : UPrimitiveComponent {
};

// Class Engine.MeshClippingUnderwaterComponent
// Size: 0x9f0 (Inherited: 0x9c0)
struct UMeshClippingUnderwaterComponent : UBoxComponent {
	bool bEnabled; // 0x9b8(0x01)
	bool bUseParentBounds; // 0x9b9(0x01)
	float ExtendUpwards; // 0x9bc(0x04)
	float ExtendDownwards; // 0x9c0(0x04)
	char pad_9CA[0x26]; // 0x9ca(0x26)

	void *a29a9d95e1(); // Function Engine.MeshClippingUnderwaterComponent.*a29a9d95e1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652dcc4
};

// Class Engine.SphereComponent
// Size: 0x9b0 (Inherited: 0x9b0)
struct USphereComponent : U*ecc7e9561f {
	float SphereRadius; // 0x9a8(0x04)

	void *8a9b776e5e(); // Function Engine.SphereComponent.*8a9b776e5e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65323c4
	void *f4386a1a20(); // Function Engine.SphereComponent.*f4386a1a20 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6530090
	void *4daa1f5aaf(); // Function Engine.SphereComponent.*4daa1f5aaf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65304e4
	float *7457dde290(); // Function Engine.SphereComponent.*7457dde290 // Final|Native|Public|BlueprintCallable // @ game+0x6557260
};

// Class Engine.*24f0deff85
// Size: 0x9b0 (Inherited: 0x9b0)
struct U*24f0deff85 : USphereComponent {
};

// Class Engine.TextRenderComponent
// Size: 0x9e0 (Inherited: 0x990)
struct UTextRenderComponent : UPrimitiveComponent {
	struct FText Text; // 0x988(0x18)
	struct UMaterialInterface* TextMaterial; // 0x9a0(0x08)
	struct UFont* Font; // 0x9a8(0x08)
	enum class *f0109e811a HorizontalAlignment; // 0x9b0(0x01)
	enum class *27c6dd5b03 VerticalAlignment; // 0x9b1(0x01)
	struct FColor TextRenderColor; // 0x9b4(0x04)
	float XScale; // 0x9b8(0x04)
	float YScale; // 0x9bc(0x04)
	float WorldSize; // 0x9c0(0x04)
	float *628cd39853; // 0x9c4(0x04)
	float HorizSpacingAdjust; // 0x9c8(0x04)
	float VertSpacingAdjust; // 0x9cc(0x04)
	char bAlwaysRenderAsText : 1; // 0x9d0(0x01)
	char pad_9D6_1 : 7; // 0x9d6(0x01)
	char pad_9D7[0x9]; // 0x9d7(0x09)

	void *279b7ed299(); // Function Engine.TextRenderComponent.*279b7ed299 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6538450
	void *5895e04971(); // Function Engine.TextRenderComponent.*5895e04971 // Final|Native|Public|BlueprintCallable // @ game+0x6552348
	void SetText(); // Function Engine.TextRenderComponent.SetText // Final|Native|Public|BlueprintCallable // @ game+0x6558cf0
	void *270c9382a1(); // Function Engine.TextRenderComponent.*270c9382a1 // Final|Native|Public|BlueprintCallable // @ game+0x655aacc
	void *b88823d5b0(); // Function Engine.TextRenderComponent.*b88823d5b0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65311c0
	void *73eaa612b7(); // Function Engine.TextRenderComponent.*73eaa612b7 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6558e88
	void *21a43d680e(); // Function Engine.TextRenderComponent.*21a43d680e // Final|Native|Public|BlueprintCallable // @ game+0x65522a8
	void *fbb2917a42(); // Function Engine.TextRenderComponent.*fbb2917a42 // Final|Native|Public|BlueprintCallable // @ game+0x6559cd0
	void *a768b2c395(); // Function Engine.TextRenderComponent.*a768b2c395 // Final|Native|Public|BlueprintCallable // @ game+0x655a950
	void *9743a39873(); // Function Engine.TextRenderComponent.*9743a39873 // Final|Native|Public|BlueprintCallable // @ game+0x6551768
	void *4bda48995d(); // Function Engine.TextRenderComponent.*4bda48995d // Final|Native|Public|BlueprintCallable // @ game+0x655ab6c
	void *36a99f8698(); // Function Engine.TextRenderComponent.*36a99f8698 // Final|Native|Public|BlueprintCallable // @ game+0x6559e90
	void *d1aca014fb(); // Function Engine.TextRenderComponent.*d1aca014fb // Final|Native|Public|BlueprintCallable // @ game+0x6558df0
	void *cb572c89bf(); // Function Engine.TextRenderComponent.*cb572c89bf // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6531254
};

// Class Engine.VectorFieldComponent
// Size: 0x9b0 (Inherited: 0x990)
struct UVectorFieldComponent : UPrimitiveComponent {
	struct UVectorField* VectorField; // 0x988(0x08)
	float Intensity; // 0x990(0x04)
	float Tightness; // 0x994(0x04)
	char *62c5abd672 : 1; // 0x998(0x01)
	char pad_9A0_1 : 7; // 0x9a0(0x01)
	char pad_9A1[0xf]; // 0x9a1(0x0f)

	void SetIntensity(); // Function Engine.VectorFieldComponent.SetIntensity // Native|Public|BlueprintCallable // @ game+0x57eb304
};

// Class Engine.RadialForceComponent
// Size: 0x490 (Inherited: 0x460)
struct URadialForceComponent : USceneComponent {
	float Radius; // 0x458(0x04)
	enum class *92e9a571fb Falloff; // 0x45c(0x01)
	float ImpulseStrength; // 0x460(0x04)
	char bImpulseVelChange : 1; // 0x464(0x01)
	char bIgnoreOwningActor : 1; // 0x464(0x01)
	float ForceStrength; // 0x468(0x04)
	float DestructibleDamage; // 0x46c(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectTypesToAffect; // 0x470(0x10)
	char pad_481_2 : 6; // 0x481(0x01)
	char pad_482[0xe]; // 0x482(0x0e)

	void *a9fe3480ea(); // Function Engine.RadialForceComponent.*a9fe3480ea // Native|Public|BlueprintCallable // @ game+0x6548e54
	void *417c62e1c9(); // Function Engine.RadialForceComponent.*417c62e1c9 // Native|Public|BlueprintCallable // @ game+0x650fca0
	void *9160b92bf4(); // Function Engine.RadialForceComponent.*9160b92bf4 // Native|Public|BlueprintCallable // @ game+0x57e050c
};

// Class Engine.TextureCube
// Size: 0x2c0 (Inherited: 0x170)
struct UTextureCube : UTexture {
	bool *2da28b17d9; // 0x170(0x01)
	char pad_171[0x14f]; // 0x171(0x14f)
};

// Class Engine.ReflectionCaptureComponent
// Size: 0x4a0 (Inherited: 0x460)
struct UReflectionCaptureComponent : USceneComponent {
	struct UBillboardComponent* *4099242518; // 0x458(0x08)
	enum class *e74a00b599 ReflectionSourceType; // 0x460(0x01)
	bool bOverrideCullDistance; // 0x461(0x01)
	enum class *f1e85ae637 IndoorOutdoorMask; // 0x462(0x01)
	struct UTextureCube* Cubemap; // 0x468(0x08)
	struct UTextureCube* *c6ea6662b9; // 0x470(0x08)
	float SourceCubemapAngle; // 0x478(0x04)
	float Brightness; // 0x47c(0x04)
	struct FVector CaptureOffset; // 0x480(0x0c)
	float CullDistance; // 0x48c(0x04)
	char pad_493[0xd]; // 0x493(0x0d)
};

// Class Engine.BoxReflectionCaptureComponent
// Size: 0x4b0 (Inherited: 0x4a0)
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x4a0(0x04)
	char pad_4A4[0xc]; // 0x4a4(0x0c)
};

// Class Engine.BoxReflectionCaptureSAComponent
// Size: 0x4b0 (Inherited: 0x4b0)
struct UBoxReflectionCaptureSAComponent : UBoxReflectionCaptureComponent {
};

// Class Engine.*443e7605a6
// Size: 0x4c0 (Inherited: 0x4a0)
struct U*443e7605a6 : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct U*24f0deff85* *89202c5bc9; // 0x4a8(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)
};

// Class Engine.*f58220cd5c
// Size: 0x4b0 (Inherited: 0x4a0)
struct U*f58220cd5c : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x4a0(0x04)
	float *cc19990fa0; // 0x4a4(0x04)
	struct U*24f0deff85* *89202c5bc9; // 0x4a8(0x08)
};

// Class Engine.*01d4b0021b
// Size: 0x5c0 (Inherited: 0x4e0)
struct U*01d4b0021b : USceneCaptureComponent {
	struct UBoxComponent* *9c7a661c5d; // 0x4d8(0x08)
	float *5db9aea8b9; // 0x4e0(0x04)
	float *321d11d5a7; // 0x4e4(0x04)
	float *a5ec40dc26; // 0x4e8(0x04)
	int32 ScreenPercentage; // 0x4ec(0x04)
	float *d5d550f641; // 0x4f0(0x04)
	float DistanceFromPlaneFadeStart; // 0x4f4(0x04)
	float DistanceFromPlaneFadeEnd; // 0x4f8(0x04)
	float *e9b4ece663; // 0x4fc(0x04)
	float *4366866e77; // 0x500(0x04)
	float *229986679e; // 0x504(0x04)
	float *cbb8e61d95; // 0x508(0x04)
	bool *61b3ee48ab; // 0x50c(0x01)
	char pad_515[0xab]; // 0x515(0xab)
};

// Class Engine.SceneCaptureComponentCube
// Size: 0x4e0 (Inherited: 0x4e0)
struct USceneCaptureComponentCube : USceneCaptureComponent {
	struct UTextureRenderTargetCube* TextureTarget; // 0x4d8(0x08)

	void CaptureScene(); // Function Engine.SceneCaptureComponentCube.CaptureScene // Final|Native|Public|BlueprintCallable // @ game+0x651bc5c
};

// Class Engine.*02b8faa23a
// Size: 0x4f0 (Inherited: 0x460)
struct U*02b8faa23a : USceneComponent {
	char bLiveTexture : 1; // 0x458(0x01)
	char bSupportsDepth : 1; // 0x458(0x01)
	char bNoAlphaChannel : 1; // 0x458(0x01)
	struct UTexture* Texture; // 0x460(0x08)
	struct UTexture* LeftTexture; // 0x468(0x08)
	char bQuadPreserveTextureRatio : 1; // 0x470(0x01)
	char pad_470_4 : 4; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	struct FVector2D QuadSize; // 0x474(0x08)
	struct FBox2D UVRect; // 0x47c(0x14)
	float CylinderRadius; // 0x490(0x04)
	float CylinderOverlayArc; // 0x494(0x04)
	int32 CylinderHeight; // 0x498(0x04)
	enum class EStereoLayerType StereoLayerType; // 0x49c(0x01)
	enum class *d85dc7030d StereoLayerShape; // 0x49d(0x01)
	char pad_49E[0x2]; // 0x49e(0x02)
	int32 Priority; // 0x4a0(0x04)
	char pad_4A4[0x4c]; // 0x4a4(0x4c)

	void *aa830707e1(); // Function Engine.*02b8faa23a.*aa830707e1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x574d820
	void *f99f669288(); // Function Engine.*02b8faa23a.*f99f669288 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6556248
	void *c9977e041b(); // Function Engine.*02b8faa23a.*c9977e041b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x578b5dc
	void SetPriority(); // Function Engine.*02b8faa23a.SetPriority // Final|Native|Public|BlueprintCallable // @ game+0x6556120
	void *aff8d5e68b(); // Function Engine.*02b8faa23a.*aff8d5e68b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65321e8
	void *bc8fbe448a(); // Function Engine.*02b8faa23a.*bc8fbe448a // Final|Native|Public|BlueprintCallable // @ game+0x653fa44
	void *06b5410430(); // Function Engine.*02b8faa23a.*06b5410430 // Final|Native|Public|BlueprintCallable // @ game+0x6558f1c
	void *64cf809fe5(); // Function Engine.*02b8faa23a.*64cf809fe5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x652eb7c
	void *a0380ecddf(); // Function Engine.*02b8faa23a.*a0380ecddf // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6559404
};

// Class Engine.*87fcc6ad93
// Size: 0x480 (Inherited: 0x460)
struct U*87fcc6ad93 : USceneComponent {
	float Strength; // 0x458(0x04)
	float Speed; // 0x45c(0x04)
	float MinGustAmount; // 0x460(0x04)
	float MaxGustAmount; // 0x464(0x04)
	float Radius; // 0x468(0x04)
	char bPointWind : 1; // 0x46c(0x01)
	char pad_474_1 : 7; // 0x474(0x01)
	char pad_475[0xb]; // 0x475(0x0b)

	void SetSpeed(); // Function Engine.*87fcc6ad93.SetSpeed // Final|Native|Public|BlueprintCallable // @ game+0x65571c0
	void *10bb7fd4ca(); // Function Engine.*87fcc6ad93.*10bb7fd4ca // Final|Native|Public|BlueprintCallable // @ game+0x6558168
	void *27648910b4(); // Function Engine.*87fcc6ad93.*27648910b4 // Final|Native|Public|BlueprintCallable // @ game+0x6554618
	void SetRadius(); // Function Engine.*87fcc6ad93.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x65562fc
	void *a54346267d(); // Function Engine.*87fcc6ad93.*a54346267d // Final|Native|Public|BlueprintCallable // @ game+0x655a5e8
	void *eef217696a(); // Function Engine.*87fcc6ad93.*eef217696a // Final|Native|Public|BlueprintCallable // @ game+0x6554804
};

// Class Engine.TimelineComponent
// Size: 0x2e0 (Inherited: 0x1f0)
struct UTimelineComponent : UActorComponent {
	struct FTimeline *4ffd7b9e3d; // 0x1f0(0xe0)
	char *4c44f735ef : 1; // 0x2d0(0x01)
	char pad_2D0_1 : 7; // 0x2d0(0x01)
	char pad_2D1[0xf]; // 0x2d1(0x0f)

	void *d3fa3fb5ba(); // Function Engine.TimelineComponent.*d3fa3fb5ba // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652af18
	void *08afa86053(); // Function Engine.TimelineComponent.*08afa86053 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652e0d0
	void Stop(); // Function Engine.TimelineComponent.Stop // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x656161c
	void Play(); // Function Engine.TimelineComponent.Play // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0xa13830
	struct U*226eb62c2c* SetVectorCurve(); // Function Engine.TimelineComponent.SetVectorCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x655987c
	void IsLooping(); // Function Engine.TimelineComponent.IsLooping // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653668c
	void SetPlaybackPosition(bool bFireEvents); // Function Engine.TimelineComponent.SetPlaybackPosition // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6555890
	void IsPlaying(); // Function Engine.TimelineComponent.IsPlaying // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536790
	struct U*e9d5a49b26* SetLinearColorCurve(); // Function Engine.TimelineComponent.SetLinearColorCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65536ac
	void *8afdcae2e6(); // Function Engine.TimelineComponent.*8afdcae2e6 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653154c
	void *3de5995313(); // Function Engine.TimelineComponent.*3de5995313 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x655906c
	void SetPlayRate(); // Function Engine.TimelineComponent.SetPlayRate // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65557f8
	void ReverseFromEnd(); // Function Engine.TimelineComponent.ReverseFromEnd // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65496dc
	void *7c50afc426(); // Function Engine.TimelineComponent.*7c50afc426 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536bc8
	void GetPlayRate(); // Function Engine.TimelineComponent.GetPlayRate // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x652e0b8
	void SetNewTime(); // Function Engine.TimelineComponent.SetNewTime // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0xc901a0
	void SetFloatCurve(struct UCurveFloat* NewFloatCurve); // Function Engine.TimelineComponent.SetFloatCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6551184
	void Reverse(); // Function Engine.TimelineComponent.Reverse // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65496ac
	void PlayFromStart(); // Function Engine.TimelineComponent.PlayFromStart // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6544ac8
	void OnRep_Timeline(); // Function Engine.TimelineComponent.OnRep_Timeline // Final|Native|Public // @ game+0x6543608
	void *a6aa5b95f9(); // Function Engine.TimelineComponent.*a6aa5b95f9 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6552494
	void SetLooping(); // Function Engine.TimelineComponent.SetLooping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65544f0
	void *889dc797df(); // Function Engine.TimelineComponent.*889dc797df // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6558fbc
};

// Class Engine.AnimComposite
// Size: 0xb0 (Inherited: 0xa0)
struct UAnimComposite : U*72d705a6ea {
	struct FAnimTrack *2cafe9a115; // 0xa0(0x10)
};

// Class Engine.AnimSequence
// Size: 0x1a0 (Inherited: 0xa0)
struct UAnimSequence : UAnimSequenceBase {
	int32 NumFrames; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct F*cc46050e3a> *135e614459; // 0xa8(0x10)
	char pad_B8[0x98]; // 0xb8(0x98)
	enum class EAdditiveAnimationType *32dd2a999d; // 0x150(0x01)
	enum class *dd5f25cf0f *d6ce7e83b8; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	struct UAnimSequence* *8df7cb07f0; // 0x158(0x08)
	int32 *dc8448e86a; // 0x160(0x04)
	int32 *b097981a90; // 0x164(0x04)
	struct FName RetargetSource; // 0x168(0x08)
	enum class EAnimInterpolationType Interpolation; // 0x170(0x01)
	bool *3473e893a7; // 0x171(0x01)
	bool *51a92cffc9; // 0x172(0x01)
	enum class ERootMotionRootLock *1240d362b2; // 0x173(0x01)
	bool *f7b6e9d083; // 0x174(0x01)
	bool *ea01fe9bbe; // 0x175(0x01)
	char pad_176[0x2]; // 0x176(0x02)
	struct TArray<struct F*4afd2fe966> AuthoredSyncMarkers; // 0x178(0x10)
	char pad_188[0x18]; // 0x188(0x18)
};

// Class Engine.BlendSpaceBase
// Size: 0x140 (Inherited: 0x78)
struct UBlendSpaceBase : UAnimationAsset {
	char pad_78[0x8]; // 0x78(0x08)
	bool *b189cc7ca1; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float AnimLength; // 0x84(0x04)
	struct TArray<struct F*38da5586b4> *1cf4668a33; // 0x88(0x10)
	struct FInterpolationParameter *8428d4e3ba[0x03]; // 0x98(0x18)
	float *2645e121c5; // 0xb0(0x04)
	enum class ENotifyTriggerMode *ed83303457; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32 *ff769bff4e; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FBlendSample> SampleData; // 0xc0(0x10)
	struct TArray<struct F*b756731601> *9fb42adcd6; // 0xd0(0x10)
	struct FBlendParameter *77326f7a5e[0x03]; // 0xe0(0x60)
};

// Class Engine.BlendSpace
// Size: 0x148 (Inherited: 0x140)
struct UBlendSpace : UBlendSpaceBase {
	enum class *6a0c482f9f *57527bdd1e; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class Engine.AimOffsetBlendSpace
// Size: 0x148 (Inherited: 0x148)
struct UAimOffsetBlendSpace : UBlendSpace {
};

// Class Engine.BlendSpace1D
// Size: 0x148 (Inherited: 0x140)
struct UBlendSpace1D : UBlendSpaceBase {
	bool *e316623597; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class Engine.AimOffsetBlendSpace1D
// Size: 0x148 (Inherited: 0x148)
struct UAimOffsetBlendSpace1D : UBlendSpace1D {
};

// Class Engine.PoseAsset
// Size: 0x190 (Inherited: 0x78)
struct UPoseAsset : UAnimationAsset {
	struct F*a0028bf90e *f0b61a8c23; // 0x78(0x90)
	bool *77d687097a; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	int32 *374b525783; // 0x10c(0x04)
	struct FName RetargetSource; // 0x110(0x08)
	char pad_118[0x78]; // 0x118(0x78)
};

// Class Engine.*6b20c54347
// Size: 0x28 (Inherited: 0x28)
struct U*6b20c54347 : UObject {
};

// Class Engine.*8e8636eefc
// Size: 0x28 (Inherited: 0x28)
struct U*8e8636eefc : UInterface {
};

// Class Engine.AnimClassData
// Size: 0x98 (Inherited: 0x28)
struct UAnimClassData : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*76521713df> *e7aba5b1a1; // 0x30(0x10)
	struct USkeleton* TargetSkeleton; // 0x40(0x08)
	struct TArray<struct FAnimNotifyEvent> *b8a2cd1b56; // 0x48(0x10)
	int32 *cb2a8193d5; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<int32> *f120659f5a; // 0x60(0x10)
	struct UStructProperty* *4cde64d3e7; // 0x70(0x08)
	struct TArray<struct UStructProperty*> *6828f7ad47; // 0x78(0x10)
	struct TArray<struct FName> *c961b04a29; // 0x88(0x10)
};

// Class Engine.AnimCompress
// Size: 0x48 (Inherited: 0x28)
struct UAnimCompress : UObject {
	struct FString Description; // 0x28(0x10)
	char *3b62fd8335 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	enum class AnimationCompressionFormat *31909f3f99; // 0x3c(0x01)
	enum class AnimationCompressionFormat *41053d899b; // 0x3d(0x01)
	enum class AnimationCompressionFormat *677c37349d; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
	float *ef30064824; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.AnimCompress_Automatic
// Size: 0x50 (Inherited: 0x48)
struct UAnimCompress_Automatic : UAnimCompress {
	float *0e5df999c3; // 0x48(0x04)
	char *4c54f09126 : 1; // 0x4c(0x01)
	char *baed0545d9 : 1; // 0x4c(0x01)
	char *7b0106a943 : 1; // 0x4c(0x01)
	char *13ff77b880 : 1; // 0x4c(0x01)
	char *cb0a811a6e : 1; // 0x4c(0x01)
	char *3662bf8066 : 1; // 0x4c(0x01)
	char *f0d3f02981 : 1; // 0x4c(0x01)
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
	int32 *56c998e4ab; // 0x48(0x04)
	char *dfa04a0579 : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.AnimCompress_RemoveLinearKeys
// Size: 0x68 (Inherited: 0x48)
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float *121f72b549; // 0x48(0x04)
	float *47b4aece1b; // 0x4c(0x04)
	float *d851d35eef; // 0x50(0x04)
	float *6d39ede7ea; // 0x54(0x04)
	float *bdcb19ec67; // 0x58(0x04)
	float *e0ffa509a2; // 0x5c(0x04)
	float *74513d5846; // 0x60(0x04)
	char *0ea3cf44dc : 1; // 0x64(0x01)
	char *1802a38b21 : 1; // 0x64(0x01)
	char pad_64_2 : 6; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.AnimCompress_PerTrackCompression
// Size: 0xe8 (Inherited: 0x68)
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float *1208a1dcf0; // 0x68(0x04)
	float *9464e60890; // 0x6c(0x04)
	float *fcd08b6d4e; // 0x70(0x04)
	float *53b5105517; // 0x74(0x04)
	struct TArray<enum class AnimationCompressionFormat> *e29541ab9b; // 0x78(0x10)
	struct TArray<enum class AnimationCompressionFormat> *78d63cf61b; // 0x88(0x10)
	struct TArray<enum class AnimationCompressionFormat> *67908a58b9; // 0x98(0x10)
	char bResampleAnimation : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float *9aaacd3843; // 0xac(0x04)
	int32 *bc4f6ffc62; // 0xb0(0x04)
	char *8aa60b2ecf : 1; // 0xb4(0x01)
	char *865387bb64 : 1; // 0xb4(0x01)
	char pad_B4_2 : 6; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32 *51ac7fa5a4; // 0xb8(0x04)
	float *32d60262d1; // 0xbc(0x04)
	float *0356d98251; // 0xc0(0x04)
	char *bc9da6a854 : 1; // 0xc4(0x01)
	char pad_C4_1 : 7; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float *1a2500c7bc; // 0xc8(0x04)
	float *78fcc9f841; // 0xcc(0x04)
	float *ebbe4d2478; // 0xd0(0x04)
	float *da9d470aca; // 0xd4(0x04)
	float *4c33089e5e; // 0xd8(0x04)
	char pad_DC[0xc]; // 0xdc(0x0c)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
// Size: 0x58 (Inherited: 0x48)
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float *121f72b549; // 0x48(0x04)
	float *47b4aece1b; // 0x4c(0x04)
	float *d851d35eef; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.*894381f4b2
// Size: 0x3b8 (Inherited: 0x3a0)
struct U*894381f4b2 : UAnimInstance {
	struct UAnimationAsset* *a726546df3; // 0x3a0(0x08)
	DelegateProperty *714382c7a9; // 0x3a8(0x10)

	void SetPlayRate(); // Function Engine.*894381f4b2.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x6555760
	void *b35a5fe61d(float InPosition); // Function Engine.*894381f4b2.*b35a5fe61d // Final|Native|Public|BlueprintCallable // @ game+0x6555cfc
	void *0fac2ed865(); // Function Engine.*894381f4b2.*0fac2ed865 // Final|Native|Public|BlueprintCallable // @ game+0x6556528
	void *9393821099(); // Function Engine.*894381f4b2.*9393821099 // Final|Native|Public|BlueprintCallable // @ game+0x652cdbc
	void *696e0c6fa8(struct UAnimationAsset* NewAsset); // Function Engine.*894381f4b2.*696e0c6fa8 // Native|Public|BlueprintCallable // @ game+0x654c04c
	void *6eb2e22f53(); // Function Engine.*894381f4b2.*6eb2e22f53 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x654c988
	float SetPosition(); // Function Engine.*894381f4b2.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x6555b34
	void SetLooping(); // Function Engine.*894381f4b2.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x655445c
	void *4e41e71236(float Value); // Function Engine.*894381f4b2.*4e41e71236 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6555fdc
	float *dcf671f7b9(); // Function Engine.*894381f4b2.*dcf671f7b9 // Final|Native|Public|BlueprintCallable // @ game+0x65442fc
	void *e8c79c3460(); // Function Engine.*894381f4b2.*e8c79c3460 // Final|Native|Public|BlueprintCallable // @ game+0x6555aa0
	void *736b44fd47(); // Function Engine.*894381f4b2.*736b44fd47 // Final|Native|Public|BlueprintCallable // @ game+0x6561634
};

// Class Engine.*ab57198cce
// Size: 0x28 (Inherited: 0x28)
struct U*ab57198cce : UObject {
};

// Class Engine.AnimNotify_PlaySound
// Size: 0x58 (Inherited: 0x38)
struct UAnimNotify_PlaySound : UAnimNotify {
	struct USoundBase* Sound; // 0x38(0x08)
	float VolumeMultiplier; // 0x40(0x04)
	float PitchMultiplier; // 0x44(0x04)
	char bFollow : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FName AttachName; // 0x50(0x08)
};

// Class Engine.*9f098aff90
// Size: 0x38 (Inherited: 0x38)
struct U*9f098aff90 : UAnimNotify {
};

// Class Engine.*35bfbaf456
// Size: 0x30 (Inherited: 0x30)
struct U*35bfbaf456 : UAnimNotifyState {
};

// Class Engine.AnimNotifyState_TimedParticleEffect
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x30(0x08)
	struct FName SocketName; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x0c)
	struct FRotator RotationOffset; // 0x4c(0x0c)
	bool bDestroyAtEnd; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.AnimNotifyState_Trail
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_Trail : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x30(0x08)
	struct FName FirstSocketName; // 0x38(0x08)
	struct FName SecondSocketName; // 0x40(0x08)
	enum class *37b72e83a6 WidthScaleMode; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FName WidthScaleCurve; // 0x50(0x08)
	char bRecycleSpawnedSystems : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	void OverridePSTemplate(struct UAnimSequenceBase* Animation); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate // Event|Public|BlueprintEvent|Const // @ game+0x293938
};

// Class Engine.AnimSet
// Size: 0xf0 (Inherited: 0x28)
struct UAnimSet : UObject {
	char *25cc18255c : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FName> *cfd785e5e0; // 0x30(0x10)
	struct TArray<struct F*6bd305e3cf> *34b453a8fb; // 0x40(0x10)
	struct TArray<bool> *f4717ba961; // 0x50(0x10)
	struct TArray<bool> *706513ba6e; // 0x60(0x10)
	struct TArray<struct FName> *d3b5144afc; // 0x70(0x10)
	struct TArray<struct FName> *384c7fb700; // 0x80(0x10)
	struct FName *53bcfdf871; // 0x90(0x08)
	struct FName *7f45db628d; // 0x98(0x08)
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
	struct TArray<struct UObject*> *85cb9b171e; // 0x288(0x10)
	bool *d4290e803a; // 0x298(0x01)
	bool *864ebe6060; // 0x299(0x01)
	bool *7ff1c7657a; // 0x29a(0x01)
	bool *02b7b1f748; // 0x29b(0x01)
	bool *0407b13b67; // 0x29c(0x01)
	bool *ce90d0bca7; // 0x29d(0x01)
	bool *3b3bd5abb5; // 0x29e(0x01)
	char pad_29F[0x101]; // 0x29f(0x101)
};

// Class Engine.AssetMappingTable
// Size: 0x38 (Inherited: 0x28)
struct UAssetMappingTable : UObject {
	struct TArray<struct F*a339858462> *e6333a7bea; // 0x28(0x10)
};

// Class Engine.AutomationTestSettings
// Size: 0x320 (Inherited: 0x28)
struct UAutomationTestSettings : UObject {
	struct TArray<struct FString> EngineTestModules; // 0x28(0x10)
	struct TArray<struct FString> EditorTestModules; // 0x38(0x10)
	struct FStringAssetReference AutomationTestmap; // 0x48(0x10)
	struct TArray<struct F*2f0ad4c8ba> EditorPerformanceTestMaps; // 0x58(0x10)
	struct TArray<struct FStringAssetReference> AssetsToOpen; // 0x68(0x10)
	struct F*5932c779f4 BuildPromotionTest; // 0x78(0x1f0)
	struct F*19f7ff005d MaterialEditorPromotionTest; // 0x268(0x30)
	struct F*ae6ce9e170 ParticleEditorPromotionTest; // 0x298(0x10)
	struct F*fb61250bda BlueprintEditorPromotionTest; // 0x2a8(0x30)
	struct TArray<struct FString> TestLevelFolders; // 0x2d8(0x10)
	struct TArray<struct F*41485582e8> ExternalTools; // 0x2e8(0x10)
	struct TArray<struct F*d044e6efbf> ImportExportTestDefinitions; // 0x2f8(0x10)
	struct TArray<struct F*b4bbbd0321> LaunchOnSettings; // 0x308(0x10)
	struct FIntPoint DefaultScreenshotResolution; // 0x318(0x08)
};

// Class Engine.AvoidanceManager
// Size: 0xe0 (Inherited: 0x28)
struct UAvoidanceManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	float DefaultTimeToLive; // 0x30(0x04)
	float LockTimeAfterAvoid; // 0x34(0x04)
	float LockTimeAfterClean; // 0x38(0x04)
	float DeltaTimeToPredict; // 0x3c(0x04)
	float ArtificialRadiusExpansion; // 0x40(0x04)
	float TestHeightDifference; // 0x44(0x04)
	float HeightCheckMargin; // 0x48(0x04)
	char pad_4C[0x94]; // 0x4c(0x94)

	void *8b96206ac6(); // Function Engine.AvoidanceManager.*8b96206ac6 // Final|Native|Public|BlueprintCallable // @ game+0x652da14
	void *09c6cb150f(); // Function Engine.AvoidanceManager.*09c6cb150f // Final|Native|Public|BlueprintCallable // @ game+0x652dbb0
	void *33d81e214d(); // Function Engine.AvoidanceManager.*33d81e214d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6527ddc
	int32 *af23922052(); // Function Engine.AvoidanceManager.*af23922052 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6527e8c
	void *7b1b5e32b4(struct F*1772e8cb65 AvoidanceData); // Function Engine.AvoidanceManager.*7b1b5e32b4 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6527cb4
	void *6d238b549d(float AvoidanceWeight); // Function Engine.AvoidanceManager.*6d238b549d // Final|Native|Public|BlueprintCallable // @ game+0x6548a58
};

// Class Engine.BlendProfile
// Size: 0x48 (Inherited: 0x28)
struct UBlendProfile : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USkeleton* *1513d7f75d; // 0x30(0x08)
	struct TArray<struct F*41cf1857cd> *71648773d4; // 0x38(0x10)
};

// Class Engine.BlueprintCore
// Size: 0x50 (Inherited: 0x28)
struct UBlueprintCore : UObject {
	struct UClass* *8b42c38db2; // 0x28(0x08)
	struct UClass* GeneratedClass; // 0x30(0x08)
	bool *6936ffadae; // 0x38(0x01)
	bool *87749cea3a; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FGuid *4952b947b4; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.Blueprint
// Size: 0x1a0 (Inherited: 0x50)
struct UBlueprint : UBlueprintCore {
	char bRecompileOnLoad : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UClass* ParentClass; // 0x58(0x08)
	struct UObject* *506f4e0a24; // 0x60(0x08)
	char *238cb81303 : 1; // 0x68(0x01)
	char *e63eea8866 : 1; // 0x68(0x01)
	char pad_68_2 : 6; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x70(0x08)
	struct TArray<struct UActorComponent*> *3cf3d68327; // 0x78(0x10)
	struct TArray<struct U*bd91982c84*> *196fc7dd02; // 0x88(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x98(0x08)
	enum class EBlueprintType BlueprintType; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 *1e2f339191; // 0xa4(0x04)
	char pad_A8[0xe8]; // 0xa8(0xe8)
	bool bNativize; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)
};

// Class Engine.AnimBlueprint
// Size: 0x1c0 (Inherited: 0x1a0)
struct UAnimBlueprint : UBlueprint {
	struct USkeleton* TargetSkeleton; // 0x198(0x08)
	struct TArray<struct F*450ffba795> Groups; // 0x1a0(0x10)
	bool *19654fcffc; // 0x1b0(0x01)
	bool *c9fd6d2195; // 0x1b1(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
};

// Class Engine.LevelScriptBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct ULevelScriptBlueprint : UBlueprint {
};

// Class Engine.*1bd0df5e6b
// Size: 0x28 (Inherited: 0x28)
struct U*1bd0df5e6b : UBlueprintFunctionLibrary {

	void *8d94cbd1e0(struct TMap<int32, int32> TargetMap); // Function Engine.*1bd0df5e6b.*8d94cbd1e0 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x653f660
	int32 *4f1f8625e1(); // Function Engine.*1bd0df5e6b.*4f1f8625e1 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x653ea14
	void *73784ef87a(); // Function Engine.*1bd0df5e6b.*73784ef87a // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x653f378
	int32 *8617be826b(); // Function Engine.*1bd0df5e6b.*8617be826b // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653ee18
	void *5b64e2837e(); // Function Engine.*1bd0df5e6b.*5b64e2837e // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x653ed0c
	void *d1e8ddc95b(struct TMap<int32, int32> TargetMap); // Function Engine.*1bd0df5e6b.*d1e8ddc95b // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653f540
	struct TMap<int32, int32> *aa4d0dc3f3(); // Function Engine.*1bd0df5e6b.*aa4d0dc3f3 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x653f87c
	void *0b2d1ecd89(int32 Key); // Function Engine.*1bd0df5e6b.*0b2d1ecd89 // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653f038
};

// Class Engine.*5914f4a6eb
// Size: 0x30 (Inherited: 0x30)
struct U*5914f4a6eb : U*9f23a81057 {
};

// Class Engine.*c664e20e5e
// Size: 0x30 (Inherited: 0x30)
struct U*c664e20e5e : U*9f23a81057 {
};

// Class Engine.*a9cda5a3e8
// Size: 0x2a0 (Inherited: 0x1f0)
struct U*a9cda5a3e8 : UGameInstance {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate; // 0x1e8(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate; // 0x1f8(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x208(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x218(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate; // 0x228(0x10)
	struct FMulticastDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x238(0x10)
	struct FMulticastDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x248(0x10)
	struct FMulticastDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x258(0x10)
	struct FMulticastDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x268(0x10)
	struct FMulticastDelegate ApplicationReceivedLocalNotificationDelegate; // 0x278(0x10)
	struct FMulticastDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x288(0x10)

	void PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*a9cda5a3e8.PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void PlatformDelegate__DelegateSignature(); // DelegateFunction Engine.*a9cda5a3e8.PlatformDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void PlatformRegisteredForUserNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*a9cda5a3e8.PlatformRegisteredForUserNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*a9cda5a3e8.PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void PlatformReceivedRemoteNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*a9cda5a3e8.PlatformReceivedRemoteNotificationDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	struct FString PlatformReceivedLocalNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*a9cda5a3e8.PlatformReceivedLocalNotificationDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void PlatformScreenOrientationChangedDelegate__DelegateSignature(); // DelegateFunction Engine.*a9cda5a3e8.PlatformScreenOrientationChangedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
};

// Class Engine.*2288b8d00a
// Size: 0x28 (Inherited: 0x28)
struct U*2288b8d00a : UBlueprintFunctionLibrary {

	void *a989b2e395(int32 inSecondsFromNow, struct FText Body); // Function Engine.*2288b8d00a.*a989b2e395 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6549f54
	struct FText ScheduleLocalNotificationAtTime(); // Function Engine.*2288b8d00a.ScheduleLocalNotificationAtTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6549c18
	void ClearAllLocalNotifications(); // Function Engine.*2288b8d00a.ClearAllLocalNotifications // Final|Native|Static|Public|BlueprintCallable // @ game+0x651c254
	void CancelLocalNotification(); // Function Engine.*2288b8d00a.CancelLocalNotification // Final|Native|Static|Public|BlueprintCallable // @ game+0x65194f8
	struct FString GetLaunchNotification(); // Function Engine.*2288b8d00a.GetLaunchNotification // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x652cb34
};

// Class Engine.*13faa70562
// Size: 0x28 (Inherited: 0x28)
struct U*13faa70562 : UBlueprintFunctionLibrary {

	void *3b28486089(); // Function Engine.*13faa70562.*3b28486089 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x655ae28
	int32 *2731722b00(); // Function Engine.*13faa70562.*2731722b00 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x655b960
	void *dd5d969953(SetProperty TargetSet); // Function Engine.*13faa70562.*dd5d969953 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x655b840
	SetProperty *6a73fc3e8d(); // Function Engine.*13faa70562.*6a73fc3e8d // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x655b5ac
	void *6eb257563f(SetProperty A, SetProperty B); // Function Engine.*13faa70562.*6eb257563f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x655bf0c
	void *e63bd87a0a(); // Function Engine.*13faa70562.*e63bd87a0a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x655aff0
	void *9b334f9443(SetProperty A); // Function Engine.*13faa70562.*9b334f9443 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x655bd44
	void *f92fb7de7d(); // Function Engine.*13faa70562.*f92fb7de7d // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x655bb7c
	SetProperty *5dd09b6b04(SetProperty B); // Function Engine.*13faa70562.*5dd09b6b04 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x655b318
	void *d038fda103(SetProperty TargetSet); // Function Engine.*13faa70562.*d038fda103 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x655b0fc
	int32 *5c301cd0be(); // Function Engine.*13faa70562.*5c301cd0be // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x655ac0c
};

// Class Engine.*c978be3ed3
// Size: 0x28 (Inherited: 0x28)
struct U*c978be3ed3 : UBlueprintFunctionLibrary {

	struct UDataTable* *93c7c9aa98(struct FName RowName); // Function Engine.*c978be3ed3.*93c7c9aa98 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65295a4
	void *76d2fd48a4(struct UDataTable* Table); // Function Engine.*c978be3ed3.*76d2fd48a4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65299cc
	float *88ea7a6cda(); // Function Engine.*c978be3ed3.*88ea7a6cda // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65241c0
};

// Class Engine.*d43a2ae2ae
// Size: 0x28 (Inherited: 0x28)
struct U*d43a2ae2ae : UBlueprintFunctionLibrary {
};

// Class Engine.CollisionProfile
// Size: 0x158 (Inherited: 0x38)
struct UCollisionProfile : U*6080c6b78b {
	struct TArray<struct F*ca842f2a81> Profiles; // 0x38(0x10)
	struct TArray<struct F*70258182d6> DefaultChannelResponses; // 0x48(0x10)
	struct TArray<struct FCustomProfile> EditProfiles; // 0x58(0x10)
	struct TArray<struct FRedirector> ProfileRedirects; // 0x68(0x10)
	struct TArray<struct FRedirector> CollisionChannelRedirects; // 0x78(0x10)
	char pad_88[0xd0]; // 0x88(0xd0)
};

// Class Engine.KismetSystemLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetSystemLibrary : UBlueprintFunctionLibrary {

	void *15f7afc2e1(struct UObject* Object); // Function Engine.KismetSystemLibrary.*15f7afc2e1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6536fac
	struct F*b2f5f3e08e *0ba5682858(); // Function Engine.KismetSystemLibrary.*0ba5682858 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6537a34
	struct FDebugFloatHistory *8fae6425f9(); // Function Engine.KismetSystemLibrary.*8fae6425f9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x650ef90
	void *3425fb9053(struct UObject* Object); // Function Engine.KismetSystemLibrary.*3425fb9053 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6554abc
	void ShowPlatformSpecificLeaderboardScreen(); // Function Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen // Final|Native|Static|Public|BlueprintCallable // @ game+0x655c494
	struct FName *05a613cdf6(); // Function Engine.KismetSystemLibrary.*05a613cdf6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6559b0c
	float SphereTraceMultiByProfile(struct FVector Start, float Radius); // Function Engine.KismetSystemLibrary.SphereTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x655fb80
	void *da44c7c775(); // Function Engine.KismetSystemLibrary.*da44c7c775 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6537f10
	void *3d0b7e7d33(); // Function Engine.KismetSystemLibrary.*3d0b7e7d33 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc763f8
	float BoxTraceMultiForObjects(struct FRotator Orientation, struct TArray<struct AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType); // Function Engine.KismetSystemLibrary.BoxTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65166dc
	void *1783acf087(); // Function Engine.KismetSystemLibrary.*1783acf087 // Final|Native|Static|Public|BlueprintCallable // @ game+0x652cf44
	struct FLinearColor SphereTraceSingleForObjects(struct FVector Start, struct FLinearColor TraceHitColor); // Function Engine.KismetSystemLibrary.SphereTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6560f44
	void *6ffed8803b(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.*6ffed8803b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6537958
	void ForceCloseAdBanner(); // Function Engine.KismetSystemLibrary.ForceCloseAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x6526784
	float BoxTraceSingle(struct FVector End, struct FRotator Orientation, struct TArray<struct AActor*> ActorsToIgnore); // Function Engine.KismetSystemLibrary.BoxTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6516c68
	struct FLinearColor CapsuleTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector End, struct TArray<enum class EObjectTypeQuery> ObjectTypes, float DrawTime); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651a6c8
	void *b022ec90bc(); // Function Engine.KismetSystemLibrary.*b022ec90bc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653d420
	void *de797ae67a(); // Function Engine.KismetSystemLibrary.*de797ae67a // Final|Native|Static|Public|BlueprintCallable // @ game+0x652eb2c
	struct UObject* *6f23437cdf(); // Function Engine.KismetSystemLibrary.*6f23437cdf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6536c90
	float DrawDebugCone(struct UObject* WorldContextObject, struct FVector Direction, float AngleWidth); // Function Engine.KismetSystemLibrary.DrawDebugCone // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6521b50
	struct UObject* *9cad6213a8(struct FName PropertyName); // Function Engine.KismetSystemLibrary.*9cad6213a8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x655674c
	void HideAdBanner(); // Function Engine.KismetSystemLibrary.HideAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x6534c3c
	struct F*b2f5f3e08e *3a4a483ae8(); // Function Engine.KismetSystemLibrary.*3a4a483ae8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6537684
	struct FString *e5f38a19f1(); // Function Engine.KismetSystemLibrary.*e5f38a19f1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6537ac8
	struct FLinearColor CapsuleTraceMultiByProfile(struct UObject* WorldContextObject, struct FVector End, float HalfHeight, struct FLinearColor TraceHitColor); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651a19c
	void *7aecfdc692(struct FName PropertyName); // Function Engine.KismetSystemLibrary.*7aecfdc692 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6552b20
	struct FName *c78856a720(); // Function Engine.KismetSystemLibrary.*c78856a720 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x654c644
	void *0092daf29a(); // Function Engine.KismetSystemLibrary.*0092daf29a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652a91c
	struct TArray<struct AActor*> SphereOverlapActors(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.SphereOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x655f088
	void LaunchURL(); // Function Engine.KismetSystemLibrary.LaunchURL // Final|Native|Static|Public|BlueprintCallable // @ game+0x6539298
	enum class EDrawDebugTrace CapsuleTraceSingleForObjects(struct FVector Start, struct FHitResult OutHit, struct FLinearColor TraceColor, float DrawTime); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651b6d4
	bool *7fa11e4bb1(); // Function Engine.KismetSystemLibrary.*7fa11e4bb1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653d1d0
	void OnAssetClassLoaded__DelegateSignature(); // DelegateFunction Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature // Public|Delegate // @ game+0x293938
	void *32489e0f78(); // Function Engine.KismetSystemLibrary.*32489e0f78 // Final|Native|Static|Public|BlueprintCallable // @ game+0x57879bc
	void *ebc4854dc6(struct UObject* WorldContextObject, struct FRotator AxisRot, float Duration); // Function Engine.KismetSystemLibrary.*ebc4854dc6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6521e38
	struct APlayerController* *a0a0babbd1(); // Function Engine.KismetSystemLibrary.*a0a0babbd1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6546cd4
	struct UObject* *5f4bdbd054(struct FString FunctionName); // Function Engine.KismetSystemLibrary.*5f4bdbd054 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6538714
	void *3f53fd71a3(); // Function Engine.KismetSystemLibrary.*3f53fd71a3 // Final|Native|Static|Public|BlueprintCallable // @ game+0xb8b52c
	void *3e71296aa3(); // Function Engine.KismetSystemLibrary.*3e71296aa3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6538a14
	struct UClass* *b7f5c0e69f(); // Function Engine.KismetSystemLibrary.*b7f5c0e69f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x9d9088
	void *e7afae32ae(); // Function Engine.KismetSystemLibrary.*e7afae32ae // Final|Native|Static|Public|BlueprintCallable // @ game+0x6538b54
	void *040d58fe66(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.*040d58fe66 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652ac48
	struct FLinearColor DrawDebugPlane(); // Function Engine.KismetSystemLibrary.DrawDebugPlane // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6522abc
	void *4cefdb0f44(); // Function Engine.KismetSystemLibrary.*4cefdb0f44 // Final|Native|Static|Public|BlueprintCallable // @ game+0x655c414
	void *9ce0b23943(struct UObject* Object); // Function Engine.KismetSystemLibrary.*9ce0b23943 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65537d0
	struct FName *06e9218772(); // Function Engine.KismetSystemLibrary.*06e9218772 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6559194
	struct USceneComponent* *11300dacd5(struct FVector Origin); // Function Engine.KismetSystemLibrary.*11300dacd5 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6528c34
	void *1b0053bdd0(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.*1b0053bdd0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x93461c
	struct FName *1d0386a0ab(); // Function Engine.KismetSystemLibrary.*1d0386a0ab // Final|Native|Static|Public|BlueprintCallable // @ game+0xb5f4f4
	void *76858a5a48(); // Function Engine.KismetSystemLibrary.*76858a5a48 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65270cc
	enum class EDrawDebugTrace SphereTraceSingleByProfile(struct FHitResult OutHit, struct FLinearColor TraceColor, float DrawTime); // Function Engine.KismetSystemLibrary.SphereTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6560a58
	float *e6a3412b5f(); // Function Engine.KismetSystemLibrary.*e6a3412b5f // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6522008
	void Delay(float Duration); // Function Engine.KismetSystemLibrary.Delay // Final|Native|Static|Public|BlueprintCallable // @ game+0x673608
	struct TArray<struct AActor*> LineTraceMultiByProfile(struct TArray<struct FHitResult> OutHits, struct FLinearColor TraceColor, float DrawTime); // Function Engine.KismetSystemLibrary.LineTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653a38c
	struct UClass* *bd16f65561(); // Function Engine.KismetSystemLibrary.*bd16f65561 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6528ab4
	struct UObject* *629701479e(struct FText InText, bool bPrintToLog); // Function Engine.KismetSystemLibrary.*629701479e // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6546418
	bool BoxTraceMultiByProfile(struct TArray<struct AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, bool bIgnoreSelf, struct FLinearColor TraceHitColor); // Function Engine.KismetSystemLibrary.BoxTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6516178
	void *9f664b733c(); // Function Engine.KismetSystemLibrary.*9f664b733c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x655a68c
	void OnAssetLoaded__DelegateSignature(); // DelegateFunction Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature // Public|Delegate // @ game+0x293938
	void *7c3f4e08e1(); // Function Engine.KismetSystemLibrary.*7c3f4e08e1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652f1b4
	void *e67535aba8(DelegateProperty Delegate, bool bLooping); // Function Engine.KismetSystemLibrary.*e67535aba8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6e7680
	bool *5769c94609(); // Function Engine.KismetSystemLibrary.*5769c94609 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651ddb0
	struct UObject* SetSuppressViewportTransitionMessage(); // Function Engine.KismetSystemLibrary.SetSuppressViewportTransitionMessage // Final|Native|Static|Public|BlueprintCallable // @ game+0x65585ac
	void *b833539b4b(struct UObject* Object); // Function Engine.KismetSystemLibrary.*b833539b4b // Final|Native|Static|Public|BlueprintCallable // @ game+0x65582a0
	struct TArray<struct AActor*> CapsuleTraceSingle(enum class EDrawDebugTrace DrawDebugType, bool bIgnoreSelf, struct FLinearColor TraceHitColor); // Function Engine.KismetSystemLibrary.CapsuleTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651ac38
	void *61a68456ff(); // Function Engine.KismetSystemLibrary.*61a68456ff // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652f1d8
	void StackTrace(); // Function Engine.KismetSystemLibrary.StackTrace // Final|Native|Static|Public|BlueprintCallable // @ game+0x65615b8
	void *dc0d02505d(); // Function Engine.KismetSystemLibrary.*dc0d02505d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652d7d8
	float LineTraceSingle(struct FVector Start, enum class ETraceTypeQuery TraceChannel); // Function Engine.KismetSystemLibrary.LineTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653acd8
	void *b6b6e31524(int32 Value); // Function Engine.KismetSystemLibrary.*b6b6e31524 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653d258
	struct UObject* GetDisplayName(); // Function Engine.KismetSystemLibrary.GetDisplayName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652a4bc
	void *f5faf90e15(); // Function Engine.KismetSystemLibrary.*f5faf90e15 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652e008
	void *cd849de495(); // Function Engine.KismetSystemLibrary.*cd849de495 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6536528
	void *d9e939e643(struct UObject* Object); // Function Engine.KismetSystemLibrary.*d9e939e643 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6537760
	void FlushPersistentDebugLines(); // Function Engine.KismetSystemLibrary.FlushPersistentDebugLines // Final|Native|Static|Public|BlueprintCallable // @ game+0x574dac0
	struct UClass* *db0defba00(); // Function Engine.KismetSystemLibrary.*db0defba00 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x651d8e4
	struct TArray<struct UPrimitiveComponent*> BoxOverlapComponents(struct FVector BoxPos, struct FVector Extent); // Function Engine.KismetSystemLibrary.BoxOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65158e8
	DelegateProperty *5da62803d9(); // Function Engine.KismetSystemLibrary.*5da62803d9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6537c08
	void *bbab955dd2(struct TArray<struct FIntPoint> Resolutions); // Function Engine.KismetSystemLibrary.*bbab955dd2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6528f24
	float *0fbde7e288(); // Function Engine.KismetSystemLibrary.*0fbde7e288 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6522e1c
	void *f553f8a3fe(); // Function Engine.KismetSystemLibrary.*f553f8a3fe // Final|Native|Static|Public|BlueprintCallable // @ game+0x655c290
	void *a33b25d245(); // Function Engine.KismetSystemLibrary.*a33b25d245 // Final|Native|Static|Public|BlueprintCallable // @ game+0xb8b52c
	struct FLinearColor PrintString(); // Function Engine.KismetSystemLibrary.PrintString // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6763a0
	struct TArray<struct AActor*> ComponentOverlapActors(struct UPrimitiveComponent* Component, struct FTransform ComponentTransform); // Function Engine.KismetSystemLibrary.ComponentOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651c7fc
	struct F*b2f5f3e08e *b5c781b7cd(); // Function Engine.KismetSystemLibrary.*b5c781b7cd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6538908
	void *e95d845ce6(float Value); // Function Engine.KismetSystemLibrary.*e95d845ce6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673fec
	void *b248e53c19(); // Function Engine.KismetSystemLibrary.*b248e53c19 // Final|Native|Static|Public|BlueprintCallable // @ game+0x57879bc
	float *f4cbc83a2f(); // Function Engine.KismetSystemLibrary.*f4cbc83a2f // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65228ec
	void *f21cfcf6f3(float Duration); // Function Engine.KismetSystemLibrary.*f21cfcf6f3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x654956c
	DelegateProperty *995b7e6e41(); // Function Engine.KismetSystemLibrary.*995b7e6e41 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6538854
	float LineTraceMultiForObjects(struct FVector End, struct TArray<struct AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType); // Function Engine.KismetSystemLibrary.LineTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653a81c
	float BoxTraceSingleByProfile(struct FVector Start, struct FVector HalfSize, struct FName ProfileName, bool bTraceComplex); // Function Engine.KismetSystemLibrary.BoxTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65171cc
	void *4742625c3a(); // Function Engine.KismetSystemLibrary.*4742625c3a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6527260
	void PrintWarning(); // Function Engine.KismetSystemLibrary.PrintWarning // Final|Native|Static|Public|BlueprintCallable // @ game+0x57a5bac
	float *704afc01de(struct FVector YAxis); // Function Engine.KismetSystemLibrary.*704afc01de // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6521864
	void *ac9382e19e(struct FString FunctionName); // Function Engine.KismetSystemLibrary.*ac9382e19e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6537dd0
	struct FName LineTraceSingleByProfile(bool bTraceComplex, enum class EDrawDebugTrace DrawDebugType, bool bIgnoreSelf, struct FLinearColor TraceHitColor); // Function Engine.KismetSystemLibrary.LineTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653b188
	struct F*b2f5f3e08e *c67ef260d2(); // Function Engine.KismetSystemLibrary.*c67ef260d2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6537cbc
	void *755b3b3d46(struct FName PropertyName); // Function Engine.KismetSystemLibrary.*755b3b3d46 // Final|Native|Static|Public|BlueprintCallable // @ game+0x654e374
	bool K2_SetTimer(struct UObject* Object); // Function Engine.KismetSystemLibrary.K2_SetTimer // Final|Native|Static|Public|BlueprintCallable // @ game+0x653852c
	DelegateProperty *66bb98d8b2(); // Function Engine.KismetSystemLibrary.*66bb98d8b2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65375d0
	void *7e3cecea6d(struct FName Value); // Function Engine.KismetSystemLibrary.*7e3cecea6d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbdcd10
	void *54817316af(); // Function Engine.KismetSystemLibrary.*54817316af // Final|Native|Static|Public|BlueprintCallable // @ game+0x6538340
	struct FRotator *51eba865d2(float Duration); // Function Engine.KismetSystemLibrary.*51eba865d2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65212e4
	void *513cf41513(struct F*b2f5f3e08e Handle); // Function Engine.KismetSystemLibrary.*513cf41513 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6537fc4
	int32 ShowAdBanner(); // Function Engine.KismetSystemLibrary.ShowAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x655c1a0
	float LineTraceSingleForObjects(struct FVector Start, struct FVector End, struct TArray<struct AActor*> ActorsToIgnore); // Function Engine.KismetSystemLibrary.LineTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653b638
	void *04a5ded942(struct ACameraActor* CameraActor); // Function Engine.KismetSystemLibrary.*04a5ded942 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65214f8
	float *44f755a50d(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.*44f755a50d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6522700
	struct UObject* *bd938f6334(); // Function Engine.KismetSystemLibrary.*bd938f6334 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6537190
	void *e2362de828(struct F*b2f5f3e08e Handle); // Function Engine.KismetSystemLibrary.*e2362de828 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65380d8
	void *be87b041c8(); // Function Engine.KismetSystemLibrary.*be87b041c8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652aaac
	struct FName *65c8a1c1eb(); // Function Engine.KismetSystemLibrary.*65c8a1c1eb // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x654e84c
	void *618c41bd84(struct UObject* WorldContextObject, struct FVector LineEnd, struct FLinearColor LineColor); // Function Engine.KismetSystemLibrary.*618c41bd84 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65210cc
	struct FName *5a906f8937(); // Function Engine.KismetSystemLibrary.*5a906f8937 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb07eb8
	void *14f53b37e1(); // Function Engine.KismetSystemLibrary.*14f53b37e1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65370ec
	void *82d8c597c0(struct FName PropertyName); // Function Engine.KismetSystemLibrary.*82d8c597c0 // Final|Native|Static|Public|BlueprintCallable // @ game+0xbbf890
	bool LineTraceMulti(struct TArray<struct AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, bool bIgnoreSelf, struct FLinearColor TraceHitColor); // Function Engine.KismetSystemLibrary.LineTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6539f08
	void *82e33a79c7(); // Function Engine.KismetSystemLibrary.*82e33a79c7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6529f70
	struct TArray<struct AActor*> BoxOverlapActors(struct FVector BoxPos, struct FVector BoxExtent); // Function Engine.KismetSystemLibrary.BoxOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65155c0
	struct FRotator *49e832ade7(bool bEaseOut, float OverTime, bool bForceShortestRotationPath); // Function Engine.KismetSystemLibrary.*49e832ade7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65411ac
	void *7183cf088d(); // Function Engine.KismetSystemLibrary.*7183cf088d // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6559780
	void *00761bf104(); // Function Engine.KismetSystemLibrary.*00761bf104 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653220c
	bool SphereTraceMultiForObjects(struct FVector Start, struct FLinearColor TraceColor, float DrawTime); // Function Engine.KismetSystemLibrary.SphereTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x656005c
	struct FLinearColor *e38c92976d(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.*e38c92976d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6522488
	void *b9b1d06c72(); // Function Engine.KismetSystemLibrary.*b9b1d06c72 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6528bac
	void *5c94fca059(); // Function Engine.KismetSystemLibrary.*5c94fca059 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652d7f8
	void *8eb49e9739(struct UObject* Object); // Function Engine.KismetSystemLibrary.*8eb49e9739 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653748c
	float CapsuleTraceMulti(enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct FHitResult> OutHits); // Function Engine.KismetSystemLibrary.CapsuleTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6519c6c
	float SphereTraceSingle(struct FVector Start, float Radius, struct TArray<struct AActor*> ActorsToIgnore); // Function Engine.KismetSystemLibrary.SphereTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6560560
	void *a7b4e54e08(int32 ControllerId); // Function Engine.KismetSystemLibrary.*a7b4e54e08 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653621c
	float *2c0799df8f(struct FVector Center); // Function Engine.KismetSystemLibrary.*2c0799df8f // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6521608
	struct UObject* *5a3b6ad285(struct FVector Position, struct FLinearColor PointColor); // Function Engine.KismetSystemLibrary.*5a3b6ad285 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6522c90
	struct FName *987c4a42d6(); // Function Engine.KismetSystemLibrary.*987c4a42d6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x654d448
	struct UObject* *3c6aa04ae8(); // Function Engine.KismetSystemLibrary.*3c6aa04ae8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6536be8
	void *8904005c8a(struct FName PropertyName); // Function Engine.KismetSystemLibrary.*8904005c8a // Final|Native|Static|Public|BlueprintCallable // @ game+0x654da40
	void *6c3954c6c7(); // Function Engine.KismetSystemLibrary.*6c3954c6c7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65364e0
	float BoxTraceSingleForObjects(struct TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, enum class EDrawDebugTrace DrawDebugType, bool bIgnoreSelf); // Function Engine.KismetSystemLibrary.BoxTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651772c
	void *ec98b522ce(); // Function Engine.KismetSystemLibrary.*ec98b522ce // Final|Native|Static|Public|BlueprintCallable // @ game+0x57879bc
	void *fc06dbb942(DelegateProperty OnLoaded); // Function Engine.KismetSystemLibrary.*fc06dbb942 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x653bde0
	struct TArray<enum class EObjectTypeQuery> ComponentOverlapComponents(struct UClass* ComponentClassFilter, struct TArray<struct AActor*> ActorsToIgnore); // Function Engine.KismetSystemLibrary.ComponentOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651cb14
	struct FString *b02760d702(); // Function Engine.KismetSystemLibrary.*b02760d702 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653d2e0
	struct FString *aefc8632bc(); // Function Engine.KismetSystemLibrary.*aefc8632bc // Final|Native|Static|Public|BlueprintCallable // @ game+0x6524424
	void *c220dab631(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.*c220dab631 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65362a0
	void *25eeba5cf7(); // Function Engine.KismetSystemLibrary.*25eeba5cf7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x653829c
	struct UObject* *16de33480c(); // Function Engine.KismetSystemLibrary.*16de33480c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc09f4c
	struct UObject* *b9430b6d75(struct FName PropertyName); // Function Engine.KismetSystemLibrary.*b9430b6d75 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x654e84c
	enum class EDrawDebugTrace CapsuleTraceSingleByProfile(struct UObject* WorldContextObject, struct FHitResult OutHit, struct FLinearColor TraceColor, float DrawTime); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651b188
	struct FLinearColor *898653190e(); // Function Engine.KismetSystemLibrary.*898653190e // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6523034
	void *68a9cb8542(); // Function Engine.KismetSystemLibrary.*68a9cb8542 // Final|Native|Static|Public|BlueprintCallable // @ game+0x651c7e8
	void *f320bfca25(); // Function Engine.KismetSystemLibrary.*f320bfca25 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6529d9c
	struct TArray<struct AActor*> BoxTraceMulti(struct TArray<struct FHitResult> OutHits, struct FLinearColor TraceColor, float DrawTime); // Function Engine.KismetSystemLibrary.BoxTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6515c10
	void *8cb961ee47(); // Function Engine.KismetSystemLibrary.*8cb961ee47 // Final|Native|Static|Public|BlueprintCallable // @ game+0x651ecc4
	struct UObject* GetPathName(); // Function Engine.KismetSystemLibrary.GetPathName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652ded0
	struct TArray<struct UPrimitiveComponent*> CapsuleOverlapComponents(struct FVector CapsulePos); // Function Engine.KismetSystemLibrary.CapsuleOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6519910
	void GetActorBounds(struct AActor* Actor); // Function Engine.KismetSystemLibrary.GetActorBounds // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6526f88
	struct FName *a3cc8fbfcd(); // Function Engine.KismetSystemLibrary.*a3cc8fbfcd // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6552ea8
	DelegateProperty *b8a46e0d2b(); // Function Engine.KismetSystemLibrary.*b8a46e0d2b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x653bff4
	struct UObject* *2a6cdef74f(); // Function Engine.KismetSystemLibrary.*2a6cdef74f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x651d9e4
	void *85f0ff61b7(); // Function Engine.KismetSystemLibrary.*85f0ff61b7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65365fc
	void *5de08753c9(); // Function Engine.KismetSystemLibrary.*5de08753c9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x651e46c
	struct UObject* *c41da13dd2(); // Function Engine.KismetSystemLibrary.*c41da13dd2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x653815c
	void *709bb31e4a(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.*709bb31e4a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6538bf8
	void *f8f3cd18d5(struct UObject* WorldContextObject, struct FVector DrawLocation, struct FLinearColor DrawColor); // Function Engine.KismetSystemLibrary.*f8f3cd18d5 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6522264
	struct FString *7bbd5b1cc3(); // Function Engine.KismetSystemLibrary.*7bbd5b1cc3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6519430
	struct FVector *da53263e49(float Length, float AngleHeight, struct FLinearColor LineColor); // Function Engine.KismetSystemLibrary.*da53263e49 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6521b50
	struct TArray<struct FIntPoint> *0e32ce9c37(); // Function Engine.KismetSystemLibrary.*0e32ce9c37 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6530a58
	float SphereTraceMulti(struct FVector Start, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex); // Function Engine.KismetSystemLibrary.SphereTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x655f6a8
	void *0e361245f5(); // Function Engine.KismetSystemLibrary.*0e361245f5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65378a4
	struct UClass* CapsuleOverlapActors(struct TArray<struct AActor*> OutActors); // Function Engine.KismetSystemLibrary.CapsuleOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65195b4
	struct FName *0cf37d9fad(struct UObject* Object); // Function Engine.KismetSystemLibrary.*0cf37d9fad // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x654c4b4
	struct TArray<struct UPrimitiveComponent*> SphereOverlapComponents(float SphereRadius); // Function Engine.KismetSystemLibrary.SphereOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x655f398
	struct UObject* IsValid(); // Function Engine.KismetSystemLibrary.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x9d9088
	void *ec61915ca8(); // Function Engine.KismetSystemLibrary.*ec61915ca8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x652cf44
	void *b9d7b71ee3(); // Function Engine.KismetSystemLibrary.*b9d7b71ee3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x574dac0
	void *9e1a04f2c4(); // Function Engine.KismetSystemLibrary.*9e1a04f2c4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652a778
	struct UClass* *9c3388b05d(); // Function Engine.KismetSystemLibrary.*9c3388b05d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6520dd4
	void *1bd9790702(); // Function Engine.KismetSystemLibrary.*1bd9790702 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc763f8
	void *6deb7b6e2a(); // Function Engine.KismetSystemLibrary.*6deb7b6e2a // Final|Native|Static|Public|BlueprintCallable // @ game+0x653c324
};

// Class Engine.GameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UGameplayStatics : UBlueprintFunctionLibrary {

	void *996afd84fc(struct UObject* WorldContextObject, struct FDialogueContext Context, struct FRotator Rotation, float PitchMultiplier); // Function Engine.GameplayStatics.*996afd84fc // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6544760
	float SetGlobalPitchModulation(); // Function Engine.GameplayStatics.SetGlobalPitchModulation // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x65520b4
	void *9eabafad13(); // Function Engine.GameplayStatics.*9eabafad13 // Final|Native|Static|Public|BlueprintCallable // @ game+0x652e298
	struct U*e3dd0ccfd3* *ed400ebf16(struct USceneComponent* AttachToComponent, bool bAutoDestroy); // Function Engine.GameplayStatics.*ed400ebf16 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x655e0e4
	void *035e30120a(struct FVector WorldLocation); // Function Engine.GameplayStatics.*035e30120a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654882c
	float *0a4cd17e41(float StartTime, struct USoundConcurrency* ConcurrencySettings); // Function Engine.GameplayStatics.*0a4cd17e41 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x655e8a0
	struct FVector BreakHitResult(struct UPhysicalMaterial* PhysMat, struct UPrimitiveComponent* HitComponent, int32 HitItem, struct FVector TraceStart); // Function Engine.GameplayStatics.BreakHitResult // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651834c
	struct USoundClass* ClearSoundMixClassOverride(); // Function Engine.GameplayStatics.ClearSoundMixClassOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x651c484
	struct FVector MakeHitResult(bool bInitialOverlap, struct FVector Location, struct FVector Normal); // Function Engine.GameplayStatics.MakeHitResult // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653cc4c
	void *b8d7915ddb(struct FVector WorldLocation); // Function Engine.GameplayStatics.*b8d7915ddb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6548938
	bool SpawnSoundAttached(float VolumeMultiplier, float StartTime, struct USoundConcurrency* ConcurrencySettings); // Function Engine.GameplayStatics.SpawnSoundAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x655ec14
	struct UObject* PushSoundMixModifier(); // Function Engine.GameplayStatics.PushSoundMixModifier // Final|Native|Static|Public|BlueprintCallable // @ game+0x6546bb0
	struct FName *b1a4408dd7(); // Function Engine.GameplayStatics.*b1a4408dd7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653097c
	void *2344328a3a(struct TArray<struct AActor*> Actors, struct FVector Center); // Function Engine.GameplayStatics.*2344328a3a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6526db0
	struct APlayerController* RemovePlayer(); // Function Engine.GameplayStatics.RemovePlayer // Final|Native|Static|Public|BlueprintCallable // @ game+0x6548ef4
	struct UObject* *a1aabe70e3(struct UDialogueWave* Dialogue, float VolumeMultiplier); // Function Engine.GameplayStatics.*a1aabe70e3 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x654450c
	float *3a48e3ceae(float ProjectileRadius, struct TArray<struct AActor*> ActorsToIgnore, float DrawDebugTime); // Function Engine.GameplayStatics.*3a48e3ceae // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6514b64
	struct FName UnloadStreamLevel(); // Function Engine.GameplayStatics.UnloadStreamLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x656359c
	void *f4bd2339a6(int32 UserIndex); // Function Engine.GameplayStatics.*f4bd2339a6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6520eac
	bool *bfd61bd9c9(); // Function Engine.GameplayStatics.*bfd61bd9c9 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x651f0b0
	void *a499546182(struct UObject* Object); // Function Engine.GameplayStatics.*a499546182 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652daf4
	void *b9242f1494(); // Function Engine.GameplayStatics.*b9242f1494 // Final|Native|Static|Public|BlueprintCallable // @ game+0x651253c
	float ApplyRadialDamage(struct TArray<struct AActor*> IgnoreActors, struct AController* InstigatedByController, enum class ECollisionChannel DamagePreventionChannel); // Function Engine.GameplayStatics.ApplyRadialDamage // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6511a10
	struct FHitResult *977867c5c3(); // Function Engine.GameplayStatics.*977867c5c3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6530b1c
	struct UObject* SetBaseSoundMix(); // Function Engine.GameplayStatics.SetBaseSoundMix // Final|Native|Static|Public|BlueprintCallable // @ game+0x654c86c
	void *5fbc75595a(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.*5fbc75595a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652a98c
	int32 *40aea51aad(); // Function Engine.GameplayStatics.*40aea51aad // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652e0e8
	void ClearSoundMixModifiers(); // Function Engine.GameplayStatics.ClearSoundMixModifiers // Final|Native|Static|Public|BlueprintCallable // @ game+0x651c5ec
	void SetSoundMixClassOverride(struct USoundMix* InSoundMixModifier, float Volume, float FadeInTime); // Function Engine.GameplayStatics.SetSoundMixClassOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x6556e38
	float *22ac164eab(); // Function Engine.GameplayStatics.*22ac164eab // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6544fc8
	void *f408cb8748(struct UReverbEffect* ReverbEffect, float Priority); // Function Engine.GameplayStatics.*f408cb8748 // Final|Native|Static|Public|BlueprintCallable // @ game+0x650eb64
	struct FRotator *ea23e82923(float VolumeMultiplier, float StartTime); // Function Engine.GameplayStatics.*ea23e82923 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65451cc
	void *3f436554e3(); // Function Engine.GameplayStatics.*3f436554e3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65194e4
	float *a3a8902d4d(); // Function Engine.GameplayStatics.*a3a8902d4d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6533c30
	void *a57b3a6755(struct FVector Location); // Function Engine.GameplayStatics.*a57b3a6755 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6512400
	bool OpenLevel(); // Function Engine.GameplayStatics.OpenLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x654364c
	struct UDialogueWave* *e147f48ac0(struct FDialogueContext Context, float PitchMultiplier, bool bAutoDestroy); // Function Engine.GameplayStatics.*e147f48ac0 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x655ce5c
	struct FString *71b905d19a(); // Function Engine.GameplayStatics.*71b905d19a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653466c
	void *c4c598e50a(); // Function Engine.GameplayStatics.*c4c598e50a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6526704
	void *75fbb1e408(struct UClass* ActorClass); // Function Engine.GameplayStatics.*75fbb1e408 // Final|Native|Static|Public|BlueprintCallable // @ game+0x652a828
	bool LoadStreamLevel(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.LoadStreamLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x653c3b4
	struct UForceFeedbackEffect* *9fbd8acd86(struct FVector Location, bool bLooping, float StartTime, bool bAutoDestroy); // Function Engine.GameplayStatics.*9fbd8acd86 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x655ddb4
	enum class EAttachLocation SpawnEmitterAttached(bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnEmitterAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x655db38
	void FinishSpawningActor(struct FTransform SpawnTransform); // Function Engine.GameplayStatics.FinishSpawningActor // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x700138
	struct FString *c6263b9f68(); // Function Engine.GameplayStatics.*c6263b9f68 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x652c978
	void *150c20fc0e(struct AActor* DamagedActor, struct AController* EventInstigator, struct UClass* DamageTypeClass); // Function Engine.GameplayStatics.*150c20fc0e // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x65111c8
	struct UObject* *e2b2e6b8ec(); // Function Engine.GameplayStatics.*e2b2e6b8ec // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x93480c
	struct UObject* *9b24e0d83a(); // Function Engine.GameplayStatics.*9b24e0d83a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652ace4
	void *b0c344bd37(struct TArray<struct AActor*> Actors); // Function Engine.GameplayStatics.*b0c344bd37 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6526cdc
	int32 *e33fbd32a1(); // Function Engine.GameplayStatics.*e33fbd32a1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652e1c0
	struct UObject* *c49357e551(); // Function Engine.GameplayStatics.*c49357e551 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6533368
	void SetGlobalTimeDilation(); // Function Engine.GameplayStatics.SetGlobalTimeDilation // Final|Native|Static|Public|BlueprintCallable // @ game+0x65521cc
	void *a1a652900c(struct UObject* Outer); // Function Engine.GameplayStatics.*a1a652900c // Final|Native|Static|Public|BlueprintCallable // @ game+0x655e504
	struct FRotator *6aed4e3502(float VolumeMultiplier, float StartTime, bool bAutoDestroy); // Function Engine.GameplayStatics.*6aed4e3502 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x655d100
	struct UObject* GetGameMode(); // Function Engine.GameplayStatics.GetGameMode // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652aa1c
	struct F*09065f9d9d *a38c5881e9(); // Function Engine.GameplayStatics.*a38c5881e9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6514304
	struct AActor* BeginSpawningActorFromClass(struct UObject* WorldContextObject, struct FTransform SpawnTransform); // Function Engine.GameplayStatics.BeginSpawningActorFromClass // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6513ce0
	struct FHitResult *cbaf481460(struct AController* EventInstigator, struct UClass* DamageTypeClass); // Function Engine.GameplayStatics.*cbaf481460 // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x651175c
	void *93397137e1(); // Function Engine.GameplayStatics.*93397137e1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6523538
	struct AActor* *156662a2f2(); // Function Engine.GameplayStatics.*156662a2f2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x934488
	float SpawnDecalAttached(struct UMaterialInterface* DecalMaterial, struct USceneComponent* AttachToComponent); // Function Engine.GameplayStatics.SpawnDecalAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x655cb7c
	bool SpawnDialogueAttached(struct FDialogueContext Context, struct FName AttachPointName, struct FRotator Rotation, bool bStopWhenAttachedToDestroyed); // Function Engine.GameplayStatics.SpawnDialogueAttached // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x655d4b4
	void *1d3d64fb18(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.*1d3d64fb18 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653137c
	void *b876059946(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.*b876059946 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6536330
	int32 *2b4b2e44ec(); // Function Engine.GameplayStatics.*2b4b2e44ec // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6526b9c
	struct UParticleSystem* *58db5bdd1c(struct FVector Location, bool bAutoDestroy); // Function Engine.GameplayStatics.*58db5bdd1c // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x655d964
	int32 *4043951c26(); // Function Engine.GameplayStatics.*4043951c26 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6549a30
	struct UObject* PopSoundMixModifier(); // Function Engine.GameplayStatics.PopSoundMixModifier // Final|Native|Static|Public|BlueprintCallable // @ game+0x65462f8
	void *67556f50de(struct UObject* WorldContextObject, struct FVector StartPos, float OverrideGravityZ); // Function Engine.GameplayStatics.*67556f50de // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6561f4c
	float *f9cb354ad8(struct USoundConcurrency* ConcurrencySettings, bool bAutoDestroy); // Function Engine.GameplayStatics.*f9cb354ad8 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x655e5e0
	void GetGameState(); // Function Engine.GameplayStatics.GetGameState // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652abb8
	enum class ECollisionChannel *0d6224f78c(float DamageOuterRadius, float DamageFalloff, struct UClass* DamageTypeClass, struct AActor* DamageCauser); // Function Engine.GameplayStatics.*0d6224f78c // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6511dd0
	struct UObject* *76e894878b(); // Function Engine.GameplayStatics.*76e894878b // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x655a854
	void *ae1f0619d7(bool bPaused); // Function Engine.GameplayStatics.*ae1f0619d7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6551cac
	bool *b4188a4639(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.*b4188a4639 // Final|Native|Static|Public|BlueprintCallable // @ game+0x651ee70
	float SetGlobalListenerFocusParameters(float FocusDistanceScale, float FocusVolumeScale, float FocusPriorityScale); // Function Engine.GameplayStatics.SetGlobalListenerFocusParameters // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6551db8
	struct UObject* *98ceacc308(); // Function Engine.GameplayStatics.*98ceacc308 // Final|Native|Static|Public|BlueprintCallable // @ game+0x651fb2c
	struct UObject* *04399e3886(); // Function Engine.GameplayStatics.*04399e3886 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6527c18
	void BeginSpawningActorFromBlueprint(struct UBlueprint* Blueprint, bool bNoCollisionFail); // Function Engine.GameplayStatics.BeginSpawningActorFromBlueprint // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6513b10
	int32 *0e60a6f2e1(); // Function Engine.GameplayStatics.*0e60a6f2e1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x653c208
	struct UBlueprint* CreateSaveGameObjectFromBlueprint(); // Function Engine.GameplayStatics.CreateSaveGameObjectFromBlueprint // Final|Native|Static|Public|BlueprintCallable // @ game+0x651f020
	void GetAllActorsOfClass(); // Function Engine.GameplayStatics.GetAllActorsOfClass // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65272a8
	struct UClass* *03120cf2b4(); // Function Engine.GameplayStatics.*03120cf2b4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6527408
	void GetPlayerPawn(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetPlayerPawn // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652e328
	void *9e56b5c82a(bool bRemovePrefixString); // Function Engine.GameplayStatics.*9e56b5c82a // Final|Native|Static|Public|BlueprintCallable // @ game+0x65291c0
	struct FString *754bdb6994(); // Function Engine.GameplayStatics.*754bdb6994 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65349b0
	void *a2b4cb7f1a(struct UObject* WorldContextObject, struct FName Tag); // Function Engine.GameplayStatics.*a2b4cb7f1a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6527568
	struct FString *3acadb8537(); // Function Engine.GameplayStatics.*3acadb8537 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6543ae8
	int32 *2f79cde6e3(); // Function Engine.GameplayStatics.*2f79cde6e3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6520250
	bool *857108d100(struct UObject* WorldContextObject, struct FVector StartLocation, float LaunchSpeed); // Function Engine.GameplayStatics.*857108d100 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6513f2c
	struct UObject* GetPlayerCameraManager(int32 PlayerIndex); // Function Engine.GameplayStatics.GetPlayerCameraManager // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x934880
	void *f12565fb0c(); // Function Engine.GameplayStatics.*f12565fb0c // Final|Native|Static|Public|BlueprintCallable // @ game+0x655851c
	struct UClass* CreateSaveGameObject(); // Function Engine.GameplayStatics.CreateSaveGameObject // Final|Native|Static|Public|BlueprintCallable // @ game+0x651ef90
	struct FVector *a488425cea(float InnerRadius, float Falloff); // Function Engine.GameplayStatics.*a488425cea // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65454e4
	struct FVector2D *a90fa6ac82(); // Function Engine.GameplayStatics.*a90fa6ac82 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6525298
	struct UObject* *d1f1cc9e0d(); // Function Engine.GameplayStatics.*d1f1cc9e0d // Final|Native|Static|Public|BlueprintCallable // @ game+0x65292fc
	struct TArray<struct AActor*> Blueprint_PredictProjectilePath_ByObjectType(struct UObject* WorldContextObject, struct FHitResult OutHit, struct FVector OutLastTraceDestination, enum class EDrawDebugTrace DrawDebugType, float SimFrequency, float OverrideGravityZ); // Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByObjectType // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65144d0
	float *77147f01b6(); // Function Engine.GameplayStatics.*77147f01b6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x655c93c
	void *8b3ad6877d(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.*8b3ad6877d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbb13d0
	void *4ae913a525(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.*4ae913a525 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6532300
	int32 *49a47303d5(); // Function Engine.GameplayStatics.*49a47303d5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652c7e8
	void *66acc63bce(struct FVector2D ScreenPosition, struct FVector WorldDirection); // Function Engine.GameplayStatics.*66acc63bce // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6520394
	struct APlayerController* *a68627bbad(); // Function Engine.GameplayStatics.*a68627bbad // Final|Native|Static|Public|BlueprintCallable // @ game+0x65559cc
	struct FVector2D *9fd5e2baf1(bool bPlayerViewportRelative); // Function Engine.GameplayStatics.*9fd5e2baf1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6546a24
};

// Class Engine.HeadMountedDisplayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void *8b8cb234d4(); // Function Engine.HeadMountedDisplayFunctionLibrary.*8b8cb234d4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x57879bc
	void *03ae77c63e(); // Function Engine.HeadMountedDisplayFunctionLibrary.*03ae77c63e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652da98
	void *d6b2d17988(); // Function Engine.HeadMountedDisplayFunctionLibrary.*d6b2d17988 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653641c
	void *b431fa03f0(); // Function Engine.HeadMountedDisplayFunctionLibrary.*b431fa03f0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6523458
	void GetTrackingOrigin(); // Function Engine.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6531870
	float *54bd5c898f(float NearPlane, bool IsActive); // Function Engine.HeadMountedDisplayFunctionLibrary.*54bd5c898f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65318b4
	void *76beadc93f(float Near); // Function Engine.HeadMountedDisplayFunctionLibrary.*76beadc93f // Final|Native|Static|Public|BlueprintCallable // @ game+0x654e48c
	float *fc1d2cf460(float NearPlane); // Function Engine.HeadMountedDisplayFunctionLibrary.*fc1d2cf460 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652e810
	void *dda3750660(struct FRotator DeviceRotation); // Function Engine.HeadMountedDisplayFunctionLibrary.*dda3750660 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652dbcc
	struct UObject* *df68094fdd(); // Function Engine.HeadMountedDisplayFunctionLibrary.*df68094fdd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6533698
	void *770b863801(); // Function Engine.HeadMountedDisplayFunctionLibrary.*770b863801 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6534b48
	void *f09aef7c45(); // Function Engine.HeadMountedDisplayFunctionLibrary.*f09aef7c45 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x354bfc
	void *b93108a453(); // Function Engine.HeadMountedDisplayFunctionLibrary.*b93108a453 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65303f0
	void *f656b91161(); // Function Engine.HeadMountedDisplayFunctionLibrary.*f656b91161 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652ad74
	struct UObject* *29be3a1620(); // Function Engine.HeadMountedDisplayFunctionLibrary.*29be3a1620 // Final|Native|Static|Public|BlueprintCallable // @ game+0x655a9f0
	void *61f5e964c7(float Yaw); // Function Engine.HeadMountedDisplayFunctionLibrary.*61f5e964c7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6549320
	void SetTrackingOrigin(); // Function Engine.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin // Final|Native|Static|Public|BlueprintCallable // @ game+0x65590f8
	bool *cab0ab30c8(); // Function Engine.HeadMountedDisplayFunctionLibrary.*cab0ab30c8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6532b7c
	void *20cbdc2853(); // Function Engine.HeadMountedDisplayFunctionLibrary.*20cbdc2853 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65363d4
};

// Class Engine.KismetArrayLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetArrayLibrary : UBlueprintFunctionLibrary {

	int32 *8bccb8a9aa(); // Function Engine.KismetArrayLibrary.*8bccb8a9aa // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6512564
	struct TArray<int32> *c57a4982da(int32 Item); // Function Engine.KismetArrayLibrary.*c57a4982da // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x651307c
	void *b85dbb9c22(int32 ItemToFind); // Function Engine.KismetArrayLibrary.*b85dbb9c22 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xc2c34c
	int32 *bc6f83b2bc(); // Function Engine.KismetArrayLibrary.*bc6f83b2bc // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65127cc
	void Array_Clear(); // Function Engine.KismetArrayLibrary.Array_Clear // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb3cc18
	void *9ef177defc(); // Function Engine.KismetArrayLibrary.*9ef177defc // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65132a4
	int32 *08b313ee0b(); // Function Engine.KismetArrayLibrary.*08b313ee0b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x355a1c
	void *9df1160718(); // Function Engine.KismetArrayLibrary.*9df1160718 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x654c214
	struct UClass* *41cc14cef1(); // Function Engine.KismetArrayLibrary.*41cc14cef1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6524c64
	void Array_Get(struct TArray<int32> TargetArray); // Function Engine.KismetArrayLibrary.Array_Get // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xb9bbec
	struct TArray<int32> *8a750b40a5(); // Function Engine.KismetArrayLibrary.*8a750b40a5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6512e0c
	int32 *6a7c6d71f3(); // Function Engine.KismetArrayLibrary.*6a7c6d71f3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6512ca0
	void *67ef7f4c3e(); // Function Engine.KismetArrayLibrary.*67ef7f4c3e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65133fc
	struct TArray<int32> *cdddd85e66(); // Function Engine.KismetArrayLibrary.*cdddd85e66 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb2201c
	struct TArray<int32> Array_Add(int32 NewItem); // Function Engine.KismetArrayLibrary.Array_Add // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb2228c
	void *ea9bb07ad5(struct TArray<int32> TargetArray); // Function Engine.KismetArrayLibrary.*ea9bb07ad5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6512f24
	int32 *7630ae58fd(); // Function Engine.KismetArrayLibrary.*7630ae58fd // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65129f4
	void *0bad7adb6e(struct TArray<int32> TargetArray); // Function Engine.KismetArrayLibrary.*0bad7adb6e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xb902a0
};

// Class Engine.*734c883793
// Size: 0x28 (Inherited: 0x28)
struct U*734c883793 : UBlueprintFunctionLibrary {

	struct FGuid *25c2313253(); // Function Engine.*734c883793.*25c2313253 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6542f2c
	struct FGuid *e4321100ef(); // Function Engine.*734c883793.*e4321100ef // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65236a4
	void *e6561c6677(struct FGuid InGuid); // Function Engine.*734c883793.*e6561c6677 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6536eb4
	void *cfe434490d(); // Function Engine.*734c883793.*cfe434490d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65359b0
	void *55e2b0af6f(); // Function Engine.*734c883793.*55e2b0af6f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65426e8
	struct FGuid *810b59b50f(); // Function Engine.*734c883793.*810b59b50f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651e06c
	void *a87835ef23(struct FString GuidString); // Function Engine.*734c883793.*a87835ef23 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6543c98
};

// Class Engine.KismetInputLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetInputLibrary : UBlueprintFunctionLibrary {

	void *11bd6dcdcf(struct F*a3e4749da2 Input); // Function Engine.KismetInputLibrary.*11bd6dcdcf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65460dc
	void *900691ca5e(struct FKey Key); // Function Engine.KismetInputLibrary.*900691ca5e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65390d0
	struct FKey *62795d6e32(); // Function Engine.KismetInputLibrary.*62795d6e32 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6538cfc
	struct F*a3e4749da2 *c2e79393d2(struct FKey MouseButton); // Function Engine.KismetInputLibrary.*c2e79393d2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6545f4c
	void *d62a25bbde(); // Function Engine.KismetInputLibrary.*d62a25bbde // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65459a0
	struct F*163dc5d8c3 *4d5e8cf58a(); // Function Engine.KismetInputLibrary.*4d5e8cf58a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6535174
	struct F*163dc5d8c3 *83caea5d30(); // Function Engine.KismetInputLibrary.*83caea5d30 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6535248
	void *41b7054be6(struct F*163dc5d8c3 Input); // Function Engine.KismetInputLibrary.*41b7054be6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65354c0
	void *69f0e929df(); // Function Engine.KismetInputLibrary.*69f0e929df // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x651d6ac
	struct FKeyEvent GetUserIndex(); // Function Engine.KismetInputLibrary.GetUserIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6532a60
	void *00ec6c3afe(struct F*a3e4749da2 Input); // Function Engine.KismetInputLibrary.*00ec6c3afe // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6545750
	void *4b809b55f3(struct FKey Key); // Function Engine.KismetInputLibrary.*4b809b55f3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xb40180
	struct F*a3e4749da2 *37acd32501(); // Function Engine.KismetInputLibrary.*37acd32501 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6545a98
	struct F*163dc5d8c3 *704496d75d(); // Function Engine.KismetInputLibrary.*704496d75d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6534ef8
	void *1463040f85(struct FControllerEvent Input); // Function Engine.KismetInputLibrary.*1463040f85 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x651d804
	void *30e5654149(struct FKey Key); // Function Engine.KismetInputLibrary.*30e5654149 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6538de0
	struct F*a3e4749da2 *ff07432fd4(); // Function Engine.KismetInputLibrary.*ff07432fd4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6545b90
	struct F*163dc5d8c3 *c3deca2e53(); // Function Engine.KismetInputLibrary.*c3deca2e53 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65358dc
	void *a5629862fc(struct F*163dc5d8c3 Input); // Function Engine.KismetInputLibrary.*a5629862fc // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65350a0
	struct F*163dc5d8c3 *96b86317b0(); // Function Engine.KismetInputLibrary.*96b86317b0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6535660
	struct F*a3e4749da2 *540eace908(); // Function Engine.KismetInputLibrary.*540eace908 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6545848
	void *07819d9d29(); // Function Engine.KismetInputLibrary.*07819d9d29 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65193f8
	void *1618e250fa(struct FKey Key); // Function Engine.KismetInputLibrary.*1618e250fa // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6538ec4
	struct F*163dc5d8c3 *16296945aa(); // Function Engine.KismetInputLibrary.*16296945aa // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65353f0
	struct F*163dc5d8c3 *976b84b655(); // Function Engine.KismetInputLibrary.*976b84b655 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6535808
	void *32f5b5a6b9(); // Function Engine.KismetInputLibrary.*32f5b5a6b9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xb07e14
	void *4d8e999eb1(struct F*163dc5d8c3 Input); // Function Engine.KismetInputLibrary.*4d8e999eb1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653531c
	struct F*a3e4749da2 *075446fbf7(); // Function Engine.KismetInputLibrary.*075446fbf7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6545e60
	struct F*a3e4749da2 *9328842c17(); // Function Engine.KismetInputLibrary.*9328842c17 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6545d74
	void *20cdff2be6(); // Function Engine.KismetInputLibrary.*20cdff2be6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6535734
	struct FControllerEvent *57ab74be70(); // Function Engine.KismetInputLibrary.*57ab74be70 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x651d5cc
	struct F*163dc5d8c3 *f54dff69a3(); // Function Engine.KismetInputLibrary.*f54dff69a3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6534fcc
	void *ec2d5c6cf0(); // Function Engine.KismetInputLibrary.*ec2d5c6cf0 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6545c7c
	void *b77cedb095(); // Function Engine.KismetInputLibrary.*b77cedb095 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65391b4
	struct F*8a4c6e0afe *8dd16b2833(); // Function Engine.KismetInputLibrary.*8dd16b2833 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65276c8
	struct F*b77ea41268 *b74f0c7797(); // Function Engine.KismetInputLibrary.*b74f0c7797 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65237d4
	void *785d5f2986(struct F*163dc5d8c3 Input); // Function Engine.KismetInputLibrary.*785d5f2986 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653558c
	struct FKey *dacc5da874(); // Function Engine.KismetInputLibrary.*dacc5da874 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6538fec
	struct FKeyEvent GetKey(); // Function Engine.KismetInputLibrary.GetKey // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb6ad2c
	void *5ebda3b016(struct FKey B); // Function Engine.KismetInputLibrary.*5ebda3b016 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6523a48
};

// Class Engine.KismetMaterialLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetMaterialLibrary : UBlueprintFunctionLibrary {

	void GetScalarParameterValue(struct UObject* WorldContextObject, struct FName ParameterName); // Function Engine.KismetMaterialLibrary.GetScalarParameterValue // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x652fc84
	struct FName SetVectorParameterValue(); // Function Engine.KismetMaterialLibrary.SetVectorParameterValue // Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65599a0
	struct UObject* SetScalarParameterValue(struct UMaterialParameterCollection* Collection); // Function Engine.KismetMaterialLibrary.SetScalarParameterValue // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x655686c
	struct FName GetVectorParameterValue(struct UObject* WorldContextObject); // Function Engine.KismetMaterialLibrary.GetVectorParameterValue // Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6532de8
	struct UMaterialInterface* CreateDynamicMaterialInstance(); // Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x651ed94
};

// Class Engine.KismetMathLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetMathLibrary : UBlueprintFunctionLibrary {

	struct FVector EqualEqual_VectorVector(float ErrorTolerance); // Function Engine.KismetMathLibrary.EqualEqual_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6524060
	void *8aa46e6296(bool A); // Function Engine.KismetMathLibrary.*8aa46e6296 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbd1f48
	struct FVector MakeBox(); // Function Engine.KismetMathLibrary.MakeBox // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653c8e4
	int32 *57bb0aede3(); // Function Engine.KismetMathLibrary.*57bb0aede3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651e1f8
	int32 TEase(struct FTransform A, float Alpha); // Function Engine.KismetMathLibrary.TEase // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65621d4
	bool RandomRotator(); // Function Engine.KismetMathLibrary.RandomRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65482e8
	void *7800e40893(struct FVector Z); // Function Engine.KismetMathLibrary.*7800e40893 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653e0d0
	void *75325e8327(); // Function Engine.KismetMathLibrary.*75325e8327 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6549294
	float *084a6d2e5f(); // Function Engine.KismetMathLibrary.*084a6d2e5f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6564330
	void *7fbe3833f9(struct FTimespan A); // Function Engine.KismetMathLibrary.*7fbe3833f9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653953c
	void *1dd3ee0f33(); // Function Engine.KismetMathLibrary.*1dd3ee0f33 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x654a250
	struct FTimespan *4dcf38fa62(); // Function Engine.KismetMathLibrary.*4dcf38fa62 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65235d8
	void *54d878e8c6(struct FTimespan B); // Function Engine.KismetMathLibrary.*54d878e8c6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65107b4
	void BooleanAND(bool A); // Function Engine.KismetMathLibrary.BooleanAND // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x290340
	struct FTimespan *309b6ddcbd(); // Function Engine.KismetMathLibrary.*309b6ddcbd // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6542e60
	void *c9b160fa2c(struct FLinearColor B); // Function Engine.KismetMathLibrary.*c9b160fa2c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6541b04
	void *e31d334452(); // Function Engine.KismetMathLibrary.*e31d334452 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651e808
	int32 DaysInMonth(); // Function Engine.KismetMathLibrary.DaysInMonth // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651f99c
	void *37be8c9a45(float Min, bool InclusiveMin); // Function Engine.KismetMathLibrary.*37be8c9a45 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6736f4
	float MakeVector(); // Function Engine.KismetMathLibrary.MakeVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x674c80
	void *c28e1ae0f8(struct FColor InColor); // Function Engine.KismetMathLibrary.*c28e1ae0f8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651dec4
	void *c83df91f51(bool A); // Function Engine.KismetMathLibrary.*c83df91f51 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65106e0
	int32 *0889fa0dcb(); // Function Engine.KismetMathLibrary.*0889fa0dcb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6510b54
	struct FTimespan GetTotalSeconds(); // Function Engine.KismetMathLibrary.GetTotalSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65317d8
	void *cc6457a20a(); // Function Engine.KismetMathLibrary.*cc6457a20a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6562b58
	int32 *169486a7c5(); // Function Engine.KismetMathLibrary.*169486a7c5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6540180
	struct FVector2D MakeBox2D(); // Function Engine.KismetMathLibrary.MakeBox2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653c7ec
	void *2705880df4(); // Function Engine.KismetMathLibrary.*2705880df4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651fe3c
	float *aca7a45594(); // Function Engine.KismetMathLibrary.*aca7a45594 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6743d0
	struct FVector *b482b5dbcd(); // Function Engine.KismetMathLibrary.*b482b5dbcd // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65249b8
	void GetMilliseconds(struct FTimespan A); // Function Engine.KismetMathLibrary.GetMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652d680
	void *8334780abc(int32 A); // Function Engine.KismetMathLibrary.*8334780abc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xaf17c8
	float *aa1f1a3bef(); // Function Engine.KismetMathLibrary.*aa1f1a3bef // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x674df0
	void *a4c72574d1(struct FVector2D B); // Function Engine.KismetMathLibrary.*a4c72574d1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6561b48
	struct FTimespan *aeb9b1b4c2(); // Function Engine.KismetMathLibrary.*aeb9b1b4c2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65618c4
	float Cos(); // Function Engine.KismetMathLibrary.Cos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651ec2c
	void *e42fa8abdc(struct UObject* B); // Function Engine.KismetMathLibrary.*e42fa8abdc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1c8f8
	void *888c1996ca(struct FDateTime A); // Function Engine.KismetMathLibrary.*888c1996ca // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65235d8
	float *b52c0647d8(); // Function Engine.KismetMathLibrary.*b52c0647d8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6526358
	void *bd60fdc6e8(float A); // Function Engine.KismetMathLibrary.*bd60fdc6e8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6520118
	struct FRotator *1251b22b96(); // Function Engine.KismetMathLibrary.*1251b22b96 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651ce2c
	float Round(); // Function Engine.KismetMathLibrary.Round // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x654998c
	void MakeRotator(float Pitch); // Function Engine.KismetMathLibrary.MakeRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x674bac
	struct FVector *7859df87d1(); // Function Engine.KismetMathLibrary.*7859df87d1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653dee0
	float *fbe89d78b8(); // Function Engine.KismetMathLibrary.*fbe89d78b8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65429fc
	void *63b36ff994(float B); // Function Engine.KismetMathLibrary.*63b36ff994 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x674618
	void Now(); // Function Engine.KismetMathLibrary.Now // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6543540
	void Today(); // Function Engine.KismetMathLibrary.Today // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6562c74
	float *37dc61ae74(); // Function Engine.KismetMathLibrary.*37dc61ae74 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6741c8
	void Tan(); // Function Engine.KismetMathLibrary.Tan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656294c
	enum class *887cd43ef0 *5f520ba017(); // Function Engine.KismetMathLibrary.*5f520ba017 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6562700
	struct FVector *0c1ed25470(struct FRotator B); // Function Engine.KismetMathLibrary.*0c1ed25470 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6534020
	struct FVector *5eacfe1900(struct FVector LineEnd); // Function Engine.KismetMathLibrary.*5eacfe1900 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6539c80
	struct FVector InverseTransformLocation(); // Function Engine.KismetMathLibrary.InverseTransformLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6535b68
	void NotEqual_IntInt(int32 A); // Function Engine.KismetMathLibrary.NotEqual_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc5cd94
	float Exp(); // Function Engine.KismetMathLibrary.Exp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652457c
	bool *36d00a43ce(); // Function Engine.KismetMathLibrary.*36d00a43ce // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65397f4
	void *c93982fa1f(int32 B); // Function Engine.KismetMathLibrary.*c93982fa1f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6564918
	float *bd5402f22c(); // Function Engine.KismetMathLibrary.*bd5402f22c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651fef4
	struct FVector *253e5e677f(); // Function Engine.KismetMathLibrary.*253e5e677f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651e750
	void Conv_VectorToTransform(); // Function Engine.KismetMathLibrary.Conv_VectorToTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651e8bc
	void Square(); // Function Engine.KismetMathLibrary.Square // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6561524
	float FMin(); // Function Engine.KismetMathLibrary.FMin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc41db8
	void *545da95a39(float Target, float InterpSpeed); // Function Engine.KismetMathLibrary.*545da95a39 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbcccbc
	struct FVector *b7098a880f(); // Function Engine.KismetMathLibrary.*b7098a880f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6561e44
	float *d7ee2101c0(); // Function Engine.KismetMathLibrary.*d7ee2101c0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6541a1c
	void BreakVector(struct FVector InVec, float Y); // Function Engine.KismetMathLibrary.BreakVector // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x987e90
	struct FVector *19a588d710(); // Function Engine.KismetMathLibrary.*19a588d710 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65467f8
	void Normal(struct FVector A); // Function Engine.KismetMathLibrary.Normal // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654285c
	void ProjectVectorOnToVector(struct FVector V); // Function Engine.KismetMathLibrary.ProjectVectorOnToVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6546910
	float *ac5190e48d(); // Function Engine.KismetMathLibrary.*ac5190e48d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x654186c
	void *d6bff1c241(); // Function Engine.KismetMathLibrary.*d6bff1c241 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65493fc
	void *a600f34e39(struct FTransform B, float RotationTolerance); // Function Engine.KismetMathLibrary.*a600f34e39 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6542314
	float Lerp(); // Function Engine.KismetMathLibrary.Lerp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6539348
	void *a59f4817f1(int32 A); // Function Engine.KismetMathLibrary.*a59f4817f1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6539608
	float *3aac1a2f5d(); // Function Engine.KismetMathLibrary.*3aac1a2f5d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6541f20
	float *a2f94a6e49(); // Function Engine.KismetMathLibrary.*a2f94a6e49 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6563f34
	void *e3a5ba9040(struct FLinearColor B); // Function Engine.KismetMathLibrary.*e3a5ba9040 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653bc98
	int32 *9ba84ac346(); // Function Engine.KismetMathLibrary.*9ba84ac346 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651e310
	struct FVector VEase(float Alpha, float BlendExp); // Function Engine.KismetMathLibrary.VEase // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6563998
	float FromSeconds(); // Function Engine.KismetMathLibrary.FromSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6526b00
	float *ad4694411f(); // Function Engine.KismetMathLibrary.*ad4694411f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6547a8c
	void *96caf02210(int32 B); // Function Engine.KismetMathLibrary.*96caf02210 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6523974
	float FClamp(float Value); // Function Engine.KismetMathLibrary.FClamp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x674a04
	int32 *ab80740026(); // Function Engine.KismetMathLibrary.*ab80740026 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6541d30
	void *949df90870(int32 A); // Function Engine.KismetMathLibrary.*949df90870 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc446ec
	int32 *b17b357113(); // Function Engine.KismetMathLibrary.*b17b357113 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6540530
	struct FDateTime *40581960aa(); // Function Engine.KismetMathLibrary.*40581960aa // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6533e80
	void *938c84d851(struct FVector2D A); // Function Engine.KismetMathLibrary.*938c84d851 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652088c
	float *8d68bb4da8(); // Function Engine.KismetMathLibrary.*8d68bb4da8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xc36238
	struct FDateTime GetDay(); // Function Engine.KismetMathLibrary.GetDay // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6529bdc
	float *2dbcb3ac5a(struct TArray<struct FVector> InVerts, struct FVector OutRectCenter); // Function Engine.KismetMathLibrary.*2dbcb3ac5a // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65406fc
	struct FVector *333f37e273(); // Function Engine.KismetMathLibrary.*333f37e273 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651e980
	void *225eea7d1d(struct FLinearColor InLinearColor); // Function Engine.KismetMathLibrary.*225eea7d1d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xaaac00
	bool *5ae66c1051(); // Function Engine.KismetMathLibrary.*5ae66c1051 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675230
	bool *331f2d8d84(); // Function Engine.KismetMathLibrary.*331f2d8d84 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651372c
	void *59ec794a0d(float A); // Function Engine.KismetMathLibrary.*59ec794a0d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6524928
	void *b30904e1dd(struct FTransform A); // Function Engine.KismetMathLibrary.*b30904e1dd // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651cf40
	int32 *8fa740d48b(); // Function Engine.KismetMathLibrary.*8fa740d48b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653fee0
	void *6edada6785(float A); // Function Engine.KismetMathLibrary.*6edada6785 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6524614
	float *341c4c2120(); // Function Engine.KismetMathLibrary.*341c4c2120 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x674060
	float *7491f770b1(); // Function Engine.KismetMathLibrary.*7491f770b1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653bb14
	void *ce7611b48f(float B); // Function Engine.KismetMathLibrary.*ce7611b48f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6561a60
	struct FRandomStream *6a717f8d89(); // Function Engine.KismetMathLibrary.*6a717f8d89 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x655639c
	float *ddbd8a2719(float Exponent); // Function Engine.KismetMathLibrary.*ddbd8a2719 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6524764
	void *2697041c1c(float InCurrentTime, float InPhase); // Function Engine.KismetMathLibrary.*2697041c1c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653d7e4
	struct FRotator *3beaf25c1b(); // Function Engine.KismetMathLibrary.*3beaf25c1b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65396dc
	void *d8b605c709(struct FVector X); // Function Engine.KismetMathLibrary.*d8b605c709 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653dbc0
	void *1f515d5574(struct FVector Z); // Function Engine.KismetMathLibrary.*1f515d5574 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653e010
	struct FVector2D *091fa283e1(); // Function Engine.KismetMathLibrary.*091fa283e1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6510968
	void *52c03ea9cb(float A); // Function Engine.KismetMathLibrary.*52c03ea9cb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651fd84
	void MakeRandomStream(int32 InitialSeed); // Function Engine.KismetMathLibrary.MakeRandomStream // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653d938
	float *30a8ab423b(); // Function Engine.KismetMathLibrary.*30a8ab423b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6563d84
	void *c5615a7daf(bool A); // Function Engine.KismetMathLibrary.*c5615a7daf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65153e8
	void *b176327dff(struct FRotator A); // Function Engine.KismetMathLibrary.*b176327dff // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6541c20
	float *f19cb87dc3(); // Function Engine.KismetMathLibrary.*f19cb87dc3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6561c24
	void *66484b0889(int32 B); // Function Engine.KismetMathLibrary.*66484b0889 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6541d30
	void *a34deedb6b(struct FVector Y); // Function Engine.KismetMathLibrary.*a34deedb6b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653ddb0
	struct FTimespan *9f5c23cc5a(); // Function Engine.KismetMathLibrary.*9f5c23cc5a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653420c
	void ConvertTransformToRelative(struct FTransform ParentTransform); // Function Engine.KismetMathLibrary.ConvertTransformToRelative // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651ea10
	void *445b996bdb(); // Function Engine.KismetMathLibrary.*445b996bdb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa7a2e0
	float *7762cea2d7(); // Function Engine.KismetMathLibrary.*7762cea2d7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65246c0
	void RandomFloatInRangeFromStream(float Min, struct FRandomStream Stream); // Function Engine.KismetMathLibrary.RandomFloatInRangeFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6547d10
	void GetDate(struct FDateTime A); // Function Engine.KismetMathLibrary.GetDate // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6529b40
	void *585f2c17e0(); // Function Engine.KismetMathLibrary.*585f2c17e0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652de1c
	struct FTimespan GetHours(); // Function Engine.KismetMathLibrary.GetHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652ae58
	void *bcc3556aad(bool B); // Function Engine.KismetMathLibrary.*bcc3556aad // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652069c
	bool *e77c615e90(); // Function Engine.KismetMathLibrary.*e77c615e90 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x654a2ec
	void *13c4e0826a(struct TArray<struct FVector> Vectors); // Function Engine.KismetMathLibrary.*13c4e0826a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6532cac
	void *763375b4b4(); // Function Engine.KismetMathLibrary.*763375b4b4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651f980
	void *08b8f2ae81(); // Function Engine.KismetMathLibrary.*08b8f2ae81 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6549488
	struct FRotator *5517b00eba(); // Function Engine.KismetMathLibrary.*5517b00eba // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651e5b0
	void NotEqual_ByteByte(bool A); // Function Engine.KismetMathLibrary.NotEqual_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6750e4
	void GetHour12(); // Function Engine.KismetMathLibrary.GetHour12 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652adc4
	struct FVector *7eb25b8f9f(); // Function Engine.KismetMathLibrary.*7eb25b8f9f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653d6d4
	bool *8a05893bc1(bool B); // Function Engine.KismetMathLibrary.*8a05893bc1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6542d78
	void *521a89edf8(float Angle); // Function Engine.KismetMathLibrary.*521a89edf8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6549888
	void RandomUnitVector(); // Function Engine.KismetMathLibrary.RandomUnitVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65484e4
	bool *d0b44c0410(); // Function Engine.KismetMathLibrary.*d0b44c0410 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651de3c
	void GetDirectionUnitVector(struct FVector from); // Function Engine.KismetMathLibrary.GetDirectionUnitVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652a3a8
	float FromDays(); // Function Engine.KismetMathLibrary.FromDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6526888
	float RandomFloatInRange(); // Function Engine.KismetMathLibrary.RandomFloatInRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67426c
	void *6eeace1241(); // Function Engine.KismetMathLibrary.*6eeace1241 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x57eda9c
	float *ef75f821da(float Target); // Function Engine.KismetMathLibrary.*ef75f821da // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6526478
	void Clamp(int32 Value, int32 Max); // Function Engine.KismetMathLibrary.Clamp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651bc70
	struct FVector *1ce8081a04(struct FVector Point); // Function Engine.KismetMathLibrary.*1ce8081a04 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6524fb4
	float *346b6bfb32(); // Function Engine.KismetMathLibrary.*346b6bfb32 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651beac
	void *c05d2d7ee3(); // Function Engine.KismetMathLibrary.*c05d2d7ee3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x998b94
	float *3fb2801f80(struct FLinearColor Current); // Function Engine.KismetMathLibrary.*3fb2801f80 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6518ed8
	struct UClass* *b0d2783442(); // Function Engine.KismetMathLibrary.*b0d2783442 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651c17c
	void *28c0236af7(); // Function Engine.KismetMathLibrary.*28c0236af7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651e174
	struct UClass* *735b24ffd6(); // Function Engine.KismetMathLibrary.*735b24ffd6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1c8f8
	float *d5b6dd32fe(); // Function Engine.KismetMathLibrary.*d5b6dd32fe // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6534dec
	void *51db26e2c7(); // Function Engine.KismetMathLibrary.*51db26e2c7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65478cc
	struct FVector *1f3743107f(); // Function Engine.KismetMathLibrary.*1f3743107f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65481d0
	struct FDateTime GetTimeOfDay(); // Function Engine.KismetMathLibrary.GetTimeOfDay // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65312e8
	void *c9bd2140c2(int32 B); // Function Engine.KismetMathLibrary.*c9bd2140c2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6533f4c
	void GetDuration(); // Function Engine.KismetMathLibrary.GetDuration // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652a63c
	struct FVector *7c1afc00b0(); // Function Engine.KismetMathLibrary.*7c1afc00b0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652eba4
	void GetDays(); // Function Engine.KismetMathLibrary.GetDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6529d08
	void GetTotalMinutes(); // Function Engine.KismetMathLibrary.GetTotalMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6531740
	struct FTransform *ca0914a511(); // Function Engine.KismetMathLibrary.*ca0914a511 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6523da0
	struct FVector *3afa905d1d(struct FTransform BoxWorldTransform); // Function Engine.KismetMathLibrary.*3afa905d1d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6536a2c
	void GetYear(struct FDateTime A); // Function Engine.KismetMathLibrary.GetYear // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6533728
	struct FVector *47f049bfcf(); // Function Engine.KismetMathLibrary.*47f049bfcf // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652eba4
	void *a2e542d804(struct FVector2D Current, float DeltaTime); // Function Engine.KismetMathLibrary.*a2e542d804 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65644b8
	void *1a73d9e394(); // Function Engine.KismetMathLibrary.*1a73d9e394 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb7519c
	struct FVector2D *1f80076a1b(); // Function Engine.KismetMathLibrary.*1f80076a1b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6542718
	void *2eef157e91(); // Function Engine.KismetMathLibrary.*2eef157e91 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x57eda9c
	void *6a7ecb4c12(struct FRotator A); // Function Engine.KismetMathLibrary.*6a7ecb4c12 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6542c04
	struct FTimespan GetTotalDays(); // Function Engine.KismetMathLibrary.GetTotalDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6531578
	struct FVector TransformLocation(); // Function Engine.KismetMathLibrary.TransformLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6563084
	void *f99851b5ba(bool B); // Function Engine.KismetMathLibrary.*f99851b5ba // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6534138
	int32 RandomInteger(); // Function Engine.KismetMathLibrary.RandomInteger // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6547e74
	float *ecbedb0d59(); // Function Engine.KismetMathLibrary.*ecbedb0d59 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65486d0
	void *9d177ef727(int32 A); // Function Engine.KismetMathLibrary.*9d177ef727 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x655c620
	struct FDateTime GetMonth(); // Function Engine.KismetMathLibrary.GetMonth // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652d8dc
	bool *6c7d1e8a88(); // Function Engine.KismetMathLibrary.*6c7d1e8a88 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654a410
	void *1d22015f02(); // Function Engine.KismetMathLibrary.*1d22015f02 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651dfb4
	float *d3f5532c39(); // Function Engine.KismetMathLibrary.*d3f5532c39 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x674d54
	struct FRotator *4e30d5fb44(); // Function Engine.KismetMathLibrary.*4e30d5fb44 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651e5b0
	void *c079ee424e(struct FString TimespanString); // Function Engine.KismetMathLibrary.*c079ee424e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65629e4
	void *d1cb8de892(); // Function Engine.KismetMathLibrary.*d1cb8de892 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6534578
	float MultiplyMultiply_FloatFloat(); // Function Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65416b8
	void *1b76d3fa0e(struct FRotator B); // Function Engine.KismetMathLibrary.*1b76d3fa0e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654a554
	int32 RandomIntegerInRange(); // Function Engine.KismetMathLibrary.RandomIntegerInRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb6dac4
	bool *f54b67984f(); // Function Engine.KismetMathLibrary.*f54b67984f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654a8a8
	void *623263e8dc(int32 A); // Function Engine.KismetMathLibrary.*623263e8dc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65434b8
	float Atan(); // Function Engine.KismetMathLibrary.Atan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6513694
	struct FDateTime IsMorning(); // Function Engine.KismetMathLibrary.IsMorning // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65366a8
	void *4d018cc14a(struct FRotator Target, float InterpSpeed); // Function Engine.KismetMathLibrary.*4d018cc14a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6547568
	struct FVector *7ff15ed007(); // Function Engine.KismetMathLibrary.*7ff15ed007 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653e200
	struct FVector *7c53b35dca(struct FVector SegmentEnd); // Function Engine.KismetMathLibrary.*7c53b35dca // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6525128
	void *b8272017ac(float Min); // Function Engine.KismetMathLibrary.*b8272017ac // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651bf88
	struct FTimespan *d91fdbec83(); // Function Engine.KismetMathLibrary.*d91fdbec83 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65618c4
	void *4f6ce937b0(int32 B); // Function Engine.KismetMathLibrary.*4f6ce937b0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6561990
	int32 *8e9ae748a7(); // Function Engine.KismetMathLibrary.*8e9ae748a7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653fcfc
	struct FDateTime GetSecond(); // Function Engine.KismetMathLibrary.GetSecond // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6530418
	void DaysInYear(); // Function Engine.KismetMathLibrary.DaysInYear // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651fa94
	int32 Ease(float A); // Function Engine.KismetMathLibrary.Ease // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x652324c
	int32 MakeTimespan(int32 Hours, int32 Seconds); // Function Engine.KismetMathLibrary.MakeTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653e590
	int32 *319b5efcc7(); // Function Engine.KismetMathLibrary.*319b5efcc7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x654194c
	bool *63e65eadc5(); // Function Engine.KismetMathLibrary.*63e65eadc5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x674ff0
	void Fraction(float A); // Function Engine.KismetMathLibrary.Fraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65267e8
	struct FVector *2cad8bede1(); // Function Engine.KismetMathLibrary.*2cad8bede1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653dcf0
	struct FVector MakeTransform(); // Function Engine.KismetMathLibrary.MakeTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb28988
	void *ace88db52d(); // Function Engine.KismetMathLibrary.*ace88db52d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651e39c
	struct FTimespan *d91109c7c4(); // Function Engine.KismetMathLibrary.*d91109c7c4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6533e80
	struct FRandomStream RandomIntegerInRangeFromStream(); // Function Engine.KismetMathLibrary.RandomIntegerInRangeFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6548058
	void *60a7938f98(struct FVector2D InVector2D); // Function Engine.KismetMathLibrary.*60a7938f98 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651e664
	int32 *2bff9823d8(); // Function Engine.KismetMathLibrary.*2bff9823d8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xba9ef4
	bool *008d9a8e7c(bool B); // Function Engine.KismetMathLibrary.*008d9a8e7c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6539468
	void *aa120c679c(struct FString IsoString); // Function Engine.KismetMathLibrary.*aa120c679c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651f6a0
	int32 *8555b399de(); // Function Engine.KismetMathLibrary.*8555b399de // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6543830
	void *606fa554d6(); // Function Engine.KismetMathLibrary.*606fa554d6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6562b74
	void *5fd0e80efc(); // Function Engine.KismetMathLibrary.*5fd0e80efc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6541620
	void *b8c89f2690(); // Function Engine.KismetMathLibrary.*b8c89f2690 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651ffd8
	int32 BreakDateTime(int32 Hour, int32 second); // Function Engine.KismetMathLibrary.BreakDateTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6518030
	struct FVector *84f09da72b(struct FVector Forward); // Function Engine.KismetMathLibrary.*84f09da72b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653e330
	bool *10d058aa71(); // Function Engine.KismetMathLibrary.*10d058aa71 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65617f0
	void EqualEqual_RotatorRotator(struct FRotator A, float ErrorTolerance); // Function Engine.KismetMathLibrary.EqualEqual_RotatorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6523be0
	struct FVector *24a7c1ceb0(); // Function Engine.KismetMathLibrary.*24a7c1ceb0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654972c
	struct FVector *69bb8de21c(float B); // Function Engine.KismetMathLibrary.*69bb8de21c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65209bc
	struct FVector *5873853a8c(struct FVector Segment1End); // Function Engine.KismetMathLibrary.*5873853a8c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65258fc
	float *da1509f478(); // Function Engine.KismetMathLibrary.*da1509f478 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65201b8
	void RandomUnitVectorFromStream(struct FRandomStream Stream); // Function Engine.KismetMathLibrary.RandomUnitVectorFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654851c
	void Max(int32 A); // Function Engine.KismetMathLibrary.Max // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653fa5c
	struct FRandomStream RandomRotatorFromStream(); // Function Engine.KismetMathLibrary.RandomRotatorFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65483dc
	void *3b01e0f0b9(); // Function Engine.KismetMathLibrary.*3b01e0f0b9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656413c
	void *081726cede(struct FVector A); // Function Engine.KismetMathLibrary.*081726cede // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x674ad4
	struct FName NotEqual_NameName(); // Function Engine.KismetMathLibrary.NotEqual_NameName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3483b4
	void Asin(); // Function Engine.KismetMathLibrary.Asin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6513508
	void *fb306abbf6(struct FVector B); // Function Engine.KismetMathLibrary.*fb306abbf6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654a554
	float BreakVector2D(); // Function Engine.KismetMathLibrary.BreakVector2D // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xac743c
	void *8adfdb7852(); // Function Engine.KismetMathLibrary.*8adfdb7852 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbcfefc
	void *952704bc11(struct FLinearColor InLinearColor); // Function Engine.KismetMathLibrary.*952704bc11 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651e50c
	float *ac1bd64fa3(float Mass); // Function Engine.KismetMathLibrary.*ac1bd64fa3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6564640
	float *acad3c931a(float Target); // Function Engine.KismetMathLibrary.*acad3c931a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb91ff4
	struct FVector *d719639f4e(); // Function Engine.KismetMathLibrary.*d719639f4e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652e688
	void *b193e9f38a(struct FVector Target); // Function Engine.KismetMathLibrary.*b193e9f38a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65257a8
	struct FVector *d295b6bc38(); // Function Engine.KismetMathLibrary.*d295b6bc38 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65641d8
	struct FVector *2d7ec3b76c(); // Function Engine.KismetMathLibrary.*2d7ec3b76c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6542630
	void *2e6567f6a3(); // Function Engine.KismetMathLibrary.*2e6567f6a3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653d9d0
	float *2707513f9b(struct FVector2D A); // Function Engine.KismetMathLibrary.*2707513f9b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654321c
	struct FDateTime *4f5c4b67ef(); // Function Engine.KismetMathLibrary.*4f5c4b67ef // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65618c4
	void Sqrt(float A); // Function Engine.KismetMathLibrary.Sqrt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6561468
	void GetMinutes(struct FTimespan A); // Function Engine.KismetMathLibrary.GetMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652d818
	float FMax(); // Function Engine.KismetMathLibrary.FMax // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x674830
	void *5ecc4812fb(); // Function Engine.KismetMathLibrary.*5ecc4812fb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6530e10
	void *d00db90f5a(struct FRotator Current, float DeltaTime); // Function Engine.KismetMathLibrary.*d00db90f5a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65473b8
	float *854ac6bd0d(); // Function Engine.KismetMathLibrary.*854ac6bd0d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65342d8
	void RandomIntegerFromStream(struct FRandomStream Stream); // Function Engine.KismetMathLibrary.RandomIntegerFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6547f28
	void RandomBoolFromStream(struct FRandomStream Stream); // Function Engine.KismetMathLibrary.RandomBoolFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65479b0
	float *23a8e3a7f4(); // Function Engine.KismetMathLibrary.*23a8e3a7f4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67457c
	void *17a2d1e1f3(struct FVector Point, struct FVector LineDirection); // Function Engine.KismetMathLibrary.*17a2d1e1f3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652e528
	bool *f5e6d52905(); // Function Engine.KismetMathLibrary.*f5e6d52905 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65152f8
	float Sin(); // Function Engine.KismetMathLibrary.Sin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x655c6b8
	void *78a1e7154b(struct FString B); // Function Engine.KismetMathLibrary.*78a1e7154b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x654a6ac
	int32 *af1f76021e(); // Function Engine.KismetMathLibrary.*af1f76021e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6561d34
	float *1c328e0959(); // Function Engine.KismetMathLibrary.*1c328e0959 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65485cc
	void *ffe77b367f(struct FTimespan A); // Function Engine.KismetMathLibrary.*ffe77b367f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65107b4
	float *bfdcaa3274(); // Function Engine.KismetMathLibrary.*bfdcaa3274 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x655c56c
	struct UObject* *83108dd42e(); // Function Engine.KismetMathLibrary.*83108dd42e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1ac84
	void Atan2(float A); // Function Engine.KismetMathLibrary.Atan2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65135b8
	bool *25b57e44e9(); // Function Engine.KismetMathLibrary.*25b57e44e9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6547718
	float Log(float Base); // Function Engine.KismetMathLibrary.Log // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653c678
	void *140da3917c(float A, float Value); // Function Engine.KismetMathLibrary.*140da3917c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6535a48
	float MakeVector2D(); // Function Engine.KismetMathLibrary.MakeVector2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653e764
	void *61eba59d69(struct UObject* A, bool bSelectA); // Function Engine.KismetMathLibrary.*61eba59d69 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x654a2ec
	void *8660743f23(); // Function Engine.KismetMathLibrary.*8660743f23 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6520078
	int32 *035c0809f0(); // Function Engine.KismetMathLibrary.*035c0809f0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6520798
	void *af51622374(bool B); // Function Engine.KismetMathLibrary.*af51622374 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6533dac
	float NotEqual_RotatorRotator(struct FRotator A); // Function Engine.KismetMathLibrary.NotEqual_RotatorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654305c
	struct FVector *6edd270f54(); // Function Engine.KismetMathLibrary.*6edd270f54 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653689c
	void *0d8f3f7109(struct FName B); // Function Engine.KismetMathLibrary.*0d8f3f7109 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1ac84
	float BreakRotator(); // Function Engine.KismetMathLibrary.BreakRotator // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xa0a9bc
	struct FDateTime GetDayOfYear(); // Function Engine.KismetMathLibrary.GetDayOfYear // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6529c74
	void *03678ce2bf(struct FVector A); // Function Engine.KismetMathLibrary.*03678ce2bf // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65420e4
	bool *23162651d4(); // Function Engine.KismetMathLibrary.*23162651d4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6513808
	struct FTimespan BreakTimespan(int32 Days, int32 Minutes); // Function Engine.KismetMathLibrary.BreakTimespan // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6518c74
	struct FVector *df6a50dbfe(); // Function Engine.KismetMathLibrary.*df6a50dbfe // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6539a5c
	void *6aa1280ce7(float Value, float InRangeB, float OutRangeB); // Function Engine.KismetMathLibrary.*6aa1280ce7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x674e8c
	struct FRotator BreakTransform(); // Function Engine.KismetMathLibrary.BreakTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5fb308
	struct FVector2D *20f190d544(struct FVector2D B); // Function Engine.KismetMathLibrary.*20f190d544 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651f494
	void *a0ca4283f3(float A); // Function Engine.KismetMathLibrary.*a0ca4283f3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6543f1c
	struct FVector2D *d3cdc405b5(); // Function Engine.KismetMathLibrary.*d3cdc405b5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656409c
	int32 *2a6761ce24(); // Function Engine.KismetMathLibrary.*2a6761ce24 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651e280
	void *525590d0e5(float R, float B); // Function Engine.KismetMathLibrary.*525590d0e5 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6517cb8
	struct FRandomStream BreakRandomStream(); // Function Engine.KismetMathLibrary.BreakRandomStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65189d4
	float *cfc7e6818f(); // Function Engine.KismetMathLibrary.*cfc7e6818f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653c754
	void *53eb08f8ba(struct FTimespan B); // Function Engine.KismetMathLibrary.*53eb08f8ba // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65398c8
	struct FVector *7fca436ee4(); // Function Engine.KismetMathLibrary.*7fca436ee4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652d5ec
	struct FDateTime GetMinute(); // Function Engine.KismetMathLibrary.GetMinute // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652d818
	void *cd84b532b1(float A); // Function Engine.KismetMathLibrary.*cd84b532b1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6746b4
	struct FVector Dot_VectorVector(); // Function Engine.KismetMathLibrary.Dot_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xc10728
	void RandomBool(); // Function Engine.KismetMathLibrary.RandomBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6547964
	void *3d91bd40a7(struct FLinearColor RGB); // Function Engine.KismetMathLibrary.*3d91bd40a7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65472c4
	void GetTotalHours(); // Function Engine.KismetMathLibrary.GetTotalHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6531610
	struct FTransform *de81b8d5cc(); // Function Engine.KismetMathLibrary.*de81b8d5cc // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6535da4
	int32 *7c04883f3f(); // Function Engine.KismetMathLibrary.*7c04883f3f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65440d0
	void *7edb7d755d(struct FDateTime B); // Function Engine.KismetMathLibrary.*7edb7d755d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65398c8
	int32 *c5bd9aaecb(); // Function Engine.KismetMathLibrary.*c5bd9aaecb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x654034c
	struct FVector *d449367853(struct FVector Target, float InterpSpeed); // Function Engine.KismetMathLibrary.*d449367853 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6563bdc
	bool BooleanOR(); // Function Engine.KismetMathLibrary.BooleanOR // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x290288
	float *8247fd655c(); // Function Engine.KismetMathLibrary.*8247fd655c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65421ec
	void *6e803b7f39(int32 B); // Function Engine.KismetMathLibrary.*6e803b7f39 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6520b10
	int32 *08cefa869b(); // Function Engine.KismetMathLibrary.*08cefa869b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x650e8e4
	struct FVector Cross_VectorVector(); // Function Engine.KismetMathLibrary.Cross_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651f574
	void *742677fea9(bool InBool); // Function Engine.KismetMathLibrary.*742677fea9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651ddb0
	struct FVector *7736e7a493(); // Function Engine.KismetMathLibrary.*7736e7a493 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653da90
	struct FVector *7b95fb5251(); // Function Engine.KismetMathLibrary.*7b95fb5251 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x973300
	void *ffa44d3fa9(float Yaw, float Length); // Function Engine.KismetMathLibrary.*ffa44d3fa9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651f364
	float *f05162589c(); // Function Engine.KismetMathLibrary.*f05162589c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65343ec
	void *46d1d90be8(struct FTransform T); // Function Engine.KismetMathLibrary.*46d1d90be8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6562cb8
	void *d397616f77(bool B); // Function Engine.KismetMathLibrary.*d397616f77 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6543e20
	struct UClass* *0d9d3dad95(); // Function Engine.KismetMathLibrary.*0d9d3dad95 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xaeccb8
	void *daa3b0bb60(float MinAngleDegrees); // Function Engine.KismetMathLibrary.*daa3b0bb60 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x651bd8c
	struct FVector *de749bc68d(); // Function Engine.KismetMathLibrary.*de749bc68d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6527fec
	struct FRandomStream RandomFloatFromStream(); // Function Engine.KismetMathLibrary.RandomFloatFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6547c44
	void *72c5dfa024(struct FString DateTimeString); // Function Engine.KismetMathLibrary.*72c5dfa024 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x651f80c
	struct FDateTime *5364f9889d(); // Function Engine.KismetMathLibrary.*5364f9889d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653953c
	struct FVector *a225c23396(); // Function Engine.KismetMathLibrary.*a225c23396 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6564288
	void FMod(float Dividend, float Remainder); // Function Engine.KismetMathLibrary.FMod // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x674758
	struct FTimespan GetSeconds(); // Function Engine.KismetMathLibrary.GetSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6530418
	void RandomFloat(); // Function Engine.KismetMathLibrary.RandomFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6547c0c
	void *fcc60df335(struct FTimespan A); // Function Engine.KismetMathLibrary.*fcc60df335 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6541e40
	void *bc0992c843(int32 A); // Function Engine.KismetMathLibrary.*bc0992c843 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6510f50
	float Acos(); // Function Engine.KismetMathLibrary.Acos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x650eab4
	void IsLeapYear(int32 Year); // Function Engine.KismetMathLibrary.IsLeapYear // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6536570
	void *b564417fe3(struct FVector2D A); // Function Engine.KismetMathLibrary.*b564417fe3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6510880
	float MapRangeUnclamped(); // Function Engine.KismetMathLibrary.MapRangeUnclamped // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653e840
	void *8e4cd1632f(float Tolerance); // Function Engine.KismetMathLibrary.*8e4cd1632f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65461c8
	struct FDateTime GetHour(); // Function Engine.KismetMathLibrary.GetHour // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652ae58
	struct FRotator *2107af1f45(); // Function Engine.KismetMathLibrary.*2107af1f45 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652f1fc
	void *4a00523c19(struct FVector A); // Function Engine.KismetMathLibrary.*4a00523c19 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6520c70
	float *5a350224e5(); // Function Engine.KismetMathLibrary.*5a350224e5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6748cc
	int32 Min(); // Function Engine.KismetMathLibrary.Min // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65400ac
	void Not_PreBool(bool A); // Function Engine.KismetMathLibrary.Not_PreBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x8f1b08
	void FromMilliseconds(); // Function Engine.KismetMathLibrary.FromMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65269c8
	struct FVector2D *b9879bd5ac(); // Function Engine.KismetMathLibrary.*b9879bd5ac // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6520fec
	void *0d35fffe01(struct FVector Direction); // Function Engine.KismetMathLibrary.*0d35fffe01 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb3d308
	bool *5f71e53026(int32 A); // Function Engine.KismetMathLibrary.*5f71e53026 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb6766c
	struct FVector *6f34d200a6(); // Function Engine.KismetMathLibrary.*6f34d200a6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652d744
	void *c74212392b(bool B); // Function Engine.KismetMathLibrary.*c74212392b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6541794
	void Abs(); // Function Engine.KismetMathLibrary.Abs // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa0c518
	struct FRandomStream *4f0551b4a6(); // Function Engine.KismetMathLibrary.*4f0551b4a6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6547b20
	void *20c731b0f6(struct FDateTime B); // Function Engine.KismetMathLibrary.*20c731b0f6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6542e60
	struct FVector *bcd26e1868(struct FVector Point); // Function Engine.KismetMathLibrary.*bcd26e1868 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6546688
	struct FDateTime IsAfternoon(); // Function Engine.KismetMathLibrary.IsAfternoon // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6535fa4
	void FromHours(); // Function Engine.KismetMathLibrary.FromHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6526928
	void BooleanXOR(bool A); // Function Engine.KismetMathLibrary.BooleanXOR // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65154d8
	struct FVector2D *8a647c31f6(); // Function Engine.KismetMathLibrary.*8a647c31f6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6542008
	void *0bed2ddf5e(float B); // Function Engine.KismetMathLibrary.*0bed2ddf5e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6510a44
	void UtcNow(); // Function Engine.KismetMathLibrary.UtcNow // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6563968
	float *32e50f5f57(); // Function Engine.KismetMathLibrary.*32e50f5f57 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb3c864
	void *a0abb0c1e8(struct TArray<bool> ByteArray); // Function Engine.KismetMathLibrary.*a0abb0c1e8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653fb30
	void *0c17c4ef20(struct FRotator InRot); // Function Engine.KismetMathLibrary.*0c17c4ef20 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6532634
	struct FDateTime *35e1dfb14d(); // Function Engine.KismetMathLibrary.*35e1dfb14d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653420c
	void GetTotalMilliseconds(struct FTimespan A); // Function Engine.KismetMathLibrary.GetTotalMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65316a8
	void *aca06a37be(struct FVector2D A, float ErrorTolerance); // Function Engine.KismetMathLibrary.*aca06a37be // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6523f24
	float *f25e4790b2(); // Function Engine.KismetMathLibrary.*f25e4790b2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65624c0
	int32 MakeDateTime(int32 Year, int32 Day, int32 Minute); // Function Engine.KismetMathLibrary.MakeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653c9f4
	float *e0bf0c7f51(); // Function Engine.KismetMathLibrary.*e0bf0c7f51 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x674968
	void MakeColor(float R, float B); // Function Engine.KismetMathLibrary.MakeColor // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67446c
	float *a62c6a2cfd(); // Function Engine.KismetMathLibrary.*a62c6a2cfd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6542ae4
	void GetMillisecond(struct FDateTime A); // Function Engine.KismetMathLibrary.GetMillisecond // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x652d680
	void NotEqual_VectorVector(struct FVector B); // Function Engine.KismetMathLibrary.NotEqual_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6543358
	float FromMinutes(); // Function Engine.KismetMathLibrary.FromMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6526a64
	void *2528c65bb6(struct FLinearColor InColor, float S); // Function Engine.KismetMathLibrary.*2528c65bb6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654709c
	void *c5e3d4a168(); // Function Engine.KismetMathLibrary.*c5e3d4a168 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x654257c
	struct FVector *cc9dae246e(); // Function Engine.KismetMathLibrary.*cc9dae246e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6518ac0
	void TimespanRatio(struct FTimespan A); // Function Engine.KismetMathLibrary.TimespanRatio // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6562b90
	int32 REase(); // Function Engine.KismetMathLibrary.REase // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6546df4
};

// Class Engine.*e03a1d5191
// Size: 0x28 (Inherited: 0x28)
struct U*e03a1d5191 : UBlueprintFunctionLibrary {

	void *8c0b137a07(int32 Data); // Function Engine.*e03a1d5191.*8c0b137a07 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x657b160
	int32 *e5835dcafc(); // Function Engine.*e03a1d5191.*e5835dcafc // Final|Native|Static|Public|BlueprintCallable // @ game+0x6577198
	void *cdc25324f4(struct UEnum* Enum); // Function Engine.*e03a1d5191.*cdc25324f4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65747ac
	int32 *2212eba131(int32 Data); // Function Engine.*e03a1d5191.*2212eba131 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6575e94
	bool *c38403721c(); // Function Engine.*e03a1d5191.*c38403721c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6576dc4
	void *bf8800e784(int32 Data, int32 NumBits); // Function Engine.*e03a1d5191.*bf8800e784 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6576c4c
	int32 *391a4c9c2f(); // Function Engine.*e03a1d5191.*391a4c9c2f // Final|Native|Static|Public|BlueprintCallable // @ game+0x65749d0
	void *38324b5057(int32 Data); // Function Engine.*e03a1d5191.*38324b5057 // Final|Native|Static|Public|BlueprintCallable // @ game+0x656d914
	void *d91730713a(bool EnumeratorIndex); // Function Engine.*e03a1d5191.*d91730713a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65748e4
	bool *8b5de04c46(); // Function Engine.*e03a1d5191.*8b5de04c46 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65746b8
	void *fff122b15a(int32 Data); // Function Engine.*e03a1d5191.*fff122b15a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6577098
	void *1afacf591d(); // Function Engine.*e03a1d5191.*1afacf591d // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x656fb3c
	int32 *f88aedf12f(); // Function Engine.*e03a1d5191.*f88aedf12f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x656fbc0
};

// Class Engine.KismetRenderingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetRenderingLibrary : UBlueprintFunctionLibrary {

	struct UObject* *2341a76d31(int32 Width); // Function Engine.KismetRenderingLibrary.*2341a76d31 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6572108
	void DrawMaterialToRenderTarget(struct UObject* WorldContextObject); // Function Engine.KismetRenderingLibrary.DrawMaterialToRenderTarget // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x65727a0
	struct UTextureRenderTarget2D* *f7b4a9d11c(); // Function Engine.KismetRenderingLibrary.*f7b4a9d11c // Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x656fca4
	void EndDrawCanvasToRenderTarget(); // Function Engine.KismetRenderingLibrary.EndDrawCanvasToRenderTarget // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6572c38
	void ExportTexture2D(struct UTexture2D* Texture); // Function Engine.KismetRenderingLibrary.ExportTexture2D // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x657352c
	int32 BreakSkinWeightInfo(bool Weight1, bool Weight2); // Function Engine.KismetRenderingLibrary.BreakSkinWeightInfo // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x656d9e8
	bool MakeSkinWeightInfo(); // Function Engine.KismetRenderingLibrary.MakeSkinWeightInfo // Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657ae9c
	void *5d5e3b1eab(struct UTextureRenderTarget2D* RenderTarget); // Function Engine.KismetRenderingLibrary.*5d5e3b1eab // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6571c60
	struct FString ExportRenderTarget(); // Function Engine.KismetRenderingLibrary.ExportRenderTarget // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6573364
	struct UObject* BeginDrawCanvasToRenderTarget(struct UTextureRenderTarget2D* TextureRenderTarget, struct FVector2D Size); // Function Engine.KismetRenderingLibrary.BeginDrawCanvasToRenderTarget // Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x656d724
};

// Class Engine.*71c807b57c
// Size: 0x28 (Inherited: 0x28)
struct U*71c807b57c : UBlueprintFunctionLibrary {

	void *bf6fe091ca(struct FString SourceString, enum class *bde51a4152 SearchCase); // Function Engine.*71c807b57c.*bf6fe091ca // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657b244
	struct FString *73fd84bf9e(); // Function Engine.*71c807b57c.*73fd84bf9e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656f728
	void Split(struct FString SourceString, struct FString LeftS, enum class *bde51a4152 SearchCase); // Function Engine.*71c807b57c.Split // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657e9b0
	struct FString *0c8ecac987(); // Function Engine.*71c807b57c.*0c8ecac987 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6577688
	struct FRotator *d0154d02cb(); // Function Engine.*71c807b57c.*d0154d02cb // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6571068
	void *3cb7b87e18(struct FString B); // Function Engine.*71c807b57c.*3cb7b87e18 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa871b0
	struct FString ToUpper(); // Function Engine.*71c807b57c.ToUpper // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657ff7c
	struct FVector2D *e1db8e82ae(); // Function Engine.*71c807b57c.*e1db8e82ae // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6571244
	void *23f9e7e020(int32 Count); // Function Engine.*71c807b57c.*23f9e7e020 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657a25c
	struct FString *67f298ac72(); // Function Engine.*71c807b57c.*67f298ac72 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb6ac74
	bool *6293c0a790(struct FString Suffix); // Function Engine.*71c807b57c.*6293c0a790 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656e2bc
	void Contains(struct FString SearchIn, bool bUseCase); // Function Engine.*71c807b57c.Contains // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbd9bc4
	int32 *74370ab805(); // Function Engine.*71c807b57c.*74370ab805 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65741a8
	void *f8d76676b9(); // Function Engine.*71c807b57c.*f8d76676b9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x657189c
	int32 Mid(struct FString SourceString); // Function Engine.*71c807b57c.Mid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657b3d8
	float *b64e39f0f3(); // Function Engine.*71c807b57c.*b64e39f0f3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657fd7c
	void *df64060e5f(struct FString Prefix, struct FString Suffix); // Function Engine.*71c807b57c.*df64060e5f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656f29c
	struct FString *a753b2f6c9(); // Function Engine.*71c807b57c.*a753b2f6c9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656f060
	void *b9c3e73850(struct FName InName); // Function Engine.*71c807b57c.*b9c3e73850 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb68868
	void NotEqual_StrStr(struct FString A); // Function Engine.*71c807b57c.NotEqual_StrStr // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657b9e0
	bool *d88010b733(); // Function Engine.*71c807b57c.*d88010b733 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656fdec
	float *ac7bb196f3(); // Function Engine.*71c807b57c.*ac7bb196f3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbf5be0
	void *8b7dbcb8e5(); // Function Engine.*71c807b57c.*8b7dbcb8e5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6580224
	void *f317b0112d(); // Function Engine.*71c807b57c.*f317b0112d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65709ac
	struct FString ToLower(); // Function Engine.*71c807b57c.ToLower // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657fe64
	void Reverse(struct FString SourceString); // Function Engine.*71c807b57c.Reverse // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657cce0
	struct FString *86a1666e16(struct FString Prefix); // Function Engine.*71c807b57c.*86a1666e16 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656e754
	bool *aaad7129cf(); // Function Engine.*71c807b57c.*aaad7129cf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657c2a4
	void *2629d92b97(struct FString SourceString, int32 Length); // Function Engine.*71c807b57c.*2629d92b97 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6576690
	struct FString *a32d685ff1(); // Function Engine.*71c807b57c.*a32d685ff1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656e994
	void *a596e54243(struct FString AppendTo, struct FLinearColor InColor); // Function Engine.*71c807b57c.*a596e54243 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656e508
	struct FVector *22fee47461(); // Function Engine.*71c807b57c.*22fee47461 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65713f0
	struct FString *97b81933cb(struct FString Prefix, struct FString Suffix); // Function Engine.*71c807b57c.*97b81933cb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656f4f0
	void *c9a74fe81d(); // Function Engine.*71c807b57c.*c9a74fe81d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65740c4
	int32 *5a1447f311(); // Function Engine.*71c807b57c.*5a1447f311 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657d250
	void *e585d1c3fd(); // Function Engine.*71c807b57c.*e585d1c3fd // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6570178
	void *0fd9e27501(struct FString inString); // Function Engine.*71c807b57c.*0fd9e27501 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6570f9c
	int32 Right(); // Function Engine.*71c807b57c.Right // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657ce58
	void *d2f50e2d8a(struct FString AppendTo, struct FIntVector InIntVector); // Function Engine.*71c807b57c.*d2f50e2d8a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656ebd0
	void *6fed9a27d9(); // Function Engine.*71c807b57c.*6fed9a27d9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb63c28
	struct FIntVector *64bf07f068(); // Function Engine.*71c807b57c.*64bf07f068 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65707c8
	void *f252d85d7d(struct FTransform InTrans); // Function Engine.*71c807b57c.*f252d85d7d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65715cc
	void *660bcfe527(struct TArray<struct FString> SourceArray); // Function Engine.*71c807b57c.*660bcfe527 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6577a04
	struct FVector *963772dfe2(); // Function Engine.*71c807b57c.*963772dfe2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6571a78
	void *166a9f2b4d(struct FString SourceString); // Function Engine.*71c807b57c.*166a9f2b4d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657a424
	void *9a3a67a66c(); // Function Engine.*71c807b57c.*9a3a67a66c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656ffac
	struct FString Trim(); // Function Engine.*71c807b57c.Trim // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6580094
	struct FString Len(); // Function Engine.*71c807b57c.Len // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657a594
	void *aadc8f8e6f(); // Function Engine.*71c807b57c.*aadc8f8e6f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6570b64
	struct TArray<struct FString> *2bb208d816(); // Function Engine.*71c807b57c.*2bb208d816 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6572224
	struct FString *cb12e4bc47(struct FString ReplacementText); // Function Engine.*71c807b57c.*cb12e4bc47 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x657cab8
	void *46123475d9(); // Function Engine.*71c807b57c.*46123475d9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6570ec8
	struct FString NotEqual_StriStri(); // Function Engine.*71c807b57c.NotEqual_StriStri // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657bb58
	struct FString StartsWith(struct FString InPrefix); // Function Engine.*71c807b57c.StartsWith // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657ec84
	void Left(struct FString SourceString); // Function Engine.*71c807b57c.Left // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657a098
	enum class *bde51a4152 EndsWith(); // Function Engine.*71c807b57c.EndsWith // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6572d20
	void *62b1f2cde0(struct FString inString); // Function Engine.*71c807b57c.*62b1f2cde0 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6570d4c
	int32 *af00b652ce(); // Function Engine.*71c807b57c.*af00b652ce // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6573afc
	void *0585151b78(struct FString A); // Function Engine.*71c807b57c.*0585151b78 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6573048
	struct FString *55185c483c(struct FString Prefix); // Function Engine.*71c807b57c.*55185c483c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656ee24
	int32 *406ec67860(); // Function Engine.*71c807b57c.*406ec67860 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657d050
	void Replace(struct FString SourceString, struct FString to); // Function Engine.*71c807b57c.Replace // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657c864
	struct FString *b7edd1e262(); // Function Engine.*71c807b57c.*b7edd1e262 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc4a5a0
};

// Class Engine.*c2edae2ca8
// Size: 0x28 (Inherited: 0x28)
struct U*c2edae2ca8 : UBlueprintFunctionLibrary {

	struct FString *1aa1b2d4a0(); // Function Engine.*c2edae2ca8.*1aa1b2d4a0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6577770
	struct FName *7471032da7(); // Function Engine.*c2edae2ca8.*7471032da7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657788c
	void *5a2f4b82f5(struct FString Key); // Function Engine.*c2edae2ca8.*5a2f4b82f5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6576838
	struct FString *0b1df35918(); // Function Engine.*c2edae2ca8.*0b1df35918 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65769e8
	struct FString *6a9a4d1d6b(); // Function Engine.*c2edae2ca8.*6a9a4d1d6b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65752c4
	void *d00ac41be0(struct FName TableId); // Function Engine.*c2edae2ca8.*d00ac41be0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6574f2c
	void *9c5302330a(); // Function Engine.*c2edae2ca8.*9c5302330a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6575fd8
	struct FName *cbcbbf407a(); // Function Engine.*c2edae2ca8.*cbcbbf407a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6576b54
};

// Class Engine.*d853b68b1b
// Size: 0x28 (Inherited: 0x28)
struct U*d853b68b1b : UBlueprintFunctionLibrary {

	struct FTimespan *e13d2b4e79(); // Function Engine.*d853b68b1b.*e13d2b4e79 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656d5fc
	void *fbddb4d7a8(struct FString Key); // Function Engine.*d853b68b1b.*fbddb4d7a8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6573d18
	struct FString *b7186e01a5(); // Function Engine.*d853b68b1b.*b7186e01a5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbbf748
	struct FDateTime *1ff0e8634b(); // Function Engine.*d853b68b1b.*1ff0e8634b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656cc50
	void Format(struct FText InPattern); // Function Engine.*d853b68b1b.Format // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xab93dc
	struct FText *eccff01ecc(); // Function Engine.*d853b68b1b.*eccff01ecc // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65731d4
	struct FText *e822ab2c07(struct FText B); // Function Engine.*d853b68b1b.*e822ab2c07 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657bce4
	void *c4f4c0a2f9(struct FText InText); // Function Engine.*d853b68b1b.*c4f4c0a2f9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657f464
	struct FText *1106ea2ea1(); // Function Engine.*d853b68b1b.*1106ea2ea1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657f624
	int32 *639abffc05(int32 MaximumIntegralDigits); // Function Engine.*d853b68b1b.*639abffc05 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657060c
	void *860509ed57(struct FName OutTableId); // Function Engine.*d853b68b1b.*860509ed57 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657efd4
	bool *ab112aaf83(); // Function Engine.*d853b68b1b.*ab112aaf83 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65700a0
	void *dd50989fb8(int32 Value, bool bUseGrouping, int32 MaximumIntegralDigits, int32 MaximumFractionalDigits); // Function Engine.*d853b68b1b.*dd50989fb8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656c834
	struct FText *cf9e97b29f(); // Function Engine.*d853b68b1b.*cf9e97b29f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xb4ec20
	void *a1c944091f(struct FText A); // Function Engine.*d853b68b1b.*a1c944091f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657b84c
	void *047faeced0(); // Function Engine.*d853b68b1b.*047faeced0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6570a8c
	struct FString *459da3a323(); // Function Engine.*d853b68b1b.*459da3a323 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656d364
	bool *aa513eb250(); // Function Engine.*d853b68b1b.*aa513eb250 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656fed0
	int32 *8ede4714d5(float Value, bool bUseGrouping); // Function Engine.*d853b68b1b.*8ede4714d5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657034c
	struct FText *29deec5b16(); // Function Engine.*d853b68b1b.*29deec5b16 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657fa1c
	void *77e9876d99(struct FString InTimeZone); // Function Engine.*d853b68b1b.*77e9876d99 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656d1ac
	struct FVector *f309b96f35(); // Function Engine.*d853b68b1b.*f309b96f35 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6571b78
	struct FText *f29a82b8aa(); // Function Engine.*d853b68b1b.*f29a82b8aa // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657f700
	void *f10b5c2f0c(struct FText B); // Function Engine.*d853b68b1b.*f10b5c2f0c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6572eb4
	void *a51c3b2426(); // Function Engine.*d853b68b1b.*a51c3b2426 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657f8fc
	struct FText *639df32043(); // Function Engine.*d853b68b1b.*639df32043 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657f540
	void *80dc31ea15(struct FTransform InTrans); // Function Engine.*d853b68b1b.*80dc31ea15 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x657170c
	void *a1c5aab7be(struct FLinearColor InColor); // Function Engine.*d853b68b1b.*a1c5aab7be // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x657026c
	struct FText *490f0a73da(); // Function Engine.*d853b68b1b.*490f0a73da // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657fc5c
	struct FText *4de21a4c7b(); // Function Engine.*d853b68b1b.*4de21a4c7b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657fb3c
	void *29e27b73f6(struct FDateTime InDateTime); // Function Engine.*d853b68b1b.*29e27b73f6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656cff0
	struct FString *110fc464c5(); // Function Engine.*d853b68b1b.*110fc464c5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656c4f4
	void *aba67a708b(); // Function Engine.*d853b68b1b.*aba67a708b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6570c64
	void *10d2655018(); // Function Engine.*d853b68b1b.*10d2655018 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65708c8
	struct FString *a9bf62d09d(); // Function Engine.*d853b68b1b.*a9bf62d09d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656c328
	void *8faf144670(struct FString Key); // Function Engine.*d853b68b1b.*8faf144670 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657f300
	void *bccffb92f8(); // Function Engine.*d853b68b1b.*bccffb92f8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656d51c
	struct FDateTime *392fa45c0c(); // Function Engine.*d853b68b1b.*392fa45c0c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x656cb70
	void *ad4c74b296(); // Function Engine.*d853b68b1b.*ad4c74b296 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6574588
	void *a91441264e(); // Function Engine.*d853b68b1b.*a91441264e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65719a4
	int32 *b051f95608(); // Function Engine.*d853b68b1b.*b051f95608 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x656cd30
	void *5064ed05e6(struct FText InText); // Function Engine.*d853b68b1b.*5064ed05e6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x657f7dc
};

// Class Engine.*2f172ca16a
// Size: 0x28 (Inherited: 0x28)
struct U*2f172ca16a : UBlueprintFunctionLibrary {

	void *1950ad8243(); // Function Engine.*2f172ca16a.*1950ad8243 // Final|Native|Static|Public|BlueprintCallable // @ game+0x657c7d4
	void *e192e80fc7(struct UStaticMeshComponent* StaticMeshComponent, struct FLinearColor EndColor); // Function Engine.*2f172ca16a.*e192e80fc7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x657bf98
	struct FLinearColor *f214f2126e(); // Function Engine.*2f172ca16a.*f214f2126e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x657c174
};

// Class Engine.World
// Size: 0xc00 (Inherited: 0x28)
struct UWorld : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct UNetDriver* NetDriver; // 0x38(0x08)
	struct U*dbc24df428* *572dbbd10c; // 0x40(0x08)
	struct U*dbc24df428* *ff616dc75a; // 0x48(0x08)
	struct U*dbc24df428* *b14fa5be94; // 0x50(0x08)
	struct AGameNetworkManager* *d2b780bf2a; // 0x58(0x08)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x60(0x08)
	struct TArray<struct UObject*> *294ad5a57a; // 0x68(0x10)
	struct TArray<struct UObject*> *d0bcea2fc8; // 0x78(0x10)
	struct FString *4bdd627d66; // 0x88(0x10)
	struct ULevel* *8b20f5ee02; // 0x98(0x08)
	struct ULevel* *dcb2f7c6c2; // 0xa0(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0xa8(0x08)
	struct AParticleEventManager* *4f94cfe63a; // 0xb0(0x08)
	struct APhysicsVolume* *e411bcacbe; // 0xb8(0x08)
	struct TArray<struct ULevelStreaming*> *ac2cfcb454; // 0xc0(0x10)
	char pad_D0[0x30]; // 0xd0(0x30)
	struct UNavigationSystem* NavigationSystem; // 0x100(0x08)
	struct AGameModeBase* *adccf6b737; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)
	struct UAISystemBase* AISystem; // 0x118(0x08)
	struct UAvoidanceManager* AvoidanceManager; // 0x120(0x08)
	struct TArray<struct ULevel*> Levels; // 0x128(0x10)
	struct TArray<struct F*5e6079eb99> *8dfe0b2c7a; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)
	struct ULevel* CurrentLevel; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)
	struct TArray<struct U*eb42cffbf0*> *38e60bbbc0; // 0x160(0x10)
	struct UCanvas* *7e9e5ead14; // 0x170(0x08)
	struct UCanvas* *4f08791c3b; // 0x178(0x08)
	struct UDirectionalLightComponent* *0812d986ee; // 0x180(0x08)
	char pad_188[0x7f8]; // 0x188(0x7f8)
	struct UWorldComposition* WorldComposition; // 0x980(0x08)
	char pad_988[0x4a]; // 0x988(0x4a)
	char *dc1a1b93db : 1; // 0x9d2(0x01)
	char pad_9D2_1 : 7; // 0x9d2(0x01)
	char pad_9D3[0x6d]; // 0x9d3(0x6d)
	struct TMap<struct F*bc7fe12051, struct F*1bd8d8b2a5> *107d5cd5e6; // 0xa40(0x50)
	char pad_A90[0x170]; // 0xa90(0x170)
};

// Class Engine.NavigationSystem
// Size: 0x4d0 (Inherited: 0x28)
struct UNavigationSystem : UBlueprintFunctionLibrary {
	struct ANavigationData* *18739b8ac2; // 0x28(0x08)
	struct ANavigationData* *d936b9505d; // 0x30(0x08)
	char bAutoCreateNavigationData : 1; // 0x38(0x01)
	char bAllowClientSideNavigation : 1; // 0x38(0x01)
	char *d53cf8fe84 : 1; // 0x38(0x01)
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
	float ActiveTilesUpdateInterval; // 0x44(0x04)
	struct TArray<struct F*462177a17f> SupportedAgents; // 0x48(0x10)
	float DirtyAreasUpdateFreq; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct ANavigationData*> *34efb8dd33; // 0x60(0x10)
	struct TArray<struct FBox> *a0316ef022; // 0x70(0x10)
	struct TMap<int32, struct ANavigationData*> *1c25b6227b; // 0x80(0x50)
	struct TArray<struct ANavigationData*> *08946e89f7; // 0xd0(0x10)
	char pad_E0[0x60]; // 0xe0(0x60)
	struct FMulticastDelegate *6cffb4af8d; // 0x140(0x10)
	struct FMulticastDelegate OnNavigationGenerationFinishedDelegate; // 0x150(0x10)
	char pad_160[0x124]; // 0x160(0x124)
	enum class FNavigationSystemRunMode OperationMode; // 0x284(0x01)
	char pad_285[0x243]; // 0x285(0x243)
	uint32 DynamicNavThreadNum; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)

	void *49bc6f5742(); // Function Engine.NavigationSystem.*49bc6f5742 // Final|Native|Public|BlueprintCallable // @ game+0x657be74
	struct AController* *6241be2cd2(); // Function Engine.NavigationSystem.*6241be2cd2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x657e75c
	struct FVector *f026268184(float PathCost, struct UClass* FilterClass); // Function Engine.NavigationSystem.*f026268184 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65755b4
	void *7c502ababa(); // Function Engine.NavigationSystem.*7c502ababa // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6575430
	struct UClass* GetRandomReachablePointInRadius(); // Function Engine.NavigationSystem.GetRandomReachablePointInRadius // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6575ca4
	struct UClass* *0cd126663e(struct UObject* WorldContext, struct FVector PathEnd); // Function Engine.NavigationSystem.*0cd126663e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6573920
	struct UObject* *d7ec10132d(); // Function Engine.NavigationSystem.*d7ec10132d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65775c4
	void GetPathLength(struct FVector PathStart, float PathLength, struct UClass* FilterClass); // Function Engine.NavigationSystem.GetPathLength // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6575830
	struct UClass* GetRandomPointInNavigableRadius(); // Function Engine.NavigationSystem.GetRandomPointInNavigableRadius // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6575ab4
	void *2140dbd7ae(); // Function Engine.NavigationSystem.*2140dbd7ae // Final|Native|Public|BlueprintCallable // @ game+0x657cccc
	void *1d51633d13(); // Function Engine.NavigationSystem.*1d51633d13 // Final|Native|Public|BlueprintCallable // @ game+0x65805a4
	struct UClass* *cb3c6a6198(); // Function Engine.NavigationSystem.*cb3c6a6198 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65736f4
	struct UClass* *4882fae175(struct FVector Origin, float Radius); // Function Engine.NavigationSystem.*4882fae175 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6579344
	struct UObject* *20c9a2995a(); // Function Engine.NavigationSystem.*20c9a2995a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6577500
	void *76b14d0880(struct FVector RayStart, struct FVector HitLocation, struct AController* Querier); // Function Engine.NavigationSystem.*76b14d0880 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x657b600
	void *a9715f926c(); // Function Engine.NavigationSystem.*a9715f926c // Final|Native|Public|BlueprintCallable // @ game+0x657d9e4
	struct FVector ProjectPointToNavigation(struct ANavigationData* NavData, struct FVector QueryExtent); // Function Engine.NavigationSystem.ProjectPointToNavigation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x657c49c
	struct UClass* *05fb521ef3(); // Function Engine.NavigationSystem.*05fb521ef3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6579574
	void *61dd4ea841(struct UObject* WorldContext, struct FVector ProjectedLocation, struct UClass* FilterClass); // Function Engine.NavigationSystem.*61dd4ea841 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6579ba8
	bool *e662b88c69(); // Function Engine.NavigationSystem.*e662b88c69 // Final|Native|Public|BlueprintCallable // @ game+0x6580698
	void *b5be352c84(); // Function Engine.NavigationSystem.*b5be352c84 // Final|Native|Public|BlueprintCallable // @ game+0x657d94c
	void *a5c57afe7c(); // Function Engine.NavigationSystem.*a5c57afe7c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x657e834
	float *fb36ff9c69(); // Function Engine.NavigationSystem.*fb36ff9c69 // Final|Native|Public|BlueprintCallable // @ game+0x657c6ac
};

// Class Engine.*e66dad2219
// Size: 0x28 (Inherited: 0x28)
struct U*e66dad2219 : UBlueprintFunctionLibrary {

	void *8709062c7e(); // Function Engine.*e66dad2219.*8709062c7e // Final|Native|Static|Public|BlueprintCallable // @ game+0x657726c
	void *e1a4d7d8f2(); // Function Engine.*e66dad2219.*e1a4d7d8f2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x657e55c
	void *a83414185c(); // Function Engine.*e66dad2219.*a83414185c // Final|Native|Static|Public|BlueprintCallable // @ game+0x6572900
	void *61197d8c7d(struct FVector2D Scale, bool bShowLoadingMovie); // Function Engine.*e66dad2219.*61197d8c7d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x657e014
};

// Class Engine.*f007829616
// Size: 0x30 (Inherited: 0x30)
struct U*f007829616 : U*5914f4a6eb {
};

// Class Engine.*62c51c71c4
// Size: 0x30 (Inherited: 0x30)
struct U*62c51c71c4 : U*9f23a81057 {
};

// Class Engine.*675a262fd7
// Size: 0x28 (Inherited: 0x28)
struct U*675a262fd7 : UBlueprintFunctionLibrary {

	struct UClass* *a11d7fefc1(); // Function Engine.*675a262fd7.*a11d7fefc1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65751e8
	void *6d9800cc52(struct UClass* Class); // Function Engine.*675a262fd7.*6d9800cc52 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6574b38
	struct UClass* *43e339a40b(); // Function Engine.*675a262fd7.*43e339a40b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657461c
	struct UClass* *99fe1d2b84(); // Function Engine.*675a262fd7.*99fe1d2b84 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6576fa4
	void *e721f845ea(struct UClass* Class); // Function Engine.*675a262fd7.*e721f845ea // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x657510c
};

// Class Engine.*a4208e4537
// Size: 0x28 (Inherited: 0x28)
struct U*a4208e4537 : UBlueprintFunctionLibrary {

	struct FLinearColor *8f08fd7bcf(); // Function Engine.*a4208e4537.*8f08fd7bcf // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x657a878
	struct UObject* LogLocation(struct FVector Location, struct FLinearColor ObjectColor); // Function Engine.*a4208e4537.LogLocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x657aaa8
	struct FString LogText(); // Function Engine.*a4208e4537.LogText // Final|Native|Static|Public|BlueprintCallable // @ game+0x657ad10
};

// Class Engine.*ec52644eb6
// Size: 0x38 (Inherited: 0x28)
struct U*ec52644eb6 : UObject {
	struct UEdGraphNode* Node; // 0x28(0x08)
	struct FColor *82d9442041; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.AnimBlueprintGeneratedClass
// Size: 0x428 (Inherited: 0x3b8)
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct TArray<struct F*76521713df> *e7aba5b1a1; // 0x3c0(0x10)
	struct USkeleton* TargetSkeleton; // 0x3d0(0x08)
	struct TArray<struct FAnimNotifyEvent> *b8a2cd1b56; // 0x3d8(0x10)
	int32 *cb2a8193d5; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct TArray<int32> *f120659f5a; // 0x3f0(0x10)
	char pad_400[0x18]; // 0x400(0x18)
	struct TArray<struct FName> *c961b04a29; // 0x418(0x10)
};

// Class Engine.BodySetup
// Size: 0x3a0 (Inherited: 0x28)
struct UBodySetup : UObject {
	struct F*dfa9818601 *34fa0138fd; // 0x28(0x48)
	struct FName BoneName; // 0x70(0x08)
	enum class EPhysicsType PhysicsType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	char bAlwaysFullAnimWeight : 1; // 0x7c(0x01)
	char bConsiderForBounds : 1; // 0x7c(0x01)
	char *b43d60dac1 : 1; // 0x7c(0x01)
	char *5126408466 : 1; // 0x7c(0x01)
	char *7cbdb6590e : 1; // 0x7c(0x01)
	char *4b069f50d2 : 1; // 0x7c(0x01)
	char *2fb7d579ee : 1; // 0x7c(0x01)
	char pad_7C_7 : 1; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x80(0x08)
	enum class *693d8761ce CollisionReponse; // 0x88(0x01)
	enum class ECollisionTraceFlag *1a9a199bfd; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct FBodyInstance DefaultInstance; // 0x90(0x230)
	struct F*630cf25516 *630cf25516; // 0x2c0(0x10)
	float MinContactOffset; // 0x2d0(0x04)
	float BuildScale; // 0x2d4(0x04)
	struct FVector BuildScale3D; // 0x2d8(0x0c)
	char pad_2E4[0xbc]; // 0x2e4(0xbc)
};

// Class Engine.*3b1ba4cb43
// Size: 0x3d0 (Inherited: 0x3a0)
struct U*3b1ba4cb43 : UBodySetup {
	struct F*6f65868d79 *9295de1379; // 0x3a0(0x30)
};

// Class Engine.PhysicsAsset
// Size: 0x108 (Inherited: 0x28)
struct UPhysicsAsset : UObject {
	struct TArray<int32> *b06f066ef6; // 0x28(0x10)
	struct TArray<struct USkeletalBodySetup*> *f3a4bfe24b; // 0x38(0x10)
	struct TArray<struct UPhysicsConstraintTemplate*> *7d821b322e; // 0x48(0x10)
	char pad_58[0xa0]; // 0x58(0xa0)
	struct TArray<struct UBodySetup*> BodySetup; // 0xf8(0x10)
};

// Class Engine.SkeletalBodySetup
// Size: 0x3b0 (Inherited: 0x3a0)
struct USkeletalBodySetup : UBodySetup {
	struct TArray<struct F*f2c537b8d4> *ad43bd9124; // 0x3a0(0x10)
};

// Class Engine.*9fa62f96d8
// Size: 0x38 (Inherited: 0x28)
struct U*9fa62f96d8 : UObject {
	struct TArray<struct FInputBlendPose> *0324e0d5d2; // 0x28(0x10)
};

// Class Engine.*88ca9ca6c8
// Size: 0x50 (Inherited: 0x28)
struct U*88ca9ca6c8 : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	struct TArray<struct FString> *b7e22cbece; // 0x40(0x10)
};

// Class Engine.*e6119e9c65
// Size: 0x38 (Inherited: 0x28)
struct U*e6119e9c65 : UObject {
	float *cc5448d1db; // 0x28(0x04)
	struct FIntPoint Location; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.Breakpoint
// Size: 0x40 (Inherited: 0x28)
struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UEdGraphNode* Node; // 0x30(0x08)
	char *447b7642f0 : 1; // 0x38(0x01)
	char *102628e2b0 : 1; // 0x38(0x01)
	char *fd0c0d8324 : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.BrushBuilder
// Size: 0x80 (Inherited: 0x28)
struct UBrushBuilder : UObject {
	struct FString *84f4fcb7dd; // 0x28(0x10)
	struct FString Tooltip; // 0x38(0x10)
	char *d6c04e87a6 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FVector> Vertices; // 0x50(0x10)
	struct TArray<struct F*d250a414b5> Polys; // 0x60(0x10)
	struct FName Layer; // 0x70(0x08)
	char *64bc188263 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Engine.ButtonStyleAsset
// Size: 0x2d0 (Inherited: 0x28)
struct UButtonStyleAsset : UObject {
	struct F*9ec348ba05 *9ec348ba05; // 0x28(0x2a8)
};

// Class Engine.CameraAnim
// Size: 0x5e0 (Inherited: 0x28)
struct UCameraAnim : UObject {
	struct U*99f73124f9* *5c935b0e66; // 0x28(0x08)
	float AnimLength; // 0x30(0x04)
	struct FBox BoundingBox; // 0x34(0x1c)
	char *c984211485 : 1; // 0x50(0x01)
	char *ad067ca22e : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float *bd3b0c7f5b; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
	struct FPostProcessSettings *e50510ce0e; // 0x60(0x570)
	float *9b505b5abb; // 0x5d0(0x04)
	char pad_5D4[0xc]; // 0x5d4(0x0c)
};

// Class Engine.*6ec4247e64
// Size: 0x110 (Inherited: 0x28)
struct U*6ec4247e64 : UObject {
	struct UCameraAnim* *bf33ecf53e; // 0x28(0x08)
	struct U*a529baa140* *a529baa140; // 0x30(0x08)
	char pad_38[0x18]; // 0x38(0x18)
	float PlayRate; // 0x50(0x04)
	char pad_54[0x14]; // 0x54(0x14)
	struct U*1fbb4cc5f3* *1778a5d398; // 0x68(0x08)
	struct U*6783884ed9* *8b69c04a20; // 0x70(0x08)
	enum class ECameraAnimPlaySpace *821995bfad; // 0x78(0x01)
	char pad_79[0x97]; // 0x79(0x97)

	void SetScale(); // Function Engine.*6ec4247e64.SetScale // Final|Native|Public|BlueprintCallable // @ game+0x657de68
	void SetDuration(); // Function Engine.*6ec4247e64.SetDuration // Final|Native|Public|BlueprintCallable // @ game+0x657d660
	void Stop(); // Function Engine.*6ec4247e64.Stop // Final|Native|Public|BlueprintCallable // @ game+0x657ee18
};

// Class Engine.*6f88f7780c
// Size: 0x48 (Inherited: 0x28)
struct U*6f88f7780c : UObject {
	char *9b74ad7dce : 1; // 0x28(0x01)
	char bExclusive : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	bool Priority; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct APlayerCameraManager* CameraOwner; // 0x30(0x08)
	float AlphaInTime; // 0x38(0x04)
	float AlphaOutTime; // 0x3c(0x04)
	float Alpha; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	void BlueprintModifyPostProcess(float PostProcessBlendWeight); // Function Engine.*6f88f7780c.BlueprintModifyPostProcess // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	struct FRotator BlueprintModifyCamera(); // Function Engine.*6f88f7780c.BlueprintModifyCamera // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x293938
	void *869d9be173(); // Function Engine.*6f88f7780c.*869d9be173 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xd93ac8
	void *5b92d1558b(); // Function Engine.*6f88f7780c.*5b92d1558b // Native|Public|BlueprintCallable // @ game+0x6572708
	void *ae9c6d0e58(); // Function Engine.*6f88f7780c.*ae9c6d0e58 // Native|Public|BlueprintCallable // @ game+0x57eecc4
	void *af2be8c27b(); // Function Engine.*6f88f7780c.*af2be8c27b // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x656f97c
};

// Class Engine.*b78b10b0de
// Size: 0x60 (Inherited: 0x48)
struct U*b78b10b0de : U*6f88f7780c {
	struct TArray<struct UCameraShake*> *03d2542c6b; // 0x48(0x10)
	float *460d61e628; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.Canvas
// Size: 0x2f0 (Inherited: 0x28)
struct UCanvas : UObject {
	float OrgX; // 0x28(0x04)
	float OrgY; // 0x2c(0x04)
	float *a90091dbc8; // 0x30(0x04)
	float *92ca4a50d6; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	char *5a8d2af2af : 1; // 0x3c(0x01)
	char *44f2613678 : 1; // 0x3c(0x01)
	char *7b50e599f1 : 1; // 0x3c(0x01)
	char pad_3C_3 : 5; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32 SizeX; // 0x40(0x04)
	int32 SizeY; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
	struct FPlane *330b036489; // 0x50(0x10)
	struct UTexture2D* DefaultTexture; // 0x60(0x08)
	struct UTexture2D* GradientTexture0; // 0x68(0x08)
	struct U*0552b739a3* *0552b739a3; // 0x70(0x08)
	char pad_78[0x278]; // 0x78(0x278)

	void *fbfc7b485f(struct UTexture* RenderTexture, struct FVector2D ScreenSize, struct FVector2D CoordinateSize, enum class EBlendMode BlendMode); // Function Engine.Canvas.*fbfc7b485f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6578ef0
	struct FVector2D *2b5dc23540(struct UTexture* BottomBorderTexture, struct FVector2D ScreenSize, struct FVector2D CoordinateSize, struct FVector2D BorderScale); // Function Engine.Canvas.*2b5dc23540 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6577d8c
	struct FVector *0a8184e55e(); // Function Engine.Canvas.*0a8184e55e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6577c38
	void *d07c18cf3b(struct UMaterialInterface* RenderMaterial); // Function Engine.Canvas.*d07c18cf3b // Final|Native|Public|BlueprintCallable // @ game+0x65787c8
	struct FString *04f0c83110(); // Function Engine.Canvas.*04f0c83110 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6579de0
	struct UTexture* *6f2ed2a5f3(); // Function Engine.Canvas.*6f2ed2a5f3 // Final|Native|Public|BlueprintCallable // @ game+0x657920c
	void *54a32a3a9a(struct UTexture* RenderTexture, struct FVector2D Radius); // Function Engine.Canvas.*54a32a3a9a // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6578900
	float *cc3d1684e6(); // Function Engine.Canvas.*cc3d1684e6 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6578408
	void *4eda77cbfe(struct UFont* RenderFont, struct FVector2D Scale); // Function Engine.Canvas.*4eda77cbfe // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6579f0c
	struct FVector *e00e16c4c1(); // Function Engine.Canvas.*e00e16c4c1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6579ae4
	struct FVector2D *7c2e6c4683(); // Function Engine.Canvas.*7c2e6c4683 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65782e0
	bool *bb43fe716a(struct UFont* RenderFont, struct FVector2D ScreenPosition, float Kerning); // Function Engine.Canvas.*bb43fe716a // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6578acc
	void *536c9ba414(struct UMaterialInterface* RenderMaterial, struct FVector2D ScreenSize, struct FVector2D CoordinateSize); // Function Engine.Canvas.*536c9ba414 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x657855c
};

// Class Engine.*29e4e9c9f1
// Size: 0x80 (Inherited: 0x68)
struct U*29e4e9c9f1 : UChannel {
	char pad_68[0x18]; // 0x68(0x18)
};

// Class Engine.VoiceChannel
// Size: 0x78 (Inherited: 0x68)
struct UVoiceChannel : UChannel {
	char pad_68[0x10]; // 0x68(0x10)
};

// Class Engine.*f972acbcaf
// Size: 0x608 (Inherited: 0x28)
struct U*f972acbcaf : UObject {
	struct F*1a5b392735 *1a5b392735; // 0x28(0x5e0)
};

// Class Engine.Commandlet
// Size: 0x80 (Inherited: 0x28)
struct UCommandlet : UObject {
	struct FString HelpDescription; // 0x28(0x10)
	struct FString HelpUsage; // 0x38(0x10)
	struct FString HelpWebLink; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
	char pad_78_5 : 3; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Engine.*ecaf7d9876
// Size: 0xc8 (Inherited: 0x28)
struct U*ecaf7d9876 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UNetDriver* NetDriver; // 0x30(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x38(0x08)
	char pad_40[0x88]; // 0x40(0x88)
};

// Class Engine.GPCFakeEngine
// Size: 0xf60 (Inherited: 0xf60)
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

// Class Engine.*87fdeb50a6
// Size: 0x28 (Inherited: 0x28)
struct U*87fdeb50a6 : UInterface {
};

// Class Engine.*e9d5a49b26
// Size: 0x1f0 (Inherited: 0x30)
struct U*e9d5a49b26 : UCurveBase {
	struct FRichCurve *b4cff3aa9f[0x04]; // 0x30(0x1c0)

	float *1b3f8b152b(); // Function Engine.*e9d5a49b26.*1b3f8b152b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x657505c
};

// Class Engine.*226eb62c2c
// Size: 0x180 (Inherited: 0x30)
struct U*226eb62c2c : UCurveBase {
	struct FRichCurve *b4cff3aa9f[0x03]; // 0x30(0x150)

	void *3e2db8452b(); // Function Engine.*226eb62c2c.*3e2db8452b // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6576ec4
};

// Class Engine.CurveEdPresetCurve
// Size: 0x28 (Inherited: 0x28)
struct UCurveEdPresetCurve : UObject {
};

// Class Engine.*6d1afc3bce
// Size: 0x28 (Inherited: 0x28)
struct U*6d1afc3bce : UInterface {

	void GetCurves(); // Function Engine.*6d1afc3bce.GetCurves // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x65743a4
	struct FName GetCurveValue(); // Function Engine.*6d1afc3bce.GetCurveValue // Native|Event|Public|BlueprintEvent|Const // @ game+0x6574300
	void GetBindingName(); // Function Engine.*6d1afc3bce.GetBindingName // Native|Event|Public|BlueprintEvent|Const // @ game+0x57b9cc8
};

// Class Engine.CurveTable
// Size: 0x80 (Inherited: 0x28)
struct UCurveTable : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class Engine.PreviewMeshCollection
// Size: 0x48 (Inherited: 0x30)
struct UPreviewMeshCollection : UDataAsset {
	struct USkeleton* Skeleton; // 0x30(0x08)
	struct TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x38(0x10)
};

// Class Engine.PrimaryAssetLabel
// Size: 0x68 (Inherited: 0x30)
struct UPrimaryAssetLabel : U*36d6a6147d {
	struct F*3e99e8a95d Rules; // 0x30(0x10)
	char *bfd54fa0e9 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UObject*> *d0853848cd; // 0x48(0x10)
	struct TArray<struct UClass*> *ecfe4d1847; // 0x58(0x10)
};

// Class Engine.*6793628d35
// Size: 0x38 (Inherited: 0x30)
struct U*6793628d35 : UDataAsset {
	float *9af29b21eb; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*071a253c5e
// Size: 0xb8 (Inherited: 0x28)
struct U*071a253c5e : UObject {
	int32 *655d07f0df; // 0x28(0x04)
	struct F*9e38abbf1f *c77644c0cc; // 0x2c(0x24)
	int32 RandomSeed; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FVector> *3f57da4f47; // 0x58(0x10)
	int32 *e507583032; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	struct TArray<struct F*aa4a81beed> ChunkParameters; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
};

// Class Engine.AnimationSettings
// Size: 0x70 (Inherited: 0x38)
struct UAnimationSettings : U*6080c6b78b {
	int32 CompressCommandletVersion; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray; // 0x40(0x10)
	struct UClass* DefaultCompressionAlgorithm; // 0x50(0x08)
	enum class AnimationCompressionFormat RotationCompressionFormat; // 0x58(0x01)
	enum class AnimationCompressionFormat TranslationCompressionFormat; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float MaxCurveError; // 0x5c(0x04)
	float AlternativeCompressionThreshold; // 0x60(0x04)
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
struct UAssetManagerSettings : U*6080c6b78b {
	struct TArray<struct F*79e336aa6c> PrimaryAssetTypesToScan; // 0x38(0x10)
	struct TArray<struct FDirectoryPath> DirectoriesToExclude; // 0x48(0x10)
	struct TArray<struct F*417b31e39e> PrimaryAssetRules; // 0x58(0x10)
	bool bOnlyCookProductionAssets; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct F*ab84f486b1> PrimaryAssetIdRedirects; // 0x70(0x10)
	struct TArray<struct F*ab84f486b1> PrimaryAssetTypeRedirects; // 0x80(0x10)
	struct TArray<struct F*ab84f486b1> AssetPathRedirects; // 0x90(0x10)
};

// Class Engine.AudioSettings
// Size: 0xb0 (Inherited: 0x38)
struct UAudioSettings : U*6080c6b78b {
	struct FStringAssetReference DefaultSoundClassName; // 0x38(0x10)
	struct FStringAssetReference DefaultSoundConcurrencyName; // 0x48(0x10)
	struct FStringAssetReference DefaultBaseSoundMix; // 0x58(0x10)
	struct FStringAssetReference VoiPSoundClass; // 0x68(0x10)
	float LowPassFilterResonance; // 0x78(0x04)
	int32 MaximumConcurrentStreams; // 0x7c(0x04)
	struct TArray<struct F*24266ea0bd> QualityLevels; // 0x80(0x10)
	char bAllowVirtualizedSounds : 1; // 0x90(0x01)
	char bDisableMasterEQ : 1; // 0x90(0x01)
	char bDisableMasterReverb : 1; // 0x90(0x01)
	char bAllowCenterChannel3DPanning : 1; // 0x90(0x01)
	char pad_90_4 : 4; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString DialogueFilenameFormat; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Engine.ExcludedPackageSettings
// Size: 0x58 (Inherited: 0x38)
struct UExcludedPackageSettings : U*6080c6b78b {
	struct TArray<struct FString> CommonExcludedPackages; // 0x38(0x10)
	struct TArray<struct FString> MinSpecExcludedPackages; // 0x48(0x10)
};

// Class Engine.StreamingSettings
// Size: 0x70 (Inherited: 0x38)
struct UStreamingSettings : U*6080c6b78b {
	char AsyncLoadingThreadEnabled : 1; // 0x38(0x01)
	char WarnIfTimeLimitExceeded : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float TimeLimitExceededMultiplier; // 0x3c(0x04)
	float TimeLimitExceededMinTime; // 0x40(0x04)
	int32 MinBulkDataSizeForAsyncLoading; // 0x44(0x04)
	float AsyncIOBandwidthLimit; // 0x48(0x04)
	char UseBackgroundLevelStreaming : 1; // 0x4c(0x01)
	char AsyncLoadingUseFullTimeLimit : 1; // 0x4c(0x01)
	char LoadAllStreamingLevels : 1; // 0x4c(0x01)
	char pad_4C_3 : 5; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float AsyncLoadingTimeLimit; // 0x50(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x54(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x58(0x04)
	int32 LevelStreamingComponentsRegistrationGranularity; // 0x5c(0x04)
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x60(0x04)
	int32 LevelStreamingComponentsUnregistrationGranularity; // 0x64(0x04)
	char EventDrivenLoaderEnabled : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.GarbageCollectionSettings
// Size: 0x58 (Inherited: 0x38)
struct UGarbageCollectionSettings : U*6080c6b78b {
	float TimeBetweenPurgingPendingKillObjects; // 0x38(0x04)
	char FlushStreamingOnGC : 1; // 0x3c(0x01)
	char AllowParallelGC : 1; // 0x3c(0x01)
	char IncrementalBeginDestroyEnabled : 1; // 0x3c(0x01)
	char CreateGCClusters : 1; // 0x3c(0x01)
	char MergeGCClusters : 1; // 0x3c(0x01)
	char ActorClusteringEnabled : 1; // 0x3c(0x01)
	char BlueprintClusteringEnabled : 1; // 0x3c(0x01)
	char pad_3C_7 : 1; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32 NumRetriesBeforeForcingGC; // 0x40(0x04)
	int32 MaxObjectsNotConsideredByGC; // 0x44(0x04)
	int32 SizeOfPermanentObjectPool; // 0x48(0x04)
	int32 MaxObjectsInGame; // 0x4c(0x04)
	int32 MaxObjectsInEditor; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.MeshSimplificationSettings
// Size: 0x40 (Inherited: 0x38)
struct UMeshSimplificationSettings : U*6080c6b78b {
	struct FName MeshReductionModuleName; // 0x38(0x08)
};

// Class Engine.NetworkSettings
// Size: 0x48 (Inherited: 0x38)
struct UNetworkSettings : U*6080c6b78b {
	char bVerifyPeer : 1; // 0x38(0x01)
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 MaxRepArraySize; // 0x3c(0x04)
	int32 MaxRepArrayMemory; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.PhysicsSettings
// Size: 0xe8 (Inherited: 0x38)
struct UPhysicsSettings : U*6080c6b78b {
	float DefaultGravityZ; // 0x38(0x04)
	float DefaultTerminalVelocity; // 0x3c(0x04)
	float DefaultFluidFriction; // 0x40(0x04)
	int32 SimulateScratchMemorySize; // 0x44(0x04)
	int32 RagdollAggregateThreshold; // 0x48(0x04)
	float TriangleMeshTriangleMinAreaThreshold; // 0x4c(0x04)
	bool bEnableComplexForSim; // 0x50(0x01)
	bool bEnableComplexForSimOnDedicatedServer; // 0x51(0x01)
	bool bEnablePCM; // 0x52(0x01)
	bool bEnableStabilization; // 0x53(0x01)
	bool bWarnMissingLocks; // 0x54(0x01)
	bool bEnable2DPhysics; // 0x55(0x01)
	enum class ESettingsLockedAxis LockedAxis; // 0x56(0x01)
	enum class ESettingsDOF DefaultDegreesOfFreedom; // 0x57(0x01)
	float BounceThresholdVelocity; // 0x58(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x5c(0x01)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	float MaxAngularVelocity; // 0x60(0x04)
	float MaxDepenetrationVelocity; // 0x64(0x04)
	float ContactOffsetMultiplier; // 0x68(0x04)
	float MinContactOffset; // 0x6c(0x04)
	float MaxContactOffset; // 0x70(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x74(0x01)
	enum class ECollisionTraceFlag DefaultShapeComplexity; // 0x75(0x01)
	bool bDefaultHasComplexCollision; // 0x76(0x01)
	bool bSuppressFaceRemapTable; // 0x77(0x01)
	bool bSupportUVFromHitResults; // 0x78(0x01)
	bool bDisableActiveActors; // 0x79(0x01)
	bool bDisableCCD; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	float MaxPhysicsDeltaTime; // 0x7c(0x04)
	bool bSubstepping; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float MaxSubstepDeltaTime; // 0x84(0x04)
	int32 MaxSubsteps; // 0x88(0x04)
	float SyncSceneSmoothingFactor; // 0x8c(0x04)
	float InitialAverageFrameRate; // 0x90(0x04)
	float MaxPhysicsDeltaTimeOnDedicatedServer; // 0x94(0x04)
	bool bSubsteppingOnDedicatedServer; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float MaxSubstepDeltaTimeOnDedicatedServer; // 0x9c(0x04)
	int32 MaxSubstepsOnDedicatedServer; // 0xa0(0x04)
	float SyncSceneSmoothingFactorOnDedicatedServer; // 0xa4(0x04)
	float InitialAverageFrameRateOnDedicatedServer; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct F*19feba02a1> PhysicalSurfaces; // 0xb0(0x10)
	struct F*1029adc9f4 DefaultBroadphaseSettings; // 0xc0(0x28)
};

// Class Engine.RendererSettings
// Size: 0xc0 (Inherited: 0x38)
struct URendererSettings : U*6080c6b78b {
	char bMobileHDR : 1; // 0x38(0x01)
	char bMobileDisableVertexFog : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 MaxMobileCascades; // 0x3c(0x04)
	enum class EMobileMSAASampleCount MobileMSAASampleCount; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char bDiscardUnusedQualityLevels : 1; // 0x44(0x01)
	char bOcclusionCulling : 1; // 0x44(0x01)
	char pad_44_2 : 6; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float MinScreenRadiusForLights; // 0x48(0x04)
	float MinScreenRadiusForEarlyZPass; // 0x4c(0x04)
	float MinScreenRadiusForCSMdepth; // 0x50(0x04)
	char bPrecomputedVisibilityWarning : 1; // 0x54(0x01)
	char bTextureStreaming : 1; // 0x54(0x01)
	char bUseDXT5NormalMaps : 1; // 0x54(0x01)
	char bClearCoatEnableSecondNormal : 1; // 0x54(0x01)
	char pad_54_4 : 4; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 ReflectionCaptureResolution; // 0x58(0x04)
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
	float TessellationAdaptivePixelsPerTriangle; // 0x60(0x04)
	char bSeparateTranslucency : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	enum class *2c35a18f07 TranslucentSortPolicy; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FVector TranslucentSortAxis; // 0x6c(0x0c)
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
	enum class *db5c5fa16a DefaultFeatureAntiAliasing; // 0x88(0x01)
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
	float WireframeCullThreshold; // 0xa8(0x04)
	char bSupportStationarySkylight : 1; // 0xac(0x01)
	char bSupportLowQualityLightmaps : 1; // 0xac(0x01)
	char bSupportPointLightWholeSceneShadows : 1; // 0xac(0x01)
	char bSupportAtmosphericFog : 1; // 0xac(0x01)
	char bSupportSkinCacheShaders : 1; // 0xac(0x01)
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xac(0x01)
	char bMobileAllowDistanceFieldShadows : 1; // 0xac(0x01)
	char bMobileAllowMovableDirectionalLights : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	uint32 MobileNumDynamicPointLights; // 0xb0(0x04)
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float SkinCacheSceneMemoryLimitInMB; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.RendererOverrideSettings
// Size: 0x40 (Inherited: 0x38)
struct URendererOverrideSettings : U*6080c6b78b {
	char bSupportAllShaderPermutations : 1; // 0x38(0x01)
	char bForceRecomputeTangents : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.UserInterfaceSettings
// Size: 0x208 (Inherited: 0x38)
struct UUserInterfaceSettings : U*6080c6b78b {
	enum class ERenderFocusRule RenderFocusRule; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TMap<enum class EMouseCursor, struct F*645e9905ec> HardwareCursors; // 0x40(0x50)
	struct TMap<enum class EMouseCursor, struct FStringClassReference> SoftwareCursors; // 0x90(0x50)
	struct FStringClassReference DefaultCursor; // 0xe0(0x10)
	struct FStringClassReference TextEditBeamCursor; // 0xf0(0x10)
	struct FStringClassReference CrosshairsCursor; // 0x100(0x10)
	struct FStringClassReference HandCursor; // 0x110(0x10)
	struct FStringClassReference GrabHandCursor; // 0x120(0x10)
	struct FStringClassReference GrabHandClosedCursor; // 0x130(0x10)
	struct FStringClassReference SlashedCircleCursor; // 0x140(0x10)
	float ApplicationScale; // 0x150(0x04)
	enum class EUIScalingRule UIScaleRule; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct FStringClassReference CustomScalingRuleClass; // 0x158(0x10)
	struct FRuntimeFloatCurve UIScaleCurve; // 0x168(0x78)
	bool bLoadWidgetsOnDedicatedServer; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct TArray<struct UObject*> *25559eb0ac; // 0x1e8(0x10)
	struct UClass* *d6b9870839; // 0x1f8(0x08)
	struct UDPICustomScalingRule* *b514a97c69; // 0x200(0x08)
};

// Class Engine.DeviceProfileManager
// Size: 0x110 (Inherited: 0x28)
struct UDeviceProfileManager : UObject {
	struct TArray<struct UObject*> Profiles; // 0x28(0x10)
	char pad_38[0xd8]; // 0x38(0xd8)
};

// Class Engine.DialogueVoice
// Size: 0x40 (Inherited: 0x28)
struct UDialogueVoice : UObject {
	enum class EGrammaticalGender Gender; // 0x28(0x01)
	enum class EGrammaticalNumber Plurality; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FGuid *a98951e34c; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.DialogueWave
// Size: 0x70 (Inherited: 0x28)
struct UDialogueWave : UObject {
	char *d7b6c5060d : 1; // 0x28(0x01)
	char bOverride_SubtitleOverride : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString *2539764669; // 0x30(0x10)
	struct FString *ed9d2bebc8; // 0x40(0x10)
	struct TArray<struct F*6e85cf4538> ContextMappings; // 0x50(0x10)
	struct FGuid *a98951e34c; // 0x60(0x10)
};

// Class Engine.Distribution
// Size: 0x30 (Inherited: 0x28)
struct UDistribution : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Engine.*fcaa61cf2b
// Size: 0x38 (Inherited: 0x30)
struct U*fcaa61cf2b : UDistribution {
	char *1096c2720b : 1; // 0x30(0x01)
	char pad_30_1 : 1; // 0x30(0x01)
	char *b7397f3395 : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*0b4bedb714
// Size: 0x40 (Inherited: 0x38)
struct U*0b4bedb714 : U*fcaa61cf2b {
	float Constant; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*2983def7b7
// Size: 0x60 (Inherited: 0x40)
struct U*2983def7b7 : U*0b4bedb714 {
	struct FName ParameterName; // 0x40(0x08)
	float *1ef064120c; // 0x48(0x04)
	float *3f75091bfb; // 0x4c(0x04)
	float *47841f1952; // 0x50(0x04)
	float *8e725862de; // 0x54(0x04)
	enum class *88cda74aac *c236a8c772; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.DistributionFloatParticleParameter
// Size: 0x60 (Inherited: 0x60)
struct UDistributionFloatParticleParameter : U*2983def7b7 {
};

// Class Engine.*d47cde08e3
// Size: 0x50 (Inherited: 0x38)
struct U*d47cde08e3 : U*fcaa61cf2b {
	struct FInterpCurveFloat *298d540164; // 0x38(0x18)
};

// Class Engine.*63ba547474
// Size: 0x40 (Inherited: 0x38)
struct U*63ba547474 : U*fcaa61cf2b {
	float Min; // 0x38(0x04)
	float Max; // 0x3c(0x04)
};

// Class Engine.*6af5484961
// Size: 0x50 (Inherited: 0x38)
struct U*6af5484961 : U*fcaa61cf2b {
	struct FInterpCurveVector2D *298d540164; // 0x38(0x18)
};

// Class Engine.*176547bb0f
// Size: 0x38 (Inherited: 0x30)
struct U*176547bb0f : UDistribution {
	char *1096c2720b : 1; // 0x30(0x01)
	char *022702c199 : 1; // 0x30(0x01)
	char *b7397f3395 : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*ab14590e39
// Size: 0x50 (Inherited: 0x38)
struct U*ab14590e39 : U*176547bb0f {
	struct FVector Constant; // 0x38(0x0c)
	char *610fd9bc5d : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	enum class *e7555019dc *6a959ba7e0; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*618e0a1c12
// Size: 0x90 (Inherited: 0x50)
struct U*618e0a1c12 : U*ab14590e39 {
	struct FName ParameterName; // 0x50(0x08)
	struct FVector *1ef064120c; // 0x58(0x0c)
	struct FVector *3f75091bfb; // 0x64(0x0c)
	struct FVector *47841f1952; // 0x70(0x0c)
	struct FVector *8e725862de; // 0x7c(0x0c)
	enum class *88cda74aac *f56750e918[0x03]; // 0x88(0x03)
	char pad_8B[0x5]; // 0x8b(0x05)
};

// Class Engine.DistributionVectorParticleParameter
// Size: 0x90 (Inherited: 0x90)
struct UDistributionVectorParticleParameter : U*618e0a1c12 {
};

// Class Engine.*f8584ab7b4
// Size: 0x58 (Inherited: 0x38)
struct U*f8584ab7b4 : U*176547bb0f {
	struct FInterpCurveVector *298d540164; // 0x38(0x18)
	char *610fd9bc5d : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class *e7555019dc *6a959ba7e0; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.*baee7f4f0c
// Size: 0x60 (Inherited: 0x38)
struct U*baee7f4f0c : U*176547bb0f {
	struct FVector Max; // 0x38(0x0c)
	struct FVector Min; // 0x44(0x0c)
	char *610fd9bc5d : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class *e7555019dc *6a959ba7e0; // 0x54(0x01)
	enum class *255c62f6c6 *efc80b6063[0x03]; // 0x55(0x03)
	char *ec63f25675 : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.*223e567e35
// Size: 0x60 (Inherited: 0x38)
struct U*223e567e35 : U*176547bb0f {
	struct FInterpCurveTwoVectors *298d540164; // 0x38(0x18)
	char *ee5da82ebc : 1; // 0x50(0x01)
	char *e5cee91233 : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class *e7555019dc *6a959ba7e0[0x02]; // 0x54(0x02)
	enum class *255c62f6c6 *efc80b6063[0x03]; // 0x56(0x03)
	char pad_59[0x3]; // 0x59(0x03)
	char *ec63f25675 : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.DPICustomScalingRule
// Size: 0x28 (Inherited: 0x28)
struct UDPICustomScalingRule : UObject {
};

// Class Engine.*f9ce876360
// Size: 0x28 (Inherited: 0x28)
struct U*f9ce876360 : UObject {
};

// Class Engine.*4d8baeb195
// Size: 0x38 (Inherited: 0x28)
struct U*4d8baeb195 : U*f9ce876360 {
	struct TArray<struct F*909945f8fd> *d20f58e44d; // 0x28(0x10)
};

// Class Engine.*a6c109a6e0
// Size: 0x28 (Inherited: 0x28)
struct U*a6c109a6e0 : U*f9ce876360 {
};

// Class Engine.*1508701350
// Size: 0x38 (Inherited: 0x28)
struct U*1508701350 : U*a6c109a6e0 {
	struct TArray<struct F*0d1876079b> *97f80ef580; // 0x28(0x10)
};

// Class Engine.*5549d3f356
// Size: 0x38 (Inherited: 0x28)
struct U*5549d3f356 : U*a6c109a6e0 {
	struct TArray<struct F*a5a8f44d14> *f1c7fc6e03; // 0x28(0x10)
};

// Class Engine.*75bbb539cd
// Size: 0x38 (Inherited: 0x28)
struct U*75bbb539cd : U*a6c109a6e0 {
	struct TArray<struct F*e1404b9042> *070b45eb0e; // 0x28(0x10)
};

// Class Engine.*4b1dcc6b1a
// Size: 0x38 (Inherited: 0x38)
struct U*4b1dcc6b1a : U*75bbb539cd {
};

// Class Engine.*91937fc9a0
// Size: 0x38 (Inherited: 0x28)
struct U*91937fc9a0 : U*a6c109a6e0 {
	struct TArray<struct F*9acfcacdbf> *006ccc40b0; // 0x28(0x10)
};

// Class Engine.*b9048777d4
// Size: 0x38 (Inherited: 0x28)
struct U*b9048777d4 : U*a6c109a6e0 {
	struct TArray<struct F*3af646faf7> *1f7a5b060e; // 0x28(0x10)
};

// Class Engine.EdGraph
// Size: 0xc0 (Inherited: 0x28)
struct UEdGraph : UObject {
	struct UClass* Schema; // 0x28(0x08)
	struct TArray<struct UEdGraphNode*> Nodes; // 0x30(0x10)
	char *2ed624afab : 1; // 0x40(0x01)
	char *af920d6617 : 1; // 0x40(0x01)
	char *e8bb5c7d9d : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x7f]; // 0x41(0x7f)
};

// Class Engine.*40ec36f97e
// Size: 0xc0 (Inherited: 0xa0)
struct U*40ec36f97e : UEdGraphNode {
	struct FString Link; // 0xa0(0x10)
	struct FString Excerpt; // 0xb0(0x10)
};

// Class Engine.*e3ed5def50
// Size: 0x28 (Inherited: 0x28)
struct U*e3ed5def50 : UObject {
};

// Class Engine.*aeb44d0989
// Size: 0x28 (Inherited: 0x28)
struct U*aeb44d0989 : UInterface {
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
struct UEngineHandlerComponentFactory : U*8da8a44e5c {
};

// Class Engine.*72f30c12f8
// Size: 0x68 (Inherited: 0x28)
struct U*72f30c12f8 : UObject {
	struct UClass* *990f581958; // 0x28(0x08)
	struct UObject* *3ea8903a8c; // 0x30(0x08)
	struct TArray<struct FString> *4ce60c7de8; // 0x38(0x10)
	struct TArray<struct FString> *56220c0c50; // 0x48(0x10)
	int32 *0e9a7f0a04; // 0x58(0x04)
	int32 *dbac5d3e2f; // 0x5c(0x04)
	char *9bfb0de68e : 1; // 0x60(0x01)
	char *fb6103b6e4 : 1; // 0x60(0x01)
	char *7a315a7986 : 1; // 0x60(0x01)
	char pad_60_3 : 5; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*8592375e36
// Size: 0x50 (Inherited: 0x28)
struct U*8592375e36 : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class Engine.*061be9f726
// Size: 0x50 (Inherited: 0x28)
struct U*061be9f726 : U*5c0419d42f {
	struct TArray<struct FVector2D> Points; // 0x28(0x10)
	struct TArray<struct F*f121636d03> Instances; // 0x38(0x10)
	struct U*8592375e36* Manager; // 0x48(0x08)
};

// Class Engine.*3fd8b4f1a4
// Size: 0xd8 (Inherited: 0x28)
struct U*3fd8b4f1a4 : UObject {
	struct F*4a57608e62 Data; // 0x28(0xb0)
};

// Class Engine.Font
// Size: 0x1c0 (Inherited: 0x28)
struct UFont : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EFontCacheType *0a8f352300; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*9d041ee9a6> Characters; // 0x38(0x10)
	struct TArray<struct UTexture2D*> Textures; // 0x48(0x10)
	int32 *27fb0d61ec; // 0x58(0x04)
	float *d9c0beafca; // 0x5c(0x04)
	float Ascent; // 0x60(0x04)
	float Descent; // 0x64(0x04)
	float Leading; // 0x68(0x04)
	int32 Kerning; // 0x6c(0x04)
	struct F*4a57608e62 ImportOptions; // 0x70(0xb0)
	int32 *2daa3d00e1; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<int32> *9f800a77c8; // 0x128(0x10)
	float *daf445f51e; // 0x138(0x04)
	int32 *792149c59d; // 0x13c(0x04)
	struct FName *30fcd8e5ae; // 0x140(0x08)
	struct F*734aded0ea *734aded0ea; // 0x148(0x28)
	char pad_170[0x50]; // 0x170(0x50)
};

// Class Engine.FontFace
// Size: 0x58 (Inherited: 0x28)
struct UFontFace : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString SourceFilename; // 0x30(0x10)
	enum class EFontHinting Hinting; // 0x40(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x41(0x01)
	enum class EFontLoadingPolicy LoadingPolicyConsole; // 0x42(0x01)
	enum class EFontLayoutMethod LayoutMethod; // 0x43(0x01)
	char pad_44[0x14]; // 0x44(0x14)
};

// Class Engine.*f1b0840319
// Size: 0x28 (Inherited: 0x28)
struct U*f1b0840319 : UObject {
};

// Class Engine.HapticFeedbackEffect_Buffer
// Size: 0x68 (Inherited: 0x28)
struct UHapticFeedbackEffect_Buffer : U*f1b0840319 {
	struct TArray<bool> *670a8855cf; // 0x28(0x10)
	int32 SampleRate; // 0x38(0x04)
	char pad_3C[0x2c]; // 0x3c(0x2c)
};

// Class Engine.HapticFeedbackEffect_Curve
// Size: 0x118 (Inherited: 0x28)
struct UHapticFeedbackEffect_Curve : U*f1b0840319 {
	struct FHapticFeedbackDetails_Curve HapticDetails; // 0x28(0xf0)
};

// Class Engine.HapticFeedbackEffect_SoundWave
// Size: 0x60 (Inherited: 0x28)
struct UHapticFeedbackEffect_SoundWave : U*f1b0840319 {
	struct USoundWave* SoundWave; // 0x28(0x08)
	char pad_30[0x30]; // 0x30(0x30)
};

// Class Engine.InheritableComponentHandler
// Size: 0x48 (Inherited: 0x28)
struct UInheritableComponentHandler : UObject {
	struct TArray<struct F*edc1520719> Records; // 0x28(0x10)
	struct TArray<struct UActorComponent*> *6b2a09fa18; // 0x38(0x10)
};

// Class Engine.InputSettings
// Size: 0xa8 (Inherited: 0x28)
struct UInputSettings : UObject {
	struct TArray<struct FInputAxisConfigEntry> AxisConfig; // 0x28(0x10)
	char bAltEnterTogglesFullscreen : 1; // 0x38(0x01)
	char bF11TogglesFullscreen : 1; // 0x38(0x01)
	char bUseMouseForTouch : 1; // 0x38(0x01)
	char bEnableMouseSmoothing : 1; // 0x38(0x01)
	char bEnableFOVScaling : 1; // 0x38(0x01)
	char pad_38_5 : 3; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float FOVScale; // 0x3c(0x04)
	float DoubleClickTime; // 0x40(0x04)
	bool bCaptureMouseOnLaunch; // 0x44(0x01)
	enum class EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x45(0x01)
	bool bDefaultViewportMouseLock; // 0x46(0x01)
	enum class EMouseLockMode DefaultViewportMouseLockMode; // 0x47(0x01)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x48(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0x58(0x10)
	bool bAlwaysShowTouchInterface; // 0x68(0x01)
	bool bShowConsoleOnFourFingerTap; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct FStringAssetReference DefaultTouchInterface; // 0x70(0x10)
	struct FKey ConsoleKey; // 0x80(0x18)
	struct TArray<struct FKey> ConsoleKeys; // 0x98(0x10)
};

// Class Engine.InterpCurveEdSetup
// Size: 0x40 (Inherited: 0x28)
struct UInterpCurveEdSetup : UObject {
	struct TArray<struct F*5468d61b6d> Tabs; // 0x28(0x10)
	int32 *de00861785; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.InterpData
// Size: 0x70 (Inherited: 0x28)
struct UInterpData : UObject {
	float InterpLength; // 0x28(0x04)
	float *7f359ecdc5; // 0x2c(0x04)
	struct TArray<struct U*99f73124f9*> *db2493ad4b; // 0x30(0x10)
	struct UInterpCurveEdSetup* *452adc132e; // 0x40(0x08)
	float *684dfbc7a5; // 0x48(0x04)
	float *cc5a99a255; // 0x4c(0x04)
	char *20a6e91b0b : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct U*e3f5fc90a2* *e0e27e1158; // 0x58(0x08)
	struct TArray<struct FName> *d527dd425d; // 0x60(0x10)
};

// Class Engine.*b24c7a7e11
// Size: 0x38 (Inherited: 0x28)
struct U*b24c7a7e11 : UObject {
	struct FString Caption; // 0x28(0x10)
};

// Class Engine.*128f95adc8
// Size: 0x38 (Inherited: 0x38)
struct U*128f95adc8 : U*b24c7a7e11 {
};

// Class Engine.*6dde9d468b
// Size: 0x38 (Inherited: 0x38)
struct U*6dde9d468b : U*b24c7a7e11 {
};

// Class Engine.*99f73124f9
// Size: 0x50 (Inherited: 0x28)
struct U*99f73124f9 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct U*1a291a585f*> *24a30c243a; // 0x30(0x10)
	struct FName GroupName; // 0x40(0x08)
	struct FColor *2661b5e4a1; // 0x48(0x04)
	char *90211ea547 : 1; // 0x4c(0x01)
	char bVisible : 1; // 0x4c(0x01)
	char *0880fe818e : 1; // 0x4c(0x01)
	char *5241c35222 : 1; // 0x4c(0x01)
	char *4aea640751 : 1; // 0x4c(0x01)
	char pad_4C_5 : 3; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.*fa224a6eb4
// Size: 0x60 (Inherited: 0x50)
struct U*fa224a6eb4 : U*99f73124f9 {
	struct UCameraAnim* *6ec4247e64; // 0x50(0x08)
	float *d935b89311; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.*e3f5fc90a2
// Size: 0x50 (Inherited: 0x50)
struct U*e3f5fc90a2 : U*99f73124f9 {
};

// Class Engine.*a529baa140
// Size: 0x48 (Inherited: 0x28)
struct U*a529baa140 : UObject {
	struct U*99f73124f9* Group; // 0x28(0x08)
	struct AActor* GroupActor; // 0x30(0x08)
	struct TArray<struct U*b141bba8ca*> *77a33935a2; // 0x38(0x10)
};

// Class Engine.*815a025b7e
// Size: 0x48 (Inherited: 0x48)
struct U*815a025b7e : U*a529baa140 {
};

// Class Engine.*65530de923
// Size: 0x48 (Inherited: 0x48)
struct U*65530de923 : U*a529baa140 {
};

// Class Engine.*1a291a585f
// Size: 0x70 (Inherited: 0x28)
struct U*1a291a585f : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct U*1a291a585f*> *17991d157e; // 0x38(0x10)
	struct UClass* *5900c398b1; // 0x48(0x08)
	enum class *a9f8f0e913 *1b2306d5cd; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString TrackTitle; // 0x58(0x10)
	char *4131904285 : 1; // 0x68(0x01)
	char *0e45cd9725 : 1; // 0x68(0x01)
	char *dd45f573be : 1; // 0x68(0x01)
	char *4aea640751 : 1; // 0x68(0x01)
	char *6eaa5eb32e : 1; // 0x68(0x01)
	char *84348772ff : 1; // 0x68(0x01)
	char bVisible : 1; // 0x68(0x01)
	char *7eaa11ad48 : 1; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*03bc0e9127
// Size: 0x88 (Inherited: 0x70)
struct U*03bc0e9127 : U*1a291a585f {
	struct TArray<struct F*3e18cb2726> *99d7b85f26; // 0x70(0x10)
	struct FName PropertyName; // 0x80(0x08)
};

// Class Engine.*fb71f9c81a
// Size: 0x88 (Inherited: 0x70)
struct U*fb71f9c81a : U*1a291a585f {
	struct TArray<struct F*34a9fba3e1> *1b51d4bfb6; // 0x70(0x10)
	char *5fc9541203 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*f405a1abe1
// Size: 0x88 (Inherited: 0x70)
struct U*f405a1abe1 : U*1a291a585f {
	struct TArray<struct F*4020cdf762> *1c10968550; // 0x70(0x10)
	char *d81418be8a : 1; // 0x80(0x01)
	char *4be71478c3 : 1; // 0x80(0x01)
	char *cadb1538b1 : 1; // 0x80(0x01)
	char *270343a22b : 1; // 0x80(0x01)
	char pad_80_4 : 4; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*d4649cbb86
// Size: 0x90 (Inherited: 0x70)
struct U*d4649cbb86 : U*1a291a585f {
	struct FInterpCurveFloat *8c8132565b; // 0x70(0x18)
	float *9f40d31ae2; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*bce4026739
// Size: 0xb0 (Inherited: 0x90)
struct U*bce4026739 : U*d4649cbb86 {
	struct FName SlotName; // 0x90(0x08)
	struct TArray<struct F*fe7256c39c> *fbcc7fb05d; // 0x98(0x10)
	char *051604688e : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.*e3b7c2db85
// Size: 0xa8 (Inherited: 0x90)
struct U*e3b7c2db85 : U*d4649cbb86 {
	char *4a38b004d7 : 1; // 0x90(0x01)
	char *7160127719 : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FLinearColor *83572fc8a0; // 0x94(0x10)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*b0fc10d914
// Size: 0xb0 (Inherited: 0x90)
struct U*b0fc10d914 : U*d4649cbb86 {
	struct UAnimBlueprintGeneratedClass* *692deb50b4; // 0x90(0x08)
	struct UClass* *ab89f4cd5d; // 0x98(0x08)
	struct FName ParamName; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Engine.*f01ea0c52f
// Size: 0xa8 (Inherited: 0x90)
struct U*f01ea0c52f : U*d4649cbb86 {
	struct TArray<struct UMaterialInterface*> *2d80c27721; // 0x90(0x10)
	struct FName ParamName; // 0xa0(0x08)
};

// Class Engine.*7f8d07d058
// Size: 0x98 (Inherited: 0x90)
struct U*7f8d07d058 : U*d4649cbb86 {
	struct FName ParamName; // 0x90(0x08)
};

// Class Engine.*a0f77bf5a8
// Size: 0x98 (Inherited: 0x90)
struct U*a0f77bf5a8 : U*d4649cbb86 {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.*1fbb4cc5f3
// Size: 0xc8 (Inherited: 0x70)
struct U*1fbb4cc5f3 : U*1a291a585f {
	struct FInterpCurveVector *55715d7a9f; // 0x70(0x18)
	struct FInterpCurveVector *59a998d415; // 0x88(0x18)
	struct F*e265809578 *5ef77a4565; // 0xa0(0x10)
	struct FName *d494f24dc9; // 0xb0(0x08)
	float *611bfe9260; // 0xb8(0x04)
	float *0239f018d0; // 0xbc(0x04)
	char *b84502a419 : 1; // 0xc0(0x01)
	char *75c04acf9f : 1; // 0xc0(0x01)
	char *307c07cc6e : 1; // 0xc0(0x01)
	char *6725c214d0 : 1; // 0xc0(0x01)
	char *f43317471b : 1; // 0xc0(0x01)
	char *0a54a850fb : 1; // 0xc0(0x01)
	char pad_C0_6 : 2; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	enum class *5b91717ac4 *b39f126107; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// Class Engine.*2fb52e2aaa
// Size: 0xa8 (Inherited: 0x90)
struct U*2fb52e2aaa : U*d4649cbb86 {
	enum class *23c576004a *09dee34ed4; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct F*e265809578 *5ef77a4565; // 0x98(0x10)
};

// Class Engine.*786fb15202
// Size: 0x90 (Inherited: 0x90)
struct U*786fb15202 : U*d4649cbb86 {
};

// Class Engine.*8a4c350ee7
// Size: 0x90 (Inherited: 0x70)
struct U*8a4c350ee7 : U*1a291a585f {
	struct FInterpCurveLinearColor *a27e0434b0; // 0x70(0x18)
	float *9f40d31ae2; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*491c46331a
// Size: 0x98 (Inherited: 0x90)
struct U*491c46331a : U*8a4c350ee7 {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.*09ff32c010
// Size: 0x80 (Inherited: 0x70)
struct U*09ff32c010 : U*1a291a585f {
	struct TArray<struct F*9da80dbf2a> *2bcf17f6a7; // 0x70(0x10)
};

// Class Engine.*476519d180
// Size: 0x88 (Inherited: 0x70)
struct U*476519d180 : U*1a291a585f {
	struct TArray<struct F*0e7f2854bf> *050e957de8; // 0x70(0x10)
	char *5bb5db9be6 : 1; // 0x80(0x01)
	char *96a31d7b6c : 1; // 0x80(0x01)
	char *d81418be8a : 1; // 0x80(0x01)
	char *4be71478c3 : 1; // 0x80(0x01)
	char *cadb1538b1 : 1; // 0x80(0x01)
	char pad_80_5 : 3; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*db7d1fa87f
// Size: 0x90 (Inherited: 0x70)
struct U*db7d1fa87f : U*1a291a585f {
	struct FInterpCurveVector *fb9ba79b41; // 0x70(0x18)
	float *9f40d31ae2; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*e2d109bae6
// Size: 0x90 (Inherited: 0x90)
struct U*e2d109bae6 : U*db7d1fa87f {
};

// Class Engine.*1239c5c626
// Size: 0x98 (Inherited: 0x90)
struct U*1239c5c626 : U*db7d1fa87f {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.*17d44fc492
// Size: 0x90 (Inherited: 0x90)
struct U*17d44fc492 : U*db7d1fa87f {
};

// Class Engine.*53d8957600
// Size: 0xa8 (Inherited: 0x90)
struct U*53d8957600 : U*db7d1fa87f {
	struct TArray<struct F*e7bc68dde1> Sounds; // 0x90(0x10)
	char *473d9de069 : 1; // 0xa0(0x01)
	char *93203d7095 : 1; // 0xa0(0x01)
	char *9de8ddd796 : 1; // 0xa0(0x01)
	char *8120561d4e : 1; // 0xa0(0x01)
	char *761a902a0e : 1; // 0xa0(0x01)
	char pad_A0_5 : 3; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.*2e0a46ecfd
// Size: 0xa8 (Inherited: 0x90)
struct U*2e0a46ecfd : U*db7d1fa87f {
	struct TArray<struct UMaterialInterface*> *2d80c27721; // 0x90(0x10)
	struct FName ParamName; // 0xa0(0x08)
};

// Class Engine.*f647a11a27
// Size: 0x98 (Inherited: 0x90)
struct U*f647a11a27 : U*db7d1fa87f {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.*de2745ef7e
// Size: 0x88 (Inherited: 0x70)
struct U*de2745ef7e : U*1a291a585f {
	struct TArray<struct F*9bd246f1b3> *c69701e363; // 0x70(0x10)
	char *d81418be8a : 1; // 0x80(0x01)
	char *4be71478c3 : 1; // 0x80(0x01)
	char *cadb1538b1 : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*b141bba8ca
// Size: 0x28 (Inherited: 0x28)
struct U*b141bba8ca : UObject {
};

// Class Engine.*3092f89b13
// Size: 0x30 (Inherited: 0x28)
struct U*3092f89b13 : U*b141bba8ca {
	float *ef07ca8261; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*67acc1da4e
// Size: 0x28 (Inherited: 0x28)
struct U*67acc1da4e : U*b141bba8ca {
};

// Class Engine.*d94a270728
// Size: 0x28 (Inherited: 0x28)
struct U*d94a270728 : U*b141bba8ca {
};

// Class Engine.*e3e1c98a8e
// Size: 0x30 (Inherited: 0x28)
struct U*e3e1c98a8e : U*b141bba8ca {
	struct AActor* *4452914a09; // 0x28(0x08)
};

// Class Engine.*f234413eb8
// Size: 0x30 (Inherited: 0x28)
struct U*f234413eb8 : U*b141bba8ca {
	float *ef07ca8261; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*0cec1efbb9
// Size: 0x28 (Inherited: 0x28)
struct U*0cec1efbb9 : U*b141bba8ca {
};

// Class Engine.*f42d58eb3e
// Size: 0x40 (Inherited: 0x28)
struct U*f42d58eb3e : U*b141bba8ca {
	struct UAnimInstance* AnimScriptInstance; // 0x28(0x08)
	float *ffcdba9a1b; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// Class Engine.*9c062a32d4
// Size: 0x60 (Inherited: 0x28)
struct U*9c062a32d4 : U*b141bba8ca {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x28(0x10)
	struct TArray<float> *4548d6baa0; // 0x38(0x10)
	struct TArray<struct F*329809ddd5> *a0affd42b7; // 0x48(0x10)
	struct U*f01ea0c52f* *0c62accd53; // 0x58(0x08)
};

// Class Engine.*3afbfbaeb5
// Size: 0x30 (Inherited: 0x28)
struct U*3afbfbaeb5 : U*b141bba8ca {
	float *ffcdba9a1b; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*6783884ed9
// Size: 0x40 (Inherited: 0x28)
struct U*6783884ed9 : U*b141bba8ca {
	struct FVector ResetLocation; // 0x28(0x0c)
	struct FRotator ResetRotation; // 0x34(0x0c)
};

// Class Engine.*a8c89283a6
// Size: 0x30 (Inherited: 0x28)
struct U*a8c89283a6 : U*b141bba8ca {
	float *ef07ca8261; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*1efe0d2cc0
// Size: 0x38 (Inherited: 0x28)
struct U*1efe0d2cc0 : U*b141bba8ca {
	struct UProperty* *bc6c0229a2; // 0x28(0x08)
	struct UObject* *d5e0894de2; // 0x30(0x08)
};

// Class Engine.*df21bea36b
// Size: 0x50 (Inherited: 0x38)
struct U*df21bea36b : U*1efe0d2cc0 {
	char pad_38[0x8]; // 0x38(0x08)
	struct UBoolProperty* BoolProperty; // 0x40(0x08)
	bool *92208278c5; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*306aa84c59
// Size: 0x48 (Inherited: 0x38)
struct U*306aa84c59 : U*1efe0d2cc0 {
	char pad_38[0x8]; // 0x38(0x08)
	struct FColor *102b3bfa7e; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*865e5f1f13
// Size: 0x48 (Inherited: 0x38)
struct U*865e5f1f13 : U*1efe0d2cc0 {
	char pad_38[0x8]; // 0x38(0x08)
	float *ffcdba9a1b; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*12df881e13
// Size: 0x50 (Inherited: 0x38)
struct U*12df881e13 : U*1efe0d2cc0 {
	char pad_38[0x8]; // 0x38(0x08)
	struct FLinearColor *102b3bfa7e; // 0x40(0x10)
};

// Class Engine.*2f2fa3ef17
// Size: 0x50 (Inherited: 0x38)
struct U*2f2fa3ef17 : U*1efe0d2cc0 {
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector *ca95af2a45; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*61f496272a
// Size: 0x30 (Inherited: 0x28)
struct U*61f496272a : U*b141bba8ca {
	float *a29b613974; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*fc9a6a1489
// Size: 0x38 (Inherited: 0x28)
struct U*fc9a6a1489 : U*b141bba8ca {
	float *ef07ca8261; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UAudioComponent* *55247f2d9d; // 0x30(0x08)
};

// Class Engine.*0bd5d45e7a
// Size: 0x38 (Inherited: 0x28)
struct U*0bd5d45e7a : U*b141bba8ca {
	enum class *917b9095d7 Action; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *ef07ca8261; // 0x2c(0x04)
	char *07cd87a738 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*d17d527829
// Size: 0x60 (Inherited: 0x28)
struct U*d17d527829 : U*b141bba8ca {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x28(0x10)
	struct TArray<struct FVector> *aeef64fcfe; // 0x38(0x10)
	struct TArray<struct F*329809ddd5> *a0affd42b7; // 0x48(0x10)
	struct U*2e0a46ecfd* *0c62accd53; // 0x58(0x08)
};

// Class Engine.*e6d4b22439
// Size: 0x30 (Inherited: 0x28)
struct U*e6d4b22439 : U*b141bba8ca {
	enum class *31ba50c4e5 Action; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *ef07ca8261; // 0x2c(0x04)
};

// Class Engine.*ba2529509d
// Size: 0x50 (Inherited: 0x28)
struct U*ba2529509d : UObject {
	uint16 *fd8257f52e; // 0x28(0x02)
	char pad_2A[0x2]; // 0x2a(0x02)
	uint32 *d04733717e; // 0x2c(0x04)
	uint64 *fcd144c036; // 0x30(0x08)
	int8 *15c24e721a; // 0x38(0x01)
	char pad_39[0x1]; // 0x39(0x01)
	int16 *aeb324ac27; // 0x3a(0x02)
	char pad_3C[0x4]; // 0x3c(0x04)
	int64 *e858b16fd1; // 0x40(0x08)
	bool *d5a61ce83f; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32 *4dda290d7b; // 0x4c(0x04)
};

// Class Engine.*e208bd34a5
// Size: 0x48 (Inherited: 0x28)
struct U*e208bd34a5 : U*5c0419d42f {
	struct TArray<struct U*46f04a6cbe*> *7353f46b69; // 0x28(0x10)
	struct TArray<struct F*cb9dfe0e61> Instances; // 0x38(0x10)
};

// Class Engine.*46f04a6cbe
// Size: 0x1c0 (Inherited: 0x28)
struct U*46f04a6cbe : UObject {
	struct UWorld* World; // 0x28(0x08)
	struct ALandscape* Landscape; // 0x30(0x1c)
	struct FGuid *a377647193; // 0x4c(0x10)
	struct FIntRect *fbc376aa9f; // 0x5c(0x10)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct F*cb9dfe0e61 *2142e3efe1; // 0x70(0x110)
	struct UMaterialInterface* LandscapeMaterial; // 0x180(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x188(0x08)
	uint32 *18db001a0e; // 0x190(0x04)
	int32 *b442b33d80; // 0x194(0x04)
	struct TArray<struct F*4fee740a0d> *1f3b7254ae; // 0x198(0x10)
	struct TArray<struct F*5434d42aca> *63af69bb12; // 0x1a8(0x10)
	char pad_1B8[0x8]; // 0x1b8(0x08)
};

// Class Engine.Layer
// Size: 0x48 (Inherited: 0x28)
struct ULayer : UObject {
	struct FName LayerName; // 0x28(0x08)
	char bIsVisible : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*35bc27a1ad> ActorStats; // 0x38(0x10)
};

// Class Engine.*9a60b08820
// Size: 0x38 (Inherited: 0x28)
struct U*9a60b08820 : UObject {
	struct TArray<struct AActor*> Actors; // 0x28(0x10)
};

// Class Engine.*90403d78e0
// Size: 0x58 (Inherited: 0x28)
struct U*90403d78e0 : U*5c0419d42f {
	struct TArray<struct F*b599cdcf27> Variants; // 0x28(0x10)
	struct TArray<struct FTransform> Instances; // 0x38(0x10)
	struct TArray<struct F*7f46301700> *2143b74984; // 0x48(0x10)
};

// Class Engine.*29081ac376
// Size: 0x38 (Inherited: 0x28)
struct U*29081ac376 : U*5c0419d42f {
	struct TArray<struct F*f9829fc50c> Instances; // 0x28(0x10)
};

// Class Engine.*135f003e37
// Size: 0x48 (Inherited: 0x28)
struct U*135f003e37 : U*5c0419d42f {
	struct TArray<struct F*98941f2132> *2ac073f24c; // 0x28(0x10)
	struct TArray<struct F*569d99ab87> Instances; // 0x38(0x10)
};

// Class Engine.TextureRenderTarget
// Size: 0x180 (Inherited: 0x170)
struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0x170(0x04)
	char pad_174[0xc]; // 0x174(0x0c)
};

// Class Engine.TextureRenderTarget2D
// Size: 0x1a0 (Inherited: 0x180)
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32 SizeX; // 0x178(0x04)
	int32 SizeY; // 0x17c(0x04)
	struct FLinearColor ClearColor; // 0x180(0x10)
	enum class *5476cf1861 AddressX; // 0x190(0x01)
	enum class *5476cf1861 AddressY; // 0x191(0x01)
	char *e2bee928f1 : 1; // 0x194(0x01)
	char *4651b226b4 : 1; // 0x194(0x01)
	char bHDR : 1; // 0x194(0x01)
	char bGPUSharedFlag : 1; // 0x194(0x01)
	char bAutoGenerateMips : 1; // 0x194(0x01)
	enum class EPixelFormat *6d32a03066; // 0x198(0x01)
	char pad_19B_5 : 3; // 0x19b(0x01)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// Class Engine.*b35a006697
// Size: 0x98 (Inherited: 0x28)
struct U*b35a006697 : UObject {
	char pad_28[0x30]; // 0x28(0x30)
	struct UTexture2D* *b221ca0b8f; // 0x58(0x08)
	struct UTextureRenderTarget2D* *3e485c3916; // 0x60(0x08)
	struct TArray<struct F*50b968a31c> *1b365a9b8e; // 0x68(0x10)
	struct TArray<struct F*48225470ba> *8e4fa54523; // 0x78(0x10)
	struct TArray<struct UObject*> *433effbc27; // 0x88(0x10)
};

// Class Engine.*8113ebd596
// Size: 0x50 (Inherited: 0x28)
struct U*8113ebd596 : U*5c0419d42f {
	struct TArray<struct F*50b968a31c> *52fe60f1e5; // 0x28(0x10)
	struct TArray<struct F*48225470ba> *48e4e4b23e; // 0x38(0x10)
	struct U*b35a006697* Manager; // 0x48(0x08)
};

// Class Engine.*94de0f985f
// Size: 0x60 (Inherited: 0x28)
struct U*94de0f985f : U*5c0419d42f {
	char pad_28[0x38]; // 0x28(0x38)
};

// Class Engine.*2acc9e8b50
// Size: 0x58 (Inherited: 0x28)
struct U*2acc9e8b50 : U*5c0419d42f {
	struct TArray<struct F*61cb1379d8> Variants; // 0x28(0x10)
	struct TArray<struct FTransform> Instances; // 0x38(0x10)
	struct TArray<struct F*7f46301700> *2143b74984; // 0x48(0x10)
};

// Class Engine.*666b774e78
// Size: 0x38 (Inherited: 0x28)
struct U*666b774e78 : U*5c0419d42f {
	struct TArray<struct F*7f46301700> *2143b74984; // 0x28(0x10)
};

// Class Engine.*4aca5788a6
// Size: 0x58 (Inherited: 0x28)
struct U*4aca5788a6 : U*5c0419d42f {
	struct TArray<struct F*58e8763394> Variants; // 0x28(0x10)
	struct TArray<struct F*f07a8332b0> Instances; // 0x38(0x10)
	struct TArray<struct F*7f46301700> *2143b74984; // 0x48(0x10)
};

// Class Engine.LevelStreaming
// Size: 0x190 (Inherited: 0x28)
struct ULevelStreaming : UObject {
	struct FName PackageName; // 0x28(0x08)
	struct UWorld* WorldAsset; // 0x30(0x20)
	char pad_50[0x10]; // 0x50(0x10)
	struct FName *8bdf538610; // 0x60(0x08)
	struct TArray<struct FName> *618589c28f; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
	char bLocked : 1; // 0x88(0x01)
	char pad_88_1 : 2; // 0x88(0x01)
	char *9447b7bf47 : 1; // 0x88(0x01)
	char bShouldBeLoaded : 1; // 0x88(0x01)
	char bShouldBeVisible : 1; // 0x88(0x01)
	char bShouldBlockOnLoad : 1; // 0x88(0x01)
	char pad_88_7 : 1; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32 LevelLODIndex; // 0x8c(0x04)
	char pad_90[0x4]; // 0x90(0x04)
	struct FColor DrawColor; // 0x94(0x04)
	struct FLinearColor LevelColor; // 0x98(0x10)
	char pad_A8[0x10]; // 0xa8(0x10)
	struct ULevel* *f60a1b1079; // 0xb8(0x08)
	struct ULevel* *c6cfd89482; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct ALevelStreamingVolume*> *393b757024; // 0xd0(0x10)
	float *bdd8c2bea2; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FMulticastDelegate OnLevelLoaded; // 0xe8(0x10)
	struct FMulticastDelegate OnLevelUnloaded; // 0xf8(0x10)
	struct FMulticastDelegate OnLevelShown; // 0x108(0x10)
	struct FMulticastDelegate OnLevelHidden; // 0x118(0x10)
	struct TArray<struct FString> Keywords; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
	struct FTransform LevelTransform; // 0x140(0x30)
	char pad_170[0x14]; // 0x170(0x14)
	char *ea3a6cd2d2 : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x7]; // 0x185(0x07)
	char bDisableDistanceStreaming : 1; // 0x18c(0x01)
	char *751501ffb1 : 1; // 0x18c(0x01)
	char pad_18C_2 : 6; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)

	void *155c092538(); // Function Engine.LevelStreaming.*155c092538 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6577990
	void *c079229146(); // Function Engine.LevelStreaming.*c079229146 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65774c4
	void *eaeb531a11(); // Function Engine.LevelStreaming.*eaeb531a11 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65774e0
	struct FString CreateInstance(); // Function Engine.LevelStreaming.CreateInstance // Final|Native|Public|BlueprintCallable // @ game+0x6572000
	void *9a0b8fccfd(); // Function Engine.LevelStreaming.*9a0b8fccfd // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6575034
};

// Class Engine.LevelStreamingAlwaysLoaded
// Size: 0x190 (Inherited: 0x190)
struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
};

// Class Engine.LevelStreamingKismet
// Size: 0x1a0 (Inherited: 0x190)
struct ULevelStreamingKismet : ULevelStreaming {
	char *b2470f0d10 : 1; // 0x190(0x01)
	char *07428eedd5 : 1; // 0x190(0x01)
	char pad_190_2 : 6; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)

	struct UObject* *422ef99665(struct FString LevelName, struct FRotator Rotation); // Function Engine.LevelStreamingKismet.*422ef99665 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x657a654
};

// Class Engine.*f514e8a499
// Size: 0x190 (Inherited: 0x190)
struct U*f514e8a499 : ULevelStreaming {
};

// Class Engine.*e45068a6fd
// Size: 0x40 (Inherited: 0x28)
struct U*e45068a6fd : UObject {
	struct UModel* *fa2a30c0a8; // 0x28(0x08)
	struct TArray<int32> Surfaces; // 0x30(0x10)
};

// Class Engine.*2ab367f109
// Size: 0x40 (Inherited: 0x28)
struct U*2ab367f109 : UObject {
	struct F*886b75ca22 LightmassSettings; // 0x28(0x18)
};

// Class Engine.*dbdb110ba6
// Size: 0x28 (Inherited: 0x28)
struct U*dbdb110ba6 : UObject {
};

// Class Engine.*5475b537e5
// Size: 0xa8 (Inherited: 0x28)
struct U*5475b537e5 : U*dbdb110ba6 {
	struct FString *327fb3ac97; // 0x28(0x10)
	struct FString *c70de52aec; // 0x38(0x10)
	struct FString *21d803691f; // 0x48(0x10)
	struct FString *b48f42a9bb; // 0x58(0x10)
	struct FString *79dd322781; // 0x68(0x10)
	struct FString *bcfb39e158; // 0x78(0x10)
	struct FString *c1f7bad507; // 0x88(0x10)
	struct FString *ee38a80a99; // 0x98(0x10)
};

// Class Engine.MapBuildDataRegistry
// Size: 0x120 (Inherited: 0x28)
struct UMapBuildDataRegistry : UObject {
	enum class *cd738af426 *77b4d5182b; // 0x28(0x01)
	char pad_29[0xf7]; // 0x29(0xf7)
};

// Class Engine.*40b2d0994e
// Size: 0x98 (Inherited: 0x60)
struct U*40b2d0994e : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*174fb8c653
// Size: 0x60 (Inherited: 0x60)
struct U*174fb8c653 : UMaterialExpression {
};

// Class Engine.MaterialExpressionAdd
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionAdd : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *01c129a4c4; // 0xd0(0x04)
	float *b29b1706bf; // 0xd4(0x04)
};

// Class Engine.*ab597dcec9
// Size: 0xd0 (Inherited: 0x60)
struct U*ab597dcec9 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
};

// Class Engine.*9361695f68
// Size: 0x98 (Inherited: 0x60)
struct U*9361695f68 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*62ba58d037
// Size: 0x98 (Inherited: 0x60)
struct U*62ba58d037 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*2098dbfb19
// Size: 0x98 (Inherited: 0x60)
struct U*2098dbfb19 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*249d795c37
// Size: 0x98 (Inherited: 0x60)
struct U*249d795c37 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*5dd6af48de
// Size: 0x98 (Inherited: 0x60)
struct U*5dd6af48de : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*1c7fa3fc17
// Size: 0xd0 (Inherited: 0x60)
struct U*1c7fa3fc17 : UMaterialExpression {
	struct FExpressionInput Y; // 0x60(0x38)
	struct FExpressionInput X; // 0x98(0x38)
};

// Class Engine.*1315640825
// Size: 0xd0 (Inherited: 0x60)
struct U*1315640825 : UMaterialExpression {
	struct FExpressionInput Y; // 0x60(0x38)
	struct FExpressionInput X; // 0x98(0x38)
};

// Class Engine.*75761015d9
// Size: 0x98 (Inherited: 0x60)
struct U*75761015d9 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*71d773364a
// Size: 0x98 (Inherited: 0x60)
struct U*71d773364a : UMaterialExpression {
	struct FExpressionInput WorldPosition; // 0x60(0x38)
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
	struct FExpressionInput Temp; // 0x60(0x38)
};

// Class Engine.*5cd0d027f4
// Size: 0x120 (Inherited: 0x60)
struct U*5cd0d027f4 : UMaterialExpression {
	struct FMaterialAttributesInput A; // 0x60(0x40)
	struct FMaterialAttributesInput B; // 0xa0(0x40)
	struct FExpressionInput Alpha; // 0xe0(0x38)
	enum class EMaterialAttributeBlend *9a761583e1; // 0x118(0x01)
	enum class EMaterialAttributeBlend *3e8cc2df5e; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
};

// Class Engine.*d6a07ec31f
// Size: 0xa0 (Inherited: 0x60)
struct U*d6a07ec31f : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x60(0x40)
};

// Class Engine.MaterialExpressionBumpOffset
// Size: 0x118 (Inherited: 0x60)
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x60(0x38)
	struct FExpressionInput Height; // 0x98(0x38)
	struct FExpressionInput HeightRatioInput; // 0xd0(0x38)
	float *db63090438; // 0x108(0x04)
	float *98411467a1; // 0x10c(0x04)
	uint32 *2c3844493a; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class Engine.*3f5f2c7207
// Size: 0x60 (Inherited: 0x60)
struct U*3f5f2c7207 : UMaterialExpression {
};

// Class Engine.*a4ee7f1011
// Size: 0x60 (Inherited: 0x60)
struct U*a4ee7f1011 : UMaterialExpression {
};

// Class Engine.*faf9712ca6
// Size: 0x98 (Inherited: 0x60)
struct U*faf9712ca6 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*26fee2df75
// Size: 0x118 (Inherited: 0x60)
struct U*26fee2df75 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	struct FExpressionInput Min; // 0x98(0x38)
	struct FExpressionInput Max; // 0xd0(0x38)
	enum class *ac18ce742b *8ecbb7740f; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float *b0210e3cf3; // 0x10c(0x04)
	float *7a86f0ef41; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class Engine.*c2d0069b23
// Size: 0x80 (Inherited: 0x60)
struct U*c2d0069b23 : UMaterialExpression {
	struct UMaterialParameterCollection* Collection; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	struct FGuid *566e3a6cf5; // 0x70(0x10)
};

// Class Engine.*1c51c122d9
// Size: 0x88 (Inherited: 0x60)
struct U*1c51c122d9 : UMaterialExpression {
	int32 SizeX; // 0x60(0x04)
	int32 SizeY; // 0x64(0x04)
	struct FString Text; // 0x68(0x10)
	struct FLinearColor *de34b6b019; // 0x78(0x10)
};

// Class Engine.*84fc536af6
// Size: 0xa0 (Inherited: 0x60)
struct U*84fc536af6 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
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
	float R; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.MaterialExpressionConstant2Vector
// Size: 0x68 (Inherited: 0x60)
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x60(0x04)
	float G; // 0x64(0x04)
};

// Class Engine.MaterialExpressionConstant3Vector
// Size: 0x70 (Inherited: 0x60)
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x60(0x10)
};

// Class Engine.MaterialExpressionConstant4Vector
// Size: 0x70 (Inherited: 0x60)
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x60(0x10)
};

// Class Engine.*ece1706ceb
// Size: 0xa0 (Inherited: 0x60)
struct U*ece1706ceb : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	float Bias; // 0x98(0x04)
	float Scale; // 0x9c(0x04)
};

// Class Engine.*ccadc20710
// Size: 0xa0 (Inherited: 0x60)
struct U*ccadc20710 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	float Period; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*d6fbfee7c0
// Size: 0xd0 (Inherited: 0x60)
struct U*d6fbfee7c0 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
};

// Class Engine.*b7e1534087
// Size: 0x98 (Inherited: 0x60)
struct U*b7e1534087 : UMaterialExpression {
	struct FString Code; // 0x60(0x10)
	enum class *358eea2714 OutputType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString Description; // 0x78(0x10)
	struct TArray<struct F*739e357436> Inputs; // 0x88(0x10)
};

// Class Engine.*058da384ba
// Size: 0x98 (Inherited: 0x60)
struct U*058da384ba : U*f8e25a8f91 {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*638234755f
// Size: 0x98 (Inherited: 0x60)
struct U*638234755f : U*f8e25a8f91 {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*c485e71eea
// Size: 0xa8 (Inherited: 0x60)
struct U*c485e71eea : U*f8e25a8f91 {
	struct FExpressionInput Input; // 0x60(0x38)
	char pad_98[0x10]; // 0x98(0x10)
};

// Class Engine.*10ea54a7fd
// Size: 0x98 (Inherited: 0x60)
struct U*10ea54a7fd : UMaterialExpression {
	struct FExpressionInput Value; // 0x60(0x38)
};

// Class Engine.*3d97a94cf2
// Size: 0x98 (Inherited: 0x60)
struct U*3d97a94cf2 : UMaterialExpression {
	struct FExpressionInput Value; // 0x60(0x38)
};

// Class Engine.*c31ad78b6f
// Size: 0x60 (Inherited: 0x60)
struct U*c31ad78b6f : UMaterialExpression {
};

// Class Engine.*fa9d036206
// Size: 0x60 (Inherited: 0x60)
struct U*fa9d036206 : UMaterialExpression {
};

// Class Engine.*bebfab5c45
// Size: 0xa0 (Inherited: 0x60)
struct U*bebfab5c45 : UMaterialExpression {
	struct FExpressionInput TextureSize; // 0x60(0x38)
	float *fb4a837991; // 0x98(0x04)
	float *d19f4a3620; // 0x9c(0x04)
};

// Class Engine.*6dbdf362c9
// Size: 0xd8 (Inherited: 0x60)
struct U*6dbdf362c9 : UMaterialExpression {
	struct FExpressionInput InOpacity; // 0x60(0x38)
	struct FExpressionInput FadeDistance; // 0x98(0x38)
	float *ebc75e5902; // 0xd0(0x04)
	float *f3e997278c; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// Size: 0xa0 (Inherited: 0x60)
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	enum class *06c9c8edbb *15a7718158; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput Depth; // 0x68(0x38)
};

// Class Engine.*7ef5bc197a
// Size: 0x98 (Inherited: 0x60)
struct U*7ef5bc197a : UMaterialExpression {
	struct FExpressionInput *3fd2a6b024; // 0x60(0x38)
};

// Class Engine.*ddaf064a9a
// Size: 0xe0 (Inherited: 0x60)
struct U*ddaf064a9a : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	struct FExpressionInput Fraction; // 0x98(0x38)
	struct FLinearColor *8f34751c95; // 0xd0(0x10)
};

// Class Engine.*dcc04ccd68
// Size: 0xd0 (Inherited: 0x60)
struct U*dcc04ccd68 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
};

// Class Engine.*10f47ba8a4
// Size: 0x60 (Inherited: 0x60)
struct U*10f47ba8a4 : UMaterialExpression {
};

// Class Engine.*9d5a570815
// Size: 0x98 (Inherited: 0x60)
struct U*9d5a570815 : UMaterialExpression {
	struct FExpressionInput Position; // 0x60(0x38)
};

// Class Engine.*d11f3b7ec3
// Size: 0x98 (Inherited: 0x60)
struct U*d11f3b7ec3 : UMaterialExpression {
	struct FExpressionInput Position; // 0x60(0x38)
};

// Class Engine.MaterialExpressionDivide
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionDivide : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *01c129a4c4; // 0xd0(0x04)
	float *b29b1706bf; // 0xd4(0x04)
};

// Class Engine.*37ba9aff3b
// Size: 0xd0 (Inherited: 0x60)
struct U*37ba9aff3b : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
};

// Class Engine.*605dd07ff8
// Size: 0x80 (Inherited: 0x60)
struct U*605dd07ff8 : UMaterialExpression {
	struct TArray<struct FString> ParamNames; // 0x60(0x10)
	struct FLinearColor DefaultValue; // 0x70(0x10)
};

// Class Engine.*d865f309ad
// Size: 0x60 (Inherited: 0x60)
struct U*d865f309ad : UMaterialExpression {
};

// Class Engine.*c749fd0fa6
// Size: 0x178 (Inherited: 0x60)
struct U*c749fd0fa6 : UMaterialExpression {
	struct FExpressionInput Default; // 0x60(0x38)
	struct FExpressionInput Inputs[0x04]; // 0x98(0xe0)
};

// Class Engine.*10861c1d78
// Size: 0x98 (Inherited: 0x60)
struct U*10861c1d78 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*ba0341d3c3
// Size: 0xd0 (Inherited: 0x60)
struct U*ba0341d3c3 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
};

// Class Engine.*bff5373bcc
// Size: 0x70 (Inherited: 0x60)
struct U*bff5373bcc : UMaterialExpression {
	struct UFont* Font; // 0x60(0x08)
	int32 *4f76b7cf75; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.*7bed04b397
// Size: 0x90 (Inherited: 0x70)
struct U*7bed04b397 : U*bff5373bcc {
	struct FName ParameterName; // 0x70(0x08)
	struct FGuid *4dd4dd7063; // 0x78(0x10)
	struct FName Group; // 0x88(0x08)
};

// Class Engine.*06fb535db7
// Size: 0x98 (Inherited: 0x60)
struct U*06fb535db7 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*1438533e6d
// Size: 0x118 (Inherited: 0x60)
struct U*1438533e6d : UMaterialExpression {
	struct FExpressionInput ExponentIn; // 0x60(0x38)
	float Exponent; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FExpressionInput BaseReflectFractionIn; // 0xa0(0x38)
	float *2baf164ca4; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FExpressionInput Normal; // 0xe0(0x38)
};

// Class Engine.*b0510e25a9
// Size: 0x130 (Inherited: 0x60)
struct U*b0510e25a9 : UMaterialExpression {
	struct FExpressionInput Preview; // 0x60(0x38)
	struct FString InputName; // 0x98(0x10)
	struct FString Description; // 0xa8(0x10)
	struct FGuid ID; // 0xb8(0x10)
	enum class *c59a512548 InputType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FVector4 *af3907e433; // 0xd0(0x10)
	char *db7137fe63 : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32 *dc82871d92; // 0xe4(0x04)
	char *d8f08fcbea : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x47]; // 0xe9(0x47)
};

// Class Engine.*9123894fc1
// Size: 0xd8 (Inherited: 0x60)
struct U*9123894fc1 : UMaterialExpression {
	struct FString OutputName; // 0x60(0x10)
	struct FString Description; // 0x70(0x10)
	int32 *dc82871d92; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FExpressionInput A; // 0x88(0x38)
	char *d2b9a715bf : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FGuid ID; // 0xc4(0x10)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionGetMaterialAttributes
// Size: 0xb0 (Inherited: 0x60)
struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x60(0x40)
	struct TArray<struct FGuid> *eea3f9b2d0; // 0xa0(0x10)
};

// Class Engine.*3847297379
// Size: 0x108 (Inherited: 0x60)
struct U*3847297379 : UMaterialExpression {
	struct FExpressionInput Default; // 0x60(0x38)
	struct FExpressionInput *66c0cf039b; // 0x98(0x38)
	struct FExpressionInput *f1940f9261; // 0xd0(0x38)
};

// Class Engine.MaterialExpressionIf
// Size: 0x188 (Inherited: 0x60)
struct UMaterialExpressionIf : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	struct FExpressionInput AGreaterThanB; // 0xd0(0x38)
	struct FExpressionInput AEqualsB; // 0x108(0x38)
	struct FExpressionInput ALessThanB; // 0x140(0x38)
	float *f9868ce78b; // 0x178(0x04)
	float *b29b1706bf; // 0x17c(0x04)
	float ConstAEqualsB; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// Class Engine.*9c6994eb35
// Size: 0x60 (Inherited: 0x60)
struct U*9c6994eb35 : UMaterialExpression {
};

// Class Engine.*c427467ea1
// Size: 0xd0 (Inherited: 0x60)
struct U*c427467ea1 : UMaterialExpression {
	struct FExpressionInput RealTime; // 0x60(0x38)
	struct FExpressionInput Lightmass; // 0x98(0x38)
};

// Class Engine.*5365cb2252
// Size: 0x60 (Inherited: 0x60)
struct U*5365cb2252 : UMaterialExpression {
};

// Class Engine.MaterialExpressionLinearInterpolate
// Size: 0x118 (Inherited: 0x60)
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	struct FExpressionInput Alpha; // 0xd0(0x38)
	float *01c129a4c4; // 0x108(0x04)
	float *b29b1706bf; // 0x10c(0x04)
	float *70da288fb2; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class Engine.*b58060fce9
// Size: 0x98 (Inherited: 0x60)
struct U*b58060fce9 : UMaterialExpression {
	struct FExpressionInput X; // 0x60(0x38)
};

// Class Engine.*363c446d6b
// Size: 0x648 (Inherited: 0x60)
struct U*363c446d6b : UMaterialExpression {
	struct FExpressionInput BaseColor; // 0x60(0x38)
	struct FExpressionInput Metallic; // 0x98(0x38)
	struct FExpressionInput Specular; // 0xd0(0x38)
	struct FExpressionInput Roughness; // 0x108(0x38)
	struct FExpressionInput EmissiveColor; // 0x140(0x38)
	struct FExpressionInput Opacity; // 0x178(0x38)
	struct FExpressionInput OpacityMask; // 0x1b0(0x38)
	struct FExpressionInput Normal; // 0x1e8(0x38)
	struct FExpressionInput WorldPositionOffset; // 0x220(0x38)
	struct FExpressionInput WorldDisplacement; // 0x258(0x38)
	struct FExpressionInput TessellationMultiplier; // 0x290(0x38)
	struct FExpressionInput SubsurfaceColor; // 0x2c8(0x38)
	struct FExpressionInput ClearCoat; // 0x300(0x38)
	struct FExpressionInput ClearCoatRoughness; // 0x338(0x38)
	struct FExpressionInput AmbientOcclusion; // 0x370(0x38)
	struct FExpressionInput Refraction; // 0x3a8(0x38)
	struct FExpressionInput *92bda0749b[0x08]; // 0x3e0(0x1c0)
	struct FExpressionInput PixelDepthOffset; // 0x5a0(0x38)
	struct FExpressionInput Temperature; // 0x5d8(0x38)
	struct FExpressionInput TemperatureAlpha; // 0x610(0x38)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
// Size: 0x88 (Inherited: 0x60)
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	struct UMaterialFunction* MaterialFunction; // 0x60(0x08)
	struct TArray<struct F*6eeac18253> *9374df19e2; // 0x68(0x10)
	struct TArray<struct F*05fd31b745> *74c3f0b65a; // 0x78(0x10)
};

// Class Engine.*190f909da6
// Size: 0xd0 (Inherited: 0x60)
struct U*190f909da6 : UMaterialExpression {
	struct FExpressionInput RealTime; // 0x60(0x38)
	struct FExpressionInput *26300f71c3; // 0x98(0x38)
};

// Class Engine.*acc86a9ec6
// Size: 0xd8 (Inherited: 0x60)
struct U*acc86a9ec6 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *01c129a4c4; // 0xd0(0x04)
	float *b29b1706bf; // 0xd4(0x04)
};

// Class Engine.*b9f1cc471c
// Size: 0xd8 (Inherited: 0x60)
struct U*b9f1cc471c : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *01c129a4c4; // 0xd0(0x04)
	float *b29b1706bf; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionMultiply
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionMultiply : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *01c129a4c4; // 0xd0(0x04)
	float *b29b1706bf; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionNoise
// Size: 0xf8 (Inherited: 0x60)
struct UMaterialExpressionNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x60(0x38)
	struct FExpressionInput *daf677c743; // 0x98(0x38)
	float Scale; // 0xd0(0x04)
	int32 Quality; // 0xd4(0x04)
	enum class ENoiseFunction *c7cc0eb9f9; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	char *b0c4efbaa7 : 1; // 0xdc(0x01)
	char pad_DC_1 : 7; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	int32 Levels; // 0xe0(0x04)
	float *94ffced196; // 0xe4(0x04)
	float *60833bcd6d; // 0xe8(0x04)
	float *a7f248132e; // 0xec(0x04)
	char *f0f16b9f38 : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	uint32 RepeatSize; // 0xf4(0x04)
};

// Class Engine.MaterialExpressionNormalize
// Size: 0x98 (Inherited: 0x60)
struct UMaterialExpressionNormalize : UMaterialExpression {
	struct FExpressionInput *1b6df34c23; // 0x60(0x38)
};

// Class Engine.*0082aa08c7
// Size: 0x60 (Inherited: 0x60)
struct U*0082aa08c7 : UMaterialExpression {
};

// Class Engine.*4f44b8d6cb
// Size: 0x60 (Inherited: 0x60)
struct U*4f44b8d6cb : UMaterialExpression {
};

// Class Engine.*7fc5dd9b64
// Size: 0x68 (Inherited: 0x60)
struct U*7fc5dd9b64 : UMaterialExpression {
	enum class *2c4fe4aa9e *7b751bd9d7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*05f2bc60e7
// Size: 0x60 (Inherited: 0x60)
struct U*05f2bc60e7 : UMaterialExpression {
};

// Class Engine.MaterialExpressionOneMinus
// Size: 0x98 (Inherited: 0x60)
struct UMaterialExpressionOneMinus : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.MaterialExpressionPanner
// Size: 0x118 (Inherited: 0x60)
struct UMaterialExpressionPanner : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x60(0x38)
	struct FExpressionInput Time; // 0x98(0x38)
	struct FExpressionInput Speed; // 0xd0(0x38)
	float *11a8459e24; // 0x108(0x04)
	float *675ee485f4; // 0x10c(0x04)
	uint32 *2c3844493a; // 0x110(0x04)
	bool *3dfdb535b7; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
};

// Class Engine.*5b114fa151
// Size: 0x80 (Inherited: 0x60)
struct U*5b114fa151 : UMaterialExpression {
	struct FName ParameterName; // 0x60(0x08)
	struct FGuid *4dd4dd7063; // 0x68(0x10)
	struct FName Group; // 0x78(0x08)
};

// Class Engine.MaterialExpressionScalarParameter
// Size: 0x90 (Inherited: 0x80)
struct UMaterialExpressionScalarParameter : U*5b114fa151 {
	float DefaultValue; // 0x80(0x04)
	float SliderMin; // 0x84(0x04)
	float SliderMax; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*00e9bf53d4
// Size: 0x88 (Inherited: 0x80)
struct U*00e9bf53d4 : U*5b114fa151 {
	char DefaultValue : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*d41459e1f1
// Size: 0xf8 (Inherited: 0x88)
struct U*d41459e1f1 : U*00e9bf53d4 {
	struct FExpressionInput A; // 0x88(0x38)
	struct FExpressionInput B; // 0xc0(0x38)
};

// Class Engine.*087facff0b
// Size: 0xc0 (Inherited: 0x80)
struct U*087facff0b : U*5b114fa151 {
	struct FExpressionInput Input; // 0x80(0x38)
	char *3ffb89ba06 : 1; // 0xb8(0x01)
	char *f7231de603 : 1; // 0xb8(0x01)
	char *acc82eb96c : 1; // 0xb8(0x01)
	char *12bf70d1bc : 1; // 0xb8(0x01)
	char pad_B8_4 : 4; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.MaterialExpressionVectorParameter
// Size: 0x90 (Inherited: 0x80)
struct UMaterialExpressionVectorParameter : U*5b114fa151 {
	struct FLinearColor DefaultValue; // 0x80(0x10)
};

// Class Engine.*165b21a446
// Size: 0x60 (Inherited: 0x60)
struct U*165b21a446 : UMaterialExpression {
};

// Class Engine.*0d75b4098b
// Size: 0x68 (Inherited: 0x60)
struct U*0d75b4098b : UMaterialExpression {
	struct U*e4deae045e* Layer; // 0x60(0x08)
};

// Class Engine.*e606e7af30
// Size: 0x60 (Inherited: 0x60)
struct U*e606e7af30 : UMaterialExpression {
};

// Class Engine.*8876ada6aa
// Size: 0x60 (Inherited: 0x60)
struct U*8876ada6aa : UMaterialExpression {
};

// Class Engine.*e9791c1109
// Size: 0x60 (Inherited: 0x60)
struct U*e9791c1109 : UMaterialExpression {
};

// Class Engine.*744d536a35
// Size: 0x60 (Inherited: 0x60)
struct U*744d536a35 : UMaterialExpression {
};

// Class Engine.*6eb97cd49a
// Size: 0x60 (Inherited: 0x60)
struct U*6eb97cd49a : UMaterialExpression {
};

// Class Engine.*aa007e488e
// Size: 0x60 (Inherited: 0x60)
struct U*aa007e488e : UMaterialExpression {
};

// Class Engine.*8de2b0ff8c
// Size: 0x60 (Inherited: 0x60)
struct U*8de2b0ff8c : UMaterialExpression {
};

// Class Engine.*61f18d450d
// Size: 0x60 (Inherited: 0x60)
struct U*61f18d450d : UMaterialExpression {
};

// Class Engine.*015d1926b1
// Size: 0x60 (Inherited: 0x60)
struct U*015d1926b1 : UMaterialExpression {
};

// Class Engine.*688214e993
// Size: 0x60 (Inherited: 0x60)
struct U*688214e993 : UMaterialExpression {
};

// Class Engine.*cc187b914e
// Size: 0x60 (Inherited: 0x60)
struct U*cc187b914e : UMaterialExpression {
};

// Class Engine.*3483773f94
// Size: 0x60 (Inherited: 0x60)
struct U*3483773f94 : UMaterialExpression {
};

// Class Engine.*b2a63bce95
// Size: 0x60 (Inherited: 0x60)
struct U*b2a63bce95 : UMaterialExpression {
};

// Class Engine.*554918462c
// Size: 0x60 (Inherited: 0x60)
struct U*554918462c : UMaterialExpression {
};

// Class Engine.MaterialExpressionPower
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionPower : UMaterialExpression {
	struct FExpressionInput Base; // 0x60(0x38)
	struct FExpressionInput Exponent; // 0x98(0x38)
	float *788493a1b6; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class Engine.*4c5d633663
// Size: 0x60 (Inherited: 0x60)
struct U*4c5d633663 : UMaterialExpression {
};

// Class Engine.*4fcdbcfaa5
// Size: 0x60 (Inherited: 0x60)
struct U*4fcdbcfaa5 : UMaterialExpression {
};

// Class Engine.*8f3adbbef4
// Size: 0x60 (Inherited: 0x60)
struct U*8f3adbbef4 : UMaterialExpression {
};

// Class Engine.*85a02507f8
// Size: 0xd0 (Inherited: 0x60)
struct U*85a02507f8 : UMaterialExpression {
	struct FExpressionInput CurrentFrame; // 0x60(0x38)
	struct FExpressionInput *59bf9b8651; // 0x98(0x38)
};

// Class Engine.*de7380c3ef
// Size: 0x140 (Inherited: 0x60)
struct U*de7380c3ef : UMaterialExpression {
	struct FExpressionInput Default; // 0x60(0x38)
	struct FExpressionInput Inputs[0x03]; // 0x98(0xa8)
};

// Class Engine.MaterialExpressionReflectionVectorWS
// Size: 0xa0 (Inherited: 0x60)
struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	struct FExpressionInput *f12705bcfb; // 0x60(0x38)
	char *7b11736b6e : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Engine.*27ac5c7188
// Size: 0x98 (Inherited: 0x60)
struct U*27ac5c7188 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*56ff1fa10e
// Size: 0x148 (Inherited: 0x60)
struct U*56ff1fa10e : UMaterialExpression {
	struct FExpressionInput *b78bbfde40; // 0x60(0x38)
	struct FExpressionInput RotationAngle; // 0x98(0x38)
	struct FExpressionInput *fa13ab9644; // 0xd0(0x38)
	struct FExpressionInput Position; // 0x108(0x38)
	float Period; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// Class Engine.*72bad7816e
// Size: 0xe0 (Inherited: 0x60)
struct U*72bad7816e : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x60(0x38)
	struct FExpressionInput Time; // 0x98(0x38)
	float *50779e23fe; // 0xd0(0x04)
	float *286609e4a1; // 0xd4(0x04)
	float Speed; // 0xd8(0x04)
	uint32 *2c3844493a; // 0xdc(0x04)
};

// Class Engine.*f847159a75
// Size: 0x98 (Inherited: 0x60)
struct U*f847159a75 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*396e3ec20b
// Size: 0x98 (Inherited: 0x60)
struct U*396e3ec20b : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*b76c76bc3c
// Size: 0xe0 (Inherited: 0x60)
struct U*b76c76bc3c : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput Input; // 0x68(0x38)
	struct FExpressionInput OffsetFraction; // 0xa0(0x38)
	struct FVector2D *47656a07a2; // 0xd8(0x08)
};

// Class Engine.*bdf7729d54
// Size: 0xe0 (Inherited: 0x60)
struct U*bdf7729d54 : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput Input; // 0x68(0x38)
	struct FExpressionInput Coordinates; // 0xa0(0x38)
	struct FVector2D *47656a07a2; // 0xd8(0x08)
};

// Class Engine.*b03a791b33
// Size: 0x60 (Inherited: 0x60)
struct U*b03a791b33 : UMaterialExpression {
};

// Class Engine.*e2d48a1eb0
// Size: 0xa0 (Inherited: 0x60)
struct U*e2d48a1eb0 : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x60(0x38)
	enum class ESceneTextureId *725b7de8ca; // 0x98(0x01)
	bool *bd95ffe300; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// Class Engine.*16deeeec7b
// Size: 0x68 (Inherited: 0x60)
struct U*16deeeec7b : UMaterialExpression {
	enum class *a77fb80dcf *5244a9c5cc; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*387e6a5b40
// Size: 0x60 (Inherited: 0x60)
struct U*387e6a5b40 : UMaterialExpression {
};

// Class Engine.MaterialExpressionSetMaterialAttributes
// Size: 0x80 (Inherited: 0x60)
struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	struct TArray<struct FExpressionInput> Inputs; // 0x60(0x10)
	struct TArray<struct FGuid> *9e023a77af; // 0x70(0x10)
};

// Class Engine.*0a3c04e8eb
// Size: 0x98 (Inherited: 0x60)
struct U*0a3c04e8eb : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*62d11ff82e
// Size: 0xa0 (Inherited: 0x60)
struct U*62d11ff82e : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	float Period; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*27595ab95b
// Size: 0x150 (Inherited: 0x60)
struct U*27595ab95b : UMaterialExpression {
	struct FExpressionInput *1c85b3bbc8; // 0x60(0x38)
	struct FExpressionInput *8734490bff; // 0x98(0x38)
	struct FExpressionInput *8495f46ee3; // 0xd0(0x38)
	struct FExpressionInput *d45f5f66de; // 0x108(0x38)
	enum class *e1b0bcf3bb GeometryType; // 0x140(0x01)
	enum class *c9b050ae51 *97eac36925; // 0x141(0x01)
	enum class *9d8c6ec16a LODType; // 0x142(0x01)
	char pad_143[0x1]; // 0x143(0x01)
	float BillboardThreshold; // 0x144(0x04)
	bool *636acf65d3; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class Engine.*386c433407
// Size: 0x148 (Inherited: 0x60)
struct U*386c433407 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	struct FExpressionInput Radius; // 0xd0(0x38)
	struct FExpressionInput Hardness; // 0x108(0x38)
	float AttenuationRadius; // 0x140(0x04)
	float *ef4f1db286; // 0x144(0x04)
};

// Class Engine.*11fb20d24e
// Size: 0xa0 (Inherited: 0x60)
struct U*11fb20d24e : UMaterialExpression {
	struct FExpressionInput Density; // 0x60(0x38)
	float *d2d60a75b5; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*e088b3cd8c
// Size: 0x98 (Inherited: 0x60)
struct U*e088b3cd8c : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*a0617f0faa
// Size: 0x68 (Inherited: 0x60)
struct U*a0617f0faa : UMaterialExpression {
	char Value : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*c5797b3cd6
// Size: 0x110 (Inherited: 0x60)
struct U*c5797b3cd6 : UMaterialExpression {
	char DefaultValue : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	struct FExpressionInput Value; // 0xd8(0x38)
};

// Class Engine.*d3244f4beb
// Size: 0xd8 (Inherited: 0x60)
struct U*d3244f4beb : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *01c129a4c4; // 0xd0(0x04)
	float *b29b1706bf; // 0xd4(0x04)
};

// Class Engine.*0dcd5d083c
// Size: 0xa0 (Inherited: 0x60)
struct U*0dcd5d083c : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	float Period; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*495a88dd6d
// Size: 0xb8 (Inherited: 0x60)
struct U*495a88dd6d : U*2f7623087a {
	struct FExpressionInput UV; // 0x60(0x38)
	struct TArray<struct F*803094c129> Inputs; // 0x98(0x10)
	uint32 *2c3844493a; // 0xa8(0x04)
	char pad_AC[0xc]; // 0xac(0x0c)
};

// Class Engine.*491bf88c05
// Size: 0xc0 (Inherited: 0x60)
struct U*491bf88c05 : U*2f7623087a {
	struct FExpressionInput UV; // 0x60(0x38)
	struct TArray<struct F*1d31da226c> Inputs; // 0x98(0x10)
	uint32 *2c3844493a; // 0xa8(0x04)
	char pad_AC[0x14]; // 0xac(0x14)
};

// Class Engine.*3c5811a10e
// Size: 0xf8 (Inherited: 0x60)
struct U*3c5811a10e : U*2f7623087a {
	struct FExpressionInput UV; // 0x60(0x38)
	struct FExpressionInput *ceab50bd86; // 0x98(0x38)
	struct TArray<struct F*5b77a6efc7> Inputs; // 0xd0(0x10)
	uint32 *2c3844493a; // 0xe0(0x04)
	char pad_E4[0x14]; // 0xe4(0x14)
};

// Class Engine.*bd8c31fe0e
// Size: 0x70 (Inherited: 0x60)
struct U*bd8c31fe0e : UMaterialExpression {
	struct UTexture* Texture; // 0x60(0x08)
	enum class EMaterialSamplerType *8c71b458d0; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	char IsDefaultMeshpaintTexture : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*a4c5cfb544
// Size: 0x70 (Inherited: 0x70)
struct U*a4c5cfb544 : U*bd8c31fe0e {
};

// Class Engine.MaterialExpressionTextureSample
// Size: 0x1e8 (Inherited: 0x70)
struct UMaterialExpressionTextureSample : U*bd8c31fe0e {
	struct FExpressionInput Coordinates; // 0x70(0x38)
	struct FExpressionInput TextureObject; // 0xa8(0x38)
	struct FExpressionInput *cfb0cdc86f; // 0xe0(0x38)
	struct FExpressionInput *62b19a816d; // 0x118(0x38)
	struct FExpressionInput *afce4dcbef; // 0x150(0x38)
	struct FExpressionInput SampleCondition; // 0x188(0x38)
	enum class *fba3aa3d60 MipValueMode; // 0x1c0(0x01)
	enum class *481d0f6880 *768a76d8a5; // 0x1c1(0x01)
	char pad_1C2[0x2]; // 0x1c2(0x02)
	uint32 *2c3844493a; // 0x1c4(0x04)
	int32 *875006304e; // 0x1c8(0x04)
	char *a65b51894e : 1; // 0x1cc(0x01)
	char pad_1CC_1 : 7; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
	bool *e0c9ab2a0a; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	struct FLinearColor DefaultValue; // 0x1d4(0x10)
	char pad_1E4[0x4]; // 0x1e4(0x04)
};

// Class Engine.*a6b64c0748
// Size: 0x1f0 (Inherited: 0x1e8)
struct U*a6b64c0748 : UMaterialExpressionTextureSample {
	char *85188b6037 : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class Engine.*9f71381d7f
// Size: 0x208 (Inherited: 0x1e8)
struct U*9f71381d7f : UMaterialExpressionTextureSample {
	struct FName ParameterName; // 0x1e8(0x08)
	struct FGuid *4dd4dd7063; // 0x1f0(0x10)
	struct FName Group; // 0x200(0x08)
};

// Class Engine.*8d17eb3fc0
// Size: 0x208 (Inherited: 0x208)
struct U*8d17eb3fc0 : U*9f71381d7f {
};

// Class Engine.*a98ced5fd3
// Size: 0x208 (Inherited: 0x208)
struct U*a98ced5fd3 : U*9f71381d7f {
};

// Class Engine.*ef0998fbfc
// Size: 0x210 (Inherited: 0x208)
struct U*ef0998fbfc : U*a98ced5fd3 {
	float Threshold; // 0x208(0x04)
	enum class *7906c18529 Channel; // 0x20c(0x01)
	char pad_20D[0x3]; // 0x20d(0x03)
};

// Class Engine.*751b34e941
// Size: 0x210 (Inherited: 0x208)
struct U*751b34e941 : U*a98ced5fd3 {
	char *85188b6037 : 1; // 0x208(0x01)
	char pad_208_1 : 7; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
};

// Class Engine.*e63f201c33
// Size: 0x208 (Inherited: 0x208)
struct U*e63f201c33 : U*9f71381d7f {
};

// Class Engine.*e4be628d59
// Size: 0x208 (Inherited: 0x208)
struct U*e4be628d59 : U*9f71381d7f {
};

// Class Engine.MaterialExpressionTextureCoordinate
// Size: 0x70 (Inherited: 0x60)
struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32 *61d71051c2; // 0x60(0x04)
	float *5c06a976b0; // 0x64(0x04)
	float *da403d2834; // 0x68(0x04)
	char UnMirrorU : 1; // 0x6c(0x01)
	char UnMirrorV : 1; // 0x6c(0x01)
	char pad_6C_2 : 6; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*bb1d3b2947
// Size: 0xa0 (Inherited: 0x60)
struct U*bb1d3b2947 : UMaterialExpression {
	struct FExpressionInput TextureObject; // 0x60(0x38)
	enum class EMaterialExposedTextureProperty Property; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Engine.*9ce8b7d1dd
// Size: 0x68 (Inherited: 0x60)
struct U*9ce8b7d1dd : UMaterialExpression {
	char *72db398bc3 : 1; // 0x60(0x01)
	char bOverride_Period : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Period; // 0x64(0x04)
};

// Class Engine.*acd29dd204
// Size: 0xa0 (Inherited: 0x60)
struct U*acd29dd204 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	enum class EMaterialVectorCoordTransformSource *298b2009ff; // 0x98(0x01)
	enum class EMaterialVectorCoordTransform TransformType; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// Class Engine.*03255f1c35
// Size: 0xa0 (Inherited: 0x60)
struct U*03255f1c35 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	enum class EMaterialPositionTransformSource *298b2009ff; // 0x98(0x01)
	enum class EMaterialPositionTransformSource TransformType; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// Class Engine.*30f914c04b
// Size: 0x98 (Inherited: 0x60)
struct U*30f914c04b : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*fb5211025b
// Size: 0x60 (Inherited: 0x60)
struct U*fb5211025b : UMaterialExpression {
};

// Class Engine.MaterialExpressionVectorNoise
// Size: 0xa8 (Inherited: 0x60)
struct UMaterialExpressionVectorNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x60(0x38)
	enum class *2c33585321 *c7cc0eb9f9; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 Quality; // 0x9c(0x04)
	char *f0f16b9f38 : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	uint32 TileSize; // 0xa4(0x04)
};

// Class Engine.*e49780664c
// Size: 0x60 (Inherited: 0x60)
struct U*e49780664c : UMaterialExpression {
};

// Class Engine.*ef90a5318d
// Size: 0x60 (Inherited: 0x60)
struct U*ef90a5318d : UMaterialExpression {
};

// Class Engine.*587080727e
// Size: 0x60 (Inherited: 0x60)
struct U*587080727e : UMaterialExpression {
};

// Class Engine.*3b2c47c794
// Size: 0x68 (Inherited: 0x60)
struct U*3b2c47c794 : UMaterialExpression {
	enum class EMaterialExposedViewProperty Property; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*a4b97b48e0
// Size: 0x60 (Inherited: 0x60)
struct U*a4b97b48e0 : UMaterialExpression {
};

// Class Engine.*6c3afc0e09
// Size: 0x68 (Inherited: 0x60)
struct U*6c3afc0e09 : UMaterialExpression {
	enum class *44b7fab71c *11fa1bd7e7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.MaterialFunction
// Size: 0x68 (Inherited: 0x28)
struct UMaterialFunction : UObject {
	struct FGuid *0ce71e6b22; // 0x28(0x10)
	struct FString Description; // 0x38(0x10)
	char bExposeToLibrary : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UMaterialExpression*> *8e6fe03353; // 0x50(0x10)
	char *7390440fc0 : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.Material
// Size: 0xa80 (Inherited: 0x70)
struct UMaterial : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x70(0x08)
	struct FColorMaterialInput DiffuseColor; // 0x78(0x40)
	struct FColorMaterialInput SpecularColor; // 0xb8(0x40)
	struct FColorMaterialInput BaseColor; // 0xf8(0x40)
	struct FScalarMaterialInput Metallic; // 0x138(0x40)
	struct FScalarMaterialInput Specular; // 0x178(0x40)
	struct FScalarMaterialInput Roughness; // 0x1b8(0x40)
	struct FVectorMaterialInput Normal; // 0x1f8(0x48)
	struct FColorMaterialInput EmissiveColor; // 0x240(0x40)
	struct FScalarMaterialInput Opacity; // 0x280(0x40)
	struct FScalarMaterialInput OpacityMask; // 0x2c0(0x40)
	enum class EMaterialDomain MaterialDomain; // 0x300(0x01)
	enum class EBlendMode BlendMode; // 0x301(0x01)
	enum class *ef37dfb4e2 *f1c5507b00; // 0x302(0x01)
	enum class *71718e2da4 MaterialDecalResponse; // 0x303(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	float OpacityMaskClipValue; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FVectorMaterialInput WorldPositionOffset; // 0x310(0x48)
	struct FVectorMaterialInput WorldDisplacement; // 0x358(0x48)
	struct FScalarMaterialInput TessellationMultiplier; // 0x3a0(0x40)
	struct FColorMaterialInput SubsurfaceColor; // 0x3e0(0x40)
	struct FScalarMaterialInput ClearCoat; // 0x420(0x40)
	struct FScalarMaterialInput ClearCoatRoughness; // 0x460(0x40)
	struct FScalarMaterialInput AmbientOcclusion; // 0x4a0(0x40)
	struct FScalarMaterialInput Refraction; // 0x4e0(0x40)
	struct FVector2MaterialInput *92bda0749b[0x08]; // 0x520(0x240)
	struct FMaterialAttributesInput MaterialAttributes; // 0x760(0x40)
	struct FScalarMaterialInput PixelDepthOffset; // 0x7a0(0x40)
	struct FScalarMaterialInput Temperature; // 0x7e0(0x40)
	struct FScalarMaterialInput TemperatureAlpha; // 0x820(0x40)
	char bPrepassMasked : 1; // 0x860(0x01)
	char *8692f0a054 : 1; // 0x860(0x01)
	char *080a3afce6 : 1; // 0x860(0x01)
	char *4077f09105 : 1; // 0x860(0x01)
	char *6ed6dec0cb : 1; // 0x860(0x01)
	char TwoSided : 1; // 0x860(0x01)
	char DitheredLODTransition : 1; // 0x860(0x01)
	char *7ae0e9b384 : 1; // 0x860(0x01)
	char *102d1d1e24 : 1; // 0x861(0x01)
	char *568d877a5b : 1; // 0x861(0x01)
	char pad_861_2 : 6; // 0x861(0x01)
	char pad_862[0x2]; // 0x862(0x02)
	int32 *7407bcb159; // 0x864(0x04)
	enum class ETranslucencyLightingMode *33196fbf01; // 0x868(0x01)
	char pad_869[0x3]; // 0x869(0x03)
	float *1b4e0dab3e; // 0x86c(0x04)
	char *2278dae6c8 : 1; // 0x870(0x01)
	char pad_870_1 : 7; // 0x870(0x01)
	char pad_871[0x3]; // 0x871(0x03)
	float *705b9b827a; // 0x874(0x04)
	float *a0cb8e09c9; // 0x878(0x04)
	float *6c53689413; // 0x87c(0x04)
	float *98204c4c2d; // 0x880(0x04)
	float *4e10d108f7; // 0x884(0x04)
	struct FLinearColor *5b3012a09b; // 0x888(0x10)
	float TranslucentShadowStartOffset; // 0x898(0x04)
	char *fc26e30577 : 1; // 0x89c(0x01)
	char *8389bf2ea3 : 1; // 0x89c(0x01)
	char *3ec781725b : 1; // 0x89c(0x01)
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x89c(0x01)
	char bBlockGI : 1; // 0x89c(0x01)
	char *1f96d89b1c : 1; // 0x89c(0x01)
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
	enum class *2dd51cc1f4 D3D11TessellationMode; // 0x8a0(0x01)
	char pad_8A1[0x3]; // 0x8a1(0x03)
	char bEnableCrackFreeDisplacement : 1; // 0x8a4(0x01)
	char bEnableAdaptiveTessellation : 1; // 0x8a4(0x01)
	char pad_8A4_2 : 6; // 0x8a4(0x01)
	char pad_8A5[0x3]; // 0x8a5(0x03)
	float *51be975944; // 0x8a8(0x04)
	char Wireframe : 1; // 0x8ac(0x01)
	char *5b142954de : 1; // 0x8ac(0x01)
	char *2072b71cd7 : 1; // 0x8ac(0x01)
	char bApplyMaterialClipVolumes : 1; // 0x8ac(0x01)
	char pad_8AC_4 : 4; // 0x8ac(0x01)
	char pad_8AD[0x3]; // 0x8ad(0x03)
	struct F*6a44e1a314 MaterialClipVolumeTypes; // 0x8b0(0x04)
	enum class *23fe9b94f9 MaterialClipVolumeImportance; // 0x8b4(0x01)
	char pad_8B5[0x3]; // 0x8b5(0x03)
	float MaterialClipVolumeFadeRange; // 0x8b8(0x04)
	char bMaterialClipVolumesUseDiscardForTranslucent : 1; // 0x8bc(0x01)
	char bIsMaterialClipVolumeWater : 1; // 0x8bc(0x01)
	char bUseMeshClipping : 1; // 0x8bc(0x01)
	char pad_8BC_3 : 5; // 0x8bc(0x01)
	char pad_8BD[0x3]; // 0x8bd(0x03)
	int32 *c854c7f672; // 0x8c0(0x04)
	int32 *80bdb69c5d; // 0x8c4(0x04)
	int32 *25af2deac4; // 0x8c8(0x04)
	int32 *55aa112efc; // 0x8cc(0x04)
	struct TArray<struct UMaterialExpression*> Expressions; // 0x8d0(0x10)
	struct TArray<struct F*47105f3405> *96c2f2d8f1; // 0x8e0(0x10)
	struct TArray<struct F*98033a7972> *7f157b9725; // 0x8f0(0x10)
	char *8c6902849e : 1; // 0x900(0x01)
	char bIsMasked : 1; // 0x900(0x01)
	char *ef68930620 : 1; // 0x900(0x01)
	char *4e6317cd09 : 1; // 0x900(0x01)
	char *92827ba56b : 1; // 0x900(0x01)
	char *87dc392cb4 : 1; // 0x900(0x01)
	char *b7630c7b11 : 1; // 0x900(0x01)
	char *aceb1cfbe8 : 1; // 0x900(0x01)
	char *0c91dfb4eb : 1; // 0x901(0x01)
	char pad_901_1 : 7; // 0x901(0x01)
	char pad_902[0x2]; // 0x902(0x02)
	uint32 *4aa8a9b057; // 0x904(0x04)
	enum class *647e6c61b7 BlendableLocation; // 0x908(0x01)
	char pad_909[0x3]; // 0x909(0x03)
	int32 BlendablePriority; // 0x90c(0x04)
	bool BlendableOutputAlpha; // 0x910(0x01)
	enum class *7bbadfea61 *649a912861; // 0x911(0x01)
	char pad_912[0x2]; // 0x912(0x02)
	float RefractionDepthBias; // 0x914(0x04)
	struct FGuid *0ce71e6b22; // 0x918(0x10)
	char pad_928[0x148]; // 0x928(0x148)
	struct TArray<struct UTexture*> *e22d1953c5; // 0xa70(0x10)
};

// Class Engine.MaterialInstanceDynamic
// Size: 0x230 (Inherited: 0x1e0)
struct UMaterialInstanceDynamic : UMaterialInstance {
	char pad_1E0[0x50]; // 0x1e0(0x50)

	struct FName *5d15977c43(); // Function Engine.MaterialInstanceDynamic.*5d15977c43 // Final|Native|Public|BlueprintCallable // @ game+0x65797a4
	void *a8c9bdbc95(struct FName ParameterName); // Function Engine.MaterialInstanceDynamic.*a8c9bdbc95 // Final|Native|Public|BlueprintCallable // @ game+0x657e1d8
	void SetScalarParameterValue(); // Function Engine.MaterialInstanceDynamic.SetScalarParameterValue // Final|Native|Public|BlueprintCallable // @ game+0x657dd88
	void K2_CopyMaterialInstanceParameters(); // Function Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters // Final|Native|Public|BlueprintCallable // @ game+0x6577ba8
	struct FName *c9f93b5b8e(); // Function Engine.MaterialInstanceDynamic.*c9f93b5b8e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65798f8
	void CopyParameterOverrides(); // Function Engine.MaterialInstanceDynamic.CopyParameterOverrides // Final|Native|Public|BlueprintCallable // @ game+0x6571e08
	void CopyInterpParameters(); // Function Engine.MaterialInstanceDynamic.CopyInterpParameters // Final|Native|Public // @ game+0x6571d78
	struct FName *c5aefd7080(); // Function Engine.MaterialInstanceDynamic.*c5aefd7080 // Final|Native|Public|BlueprintCallable // @ game+0x657984c
	struct FName SetVectorParameterValue(); // Function Engine.MaterialInstanceDynamic.SetVectorParameterValue // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x657e3cc
	void K2_InterpolateMaterialInstanceParams(struct UMaterialInstance* SourceB); // Function Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams // Final|Native|Public|BlueprintCallable // @ game+0x65799b0
};

// Class Engine.MaterialParameterCollection
// Size: 0x68 (Inherited: 0x28)
struct UMaterialParameterCollection : UObject {
	struct FGuid *0ce71e6b22; // 0x28(0x10)
	struct TArray<struct F*ad9a0fd7e8> *a6842523bb; // 0x38(0x10)
	struct TArray<struct F*22474b51cd> *68a814167a; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class Engine.*eb42cffbf0
// Size: 0xe8 (Inherited: 0x28)
struct U*eb42cffbf0 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UMaterialParameterCollection* Collection; // 0x30(0x08)
	struct UWorld* World; // 0x38(0x08)
	char pad_40[0xa8]; // 0x40(0xa8)
};

// Class Engine.*a44c43ed11
// Size: 0x28 (Inherited: 0x28)
struct U*a44c43ed11 : UInterface {
};

// Class Engine.MorphTarget
// Size: 0x40 (Inherited: 0x28)
struct UMorphTarget : UObject {
	struct USkeletalMesh* *c4b0f3f536; // 0x28(0x08)
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
	struct UClass* *bf8f8ee982; // 0x40(0x08)
	struct UClass* *bc63654d4e; // 0x48(0x08)
	struct UClass* *3bc209b6df; // 0x50(0x08)
	struct UClass* *2252ae56bb; // 0x58(0x08)
	struct UClass* *496a9fb69f; // 0x60(0x08)
	struct UClass* *f5583706f6; // 0x68(0x08)
	struct UClass* *ffee9a744f; // 0x70(0x08)
	struct UClass* *26276a0f32; // 0x78(0x08)
	struct UClass* *e0e35055d2; // 0x80(0x08)
	struct UClass* *64fa84d6df; // 0x88(0x08)
	struct UClass* *543a7545dd; // 0x90(0x08)
	struct UClass* *a11f24bb8f; // 0x98(0x08)
	struct UClass* *d4c462831e; // 0xa0(0x08)
	struct UClass* *329c4182fc; // 0xa8(0x08)
	struct UClass* *cbf267f986; // 0xb0(0x08)
	struct UClass* *ea99f91b5a; // 0xb8(0x08)
};

// Class Engine.NavCollision
// Size: 0x110 (Inherited: 0x28)
struct UNavCollision : UObject {
	char pad_28[0x50]; // 0x28(0x50)
	struct TArray<struct F*ff3ef9d9bb> *a51fb462ca; // 0x78(0x10)
	struct TArray<struct F*2d6195cb0d> *d6146edc0a; // 0x88(0x10)
	struct UClass* AreaClass; // 0x98(0x08)
	char bIsDynamicObstacle : 1; // 0xa0(0x01)
	char bGatherConvexGeometry : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x6f]; // 0xa1(0x6f)
};

// Class Engine.*48601dfae0
// Size: 0x28 (Inherited: 0x28)
struct U*48601dfae0 : UInterface {
};

// Class Engine.*e52d54c0e0
// Size: 0x30 (Inherited: 0x28)
struct U*e52d54c0e0 : UObject {
	struct FName *a53a42aa0d; // 0x28(0x08)
};

// Class Engine.*c488e7e59d
// Size: 0x40 (Inherited: 0x30)
struct U*c488e7e59d : U*e52d54c0e0 {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.NavigationPath
// Size: 0xc0 (Inherited: 0x28)
struct UNavigationPath : UObject {
	struct FMulticastDelegate PathUpdatedNotifier; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints; // 0x38(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x48(0x01)
	char pad_49[0x77]; // 0x49(0x77)

	bool *785af1cc95(); // Function Engine.NavigationPath.*785af1cc95 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6572998
	void *03d42052d7(); // Function Engine.NavigationPath.*03d42052d7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x657446c
	void *f026268184(); // Function Engine.NavigationPath.*f026268184 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6575578
	void GetPathLength(); // Function Engine.NavigationPath.GetPathLength // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6575808
	void *d12405f6c0(); // Function Engine.NavigationPath.*d12405f6c0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x354bfc
	void IsValid(); // Function Engine.NavigationPath.IsValid // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65779ec
	void *1c20e1948d(); // Function Engine.NavigationPath.*1c20e1948d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6577744
	void *026ccfe3c7(); // Function Engine.NavigationPath.*026ccfe3c7 // Final|Native|Public|BlueprintCallable // @ game+0x6572b78
};

// Class Engine.*528e396f3d
// Size: 0x28 (Inherited: 0x28)
struct U*528e396f3d : UInterface {
};

// Class Engine.*53c1ac6d9b
// Size: 0x48 (Inherited: 0x48)
struct U*53c1ac6d9b : U*10128294dc {
};

// Class Engine.*248367b986
// Size: 0x50 (Inherited: 0x50)
struct U*248367b986 : U*3f3fffc028 {
};

// Class Engine.*10465bcff3
// Size: 0x28 (Inherited: 0x28)
struct U*10465bcff3 : UInterface {
};

// Class Engine.*35273738da
// Size: 0x370 (Inherited: 0xe0)
struct U*35273738da : UPackageMap {
	char pad_E0[0x290]; // 0xe0(0x290)
};

// Class Engine.DemoNetConnection
// Size: 0x659b8 (Inherited: 0x65848)
struct UDemoNetConnection : UNetConnection {
	char pad_65848[0x20]; // 0x65848(0x20)
	struct FStringClassReference OverrideActorChannel; // 0x65868(0x10)
	char pad_65878[0x140]; // 0x65878(0x140)
};

// Class Engine.*729ada1fe9
// Size: 0x28 (Inherited: 0x28)
struct U*729ada1fe9 : UInterface {
};

// Class Engine.*fb22c585da
// Size: 0x98 (Inherited: 0x28)
struct U*fb22c585da : UObject {
	struct TMap<struct FName, struct F*e9f68e0c59> NodeMapping; // 0x28(0x50)
	struct UBlueprint* *3586bac310; // 0x78(0x20)
};

// Class Engine.ObjectLibrary
// Size: 0x160 (Inherited: 0x28)
struct UObjectLibrary : UObject {
	struct UClass* *29837e1014; // 0x28(0x08)
	bool bHasBlueprintClasses; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct UObject*> Objects; // 0x38(0x10)
	struct TArray<struct UObject*> *5d326b9666; // 0x48(0x10)
	bool *bf6761a682; // 0x58(0x01)
	bool *d481a4c993; // 0x59(0x01)
	char pad_5A[0x106]; // 0x5a(0x106)
};

// Class Engine.*f633e75a6f
// Size: 0x38 (Inherited: 0x28)
struct U*f633e75a6f : UObject {
	struct TArray<struct UObject*> *fd340f7eb7; // 0x28(0x10)
};

// Class Engine.*0d60cea73e
// Size: 0x28 (Inherited: 0x28)
struct U*0d60cea73e : UObject {

	void Activate(); // Function Engine.*0d60cea73e.Activate // Native|Public|BlueprintCallable // @ game+0x57e39e0
};

// Class Engine.*6f59c92ae0
// Size: 0x28 (Inherited: 0x28)
struct U*6f59c92ae0 : UObject {
};

// Class Engine.*7e8b14b3a6
// Size: 0x28 (Inherited: 0x28)
struct U*7e8b14b3a6 : UObject {
};

// Class Engine.ParticleEmitter
// Size: 0x180 (Inherited: 0x28)
struct UParticleEmitter : UObject {
	struct FName *b444b10acf; // 0x28(0x08)
	int32 *2d88eefe6c; // 0x30(0x04)
	enum class *2e33f76648 *ea8f937953; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct TArray<struct UParticleLODLevel*> *1ab4968c52; // 0x38(0x10)
	char *f3274a9394 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32 *e90f5d7869; // 0x4c(0x04)
	int32 *039a5b442e; // 0x50(0x04)
	float MediumDetailSpawnRateScale; // 0x54(0x04)
	float *e47677fa67; // 0x58(0x04)
	enum class *40da61f0d8 DetailMode; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	char *44b8a714af : 1; // 0x60(0x01)
	char *6818403380 : 1; // 0x60(0x01)
	char *3e8ffac0c1 : 1; // 0x60(0x01)
	char *31c1da4167 : 1; // 0x60(0x01)
	char pad_60_4 : 4; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	enum class EParticleSignificanceLevel *62370ad6b4; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float *cf6994d48b; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct U*e4deae045e* *e4deae045e; // 0x70(0x08)
	char pad_78[0x108]; // 0x78(0x108)
};

// Class Engine.*106d811d66
// Size: 0x180 (Inherited: 0x180)
struct U*106d811d66 : UParticleEmitter {
};

// Class Engine.ParticleLODLevel
// Size: 0xb8 (Inherited: 0x28)
struct UParticleLODLevel : UObject {
	int32 Level; // 0x28(0x04)
	char bEnabled : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct UParticleModuleRequired* *8a67746d79; // 0x30(0x08)
	struct TArray<struct UParticleModule*> Modules; // 0x38(0x10)
	struct UParticleModuleTypeDataBase* *1e678da4bc; // 0x48(0x08)
	struct UParticleModuleSpawn* *454db5a5fd; // 0x50(0x08)
	struct UParticleModuleEventGenerator* *6d433d4748; // 0x58(0x08)
	struct TArray<struct U*df7e3bc1e1*> *a6daa54703; // 0x60(0x10)
	struct TArray<struct UParticleModule*> *59031c4ffa; // 0x70(0x10)
	struct TArray<struct UParticleModule*> *92effb92bc; // 0x80(0x10)
	struct TArray<struct UParticleModuleOrbit*> *3bd0fe2a1e; // 0x90(0x10)
	struct TArray<struct UParticleModuleEventReceiverBase*> *929d4eee1a; // 0xa0(0x10)
	char *f3274a9394 : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32 *e90f5d7869; // 0xb4(0x04)
};

// Class Engine.ParticleModule
// Size: 0x30 (Inherited: 0x28)
struct UParticleModule : UObject {
	char *d5c33f7ea9 : 1; // 0x28(0x01)
	char *82cecb1557 : 1; // 0x28(0x01)
	char *35bec95e0c : 1; // 0x28(0x01)
	char *283b67f559 : 1; // 0x28(0x01)
	char *2c104c0376 : 1; // 0x28(0x01)
	char *6b919f9e90 : 1; // 0x28(0x01)
	char *5e0ad28f75 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *2ed624afab : 1; // 0x29(0x01)
	char *71b34ab701 : 1; // 0x29(0x01)
	char *3fffc3e24d : 1; // 0x29(0x01)
	char *9be8d8bffc : 1; // 0x29(0x01)
	char pad_29_4 : 4; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	bool *c3fa9f0f39; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class Engine.*071cbf460f
// Size: 0x38 (Inherited: 0x30)
struct U*071cbf460f : UParticleModule {
	char *7d594c33f2 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleAcceleration
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleAcceleration : U*071cbf460f {
	struct FRawDistributionVector Acceleration; // 0x38(0x50)
	char *0c5099cab1 : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*99ba5b25d7
// Size: 0x48 (Inherited: 0x38)
struct U*99ba5b25d7 : U*071cbf460f {
	struct FVector Acceleration; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleAccelerationDrag
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleAccelerationDrag : U*071cbf460f {
	struct U*fcaa61cf2b* DragCoefficient; // 0x38(0x08)
	struct F*1f6ca76ce9 *922be66306; // 0x40(0x38)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleAccelerationDragScaleOverLife : U*071cbf460f {
	struct U*fcaa61cf2b* DragScale; // 0x38(0x08)
	struct F*1f6ca76ce9 *32985bb5b4; // 0x40(0x38)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleAccelerationOverLifetime : U*071cbf460f {
	struct FRawDistributionVector *ad68518d83; // 0x38(0x50)
};

// Class Engine.*36cafdc382
// Size: 0x30 (Inherited: 0x30)
struct U*36cafdc382 : UParticleModule {
};

// Class Engine.ParticleModuleAttractorLine
// Size: 0xb8 (Inherited: 0x30)
struct UParticleModuleAttractorLine : U*36cafdc382 {
	struct FVector *234abb5ac8; // 0x30(0x0c)
	struct FVector *df065f937c; // 0x3c(0x0c)
	struct F*1f6ca76ce9 Range; // 0x48(0x38)
	struct F*1f6ca76ce9 Strength; // 0x80(0x38)
};

// Class Engine.ParticleModuleAttractorParticle
// Size: 0xc0 (Inherited: 0x30)
struct UParticleModuleAttractorParticle : U*36cafdc382 {
	struct FName *b444b10acf; // 0x30(0x08)
	struct F*1f6ca76ce9 Range; // 0x38(0x38)
	char *9e6adb96f4 : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct F*1f6ca76ce9 Strength; // 0x78(0x38)
	char *8b78f2ec30 : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	enum class *d88b105a49 *d9fd92db87; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	char *f54fb59f07 : 1; // 0xb8(0x01)
	char *6535388a23 : 1; // 0xb8(0x01)
	char pad_B8_2 : 6; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 *fbbaf44437; // 0xbc(0x04)
};

// Class Engine.ParticleModuleAttractorPoint
// Size: 0xf8 (Inherited: 0x30)
struct UParticleModuleAttractorPoint : U*36cafdc382 {
	struct FRawDistributionVector Position; // 0x30(0x50)
	struct F*1f6ca76ce9 Range; // 0x80(0x38)
	struct F*1f6ca76ce9 Strength; // 0xb8(0x38)
	char *bc3a713b4b : 1; // 0xf0(0x01)
	char *8b78f2ec30 : 1; // 0xf0(0x01)
	char *59743a1096 : 1; // 0xf0(0x01)
	char *69b7074733 : 1; // 0xf0(0x01)
	char *dcfb43fb1c : 1; // 0xf0(0x01)
	char *e9195f6c53 : 1; // 0xf0(0x01)
	char *5ea6e6fefb : 1; // 0xf0(0x01)
	char *f68216b105 : 1; // 0xf0(0x01)
	char *24d34a51ab : 1; // 0xf1(0x01)
	char *a7149f5434 : 1; // 0xf1(0x01)
	char pad_F1_2 : 6; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
};

// Class Engine.ParticleModuleAttractorPointGravity
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleAttractorPointGravity : U*36cafdc382 {
	struct FVector Position; // 0x30(0x0c)
	float Radius; // 0x3c(0x04)
	struct U*fcaa61cf2b* Strength; // 0x40(0x08)
	struct F*1f6ca76ce9 *0c8d4215e5; // 0x48(0x38)
};

// Class Engine.ParticleModuleBeamBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleBeamBase : UParticleModule {
};

// Class Engine.*14b5f375a7
// Size: 0x120 (Inherited: 0x30)
struct U*14b5f375a7 : UParticleModuleBeamBase {
	enum class *08a0696eac *0fc88b9136; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct F*7650be3db8 *2c618f6a14; // 0x34(0x04)
	struct FRawDistributionVector Position; // 0x38(0x50)
	struct F*7650be3db8 *350ef74bdd; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FRawDistributionVector Tangent; // 0x90(0x50)
	char *a4edd0f472 : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct F*7650be3db8 *9f4f03fa69; // 0xe4(0x04)
	struct F*1f6ca76ce9 Strength; // 0xe8(0x38)
};

// Class Engine.*0056a64c38
// Size: 0x1b8 (Inherited: 0x30)
struct U*0056a64c38 : UParticleModuleBeamBase {
	char *ccfe7bfe14 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 Frequency; // 0x34(0x04)
	int32 *05e9011beb; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FRawDistributionVector *0b4f70677b; // 0x40(0x50)
	struct F*1f6ca76ce9 *6406538d60; // 0x90(0x38)
	char *bddc51032f : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FRawDistributionVector *f36e61bb20; // 0xd0(0x50)
	char *0b85853c4f : 1; // 0x120(0x01)
	char pad_120_1 : 7; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float *adea1fd277; // 0x124(0x04)
	char *be51fdeebb : 1; // 0x128(0x01)
	char *11afa08b42 : 1; // 0x128(0x01)
	char pad_128_2 : 6; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float *6f68b9732f; // 0x12c(0x04)
	float *67b210b8ab; // 0x130(0x04)
	char *96808c9dc8 : 1; // 0x134(0x01)
	char pad_134_1 : 7; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct F*1f6ca76ce9 *9d67dc505e; // 0x138(0x38)
	int32 NoiseTessellation; // 0x170(0x04)
	char *eb5a306b36 : 1; // 0x174(0x01)
	char pad_174_1 : 7; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	float *b0eaf3bf51; // 0x178(0x04)
	char *06b31437b2 : 1; // 0x17c(0x01)
	char pad_17C_1 : 7; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct F*1f6ca76ce9 NoiseScale; // 0x180(0x38)
};

// Class Engine.*52d31b555f
// Size: 0x138 (Inherited: 0x30)
struct U*52d31b555f : UParticleModuleBeamBase {
	enum class *10d5025a6a *19ea37e851; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName SourceName; // 0x38(0x08)
	char *8615eac57f : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FRawDistributionVector Source; // 0x48(0x50)
	char *ddd0ecaf59 : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	enum class *358355e0e4 *42cf295ce2; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct FRawDistributionVector *e16a6a9672; // 0xa0(0x50)
	char *86126d32d4 : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct F*1f6ca76ce9 *357272e187; // 0xf8(0x38)
	char *8b9c4144be : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
};

// Class Engine.*e38fdce82b
// Size: 0x138 (Inherited: 0x30)
struct U*e38fdce82b : UParticleModuleBeamBase {
	enum class *10d5025a6a *8ae9f11558; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName TargetName; // 0x38(0x08)
	struct FRawDistributionVector Target; // 0x40(0x50)
	char *efde6d1b9d : 1; // 0x90(0x01)
	char *a40644c16a : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	enum class *358355e0e4 *a77a6d1818; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FRawDistributionVector *c423f910a7; // 0x98(0x50)
	char *00a25b71b5 : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct F*1f6ca76ce9 *5b6a4f7416; // 0xf0(0x38)
	char *760059cab2 : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float *aa6bf0cb4b; // 0x12c(0x04)
	char pad_130[0x8]; // 0x130(0x08)
};

// Class Engine.ParticleModuleCameraBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleCameraBase : UParticleModule {
};

// Class Engine.*d91e13bc78
// Size: 0x70 (Inherited: 0x30)
struct U*d91e13bc78 : UParticleModuleCameraBase {
	struct F*1f6ca76ce9 *5a08e4b0c1; // 0x30(0x38)
	char *416b7febd1 : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class *ee73659f02 *8cca34dd3e; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*c2b379081d
// Size: 0x30 (Inherited: 0x30)
struct U*c2b379081d : UParticleModule {
};

// Class Engine.ParticleModuleCollision
// Size: 0x1b8 (Inherited: 0x30)
struct UParticleModuleCollision : U*c2b379081d {
	struct FRawDistributionVector *59759ad7f0; // 0x30(0x50)
	struct FRawDistributionVector *a9fdea1d9a; // 0x80(0x50)
	struct F*1f6ca76ce9 *090ac7ac21; // 0xd0(0x38)
	enum class *260cdfc5d5 *b3493ecaf6; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<enum class EObjectTypeQuery> *11f9955a5b; // 0x110(0x10)
	char pad_120[0x8]; // 0x120(0x08)
	char *a33cd4114a : 1; // 0x128(0x01)
	char *5b0a1945a3 : 1; // 0x128(0x01)
	char pad_128_2 : 6; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct F*1f6ca76ce9 ParticleMass; // 0x130(0x38)
	float *d273cd6508; // 0x168(0x04)
	char *bf5acc9b90 : 1; // 0x16c(0x01)
	char *eca6287c11 : 1; // 0x16c(0x01)
	char pad_16C_2 : 6; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	float *b96953c686; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct F*1f6ca76ce9 *3db074cbed; // 0x178(0x38)
	char *48bcd44f4f : 1; // 0x1b0(0x01)
	char *4403f5033f : 1; // 0x1b0(0x01)
	char *24a04c16b2 : 1; // 0x1b0(0x01)
	char pad_1B0_3 : 5; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	float *3b7ae2059f; // 0x1b4(0x04)
};

// Class Engine.ParticleModuleCollisionGPU
// Size: 0xb8 (Inherited: 0x30)
struct UParticleModuleCollisionGPU : U*c2b379081d {
	struct F*1f6ca76ce9 *725e162a6a; // 0x30(0x38)
	struct F*1f6ca76ce9 ResilienceScaleOverLife; // 0x68(0x38)
	float Friction; // 0xa0(0x04)
	float *df7809c8d0; // 0xa4(0x04)
	float *71ed7f175f; // 0xa8(0x04)
	float RadiusScale; // 0xac(0x04)
	float *8cf29bbb45; // 0xb0(0x04)
	enum class EParticleCollisionResponse Response; // 0xb4(0x01)
	enum class EParticleCollisionMode *0ecc1f7166; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
};

// Class Engine.*be8265eae9
// Size: 0x30 (Inherited: 0x30)
struct U*be8265eae9 : UParticleModule {
};

// Class Engine.*e7c562fbdf
// Size: 0xc0 (Inherited: 0x30)
struct U*e7c562fbdf : U*be8265eae9 {
	struct FRawDistributionVector *95d7a9332e; // 0x30(0x50)
	struct F*1f6ca76ce9 *7bc8835fc7; // 0x80(0x38)
	char bClampAlpha : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.*c006ed8aa9
// Size: 0xe0 (Inherited: 0xc0)
struct U*c006ed8aa9 : U*e7c562fbdf {
	struct F*1174241ce4 *5a932732ee; // 0xc0(0x20)
};

// Class Engine.*7e645b8bae
// Size: 0xc0 (Inherited: 0x30)
struct U*7e645b8bae : U*be8265eae9 {
	struct FRawDistributionVector *e758184f58; // 0x30(0x50)
	struct F*1f6ca76ce9 *b639ea9b82; // 0x80(0x38)
	char bClampAlpha : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.*9bbac33af0
// Size: 0xc0 (Inherited: 0x30)
struct U*9bbac33af0 : U*be8265eae9 {
	struct FRawDistributionVector *82ecd094a0; // 0x30(0x50)
	struct F*1f6ca76ce9 *86014eacfd; // 0x80(0x38)
	char *af49179d16 : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.*db5aed09ab
// Size: 0x30 (Inherited: 0x30)
struct U*db5aed09ab : UParticleModule {
};

// Class Engine.ParticleModuleEventGenerator
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleEventGenerator : U*db5aed09ab {
	struct TArray<struct F*bf4552732e> Events; // 0x30(0x10)
};

// Class Engine.ParticleModuleEventReceiverBase
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleEventReceiverBase : U*db5aed09ab {
	enum class EParticleEventType *3a58998e2e; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName EventName; // 0x38(0x08)
};

// Class Engine.*4e07ecb230
// Size: 0x48 (Inherited: 0x40)
struct U*4e07ecb230 : UParticleModuleEventReceiverBase {
	char *db4308e274 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.*5c75d8c889
// Size: 0xe8 (Inherited: 0x40)
struct U*5c75d8c889 : UParticleModuleEventReceiverBase {
	struct F*1f6ca76ce9 SpawnCount; // 0x40(0x38)
	char *821b34ed1e : 1; // 0x78(0x01)
	char *25643750e7 : 1; // 0x78(0x01)
	char *f9b2a41f35 : 1; // 0x78(0x01)
	char pad_78_3 : 5; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FRawDistributionVector *777f6b8afd; // 0x80(0x50)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0xd0(0x10)
	char *f86032eb6d : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// Class Engine.ParticleModuleKillBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleKillBase : UParticleModule {
};

// Class Engine.*a2341b77cc
// Size: 0xd8 (Inherited: 0x30)
struct U*a2341b77cc : UParticleModuleKillBase {
	struct FRawDistributionVector *9134fe8fc9; // 0x30(0x50)
	struct FRawDistributionVector *b91cfb1b85; // 0x80(0x50)
	char *d7b4038712 : 1; // 0xd0(0x01)
	char *dde04b1e85 : 1; // 0xd0(0x01)
	char *4bf712dad5 : 1; // 0xd0(0x01)
	char pad_D0_3 : 5; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// Class Engine.*92d7dec3be
// Size: 0x70 (Inherited: 0x30)
struct U*92d7dec3be : UParticleModuleKillBase {
	struct F*1f6ca76ce9 Height; // 0x30(0x38)
	char *d7b4038712 : 1; // 0x68(0x01)
	char *ebc0db77e5 : 1; // 0x68(0x01)
	char *d977502133 : 1; // 0x68(0x01)
	char pad_68_3 : 5; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*039b8744ec
// Size: 0x30 (Inherited: 0x30)
struct U*039b8744ec : UParticleModule {
};

// Class Engine.*dc7388d1c9
// Size: 0x68 (Inherited: 0x30)
struct U*dc7388d1c9 : U*039b8744ec {
	struct F*1f6ca76ce9 LifeTime; // 0x30(0x38)
};

// Class Engine.*d2789feb4a
// Size: 0x88 (Inherited: 0x68)
struct U*d2789feb4a : U*dc7388d1c9 {
	struct F*1174241ce4 *5a932732ee; // 0x68(0x20)
};

// Class Engine.ParticleModuleLightBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleLightBase : UParticleModule {
};

// Class Engine.*0c4ac53cb3
// Size: 0x148 (Inherited: 0x30)
struct U*0c4ac53cb3 : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x30(0x01)
	bool *50ae707656; // 0x31(0x01)
	bool *59212fa19c; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float *539e87f503; // 0x34(0x04)
	struct FRawDistributionVector *82ecd094a0; // 0x38(0x50)
	struct F*1f6ca76ce9 *9dd2e81728; // 0x88(0x38)
	struct F*1f6ca76ce9 RadiusScale; // 0xc0(0x38)
	struct F*1f6ca76ce9 *a2cc3a5605; // 0xf8(0x38)
	struct FLightingChannels LightingChannels; // 0x130(0x03)
	char pad_133[0x1]; // 0x133(0x01)
	float VolumetricScatteringIntensity; // 0x134(0x04)
	bool *24d1cb5350; // 0x138(0x01)
	bool *6d98297e69; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct U*42bee7f7f3* IESTexture; // 0x140(0x08)
};

// Class Engine.*18e19b86dc
// Size: 0x168 (Inherited: 0x148)
struct U*18e19b86dc : U*0c4ac53cb3 {
	struct F*1174241ce4 *5a932732ee; // 0x148(0x20)
};

// Class Engine.*1b65da9acf
// Size: 0x30 (Inherited: 0x30)
struct U*1b65da9acf : UParticleModule {
};

// Class Engine.*997202418f
// Size: 0x88 (Inherited: 0x30)
struct U*997202418f : U*1b65da9acf {
	struct FRawDistributionVector StartLocation; // 0x30(0x50)
	float *f46e3aefc6; // 0x80(0x04)
	float *ea74af33e1; // 0x84(0x04)
};

// Class Engine.*c9897039a9
// Size: 0xa8 (Inherited: 0x88)
struct U*c9897039a9 : U*997202418f {
	struct F*1174241ce4 *5a932732ee; // 0x88(0x20)
};

// Class Engine.*4afea05e73
// Size: 0x88 (Inherited: 0x88)
struct U*4afea05e73 : U*997202418f {
};

// Class Engine.*b57df6437b
// Size: 0xa8 (Inherited: 0x88)
struct U*b57df6437b : U*4afea05e73 {
	struct F*1174241ce4 *5a932732ee; // 0x88(0x20)
};

// Class Engine.*a5e9640942
// Size: 0x70 (Inherited: 0x30)
struct U*a5e9640942 : U*1b65da9acf {
	enum class *7566d9031e SourceType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector *6fb40a675d; // 0x34(0x0c)
	struct TArray<struct F*5ac2ee893c> *2d8f56f23e; // 0x40(0x10)
	enum class *4a1387e041 *d9fd92db87; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	char *8b9774ade7 : 1; // 0x54(0x01)
	char *eaf9125a99 : 1; // 0x54(0x01)
	char *4d07a365fc : 1; // 0x54(0x01)
	char pad_54_3 : 5; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float *777f6b8afd; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FName *72658e6bdc; // 0x60(0x08)
	int32 *f0104c400b; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.ParticleModuleLocationDirect
// Size: 0x170 (Inherited: 0x30)
struct UParticleModuleLocationDirect : U*1b65da9acf {
	struct FRawDistributionVector Location; // 0x30(0x50)
	struct FRawDistributionVector *0c7ddffc16; // 0x80(0x50)
	struct FRawDistributionVector ScaleFactor; // 0xd0(0x50)
	struct FRawDistributionVector Direction; // 0x120(0x50)
};

// Class Engine.*a5d2d7feaf
// Size: 0x50 (Inherited: 0x30)
struct U*a5d2d7feaf : U*1b65da9acf {
	struct FName *b444b10acf; // 0x30(0x08)
	enum class *f5cebc1cd4 *d9fd92db87; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	char *ded37d6740 : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float *5904fcd117; // 0x40(0x04)
	char *301ae2e56e : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *390d7f7518; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleLocationEmitterDirect
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleLocationEmitterDirect : U*1b65da9acf {
	struct FName *b444b10acf; // 0x30(0x08)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xc0 (Inherited: 0x30)
struct UParticleModuleLocationPrimitiveBase : U*1b65da9acf {
	char *dcfb43fb1c : 1; // 0x30(0x01)
	char *e9195f6c53 : 1; // 0x30(0x01)
	char *5ea6e6fefb : 1; // 0x30(0x01)
	char *f68216b105 : 1; // 0x30(0x01)
	char *24d34a51ab : 1; // 0x30(0x01)
	char *a7149f5434 : 1; // 0x30(0x01)
	char *36d524ebe7 : 1; // 0x30(0x01)
	char Velocity : 1; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct F*1f6ca76ce9 *97df2e39c8; // 0x38(0x38)
	struct FRawDistributionVector StartLocation; // 0x70(0x50)
};

// Class Engine.*6b8647713f
// Size: 0x140 (Inherited: 0xc0)
struct U*6b8647713f : UParticleModuleLocationPrimitiveBase {
	char *dfc72f7c34 : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct F*1f6ca76ce9 *cf29964f48; // 0xc8(0x38)
	struct F*1f6ca76ce9 *00af7adc98; // 0x100(0x38)
	enum class *676dcb6f8c *4d808cea74; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class Engine.*d4417a7e58
// Size: 0x160 (Inherited: 0x140)
struct U*d4417a7e58 : U*6b8647713f {
	struct F*1174241ce4 *5a932732ee; // 0x140(0x20)
};

// Class Engine.*afc5479c58
// Size: 0xf8 (Inherited: 0xc0)
struct U*afc5479c58 : UParticleModuleLocationPrimitiveBase {
	struct F*1f6ca76ce9 *cf29964f48; // 0xc0(0x38)
};

// Class Engine.*46f674b1af
// Size: 0x118 (Inherited: 0xf8)
struct U*46f674b1af : U*afc5479c58 {
	struct F*1174241ce4 *5a932732ee; // 0xf8(0x20)
};

// Class Engine.*c2e647850c
// Size: 0x128 (Inherited: 0x30)
struct U*c2e647850c : U*1b65da9acf {
	struct FRawDistributionVector StartOffset; // 0x30(0x50)
	struct F*1f6ca76ce9 Height; // 0x80(0x38)
	struct F*1f6ca76ce9 Angle; // 0xb8(0x38)
	struct F*1f6ca76ce9 Thickness; // 0xf0(0x38)
};

// Class Engine.*79114e0dc1
// Size: 0x90 (Inherited: 0x30)
struct U*79114e0dc1 : U*1b65da9acf {
	enum class *c9ba3aca70 SourceType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector *6fb40a675d; // 0x34(0x0c)
	char *8b9774ade7 : 1; // 0x40(0x01)
	char *eaf9125a99 : 1; // 0x40(0x01)
	char *4d07a365fc : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float *777f6b8afd; // 0x44(0x04)
	struct FName *72658e6bdc; // 0x48(0x08)
	struct TArray<struct FName> *65695d0724; // 0x50(0x10)
	char *121c4b915a : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FVector *1177104577; // 0x64(0x0c)
	float NormalCheckToleranceDegrees; // 0x70(0x04)
	float *68a48cbfc6; // 0x74(0x04)
	struct TArray<int32> *614cf2cf38; // 0x78(0x10)
	char *cf0ade6846 : 1; // 0x88(0x01)
	char *f3449841f5 : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	uint32 *7c24af66d9; // 0x8c(0x04)
};

// Class Engine.*ae5b52f112
// Size: 0x38 (Inherited: 0x30)
struct U*ae5b52f112 : U*1b65da9acf {
	struct FVector2D *4b9c166f43; // 0x30(0x08)
};

// Class Engine.ParticleModuleSourceMovement
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleSourceMovement : U*1b65da9acf {
	struct FRawDistributionVector *9aed2dacde; // 0x30(0x50)
};

// Class Engine.*d3c67b086d
// Size: 0x30 (Inherited: 0x30)
struct U*d3c67b086d : UParticleModule {
};

// Class Engine.ParticleModuleMeshMaterial
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleMeshMaterial : U*d3c67b086d {
	struct TArray<struct UMaterialInterface*> *cb111bd0f4; // 0x30(0x10)
};

// Class Engine.*b318c02391
// Size: 0x38 (Inherited: 0x30)
struct U*b318c02391 : UParticleModule {
	char *8d0ea853a6 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleOrbit
// Size: 0x148 (Inherited: 0x38)
struct UParticleModuleOrbit : U*b318c02391 {
	enum class *883832f9ba *5615602713; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FRawDistributionVector OffsetAmount; // 0x40(0x50)
	struct F*b021185d8b *d844865d5d; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FRawDistributionVector RotationAmount; // 0x98(0x50)
	struct F*b021185d8b *c98455d343; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FRawDistributionVector RotationRateAmount; // 0xf0(0x50)
	struct F*b021185d8b *5f89d5a9b1; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// Class Engine.*9a337e486b
// Size: 0x30 (Inherited: 0x30)
struct U*9a337e486b : UParticleModule {
};

// Class Engine.*e33a6a16c1
// Size: 0x38 (Inherited: 0x30)
struct U*e33a6a16c1 : U*9a337e486b {
	enum class *550ca13e03 LockAxisFlags; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleParameterBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleParameterBase : UParticleModule {
};

// Class Engine.*c3bdeb6183
// Size: 0x48 (Inherited: 0x30)
struct U*c3bdeb6183 : UParticleModuleParameterBase {
	struct TArray<struct F*ee7cb4da81> *d582919b5a; // 0x30(0x10)
	int32 *d10a1042b1; // 0x40(0x04)
	char *5cdf256264 : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class Engine.*b79762401a
// Size: 0x68 (Inherited: 0x48)
struct U*b79762401a : U*c3bdeb6183 {
	struct F*1174241ce4 *5a932732ee; // 0x48(0x20)
};

// Class Engine.SubUVAnimation
// Size: 0x60 (Inherited: 0x28)
struct USubUVAnimation : UObject {
	struct UTexture2D* *5c3a7b66dc; // 0x28(0x08)
	int32 *5b5a094ba4; // 0x30(0x04)
	int32 *ff358e2135; // 0x34(0x04)
	enum class *8fde7fcf2f *851fb2ec49; // 0x38(0x01)
	enum class *3223c2051b *236dcf8542; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float *cc624d2189; // 0x3c(0x04)
	char pad_40[0x20]; // 0x40(0x20)
};

// Class Engine.ParticleModuleRequired
// Size: 0x180 (Inherited: 0x30)
struct UParticleModuleRequired : UParticleModule {
	struct UMaterialInterface* Material; // 0x30(0x08)
	struct UMaterialInterface* *e1ef43a9b0; // 0x38(0x08)
	struct FVector4 *209d51f433; // 0x40(0x10)
	struct FVector *db5f78edb6; // 0x50(0x0c)
	struct FRotator *fbba5b4f99; // 0x5c(0x0c)
	enum class *95da0e439e *aee268ba85; // 0x68(0x01)
	enum class *184ad2a92d SortMode; // 0x69(0x01)
	enum class *a7190cabac *ea1054c992; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	float *597bdca05d; // 0x6c(0x04)
	float *c3dcd6a0f5; // 0x70(0x04)
	float *6f7bf9145f; // 0x74(0x04)
	char *bae636bbee : 1; // 0x78(0x01)
	char *3293c8fe5e : 1; // 0x78(0x01)
	char *3ad3173f95 : 1; // 0x78(0x01)
	char *3ff4d3c976 : 1; // 0x78(0x01)
	char *634bdf94a1 : 1; // 0x78(0x01)
	char *6da397a322 : 1; // 0x78(0x01)
	char *e9c2048e2f : 1; // 0x78(0x01)
	char *f9345c03df : 1; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float *e01d523c85; // 0x7c(0x04)
	float *7bcacad2e6; // 0x80(0x04)
	int32 *1107beda4c; // 0x84(0x04)
	struct F*1f6ca76ce9 SpawnRate; // 0x88(0x38)
	struct TArray<struct F*be6bfef784> *df5cb85a4f; // 0xc0(0x10)
	float *1c3db402f3; // 0xd0(0x04)
	float *55afbb6efe; // 0xd4(0x04)
	char *a3b486819f : 1; // 0xd8(0x01)
	char *8bb075f0b3 : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	enum class EParticleSubUVInterpMethod InterpolationMethod; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	int32 *5b5a094ba4; // 0xe0(0x04)
	int32 *ff358e2135; // 0xe4(0x04)
	char *47e7ab6f48 : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float *f298e1bc4d; // 0xec(0x04)
	int32 *b49881d210; // 0xf0(0x04)
	char *614d9303c2 : 1; // 0xf4(0x01)
	char pad_F4_1 : 7; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FVector MacroUVPosition; // 0xf8(0x0c)
	float MacroUVRadius; // 0x104(0x04)
	char *16c859d492 : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	int32 MaxDrawCount; // 0x10c(0x04)
	enum class EParticleUVFlipMode *7e62af5a79; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct UTexture2D* *fe7f166aef; // 0x118(0x08)
	enum class *8fde7fcf2f *851fb2ec49; // 0x120(0x01)
	enum class *3223c2051b *236dcf8542; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	float *cc624d2189; // 0x124(0x04)
	enum class *f0b29078c7 *66108af65a; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FVector *41301d514a; // 0x12c(0x0c)
	struct FVector *8291b00a27; // 0x138(0x0c)
	char *d9a2d01aee : 1; // 0x144(0x01)
	char pad_144_1 : 7; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	struct TArray<struct FName> *9567baaf7e; // 0x148(0x10)
	char pad_158[0x28]; // 0x158(0x28)
};

// Class Engine.*dccd762774
// Size: 0x30 (Inherited: 0x30)
struct U*dccd762774 : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotation
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleMeshRotation : U*dccd762774 {
	struct FRawDistributionVector *da38a9a2dc; // 0x30(0x50)
	char *c2b9afd8e7 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
// Size: 0xa8 (Inherited: 0x88)
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	struct F*1174241ce4 *5a932732ee; // 0x88(0x20)
};

// Class Engine.*5f1d3ffacf
// Size: 0x68 (Inherited: 0x30)
struct U*5f1d3ffacf : U*dccd762774 {
	struct F*1f6ca76ce9 *da38a9a2dc; // 0x30(0x38)
};

// Class Engine.*15160de3d3
// Size: 0x88 (Inherited: 0x68)
struct U*15160de3d3 : U*5f1d3ffacf {
	struct F*1174241ce4 *5a932732ee; // 0x68(0x20)
};

// Class Engine.ParticleModuleRotationOverLifetime
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleRotationOverLifetime : U*dccd762774 {
	struct F*1f6ca76ce9 *6228590cc2; // 0x30(0x38)
	char Scale : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*d2582e6ef5
// Size: 0x30 (Inherited: 0x30)
struct U*d2582e6ef5 : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotationRate
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleMeshRotationRate : U*d2582e6ef5 {
	struct FRawDistributionVector *1188bbc25d; // 0x30(0x50)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// Size: 0xa0 (Inherited: 0x80)
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	struct F*1174241ce4 *5a932732ee; // 0x80(0x20)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleMeshRotationRateMultiplyLife : U*d2582e6ef5 {
	struct FRawDistributionVector LifeMultiplier; // 0x30(0x50)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleMeshRotationRateOverLife : U*d2582e6ef5 {
	struct FRawDistributionVector *99fbbbacea; // 0x30(0x50)
	char *6290121b89 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*4e81561d90
// Size: 0x68 (Inherited: 0x30)
struct U*4e81561d90 : U*d2582e6ef5 {
	struct F*1f6ca76ce9 *1188bbc25d; // 0x30(0x38)
};

// Class Engine.*2904a896ad
// Size: 0x88 (Inherited: 0x68)
struct U*2904a896ad : U*4e81561d90 {
	struct F*1174241ce4 *5a932732ee; // 0x68(0x20)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleRotationRateMultiplyLife : U*d2582e6ef5 {
	struct F*1f6ca76ce9 LifeMultiplier; // 0x30(0x38)
};

// Class Engine.*f197a5c436
// Size: 0x30 (Inherited: 0x30)
struct U*f197a5c436 : UParticleModule {
};

// Class Engine.*9f5eafddcb
// Size: 0x80 (Inherited: 0x30)
struct U*9f5eafddcb : U*f197a5c436 {
	struct FRawDistributionVector *176feff119; // 0x30(0x50)
};

// Class Engine.*1c04dc6d27
// Size: 0xa0 (Inherited: 0x80)
struct U*1c04dc6d27 : U*9f5eafddcb {
	struct F*1174241ce4 *5a932732ee; // 0x80(0x20)
};

// Class Engine.ParticleModuleSizeMultiplyLife
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleSizeMultiplyLife : U*f197a5c436 {
	struct FRawDistributionVector LifeMultiplier; // 0x30(0x50)
	char *214cedccb9 : 1; // 0x80(0x01)
	char *01de95f1ec : 1; // 0x80(0x01)
	char *b99dcbdcbc : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleSizeScale
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleSizeScale : U*f197a5c436 {
	struct FRawDistributionVector SizeScale; // 0x30(0x50)
	char *406b480a59 : 1; // 0x80(0x01)
	char *b0690f5d33 : 1; // 0x80(0x01)
	char *e38d2913f7 : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleSizeScaleBySpeed : U*f197a5c436 {
	struct FVector2D *a5a441b923; // 0x30(0x08)
	struct FVector2D *c0c42a2cbd; // 0x38(0x08)
};

// Class Engine.*df7e3bc1e1
// Size: 0x38 (Inherited: 0x30)
struct U*df7e3bc1e1 : UParticleModule {
	char *aa7277b0bc : 1; // 0x30(0x01)
	char *3ac4203962 : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleSpawn
// Size: 0x100 (Inherited: 0x38)
struct UParticleModuleSpawn : U*df7e3bc1e1 {
	struct F*1f6ca76ce9 Rate; // 0x38(0x38)
	struct F*1f6ca76ce9 *3fb217b34a; // 0x70(0x38)
	enum class *a7190cabac *ea1054c992; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct F*be6bfef784> *df5cb85a4f; // 0xb0(0x10)
	struct F*1f6ca76ce9 *cc65f563a1; // 0xc0(0x38)
	char *ad0efa838b : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class Engine.*9f93b8556c
// Size: 0x88 (Inherited: 0x38)
struct U*9f93b8556c : U*df7e3bc1e1 {
	float *efcec9dc52; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct F*1f6ca76ce9 SpawnPerUnit; // 0x40(0x38)
	char *083c175fe6 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float *a97e896a07; // 0x7c(0x04)
	float *ad10aa64cb; // 0x80(0x04)
	char *ff6866224a : 1; // 0x84(0x01)
	char *c74c11687c : 1; // 0x84(0x01)
	char *02b0d6074c : 1; // 0x84(0x01)
	char pad_84_3 : 5; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// Class Engine.*fe1285ce02
// Size: 0x30 (Inherited: 0x30)
struct U*fe1285ce02 : UParticleModule {
};

// Class Engine.ParticleModuleSubUV
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleSubUV : U*fe1285ce02 {
	struct USubUVAnimation* Animation; // 0x30(0x08)
	struct F*1f6ca76ce9 SubImageIndex; // 0x38(0x38)
	char *be85a5017e : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.ParticleModuleSubUVMovie
// Size: 0xc0 (Inherited: 0x78)
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char *8d0ea853a6 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct F*1f6ca76ce9 FrameRate; // 0x80(0x38)
	int32 *9cd8cf41fc; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.ParticleModuleTrailBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleTrailBase : UParticleModule {
};

// Class Engine.*cceabd90c8
// Size: 0x98 (Inherited: 0x30)
struct U*cceabd90c8 : UParticleModuleTrailBase {
	enum class *e8d8707024 *19ea37e851; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName SourceName; // 0x38(0x08)
	struct F*1f6ca76ce9 *357272e187; // 0x40(0x38)
	char *8b9c4144be : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 SourceOffsetCount; // 0x7c(0x04)
	struct TArray<struct FVector> *04420de984; // 0x80(0x10)
	enum class *b18a229ca4 *d9fd92db87; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	char *3bf3ab31e9 : 1; // 0x94(0x01)
	char pad_94_1 : 7; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
};

// Class Engine.ParticleModuleTypeDataBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleTypeDataBase : UParticleModule {
};

// Class Engine.*5c62a352da
// Size: 0x48 (Inherited: 0x30)
struct U*5c62a352da : UParticleModuleTypeDataBase {
	char *f1ec9e86d7 : 1; // 0x30(0x01)
	char *7b5f494534 : 1; // 0x30(0x01)
	char *d88d844792 : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *7cc24707a7; // 0x34(0x04)
	float *7c59da416c; // 0x38(0x04)
	float *d857679814; // 0x3c(0x04)
	float *5caabe377c; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleTypeDataBeam2
// Size: 0x168 (Inherited: 0x30)
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	enum class *67c8017379 *7d24370559; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 *b92b930f60; // 0x34(0x04)
	float *7103690f47; // 0x38(0x04)
	int32 Sheets; // 0x3c(0x04)
	int32 MaxBeamCount; // 0x40(0x04)
	float Speed; // 0x44(0x04)
	int32 InterpolationPoints; // 0x48(0x04)
	char *cb2b746bf6 : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32 *2118ae6fbe; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FName *20b37f6043; // 0x58(0x08)
	struct F*1f6ca76ce9 Distance; // 0x60(0x38)
	enum class *75ffd13421 *9d6bf488de; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct F*1f6ca76ce9 TaperFactor; // 0xa0(0x38)
	struct F*1f6ca76ce9 *e834c4b5e0; // 0xd8(0x38)
	char RenderGeometry : 1; // 0x110(0x01)
	char *948657cc2a : 1; // 0x110(0x01)
	char *603af4a47f : 1; // 0x110(0x01)
	char *d705e4fc4d : 1; // 0x110(0x01)
	char pad_110_4 : 4; // 0x110(0x01)
	char pad_111[0x57]; // 0x111(0x57)
};

// Class Engine.ParticleModuleTypeDataGpu
// Size: 0x460 (Inherited: 0x30)
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	struct F*a9ca3abd5e *0f54ca0412; // 0x30(0x2c0)
	struct F*ce9d577b6b *9820f5bb53; // 0x2f0(0x160)
	float *f791c743a0; // 0x450(0x04)
	char *2d86e2d971 : 1; // 0x454(0x01)
	char pad_454_1 : 7; // 0x454(0x01)
	char pad_455[0xb]; // 0x455(0x0b)
};

// Class Engine.ParticleModuleTypeDataMesh
// Size: 0xb8 (Inherited: 0x30)
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	struct UStaticMesh* Mesh; // 0x30(0x08)
	char *1c5c08834d : 1; // 0x38(0x01)
	char *fc8188e56d : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	enum class *bd2be022d0 *abb971efd7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char *b12a39a7a8 : 1; // 0x40(0x01)
	char bOverrideDefaultMotionBlurSettings : 1; // 0x40(0x01)
	char *0092b026d1 : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Pitch; // 0x44(0x04)
	float Roll; // 0x48(0x04)
	float Yaw; // 0x4c(0x04)
	struct FRawDistributionVector *0fd855f1c0; // 0x50(0x50)
	char pad_A0[0x8]; // 0xa0(0x08)
	enum class *550ca13e03 *1fb21b55ad; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	char *f18e2b2785 : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	enum class *e3b7f44bb4 CameraFacingUpAxisOption; // 0xb0(0x01)
	enum class *442dcf6b8f *d068f68c51; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	char *8144d97b49 : 1; // 0xb4(0x01)
	char *04afca07f3 : 1; // 0xb4(0x01)
	char *b4902b1840 : 1; // 0xb4(0x01)
	char pad_B4_3 : 5; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
};

// Class Engine.ParticleModuleTypeDataRibbon
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32 MaxTessellationBetweenParticles; // 0x30(0x04)
	int32 SheetsPerTrail; // 0x34(0x04)
	int32 MaxTrailCount; // 0x38(0x04)
	int32 MaxParticleInTrailCount; // 0x3c(0x04)
	char *f1ec9e86d7 : 1; // 0x40(0x01)
	char *c19a888642 : 1; // 0x40(0x01)
	char *d2fff96cc7 : 1; // 0x40(0x01)
	char *7b5f494534 : 1; // 0x40(0x01)
	char *d88d844792 : 1; // 0x40(0x01)
	char *e164c6d511 : 1; // 0x40(0x01)
	char pad_40_6 : 2; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class *78359ff7c5 *41cffa78e2; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *d6b28091c2; // 0x48(0x04)
	char *d26badd0a5 : 1; // 0x4c(0x01)
	char *3fa6fc3945 : 1; // 0x4c(0x01)
	char *eb29212e1a : 1; // 0x4c(0x01)
	char *1fff1a5ad5 : 1; // 0x4c(0x01)
	char pad_4C_4 : 4; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float *7cc24707a7; // 0x50(0x04)
	float *7c59da416c; // 0x54(0x04)
	char *74621405e0 : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float *cede7e0f20; // 0x5c(0x04)
};

// Class Engine.ParticleModuleVectorFieldBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleVectorFieldBase : UParticleModule {
};

// Class Engine.*3daf92ae10
// Size: 0x40 (Inherited: 0x30)
struct U*3daf92ae10 : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *6b51e691cd; // 0x34(0x04)
	float *e389085b91; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*1d1e15f616
// Size: 0x68 (Inherited: 0x30)
struct U*1d1e15f616 : UParticleModuleVectorFieldBase {
	struct UVectorField* VectorField; // 0x30(0x08)
	struct FVector RelativeTranslation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
	struct FVector RelativeScale3D; // 0x50(0x0c)
	float Intensity; // 0x5c(0x04)
	float *93c60fe53a; // 0x60(0x04)
	char *d22adcbf96 : 1; // 0x64(0x01)
	char *95ac34b8eb : 1; // 0x64(0x01)
	char *5a5fd38ba7 : 1; // 0x64(0x01)
	char *a2db8a7133 : 1; // 0x64(0x01)
	char *db4fa2bfd4 : 1; // 0x64(0x01)
	char pad_64_5 : 3; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.*996af01bd1
// Size: 0x48 (Inherited: 0x30)
struct U*996af01bd1 : UParticleModuleVectorFieldBase {
	struct FVector *fe0871a6e8; // 0x30(0x0c)
	struct FVector *4f9b6caddf; // 0x3c(0x0c)
};

// Class Engine.*49d5abbe2d
// Size: 0x40 (Inherited: 0x30)
struct U*49d5abbe2d : UParticleModuleVectorFieldBase {
	struct FVector RotationRate; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.ParticleModuleVectorFieldScale
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	struct U*fcaa61cf2b* VectorFieldScale; // 0x30(0x08)
	struct F*1f6ca76ce9 *76c1ff1266; // 0x38(0x38)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	struct U*fcaa61cf2b* VectorFieldScaleOverLife; // 0x30(0x08)
	struct F*1f6ca76ce9 *1c11337b25; // 0x38(0x38)
};

// Class Engine.*463f04ebe2
// Size: 0x38 (Inherited: 0x30)
struct U*463f04ebe2 : UParticleModule {
	char *33cdbe6b9d : 1; // 0x30(0x01)
	char *0c5099cab1 : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*7eba83f2b5
// Size: 0xc0 (Inherited: 0x38)
struct U*7eba83f2b5 : U*463f04ebe2 {
	struct FRawDistributionVector *e87411520b; // 0x38(0x50)
	struct F*1f6ca76ce9 *3c7dc73a39; // 0x88(0x38)
};

// Class Engine.*ffab23c850
// Size: 0xe0 (Inherited: 0xc0)
struct U*ffab23c850 : U*7eba83f2b5 {
	struct F*1174241ce4 *5a932732ee; // 0xc0(0x20)
};

// Class Engine.*00214f2a77
// Size: 0xb8 (Inherited: 0x38)
struct U*00214f2a77 : U*463f04ebe2 {
	struct F*1f6ca76ce9 Angle; // 0x38(0x38)
	struct F*1f6ca76ce9 Velocity; // 0x70(0x38)
	struct FVector Direction; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class Engine.*e611f7e3bd
// Size: 0x88 (Inherited: 0x38)
struct U*e611f7e3bd : U*463f04ebe2 {
	struct FRawDistributionVector Scale; // 0x38(0x50)
};

// Class Engine.ParticleModuleVelocityOverLifetime
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleVelocityOverLifetime : U*463f04ebe2 {
	struct FRawDistributionVector *9924962e27; // 0x38(0x50)
	char Absolute : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*e7dabfb57c
// Size: 0x40 (Inherited: 0x28)
struct U*e7dabfb57c : UObject {
	int32 *d0287af4c9; // 0x28(0x04)
	char pad_2C[0x14]; // 0x2c(0x14)
};

// Class Engine.*3093585062
// Size: 0xc8 (Inherited: 0xc8)
struct U*3093585062 : U*ecaf7d9876 {
};

// Class Engine.PhysicalMaterial
// Size: 0x80 (Inherited: 0x28)
struct UPhysicalMaterial : UObject {
	float Friction; // 0x28(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x2c(0x01)
	bool bOverrideFrictionCombineMode; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float Restitution; // 0x30(0x04)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x34(0x01)
	bool bOverrideRestitutionCombineMode; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float Density; // 0x38(0x04)
	float RaiseMassToPower; // 0x3c(0x04)
	float DestructibleDamageThresholdScale; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UPhysicalMaterialPropertyBase* *329d97c322; // 0x48(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float *3fdbae2517; // 0x54(0x04)
	struct TArray<struct F*68f296e702> *eb3e86b304; // 0x58(0x10)
	char pad_68[0x18]; // 0x68(0x18)
};

// Class Engine.PhysicalMaterialPropertyBase
// Size: 0x28 (Inherited: 0x28)
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class Engine.PhysicsCollisionHandler
// Size: 0x40 (Inherited: 0x28)
struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x28(0x04)
	float ImpactReFireDelay; // 0x2c(0x04)
	struct USoundBase* DefaultImpactSound; // 0x30(0x08)
	float *a3ac6e93ce; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.PhysicsConstraintTemplate
// Size: 0x340 (Inherited: 0x28)
struct UPhysicsConstraintTemplate : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FConstraintInstance DefaultInstance; // 0x30(0x1f0)
	struct TArray<struct F*c1ca0859fa> *9831a8709a; // 0x220(0x10)
	struct F*ec0db6b5c0 DefaultProfile; // 0x230(0x104)
	char pad_334[0xc]; // 0x334(0x0c)
};

// Class Engine.PhysicsSerializer
// Size: 0xd0 (Inherited: 0x28)
struct UPhysicsSerializer : UObject {
	char pad_28[0xa8]; // 0x28(0xa8)
};

// Class Engine.*20d35f9aa7
// Size: 0x38 (Inherited: 0x28)
struct U*20d35f9aa7 : UObject {
	struct TArray<struct F*74a3712136> *d1e1c0a649; // 0x28(0x10)
};

// Class Engine.*7d8791b3df
// Size: 0x50 (Inherited: 0x38)
struct U*7d8791b3df : U*20d35f9aa7 {
	struct TArray<struct FString> *850d122ee9; // 0x38(0x10)
	char *a957608714 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*97fffeb55c
// Size: 0x60 (Inherited: 0x38)
struct U*97fffeb55c : U*20d35f9aa7 {
	char *448a23c665 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<DelegateProperty> *d1791c1b4c; // 0x40(0x10)
	struct TArray<DelegateProperty> *837c443a9b; // 0x50(0x10)
};

// Class Engine.*78ed7bf893
// Size: 0x68 (Inherited: 0x38)
struct U*78ed7bf893 : U*20d35f9aa7 {
	struct TArray<struct F*04144a7a7e> *c61cfd0571; // 0x38(0x10)
	struct FString LastError; // 0x48(0x10)
	struct FString *c9ebdee6a1; // 0x58(0x10)
};

// Class Engine.*5d04d990cb
// Size: 0x38 (Inherited: 0x38)
struct U*5d04d990cb : U*20d35f9aa7 {

	void *5fedff414d(); // Function Engine.*5d04d990cb.*5fedff414d // Native|Public // @ game+0x656f97c
	void Init(); // Function Engine.*5d04d990cb.Init // Native|Public // @ game+0x8d3f30
	void *4aaefeee7e(struct FString Param1); // Function Engine.*5d04d990cb.*4aaefeee7e // Native|Public // @ game+0x657e58c
	void *4463ee03a1(); // Function Engine.*5d04d990cb.*4463ee03a1 // Native|Public // @ game+0x64f741c
	void *01841691d6(); // Function Engine.*5d04d990cb.*01841691d6 // Native|Public // @ game+0x65754c0
	int32 *37987c7d72(); // Function Engine.*5d04d990cb.*37987c7d72 // Native|Public // @ game+0x6573fa4
	void *674327061d(struct FString Param0, enum class *0580551495 Param2); // Function Engine.*5d04d990cb.*674327061d // Native|Public|HasOutParms // @ game+0x65803b4
};

// Class Engine.*bdb74215f8
// Size: 0xb0 (Inherited: 0x28)
struct U*bdb74215f8 : UObject {
	struct FString *6be3d067ff; // 0x28(0x10)
	int32 ResponseCode; // 0x38(0x04)
	int32 Tag; // 0x3c(0x04)
	struct FString *7326be2519; // 0x40(0x10)
	struct TArray<bool> *4b902ccafd; // 0x50(0x10)
	char pad_60[0x50]; // 0x60(0x50)

	struct FString *d85212e5cf(); // Function Engine.*bdb74215f8.*d85212e5cf // Native|Public // @ game+0x6574e08
	void GetHeader(int32 Param0); // Function Engine.*bdb74215f8.GetHeader // Native|Public|HasOutParms // @ game+0x6574c60
	void *e0244745a5(); // Function Engine.*bdb74215f8.*e0244745a5 // Native|Public // @ game+0x65754e8
};

// Class Engine.ChildConnection
// Size: 0x65850 (Inherited: 0x65848)
struct UChildConnection : UNetConnection {
	struct UNetConnection* Parent; // 0x65848(0x08)
};

// Class Engine.Polys
// Size: 0x38 (Inherited: 0x28)
struct UPolys : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Engine.*9fad1fcae1
// Size: 0x30 (Inherited: 0x28)
struct U*9fad1fcae1 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Engine.*0552b739a3
// Size: 0xa8 (Inherited: 0x30)
struct U*0552b739a3 : U*9fad1fcae1 {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class Engine.ReverbEffect
// Size: 0x58 (Inherited: 0x28)
struct UReverbEffect : UObject {
	float Density; // 0x28(0x04)
	float Diffusion; // 0x2c(0x04)
	float Gain; // 0x30(0x04)
	float GainHF; // 0x34(0x04)
	float DecayTime; // 0x38(0x04)
	float DecayHFRatio; // 0x3c(0x04)
	float ReflectionsGain; // 0x40(0x04)
	float ReflectionsDelay; // 0x44(0x04)
	float LateGain; // 0x48(0x04)
	float LateDelay; // 0x4c(0x04)
	float AirAbsorptionGainHF; // 0x50(0x04)
	float RoomRolloffFactor; // 0x54(0x04)
};

// Class Engine.Rig
// Size: 0x48 (Inherited: 0x28)
struct URig : UObject {
	struct TArray<struct F*ae42bf7020> TransformBases; // 0x28(0x10)
	struct TArray<struct FNode> Nodes; // 0x38(0x10)
};

// Class Engine.SimpleConstructionScript
// Size: 0xb8 (Inherited: 0x28)
struct USimpleConstructionScript : UObject {
	struct TArray<struct USCS_Node*> *da60bbc5f0; // 0x28(0x10)
	struct TArray<struct USCS_Node*> *37dd744e74; // 0x38(0x10)
	struct USCS_Node* *57f3deffbc; // 0x48(0x08)
	struct USCS_Node* RootNode; // 0x50(0x08)
	struct TArray<struct USCS_Node*> ActorComponentNodes; // 0x58(0x10)
	char pad_68[0x50]; // 0x68(0x50)
};

// Class Engine.SCS_Node
// Size: 0x150 (Inherited: 0x28)
struct USCS_Node : UObject {
	struct UClass* ComponentClass; // 0x28(0x08)
	struct UActorComponent* *9e83f695db; // 0x30(0x08)
	struct F*1489c052de *8f11984777; // 0x38(0x50)
	struct FName VariableName; // 0x88(0x08)
	struct FName *903c386f90; // 0x90(0x08)
	struct FName *166d6569e5; // 0x98(0x08)
	struct FName *bc4965da1e; // 0xa0(0x08)
	bool *7b15d3936d; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct USCS_Node*> ChildNodes; // 0xb0(0x10)
	struct USCS_Node* *5944f804c7; // 0xc0(0x08)
	struct TArray<struct F*63fd250c8e> *f6a1c77db0; // 0xc8(0x10)
	struct FGuid VariableGuid; // 0xd8(0x10)
	bool bIsFalseRoot; // 0xe8(0x01)
	bool bIsNative; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	struct FName NativeComponentName; // 0xf0(0x08)
	bool bVariableNameAutoGenerated; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FName InternalVariableName; // 0x100(0x08)
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
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x2e8(0x88)
	struct TArray<struct F*096817792e> *450950621d; // 0x370(0x10)
	char pad_380[0x10]; // 0x380(0x10)
};

// Class Engine.SkeletalMeshReductionSettings
// Size: 0x40 (Inherited: 0x28)
struct USkeletalMeshReductionSettings : UObject {
	struct TArray<struct F*fb71fdc1c8> Settings; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class Engine.SkeletalMeshSocket
// Size: 0x60 (Inherited: 0x28)
struct USkeletalMeshSocket : UObject {
	struct FName SocketName; // 0x28(0x08)
	struct FName BoneName; // 0x30(0x08)
	struct FVector RelativeLocation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
	struct FVector RelativeScale; // 0x50(0x0c)
	bool bForceAlwaysAnimated; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)

	struct FVector *3e1f3b0717(); // Function Engine.SkeletalMeshSocket.*3e1f3b0717 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x657729c
	void *2529aa9c4b(struct USkeletalMeshComponent* SkelComp); // Function Engine.SkeletalMeshSocket.*2529aa9c4b // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65765e0
};

// Class Engine.SlateBrushAsset
// Size: 0xb8 (Inherited: 0x28)
struct USlateBrushAsset : UObject {
	struct FSlateBrush Brush; // 0x28(0x90)
};

// Class Engine.SlateTextureAtlasInterface
// Size: 0x28 (Inherited: 0x28)
struct USlateTextureAtlasInterface : UInterface {
};

// Class Engine.SoundConcurrency
// Size: 0x38 (Inherited: 0x28)
struct USoundConcurrency : UObject {
	struct F*e08a607206 Concurrency; // 0x28(0x10)
};

// Class Engine.*2b4e887f19
// Size: 0x40 (Inherited: 0x28)
struct U*2b4e887f19 : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class Engine.*2213872909
// Size: 0x40 (Inherited: 0x40)
struct U*2213872909 : U*2b4e887f19 {
};

// Class Engine.SoundSubmix
// Size: 0x50 (Inherited: 0x28)
struct USoundSubmix : UObject {
	struct TArray<struct USoundSubmix*> *de6022c4be; // 0x28(0x10)
	struct USoundSubmix* *0c8703f4f9; // 0x38(0x08)
	struct TArray<struct U*2213872909*> *c79965722b; // 0x40(0x10)
};

// Class Engine.SoundBase
// Size: 0xa0 (Inherited: 0x28)
struct USoundBase : UObject {
	struct USoundClass* *4d164f8034; // 0x28(0x08)
	char *9b74ad7dce : 1; // 0x30(0x01)
	char bOverrideConcurrency : 1; // 0x30(0x01)
	char bIgnoreFocus : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct USoundConcurrency* SoundConcurrencySettings; // 0x38(0x08)
	struct F*e08a607206 ConcurrencyOverrides; // 0x40(0x10)
	enum class EMaxConcurrentResolutionRule MaxConcurrentResolutionRule; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 MaxConcurrentPlayCount; // 0x54(0x04)
	float Duration; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x60(0x08)
	float Priority; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct USoundSubmix* SoundSubmixObject; // 0x70(0x08)
	struct TArray<struct F*aa7ad87262> SoundSubmixSends; // 0x78(0x10)
	float DefaultMasterReverbSendAmount; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct U*a00a72a663* SourceEffectChain; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class Engine.*012e5d8f7a
// Size: 0xc0 (Inherited: 0xa0)
struct U*012e5d8f7a : USoundBase {
	char pad_A0[0x20]; // 0xa0(0x20)
};

// Class Engine.SoundNode
// Size: 0x38 (Inherited: 0x28)
struct USoundNode : UObject {
	struct TArray<struct USoundNode*> ChildNodes; // 0x28(0x10)
};

// Class Engine.SoundCue
// Size: 0x1f8 (Inherited: 0xa0)
struct USoundCue : USoundBase {
	char bOverrideAttenuation : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct USoundNode* *72d832fa7f; // 0xa8(0x08)
	float *17bbb4843f; // 0xb0(0x04)
	float *f589f42444; // 0xb4(0x04)
	struct FSoundAttenuationSettings *991604c0af; // 0xb8(0x130)
	char pad_1E8[0x10]; // 0x1e8(0x10)
};

// Class Engine.SoundGroups
// Size: 0x88 (Inherited: 0x28)
struct USoundGroups : UObject {
	struct TArray<struct FSoundGroup> SoundGroupProfiles; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
};

// Class Engine.SoundWave
// Size: 0x288 (Inherited: 0xa0)
struct USoundWave : USoundBase {
	int32 CompressionQuality; // 0xa0(0x04)
	char bLooping : 1; // 0xa4(0x01)
	char *b663b2a659 : 1; // 0xa4(0x01)
	char pad_A4_2 : 6; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	int32 *72ad66dbc8; // 0xa8(0x04)
	char pad_AC_0 : 3; // 0xac(0x01)
	char *d7b6c5060d : 1; // 0xac(0x01)
	char *dc219157b6 : 1; // 0xac(0x01)
	char *3e730f2b50 : 1; // 0xac(0x01)
	char *c50aba7a65 : 1; // 0xac(0x01)
	char pad_AC_7 : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	enum class ESoundGroup SoundGroup; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FString *2539764669; // 0xb8(0x10)
	float *050cdad54c; // 0xc8(0x04)
	float Volume; // 0xcc(0x04)
	float Pitch; // 0xd0(0x04)
	int32 *e5d958eb2c; // 0xd4(0x04)
	int32 SampleRate; // 0xd8(0x04)
	int32 *60dfadd50c; // 0xdc(0x04)
	struct TArray<struct F*3f4e85b7ef> Subtitles; // 0xe0(0x10)
	struct TArray<struct F*b57c6c340b> *6b40d9f3d2; // 0xf0(0x10)
	struct UCurveTable* Curves; // 0x100(0x08)
	struct UCurveTable* *0b3c488837; // 0x108(0x08)
	char pad_110[0x178]; // 0x110(0x178)
};

// Class Engine.*3e9397310b
// Size: 0x310 (Inherited: 0x288)
struct U*3e9397310b : USoundWave {
	char pad_288[0x88]; // 0x288(0x88)
};

// Class Engine.SoundClass
// Size: 0x80 (Inherited: 0x28)
struct USoundClass : UObject {
	struct F*0e13ba3944 Properties; // 0x28(0x2c)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct USoundClass*> ChildClasses; // 0x58(0x10)
	struct TArray<struct FPassiveSoundMixModifier> *c4386acabb; // 0x68(0x10)
	struct USoundClass* ParentClass; // 0x78(0x08)
};

// Class Engine.*d07c698665
// Size: 0x40 (Inherited: 0x40)
struct U*d07c698665 : U*2b4e887f19 {
};

// Class Engine.*a00a72a663
// Size: 0x40 (Inherited: 0x28)
struct U*a00a72a663 : UObject {
	struct TArray<struct F*128c807eb7> Chain; // 0x28(0x10)
	char *8a29c0dfd1 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.SoundMix
// Size: 0x88 (Inherited: 0x28)
struct USoundMix : UObject {
	char *6f296b7b9e : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *69a3286523; // 0x2c(0x04)
	struct FAudioEQEffect *46c0de2cf7; // 0x30(0x38)
	struct TArray<struct F*d2a15c58d6> *e2f3428443; // 0x68(0x10)
	float InitialDelay; // 0x78(0x04)
	float *7c62afaa72; // 0x7c(0x04)
	float Duration; // 0x80(0x04)
	float *d170218080; // 0x84(0x04)
};

// Class Engine.*4fb333cd78
// Size: 0x38 (Inherited: 0x38)
struct U*4fb333cd78 : USoundNode {
};

// Class Engine.SoundNodeWavePlayer
// Size: 0x68 (Inherited: 0x38)
struct USoundNodeWavePlayer : U*4fb333cd78 {
	struct USoundWave* SoundWaveAssetPtr; // 0x38(0x20)
	struct USoundWave* SoundWave; // 0x58(0x08)
	char pad_60_0 : 1; // 0x60(0x01)
	char bLooping : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*c59ffa07f3
// Size: 0x178 (Inherited: 0x38)
struct U*c59ffa07f3 : USoundNode {
	struct USoundAttenuation* AttenuationSettings; // 0x38(0x08)
	struct FSoundAttenuationSettings *991604c0af; // 0x40(0x130)
	char bOverrideAttenuation : 1; // 0x170(0x01)
	char pad_170_1 : 7; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
};

// Class Engine.SoundNodeBranch
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeBranch : USoundNode {
	struct FName *bbd397e044; // 0x38(0x08)
};

// Class Engine.*db2f3a9f40
// Size: 0x48 (Inherited: 0x38)
struct U*db2f3a9f40 : USoundNode {
	struct TArray<float> *7e5155f2de; // 0x38(0x10)
};

// Class Engine.*a0f1f30722
// Size: 0x40 (Inherited: 0x38)
struct U*a0f1f30722 : USoundNode {
	float *db110b47a3; // 0x38(0x04)
	float *c14c07a546; // 0x3c(0x04)
};

// Class Engine.SoundNodeDialoguePlayer
// Size: 0x60 (Inherited: 0x38)
struct USoundNodeDialoguePlayer : USoundNode {
	struct FDialogueWaveParameter DialogueWaveParameter; // 0x38(0x20)
	char bLooping : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.*67856214e3
// Size: 0x48 (Inherited: 0x38)
struct U*67856214e3 : USoundNode {
	struct TArray<struct FDistanceDatum> *67a8fa21f5; // 0x38(0x10)
};

// Class Engine.*874353d01b
// Size: 0x50 (Inherited: 0x48)
struct U*874353d01b : U*67856214e3 {
	struct FName ParamName; // 0x48(0x08)
};

// Class Engine.*df38c8cb52
// Size: 0x40 (Inherited: 0x38)
struct U*df38c8cb52 : USoundNode {
	float *5bf1dd1515; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*3f0a8e321a
// Size: 0x160 (Inherited: 0x38)
struct U*3f0a8e321a : USoundNode {
	float *dc4d053a61; // 0x38(0x04)
	float LoopEnd; // 0x3c(0x04)
	float *33306f7d96; // 0x40(0x04)
	int32 *bbca9b0217; // 0x44(0x04)
	char *1fd6d4717a : 1; // 0x48(0x01)
	char bLoop : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct U*d47cde08e3* VolumeInterpCurve; // 0x50(0x08)
	struct U*d47cde08e3* PitchInterpCurve; // 0x58(0x08)
	struct FRuntimeFloatCurve VolumeCurve; // 0x60(0x78)
	struct FRuntimeFloatCurve *62460a3ee4; // 0xd8(0x78)
	float *74d9a19e25; // 0x150(0x04)
	float *a5fb5c2f3b; // 0x154(0x04)
	float *23f999e168; // 0x158(0x04)
	float *ad190b3227; // 0x15c(0x04)
};

// Class Engine.*0945659202
// Size: 0x48 (Inherited: 0x38)
struct U*0945659202 : USoundNode {
	struct TArray<int32> *1ec4a6a0ea; // 0x38(0x10)
};

// Class Engine.*a6707766f4
// Size: 0x40 (Inherited: 0x38)
struct U*a6707766f4 : USoundNode {
	int32 *bbca9b0217; // 0x38(0x04)
	char *1fd6d4717a : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class Engine.SoundNodeMature
// Size: 0x38 (Inherited: 0x38)
struct USoundNodeMature : USoundNode {
};

// Class Engine.*1ae01eaefc
// Size: 0x48 (Inherited: 0x38)
struct U*1ae01eaefc : USoundNode {
	struct TArray<float> *7e5155f2de; // 0x38(0x10)
};

// Class Engine.*ec0fa44f4a
// Size: 0x48 (Inherited: 0x38)
struct U*ec0fa44f4a : USoundNode {
	float *74d9a19e25; // 0x38(0x04)
	float *a5fb5c2f3b; // 0x3c(0x04)
	float *23f999e168; // 0x40(0x04)
	float *ad190b3227; // 0x44(0x04)
};

// Class Engine.*e8a52e0019
// Size: 0x78 (Inherited: 0x38)
struct U*e8a52e0019 : USoundNode {
	struct F*f297ac1a47 *13448a8370; // 0x38(0x20)
	struct F*f297ac1a47 *85f0c88005; // 0x58(0x20)
};

// Class Engine.*b39a1b1ed1
// Size: 0x60 (Inherited: 0x38)
struct U*b39a1b1ed1 : USoundNode {
	char *09f84b680c : 1; // 0x38(0x01)
	char *908c905d13 : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *925a27f12e; // 0x3c(0x04)
	float *adc79facff; // 0x40(0x04)
	float *29a049a190; // 0x44(0x04)
	float *0dccaf043e; // 0x48(0x04)
	float *5e7c877f7b; // 0x4c(0x04)
	float *330c43b7b9; // 0x50(0x04)
	float *c40ef6d378; // 0x54(0x04)
	float *7572d2cc9a; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.*dbd4234aba
// Size: 0x38 (Inherited: 0x38)
struct U*dbd4234aba : USoundNode {
};

// Class Engine.*a27a0611c9
// Size: 0x68 (Inherited: 0x38)
struct U*a27a0611c9 : USoundNode {
	struct TArray<float> Weights; // 0x38(0x10)
	int32 *b0ca7ac070; // 0x48(0x04)
	char *f1f7999ef5 : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<bool> *06f361b53c; // 0x50(0x10)
	int32 *b088341dde; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.*0a5e513611
// Size: 0x40 (Inherited: 0x38)
struct U*0a5e513611 : USoundNode {
	struct USoundClass* *d6ee480fd1; // 0x38(0x08)
};

// Class Engine.SoundNodeSwitch
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeSwitch : USoundNode {
	struct FName *9aede33a86; // 0x38(0x08)
};

// Class Engine.*b90129805e
// Size: 0x40 (Inherited: 0x38)
struct U*b90129805e : USoundNode {
	struct FName *7de5a33a20; // 0x38(0x08)
};

// Class Engine.*c90fb310e3
// Size: 0x68 (Inherited: 0x28)
struct U*c90fb310e3 : UObject {
	struct FName SocketName; // 0x28(0x08)
	struct FVector RelativeLocation; // 0x30(0x0c)
	struct FRotator RelativeRotation; // 0x3c(0x0c)
	struct FVector RelativeScale; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString Tag; // 0x58(0x10)
};

// Class Engine.StringTable
// Size: 0x40 (Inherited: 0x28)
struct UStringTable : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class Engine.SubsurfaceProfile
// Size: 0x50 (Inherited: 0x28)
struct USubsurfaceProfile : UObject {
	struct FSubsurfaceProfileStruct Settings; // 0x28(0x24)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*154bbce0d7
// Size: 0x70 (Inherited: 0x28)
struct U*154bbce0d7 : UObject {
	struct FText DefaultedText; // 0x28(0x18)
	struct FText UndefaultedText; // 0x40(0x18)
	struct FText *51e80c1722; // 0x58(0x18)
};

// Class Engine.LightMapTexture2D
// Size: 0x270 (Inherited: 0x260)
struct ULightMapTexture2D : UTexture2D {
	char pad_260[0x10]; // 0x260(0x10)
};

// Class Engine.*4476f5f7a5
// Size: 0x270 (Inherited: 0x260)
struct U*4476f5f7a5 : UTexture2D {
	enum class *1701574191 *baa765721b; // 0x260(0x01)
	char pad_261[0xf]; // 0x261(0x0f)
};

// Class Engine.Texture2DArray
// Size: 0x260 (Inherited: 0x260)
struct UTexture2DArray : UTexture2D {
};

// Class Engine.*42bee7f7f3
// Size: 0x270 (Inherited: 0x260)
struct U*42bee7f7f3 : UTexture2D {
	float Brightness; // 0x260(0x04)
	float *f41e800d3c; // 0x264(0x04)
	char pad_268[0x8]; // 0x268(0x08)
};

// Class Engine.*ef97e2e879
// Size: 0x190 (Inherited: 0x170)
struct U*ef97e2e879 : UTexture {
	char pad_170[0x8]; // 0x170(0x08)
	enum class EPixelFormat Format; // 0x178(0x01)
	char pad_179[0x17]; // 0x179(0x17)
};

// Class Engine.*41332d18e9
// Size: 0x1c0 (Inherited: 0x1a0)
struct U*41332d18e9 : UTextureRenderTarget2D {
	struct FMulticastDelegate OnCanvasRenderTargetUpdate; // 0x1a0(0x10)
	struct UWorld* World; // 0x1b0(0x08)
	bool *6b498341d0; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)

	int32 ReceiveUpdate(); // Function Engine.*41332d18e9.ReceiveUpdate // Event|Public|BlueprintEvent // @ game+0x293938
	void *aef55e8aa7(struct UObject* WorldContextObject, int32 Width); // Function Engine.*41332d18e9.*aef55e8aa7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6571e98
	int32 GetSize(); // Function Engine.*41332d18e9.GetSize // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65764c4
	void *2f146c4e8f(); // Function Engine.*41332d18e9.*2f146c4e8f // Native|Public|BlueprintCallable // @ game+0x57e39e0
};

// Class Engine.TextureRenderTargetCube
// Size: 0x1a0 (Inherited: 0x180)
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32 SizeX; // 0x178(0x04)
	struct FLinearColor ClearColor; // 0x17c(0x10)
	enum class EPixelFormat *6d32a03066; // 0x18c(0x01)
	char bHDR : 1; // 0x190(0x01)
	char *e2bee928f1 : 1; // 0x190(0x01)
	char pad_195_2 : 6; // 0x195(0x01)
	char pad_196[0xa]; // 0x196(0x0a)
};

// Class Engine.TextureLODSettings
// Size: 0x38 (Inherited: 0x28)
struct UTextureLODSettings : UObject {
	struct TArray<struct FTextureLODGroup> TextureLODGroups; // 0x28(0x10)
};

// Class Engine.DeviceProfile
// Size: 0xd0 (Inherited: 0x38)
struct UDeviceProfile : UTextureLODSettings {
	struct FString DeviceType; // 0x38(0x10)
	struct FString BaseProfileName; // 0x48(0x10)
	struct UObject* Parent; // 0x58(0x08)
	char pad_60[0x18]; // 0x60(0x18)
	struct TArray<struct FString> CVars; // 0x78(0x10)
	char pad_88[0x48]; // 0x88(0x48)
};

// Class Engine.*9ce447c5cf
// Size: 0x28 (Inherited: 0x28)
struct U*9ce447c5cf : UObject {
};

// Class Engine.*bd91982c84
// Size: 0x98 (Inherited: 0x28)
struct U*bd91982c84 : UObject {
	float *75ae3a86a1; // 0x28(0x04)
	enum class *1d7cbf4b50 *ef5644458f; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	char *48b90a7939 : 1; // 0x30(0x01)
	char bLoop : 1; // 0x30(0x01)
	char bReplicated : 1; // 0x30(0x01)
	char *9ce2e2d613 : 1; // 0x30(0x01)
	char *4c44f735ef : 1; // 0x30(0x01)
	char pad_30_5 : 3; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*2d64b7c056> *4a3c0d2b50; // 0x38(0x10)
	struct TArray<struct F*a5cd0c4b6f> *70fb5aa537; // 0x48(0x10)
	struct TArray<struct F*34a639fbe9> *7988905ef2; // 0x58(0x10)
	struct TArray<struct F*db1528815f> *fa0301edf1; // 0x68(0x10)
	struct TArray<struct F*63fd250c8e> *f6a1c77db0; // 0x78(0x10)
	struct FGuid *7be16573f3; // 0x88(0x10)
};

// Class Engine.TouchInterface
// Size: 0x58 (Inherited: 0x28)
struct UTouchInterface : UObject {
	struct TArray<struct F*b2c6bf31e7> Controls; // 0x28(0x10)
	float *65635a456d; // 0x38(0x04)
	float *d79ff84958; // 0x3c(0x04)
	float *1b525456f9; // 0x40(0x04)
	float *184f448817; // 0x44(0x04)
	float *dbb2476b6e; // 0x48(0x04)
	bool *6e9a3049c6; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float StartupDelay; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.UserDefinedEnum
// Size: 0xc0 (Inherited: 0x70)
struct UUserDefinedEnum : UEnum {
	struct TMap<struct FName, struct FText> *9415fd3d90; // 0x70(0x50)
};

// Class Engine.VectorField
// Size: 0x48 (Inherited: 0x28)
struct UVectorField : UObject {
	struct FBox Bounds; // 0x28(0x1c)
	float Intensity; // 0x44(0x04)
};

// Class Engine.*bf17553837
// Size: 0x88 (Inherited: 0x48)
struct U*bf17553837 : UVectorField {
	struct UTexture2D* Texture; // 0x48(0x08)
	enum class *0d2d8dba28 *6ba5406134; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 *48e5cd6d7d; // 0x54(0x04)
	int32 *39b9963162; // 0x58(0x04)
	int32 *292995dd6d; // 0x5c(0x04)
	int32 *3002c72ae3; // 0x60(0x04)
	int32 *8abf1b9260; // 0x64(0x04)
	int32 FrameCount; // 0x68(0x04)
	float FramesPerSecond; // 0x6c(0x04)
	char bLoop : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct U*182d1d26a5* NoiseField; // 0x78(0x08)
	float NoiseScale; // 0x80(0x04)
	float *a5fd65ea5a; // 0x84(0x04)
};

// Class Engine.*182d1d26a5
// Size: 0xe0 (Inherited: 0x48)
struct U*182d1d26a5 : UVectorField {
	int32 SizeX; // 0x48(0x04)
	int32 SizeY; // 0x4c(0x04)
	int32 *e0ff88db2d; // 0x50(0x04)
	char pad_54[0x8c]; // 0x54(0x8c)
};

// Class Engine.*2108358112
// Size: 0x28 (Inherited: 0x28)
struct U*2108358112 : UObject {
};

// Class Engine.*f346b904eb
// Size: 0x28 (Inherited: 0x28)
struct U*f346b904eb : UInterface {
};

// Class Engine.*e4deae045e
// Size: 0x58 (Inherited: 0x28)
struct U*e4deae045e : UObject {
	struct FGuid ID; // 0x28(0x10)
	enum class EVolumetricDataFormat Format; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector VoxelSize; // 0x3c(0x0c)
	float SamplingScale; // 0x48(0x04)
	float *798c22b41f; // 0x4c(0x04)
	float MaxDrawDistance; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.WorldComposition
// Size: 0x90 (Inherited: 0x28)
struct UWorldComposition : UObject {
	char pad_28[0x38]; // 0x28(0x38)
	struct TArray<struct ULevelStreaming*> *30095e29d6; // 0x60(0x10)
	double TilesStreamingTimeThreshold; // 0x70(0x08)
	bool bLoadAllTilesDuringCinematic; // 0x78(0x01)
	bool bRebaseOriginIn3DSpace; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	float RebaseOriginDistance; // 0x7c(0x04)
	struct TArray<struct FString> IgnoreStreamingPrefix; // 0x80(0x10)
};


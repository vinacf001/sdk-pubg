// Class Landscape.ControlPointMeshComponent
// Size: 0xba0 (Inherited: 0xba0)
struct UControlPointMeshComponent : UStaticMeshComponent {
	int32 ForcedLodModel; // 0xb00(0x04)
	int32 *66a6cd3343; // 0xb04(0x04)
	bool bOverrideMinLOD; // 0xb08(0x01)
	int32 MinLOD; // 0xb0c(0x04)
	struct UStaticMesh* StaticMesh; // 0xb10(0x08)
	bool bOverrideWireframeColor; // 0xb18(0x01)
	struct FColor WireframeColorOverride; // 0xb1c(0x04)
	struct FLinearColor PerInstanceCustomData; // 0xb20(0x10)
	char *a28fc20375 : 1; // 0xb30(0x01)
	char *a6e890a6e8 : 1; // 0xb30(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0xb30(0x01)
	char *72ad19ace5 : 1; // 0xb30(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0xb30(0x01)
	char bOverrideLightMapRes : 1; // 0xb30(0x01)
	int32 OverriddenLightMapRes; // 0xb34(0x04)
	char bCastDistanceFieldIndirectShadow : 1; // 0xb38(0x01)
	float DistanceFieldIndirectShadowMinVisibility; // 0xb3c(0x04)
	float StreamingDistanceMultiplier; // 0xb40(0x04)
	int32 *0f0f75dabf; // 0xb44(0x04)
	char *9a59516d8b : 1; // 0xb48(0x01)
	struct TArray<struct FGuid> IrrelevantLights; // 0xb50(0x10)
	struct TArray<struct F*e52484916f> *6f651a8a78; // 0xb60(0x10)
	struct TArray<struct F*2680edbad5> *65df47e5bb; // 0xb70(0x10)
	bool *5b1ebb8f11; // 0xb80(0x01)
	struct F*553842a41b LightmassSettings; // 0xb84(0x18)

	struct UStaticMesh* SetStaticMesh(); // Function Engine.StaticMeshComponent.SetStaticMesh // Native|Public|BlueprintCallable // @ game+0x5e48cd0
	struct FVector *34b9302e3c(); // Function Engine.StaticMeshComponent.*34b9302e3c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638fe70
	void OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // Final|Native|Public // @ game+0x63997a4
	void *488bd86f9f(); // Function Engine.StaticMeshComponent.*488bd86f9f // Final|Native|Public|BlueprintCallable // @ game+0x63a0fac
};

// Class Landscape.LandscapeComponent
// Size: 0xb60 (Inherited: 0xa00)
struct ULandscapeComponent : UPrimitiveComponent {
	int32 SectionBaseX; // 0x9f8(0x04)
	int32 SectionBaseY; // 0x9fc(0x04)
	int32 *7dcda9b4a3; // 0xa00(0x04)
	int32 *e08946e5a5; // 0xa04(0x04)
	int32 *5cd5fd738e; // 0xa08(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0xa10(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0xa18(0x08)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0xa20(0x10)
	struct TArray<struct F*23fe8b97ca> *fd89319904; // 0xa30(0x10)
	struct TArray<struct UTexture2D*> *665d1ed139; // 0xa40(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0xa50(0x08)
	struct FIntPoint *6659267aa2; // 0xa58(0x08)
	struct FVector4 *09d715b250; // 0xa60(0x10)
	float *fbe12384ef; // 0xa70(0x04)
	struct UTexture2D* HeightmapTexture; // 0xa78(0x08)
	struct UTexture2D* NormalmapTexture; // 0xa80(0x08)
	struct FBox *f8b8cc76e9; // 0xa88(0x1c)
	struct ULandscapeHeightfieldCollisionComponent* CollisionComponent; // 0xaa4(0x1c)
	struct FGuid *db40c61005; // 0xac0(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0xad0(0x10)
	int32 CollisionMipLevel; // 0xae0(0x04)
	int32 *3431eed4b8; // 0xae4(0x04)
	float *a8da434a60; // 0xae8(0x04)
	float *b2b842a97e; // 0xaec(0x04)
	float StaticLightingResolution; // 0xaf0(0x04)
	int32 ForcedLOD; // 0xaf4(0x04)
	int32 LODBias; // 0xaf8(0x04)
	struct FGuid *f498029bb1; // 0xafc(0x10)
	struct FGuid *ef92c76489; // 0xb0c(0x10)
	char pad_B1C[0x4]; // 0xb1c(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0xb20(0x08)
	bool *721691317e; // 0xb28(0x01)
	bool *c09245034f; // 0xb29(0x01)
	char pad_B2A[0x6]; // 0xb2a(0x06)
	struct UMaterialInterface* *af0bbba471; // 0xb30(0x08)
	struct UTexture2D* *e85769d689; // 0xb38(0x08)
	char pad_B40[0x20]; // 0xb40(0x20)
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x3f0 (Inherited: 0x3f0)
struct ALandscapeGizmoActor : AActor {
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

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x440 (Inherited: 0x3f0)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
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

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0xa00 (Inherited: 0xa00)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x4d8(0x04)
	float LDMaxDrawDistance; // 0x4dc(0x04)
	float CachedMaxDrawDistance; // 0x4e0(0x04)
	enum class *3c659ab94c *7512e3d028; // 0x4e4(0x01)
	enum class *3c659ab94c *d9fcd9b4bb; // 0x4e5(0x01)
	char pad_A0E_0 : 3; // 0xa0e(0x01)
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
	char *668636af81 : 1; // 0x4f5(0x01)
	char *b3a3eee86b : 1; // 0x4f6(0x01)
	char *07830a14a6 : 1; // 0x4f6(0x01)
	enum class EDecalChannel DecalChannel; // 0x4f8(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x4f9(0x01)
	struct FLightingChannels LightingChannels; // 0x4fa(0x03)
	enum class *d315e71b47 IndirectLightingCacheQuality; // 0x4fd(0x01)
	bool CustomDepthStencilValue; // 0x4fe(0x01)
	enum class *6e131cfc7f CustomDepthStencilWriteMask; // 0x4ff(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x500(0x10)
	int32 TranslucencySortPriority; // 0x510(0x04)
	int32 *6862844184; // 0x514(0x04)
	float LpvBiasMultiplier; // 0x51c(0x04)
	struct FBodyInstance BodyInstance; // 0x520(0x230)
	enum class EHasCustomNavigableGeometry *9a13a32dd1; // 0x758(0x01)
	float BoundsScale; // 0x794(0x04)
	float *aa675c3c9f; // 0x798(0x04)
	float *8aba3be418; // 0x79c(0x04)
	float *69906a8560; // 0x7a0(0x04)
	enum class *ed39c8987e CanBeCharacterBase; // 0x7a4(0x01)
	enum class *ed39c8987e CanCharacterStepUpOn; // 0x7a6(0x01)
	struct TArray<struct AActor*> *5559023e99; // 0x7a8(0x10)
	struct TArray<struct UPrimitiveComponent*> *34f682ee35; // 0x7b8(0x10)
	struct FMulticastDelegate OnComponentHit; // 0x880(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x890(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x8a0(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x8b0(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x8c0(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x8e0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8f0(0x10)
	struct FMulticastDelegate OnClicked; // 0x900(0x10)
	struct FMulticastDelegate OnReleased; // 0x910(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x920(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x930(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x940(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x950(0x10)
	struct UPrimitiveComponent* *afbfc200cf; // 0x988(0x08)
	struct UPrimitiveComponent* *c423c7f1c7; // 0x990(0x08)
	struct F*1d83c9bd93 *605bfc3d64; // 0x998(0x58)

	struct FVector AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6383740
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638ff78
	void *3f4951ae21(); // Function Engine.PrimitiveComponent.*3f4951ae21 // Native|Public|BlueprintCallable // @ game+0x63a1f20
	void *aa442ff688(); // Function Engine.PrimitiveComponent.*aa442ff688 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6392e38
	enum class *d6dc0510f4 *2acabdc4bc(); // Function Engine.PrimitiveComponent.*2acabdc4bc // Native|Public|HasDefaults|BlueprintCallable // @ game+0x63844e0
	void *dfb097147a(); // Function Engine.PrimitiveComponent.*dfb097147a // Native|Public|BlueprintCallable // @ game+0x5b4d80
	void *1d5b572e97(); // Function Engine.PrimitiveComponent.*1d5b572e97 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63968d8
	struct AActor* *58360a298b(); // Function Engine.PrimitiveComponent.*58360a298b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63931d0
	struct UMaterialInterface* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // Native|Public|BlueprintCallable // @ game+0x6388de8
	void *155e776c01(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.*155e776c01 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d7fc
	enum class *d6dc0510f4 *776b623f1e(); // Function Engine.PrimitiveComponent.*776b623f1e // Native|Public|HasDefaults|BlueprintCallable // @ game+0x63846b4
	void *401e8be8c9(); // Function Engine.PrimitiveComponent.*401e8be8c9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6396908
	void *6c17800325(); // Function Engine.PrimitiveComponent.*6c17800325 // Native|Public|BlueprintCallable // @ game+0x63a0078
	void *1060cf1432(); // Function Engine.PrimitiveComponent.*1060cf1432 // Final|Native|Public|BlueprintCallable // @ game+0x63a08ac
	void *733d8ffdab(); // Function Engine.PrimitiveComponent.*733d8ffdab // Native|Public|BlueprintCallable // @ game+0x63a2bc4
	void *c09d067d0f(); // Function Engine.PrimitiveComponent.*c09d067d0f // Final|Native|Public|BlueprintCallable // @ game+0x63a3460
	void *dfc478eaef(); // Function Engine.PrimitiveComponent.*dfc478eaef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63924d0
	void *d70adb1efd(float MassInKg); // Function Engine.PrimitiveComponent.*d70adb1efd // Native|Public|BlueprintCallable // @ game+0x63a2190
	struct FVector K2_LineTraceComponent(struct FName BoneName); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x639693c
	void *8f296e8ac0(); // Function Engine.PrimitiveComponent.*8f296e8ac0 // Final|Native|Public|BlueprintCallable // @ game+0x63a2a68
	void *3579dd87c5(); // Function Engine.PrimitiveComponent.*3579dd87c5 // Native|Public|BlueprintCallable // @ game+0x63929ac
	int32 *c513e9cfca(); // Function Engine.PrimitiveComponent.*c513e9cfca // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6390108
	void CreateAndSetMaterialInstanceDynamic(bool bConcurrent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // Native|Public|BlueprintCallable // @ game+0x6388cf8
	void SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // Native|Public|BlueprintCallable // @ game+0x568aeec
	int32 *c602cc5bf9(); // Function Engine.PrimitiveComponent.*c602cc5bf9 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6390064
	void *6f5a420568(); // Function Engine.PrimitiveComponent.*6f5a420568 // Final|Native|Public|BlueprintCallable // @ game+0x63a3588
	void *4179761c58(); // Function Engine.PrimitiveComponent.*4179761c58 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63852ec
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // Native|Public|BlueprintCallable // @ game+0xb7f5ac
	struct FName GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x63912b0
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // Final|Native|Public|BlueprintCallable // @ game+0x6388be8
	void *c4ebdc3c8f(struct AActor* Actor); // Function Engine.PrimitiveComponent.*c4ebdc3c8f // Final|Native|Public|BlueprintCallable // @ game+0x63925b4
	struct FName AddTorque(); // Function Engine.PrimitiveComponent.AddTorque // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6384b74
	void *5b3c874cbe(struct FVector NewAngVel); // Function Engine.PrimitiveComponent.*5b3c874cbe // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x639e494
	void *baff305a0b(); // Function Engine.PrimitiveComponent.*baff305a0b // Native|Public|BlueprintCallable // @ game+0x63a010c
	void *b24da2aba6(); // Function Engine.PrimitiveComponent.*b24da2aba6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63908c4
	void *6d15f9d7fc(); // Function Engine.PrimitiveComponent.*6d15f9d7fc // Final|Native|Public|BlueprintCallable // @ game+0x638593c
	struct UPrimitiveComponent* *bba26f131c(); // Function Engine.PrimitiveComponent.*bba26f131c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6393270
	void SetPhysicsLinearVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x92e96c
	bool SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // Final|Native|Public|BlueprintCallable // @ game+0x63a2c58
	void *10c86d98d5(); // Function Engine.PrimitiveComponent.*10c86d98d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63909f8
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // Native|Public|BlueprintCallable // @ game+0x6382fb0
	void *fc3da87902(); // Function Engine.PrimitiveComponent.*fc3da87902 // Native|Public|BlueprintCallable // @ game+0x63a287c
	void *1e088aa233(); // Function Engine.PrimitiveComponent.*1e088aa233 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x63a4a0c
	struct FName *9d203d4e3a(); // Function Engine.PrimitiveComponent.*9d203d4e3a // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638efd0
	void *7ab8b110bc(); // Function Engine.PrimitiveComponent.*7ab8b110bc // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638fe44
	void *cefd2a89e7(); // Function Engine.PrimitiveComponent.*cefd2a89e7 // Native|Public|BlueprintCallable // @ game+0x63a22bc
	void *4135b69ecb(); // Function Engine.PrimitiveComponent.*4135b69ecb // Final|Native|Public|BlueprintCallable // @ game+0x63a34f4
	struct FName AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6382d2c
	void *065d5e11f8(struct FName BoneName); // Function Engine.PrimitiveComponent.*065d5e11f8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x638d2a8
	void *e06446eb04(); // Function Engine.PrimitiveComponent.*e06446eb04 // Final|Native|Public|BlueprintCallable // @ game+0x639aadc
	void *f6986ba874(); // Function Engine.PrimitiveComponent.*f6986ba874 // Final|Native|Public|BlueprintCallable // @ game+0x63a3f78
	bool *285b57600a(); // Function Engine.PrimitiveComponent.*285b57600a // Native|Public|BlueprintCallable // @ game+0x63a421c
	void *5cdc853a89(); // Function Engine.PrimitiveComponent.*5cdc853a89 // Final|Native|Public|BlueprintCallable // @ game+0x63a093c
	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // Native|Public|BlueprintCallable // @ game+0x639ffe0
	struct FVector AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6383de0
	void *b9e13958df(); // Function Engine.PrimitiveComponent.*b9e13958df // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d774
	void SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // Native|Public|HasDefaults|BlueprintCallable // @ game+0x639e58c
	void *29c20efb0b(); // Function Engine.PrimitiveComponent.*29c20efb0b // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c644
	void *056cc90593(); // Function Engine.PrimitiveComponent.*056cc90593 // Final|Native|Public|BlueprintCallable // @ game+0x639fb44
	struct FVector SetPhysicsAngularVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xb0d434
	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // Native|Public|BlueprintCallable // @ game+0x639e724
	struct FName AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6383ca0
	enum class ECollisionChannel *58f998cca1(); // Function Engine.PrimitiveComponent.*58f998cca1 // Native|Public|BlueprintCallable // @ game+0x63a01a4
	void *6ad19621d9(); // Function Engine.PrimitiveComponent.*6ad19621d9 // Final|Native|Public|BlueprintCallable // @ game+0x63a2914
	void *6721a3eb8a(); // Function Engine.PrimitiveComponent.*6721a3eb8a // Final|Native|Public|BlueprintCallable // @ game+0x6385958
	void *601c402444(); // Function Engine.PrimitiveComponent.*601c402444 // Native|Public|BlueprintCallable // @ game+0x63a5f64
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6390d98
	void AddForce(struct FVector force); // Function Engine.PrimitiveComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6383600
	void *1f028ad67d(); // Function Engine.PrimitiveComponent.*1f028ad67d // Final|Native|Public|BlueprintCallable // @ game+0x638d7c4
	struct FName *75116bc348(); // Function Engine.PrimitiveComponent.*75116bc348 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x639b55c
	void *46193842e9(); // Function Engine.PrimitiveComponent.*46193842e9 // Final|Native|Public|BlueprintCallable // @ game+0x6388c70
	void *10f75e50ac(); // Function Engine.PrimitiveComponent.*10f75e50ac // Final|Native|Public|BlueprintCallable // @ game+0x639f8ec
	void *e3b0f43f9e(struct FVector Point); // Function Engine.PrimitiveComponent.*e3b0f43f9e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6391360
	struct FName *36ad2d15e7(); // Function Engine.PrimitiveComponent.*36ad2d15e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638d618
	void *fec7ca08f4(struct FName BoneName); // Function Engine.PrimitiveComponent.*fec7ca08f4 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638ffa4
	void *0e38375bb9(); // Function Engine.PrimitiveComponent.*0e38375bb9 // Final|Native|Public|BlueprintCallable // @ game+0x6392694
	void *23f39ad152(); // Function Engine.PrimitiveComponent.*23f39ad152 // Native|Public|BlueprintCallable // @ game+0x63a0bec
	struct FVector AddForceAtLocationLocal(struct FVector Location); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // Native|Public|HasDefaults|BlueprintCallable // @ game+0x638388c
	void CreateDynamicMaterialInstance(int32 ElementIndex); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x6388ed8
	void *923a62a1b9(); // Function Engine.PrimitiveComponent.*923a62a1b9 // Final|Native|Public|BlueprintCallable // @ game+0x63a0814
	struct FName GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xb59468
	void *41428e55af(); // Function Engine.PrimitiveComponent.*41428e55af // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63968ac
	void *9f5fbe7730(); // Function Engine.PrimitiveComponent.*9f5fbe7730 // Native|Public|BlueprintCallable // @ game+0x63a067c
	struct FVector SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x639fc70
	void *95f3208c0a(); // Function Engine.PrimitiveComponent.*95f3208c0a // Native|Public|BlueprintCallable // @ game+0x639e68c
	void *926dc117b6(); // Function Engine.PrimitiveComponent.*926dc117b6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d79c
	void *d7c852a7d5(); // Function Engine.PrimitiveComponent.*d7c852a7d5 // Native|Public|BlueprintCallable // @ game+0x63994f8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6390ba0
	void *b76664dec1(); // Function Engine.PrimitiveComponent.*b76664dec1 // Native|Public|BlueprintCallable // @ game+0x63a5f4c
	void *a306d03f54(); // Function Engine.PrimitiveComponent.*a306d03f54 // Native|Public|BlueprintCallable // @ game+0xb360a8
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
// Size: 0xb60 (Inherited: 0xa00)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> *ab774c1a69; // 0x9f8(0x10)
	int32 *db4ec4ee4d; // 0xa08(0x04)
	int32 *82cda22089; // 0xa0c(0x04)
	int32 *088a0e97de; // 0xa10(0x04)
	float *e1945b8183; // 0xa14(0x04)
	int32 *cdc265c43b; // 0xa18(0x04)
	int32 *bc399488d0; // 0xa1c(0x04)
	struct TArray<bool> *96a237cc36; // 0xa20(0x10)
	struct FGuid *3bed5cc694; // 0xa30(0x10)
	struct FBox *f8b8cc76e9; // 0xa40(0x1c)
	struct ULandscapeComponent* RenderComponent; // 0xa5c(0x1c)
	char pad_A80[0x78]; // 0xa80(0x78)
	struct TArray<struct UPhysicalMaterial*> *a0c84d3b0d; // 0xaf8(0x10)
	char pad_B08[0x58]; // 0xb08(0x58)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0xb80 (Inherited: 0xb60)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid *4db96309e8; // 0xb60(0x10)
	char pad_B70[0x10]; // 0xb70(0x10)
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
// Size: 0x3f8 (Inherited: 0x3f0)
struct ALandscapeMeshProxyActor : AActor {
	struct U*3109f0d891* LandscapeMeshProxyComponent; // 0x3f0(0x08)
};

// Class Landscape.*3109f0d891
// Size: 0xbd0 (Inherited: 0xba0)
struct U*3109f0d891 : UStaticMeshComponent {
	struct FGuid *50b1b2bcf5; // 0xba0(0x10)
	struct TArray<struct FIntPoint> *ee14f8a8f1; // 0xbb0(0x10)
	int8 *1322178fbc; // 0xbc0(0x01)
	char pad_BC1[0xf]; // 0xbc1(0x0f)
};

// Class Landscape.LandscapeProxy
// Size: 0x830 (Inherited: 0x3f0)
struct ALandscapeProxy : AActor {
	struct FGuid *50b1b2bcf5; // 0x3f0(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x400(0x08)
	int32 *7dcda9b4a3; // 0x408(0x04)
	int32 *e08946e5a5; // 0x40c(0x04)
	int32 *5cd5fd738e; // 0x410(0x04)
	struct FIntPoint *a779aa0650; // 0x414(0x08)
	int32 MaxLODLevel; // 0x41c(0x04)
	float LODDistanceFactor; // 0x420(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	int32 *67b044c344; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x430(0x08)
	float StreamingDistanceMultiplier; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x440(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x448(0x08)
	float *a8da434a60; // 0x450(0x04)
	float *b2b842a97e; // 0x454(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x458(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *b0e468f16b; // 0x468(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *0c371843e9; // 0x478(0x10)
	char pad_488[0x60]; // 0x488(0x60)
	char *ef822a69ef : 1; // 0x4e8(0x01)
	char bCastStaticShadow : 1; // 0x4e8(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e8(0x01)
	char bCastFarShadow : 1; // 0x4e8(0x01)
	char *d7cb743792 : 1; // 0x4e8(0x01)
	char bRenderCustomDepth : 1; // 0x4e8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4e8(0x01)
	char *165cddf3ab : 1; // 0x4e8(0x01)
	char *036977bfdf : 1; // 0x4e9(0x01)
	char *e3c1e4a69c : 1; // 0x4e9(0x01)
	char pad_4E9_2 : 6; // 0x4e9(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	float StaticLightingResolution; // 0x4ec(0x04)
	struct FLightingChannels LightingChannels; // 0x4f0(0x03)
	char pad_4F3[0x1]; // 0x4f3(0x01)
	int32 CustomDepthStencilValue; // 0x4f4(0x04)
	struct F*553842a41b LightmassSettings; // 0x4f8(0x18)
	int32 CollisionMipLevel; // 0x510(0x04)
	int32 *3431eed4b8; // 0x514(0x04)
	float *f891ed25fe; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct FBodyInstance BodyInstance; // 0x520(0x230)
	enum class ENavDataGatheringMode *e2328b2504; // 0x750(0x01)
	char pad_751[0xdf]; // 0x751(0xdf)

	void *54123f40ad(); // Function Landscape.LandscapeProxy.*54123f40ad // Native|Public|BlueprintCallable // @ game+0x55c8188
	float *d761853308(float StartSideFalloff, float StartRoll, int32 NumSubdivisions, bool bLowerHeights); // Function Landscape.LandscapeProxy.*d761853308 // Final|Native|Public|BlueprintCallable // @ game+0x5c838e4
};

// Class Landscape.Landscape
// Size: 0x830 (Inherited: 0x830)
struct ALandscape : ALandscapeProxy {
	struct FGuid *50b1b2bcf5; // 0x3f0(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x400(0x08)
	int32 *7dcda9b4a3; // 0x408(0x04)
	int32 *e08946e5a5; // 0x40c(0x04)
	int32 *5cd5fd738e; // 0x410(0x04)
	struct FIntPoint *a779aa0650; // 0x414(0x08)
	int32 MaxLODLevel; // 0x41c(0x04)
	float LODDistanceFactor; // 0x420(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x424(0x01)
	int32 *67b044c344; // 0x428(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x430(0x08)
	float StreamingDistanceMultiplier; // 0x438(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x440(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x448(0x08)
	float *a8da434a60; // 0x450(0x04)
	float *b2b842a97e; // 0x454(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x458(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *b0e468f16b; // 0x468(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *0c371843e9; // 0x478(0x10)
	char *ef822a69ef : 1; // 0x4e8(0x01)
	char bCastStaticShadow : 1; // 0x4e8(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e8(0x01)
	char bCastFarShadow : 1; // 0x4e8(0x01)
	char *d7cb743792 : 1; // 0x4e8(0x01)
	char bRenderCustomDepth : 1; // 0x4e8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4e8(0x01)
	char *165cddf3ab : 1; // 0x4e8(0x01)
	char *036977bfdf : 1; // 0x4e9(0x01)
	char *e3c1e4a69c : 1; // 0x4e9(0x01)
	float StaticLightingResolution; // 0x4ec(0x04)
	struct FLightingChannels LightingChannels; // 0x4f0(0x03)
	int32 CustomDepthStencilValue; // 0x4f4(0x04)
	struct F*553842a41b LightmassSettings; // 0x4f8(0x18)
	int32 CollisionMipLevel; // 0x510(0x04)
	int32 *3431eed4b8; // 0x514(0x04)
	float *f891ed25fe; // 0x518(0x04)
	struct FBodyInstance BodyInstance; // 0x520(0x230)
	enum class ENavDataGatheringMode *e2328b2504; // 0x750(0x01)

	void *54123f40ad(); // Function Landscape.LandscapeProxy.*54123f40ad // Native|Public|BlueprintCallable // @ game+0x55c8188
	float *d761853308(float StartSideFalloff, float StartRoll, int32 NumSubdivisions, bool bLowerHeights); // Function Landscape.LandscapeProxy.*d761853308 // Final|Native|Public|BlueprintCallable // @ game+0x5c838e4
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x850 (Inherited: 0x830)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	struct ALandscape* LandscapeActor; // 0x830(0x1c)
	char pad_84C[0x4]; // 0x84c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0xa30 (Inherited: 0xa00)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x9f8(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0xa08(0x10)
	struct TArray<struct UMeshComponent*> *f336e4865a; // 0xa18(0x10)
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


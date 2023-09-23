// Class CoherentUIGTPlugin.*907e23d592
// Size: 0x3d0 (Inherited: 0x128)
struct U*907e23d592 : UWidget {
	char pad_128[0x18]; // 0x128(0x18)
	struct AActor* Owner; // 0x140(0x08)
	struct FMulticastDelegate ReadyForBindings; // 0x148(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x158(0x10)
	struct FMulticastDelegate FinishLoad; // 0x168(0x10)
	struct FMulticastDelegate FailLoad; // 0x178(0x10)
	struct FMulticastDelegate StartLoading; // 0x188(0x10)
	struct FMulticastDelegate NavigateTo; // 0x198(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x1a8(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x1b8(0x10)
	char pad_1C8[0x78]; // 0x1c8(0x78)
	enum class TextureFilter Filter; // 0x240(0x01)
	bool bReceiveInput; // 0x241(0x01)
	enum class ECoherentUIGTInputPropagationBehaviour InputPropagationBehaviour; // 0x242(0x01)
	bool bReceiveInputWhenTransparent; // 0x243(0x01)
	bool bGammaCorrectedMaterial; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	float TickPeriodInMinimizedGame; // 0x248(0x04)
	bool AllowPerformanceWarnings; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	float ExecuteJSTimersThresholdMs; // 0x250(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x254(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x258(0x04)
	float PaintWarningThresholdMs; // 0x25c(0x04)
	int32 LayersCountThreshold; // 0x260(0x04)
	int32 LayerWidthThreshold; // 0x264(0x04)
	int32 LayerHeightThreshold; // 0x268(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x26c(0x01)
	char pad_26D[0xc3]; // 0x26d(0xc3)
	struct U*3a1cdc8eca* *045723dfed; // 0x330(0x08)
	char pad_338[0x80]; // 0x338(0x80)
	struct FString URL; // 0x3b8(0x10)
	float ClickThroughAlphaThreshold; // 0x3c8(0x04)
	bool Transparent; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)

	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.*907e23d592.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x66b1760
	void UpdateWholeDataModelFromStruct(); // Function CoherentUIGTPlugin.*907e23d592.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x66b34cc
	void IsReadyForBindings(); // Function CoherentUIGTPlugin.*907e23d592.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1f00
	void ShowPaintRects(); // Function CoherentUIGTPlugin.*907e23d592.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x66b2d38
	void IsDocumentReady(); // Function CoherentUIGTPlugin.*907e23d592.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1e7c
	void Redraw(); // Function CoherentUIGTPlugin.*907e23d592.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x66b23ec
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.*907e23d592.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x66b1860
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.*907e23d592.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x66b1030
	struct FString CreateDataModelFromObject(); // Function CoherentUIGTPlugin.*907e23d592.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x66b11cc
	void SynchronizeModels(); // Function CoherentUIGTPlugin.*907e23d592.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x66b2e14
	void IsReadyToCreateView(); // Function CoherentUIGTPlugin.*907e23d592.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1f24
	void GetRenderTexture(); // Function CoherentUIGTPlugin.*907e23d592.GetRenderTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1b0c
	void IsTransparent(); // Function CoherentUIGTPlugin.*907e23d592.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1f94
	void TriggerJSEvent(); // Function CoherentUIGTPlugin.*907e23d592.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x66b30f8
	void UpdateWholeDataModelFromObject(); // Function CoherentUIGTPlugin.*907e23d592.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x66b32e0
	struct FString CreateDataModelFromStruct(); // Function CoherentUIGTPlugin.*907e23d592.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x66b14cc
	void GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*907e23d592.GetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b19b4
	void GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*907e23d592.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1974
	void Reload(); // Function CoherentUIGTPlugin.*907e23d592.Reload // Final|Native|Public|BlueprintCallable // @ game+0x66b2450
	void SetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*907e23d592.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x66b25dc
	void CreateJSEvent(); // Function CoherentUIGTPlugin.*907e23d592.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x66b166c
	void SetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*907e23d592.SetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable // @ game+0x66b283c
	void HasRequestedView(); // Function CoherentUIGTPlugin.*907e23d592.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1c44
	void Load(); // Function CoherentUIGTPlugin.*907e23d592.Load // Final|Native|Public|BlueprintCallable // @ game+0x66b208c
};

// Class CoherentUIGTPlugin.*fcca61ec14
// Size: 0x28 (Inherited: 0x28)
struct U*fcca61ec14 : UObject {
};

// Class CoherentUIGTPlugin.*3a1cdc8eca
// Size: 0x1b8 (Inherited: 0x28)
struct U*3a1cdc8eca : UObject {
	struct UObject* Owner; // 0x28(0x08)
	struct TMap<int32, struct F*94ff8513c9> Sounds; // 0x30(0x50)
	char pad_80[0x138]; // 0x80(0x138)
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x430 (Inherited: 0x3f0)
struct ACoherentUIGTSystem : AActor {
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

// Class CoherentUIGTPlugin.*9885ef9c1c
// Size: 0xb8 (Inherited: 0x28)
struct U*9885ef9c1c : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct TArray<struct UStruct*> *db7fc45904; // 0xa8(0x10)

	void *2610d40f89(); // Function CoherentUIGTPlugin.*9885ef9c1c.*2610d40f89 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66b081c
	void *ad6c0c780a(); // Function CoherentUIGTPlugin.*9885ef9c1c.*ad6c0c780a // Final|Native|Public|BlueprintCallable // @ game+0x66b04b0
	void AddFloat(); // Function CoherentUIGTPlugin.*9885ef9c1c.AddFloat // Final|Native|Public|BlueprintCallable // @ game+0x66b0620
	void *2309233aa3(); // Function CoherentUIGTPlugin.*9885ef9c1c.*2309233aa3 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66b0df4
	void *a281dd395b(); // Function CoherentUIGTPlugin.*9885ef9c1c.*a281dd395b // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66b0b30
	void *f12125e308(); // Function CoherentUIGTPlugin.*9885ef9c1c.*f12125e308 // Final|Native|Public|BlueprintCallable // @ game+0x66b0344
	void *0e4e1684ad(); // Function CoherentUIGTPlugin.*9885ef9c1c.*0e4e1684ad // Final|Native|Public|BlueprintCallable // @ game+0x66b0d10
	void *8499d03261(); // Function CoherentUIGTPlugin.*9885ef9c1c.*8499d03261 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66aff60
	void *135472e520(); // Function CoherentUIGTPlugin.*9885ef9c1c.*135472e520 // Final|Native|Public|BlueprintCallable // @ game+0x66b0994
	void *d9d56e8057(); // Function CoherentUIGTPlugin.*9885ef9c1c.*d9d56e8057 // Final|Native|Public|BlueprintCallable // @ game+0x66b078c
};

// Class CoherentUIGTPlugin.*f55042be29
// Size: 0x40 (Inherited: 0x28)
struct U*f55042be29 : UObject {
	struct FString EventName; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)

	int32 *029a8e4ac8(); // Function CoherentUIGTPlugin.*f55042be29.*029a8e4ac8 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66b19cc
	void *815ddb91b8(int32 Index); // Function CoherentUIGTPlugin.*f55042be29.*815ddb91b8 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66b1a6c
	int32 GetString(); // Function CoherentUIGTPlugin.*f55042be29.GetString // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66b1b34
	int32 *d53f6efc62(); // Function CoherentUIGTPlugin.*f55042be29.*d53f6efc62 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66b1894
	void *81060cd8e8(); // Function CoherentUIGTPlugin.*f55042be29.*81060cd8e8 // Final|Native|Public|BlueprintCallable // @ game+0x66b22e0
};

// Class CoherentUIGTPlugin.*343f6bba5e
// Size: 0x28 (Inherited: 0x28)
struct U*343f6bba5e : UObject {
};

// Class CoherentUIGTPlugin.*5fcf8b1972
// Size: 0x460 (Inherited: 0x1f0)
struct U*5fcf8b1972 : UActorComponent {
	struct FMulticastDelegate ReadyForBindings; // 0x1f0(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x200(0x10)
	struct FMulticastDelegate FinishLoad; // 0x210(0x10)
	struct FMulticastDelegate FailLoad; // 0x220(0x10)
	struct FMulticastDelegate StartLoading; // 0x230(0x10)
	struct FMulticastDelegate NavigateTo; // 0x240(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x250(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x260(0x10)
	DelegateProperty *8e187951a1; // 0x270(0x10)
	char pad_280[0x70]; // 0x280(0x70)
	struct UTextureRenderTarget2D* Texture; // 0x2f0(0x08)
	enum class TextureFilter Filter; // 0x2f8(0x01)
	bool bReceiveInput; // 0x2f9(0x01)
	bool bReceiveInputWhenTransparent; // 0x2fa(0x01)
	bool AllowPerformanceWarnings; // 0x2fb(0x01)
	float ExecuteJSTimersThresholdMs; // 0x2fc(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x300(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x304(0x04)
	float PaintWarningThresholdMs; // 0x308(0x04)
	int32 LayersCountThreshold; // 0x30c(0x04)
	int32 LayerWidthThreshold; // 0x310(0x04)
	int32 LayerHeightThreshold; // 0x314(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x318(0x01)
	bool bDelayedUpdate; // 0x319(0x01)
	char pad_31A[0x106]; // 0x31a(0x106)
	struct U*3a1cdc8eca* *045723dfed; // 0x420(0x08)
	char pad_428[0x38]; // 0x428(0x38)

	void Reload(); // Function CoherentUIGTPlugin.*5fcf8b1972.Reload // Final|Native|Public|BlueprintCallable // @ game+0x66b2420
	void *33c16e48fa(); // Function CoherentUIGTPlugin.*5fcf8b1972.*33c16e48fa // Final|Native|Public|BlueprintCallable|Const // @ game+0x66b33ac
	void *11d5a2ed62(); // Function CoherentUIGTPlugin.*5fcf8b1972.*11d5a2ed62 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1f24
	void *3ab77c36aa(); // Function CoherentUIGTPlugin.*5fcf8b1972.*3ab77c36aa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1f58
	int32 Resize(); // Function CoherentUIGTPlugin.*5fcf8b1972.Resize // Native|Public|BlueprintCallable // @ game+0x66b2464
	void *5c63fd5733(); // Function CoherentUIGTPlugin.*5fcf8b1972.*5c63fd5733 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1e3c
	void *a97a48aa56(); // Function CoherentUIGTPlugin.*5fcf8b1972.*a97a48aa56 // Final|Native|Public|BlueprintCallable // @ game+0x66b2540
	void *178ab35cbe(); // Function CoherentUIGTPlugin.*5fcf8b1972.*178ab35cbe // Final|Native|Public|BlueprintCallable // @ game+0x66b166c
	struct FString *1512b5bd6e(); // Function CoherentUIGTPlugin.*5fcf8b1972.*1512b5bd6e // Final|Native|Public|BlueprintCallable // @ game+0x66b106c
	void *a423e163fb(); // Function CoherentUIGTPlugin.*5fcf8b1972.*a423e163fb // Final|Native|Public|BlueprintCallable|Const // @ game+0x66b23bc
	void *1f35139b23(); // Function CoherentUIGTPlugin.*5fcf8b1972.*1f35139b23 // Final|Native|Public|BlueprintCallable|Const // @ game+0x66b2e80
	void *3d66f3e532(); // Function CoherentUIGTPlugin.*5fcf8b1972.*3d66f3e532 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1934
	void *50c24047e0(); // Function CoherentUIGTPlugin.*5fcf8b1972.*50c24047e0 // Final|Native|Public|BlueprintCallable // @ game+0x66b1830
	void *a25269a7e6(); // Function CoherentUIGTPlugin.*5fcf8b1972.*a25269a7e6 // Final|Native|Public|BlueprintCallable|Const // @ game+0x66b2dd8
	void *717d352bfd(struct FString Name); // Function CoherentUIGTPlugin.*5fcf8b1972.*717d352bfd // Final|Native|Public|BlueprintCallable // @ game+0x66b132c
	void *1ea23157db(); // Function CoherentUIGTPlugin.*5fcf8b1972.*1ea23157db // Final|Native|Public|BlueprintCallable // @ game+0x66b1728
	void *002c195b57(); // Function CoherentUIGTPlugin.*5fcf8b1972.*002c195b57 // Final|Native|Public|BlueprintCallable // @ game+0x66b179c
	void *339b76ef1b(); // Function CoherentUIGTPlugin.*5fcf8b1972.*339b76ef1b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1edc
	void *40c7015b97(); // Function CoherentUIGTPlugin.*5fcf8b1972.*40c7015b97 // Final|Native|Public|BlueprintCallable // @ game+0x66b2c9c
	void *7fb38cf17c(); // Function CoherentUIGTPlugin.*5fcf8b1972.*7fb38cf17c // Final|Native|Public|BlueprintCallable // @ game+0x66b0ff8
	void Load(); // Function CoherentUIGTPlugin.*5fcf8b1972.Load // Final|Native|Public|BlueprintCallable // @ game+0x66b1fcc
	void *c04e616c2a(); // Function CoherentUIGTPlugin.*5fcf8b1972.*c04e616c2a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1c24
	void *065b3065ae(); // Function CoherentUIGTPlugin.*5fcf8b1972.*065b3065ae // Final|Native|Public|BlueprintCallable|Const // @ game+0x66b3214
};

// Class CoherentUIGTPlugin.*793b76b3a6
// Size: 0x490 (Inherited: 0x460)
struct U*793b76b3a6 : U*5fcf8b1972 {
	struct FString URL; // 0x458(0x10)
	int32 Width; // 0x468(0x04)
	int32 Height; // 0x46c(0x04)
	bool ManualTexture; // 0x470(0x01)
	float ClickThroughAlphaThreshold; // 0x474(0x04)
	bool Transparent; // 0x478(0x01)
	char pad_47E[0x12]; // 0x47e(0x12)
};

// Class CoherentUIGTPlugin.CoherentUIGTHUD
// Size: 0x480 (Inherited: 0x460)
struct UCoherentUIGTHUD : U*5fcf8b1972 {
	struct FStringAssetReference *8a3764c04c; // 0x458(0x10)
	struct UMaterial* *94ca56569b; // 0x468(0x08)
	struct UMaterialInstanceDynamic* *9c04e52b5a; // 0x470(0x08)
};

// Class CoherentUIGTPlugin.*3133203f26
// Size: 0x28 (Inherited: 0x28)
struct U*3133203f26 : UBlueprintFunctionLibrary {
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x570 (Inherited: 0x4d8)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4d8(0x08)
	char pad_4E0[0x90]; // 0x4e0(0x90)

	float *fa86c5bb68(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*fa86c5bb68 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66b2a88
	void *ce5cf316c5(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*ce5cf316c5 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66b1c74
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x448 (Inherited: 0x3f0)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x3f0(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x400(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x410(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x420(0x10)
	char pad_430[0x18]; // 0x430(0x18)

	void *111456ab1e(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*111456ab1e // Final|Native|Public|BlueprintCallable // @ game+0x66b2714
	void *5263900c36(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*5263900c36 // Final|Native|Public|BlueprintCallable // @ game+0x66b2e50
	void *fee10e0639(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*fee10e0639 // Final|Native|Public|BlueprintCallable // @ game+0x66b2680
	void *61a72446cc(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*61a72446cc // Final|Native|Public|BlueprintCallable // @ game+0x66b28d8
	void *42073b2fe0(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*42073b2fe0 // Final|Native|Public|BlueprintCallable // @ game+0x66b27a4
	void *6315441ee3(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*6315441ee3 // Final|Native|Public|BlueprintCallable // @ game+0x66b0f64
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // Final|Native|Public|BlueprintCallable // @ game+0x66b0ed0
	enum class *fcbfab83c2 Initialize(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x66b1c98
	void *8daa104973(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*8daa104973 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1e18
	void *01526e9711(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*01526e9711 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b199c
	void IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66b1ec0
};

// Class CoherentUIGTPlugin.*1aa270440d
// Size: 0x220 (Inherited: 0x1f0)
struct U*1aa270440d : UActorComponent {
	struct FString LinkName; // 0x1f0(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x200(0x08)
	char pad_208[0x18]; // 0x208(0x18)

	int32 *59b173f3d7(struct U*5fcf8b1972* baseComponent); // Function CoherentUIGTPlugin.*1aa270440d.*59b173f3d7 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66b214c
};

// Class CoherentUIGTPlugin.CoherentUIGTSettings
// Size: 0x68 (Inherited: 0x28)
struct UCoherentUIGTSettings : UObject {
	bool EnableLiveReload; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32 InspectorPort; // 0x2c(0x04)
	int32 WebdriverPort; // 0x30(0x04)
	bool EnableWebSecurity; // 0x34(0x01)
	bool EnableLocalization; // 0x35(0x01)
	bool RunAsynchronous; // 0x36(0x01)
	bool AllowPerformanceWarningsInEditor; // 0x37(0x01)
	bool ShowWarningsOnScreen; // 0x38(0x01)
	enum class ECoherentUIGTSettingsSeverity LogSeverity; // 0x39(0x01)
	bool bPaintToBackBuffer; // 0x3a(0x01)
	bool bRespectTitleSafeZone; // 0x3b(0x01)
	bool bRespectLetterboxing; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString HUDMaterialName; // 0x40(0x10)
	struct FString CoUIResourcesRoot; // 0x50(0x10)
	bool TickWhileGameIsPaused; // 0x60(0x01)
	bool bUseLowerCaseNamesForAutoExposedProperties; // 0x61(0x01)
	enum class *21391c8a76 MSAA; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
};


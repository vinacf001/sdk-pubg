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

	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.*907e23d592.DebugSaveNextFrame // None // @ game+0x6689348
	void UpdateWholeDataModelFromStruct(); // Function CoherentUIGTPlugin.*907e23d592.UpdateWholeDataModelFromStruct // None // @ game+0x668b0b4
	void IsReadyForBindings(); // Function CoherentUIGTPlugin.*907e23d592.IsReadyForBindings // None // @ game+0x6689ae8
	void ShowPaintRects(); // Function CoherentUIGTPlugin.*907e23d592.ShowPaintRects // None // @ game+0x668a920
	void IsDocumentReady(); // Function CoherentUIGTPlugin.*907e23d592.IsDocumentReady // None // @ game+0x6689a64
	void Redraw(); // Function CoherentUIGTPlugin.*907e23d592.Redraw // None // @ game+0x6689fd4
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.*907e23d592.EndDebugFrameSave // None // @ game+0x6689448
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.*907e23d592.BeginDebugFrameSave // None // @ game+0x6688c18
	struct FString CreateDataModelFromObject(); // Function CoherentUIGTPlugin.*907e23d592.CreateDataModelFromObject // None // @ game+0x6688db4
	void SynchronizeModels(); // Function CoherentUIGTPlugin.*907e23d592.SynchronizeModels // None // @ game+0x668a9fc
	void IsReadyToCreateView(); // Function CoherentUIGTPlugin.*907e23d592.IsReadyToCreateView // None // @ game+0x6689b0c
	void GetRenderTexture(); // Function CoherentUIGTPlugin.*907e23d592.GetRenderTexture // None // @ game+0x66896f4
	void IsTransparent(); // Function CoherentUIGTPlugin.*907e23d592.IsTransparent // None // @ game+0x6689b7c
	void TriggerJSEvent(); // Function CoherentUIGTPlugin.*907e23d592.TriggerJSEvent // None // @ game+0x668ace0
	void UpdateWholeDataModelFromObject(); // Function CoherentUIGTPlugin.*907e23d592.UpdateWholeDataModelFromObject // None // @ game+0x668aec8
	struct FString CreateDataModelFromStruct(); // Function CoherentUIGTPlugin.*907e23d592.CreateDataModelFromStruct // None // @ game+0x66890b4
	void GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*907e23d592.GetInputPropagationBehaviour // None // @ game+0x668959c
	void GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*907e23d592.GetClickThroughAlphaThreshold // None // @ game+0x668955c
	void Reload(); // Function CoherentUIGTPlugin.*907e23d592.Reload // None // @ game+0x668a038
	void SetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*907e23d592.SetClickThroughAlphaThreshold // None // @ game+0x668a1c4
	void CreateJSEvent(); // Function CoherentUIGTPlugin.*907e23d592.CreateJSEvent // None // @ game+0x6689254
	void SetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*907e23d592.SetInputPropagationBehaviour // None // @ game+0x668a424
	void HasRequestedView(); // Function CoherentUIGTPlugin.*907e23d592.HasRequestedView // None // @ game+0x668982c
	void Load(); // Function CoherentUIGTPlugin.*907e23d592.Load // None // @ game+0x6689c74
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
// Size: 0x438 (Inherited: 0x3f8)
struct ACoherentUIGTSystem : AActor {
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

// Class CoherentUIGTPlugin.*9885ef9c1c
// Size: 0xb8 (Inherited: 0x28)
struct U*9885ef9c1c : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct TArray<struct UStruct*> *db7fc45904; // 0xa8(0x10)

	void *2610d40f89(); // Function CoherentUIGTPlugin.*9885ef9c1c.*2610d40f89 // None // @ game+0x6688404
	void *ad6c0c780a(); // Function CoherentUIGTPlugin.*9885ef9c1c.*ad6c0c780a // None // @ game+0x6688098
	void AddFloat(); // Function CoherentUIGTPlugin.*9885ef9c1c.AddFloat // None // @ game+0x6688208
	void *2309233aa3(); // Function CoherentUIGTPlugin.*9885ef9c1c.*2309233aa3 // None // @ game+0x66889dc
	void *a281dd395b(); // Function CoherentUIGTPlugin.*9885ef9c1c.*a281dd395b // None // @ game+0x6688718
	void *f12125e308(); // Function CoherentUIGTPlugin.*9885ef9c1c.*f12125e308 // None // @ game+0x6687f2c
	void *0e4e1684ad(); // Function CoherentUIGTPlugin.*9885ef9c1c.*0e4e1684ad // None // @ game+0x66888f8
	void *8499d03261(); // Function CoherentUIGTPlugin.*9885ef9c1c.*8499d03261 // None // @ game+0x6687b48
	void *135472e520(); // Function CoherentUIGTPlugin.*9885ef9c1c.*135472e520 // None // @ game+0x668857c
	void *d9d56e8057(); // Function CoherentUIGTPlugin.*9885ef9c1c.*d9d56e8057 // None // @ game+0x6688374
};

// Class CoherentUIGTPlugin.*f55042be29
// Size: 0x40 (Inherited: 0x28)
struct U*f55042be29 : UObject {
	struct FString EventName; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)

	int32 *029a8e4ac8(); // Function CoherentUIGTPlugin.*f55042be29.*029a8e4ac8 // None // @ game+0x66895b4
	void *815ddb91b8(int32 Index); // Function CoherentUIGTPlugin.*f55042be29.*815ddb91b8 // None // @ game+0x6689654
	int32 GetString(); // Function CoherentUIGTPlugin.*f55042be29.GetString // None // @ game+0x668971c
	int32 *d53f6efc62(); // Function CoherentUIGTPlugin.*f55042be29.*d53f6efc62 // None // @ game+0x668947c
	void *81060cd8e8(); // Function CoherentUIGTPlugin.*f55042be29.*81060cd8e8 // None // @ game+0x6689ec8
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

	void Reload(); // Function CoherentUIGTPlugin.*5fcf8b1972.Reload // None // @ game+0x668a008
	void *33c16e48fa(); // Function CoherentUIGTPlugin.*5fcf8b1972.*33c16e48fa // None // @ game+0x668af94
	void *11d5a2ed62(); // Function CoherentUIGTPlugin.*5fcf8b1972.*11d5a2ed62 // None // @ game+0x6689b0c
	void *3ab77c36aa(); // Function CoherentUIGTPlugin.*5fcf8b1972.*3ab77c36aa // None // @ game+0x6689b40
	int32 Resize(); // Function CoherentUIGTPlugin.*5fcf8b1972.Resize // None // @ game+0x668a04c
	void *5c63fd5733(); // Function CoherentUIGTPlugin.*5fcf8b1972.*5c63fd5733 // None // @ game+0x6689a24
	void *a97a48aa56(); // Function CoherentUIGTPlugin.*5fcf8b1972.*a97a48aa56 // None // @ game+0x668a128
	void *178ab35cbe(); // Function CoherentUIGTPlugin.*5fcf8b1972.*178ab35cbe // None // @ game+0x6689254
	struct FString *1512b5bd6e(); // Function CoherentUIGTPlugin.*5fcf8b1972.*1512b5bd6e // None // @ game+0x6688c54
	void *a423e163fb(); // Function CoherentUIGTPlugin.*5fcf8b1972.*a423e163fb // None // @ game+0x6689fa4
	void *1f35139b23(); // Function CoherentUIGTPlugin.*5fcf8b1972.*1f35139b23 // None // @ game+0x668aa68
	void *3d66f3e532(); // Function CoherentUIGTPlugin.*5fcf8b1972.*3d66f3e532 // None // @ game+0x668951c
	void *50c24047e0(); // Function CoherentUIGTPlugin.*5fcf8b1972.*50c24047e0 // None // @ game+0x6689418
	void *a25269a7e6(); // Function CoherentUIGTPlugin.*5fcf8b1972.*a25269a7e6 // None // @ game+0x668a9c0
	void *717d352bfd(struct FString Name); // Function CoherentUIGTPlugin.*5fcf8b1972.*717d352bfd // None // @ game+0x6688f14
	void *1ea23157db(); // Function CoherentUIGTPlugin.*5fcf8b1972.*1ea23157db // None // @ game+0x6689310
	void *002c195b57(); // Function CoherentUIGTPlugin.*5fcf8b1972.*002c195b57 // None // @ game+0x6689384
	void *339b76ef1b(); // Function CoherentUIGTPlugin.*5fcf8b1972.*339b76ef1b // None // @ game+0x6689ac4
	void *40c7015b97(); // Function CoherentUIGTPlugin.*5fcf8b1972.*40c7015b97 // None // @ game+0x668a884
	void *7fb38cf17c(); // Function CoherentUIGTPlugin.*5fcf8b1972.*7fb38cf17c // None // @ game+0x6688be0
	void Load(); // Function CoherentUIGTPlugin.*5fcf8b1972.Load // None // @ game+0x6689bb4
	void *c04e616c2a(); // Function CoherentUIGTPlugin.*5fcf8b1972.*c04e616c2a // None // @ game+0x668980c
	void *065b3065ae(); // Function CoherentUIGTPlugin.*5fcf8b1972.*065b3065ae // None // @ game+0x668adfc
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
// Size: 0x578 (Inherited: 0x4e0)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4e0(0x08)
	char pad_4E8[0x90]; // 0x4e8(0x90)

	float *fa86c5bb68(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*fa86c5bb68 // None // @ game+0x668a670
	void *ce5cf316c5(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*ce5cf316c5 // None // @ game+0x668985c
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x450 (Inherited: 0x3f8)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x3f8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x408(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x418(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x428(0x10)
	char pad_438[0x18]; // 0x438(0x18)

	void *111456ab1e(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*111456ab1e // None // @ game+0x668a2fc
	void *5263900c36(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*5263900c36 // None // @ game+0x668aa38
	void *fee10e0639(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*fee10e0639 // None // @ game+0x668a268
	void *61a72446cc(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*61a72446cc // None // @ game+0x668a4c0
	void *42073b2fe0(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*42073b2fe0 // None // @ game+0x668a38c
	void *6315441ee3(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*6315441ee3 // None // @ game+0x6688b4c
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // None // @ game+0x6688ab8
	enum class *fcbfab83c2 Initialize(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // None // @ game+0x6689880
	void *8daa104973(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*8daa104973 // None // @ game+0x6689a00
	void *01526e9711(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*01526e9711 // None // @ game+0x6689584
	void IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // None // @ game+0x6689aa8
};

// Class CoherentUIGTPlugin.*1aa270440d
// Size: 0x220 (Inherited: 0x1f0)
struct U*1aa270440d : UActorComponent {
	struct FString LinkName; // 0x1f0(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x200(0x08)
	char pad_208[0x18]; // 0x208(0x18)

	int32 *59b173f3d7(struct U*5fcf8b1972* baseComponent); // Function CoherentUIGTPlugin.*1aa270440d.*59b173f3d7 // None // @ game+0x6689d34
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


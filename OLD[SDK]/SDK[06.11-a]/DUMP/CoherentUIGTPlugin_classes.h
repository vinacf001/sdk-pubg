// Class CoherentUIGTPlugin.*8ce6770d29
// Size: 0x3d0 (Inherited: 0x130)
struct U*8ce6770d29 : UWidget {
	char pad_130[0x18]; // 0x130(0x18)
	struct AActor* Owner; // 0x148(0x08)
	struct FMulticastDelegate ReadyForBindings; // 0x150(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x160(0x10)
	struct FMulticastDelegate FinishLoad; // 0x170(0x10)
	struct FMulticastDelegate FailLoad; // 0x180(0x10)
	struct FMulticastDelegate StartLoading; // 0x190(0x10)
	struct FMulticastDelegate NavigateTo; // 0x1a0(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x1b0(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x1c0(0x10)
	char pad_1D0[0x70]; // 0x1d0(0x70)
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
	struct U*532f87bc11* *55de10b0ab; // 0x330(0x08)
	char pad_338[0x80]; // 0x338(0x80)
	struct FString URL; // 0x3b8(0x10)
	float ClickThroughAlphaThreshold; // 0x3c8(0x04)
	bool Transparent; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)

	void GetInputPropagationBehaviour(enum class ECoherentUIGTInputPropagationBehaviour ReturnValue); // Function CoherentUIGTPlugin.*8ce6770d29.GetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eee8cc
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.*8ce6770d29.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x6eee778
	void ShowPaintRects(bool Show); // Function CoherentUIGTPlugin.*8ce6770d29.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x6eefc50
	void SynchronizeModels(); // Function CoherentUIGTPlugin.*8ce6770d29.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x6eefd2c
	void Redraw(); // Function CoherentUIGTPlugin.*8ce6770d29.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x6eef304
	void IsReadyForBindings(); // Function CoherentUIGTPlugin.*8ce6770d29.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeee18
	void SetInputPropagationBehaviour(enum class ECoherentUIGTInputPropagationBehaviour Propagation); // Function CoherentUIGTPlugin.*8ce6770d29.SetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable // @ game+0x6eef754
	void GetClickThroughAlphaThreshold(float ReturnValue); // Function CoherentUIGTPlugin.*8ce6770d29.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eee88c
	void SetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*8ce6770d29.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x6eef4f4
	struct UObject* CreateDataModelFromObject(); // Function CoherentUIGTPlugin.*8ce6770d29.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x6eee0dc
	struct UObject* UpdateWholeDataModelFromObject(); // Function CoherentUIGTPlugin.*8ce6770d29.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ef01f8
	void Reload(); // Function CoherentUIGTPlugin.*8ce6770d29.Reload // Final|Native|Public|BlueprintCallable // @ game+0x6eef368
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.*8ce6770d29.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x6eee678
	bool HasRequestedView(); // Function CoherentUIGTPlugin.*8ce6770d29.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeeb5c
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.*8ce6770d29.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeed94
	struct UStructProperty* CreateDataModelFromStruct(); // Function CoherentUIGTPlugin.*8ce6770d29.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x6eee3e0
	struct U*865a9b027e* CreateJSEvent(); // Function CoherentUIGTPlugin.*8ce6770d29.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x6eee584
	struct U*865a9b027e* TriggerJSEvent(); // Function CoherentUIGTPlugin.*8ce6770d29.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ef0010
	struct UStructProperty* UpdateWholeDataModelFromStruct(); // Function CoherentUIGTPlugin.*8ce6770d29.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ef03e8
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.*8ce6770d29.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x6eedf40
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.*8ce6770d29.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeee3c
	struct FString Load(); // Function CoherentUIGTPlugin.*8ce6770d29.Load // Final|Native|Public|BlueprintCallable // @ game+0x6eeefa4
	struct UTextureRenderTarget2D* GetRenderTexture(); // Function CoherentUIGTPlugin.*8ce6770d29.GetRenderTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeea24
	bool IsTransparent(); // Function CoherentUIGTPlugin.*8ce6770d29.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeeeac
};

// Class CoherentUIGTPlugin.*f82743d2a6
// Size: 0x30 (Inherited: 0x30)
struct U*f82743d2a6 : UObject {
};

// Class CoherentUIGTPlugin.*532f87bc11
// Size: 0x1c0 (Inherited: 0x30)
struct U*532f87bc11 : UObject {
	struct UObject* Owner; // 0x30(0x08)
	struct TMap<int32, struct F*9f91969897> Sounds; // 0x38(0x50)
	char pad_88[0x138]; // 0x88(0x138)
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x438 (Inherited: 0x3f8)
struct ACoherentUIGTSystem : AActor {
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

// Class CoherentUIGTPlugin.*865a9b027e
// Size: 0xc0 (Inherited: 0x30)
struct U*865a9b027e : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct UStruct*> *8158a6dbbc; // 0xb0(0x10)

	bool *89a1a37467(); // Function CoherentUIGTPlugin.*865a9b027e.*89a1a37467 // Final|Native|Public|BlueprintCallable // @ game+0x6eed3c0
	float AddFloat(); // Function CoherentUIGTPlugin.*865a9b027e.AddFloat // Final|Native|Public|BlueprintCallable // @ game+0x6eed530
	int32 *e3bbdfdce4(); // Function CoherentUIGTPlugin.*865a9b027e.*e3bbdfdce4 // Final|Native|Public|BlueprintCallable // @ game+0x6eed69c
	struct UObject* *752131c07b(); // Function CoherentUIGTPlugin.*865a9b027e.*752131c07b // Final|Native|Public|BlueprintCallable // @ game+0x6eed8a4
	struct TArray<int32> *8f5ad4177c(); // Function CoherentUIGTPlugin.*865a9b027e.*8f5ad4177c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6eece6c
	struct FText *d0349b67a2(); // Function CoherentUIGTPlugin.*865a9b027e.*d0349b67a2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6eedd04
	bool *ea8985bf5e(); // Function CoherentUIGTPlugin.*865a9b027e.*ea8985bf5e // Final|Native|Public|BlueprintCallable // @ game+0x6eed254
	struct UStructProperty* *7230279e87(); // Function CoherentUIGTPlugin.*865a9b027e.*7230279e87 // Final|Native|Public|BlueprintCallable // @ game+0x6eedc20
	struct FName *7150c806ae(); // Function CoherentUIGTPlugin.*865a9b027e.*7150c806ae // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6eed72c
	struct FString *1dc0d86322(); // Function CoherentUIGTPlugin.*865a9b027e.*1dc0d86322 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6eeda40
};

// Class CoherentUIGTPlugin.*751e8292ec
// Size: 0x48 (Inherited: 0x30)
struct U*751e8292ec : UObject {
	struct FString EventName; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	void GetString(int32 Index, struct FString ReturnValue); // Function CoherentUIGTPlugin.*751e8292ec.GetString // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6eeea4c
	void *fdc236374e(); // Function CoherentUIGTPlugin.*751e8292ec.*fdc236374e // Final|Native|Public|BlueprintCallable // @ game+0x6eef1f8
	void *77fa603572(int32 Index, int32 ReturnValue); // Function CoherentUIGTPlugin.*751e8292ec.*77fa603572 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6eee8e4
	void *ddcb016311(int32 Index); // Function CoherentUIGTPlugin.*751e8292ec.*ddcb016311 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6eee7ac
	void *b306b70a76(); // Function CoherentUIGTPlugin.*751e8292ec.*b306b70a76 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6eee984
};

// Class CoherentUIGTPlugin.*c55f71acbf
// Size: 0x30 (Inherited: 0x30)
struct U*c55f71acbf : UObject {
};

// Class CoherentUIGTPlugin.*315ebda9a9
// Size: 0x470 (Inherited: 0x200)
struct U*315ebda9a9 : UActorComponent {
	struct FMulticastDelegate ReadyForBindings; // 0x200(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x210(0x10)
	struct FMulticastDelegate FinishLoad; // 0x220(0x10)
	struct FMulticastDelegate FailLoad; // 0x230(0x10)
	struct FMulticastDelegate StartLoading; // 0x240(0x10)
	struct FMulticastDelegate NavigateTo; // 0x250(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x260(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x270(0x10)
	DelegateProperty *0d98ee12a8; // 0x280(0x10)
	char pad_290[0x70]; // 0x290(0x70)
	struct UTextureRenderTarget2D* Texture; // 0x300(0x08)
	enum class TextureFilter Filter; // 0x308(0x01)
	bool bReceiveInput; // 0x309(0x01)
	bool bReceiveInputWhenTransparent; // 0x30a(0x01)
	bool AllowPerformanceWarnings; // 0x30b(0x01)
	float ExecuteJSTimersThresholdMs; // 0x30c(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x310(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x314(0x04)
	float PaintWarningThresholdMs; // 0x318(0x04)
	int32 LayersCountThreshold; // 0x31c(0x04)
	int32 LayerWidthThreshold; // 0x320(0x04)
	int32 LayerHeightThreshold; // 0x324(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x328(0x01)
	bool bDelayedUpdate; // 0x329(0x01)
	char pad_32A[0x106]; // 0x32a(0x106)
	struct U*532f87bc11* *55de10b0ab; // 0x430(0x08)
	char pad_438[0x38]; // 0x438(0x38)

	int32 Resize(); // Function CoherentUIGTPlugin.*315ebda9a9.Resize // Native|Public|BlueprintCallable // @ game+0x6eef37c
	void *0737830734(); // Function CoherentUIGTPlugin.*315ebda9a9.*0737830734 // Final|Native|Public|BlueprintCallable // @ game+0x6eedf08
	bool *91d0882571(); // Function CoherentUIGTPlugin.*315ebda9a9.*91d0882571 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeee70
	void *96ed2c0976(); // Function CoherentUIGTPlugin.*315ebda9a9.*96ed2c0976 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6eefcf0
	bool *c66515ba2a(); // Function CoherentUIGTPlugin.*315ebda9a9.*c66515ba2a // Final|Native|Public|BlueprintCallable // @ game+0x6eefbb4
	bool *d49037e275(); // Function CoherentUIGTPlugin.*315ebda9a9.*d49037e275 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeee3c
	void *5a08b096f6(); // Function CoherentUIGTPlugin.*315ebda9a9.*5a08b096f6 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6eef2d4
	bool *6bc14a1c83(); // Function CoherentUIGTPlugin.*315ebda9a9.*6bc14a1c83 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeed54
	float *66e1fb722a(); // Function CoherentUIGTPlugin.*315ebda9a9.*66e1fb722a // Final|Native|Public|BlueprintCallable // @ game+0x6eef458
	struct UStructProperty* *14dc97cfe9(); // Function CoherentUIGTPlugin.*315ebda9a9.*14dc97cfe9 // Final|Native|Public|BlueprintCallable // @ game+0x6eee23c
	struct U*865a9b027e* *72257c9c1e(); // Function CoherentUIGTPlugin.*315ebda9a9.*72257c9c1e // Final|Native|Public|BlueprintCallable // @ game+0x6eee584
	struct UObject* *8e2ff4fb36(); // Function CoherentUIGTPlugin.*315ebda9a9.*8e2ff4fb36 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ef012c
	float *dd0b328ae2(); // Function CoherentUIGTPlugin.*315ebda9a9.*dd0b328ae2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eee84c
	bool *54fbc6c09d(); // Function CoherentUIGTPlugin.*315ebda9a9.*54fbc6c09d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeedf4
	void *e32693f1a9(struct FString Name, struct U*865a9b027e* EventData); // Function CoherentUIGTPlugin.*315ebda9a9.*e32693f1a9 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6eefd98
	void *7ff3f2c3c7(bool ReturnValue); // Function CoherentUIGTPlugin.*315ebda9a9.*7ff3f2c3c7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeeb3c
	void Load(); // Function CoherentUIGTPlugin.*315ebda9a9.Load // Final|Native|Public|BlueprintCallable // @ game+0x6eeeee4
	void *ae22bd2ea5(struct UObject* Model); // Function CoherentUIGTPlugin.*315ebda9a9.*ae22bd2ea5 // Final|Native|Public|BlueprintCallable // @ game+0x6eedf7c
	void *3573e71405(struct UStructProperty* Arg); // Function CoherentUIGTPlugin.*315ebda9a9.*3573e71405 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ef02c4
	void *e9381aef83(); // Function CoherentUIGTPlugin.*315ebda9a9.*e9381aef83 // Final|Native|Public|BlueprintCallable // @ game+0x6eee640
	void Reload(); // Function CoherentUIGTPlugin.*315ebda9a9.Reload // Final|Native|Public|BlueprintCallable // @ game+0x6eef338
	void *3989ff9573(); // Function CoherentUIGTPlugin.*315ebda9a9.*3989ff9573 // Final|Native|Public|BlueprintCallable // @ game+0x6eee6b4
	void *86afcbcc59(); // Function CoherentUIGTPlugin.*315ebda9a9.*86afcbcc59 // Final|Native|Public|BlueprintCallable // @ game+0x6eee748
};

// Class CoherentUIGTPlugin.*02f9ac3eef
// Size: 0x4a0 (Inherited: 0x470)
struct U*02f9ac3eef : U*315ebda9a9 {
	struct FString URL; // 0x468(0x10)
	int32 Width; // 0x478(0x04)
	int32 Height; // 0x47c(0x04)
	bool ManualTexture; // 0x480(0x01)
	float ClickThroughAlphaThreshold; // 0x484(0x04)
	bool Transparent; // 0x488(0x01)
	char pad_48E[0x12]; // 0x48e(0x12)
};

// Class CoherentUIGTPlugin.CoherentUIGTHUD
// Size: 0x490 (Inherited: 0x470)
struct UCoherentUIGTHUD : U*315ebda9a9 {
	struct FStringAssetReference *31042866a3; // 0x468(0x10)
	struct UMaterial* *cbee996111; // 0x478(0x08)
	struct UMaterialInstanceDynamic* *1e00b10c06; // 0x480(0x08)
};

// Class CoherentUIGTPlugin.*48b058d9ad
// Size: 0x30 (Inherited: 0x30)
struct U*48b058d9ad : UBlueprintFunctionLibrary {
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x578 (Inherited: 0x4e0)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4e0(0x08)
	char pad_4E8[0x90]; // 0x4e8(0x90)

	void *14b5ba4a8a(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*14b5ba4a8a // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6eeeb8c
	void *2767c38edb(float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*2767c38edb // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6eef9a0
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x450 (Inherited: 0x3f8)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x3f8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x408(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x418(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x428(0x10)
	char pad_438[0x18]; // 0x438(0x18)

	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeedd8
	struct U*315ebda9a9* *c5b0bafabd(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*c5b0bafabd // Final|Native|Public|BlueprintCallable // @ game+0x6eef62c
	bool AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // Final|Native|Public|BlueprintCallable // @ game+0x6eedde0
	void *ca4b7e1c2e(enum class ECoherentUIGTInputPropagationBehaviour ReturnValue); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*ca4b7e1c2e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eee8b4
	void Initialize(enum class ECollisionChannel CollisionChannel); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x6eeebb0
	void *545d36e5dd(bool FocusUI); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*545d36e5dd // Final|Native|Public|BlueprintCallable // @ game+0x6eef598
	void *586c4484ec(bool bAccept); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*586c4484ec // Final|Native|Public|BlueprintCallable // @ game+0x6eede74
	void *dbfcb8868a(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*dbfcb8868a // Final|Native|Public|BlueprintCallable // @ game+0x6eef6bc
	void *5a6eb85bd6(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*5a6eb85bd6 // Final|Native|Public|BlueprintCallable // @ game+0x6eefd68
	void *ed1e9a7ce4(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*ed1e9a7ce4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6eeed30
	void *f716da4898(enum class *5a8b3d9a90 Mode); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*f716da4898 // Final|Native|Public|BlueprintCallable // @ game+0x6eef7f0
};

// Class CoherentUIGTPlugin.*0099ae19bb
// Size: 0x230 (Inherited: 0x200)
struct U*0099ae19bb : UActorComponent {
	struct FString LinkName; // 0x200(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x210(0x08)
	char pad_218[0x18]; // 0x218(0x18)

	int32 *ddf9e64d4b(); // Function CoherentUIGTPlugin.*0099ae19bb.*ddf9e64d4b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6eef064
};

// Class CoherentUIGTPlugin.CoherentUIGTSettings
// Size: 0x70 (Inherited: 0x30)
struct UCoherentUIGTSettings : UObject {
	bool EnableLiveReload; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 InspectorPort; // 0x34(0x04)
	int32 WebdriverPort; // 0x38(0x04)
	bool EnableWebSecurity; // 0x3c(0x01)
	bool EnableLocalization; // 0x3d(0x01)
	bool RunAsynchronous; // 0x3e(0x01)
	bool AllowPerformanceWarningsInEditor; // 0x3f(0x01)
	bool ShowWarningsOnScreen; // 0x40(0x01)
	enum class ECoherentUIGTSettingsSeverity LogSeverity; // 0x41(0x01)
	bool bPaintToBackBuffer; // 0x42(0x01)
	bool bRespectTitleSafeZone; // 0x43(0x01)
	bool bRespectLetterboxing; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FString HUDMaterialName; // 0x48(0x10)
	struct FString CoUIResourcesRoot; // 0x58(0x10)
	bool TickWhileGameIsPaused; // 0x68(0x01)
	bool bUseLowerCaseNamesForAutoExposedProperties; // 0x69(0x01)
	enum class *3e7081afa0 MSAA; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};


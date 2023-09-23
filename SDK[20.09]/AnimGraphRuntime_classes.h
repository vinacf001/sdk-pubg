// Class AnimGraphRuntime.*0456955f47
// Size: 0x40 (Inherited: 0x38)
struct U*0456955f47 : UAnimNotify {
	struct FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.*30f5c11bce
// Size: 0x38 (Inherited: 0x30)
struct U*30f5c11bce : UAnimNotifyState {
	struct FName NotifyName; // 0x30(0x08)
};

// Class AnimGraphRuntime.*e54c3f0b0e
// Size: 0x398 (Inherited: 0x398)
struct U*e54c3f0b0e : UAnimInstance {
	float DeltaTime; // 0x28(0x04)
	struct USkeleton* *3d26a0f5a9; // 0x30(0x08)
	enum class *70bf4a9cf2 *06b775a106; // 0x38(0x01)
	bool bRunUpdatesInWorkerThreads; // 0x39(0x01)
	bool bCanUseParallelUpdateAnimation; // 0x3a(0x01)
	bool *b16fe671be; // 0x3b(0x01)
	bool bWarnAboutBlueprintUsage; // 0x3c(0x01)
	struct FMulticastDelegate OnMontageBlendingOut; // 0x40(0x10)
	struct FMulticastDelegate OnMontageStarted; // 0x50(0x10)
	struct FMulticastDelegate OnMontageEnded; // 0x60(0x10)
	struct FMulticastDelegate OnMontageInterrupted; // 0x70(0x10)
	struct FMulticastDelegate OnAllMontageInstancesEnded; // 0x80(0x10)
	bool *9e5b2e55cd; // 0xf0(0x01)
	struct TArray<struct FAnimNotifyEvent> *e83d212201; // 0x190(0x10)

	struct UAnimMontage* *1049bf0142(); // Function Engine.AnimInstance.*1049bf0142 // Final|Native|Public|BlueprintCallable // @ game+0x63dcce4
	void *fb3df011d9(); // Function Engine.AnimInstance.*fb3df011d9 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c4dc8
	void *ad69a18e5a(); // Function Engine.AnimInstance.*ad69a18e5a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63d1be4
	int32 GetStateWeight(); // Function Engine.AnimInstance.GetStateWeight // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63cc3f8
	struct UAnimMontage* *d46dc5dc83(); // Function Engine.AnimInstance.*d46dc5dc83 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63dc64c
	int32 PlaySlotAnimation(struct FName SlotNodeName, float BlendOutTime); // Function Engine.AnimInstance.PlaySlotAnimation // Final|Native|Public|BlueprintCallable // @ game+0x63e0708
	enum class EMontagePlayReturnType Montage_Play(float InTimeToStartMontageAt); // Function Engine.AnimInstance.Montage_Play // Native|Public|BlueprintCallable // @ game+0x1fe88c
	void *242396e0df(struct FName NextSection); // Function Engine.AnimInstance.*242396e0df // Native|Public|BlueprintCallable // @ game+0x568a8c0
	struct FName *0c3e0ee134(); // Function Engine.AnimInstance.*0c3e0ee134 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63cc8c0
	struct UAnimSequenceBase* *8c0c4894ae(struct FName SlotNodeName); // Function Engine.AnimInstance.*8c0c4894ae // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63d2328
	void *691ee180b3(struct UAnimMontage* Montage); // Function Engine.AnimInstance.*691ee180b3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63dc788
	int32 *e267668cef(); // Function Engine.AnimInstance.*e267668cef // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c6d68
	int32 *723eae25e1(); // Function Engine.AnimInstance.*723eae25e1 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c75d8
	void GetCurrentStateElapsedTime(int32 MachineIndex); // Function Engine.AnimInstance.GetCurrentStateElapsedTime // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c4d28
	void *91ee611ffd(struct FName SectionName); // Function Engine.AnimInstance.*91ee611ffd // Native|Public|BlueprintCallable // @ game+0x9c410c
	int32 *e146fc91b1(); // Function Engine.AnimInstance.*e146fc91b1 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c72e4
	struct FName *057fda6034(); // Function Engine.AnimInstance.*057fda6034 // Final|Native|Public|BlueprintCallable // @ game+0x63f0634
	void GetAnimAssetPlayerTimeFromEnd(struct UAnimationAsset* AnimAsset); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c3294
	int32 *48c662fc37(); // Function Engine.AnimInstance.*48c662fc37 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c7cd8
	int32 *245284edb6(); // Function Engine.AnimInstance.*245284edb6 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c6b8c
	void *f364c6828d(int32 StateIndex); // Function Engine.AnimInstance.*f364c6828d // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63ca934
	struct UAnimMontage* *bf78400b8f(); // Function Engine.AnimInstance.*bf78400b8f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63dc968
	struct UAnimMontage* *5eeab7b91c(); // Function Engine.AnimInstance.*5eeab7b91c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63dc5ac
	void *bca340010a(struct UAnimMontage* Montage); // Function Engine.AnimInstance.*bca340010a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63dc6e8
	void *c5fd55eb88(bool bUnlockMovement); // Function Engine.AnimInstance.*c5fd55eb88 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x63d8120
	int32 *fd0ea4aa33(); // Function Engine.AnimInstance.*fd0ea4aa33 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c6f2c
	struct UAnimMontage* *ccdbbc4b23(); // Function Engine.AnimInstance.*ccdbbc4b23 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63dc828
	void *1ab31cd97b(); // Function Engine.AnimInstance.*1ab31cd97b // Final|Native|Public|BlueprintCallable // @ game+0x63f24a0
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x1e037c
	bool *3ae29e8bbb(); // Function Engine.AnimInstance.*3ae29e8bbb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63d28b0
	void *f61ade023a(); // Function Engine.AnimInstance.*f61ade023a // Final|Native|Public|BlueprintCallable // @ game+0x63dcc04
	void *9b89db3b5d(int32 MachineIndex); // Function Engine.AnimInstance.*9b89db3b5d // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c7ac4
	struct FName *058de0418c(); // Function Engine.AnimInstance.*058de0418c // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e4d0c
	void *66a3995478(struct FName SyncGroup); // Function Engine.AnimInstance.*66a3995478 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63d02bc
	void *899177a2d7(); // Function Engine.AnimInstance.*899177a2d7 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c69b0
	void *e8a9ba9091(); // Function Engine.AnimInstance.*e8a9ba9091 // Native|Public|HasOutParms|BlueprintCallable // @ game+0x63f8544
	int32 *3c7c31cc75(); // Function Engine.AnimInstance.*3c7c31cc75 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63caa1c
	void *66f0434692(struct FName MarkerName); // Function Engine.AnimInstance.*66f0434692 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x63ccf88
	void *5e755e4562(); // Function Engine.AnimInstance.*5e755e4562 // Native|Public|BlueprintCallable // @ game+0x63e57b0
	void *79ed44711d(); // Function Engine.AnimInstance.*79ed44711d // Final|Native|Public|BlueprintCallable // @ game+0x63dcb74
	void *ccd070a982(); // Function Engine.AnimInstance.*ccd070a982 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xb9a084
	void *84bfa05c08(struct FVector Velocity); // Function Engine.AnimInstance.*84bfa05c08 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63b463c
	int32 *3ae1a9d556(); // Function Engine.AnimInstance.*3ae1a9d556 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c7ee8
	float *f6100f1f77(); // Function Engine.AnimInstance.*f6100f1f77 // Native|Public|BlueprintCallable // @ game+0x8aed70
	void *ec3409ea7b(); // Function Engine.AnimInstance.*ec3409ea7b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63c4940
	void *905d29ade2(); // Function Engine.AnimInstance.*905d29ade2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xbfd0e0
	void *3080ec9377(); // Function Engine.AnimInstance.*3080ec9377 // Final|Native|Public|BlueprintCallable // @ game+0x63dcae4
	int32 *8c5198f019(); // Function Engine.AnimInstance.*8c5198f019 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x275f14
	float PlaySlotAnimationAsDynamicMontage(struct FName SlotNodeName, float BlendOutTime); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage // Final|Native|Public|BlueprintCallable // @ game+0x63e092c
	int32 *f36dfe6065(int32 StateIndex); // Function Engine.AnimInstance.*f36dfe6065 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x275670
	void GetAnimAssetPlayerLength(struct UAnimationAsset* AnimAsset); // Function Engine.AnimInstance.GetAnimAssetPlayerLength // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63c3120
	bool *0d4faf3909(); // Function Engine.AnimInstance.*0d4faf3909 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x63d8120
	float GetAnimAssetPlayerTimeFromEndFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63c3398
	void *24d7f1731e(); // Function Engine.AnimInstance.*24d7f1731e // Final|Native|Public|BlueprintCallable // @ game+0x63dca08
	void *a6e097a5c0(); // Function Engine.AnimInstance.*a6e097a5c0 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63c70f0
	void *07eb4aa7bc(); // Function Engine.AnimInstance.*07eb4aa7bc // Final|Native|Public|BlueprintCallable // @ game+0x63b78e4
	int32 *d9cbacaeac(); // Function Engine.AnimInstance.*d9cbacaeac // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x63cac48
	void *9687b3535a(int32 MachineIndex); // Function Engine.AnimInstance.*9687b3535a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0xa16af0
	float GetAnimAssetPlayerTimeFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63c31b4
	struct UAnimMontage* *771de70e87(); // Function Engine.AnimInstance.*771de70e87 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63dc8c8
	void *53d492fe87(); // Function Engine.AnimInstance.*53d492fe87 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63ff258
	void BlueprintUpdateAnimation(); // Function Engine.AnimInstance.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x1e037c
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation // Event|Public|BlueprintEvent // @ game+0x1e037c
	float *3b5b96bdbc(); // Function Engine.AnimInstance.*3b5b96bdbc // Final|Native|Public|BlueprintCallable // @ game+0x63fd510
};

// Class AnimGraphRuntime.*e48c741f58
// Size: 0x28 (Inherited: 0x28)
struct U*e48c741f58 : UBlueprintFunctionLibrary {
};

// Class AnimGraphRuntime.*dba9f4a355
// Size: 0x110 (Inherited: 0x28)
struct U*dba9f4a355 : UObject {
	struct FMulticastDelegate OnCompleted; // 0x28(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x38(0x10)
	struct FMulticastDelegate OnInterrupted; // 0x48(0x10)
	struct FMulticastDelegate OnNotifyBegin; // 0x58(0x10)
	struct FMulticastDelegate OnNotifyEnd; // 0x68(0x10)
	char pad_78[0x98]; // 0x78(0x98)

	struct UAnimMontage* *adb270eeb3(); // Function AnimGraphRuntime.*dba9f4a355.*adb270eeb3 // Final|Native|Protected // @ game+0x5cc3cf0
	void OnNotifyBeginReceived(struct FName Param0); // Function AnimGraphRuntime.*dba9f4a355.OnNotifyBeginReceived // Final|Native|Protected|HasOutParms // @ game+0x5cc3eb0
	struct FName *77b3518fb4(struct UAnimMontage* MontageToPlay); // Function AnimGraphRuntime.*dba9f4a355.*77b3518fb4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5cc3480
	struct UAnimMontage* OnMontageEnded(); // Function AnimGraphRuntime.*dba9f4a355.OnMontageEnded // Final|Native|Protected // @ game+0x5cc3dd0
	void OnNotifyEndReceived(struct FName Param0); // Function AnimGraphRuntime.*dba9f4a355.OnNotifyEndReceived // Final|Native|Protected|HasOutParms // @ game+0x5cc3fbc
};


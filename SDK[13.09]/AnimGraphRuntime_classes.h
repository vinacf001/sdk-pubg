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

	struct UAnimMontage* *1049bf0142(); // Function Engine.AnimInstance.*1049bf0142 // None // @ game+0x63b5c38
	void *fb3df011d9(); // Function Engine.AnimInstance.*fb3df011d9 // None // @ game+0x639dda0
	void *ad69a18e5a(); // Function Engine.AnimInstance.*ad69a18e5a // None // @ game+0x63aab50
	int32 GetStateWeight(); // Function Engine.AnimInstance.GetStateWeight // None // @ game+0x63a5364
	struct UAnimMontage* *d46dc5dc83(); // Function Engine.AnimInstance.*d46dc5dc83 // None // @ game+0x63b55a0
	int32 PlaySlotAnimation(struct FName SlotNodeName, float BlendOutTime); // Function Engine.AnimInstance.PlaySlotAnimation // None // @ game+0x63b965c
	enum class EMontagePlayReturnType Montage_Play(float InTimeToStartMontageAt); // Function Engine.AnimInstance.Montage_Play // None // @ game+0x63d69c
	void *242396e0df(struct FName NextSection); // Function Engine.AnimInstance.*242396e0df // None // @ game+0x5681e50
	struct FName *0c3e0ee134(); // Function Engine.AnimInstance.*0c3e0ee134 // None // @ game+0x63a5844
	struct UAnimSequenceBase* *8c0c4894ae(struct FName SlotNodeName); // Function Engine.AnimInstance.*8c0c4894ae // None // @ game+0x63ab27c
	void *691ee180b3(struct UAnimMontage* Montage); // Function Engine.AnimInstance.*691ee180b3 // None // @ game+0x63b56dc
	int32 *e267668cef(); // Function Engine.AnimInstance.*e267668cef // None // @ game+0x639fd40
	int32 *723eae25e1(); // Function Engine.AnimInstance.*723eae25e1 // None // @ game+0x63a05b0
	void GetCurrentStateElapsedTime(int32 MachineIndex); // Function Engine.AnimInstance.GetCurrentStateElapsedTime // None // @ game+0x639dd00
	void *91ee611ffd(struct FName SectionName); // Function Engine.AnimInstance.*91ee611ffd // None // @ game+0x985bac
	int32 *e146fc91b1(); // Function Engine.AnimInstance.*e146fc91b1 // None // @ game+0x63a02bc
	struct FName *057fda6034(); // Function Engine.AnimInstance.*057fda6034 // None // @ game+0x63c95a0
	void GetAnimAssetPlayerTimeFromEnd(struct UAnimationAsset* AnimAsset); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd // None // @ game+0x639c268
	int32 *48c662fc37(); // Function Engine.AnimInstance.*48c662fc37 // None // @ game+0x63a0cb0
	int32 *245284edb6(); // Function Engine.AnimInstance.*245284edb6 // None // @ game+0x639fb64
	void *f364c6828d(int32 StateIndex); // Function Engine.AnimInstance.*f364c6828d // None // @ game+0x63a3888
	struct UAnimMontage* *bf78400b8f(); // Function Engine.AnimInstance.*bf78400b8f // None // @ game+0x63b58bc
	struct UAnimMontage* *5eeab7b91c(); // Function Engine.AnimInstance.*5eeab7b91c // None // @ game+0x63b5500
	void *bca340010a(struct UAnimMontage* Montage); // Function Engine.AnimInstance.*bca340010a // None // @ game+0x63b563c
	void *c5fd55eb88(bool bUnlockMovement); // Function Engine.AnimInstance.*c5fd55eb88 // None // @ game+0x63b1074
	int32 *fd0ea4aa33(); // Function Engine.AnimInstance.*fd0ea4aa33 // None // @ game+0x639ff04
	struct UAnimMontage* *ccdbbc4b23(); // Function Engine.AnimInstance.*ccdbbc4b23 // None // @ game+0x63b577c
	void *1ab31cd97b(); // Function Engine.AnimInstance.*1ab31cd97b // None // @ game+0x63cb40c
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation // None // @ game+0x26a108
	bool *3ae29e8bbb(); // Function Engine.AnimInstance.*3ae29e8bbb // None // @ game+0x63ab804
	void *f61ade023a(); // Function Engine.AnimInstance.*f61ade023a // None // @ game+0x63b5b58
	void *9b89db3b5d(int32 MachineIndex); // Function Engine.AnimInstance.*9b89db3b5d // None // @ game+0x63a0a9c
	struct FName *058de0418c(); // Function Engine.AnimInstance.*058de0418c // None // @ game+0x5748e4
	void *66a3995478(struct FName SyncGroup); // Function Engine.AnimInstance.*66a3995478 // None // @ game+0x63a9228
	void *899177a2d7(); // Function Engine.AnimInstance.*899177a2d7 // None // @ game+0x639f988
	void *e8a9ba9091(); // Function Engine.AnimInstance.*e8a9ba9091 // None // @ game+0x63d14c8
	int32 *3c7c31cc75(); // Function Engine.AnimInstance.*3c7c31cc75 // None // @ game+0x63a3970
	void *66f0434692(struct FName MarkerName); // Function Engine.AnimInstance.*66f0434692 // None // @ game+0x63a5ef4
	void *5e755e4562(); // Function Engine.AnimInstance.*5e755e4562 // None // @ game+0x63be71c
	void *79ed44711d(); // Function Engine.AnimInstance.*79ed44711d // None // @ game+0x63b5ac8
	void *ccd070a982(); // Function Engine.AnimInstance.*ccd070a982 // None // @ game+0xb68174
	void *84bfa05c08(struct FVector Velocity); // Function Engine.AnimInstance.*84bfa05c08 // None // @ game+0x638d5cc
	int32 *3ae1a9d556(); // Function Engine.AnimInstance.*3ae1a9d556 // None // @ game+0x63a0ec0
	float *f6100f1f77(); // Function Engine.AnimInstance.*f6100f1f77 // None // @ game+0xb88c10
	void *ec3409ea7b(); // Function Engine.AnimInstance.*ec3409ea7b // None // @ game+0x639d918
	void *905d29ade2(); // Function Engine.AnimInstance.*905d29ade2 // None // @ game+0xbc5c54
	void *3080ec9377(); // Function Engine.AnimInstance.*3080ec9377 // None // @ game+0x63b5a38
	int32 *8c5198f019(); // Function Engine.AnimInstance.*8c5198f019 // None // @ game+0x5e6a48
	float PlaySlotAnimationAsDynamicMontage(struct FName SlotNodeName, float BlendOutTime); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage // None // @ game+0x63b9880
	int32 *f36dfe6065(int32 StateIndex); // Function Engine.AnimInstance.*f36dfe6065 // None // @ game+0x5e7014
	void GetAnimAssetPlayerLength(struct UAnimationAsset* AnimAsset); // Function Engine.AnimInstance.GetAnimAssetPlayerLength // None // @ game+0x639c0f4
	bool *0d4faf3909(); // Function Engine.AnimInstance.*0d4faf3909 // None // @ game+0x63b1074
	float GetAnimAssetPlayerTimeFromEndFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction // None // @ game+0x639c36c
	void *24d7f1731e(); // Function Engine.AnimInstance.*24d7f1731e // None // @ game+0x63b595c
	void *a6e097a5c0(); // Function Engine.AnimInstance.*a6e097a5c0 // None // @ game+0x63a00c8
	void *07eb4aa7bc(); // Function Engine.AnimInstance.*07eb4aa7bc // None // @ game+0x6390874
	int32 *d9cbacaeac(); // Function Engine.AnimInstance.*d9cbacaeac // None // @ game+0x63a3b9c
	void *9687b3535a(int32 MachineIndex); // Function Engine.AnimInstance.*9687b3535a // None // @ game+0x5e74e4
	float GetAnimAssetPlayerTimeFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction // None // @ game+0x639c188
	struct UAnimMontage* *771de70e87(); // Function Engine.AnimInstance.*771de70e87 // None // @ game+0x63b581c
	void *53d492fe87(); // Function Engine.AnimInstance.*53d492fe87 // None // @ game+0x63d81dc
	void BlueprintUpdateAnimation(); // Function Engine.AnimInstance.BlueprintUpdateAnimation // None // @ game+0x26a108
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation // None // @ game+0x26a108
	float *3b5b96bdbc(); // Function Engine.AnimInstance.*3b5b96bdbc // None // @ game+0x63d6494
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

	struct UAnimMontage* *adb270eeb3(); // Function AnimGraphRuntime.*dba9f4a355.*adb270eeb3 // None // @ game+0x5cbb8d4
	void OnNotifyBeginReceived(struct FName Param0); // Function AnimGraphRuntime.*dba9f4a355.OnNotifyBeginReceived // None // @ game+0x5cbba94
	struct FName *77b3518fb4(struct UAnimMontage* MontageToPlay); // Function AnimGraphRuntime.*dba9f4a355.*77b3518fb4 // None // @ game+0x5cbb064
	struct UAnimMontage* OnMontageEnded(); // Function AnimGraphRuntime.*dba9f4a355.OnMontageEnded // None // @ game+0x5cbb9b4
	void OnNotifyEndReceived(struct FName Param0); // Function AnimGraphRuntime.*dba9f4a355.OnNotifyEndReceived // None // @ game+0x5cbbba0
};


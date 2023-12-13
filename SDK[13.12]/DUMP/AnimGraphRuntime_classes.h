// Class AnimGraphRuntime.*7a670548d4
// Size: 0x48 (Inherited: 0x40)
struct U*7a670548d4 : UAnimNotify {
	struct FName NotifyName; // 0x40(0x08)
};

// Class AnimGraphRuntime.*b8db146808
// Size: 0x40 (Inherited: 0x38)
struct U*b8db146808 : UAnimNotifyState {
	struct FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.*c67aafd327
// Size: 0x3a8 (Inherited: 0x3a8)
struct U*c67aafd327 : UAnimInstance {
	float DeltaTime; // 0x30(0x04)
	struct USkeleton* *a7e4906ff1; // 0x38(0x08)
	enum class *0accfd5352 *8ba26f4fbf; // 0x40(0x01)
	bool bRunUpdatesInWorkerThreads; // 0x41(0x01)
	bool bCanUseParallelUpdateAnimation; // 0x42(0x01)
	bool *c74b442f59; // 0x43(0x01)
	bool bWarnAboutBlueprintUsage; // 0x44(0x01)
	struct FMulticastDelegate OnMontageBlendingOut; // 0x48(0x10)
	struct FMulticastDelegate OnMontageStarted; // 0x58(0x10)
	struct FMulticastDelegate OnMontageEnded; // 0x68(0x10)
	struct FMulticastDelegate OnMontageInterrupted; // 0x78(0x10)
	struct FMulticastDelegate OnAllMontageInstancesEnded; // 0x88(0x10)
	bool *206a771f46; // 0xf8(0x01)
	struct TArray<struct FAnimNotifyEvent> *6fc5b1d0be; // 0x198(0x10)

	void *92ce4ee977(int32 MachineIndex, int32 TransitionIndex, float ReturnValue); // Function Engine.AnimInstance.*92ce4ee977 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68cf8c0
	void *324fdf8f8a(bool bUnlockMovement, bool UnlockAILogic); // Function Engine.AnimInstance.*324fdf8f8a // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68e04ac
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void *0e59f382aa(struct FName InSyncGroupName, struct F*c74ca801af ReturnValue); // Function Engine.AnimInstance.*0e59f382aa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d4ad8
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void *d213c50b7f(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, bool ReturnValue); // Function Engine.AnimInstance.*d213c50b7f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68da5d4
	void *8e3bfbd48a(int32 MachineIndex, int32 TransitionIndex, float ReturnValue); // Function Engine.AnimInstance.*8e3bfbd48a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68cfcc8
	void *cebaa7cd2c(struct FName SnapshotName); // Function Engine.AnimInstance.*cebaa7cd2c // Native|Public|BlueprintCallable // @ game+0x68edaf0
	void GetAnimAssetPlayerTimeFromEnd(struct UAnimationAsset* AnimAsset, float CurrentTime, float ReturnValue); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68cb314
	void Montage_Play(struct UAnimMontage* MontageToPlay, float InPlayRate, enum class EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, float ReturnValue); // Function Engine.AnimInstance.Montage_Play // Native|Public|BlueprintCallable // @ game+0x33ba78
	void *3d7951dd37(struct UAnimMontage* Montage, float NewPosition); // Function Engine.AnimInstance.*3d7951dd37 // Final|Native|Public|BlueprintCallable // @ game+0x68e5160
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Engine.AnimInstance.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void *5e07a11f21(struct FName SyncGroup, struct FName MarkerName, bool ReturnValue); // Function Engine.AnimInstance.*5e07a11f21 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d8400
	void *7daaaa5771(int32 AssetPlayerIndex, float ReturnValue); // Function Engine.AnimInstance.*7daaaa5771 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68ced58
	void *46b80b3a59(struct UAnimMontage* Montage, float ReturnValue); // Function Engine.AnimInstance.*46b80b3a59 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4d44
	void *2fdfd7cfe3(struct AActor* ReturnValue); // Function Engine.AnimInstance.*2fdfd7cfe3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xca75dc
	void GetStateWeight(int32 MachineIndex, int32 StateIndex, float ReturnValue); // Function Engine.AnimInstance.GetStateWeight // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68d45b4
	void *003dacf78a(); // Function Engine.AnimInstance.*003dacf78a // Final|Native|Public|BlueprintCallable // @ game+0x68bfe38
	void *6bd52ed5b9(); // Function Engine.AnimInstance.*6bd52ed5b9 // Native|Public|BlueprintCallable // @ game+0xc16928
	void *7aeb896e6e(); // Function Engine.AnimInstance.*7aeb896e6e // Final|Native|Public|BlueprintCallable // @ game+0x69056dc
	void *8c261f57d4(); // Function Engine.AnimInstance.*8c261f57d4 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68d2bd0
	void *be4d7059c2(); // Function Engine.AnimInstance.*be4d7059c2 // Final|Native|Public|BlueprintCallable // @ game+0x68e4ff0
	void *28886e519b(); // Function Engine.AnimInstance.*28886e519b // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x33bf58
	void *bcdca57f0a(); // Function Engine.AnimInstance.*bcdca57f0a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68cce7c
	void *a38a5ce007(); // Function Engine.AnimInstance.*a38a5ce007 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4c04
	void *f56ecdaa87(); // Function Engine.AnimInstance.*f56ecdaa87 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6907354
	void *0a8f8d6319(); // Function Engine.AnimInstance.*0a8f8d6319 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68e04ac
	void *917921a2e3(); // Function Engine.AnimInstance.*917921a2e3 // Final|Native|Public|BlueprintCallable // @ game+0x68e4e84
	void GetAnimAssetPlayerLength(); // Function Engine.AnimInstance.GetAnimAssetPlayerLength // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68cb1a0
	void *8681bde224(); // Function Engine.AnimInstance.*8681bde224 // Native|Public|HasOutParms|BlueprintCallable // @ game+0x6900710
	void PlaySlotAnimationAsDynamicMontage(); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage // Final|Native|Public|BlueprintCallable // @ game+0x68e8c6c
	void *97a3af276c(); // Function Engine.AnimInstance.*97a3af276c // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68cf3e0
	void *40e1f5f43a(); // Function Engine.AnimInstance.*40e1f5f43a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68cf0f8
	void *e064ffea5e(); // Function Engine.AnimInstance.*e064ffea5e // Final|Native|Public|BlueprintCallable // @ game+0x68e4f60
	void *757538402e(); // Function Engine.AnimInstance.*757538402e // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x91e460
	void *39919f124d(); // Function Engine.AnimInstance.*39919f124d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4ca4
	void *7eeea6c74e(); // Function Engine.AnimInstance.*7eeea6c74e // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x91e180
	void *a977510087(); // Function Engine.AnimInstance.*a977510087 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d9e90
	void *add693e1df(struct UAnimMontage* Montage, struct FName ReturnValue); // Function Engine.AnimInstance.*add693e1df // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4b68
	void *dcbdf49e66(struct UAnimMontage* Montage, bool ReturnValue); // Function Engine.AnimInstance.*dcbdf49e66 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4de4
	void *af34a038d7(int32 MachineIndex, int32 StateIndex, float ReturnValue); // Function Engine.AnimInstance.*af34a038d7 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68d29c8
	void *9c44837415(struct UAnimMontage* Montage, float ReturnValue); // Function Engine.AnimInstance.*9c44837415 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4ac8
	void *ce83b031d9(struct FName InSyncGroupName, struct FName PreviousMarker, struct FName NextMarker, bool bRespectMarkerOrder, bool ReturnValue); // Function Engine.AnimInstance.*ce83b031d9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68dab30
	void GetAnimAssetPlayerTimeFromEndFraction(struct UAnimationAsset* AnimAsset, float CurrentTime, float ReturnValue); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68cb418
	void *8844726dd1(int32 AssetPlayerIndex, float ReturnValue); // Function Engine.AnimInstance.*8844726dd1 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68cef10
	void *b38c1f41c3(struct FName MorphTargetName, float Value); // Function Engine.AnimInstance.*b38c1f41c3 // Final|Native|Public|BlueprintCallable // @ game+0x68f8904
	void GetAnimAssetPlayerTimeFraction(struct UAnimationAsset* AnimAsset, float CurrentTime, float ReturnValue); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68cb234
	void *a908599b82(int32 AssetPlayerIndex, float ReturnValue); // Function Engine.AnimInstance.*a908599b82 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68ce9c0
	void *04dc1a777c(struct FVector Velocity, struct FRotator BaseRotation, float ReturnValue); // Function Engine.AnimInstance.*04dc1a777c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68bcbb4
	void PlaySlotAnimation(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float ReturnValue); // Function Engine.AnimInstance.PlaySlotAnimation // Final|Native|Public|BlueprintCallable // @ game+0x68e8a48
	void *f30cd63cdb(struct UAnimMontage* ReturnValue); // Function Engine.AnimInstance.*f30cd63cdb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68cc9f4
	void *8859b811a6(enum class *0accfd5352 Value); // Function Engine.AnimInstance.*8859b811a6 // Final|Native|Public|BlueprintCallable // @ game+0x68fa7bc
	void *d3925db7cd(int32 MachineIndex, int32 StateIndex, float ReturnValue); // Function Engine.AnimInstance.*d3925db7cd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68d2dec
	void *6abb6cfc88(int32 AssetPlayerIndex, float ReturnValue); // Function Engine.AnimInstance.*6abb6cfc88 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x91de58
	void *ae69dc5c64(struct FName SyncGroup, struct FName MarkerName, float OutMarkerTime, bool ReturnValue); // Function Engine.AnimInstance.*ae69dc5c64 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x68d51a0
	void *5940d5128c(); // Function Engine.AnimInstance.*5940d5128c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d1cb8
	void GetCurrentStateElapsedTime(); // Function Engine.AnimInstance.GetCurrentStateElapsedTime // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68ccddc
	void *2ed9c97cc9(); // Function Engine.AnimInstance.*2ed9c97cc9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdadfd4
	void *c2413b9bde(); // Function Engine.AnimInstance.*c2413b9bde // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68cfac8
	void *c19b394f7e(); // Function Engine.AnimInstance.*c19b394f7e // Final|Native|Public|BlueprintCallable // @ game+0x68e5080
	void *0e6503e701(); // Function Engine.AnimInstance.*0e6503e701 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68ceb8c
	void *4e9f00b274(); // Function Engine.AnimInstance.*4e9f00b274 // Native|Public|BlueprintCallable // @ game+0xbeaa18
	void *cce7bb269a(); // Function Engine.AnimInstance.*cce7bb269a // Native|Public|BlueprintCallable // @ game+0x33c738
	void *c96507ca7c(); // Function Engine.AnimInstance.*c96507ca7c // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x91e638
};

// Class AnimGraphRuntime.*fb78f15808
// Size: 0x30 (Inherited: 0x30)
struct U*fb78f15808 : UBlueprintFunctionLibrary {
};

// Class AnimGraphRuntime.*d96480f394
// Size: 0x110 (Inherited: 0x30)
struct U*d96480f394 : UObject {
	struct FMulticastDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastDelegate OnNotifyEnd; // 0x70(0x10)
	char pad_80[0x90]; // 0x80(0x90)

	struct U*d96480f394* *e4157a253f(); // Function AnimGraphRuntime.*d96480f394.*e4157a253f // Final|Native|Static|Public|BlueprintCallable // @ game+0x619dcfc
	struct F*0a13b2b429 OnNotifyEndReceived(); // Function AnimGraphRuntime.*d96480f394.OnNotifyEndReceived // Final|Native|Protected|HasOutParms // @ game+0x619e838
	bool *27183e6f1a(); // Function AnimGraphRuntime.*d96480f394.*27183e6f1a // Final|Native|Protected // @ game+0x619e56c
	bool OnMontageEnded(); // Function AnimGraphRuntime.*d96480f394.OnMontageEnded // Final|Native|Protected // @ game+0x619e64c
	struct F*0a13b2b429 OnNotifyBeginReceived(); // Function AnimGraphRuntime.*d96480f394.OnNotifyBeginReceived // Final|Native|Protected|HasOutParms // @ game+0x619e72c
};


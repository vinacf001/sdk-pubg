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

	float *92ce4ee977(); // Function Engine.AnimInstance.*92ce4ee977 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6bebe14
	bool *324fdf8f8a(); // Function Engine.AnimInstance.*324fdf8f8a // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6bfc9c0
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation // Event|Public|BlueprintEvent // @ game+0x370fbc
	struct F*c74ca801af *0e59f382aa(); // Function Engine.AnimInstance.*0e59f382aa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf1004
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x370fbc
	bool *d213c50b7f(); // Function Engine.AnimInstance.*d213c50b7f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf6ae8
	float *8e3bfbd48a(); // Function Engine.AnimInstance.*8e3bfbd48a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6bec218
	struct FName *cebaa7cd2c(); // Function Engine.AnimInstance.*cebaa7cd2c // Native|Public|BlueprintCallable // @ game+0x6c0a004
	struct UAnimationAsset* GetAnimAssetPlayerTimeFromEnd(float CurrentTime, float ReturnValue); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6be78c0
	void Montage_Play(struct UAnimMontage* MontageToPlay, float ReturnValue); // Function Engine.AnimInstance.Montage_Play // Native|Public|BlueprintCallable // @ game+0x84d288
	void *3d7951dd37(struct UAnimMontage* Montage, float NewPosition); // Function Engine.AnimInstance.*3d7951dd37 // Final|Native|Public|BlueprintCallable // @ game+0x6c01674
	void BlueprintUpdateAnimation(); // Function Engine.AnimInstance.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x370fbc
	void *5e07a11f21(struct FName MarkerName, bool ReturnValue); // Function Engine.AnimInstance.*5e07a11f21 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf4914
	void *7daaaa5771(int32 AssetPlayerIndex); // Function Engine.AnimInstance.*7daaaa5771 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6beb2bc
	void *46b80b3a59(); // Function Engine.AnimInstance.*46b80b3a59 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c01258
	void *2fdfd7cfe3(struct AActor* ReturnValue); // Function Engine.AnimInstance.*2fdfd7cfe3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xd44138
	void GetStateWeight(int32 MachineIndex); // Function Engine.AnimInstance.GetStateWeight // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6bf0a48
	void *003dacf78a(); // Function Engine.AnimInstance.*003dacf78a // Final|Native|Public|BlueprintCallable // @ game+0x6bdc2e0
	struct UAnimMontage* *6bd52ed5b9(); // Function Engine.AnimInstance.*6bd52ed5b9 // Native|Public|BlueprintCallable // @ game+0x78a5ec
	struct FName *7aeb896e6e(); // Function Engine.AnimInstance.*7aeb896e6e // Final|Native|Public|BlueprintCallable // @ game+0x6c21be8
	float *8c261f57d4(); // Function Engine.AnimInstance.*8c261f57d4 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6bef064
	struct UAnimMontage* *be4d7059c2(); // Function Engine.AnimInstance.*be4d7059c2 // Final|Native|Public|BlueprintCallable // @ game+0x6c01504
	float *28886e519b(); // Function Engine.AnimInstance.*28886e519b // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x84e9a0
	struct FName *bcdca57f0a(); // Function Engine.AnimInstance.*bcdca57f0a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6be9410
	bool *a38a5ce007(); // Function Engine.AnimInstance.*a38a5ce007 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c01118
	struct APawn* *f56ecdaa87(); // Function Engine.AnimInstance.*f56ecdaa87 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c23860
	bool *0a8f8d6319(); // Function Engine.AnimInstance.*0a8f8d6319 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6bfc9c0
	struct UAnimMontage* *917921a2e3(); // Function Engine.AnimInstance.*917921a2e3 // Final|Native|Public|BlueprintCallable // @ game+0x6c01398
	float GetAnimAssetPlayerLength(); // Function Engine.AnimInstance.GetAnimAssetPlayerLength // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6be774c
	void *8681bde224(struct FPoseSnapshot Snapshot); // Function Engine.AnimInstance.*8681bde224 // Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c1cc1c
	void PlaySlotAnimationAsDynamicMontage(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendOutTriggerTime, float InTimeToStartMontageAt, struct UAnimMontage* ReturnValue); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage // Final|Native|Public|BlueprintCallable // @ game+0x6c05180
	void *97a3af276c(); // Function Engine.AnimInstance.*97a3af276c // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6beb938
	void *40e1f5f43a(float ReturnValue); // Function Engine.AnimInstance.*40e1f5f43a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6beb654
	void *e064ffea5e(struct UAnimMontage* Montage); // Function Engine.AnimInstance.*e064ffea5e // Final|Native|Public|BlueprintCallable // @ game+0x6c01474
	void *757538402e(); // Function Engine.AnimInstance.*757538402e // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x547880
	void *39919f124d(struct UAnimMontage* Montage, float ReturnValue); // Function Engine.AnimInstance.*39919f124d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c011b8
	void *7eeea6c74e(int32 MachineIndex); // Function Engine.AnimInstance.*7eeea6c74e // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0xc9238c
	void *a977510087(); // Function Engine.AnimInstance.*a977510087 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf63a4
	struct FName *add693e1df(); // Function Engine.AnimInstance.*add693e1df // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c0107c
	bool *dcbdf49e66(); // Function Engine.AnimInstance.*dcbdf49e66 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c012f8
	float *af34a038d7(); // Function Engine.AnimInstance.*af34a038d7 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6beee60
	float *9c44837415(); // Function Engine.AnimInstance.*9c44837415 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c00fdc
	bool *ce83b031d9(); // Function Engine.AnimInstance.*ce83b031d9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf7044
	float GetAnimAssetPlayerTimeFromEndFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6be79c4
	float *8844726dd1(); // Function Engine.AnimInstance.*8844726dd1 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6beb470
	float *b38c1f41c3(); // Function Engine.AnimInstance.*b38c1f41c3 // Final|Native|Public|BlueprintCallable // @ game+0x6c14e14
	float GetAnimAssetPlayerTimeFraction(float ReturnValue); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6be77e0
	void *a908599b82(int32 AssetPlayerIndex, float ReturnValue); // Function Engine.AnimInstance.*a908599b82 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6beaf24
	void *04dc1a777c(); // Function Engine.AnimInstance.*04dc1a777c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bd905c
	void PlaySlotAnimation(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime); // Function Engine.AnimInstance.PlaySlotAnimation // Final|Native|Public|BlueprintCallable // @ game+0x6c04f5c
	void *f30cd63cdb(struct UAnimMontage* ReturnValue); // Function Engine.AnimInstance.*f30cd63cdb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6be8f88
	void *8859b811a6(enum class *0accfd5352 Value); // Function Engine.AnimInstance.*8859b811a6 // Final|Native|Public|BlueprintCallable // @ game+0x6c16cc8
	void *d3925db7cd(); // Function Engine.AnimInstance.*d3925db7cd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6bef280
	void *6abb6cfc88(int32 AssetPlayerIndex, float ReturnValue); // Function Engine.AnimInstance.*6abb6cfc88 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0xc921cc
	void *ae69dc5c64(); // Function Engine.AnimInstance.*ae69dc5c64 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf16b4
	struct USkeletalMeshComponent* *5940d5128c(); // Function Engine.AnimInstance.*5940d5128c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bee154
	float GetCurrentStateElapsedTime(); // Function Engine.AnimInstance.GetCurrentStateElapsedTime // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6be9370
	bool *2ed9c97cc9(); // Function Engine.AnimInstance.*2ed9c97cc9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xe55fec
	float *c2413b9bde(); // Function Engine.AnimInstance.*c2413b9bde // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6bec018
	float *c19b394f7e(); // Function Engine.AnimInstance.*c19b394f7e // Final|Native|Public|BlueprintCallable // @ game+0x6c01594
	float *0e6503e701(); // Function Engine.AnimInstance.*0e6503e701 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6beb0f0
	struct UAnimMontage* *4e9f00b274(); // Function Engine.AnimInstance.*4e9f00b274 // Native|Public|BlueprintCallable // @ game+0x4ae8c4
	struct UAnimMontage* *cce7bb269a(); // Function Engine.AnimInstance.*cce7bb269a // Native|Public|BlueprintCallable // @ game+0x84f08c
	float *c96507ca7c(); // Function Engine.AnimInstance.*c96507ca7c // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x549024
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

	struct U*d96480f394* *e4157a253f(); // Function AnimGraphRuntime.*d96480f394.*e4157a253f // Final|Native|Static|Public|BlueprintCallable // @ game+0x649af30
	void OnNotifyEndReceived(struct FName Param0, struct F*0a13b2b429 Param1); // Function AnimGraphRuntime.*d96480f394.OnNotifyEndReceived // Final|Native|Protected|HasOutParms // @ game+0x649ba6c
	void *27183e6f1a(struct UAnimMontage* Param0); // Function AnimGraphRuntime.*d96480f394.*27183e6f1a // Final|Native|Protected // @ game+0x649b7a0
	void OnMontageEnded(); // Function AnimGraphRuntime.*d96480f394.OnMontageEnded // Final|Native|Protected // @ game+0x649b880
	void OnNotifyBeginReceived(struct FName Param0, struct F*0a13b2b429 Param1); // Function AnimGraphRuntime.*d96480f394.OnNotifyBeginReceived // Final|Native|Protected|HasOutParms // @ game+0x649b960
};


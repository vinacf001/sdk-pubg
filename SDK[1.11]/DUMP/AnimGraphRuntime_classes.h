// Class AnimGraphRuntime.*f9c594b228
// Size: 0x40 (Inherited: 0x38)
struct U*f9c594b228 : UAnimNotify {
	struct FName NotifyName[0x08]; // 0x38(0x08)
};

// Class AnimGraphRuntime.*40f3b8ec6e
// Size: 0x38 (Inherited: 0x30)
struct U*40f3b8ec6e : UAnimNotifyState {
	struct FName NotifyName[0x08]; // 0x30(0x08)
};

// Class AnimGraphRuntime.*6f7ea49661
// Size: 0x398 (Inherited: 0x398)
struct U*6f7ea49661 : UAnimInstance {
};

// Class AnimGraphRuntime.*01243fe7cb
// Size: 0x28 (Inherited: 0x28)
struct U*01243fe7cb : UBlueprintFunctionLibrary {

	void *2270c5cdba(struct FTransform* CurrentTransform, struct FVector* LookAtVector, struct FVector* UpVector); // Function AnimGraphRuntime.*01243fe7cb.*2270c5cdba // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5efe1fc
	struct FVector *8b3c65a466(bool bAllowStretching); // Function AnimGraphRuntime.*01243fe7cb.*8b3c65a466 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5efe4dc
};

// Class AnimGraphRuntime.*7d5aef126a
// Size: 0x110 (Inherited: 0x28)
struct U*7d5aef126a : UObject {
	struct FMulticastDelegate OnCompleted[0x10]; // 0x28(0x10)
	struct FMulticastDelegate OnBlendOut[0x10]; // 0x38(0x10)
	struct FMulticastDelegate OnInterrupted[0x10]; // 0x48(0x10)
	struct FMulticastDelegate OnNotifyBegin[0x10]; // 0x58(0x10)
	struct FMulticastDelegate OnNotifyEnd[0x10]; // 0x68(0x10)
	char pad_78[0x98]; // 0x78(0x98)

	void OnMontageEnded(struct UAnimMontage** Param0); // Function AnimGraphRuntime.*7d5aef126a.OnMontageEnded // Final|Native|Protected // @ game+0x5efe990
	struct FName *1a38c83a4a(); // Function AnimGraphRuntime.*7d5aef126a.*1a38c83a4a // Final|Native|Static|Public|BlueprintCallable // @ game+0x5efe040
	void OnNotifyEndReceived(struct FName* Param0); // Function AnimGraphRuntime.*7d5aef126a.OnNotifyEndReceived // Final|Native|Protected|HasOutParms // @ game+0x5efeb7c
	void OnNotifyBeginReceived(); // Function AnimGraphRuntime.*7d5aef126a.OnNotifyBeginReceived // Final|Native|Protected|HasOutParms // @ game+0x5efea70
	struct UAnimMontage* *2b9c4e6673(); // Function AnimGraphRuntime.*7d5aef126a.*2b9c4e6673 // Final|Native|Protected // @ game+0x5efe8b0
};


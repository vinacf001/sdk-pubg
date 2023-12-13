// Class AnimGraphRuntime.*434e589a75
// Size: 0x40 (Inherited: 0x38)
struct U*434e589a75 : UAnimNotify {
	struct FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.*69ee7e9afb
// Size: 0x38 (Inherited: 0x30)
struct U*69ee7e9afb : UAnimNotifyState {
	struct FName NotifyName; // 0x30(0x08)
};

// Class AnimGraphRuntime.*61e3a94ef2
// Size: 0x3a0 (Inherited: 0x3a0)
struct U*61e3a94ef2 : UAnimInstance {
};

// Class AnimGraphRuntime.*2d0fb382ca
// Size: 0x28 (Inherited: 0x28)
struct U*2d0fb382ca : UBlueprintFunctionLibrary {

	float *6bff9e994c(struct FTransform CurrentTransform); // Function AnimGraphRuntime.*2d0fb382ca.*6bff9e994c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e1a154
	float *0449cd2a88(struct FVector RootPos, struct FVector EndPos, struct FVector Effector, struct FVector OutEndPos); // Function AnimGraphRuntime.*2d0fb382ca.*0449cd2a88 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e1a434
};

// Class AnimGraphRuntime.*205081efac
// Size: 0x110 (Inherited: 0x28)
struct U*205081efac : UObject {
	struct FMulticastDelegate OnCompleted; // 0x28(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x38(0x10)
	struct FMulticastDelegate OnInterrupted; // 0x48(0x10)
	struct FMulticastDelegate OnNotifyBegin; // 0x58(0x10)
	struct FMulticastDelegate OnNotifyEnd; // 0x68(0x10)
	char pad_78[0x98]; // 0x78(0x98)

	struct UAnimMontage* OnMontageEnded(); // Function AnimGraphRuntime.*205081efac.OnMontageEnded // Final|Native|Protected // @ game+0x5e1a8e8
	void *71583fb02b(struct UAnimMontage* Param0); // Function AnimGraphRuntime.*205081efac.*71583fb02b // Final|Native|Protected // @ game+0x5e1a808
	struct FName *6ce1dcbe51(struct UAnimMontage* MontageToPlay); // Function AnimGraphRuntime.*205081efac.*6ce1dcbe51 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e19f98
	struct FName OnNotifyBeginReceived(); // Function AnimGraphRuntime.*205081efac.OnNotifyBeginReceived // Final|Native|Protected|HasOutParms // @ game+0x5e1a9c8
	void OnNotifyEndReceived(struct FName Param0); // Function AnimGraphRuntime.*205081efac.OnNotifyEndReceived // Final|Native|Protected|HasOutParms // @ game+0x5e1aad4
};


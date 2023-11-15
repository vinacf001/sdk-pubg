// Class AnimGraphRuntime.*434e589a75
// Size: 0x48 (Inherited: 0x40)
struct U*434e589a75 : UAnimNotify {
	struct FName NotifyName; // 0x40(0x08)
};

// Class AnimGraphRuntime.*69ee7e9afb
// Size: 0x40 (Inherited: 0x38)
struct U*69ee7e9afb : UAnimNotifyState {
	struct FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.*61e3a94ef2
// Size: 0x3a8 (Inherited: 0x3a8)
struct U*61e3a94ef2 : UAnimInstance {
};

// Class AnimGraphRuntime.*2d0fb382ca
// Size: 0x30 (Inherited: 0x30)
struct U*2d0fb382ca : UBlueprintFunctionLibrary {

	void *6bff9e994c(); // Function AnimGraphRuntime.*2d0fb382ca.*6bff9e994c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x60122e4
	void *0449cd2a88(); // Function AnimGraphRuntime.*2d0fb382ca.*0449cd2a88 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x60125c4
};

// Class AnimGraphRuntime.*205081efac
// Size: 0x110 (Inherited: 0x30)
struct U*205081efac : UObject {
	struct FMulticastDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastDelegate OnNotifyEnd; // 0x70(0x10)
	char pad_80[0x90]; // 0x80(0x90)

	void OnMontageEnded(); // Function AnimGraphRuntime.*205081efac.OnMontageEnded // Final|Native|Protected // @ game+0x6012a78
	void *71583fb02b(); // Function AnimGraphRuntime.*205081efac.*71583fb02b // Final|Native|Protected // @ game+0x6012998
	void *6ce1dcbe51(); // Function AnimGraphRuntime.*205081efac.*6ce1dcbe51 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6012128
	void OnNotifyBeginReceived(); // Function AnimGraphRuntime.*205081efac.OnNotifyBeginReceived // Final|Native|Protected|HasOutParms // @ game+0x6012b58
	void OnNotifyEndReceived(); // Function AnimGraphRuntime.*205081efac.OnNotifyEndReceived // Final|Native|Protected|HasOutParms // @ game+0x6012c64
};


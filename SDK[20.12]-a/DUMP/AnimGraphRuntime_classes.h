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
};

// Class AnimGraphRuntime.*fb78f15808
// Size: 0x30 (Inherited: 0x30)
struct U*fb78f15808 : UBlueprintFunctionLibrary {

	void *f63ccff380(); // Function AnimGraphRuntime.*fb78f15808.*f63ccff380 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x64a33e0
	void *930260c7b8(); // Function AnimGraphRuntime.*fb78f15808.*930260c7b8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x64a36c0
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

	void *e4157a253f(); // Function AnimGraphRuntime.*d96480f394.*e4157a253f // Final|Native|Static|Public|BlueprintCallable // @ game+0x64a3224
	void OnNotifyEndReceived(); // Function AnimGraphRuntime.*d96480f394.OnNotifyEndReceived // Final|Native|Protected|HasOutParms // @ game+0x64a3d60
	void *27183e6f1a(); // Function AnimGraphRuntime.*d96480f394.*27183e6f1a // Final|Native|Protected // @ game+0x64a3a94
	void OnMontageEnded(); // Function AnimGraphRuntime.*d96480f394.OnMontageEnded // Final|Native|Protected // @ game+0x64a3b74
	void OnNotifyBeginReceived(); // Function AnimGraphRuntime.*d96480f394.OnNotifyBeginReceived // Final|Native|Protected|HasOutParms // @ game+0x64a3c54
};


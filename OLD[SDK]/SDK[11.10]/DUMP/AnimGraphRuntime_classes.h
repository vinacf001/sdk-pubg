// Class AnimGraphRuntime.*f9c594b228
// Size: 0x48 (Inherited: 0x40)
struct U*f9c594b228 : UAnimNotify {
	struct FName NotifyName; // 0x40(0x08)
};

// Class AnimGraphRuntime.*40f3b8ec6e
// Size: 0x40 (Inherited: 0x38)
struct U*40f3b8ec6e : UAnimNotifyState {
	struct FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.*6f7ea49661
// Size: 0x3a0 (Inherited: 0x3a0)
struct U*6f7ea49661 : UAnimInstance {
};

// Class AnimGraphRuntime.*01243fe7cb
// Size: 0x30 (Inherited: 0x30)
struct U*01243fe7cb : UBlueprintFunctionLibrary {

	struct FTransform *2270c5cdba(); // Function AnimGraphRuntime.*01243fe7cb.*2270c5cdba // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5fc1888
	float *8b3c65a466(); // Function AnimGraphRuntime.*01243fe7cb.*8b3c65a466 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5fc1b68
};

// Class AnimGraphRuntime.*7d5aef126a
// Size: 0x110 (Inherited: 0x30)
struct U*7d5aef126a : UObject {
	struct FMulticastDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastDelegate OnNotifyEnd; // 0x70(0x10)
	char pad_80[0x90]; // 0x80(0x90)

	bool OnMontageEnded(); // Function AnimGraphRuntime.*7d5aef126a.OnMontageEnded // Final|Native|Protected // @ game+0x5fc201c
	struct U*7d5aef126a* *1a38c83a4a(); // Function AnimGraphRuntime.*7d5aef126a.*1a38c83a4a // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fc16cc
	struct F*202555cf20 OnNotifyEndReceived(); // Function AnimGraphRuntime.*7d5aef126a.OnNotifyEndReceived // Final|Native|Protected|HasOutParms // @ game+0x5fc2208
	struct F*202555cf20 OnNotifyBeginReceived(); // Function AnimGraphRuntime.*7d5aef126a.OnNotifyBeginReceived // Final|Native|Protected|HasOutParms // @ game+0x5fc20fc
	bool *2b9c4e6673(); // Function AnimGraphRuntime.*7d5aef126a.*2b9c4e6673 // Final|Native|Protected // @ game+0x5fc1f3c
};


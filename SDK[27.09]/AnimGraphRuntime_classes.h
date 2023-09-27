// Class AnimGraphRuntime.*0456955f47
// Size: 0x48 (Inherited: 0x40)
struct U*0456955f47 : UAnimNotify {
	struct FName NotifyName; // 0x40(0x08)
};

// Class AnimGraphRuntime.*30f5c11bce
// Size: 0x40 (Inherited: 0x38)
struct U*30f5c11bce : UAnimNotifyState {
	struct FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.*e54c3f0b0e
// Size: 0x3a0 (Inherited: 0x3a0)
struct U*e54c3f0b0e : UAnimInstance {
};

// Class AnimGraphRuntime.*e48c741f58
// Size: 0x30 (Inherited: 0x30)
struct U*e48c741f58 : UBlueprintFunctionLibrary {

	void *602d815169(); // Function AnimGraphRuntime.*e48c741f58.*602d815169 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x60c0774
	void *731f9c0a5f(); // Function AnimGraphRuntime.*e48c741f58.*731f9c0a5f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x60c0494
};

// Class AnimGraphRuntime.*dba9f4a355
// Size: 0x110 (Inherited: 0x30)
struct U*dba9f4a355 : UObject {
	struct FMulticastDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastDelegate OnNotifyEnd; // 0x70(0x10)
	char pad_80[0x90]; // 0x80(0x90)

	void *adb270eeb3(); // Function AnimGraphRuntime.*dba9f4a355.*adb270eeb3 // Final|Native|Protected // @ game+0x60c0b48
	void OnNotifyBeginReceived(); // Function AnimGraphRuntime.*dba9f4a355.OnNotifyBeginReceived // Final|Native|Protected|HasOutParms // @ game+0x60c0d08
	void *77b3518fb4(); // Function AnimGraphRuntime.*dba9f4a355.*77b3518fb4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x60c02d8
	void OnMontageEnded(); // Function AnimGraphRuntime.*dba9f4a355.OnMontageEnded // Final|Native|Protected // @ game+0x60c0c28
	void OnNotifyEndReceived(); // Function AnimGraphRuntime.*dba9f4a355.OnNotifyEndReceived // Final|Native|Protected|HasOutParms // @ game+0x60c0e14
};


// Class HeadMountedDisplay.*4862a8ab83
// Size: 0xa10 (Inherited: 0x9b0)
struct U*4862a8ab83 : UPrimitiveComponent {
	int32 PlayerIndex; // 0x9a8(0x04)
	enum class EControllerHand Hand; // 0x9ac(0x01)
	char bDisableLowLatencyUpdate : 1; // 0x9b0(0x01)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x9b4(0x01)
	char pad_9B6_1 : 7; // 0x9b6(0x01)
	char pad_9B7[0x59]; // 0x9b7(0x59)

	void *6f313c5d89(); // Function HeadMountedDisplay.*4862a8ab83.*6f313c5d89 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61745c8
};

// Class HeadMountedDisplay.*48888f6583
// Size: 0x30 (Inherited: 0x30)
struct U*48888f6583 : UBlueprintFunctionLibrary {

	void *7c75aad8af(); // Function HeadMountedDisplay.*48888f6583.*7c75aad8af // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6174400
	void *1cea991a73(); // Function HeadMountedDisplay.*48888f6583.*1cea991a73 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61744f0
	void *7c8442d653(); // Function HeadMountedDisplay.*48888f6583.*7c8442d653 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x617444c
	void *f0191ea325(); // Function HeadMountedDisplay.*48888f6583.*f0191ea325 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6173f10
	void *10980c9553(); // Function HeadMountedDisplay.*48888f6583.*10980c9553 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6173f98
	void *692541e3aa(); // Function HeadMountedDisplay.*48888f6583.*692541e3aa // Final|Native|Static|Public|BlueprintCallable // @ game+0x61745e0
	void *7eea566a00(); // Function HeadMountedDisplay.*48888f6583.*7eea566a00 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6174164
	void *0ebab33568(); // Function HeadMountedDisplay.*48888f6583.*0ebab33568 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6174090
	void *54b2cf680d(); // Function HeadMountedDisplay.*48888f6583.*54b2cf680d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6174370
	void *6ee64eee53(); // Function HeadMountedDisplay.*48888f6583.*6ee64eee53 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61742e0
	void *2a7e9228fa(); // Function HeadMountedDisplay.*48888f6583.*2a7e9228fa // Final|Native|Static|Public|BlueprintCallable // @ game+0x6174014
	void *1b07634efa(); // Function HeadMountedDisplay.*48888f6583.*1b07634efa // Final|Native|Static|Public|BlueprintCallable // @ game+0x6174208
};

// Class HeadMountedDisplay.*66530ac977
// Size: 0x280 (Inherited: 0x200)
struct U*66530ac977 : UActorComponent {
	struct FMulticastDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x200(0x10)
	struct FMulticastDelegate HMDTrackingInitializedDelegate; // 0x210(0x10)
	struct FMulticastDelegate HMDRecenteredDelegate; // 0x220(0x10)
	struct FMulticastDelegate HMDLostDelegate; // 0x230(0x10)
	struct FMulticastDelegate HMDReconnectedDelegate; // 0x240(0x10)
	struct FMulticastDelegate HMDConnectCanceledDelegate; // 0x250(0x10)
	struct FMulticastDelegate HMDPutOnHeadDelegate; // 0x260(0x10)
	struct FMulticastDelegate HMDRemovedFromHeadDelegate; // 0x270(0x10)

	void VRNotificationsDelegate__DelegateSignature(); // DelegateFunction HeadMountedDisplay.*66530ac977.VRNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
};


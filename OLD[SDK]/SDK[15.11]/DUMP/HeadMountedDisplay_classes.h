// Class HeadMountedDisplay.*c738572be3
// Size: 0xa00 (Inherited: 0x9a0)
struct U*c738572be3 : UPrimitiveComponent {
	int32 PlayerIndex; // 0x998(0x04)
	enum class EControllerHand Hand; // 0x99c(0x01)
	char bDisableLowLatencyUpdate : 1; // 0x9a0(0x01)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x9a4(0x01)
	char pad_9A6_1 : 7; // 0x9a6(0x01)
	char pad_9A7[0x59]; // 0x9a7(0x59)

	void *2d3f685bee(); // Function HeadMountedDisplay.*c738572be3.*2d3f685bee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ce8334
};

// Class HeadMountedDisplay.*2ba9c64276
// Size: 0x30 (Inherited: 0x30)
struct U*2ba9c64276 : UBlueprintFunctionLibrary {

	void *38799edf17(); // Function HeadMountedDisplay.*2ba9c64276.*38799edf17 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5ce834c
	void *e262ffc355(); // Function HeadMountedDisplay.*2ba9c64276.*e262ffc355 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ce825c
	void *6265151ea4(); // Function HeadMountedDisplay.*2ba9c64276.*6265151ea4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ce804c
	void *b2152c51a6(); // Function HeadMountedDisplay.*2ba9c64276.*b2152c51a6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5ce7ed0
	void *f083dc6931(); // Function HeadMountedDisplay.*2ba9c64276.*f083dc6931 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5ce7d04
	void *dade131c8a(); // Function HeadMountedDisplay.*2ba9c64276.*dade131c8a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ce81b8
	void *a6e643a15d(); // Function HeadMountedDisplay.*2ba9c64276.*a6e643a15d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ce80dc
	void *eb35ee1c5c(); // Function HeadMountedDisplay.*2ba9c64276.*eb35ee1c5c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ce816c
	void *05aa7cbe7f(); // Function HeadMountedDisplay.*2ba9c64276.*05aa7cbe7f // Final|Native|Static|Public|BlueprintCallable // @ game+0x5ce7d80
	void *ecea2e267d(); // Function HeadMountedDisplay.*2ba9c64276.*ecea2e267d // Final|Native|Static|Public|BlueprintCallable // @ game+0x5ce7dfc
	void *90bdb4fc25(); // Function HeadMountedDisplay.*2ba9c64276.*90bdb4fc25 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5ce7f74
	void *e5487f9710(); // Function HeadMountedDisplay.*2ba9c64276.*e5487f9710 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5ce7c7c
};

// Class HeadMountedDisplay.*c5b0dee757
// Size: 0x280 (Inherited: 0x200)
struct U*c5b0dee757 : UActorComponent {
	struct FMulticastDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x200(0x10)
	struct FMulticastDelegate HMDTrackingInitializedDelegate; // 0x210(0x10)
	struct FMulticastDelegate HMDRecenteredDelegate; // 0x220(0x10)
	struct FMulticastDelegate HMDLostDelegate; // 0x230(0x10)
	struct FMulticastDelegate HMDReconnectedDelegate; // 0x240(0x10)
	struct FMulticastDelegate HMDConnectCanceledDelegate; // 0x250(0x10)
	struct FMulticastDelegate HMDPutOnHeadDelegate; // 0x260(0x10)
	struct FMulticastDelegate HMDRemovedFromHeadDelegate; // 0x270(0x10)

	void VRNotificationsDelegate__DelegateSignature(); // DelegateFunction HeadMountedDisplay.*c5b0dee757.VRNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x21d2c4
};


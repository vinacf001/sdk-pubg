// Class HeadMountedDisplay.*c738572be3
// Size: 0xa10 (Inherited: 0x9b0)
struct U*c738572be3 : UPrimitiveComponent {
	int32 PlayerIndex; // 0x9a8(0x04)
	enum class EControllerHand Hand; // 0x9ac(0x01)
	char bDisableLowLatencyUpdate : 1; // 0x9b0(0x01)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x9b4(0x01)
	char pad_9B6_1 : 7; // 0x9b6(0x01)
	char pad_9B7[0x59]; // 0x9b7(0x59)

	bool *2d3f685bee(); // Function HeadMountedDisplay.*c738572be3.*2d3f685bee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5aebb00
};

// Class HeadMountedDisplay.*2ba9c64276
// Size: 0x30 (Inherited: 0x30)
struct U*2ba9c64276 : UBlueprintFunctionLibrary {

	bool *38799edf17(); // Function HeadMountedDisplay.*2ba9c64276.*38799edf17 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5aebb18
	bool *e262ffc355(); // Function HeadMountedDisplay.*2ba9c64276.*e262ffc355 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5aeba28
	int32 *6265151ea4(); // Function HeadMountedDisplay.*2ba9c64276.*6265151ea4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5aeb818
	bool *b2152c51a6(); // Function HeadMountedDisplay.*2ba9c64276.*b2152c51a6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5aeb69c
	void *f083dc6931(); // Function HeadMountedDisplay.*2ba9c64276.*f083dc6931 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5aeb4d0
	bool *dade131c8a(); // Function HeadMountedDisplay.*2ba9c64276.*dade131c8a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5aeb984
	int32 *a6e643a15d(); // Function HeadMountedDisplay.*2ba9c64276.*a6e643a15d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5aeb8a8
	bool *eb35ee1c5c(); // Function HeadMountedDisplay.*2ba9c64276.*eb35ee1c5c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5aeb938
	int32 *05aa7cbe7f(); // Function HeadMountedDisplay.*2ba9c64276.*05aa7cbe7f // Final|Native|Static|Public|BlueprintCallable // @ game+0x5aeb54c
	enum class EControllerHand *ecea2e267d(); // Function HeadMountedDisplay.*2ba9c64276.*ecea2e267d // Final|Native|Static|Public|BlueprintCallable // @ game+0x5aeb5c8
	bool *90bdb4fc25(); // Function HeadMountedDisplay.*2ba9c64276.*90bdb4fc25 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5aeb740
	struct U*c738572be3* *e5487f9710(); // Function HeadMountedDisplay.*2ba9c64276.*e5487f9710 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5aeb448
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

	void VRNotificationsDelegate__DelegateSignature(); // DelegateFunction HeadMountedDisplay.*c5b0dee757.VRNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
};


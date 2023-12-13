// Class HeadMountedDisplay.*4862a8ab83
// Size: 0xa10 (Inherited: 0x9b0)
struct U*4862a8ab83 : UPrimitiveComponent {
	int32 PlayerIndex; // 0x9a8(0x04)
	enum class EControllerHand Hand; // 0x9ac(0x01)
	char bDisableLowLatencyUpdate : 1; // 0x9b0(0x01)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x9b4(0x01)
	char pad_9B6_1 : 7; // 0x9b6(0x01)
	char pad_9B7[0x59]; // 0x9b7(0x59)

	void *6f313c5d89(bool ReturnValue); // Function HeadMountedDisplay.*4862a8ab83.*6f313c5d89 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x616bfb0
};

// Class HeadMountedDisplay.*48888f6583
// Size: 0x30 (Inherited: 0x30)
struct U*48888f6583 : UBlueprintFunctionLibrary {
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

	void VRNotificationsDelegate__DelegateSignature(); // DelegateFunction HeadMountedDisplay.*66530ac977.VRNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x370fbc
};


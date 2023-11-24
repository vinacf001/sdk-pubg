// Class HeadMountedDisplay.*544163343b
// Size: 0xa50 (Inherited: 0x9f0)
struct U*544163343b : UPrimitiveComponent {
	int32 PlayerIndex; // 0x9e8(0x04)
	enum class EControllerHand Hand; // 0x9ec(0x01)
	char bDisableLowLatencyUpdate : 1; // 0x9f0(0x01)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x9f4(0x01)
	char pad_9F6_1 : 7; // 0x9f6(0x01)
	char pad_9F7[0x59]; // 0x9f7(0x59)

	void *d4e8b39d08(); // Function HeadMountedDisplay.*544163343b.*d4e8b39d08 // None // @ game+0x59a1180
};

// Class HeadMountedDisplay.*af6495c794
// Size: 0x28 (Inherited: 0x28)
struct U*af6495c794 : UBlueprintFunctionLibrary {
};

// Class HeadMountedDisplay.*0e00843dda
// Size: 0x270 (Inherited: 0x1f0)
struct U*0e00843dda : UActorComponent {
	struct FMulticastDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x1f0(0x10)
	struct FMulticastDelegate HMDTrackingInitializedDelegate; // 0x200(0x10)
	struct FMulticastDelegate HMDRecenteredDelegate; // 0x210(0x10)
	struct FMulticastDelegate HMDLostDelegate; // 0x220(0x10)
	struct FMulticastDelegate HMDReconnectedDelegate; // 0x230(0x10)
	struct FMulticastDelegate HMDConnectCanceledDelegate; // 0x240(0x10)
	struct FMulticastDelegate HMDPutOnHeadDelegate; // 0x250(0x10)
	struct FMulticastDelegate HMDRemovedFromHeadDelegate; // 0x260(0x10)

	void VRNotificationsDelegate__DelegateSignature(); // DelegateFunction HeadMountedDisplay.*0e00843dda.VRNotificationsDelegate__DelegateSignature // None // @ game+0x26a108
};


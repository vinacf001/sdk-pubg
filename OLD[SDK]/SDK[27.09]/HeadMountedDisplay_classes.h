// Class HeadMountedDisplay.*544163343b
// Size: 0xa60 (Inherited: 0xa00)
struct U*544163343b : UPrimitiveComponent {
	int32 PlayerIndex; // 0x9f8(0x04)
	enum class EControllerHand Hand; // 0x9fc(0x01)
	char bDisableLowLatencyUpdate : 1; // 0xa00(0x01)
	enum class ETrackingStatus CurrentTrackingStatus; // 0xa04(0x01)
	char pad_A06_1 : 7; // 0xa06(0x01)
	char pad_A07[0x59]; // 0xa07(0x59)

	void *d4e8b39d08(); // Function HeadMountedDisplay.*544163343b.*d4e8b39d08 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5da3dd4
};

// Class HeadMountedDisplay.*af6495c794
// Size: 0x30 (Inherited: 0x30)
struct U*af6495c794 : UBlueprintFunctionLibrary {

	void *deb268882a(); // Function HeadMountedDisplay.*af6495c794.*deb268882a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5da3cfc
	void *d9b8bdc166(); // Function HeadMountedDisplay.*af6495c794.*d9b8bdc166 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5da3a14
	void *74dadb891e(); // Function HeadMountedDisplay.*af6495c794.*74dadb891e // Final|Native|Static|Public|BlueprintCallable // @ game+0x5da3dec
	void *dfa067dd6e(); // Function HeadMountedDisplay.*af6495c794.*dfa067dd6e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5da3aec
	void *79a2979be4(); // Function HeadMountedDisplay.*af6495c794.*79a2979be4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5da3c0c
	void *e00c79da26(); // Function HeadMountedDisplay.*af6495c794.*e00c79da26 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5da389c
	void *a81479c680(); // Function HeadMountedDisplay.*af6495c794.*a81479c680 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5da3820
	void *dfc706e292(); // Function HeadMountedDisplay.*af6495c794.*dfc706e292 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5da371c
	void *7bd6cd2dd0(); // Function HeadMountedDisplay.*af6495c794.*7bd6cd2dd0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5da3b7c
	void *31bfe77fde(); // Function HeadMountedDisplay.*af6495c794.*31bfe77fde // Final|Native|Static|Public|BlueprintCallable // @ game+0x5da37a4
	void *d815e925fc(); // Function HeadMountedDisplay.*af6495c794.*d815e925fc // Final|Native|Static|Public|BlueprintCallable // @ game+0x5da3970
	void *19448c5f66(); // Function HeadMountedDisplay.*af6495c794.*19448c5f66 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5da3c58
};

// Class HeadMountedDisplay.*0e00843dda
// Size: 0x280 (Inherited: 0x200)
struct U*0e00843dda : UActorComponent {
	struct FMulticastDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x200(0x10)
	struct FMulticastDelegate HMDTrackingInitializedDelegate; // 0x210(0x10)
	struct FMulticastDelegate HMDRecenteredDelegate; // 0x220(0x10)
	struct FMulticastDelegate HMDLostDelegate; // 0x230(0x10)
	struct FMulticastDelegate HMDReconnectedDelegate; // 0x240(0x10)
	struct FMulticastDelegate HMDConnectCanceledDelegate; // 0x250(0x10)
	struct FMulticastDelegate HMDPutOnHeadDelegate; // 0x260(0x10)
	struct FMulticastDelegate HMDRemovedFromHeadDelegate; // 0x270(0x10)

	void VRNotificationsDelegate__DelegateSignature(); // DelegateFunction HeadMountedDisplay.*0e00843dda.VRNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
};


// Class HeadMountedDisplay.*81cee62a85
// Size: 0xa70 (Inherited: 0xa10)
struct U*81cee62a85 : UPrimitiveComponent {
	int32 PlayerIndex; // 0xa08(0x04)
	enum class EControllerHand Hand; // 0xa0c(0x01)
	char bDisableLowLatencyUpdate : 1; // 0xa10(0x01)
	enum class ETrackingStatus CurrentTrackingStatus; // 0xa14(0x01)
	char pad_A16_1 : 7; // 0xa16(0x01)
	char pad_A17[0x59]; // 0xa17(0x59)

	bool *690e643e8b(); // Function HeadMountedDisplay.*81cee62a85.*690e643e8b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5fec8c8
};

// Class HeadMountedDisplay.*120cad85f3
// Size: 0x30 (Inherited: 0x30)
struct U*120cad85f3 : UBlueprintFunctionLibrary {

	int32 *181822e7d9(); // Function HeadMountedDisplay.*120cad85f3.*181822e7d9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5fec5e0
	bool *cfd13cdc4e(); // Function HeadMountedDisplay.*120cad85f3.*cfd13cdc4e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5fec7f0
	bool *61dfd022c1(); // Function HeadMountedDisplay.*120cad85f3.*61dfd022c1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fec464
	struct U*81cee62a85* *3ca2692cf2(); // Function HeadMountedDisplay.*120cad85f3.*3ca2692cf2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fec210
	bool *914b9517bd(); // Function HeadMountedDisplay.*120cad85f3.*914b9517bd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5fec74c
	bool *e90079fb1e(); // Function HeadMountedDisplay.*120cad85f3.*e90079fb1e // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fec8e0
	enum class EControllerHand *f07bd4ff3a(); // Function HeadMountedDisplay.*120cad85f3.*f07bd4ff3a // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fec390
	int32 *0073d47759(); // Function HeadMountedDisplay.*120cad85f3.*0073d47759 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5fec670
	void *7ad83580af(); // Function HeadMountedDisplay.*120cad85f3.*7ad83580af // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fec298
	bool *2b857a3575(); // Function HeadMountedDisplay.*120cad85f3.*2b857a3575 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fec508
	bool *3f08f9c48b(); // Function HeadMountedDisplay.*120cad85f3.*3f08f9c48b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5fec700
	int32 *635ab3b292(); // Function HeadMountedDisplay.*120cad85f3.*635ab3b292 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fec314
};

// Class HeadMountedDisplay.*a9e78bafed
// Size: 0x280 (Inherited: 0x200)
struct U*a9e78bafed : UActorComponent {
	struct FMulticastDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x200(0x10)
	struct FMulticastDelegate HMDTrackingInitializedDelegate; // 0x210(0x10)
	struct FMulticastDelegate HMDRecenteredDelegate; // 0x220(0x10)
	struct FMulticastDelegate HMDLostDelegate; // 0x230(0x10)
	struct FMulticastDelegate HMDReconnectedDelegate; // 0x240(0x10)
	struct FMulticastDelegate HMDConnectCanceledDelegate; // 0x250(0x10)
	struct FMulticastDelegate HMDPutOnHeadDelegate; // 0x260(0x10)
	struct FMulticastDelegate HMDRemovedFromHeadDelegate; // 0x270(0x10)

	void VRNotificationsDelegate__DelegateSignature(); // DelegateFunction HeadMountedDisplay.*a9e78bafed.VRNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2ad9d8
};


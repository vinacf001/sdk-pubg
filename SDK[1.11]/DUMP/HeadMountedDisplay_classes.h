// Class HeadMountedDisplay.*81cee62a85
// Size: 0xa60 (Inherited: 0xa00)
struct U*81cee62a85 : UPrimitiveComponent {
	int32 PlayerIndex; // 0x9f8(0x04)
	enum class EControllerHand Hand; // 0x9fc(0x01)
	char bDisableLowLatencyUpdate : 1; // 0xa00(0x01)
	enum class ETrackingStatus CurrentTrackingStatus; // 0xa04(0x01)
	char pad_A06_1 : 7; // 0xa06(0x01)
	char pad_A07[0x59]; // 0xa07(0x59)

	void *690e643e8b(); // Function HeadMountedDisplay.*81cee62a85.*690e643e8b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5bf1648
};

// Class HeadMountedDisplay.*120cad85f3
// Size: 0x28 (Inherited: 0x28)
struct U*120cad85f3 : UBlueprintFunctionLibrary {

	void *181822e7d9(); // Function HeadMountedDisplay.*120cad85f3.*181822e7d9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5bf1360
	void *cfd13cdc4e(enum class EControllerHand Hand); // Function HeadMountedDisplay.*120cad85f3.*cfd13cdc4e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5bf1570
	struct U*81cee62a85* *61dfd022c1(); // Function HeadMountedDisplay.*120cad85f3.*61dfd022c1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5bf11e4
	void *3ca2692cf2(); // Function HeadMountedDisplay.*120cad85f3.*3ca2692cf2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5bf0f90
	void *914b9517bd(struct U*81cee62a85* MotionControllerComponent); // Function HeadMountedDisplay.*120cad85f3.*914b9517bd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5bf14cc
	void *e90079fb1e(); // Function HeadMountedDisplay.*120cad85f3.*e90079fb1e // Final|Native|Static|Public|BlueprintCallable // @ game+0x5bf1660
	int32 *f07bd4ff3a(); // Function HeadMountedDisplay.*120cad85f3.*f07bd4ff3a // Final|Native|Static|Public|BlueprintCallable // @ game+0x5bf1110
	void *0073d47759(); // Function HeadMountedDisplay.*120cad85f3.*0073d47759 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5bf13f0
	void *7ad83580af(); // Function HeadMountedDisplay.*120cad85f3.*7ad83580af // Final|Native|Static|Public|BlueprintCallable // @ game+0x5bf1018
	void *2b857a3575(enum class EControllerHand Hand); // Function HeadMountedDisplay.*120cad85f3.*2b857a3575 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5bf1288
	void *3f08f9c48b(); // Function HeadMountedDisplay.*120cad85f3.*3f08f9c48b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5bf1480
	void *635ab3b292(); // Function HeadMountedDisplay.*120cad85f3.*635ab3b292 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5bf1094
};

// Class HeadMountedDisplay.*a9e78bafed
// Size: 0x270 (Inherited: 0x1f0)
struct U*a9e78bafed : UActorComponent {
	struct FMulticastDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x1f0(0x10)
	struct FMulticastDelegate HMDTrackingInitializedDelegate; // 0x200(0x10)
	struct FMulticastDelegate HMDRecenteredDelegate; // 0x210(0x10)
	struct FMulticastDelegate HMDLostDelegate; // 0x220(0x10)
	struct FMulticastDelegate HMDReconnectedDelegate; // 0x230(0x10)
	struct FMulticastDelegate HMDConnectCanceledDelegate; // 0x240(0x10)
	struct FMulticastDelegate HMDPutOnHeadDelegate; // 0x250(0x10)
	struct FMulticastDelegate HMDRemovedFromHeadDelegate; // 0x260(0x10)

	void VRNotificationsDelegate__DelegateSignature(); // DelegateFunction HeadMountedDisplay.*a9e78bafed.VRNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
};


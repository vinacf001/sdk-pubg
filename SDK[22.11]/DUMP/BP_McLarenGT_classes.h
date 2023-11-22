// BlueprintGeneratedClass BP_McLarenGT.BP_McLarenGT_C
// Size: 0xff8 (Inherited: 0xfa8)
struct ABP_McLarenGT_C : AVehicleBase_C {
	struct F*a3d8ff36c0 UberGraphFrame; // 0xfa8(0x08)
	struct USphereComponent* PassengerCollision; // 0xfb0(0x08)
	struct USphereComponent* DriverCollision; // 0xfb8(0x08)
	struct UStaticMeshComponent* Windscreen; // 0xfc0(0x08)
	struct U*63f224beb3* MaterialClipVolume; // 0xfc8(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent; // 0xfd0(0x08)
	struct USphereComponent* Sphere1; // 0xfd8(0x08)
	struct U*a25d7a0388* PassengerFRSeat; // 0xfe0(0x08)
	struct USphereComponent* Sphere; // 0xfe8(0x08)
	struct U*a25d7a0388* DriverSeat; // 0xff0(0x08)

	void UserConstructionScript(); // Function BP_McLarenGT.BP_McLarenGT_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReceiveBeginPlay(); // Function BP_McLarenGT.BP_McLarenGT_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x32e590
	void ExecuteUbergraph_BP_McLarenGT(); // Function BP_McLarenGT.BP_McLarenGT_C.ExecuteUbergraph_BP_McLarenGT //  // @ game+0x32e590
};


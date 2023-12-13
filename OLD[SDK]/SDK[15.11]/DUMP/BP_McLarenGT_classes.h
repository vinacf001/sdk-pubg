// BlueprintGeneratedClass BP_McLarenGT.BP_McLarenGT_C
// Size: 0x1008 (Inherited: 0xfb8)
struct ABP_McLarenGT_C : AVehicleBase_C {
	struct F*a3d8ff36c0 UberGraphFrame; // 0xfb8(0x08)
	struct USphereComponent* PassengerCollision; // 0xfc0(0x08)
	struct USphereComponent* DriverCollision; // 0xfc8(0x08)
	struct UStaticMeshComponent* Windscreen; // 0xfd0(0x08)
	struct U*63f224beb3* MaterialClipVolume; // 0xfd8(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent; // 0xfe0(0x08)
	struct USphereComponent* Sphere1; // 0xfe8(0x08)
	struct U*a25d7a0388* PassengerFRSeat; // 0xff0(0x08)
	struct USphereComponent* Sphere; // 0xff8(0x08)
	struct U*a25d7a0388* DriverSeat; // 0x1000(0x08)

	void UserConstructionScript(); // Function BP_McLarenGT.BP_McLarenGT_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ReceiveBeginPlay(); // Function BP_McLarenGT.BP_McLarenGT_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x21d2c4
	void ExecuteUbergraph_BP_McLarenGT(); // Function BP_McLarenGT.BP_McLarenGT_C.ExecuteUbergraph_BP_McLarenGT //  // @ game+0x21d2c4
};


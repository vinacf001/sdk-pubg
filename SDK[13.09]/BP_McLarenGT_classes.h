// BlueprintGeneratedClass BP_McLarenGT.BP_McLarenGT_C
// Size: 0x1008 (Inherited: 0xfb8)
struct ABP_McLarenGT_C : AVehicleBase_C {
	struct F*73a77c28fa UberGraphFrame; // 0xfb8(0x08)
	struct USphereComponent* PassengerCollision; // 0xfc0(0x08)
	struct USphereComponent* DriverCollision; // 0xfc8(0x08)
	struct UStaticMeshComponent* Windscreen; // 0xfd0(0x08)
	struct U*555c720717* MaterialClipVolume; // 0xfd8(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent; // 0xfe0(0x08)
	struct USphereComponent* Sphere1; // 0xfe8(0x08)
	struct U*614c6d2b0f* PassengerFRSeat; // 0xff0(0x08)
	struct USphereComponent* Sphere; // 0xff8(0x08)
	struct U*614c6d2b0f* DriverSeat; // 0x1000(0x08)

	void UserConstructionScript(); // Function BP_McLarenGT.BP_McLarenGT_C.UserConstructionScript // None // @ game+0x26a108
	void ReceiveBeginPlay(); // Function BP_McLarenGT.BP_McLarenGT_C.ReceiveBeginPlay // None // @ game+0x26a108
	void ExecuteUbergraph_BP_McLarenGT(); // Function BP_McLarenGT.BP_McLarenGT_C.ExecuteUbergraph_BP_McLarenGT // None // @ game+0x26a108
};


// BlueprintGeneratedClass BP_McLarenGT.BP_McLarenGT_C
// Size: 0x1058 (Inherited: 0x1008)
struct ABP_McLarenGT_C : AVehicleBase_C {
	struct F*a6c93df757 UberGraphFrame; // 0x1008(0x08)
	struct USphereComponent* PassengerCollision; // 0x1010(0x08)
	struct USphereComponent* DriverCollision; // 0x1018(0x08)
	struct UStaticMeshComponent* Windscreen; // 0x1020(0x08)
	struct U*af901fa0ff* MaterialClipVolume; // 0x1028(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent; // 0x1030(0x08)
	struct USphereComponent* Sphere1; // 0x1038(0x08)
	struct U*dd198cebe7* PassengerFRSeat; // 0x1040(0x08)
	struct USphereComponent* Sphere; // 0x1048(0x08)
	struct U*dd198cebe7* DriverSeat; // 0x1050(0x08)

	void UserConstructionScript(); // Function BP_McLarenGT.BP_McLarenGT_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveBeginPlay(); // Function BP_McLarenGT.BP_McLarenGT_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_BP_McLarenGT(); // Function BP_McLarenGT.BP_McLarenGT_C.ExecuteUbergraph_BP_McLarenGT //  // @ game+0x3b43ac
};


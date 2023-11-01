// BlueprintGeneratedClass BP_McLarenGT.BP_McLarenGT_C
// Size: 0xff8 (Inherited: 0xfa8)
struct ABP_McLarenGT_C : AVehicleBase_C {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0xfa8(0x08)
	struct USphereComponent* PassengerCollision[0x08]; // 0xfb0(0x08)
	struct USphereComponent* DriverCollision[0x08]; // 0xfb8(0x08)
	struct UStaticMeshComponent* Windscreen[0x08]; // 0xfc0(0x08)
	struct U*df6a705964* MaterialClipVolume[0x08]; // 0xfc8(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent[0x08]; // 0xfd0(0x08)
	struct USphereComponent* Sphere1[0x08]; // 0xfd8(0x08)
	struct U*9644c8969d* PassengerFRSeat[0x08]; // 0xfe0(0x08)
	struct USphereComponent* Sphere[0x08]; // 0xfe8(0x08)
	struct U*9644c8969d* DriverSeat[0x08]; // 0xff0(0x08)

	void UserConstructionScript(); // Function BP_McLarenGT.BP_McLarenGT_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function BP_McLarenGT.BP_McLarenGT_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ExecuteUbergraph_BP_McLarenGT(); // Function BP_McLarenGT.BP_McLarenGT_C.ExecuteUbergraph_BP_McLarenGT //  // @ game+0x2cd4ac
};


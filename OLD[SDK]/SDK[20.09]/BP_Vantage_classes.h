// BlueprintGeneratedClass BP_Vantage.BP_Vantage_C
// Size: 0x1000 (Inherited: 0xfa8)
struct ABP_Vantage_C : AVehicleBase_C {
	struct F*73a77c28fa UberGraphFrame; // 0xfa8(0x08)
	struct UBoxComponent* PlayerBlockingVolume; // 0xfb0(0x08)
	struct USphereComponent* PassengerCollision; // 0xfb8(0x08)
	struct USphereComponent* DriverCollision; // 0xfc0(0x08)
	struct UStaticMeshComponent* Windscreen; // 0xfc8(0x08)
	struct U*555c720717* MaterialClipVolume; // 0xfd0(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent; // 0xfd8(0x08)
	struct USphereComponent* Sphere1; // 0xfe0(0x08)
	struct U*614c6d2b0f* PassengerFRSeat; // 0xfe8(0x08)
	struct USphereComponent* Sphere; // 0xff0(0x08)
	struct U*614c6d2b0f* DriverSeat; // 0xff8(0x08)

	void UserConstructionScript(); // Function BP_Vantage.BP_Vantage_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveBeginPlay(); // Function BP_Vantage.BP_Vantage_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ExecuteUbergraph_BP_Vantage(); // Function BP_Vantage.BP_Vantage_C.ExecuteUbergraph_BP_Vantage //  // @ game+0x1e037c
};


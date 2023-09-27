// BlueprintGeneratedClass BP_DBX.BP_DBX_C
// Size: 0x1048 (Inherited: 0xfc8)
struct ABP_DBX_C : AVehicleBase_C {
	struct UBoxComponent* PlayerBlockingVolume; // 0xfc8(0x08)
	struct USphereComponent* PassengerBRCollision; // 0xfd0(0x08)
	struct USphereComponent* PassengerBLCollision; // 0xfd8(0x08)
	struct USphereComponent* PassengerFRCollision; // 0xfe0(0x08)
	struct USphereComponent* DriverCollision; // 0xfe8(0x08)
	struct UStaticMeshComponent* WindscreenFront; // 0xff0(0x08)
	struct U*555c720717* MaterialClipVolume; // 0xff8(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent; // 0x1000(0x08)
	struct USphereComponent* Sphere3; // 0x1008(0x08)
	struct U*614c6d2b0f* PassengerBRSeat; // 0x1010(0x08)
	struct USphereComponent* Sphere2; // 0x1018(0x08)
	struct U*614c6d2b0f* PassengerBLSeat; // 0x1020(0x08)
	struct USphereComponent* Sphere1; // 0x1028(0x08)
	struct U*614c6d2b0f* PassengerFRSeat; // 0x1030(0x08)
	struct USphereComponent* Sphere; // 0x1038(0x08)
	struct U*614c6d2b0f* DriverSeat; // 0x1040(0x08)

	void UserConstructionScript(); // Function BP_DBX.BP_DBX_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
};


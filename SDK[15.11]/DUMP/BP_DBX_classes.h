// BlueprintGeneratedClass BP_DBX.BP_DBX_C
// Size: 0x1038 (Inherited: 0xfb8)
struct ABP_DBX_C : AVehicleBase_C {
	struct UBoxComponent* PlayerBlockingVolume; // 0xfb8(0x08)
	struct USphereComponent* PassengerBRCollision; // 0xfc0(0x08)
	struct USphereComponent* PassengerBLCollision; // 0xfc8(0x08)
	struct USphereComponent* PassengerFRCollision; // 0xfd0(0x08)
	struct USphereComponent* DriverCollision; // 0xfd8(0x08)
	struct UStaticMeshComponent* WindscreenFront; // 0xfe0(0x08)
	struct U*63f224beb3* MaterialClipVolume; // 0xfe8(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent; // 0xff0(0x08)
	struct USphereComponent* Sphere3; // 0xff8(0x08)
	struct U*a25d7a0388* PassengerBRSeat; // 0x1000(0x08)
	struct USphereComponent* Sphere2; // 0x1008(0x08)
	struct U*a25d7a0388* PassengerBLSeat; // 0x1010(0x08)
	struct USphereComponent* Sphere1; // 0x1018(0x08)
	struct U*a25d7a0388* PassengerFRSeat; // 0x1020(0x08)
	struct USphereComponent* Sphere; // 0x1028(0x08)
	struct U*a25d7a0388* DriverSeat; // 0x1030(0x08)

	void UserConstructionScript(); // Function BP_DBX.BP_DBX_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
};


// BlueprintGeneratedClass BP_DBX.BP_DBX_C
// Size: 0x10a8 (Inherited: 0x1028)
struct ABP_DBX_C : AVehicleBase_C {
	struct UBoxComponent* PlayerBlockingVolume; // 0x1028(0x08)
	struct USphereComponent* PassengerBRCollision; // 0x1030(0x08)
	struct USphereComponent* PassengerBLCollision; // 0x1038(0x08)
	struct USphereComponent* PassengerFRCollision; // 0x1040(0x08)
	struct USphereComponent* DriverCollision; // 0x1048(0x08)
	struct UStaticMeshComponent* WindscreenFront; // 0x1050(0x08)
	struct U*af901fa0ff* MaterialClipVolume; // 0x1058(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent; // 0x1060(0x08)
	struct USphereComponent* Sphere3; // 0x1068(0x08)
	struct U*dd198cebe7* PassengerBRSeat; // 0x1070(0x08)
	struct USphereComponent* Sphere2; // 0x1078(0x08)
	struct U*dd198cebe7* PassengerBLSeat; // 0x1080(0x08)
	struct USphereComponent* Sphere1; // 0x1088(0x08)
	struct U*dd198cebe7* PassengerFRSeat; // 0x1090(0x08)
	struct USphereComponent* Sphere; // 0x1098(0x08)
	struct U*dd198cebe7* DriverSeat; // 0x10a0(0x08)

	void UserConstructionScript(); // Function BP_DBX.BP_DBX_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
};


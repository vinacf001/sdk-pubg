// BlueprintGeneratedClass VehicleBase.VehicleBase_C
// Size: 0x1028 (Inherited: 0xfd0)
struct AVehicleBase_C : ATslWheeledVehicle {
	struct F*a6c93df757 UberGraphFrame; // 0xfd0(0x08)
	struct UCameraComponent* ThirdPersonCameraInVehicle; // 0xfd8(0x08)
	struct U*cf8c5e487d* ThirdPersonSpringArmInVehicle; // 0xfe0(0x08)
	struct UCameraComponent* FirstPersonCameraInVehicle; // 0xfe8(0x08)
	struct U*cf8c5e487d* FirstPersonSpringArmInVehicle; // 0xff0(0x08)
	struct URadialForceComponent* RadialForce; // 0xff8(0x08)
	struct UTslWheeledVehicleMovement* TslWheeledVehicleMovementRef; // 0x1000(0x08)
	struct UTslWheeledVehicleMovement* MovementComponent_Ref; // 0x1008(0x08)
	struct USpotLightComponent* TopSupportLight; // 0x1010(0x08)
	struct USpotLightComponent* MainHeadlight; // 0x1018(0x08)
	struct UStaticMeshComponent* Pickup_Headlights; // 0x1020(0x08)

	void SetScalarParameters(); // Function VehicleBase.VehicleBase_C.SetScalarParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	void UserConstructionScript(); // Function VehicleBase.VehicleBase_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	void ReceiveBeginPlay(); // Function VehicleBase.VehicleBase_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22c9a0
	int32 ExecuteUbergraph_VehicleBase(); // Function VehicleBase.VehicleBase_C.ExecuteUbergraph_VehicleBase //  // @ game+0x22c9a0
};


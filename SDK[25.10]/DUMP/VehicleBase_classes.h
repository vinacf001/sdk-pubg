// BlueprintGeneratedClass VehicleBase.VehicleBase_C
// Size: 0xfb8 (Inherited: 0xf60)
struct AVehicleBase_C : ATslWheeledVehicle {
	struct F*abc8f374e0 UberGraphFrame; // 0xf60(0x08)
	struct UCameraComponent* ThirdPersonCameraInVehicle; // 0xf68(0x08)
	struct U*41fd9c33fd* ThirdPersonSpringArmInVehicle; // 0xf70(0x08)
	struct UCameraComponent* FirstPersonCameraInVehicle; // 0xf78(0x08)
	struct U*41fd9c33fd* FirstPersonSpringArmInVehicle; // 0xf80(0x08)
	struct URadialForceComponent* RadialForce; // 0xf88(0x08)
	struct UTslWheeledVehicleMovement* TslWheeledVehicleMovementRef; // 0xf90(0x08)
	struct UTslWheeledVehicleMovement* MovementComponent_Ref; // 0xf98(0x08)
	struct USpotLightComponent* TopSupportLight; // 0xfa0(0x08)
	struct USpotLightComponent* MainHeadlight; // 0xfa8(0x08)
	struct UStaticMeshComponent* Pickup_Headlights; // 0xfb0(0x08)

	void SetScalarParameters(); // Function VehicleBase.VehicleBase_C.SetScalarParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void UserConstructionScript(); // Function VehicleBase.VehicleBase_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ReceiveBeginPlay(); // Function VehicleBase.VehicleBase_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2ad9d8
	int32 ExecuteUbergraph_VehicleBase(); // Function VehicleBase.VehicleBase_C.ExecuteUbergraph_VehicleBase //  // @ game+0x2ad9d8
};


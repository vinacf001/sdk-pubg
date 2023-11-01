// BlueprintGeneratedClass VehicleBase.VehicleBase_C
// Size: 0xfa8 (Inherited: 0xf50)
struct AVehicleBase_C : ATslWheeledVehicle {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0xf50(0x08)
	struct UCameraComponent* ThirdPersonCameraInVehicle[0x08]; // 0xf58(0x08)
	struct U*41fd9c33fd* ThirdPersonSpringArmInVehicle[0x08]; // 0xf60(0x08)
	struct UCameraComponent* FirstPersonCameraInVehicle[0x08]; // 0xf68(0x08)
	struct U*41fd9c33fd* FirstPersonSpringArmInVehicle[0x08]; // 0xf70(0x08)
	struct URadialForceComponent* RadialForce[0x08]; // 0xf78(0x08)
	struct UTslWheeledVehicleMovement* TslWheeledVehicleMovementRef[0x08]; // 0xf80(0x08)
	struct UTslWheeledVehicleMovement* MovementComponent_Ref[0x08]; // 0xf88(0x08)
	struct USpotLightComponent* TopSupportLight[0x08]; // 0xf90(0x08)
	struct USpotLightComponent* MainHeadlight[0x08]; // 0xf98(0x08)
	struct UStaticMeshComponent* Pickup_Headlights[0x08]; // 0xfa0(0x08)

	void SetScalarParameters(); // Function VehicleBase.VehicleBase_C.SetScalarParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void UserConstructionScript(); // Function VehicleBase.VehicleBase_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function VehicleBase.VehicleBase_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ExecuteUbergraph_VehicleBase(); // Function VehicleBase.VehicleBase_C.ExecuteUbergraph_VehicleBase //  // @ game+0x2cd4ac
};


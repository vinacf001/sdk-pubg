// BlueprintGeneratedClass VehicleBase.VehicleBase_C
// Size: 0xfc8 (Inherited: 0xf70)
struct AVehicleBase_C : ATslWheeledVehicle {
	struct F*73a77c28fa UberGraphFrame; // 0xf70(0x08)
	struct UCameraComponent* ThirdPersonCameraInVehicle; // 0xf78(0x08)
	struct U*83f5889ba2* ThirdPersonSpringArmInVehicle; // 0xf80(0x08)
	struct UCameraComponent* FirstPersonCameraInVehicle; // 0xf88(0x08)
	struct U*83f5889ba2* FirstPersonSpringArmInVehicle; // 0xf90(0x08)
	struct URadialForceComponent* RadialForce; // 0xf98(0x08)
	struct UTslWheeledVehicleMovement* TslWheeledVehicleMovementRef; // 0xfa0(0x08)
	struct UTslWheeledVehicleMovement* MovementComponent_Ref; // 0xfa8(0x08)
	struct USpotLightComponent* TopSupportLight; // 0xfb0(0x08)
	struct USpotLightComponent* MainHeadlight; // 0xfb8(0x08)
	struct UStaticMeshComponent* Pickup_Headlights; // 0xfc0(0x08)

	void SetScalarParameters(); // Function VehicleBase.VehicleBase_C.SetScalarParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void UserConstructionScript(); // Function VehicleBase.VehicleBase_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void ReceiveBeginPlay(); // Function VehicleBase.VehicleBase_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	int32 ExecuteUbergraph_VehicleBase(); // Function VehicleBase.VehicleBase_C.ExecuteUbergraph_VehicleBase //  // @ game+0x22ddc4
};


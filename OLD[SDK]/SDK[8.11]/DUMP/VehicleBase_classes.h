// BlueprintGeneratedClass VehicleBase.VehicleBase_C
// Size: 0xfa8 (Inherited: 0xf50)
struct AVehicleBase_C : ATslWheeledVehicle {
	struct F*a3d8ff36c0 UberGraphFrame; // 0xf50(0x08)
	struct UCameraComponent* ThirdPersonCameraInVehicle; // 0xf58(0x08)
	struct U*755d51411a* ThirdPersonSpringArmInVehicle; // 0xf60(0x08)
	struct UCameraComponent* FirstPersonCameraInVehicle; // 0xf68(0x08)
	struct U*755d51411a* FirstPersonSpringArmInVehicle; // 0xf70(0x08)
	struct URadialForceComponent* RadialForce; // 0xf78(0x08)
	struct UTslWheeledVehicleMovement* TslWheeledVehicleMovementRef; // 0xf80(0x08)
	struct UTslWheeledVehicleMovement* MovementComponent_Ref; // 0xf88(0x08)
	struct USpotLightComponent* TopSupportLight; // 0xf90(0x08)
	struct USpotLightComponent* MainHeadlight; // 0xf98(0x08)
	struct UStaticMeshComponent* Pickup_Headlights; // 0xfa0(0x08)

	void SetScalarParameters(); // Function VehicleBase.VehicleBase_C.SetScalarParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void UserConstructionScript(); // Function VehicleBase.VehicleBase_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReceiveBeginPlay(); // Function VehicleBase.VehicleBase_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x293938
	void ExecuteUbergraph_VehicleBase(); // Function VehicleBase.VehicleBase_C.ExecuteUbergraph_VehicleBase //  // @ game+0x293938
};


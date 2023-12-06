// BlueprintGeneratedClass BP_CameraMan.BP_CameraMan_C
// Size: 0x448 (Inherited: 0x3f8)
struct ABP_CameraMan_C : AActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3f8(0x08)
	struct UCameraComponent* Camera; // 0x400(0x08)
	struct USpringArmComponent* SpringArm; // 0x408(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x410(0x08)
	struct ATslCharacter* ParentRef; // 0x418(0x08)
	bool bInitialized; // 0x420(0x01)
	bool bIsAttached; // 0x421(0x01)
	bool bLookAtTarget; // 0x422(0x01)
	bool bAutoZoom; // 0x423(0x01)
	char pad_424[0x4]; // 0x424(0x04)
	struct UCurveFloat* DistanceZoomCurve; // 0x428(0x08)
	float YawRotation; // 0x430(0x04)
	float YawRotationRate; // 0x434(0x04)
	float TargetOffsetZ; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct ATslWheeledVehicle* ParentRefMoto; // 0x440(0x08)

	bool Init_Moto(); // Function BP_CameraMan.BP_CameraMan_C.Init_Moto // Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	bool Init(); // Function BP_CameraMan.BP_CameraMan_C.Init // Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	void UserConstructionScript(); // Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	float ReceiveTick(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22c9a0
	void ReceiveDestroyed(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct FHitResult ExecuteUbergraph_BP_CameraMan(); // Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan // HasDefaults // @ game+0x22c9a0
};


// BlueprintGeneratedClass BP_CameraMan.BP_CameraMan_C
// Size: 0x448 (Inherited: 0x3f8)
struct ABP_CameraMan_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x3f8(0x08)
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

	struct ATslWheeledVehicle* Init_Moto(); // Function BP_CameraMan.BP_CameraMan_C.Init_Moto // None // @ game+0x26a108
	void Init(); // Function BP_CameraMan.BP_CameraMan_C.Init // None // @ game+0x26a108
	void UserConstructionScript(); // Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript // None // @ game+0x26a108
	void ReceiveTick(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveTick // None // @ game+0x26a108
	void ReceiveDestroyed(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveDestroyed // None // @ game+0x26a108
	struct FTransform ExecuteUbergraph_BP_CameraMan(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc__abc2022f64_ReturnValue, struct FVector CallFunc_MakeVector_ReturnValue, struct FVector CallFunc__3ba4f92e48_ReturnValue, float CallFunc__abc2022f64_ReturnValue2, struct FVector CallFunc__4883fee90d_ReturnValue4, struct FVector CallFunc__72ed3d5557_ReturnValue2, float CallFunc__0fd03d50ab_ReturnValue2, float CallFunc__f3987cbe77_ReturnValue); // Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan // None // @ game+0x26a108
};


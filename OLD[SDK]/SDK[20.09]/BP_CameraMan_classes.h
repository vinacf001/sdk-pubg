// BlueprintGeneratedClass BP_CameraMan.BP_CameraMan_C
// Size: 0x440 (Inherited: 0x3f0)
struct ABP_CameraMan_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x3f0(0x08)
	struct UCameraComponent* Camera; // 0x3f8(0x08)
	struct USpringArmComponent* SpringArm; // 0x400(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x408(0x08)
	struct ATslCharacter* ParentRef; // 0x410(0x08)
	bool bInitialized; // 0x418(0x01)
	bool bIsAttached; // 0x419(0x01)
	bool bLookAtTarget; // 0x41a(0x01)
	bool bAutoZoom; // 0x41b(0x01)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct UCurveFloat* DistanceZoomCurve; // 0x420(0x08)
	float YawRotation; // 0x428(0x04)
	float YawRotationRate; // 0x42c(0x04)
	float TargetOffsetZ; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct ATslWheeledVehicle* ParentRefMoto; // 0x438(0x08)

	struct ATslWheeledVehicle* Init_Moto(); // Function BP_CameraMan.BP_CameraMan_C.Init_Moto // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct ATslCharacter* Init(); // Function BP_CameraMan.BP_CameraMan_C.Init // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UserConstructionScript(); // Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveTick(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ReceiveDestroyed(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FTransform ExecuteUbergraph_BP_CameraMan(struct FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_IsValid_ReturnValue2, struct FVector CallFunc__4883fee90d_ReturnValue, float CallFunc__0fd03d50ab_ReturnValue, struct FVector CallFunc_MakeVector_ReturnValue, struct FVector CallFunc__3ba4f92e48_ReturnValue, float CallFunc__abc2022f64_ReturnValue2, float CallFunc__ae60dcbe74_ReturnValue4, struct FVector CallFunc__72ed3d5557_ReturnValue2, float CallFunc__0fd03d50ab_ReturnValue2, float CallFunc__f3987cbe77_ReturnValue, struct FRotator CallFunc__6a718aa94c_ReturnValue2); // Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan // HasDefaults // @ game+0x1e037c
};


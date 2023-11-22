// BlueprintGeneratedClass BP_CameraMan.BP_CameraMan_C
// Size: 0x438 (Inherited: 0x3e8)
struct ABP_CameraMan_C : AActor {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x3e8(0x08)
	struct UCameraComponent* Camera; // 0x3f0(0x08)
	struct USpringArmComponent* SpringArm; // 0x3f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x400(0x08)
	struct ATslCharacter* ParentRef; // 0x408(0x08)
	bool bInitialized; // 0x410(0x01)
	bool bIsAttached; // 0x411(0x01)
	bool bLookAtTarget; // 0x412(0x01)
	bool bAutoZoom; // 0x413(0x01)
	char pad_414[0x4]; // 0x414(0x04)
	struct UCurveFloat* DistanceZoomCurve; // 0x418(0x08)
	float YawRotation; // 0x420(0x04)
	float YawRotationRate; // 0x424(0x04)
	float TargetOffsetZ; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct ATslWheeledVehicle* ParentRefMoto; // 0x430(0x08)

	void Init_Moto(); // Function BP_CameraMan.BP_CameraMan_C.Init_Moto // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct ATslCharacter* Init(); // Function BP_CameraMan.BP_CameraMan_C.Init // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void UserConstructionScript(); // Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReceiveTick(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x32e590
	void ReceiveDestroyed(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x32e590
	struct FRotator ExecuteUbergraph_BP_CameraMan(struct FTransform CallFunc_MakeTransform_ReturnValue, struct FVector CallFunc__21797244da_ReturnValue2, struct FString CallFunc__cf9e97b29f_ReturnValue, bool CallFunc__37dc61ae74_ReturnValue, float CallFunc__aa1f1a3bef_ReturnValue2, float CallFunc__aa1f1a3bef_ReturnValue5, struct FRotator CallFunc_MakeRotator_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult2, struct FVector CallFunc__21797244da_ReturnValue6); // Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan // HasDefaults // @ game+0x32e590
};


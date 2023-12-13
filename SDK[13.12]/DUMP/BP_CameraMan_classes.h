// BlueprintGeneratedClass BP_CameraMan.BP_CameraMan_C
// Size: 0x440 (Inherited: 0x3f0)
struct ABP_CameraMan_C : AActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3f0(0x08)
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

	void Init_Moto(struct ATslWheeledVehicle* ParentRef, bool CallFunc_IsValid_ReturnValue); // Function BP_CameraMan.BP_CameraMan_C.Init_Moto // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Init(struct ATslCharacter* ParentRef, bool CallFunc_IsValid_ReturnValue); // Function BP_CameraMan.BP_CameraMan_C.Init // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void UserConstructionScript(); // Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveTick(float DeltaSeconds); // Function BP_CameraMan.BP_CameraMan_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ReceiveDestroyed(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_BP_CameraMan(int32 EntryPoint, struct FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, struct FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue2, struct FVector CallFunc__806c296001_ReturnValue, struct FVector CallFunc__e1a45b5fe3_ReturnValue, struct FVector CallFunc__4efcfaba5e_ReturnValue, float CallFunc__b748c09796_ReturnValue, float CallFunc__ace9454687_ReturnValue, struct FVector CallFunc__e1a45b5fe3_ReturnValue2, struct FText CallFunc__62eaa5d275_ReturnValue, struct FString CallFunc__535f3ea46b_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue, bool CallFunc__f207f940aa_ReturnValue, bool CallFunc_BooleanAND_ReturnValue); // Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan // HasDefaults // @ game+0x20a5d0
};


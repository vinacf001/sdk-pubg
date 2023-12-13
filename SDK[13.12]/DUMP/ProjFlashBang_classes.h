// BlueprintGeneratedClass ProjFlashBang.ProjFlashBang_C
// Size: 0x918 (Inherited: 0x8c0)
struct AProjFlashBang_C : ATslProjectile {
	struct F*a6c93df757 UberGraphFrame; // 0x8c0(0x08)
	struct UFlashbangComponent* Flashbang; // 0x8c8(0x08)
	struct ATslCharacter* LocalShooterCharacter; // 0x8d0(0x08)
	struct FVector ExplodeLocation; // 0x8d8(0x0c)
	char pad_8E4[0x4]; // 0x8e4(0x04)
	struct UClass* FlashbangEffectClass; // 0x8e8(0x08)
	struct TArray<struct UAkAudioEvent*> TinnitusSoundAks; // 0x8f0(0x10)
	float MinPower; // 0x900(0x04)
	char pad_904[0x4]; // 0x904(0x04)
	struct UCurveFloat* AnglePower; // 0x908(0x08)
	struct UCurveFloat* DistancePower; // 0x910(0x08)

	float GetFlashBangDistance(); // Function ProjFlashBang.ProjFlashBang_C.GetFlashBangDistance // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x20a5d0
	float GetCameraToFlashBangAngle(); // Function ProjFlashBang.ProjFlashBang_C.GetCameraToFlashBangAngle // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x20a5d0
	void GetTinnitusSoundIndex(struct FRotator CallFunc_BreakTransform_Rotation, struct FVector CallFunc_BreakTransform_Scale, struct FVector CallFunc__4efcfaba5e_ReturnValue, float CallFunc__b748c09796_ReturnValue, bool CallFunc__ab61acee03_ReturnValue, bool CallFunc__ab61acee03_ReturnValue2, bool CallFunc__ab61acee03_ReturnValue3, bool CallFunc__ab61acee03_ReturnValue4); // Function ProjFlashBang.ProjFlashBang_C.GetTinnitusSoundIndex // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x20a5d0
	void SpawnFlashBangCaputeEffect(struct ACharacter* ShooterCharacter, struct FPostProcessSettings K2Node_MakeStruct_PostProcessSettings, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, bool K2Node_DynamicCast_bSuccess, struct UCameraComponent* CallFunc__85aa848657_ReturnValue, struct APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, struct FRotator CallFunc__d36a44000d_ReturnValue, struct FVector CallFunc__d3c1b5233d_ReturnValue, struct FTransform CallFunc_MakeTransform_ReturnValue, struct AActor* CallFunc__f8ded2558f_ReturnValue, struct ABP_FlashBangCaptureActor_v2_C* CallFunc_FinishSpawningActor_ReturnValue); // Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangCaputeEffect // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SpawnFlashBangEffect(float FlashBangDistance, struct FTransform CallFunc_MakeTransform_ReturnValue, struct F*b6f659eb1b K2Node_MakeStruct__b6f659eb1b, struct TArray<struct F*b6f659eb1b> K2Node_MakeArray_Array, struct AActor* CallFunc__f8ded2558f_ReturnValue, bool CallFunc__de4795df35_ReturnValue, struct ATslPostProcessEffect* CallFunc_FinishSpawningActor_ReturnValue); // Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangEffect // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void PlayTinnitusSound(int32 Index, bool CallFunc__8402dd331b_ReturnValue, struct UAkAudioEvent* CallFunc_Array_Get_Item, int32 CallFunc_PostEventAtLocation_ReturnValue); // Function ProjFlashBang.ProjFlashBang_C.PlayTinnitusSound // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void UserConstructionScript(); // Function ProjFlashBang.ProjFlashBang_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ExplodeBP(struct FVector Location, struct FRotator Rotation, struct FHitResult Impact, float Radius); // Function ProjFlashBang.ProjFlashBang_C.ExplodeBP // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_ProjFlashBang(int32 EntryPoint, struct FVector K2Node_Event_Location, struct FRotator K2Node_Event_Rotation, struct FHitResult K2Node_Event_Impact, float K2Node_Event_Radius); // Function ProjFlashBang.ProjFlashBang_C.ExecuteUbergraph_ProjFlashBang // HasDefaults // @ game+0x20a5d0
};


// BlueprintGeneratedClass ProjFlashBang.ProjFlashBang_C
// Size: 0x928 (Inherited: 0x8d0)
struct AProjFlashBang_C : ATslProjectile {
	struct F*a6c93df757 UberGraphFrame; // 0x8d0(0x08)
	struct UFlashbangComponent* Flashbang; // 0x8d8(0x08)
	struct ATslCharacter* LocalShooterCharacter; // 0x8e0(0x08)
	struct FVector ExplodeLocation; // 0x8e8(0x0c)
	char pad_8F4[0x4]; // 0x8f4(0x04)
	struct UClass* FlashbangEffectClass; // 0x8f8(0x08)
	struct TArray<struct UAkAudioEvent*> TinnitusSoundAks; // 0x900(0x10)
	float MinPower; // 0x910(0x04)
	char pad_914[0x4]; // 0x914(0x04)
	struct UCurveFloat* AnglePower; // 0x918(0x08)
	struct UCurveFloat* DistancePower; // 0x920(0x08)

	void GetFlashBangDistance(float FlashBangDistance, struct FTransform CallFunc__5828b2e365_ReturnValue, struct FVector CallFunc_BreakTransform_Location, struct FVector CallFunc__aec3180364_ReturnValue, float CallFunc__b748c09796_ReturnValue, struct FVector CallFunc_Normal_ReturnValue, float CallFunc__9da493fa7f_ReturnValue, float CallFunc__ace9454687_ReturnValue, float CallFunc_FClamp_ReturnValue); // Function ProjFlashBang.ProjFlashBang_C.GetFlashBangDistance // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	void GetCameraToFlashBangAngle(float Angle, struct FVector CallFunc__4efcfaba5e_ReturnValue, struct FVector CallFunc__f756a0f59d_ReturnValue, struct FVector CallFunc__aec3180364_ReturnValue, struct FVector CallFunc_Normal_ReturnValue); // Function ProjFlashBang.ProjFlashBang_C.GetCameraToFlashBangAngle // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	bool GetTinnitusSoundIndex(); // Function ProjFlashBang.ProjFlashBang_C.GetTinnitusSoundIndex // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	struct ABP_FlashBangCaptureActor_v2_C* SpawnFlashBangCaputeEffect(); // Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangCaputeEffect // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct ATslPostProcessEffect* SpawnFlashBangEffect(); // Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangEffect // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	int32 PlayTinnitusSound(bool CallFunc__8402dd331b_ReturnValue, struct UAkAudioEvent* CallFunc_Array_Get_Item, int32 CallFunc_PostEventAtLocation_ReturnValue); // Function ProjFlashBang.ProjFlashBang_C.PlayTinnitusSound // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void UserConstructionScript(); // Function ProjFlashBang.ProjFlashBang_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ExplodeBP(float Radius); // Function ProjFlashBang.ProjFlashBang_C.ExplodeBP // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x370fbc
	void ExecuteUbergraph_ProjFlashBang(int32 EntryPoint, struct FVector K2Node_Event_Location); // Function ProjFlashBang.ProjFlashBang_C.ExecuteUbergraph_ProjFlashBang // HasDefaults // @ game+0x370fbc
};


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

	void GetFlashBangDistance(); // Function ProjFlashBang.ProjFlashBang_C.GetFlashBangDistance // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void GetCameraToFlashBangAngle(); // Function ProjFlashBang.ProjFlashBang_C.GetCameraToFlashBangAngle // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void GetTinnitusSoundIndex(); // Function ProjFlashBang.ProjFlashBang_C.GetTinnitusSoundIndex // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void SpawnFlashBangCaputeEffect(); // Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangCaputeEffect // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void SpawnFlashBangEffect(); // Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangEffect // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void PlayTinnitusSound(); // Function ProjFlashBang.ProjFlashBang_C.PlayTinnitusSound // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function ProjFlashBang.ProjFlashBang_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ExplodeBP(); // Function ProjFlashBang.ProjFlashBang_C.ExplodeBP // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_ProjFlashBang(); // Function ProjFlashBang.ProjFlashBang_C.ExecuteUbergraph_ProjFlashBang // HasDefaults // @ game+0x3b43ac
};


// BlueprintGeneratedClass ExplosionEffectsActor.ExplosionEffectsActor_C
// Size: 0x4e8 (Inherited: 0x3e8)
struct AExplosionEffectsActor_C : ABZExplosionEffect {
	struct F*a6c93df757 UberGraphFrame; // 0x3e8(0x08)
	struct UParticleSystemComponent* P_Player_Dust_Off; // 0x3f0(0x08)
	struct UParticleSystemComponent* Explosion; // 0x3f8(0x08)
	struct UPostProcessComponent* Dust_PP; // 0x400(0x08)
	struct UPostProcessComponent* Flash_PP; // 0x408(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x410(0x08)
	bool startDust; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float maxDustValue; // 0x41c(0x04)
	struct UMaterialInstanceDynamic* DustPP_MID; // 0x420(0x08)
	struct UMaterialInstanceDynamic* FlashPP_MID; // 0x428(0x08)
	struct UMaterialInstanceDynamic* playerDust_MID; // 0x430(0x08)
	struct TArray<struct FVector> explosionOrigins; // 0x438(0x10)
	struct TArray<float> flashTimes; // 0x448(0x10)
	struct TArray<float> dustTimes; // 0x458(0x10)
	int32 nextFlashIndex; // 0x468(0x04)
	float flashTimeMultipler; // 0x46c(0x04)
	float flashIntensityMultiplier; // 0x470(0x04)
	float dustSettleTime; // 0x474(0x04)
	float dustBuildTime; // 0x478(0x04)
	float dustDem; // 0x47c(0x04)
	struct UMaterialInstanceDynamic* skyboxDust_MID; // 0x480(0x08)
	struct UAkAudioEvent* ExplosionSound; // 0x488(0x08)
	struct UMaterialInstanceDynamic* VolumeDust; // 0x490(0x08)
	bool Use VolumetricEffect; // 0x498(0x01)
	bool PlayerDustOn; // 0x499(0x01)
	bool DustLastFrame; // 0x49a(0x01)
	char pad_49B[0x1]; // 0x49b(0x01)
	float dustScale; // 0x49c(0x04)
	float dustStartOffset; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct TArray<struct AActor*> objectsToSort; // 0x4a8(0x10)
	float UpdateTimer; // 0x4b8(0x04)
	float UndergroundDensity; // 0x4bc(0x04)
	bool wasUnderground; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct UMaterialInstance* DustGrungeMatSoftRef; // 0x4c8(0x20)

	void IsUnderGround(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.IsUnderGround // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UpdateDustSortOrder(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.UpdateDustSortOrder // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void PlayExplosionFX(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.PlayExplosionFX // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void HandleDust(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.HandleDust // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void HandleFlash(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.HandleFlash // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Show Dust Mesh(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Show Dust Mesh // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void OnLoaded_ABED7E7C4573CB45B6BA5AAE2C558419(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.OnLoaded_ABED7E7C4573CB45B6BA5AAE2C558419 // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void BeginEffect(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.BeginEffect // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveBeginPlay(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTick(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void Remove Sort Object(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Remove Sort Object // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Add Sort Object(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Add Sort Object // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_ExplosionEffectsActor(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ExecuteUbergraph_ExplosionEffectsActor // HasDefaults // @ game+0x3b43ac
};


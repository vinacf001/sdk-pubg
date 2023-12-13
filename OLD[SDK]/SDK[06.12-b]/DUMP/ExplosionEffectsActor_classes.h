// BlueprintGeneratedClass ExplosionEffectsActor.ExplosionEffectsActor_C
// Size: 0x4f8 (Inherited: 0x3f8)
struct AExplosionEffectsActor_C : ABZExplosionEffect {
	struct F*a6c93df757 UberGraphFrame; // 0x3f8(0x08)
	struct UParticleSystemComponent* P_Player_Dust_Off; // 0x400(0x08)
	struct UParticleSystemComponent* Explosion; // 0x408(0x08)
	struct UPostProcessComponent* Dust_PP; // 0x410(0x08)
	struct UPostProcessComponent* Flash_PP; // 0x418(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x420(0x08)
	bool startDust; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	float maxDustValue; // 0x42c(0x04)
	struct UMaterialInstanceDynamic* DustPP_MID; // 0x430(0x08)
	struct UMaterialInstanceDynamic* FlashPP_MID; // 0x438(0x08)
	struct UMaterialInstanceDynamic* playerDust_MID; // 0x440(0x08)
	struct TArray<struct FVector> explosionOrigins; // 0x448(0x10)
	struct TArray<float> flashTimes; // 0x458(0x10)
	struct TArray<float> dustTimes; // 0x468(0x10)
	int32 nextFlashIndex; // 0x478(0x04)
	float flashTimeMultipler; // 0x47c(0x04)
	float flashIntensityMultiplier; // 0x480(0x04)
	float dustSettleTime; // 0x484(0x04)
	float dustBuildTime; // 0x488(0x04)
	float dustDem; // 0x48c(0x04)
	struct UMaterialInstanceDynamic* skyboxDust_MID; // 0x490(0x08)
	struct UAkAudioEvent* ExplosionSound; // 0x498(0x08)
	struct UMaterialInstanceDynamic* VolumeDust; // 0x4a0(0x08)
	bool Use VolumetricEffect; // 0x4a8(0x01)
	bool PlayerDustOn; // 0x4a9(0x01)
	bool DustLastFrame; // 0x4aa(0x01)
	char pad_4AB[0x1]; // 0x4ab(0x01)
	float dustScale; // 0x4ac(0x04)
	float dustStartOffset; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct TArray<struct AActor*> objectsToSort; // 0x4b8(0x10)
	float UpdateTimer; // 0x4c8(0x04)
	float UndergroundDensity; // 0x4cc(0x04)
	bool wasUnderground; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct UMaterialInstance* DustGrungeMatSoftRef; // 0x4d8(0x20)

	bool IsUnderGround(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.IsUnderGround // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	bool UpdateDustSortOrder(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.UpdateDustSortOrder // Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	struct FVector PlayExplosionFX(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.PlayExplosionFX // Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	bool HandleDust(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.HandleDust // Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	bool HandleFlash(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.HandleFlash // Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	bool Show Dust Mesh(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Show Dust Mesh // Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	void UserConstructionScript(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	struct UObject* OnLoaded_ABED7E7C4573CB45B6BA5AAE2C558419(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.OnLoaded_ABED7E7C4573CB45B6BA5AAE2C558419 // BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	int32 BeginEffect(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.BeginEffect // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	void ReceiveBeginPlay(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22c9a0
	float ReceiveTick(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct AActor* Remove Sort Object(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Remove Sort Object // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	struct AActor* Add Sort Object(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Add Sort Object // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	struct FVector ExecuteUbergraph_ExplosionEffectsActor(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ExecuteUbergraph_ExplosionEffectsActor // HasDefaults // @ game+0x22c9a0
};


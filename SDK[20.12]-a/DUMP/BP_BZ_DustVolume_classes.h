// BlueprintGeneratedClass BP_BZ_DustVolume.BP_BZ_DustVolume_C
// Size: 0x4b1 (Inherited: 0x400)
struct ABP_BZ_DustVolume_C : ABZDustVolume {
	struct F*a6c93df757 UberGraphFrame; // 0x400(0x08)
	struct UStaticMeshComponent* CubeFlippedNormals; // 0x408(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x410(0x08)
	struct UMaterialInstanceDynamic* VolumeMat_MID; // 0x418(0x08)
	float Timer; // 0x420(0x04)
	float BuildTime; // 0x424(0x04)
	float SettleTime; // 0x428(0x04)
	float MaxDenisty; // 0x42c(0x04)
	struct AExplosionEffectsActor_C* EffectActor; // 0x430(0x08)
	struct FLinearColor LightColor; // 0x438(0x10)
	struct FLinearColor DarkColor; // 0x448(0x10)
	float ColorTimer; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct TArray<struct UMaterialInstance*> DustWeatherMI; // 0x460(0x10)
	struct FLinearColor BZ Color; // 0x470(0x10)
	struct FString Dust Sound; // 0x480(0x10)
	struct UAkComponent* Dust AK; // 0x490(0x08)
	bool PreviousTestRun; // 0x498(0x01)
	bool PreviousTestValue; // 0x499(0x01)
	char pad_49A[0x6]; // 0x49a(0x06)
	struct TArray<struct UMaterialInstance*> DustWeatherMI_Volume; // 0x4a0(0x10)
	bool Use Fake Volumetrics; // 0x4b0(0x01)

	void GetWeatherMats(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.GetWeatherMats // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Set Dust Color(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.Set Dust Color // Private|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTick(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void SpawnEffect(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.SpawnEffect // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void SetMaxDensity(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.SetMaxDensity // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_BP_BZ_DustVolume(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.ExecuteUbergraph_BP_BZ_DustVolume // HasDefaults // @ game+0x3b43ac
};


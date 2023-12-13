// BlueprintGeneratedClass BP_BZ_DustVolume.BP_BZ_DustVolume_C
// Size: 0x4c1 (Inherited: 0x410)
struct ABP_BZ_DustVolume_C : ABZDustVolume {
	struct F*a6c93df757 UberGraphFrame; // 0x410(0x08)
	struct UStaticMeshComponent* CubeFlippedNormals; // 0x418(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x420(0x08)
	struct UMaterialInstanceDynamic* VolumeMat_MID; // 0x428(0x08)
	float Timer; // 0x430(0x04)
	float BuildTime; // 0x434(0x04)
	float SettleTime; // 0x438(0x04)
	float MaxDenisty; // 0x43c(0x04)
	struct AExplosionEffectsActor_C* EffectActor; // 0x440(0x08)
	struct FLinearColor LightColor; // 0x448(0x10)
	struct FLinearColor DarkColor; // 0x458(0x10)
	float ColorTimer; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct TArray<struct UMaterialInstance*> DustWeatherMI; // 0x470(0x10)
	struct FLinearColor BZ Color; // 0x480(0x10)
	struct FString Dust Sound; // 0x490(0x10)
	struct UAkComponent* Dust AK; // 0x4a0(0x08)
	bool PreviousTestRun; // 0x4a8(0x01)
	bool PreviousTestValue; // 0x4a9(0x01)
	char pad_4AA[0x6]; // 0x4aa(0x06)
	struct TArray<struct UMaterialInstance*> DustWeatherMI_Volume; // 0x4b0(0x10)
	bool Use Fake Volumetrics; // 0x4c0(0x01)

	void GetWeatherMats(struct UMaterialInstanceDynamic* Dust Mat Instance, struct UMaterialInstance* FoundMat, struct UMaterialInstance* CallFunc_Array_Get_Item, int32 CallFunc__34ad69eaa1_ReturnValue, struct FString CallFunc__18c763e685_ReturnValue, int32 ___int_Loop_Counter_Variable, struct UGameInstance* CallFunc__3d5915f3a5_ReturnValue, struct UTslGameInstance* K2Node_DynamicCast_AsTsl_Game_Instance, bool CallFunc_NotEqual_IntInt_ReturnValue); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.GetWeatherMats // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FLinearColor Set Dust Color(float StartValue, bool ___bool_Variable); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.Set Dust Color // Private|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void UserConstructionScript(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float ReceiveTick(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x370fbc
	int32 SpawnEffect(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.SpawnEffect // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float SetMaxDensity(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.SetMaxDensity // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float ExecuteUbergraph_BP_BZ_DustVolume(struct AExplosionEffectsActor_C* K2Node_CustomEvent_EffectActor, float K2Node_CustomEvent_MaxDenisty2, int32 K2Node_CustomEvent_RayMarchingCount, float CallFunc__05195c4eb4_ReturnValue, struct FVector K2Node_Select2_Default, bool CallFunc__d99ec0791c_ReturnValue, bool CallFunc__7d94f14399_ReturnValue2, float K2Node_CustomEvent_MaxDenisty, struct UGameInstance* CallFunc__3d5915f3a5_ReturnValue, float CallFunc_Sin_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc__ace9454687_ReturnValue, struct FTransform CallFunc__a16ae93b8c_ReturnValue, struct FVector CallFunc_BreakTransform_Location, struct FRotator CallFunc_BreakTransform_Rotation, struct FVector CallFunc_BreakTransform_Scale, float CallFunc__4c7fe8bf18_ReturnValue3, float CallFunc__ace9454687_ReturnValue3, float CallFunc__ace9454687_ReturnValue4, struct FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult2); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.ExecuteUbergraph_BP_BZ_DustVolume // HasDefaults // @ game+0x370fbc
};


// BlueprintGeneratedClass BP_BZ_DustVolume.BP_BZ_DustVolume_C
// Size: 0x4b9 (Inherited: 0x408)
struct ABP_BZ_DustVolume_C : ABZDustVolume {
	struct F*a6c93df757 UberGraphFrame; // 0x408(0x08)
	struct UStaticMeshComponent* CubeFlippedNormals; // 0x410(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x418(0x08)
	struct UMaterialInstanceDynamic* VolumeMat_MID; // 0x420(0x08)
	float Timer; // 0x428(0x04)
	float BuildTime; // 0x42c(0x04)
	float SettleTime; // 0x430(0x04)
	float MaxDenisty; // 0x434(0x04)
	struct AExplosionEffectsActor_C* EffectActor; // 0x438(0x08)
	struct FLinearColor LightColor; // 0x440(0x10)
	struct FLinearColor DarkColor; // 0x450(0x10)
	float ColorTimer; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct TArray<struct UMaterialInstance*> DustWeatherMI; // 0x468(0x10)
	struct FLinearColor BZ Color; // 0x478(0x10)
	struct FString Dust Sound; // 0x488(0x10)
	struct UAkComponent* Dust AK; // 0x498(0x08)
	bool PreviousTestRun; // 0x4a0(0x01)
	bool PreviousTestValue; // 0x4a1(0x01)
	char pad_4A2[0x6]; // 0x4a2(0x06)
	struct TArray<struct UMaterialInstance*> DustWeatherMI_Volume; // 0x4a8(0x10)
	bool Use Fake Volumetrics; // 0x4b8(0x01)

	void GetWeatherMats(int32 ___int_Array_Index_Variable, struct UMaterialInstance* CallFunc_Array_Get_Item2, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, struct FString CallFunc__18c763e685_ReturnValue, int32 ___int_Loop_Counter_Variable, struct UGameInstance* CallFunc__3d5915f3a5_ReturnValue, struct UTslGameInstance* K2Node_DynamicCast_AsTsl_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc__045254c93f_ReturnValue, int32 CallFunc__1da39e2bb2_ReturnValue, int32 CallFunc__f53d173295_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.GetWeatherMats // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Set Dust Color(float StartValue, bool ___bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, struct FLinearColor CallFunc__29950ceaf8_ReturnValue, struct FLinearColor CallFunc__29950ceaf8_ReturnValue2, bool ___bool_Variable2, struct APlayerController* CallFunc__8b5701c55f_ReturnValue, struct ATslGameState* CallFunc__830fc3e3f6_ReturnValue, bool CallFunc__f334a8e4ed_ReturnValue, bool CallFunc__f334a8e4ed_ReturnValue2, bool CallFunc__cc41bc76bb_ReturnValue, bool CallFunc__0e1ef649ce_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, struct FLinearColor K2Node_Select_Default, struct FLinearColor K2Node_Select2_Default); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.Set Dust Color // Private|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void UserConstructionScript(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveTick(float DeltaSeconds); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void SpawnEffect(float SettleTime, float BuildTime, struct AExplosionEffectsActor_C* EffectActor, float MaxDenisty, int32 RayMarchingCount); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.SpawnEffect // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetMaxDensity(float MaxDenisty); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.SetMaxDensity // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FHitResult ExecuteUbergraph_BP_BZ_DustVolume(int32 EntryPoint, struct UAkComponent* CallFunc__33e2aeaad7_ReturnValue, bool ___bool_Variable, float ___float_Variable, float ___float_Variable2, bool ___bool_Variable2, struct FVector ___struct_Variable, struct FVector ___struct_Variable2, float K2Node_Event_DeltaSeconds, float K2Node_CustomEvent_SettleTime, float K2Node_CustomEvent_BuildTime, struct AExplosionEffectsActor_C* K2Node_CustomEvent_EffectActor, float K2Node_CustomEvent_MaxDenisty2, int32 K2Node_CustomEvent_RayMarchingCount, float CallFunc__05195c4eb4_ReturnValue, bool CallFunc__7d94f14399_ReturnValue, bool CallFunc__045254c93f_ReturnValue, float K2Node_Select_Default, struct FVector CallFunc__c526af6afe_ReturnValue, struct FVector K2Node_Select2_Default, bool CallFunc__d99ec0791c_ReturnValue, bool CallFunc__7d94f14399_ReturnValue2, float K2Node_CustomEvent_MaxDenisty, struct FVector CallFunc__806c296001_ReturnValue); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.ExecuteUbergraph_BP_BZ_DustVolume // HasDefaults // @ game+0x20a5d0
};


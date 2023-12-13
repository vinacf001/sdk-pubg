// BlueprintGeneratedClass ExplosionEffectsActor.ExplosionEffectsActor_C
// Size: 0x4f0 (Inherited: 0x3f0)
struct AExplosionEffectsActor_C : ABZExplosionEffect {
	struct F*a6c93df757 UberGraphFrame; // 0x3f0(0x08)
	struct UParticleSystemComponent* P_Player_Dust_Off; // 0x3f8(0x08)
	struct UParticleSystemComponent* Explosion; // 0x400(0x08)
	struct UPostProcessComponent* Dust_PP; // 0x408(0x08)
	struct UPostProcessComponent* Flash_PP; // 0x410(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x418(0x08)
	bool startDust; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float maxDustValue; // 0x424(0x04)
	struct UMaterialInstanceDynamic* DustPP_MID; // 0x428(0x08)
	struct UMaterialInstanceDynamic* FlashPP_MID; // 0x430(0x08)
	struct UMaterialInstanceDynamic* playerDust_MID; // 0x438(0x08)
	struct TArray<struct FVector> explosionOrigins; // 0x440(0x10)
	struct TArray<float> flashTimes; // 0x450(0x10)
	struct TArray<float> dustTimes; // 0x460(0x10)
	int32 nextFlashIndex; // 0x470(0x04)
	float flashTimeMultipler; // 0x474(0x04)
	float flashIntensityMultiplier; // 0x478(0x04)
	float dustSettleTime; // 0x47c(0x04)
	float dustBuildTime; // 0x480(0x04)
	float dustDem; // 0x484(0x04)
	struct UMaterialInstanceDynamic* skyboxDust_MID; // 0x488(0x08)
	struct UAkAudioEvent* ExplosionSound; // 0x490(0x08)
	struct UMaterialInstanceDynamic* VolumeDust; // 0x498(0x08)
	bool Use VolumetricEffect; // 0x4a0(0x01)
	bool PlayerDustOn; // 0x4a1(0x01)
	bool DustLastFrame; // 0x4a2(0x01)
	char pad_4A3[0x1]; // 0x4a3(0x01)
	float dustScale; // 0x4a4(0x04)
	float dustStartOffset; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct TArray<struct AActor*> objectsToSort; // 0x4b0(0x10)
	float UpdateTimer; // 0x4c0(0x04)
	float UndergroundDensity; // 0x4c4(0x04)
	bool wasUnderground; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct UMaterialInstance* DustGrungeMatSoftRef; // 0x4d0(0x20)

	void IsUnderGround(struct FVector CallFunc_BreakHitResult_TraceEnd, struct ALandscapeStreamingProxy* K2Node_DynamicCast_AsLandscape_Streaming_Proxy, bool K2Node_DynamicCast_bSuccess); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.IsUnderGround // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void UpdateDustSortOrder(struct FVector Player Location, struct FLinearColor C, int32 Index, struct AActor* farthestVolume, int32 ___int_Array_Index_Variable, int32 CallFunc__f53d173295_ReturnValue, int32 CallFunc__f53d173295_ReturnValue2, struct AActor* CallFunc_Array_Get_Item, int32 CallFunc__34ad69eaa1_ReturnValue, struct ATslExplosionEffect* K2Node_DynamicCast_AsTsl_Explosion_Effect, bool K2Node_DynamicCast_bSuccess, struct ABP_BZSmokePropagationHost_C* K2Node_DynamicCast_AsBP_BZSmoke_Propagation_Host, bool K2Node_DynamicCast_bSuccess2, struct U*395e1535aa* CallFunc__f3429ceb97_ReturnValue, struct ABP_SmokePropagationHost_v2_C* K2Node_DynamicCast_AsBP_Smoke_Propagation_Host_V_3, bool K2Node_DynamicCast_bSuccess3, struct U*395e1535aa* CallFunc__f3429ceb97_ReturnValue2, struct ABP_BZ_DustVolume_C* K2Node_DynamicCast_AsBP_BZ_Dust_Volume, bool K2Node_DynamicCast_bSuccess4, struct UStaticMeshComponent* CallFunc__f3429ceb97_ReturnValue3, int32 ___int_Loop_Counter_Variable, bool CallFunc__045254c93f_ReturnValue, int32 CallFunc__f53d173295_ReturnValue3, int32 CallFunc__f53d173295_ReturnValue4, int32 CallFunc__f53d173295_ReturnValue5, struct AActor* CallFunc_Array_Get_Item2, struct FVector CallFunc__806c296001_ReturnValue, struct FVector CallFunc__4efcfaba5e_ReturnValue, struct AActor* CallFunc_Array_Get_Item3, float CallFunc__b748c09796_ReturnValue, struct FVector CallFunc__806c296001_ReturnValue2, struct FVector CallFunc__4efcfaba5e_ReturnValue2, int32 CallFunc__34ad69eaa1_ReturnValue2, float CallFunc__b748c09796_ReturnValue2, int32 CallFunc__9ada690ad6_ReturnValue, bool CallFunc__ab61acee03_ReturnValue, bool CallFunc__045254c93f_ReturnValue2, bool CallFunc__29c7de62d6_ReturnValue); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.UpdateDustSortOrder // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void PlayExplosionFX(struct FVector Location); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.PlayExplosionFX // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void HandleDust(struct FVector PlayerLocation, float DeltaTime, int32 ___int_Array_Index_Variable, float CallFunc__ace9454687_ReturnValue, float CallFunc__9e9f800a8e_ReturnValue, float CallFunc__ace9454687_ReturnValue2, float CallFunc_FClamp_ReturnValue, float CallFunc__ace9454687_ReturnValue3, float CallFunc__ace9454687_ReturnValue4, float CallFunc__4c7fe8bf18_ReturnValue, float CallFunc__ace9454687_ReturnValue5, int32 ___int_Loop_Counter_Variable, int32 CallFunc__f53d173295_ReturnValue, bool CallFunc__d99ec0791c_ReturnValue, bool CallFunc__7d94f14399_ReturnValue, float CallFunc__9e9f800a8e_ReturnValue2, float CallFunc__9e9f800a8e_ReturnValue3, bool ___bool_Variable, struct FVector CallFunc_Array_Get_Item); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.HandleDust // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void HandleFlash(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.HandleFlash // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Show Dust Mesh(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Show Dust Mesh // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void UserConstructionScript(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void OnLoaded_ABED7E7C4573CB45B6BA5AAE2C558419(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.OnLoaded_ABED7E7C4573CB45B6BA5AAE2C558419 // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void BeginEffect(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.BeginEffect // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveBeginPlay(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x20a5d0
	void ReceiveTick(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void Remove Sort Object(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Remove Sort Object // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Add Sort Object(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Add Sort Object // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	float ExecuteUbergraph_ExplosionEffectsActor(DelegateProperty _d8b1f23a78_OutputDelegate, struct UObject* CallFunc_Array_Get_Item, int32 CallFunc__34ad69eaa1_ReturnValue, struct ABP_BZ_DustVolume_C* K2Node_DynamicCast_AsBP_BZ_Dust_Volume, bool K2Node_DynamicCast_bSuccess, float CallFunc__3125d90e01_ReturnValue2, float CallFunc__3125d90e01_ReturnValue3, float ___float_Variable, struct AActor* K2Node_CustomEvent_NewItem, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, int32 ___int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc__045254c93f_ReturnValue2, int32 CallFunc__f53d173295_ReturnValue2, bool ___bool_Variable2, struct FVector K2Node_Select_Default, int32 K2Node_Select2_Default, struct FTransform CallFunc_MakeTransform_ReturnValue, struct AActor* CallFunc__f8ded2558f_ReturnValue, struct ABP_BZ_DustVolume_C* CallFunc_FinishSpawningActor_ReturnValue, struct FVector CallFunc__7e1e25db3c_ReturnValue2); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ExecuteUbergraph_ExplosionEffectsActor // HasDefaults // @ game+0x20a5d0
};


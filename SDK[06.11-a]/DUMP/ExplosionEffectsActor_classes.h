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

	bool IsUnderGround(float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, int32 ___int_Array_Index_Variable, int32 CallFunc__f53d173295_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array, struct FHitResult CallFunc_Array_Get_Item, bool CallFunc__045254c93f_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, struct FVector CallFunc_BreakHitResult_ImpactNormal, struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, struct AActor* CallFunc_BreakHitResult_HitActor, struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.IsUnderGround // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FVector UpdateDustSortOrder(struct AActor* CallFunc_Array_Get_Item3, float CallFunc__b748c09796_ReturnValue, struct FVector CallFunc__806c296001_ReturnValue2, struct FVector CallFunc__4efcfaba5e_ReturnValue2, bool CallFunc__045254c93f_ReturnValue2, bool CallFunc__29c7de62d6_ReturnValue); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.UpdateDustSortOrder // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void PlayExplosionFX(struct FVector Location); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.PlayExplosionFX // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool HandleDust(float CallFunc__ace9454687_ReturnValue, float CallFunc__9e9f800a8e_ReturnValue, float CallFunc__ace9454687_ReturnValue2, float CallFunc_FClamp_ReturnValue, int32 ___int_Loop_Counter_Variable, int32 CallFunc__f53d173295_ReturnValue, bool CallFunc__d99ec0791c_ReturnValue, bool CallFunc__7d94f14399_ReturnValue); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.HandleDust // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float HandleFlash(float ___float_Variable, int32 CallFunc__34ad69eaa1_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc__045254c93f_ReturnValue, float CallFunc__ace9454687_ReturnValue2, bool CallFunc__7d94f14399_ReturnValue, float CallFunc__7e0da19a6a_ReturnValue2, bool CallFunc__d99ec0791c_ReturnValue); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.HandleFlash // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Show Dust Mesh(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Show Dust Mesh // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void UserConstructionScript(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void OnLoaded_ABED7E7C4573CB45B6BA5AAE2C558419(struct UObject* Loaded); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.OnLoaded_ABED7E7C4573CB45B6BA5AAE2C558419 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void BeginEffect(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.BeginEffect // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void ReceiveTick(float DeltaSeconds); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x370fbc
	void Remove Sort Object(struct AActor* Item); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Remove Sort Object // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Add Sort Object(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Add Sort Object // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FVector ExecuteUbergraph_ExplosionEffectsActor(struct AActor* K2Node_CustomEvent_Item, struct FVector CallFunc__1429d76ba8_ReturnValue, struct FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc__a6dc1ffb15_ReturnValue, struct APawn* CallFunc_K2_GetPawn_ReturnValue, struct FWeightedBlendable K2Node_MakeStruct_WeightedBlendable, struct FTransform CallFunc_GetTransform_ReturnValue, struct UObject* K2Node_CustomEvent_Loaded, float CallFunc__3125d90e01_ReturnValue, DelegateProperty _d8b1f23a78_OutputDelegate, struct UObject* CallFunc_Array_Get_Item, float CallFunc__3125d90e01_ReturnValue2, float CallFunc__3125d90e01_ReturnValue3, float ___float_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc__045254c93f_ReturnValue2, int32 CallFunc__f53d173295_ReturnValue2, bool ___bool_Variable2, struct ABP_BZ_DustVolume_C* CallFunc_FinishSpawningActor_ReturnValue, struct FVector CallFunc__7e1e25db3c_ReturnValue2); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ExecuteUbergraph_ExplosionEffectsActor // HasDefaults // @ game+0x370fbc
};


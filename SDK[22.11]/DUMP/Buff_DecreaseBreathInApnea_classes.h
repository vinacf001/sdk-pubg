// BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C
// Size: 0x498 (Inherited: 0x478)
struct ABuff_DecreaseBreathInApnea_C : ACharacterBreathBuff {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x478(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x480(0x08)
	float HealthPerTick; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UClass* DamageType; // 0x490(0x08)

	bool DecreaseHealth(struct ATslCharacter* CallFunc__a4519f511d_ReturnValue, struct AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue2); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.DecreaseHealth // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	bool UserConstructionScript(float CallFunc__02b0b2b3ee_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void TickBuff(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x32e590
	float ExecuteUbergraph_Buff_DecreaseBreathInApnea(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.ExecuteUbergraph_Buff_DecreaseBreathInApnea //  // @ game+0x32e590
};


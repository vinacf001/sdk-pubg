// BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C
// Size: 0x4a8 (Inherited: 0x488)
struct ABuff_DecreaseBreathInApnea_C : ACharacterBreathBuff {
	struct F*73a77c28fa UberGraphFrame; // 0x488(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x490(0x08)
	float HealthPerTick; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct UClass* DamageType; // 0x4a0(0x08)

	bool DecreaseHealth(struct ATslCharacter* Character, struct U*0134b9e50d* CallFunc__b8fc1eaa37_ReturnValue, bool CallFunc_IsValid_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.DecreaseHealth // None // @ game+0x26a108
	struct ATslCharacter* UserConstructionScript(bool CallFunc__20e10a816c_ReturnValue, struct FString CallFunc__7e70508ff1_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.UserConstructionScript // None // @ game+0x26a108
	void TickBuff(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.TickBuff // None // @ game+0x26a108
	bool ExecuteUbergraph_Buff_DecreaseBreathInApnea(float CallFunc__dbbd9a6658_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.ExecuteUbergraph_Buff_DecreaseBreathInApnea // None // @ game+0x26a108
};


// BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C
// Size: 0x498 (Inherited: 0x478)
struct ABuff_DecreaseBreathInApnea_C : ACharacterBreathBuff {
	struct F*abc8f374e0 UberGraphFrame; // 0x478(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x480(0x08)
	float HealthPerTick; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UClass* DamageType; // 0x490(0x08)

	bool DecreaseHealth(struct ATslCharacter* CallFunc__5549c56dc0_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.DecreaseHealth // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void UserConstructionScript(struct ATslCharacter* CallFunc__5549c56dc0_ReturnValue, float CallFunc__fc401cfe4c_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void TickBuff(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	enum class EBreathType ExecuteUbergraph_Buff_DecreaseBreathInApnea(struct ATslCharacter* K2Node_Event_OtherCharacter, bool CallFunc_IsValid_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.ExecuteUbergraph_Buff_DecreaseBreathInApnea //  // @ game+0x2cd4ac
};


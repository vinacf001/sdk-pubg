// BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C
// Size: 0x4a0 (Inherited: 0x480)
struct ABuff_DecreaseBreathInApnea_C : ACharacterBreathBuff {
	struct F*73a77c28fa UberGraphFrame; // 0x480(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x488(0x08)
	float HealthPerTick; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct UClass* DamageType; // 0x498(0x08)

	bool DecreaseHealth(struct ATslCharacter* CallFunc__bf6b3938a3_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.DecreaseHealth // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UserConstructionScript(enum class EBreathType CallFunc__1840b0af43_ReturnValue, bool CallFunc__20e10a816c_ReturnValue, struct FString CallFunc__7e70508ff1_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void TickBuff(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x1e037c
	int32 ExecuteUbergraph_Buff_DecreaseBreathInApnea(enum class EBreathType CallFunc__1840b0af43_ReturnValue, struct ATslCharacter* CallFunc__bf6b3938a3_ReturnValue, float CallFunc__dbbd9a6658_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.ExecuteUbergraph_Buff_DecreaseBreathInApnea //  // @ game+0x1e037c
};


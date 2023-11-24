// BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C
// Size: 0x4b0 (Inherited: 0x490)
struct ABuff_DecreaseBreathInApnea_C : ACharacterBreathBuff {
	struct F*abc8f374e0 UberGraphFrame; // 0x490(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x498(0x08)
	float HealthPerTick; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct UClass* DamageType; // 0x4a8(0x08)

	float DecreaseHealth(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.DecreaseHealth // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FString UserConstructionScript(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct ATslCharacter* TickBuff(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x273e04
	bool ExecuteUbergraph_Buff_DecreaseBreathInApnea(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.ExecuteUbergraph_Buff_DecreaseBreathInApnea //  // @ game+0x273e04
};


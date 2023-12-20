// BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C
// Size: 0x498 (Inherited: 0x478)
struct ABuff_DecreaseBreathInApnea_C : ACharacterBreathBuff {
	struct F*a6c93df757 UberGraphFrame; // 0x478(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x480(0x08)
	float HealthPerTick; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UClass* DamageType; // 0x490(0x08)

	void DecreaseHealth(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.DecreaseHealth // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void TickBuff(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_Buff_DecreaseBreathInApnea(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.ExecuteUbergraph_Buff_DecreaseBreathInApnea //  // @ game+0x3b43ac
};


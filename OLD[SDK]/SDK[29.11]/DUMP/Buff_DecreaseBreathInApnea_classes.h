// BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C
// Size: 0x4a0 (Inherited: 0x480)
struct ABuff_DecreaseBreathInApnea_C : ACharacterBreathBuff {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x480(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x488(0x08)
	float HealthPerTick; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct UClass* DamageType; // 0x498(0x08)

	float DecreaseHealth(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.DecreaseHealth // Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	struct FString UserConstructionScript(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	struct ATslCharacter* TickBuff(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x1dcd78
	bool ExecuteUbergraph_Buff_DecreaseBreathInApnea(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.ExecuteUbergraph_Buff_DecreaseBreathInApnea //  // @ game+0x1dcd78
};


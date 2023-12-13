// BlueprintGeneratedClass Buff_DamageOverTime.Buff_DamageOverTime_C
// Size: 0x498 (Inherited: 0x478)
struct ABuff_DamageOverTime_C : ATslBuff {
	struct F*a6c93df757 UberGraphFrame; // 0x478(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x480(0x08)
	float BaseDamage; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UClass* DamageType; // 0x490(0x08)

	void UserConstructionScript(); // Function Buff_DamageOverTime.Buff_DamageOverTime_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct ATslCharacter* TickBuff(); // Function Buff_DamageOverTime.Buff_DamageOverTime_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x20a5d0
	struct AController* ExecuteUbergraph_Buff_DamageOverTime(); // Function Buff_DamageOverTime.Buff_DamageOverTime_C.ExecuteUbergraph_Buff_DamageOverTime // HasDefaults // @ game+0x20a5d0
};


// BlueprintGeneratedClass Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C
// Size: 0x4b8 (Inherited: 0x478)
struct ABuff_RestoreBreathOverTime_C : ACharacterBreathBuff {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x478(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x480(0x08)
	struct ATslCharacter* CharacterRef; // 0x488(0x08)
	float BreathPerTickMax; // 0x490(0x04)
	float BreathRestoreTickInterval; // 0x494(0x04)
	float BreathRestoreRestBoost; // 0x498(0x04)
	float BreathRestoreRunnin; // 0x49c(0x04)
	float DelayAfterUnderwaterSwimming; // 0x4a0(0x04)
	float LastTimeUnderwater; // 0x4a4(0x04)
	bool bCanBuff; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct F*b2f5f3e08e DelayAfterSwimmingTimerHandle; // 0x4b0(0x08)

	bool CanApplyBuff(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void UserConstructionScript(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void TickBuff(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x32e590
	void AfterDelay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.AfterDelay // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReceiveBeginPlay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x32e590
	enum class EBreathType ExecuteUbergraph_Buff_RestoreBreathOverTime(bool ___bool_Variable, float ___float_Variable4, struct ATslCharacter* CallFunc__a4519f511d_ReturnValue, bool CallFunc_IsUnderwater_ReturnValue, float CallFunc__aab81f3580_ReturnValue, float CallFunc_Square_ReturnValue, struct F*b2f5f3e08e CallFunc__e67535aba8_ReturnValue); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime // HasDefaults // @ game+0x32e590
};


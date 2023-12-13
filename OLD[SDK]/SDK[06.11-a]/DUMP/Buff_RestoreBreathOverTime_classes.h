// BlueprintGeneratedClass Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C
// Size: 0x4c8 (Inherited: 0x488)
struct ABuff_RestoreBreathOverTime_C : ACharacterBreathBuff {
	struct F*a6c93df757 UberGraphFrame; // 0x488(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x490(0x08)
	struct ATslCharacter* CharacterRef; // 0x498(0x08)
	float BreathPerTickMax; // 0x4a0(0x04)
	float BreathRestoreTickInterval; // 0x4a4(0x04)
	float BreathRestoreRestBoost; // 0x4a8(0x04)
	float BreathRestoreRunnin; // 0x4ac(0x04)
	float DelayAfterUnderwaterSwimming; // 0x4b0(0x04)
	float LastTimeUnderwater; // 0x4b4(0x04)
	bool bCanBuff; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct F*2ef3a887d0 DelayAfterSwimmingTimerHandle; // 0x4c0(0x08)

	bool CanApplyBuff(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void UserConstructionScript(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct ATslCharacter* TickBuff(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x370fbc
	void AfterDelay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.AfterDelay // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	float ExecuteUbergraph_Buff_RestoreBreathOverTime(bool ___bool_Variable, float ___float_Variable3, float ___float_Variable4, float K2Node_Select_Default, bool CallFunc__10bc2ac5f8_ReturnValue, bool ___bool_Variable2, bool CallFunc_IsUnderwater_ReturnValue2, float K2Node_Select2_Default, enum class EBreathType CallFunc__7a476602e8_ReturnValue2, float CallFunc_Square_ReturnValue, float CallFunc_FMax_ReturnValue); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime // HasDefaults // @ game+0x370fbc
};


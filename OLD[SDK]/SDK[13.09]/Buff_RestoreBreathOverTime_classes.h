// BlueprintGeneratedClass Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C
// Size: 0x4c8 (Inherited: 0x488)
struct ABuff_RestoreBreathOverTime_C : ACharacterBreathBuff {
	struct F*73a77c28fa UberGraphFrame; // 0x488(0x08)
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
	struct F*9c84e0ea54 DelayAfterSwimmingTimerHandle; // 0x4c0(0x08)

	bool CanApplyBuff(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff // None // @ game+0x26a108
	void UserConstructionScript(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript // None // @ game+0x26a108
	void TickBuff(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff // None // @ game+0x26a108
	void AfterDelay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.AfterDelay // None // @ game+0x26a108
	void ReceiveBeginPlay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay // None // @ game+0x26a108
	float ExecuteUbergraph_Buff_RestoreBreathOverTime(DelegateProperty _37b0074df2_OutputDelegate, float ___float_Variable2, float ___float_Variable3, float K2Node_Select_Default, float CallFunc__ae60dcbe74_ReturnValue, enum class EBreathType CallFunc__1840b0af43_ReturnValue2, float CallFunc_FMax_ReturnValue); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime // None // @ game+0x26a108
};


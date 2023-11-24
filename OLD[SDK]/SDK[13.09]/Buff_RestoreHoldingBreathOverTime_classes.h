// BlueprintGeneratedClass Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C
// Size: 0x4c8 (Inherited: 0x488)
struct ABuff_RestoreHoldingBreathOverTime_C : ACharacterBreathBuff {
	struct F*73a77c28fa UberGraphFrame; // 0x488(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x490(0x08)
	struct ATslCharacter* CharacterRef; // 0x498(0x08)
	float BreathPerTickMax; // 0x4a0(0x04)
	float BreathRestoreTickInterval; // 0x4a4(0x04)
	float BreathRestoreRestBoost; // 0x4a8(0x04)
	float BreathRestoreRunnin; // 0x4ac(0x04)
	float DelayAfterHolding; // 0x4b0(0x04)
	float LastTimeUnderwater; // 0x4b4(0x04)
	bool bCanBuff; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct F*9c84e0ea54 DelayAfterHoldingTimerHandle; // 0x4c0(0x08)

	bool CanApplyBuff(enum class EBreathType CallFunc__1840b0af43_ReturnValue, bool CallFunc_IsValid_ReturnValue); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.CanApplyBuff // None // @ game+0x26a108
	void UserConstructionScript(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.UserConstructionScript // None // @ game+0x26a108
	void ReceiveBeginPlay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ReceiveBeginPlay // None // @ game+0x26a108
	void TickBuff(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.TickBuff // None // @ game+0x26a108
	void AfterDelay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.AfterDelay // None // @ game+0x26a108
	float ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime(struct ATslCharacter* CallFunc__bf6b3938a3_ReturnValue, bool CallFunc__e7c8487be8_ReturnValue2, bool CallFunc__0bafecc074_ReturnValue, bool CallFunc__776e4a37c0_ReturnValue); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime // None // @ game+0x26a108
};


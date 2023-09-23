// BlueprintGeneratedClass Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C
// Size: 0x4c0 (Inherited: 0x480)
struct ABuff_RestoreHoldingBreathOverTime_C : ACharacterBreathBuff {
	struct F*73a77c28fa UberGraphFrame; // 0x480(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x488(0x08)
	struct ATslCharacter* CharacterRef; // 0x490(0x08)
	float BreathPerTickMax; // 0x498(0x04)
	float BreathRestoreTickInterval; // 0x49c(0x04)
	float BreathRestoreRestBoost; // 0x4a0(0x04)
	float BreathRestoreRunnin; // 0x4a4(0x04)
	float DelayAfterHolding; // 0x4a8(0x04)
	float LastTimeUnderwater; // 0x4ac(0x04)
	bool bCanBuff; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct F*9c84e0ea54 DelayAfterHoldingTimerHandle; // 0x4b8(0x08)

	bool CanApplyBuff(bool ReturnValue); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.CanApplyBuff // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UserConstructionScript(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveBeginPlay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void TickBuff(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x1e037c
	void AfterDelay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.AfterDelay // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime(bool CallFunc__e7c8487be8_ReturnValue, bool CallFunc_IsValid_ReturnValue, struct ATslCharacter* K2Node_Event_OtherCharacter, struct F*9c84e0ea54 CallFunc__bee29fc1fc_ReturnValue); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime // HasDefaults // @ game+0x1e037c
};


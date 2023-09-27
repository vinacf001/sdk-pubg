// BlueprintGeneratedClass Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C
// Size: 0x4d8 (Inherited: 0x498)
struct ABuff_RestoreHoldingBreathOverTime_C : ACharacterBreathBuff {
	struct F*73a77c28fa UberGraphFrame; // 0x498(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4a0(0x08)
	struct ATslCharacter* CharacterRef; // 0x4a8(0x08)
	float BreathPerTickMax; // 0x4b0(0x04)
	float BreathRestoreTickInterval; // 0x4b4(0x04)
	float BreathRestoreRestBoost; // 0x4b8(0x04)
	float BreathRestoreRunnin; // 0x4bc(0x04)
	float DelayAfterHolding; // 0x4c0(0x04)
	float LastTimeUnderwater; // 0x4c4(0x04)
	bool bCanBuff; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct F*9c84e0ea54 DelayAfterHoldingTimerHandle; // 0x4d0(0x08)

	bool CanApplyBuff(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.CanApplyBuff // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void UserConstructionScript(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void ReceiveBeginPlay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	struct ATslCharacter* TickBuff(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void AfterDelay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.AfterDelay // BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	float ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime // HasDefaults // @ game+0x22ddc4
};


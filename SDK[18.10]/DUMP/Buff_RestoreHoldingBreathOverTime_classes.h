// BlueprintGeneratedClass Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C
// Size: 0x4c0 (Inherited: 0x480)
struct ABuff_RestoreHoldingBreathOverTime_C : ACharacterBreathBuff {
	struct F*abc8f374e0 UberGraphFrame; // 0x480(0x08)
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
	struct F*da672abddc DelayAfterHoldingTimerHandle; // 0x4b8(0x08)

	bool CanApplyBuff(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.CanApplyBuff // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	void UserConstructionScript(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	void ReceiveBeginPlay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct ATslCharacter* TickBuff(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x1b829c
	void AfterDelay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.AfterDelay // BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	float ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime // HasDefaults // @ game+0x1b829c
};


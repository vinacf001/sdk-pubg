// BlueprintGeneratedClass Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C
// Size: 0x4b8 (Inherited: 0x478)
struct ABuff_RestoreHoldingBreathOverTime_C : ACharacterBreathBuff {
	struct F*a6c93df757 UberGraphFrame; // 0x478(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x480(0x08)
	struct ATslCharacter* CharacterRef; // 0x488(0x08)
	float BreathPerTickMax; // 0x490(0x04)
	float BreathRestoreTickInterval; // 0x494(0x04)
	float BreathRestoreRestBoost; // 0x498(0x04)
	float BreathRestoreRunnin; // 0x49c(0x04)
	float DelayAfterHolding; // 0x4a0(0x04)
	float LastTimeUnderwater; // 0x4a4(0x04)
	bool bCanBuff; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct F*2ef3a887d0 DelayAfterHoldingTimerHandle; // 0x4b0(0x08)

	void CanApplyBuff(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.CanApplyBuff // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveBeginPlay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void TickBuff(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void AfterDelay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.AfterDelay // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime // HasDefaults // @ game+0x3b43ac
};


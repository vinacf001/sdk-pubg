// BlueprintGeneratedClass Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C
// Size: 0x4d0 (Inherited: 0x490)
struct ABuff_RestoreBreathOverTime_C : ACharacterBreathBuff {
	struct F*abc8f374e0 UberGraphFrame; // 0x490(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x498(0x08)
	struct ATslCharacter* CharacterRef; // 0x4a0(0x08)
	float BreathPerTickMax; // 0x4a8(0x04)
	float BreathRestoreTickInterval; // 0x4ac(0x04)
	float BreathRestoreRestBoost; // 0x4b0(0x04)
	float BreathRestoreRunnin; // 0x4b4(0x04)
	float DelayAfterUnderwaterSwimming; // 0x4b8(0x04)
	float LastTimeUnderwater; // 0x4bc(0x04)
	bool bCanBuff; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct F*da672abddc DelayAfterSwimmingTimerHandle; // 0x4c8(0x08)

	bool CanApplyBuff(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void UserConstructionScript(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct ATslCharacter* TickBuff(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x273e04
	void AfterDelay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.AfterDelay // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void ReceiveBeginPlay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x273e04
	float ExecuteUbergraph_Buff_RestoreBreathOverTime(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime // HasDefaults // @ game+0x273e04
};


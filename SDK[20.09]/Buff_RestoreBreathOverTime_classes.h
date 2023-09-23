// BlueprintGeneratedClass Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C
// Size: 0x4c0 (Inherited: 0x480)
struct ABuff_RestoreBreathOverTime_C : ACharacterBreathBuff {
	struct F*73a77c28fa UberGraphFrame; // 0x480(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x488(0x08)
	struct ATslCharacter* CharacterRef; // 0x490(0x08)
	float BreathPerTickMax; // 0x498(0x04)
	float BreathRestoreTickInterval; // 0x49c(0x04)
	float BreathRestoreRestBoost; // 0x4a0(0x04)
	float BreathRestoreRunnin; // 0x4a4(0x04)
	float DelayAfterUnderwaterSwimming; // 0x4a8(0x04)
	float LastTimeUnderwater; // 0x4ac(0x04)
	bool bCanBuff; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct F*9c84e0ea54 DelayAfterSwimmingTimerHandle; // 0x4b8(0x08)

	enum class EBreathType CanApplyBuff(bool CallFunc_CanApplyBuff_ReturnValue, float CallFunc__34bda7359a_ReturnValue); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UserConstructionScript(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void TickBuff(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x1e037c
	void AfterDelay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.AfterDelay // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveBeginPlay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	float ExecuteUbergraph_Buff_RestoreBreathOverTime(int32 EntryPoint, float ___float_Variable, bool ___bool_Variable, bool CallFunc_IsUnderwater_ReturnValue2, enum class EBreathType CallFunc__1840b0af43_ReturnValue, float CallFunc__34bda7359a_ReturnValue); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime // HasDefaults // @ game+0x1e037c
};


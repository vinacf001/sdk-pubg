// BlueprintGeneratedClass Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C
// Size: 0x4b8 (Inherited: 0x478)
struct ABuff_RestoreBreathOverTime_C : ACharacterBreathBuff {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x478(0x08)
	struct USceneComponent* DefaultSceneRoot[0x08]; // 0x480(0x08)
	struct ATslCharacter* CharacterRef[0x08]; // 0x488(0x08)
	float BreathPerTickMax[0x04]; // 0x490(0x04)
	float BreathRestoreTickInterval[0x04]; // 0x494(0x04)
	float BreathRestoreRestBoost[0x04]; // 0x498(0x04)
	float BreathRestoreRunnin[0x04]; // 0x49c(0x04)
	float DelayAfterUnderwaterSwimming[0x04]; // 0x4a0(0x04)
	float LastTimeUnderwater[0x04]; // 0x4a4(0x04)
	bool bCanBuff; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct F*da672abddc DelayAfterSwimmingTimerHandle[0x08]; // 0x4b0(0x08)

	bool CanApplyBuff(bool CallFunc_IsValid_ReturnValue, bool CallFunc__19d38c244f_ReturnValue); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void UserConstructionScript(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void TickBuff(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void AfterDelay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.AfterDelay // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	float ExecuteUbergraph_Buff_RestoreBreathOverTime(DelegateProperty* _61b405a872_OutputDelegate, float* ___float_Variable2, float* ___float_Variable3, float* K2Node_Select2_Default, float* CallFunc__449286a277_ReturnValue, enum class EBreathType CallFunc__bf11718281_ReturnValue2); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime // HasDefaults // @ game+0x2cd4ac
};


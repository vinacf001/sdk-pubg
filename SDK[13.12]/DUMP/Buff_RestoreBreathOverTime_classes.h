// BlueprintGeneratedClass Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C
// Size: 0x4c0 (Inherited: 0x480)
struct ABuff_RestoreBreathOverTime_C : ACharacterBreathBuff {
	struct F*a6c93df757 UberGraphFrame; // 0x480(0x08)
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
	struct F*2ef3a887d0 DelayAfterSwimmingTimerHandle; // 0x4b8(0x08)

	void CanApplyBuff(bool ReturnValue, enum class EBreathType CallFunc__7a476602e8_ReturnValue, bool CallFunc_CanApplyBuff_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc__4176fcebcc_ReturnValue, bool CallFunc__ab61acee03_ReturnValue, bool CallFunc_BooleanAND_ReturnValue); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void UserConstructionScript(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void TickBuff(struct ATslCharacter* OtherCharacter); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void AfterDelay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.AfterDelay // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveBeginPlay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_Buff_RestoreBreathOverTime(int32 EntryPoint, DelegateProperty _d8b1f23a78_OutputDelegate, float ___float_Variable, float ___float_Variable2, bool ___bool_Variable, float ___float_Variable3, float ___float_Variable4, float K2Node_Select_Default, struct ATslCharacter* CallFunc__d4e2452a35_ReturnValue, struct ATslCharacter* K2Node_Event_OtherCharacter, bool CallFunc_IsUnderwater_ReturnValue, bool CallFunc__5b095721bd_ReturnValue, bool CallFunc__10bc2ac5f8_ReturnValue, bool ___bool_Variable2, bool CallFunc_IsUnderwater_ReturnValue2, float K2Node_Select2_Default, float CallFunc__ace9454687_ReturnValue, enum class EBreathType CallFunc__7a476602e8_ReturnValue, float CallFunc__4176fcebcc_ReturnValue, enum class EBreathType CallFunc__7a476602e8_ReturnValue2, float CallFunc_Square_ReturnValue, float CallFunc_FMax_ReturnValue, struct F*2ef3a887d0 CallFunc__324576f467_ReturnValue, float CallFunc__ace9454687_ReturnValue2, float CallFunc__ace9454687_ReturnValue3); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime // HasDefaults // @ game+0x20a5d0
};


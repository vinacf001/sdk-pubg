// BlueprintGeneratedClass P_Vehicle_Muffler_BP_SingleExhaust.P_Vehicle_Muffler_BP_SingleExhaust_C
// Size: 0x531 (Inherited: 0x508)
struct AP_Vehicle_Muffler_BP_SingleExhaust_C : AP_Vehicle_Muffler_BP_C {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x508(0x08)
	struct FLinearColor NormalColor[0x10]; // 0x510(0x10)
	struct FLinearColor BoostColor[0x10]; // 0x520(0x10)
	bool bDisableBoostVFX; // 0x530(0x01)

	void UserConstructionScript(); // Function P_Vehicle_Muffler_BP_SingleExhaust.P_Vehicle_Muffler_BP_SingleExhaust_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void OnParameterUpdated(); // Function P_Vehicle_Muffler_BP_SingleExhaust.P_Vehicle_Muffler_BP_SingleExhaust_C.OnParameterUpdated // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	struct FParticleSysParam ExecuteUbergraph_P_Vehicle_Muffler_BP_SingleExhaust(int32* EntryPoint, struct FParticleSysParam* K2Node_MakeStruct_ParticleSysParam5, struct FVector* CallFunc__7251d91d5f_ReturnValue); // Function P_Vehicle_Muffler_BP_SingleExhaust.P_Vehicle_Muffler_BP_SingleExhaust_C.ExecuteUbergraph_P_Vehicle_Muffler_BP_SingleExhaust // HasDefaults // @ game+0x2cd4ac
};


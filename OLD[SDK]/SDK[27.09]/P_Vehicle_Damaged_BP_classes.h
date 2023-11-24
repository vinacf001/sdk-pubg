// BlueprintGeneratedClass P_Vehicle_Damaged_BP.P_Vehicle_Damaged_BP_C
// Size: 0x530 (Inherited: 0x510)
struct AP_Vehicle_Damaged_BP_C : ATslParticle {
	struct F*73a77c28fa UberGraphFrame; // 0x510(0x08)
	float CurrentHP; // 0x518(0x04)
	struct FLinearColor SmokeColor; // 0x51c(0x10)
	float SmokeColorF; // 0x52c(0x04)

	void UserConstructionScript(); // Function P_Vehicle_Damaged_BP.P_Vehicle_Damaged_BP_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void OnParameterUpdated(); // Function P_Vehicle_Damaged_BP.P_Vehicle_Damaged_BP_C.OnParameterUpdated // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	struct TArray<struct FParticleSysParam> ExecuteUbergraph_P_Vehicle_Damaged_BP(); // Function P_Vehicle_Damaged_BP.P_Vehicle_Damaged_BP_C.ExecuteUbergraph_P_Vehicle_Damaged_BP // HasDefaults // @ game+0x22ddc4
};


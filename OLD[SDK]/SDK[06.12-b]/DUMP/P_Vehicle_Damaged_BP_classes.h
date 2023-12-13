// BlueprintGeneratedClass P_Vehicle_Damaged_BP.P_Vehicle_Damaged_BP_C
// Size: 0x520 (Inherited: 0x500)
struct AP_Vehicle_Damaged_BP_C : ATslParticle {
	struct F*a6c93df757 UberGraphFrame; // 0x500(0x08)
	float CurrentHP; // 0x508(0x04)
	struct FLinearColor SmokeColor; // 0x50c(0x10)
	float SmokeColorF; // 0x51c(0x04)

	void UserConstructionScript(); // Function P_Vehicle_Damaged_BP.P_Vehicle_Damaged_BP_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	void OnParameterUpdated(); // Function P_Vehicle_Damaged_BP.P_Vehicle_Damaged_BP_C.OnParameterUpdated // Event|Protected|BlueprintEvent // @ game+0x22c9a0
	struct TArray<struct FParticleSysParam> ExecuteUbergraph_P_Vehicle_Damaged_BP(); // Function P_Vehicle_Damaged_BP.P_Vehicle_Damaged_BP_C.ExecuteUbergraph_P_Vehicle_Damaged_BP // HasDefaults // @ game+0x22c9a0
};


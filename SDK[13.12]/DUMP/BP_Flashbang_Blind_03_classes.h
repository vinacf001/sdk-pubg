// BlueprintGeneratedClass BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C
// Size: 0x498 (Inherited: 0x478)
struct ABP_Flashbang_Blind_03_C : ATslPostProcessEffect {
	struct F*a6c93df757 UberGraphFrame; // 0x478(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x480(0x08)
	float FlashAlpha; // 0x488(0x04)
	float FlashAlpha_Fall; // 0x48c(0x04)
	struct UCurveFloat* FlashCurve; // 0x490(0x08)

	void UserConstructionScript(); // Function BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveTick(float DeltaSeconds); // Function BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void OnSetEffectParameter(struct FString ParameterName, float Value); // Function BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C.OnSetEffectParameter // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ReceiveBeginPlay(); // Function BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_BP_Flashbang_Blind_03(int32 EntryPoint, float K2Node_Event_DeltaSeconds, float CallFunc__ace9454687_ReturnValue, struct FString K2Node_Event_ParameterName, float K2Node_Event_Value, float CallFunc__4c7fe8bf18_ReturnValue, float CallFunc__89d18fd23f_ReturnValue, struct APlayerController* CallFunc__8b5701c55f_ReturnValue, float CallFunc__9da493fa7f_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc__72f8053368_ReturnValue, struct ATslPlayerController* K2Node_DynamicCast_AsTsl_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc__8c720203dd_ReturnValue, bool CallFunc__2b00c85453_ReturnValue); // Function BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C.ExecuteUbergraph_BP_Flashbang_Blind_03 //  // @ game+0x20a5d0
};


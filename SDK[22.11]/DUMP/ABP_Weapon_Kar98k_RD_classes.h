// AnimBlueprintGeneratedClass ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C
// Size: 0xe3c (Inherited: 0x4b0)
struct UABP_Weapon_Kar98k_RD_C : U*b55e2744c5 {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x4b0(0x08)
	struct FAnimNode_Root _e47e69fd28_E69D4E33435DD543FE446D92E3351001; // 0x4b8(0x48)
	struct FAnimNode_Slot _62fffa045d_69E3A14E4848B9AB1FBE58AEA42D4DDA; // 0x500(0x70)
	struct FAnimNode_Slot _62fffa045d_7611638D49D12A187EA61B9A4613CCE2; // 0x570(0x70)
	struct FAnimNode_ModifyBone _cac7fc2d7b_30E0C6B543E766367E0D838EA57CA891; // 0x5e0(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _e121cf2f14_0059397F4E4786A2DAD4D6A5578B217D; // 0x720(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _36d9debb93_0F77FB174B6AC6E8106BCEAEF3B47C12; // 0x768(0x48)
	struct FAnimNode_ModifyBone _cac7fc2d7b_7D8E74C54278A3B39BA63CB206EE0E8B; // 0x7b0(0x140)
	struct FAnimNode_ModifyBone _cac7fc2d7b_C8A5A3CA4CA9EA978F9D43B1E338A5C4; // 0x8f0(0x140)
	struct FAnimNode_ModifyBone _cac7fc2d7b_A561E8874B9063E55AF72689A4F380B7; // 0xa30(0x140)
	struct FAnimNode_ModifyBone _cac7fc2d7b_5A44AABE4BEA0800D89A3B8E5DA99EDE; // 0xb70(0x140)
	struct FAnimNode_ModifyBone _cac7fc2d7b_7040152D456B23291859549FDF417CED; // 0xcb0(0x140)
	struct FAnimNode_RefPose _c0b9ce9e11_D8C3806F4B4254229950278AC71FEFCE; // 0xdf0(0x38)
	float ClipShowAlpha; // 0xe28(0x04)
	float MagRootAlpha; // 0xe2c(0x04)
	struct ATslWeapon_Gun* GunRef; // 0xe30(0x08)
	float BoltActionAlpha; // 0xe38(0x04)

	void Handle_ReloadByOne_Stop(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Stop // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	float Handle_ReloadByOne_Single(struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Single // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	float Handle_ReloadByOne_Start(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Start // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	int32 Handle_FireCycle(struct UAnimMontage* ___object_Variable, struct UAnimMontage* ___object_Variable3, int32 CallFunc__59ec794a0d_ReturnValue, int32 CallFunc_RandomIntegerFromStream_ReturnValue); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_FireCycle // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_5A44AABE4BEA0800D89A3B8E5DA99EDE(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_5A44AABE4BEA0800D89A3B8E5DA99EDE // BlueprintEvent // @ game+0x32e590
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_7040152D456B23291859549FDF417CED(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_7040152D456B23291859549FDF417CED // BlueprintEvent // @ game+0x32e590
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_A561E8874B9063E55AF72689A4F380B7(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_A561E8874B9063E55AF72689A4F380B7 // BlueprintEvent // @ game+0x32e590
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_C8A5A3CA4CA9EA978F9D43B1E338A5C4(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_C8A5A3CA4CA9EA978F9D43B1E338A5C4 // BlueprintEvent // @ game+0x32e590
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_7D8E74C54278A3B39BA63CB206EE0E8B(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_7D8E74C54278A3B39BA63CB206EE0E8B // BlueprintEvent // @ game+0x32e590
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_30E0C6B543E766367E0D838EA57CA891(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_30E0C6B543E766367E0D838EA57CA891 // BlueprintEvent // @ game+0x32e590
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x32e590
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x32e590
	void WeaponFireCycle_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.WeaponFireCycle_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void AnimNotify_ClipShow(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipShow // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void AnimNotify_ClipHide(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipHide // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void Reload2_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Reload2_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReloadByOneStart_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneStart_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReloadByOneSingle_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneSingle_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReloadByOneEnd_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneEnd_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void AnimNotify_ShellEject(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ShellEject // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void CancelReload_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.CancelReload_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct ATslWeapon_Gun* ExecuteUbergraph_ABP_Weapon_Kar98k_RD(DelegateProperty _d01ead63d9_OutputDelegate3, float CallFunc_FMin_ReturnValue, int32 K2Node_CustomEvent_AmmoToReload, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun, bool K2Node_DynamicCast_bSuccess2, struct FTransform CallFunc__32022b8b54_ReturnValue, struct AActor* CallFunc__156662a2f2_ReturnValue, bool CallFunc__d975dc291b_ReturnValue); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ExecuteUbergraph_ABP_Weapon_Kar98k_RD // HasDefaults // @ game+0x32e590
};


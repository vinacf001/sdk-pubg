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

	void Handle_ReloadByOne_Stop(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Stop // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	float Handle_ReloadByOne_Single(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Single // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Handle_ReloadByOne_Start(struct AActor* CallFunc__21224e4f15_ReturnValue, bool K2Node_DynamicCast_bSuccess); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Start // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct UAnimMontage* Handle_FireCycle(struct UAnimMontage* ___object_Variable); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_FireCycle // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_5A44AABE4BEA0800D89A3B8E5DA99EDE(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_5A44AABE4BEA0800D89A3B8E5DA99EDE // BlueprintEvent // @ game+0x293938
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_7040152D456B23291859549FDF417CED(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_7040152D456B23291859549FDF417CED // BlueprintEvent // @ game+0x293938
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_A561E8874B9063E55AF72689A4F380B7(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_A561E8874B9063E55AF72689A4F380B7 // BlueprintEvent // @ game+0x293938
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_C8A5A3CA4CA9EA978F9D43B1E338A5C4(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_C8A5A3CA4CA9EA978F9D43B1E338A5C4 // BlueprintEvent // @ game+0x293938
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_7D8E74C54278A3B39BA63CB206EE0E8B(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_7D8E74C54278A3B39BA63CB206EE0E8B // BlueprintEvent // @ game+0x293938
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_30E0C6B543E766367E0D838EA57CA891(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*cac7fc2d7b_30E0C6B543E766367E0D838EA57CA891 // BlueprintEvent // @ game+0x293938
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x293938
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x293938
	void WeaponFireCycle_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.WeaponFireCycle_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AnimNotify_ClipShow(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipShow // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AnimNotify_ClipHide(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipHide // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Reload2_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Reload2_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReloadByOneStart_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneStart_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReloadByOneSingle_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneSingle_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReloadByOneEnd_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneEnd_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AnimNotify_ShellEject(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ShellEject // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void CancelReload_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.CancelReload_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool ExecuteUbergraph_ABP_Weapon_Kar98k_RD(int32 EntryPoint, DelegateProperty _d01ead63d9_OutputDelegate, DelegateProperty _d01ead63d9_OutputDelegate3, float CallFunc_Montage_Play_ReturnValue, DelegateProperty _d01ead63d9_OutputDelegate5, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_BooleanOR_ReturnValue2, float CallFunc__63e65eadc5_ReturnValue, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun3); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ExecuteUbergraph_ABP_Weapon_Kar98k_RD // HasDefaults // @ game+0x293938
};


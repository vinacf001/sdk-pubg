// AnimBlueprintGeneratedClass ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C
// Size: 0xe34 (Inherited: 0x4a8)
struct UABP_Weapon_Kar98k_RD_C : U*607a16e779 {
	struct F*73a77c28fa UberGraphFrame; // 0x4a8(0x08)
	struct FAnimNode_Root _dd5f4c94af_E69D4E33435DD543FE446D92E3351001; // 0x4b0(0x48)
	struct FAnimNode_Slot _3a481c9b75_69E3A14E4848B9AB1FBE58AEA42D4DDA; // 0x4f8(0x70)
	struct FAnimNode_Slot _3a481c9b75_7611638D49D12A187EA61B9A4613CCE2; // 0x568(0x70)
	struct FAnimNode_ModifyBone _25c3188cda_30E0C6B543E766367E0D838EA57CA891; // 0x5d8(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _4bb02279b4_0059397F4E4786A2DAD4D6A5578B217D; // 0x718(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _e98c45043b_0F77FB174B6AC6E8106BCEAEF3B47C12; // 0x760(0x48)
	struct FAnimNode_ModifyBone _25c3188cda_7D8E74C54278A3B39BA63CB206EE0E8B; // 0x7a8(0x140)
	struct FAnimNode_ModifyBone _25c3188cda_C8A5A3CA4CA9EA978F9D43B1E338A5C4; // 0x8e8(0x140)
	struct FAnimNode_ModifyBone _25c3188cda_A561E8874B9063E55AF72689A4F380B7; // 0xa28(0x140)
	struct FAnimNode_ModifyBone _25c3188cda_5A44AABE4BEA0800D89A3B8E5DA99EDE; // 0xb68(0x140)
	struct FAnimNode_ModifyBone _25c3188cda_7040152D456B23291859549FDF417CED; // 0xca8(0x140)
	struct FAnimNode_RefPose _fdd4ee2f02_D8C3806F4B4254229950278AC71FEFCE; // 0xde8(0x38)
	float ClipShowAlpha; // 0xe20(0x04)
	float MagRootAlpha; // 0xe24(0x04)
	struct ATslWeapon_Gun* GunRef; // 0xe28(0x08)
	float BoltActionAlpha; // 0xe30(0x04)

	void Handle_ReloadByOne_Stop(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Stop // None // @ game+0x26a108
	float Handle_ReloadByOne_Single(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Single // None // @ game+0x26a108
	void Handle_ReloadByOne_Start(struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun, float CallFunc__ad46cc8961_ReturnValue); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Start // None // @ game+0x26a108
	struct UAnimMontage* Handle_FireCycle(int32 ___int_Variable); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_FireCycle // None // @ game+0x26a108
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_5A44AABE4BEA0800D89A3B8E5DA99EDE(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_5A44AABE4BEA0800D89A3B8E5DA99EDE // None // @ game+0x26a108
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_7040152D456B23291859549FDF417CED(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_7040152D456B23291859549FDF417CED // None // @ game+0x26a108
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_A561E8874B9063E55AF72689A4F380B7(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_A561E8874B9063E55AF72689A4F380B7 // None // @ game+0x26a108
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_C8A5A3CA4CA9EA978F9D43B1E338A5C4(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_C8A5A3CA4CA9EA978F9D43B1E338A5C4 // None // @ game+0x26a108
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_7D8E74C54278A3B39BA63CB206EE0E8B(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_7D8E74C54278A3B39BA63CB206EE0E8B // None // @ game+0x26a108
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_30E0C6B543E766367E0D838EA57CA891(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_30E0C6B543E766367E0D838EA57CA891 // None // @ game+0x26a108
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintUpdateAnimation // None // @ game+0x26a108
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintInitializeAnimation // None // @ game+0x26a108
	void WeaponFireCycle_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.WeaponFireCycle_Event_1 // None // @ game+0x26a108
	void AnimNotify_ClipShow(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipShow // None // @ game+0x26a108
	void AnimNotify_ClipHide(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipHide // None // @ game+0x26a108
	void Reload2_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Reload2_Event_1 // None // @ game+0x26a108
	void ReloadByOneStart_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneStart_Event_1 // None // @ game+0x26a108
	void ReloadByOneSingle_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneSingle_Event_1 // None // @ game+0x26a108
	void ReloadByOneEnd_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneEnd_Event_1 // None // @ game+0x26a108
	void AnimNotify_ShellEject(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ShellEject // None // @ game+0x26a108
	void CancelReload_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.CancelReload_Event_1 // None // @ game+0x26a108
	bool ExecuteUbergraph_ABP_Weapon_Kar98k_RD(DelegateProperty _37b0074df2_OutputDelegate, float CallFunc__ad46cc8961_ReturnValue, float CallFunc_Montage_Play_ReturnValue, DelegateProperty _37b0074df2_OutputDelegate5, bool CallFunc__bf78400b8f_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue2, float CallFunc__179261048b_ReturnValue, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun3); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ExecuteUbergraph_ABP_Weapon_Kar98k_RD // None // @ game+0x26a108
};


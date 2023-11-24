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

	void Handle_ReloadByOne_Stop(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Stop // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float Handle_ReloadByOne_Single(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Single // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct ATslWeapon_Gun* Handle_ReloadByOne_Start(bool K2Node_DynamicCast_bSuccess); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Start // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct UAnimMontage* Handle_FireCycle(struct UAnimMontage* ___object_Variable, struct UAnimMontage* ___object_Variable3); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_FireCycle // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_5A44AABE4BEA0800D89A3B8E5DA99EDE(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_5A44AABE4BEA0800D89A3B8E5DA99EDE // BlueprintEvent // @ game+0x1e037c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_7040152D456B23291859549FDF417CED(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_7040152D456B23291859549FDF417CED // BlueprintEvent // @ game+0x1e037c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_A561E8874B9063E55AF72689A4F380B7(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_A561E8874B9063E55AF72689A4F380B7 // BlueprintEvent // @ game+0x1e037c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_C8A5A3CA4CA9EA978F9D43B1E338A5C4(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_C8A5A3CA4CA9EA978F9D43B1E338A5C4 // BlueprintEvent // @ game+0x1e037c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_7D8E74C54278A3B39BA63CB206EE0E8B(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_7D8E74C54278A3B39BA63CB206EE0E8B // BlueprintEvent // @ game+0x1e037c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_30E0C6B543E766367E0D838EA57CA891(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*25c3188cda_30E0C6B543E766367E0D838EA57CA891 // BlueprintEvent // @ game+0x1e037c
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x1e037c
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x1e037c
	void WeaponFireCycle_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.WeaponFireCycle_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AnimNotify_ClipShow(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipShow // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AnimNotify_ClipHide(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipHide // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Reload2_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Reload2_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReloadByOneStart_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneStart_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReloadByOneSingle_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneSingle_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReloadByOneEnd_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneEnd_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AnimNotify_ShellEject(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ShellEject // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void CancelReload_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.CancelReload_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool ExecuteUbergraph_ABP_Weapon_Kar98k_RD(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, DelegateProperty _37b0074df2_OutputDelegate2, DelegateProperty _37b0074df2_OutputDelegate4, float CallFunc_Montage_Play_ReturnValue2, struct AActor* CallFunc__ccd070a982_ReturnValue2, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun2, struct U*3af93f9c2e* CallFunc_GetWeaponMesh_ReturnValue, DelegateProperty _37b0074df2_OutputDelegate6, struct AActor* CallFunc__ccd070a982_ReturnValue3); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ExecuteUbergraph_ABP_Weapon_Kar98k_RD // HasDefaults // @ game+0x1e037c
};


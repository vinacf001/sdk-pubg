// AnimBlueprintGeneratedClass ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C
// Size: 0xe44 (Inherited: 0x4b8)
struct UABP_Weapon_Kar98k_RD_C : U*170261c26a {
	struct F*a6c93df757 UberGraphFrame; // 0x4b8(0x08)
	struct FAnimNode_Root _929f1b3e1d_E69D4E33435DD543FE446D92E3351001; // 0x4c0(0x48)
	struct FAnimNode_Slot _5868c351b8_69E3A14E4848B9AB1FBE58AEA42D4DDA; // 0x508(0x70)
	struct FAnimNode_Slot _5868c351b8_7611638D49D12A187EA61B9A4613CCE2; // 0x578(0x70)
	struct FAnimNode_ModifyBone _0a57318eed_30E0C6B543E766367E0D838EA57CA891; // 0x5e8(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _3072aa5a2a_0059397F4E4786A2DAD4D6A5578B217D; // 0x728(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _de99e5cb6e_0F77FB174B6AC6E8106BCEAEF3B47C12; // 0x770(0x48)
	struct FAnimNode_ModifyBone _0a57318eed_7D8E74C54278A3B39BA63CB206EE0E8B; // 0x7b8(0x140)
	struct FAnimNode_ModifyBone _0a57318eed_C8A5A3CA4CA9EA978F9D43B1E338A5C4; // 0x8f8(0x140)
	struct FAnimNode_ModifyBone _0a57318eed_A561E8874B9063E55AF72689A4F380B7; // 0xa38(0x140)
	struct FAnimNode_ModifyBone _0a57318eed_5A44AABE4BEA0800D89A3B8E5DA99EDE; // 0xb78(0x140)
	struct FAnimNode_ModifyBone _0a57318eed_7040152D456B23291859549FDF417CED; // 0xcb8(0x140)
	struct FAnimNode_RefPose _b241b25677_D8C3806F4B4254229950278AC71FEFCE; // 0xdf8(0x38)
	float ClipShowAlpha; // 0xe30(0x04)
	float MagRootAlpha; // 0xe34(0x04)
	struct ATslWeapon_Gun* GunRef; // 0xe38(0x08)
	float BoltActionAlpha; // 0xe40(0x04)

	void Handle_ReloadByOne_Stop(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Stop // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float Handle_ReloadByOne_Single(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Single // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float Handle_ReloadByOne_Start(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Start // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float Handle_FireCycle(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_FireCycle // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_5A44AABE4BEA0800D89A3B8E5DA99EDE(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_5A44AABE4BEA0800D89A3B8E5DA99EDE // BlueprintEvent // @ game+0x370fbc
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_7040152D456B23291859549FDF417CED(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_7040152D456B23291859549FDF417CED // BlueprintEvent // @ game+0x370fbc
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_A561E8874B9063E55AF72689A4F380B7(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_A561E8874B9063E55AF72689A4F380B7 // BlueprintEvent // @ game+0x370fbc
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_C8A5A3CA4CA9EA978F9D43B1E338A5C4(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_C8A5A3CA4CA9EA978F9D43B1E338A5C4 // BlueprintEvent // @ game+0x370fbc
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_7D8E74C54278A3B39BA63CB206EE0E8B(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_7D8E74C54278A3B39BA63CB206EE0E8B // BlueprintEvent // @ game+0x370fbc
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_30E0C6B543E766367E0D838EA57CA891(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*0a57318eed_30E0C6B543E766367E0D838EA57CA891 // BlueprintEvent // @ game+0x370fbc
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x370fbc
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x370fbc
	void WeaponFireCycle_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.WeaponFireCycle_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void AnimNotify_ClipShow(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipShow // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void AnimNotify_ClipHide(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipHide // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Reload2_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Reload2_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReloadByOneStart_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneStart_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReloadByOneSingle_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneSingle_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReloadByOneEnd_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneEnd_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void AnimNotify_ShellEject(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ShellEject // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void CancelReload_Event_1(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.CancelReload_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool ExecuteUbergraph_ABP_Weapon_Kar98k_RD(DelegateProperty _d8b1f23a78_OutputDelegate3, DelegateProperty _d8b1f23a78_OutputDelegate4, float CallFunc_FMin_ReturnValue, float K2Node_Event_DeltaTimeX); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ExecuteUbergraph_ABP_Weapon_Kar98k_RD // HasDefaults // @ game+0x370fbc
};


// BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C
// Size: 0x476 (Inherited: 0x3f0)
struct ATslCaptureLobby_C : ALevelScriptActor {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x3f0(0x08)
	struct ALobbyViewMode_C* ViewModeStudio; // 0x3f8(0x08)
	struct ATslWeapon* TslWeapon; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)
	struct FTransform UiCameraTM; // 0x410(0x30)
	struct FTransform ViewModeTM; // 0x440(0x30)
	bool bLeft; // 0x470(0x01)
	bool bright; // 0x471(0x01)
	bool bUp; // 0x472(0x01)
	bool bDown; // 0x473(0x01)
	bool AddView; // 0x474(0x01)
	bool MinusView; // 0x475(0x01)

	void InpActEvt_Backslash_*5993371acc_26(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Backslash_*5993371acc_26 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Left_*5993371acc_25(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Left_*5993371acc_25 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Left_*5993371acc_24(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Left_*5993371acc_24 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Right_*5993371acc_23(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Right_*5993371acc_23 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Right_*5993371acc_22(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Right_*5993371acc_22 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Up_*5993371acc_21(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Up_*5993371acc_21 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Up_*5993371acc_20(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Up_*5993371acc_20 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Down_*5993371acc_19(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Down_*5993371acc_19 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Down_*5993371acc_18(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Down_*5993371acc_18 // BlueprintEvent // @ game+0x293938
	void InpActEvt_LeftBracket_*5993371acc_17(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_LeftBracket_*5993371acc_17 // BlueprintEvent // @ game+0x293938
	void InpActEvt_LeftBracket_*5993371acc_16(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_LeftBracket_*5993371acc_16 // BlueprintEvent // @ game+0x293938
	void InpActEvt_RightBracket_*5993371acc_15(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_RightBracket_*5993371acc_15 // BlueprintEvent // @ game+0x293938
	void InpActEvt_RightBracket_*5993371acc_14(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_RightBracket_*5993371acc_14 // BlueprintEvent // @ game+0x293938
	void ReceiveTick(); // Function TslCaptureLobby.TslCaptureLobby_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x293938
	float ExecuteUbergraph_TslCaptureLobby(struct FKey _5993371acc_Key10, struct FKey ___struct_Variable2, struct FKey ___struct_Variable3, struct FKey _5993371acc_Key5, struct FKey ___struct_Variable4, struct FKey ___struct_Variable5, struct U*fd901ab3b7* CallFunc_GetWeaponMesh_ReturnValue, struct FTransform CallFunc__32022b8b54_ReturnValue, struct FTransform CallFunc__de81b8d5cc_ReturnValue, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, struct FVector CallFunc_BreakTransform_Location2, struct FVector CallFunc_BreakTransform_Scale2, float CallFunc_BreakRotator_Roll2, struct UViewModeWidget_C* CallFunc_Create_ReturnValue, struct AWeapKar98k_C* CallFunc_FinishSpawningActor_ReturnValue, struct AActor* CallFunc__156662a2f2_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, float CallFunc__8b3ad6877d_ReturnValue, float CallFunc__8b3ad6877d_ReturnValue4); // Function TslCaptureLobby.TslCaptureLobby_C.ExecuteUbergraph_TslCaptureLobby // HasDefaults // @ game+0x293938
};


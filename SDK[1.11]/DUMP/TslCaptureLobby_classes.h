// BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C
// Size: 0x476 (Inherited: 0x3f0)
struct ATslCaptureLobby_C : ALevelScriptActor {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x3f0(0x08)
	struct ALobbyViewMode_C* ViewModeStudio[0x08]; // 0x3f8(0x08)
	struct ATslWeapon* TslWeapon[0x08]; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)
	struct FTransform UiCameraTM[0x30]; // 0x410(0x30)
	struct FTransform ViewModeTM[0x30]; // 0x440(0x30)
	bool bLeft; // 0x470(0x01)
	bool bright; // 0x471(0x01)
	bool bUp; // 0x472(0x01)
	bool bDown; // 0x473(0x01)
	bool AddView; // 0x474(0x01)
	bool MinusView; // 0x475(0x01)

	void InpActEvt_Backslash_*41702fca2c_26(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Backslash_*41702fca2c_26 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Left_*41702fca2c_25(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Left_*41702fca2c_25 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Left_*41702fca2c_24(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Left_*41702fca2c_24 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Right_*41702fca2c_23(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Right_*41702fca2c_23 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Right_*41702fca2c_22(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Right_*41702fca2c_22 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Up_*41702fca2c_21(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Up_*41702fca2c_21 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Up_*41702fca2c_20(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Up_*41702fca2c_20 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Down_*41702fca2c_19(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Down_*41702fca2c_19 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Down_*41702fca2c_18(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Down_*41702fca2c_18 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_LeftBracket_*41702fca2c_17(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_LeftBracket_*41702fca2c_17 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_LeftBracket_*41702fca2c_16(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_LeftBracket_*41702fca2c_16 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_RightBracket_*41702fca2c_15(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_RightBracket_*41702fca2c_15 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_RightBracket_*41702fca2c_14(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_RightBracket_*41702fca2c_14 // BlueprintEvent // @ game+0x2cd4ac
	void ReceiveTick(); // Function TslCaptureLobby.TslCaptureLobby_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	float ExecuteUbergraph_TslCaptureLobby(struct FKey* _41702fca2c_Key7, struct FKey* _41702fca2c_Key6, struct FKey* ___struct_Variable4, struct FKey* ___struct_Variable5, bool CallFunc__bf9ff98c3b_ReturnValue, struct FVector* CallFunc_BreakTransform_Location, struct FVector* CallFunc_BreakTransform_Scale, struct FRotator* CallFunc_MakeRotator_ReturnValue, struct FVector* CallFunc_BreakTransform_Location2, struct UViewModeWidget_C** CallFunc_Create_ReturnValue, struct AActor** CallFunc__6e3d67b9ba_ReturnValue, struct FTransform* CallFunc_MakeTransform_ReturnValue3, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue3, float* CallFunc__cbdb0e953d_ReturnValue2, float* CallFunc__449286a277_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue5, float* CallFunc__449286a277_ReturnValue5); // Function TslCaptureLobby.TslCaptureLobby_C.ExecuteUbergraph_TslCaptureLobby // HasDefaults // @ game+0x2cd4ac
};


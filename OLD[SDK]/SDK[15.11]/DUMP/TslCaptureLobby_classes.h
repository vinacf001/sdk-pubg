// BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C
// Size: 0x486 (Inherited: 0x400)
struct ATslCaptureLobby_C : ALevelScriptActor {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x400(0x08)
	struct ALobbyViewMode_C* ViewModeStudio; // 0x408(0x08)
	struct ATslWeapon* TslWeapon; // 0x410(0x08)
	char pad_418[0x8]; // 0x418(0x08)
	struct FTransform UiCameraTM; // 0x420(0x30)
	struct FTransform ViewModeTM; // 0x450(0x30)
	bool bLeft; // 0x480(0x01)
	bool bright; // 0x481(0x01)
	bool bUp; // 0x482(0x01)
	bool bDown; // 0x483(0x01)
	bool AddView; // 0x484(0x01)
	bool MinusView; // 0x485(0x01)

	void InpActEvt_Backslash_*5993371acc_26(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Backslash_*5993371acc_26 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Left_*5993371acc_25(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Left_*5993371acc_25 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Left_*5993371acc_24(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Left_*5993371acc_24 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Right_*5993371acc_23(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Right_*5993371acc_23 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Right_*5993371acc_22(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Right_*5993371acc_22 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Up_*5993371acc_21(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Up_*5993371acc_21 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Up_*5993371acc_20(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Up_*5993371acc_20 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Down_*5993371acc_19(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Down_*5993371acc_19 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Down_*5993371acc_18(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Down_*5993371acc_18 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_LeftBracket_*5993371acc_17(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_LeftBracket_*5993371acc_17 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_LeftBracket_*5993371acc_16(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_LeftBracket_*5993371acc_16 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_RightBracket_*5993371acc_15(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_RightBracket_*5993371acc_15 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_RightBracket_*5993371acc_14(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_RightBracket_*5993371acc_14 // BlueprintEvent // @ game+0x21d2c4
	void ReceiveTick(); // Function TslCaptureLobby.TslCaptureLobby_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void ExecuteUbergraph_TslCaptureLobby(); // Function TslCaptureLobby.TslCaptureLobby_C.ExecuteUbergraph_TslCaptureLobby // HasDefaults // @ game+0x21d2c4
};


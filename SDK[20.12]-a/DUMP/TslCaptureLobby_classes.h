// BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C
// Size: 0x476 (Inherited: 0x3f0)
struct ATslCaptureLobby_C : ALevelScriptActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3f0(0x08)
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

	void InpActEvt_Backslash_*bcd26d28fe_26(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Backslash_*bcd26d28fe_26 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Left_*bcd26d28fe_25(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Left_*bcd26d28fe_25 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Left_*bcd26d28fe_24(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Left_*bcd26d28fe_24 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Right_*bcd26d28fe_23(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Right_*bcd26d28fe_23 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Right_*bcd26d28fe_22(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Right_*bcd26d28fe_22 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Up_*bcd26d28fe_21(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Up_*bcd26d28fe_21 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Up_*bcd26d28fe_20(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Up_*bcd26d28fe_20 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Down_*bcd26d28fe_19(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Down_*bcd26d28fe_19 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Down_*bcd26d28fe_18(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_Down_*bcd26d28fe_18 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_LeftBracket_*bcd26d28fe_17(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_LeftBracket_*bcd26d28fe_17 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_LeftBracket_*bcd26d28fe_16(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_LeftBracket_*bcd26d28fe_16 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_RightBracket_*bcd26d28fe_15(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_RightBracket_*bcd26d28fe_15 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_RightBracket_*bcd26d28fe_14(); // Function TslCaptureLobby.TslCaptureLobby_C.InpActEvt_RightBracket_*bcd26d28fe_14 // BlueprintEvent // @ game+0x3b43ac
	void ReceiveTick(); // Function TslCaptureLobby.TslCaptureLobby_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_TslCaptureLobby(); // Function TslCaptureLobby.TslCaptureLobby_C.ExecuteUbergraph_TslCaptureLobby // HasDefaults // @ game+0x3b43ac
};


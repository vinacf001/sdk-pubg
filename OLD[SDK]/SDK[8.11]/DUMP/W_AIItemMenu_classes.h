// WidgetBlueprintGeneratedClass W_AIItemMenu.W_AIItemMenu_C
// Size: 0x1e48 (Inherited: 0x410)
struct UW_AIItemMenu_C : U*eb79fdee2a {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x410(0x08)
	struct UVerticalBox* AIListBox; // 0x418(0x08)
	struct UButton* Button_37; // 0x420(0x08)
	struct UImage* DebugCrosshair; // 0x428(0x08)
	struct UButton* UseButton_124; // 0x430(0x08)
	struct UVerticalBox* VB_Ammo; // 0x438(0x08)
	struct UVerticalBox* VB_Armor; // 0x440(0x08)
	struct UVerticalBox* VB_Backpack; // 0x448(0x08)
	struct UVerticalBox* VB_Cosmetic; // 0x450(0x08)
	struct UVerticalBox* VB_Helm; // 0x458(0x08)
	struct UVerticalBox* VB_Lower; // 0x460(0x08)
	struct UVerticalBox* VB_Mag; // 0x468(0x08)
	struct UVerticalBox* VB_Meds; // 0x470(0x08)
	struct UVerticalBox* VB_Melee; // 0x478(0x08)
	struct UVerticalBox* VB_Muzzle; // 0x480(0x08)
	struct UVerticalBox* VB_Other; // 0x488(0x08)
	struct UVerticalBox* VB_Pistols; // 0x490(0x08)
	struct UVerticalBox* VB_Rifle; // 0x498(0x08)
	struct UVerticalBox* VB_Scopes; // 0x4a0(0x08)
	struct UVerticalBox* VB_Shotguns; // 0x4a8(0x08)
	struct UVerticalBox* VB_SMG; // 0x4b0(0x08)
	struct UVerticalBox* VB_Sniper; // 0x4b8(0x08)
	struct UVerticalBox* VB_Stock; // 0x4c0(0x08)
	struct UVerticalBox* VB_Thrown; // 0x4c8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x4d0(0x08)
	struct TArray<struct FName> WeapClassArray_Pistol; // 0x4d8(0x10)
	struct TArray<struct FName> WeapClassArray_SMG; // 0x4e8(0x10)
	struct TArray<struct FName> WeapClassArray_Shotgun; // 0x4f8(0x10)
	struct TArray<struct FName> WeapClassArray_Rifle; // 0x508(0x10)
	struct TArray<struct FName> WeapClassArray_Sniper; // 0x518(0x10)
	struct TArray<struct FName> WeapClassArray_Other; // 0x528(0x10)
	struct F*9ec348ba05 WeapButtonStyle; // 0x538(0x2a8)
	struct TArray<struct FName> AttachClassArray_Scopes; // 0x7e0(0x10)
	struct TArray<struct FName> AttachClassArray_Muzzle; // 0x7f0(0x10)
	struct TArray<struct FName> AttachClassArray_Mag; // 0x800(0x10)
	struct TArray<struct FName> AttachClassArray_Lower; // 0x810(0x10)
	struct TArray<struct FName> AttachClassArray_Stock; // 0x820(0x10)
	struct F*9ec348ba05 AttachButtonStyle; // 0x830(0x2a8)
	struct TArray<struct FName> ArmorClassArray_Helm; // 0xad8(0x10)
	struct TArray<struct FName> ArmorClassArray_Armor; // 0xae8(0x10)
	struct TArray<struct FName> ArmorClassArray_Backpack; // 0xaf8(0x10)
	struct F*9ec348ba05 ArmorButtonStyle; // 0xb08(0x2a8)
	struct TArray<struct FName> MedsClassArray_Meds; // 0xdb0(0x10)
	struct F*9ec348ba05 MedsButtonStyle; // 0xdc0(0x2a8)
	struct TArray<struct FName> ThrownClassArray_Thrown; // 0x1068(0x10)
	struct F*9ec348ba05 ThrownButtonStyle; // 0x1078(0x2a8)
	struct TArray<struct FName> CosmeticClassArray_Cosmetic; // 0x1320(0x10)
	struct F*9ec348ba05 CosmeticButtonStyle; // 0x1330(0x2a8)
	struct APlayerPawn_v2_C* CharRef; // 0x15d8(0x08)
	int32 ActivePresetArray; // 0x15e0(0x04)
	char pad_15E4[0x4]; // 0x15e4(0x04)
	struct F*9ec348ba05 PresetButtonStyle; // 0x15e8(0x2a8)
	struct TArray<struct FName> AmmoClassArray_Ammo; // 0x1890(0x10)
	struct F*9ec348ba05 AmmoButtonStyle; // 0x18a0(0x2a8)
	struct TArray<struct FName> MeleeClassArray; // 0x1b48(0x10)
	struct F*9ec348ba05 MeleeButtonStyle; // 0x1b58(0x2a8)
	bool bInUse; // 0x1e00(0x01)
	char pad_1E01[0x7]; // 0x1e01(0x07)
	struct UW_WeaponMenu_C* weaponMenu; // 0x1e08(0x08)
	int32 CacheAINum; // 0x1e10(0x04)
	char pad_1E14[0x4]; // 0x1e14(0x04)
	struct F*b2f5f3e08e AIListHandle; // 0x1e18(0x08)
	struct TArray<struct ATslNewBotCharacter*> aiNum; // 0x1e20(0x10)
	struct UW_AIButton_C* CacheAIBtn; // 0x1e30(0x08)
	struct TArray<struct ATslNewBotCharacter*> AICharacters; // 0x1e38(0x10)

	struct UW_WeaponMenu_C* InitItemsData(); // Function W_AIItemMenu.W_AIItemMenu_C.InitItemsData // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool InitAIList(int32 CallFunc__949df90870_ReturnValue, struct U*d2f00ac7d1* CallFunc_AddChildToVerticalBox_ReturnValue, struct ATslNewBotCharacter* CallFunc_Array_Get_Item, int32 CallFunc__0bad7adb6e_ReturnValue2); // Function W_AIItemMenu.W_AIItemMenu_C.InitAIList // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool SetUseBtn(struct FSlateBrush K2Node_MakeStruct_SlateBrush3, struct F*9ec348ba05 K2Node_MakeStruct__9ec348ba05); // Function W_AIItemMenu.W_AIItemMenu_C.SetUseBtn // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FEventReply OnKeyUp(struct FKeyEvent InKeyEvent); // Function W_AIItemMenu.W_AIItemMenu_C.OnKeyUp // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FKey OnKeyDown(); // Function W_AIItemMenu.W_AIItemMenu_C.OnKeyDown // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void GiveItemToPlayer(struct ATslCharacter* CallFunc__36cf5fd6b9_ReturnValue); // Function W_AIItemMenu.W_AIItemMenu_C.GiveItemToPlayer // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void DoExit(); // Function W_AIItemMenu.W_AIItemMenu_C.DoExit // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Construct(); // Function W_AIItemMenu.W_AIItemMenu_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature(); // Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void Event Close(); // Function W_AIItemMenu.W_AIItemMenu_C.Event Close // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void CenterCursor(); // Function W_AIItemMenu.W_AIItemMenu_C.CenterCursor // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature(); // Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void Destruct(); // Function W_AIItemMenu.W_AIItemMenu_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	int32 ExecuteUbergraph_W_AIItemMenu(int32 ___int_Loop_Counter_Variable, int32 ___int_Array_Index_Variable, int32 CallFunc__949df90870_ReturnValue2, int32 ___int_Loop_Counter_Variable3, int32 ___int_Loop_Counter_Variable6, int32 CallFunc__949df90870_ReturnValue6, int32 ___int_Array_Index_Variable5, int32 ___int_Array_Index_Variable6, int32 CallFunc__949df90870_ReturnValue11, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue15, int32 ___int_Loop_Counter_Variable13, int32 CallFunc__949df90870_ReturnValue13, int32 CallFunc__949df90870_ReturnValue15, int32 CallFunc__949df90870_ReturnValue16, int32 ___int_Array_Index_Variable16, int32 CallFunc__949df90870_ReturnValue17, struct FName CallFunc_Array_Get_Item2, int32 CallFunc__0bad7adb6e_ReturnValue4, struct FName CallFunc_Array_Get_Item3, bool CallFunc__2bff9823d8_ReturnValue3, struct FName CallFunc_Array_Get_Item6, bool CallFunc__2bff9823d8_ReturnValue6, struct FName CallFunc_Array_Get_Item7, int32 CallFunc__0bad7adb6e_ReturnValue9, bool CallFunc__2bff9823d8_ReturnValue10, int32 CallFunc__0bad7adb6e_ReturnValue13, struct U*d2f00ac7d1* CallFunc_AddChildToVerticalBox_ReturnValue13, struct U*d2f00ac7d1* CallFunc_AddChildToVerticalBox_ReturnValue14, bool CallFunc__2bff9823d8_ReturnValue14, struct U*d2f00ac7d1* CallFunc_AddChildToVerticalBox_ReturnValue17, bool CallFunc__2bff9823d8_ReturnValue15, int32 CallFunc__0bad7adb6e_ReturnValue18, float CallFunc_BreakVector2D_Y, float CallFunc__aa1f1a3bef_ReturnValue2, int32 CallFunc__59ec794a0d_ReturnValue2, bool CallFunc__2bff9823d8_ReturnValue18); // Function W_AIItemMenu.W_AIItemMenu_C.ExecuteUbergraph_W_AIItemMenu // HasDefaults // @ game+0x293938
};


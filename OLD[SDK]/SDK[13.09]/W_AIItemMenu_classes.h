// WidgetBlueprintGeneratedClass W_AIItemMenu.W_AIItemMenu_C
// Size: 0x1e48 (Inherited: 0x410)
struct UW_AIItemMenu_C : U*17234a7c9b {
	struct F*73a77c28fa UberGraphFrame; // 0x410(0x08)
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
	struct F*d5cdd95f37 WeapButtonStyle; // 0x538(0x2a8)
	struct TArray<struct FName> AttachClassArray_Scopes; // 0x7e0(0x10)
	struct TArray<struct FName> AttachClassArray_Muzzle; // 0x7f0(0x10)
	struct TArray<struct FName> AttachClassArray_Mag; // 0x800(0x10)
	struct TArray<struct FName> AttachClassArray_Lower; // 0x810(0x10)
	struct TArray<struct FName> AttachClassArray_Stock; // 0x820(0x10)
	struct F*d5cdd95f37 AttachButtonStyle; // 0x830(0x2a8)
	struct TArray<struct FName> ArmorClassArray_Helm; // 0xad8(0x10)
	struct TArray<struct FName> ArmorClassArray_Armor; // 0xae8(0x10)
	struct TArray<struct FName> ArmorClassArray_Backpack; // 0xaf8(0x10)
	struct F*d5cdd95f37 ArmorButtonStyle; // 0xb08(0x2a8)
	struct TArray<struct FName> MedsClassArray_Meds; // 0xdb0(0x10)
	struct F*d5cdd95f37 MedsButtonStyle; // 0xdc0(0x2a8)
	struct TArray<struct FName> ThrownClassArray_Thrown; // 0x1068(0x10)
	struct F*d5cdd95f37 ThrownButtonStyle; // 0x1078(0x2a8)
	struct TArray<struct FName> CosmeticClassArray_Cosmetic; // 0x1320(0x10)
	struct F*d5cdd95f37 CosmeticButtonStyle; // 0x1330(0x2a8)
	struct APlayerPawn_v2_C* CharRef; // 0x15d8(0x08)
	int32 ActivePresetArray; // 0x15e0(0x04)
	char pad_15E4[0x4]; // 0x15e4(0x04)
	struct F*d5cdd95f37 PresetButtonStyle; // 0x15e8(0x2a8)
	struct TArray<struct FName> AmmoClassArray_Ammo; // 0x1890(0x10)
	struct F*d5cdd95f37 AmmoButtonStyle; // 0x18a0(0x2a8)
	struct TArray<struct FName> MeleeClassArray; // 0x1b48(0x10)
	struct F*d5cdd95f37 MeleeButtonStyle; // 0x1b58(0x2a8)
	bool bInUse; // 0x1e00(0x01)
	char pad_1E01[0x7]; // 0x1e01(0x07)
	struct UW_WeaponMenu_C* weaponMenu; // 0x1e08(0x08)
	int32 CacheAINum; // 0x1e10(0x04)
	char pad_1E14[0x4]; // 0x1e14(0x04)
	struct F*9c84e0ea54 AIListHandle; // 0x1e18(0x08)
	struct TArray<struct ATslNewBotCharacter*> aiNum; // 0x1e20(0x10)
	struct UW_AIButton_C* CacheAIBtn; // 0x1e30(0x08)
	struct TArray<struct ATslNewBotCharacter*> AICharacters; // 0x1e38(0x10)

	void InitItemsData(struct UW_WeaponMenu_C* CallFunc_Create_ReturnValue); // Function W_AIItemMenu.W_AIItemMenu_C.InitItemsData // None // @ game+0x26a108
	struct TArray<struct ATslNewBotCharacter*> InitAIList(struct UW_AIButton_C* CallFunc_Create_ReturnValue, struct FString CallFunc__105aa62fa6_ReturnValue, struct FName CallFunc__acf515eb09_ReturnValue, struct FName ___name_Variable); // Function W_AIItemMenu.W_AIItemMenu_C.InitAIList // None // @ game+0x26a108
	struct FSlateBrush SetUseBtn(struct FSlateBrush K2Node_MakeStruct_SlateBrush); // Function W_AIItemMenu.W_AIItemMenu_C.SetUseBtn // None // @ game+0x26a108
	void OnKeyUp(struct FGeometry MyGeometry, struct FEventReply ReturnValue, struct FEventReply K2Node_MakeStruct_EventReply); // Function W_AIItemMenu.W_AIItemMenu_C.OnKeyUp // None // @ game+0x26a108
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry); // Function W_AIItemMenu.W_AIItemMenu_C.OnKeyDown // None // @ game+0x26a108
	struct APlayerPawn_v2_C* GiveItemToPlayer(); // Function W_AIItemMenu.W_AIItemMenu_C.GiveItemToPlayer // None // @ game+0x26a108
	void DoExit(); // Function W_AIItemMenu.W_AIItemMenu_C.DoExit // None // @ game+0x26a108
	void Construct(); // Function W_AIItemMenu.W_AIItemMenu_C.Construct // None // @ game+0x26a108
	void BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature(); // Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void Event Close(); // Function W_AIItemMenu.W_AIItemMenu_C.Event Close // None // @ game+0x26a108
	void CenterCursor(); // Function W_AIItemMenu.W_AIItemMenu_C.CenterCursor // None // @ game+0x26a108
	void BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature(); // Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void Destruct(); // Function W_AIItemMenu.W_AIItemMenu_C.Destruct // None // @ game+0x26a108
	int32 ExecuteUbergraph_W_AIItemMenu(int32 EntryPoint, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue2, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue4, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue6, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue11, int32 CallFunc__10b0236ab6_ReturnValue3, int32 ___int_Loop_Counter_Variable4, int32 ___int_Array_Index_Variable3, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue13, int32 ___int_Loop_Counter_Variable8, int32 ___int_Array_Index_Variable7, int32 CallFunc__10b0236ab6_ReturnValue9, int32 CallFunc__10b0236ab6_ReturnValue10, int32 CallFunc__10b0236ab6_ReturnValue12, int32 ___int_Array_Index_Variable11, int32 ___int_Array_Index_Variable12, int32 CallFunc__10b0236ab6_ReturnValue14, int32 ___int_Loop_Counter_Variable17, int32 ___int_Array_Index_Variable17, int32 CallFunc__c60d779ed0_ReturnValue, struct U*1db1bb498a* CallFunc_AddChildToVerticalBox_ReturnValue, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue19, bool CallFunc__d1b7f5dc7b_ReturnValue3, struct FName CallFunc_Array_Get_Item4, int32 CallFunc__c60d779ed0_ReturnValue6, struct FName CallFunc_Array_Get_Item5, int32 CallFunc__c60d779ed0_ReturnValue9, struct FName CallFunc_Array_Get_Item8, bool CallFunc__d1b7f5dc7b_ReturnValue8, struct FName CallFunc_Array_Get_Item9, struct U*1db1bb498a* CallFunc_AddChildToVerticalBox_ReturnValue14, bool CallFunc__d1b7f5dc7b_ReturnValue12, struct U*1db1bb498a* CallFunc_AddChildToVerticalBox_ReturnValue15, bool CallFunc__d1b7f5dc7b_ReturnValue13, int32 CallFunc__c60d779ed0_ReturnValue18, struct U*1db1bb498a* CallFunc_AddChildToVerticalBox_ReturnValue18, int32 CallFunc__c60d779ed0_ReturnValue19, struct U*1db1bb498a* CallFunc_AddChildToVerticalBox_ReturnValue19, bool CallFunc__d1b7f5dc7b_ReturnValue18, int32 ___int_Array_Index_Variable18, int32 ___int_Array_Index_Variable19, bool CallFunc__d1b7f5dc7b_ReturnValue19); // Function W_AIItemMenu.W_AIItemMenu_C.ExecuteUbergraph_W_AIItemMenu // None // @ game+0x26a108
};


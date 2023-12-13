// WidgetBlueprintGeneratedClass W_AIItemMenu.W_AIItemMenu_C
// Size: 0x1e50 (Inherited: 0x418)
struct UW_AIItemMenu_C : U*4bb82286ac {
	struct F*a6c93df757 UberGraphFrame; // 0x418(0x08)
	struct UVerticalBox* AIListBox; // 0x420(0x08)
	struct UButton* Button_37; // 0x428(0x08)
	struct UImage* DebugCrosshair; // 0x430(0x08)
	struct UButton* UseButton_124; // 0x438(0x08)
	struct UVerticalBox* VB_Ammo; // 0x440(0x08)
	struct UVerticalBox* VB_Armor; // 0x448(0x08)
	struct UVerticalBox* VB_Backpack; // 0x450(0x08)
	struct UVerticalBox* VB_Cosmetic; // 0x458(0x08)
	struct UVerticalBox* VB_Helm; // 0x460(0x08)
	struct UVerticalBox* VB_Lower; // 0x468(0x08)
	struct UVerticalBox* VB_Mag; // 0x470(0x08)
	struct UVerticalBox* VB_Meds; // 0x478(0x08)
	struct UVerticalBox* VB_Melee; // 0x480(0x08)
	struct UVerticalBox* VB_Muzzle; // 0x488(0x08)
	struct UVerticalBox* VB_Other; // 0x490(0x08)
	struct UVerticalBox* VB_Pistols; // 0x498(0x08)
	struct UVerticalBox* VB_Rifle; // 0x4a0(0x08)
	struct UVerticalBox* VB_Scopes; // 0x4a8(0x08)
	struct UVerticalBox* VB_Shotguns; // 0x4b0(0x08)
	struct UVerticalBox* VB_SMG; // 0x4b8(0x08)
	struct UVerticalBox* VB_Sniper; // 0x4c0(0x08)
	struct UVerticalBox* VB_Stock; // 0x4c8(0x08)
	struct UVerticalBox* VB_Thrown; // 0x4d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x4d8(0x08)
	struct TArray<struct FName> WeapClassArray_Pistol; // 0x4e0(0x10)
	struct TArray<struct FName> WeapClassArray_SMG; // 0x4f0(0x10)
	struct TArray<struct FName> WeapClassArray_Shotgun; // 0x500(0x10)
	struct TArray<struct FName> WeapClassArray_Rifle; // 0x510(0x10)
	struct TArray<struct FName> WeapClassArray_Sniper; // 0x520(0x10)
	struct TArray<struct FName> WeapClassArray_Other; // 0x530(0x10)
	struct F*23cea9d391 WeapButtonStyle; // 0x540(0x2a8)
	struct TArray<struct FName> AttachClassArray_Scopes; // 0x7e8(0x10)
	struct TArray<struct FName> AttachClassArray_Muzzle; // 0x7f8(0x10)
	struct TArray<struct FName> AttachClassArray_Mag; // 0x808(0x10)
	struct TArray<struct FName> AttachClassArray_Lower; // 0x818(0x10)
	struct TArray<struct FName> AttachClassArray_Stock; // 0x828(0x10)
	struct F*23cea9d391 AttachButtonStyle; // 0x838(0x2a8)
	struct TArray<struct FName> ArmorClassArray_Helm; // 0xae0(0x10)
	struct TArray<struct FName> ArmorClassArray_Armor; // 0xaf0(0x10)
	struct TArray<struct FName> ArmorClassArray_Backpack; // 0xb00(0x10)
	struct F*23cea9d391 ArmorButtonStyle; // 0xb10(0x2a8)
	struct TArray<struct FName> MedsClassArray_Meds; // 0xdb8(0x10)
	struct F*23cea9d391 MedsButtonStyle; // 0xdc8(0x2a8)
	struct TArray<struct FName> ThrownClassArray_Thrown; // 0x1070(0x10)
	struct F*23cea9d391 ThrownButtonStyle; // 0x1080(0x2a8)
	struct TArray<struct FName> CosmeticClassArray_Cosmetic; // 0x1328(0x10)
	struct F*23cea9d391 CosmeticButtonStyle; // 0x1338(0x2a8)
	struct APlayerPawn_v2_C* CharRef; // 0x15e0(0x08)
	int32 ActivePresetArray; // 0x15e8(0x04)
	char pad_15EC[0x4]; // 0x15ec(0x04)
	struct F*23cea9d391 PresetButtonStyle; // 0x15f0(0x2a8)
	struct TArray<struct FName> AmmoClassArray_Ammo; // 0x1898(0x10)
	struct F*23cea9d391 AmmoButtonStyle; // 0x18a8(0x2a8)
	struct TArray<struct FName> MeleeClassArray; // 0x1b50(0x10)
	struct F*23cea9d391 MeleeButtonStyle; // 0x1b60(0x2a8)
	bool bInUse; // 0x1e08(0x01)
	char pad_1E09[0x7]; // 0x1e09(0x07)
	struct UW_WeaponMenu_C* weaponMenu; // 0x1e10(0x08)
	int32 CacheAINum; // 0x1e18(0x04)
	char pad_1E1C[0x4]; // 0x1e1c(0x04)
	struct F*2ef3a887d0 AIListHandle; // 0x1e20(0x08)
	struct TArray<struct UObject*> aiNum; // 0x1e28(0x10)
	struct UW_AIButton_C* CacheAIBtn; // 0x1e38(0x08)
	struct TArray<struct UObject*> AICharacters; // 0x1e40(0x10)

	bool InitItemsData(); // Function W_AIItemMenu.W_AIItemMenu_C.InitItemsData // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	bool SetUseBtn(struct FSlateColor K2Node_MakeStruct_SlateColor3, struct FSlateBrush K2Node_MakeStruct_SlateBrush3, struct FSlateColor K2Node_MakeStruct_SlateColor4, struct F*23cea9d391 K2Node_MakeStruct__23cea9d391, struct FSlateBrush K2Node_MakeStruct_SlateBrush4, struct F*23cea9d391 K2Node_MakeStruct__23cea9d3912); // Function W_AIItemMenu.W_AIItemMenu_C.SetUseBtn // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent, struct FEventReply ReturnValue, struct FKey CallFunc_GetKey_ReturnValue, struct FEventReply K2Node_MakeStruct_EventReply, bool CallFunc_IsValid_ReturnValue); // Function W_AIItemMenu.W_AIItemMenu_C.OnKeyUp // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent, struct FEventReply ReturnValue, struct FKey CallFunc_GetKey_ReturnValue, struct FEventReply K2Node_MakeStruct_EventReply, bool CallFunc_IsValid_ReturnValue); // Function W_AIItemMenu.W_AIItemMenu_C.OnKeyDown // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void GiveItemToPlayer(struct FName InItem, struct ATslCharacter* CallFunc__f46fa81132_ReturnValue, struct APlayerPawn_v2_C* K2Node_DynamicCast_AsPlayer_Pawn_V_3, bool K2Node_DynamicCast_bSuccess); // Function W_AIItemMenu.W_AIItemMenu_C.GiveItemToPlayer // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void DoExit(struct APlayerController* CallFunc__8b5701c55f_ReturnValue); // Function W_AIItemMenu.W_AIItemMenu_C.DoExit // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Construct(); // Function W_AIItemMenu.W_AIItemMenu_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature(); // Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void Event Close(); // Function W_AIItemMenu.W_AIItemMenu_C.Event Close // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void CenterCursor(struct APlayerController* InPC); // Function W_AIItemMenu.W_AIItemMenu_C.CenterCursor // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature(); // Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void Destruct(); // Function W_AIItemMenu.W_AIItemMenu_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_W_AIItemMenu(int32 EntryPoint, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue2, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue3, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue4, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue5, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue6, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue7, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue8, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue9, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue10, int32 ___int_Array_Index_Variable, int32 ___int_Loop_Counter_Variable, int32 CallFunc__f53d173295_ReturnValue, int32 ___int_Array_Index_Variable2, int32 ___int_Loop_Counter_Variable2, int32 CallFunc__f53d173295_ReturnValue2, int32 ___int_Array_Index_Variable3, int32 ___int_Loop_Counter_Variable3, int32 CallFunc__f53d173295_ReturnValue3, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue11, int32 ___int_Loop_Counter_Variable4, int32 CallFunc__f53d173295_ReturnValue4, int32 ___int_Array_Index_Variable4, int32 ___int_Array_Index_Variable5, struct UW_AIWeaponButton_C* CallFunc_Create_ReturnValue12, int32 ___int_Loop_Counter_Variable5, int32 CallFunc__f53d173295_ReturnValue5, int32 ___int_Array_Index_Variable6, int32 CallFunc__34ad69eaa1_ReturnValue7, bool CallFunc__045254c93f_ReturnValue5, struct FName CallFunc_Array_Get_Item6, int32 CallFunc__34ad69eaa1_ReturnValue8, bool CallFunc__045254c93f_ReturnValue6, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue8, struct FName CallFunc_Array_Get_Item7, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue9, int32 CallFunc__34ad69eaa1_ReturnValue9, bool CallFunc__045254c93f_ReturnValue7, struct FName CallFunc_Array_Get_Item8, int32 CallFunc__34ad69eaa1_ReturnValue10, bool CallFunc__045254c93f_ReturnValue8, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue10, struct FName CallFunc_Array_Get_Item9, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue11, int32 CallFunc__34ad69eaa1_ReturnValue11, bool CallFunc__045254c93f_ReturnValue9, int32 ___int_Array_Index_Variable18, struct FName CallFunc_Array_Get_Item10, struct FName CallFunc_Array_Get_Item11, int32 CallFunc__34ad69eaa1_ReturnValue12, bool CallFunc__045254c93f_ReturnValue10, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue12, struct FName CallFunc_Array_Get_Item12, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue13, int32 CallFunc__34ad69eaa1_ReturnValue13, bool CallFunc__045254c93f_ReturnValue11, struct FName CallFunc_Array_Get_Item13, int32 CallFunc__34ad69eaa1_ReturnValue14, bool CallFunc__045254c93f_ReturnValue12, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue14, struct FName CallFunc_Array_Get_Item14, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue15, int32 CallFunc__34ad69eaa1_ReturnValue15, bool CallFunc__045254c93f_ReturnValue13, struct FName CallFunc_Array_Get_Item15, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue16, int32 CallFunc__34ad69eaa1_ReturnValue16, bool CallFunc__045254c93f_ReturnValue14, struct FName CallFunc_Array_Get_Item16, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue17, int32 CallFunc__34ad69eaa1_ReturnValue17, bool CallFunc__045254c93f_ReturnValue15, struct FName CallFunc_Array_Get_Item17, int32 CallFunc__34ad69eaa1_ReturnValue18, bool CallFunc__045254c93f_ReturnValue16, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue18, struct FName CallFunc_Array_Get_Item18, int32 CallFunc__34ad69eaa1_ReturnValue19, bool CallFunc__045254c93f_ReturnValue17, struct U*a75544a5ae* CallFunc_AddChildToVerticalBox_ReturnValue19, struct APlayerController* K2Node_CustomEvent_InPC, struct FVector2D CallFunc__337748a8a4_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc__ace9454687_ReturnValue, float CallFunc__ace9454687_ReturnValue2, int32 CallFunc__6c968ff326_ReturnValue, int32 CallFunc__6c968ff326_ReturnValue2, int32 ___int_Array_Index_Variable19, int32 ___int_Loop_Counter_Variable18, int32 ___int_Loop_Counter_Variable19); // Function W_AIItemMenu.W_AIItemMenu_C.ExecuteUbergraph_W_AIItemMenu //  // @ game+0x20a5d0
};


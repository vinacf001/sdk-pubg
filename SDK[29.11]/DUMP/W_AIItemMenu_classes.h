// WidgetBlueprintGeneratedClass W_AIItemMenu.W_AIItemMenu_C
// Size: 0x1e50 (Inherited: 0x418)
struct UW_AIItemMenu_C : U*eb79fdee2a {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x418(0x08)
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
	struct F*9ec348ba05 WeapButtonStyle; // 0x540(0x2a8)
	struct TArray<struct FName> AttachClassArray_Scopes; // 0x7e8(0x10)
	struct TArray<struct FName> AttachClassArray_Muzzle; // 0x7f8(0x10)
	struct TArray<struct FName> AttachClassArray_Mag; // 0x808(0x10)
	struct TArray<struct FName> AttachClassArray_Lower; // 0x818(0x10)
	struct TArray<struct FName> AttachClassArray_Stock; // 0x828(0x10)
	struct F*9ec348ba05 AttachButtonStyle; // 0x838(0x2a8)
	struct TArray<struct FName> ArmorClassArray_Helm; // 0xae0(0x10)
	struct TArray<struct FName> ArmorClassArray_Armor; // 0xaf0(0x10)
	struct TArray<struct FName> ArmorClassArray_Backpack; // 0xb00(0x10)
	struct F*9ec348ba05 ArmorButtonStyle; // 0xb10(0x2a8)
	struct TArray<struct FName> MedsClassArray_Meds; // 0xdb8(0x10)
	struct F*9ec348ba05 MedsButtonStyle; // 0xdc8(0x2a8)
	struct TArray<struct FName> ThrownClassArray_Thrown; // 0x1070(0x10)
	struct F*9ec348ba05 ThrownButtonStyle; // 0x1080(0x2a8)
	struct TArray<struct FName> CosmeticClassArray_Cosmetic; // 0x1328(0x10)
	struct F*9ec348ba05 CosmeticButtonStyle; // 0x1338(0x2a8)
	struct APlayerPawn_v2_C* CharRef; // 0x15e0(0x08)
	int32 ActivePresetArray; // 0x15e8(0x04)
	char pad_15EC[0x4]; // 0x15ec(0x04)
	struct F*9ec348ba05 PresetButtonStyle; // 0x15f0(0x2a8)
	struct TArray<struct FName> AmmoClassArray_Ammo; // 0x1898(0x10)
	struct F*9ec348ba05 AmmoButtonStyle; // 0x18a8(0x2a8)
	struct TArray<struct FName> MeleeClassArray; // 0x1b50(0x10)
	struct F*9ec348ba05 MeleeButtonStyle; // 0x1b60(0x2a8)
	bool bInUse; // 0x1e08(0x01)
	char pad_1E09[0x7]; // 0x1e09(0x07)
	struct UW_WeaponMenu_C* weaponMenu; // 0x1e10(0x08)
	int32 CacheAINum; // 0x1e18(0x04)
	char pad_1E1C[0x4]; // 0x1e1c(0x04)
	struct F*b2f5f3e08e AIListHandle; // 0x1e20(0x08)
	struct TArray<struct ATslNewBotCharacter*> aiNum; // 0x1e28(0x10)
	struct UW_AIButton_C* CacheAIBtn; // 0x1e38(0x08)
	struct TArray<struct ATslNewBotCharacter*> AICharacters; // 0x1e40(0x10)

	bool InitItemsData(); // Function W_AIItemMenu.W_AIItemMenu_C.InitItemsData // Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	struct U*d2f00ac7d1* InitAIList(); // Function W_AIItemMenu.W_AIItemMenu_C.InitAIList // Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	struct F*9ec348ba05 SetUseBtn(); // Function W_AIItemMenu.W_AIItemMenu_C.SetUseBtn // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	bool OnKeyUp(); // Function W_AIItemMenu.W_AIItemMenu_C.OnKeyUp // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	bool OnKeyDown(); // Function W_AIItemMenu.W_AIItemMenu_C.OnKeyDown // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	bool GiveItemToPlayer(); // Function W_AIItemMenu.W_AIItemMenu_C.GiveItemToPlayer // Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	struct APlayerController* DoExit(); // Function W_AIItemMenu.W_AIItemMenu_C.DoExit // Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void Construct(); // Function W_AIItemMenu.W_AIItemMenu_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	void BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature(); // Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1dcd78
	void Event Close(); // Function W_AIItemMenu.W_AIItemMenu_C.Event Close // BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	struct APlayerController* CenterCursor(); // Function W_AIItemMenu.W_AIItemMenu_C.CenterCursor // BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature(); // Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1dcd78
	void Destruct(); // Function W_AIItemMenu.W_AIItemMenu_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct F*b2f5f3e08e ExecuteUbergraph_W_AIItemMenu(); // Function W_AIItemMenu.W_AIItemMenu_C.ExecuteUbergraph_W_AIItemMenu // HasDefaults // @ game+0x1dcd78
};


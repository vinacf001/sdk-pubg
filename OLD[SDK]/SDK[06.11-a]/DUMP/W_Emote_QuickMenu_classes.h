// WidgetBlueprintGeneratedClass W_Emote_QuickMenu.W_Emote_QuickMenu_C
// Size: 0x310 (Inherited: 0x258)
struct UW_Emote_QuickMenu_C : UUserWidget {
	struct F*a6c93df757 UberGraphFrame; // 0x258(0x08)
	struct UButton* B_DOWN_Category; // 0x260(0x08)
	struct UButton* B_Right_Category; // 0x268(0x08)
	struct UButton* B_UP_Category; // 0x270(0x08)
	struct UCanvasPanel* CP_Down; // 0x278(0x08)
	struct UBorder* CP_Down_Border; // 0x280(0x08)
	struct UCanvasPanel* CP_DownContainer; // 0x288(0x08)
	struct UCanvasPanel* CP_Right; // 0x290(0x08)
	struct UBorder* CP_Right_Border; // 0x298(0x08)
	struct UCanvasPanel* CP_RightContainer; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Up; // 0x2a8(0x08)
	struct UBorder* CP_UP_Border; // 0x2b0(0x08)
	struct UCanvasPanel* CP_UpContainer; // 0x2b8(0x08)
	struct UBorder* EmoteToolTip; // 0x2c0(0x08)
	struct UTextBlock* EmoteTooltipText; // 0x2c8(0x08)
	struct TArray<struct UW_EmoteButton2_C*> EmoteWidgetArray; // 0x2d0(0x10)
	struct TArray<struct FName> EmoteNameArray; // 0x2e0(0x10)
	struct TArray<int32> row; // 0x2f0(0x10)
	float RowOffsetGlobal; // 0x300(0x04)
	float ColumOffsetGlobal; // 0x304(0x04)
	struct UW_WeaponMenu_C* ParentWeaponMenu; // 0x308(0x08)

	void ShowContainer(struct UCanvasPanel* InCP); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowContainer // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct UTexture2D* PopulateDown(float RowOffset_Local, struct U*efa881b15f* CallFunc__20b76359ee_ReturnValue, bool ___bool_True_if_break_was_hit_Variable, int32 ___int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateDown // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ShowQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowQuickMenu // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void HideQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.HideQuickMenu // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	int32 RecalcOpacity(int32 ___int_Loop_Counter_Variable, int32 CallFunc__f53d173295_ReturnValue, struct UW_EmoteButton2_C* CallFunc_Array_Get_Item, int32 CallFunc__34ad69eaa1_ReturnValue); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.RecalcOpacity // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FVector2D PopulateContainer(int32 MaxWidgetCount, int32 MinEmoteIndex, int32 MaxEmoteIndex, struct UCanvasPanel* CP_Ref, bool bSwitchXY, struct UCanvasPanel* NewLocalVar_1, float ColOffset_Local, float RowOffset_Local, int32 ___int_Array_Index_Variable, bool CallFunc__045254c93f_ReturnValue, bool CallFunc__b69b4c5064_ReturnValue, bool CallFunc_BooleanAND_ReturnValue); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateContainer // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Construct(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	void BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void OnMouseLeave(struct F*20816e90ed MouseEvent); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x370fbc
	void BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void Menu Close(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Menu Close // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void ExecuteUbergraph_W_Emote_QuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ExecuteUbergraph_W_Emote_QuickMenu // HasDefaults // @ game+0x370fbc
};


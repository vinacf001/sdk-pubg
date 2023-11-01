// WidgetBlueprintGeneratedClass W_Emote_QuickMenu.W_Emote_QuickMenu_C
// Size: 0x308 (Inherited: 0x250)
struct UW_Emote_QuickMenu_C : UUserWidget {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x250(0x08)
	struct UButton* B_DOWN_Category[0x08]; // 0x258(0x08)
	struct UButton* B_Right_Category[0x08]; // 0x260(0x08)
	struct UButton* B_UP_Category[0x08]; // 0x268(0x08)
	struct UCanvasPanel* CP_Down[0x08]; // 0x270(0x08)
	struct UBorder* CP_Down_Border[0x08]; // 0x278(0x08)
	struct UCanvasPanel* CP_DownContainer[0x08]; // 0x280(0x08)
	struct UCanvasPanel* CP_Right[0x08]; // 0x288(0x08)
	struct UBorder* CP_Right_Border[0x08]; // 0x290(0x08)
	struct UCanvasPanel* CP_RightContainer[0x08]; // 0x298(0x08)
	struct UCanvasPanel* CP_Up[0x08]; // 0x2a0(0x08)
	struct UBorder* CP_UP_Border[0x08]; // 0x2a8(0x08)
	struct UCanvasPanel* CP_UpContainer[0x08]; // 0x2b0(0x08)
	struct UBorder* EmoteToolTip[0x08]; // 0x2b8(0x08)
	struct UTextBlock* EmoteTooltipText[0x08]; // 0x2c0(0x08)
	struct TArray<struct UW_EmoteButton2_C*> EmoteWidgetArray[0x10]; // 0x2c8(0x10)
	struct TArray<struct FName> EmoteNameArray[0x10]; // 0x2d8(0x10)
	struct TArray<int32> row[0x10]; // 0x2e8(0x10)
	float RowOffsetGlobal[0x04]; // 0x2f8(0x04)
	float ColumOffsetGlobal[0x04]; // 0x2fc(0x04)
	struct UW_WeaponMenu_C* ParentWeaponMenu[0x08]; // 0x300(0x08)

	void ShowContainer(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowContainer // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	int32 PopulateDown(int32* MinIndex, struct UW_EmoteButton2_C** CallFunc_Create_ReturnValue, bool ___bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc__249bb33a55_ReturnValue, float* CallFunc__449286a277_ReturnValue, struct FAnchors* K2Node_MakeStruct_Anchors, struct FLinearColor* ___struct_Variable, bool CallFunc__249bb33a55_ReturnValue2, struct FText* CallFunc__eac0e0be02_ReturnValue); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateDown // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ShowQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowQuickMenu // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void HideQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.HideQuickMenu // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	int32 RecalcOpacity(int32* Col, struct FText* TooltipEmoteName); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.RecalcOpacity // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	float PopulateContainer(struct FLinearColor* ButtonLC, struct FVector2D* InAnchorMax, bool bSwitchXY, float* ColOffset_Local, struct U*6ca2ab22f3** CallFunc__6f0e1f8bfb_ReturnValue, int32* ___int_Array_Index_Variable, int32* CallFunc_FMod_ReturnValue, int32* CallFunc_Round_ReturnValue, int32* CallFunc__89a711fd53_ReturnValue, float* CallFunc__99c846894a_ReturnValue3, float* CallFunc__f907b55d86_ReturnValue, float* K2Node_Select_Default, int32* CallFunc__edb1454eaf_ReturnValue, struct FText* CallFunc__eac0e0be02_ReturnValue); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateContainer // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void OnMouseLeave(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void Menu Close(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Menu Close // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	struct F*174cd056c7 ExecuteUbergraph_W_Emote_QuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ExecuteUbergraph_W_Emote_QuickMenu // HasDefaults // @ game+0x2cd4ac
};


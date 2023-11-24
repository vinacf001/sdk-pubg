// WidgetBlueprintGeneratedClass W_Emote_QuickMenu.W_Emote_QuickMenu_C
// Size: 0x308 (Inherited: 0x250)
struct UW_Emote_QuickMenu_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x250(0x08)
	struct UButton* B_DOWN_Category; // 0x258(0x08)
	struct UButton* B_Right_Category; // 0x260(0x08)
	struct UButton* B_UP_Category; // 0x268(0x08)
	struct UCanvasPanel* CP_Down; // 0x270(0x08)
	struct UBorder* CP_Down_Border; // 0x278(0x08)
	struct UCanvasPanel* CP_DownContainer; // 0x280(0x08)
	struct UCanvasPanel* CP_Right; // 0x288(0x08)
	struct UBorder* CP_Right_Border; // 0x290(0x08)
	struct UCanvasPanel* CP_RightContainer; // 0x298(0x08)
	struct UCanvasPanel* CP_Up; // 0x2a0(0x08)
	struct UBorder* CP_UP_Border; // 0x2a8(0x08)
	struct UCanvasPanel* CP_UpContainer; // 0x2b0(0x08)
	struct UBorder* EmoteToolTip; // 0x2b8(0x08)
	struct UTextBlock* EmoteTooltipText; // 0x2c0(0x08)
	struct TArray<struct UW_EmoteButton2_C*> EmoteWidgetArray; // 0x2c8(0x10)
	struct TArray<struct FName> EmoteNameArray; // 0x2d8(0x10)
	struct TArray<int32> row; // 0x2e8(0x10)
	float RowOffsetGlobal; // 0x2f8(0x04)
	float ColumOffsetGlobal; // 0x2fc(0x04)
	struct UW_WeaponMenu_C* ParentWeaponMenu; // 0x300(0x08)

	void ShowContainer(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowContainer // None // @ game+0x26a108
	struct FVector2D PopulateDown(float RowOffset_Local, int32 MinIndex, struct UW_EmoteButton2_C* CallFunc_Create_ReturnValue, bool ___bool_True_if_break_was_hit_Variable, float CallFunc__b8cad62f4a_ReturnValue2, int32 CallFunc__2f7c7a233f_ReturnValue, bool CallFunc__d1b7f5dc7b_ReturnValue, float CallFunc__ae60dcbe74_ReturnValue, int32 CallFunc__c60d779ed0_ReturnValue, bool CallFunc__d1b7f5dc7b_ReturnValue2, struct FText CallFunc__255364b633_ReturnValue); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateDown // None // @ game+0x26a108
	void ShowQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowQuickMenu // None // @ game+0x26a108
	void HideQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.HideQuickMenu // None // @ game+0x26a108
	int32 RecalcOpacity(int32 Col); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.RecalcOpacity // None // @ game+0x26a108
	struct UTexture2D* PopulateContainer(float RowOffset, int32 MaxWidgetCount, int32 MaxEmoteIndex, struct FLinearColor ButtonLC, struct FVector2D InAnchorMax, bool CallFunc_BooleanAND_ReturnValue, int32 ___int_Loop_Counter_Variable, int32 CallFunc__10b0236ab6_ReturnValue2, float CallFunc_FMod_Remainder, bool CallFunc__7e2403ed42_ReturnValue, float CallFunc__ae60dcbe74_ReturnValue, bool ___bool_Variable2, float K2Node_Select2_Default); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateContainer // None // @ game+0x26a108
	void Construct(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Construct // None // @ game+0x26a108
	void BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature // None // @ game+0x26a108
	void OnMouseLeave(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.OnMouseLeave // None // @ game+0x26a108
	void BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature // None // @ game+0x26a108
	void Menu Close(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Menu Close // None // @ game+0x26a108
	void BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature // None // @ game+0x26a108
	void ExecuteUbergraph_W_Emote_QuickMenu(int32 EntryPoint); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ExecuteUbergraph_W_Emote_QuickMenu // None // @ game+0x26a108
};


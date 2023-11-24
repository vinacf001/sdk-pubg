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

	void ShowContainer(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowContainer // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FText PopulateDown(int32 MaxIndex, int32 LocalCounter, int32 CallFunc_FMod_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc__b8cad62f4a_ReturnValue3, struct TArray<struct FName> CallFunc__a20e04bc6f_ReturnValue, struct FName CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue2); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateDown // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ShowQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowQuickMenu // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void HideQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.HideQuickMenu // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	int32 RecalcOpacity(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.RecalcOpacity // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float PopulateContainer(float ColOffset, int32 MinEmoteIndex, struct UCanvasPanel* CP_Ref, struct FVector2D InAnchorMin, int32 ___int_Array_Index_Variable, bool CallFunc__e33209deeb_ReturnValue, int32 CallFunc__2f7c7a233f_ReturnValue, float CallFunc__b8cad62f4a_ReturnValue3, struct TArray<struct FName> CallFunc__a20e04bc6f_ReturnValue, struct FName CallFunc_Array_Get_Item, bool CallFunc__d1b7f5dc7b_ReturnValue2); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateContainer // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void OnMouseLeave(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void Menu Close(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Menu Close // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	struct F*387a87ac65 ExecuteUbergraph_W_Emote_QuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ExecuteUbergraph_W_Emote_QuickMenu // HasDefaults // @ game+0x1e037c
};


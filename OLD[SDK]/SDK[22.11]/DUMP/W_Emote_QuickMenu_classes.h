// WidgetBlueprintGeneratedClass W_Emote_QuickMenu.W_Emote_QuickMenu_C
// Size: 0x308 (Inherited: 0x250)
struct UW_Emote_QuickMenu_C : UUserWidget {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x250(0x08)
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

	void ShowContainer(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowContainer // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	float PopulateDown(float RowOffset_Local, int32 MinIndex, struct UW_EmoteButton2_C* CallFunc_Create_ReturnValue, float CallFunc_FMod_Remainder, float CallFunc__2a6761ce24_ReturnValue2, int32 CallFunc__7762cea2d7_ReturnValue, bool CallFunc__2bff9823d8_ReturnValue, float CallFunc__aa1f1a3bef_ReturnValue, struct FVector2D CallFunc_MakeVector2D_ReturnValue, int32 CallFunc__0bad7adb6e_ReturnValue, bool CallFunc__2bff9823d8_ReturnValue2, struct FText CallFunc__4417c00b23_ReturnValue); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateDown // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ShowQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowQuickMenu // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void HideQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.HideQuickMenu // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct UW_EmoteButton2_C* RecalcOpacity(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.RecalcOpacity // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FName PopulateContainer(float RowOffset, int32 MaxEmoteIndex, struct FLinearColor ButtonLC, struct FVector2D InAnchorMax, int32 ___int_Array_Index_Variable, bool CallFunc__c9bd2140c2_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc__7762cea2d7_ReturnValue, float CallFunc__2a6761ce24_ReturnValue3, struct FAnchors K2Node_MakeStruct_Anchors, bool CallFunc__8334780abc_ReturnValue, float CallFunc__aa1f1a3bef_ReturnValue, bool CallFunc__2bff9823d8_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, float K2Node_Select2_Default); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateContainer // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void Construct(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x32e590
	void BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void OnMouseLeave(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x32e590
	void BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void Menu Close(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Menu Close // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	struct F*a3e4749da2 ExecuteUbergraph_W_Emote_QuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ExecuteUbergraph_W_Emote_QuickMenu // HasDefaults // @ game+0x32e590
};


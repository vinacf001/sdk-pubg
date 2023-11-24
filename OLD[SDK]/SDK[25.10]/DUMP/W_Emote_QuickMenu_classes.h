// WidgetBlueprintGeneratedClass W_Emote_QuickMenu.W_Emote_QuickMenu_C
// Size: 0x310 (Inherited: 0x258)
struct UW_Emote_QuickMenu_C : UUserWidget {
	struct F*abc8f374e0 UberGraphFrame; // 0x258(0x08)
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

	struct UCanvasPanel* ShowContainer(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowContainer // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct UTexture2D* PopulateDown(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateDown // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ShowQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowQuickMenu // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void HideQuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.HideQuickMenu // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool RecalcOpacity(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.RecalcOpacity // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FVector2D PopulateContainer(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateContainer // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void Construct(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x2ad9d8
	struct F*174cd056c7 OnMouseLeave(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2ad9d8
	void BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x2ad9d8
	void Menu Close(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Menu Close // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x2ad9d8
	bool ExecuteUbergraph_W_Emote_QuickMenu(); // Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ExecuteUbergraph_W_Emote_QuickMenu // HasDefaults // @ game+0x2ad9d8
};


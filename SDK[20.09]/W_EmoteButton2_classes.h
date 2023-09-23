// WidgetBlueprintGeneratedClass W_EmoteButton2.W_EmoteButton2_C
// Size: 0x2c0 (Inherited: 0x250)
struct UW_EmoteButton2_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x250(0x08)
	struct UBorder* Border_4; // 0x258(0x08)
	struct UButton* Button_1; // 0x260(0x08)
	struct UImage* EmoteImage; // 0x268(0x08)
	struct UTextBlock* EmoteName; // 0x270(0x08)
	struct UTexture2D* ImageRef; // 0x278(0x08)
	struct FText LocalizedName; // 0x280(0x18)
	struct FName EmoteNameRef; // 0x298(0x08)
	struct UW_Emote_QuickMenu_C* Parent; // 0x2a0(0x08)
	int32 RowIndex; // 0x2a8(0x04)
	int32 ColIndex; // 0x2ac(0x04)
	struct FLinearColor ButtonLinearColor; // 0x2b0(0x10)

	struct U*a08fc6dc58* RecalcOpacity(int32 CallFunc__10b0236ab6_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc__b879ad582d_ReturnValue2); // Function W_EmoteButton2.W_EmoteButton2_C.RecalcOpacity // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function W_EmoteButton2.W_EmoteButton2_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature(); // Function W_EmoteButton2.W_EmoteButton2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature(); // Function W_EmoteButton2.W_EmoteButton2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void ExecuteUbergraph_W_EmoteButton2(int32 EntryPoint, struct ATslCharacter* CallFunc__eb251d0969_ReturnValue); // Function W_EmoteButton2.W_EmoteButton2_C.ExecuteUbergraph_W_EmoteButton2 //  // @ game+0x1e037c
};


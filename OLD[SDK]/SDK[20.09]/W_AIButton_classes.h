// WidgetBlueprintGeneratedClass W_AIButton.W_AIButton_C
// Size: 0x520 (Inherited: 0x250)
struct UW_AIButton_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x250(0x08)
	struct UButton* ButtonGive; // 0x258(0x08)
	struct UTextBlock* Text_Name; // 0x260(0x08)
	struct FName AIName; // 0x268(0x08)
	struct F*d5cdd95f37 ButtonStyle; // 0x270(0x2a8)
	struct UW_AIItemMenu_C* Menu; // 0x518(0x08)

	bool SetTargetAI(int32 ___int_Array_Index_Variable, int32 ___int_Loop_Counter_Variable, struct TArray<struct ATslNewBotCharacter*> CallFunc_GetAllActorsOfClass_OutActors); // Function W_AIButton.W_AIButton_C.SetTargetAI // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FSlateBrush SetBtnStyle(struct FSlateColor K2Node_MakeStruct_SlateColor, struct FSlateBrush K2Node_MakeStruct_SlateBrush, struct FSlateColor K2Node_MakeStruct_SlateColor3); // Function W_AIButton.W_AIButton_C.SetBtnStyle // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function W_AIButton.W_AIButton_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_AIButton.W_AIButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void ExecuteUbergraph_W_AIButton(); // Function W_AIButton.W_AIButton_C.ExecuteUbergraph_W_AIButton // HasDefaults // @ game+0x1e037c
};


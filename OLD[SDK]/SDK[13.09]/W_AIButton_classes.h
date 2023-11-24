// WidgetBlueprintGeneratedClass W_AIButton.W_AIButton_C
// Size: 0x520 (Inherited: 0x250)
struct UW_AIButton_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x250(0x08)
	struct UButton* ButtonGive; // 0x258(0x08)
	struct UTextBlock* Text_Name; // 0x260(0x08)
	struct FName AIName; // 0x268(0x08)
	struct F*d5cdd95f37 ButtonStyle; // 0x270(0x2a8)
	struct UW_AIItemMenu_C* Menu; // 0x518(0x08)

	int32 SetTargetAI(int32 ___int_Array_Index_Variable, int32 ___int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue); // Function W_AIButton.W_AIButton_C.SetTargetAI // None // @ game+0x26a108
	struct FSlateBrush SetBtnStyle(struct FSlateColor K2Node_MakeStruct_SlateColor2); // Function W_AIButton.W_AIButton_C.SetBtnStyle // None // @ game+0x26a108
	void Construct(); // Function W_AIButton.W_AIButton_C.Construct // None // @ game+0x26a108
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_AIButton.W_AIButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void ExecuteUbergraph_W_AIButton(); // Function W_AIButton.W_AIButton_C.ExecuteUbergraph_W_AIButton // None // @ game+0x26a108
};


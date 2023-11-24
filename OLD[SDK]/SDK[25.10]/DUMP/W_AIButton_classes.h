// WidgetBlueprintGeneratedClass W_AIButton.W_AIButton_C
// Size: 0x528 (Inherited: 0x258)
struct UW_AIButton_C : UUserWidget {
	struct F*abc8f374e0 UberGraphFrame; // 0x258(0x08)
	struct UButton* ButtonGive; // 0x260(0x08)
	struct UTextBlock* Text_Name; // 0x268(0x08)
	struct FName AIName; // 0x270(0x08)
	struct F*7bb05e3554 ButtonStyle; // 0x278(0x2a8)
	struct UW_AIItemMenu_C* Menu; // 0x520(0x08)

	bool SetTargetAI(); // Function W_AIButton.W_AIButton_C.SetTargetAI // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct F*7bb05e3554 SetBtnStyle(); // Function W_AIButton.W_AIButton_C.SetBtnStyle // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void Construct(); // Function W_AIButton.W_AIButton_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_AIButton.W_AIButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2ad9d8
	struct FText ExecuteUbergraph_W_AIButton(); // Function W_AIButton.W_AIButton_C.ExecuteUbergraph_W_AIButton // HasDefaults // @ game+0x2ad9d8
};


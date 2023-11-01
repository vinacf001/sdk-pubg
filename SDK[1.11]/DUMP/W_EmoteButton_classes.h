// WidgetBlueprintGeneratedClass W_EmoteButton.W_EmoteButton_C
// Size: 0x2a0 (Inherited: 0x250)
struct UW_EmoteButton_C : UUserWidget {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x250(0x08)
	struct UButton* Button_1[0x08]; // 0x258(0x08)
	struct UImage* EmoteImage[0x08]; // 0x260(0x08)
	struct UTextBlock* EmoteName[0x08]; // 0x268(0x08)
	struct UTexture2D* ImageRef[0x08]; // 0x270(0x08)
	struct FText LocalizedName[0x18]; // 0x278(0x18)
	struct FName EmoteNameRef[0x08]; // 0x290(0x08)
	struct UW_WeaponMenu_C* Parent[0x08]; // 0x298(0x08)

	void Construct(); // Function W_EmoteButton.W_EmoteButton_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature(); // Function W_EmoteButton.W_EmoteButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	struct ATslCharacter* ExecuteUbergraph_W_EmoteButton(int32* EntryPoint); // Function W_EmoteButton.W_EmoteButton_C.ExecuteUbergraph_W_EmoteButton //  // @ game+0x2cd4ac
};


// WidgetBlueprintGeneratedClass W_WeaponButton.W_WeaponButton_C
// Size: 0x528 (Inherited: 0x250)
struct UW_WeaponButton_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x250(0x08)
	struct UButton* ButtonGive; // 0x258(0x08)
	struct UTextBlock* Text_Name; // 0x260(0x08)
	struct FName ItemID; // 0x268(0x08)
	struct F*8203a30396 ClassVar; // 0x270(0x08)
	struct F*d5cdd95f37 ButtonStyle; // 0x278(0x2a8)
	struct UW_WeaponMenu_C* MenuRef; // 0x520(0x08)

	void Construct(); // Function W_WeaponButton.W_WeaponButton_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponButton.W_WeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	bool ExecuteUbergraph_W_WeaponButton(); // Function W_WeaponButton.W_WeaponButton_C.ExecuteUbergraph_W_WeaponButton // HasDefaults // @ game+0x1e037c
};


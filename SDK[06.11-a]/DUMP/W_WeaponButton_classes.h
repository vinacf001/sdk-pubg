// WidgetBlueprintGeneratedClass W_WeaponButton.W_WeaponButton_C
// Size: 0x530 (Inherited: 0x258)
struct UW_WeaponButton_C : UUserWidget {
	struct F*a6c93df757 UberGraphFrame; // 0x258(0x08)
	struct UButton* ButtonGive; // 0x260(0x08)
	struct UTextBlock* Text_Name; // 0x268(0x08)
	struct FName ItemID; // 0x270(0x08)
	struct F*ab0db8ae6e ClassVar; // 0x278(0x08)
	struct F*23cea9d391 ButtonStyle; // 0x280(0x2a8)
	struct UW_WeaponMenu_C* MenuRef; // 0x528(0x08)

	void Construct(); // Function W_WeaponButton.W_WeaponButton_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponButton.W_WeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void ExecuteUbergraph_W_WeaponButton(int32 EntryPoint, struct FText CallFunc__af607d7cee_ReturnValue, bool CallFunc_IsSavePresetMode_NewParam); // Function W_WeaponButton.W_WeaponButton_C.ExecuteUbergraph_W_WeaponButton // HasDefaults // @ game+0x370fbc
};


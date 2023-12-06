// WidgetBlueprintGeneratedClass W_AIWeaponButton.W_AIWeaponButton_C
// Size: 0x530 (Inherited: 0x258)
struct UW_AIWeaponButton_C : UUserWidget {
	struct F*a6c93df757 UberGraphFrame; // 0x258(0x08)
	struct UButton* ButtonGive; // 0x260(0x08)
	struct UTextBlock* Text_Name; // 0x268(0x08)
	struct FName ItemID; // 0x270(0x08)
	struct F*23cea9d391 ButtonStyle; // 0x278(0x2a8)
	struct UW_AIItemMenu_C* MenuRef; // 0x520(0x08)
	enum class ECastableItemType medType; // 0x528(0x01)
	char pad_529[0x3]; // 0x529(0x03)
	int32 WeaponIndex; // 0x52c(0x04)

	void SetMedType(struct FString medTypeStr, enum class ECastableItemType medType); // Function W_AIWeaponButton.W_AIWeaponButton_C.SetMedType // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Construct(); // Function W_AIWeaponButton.W_AIWeaponButton_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_AIWeaponButton.W_AIWeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void ExecuteUbergraph_W_AIWeaponButton(int32 EntryPoint, struct FText CallFunc__af607d7cee_ReturnValue); // Function W_AIWeaponButton.W_AIWeaponButton_C.ExecuteUbergraph_W_AIWeaponButton // HasDefaults // @ game+0x370fbc
};


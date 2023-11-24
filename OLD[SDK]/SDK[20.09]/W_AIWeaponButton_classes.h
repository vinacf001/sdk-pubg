// WidgetBlueprintGeneratedClass W_AIWeaponButton.W_AIWeaponButton_C
// Size: 0x528 (Inherited: 0x250)
struct UW_AIWeaponButton_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x250(0x08)
	struct UButton* ButtonGive; // 0x258(0x08)
	struct UTextBlock* Text_Name; // 0x260(0x08)
	struct FName ItemID; // 0x268(0x08)
	struct F*d5cdd95f37 ButtonStyle; // 0x270(0x2a8)
	struct UW_AIItemMenu_C* MenuRef; // 0x518(0x08)
	enum class ECastableItemType MedType; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	int32 WeaponIndex; // 0x524(0x04)

	int32 GiveWeaponAmmo(struct TArray<struct ATslNewBotCharacter*> aiCharacter, int32 CallFunc__c60d779ed0_ReturnValue, int32 ___int_Loop_Counter_Variable, struct UWeaponProcessorComponent* CallFunc__b9c2289605_ReturnValue); // Function W_AIWeaponButton.W_AIWeaponButton_C.GiveWeaponAmmo // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void SetMedType(enum class ECastableItemType MedType); // Function W_AIWeaponButton.W_AIWeaponButton_C.SetMedType // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool AITakeMed(); // Function W_AIWeaponButton.W_AIWeaponButton_C.AITakeMed // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function W_AIWeaponButton.W_AIWeaponButton_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_AIWeaponButton.W_AIWeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	struct APlayerPawn_v2_C* ExecuteUbergraph_W_AIWeaponButton(); // Function W_AIWeaponButton.W_AIWeaponButton_C.ExecuteUbergraph_W_AIWeaponButton // HasDefaults // @ game+0x1e037c
};


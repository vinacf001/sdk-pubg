// WidgetBlueprintGeneratedClass W_AIWeaponButton.W_AIWeaponButton_C
// Size: 0x528 (Inherited: 0x250)
struct UW_AIWeaponButton_C : UUserWidget {
	struct F*abc8f374e0 UberGraphFrame; // 0x250(0x08)
	struct UButton* ButtonGive; // 0x258(0x08)
	struct UTextBlock* Text_Name; // 0x260(0x08)
	struct FName ItemID; // 0x268(0x08)
	struct F*7bb05e3554 ButtonStyle; // 0x270(0x2a8)
	struct UW_AIItemMenu_C* MenuRef; // 0x518(0x08)
	enum class ECastableItemType MedType; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	int32 WeaponIndex; // 0x524(0x04)

	int32 GiveWeaponAmmo(struct TArray<struct ATslNewBotCharacter*> aiCharacter, int32 CallFunc__edb1454eaf_ReturnValue); // Function W_AIWeaponButton.W_AIWeaponButton_C.GiveWeaponAmmo // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetMedType(); // Function W_AIWeaponButton.W_AIWeaponButton_C.SetMedType // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool AITakeMed(struct ATslCharacter* CallFunc__0b57f472b5_ReturnValue, bool K2Node_DynamicCast_bSuccess); // Function W_AIWeaponButton.W_AIWeaponButton_C.AITakeMed // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function W_AIWeaponButton.W_AIWeaponButton_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_AIWeaponButton.W_AIWeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void ExecuteUbergraph_W_AIWeaponButton(struct ATslCharacter* CallFunc__0b57f472b5_ReturnValue, struct APlayerPawn_v2_C* K2Node_DynamicCast_AsPlayer_Pawn_V_3); // Function W_AIWeaponButton.W_AIWeaponButton_C.ExecuteUbergraph_W_AIWeaponButton // HasDefaults // @ game+0x2cd4ac
};


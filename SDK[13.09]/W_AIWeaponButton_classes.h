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

	struct ATslNewBotCharacter* GiveWeaponAmmo(bool CallFunc__d1b7f5dc7b_ReturnValue, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun, int32 CallFunc__10b0236ab6_ReturnValue); // Function W_AIWeaponButton.W_AIWeaponButton_C.GiveWeaponAmmo // None // @ game+0x26a108
	struct FString SetMedType(); // Function W_AIWeaponButton.W_AIWeaponButton_C.SetMedType // None // @ game+0x26a108
	bool AITakeMed(struct APlayerPawn_v2_C* K2Node_DynamicCast_AsPlayer_Pawn_V_3, struct FString CallFunc__5b293e83ab_ReturnValue); // Function W_AIWeaponButton.W_AIWeaponButton_C.AITakeMed // None // @ game+0x26a108
	void Construct(); // Function W_AIWeaponButton.W_AIWeaponButton_C.Construct // None // @ game+0x26a108
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_AIWeaponButton.W_AIWeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void ExecuteUbergraph_W_AIWeaponButton(struct ATslCharacter* CallFunc__eb251d0969_ReturnValue, struct APlayerPawn_v2_C* K2Node_DynamicCast_AsPlayer_Pawn_V_3); // Function W_AIWeaponButton.W_AIWeaponButton_C.ExecuteUbergraph_W_AIWeaponButton // None // @ game+0x26a108
};


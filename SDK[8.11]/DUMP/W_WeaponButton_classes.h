// WidgetBlueprintGeneratedClass W_WeaponButton.W_WeaponButton_C
// Size: 0x528 (Inherited: 0x250)
struct UW_WeaponButton_C : UUserWidget {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x250(0x08)
	struct UButton* ButtonGive; // 0x258(0x08)
	struct UTextBlock* Text_Name; // 0x260(0x08)
	struct FName ItemID; // 0x268(0x08)
	struct F*6fe09374d0 ClassVar; // 0x270(0x08)
	struct F*9ec348ba05 ButtonStyle; // 0x278(0x2a8)
	struct UW_WeaponMenu_C* MenuRef; // 0x520(0x08)

	void Construct(); // Function W_WeaponButton.W_WeaponButton_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponButton.W_WeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	int32 ExecuteUbergraph_W_WeaponButton(struct FText CallFunc__64a4022295_ReturnValue, struct APlayerPawn_v2_C* K2Node_DynamicCast_AsPlayer_Pawn_V_3, bool CallFunc_IsValid_ReturnValue); // Function W_WeaponButton.W_WeaponButton_C.ExecuteUbergraph_W_WeaponButton // HasDefaults // @ game+0x293938
};


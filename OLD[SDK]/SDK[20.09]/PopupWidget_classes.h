// WidgetBlueprintGeneratedClass PopupWidget.PopupWidget_C
// Size: 0x558 (Inherited: 0x528)
struct UPopupWidget_C : U*f141b14531 {
	struct F*73a77c28fa UberGraphFrame; // 0x528(0x08)
	struct U*6b11b3bf02* PopupEmerging; // 0x530(0x08)
	struct UHorizontalBox* GamepadButtonCancel; // 0x538(0x08)
	struct UHorizontalBox* GamepadButtonOK; // 0x540(0x08)
	struct U*3bbae755be* TslUniversalInputVisibilitySwitcher_1; // 0x548(0x08)
	struct UImage* WarningImage; // 0x550(0x08)

	bool HandleCompetitive(bool IsLeagueTypeCompetitive, bool CallFunc__254021fe6a_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, struct ATslHUD* CallFunc__5565456fdf_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2, struct ATslPlayerController* CallFunc__c3add16e27_ReturnValue); // Function PopupWidget.PopupWidget_C.HandleCompetitive // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void SetPopup(struct FText Title); // Function PopupWidget.PopupWidget_C.SetPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function PopupWidget.PopupWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void Destruct(); // Function PopupWidget.PopupWidget_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FText ExecuteUbergraph_PopupWidget(int32 EntryPoint, struct FText K2Node_Event_Message); // Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget // HasDefaults // @ game+0x1e037c
};


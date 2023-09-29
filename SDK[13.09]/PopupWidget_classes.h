// WidgetBlueprintGeneratedClass PopupWidget.PopupWidget_C
// Size: 0x558 (Inherited: 0x528)
struct UPopupWidget_C : U*f141b14531 {
	struct F*73a77c28fa UberGraphFrame; // 0x528(0x08)
	struct U*6b11b3bf02* PopupEmerging; // 0x530(0x08)
	struct UHorizontalBox* GamepadButtonCancel; // 0x538(0x08)
	struct UHorizontalBox* GamepadButtonOK; // 0x540(0x08)
	struct U*3bbae755be* TslUniversalInputVisibilitySwitcher_1; // 0x548(0x08)
	struct UImage* WarningImage; // 0x550(0x08)

	int32 HandleCompetitive(bool IsLeagueTypeCompetitive, bool CallFunc__254021fe6a_ReturnValue, bool CallFunc__3276339af1_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool K2Node_DynamicCast_bSuccess, struct ATslHUD* CallFunc__5565456fdf_ReturnValue2, struct ATslGameState* CallFunc__0078695db7_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue3); // Function PopupWidget.PopupWidget_C.HandleCompetitive // None // @ game+0x26a108
	struct FText SetPopup(); // Function PopupWidget.PopupWidget_C.SetPopup // None // @ game+0x26a108
	void Construct(); // Function PopupWidget.PopupWidget_C.Construct // None // @ game+0x26a108
	void Destruct(); // Function PopupWidget.PopupWidget_C.Destruct // None // @ game+0x26a108
	int32 ExecuteUbergraph_PopupWidget(enum class EPopupStyle K2Node_Event_PopupStyle, struct FText K2Node_Event_Title); // Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget // None // @ game+0x26a108
};


// WidgetBlueprintGeneratedClass PopupWidget.PopupWidget_C
// Size: 0x570 (Inherited: 0x528)
struct UPopupWidget_C : U*43d4d72bcf {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x528(0x08)
	struct U*3335e92189* PopupEmerging; // 0x530(0x08)
	struct UHorizontalBox* GamepadButtonCancel; // 0x538(0x08)
	struct UHorizontalBox* GamepadButtonOK; // 0x540(0x08)
	struct U*1293241049* TslUniversalInputVisibilitySwitcher_1; // 0x548(0x08)
	struct UImage* WarningImage; // 0x550(0x08)
	struct FText PopupMessage; // 0x558(0x18)

	struct FText SetPopup(enum class EPopupStyle PopupStyle); // Function PopupWidget.PopupWidget_C.SetPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void Construct(); // Function PopupWidget.PopupWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x32e590
	void Destruct(); // Function PopupWidget.PopupWidget_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x32e590
	bool ExecuteUbergraph_PopupWidget(struct ATslGameState* CallFunc__683a049065_ReturnValue, enum class EPopupStyle K2Node_Event_PopupStyle, struct FText K2Node_Event_Title, bool CallFunc_IsShowWarnningIcon_ReturnValue, bool CallFunc_BooleanAND_ReturnValue); // Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget // HasDefaults // @ game+0x32e590
};


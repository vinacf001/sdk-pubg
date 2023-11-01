// WidgetBlueprintGeneratedClass PopupWidget.PopupWidget_C
// Size: 0x558 (Inherited: 0x528)
struct UPopupWidget_C : U*a00fdddd1f {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x528(0x08)
	struct U*54cc75d10f* PopupEmerging[0x08]; // 0x530(0x08)
	struct UHorizontalBox* GamepadButtonCancel[0x08]; // 0x538(0x08)
	struct UHorizontalBox* GamepadButtonOK[0x08]; // 0x540(0x08)
	struct U*290fc681a4* TslUniversalInputVisibilitySwitcher_1[0x08]; // 0x548(0x08)
	struct UImage* WarningImage[0x08]; // 0x550(0x08)

	bool HandleCompetitive(struct ATslHUD** CallFunc__a9cea49163_ReturnValue, struct UGameInstance** CallFunc__0d055350c8_ReturnValue, struct UTslGameInstance** K2Node_DynamicCast_AsTsl_Game_Instance, bool CallFunc_IsValid_ReturnValue2, int32* CallFunc__fa78dd8158_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue3); // Function PopupWidget.PopupWidget_C.HandleCompetitive // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void SetPopup(enum class EPopupStyle PopupStyle, struct FText* Title); // Function PopupWidget.PopupWidget_C.SetPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function PopupWidget.PopupWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void Destruct(); // Function PopupWidget.PopupWidget_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FText ExecuteUbergraph_PopupWidget(struct FText* K2Node_Event_Message); // Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget // HasDefaults // @ game+0x2cd4ac
};


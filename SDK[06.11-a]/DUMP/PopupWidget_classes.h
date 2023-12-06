// WidgetBlueprintGeneratedClass PopupWidget.PopupWidget_C
// Size: 0x578 (Inherited: 0x530)
struct UPopupWidget_C : U*f930a41d4c {
	struct F*a6c93df757 UberGraphFrame; // 0x530(0x08)
	struct U*9c8bfa0aee* PopupEmerging; // 0x538(0x08)
	struct UHorizontalBox* GamepadButtonCancel; // 0x540(0x08)
	struct UHorizontalBox* GamepadButtonOK; // 0x548(0x08)
	struct U*0eba8c881f* TslUniversalInputVisibilitySwitcher_1; // 0x550(0x08)
	struct UImage* WarningImage; // 0x558(0x08)
	struct FText PopupMessage; // 0x560(0x18)

	void SetPopup(enum class EPopupStyle PopupStyle, struct FText Title, struct FText Message); // Function PopupWidget.PopupWidget_C.SetPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Construct(); // Function PopupWidget.PopupWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	void Destruct(); // Function PopupWidget.PopupWidget_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	struct FText ExecuteUbergraph_PopupWidget(int32 EntryPoint, struct ATslGameState* CallFunc__830fc3e3f6_ReturnValue, struct FText ___text_Variable, struct FText K2Node_Event_Title, struct FText K2Node_Event_Message, DelegateProperty K2Node_Event_PressedDelegate, bool CallFunc__055a659f43_ReturnValue2); // Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget // HasDefaults // @ game+0x370fbc
};


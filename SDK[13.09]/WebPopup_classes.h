// WidgetBlueprintGeneratedClass WebPopup.WebPopup_C
// Size: 0x4a0 (Inherited: 0x468)
struct UWebPopup_C : U*ba28387cae {
	struct F*73a77c28fa UberGraphFrame; // 0x468(0x08)
	struct UImage* Image_1; // 0x470(0x08)
	struct UBorder* LoadingMaing; // 0x478(0x08)
	struct UBorder* MainButtonGroup; // 0x480(0x08)
	struct UBorder* WebViewBorder; // 0x488(0x08)
	struct FMulticastDelegate OnClosePopup; // 0x490(0x10)

	enum class ESlateVisibility UpdateButtonGroupVisibility_BP(enum class ESlateVisibility ___byte_Variable2); // Function WebPopup.WebPopup_C.UpdateButtonGroupVisibility_BP // None // @ game+0x26a108
	void UpdateBackgroundColor_BP(struct FWebPopupParam WebPopupParam); // Function WebPopup.WebPopup_C.UpdateBackgroundColor_BP // None // @ game+0x26a108
	void PreSetting_BP(); // Function WebPopup.WebPopup_C.PreSetting_BP // None // @ game+0x26a108
	bool SetPopupData(enum class ESlateVisibility ___byte_Variable2, enum class ESlateVisibility K2Node_Select_Default); // Function WebPopup.WebPopup_C.SetPopupData // None // @ game+0x26a108
	void Destruct(); // Function WebPopup.WebPopup_C.Destruct // None // @ game+0x26a108
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature(struct FString path); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature // None // @ game+0x26a108
	void OnUpdateWebPopup(); // Function WebPopup.WebPopup_C.OnUpdateWebPopup // None // @ game+0x26a108
	void BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature // None // @ game+0x26a108
	struct FString BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature // None // @ game+0x26a108
	struct FString ExecuteUbergraph_WebPopup(bool _05982889a1_isMainFrame2, struct FString _05982889a1_error); // Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup // None // @ game+0x26a108
	void OnClosePopup__DelegateSignature(); // Function WebPopup.WebPopup_C.OnClosePopup__DelegateSignature // None // @ game+0x26a108
};


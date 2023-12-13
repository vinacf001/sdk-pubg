// WidgetBlueprintGeneratedClass WebPopup.WebPopup_C
// Size: 0x4a8 (Inherited: 0x470)
struct UWebPopup_C : U*37b9c3312e {
	struct F*a6c93df757 UberGraphFrame; // 0x470(0x08)
	struct UImage* Image_1; // 0x478(0x08)
	struct UBorder* LoadingMaing; // 0x480(0x08)
	struct UBorder* MainButtonGroup; // 0x488(0x08)
	struct UBorder* WebViewBorder; // 0x490(0x08)
	struct FMulticastDelegate OnClosePopup; // 0x498(0x10)

	void UpdateButtonGroupVisibility_BP(struct FWebPopupParam WebPopupParam, bool ___bool_Variable, enum class ESlateVisibility ___byte_Variable, enum class ESlateVisibility ___byte_Variable2, enum class ESlateVisibility K2Node_Select_Default); // Function WebPopup.WebPopup_C.UpdateButtonGroupVisibility_BP // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void UpdateBackgroundColor_BP(struct FWebPopupParam WebPopupParam, struct FLinearColor K2Node_MakeStruct_LinearColor, struct FLinearColor CallFunc__7259546a5c_ReturnValue); // Function WebPopup.WebPopup_C.UpdateBackgroundColor_BP // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void PreSetting_BP(struct FWebPopupParam Param); // Function WebPopup.WebPopup_C.PreSetting_BP // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetPopupData(); // Function WebPopup.WebPopup_C.SetPopupData // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Destruct(); // Function WebPopup.WebPopup_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void OnUpdateWebPopup(); // Function WebPopup.WebPopup_C.OnUpdateWebPopup // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_WebPopup(bool _5c6cfaa940_isMainFrame3, struct FWebPopupParam K2Node_Event_WebPopupParam, struct FString CallFunc__a4f37e3e14_ReturnValue, struct FString _5c6cfaa940_path2, bool _5c6cfaa940_isMainFrame2, struct FString _5c6cfaa940_path, struct FString _5c6cfaa940_error, bool _5c6cfaa940_isMainFrame); // Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup // HasDefaults // @ game+0x20a5d0
	void OnClosePopup__DelegateSignature(struct UWebPopup_C* Widget); // Function WebPopup.WebPopup_C.OnClosePopup__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
};


// WidgetBlueprintGeneratedClass WebPopup.WebPopup_C
// Size: 0x4a0 (Inherited: 0x468)
struct UWebPopup_C : U*24d35c94e7 {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x468(0x08)
	struct UImage* Image_1; // 0x470(0x08)
	struct UBorder* LoadingMaing; // 0x478(0x08)
	struct UBorder* MainButtonGroup; // 0x480(0x08)
	struct UBorder* WebViewBorder; // 0x488(0x08)
	struct FMulticastDelegate OnClosePopup; // 0x490(0x10)

	void UpdateButtonGroupVisibility_BP(bool ___bool_Variable, enum class ESlateVisibility ___byte_Variable2); // Function WebPopup.WebPopup_C.UpdateButtonGroupVisibility_BP // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FLinearColor UpdateBackgroundColor_BP(); // Function WebPopup.WebPopup_C.UpdateBackgroundColor_BP // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void PreSetting_BP(); // Function WebPopup.WebPopup_C.PreSetting_BP // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	enum class ESlateVisibility SetPopupData(struct FString PopupId, bool UseBackgroundColor, bool bShowButtonGroup, bool ___bool_Variable, enum class ESlateVisibility ___byte_Variable2); // Function WebPopup.WebPopup_C.SetPopupData // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Destruct(); // Function WebPopup.WebPopup_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	struct FString BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature // BlueprintEvent // @ game+0x293938
	void OnUpdateWebPopup(); // Function WebPopup.WebPopup_C.OnUpdateWebPopup // Event|Public|BlueprintEvent // @ game+0x293938
	void BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature(struct FString path); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature(struct FString path); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature // BlueprintEvent // @ game+0x293938
	struct FString ExecuteUbergraph_WebPopup(struct FString _516b964bc3_path3); // Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup // HasDefaults // @ game+0x293938
	void OnClosePopup__DelegateSignature(); // Function WebPopup.WebPopup_C.OnClosePopup__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x293938
};


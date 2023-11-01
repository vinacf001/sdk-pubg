// WidgetBlueprintGeneratedClass WebPopup.WebPopup_C
// Size: 0x4a0 (Inherited: 0x468)
struct UWebPopup_C : U*f80693807f {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x468(0x08)
	struct UImage* Image_1[0x08]; // 0x470(0x08)
	struct UBorder* LoadingMaing[0x08]; // 0x478(0x08)
	struct UBorder* MainButtonGroup[0x08]; // 0x480(0x08)
	struct UBorder* WebViewBorder[0x08]; // 0x488(0x08)
	struct FMulticastDelegate OnClosePopup[0x10]; // 0x490(0x10)

	enum class ESlateVisibility UpdateButtonGroupVisibility_BP(struct FWebPopupParam* WebPopupParam); // Function WebPopup.WebPopup_C.UpdateButtonGroupVisibility_BP // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FLinearColor UpdateBackgroundColor_BP(); // Function WebPopup.WebPopup_C.UpdateBackgroundColor_BP // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void PreSetting_BP(); // Function WebPopup.WebPopup_C.PreSetting_BP // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	enum class ESlateVisibility SetPopupData(struct FString* Uri, struct FLinearColor* BackgroundColor); // Function WebPopup.WebPopup_C.SetPopupData // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Destruct(); // Function WebPopup.WebPopup_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	struct FString BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void OnUpdateWebPopup(); // Function WebPopup.WebPopup_C.OnUpdateWebPopup // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FString BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	struct FString BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	struct FString ExecuteUbergraph_WebPopup(struct FString* _9c8a0f6927_path3, struct FWebPopupParam* K2Node_Event_WebPopupParam, struct FString* _9c8a0f6927_path2); // Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup // HasDefaults // @ game+0x2cd4ac
	void OnClosePopup__DelegateSignature(); // Function WebPopup.WebPopup_C.OnClosePopup__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
};


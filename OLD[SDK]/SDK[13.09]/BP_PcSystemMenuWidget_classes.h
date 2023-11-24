// WidgetBlueprintGeneratedClass BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C
// Size: 0x7d8 (Inherited: 0x6f0)
struct UBP_PcSystemMenuWidget_C : U*f653452603 {
	struct F*73a77c28fa UberGraphFrame; // 0x6f0(0x08)
	struct U*6b11b3bf02* GuideConsoleFocusList; // 0x6f8(0x08)
	struct U*6b11b3bf02* GuideConsoleNormalFocusSystemMenu; // 0x700(0x08)
	struct U*6b11b3bf02* GuideReportPopup; // 0x708(0x08)
	struct U*6b11b3bf02* VanishingAnim; // 0x710(0x08)
	struct U*6b11b3bf02* EmergingAnim; // 0x718(0x08)
	struct UImage* BackgroundGradient; // 0x720(0x08)
	struct UImage* BG; // 0x728(0x08)
	struct UBackgroundBlur* Blur; // 0x730(0x08)
	struct U*cceb91eeec* ButtonTos; // 0x738(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* ExitToDesktopButton; // 0x740(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* KeyGuideButton; // 0x748(0x08)
	struct UBP_GamepadKeyIconWidget_C* KeyIconRB_Left; // 0x750(0x08)
	struct U*3bbae755be* KeyIconRB_Left_PlatformSwitcher; // 0x758(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* LeaveMatchButton; // 0x760(0x08)
	struct UCanvasPanel* MainCanvasPanel; // 0x768(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* MatchLogButton; // 0x770(0x08)
	struct UImage* OutGame_PanImage; // 0x778(0x08)
	struct UButton* RatingsButton; // 0x780(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* RestartLobbyButton; // 0x788(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* ResumeButton; // 0x790(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* SettingsButton; // 0x798(0x08)
	struct U*3bbae755be* SwitcherKeyIconTos; // 0x7a0(0x08)
	struct UBorder* SystemMenuBorder; // 0x7a8(0x08)
	struct UVerticalBox* SystemMenuVerticalBox; // 0x7b0(0x08)
	struct U*3bbae755be* TslUniversalInputVisibilitySwitcher_5; // 0x7b8(0x08)
	struct UUI_TeamManagementAndMissionList_C* UI_TeamManagementAndMissionList; // 0x7c0(0x08)
	struct UTextBlock* VersionInfoText; // 0x7c8(0x08)
	struct F*9c84e0ea54 BlockKeyBindingTimer; // 0x7d0(0x08)

	void PanelConstruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PanelConstruct // None // @ game+0x26a108
	bool CheckIfCompetitiveMode(bool CallFunc_BooleanOR_ReturnValue, struct UGameInstance* CallFunc__d413f47a37_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_DynamicCast_bSuccess); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckIfCompetitiveMode // None // @ game+0x26a108
	bool CheckLeaveGameStatus(int32 CallFunc__2fa0718661_ReturnValue, struct ATslHUD* CallFunc__5565456fdf_ReturnValue, bool CallFunc_IsValid_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckLeaveGameStatus // None // @ game+0x26a108
	struct ATslHUD* QuitToDesktop(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.QuitToDesktop // None // @ game+0x26a108
	void GotoLobby(enum class *d4829cd412 InPopupButtonID, bool CallFunc__254021fe6a_ReturnValue, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.GotoLobby // None // @ game+0x26a108
	void EnableMenuButtons(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.EnableMenuButtons // None // @ game+0x26a108
	struct ATslHUD* OnVanishingAnimFinished(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnVanishingAnimFinished // None // @ game+0x26a108
	bool HideWidget(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.HideWidget // None // @ game+0x26a108
	void BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature // None // @ game+0x26a108
	void Construct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Construct // None // @ game+0x26a108
	void Destruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Destruct // None // @ game+0x26a108
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // None // @ game+0x26a108
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // None // @ game+0x26a108
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // None // @ game+0x26a108
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // None // @ game+0x26a108
	void NotifySystemMenuEnter(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifySystemMenuEnter // None // @ game+0x26a108
	void Custom Event_1(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_1 // None // @ game+0x26a108
	void Custom Event_2(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_2 // None // @ game+0x26a108
	void NotifyEnableMenuButtons(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyEnableMenuButtons // None // @ game+0x26a108
	void NotifyHideWidget(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyHideWidget // None // @ game+0x26a108
	void BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void ToggleRBPos(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ToggleRBPos // None // @ game+0x26a108
	void PreConstruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PreConstruct // None // @ game+0x26a108
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature // None // @ game+0x26a108
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature // None // @ game+0x26a108
	void BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature // None // @ game+0x26a108
	void BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature // None // @ game+0x26a108
	void BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature // None // @ game+0x26a108
	void BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature // None // @ game+0x26a108
	void BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature // None // @ game+0x26a108
	DelegateProperty ExecuteUbergraph_BP_PcSystemMenuWidget(struct FText ___text_Variable5, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD, bool ___bool_Variable2, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsValid_ReturnValue2, struct AHUD* CallFunc__90c95e2107_ReturnValue2, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD2, struct FString ___string_Variable2, struct ATslPlayerController* CallFunc__c3add16e27_ReturnValue, bool CallFunc__4e2c3342c6_ReturnValue, struct AHUD* CallFunc__90c95e2107_ReturnValue3, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD3, bool CallFunc_IsValid_ReturnValue5, struct ATslBaseHUD* CallFunc__1a6b19694c_ReturnValue3, bool CallFunc_IsValid_ReturnValue7, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue5, DelegateProperty _37b0074df2_OutputDelegate2, bool K2Node_DynamicCast_bSuccess6, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue6, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD6, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue7, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD7, bool CallFunc__5b7376bd47_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue2, struct FText K2Node_Select2_Default, bool CallFunc_IsValid_ReturnValue10, bool CallFunc_BooleanOR_ReturnValue4, struct ATslBaseHUD* CallFunc__1a6b19694c_ReturnValue5, bool CallFunc_IsValid_ReturnValue11, bool K2Node_Event_bEnable, struct ATslPlayerController* CallFunc__c3add16e27_ReturnValue4, bool CallFunc__33ec67c67c_ReturnValue, struct FString K2Node_Select6_Default, bool CallFunc__254021fe6a_ReturnValue6, bool CallFunc_CheckIfCompetitiveMode_IsCompetitive2, bool K2Node_Event_IsDesignTime, struct U*26255869a0* CallFunc__bd263d4011_ReturnValue2, bool CallFunc_IsParticipatedInRedeploy_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc__dc292520ef_ReturnValue, bool CallFunc_BooleanOR_ReturnValue7); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ExecuteUbergraph_BP_PcSystemMenuWidget // None // @ game+0x26a108
};


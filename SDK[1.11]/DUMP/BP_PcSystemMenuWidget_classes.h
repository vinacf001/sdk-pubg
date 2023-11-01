// WidgetBlueprintGeneratedClass BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C
// Size: 0x7d8 (Inherited: 0x6f0)
struct UBP_PcSystemMenuWidget_C : U*46fedf838a {
	struct F*abc8f374e0 UberGraphFrame; // 0x6f0(0x08)
	struct U*54cc75d10f* GuideConsoleFocusList; // 0x6f8(0x08)
	struct U*54cc75d10f* GuideConsoleNormalFocusSystemMenu; // 0x700(0x08)
	struct U*54cc75d10f* GuideReportPopup; // 0x708(0x08)
	struct U*54cc75d10f* VanishingAnim; // 0x710(0x08)
	struct U*54cc75d10f* EmergingAnim; // 0x718(0x08)
	struct UImage* BackgroundGradient; // 0x720(0x08)
	struct UImage* BG; // 0x728(0x08)
	struct UBackgroundBlur* Blur; // 0x730(0x08)
	struct U*5a9e6ea43b* ButtonTos; // 0x738(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* ExitToDesktopButton; // 0x740(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* KeyGuideButton; // 0x748(0x08)
	struct UBP_GamepadKeyIconWidget_C* KeyIconRB_Left; // 0x750(0x08)
	struct U*290fc681a4* KeyIconRB_Left_PlatformSwitcher; // 0x758(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* LeaveMatchButton; // 0x760(0x08)
	struct UCanvasPanel* MainCanvasPanel; // 0x768(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* MatchLogButton; // 0x770(0x08)
	struct UImage* OutGame_PanImage; // 0x778(0x08)
	struct UButton* RatingsButton; // 0x780(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* RestartLobbyButton; // 0x788(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* ResumeButton; // 0x790(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* SettingsButton; // 0x798(0x08)
	struct U*290fc681a4* SwitcherKeyIconTos; // 0x7a0(0x08)
	struct UBorder* SystemMenuBorder; // 0x7a8(0x08)
	struct UVerticalBox* SystemMenuVerticalBox; // 0x7b0(0x08)
	struct U*290fc681a4* TslUniversalInputVisibilitySwitcher_5; // 0x7b8(0x08)
	struct UUI_TeamManagementAndMissionList_C* UI_TeamManagementAndMissionList; // 0x7c0(0x08)
	struct UTextBlock* VersionInfoText; // 0x7c8(0x08)
	struct F*da672abddc BlockKeyBindingTimer; // 0x7d0(0x08)

	struct UUI_TeamManagement_C* PanelConstruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PanelConstruct // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool CheckIfCompetitiveMode(bool IsCompetitive, bool IsMatchIDCompetitive, bool CallFunc_IsSpectating_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc__4f2bb00bec_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckIfCompetitiveMode // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2cd4ac
	bool CheckLeaveGameStatus(bool IsLeaveUnsafe, struct ATslPlayerController* CallFunc__da665267f4_ReturnValue, int32 CallFunc__fa78dd8158_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckLeaveGameStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2cd4ac
	struct UGameInstance* QuitToDesktop(struct UTslGameInstance* K2Node_DynamicCast_AsTsl_Game_Instance, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.QuitToDesktop // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct ATslHUD* GotoLobby(enum class *ca55b910bf InPopupButtonID); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.GotoLobby // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void EnableMenuButtons(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.EnableMenuButtons // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct ATslHUD* OnVanishingAnimFinished(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnVanishingAnimFinished // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct ALobbyHUD* HideWidget(struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.HideWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void Destruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void NotifySystemMenuEnter(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifySystemMenuEnter // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void Custom Event_1(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Custom Event_2(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_2 // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void NotifyEnableMenuButtons(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyEnableMenuButtons // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void NotifyHideWidget(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyHideWidget // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void ToggleRBPos(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ToggleRBPos // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void PreConstruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	bool ExecuteUbergraph_BP_PcSystemMenuWidget(struct FText ___text_Variable3, DelegateProperty _61b405a872_OutputDelegate, bool CallFunc_IsValid_ReturnValue, struct FText ___text_Variable5, enum class EGameModeType CallFunc__a8929d7605_ReturnValue, bool CallFunc__860b32acc0_ReturnValue2, enum class ESystemMenuButtonType K2Node_Event_eType, struct AHUD* CallFunc__223c7f5c7b_ReturnValue2, enum class EGameModeType CallFunc__a8929d7605_ReturnValue2, bool CallFunc__860b32acc0_ReturnValue3, bool CallFunc__a24dcc7a93_ReturnValue, bool CallFunc__b3dacec5ce_ReturnValue, struct ATslBaseHUD* CallFunc__604833061a_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD4, struct ATslBaseHUD* CallFunc__604833061a_ReturnValue3, float K2Node_CustomEvent_Scale, float CallFunc_Abs_ReturnValue, bool CallFunc__aed2cdacd6_ReturnValue, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue6, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue8, struct AHUD* CallFunc__223c7f5c7b_ReturnValue8, bool K2Node_DynamicCast_bSuccess9, bool CallFunc__6415d7f7df_ReturnValue2, bool CallFunc__a24dcc7a93_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue3, struct ATslBaseHUD* CallFunc__604833061a_ReturnValue5, bool CallFunc__6415d7f7df_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5, struct FText K2Node_Select5_Default, struct ATslGameState* CallFunc__f1822eb6d7_ReturnValue3, DelegateProperty _61b405a872_OutputDelegate6, bool CallFunc_CheckLeaveGameStatus_IsLeaveUnsafe, bool _f0883055ea5_CmpSuccess, bool CallFunc_IsPenaltyWaived_ReturnValue, bool CallFunc_CanGetRepPenalty_ReturnValue, struct ATslBaseHUD* CallFunc__604833061a_ReturnValue6, DelegateProperty _61b405a872_OutputDelegate7); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ExecuteUbergraph_BP_PcSystemMenuWidget // HasDefaults // @ game+0x2cd4ac
};


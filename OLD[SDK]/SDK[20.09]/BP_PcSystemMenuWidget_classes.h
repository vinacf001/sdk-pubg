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

	struct UUI_TeamManagement_C* PanelConstruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PanelConstruct // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct ATslGameState* CheckIfCompetitiveMode(bool IsCompetitive, bool IsMatchIDCompetitive, bool CallFunc_IsSpectating_ReturnValue, struct FString CallFunc__0546c559d4_ReturnValue, bool CallFunc__7b832495cc_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckIfCompetitiveMode // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1e037c
	bool CheckLeaveGameStatus(bool IsLeaveUnsafe, struct ATslPlayerController* CallFunc__c3add16e27_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckLeaveGameStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1e037c
	enum class *d4829cd412 QuitToDesktop(bool CallFunc__254021fe6a_ReturnValue, struct UTslGameInstance* K2Node_DynamicCast_AsTsl_Game_Instance, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.QuitToDesktop // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct ATslHUD* GotoLobby(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.GotoLobby // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void EnableMenuButtons(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.EnableMenuButtons // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct APlayerController* OnVanishingAnimFinished(struct AHUD* CallFunc__90c95e2107_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnVanishingAnimFinished // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct ALobbyHUD* HideWidget(struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.HideWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void Destruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void NotifySystemMenuEnter(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifySystemMenuEnter // Event|Public|BlueprintEvent // @ game+0x1e037c
	void Custom Event_1(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Custom Event_2(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_2 // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void NotifyEnableMenuButtons(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyEnableMenuButtons // Event|Public|BlueprintEvent // @ game+0x1e037c
	void NotifyHideWidget(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyHideWidget // Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void ToggleRBPos(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ToggleRBPos // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void PreConstruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	bool ExecuteUbergraph_BP_PcSystemMenuWidget(bool ___bool_Variable, struct FText ___text_Variable3, DelegateProperty _37b0074df2_OutputDelegate, bool CallFunc_IsValid_ReturnValue, struct ATslGameState* CallFunc__0078695db7_ReturnValue, enum class EGameModeType CallFunc__f5da3428b3_ReturnValue, bool CallFunc__254021fe6a_ReturnValue2, enum class ESystemMenuButtonType K2Node_Event_eType, bool CallFunc_IsValid_ReturnValue3, enum class EGameModeType CallFunc__f5da3428b3_ReturnValue2, bool CallFunc__254021fe6a_ReturnValue3, bool CallFunc__bf0f8c1eed_ReturnValue, struct U*cb5d10785d* K2Node_DynamicCast_As_cb_5d_10785d, struct ATslBaseHUD* CallFunc__1a6b19694c_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD4, bool K2Node_DynamicCast_bSuccess6, float K2Node_CustomEvent_Scale, float CallFunc_Abs_ReturnValue, DelegateProperty _37b0074df2_OutputDelegate3, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue8, struct AHUD* CallFunc__90c95e2107_ReturnValue8, bool K2Node_DynamicCast_bSuccess9, bool CallFunc__116252b27b_ReturnValue2, bool CallFunc__bf0f8c1eed_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_IsValid_ReturnValue12, bool CallFunc__5b7376bd47_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5, struct FText K2Node_Select5_Default, struct ATslGameState* CallFunc__0078695db7_ReturnValue3, bool _c45ce107bd2_CmpSuccess, enum class ETslInputDeviceGroupBranch_BPOnly CallFunc__6582934d3e_InputDeviceGroupBranch, bool _c45ce107bd4_CmpSuccess, enum class ETslPlatformGroupBranch_BPOnly CallFunc__dbf63800b1_PlatformGroupBranch3, bool CallFunc_CheckIfCompetitiveMode_IsCompetitive2, bool CallFunc_CheckShowArenaLeaveMessage_ReturnValue2, bool CallFunc_IsPenaltyWaived_ReturnValue2, bool CallFunc_CanGetRepPenalty_ReturnValue2, bool CallFunc_IsValid_ReturnValue13); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ExecuteUbergraph_BP_PcSystemMenuWidget // HasDefaults // @ game+0x1e037c
};


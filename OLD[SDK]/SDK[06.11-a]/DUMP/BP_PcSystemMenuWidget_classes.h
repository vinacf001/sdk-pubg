// WidgetBlueprintGeneratedClass BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C
// Size: 0x7e8 (Inherited: 0x700)
struct UBP_PcSystemMenuWidget_C : U*a3d102c587 {
	struct F*a6c93df757 UberGraphFrame; // 0x700(0x08)
	struct U*9c8bfa0aee* GuideConsoleFocusList; // 0x708(0x08)
	struct U*9c8bfa0aee* GuideConsoleNormalFocusSystemMenu; // 0x710(0x08)
	struct U*9c8bfa0aee* GuideReportPopup; // 0x718(0x08)
	struct U*9c8bfa0aee* VanishingAnim; // 0x720(0x08)
	struct U*9c8bfa0aee* EmergingAnim; // 0x728(0x08)
	struct UImage* BackgroundGradient; // 0x730(0x08)
	struct UImage* BG; // 0x738(0x08)
	struct UBackgroundBlur* Blur; // 0x740(0x08)
	struct U*36cff032b6* ButtonTos; // 0x748(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* ExitToDesktopButton; // 0x750(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* KeyGuideButton; // 0x758(0x08)
	struct UBP_GamepadKeyIconWidget_C* KeyIconRB_Left; // 0x760(0x08)
	struct U*0eba8c881f* KeyIconRB_Left_PlatformSwitcher; // 0x768(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* LeaveMatchButton; // 0x770(0x08)
	struct UCanvasPanel* MainCanvasPanel; // 0x778(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* MatchLogButton; // 0x780(0x08)
	struct UImage* OutGame_PanImage; // 0x788(0x08)
	struct UButton* RatingsButton; // 0x790(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* RestartLobbyButton; // 0x798(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* ResumeButton; // 0x7a0(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* SettingsButton; // 0x7a8(0x08)
	struct U*0eba8c881f* SwitcherKeyIconTos; // 0x7b0(0x08)
	struct UBorder* SystemMenuBorder; // 0x7b8(0x08)
	struct UVerticalBox* SystemMenuVerticalBox; // 0x7c0(0x08)
	struct U*0eba8c881f* TslUniversalInputVisibilitySwitcher_5; // 0x7c8(0x08)
	struct UUI_TeamManagementAndMissionList_C* UI_TeamManagementAndMissionList; // 0x7d0(0x08)
	struct UTextBlock* VersionInfoText; // 0x7d8(0x08)
	struct F*2ef3a887d0 BlockKeyBindingTimer; // 0x7e0(0x08)

	void PanelConstruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PanelConstruct // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool CheckIfCompetitiveMode(bool IsLeagueTypeCompetitive, bool IsMatchIDCompetitive, bool CallFunc_IsParticipatedInRedeploy_ReturnValue, bool CallFunc_IsSpectating_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckIfCompetitiveMode // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	bool CheckLeaveGameStatus(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckLeaveGameStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	bool QuitToDesktop(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.QuitToDesktop // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void GotoLobby(enum class *62cdf2ca7f InPopupButtonID, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.GotoLobby // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void EnableMenuButtons(bool bEnable); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.EnableMenuButtons // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void OnVanishingAnimFinished(struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnVanishingAnimFinished // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void HideWidget(DelegateProperty K2Node_CreateDelegate_OutputDelegate, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue, struct AHUD* CallFunc__6db76a3a17_ReturnValue, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.HideWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void Construct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	void Destruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	enum class ESystemMenuButtonType NotifySystemMenuEnter(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifySystemMenuEnter // Event|Public|BlueprintEvent // @ game+0x370fbc
	void Custom Event_1(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float Custom Event_2(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_2 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool NotifyEnableMenuButtons(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyEnableMenuButtons // Event|Public|BlueprintEvent // @ game+0x370fbc
	void NotifyHideWidget(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyHideWidget // Event|Public|BlueprintEvent // @ game+0x370fbc
	void BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void ToggleRBPos(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ToggleRBPos // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool PreConstruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	bool ExecuteUbergraph_BP_PcSystemMenuWidget(struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue, struct FText ___text_Variable5, struct AHUD* CallFunc__6db76a3a17_ReturnValue, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD, bool CallFunc_Not_PreBool_ReturnValue, struct ATslGameState* CallFunc__830fc3e3f6_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, enum class ESystemMenuButtonType K2Node_Event_eType, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, struct AHUD* CallFunc__6db76a3a17_ReturnValue2, bool ___bool_Variable3, struct ATslPlayerController* CallFunc__d496387316_ReturnValue, struct ATslGameState* CallFunc__830fc3e3f6_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, float K2Node_CustomEvent_Scale, bool CallFunc__17d991acd0_ReturnValue, float CallFunc_Abs_ReturnValue, struct FText ___text_Variable6, struct AHUD* CallFunc__6db76a3a17_ReturnValue6, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD6, bool K2Node_DynamicCast_bSuccess7, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue7, struct ATslPlayerController* CallFunc__d496387316_ReturnValue2, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, struct AHUD* CallFunc__6db76a3a17_ReturnValue8, bool CallFunc__daf1e56f8d_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue2, struct FString K2Node_Select_Default, struct FText K2Node_Select2_Default, enum class ETslPlatformGroupBranch_BPOnly CallFunc__4e9f4a0173_PlatformGroupBranch2, bool _62618e47cd2_CmpSuccess, bool _62618e47cd3_CmpSuccess, bool CallFunc_CheckIfCompetitiveMode_IsCompetitive, enum class ETslPlatformGroupBranch_BPOnly CallFunc__4e9f4a0173_PlatformGroupBranch3, bool _62618e47cd5_CmpSuccess, bool _62618e47cd6_CmpSuccess, struct U*f74fb2ffc0* CallFunc__3dba148229_ReturnValue, struct U*f74fb2ffc0* CallFunc__3dba148229_ReturnValue2, bool CallFunc_CheckShowArenaLeaveMessage_ReturnValue, bool CallFunc_CanGetRepPenalty_ReturnValue2, struct ATslBaseHUD* CallFunc__6b66da3e10_ReturnValue6, bool CallFunc_IsValid_ReturnValue13, DelegateProperty _d8b1f23a78_OutputDelegate7); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ExecuteUbergraph_BP_PcSystemMenuWidget // HasDefaults // @ game+0x370fbc
};


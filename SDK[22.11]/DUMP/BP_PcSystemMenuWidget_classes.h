// WidgetBlueprintGeneratedClass BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C
// Size: 0x7d8 (Inherited: 0x6f0)
struct UBP_PcSystemMenuWidget_C : U*7bbc92c60f {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x6f0(0x08)
	struct U*3335e92189* GuideConsoleFocusList; // 0x6f8(0x08)
	struct U*3335e92189* GuideConsoleNormalFocusSystemMenu; // 0x700(0x08)
	struct U*3335e92189* GuideReportPopup; // 0x708(0x08)
	struct U*3335e92189* VanishingAnim; // 0x710(0x08)
	struct U*3335e92189* EmergingAnim; // 0x718(0x08)
	struct UImage* BackgroundGradient; // 0x720(0x08)
	struct UImage* BG; // 0x728(0x08)
	struct UBackgroundBlur* Blur; // 0x730(0x08)
	struct U*46534bdc1f* ButtonTos; // 0x738(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* ExitToDesktopButton; // 0x740(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* KeyGuideButton; // 0x748(0x08)
	struct UBP_GamepadKeyIconWidget_C* KeyIconRB_Left; // 0x750(0x08)
	struct U*1293241049* KeyIconRB_Left_PlatformSwitcher; // 0x758(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* LeaveMatchButton; // 0x760(0x08)
	struct UCanvasPanel* MainCanvasPanel; // 0x768(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* MatchLogButton; // 0x770(0x08)
	struct UImage* OutGame_PanImage; // 0x778(0x08)
	struct UButton* RatingsButton; // 0x780(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* RestartLobbyButton; // 0x788(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* ResumeButton; // 0x790(0x08)
	struct UBP_PcSystemMenuButtonWidget_C* SettingsButton; // 0x798(0x08)
	struct U*1293241049* SwitcherKeyIconTos; // 0x7a0(0x08)
	struct UBorder* SystemMenuBorder; // 0x7a8(0x08)
	struct UVerticalBox* SystemMenuVerticalBox; // 0x7b0(0x08)
	struct U*1293241049* TslUniversalInputVisibilitySwitcher_5; // 0x7b8(0x08)
	struct UUI_TeamManagementAndMissionList_C* UI_TeamManagementAndMissionList; // 0x7c0(0x08)
	struct UTextBlock* VersionInfoText; // 0x7c8(0x08)
	struct F*b2f5f3e08e BlockKeyBindingTimer; // 0x7d0(0x08)

	void PanelConstruct(struct UUI_TeamManagement_C* K2Node_DynamicCast_AsUI_Team_Management); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PanelConstruct // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct UGameInstance* CheckIfCompetitiveMode(bool CallFunc_BooleanAND_ReturnValue, struct UTslGameInstance* K2Node_DynamicCast_AsTsl_Game_Instance, struct ATslGameState* CallFunc__683a049065_ReturnValue, bool CallFunc_IsValid_ReturnValue2); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckIfCompetitiveMode // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x32e590
	struct ATslHUD* CheckLeaveGameStatus(bool CallFunc__b2237386bd_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.CheckLeaveGameStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x32e590
	struct ATslHUD* QuitToDesktop(enum class *1d74716a1b NewParam, struct UGameInstance* CallFunc__5fbc75595a_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.QuitToDesktop // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	bool GotoLobby(struct AHUD* CallFunc__4468a93312_ReturnValue); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.GotoLobby // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void EnableMenuButtons(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.EnableMenuButtons // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void OnVanishingAnimFinished(struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.OnVanishingAnimFinished // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct ALobbyHUD* HideWidget(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.HideWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__TeamManagementButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void Construct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x32e590
	void Destruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x32e590
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__EmergingAnim_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__VanishingAnim_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void NotifySystemMenuEnter(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifySystemMenuEnter // Event|Public|BlueprintEvent // @ game+0x32e590
	void Custom Event_1(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void Custom Event_2(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.Custom Event_2 // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void NotifyEnableMenuButtons(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyEnableMenuButtons // Event|Public|BlueprintEvent // @ game+0x32e590
	void NotifyHideWidget(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.NotifyHideWidget // Event|Public|BlueprintEvent // @ game+0x32e590
	void BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RatingsButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void ToggleRBPos(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ToggleRBPos // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void PreConstruct(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x32e590
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_42_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_124_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__KeyGuideButton_K2Node_ComponentBoundEvent_174_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__MatchLogButton_K2Node_ComponentBoundEvent_239_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__RestartLobbyButton_K2Node_ComponentBoundEvent_302_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__LeaveMatchButton_K2Node_ComponentBoundEvent_365_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature(); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.BndEvt__ExitToDesktopButton_K2Node_ComponentBoundEvent_428_OnTslButtonClicked__DelegateSignature // BlueprintEvent // @ game+0x32e590
	bool ExecuteUbergraph_BP_PcSystemMenuWidget(int32 EntryPoint, bool CallFunc__5ae66c1051_ReturnValue, struct AHUD* CallFunc__4468a93312_ReturnValue, bool K2Node_DynamicCast_bSuccess, struct FString ___string_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool _d8ad73c691_CmpSuccess, bool K2Node_DynamicCast_bSuccess2, bool ___bool_Variable3, struct ATslGameState* CallFunc__683a049065_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc__53f0366297_ReturnValue, struct AHUD* CallFunc__4468a93312_ReturnValue3, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD3, bool CallFunc_IsValid_ReturnValue5, struct ATslBaseHUD* CallFunc__70a10b8caf_ReturnValue3, bool CallFunc_IsValid_ReturnValue7, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue5, DelegateProperty _d01ead63d9_OutputDelegate2, bool CallFunc__63b36ff994_ReturnValue, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue6, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD6, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue7, struct ATslHUD* K2Node_DynamicCast_AsTsl_HUD7, bool CallFunc__d28910d8fd_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue2, struct FText K2Node_Select2_Default, bool CallFunc_IsValid_ReturnValue10, struct ATslBaseHUD* CallFunc__70a10b8caf_ReturnValue5, bool CallFunc_IsValid_ReturnValue11, bool K2Node_Event_bEnable, DelegateProperty _d01ead63d9_OutputDelegate4, bool CallFunc__d28910d8fd_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5, struct FText K2Node_Select4_Default, bool ___bool_Variable6, DelegateProperty _d01ead63d9_OutputDelegate6, bool CallFunc_CheckLeaveGameStatus_IsLeaveUnsafe, bool _d8ad73c6915_CmpSuccess, bool CallFunc_IsPenaltyWaived_ReturnValue, bool CallFunc_CanGetRepPenalty_ReturnValue, struct ATslBaseHUD* CallFunc__70a10b8caf_ReturnValue6, DelegateProperty _d01ead63d9_OutputDelegate7); // Function BP_PcSystemMenuWidget.BP_PcSystemMenuWidget_C.ExecuteUbergraph_BP_PcSystemMenuWidget // HasDefaults // @ game+0x32e590
};


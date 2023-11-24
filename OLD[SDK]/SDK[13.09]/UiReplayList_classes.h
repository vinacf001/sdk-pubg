// WidgetBlueprintGeneratedClass UiReplayList.UiReplayList_C
// Size: 0x6d4 (Inherited: 0x410)
struct UUiReplayList_C : U*17234a7c9b {
	struct F*73a77c28fa UberGraphFrame; // 0x410(0x08)
	struct UButton* Button_AS; // 0x418(0x08)
	struct UButton* Button_Delete; // 0x420(0x08)
	struct UButton* Button_DeleteOlds; // 0x428(0x08)
	struct UButton* Button_Dev; // 0x430(0x08)
	struct UButton* Button_EU; // 0x438(0x08)
	struct UButton* Button_JP; // 0x440(0x08)
	struct UButton* Button_Local; // 0x448(0x08)
	struct UButton* Button_NA; // 0x450(0x08)
	struct UButton* Button_OC; // 0x458(0x08)
	struct UButton* Button_Play; // 0x460(0x08)
	struct UButton* Button_SA; // 0x468(0x08)
	struct UButton* Button_SEA; // 0x470(0x08)
	struct UButton* ButtonExit; // 0x478(0x08)
	struct UButton* ButtonGo; // 0x480(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x488(0x08)
	struct UTextBlock* DamageDealtText; // 0x490(0x08)
	struct UImage* DebugCrosshair; // 0x498(0x08)
	struct UTextBlock* DistanceText; // 0x4a0(0x08)
	struct UTextBlock* HeadShotsText; // 0x4a8(0x08)
	struct UTextBlock* KillsText; // 0x4b0(0x08)
	struct UTextBlock* LongestKillText; // 0x4b8(0x08)
	struct UCanvasPanel* MainCanvas; // 0x4c0(0x08)
	struct UTextBlock* MapText; // 0x4c8(0x08)
	struct UTextBlock* MatchIdText; // 0x4d0(0x08)
	struct UButton* NexButton; // 0x4d8(0x08)
	struct UButton* PrevButton; // 0x4e0(0x08)
	struct UTextBlock* RankText; // 0x4e8(0x08)
	struct UTextBlock* RegionText; // 0x4f0(0x08)
	struct UScrollBox* ReplayListScrollBox; // 0x4f8(0x08)
	struct UTextBlock* SEPERATOR2; // 0x500(0x08)
	struct UTextBlock* TeamText; // 0x508(0x08)
	struct UEditableTextBox* TextBoxGo; // 0x510(0x08)
	struct UTextBlock* TextPage; // 0x518(0x08)
	struct UTextBlock* WeatherText; // 0x520(0x08)
	struct FMulticastDelegate UpdateReplayList; // 0x528(0x10)
	int32 CurPageNum; // 0x538(0x04)
	int32 TotalPageNum; // 0x53c(0x04)
	struct FMulticastDelegate NextPageEvent; // 0x540(0x10)
	struct FMulticastDelegate PrevPageEvent; // 0x550(0x10)
	struct FMulticastDelegate GoPageEvent; // 0x560(0x10)
	struct FMulticastDelegate QuitApplicationEvent; // 0x570(0x10)
	struct FString RegionOrLocal; // 0x580(0x10)
	struct FString SessionName; // 0x590(0x10)
	struct FMulticastDelegate DeleteReplayEvent; // 0x5a0(0x10)
	struct UTslGameInstance* TslGameInstance; // 0x5b0(0x08)
	struct FReplayItem myReplayItem; // 0x5b8(0x100)
	bool bIsExit; // 0x6b8(0x01)
	bool bIsVersionCompatible; // 0x6b9(0x01)
	char pad_6BA[0x6]; // 0x6ba(0x06)
	struct TArray<struct FReplayRegion> RegionButtons; // 0x6c0(0x10)
	int32 CurrRegionIndex; // 0x6d0(0x04)

	void PlayReplay(bool CallFunc__7748b11c86_ReturnValue); // Function UiReplayList.UiReplayList_C.PlayReplay // None // @ game+0x26a108
	bool GetIndexFromRegionName(int32 CallFunc__10b0236ab6_ReturnValue, struct FReplayRegion CallFunc_Array_Get_Item); // Function UiReplayList.UiReplayList_C.GetIndexFromRegionName // None // @ game+0x26a108
	void UpdateReplayList_Impl(struct FString RegionOrLocal); // Function UiReplayList.UiReplayList_C.UpdateReplayList_Impl // None // @ game+0x26a108
	int32 UpdateRegionButtonColors(int32 Index , struct FReplayRegion CallFunc_Array_Get_Item); // Function UiReplayList.UiReplayList_C.UpdateRegionButtonColors // None // @ game+0x26a108
	void ChangeCloseButtonForTest(); // Function UiReplayList.UiReplayList_C.ChangeCloseButtonForTest // None // @ game+0x26a108
	struct FText ResetRecorderStatistics(struct FString CallFunc__edc080a44e_ReturnValue2); // Function UiReplayList.UiReplayList_C.ResetRecorderStatistics // None // @ game+0x26a108
	struct FText ResetSummary(struct FText CallFunc__118e3222ec_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue2, struct FString CallFunc__edc080a44e_ReturnValue4); // Function UiReplayList.UiReplayList_C.ResetSummary // None // @ game+0x26a108
	bool CheckReplayBusyStatus(); // Function UiReplayList.UiReplayList_C.CheckReplayBusyStatus // None // @ game+0x26a108
	struct FText UpdateRecorderStatistics(struct FTslPlayerStateSummary CallFunc__19e08f51be_ReturnValue, struct FString CallFunc__d03917fad9_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue3, struct FText CallFunc__118e3222ec_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue4, struct FText CallFunc__118e3222ec_ReturnValue2, struct FText CallFunc__118e3222ec_ReturnValue4); // Function UiReplayList.UiReplayList_C.UpdateRecorderStatistics // None // @ game+0x26a108
	bool UpdateTeamText(struct FTslReplaySummary inReplaySummary, int32 CallFunc__10b0236ab6_ReturnValue, int32 CallFunc__c60d779ed0_ReturnValue); // Function UiReplayList.UiReplayList_C.UpdateTeamText // None // @ game+0x26a108
	bool SetShouldKeep(); // Function UiReplayList.UiReplayList_C.SetShouldKeep // None // @ game+0x26a108
	struct FText UpdateReplaySummary(struct FString CallFunc__edc080a44e_ReturnValue3); // Function UiReplayList.UiReplayList_C.UpdateReplaySummary // None // @ game+0x26a108
	bool SetReplayItemToProcess(bool CallFunc_Not_PreBool_ReturnValue); // Function UiReplayList.UiReplayList_C.SetReplayItemToProcess // None // @ game+0x26a108
	void HidePageWidget(); // Function UiReplayList.UiReplayList_C.HidePageWidget // None // @ game+0x26a108
	struct FString ShowPageWidget(struct FString CallFunc__edc080a44e_ReturnValue); // Function UiReplayList.UiReplayList_C.ShowPageWidget // None // @ game+0x26a108
	void ClearReplayList(); // Function UiReplayList.UiReplayList_C.ClearReplayList // None // @ game+0x26a108
	void Construct(); // Function UiReplayList.UiReplayList_C.Construct // None // @ game+0x26a108
	void BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void OnKeepAndDeleteOldestReplaysDoneEvent(); // Function UiReplayList.UiReplayList_C.OnKeepAndDeleteOldestReplaysDoneEvent // None // @ game+0x26a108
	void OnGetReplaySummaryEvent(); // Function UiReplayList.UiReplayList_C.OnGetReplaySummaryEvent // None // @ game+0x26a108
	void BndEvt__Button_JP_K2Node_ComponentBoundEvent_485_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_JP_K2Node_ComponentBoundEvent_485_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	int32 ExecuteUbergraph_UiReplayList(struct UGameInstance* CallFunc__d413f47a37_ReturnValue, bool K2Node_DynamicCast_bSuccess, struct FTslReplaySummary K2Node_CustomEvent_ReplaySummary, struct FReplayRegion K2Node_MakeStruct_ReplayRegion2, int32 CallFunc_Array_Add_ReturnValue6); // Function UiReplayList.UiReplayList_C.ExecuteUbergraph_UiReplayList // None // @ game+0x26a108
	void DeleteReplayEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.DeleteReplayEvent__DelegateSignature // None // @ game+0x26a108
	void QuitApplicationEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.QuitApplicationEvent__DelegateSignature // None // @ game+0x26a108
	void GoPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.GoPageEvent__DelegateSignature // None // @ game+0x26a108
	void PrevPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.PrevPageEvent__DelegateSignature // None // @ game+0x26a108
	void NextPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.NextPageEvent__DelegateSignature // None // @ game+0x26a108
	void UpdateReplayList__DelegateSignature(); // Function UiReplayList.UiReplayList_C.UpdateReplayList__DelegateSignature // None // @ game+0x26a108
};


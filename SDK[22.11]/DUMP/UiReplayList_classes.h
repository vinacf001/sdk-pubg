// WidgetBlueprintGeneratedClass UiReplayList.UiReplayList_C
// Size: 0x6d4 (Inherited: 0x410)
struct UUiReplayList_C : U*eb79fdee2a {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x410(0x08)
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

	void PlayReplay(); // Function UiReplayList.UiReplayList_C.PlayReplay // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	bool GetIndexFromRegionName(int32 Array Index); // Function UiReplayList.UiReplayList_C.GetIndexFromRegionName // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void UpdateReplayList_Impl(); // Function UiReplayList.UiReplayList_C.UpdateReplayList_Impl // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FReplayRegion UpdateRegionButtonColors(int32 CallFunc__949df90870_ReturnValue, int32 CallFunc__0bad7adb6e_ReturnValue); // Function UiReplayList.UiReplayList_C.UpdateRegionButtonColors // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ChangeCloseButtonForTest(); // Function UiReplayList.UiReplayList_C.ChangeCloseButtonForTest // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FText ResetRecorderStatistics(struct FString CallFunc__3cb7b87e18_ReturnValue, struct FText CallFunc__b7186e01a5_ReturnValue4); // Function UiReplayList.UiReplayList_C.ResetRecorderStatistics // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FString ResetSummary(struct FString CallFunc__3cb7b87e18_ReturnValue, struct FText CallFunc__b7186e01a5_ReturnValue); // Function UiReplayList.UiReplayList_C.ResetSummary // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void CheckReplayBusyStatus(bool bIsReplayBusy); // Function UiReplayList.UiReplayList_C.CheckReplayBusyStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FString UpdateRecorderStatistics(struct FText CallFunc__b7186e01a5_ReturnValue2, struct FString CallFunc__ac7bb196f3_ReturnValue2, struct FString CallFunc__3cb7b87e18_ReturnValue6, struct FString CallFunc__6fed9a27d9_ReturnValue4); // Function UiReplayList.UiReplayList_C.UpdateRecorderStatistics // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	bool UpdateTeamText(int32 CallFunc__949df90870_ReturnValue, struct FTslPlayerStateSummary CallFunc_Array_Get_Item); // Function UiReplayList.UiReplayList_C.UpdateTeamText // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void SetShouldKeep(bool bShouldKeep); // Function UiReplayList.UiReplayList_C.SetShouldKeep // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FText UpdateReplaySummary(); // Function UiReplayList.UiReplayList_C.UpdateReplaySummary // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	bool SetReplayItemToProcess(struct FString RegionOrLocal, bool CallFunc_Not_PreBool_ReturnValue2); // Function UiReplayList.UiReplayList_C.SetReplayItemToProcess // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void HidePageWidget(); // Function UiReplayList.UiReplayList_C.HidePageWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FString ShowPageWidget(struct FString CallFunc__6fed9a27d9_ReturnValue2); // Function UiReplayList.UiReplayList_C.ShowPageWidget // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ClearReplayList(); // Function UiReplayList.UiReplayList_C.ClearReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void Construct(); // Function UiReplayList.UiReplayList_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void OnKeepAndDeleteOldestReplaysDoneEvent(); // Function UiReplayList.UiReplayList_C.OnKeepAndDeleteOldestReplaysDoneEvent // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void OnGetReplaySummaryEvent(); // Function UiReplayList.UiReplayList_C.OnGetReplaySummaryEvent // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_JP_K2Node_ComponentBoundEvent_485_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_JP_K2Node_ComponentBoundEvent_485_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	struct FReplayRegion ExecuteUbergraph_UiReplayList(struct UTslGameInstance* K2Node_DynamicCast_AsTsl_Game_Instance, bool K2Node_DynamicCast_bSuccess, struct FReplayRegion K2Node_MakeStruct_ReplayRegion2, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue8); // Function UiReplayList.UiReplayList_C.ExecuteUbergraph_UiReplayList // HasDefaults // @ game+0x32e590
	void DeleteReplayEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.DeleteReplayEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void QuitApplicationEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.QuitApplicationEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void GoPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.GoPageEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void PrevPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.PrevPageEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void NextPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.NextPageEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void UpdateReplayList__DelegateSignature(); // Function UiReplayList.UiReplayList_C.UpdateReplayList__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x32e590
};


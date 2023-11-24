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

	bool PlayReplay(); // Function UiReplayList.UiReplayList_C.PlayReplay // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool GetIndexFromRegionName(struct FReplayRegion CallFunc_Array_Get_Item); // Function UiReplayList.UiReplayList_C.GetIndexFromRegionName // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UpdateReplayList_Impl(struct FString RegionOrLocal); // Function UiReplayList.UiReplayList_C.UpdateReplayList_Impl // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	int32 UpdateRegionButtonColors(int32 Index , int32 ___int_Loop_Counter_Variable, struct FReplayRegion CallFunc_Array_Get_Item); // Function UiReplayList.UiReplayList_C.UpdateRegionButtonColors // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ChangeCloseButtonForTest(); // Function UiReplayList.UiReplayList_C.ChangeCloseButtonForTest // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString ResetRecorderStatistics(struct FText CallFunc__118e3222ec_ReturnValue5); // Function UiReplayList.UiReplayList_C.ResetRecorderStatistics // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FText ResetSummary(struct FText CallFunc__118e3222ec_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue2, struct FString CallFunc__edc080a44e_ReturnValue4); // Function UiReplayList.UiReplayList_C.ResetSummary // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool CheckReplayBusyStatus(); // Function UiReplayList.UiReplayList_C.CheckReplayBusyStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FText UpdateRecorderStatistics(int32 TotalTeamOrPlayers, struct FTslPlayerStateSummary CallFunc__19e08f51be_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue3, struct FText CallFunc__118e3222ec_ReturnValue2, struct FString CallFunc__d03917fad9_ReturnValue2, struct FString CallFunc__edc080a44e_ReturnValue5, struct FText CallFunc__118e3222ec_ReturnValue3, struct FString CallFunc__e4959400e5_ReturnValue4, struct FString CallFunc__edc080a44e_ReturnValue8); // Function UiReplayList.UiReplayList_C.UpdateRecorderStatistics // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct TArray<struct FTslPlayerStateSummary> UpdateTeamText(struct FString TeamInfoText, struct FText CallFunc__118e3222ec_ReturnValue, struct FTslPlayerStateSummary CallFunc_Array_Get_Item); // Function UiReplayList.UiReplayList_C.UpdateTeamText // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void SetShouldKeep(bool bShouldKeep); // Function UiReplayList.UiReplayList_C.SetShouldKeep // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString UpdateReplaySummary(struct FTslReplaySummary ReplaySummary, struct FString CallFunc__edc080a44e_ReturnValue, struct FText CallFunc__118e3222ec_ReturnValue2); // Function UiReplayList.UiReplayList_C.UpdateReplaySummary // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool SetReplayItemToProcess(struct FString RegionOrLocal, bool CallFunc_Not_PreBool_ReturnValue2); // Function UiReplayList.UiReplayList_C.SetReplayItemToProcess // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void HidePageWidget(); // Function UiReplayList.UiReplayList_C.HidePageWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString ShowPageWidget(); // Function UiReplayList.UiReplayList_C.ShowPageWidget // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ClearReplayList(); // Function UiReplayList.UiReplayList_C.ClearReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function UiReplayList.UiReplayList_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void OnKeepAndDeleteOldestReplaysDoneEvent(); // Function UiReplayList.UiReplayList_C.OnKeepAndDeleteOldestReplaysDoneEvent // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void OnGetReplaySummaryEvent(); // Function UiReplayList.UiReplayList_C.OnGetReplaySummaryEvent // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_JP_K2Node_ComponentBoundEvent_485_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_JP_K2Node_ComponentBoundEvent_485_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	struct FReplayRegion ExecuteUbergraph_UiReplayList(int32 EntryPoint, DelegateProperty _37b0074df2_OutputDelegate, struct UTslGameInstance* K2Node_DynamicCast_AsTsl_Game_Instance, bool CallFunc_CheckReplayBusyStatus_bIsReplayBusy, int32 CallFunc_Array_Add_ReturnValue4); // Function UiReplayList.UiReplayList_C.ExecuteUbergraph_UiReplayList // HasDefaults // @ game+0x1e037c
	void DeleteReplayEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.DeleteReplayEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void QuitApplicationEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.QuitApplicationEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void GoPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.GoPageEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void PrevPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.PrevPageEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void NextPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.NextPageEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UpdateReplayList__DelegateSignature(); // Function UiReplayList.UiReplayList_C.UpdateReplayList__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
};


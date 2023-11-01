// WidgetBlueprintGeneratedClass UiReplayList.UiReplayList_C
// Size: 0x6d4 (Inherited: 0x410)
struct UUiReplayList_C : U*bc854bc287 {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x410(0x08)
	struct UButton* Button_AS[0x08]; // 0x418(0x08)
	struct UButton* Button_Delete[0x08]; // 0x420(0x08)
	struct UButton* Button_DeleteOlds[0x08]; // 0x428(0x08)
	struct UButton* Button_Dev[0x08]; // 0x430(0x08)
	struct UButton* Button_EU[0x08]; // 0x438(0x08)
	struct UButton* Button_JP[0x08]; // 0x440(0x08)
	struct UButton* Button_Local[0x08]; // 0x448(0x08)
	struct UButton* Button_NA[0x08]; // 0x450(0x08)
	struct UButton* Button_OC[0x08]; // 0x458(0x08)
	struct UButton* Button_Play[0x08]; // 0x460(0x08)
	struct UButton* Button_SA[0x08]; // 0x468(0x08)
	struct UButton* Button_SEA[0x08]; // 0x470(0x08)
	struct UButton* ButtonExit[0x08]; // 0x478(0x08)
	struct UButton* ButtonGo[0x08]; // 0x480(0x08)
	struct UCanvasPanel* CanvasPanel_2[0x08]; // 0x488(0x08)
	struct UTextBlock* DamageDealtText[0x08]; // 0x490(0x08)
	struct UImage* DebugCrosshair[0x08]; // 0x498(0x08)
	struct UTextBlock* DistanceText[0x08]; // 0x4a0(0x08)
	struct UTextBlock* HeadShotsText[0x08]; // 0x4a8(0x08)
	struct UTextBlock* KillsText[0x08]; // 0x4b0(0x08)
	struct UTextBlock* LongestKillText[0x08]; // 0x4b8(0x08)
	struct UCanvasPanel* MainCanvas[0x08]; // 0x4c0(0x08)
	struct UTextBlock* MapText[0x08]; // 0x4c8(0x08)
	struct UTextBlock* MatchIdText[0x08]; // 0x4d0(0x08)
	struct UButton* NexButton[0x08]; // 0x4d8(0x08)
	struct UButton* PrevButton[0x08]; // 0x4e0(0x08)
	struct UTextBlock* RankText[0x08]; // 0x4e8(0x08)
	struct UTextBlock* RegionText[0x08]; // 0x4f0(0x08)
	struct UScrollBox* ReplayListScrollBox[0x08]; // 0x4f8(0x08)
	struct UTextBlock* SEPERATOR2[0x08]; // 0x500(0x08)
	struct UTextBlock* TeamText[0x08]; // 0x508(0x08)
	struct UEditableTextBox* TextBoxGo[0x08]; // 0x510(0x08)
	struct UTextBlock* TextPage[0x08]; // 0x518(0x08)
	struct UTextBlock* WeatherText[0x08]; // 0x520(0x08)
	struct FMulticastDelegate UpdateReplayList[0x10]; // 0x528(0x10)
	int32 CurPageNum[0x04]; // 0x538(0x04)
	int32 TotalPageNum[0x04]; // 0x53c(0x04)
	struct FMulticastDelegate NextPageEvent[0x10]; // 0x540(0x10)
	struct FMulticastDelegate PrevPageEvent[0x10]; // 0x550(0x10)
	struct FMulticastDelegate GoPageEvent[0x10]; // 0x560(0x10)
	struct FMulticastDelegate QuitApplicationEvent[0x10]; // 0x570(0x10)
	struct FString RegionOrLocal[0x10]; // 0x580(0x10)
	struct FString SessionName[0x10]; // 0x590(0x10)
	struct FMulticastDelegate DeleteReplayEvent[0x10]; // 0x5a0(0x10)
	struct UTslGameInstance* TslGameInstance[0x08]; // 0x5b0(0x08)
	struct FReplayItem myReplayItem[0x100]; // 0x5b8(0x100)
	bool bIsExit; // 0x6b8(0x01)
	bool bIsVersionCompatible; // 0x6b9(0x01)
	char pad_6BA[0x6]; // 0x6ba(0x06)
	struct TArray<struct FReplayRegion> RegionButtons[0x10]; // 0x6c0(0x10)
	int32 CurrRegionIndex[0x04]; // 0x6d0(0x04)

	void PlayReplay(); // Function UiReplayList.UiReplayList_C.PlayReplay // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool GetIndexFromRegionName(int32* ___int_Array_Index_Variable); // Function UiReplayList.UiReplayList_C.GetIndexFromRegionName // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void UpdateReplayList_Impl(); // Function UiReplayList.UiReplayList_C.UpdateReplayList_Impl // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	int32 UpdateRegionButtonColors(int32* ___int_Array_Index_Variable); // Function UiReplayList.UiReplayList_C.UpdateRegionButtonColors // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ChangeCloseButtonForTest(); // Function UiReplayList.UiReplayList_C.ChangeCloseButtonForTest // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString ResetRecorderStatistics(struct FString* CallFunc__390858a7fc_ReturnValue, struct FText* CallFunc__5bf4bc8552_ReturnValue); // Function UiReplayList.UiReplayList_C.ResetRecorderStatistics // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString ResetSummary(struct FString* CallFunc__390858a7fc_ReturnValue2); // Function UiReplayList.UiReplayList_C.ResetSummary // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool CheckReplayBusyStatus(); // Function UiReplayList.UiReplayList_C.CheckReplayBusyStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FText UpdateRecorderStatistics(struct FTslReplaySummary* inReplaySummary, struct FString* CallFunc__9d57634d3d_ReturnValue, struct FString* CallFunc__390858a7fc_ReturnValue4, struct FString* CallFunc__390858a7fc_ReturnValue6, struct FString* CallFunc__79188456fa_ReturnValue4); // Function UiReplayList.UiReplayList_C.UpdateRecorderStatistics // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FTslPlayerStateSummary UpdateTeamText(struct FText* CallFunc__5bf4bc8552_ReturnValue, int32* CallFunc__e93d5a86a0_ReturnValue, struct FString* CallFunc__390858a7fc_ReturnValue, bool CallFunc__249bb33a55_ReturnValue); // Function UiReplayList.UiReplayList_C.UpdateTeamText // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void SetShouldKeep(bool bShouldKeep); // Function UiReplayList.UiReplayList_C.SetShouldKeep // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString UpdateReplaySummary(struct FString* CallFunc__390858a7fc_ReturnValue, struct FString* CallFunc__390858a7fc_ReturnValue2, struct FText* CallFunc__5bf4bc8552_ReturnValue2); // Function UiReplayList.UiReplayList_C.UpdateReplaySummary // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool SetReplayItemToProcess(bool CallFunc_BooleanAND_ReturnValue2); // Function UiReplayList.UiReplayList_C.SetReplayItemToProcess // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void HidePageWidget(); // Function UiReplayList.UiReplayList_C.HidePageWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString ShowPageWidget(struct FString* CallFunc__390858a7fc_ReturnValue2); // Function UiReplayList.UiReplayList_C.ShowPageWidget // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ClearReplayList(); // Function UiReplayList.UiReplayList_C.ClearReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function UiReplayList.UiReplayList_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void OnKeepAndDeleteOldestReplaysDoneEvent(); // Function UiReplayList.UiReplayList_C.OnKeepAndDeleteOldestReplaysDoneEvent // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void OnGetReplaySummaryEvent(); // Function UiReplayList.UiReplayList_C.OnGetReplaySummaryEvent // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_JP_K2Node_ComponentBoundEvent_485_OnButtonClickedEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.BndEvt__Button_JP_K2Node_ComponentBoundEvent_485_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	int32 ExecuteUbergraph_UiReplayList(struct UTslGameInstance** K2Node_DynamicCast_AsTsl_Game_Instance, bool K2Node_DynamicCast_bSuccess, int32* CallFunc_Array_Add_ReturnValue2, struct FReplayRegion* K2Node_MakeStruct_ReplayRegion6, int32* CallFunc_Array_Add_ReturnValue6, int32* CallFunc_Array_Add_ReturnValue7, struct FReplayRegion* K2Node_MakeStruct_ReplayRegion8, struct FReplayRegion* K2Node_MakeStruct_ReplayRegion9); // Function UiReplayList.UiReplayList_C.ExecuteUbergraph_UiReplayList // HasDefaults // @ game+0x2cd4ac
	void DeleteReplayEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.DeleteReplayEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void QuitApplicationEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.QuitApplicationEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void GoPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.GoPageEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void PrevPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.PrevPageEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void NextPageEvent__DelegateSignature(); // Function UiReplayList.UiReplayList_C.NextPageEvent__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void UpdateReplayList__DelegateSignature(); // Function UiReplayList.UiReplayList_C.UpdateReplayList__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
};


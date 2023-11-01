// WidgetBlueprintGeneratedClass ReplayListItem.ReplayListItem_C
// Size: 0x488 (Inherited: 0x250)
struct UReplayListItem_C : UUserWidget {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x250(0x08)
	struct UTextBlock* ActionMessage[0x08]; // 0x258(0x08)
	struct UTextBlock* AllDeadOrWinText[0x08]; // 0x260(0x08)
	struct UButton* ButtonItem[0x08]; // 0x268(0x08)
	struct UTextBlock* CameraEventText[0x08]; // 0x270(0x08)
	struct UButton* Cancel[0x08]; // 0x278(0x08)
	struct UCheckBox* CheckBoxShouldKeep[0x08]; // 0x280(0x08)
	struct UTextBlock* CorruptText[0x08]; // 0x288(0x08)
	struct UTextBlock* Date[0x08]; // 0x290(0x08)
	struct UButton* Download[0x08]; // 0x298(0x08)
	struct UTextBlock* FriendlyName[0x08]; // 0x2a0(0x08)
	struct UTextBlock* GameVersion[0x08]; // 0x2a8(0x08)
	struct UTextBlock* InCompleteText[0x08]; // 0x2b0(0x08)
	struct UTextBlock* Length[0x08]; // 0x2b8(0x08)
	struct UTextBlock* Live[0x08]; // 0x2c0(0x08)
	struct UTextBlock* MK3DReplayVersion[0x08]; // 0x2c8(0x08)
	struct UTextBlock* Mode[0x08]; // 0x2d0(0x08)
	struct UTextBlock* ServerRecordingText[0x08]; // 0x2d8(0x08)
	struct UTextBlock* SessionName[0x08]; // 0x2e0(0x08)
	struct UTextBlock* Size[0x08]; // 0x2e8(0x08)
	struct UTextBlock* VersionCompatibleText[0x08]; // 0x2f0(0x08)
	struct FMulticastDelegate EventOnItemClicked[0x10]; // 0x2f8(0x10)
	struct FString Name[0x10]; // 0x308(0x10)
	struct FMulticastDelegate EventOnDownload[0x10]; // 0x318(0x10)
	float prevUnzipPercent[0x04]; // 0x328(0x04)
	bool bIsLive; // 0x32c(0x01)
	bool bIsLocal; // 0x32d(0x01)
	char pad_32E[0x2]; // 0x32e(0x02)
	struct FMulticastDelegate EventOnCancelDownloading[0x10]; // 0x330(0x10)
	struct FMulticastDelegate EventOnUpdateShouldKeep[0x10]; // 0x340(0x10)
	bool bShouldKeep; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FReplayItem ReplayItem[0x100]; // 0x358(0x100)
	struct FString RegionOrLocal[0x10]; // 0x458(0x10)
	struct UTslGameInstance* TslGameInstance[0x08]; // 0x468(0x08)
	struct FMulticastDelegate EventOnUpdateItem[0x10]; // 0x470(0x10)
	bool bIsArchived; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float prevDownloadPercent[0x04]; // 0x484(0x04)

	struct FString SetMK3DReplayVersion(int32* MK3DReplayVersion, int32* SizeInMin, struct FString* SizeText); // Function ReplayListItem.ReplayListItem_C.SetMK3DReplayVersion // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetHaveCameraEvent(struct FString* LengthText, int32* SizeInSec); // Function ReplayListItem.ReplayListItem_C.SetHaveCameraEvent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetGameVersion(int32* SizeInSec, struct FString* CallFunc__390858a7fc_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetGameVersion // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetAllDeadOrWin(int32* SizeInSec, struct FString* CallFunc__42f7b10ca4_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetSeverRecording(struct FString* CallFunc__390858a7fc_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetSeverRecording // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetActionMessageDownloadPercent(); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	float ShowDownloadPercent(float* CallFunc__846c340432_ReturnValue); // Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void DisableDownload(); // Function ReplayListItem.ReplayListItem_C.DisableDownload // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void SetArchived(bool IsArchived); // Function ReplayListItem.ReplayListItem_C.SetArchived // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void SetRegionOrLocal(); // Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void SetShouldKeep(); // Function ReplayListItem.ReplayListItem_C.SetShouldKeep // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetCorrupt(bool bIsCorrupt, struct FString* CallFunc__42f7b10ca4_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetCorrupt // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetInComplete(struct FString* CallFunc__390858a7fc_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetInComplete // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetVersionCompatible(); // Function ReplayListItem.ReplayListItem_C.SetVersionCompatible // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetMode(int32* SizeInMin); // Function ReplayListItem.ReplayListItem_C.SetMode // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	int32 SetLength(struct FString* CallFunc__79188456fa_ReturnValue2, struct FString* CallFunc__79188456fa_ReturnValue3); // Function ReplayListItem.ReplayListItem_C.SetLength // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void SetActionMessageSimple(struct FString* Message); // Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void SetActionMessageDecompressPercent(float* fPercent, struct FString* CallFunc__390858a7fc_ReturnValue, struct FString* CallFunc__390858a7fc_ReturnValue2); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void SetActionMessage(bool bIsDownloading); // Function ReplayListItem.ReplayListItem_C.SetActionMessage // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool SetDownloadCancelBtns(bool bIsUnzipping); // Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetDate(int32* CallFunc_GetSecond_ReturnValue, int32* CallFunc_GetMinute_ReturnValue, struct FString* CallFunc__79188456fa_ReturnValue3, int32* CallFunc_GetMonth_ReturnValue, int32* CallFunc_GetYear_ReturnValue, struct FString* CallFunc__79188456fa_ReturnValue5, struct FString* CallFunc__390858a7fc_ReturnValue, struct FString* CallFunc__390858a7fc_ReturnValue3, struct FString* CallFunc__390858a7fc_ReturnValue8); // Function ReplayListItem.ReplayListItem_C.SetDate // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void SetLive(bool IsLive); // Function ReplayListItem.ReplayListItem_C.SetLive // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetSize(struct FString* LengthText, float* CallFunc__846c340432_ReturnValue2, struct FString* CallFunc__390858a7fc_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetSize // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetFriendlyName(); // Function ReplayListItem.ReplayListItem_C.SetFriendlyName // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetReplayItem(struct FReplayItem* ReplayItem); // Function ReplayListItem.ReplayListItem_C.SetReplayItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString SetSessionName(struct FString* Text, struct FString* StrLive, struct FString* CallFunc__390858a7fc_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetSessionName // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	float OnProgress(); // Function ReplayListItem.ReplayListItem_C.OnProgress // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FString OnFileDone(); // Function ReplayListItem.ReplayListItem_C.OnFileDone // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnDone(struct FString* archive); // Function ReplayListItem.ReplayListItem_C.OnDone // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	struct FString UnzipEvent(); // Function ReplayListItem.ReplayListItem_C.UnzipEvent // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString ShowUnzipPercent(); // Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void OnStartProcess(struct FString* archive); // Function ReplayListItem.ReplayListItem_C.OnStartProcess // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FString OnFileFound(struct FString* file); // Function ReplayListItem.ReplayListItem_C.OnFileFound // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ShowUnZipFileDone(struct FString* archive); // Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString ShowUnzipDone(); // Function ReplayListItem.ReplayListItem_C.ShowUnzipDone // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function ReplayListItem.ReplayListItem_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	DelegateProperty ExecuteUbergraph_ReplayListItem(struct FString* K2Node_Event_archive3, struct UTslGameInstance** K2Node_DynamicCast_AsTsl_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc__47b7de615e_ReturnValue, struct FString* K2Node_CustomEvent_strFullPath, int32* K2Node_CustomEvent_bytes, struct FString* K2Node_Event_archive, bool CallFunc__43787c8a99_ReturnValue, DelegateProperty* _61b405a872_OutputDelegate2); // Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem // HasDefaults // @ game+0x2cd4ac
	void EventOnUpdateItem__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FReplayItem EventOnUpdateShouldKeep__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString EventOnCancelDownloading__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString EventOnDownload__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString EventOnItemClicked__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
};


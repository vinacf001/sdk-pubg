// WidgetBlueprintGeneratedClass ReplayListItem.ReplayListItem_C
// Size: 0x488 (Inherited: 0x250)
struct UReplayListItem_C : UUserWidget {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x250(0x08)
	struct UTextBlock* ActionMessage; // 0x258(0x08)
	struct UTextBlock* AllDeadOrWinText; // 0x260(0x08)
	struct UButton* ButtonItem; // 0x268(0x08)
	struct UTextBlock* CameraEventText; // 0x270(0x08)
	struct UButton* Cancel; // 0x278(0x08)
	struct UCheckBox* CheckBoxShouldKeep; // 0x280(0x08)
	struct UTextBlock* CorruptText; // 0x288(0x08)
	struct UTextBlock* Date; // 0x290(0x08)
	struct UButton* Download; // 0x298(0x08)
	struct UTextBlock* FriendlyName; // 0x2a0(0x08)
	struct UTextBlock* GameVersion; // 0x2a8(0x08)
	struct UTextBlock* InCompleteText; // 0x2b0(0x08)
	struct UTextBlock* Length; // 0x2b8(0x08)
	struct UTextBlock* Live; // 0x2c0(0x08)
	struct UTextBlock* MK3DReplayVersion; // 0x2c8(0x08)
	struct UTextBlock* Mode; // 0x2d0(0x08)
	struct UTextBlock* ServerRecordingText; // 0x2d8(0x08)
	struct UTextBlock* SessionName; // 0x2e0(0x08)
	struct UTextBlock* Size; // 0x2e8(0x08)
	struct UTextBlock* VersionCompatibleText; // 0x2f0(0x08)
	struct FMulticastDelegate EventOnItemClicked; // 0x2f8(0x10)
	struct FString Name; // 0x308(0x10)
	struct FMulticastDelegate EventOnDownload; // 0x318(0x10)
	float prevUnzipPercent; // 0x328(0x04)
	bool bIsLive; // 0x32c(0x01)
	bool bIsLocal; // 0x32d(0x01)
	char pad_32E[0x2]; // 0x32e(0x02)
	struct FMulticastDelegate EventOnCancelDownloading; // 0x330(0x10)
	struct FMulticastDelegate EventOnUpdateShouldKeep; // 0x340(0x10)
	bool bShouldKeep; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FReplayItem ReplayItem; // 0x358(0x100)
	struct FString RegionOrLocal; // 0x458(0x10)
	struct UTslGameInstance* TslGameInstance; // 0x468(0x08)
	struct FMulticastDelegate EventOnUpdateItem; // 0x470(0x10)
	bool bIsArchived; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float prevDownloadPercent; // 0x484(0x04)

	struct FString SetMK3DReplayVersion(struct FString SizeText, struct FString CallFunc__3cb7b87e18_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetMK3DReplayVersion // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetHaveCameraEvent(struct FString LengthText, struct FString CallFunc__d88010b733_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetHaveCameraEvent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetGameVersion(struct FString LengthText); // Function ReplayListItem.ReplayListItem_C.SetGameVersion // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	int32 SetAllDeadOrWin(struct FString SizeText, struct FString CallFunc__d88010b733_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetSeverRecording(bool bIsServerRecording, struct FString CallFunc__3cb7b87e18_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetSeverRecording // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetActionMessageDownloadPercent(); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	float ShowDownloadPercent(float CallFunc__2a6761ce24_ReturnValue, bool CallFunc__8334780abc_ReturnValue); // Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void DisableDownload(); // Function ReplayListItem.ReplayListItem_C.DisableDownload // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool SetArchived(); // Function ReplayListItem.ReplayListItem_C.SetArchived // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void SetRegionOrLocal(struct FString inRegionOrLocal); // Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void SetShouldKeep(); // Function ReplayListItem.ReplayListItem_C.SetShouldKeep // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetCorrupt(struct FString CallFunc__3cb7b87e18_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetCorrupt // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetInComplete(); // Function ReplayListItem.ReplayListItem_C.SetInComplete // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetVersionCompatible(bool bIsVersionCompatible); // Function ReplayListItem.ReplayListItem_C.SetVersionCompatible // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetMode(int32 SizeInSec); // Function ReplayListItem.ReplayListItem_C.SetMode // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetLength(struct FString CallFunc__6fed9a27d9_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue3); // Function ReplayListItem.ReplayListItem_C.SetLength // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetActionMessageSimple(); // Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetActionMessageDecompressPercent(); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void SetActionMessage(bool bIsDownloading); // Function ReplayListItem.ReplayListItem_C.SetActionMessage // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool SetDownloadCancelBtns(); // Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetDate(struct FDateTime Date, struct FString CallFunc__6fed9a27d9_ReturnValue4, struct FString CallFunc__3cb7b87e18_ReturnValue2); // Function ReplayListItem.ReplayListItem_C.SetDate // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool SetLive(); // Function ReplayListItem.ReplayListItem_C.SetLive // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetSize(int32 SizeInMin, float CallFunc__2a6761ce24_ReturnValue, struct FText CallFunc__8ede4714d5_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue2); // Function ReplayListItem.ReplayListItem_C.SetSize // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void SetFriendlyName(struct FString FriendlyName); // Function ReplayListItem.ReplayListItem_C.SetFriendlyName // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void SetReplayItem(struct FString IsLive); // Function ReplayListItem.ReplayListItem_C.SetReplayItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetSessionName(); // Function ReplayListItem.ReplayListItem_C.SetSessionName // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void OnProgress(struct FString archive, float Percentage); // Function ReplayListItem.ReplayListItem_C.OnProgress // Event|Public|BlueprintEvent // @ game+0x293938
	void OnFileDone(struct FString archive); // Function ReplayListItem.ReplayListItem_C.OnFileDone // Event|Public|BlueprintEvent // @ game+0x293938
	void OnDone(struct FString archive); // Function ReplayListItem.ReplayListItem_C.OnDone // Event|Public|BlueprintEvent // @ game+0x293938
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature // BlueprintEvent // @ game+0x293938
	void UnzipEvent(struct FString strFullPath); // Function ReplayListItem.ReplayListItem_C.UnzipEvent // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ShowUnzipPercent(struct FString archive, float Percentage); // Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	struct FString OnStartProcess(); // Function ReplayListItem.ReplayListItem_C.OnStartProcess // Event|Public|BlueprintEvent // @ game+0x293938
	void OnFileFound(struct FString file); // Function ReplayListItem.ReplayListItem_C.OnFileFound // Event|Public|BlueprintEvent // @ game+0x293938
	void ShowUnZipFileDone(struct FString archive); // Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ShowUnzipDone(); // Function ReplayListItem.ReplayListItem_C.ShowUnzipDone // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void Construct(); // Function ReplayListItem.ReplayListItem_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	DelegateProperty ExecuteUbergraph_ReplayListItem(struct FString K2Node_Event_archive5, float K2Node_Event_percentage, struct FReplayItem K2Node_MakeStruct_ReplayItem, bool CallFunc__d5b382984b_ReturnValue, float K2Node_CustomEvent_percentage, struct FString K2Node_CustomEvent_archive2, float CallFunc__d3f5532c39_ReturnValue); // Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem // HasDefaults // @ game+0x293938
	void EventOnUpdateItem__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString EventOnUpdateShouldKeep__DelegateSignature(struct FReplayItem inReplayItem); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void EventOnCancelDownloading__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void EventOnDownload__DelegateSignature(struct FString Name); // Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void EventOnItemClicked__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x293938
};


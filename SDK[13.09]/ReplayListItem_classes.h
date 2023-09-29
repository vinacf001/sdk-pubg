// WidgetBlueprintGeneratedClass ReplayListItem.ReplayListItem_C
// Size: 0x488 (Inherited: 0x250)
struct UReplayListItem_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x250(0x08)
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

	int32 SetMK3DReplayVersion(struct FString LengthText, struct FString SizeText, struct FString CallFunc__e4959400e5_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetMK3DReplayVersion // None // @ game+0x26a108
	struct FString SetHaveCameraEvent(); // Function ReplayListItem.ReplayListItem_C.SetHaveCameraEvent // None // @ game+0x26a108
	struct FString SetGameVersion(struct FString CallFunc__edc080a44e_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetGameVersion // None // @ game+0x26a108
	struct FString SetAllDeadOrWin(int32 SizeInMin, struct FString SizeText, struct FString CallFunc__7e70508ff1_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin // None // @ game+0x26a108
	struct FString SetSeverRecording(); // Function ReplayListItem.ReplayListItem_C.SetSeverRecording // None // @ game+0x26a108
	void SetActionMessageDownloadPercent(float fPercent, struct FString CallFunc__d03917fad9_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue2); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent // None // @ game+0x26a108
	float ShowDownloadPercent(int32 nReceived, bool CallFunc__7e2403ed42_ReturnValue); // Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent // None // @ game+0x26a108
	void DisableDownload(); // Function ReplayListItem.ReplayListItem_C.DisableDownload // None // @ game+0x26a108
	void SetArchived(); // Function ReplayListItem.ReplayListItem_C.SetArchived // None // @ game+0x26a108
	struct FString SetRegionOrLocal(); // Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal // None // @ game+0x26a108
	void SetShouldKeep(); // Function ReplayListItem.ReplayListItem_C.SetShouldKeep // None // @ game+0x26a108
	struct FString SetCorrupt(); // Function ReplayListItem.ReplayListItem_C.SetCorrupt // None // @ game+0x26a108
	bool SetInComplete(struct FString CallFunc__7e70508ff1_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetInComplete // None // @ game+0x26a108
	struct FString SetVersionCompatible(struct FString CallFunc__edc080a44e_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetVersionCompatible // None // @ game+0x26a108
	int32 SetMode(struct FString LengthText, struct FString SizeText); // Function ReplayListItem.ReplayListItem_C.SetMode // None // @ game+0x26a108
	struct FString SetLength(); // Function ReplayListItem.ReplayListItem_C.SetLength // None // @ game+0x26a108
	struct FString SetActionMessageSimple(); // Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple // None // @ game+0x26a108
	struct FString SetActionMessageDecompressPercent(); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent // None // @ game+0x26a108
	bool SetActionMessage(); // Function ReplayListItem.ReplayListItem_C.SetActionMessage // None // @ game+0x26a108
	void SetDownloadCancelBtns(bool bIsUnzipping); // Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns // None // @ game+0x26a108
	struct FString SetDate(struct FString CallFunc__e4959400e5_ReturnValue3, struct FString CallFunc__e4959400e5_ReturnValue4, struct FString CallFunc__edc080a44e_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue2, struct FString CallFunc__edc080a44e_ReturnValue3, struct FString CallFunc__edc080a44e_ReturnValue4, struct FString CallFunc__edc080a44e_ReturnValue6, struct FString CallFunc__edc080a44e_ReturnValue7, struct FString CallFunc__edc080a44e_ReturnValue8); // Function ReplayListItem.ReplayListItem_C.SetDate // None // @ game+0x26a108
	bool SetLive(); // Function ReplayListItem.ReplayListItem_C.SetLive // None // @ game+0x26a108
	struct FString SetSize(int32 SizeInSec, struct FString SizeText, struct FText CallFunc__118e3222ec_ReturnValue, struct FString CallFunc__e95ba037ed_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetSize // None // @ game+0x26a108
	void SetFriendlyName(); // Function ReplayListItem.ReplayListItem_C.SetFriendlyName // None // @ game+0x26a108
	struct FReplayItem SetReplayItem(); // Function ReplayListItem.ReplayListItem_C.SetReplayItem // None // @ game+0x26a108
	void SetSessionName(struct FString Text, struct FString StrLive, struct FString CallFunc__edc080a44e_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue2); // Function ReplayListItem.ReplayListItem_C.SetSessionName // None // @ game+0x26a108
	struct FString OnProgress(); // Function ReplayListItem.ReplayListItem_C.OnProgress // None // @ game+0x26a108
	struct FString OnFileDone(); // Function ReplayListItem.ReplayListItem_C.OnFileDone // None // @ game+0x26a108
	void OnDone(); // Function ReplayListItem.ReplayListItem_C.OnDone // None // @ game+0x26a108
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature // None // @ game+0x26a108
	void UnzipEvent(struct FString strFullPath); // Function ReplayListItem.ReplayListItem_C.UnzipEvent // None // @ game+0x26a108
	void ShowUnzipPercent(); // Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent // None // @ game+0x26a108
	void BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	struct FString OnStartProcess(); // Function ReplayListItem.ReplayListItem_C.OnStartProcess // None // @ game+0x26a108
	void OnFileFound(); // Function ReplayListItem.ReplayListItem_C.OnFileFound // None // @ game+0x26a108
	void ShowUnZipFileDone(); // Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone // None // @ game+0x26a108
	struct FString ShowUnzipDone(); // Function ReplayListItem.ReplayListItem_C.ShowUnzipDone // None // @ game+0x26a108
	void BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void Construct(); // Function ReplayListItem.ReplayListItem_C.Construct // None // @ game+0x26a108
	bool ExecuteUbergraph_ReplayListItem(int32 EntryPoint, enum class EZipUtilityCompletionState K2Node_Event_CompletionState, struct FString K2Node_CustomEvent_strFullPath, struct FString K2Node_CustomEvent_strToExtract, bool CallFunc__9c4d0d4607_ReturnValue, struct FString K2Node_Event_archive, int32 K2Node_Event_size, float CallFunc__d1b7da2a10_ReturnValue, struct FString K2Node_CustomEvent_archive, bool CallFunc__cd60d899db_ReturnValue, DelegateProperty _37b0074df2_OutputDelegate3); // Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem // None // @ game+0x26a108
	void EventOnUpdateItem__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature // None // @ game+0x26a108
	struct FReplayItem EventOnUpdateShouldKeep__DelegateSignature(struct FString RegionOrLocal); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature // None // @ game+0x26a108
	void EventOnCancelDownloading__DelegateSignature(struct FString Name); // Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature // None // @ game+0x26a108
	void EventOnDownload__DelegateSignature(struct FString Name); // Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature // None // @ game+0x26a108
	void EventOnItemClicked__DelegateSignature(struct FString inRegionOrLocal); // Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature // None // @ game+0x26a108
};


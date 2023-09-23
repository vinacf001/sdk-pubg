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

	int32 SetMK3DReplayVersion(struct FString SizeText, struct FString CallFunc__e4959400e5_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetMK3DReplayVersion // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString SetHaveCameraEvent(struct FString CallFunc__7e70508ff1_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetHaveCameraEvent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString SetGameVersion(int32 SizeInMin, int32 SizeInSec); // Function ReplayListItem.ReplayListItem_C.SetGameVersion // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	int32 SetAllDeadOrWin(); // Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString SetSeverRecording(struct FString CallFunc__7e70508ff1_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetSeverRecording // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString SetActionMessageDownloadPercent(float fPercent, struct FString CallFunc__d03917fad9_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float ShowDownloadPercent(int32 nReceived, float CallFunc__b8cad62f4a_ReturnValue); // Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void DisableDownload(); // Function ReplayListItem.ReplayListItem_C.DisableDownload // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void SetArchived(); // Function ReplayListItem.ReplayListItem_C.SetArchived // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void SetRegionOrLocal(struct FString inRegionOrLocal); // Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void SetShouldKeep(); // Function ReplayListItem.ReplayListItem_C.SetShouldKeep // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void SetCorrupt(struct FString CallFunc__7e70508ff1_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetCorrupt // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString SetInComplete(); // Function ReplayListItem.ReplayListItem_C.SetInComplete // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString SetVersionCompatible(); // Function ReplayListItem.ReplayListItem_C.SetVersionCompatible // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString SetMode(struct FString Mode); // Function ReplayListItem.ReplayListItem_C.SetMode // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	int32 SetLength(int32 SizeInMin, struct FString SizeText, struct FString CallFunc__e4959400e5_ReturnValue, bool CallFunc__d1b7f5dc7b_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue3, struct FText CallFunc__118e3222ec_ReturnValue, struct FString CallFunc__e4959400e5_ReturnValue3); // Function ReplayListItem.ReplayListItem_C.SetLength // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void SetActionMessageSimple(struct FString Message); // Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void SetActionMessageDecompressPercent(struct FString CallFunc__d03917fad9_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool SetActionMessage(); // Function ReplayListItem.ReplayListItem_C.SetActionMessage // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool SetDownloadCancelBtns(); // Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString SetDate(struct FDateTime Date, struct FString CallFunc__e4959400e5_ReturnValue4, struct FString CallFunc__edc080a44e_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue5, struct FString CallFunc__edc080a44e_ReturnValue9, struct FString CallFunc__edc080a44e_ReturnValue10); // Function ReplayListItem.ReplayListItem_C.SetDate // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool SetLive(); // Function ReplayListItem.ReplayListItem_C.SetLive // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString SetSize(struct FString SizeText, float CallFunc__917c13b33f_ReturnValue2, struct FText CallFunc__ace63d1958_ReturnValue2, struct FString CallFunc__e95ba037ed_ReturnValue2); // Function ReplayListItem.ReplayListItem_C.SetSize // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString SetFriendlyName(); // Function ReplayListItem.ReplayListItem_C.SetFriendlyName // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void SetReplayItem(struct FString IsLive); // Function ReplayListItem.ReplayListItem_C.SetReplayItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString SetSessionName(); // Function ReplayListItem.ReplayListItem_C.SetSessionName // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float OnProgress(); // Function ReplayListItem.ReplayListItem_C.OnProgress // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FString OnFileDone(); // Function ReplayListItem.ReplayListItem_C.OnFileDone // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FString OnDone(); // Function ReplayListItem.ReplayListItem_C.OnDone // Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void UnzipEvent(struct FString strFullPath); // Function ReplayListItem.ReplayListItem_C.UnzipEvent // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float ShowUnzipPercent(struct FString archive); // Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void OnStartProcess(struct FString archive); // Function ReplayListItem.ReplayListItem_C.OnStartProcess // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FString OnFileFound(); // Function ReplayListItem.ReplayListItem_C.OnFileFound // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FString ShowUnZipFileDone(); // Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ShowUnzipDone(); // Function ReplayListItem.ReplayListItem_C.ShowUnzipDone // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function ReplayListItem.ReplayListItem_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	DelegateProperty ExecuteUbergraph_ReplayListItem(bool _05982889a1_bIsChecked, struct FString K2Node_Event_archive4, struct UGameInstance* CallFunc__d413f47a37_ReturnValue, struct UTslGameInstance* K2Node_DynamicCast_AsTsl_Game_Instance, struct FString K2Node_CustomEvent_strFullPath, struct FString K2Node_CustomEvent_strToExtract, bool CallFunc__2eea894258_ReturnValue, struct FString K2Node_Event_archive2, struct FString K2Node_CustomEvent_file, struct FString K2Node_CustomEvent_archive, DelegateProperty _37b0074df2_OutputDelegate2); // Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem // HasDefaults // @ game+0x1e037c
	void EventOnUpdateItem__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void EventOnUpdateShouldKeep__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString EventOnCancelDownloading__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void EventOnDownload__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void EventOnItemClicked__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
};


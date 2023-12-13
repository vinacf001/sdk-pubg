// WidgetBlueprintGeneratedClass ReplayListItem.ReplayListItem_C
// Size: 0x490 (Inherited: 0x258)
struct UReplayListItem_C : UUserWidget {
	struct F*a6c93df757 UberGraphFrame; // 0x258(0x08)
	struct UTextBlock* ActionMessage; // 0x260(0x08)
	struct UTextBlock* AllDeadOrWinText; // 0x268(0x08)
	struct UButton* ButtonItem; // 0x270(0x08)
	struct UTextBlock* CameraEventText; // 0x278(0x08)
	struct UButton* Cancel; // 0x280(0x08)
	struct UCheckBox* CheckBoxShouldKeep; // 0x288(0x08)
	struct UTextBlock* CorruptText; // 0x290(0x08)
	struct UTextBlock* Date; // 0x298(0x08)
	struct UButton* Download; // 0x2a0(0x08)
	struct UTextBlock* FriendlyName; // 0x2a8(0x08)
	struct UTextBlock* GameVersion; // 0x2b0(0x08)
	struct UTextBlock* InCompleteText; // 0x2b8(0x08)
	struct UTextBlock* Length; // 0x2c0(0x08)
	struct UTextBlock* Live; // 0x2c8(0x08)
	struct UTextBlock* MK3DReplayVersion; // 0x2d0(0x08)
	struct UTextBlock* Mode; // 0x2d8(0x08)
	struct UTextBlock* ServerRecordingText; // 0x2e0(0x08)
	struct UTextBlock* SessionName; // 0x2e8(0x08)
	struct UTextBlock* Size; // 0x2f0(0x08)
	struct UTextBlock* VersionCompatibleText; // 0x2f8(0x08)
	struct FMulticastDelegate EventOnItemClicked; // 0x300(0x10)
	struct FString Name; // 0x310(0x10)
	struct FMulticastDelegate EventOnDownload; // 0x320(0x10)
	float prevUnzipPercent; // 0x330(0x04)
	bool bIsLive; // 0x334(0x01)
	bool bIsLocal; // 0x335(0x01)
	char pad_336[0x2]; // 0x336(0x02)
	struct FMulticastDelegate EventOnCancelDownloading; // 0x338(0x10)
	struct FMulticastDelegate EventOnUpdateShouldKeep; // 0x348(0x10)
	bool bShouldKeep; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FReplayItem ReplayItem; // 0x360(0x100)
	struct FString RegionOrLocal; // 0x460(0x10)
	struct UTslGameInstance* TslGameInstance; // 0x470(0x08)
	struct FMulticastDelegate EventOnUpdateItem; // 0x478(0x10)
	bool bIsArchived; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	float prevDownloadPercent; // 0x48c(0x04)

	struct FText SetMK3DReplayVersion(); // Function ReplayListItem.ReplayListItem_C.SetMK3DReplayVersion // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FText SetHaveCameraEvent(); // Function ReplayListItem.ReplayListItem_C.SetHaveCameraEvent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FText SetGameVersion(); // Function ReplayListItem.ReplayListItem_C.SetGameVersion // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FText SetAllDeadOrWin(); // Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FText SetSeverRecording(); // Function ReplayListItem.ReplayListItem_C.SetSeverRecording // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FText SetActionMessageDownloadPercent(); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	bool ShowDownloadPercent(); // Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void DisableDownload(); // Function ReplayListItem.ReplayListItem_C.DisableDownload // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FText SetArchived(); // Function ReplayListItem.ReplayListItem_C.SetArchived // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	bool SetRegionOrLocal(); // Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	bool SetShouldKeep(); // Function ReplayListItem.ReplayListItem_C.SetShouldKeep // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FText SetCorrupt(); // Function ReplayListItem.ReplayListItem_C.SetCorrupt // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FText SetInComplete(); // Function ReplayListItem.ReplayListItem_C.SetInComplete // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FString SetVersionCompatible(struct FString CallFunc__a4f37e3e14_ReturnValue, struct FText CallFunc__8a82cf7916_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetVersionCompatible // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetMode(struct FString Mode, int32 SizeInMin, struct FString LengthText, int32 SizeInSec, struct FString SizeText, struct FText CallFunc__8a82cf7916_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetMode // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetLength(int32 LengthInMS, int32 SizeInMin, struct FString LengthText, int32 SizeInSec, struct FString SizeText, int32 CallFunc__cab3faa422_ReturnValue, struct FString CallFunc__cc353e651f_ReturnValue, struct FString CallFunc__cc353e651f_ReturnValue2, bool CallFunc__045254c93f_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue2, struct FString CallFunc__a4f37e3e14_ReturnValue3, struct FText CallFunc__8a82cf7916_ReturnValue, int32 CallFunc__7fcfad6df4_ReturnValue, int32 CallFunc__cab3faa422_ReturnValue2, struct FString CallFunc__cc353e651f_ReturnValue3, struct FString CallFunc__a4f37e3e14_ReturnValue4); // Function ReplayListItem.ReplayListItem_C.SetLength // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetActionMessageSimple(struct FString Message, struct FText CallFunc__8a82cf7916_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetActionMessageDecompressPercent(float fPercent, struct FString CallFunc__e22fa5e649_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue2, struct FText CallFunc__8a82cf7916_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetActionMessage(bool bIsDownloading, bool bIsUnzipping); // Function ReplayListItem.ReplayListItem_C.SetActionMessage // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetDownloadCancelBtns(bool bIsDownloading, bool bIsUnzipping, bool CallFunc_BooleanOR_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetDate(struct FDateTime Date, int32 CallFunc_GetSecond_ReturnValue, int32 CallFunc_GetMinute_ReturnValue, struct FString CallFunc__cc353e651f_ReturnValue, struct FString CallFunc__cc353e651f_ReturnValue2, int32 CallFunc_GetHour_ReturnValue, int32 CallFunc_GetDay_ReturnValue, struct FString CallFunc__cc353e651f_ReturnValue3, struct FString CallFunc__cc353e651f_ReturnValue4, int32 CallFunc_GetMonth_ReturnValue, int32 CallFunc_GetYear_ReturnValue, struct FString CallFunc__cc353e651f_ReturnValue5, struct FString CallFunc__cc353e651f_ReturnValue6, struct FString CallFunc__a4f37e3e14_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue2, struct FString CallFunc__a4f37e3e14_ReturnValue3, struct FString CallFunc__a4f37e3e14_ReturnValue4, struct FString CallFunc__a4f37e3e14_ReturnValue5, struct FString CallFunc__a4f37e3e14_ReturnValue6, struct FString CallFunc__a4f37e3e14_ReturnValue7); // Function ReplayListItem.ReplayListItem_C.SetDate // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetLive(); // Function ReplayListItem.ReplayListItem_C.SetLive // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetSize(); // Function ReplayListItem.ReplayListItem_C.SetSize // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetFriendlyName(); // Function ReplayListItem.ReplayListItem_C.SetFriendlyName // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetReplayItem(); // Function ReplayListItem.ReplayListItem_C.SetReplayItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetSessionName(); // Function ReplayListItem.ReplayListItem_C.SetSessionName // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void OnProgress(); // Function ReplayListItem.ReplayListItem_C.OnProgress // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void OnFileDone(); // Function ReplayListItem.ReplayListItem_C.OnFileDone // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void OnDone(); // Function ReplayListItem.ReplayListItem_C.OnDone // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void UnzipEvent(); // Function ReplayListItem.ReplayListItem_C.UnzipEvent // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ShowUnzipPercent(); // Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void OnFileFound(); // Function ReplayListItem.ReplayListItem_C.OnFileFound // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void OnStartProcess(struct FString archive, int32 Bytes); // Function ReplayListItem.ReplayListItem_C.OnStartProcess // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ShowUnZipFileDone(struct FString archive, struct FString file); // Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ShowUnzipDone(struct FString archive, enum class EZipUtilityCompletionState CompletionState); // Function ReplayListItem.ReplayListItem_C.ShowUnzipDone // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void Construct(); // Function ReplayListItem.ReplayListItem_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_ReplayListItem(int32 EntryPoint, DelegateProperty _d8b1f23a78_OutputDelegate, struct FString K2Node_Event_archive3, enum class EZipUtilityCompletionState K2Node_Event_CompletionState, bool _5c6cfaa940_bIsChecked, struct FString K2Node_Event_archive4, struct FString K2Node_Event_file2, struct FString K2Node_Event_archive5, float K2Node_Event_percentage, int32 K2Node_Event_bytes2, struct UGameInstance* CallFunc__3d5915f3a5_ReturnValue, struct UTslGameInstance* K2Node_DynamicCast_AsTsl_Game_Instance, bool K2Node_DynamicCast_bSuccess, struct FReplayItem K2Node_MakeStruct_ReplayItem, bool CallFunc__cac4d5fcd0_ReturnValue, struct FString K2Node_CustomEvent_strFullPath, struct FString K2Node_CustomEvent_strToExtract, bool CallFunc__10febee4b6_ReturnValue, bool CallFunc__7814fed5ef_ReturnValue, struct FString K2Node_CustomEvent_archive3, float K2Node_CustomEvent_percentage, int32 K2Node_CustomEvent_bytes, struct FString K2Node_Event_archive2, struct FString K2Node_Event_file, int32 K2Node_Event_size, struct FString K2Node_Event_archive, int32 K2Node_Event_bytes, struct FString K2Node_CustomEvent_archive2, struct FString K2Node_CustomEvent_file, float CallFunc__4c7fe8bf18_ReturnValue, struct FString K2Node_CustomEvent_archive, enum class EZipUtilityCompletionState K2Node_CustomEvent_CompletionState, bool CallFunc__8c720203dd_ReturnValue, bool CallFunc__fb0fc27c14_ReturnValue, bool CallFunc__39a0b2e089_ReturnValue, DelegateProperty _d8b1f23a78_OutputDelegate2, DelegateProperty _d8b1f23a78_OutputDelegate3, DelegateProperty _d8b1f23a78_OutputDelegate4); // Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem // HasDefaults // @ game+0x20a5d0
	void EventOnUpdateItem__DelegateSignature(struct FReplayItem inReplayItem); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void EventOnUpdateShouldKeep__DelegateSignature(struct FString RegionOrLocal, struct FReplayItem inReplayItem, struct FReplayItem bShoudUpdate); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void EventOnCancelDownloading__DelegateSignature(struct FString Name, struct UWidget* Widget); // Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void EventOnDownload__DelegateSignature(struct FString Name, struct UWidget* Widget); // Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void EventOnItemClicked__DelegateSignature(struct FString inRegionOrLocal); // Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
};


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

	struct FText SetMK3DReplayVersion(); // Function ReplayListItem.ReplayListItem_C.SetMK3DReplayVersion // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FString SetHaveCameraEvent(int32 SizeInSec, struct FString SizeText, struct FString CallFunc__073aea8bb4_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetHaveCameraEvent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void SetGameVersion(struct FString LengthText, int32 SizeInSec, struct FString SizeText, struct FString CallFunc__a4f37e3e14_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetGameVersion // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void SetAllDeadOrWin(struct FString LengthText, int32 SizeInSec, struct FString SizeText, struct FString CallFunc__073aea8bb4_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void SetSeverRecording(struct FString CallFunc__073aea8bb4_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue, struct FText CallFunc__8a82cf7916_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetSeverRecording // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FText SetActionMessageDownloadPercent(); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool ShowDownloadPercent(); // Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void DisableDownload(); // Function ReplayListItem.ReplayListItem_C.DisableDownload // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FText SetArchived(); // Function ReplayListItem.ReplayListItem_C.SetArchived // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool SetRegionOrLocal(); // Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool SetShouldKeep(); // Function ReplayListItem.ReplayListItem_C.SetShouldKeep // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FText SetCorrupt(); // Function ReplayListItem.ReplayListItem_C.SetCorrupt // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FText SetInComplete(); // Function ReplayListItem.ReplayListItem_C.SetInComplete // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void SetVersionCompatible(bool bIsVersionCompatible, struct FString CallFunc__073aea8bb4_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue, struct FText CallFunc__8a82cf7916_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetVersionCompatible // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void SetMode(int32 SizeInSec, struct FString SizeText, struct FText CallFunc__8a82cf7916_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetMode // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void SetLength(struct FString SizeText, int32 CallFunc__cab3faa422_ReturnValue, struct FString CallFunc__cc353e651f_ReturnValue, struct FString CallFunc__cc353e651f_ReturnValue2, struct FText CallFunc__8a82cf7916_ReturnValue, int32 CallFunc__7fcfad6df4_ReturnValue, int32 CallFunc__cab3faa422_ReturnValue2, struct FString CallFunc__cc353e651f_ReturnValue3); // Function ReplayListItem.ReplayListItem_C.SetLength // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void SetActionMessageSimple(); // Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FText SetActionMessageDecompressPercent(); // Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool SetActionMessage(); // Function ReplayListItem.ReplayListItem_C.SetActionMessage // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool SetDownloadCancelBtns(); // Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FString SetDate(struct FString CallFunc__a4f37e3e14_ReturnValue6, struct FString CallFunc__a4f37e3e14_ReturnValue7, struct FString CallFunc__a4f37e3e14_ReturnValue8, struct FString CallFunc__a4f37e3e14_ReturnValue9); // Function ReplayListItem.ReplayListItem_C.SetDate // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void SetLive(bool IsLive, struct FText StrStatus); // Function ReplayListItem.ReplayListItem_C.SetLive // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void SetSize(int32 SizeInBytes, float CallFunc__05195c4eb4_ReturnValue, struct FText CallFunc__8a82cf7916_ReturnValue, float CallFunc__9e9f800a8e_ReturnValue, float CallFunc__9e9f800a8e_ReturnValue2, struct FString CallFunc__a4f37e3e14_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue2, bool CallFunc__ab61acee03_ReturnValue); // Function ReplayListItem.ReplayListItem_C.SetSize // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void SetFriendlyName(); // Function ReplayListItem.ReplayListItem_C.SetFriendlyName // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool SetReplayItem(); // Function ReplayListItem.ReplayListItem_C.SetReplayItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FText SetSessionName(); // Function ReplayListItem.ReplayListItem_C.SetSessionName // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	int32 OnProgress(); // Function ReplayListItem.ReplayListItem_C.OnProgress // Event|Public|BlueprintEvent // @ game+0x370fbc
	struct FString OnFileDone(); // Function ReplayListItem.ReplayListItem_C.OnFileDone // Event|Public|BlueprintEvent // @ game+0x370fbc
	enum class EZipUtilityCompletionState OnDone(); // Function ReplayListItem.ReplayListItem_C.OnDone // Event|Public|BlueprintEvent // @ game+0x370fbc
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	bool BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	struct FString UnzipEvent(); // Function ReplayListItem.ReplayListItem_C.UnzipEvent // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	int32 ShowUnzipPercent(); // Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	struct FString OnFileFound(int32 Size); // Function ReplayListItem.ReplayListItem_C.OnFileFound // Event|Public|BlueprintEvent // @ game+0x370fbc
	void OnStartProcess(struct FString archive, int32 Bytes); // Function ReplayListItem.ReplayListItem_C.OnStartProcess // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ShowUnZipFileDone(); // Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ShowUnzipDone(struct FString archive, enum class EZipUtilityCompletionState CompletionState); // Function ReplayListItem.ReplayListItem_C.ShowUnzipDone // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void Construct(); // Function ReplayListItem.ReplayListItem_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	DelegateProperty ExecuteUbergraph_ReplayListItem(enum class EZipUtilityCompletionState K2Node_Event_CompletionState, bool _5c6cfaa940_bIsChecked, struct FString K2Node_Event_archive4, struct FString K2Node_Event_file2, struct UTslGameInstance* K2Node_DynamicCast_AsTsl_Game_Instance, bool K2Node_DynamicCast_bSuccess, struct FReplayItem K2Node_MakeStruct_ReplayItem, bool CallFunc__cac4d5fcd0_ReturnValue); // Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem // HasDefaults // @ game+0x370fbc
	struct FReplayItem EventOnUpdateItem__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FReplayItem EventOnUpdateShouldKeep__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct UWidget* EventOnCancelDownloading__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct UWidget* EventOnDownload__DelegateSignature(); // Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void EventOnItemClicked__DelegateSignature(struct FString inRegionOrLocal, struct FReplayItem inReplayItem); // Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
};


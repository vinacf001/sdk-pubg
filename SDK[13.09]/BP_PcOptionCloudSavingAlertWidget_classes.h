// WidgetBlueprintGeneratedClass BP_PcOptionCloudSavingAlertWidget.BP_PcOptionCloudSavingAlertWidget_C
// Size: 0x488 (Inherited: 0x488)
struct UBP_PcOptionCloudSavingAlertWidget_C : U*a9f3584bb6 {
	struct UButton* TopbarButton; // 0x410(0x08)
	struct U*6b11b3bf02* Anim_In; // 0x418(0x08)
	struct U*6b11b3bf02* Anim_Out; // 0x420(0x08)
	struct UButton* UploadButton; // 0x428(0x08)
	struct UButton* DownloadButton; // 0x430(0x08)
	struct UTextBlock* TitleText; // 0x438(0x08)
	struct UTextBlock* DescriptionText; // 0x440(0x08)
	struct UTextBlock* UploadText; // 0x448(0x08)
	struct UTextBlock* DownloadText; // 0x450(0x08)
	DelegateProperty OnSavePopupButtonPressEvent; // 0x458(0x10)
	DelegateProperty OnLoadPopupButtonPressEvent; // 0x468(0x10)
	struct U*38a6a790e5* *982c921f8d; // 0x478(0x08)

	void OnUploadButtonHovered(); // Function TslGame.*a9f3584bb6.OnUploadButtonHovered // None // @ game+0x56a48d0
	void OnLoadPopupButtonPressed(); // Function TslGame.*a9f3584bb6.OnLoadPopupButtonPressed // None // @ game+0x56e04e8
	void OnUploadButtonClicked(); // Function TslGame.*a9f3584bb6.OnUploadButtonClicked // None // @ game+0x56e71d4
	void OnSavePopupButtonPressed(); // Function TslGame.*a9f3584bb6.OnSavePopupButtonPressed // None // @ game+0x56e394c
	void OnTopbarButtonHovered(); // Function TslGame.*a9f3584bb6.OnTopbarButtonHovered // None // @ game+0x56a48d0
	void OnTopbarButtonClicked(); // Function TslGame.*a9f3584bb6.OnTopbarButtonClicked // None // @ game+0x56e6104
	void OnDownloadButtonHovered(); // Function TslGame.*a9f3584bb6.OnDownloadButtonHovered // None // @ game+0x56a48d0
	void OnDownloadButtonClicked(); // Function TslGame.*a9f3584bb6.OnDownloadButtonClicked // None // @ game+0x56ddf2c
};


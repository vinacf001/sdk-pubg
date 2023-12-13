// WidgetBlueprintGeneratedClass BP_PcOptionCloudSavingAlertWidget.BP_PcOptionCloudSavingAlertWidget_C
// Size: 0x490 (Inherited: 0x490)
struct UBP_PcOptionCloudSavingAlertWidget_C : U*ad80b17021 {
	struct UButton* TopbarButton; // 0x418(0x08)
	struct U*9c8bfa0aee* Anim_In; // 0x420(0x08)
	struct U*9c8bfa0aee* Anim_Out; // 0x428(0x08)
	struct UButton* UploadButton; // 0x430(0x08)
	struct UButton* DownloadButton; // 0x438(0x08)
	struct UTextBlock* TitleText; // 0x440(0x08)
	struct UTextBlock* DescriptionText; // 0x448(0x08)
	struct UTextBlock* UploadText; // 0x450(0x08)
	struct UTextBlock* DownloadText; // 0x458(0x08)
	DelegateProperty OnSavePopupButtonPressEvent; // 0x460(0x10)
	DelegateProperty OnLoadPopupButtonPressEvent; // 0x470(0x10)
	struct U*8bb837196a* *d610e596b4; // 0x480(0x08)

	void OnUploadButtonHovered(); // Function TslGame.*ad80b17021.OnUploadButtonHovered // Final|Native|Public // @ game+0x5d875d8
	void OnTopbarButtonClicked(); // Function TslGame.*ad80b17021.OnTopbarButtonClicked // Final|Native|Public // @ game+0x5d8e3e0
	void OnTopbarButtonHovered(); // Function TslGame.*ad80b17021.OnTopbarButtonHovered // Final|Native|Public // @ game+0x5d875d8
	void OnUploadButtonClicked(); // Function TslGame.*ad80b17021.OnUploadButtonClicked // Final|Native|Public // @ game+0x5d8edd8
	void OnDownloadButtonHovered(); // Function TslGame.*ad80b17021.OnDownloadButtonHovered // Final|Native|Public // @ game+0x5d875d8
	void OnSavePopupButtonPressed(enum class *62cdf2ca7f Param0); // Function TslGame.*ad80b17021.OnSavePopupButtonPressed // Final|Native|Public // @ game+0x5d8c7dc
	void OnLoadPopupButtonPressed(); // Function TslGame.*ad80b17021.OnLoadPopupButtonPressed // Final|Native|Public // @ game+0x5d897b0
	void OnDownloadButtonClicked(); // Function TslGame.*ad80b17021.OnDownloadButtonClicked // Final|Native|Public // @ game+0x5d875c4
};


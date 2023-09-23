// WidgetBlueprintGeneratedClass BP_PcOption_SubTabLabelWidget.BP_PcOption_SubTabLabelWidget_C
// Size: 0x460 (Inherited: 0x460)
struct UBP_PcOption_SubTabLabelWidget_C : U*46ae79e033 {
	struct UButton* LabelButton; // 0x438(0x08)
	struct UTextBlock* NormalText; // 0x440(0x08)
	struct UTextBlock* SelectedText; // 0x448(0x08)
	struct UTextBlock* HoverText; // 0x450(0x08)
	struct UWidgetSwitcher* SubTabLabelSwitcher; // 0x458(0x08)

	void OnLableButtonHover(); // Function TslGame.*46ae79e033.OnLableButtonHover // Final|Native|Private // @ game+0x56d1078
	void OnLabelButtonOut(); // Function TslGame.*46ae79e033.OnLabelButtonOut // Final|Native|Private // @ game+0x56d1064
	void OnLabelButtonClicked(); // Function TslGame.*46ae79e033.OnLabelButtonClicked // Final|Native|Private // @ game+0x56d1050
};


// WidgetBlueprintGeneratedClass StatLocationsWidget.StatLocationsWidget_C
// Size: 0x290 (Inherited: 0x258)
struct UStatLocationsWidget_C : UUserWidget {
	struct UVerticalBox* VerticalAvgBox; // 0x258(0x08)
	struct UVerticalBox* VerticalCallBox; // 0x260(0x08)
	struct UVerticalBox* VerticalMaxBox; // 0x268(0x08)
	struct UVerticalBox* VerticalStatbox; // 0x270(0x08)
	struct FText Stats; // 0x278(0x18)

	void ClearStatBoxes(); // Function StatLocationsWidget.StatLocationsWidget_C.ClearStatBoxes // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool SetText(); // Function StatLocationsWidget.StatLocationsWidget_C.SetText // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct FText GetText_1(); // Function StatLocationsWidget.StatLocationsWidget_C.GetText_1 // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x22ddc4
};


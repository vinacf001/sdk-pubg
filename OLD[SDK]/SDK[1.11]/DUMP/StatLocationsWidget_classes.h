// WidgetBlueprintGeneratedClass StatLocationsWidget.StatLocationsWidget_C
// Size: 0x288 (Inherited: 0x250)
struct UStatLocationsWidget_C : UUserWidget {
	struct UVerticalBox* VerticalAvgBox; // 0x250(0x08)
	struct UVerticalBox* VerticalCallBox; // 0x258(0x08)
	struct UVerticalBox* VerticalMaxBox; // 0x260(0x08)
	struct UVerticalBox* VerticalStatbox; // 0x268(0x08)
	struct FText Stats; // 0x270(0x18)

	void ClearStatBoxes(); // Function StatLocationsWidget.StatLocationsWidget_C.ClearStatBoxes // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FText SetText(struct TArray<struct FString> CallFunc__09bb698759_ReturnValue, int32 CallFunc__edb1454eaf_ReturnValue2, struct USingleStatText_C* CallFunc_Create_ReturnValue); // Function StatLocationsWidget.StatLocationsWidget_C.SetText // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void GetText_1(); // Function StatLocationsWidget.StatLocationsWidget_C.GetText_1 // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2cd4ac
};


// WidgetBlueprintGeneratedClass StatLocationsWidget.StatLocationsWidget_C
// Size: 0x288 (Inherited: 0x250)
struct UStatLocationsWidget_C : UUserWidget {
	struct UVerticalBox* VerticalAvgBox; // 0x250(0x08)
	struct UVerticalBox* VerticalCallBox; // 0x258(0x08)
	struct UVerticalBox* VerticalMaxBox; // 0x260(0x08)
	struct UVerticalBox* VerticalStatbox; // 0x268(0x08)
	struct FText Stats; // 0x270(0x18)

	void ClearStatBoxes(); // Function StatLocationsWidget.StatLocationsWidget_C.ClearStatBoxes // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FString SetText(int32 CallFunc__0bad7adb6e_ReturnValue, int32 CallFunc__7c04883f3f_ReturnValue, struct USingleStatText_C* CallFunc_Create_ReturnValue, struct U*d2f00ac7d1* CallFunc_AddChildToVerticalBox_ReturnValue2, struct U*d2f00ac7d1* CallFunc_AddChildToVerticalBox_ReturnValue4, bool CallFunc__2bff9823d8_ReturnValue2); // Function StatLocationsWidget.StatLocationsWidget_C.SetText // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void GetText_1(); // Function StatLocationsWidget.StatLocationsWidget_C.GetText_1 // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x32e590
};


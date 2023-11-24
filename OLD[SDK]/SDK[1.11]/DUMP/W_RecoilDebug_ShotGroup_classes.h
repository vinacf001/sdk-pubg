// WidgetBlueprintGeneratedClass W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C
// Size: 0x330 (Inherited: 0x250)
struct UW_RecoilDebug_ShotGroup_C : UUserWidget {
	struct F*abc8f374e0 UberGraphFrame; // 0x250(0x08)
	struct UButton* Button_1; // 0x258(0x08)
	struct UButton* Button_Absolute; // 0x260(0x08)
	struct UButton* Button_Relative; // 0x268(0x08)
	struct UButton* Button_RenderBox; // 0x270(0x08)
	struct UButton* Button_RenderPoint; // 0x278(0x08)
	struct UButton* Button_ZoomIn; // 0x280(0x08)
	struct UButton* Button_ZoomOut; // 0x288(0x08)
	struct UCanvasPanel* CP_GridList; // 0x290(0x08)
	struct UCanvasPanel* CP_PointList; // 0x298(0x08)
	struct UImage* Image_2; // 0x2a0(0x08)
	struct UImage* Image_3; // 0x2a8(0x08)
	struct UImage* Image_6; // 0x2b0(0x08)
	struct UImage* Image_7; // 0x2b8(0x08)
	struct UImage* Img_PointDrawType; // 0x2c0(0x08)
	struct URetainerBox* Retainer_GridPanel; // 0x2c8(0x08)
	struct USlider* Slider_50; // 0x2d0(0x08)
	struct UImage* SliderBG; // 0x2d8(0x08)
	struct UTextBlock* T_PointDrawType; // 0x2e0(0x08)
	struct UTextBlock* T_SliderValue; // 0x2e8(0x08)
	struct UW_RecoilDebug_Target_GridMarkH_C* W_RecoilDebug_Target_GridMarkH_313; // 0x2f0(0x08)
	float PositionScale; // 0x2f8(0x04)
	int32 ZoomLevel; // 0x2fc(0x04)
	int32 DebugValueType; // 0x300(0x04)
	float StepScale; // 0x304(0x04)
	int32 DebugRenderType; // 0x308(0x04)
	float BoxSizeScale; // 0x30c(0x04)
	float VerticalVariationScalar; // 0x310(0x04)
	float MaxRangeLimit; // 0x314(0x04)
	int32 PointDrawType; // 0x318(0x04)
	bool bIsFirstShot; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct FVector FirstShotPoint; // 0x320(0x0c)
	int32 ShotGroupDrawIndex; // 0x32c(0x04)

	float AddDebugShotPoint(struct FLinearColor ___struct_Variable7, struct FLinearColor ___struct_Variable9, int32 ___int_Variable, struct FLinearColor K2Node_Select_Default, struct FVector CallFunc__bb5aca395e_ReturnValue); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddDebugShotPoint // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct U*6ca2ab22f3* MarkerGridPopulate(bool ___bool_Variable, float ___float_Variable, struct FVector2D CallFunc_MakeVector2D_ReturnValue, struct UW_RecoilDebug_Target_GridMarkV_C* CallFunc_Create_ReturnValue2, struct FVector2D CallFunc_MakeVector2D_ReturnValue3, struct U*6ca2ab22f3* CallFunc_AddChildToCanvas_ReturnValue, float CallFunc__f907b55d86_ReturnValue3, float CallFunc__449286a277_ReturnValue4, int32 CallFunc__7034a95ca7_ReturnValue2, float CallFunc__449286a277_ReturnValue6, float K2Node_Select_Default, float CallFunc__449286a277_ReturnValue7, float CallFunc__f907b55d86_ReturnValue9); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.MarkerGridPopulate // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Grid_ChangeMarkerZoom(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Grid_ChangeMarkerZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	float Grid_ChangePointZoom(int32 ___int_Loop_Counter_Variable, float CallFunc__f907b55d86_ReturnValue, float CallFunc__f907b55d86_ReturnValue2, float CallFunc__f907b55d86_ReturnValue4, float CallFunc__f907b55d86_ReturnValue5, bool CallFunc__249bb33a55_ReturnValue, float CallFunc__449286a277_ReturnValue, float CallFunc__449286a277_ReturnValue2); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Grid_ChangePointZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	float AddDataRow(struct F*00a57ec487 InRecoil, float CallFunc__449286a277_ReturnValue2, float CallFunc__449286a277_ReturnValue3, struct FLinearColor ___struct_Variable2, struct FLinearColor ___struct_Variable4, struct FLinearColor ___struct_Variable6, struct FLinearColor ___struct_Variable12, struct FLinearColor ___struct_Variable14, struct FLinearColor ___struct_Variable16, struct FLinearColor ___struct_Variable18, struct FLinearColor CallFunc__08cdfaa5e4_ReturnValue2, struct FLinearColor K2Node_Select3_Default, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc__449286a277_ReturnValue5, float K2Node_Select5_Default); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddDataRow // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	int32 Grid_ChangeZoom(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Grid_ChangeZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FVector2D AddBox(struct U*6ca2ab22f3* CallFunc__6f0e1f8bfb_ReturnValue, float CallFunc__f907b55d86_ReturnValue, struct FVector2D CallFunc__88f0fee2eb_ReturnValue2); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddBox // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ResetPoints(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.ResetPoints // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FVector2D AddPoint(struct FLinearColor InColor); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddPoint // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x2cd4ac
	void O_1(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.O_1 // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool ExecuteUbergraph_W_RecoilDebug_ShotGroup(int32 ___int_Variable, struct FText ___text_Variable2, int32 ___int_Variable2, float ___float_Variable2, float K2Node_Select2_Default); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.ExecuteUbergraph_W_RecoilDebug_ShotGroup // HasDefaults // @ game+0x2cd4ac
};


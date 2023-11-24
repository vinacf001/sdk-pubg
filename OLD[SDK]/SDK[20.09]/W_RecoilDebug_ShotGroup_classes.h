// WidgetBlueprintGeneratedClass W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C
// Size: 0x330 (Inherited: 0x250)
struct UW_RecoilDebug_ShotGroup_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x250(0x08)
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

	struct FLinearColor AddDebugShotPoint(struct FLinearColor ___struct_Variable, struct FLinearColor ___struct_Variable4, struct FLinearColor ___struct_Variable6, struct FVector CallFunc__72ed3d5557_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Z); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddDebugShotPoint // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct U*a08fc6dc58* MarkerGridPopulate(int32 MarkerLevelH, float CallFunc__56a8b1a1a0_ReturnValue, struct FVector2D CallFunc_MakeVector2D_ReturnValue2, int32 CallFunc__990b0ac25e_ReturnValue, struct UW_RecoilDebug_Target_GridMarkH_C* CallFunc_Create_ReturnValue3, int32 CallFunc__990b0ac25e_ReturnValue2, float CallFunc__56a8b1a1a0_ReturnValue6, struct FVector2D CallFunc_MakeVector2D_ReturnValue4, struct FAnchors K2Node_MakeStruct_Anchors3, bool CallFunc__0ac78e4476_ReturnValue2, float CallFunc__ae60dcbe74_ReturnValue8); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.MarkerGridPopulate // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Grid_ChangeMarkerZoom(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Grid_ChangeMarkerZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float Grid_ChangePointZoom(int32 PreviousZoom, float CallFunc__56a8b1a1a0_ReturnValue5, int32 CallFunc__10b0236ab6_ReturnValue2, int32 CallFunc_Clamp_ReturnValue, struct FVector2D CallFunc_GetPosition_ReturnValue, float CallFunc_BreakVector2D_X); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Grid_ChangePointZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float AddDataRow(float Rec_R, int32 Rec_Bullet, int32 CallFunc__b879ad582d_ReturnValue, struct FLinearColor ___struct_Variable5, struct FLinearColor ___struct_Variable7, struct FLinearColor ___struct_Variable9, int32 ___int_Variable2, struct FLinearColor K2Node_Select_Default, struct FLinearColor ___struct_Variable19, struct FLinearColor ___struct_Variable20, int32 ___int_Variable6, float CallFunc__247a76ab00_ReturnValue, struct FVector2D CallFunc_MakeVector2D_ReturnValue2, float K2Node_Select6_Default); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddDataRow // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Grid_ChangeZoom(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Grid_ChangeZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FVector2D AddBox(struct FVector2D InLocation); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddBox // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ResetPoints(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.ResetPoints // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AddPoint(struct FVector2D InLocation, struct U*a08fc6dc58* CallFunc__7841d1b457_ReturnValue, float CallFunc__56a8b1a1a0_ReturnValue); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddPoint // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x1e037c
	void O_1(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.O_1 // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float ExecuteUbergraph_W_RecoilDebug_ShotGroup(int32 EntryPoint, struct FText ___text_Variable, bool CallFunc__7e2403ed42_ReturnValue, struct FText K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.ExecuteUbergraph_W_RecoilDebug_ShotGroup // HasDefaults // @ game+0x1e037c
};


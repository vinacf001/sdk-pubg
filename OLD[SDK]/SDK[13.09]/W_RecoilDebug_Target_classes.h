// WidgetBlueprintGeneratedClass W_RecoilDebug_Target.W_RecoilDebug_Target_C
// Size: 0x31c (Inherited: 0x250)
struct UW_RecoilDebug_Target_C : UUserWidget {
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

	struct U*a08fc6dc58* MarkerGridPopulate(float ___float_Variable2, struct FAnchors K2Node_MakeStruct_Anchors, struct U*a08fc6dc58* CallFunc__7841d1b457_ReturnValue2, float CallFunc__ae60dcbe74_ReturnValue, int32 CallFunc__10b0236ab6_ReturnValue, float CallFunc__ae60dcbe74_ReturnValue3, float CallFunc__56a8b1a1a0_ReturnValue4, float CallFunc__56a8b1a1a0_ReturnValue5, bool CallFunc__0ac78e4476_ReturnValue, int32 CallFunc__10b0236ab6_ReturnValue2, float CallFunc__56a8b1a1a0_ReturnValue8, int32 CallFunc__990b0ac25e_ReturnValue3, float CallFunc__56a8b1a1a0_ReturnValue10, struct FVector2D CallFunc_MakeVector2D_ReturnValue5); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.MarkerGridPopulate // None // @ game+0x26a108
	void Grid_ChangeMarkerZoom(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeMarkerZoom // None // @ game+0x26a108
	bool Grid_ChangePointZoom(float CallFunc__56a8b1a1a0_ReturnValue2, float CallFunc__56a8b1a1a0_ReturnValue4, float CallFunc__56a8b1a1a0_ReturnValue5, int32 CallFunc__10b0236ab6_ReturnValue2, float CallFunc__ae60dcbe74_ReturnValue, float CallFunc__ae60dcbe74_ReturnValue2); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangePointZoom // None // @ game+0x26a108
	float AddDataRow(struct F*45c5398cfd InRecoil, float Rec_R, float Rec_VariationVert, int32 Rec_Bullet, struct FLinearColor ___struct_Variable2, struct FLinearColor ___struct_Variable4, struct FLinearColor ___struct_Variable6, struct FLinearColor ___struct_Variable8, struct FLinearColor ___struct_Variable14, struct FLinearColor ___struct_Variable16, struct FLinearColor ___struct_Variable18, int32 ___int_Variable5, struct FVector2D CallFunc_MakeVector2D_ReturnValue, float K2Node_Select4_Default, struct FVector2D CallFunc_MakeVector2D_ReturnValue2, float K2Node_Select6_Default); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddDataRow // None // @ game+0x26a108
	int32 Grid_ChangeZoom(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeZoom // None // @ game+0x26a108
	float AddBox(struct FAnchors K2Node_MakeStruct_Anchors, struct FVector2D CallFunc__6259db0fad_ReturnValue2); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddBox // None // @ game+0x26a108
	void ResetPoints(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ResetPoints // None // @ game+0x26a108
	struct FVector2D AddPoint(struct FLinearColor InColor, struct UW_RecoilDebugPoint_C* CallFunc_Create_ReturnValue, struct FAnchors K2Node_MakeStruct_Anchors); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddPoint // None // @ game+0x26a108
	void Construct(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Construct // None // @ game+0x26a108
	void BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	int32 ExecuteUbergraph_W_RecoilDebug_Target(struct FText ___text_Variable, struct FText ___text_Variable3, float ___float_Variable, float ___float_Variable3); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ExecuteUbergraph_W_RecoilDebug_Target // None // @ game+0x26a108
};


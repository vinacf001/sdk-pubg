// WidgetBlueprintGeneratedClass W_RecoilDebug_Target.W_RecoilDebug_Target_C
// Size: 0x31c (Inherited: 0x250)
struct UW_RecoilDebug_Target_C : UUserWidget {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x250(0x08)
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

	struct U*8d608b1ea0* MarkerGridPopulate(bool ___bool_Variable, float ___float_Variable, struct FVector2D CallFunc_MakeVector2D_ReturnValue, struct UW_RecoilDebug_Target_GridMarkV_C* CallFunc_Create_ReturnValue2, struct U*8d608b1ea0* CallFunc_AddChildToCanvas_ReturnValue, float CallFunc__ac5190e48d_ReturnValue3, float CallFunc__aa1f1a3bef_ReturnValue4, int32 CallFunc__319b5efcc7_ReturnValue2, float CallFunc__aa1f1a3bef_ReturnValue6, float K2Node_Select_Default, float CallFunc__aa1f1a3bef_ReturnValue7, float CallFunc__ac5190e48d_ReturnValue9); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.MarkerGridPopulate // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Grid_ChangeMarkerZoom(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeMarkerZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	int32 Grid_ChangePointZoom(int32 CallFunc__949df90870_ReturnValue, float CallFunc__ac5190e48d_ReturnValue3, float CallFunc_BreakVector2D_Y, float CallFunc__341c4c2120_ReturnValue, float CallFunc__341c4c2120_ReturnValue2); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangePointZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	float AddDataRow(struct FLinearColor ___struct_Variable, float CallFunc__d3f5532c39_ReturnValue2, struct FLinearColor ___struct_Variable3, struct FLinearColor ___struct_Variable5, struct FLinearColor ___struct_Variable11, struct FLinearColor ___struct_Variable13, struct FLinearColor ___struct_Variable15, struct FLinearColor ___struct_Variable17, float CallFunc__aa1f1a3bef_ReturnValue4, struct FVector2D CallFunc_MakeVector2D_ReturnValue, float K2Node_Select4_Default, struct FVector2D CallFunc_MakeVector2D_ReturnValue2); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddDataRow // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	int32 Grid_ChangeZoom(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FLinearColor AddBox(struct FVector2D InSize, struct U*8d608b1ea0* CallFunc__dc67dc9433_ReturnValue, float CallFunc__ac5190e48d_ReturnValue, struct FVector2D CallFunc__3aac1a2f5d_ReturnValue2); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddBox // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ResetPoints(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ResetPoints // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FVector2D AddPoint(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddPoint // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Construct(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	float ExecuteUbergraph_W_RecoilDebug_Target(int32 EntryPoint, float K2Node_Select_Default, float CallFunc__aa1f1a3bef_ReturnValue, int32 CallFunc__949df90870_ReturnValue); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ExecuteUbergraph_W_RecoilDebug_Target // HasDefaults // @ game+0x293938
};


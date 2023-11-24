// WidgetBlueprintGeneratedClass W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C
// Size: 0x330 (Inherited: 0x250)
struct UW_RecoilDebug_ShotGroup_C : UUserWidget {
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
	bool bIsFirstShot; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct FVector FirstShotPoint; // 0x320(0x0c)
	int32 ShotGroupDrawIndex; // 0x32c(0x04)

	int32 AddDebugShotPoint(struct FVector ShotPoint, struct FLinearColor ___struct_Variable2, struct FLinearColor ___struct_Variable3, struct FLinearColor K2Node_Select_Default, struct FVector CallFunc__b7098a880f_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Z); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddDebugShotPoint // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	int32 MarkerGridPopulate(int32 MarkerLevelH, struct UW_RecoilDebug_Target_GridMarkV_C* CallFunc_Create_ReturnValue2, float CallFunc__aa1f1a3bef_ReturnValue, int32 CallFunc__949df90870_ReturnValue, float CallFunc__aa1f1a3bef_ReturnValue3, float CallFunc__ac5190e48d_ReturnValue4, float CallFunc__ac5190e48d_ReturnValue5, bool CallFunc__aca7a45594_ReturnValue, float CallFunc__aa1f1a3bef_ReturnValue5, float CallFunc__ac5190e48d_ReturnValue8, int32 CallFunc__319b5efcc7_ReturnValue3, float CallFunc__ac5190e48d_ReturnValue10, struct FVector2D CallFunc_MakeVector2D_ReturnValue5, struct U*8d608b1ea0* CallFunc_AddChildToCanvas_ReturnValue3); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.MarkerGridPopulate // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Grid_ChangeMarkerZoom(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Grid_ChangeMarkerZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	float Grid_ChangePointZoom(float CallFunc__ac5190e48d_ReturnValue3, struct TArray<struct UWidget*> CallFunc__6dc7632cc9_ReturnValue, struct UWidget* CallFunc_Array_Get_Item, struct U*8d608b1ea0* CallFunc__dc67dc9433_ReturnValue); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Grid_ChangePointZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FVector2D AddDataRow(float Rec_L, float Rec_Tendency, int32 ___int_Variable, struct FLinearColor ___struct_Variable3, struct FLinearColor ___struct_Variable5, struct FLinearColor ___struct_Variable7, struct FLinearColor ___struct_Variable9, int32 ___int_Variable2, struct FLinearColor ___struct_Variable17, struct FLinearColor ___struct_Variable19, struct FLinearColor ___struct_Variable20, int32 ___int_Variable6, float K2Node_Select4_Default, struct FVector2D CallFunc_MakeVector2D_ReturnValue2, float K2Node_Select6_Default); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddDataRow // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Grid_ChangeZoom(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Grid_ChangeZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FVector2D AddBox(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddBox // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ResetPoints(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.ResetPoints // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AddPoint(struct FLinearColor InColor, struct UW_RecoilDebugPoint_C* CallFunc_Create_ReturnValue, struct FAnchors K2Node_MakeStruct_Anchors, struct FVector2D CallFunc__3aac1a2f5d_ReturnValue); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.AddPoint // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Construct(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void O_1(); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.O_1 // BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FText ExecuteUbergraph_W_RecoilDebug_ShotGroup(int32 ___int_Variable, struct FText ___text_Variable2, int32 ___int_Variable2, struct ATslCharacter* CallFunc__36cf5fd6b9_ReturnValue, float K2Node_Select2_Default); // Function W_RecoilDebug_ShotGroup.W_RecoilDebug_ShotGroup_C.ExecuteUbergraph_W_RecoilDebug_ShotGroup // HasDefaults // @ game+0x293938
};


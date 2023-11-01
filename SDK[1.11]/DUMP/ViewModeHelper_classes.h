// WidgetBlueprintGeneratedClass ViewModeHelper.ViewModeHelper_C
// Size: 0x444 (Inherited: 0x410)
struct UViewModeHelper_C : U*bc854bc287 {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x410(0x08)
	struct UCanvasPanel* CanvasPanel_1[0x08]; // 0x418(0x08)
	struct UImage* Image_1[0x08]; // 0x420(0x08)
	struct UImage* Image_2[0x08]; // 0x428(0x08)
	bool bMouseDown; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float Save[0x04]; // 0x434(0x04)
	float Time[0x04]; // 0x438(0x04)
	struct FVector2D MouseDownPosition[0x08]; // 0x43c(0x08)

	void OnMouseDown(); // Function ViewModeHelper.ViewModeHelper_C.OnMouseDown // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void OnMouseUp(); // Function ViewModeHelper.ViewModeHelper_C.OnMouseUp // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void AddX(); // Function ViewModeHelper.ViewModeHelper_C.AddX // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void AddY(); // Function ViewModeHelper.ViewModeHelper_C.AddY // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ViewModeZoomInOrOut(); // Function ViewModeHelper.ViewModeHelper_C.ViewModeZoomInOrOut // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ViewModeReset(); // Function ViewModeHelper.ViewModeHelper_C.ViewModeReset // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function ViewModeHelper.ViewModeHelper_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	float ExecuteUbergraph_ViewModeHelper(float* K2Node_CustomEvent_Scale3, float* CallFunc__449286a277_ReturnValue, float* CallFunc__19746d0616_ReturnValue, bool CallFunc__f74438cf06_ReturnValue, struct ALobbyHUD** K2Node_DynamicCast_AsLobby_HUD2, float* K2Node_CustomEvent_Scale, struct AHUD** CallFunc__223c7f5c7b_ReturnValue3, float* CallFunc__7ee32fbf1d_LocationY, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, float* CallFunc_BreakVector2D_Y, int32* CallFunc__facc1624ab_ReturnValue2); // Function ViewModeHelper.ViewModeHelper_C.ExecuteUbergraph_ViewModeHelper //  // @ game+0x2cd4ac
};


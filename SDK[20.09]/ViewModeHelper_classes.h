// WidgetBlueprintGeneratedClass ViewModeHelper.ViewModeHelper_C
// Size: 0x444 (Inherited: 0x410)
struct UViewModeHelper_C : U*17234a7c9b {
	struct F*73a77c28fa UberGraphFrame; // 0x410(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x418(0x08)
	struct UImage* Image_1; // 0x420(0x08)
	struct UImage* Image_2; // 0x428(0x08)
	bool bMouseDown; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float Save; // 0x434(0x04)
	float Time; // 0x438(0x04)
	struct FVector2D MouseDownPosition; // 0x43c(0x08)

	void OnMouseDown(); // Function ViewModeHelper.ViewModeHelper_C.OnMouseDown // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void OnMouseUp(); // Function ViewModeHelper.ViewModeHelper_C.OnMouseUp // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AddX(); // Function ViewModeHelper.ViewModeHelper_C.AddX // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AddY(); // Function ViewModeHelper.ViewModeHelper_C.AddY // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ViewModeZoomInOrOut(); // Function ViewModeHelper.ViewModeHelper_C.ViewModeZoomInOrOut // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ViewModeReset(); // Function ViewModeHelper.ViewModeHelper_C.ViewModeReset // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function ViewModeHelper.ViewModeHelper_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	int32 ExecuteUbergraph_ViewModeHelper(DelegateProperty _37b0074df2_OutputDelegate5, float K2Node_CustomEvent_Scale3, float CallFunc__ae60dcbe74_ReturnValue, float CallFunc__b66f6d2743_ReturnValue, struct ALobbyHUD* K2Node_DynamicCast_AsLobby_HUD, struct ALobbyHUD* K2Node_DynamicCast_AsLobby_HUD2, float K2Node_CustomEvent_Scale, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, float CallFunc__6da664389f_LocationY, struct FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_Y); // Function ViewModeHelper.ViewModeHelper_C.ExecuteUbergraph_ViewModeHelper //  // @ game+0x1e037c
};


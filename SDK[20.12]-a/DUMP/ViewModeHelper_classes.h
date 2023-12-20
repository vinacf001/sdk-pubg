// WidgetBlueprintGeneratedClass ViewModeHelper.ViewModeHelper_C
// Size: 0x44c (Inherited: 0x418)
struct UViewModeHelper_C : U*4bb82286ac {
	struct F*a6c93df757 UberGraphFrame; // 0x418(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x420(0x08)
	struct UImage* Image_1; // 0x428(0x08)
	struct UImage* Image_2; // 0x430(0x08)
	bool bMouseDown; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	float Save; // 0x43c(0x04)
	float Time; // 0x440(0x04)
	struct FVector2D MouseDownPosition; // 0x444(0x08)

	void OnMouseDown(); // Function ViewModeHelper.ViewModeHelper_C.OnMouseDown // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void OnMouseUp(); // Function ViewModeHelper.ViewModeHelper_C.OnMouseUp // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void AddX(); // Function ViewModeHelper.ViewModeHelper_C.AddX // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void AddY(); // Function ViewModeHelper.ViewModeHelper_C.AddY // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ViewModeZoomInOrOut(); // Function ViewModeHelper.ViewModeHelper_C.ViewModeZoomInOrOut // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ViewModeReset(); // Function ViewModeHelper.ViewModeHelper_C.ViewModeReset // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Construct(); // Function ViewModeHelper.ViewModeHelper_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_ViewModeHelper(); // Function ViewModeHelper.ViewModeHelper_C.ExecuteUbergraph_ViewModeHelper //  // @ game+0x3b43ac
};


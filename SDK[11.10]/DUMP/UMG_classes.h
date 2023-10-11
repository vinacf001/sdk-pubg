// Class UMG.Visual
// Size: 0x30 (Inherited: 0x30)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x130 (Inherited: 0x30)
struct UWidget : UVisual {
	bool *361b9675a4; // 0x30(0x01)
	bool *e880a4e5cc; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UPanelSlot* Slot; // 0x38(0x08)
	bool bIsEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	DelegateProperty bIsEnabledDelegate; // 0x48(0x10)
	DelegateProperty OnPrepass; // 0x58(0x10)
	struct FText ToolTipText; // 0x68(0x18)
	DelegateProperty ToolTipTextDelegate; // 0x80(0x10)
	struct UWidget* ToolTipWidget; // 0x90(0x08)
	DelegateProperty *faeb44212b; // 0x98(0x10)
	enum class ESlateVisibility Visiblity; // 0xa8(0x01)
	enum class ESlateVisibility Visibility; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	DelegateProperty VisibilityDelegate; // 0xb0(0x10)
	char bOverride_Cursor : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	enum class EMouseCursor Cursor; // 0xc4(0x01)
	bool bIsVolatile; // 0xc5(0x01)
	char pad_C6[0x2]; // 0xc6(0x02)
	struct FWidgetTransform RenderTransform; // 0xc8(0x1c)
	struct FVector2D RenderTransformPivot; // 0xe4(0x08)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UWidgetNavigation* Navigation; // 0xf0(0x08)
	char pad_F8[0x28]; // 0xf8(0x28)
	struct TArray<struct U*a6e680fd1f*> *cb8754bb01; // 0x120(0x10)

	struct UWidget* GenerateWidgetForObject__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // Public|Delegate // @ game+0x273e04
	struct APlayerController* SetUserFocus(); // Function UMG.Widget.SetUserFocus // Final|Native|Public|BlueprintCallable // @ game+0x604d9e0
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // Public|Delegate // @ game+0x273e04
	struct FWidgetTransform SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // Final|Native|Public|BlueprintCallable // @ game+0x66d30c
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // Final|Native|Public|BlueprintCallable // @ game+0x604abb0
	struct FEventReply OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x273e04
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b618
	bool IsHovered(); // Function UMG.Widget.IsHovered // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b8c8
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // Public|Delegate // @ game+0x273e04
	struct FName SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // Final|Native|Public|BlueprintCallable // @ game+0x604cf4c
	bool HasUserFocus(); // Function UMG.Widget.HasUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b6b8
	struct UUserWidget* GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604aed8
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // Public|Delegate // @ game+0x273e04
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // Public|Delegate // @ game+0x273e04
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b574
	enum class ESlateVisibility SetVisibility(); // Function UMG.Widget.SetVisibility // Native|Public|BlueprintCallable // @ game+0x73f02c
	float SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // Final|Native|Public|BlueprintCallable // @ game+0x604d55c
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // Public|Delegate|HasDefaults // @ game+0x273e04
	struct FVector2D SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x604d7d0
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // Public|Delegate // @ game+0x273e04
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604ad98
	void ResetCursor(); // Function UMG.Widget.ResetCursor // Final|Native|Public|BlueprintCallable // @ game+0x604c428
	bool IsVisible(); // Function UMG.Widget.IsVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604bb58
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // Public|Delegate // @ game+0x273e04
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // Public|Delegate // @ game+0x273e04
	struct UWidget* GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // Public|Delegate // @ game+0x273e04
	struct FText SetToolTipText(); // Function UMG.Widget.SetToolTipText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x604d904
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xddac70
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b420
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // Native|Public|BlueprintCallable // @ game+0x599ecfc
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // Final|Native|Public|BlueprintCallable // @ game+0x604b7f8
	struct FVector2D SetRenderShear(); // Function UMG.Widget.SetRenderShear // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x604d6a0
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b1f4
	int32 GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // Public|Delegate // @ game+0x273e04
	bool HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b758
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604ad3c
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x604ad68
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // Public|Delegate // @ game+0x273e04
	bool SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // Native|Public|BlueprintCallable // @ game+0x604cea0
	struct FName SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // Final|Native|Public|BlueprintCallable // @ game+0x604c9c4
	bool ForceVolatile(); // Function UMG.Widget.ForceVolatile // Final|Native|Public|BlueprintCallable // @ game+0x604abc4
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // Final|Native|Public|BlueprintCallable // @ game+0x604ab9c
	struct UWidget* EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // Public|Delegate // @ game+0x273e04
	struct U*7762a61952* GetParent(); // Function UMG.Widget.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604af44
	struct UWidget* SetToolTip(); // Function UMG.Widget.SetToolTip // Final|Native|Public|BlueprintCallable // @ game+0x604d874
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // Public|Delegate // @ game+0x273e04
	enum class EMouseCursor SetCursor(); // Function UMG.Widget.SetCursor // Final|Native|Public|BlueprintCallable // @ game+0x604cb34
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // Public|Delegate // @ game+0x273e04
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // Final|Native|Public|BlueprintCallable // @ game+0x604cf38
	struct FVector2D SetRenderScale(); // Function UMG.Widget.SetRenderScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x604d5fc
	struct FVector2D SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x604d744
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b4d4
};

// Class UMG.UserWidget
// Size: 0x258 (Inherited: 0x130)
struct UUserWidget : UWidget {
	char pad_130[0x8]; // 0x130(0x08)
	struct FLinearColor ColorAndOpacity; // 0x138(0x10)
	DelegateProperty ColorAndOpacityDelegate; // 0x148(0x10)
	struct FSlateColor ForegroundColor; // 0x158(0x28)
	DelegateProperty ForegroundColorDelegate; // 0x180(0x10)
	struct FMargin Padding; // 0x190(0x10)
	bool bSupportsKeyboardFocus; // 0x1a0(0x01)
	bool bIsFocusable; // 0x1a1(0x01)
	char pad_1A2[0x6]; // 0x1a2(0x06)
	struct TArray<struct U*af92c71e68*> *c872a81f5b; // 0x1a8(0x10)
	struct TArray<struct U*af92c71e68*> *0d110e6b03; // 0x1b8(0x10)
	bool bStopAction; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	int32 Priority; // 0x1cc(0x04)
	struct TArray<struct F*fdcc2aae04> *79ebd843d4; // 0x1d0(0x10)
	struct UWidgetTree* WidgetTree; // 0x1e0(0x08)
	char bCanEverTick : 1; // 0x1e8(0x01)
	char *b278606584 : 1; // 0x1e8(0x01)
	char pad_1E8_2 : 6; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	char *4af56597b6 : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct U*4aa7f8d102* *4aa7f8d102; // 0x1f8(0x08)
	char pad_200[0x58]; // 0x200(0x58)

	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x604c414
	float Tick(); // Function UMG.UserWidget.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	struct U*54cc75d10f* OnAnimationStarted(); // Function UMG.UserWidget.OnAnimationStarted // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x66c964
	struct FVector2D SetDesiredSizeInViewport(); // Function UMG.UserWidget.SetDesiredSizeInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x604cbc8
	struct FEventReply OnControllerAnalogValueChanged(); // Function UMG.UserWidget.OnControllerAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x273e04
	struct UDragDropOperation* OnDragLeave(); // Function UMG.UserWidget.OnDragLeave // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	struct FSlateColor SetForegroundColor(); // Function UMG.UserWidget.SetForegroundColor // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604cc70
	struct FEventReply OnPreviewMouseButtonDown(); // Function UMG.UserWidget.OnPreviewMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	struct UDragDropOperation* OnDragCancelled(); // Function UMG.UserWidget.OnDragCancelled // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	struct F*174cd056c7 OnMouseEnter(); // Function UMG.UserWidget.OnMouseEnter // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	float PlayAnimation(); // Function UMG.UserWidget.PlayAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xd09f10
	struct UWidgetComponent* GetWidgetComponent(); // Function UMG.UserWidget.GetWidgetComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b218
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b8ac
	struct FEventReply OnTouchGesture(); // Function UMG.UserWidget.OnTouchGesture // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	struct FEventReply OnTouchEnded(); // Function UMG.UserWidget.OnTouchEnded // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	void Construct(); // Function UMG.UserWidget.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	struct FAnchors SetAnchorsInViewport(); // Function UMG.UserWidget.SetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604caa0
	struct ULocalPlayer* SetOwningLocalPlayer(); // Function UMG.UserWidget.SetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604d1ac
	float PlayAnimationTo(); // Function UMG.UserWidget.PlayAnimationTo // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604c148
	struct F*51ab529e16 OnPaint(); // Function UMG.UserWidget.OnPaint // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x273e04
	struct FEventReply OnMouseButtonDown(); // Function UMG.UserWidget.OnMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	struct FEventReply OnMouseMove(); // Function UMG.UserWidget.OnMouseMove // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	struct U*54cc75d10f* ReverseAnimation(); // Function UMG.UserWidget.ReverseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604c43c
	struct FEventReply OnKeyUp(); // Function UMG.UserWidget.OnKeyUp // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	struct U*54cc75d10f* OnAnimationFinished(); // Function UMG.UserWidget.OnAnimationFinished // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x66ec10
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.UserWidget.GetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604aefc
	bool SetInputActionBlocking(); // Function UMG.UserWidget.SetInputActionBlocking // Final|Native|Protected|BlueprintCallable // @ game+0x604cd64
	struct FEventReply OnMouseButtonUp(); // Function UMG.UserWidget.OnMouseButtonUp // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	int32 AddToViewport(); // Function UMG.UserWidget.AddToViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604a59c
	struct FEventReply OnKeyDown(); // Function UMG.UserWidget.OnKeyDown // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	struct UDragDropOperation* OnDragDetected(); // Function UMG.UserWidget.OnDragDetected // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	bool OnDragOver(); // Function UMG.UserWidget.OnDragOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	int32 SetInputActionPriority(); // Function UMG.UserWidget.SetInputActionPriority // Final|Native|Protected|BlueprintCallable // @ game+0x604ce08
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b8ac
	enum class *5553c9dea0 StopListeningForInputAction(); // Function UMG.UserWidget.StopListeningForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x604da98
	DelegateProperty ListenForInputAction(); // Function UMG.UserWidget.ListenForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x604bb7c
	struct UDragDropOperation* OnDragEnter(); // Function UMG.UserWidget.OnDragEnter // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	struct FLinearColor SetColorAndOpacity(); // Function UMG.UserWidget.SetColorAndOpacity // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d294
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604adbc
	bool IsAnimationPlaying(); // Function UMG.UserWidget.IsAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604b80c
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x599ecfc
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604adbc
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // Final|Native|Protected|BlueprintCallable // @ game+0x604da84
	bool OnDrop(); // Function UMG.UserWidget.OnDrop // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	struct FEventReply OnPreviewKeyDown(); // Function UMG.UserWidget.OnPreviewKeyDown // Event|Public|BlueprintEvent // @ game+0x273e04
	struct FEventReply OnControllerButtonPressed(); // Function UMG.UserWidget.OnControllerButtonPressed // Event|Public|BlueprintEvent // @ game+0x273e04
	struct FEventReply OnTouchStarted(); // Function UMG.UserWidget.OnTouchStarted // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	struct APlayerController* GetOwningPlayer(); // Function UMG.UserWidget.GetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xddac70
	struct FEventReply OnMouseWheel(); // Function UMG.UserWidget.OnMouseWheel // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	struct FEventReply OnMotionDetected(); // Function UMG.UserWidget.OnMotionDetected // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	bool SetPositionInViewport(); // Function UMG.UserWidget.SetPositionInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x604d484
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x604ac58
	bool IsListeningForInputAction(); // Function UMG.UserWidget.IsListeningForInputAction // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x604b8ec
	struct FEventReply OnFocusReceived(); // Function UMG.UserWidget.OnFocusReceived // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x604db7c
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604ac80
	float GetAnimationCurrentTime(); // Function UMG.UserWidget.GetAnimationCurrentTime // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604ac9c
	struct FFocusEvent OnFocusLost(); // Function UMG.UserWidget.OnFocusLost // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	float PauseAnimation(); // Function UMG.UserWidget.PauseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604c0a8
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // BlueprintCosmetic|Event|Public|BlueprintEvent|Const // @ game+0x273e04
	struct USoundBase* PlaySound(); // Function UMG.UserWidget.PlaySound // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604c368
	struct F*174cd056c7 OnMouseLeave(); // Function UMG.UserWidget.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604af20
	struct FEventReply OnMouseButtonDoubleClick(); // Function UMG.UserWidget.OnMouseButtonDoubleClick // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	struct FMargin SetPadding(); // Function UMG.UserWidget.SetPadding // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604d304
	void FinishStoppedSequencePlayers(); // Function UMG.UserWidget.FinishStoppedSequencePlayers // Final|Native|Public|BlueprintCallable // @ game+0x604ab88
	struct FEventReply OnAnalogValueChanged(); // Function UMG.UserWidget.OnAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x273e04
	struct U*54cc75d10f* StopAnimation(); // Function UMG.UserWidget.StopAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xc002e4
	struct FEventReply OnControllerButtonReleased(); // Function UMG.UserWidget.OnControllerButtonReleased // Event|Public|BlueprintEvent // @ game+0x273e04
	struct APlayerController* SetOwningPlayer(); // Function UMG.UserWidget.SetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604d258
	bool AddToPlayerScreen(); // Function UMG.UserWidget.AddToPlayerScreen // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604a4fc
	void Destruct(); // Function UMG.UserWidget.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	int32 SetNumLoopsToPlay(); // Function UMG.UserWidget.SetNumLoopsToPlay // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604d084
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // Final|Native|Public|BlueprintCallable // @ game+0x604da70
	struct FVector2D SetAlignmentInViewport(); // Function UMG.UserWidget.SetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x604c928
	struct FEventReply OnTouchMoved(); // Function UMG.UserWidget.OnTouchMoved // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x273e04
	float SetPlaybackSpeed(); // Function UMG.UserWidget.SetPlaybackSpeed // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x604d3a4
	struct FEventReply OnKeyChar(); // Function UMG.UserWidget.OnKeyChar // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	bool PreConstruct(); // Function UMG.UserWidget.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
};

// Class UMG.WidgetComponent
// Size: 0xce0 (Inherited: 0xb10)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0xb10(0x01)
	enum class EWidgetTimingPolicy *a990aec1b1; // 0xb11(0x01)
	char pad_B12[0x6]; // 0xb12(0x06)
	struct UClass* WidgetClass; // 0xb18(0x08)
	struct FIntPoint DrawSize; // 0xb20(0x08)
	bool *dc2f780bdb; // 0xb28(0x01)
	bool *2f49043939; // 0xb29(0x01)
	char pad_B2A[0x2]; // 0xb2a(0x02)
	float *9b5e8ac687; // 0xb2c(0x04)
	char pad_B30[0x8]; // 0xb30(0x08)
	struct FIntPoint *21adc875b6; // 0xb38(0x08)
	bool *48437b47a6; // 0xb40(0x01)
	char pad_B41[0x3]; // 0xb41(0x03)
	struct FVector2D Pivot; // 0xb44(0x08)
	bool *ac9ec0b78d; // 0xb4c(0x01)
	bool *31223fe84c; // 0xb4d(0x01)
	char pad_B4E[0x2]; // 0xb4e(0x02)
	struct ULocalPlayer* *db4640f658; // 0xb50(0x08)
	struct FLinearColor BackgroundColor; // 0xb58(0x10)
	struct FLinearColor TintColorAndOpacity; // 0xb68(0x10)
	float OpacityFromTexture; // 0xb78(0x04)
	enum class EWidgetBlendMode BlendMode; // 0xb7c(0x01)
	bool bIsTwoSided; // 0xb7d(0x01)
	bool *9945aefdd0; // 0xb7e(0x01)
	char pad_B7F[0x1]; // 0xb7f(0x01)
	struct UUserWidget* Widget; // 0xb80(0x08)
	char pad_B88[0x20]; // 0xb88(0x20)
	struct UBodySetup* BodySetup; // 0xba8(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0xbb0(0x08)
	struct UMaterialInterface* *adfc4bbbba; // 0xbb8(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0xbc0(0x08)
	struct UMaterialInterface* *a7cfbfb7e8; // 0xbc8(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0xbd0(0x08)
	struct UMaterialInterface* *94e4f2e160; // 0xbd8(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0xbe0(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0xbe8(0x08)
	bool *68ddda5ff5; // 0xbf0(0x01)
	bool *aaea1c9757; // 0xbf1(0x01)
	char pad_BF2[0x6]; // 0xbf2(0x06)
	struct FName *23728e54e6; // 0xbf8(0x08)
	int32 *1655ab5e13; // 0xc00(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0xc04(0x01)
	char pad_C05[0x3]; // 0xc05(0x03)
	float CylinderArcAngle; // 0xc08(0x04)
	char pad_C0C[0x24]; // 0xc0c(0x24)
	struct FVector2D FixedScreenSize; // 0xc30(0x08)
	enum class EWidgetForcedLOD ForcedLOD; // 0xc38(0x01)
	bool bUseLOD; // 0xc39(0x01)
	bool bAutoSetFixedScreenSize; // 0xc3a(0x01)
	char pad_C3B[0x5]; // 0xc3b(0x05)
	struct TArray<float> LODScreenSizes; // 0xc40(0x10)
	float LODUpdateInterval; // 0xc50(0x04)
	float LODNextUpdateTime; // 0xc54(0x04)
	float LODLastScreenSize; // 0xc58(0x04)
	float LODScale; // 0xc5c(0x04)
	float *20aae33e2a; // 0xc60(0x04)
	bool bShouldRenderWidget; // 0xc64(0x01)
	bool bAlwaysVisibleWidget; // 0xc65(0x01)
	char pad_C66[0x2]; // 0xc66(0x02)
	struct TMap<struct UPrimitiveComponent*, struct UMaterialInstanceDynamic*> *d001820ce2; // 0xc68(0x50)
	struct TArray<struct UMeshComponent*> *29f913fc47; // 0xcb8(0x10)
	struct UTextureRenderTarget2D* OverrideRenderTarget; // 0xcc8(0x08)
	struct USceneComponent* *f2a0e9b38b; // 0xcd0(0x08)
	char pad_CD8[0x8]; // 0xcd8(0x08)

	float *e970a1b809(); // Function UMG.WidgetComponent.*e970a1b809 // Final|Native|Public|BlueprintCallable // @ game+0x6054090
	struct FVector2D *4368fe4192(); // Function UMG.WidgetComponent.*4368fe4192 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60550a8
	bool *aa4b3994a0(); // Function UMG.WidgetComponent.*aa4b3994a0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6052398
	bool *1bdc785bda(); // Function UMG.WidgetComponent.*1bdc785bda // Final|Native|Public|BlueprintCallable // @ game+0x6055a24
	struct FVector2D *dd1bd01892(); // Function UMG.WidgetComponent.*dd1bd01892 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6050878
	struct FVector2D *cfbd4c9db6(); // Function UMG.WidgetComponent.*cfbd4c9db6 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6050c38
	float *33a2a8c75a(); // Function UMG.WidgetComponent.*33a2a8c75a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051914
	bool *2db99c5112(); // Function UMG.WidgetComponent.*2db99c5112 // Final|Native|Public|BlueprintCallable // @ game+0x605979c
	struct UTextureRenderTarget2D* *b7067c9036(); // Function UMG.WidgetComponent.*b7067c9036 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x605193c
	struct ULocalPlayer* *b4b9675398(); // Function UMG.WidgetComponent.*b4b9675398 // Final|Native|Public|BlueprintCallable // @ game+0x6058698
	bool *9c43388213(); // Function UMG.WidgetComponent.*9c43388213 // Final|Native|Public|BlueprintCallable // @ game+0x605b264
	struct UUserWidget* *8f2558f839(); // Function UMG.WidgetComponent.*8f2558f839 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051f30
	struct ULocalPlayer* *396956c427(); // Function UMG.WidgetComponent.*396956c427 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60518c0
	struct USceneComponent* *868e258c4a(); // Function UMG.WidgetComponent.*868e258c4a // Final|Native|Public|BlueprintCallable // @ game+0x60554c4
	struct UMeshComponent* *ba92c94cc4(); // Function UMG.WidgetComponent.*ba92c94cc4 // Final|Native|Public|BlueprintCallable // @ game+0x6053000
	float *23a03b42a8(); // Function UMG.WidgetComponent.*23a03b42a8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60513d0
	struct FVector2D *a8d0364c79(); // Function UMG.WidgetComponent.*a8d0364c79 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x605571c
	void *9b8b9a6946(); // Function UMG.WidgetComponent.*9b8b9a6946 // Native|Public|BlueprintCallable // @ game+0xdbbc3c
	struct UUserWidget* *f9a87286a5(); // Function UMG.WidgetComponent.*f9a87286a5 // Native|Public|BlueprintCallable // @ game+0x605b1d0
	struct USceneComponent* *57226a667a(); // Function UMG.WidgetComponent.*57226a667a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6050a30
	bool *f79b9b15ca(); // Function UMG.WidgetComponent.*f79b9b15ca // Final|Native|Public|BlueprintCallable // @ game+0x604e470
	float *bc2637381a(); // Function UMG.WidgetComponent.*bc2637381a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59385b0
	struct UMeshComponent* *2f07de0502(); // Function UMG.WidgetComponent.*2f07de0502 // Final|Native|Public|BlueprintCallable // @ game+0x605bab4
	struct UMaterialInstanceDynamic* *3895eb0a88(); // Function UMG.WidgetComponent.*3895eb0a88 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60513b8
	bool *d3e80d90e3(); // Function UMG.WidgetComponent.*d3e80d90e3 // Final|Native|Public|BlueprintCallable // @ game+0x604ebc8
	struct FLinearColor *ff712ad262(); // Function UMG.WidgetComponent.*ff712ad262 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x605425c
};

// Class UMG.*7762a61952
// Size: 0x148 (Inherited: 0x130)
struct U*7762a61952 : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x130(0x10)
	char pad_140[0x8]; // 0x140(0x08)

	struct UWidget* GetChildAt(); // Function UMG.*7762a61952.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60506b0
	void ClearChildren(); // Function UMG.*7762a61952.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x604e8b0
	struct UPanelSlot* AddChild(); // Function UMG.*7762a61952.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x604dc10
	int32 GetChildIndex(); // Function UMG.*7762a61952.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6050750
	bool RemoveChildAt(); // Function UMG.*7762a61952.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x6053668
	bool RemoveChild(); // Function UMG.*7762a61952.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x60535c8
	int32 GetChildrenCount(); // Function UMG.*7762a61952.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60507f0
	bool HasChild(); // Function UMG.*7762a61952.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x605225c
	bool HasAnyChildren(); // Function UMG.*7762a61952.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6052240
};

// Class UMG.*98b93d26ba
// Size: 0x148 (Inherited: 0x148)
struct U*98b93d26ba : U*7762a61952 {

	struct UWidget* GetContent(); // Function UMG.*98b93d26ba.GetContent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6050808
	struct UPanelSlot* SetContent(); // Function UMG.*98b93d26ba.SetContent // Final|Native|Public|BlueprintCallable // @ game+0x6054ea8
	struct UPanelSlot* GetContentSlot(); // Function UMG.*98b93d26ba.GetContentSlot // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6050834
};

// Class UMG.Button
// Size: 0x480 (Inherited: 0x148)
struct UButton : U*98b93d26ba {
	struct USlateWidgetStyleAsset* Style; // 0x148(0x08)
	struct F*7bb05e3554 WidgetStyle; // 0x150(0x2a8)
	struct FLinearColor ColorAndOpacity; // 0x3f8(0x10)
	struct FLinearColor BackgroundColor; // 0x408(0x10)
	enum class *b8a8b7551d ClickMethod; // 0x418(0x01)
	enum class *3270985d6b TouchMethod; // 0x419(0x01)
	bool IsFocusable; // 0x41a(0x01)
	char pad_41B[0x5]; // 0x41b(0x05)
	struct FMulticastDelegate OnClicked; // 0x420(0x10)
	struct FMulticastDelegate OnPressed; // 0x430(0x10)
	struct FMulticastDelegate OnReleased; // 0x440(0x10)
	struct FMulticastDelegate OnHovered; // 0x450(0x10)
	struct FMulticastDelegate OnUnHovered; // 0x460(0x10)
	char pad_470[0x10]; // 0x470(0x10)

	struct FLinearColor SetColorAndOpacity(); // Function UMG.Button.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6054c64
	struct F*7bb05e3554 SetStyle(); // Function UMG.Button.SetStyle // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6059eb4
	struct FLinearColor SetBackgroundColor(); // Function UMG.Button.SetBackgroundColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60541c4
	bool IsPressed(); // Function UMG.Button.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6052480
};

// Class UMG.EditableText
// Size: 0x4c0 (Inherited: 0x130)
struct UEditableText : UWidget {
	struct FText Text; // 0x130(0x18)
	DelegateProperty TextDelegate; // 0x148(0x10)
	struct FText HintText; // 0x158(0x18)
	DelegateProperty HintTextDelegate; // 0x170(0x10)
	struct F*543a4cf75e WidgetStyle; // 0x180(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x3c8(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3d0(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3d8(0x08)
	struct USlateBrushAsset* CaretImage; // 0x3e0(0x08)
	struct FSlateFontInfo Font; // 0x3e8(0x68)
	struct FSlateColor ColorAndOpacity; // 0x450(0x28)
	bool IsReadOnly; // 0x478(0x01)
	bool *5f2425a678; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	float *e9b9cb0edf; // 0x47c(0x04)
	bool *0d25a4c712; // 0x480(0x01)
	bool *5b0997cea4; // 0x481(0x01)
	bool *f7003cc95f; // 0x482(0x01)
	bool *290d1ae35f; // 0x483(0x01)
	bool *812f642b07; // 0x484(0x01)
	bool *04f30eb062; // 0x485(0x01)
	enum class EVirtualKeyboardType *0427d9466c; // 0x486(0x01)
	char pad_487[0x1]; // 0x487(0x01)
	struct F*d6addb82fe ShapedTextOptions; // 0x488(0x08)
	struct FMulticastDelegate OnTextChanged; // 0x490(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x4a0(0x10)
	char pad_4B0[0x10]; // 0x4b0(0x10)

	struct FText SetText(); // Function UMG.EditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x6059f84
	struct FText OnEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x273e04
	enum class ETextCommit OnEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x273e04
	struct FText GetText(); // Function UMG.EditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051c5c
	bool SetIsReadOnly(); // Function UMG.EditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x605716c
	bool SetIsPassword(); // Function UMG.EditableText.SetIsPassword // Final|Native|Public|BlueprintCallable // @ game+0x60570b0
	struct FText SetHintText(); // Function UMG.EditableText.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x6055c58
};

// Class UMG.DragDropOperation
// Size: 0x90 (Inherited: 0x30)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x30(0x10)
	struct UObject* Payload; // 0x40(0x08)
	struct UWidget* DefaultDragVisual; // 0x48(0x08)
	enum class EDragPivot Pivot; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector2D Offset; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FMulticastDelegate OnDrop; // 0x60(0x10)
	struct FMulticastDelegate OnDragCancelled; // 0x70(0x10)
	struct FMulticastDelegate OnDragged; // 0x80(0x10)

	struct F*174cd056c7 Dragged(); // Function UMG.DragDropOperation.Dragged // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x604a7f4
	struct F*174cd056c7 DragCancelled(); // Function UMG.DragDropOperation.DragCancelled // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x604a700
	struct F*174cd056c7 Drop(); // Function UMG.DragDropOperation.Drop // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x604a8e8
};

// Class UMG.*e12a436fb2
// Size: 0x158 (Inherited: 0x130)
struct U*e12a436fb2 : UWidget {
	struct F*d6addb82fe ShapedTextOptions; // 0x130(0x08)
	enum class ETextJustify Justification; // 0x138(0x01)
	bool AutoWrapText; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	float WrapTextAt; // 0x13c(0x04)
	enum class *091373b171 WrappingPolicy; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	struct FMargin Margin; // 0x144(0x10)
	float LineHeightPercentage; // 0x154(0x04)
};

// Class UMG.TextBlock
// Size: 0x260 (Inherited: 0x158)
struct UTextBlock : U*e12a436fb2 {
	struct FText Text; // 0x158(0x18)
	DelegateProperty TextDelegate; // 0x170(0x10)
	struct FSlateColor ColorAndOpacity; // 0x180(0x28)
	DelegateProperty ColorAndOpacityDelegate; // 0x1a8(0x10)
	struct FSlateFontInfo Font; // 0x1b8(0x68)
	struct FVector2D ShadowOffset; // 0x220(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x228(0x10)
	DelegateProperty ShadowColorAndOpacityDelegate; // 0x238(0x10)
	float MinDesiredWidth; // 0x248(0x04)
	bool bWrapWithInvalidationPanel; // 0x24c(0x01)
	char pad_24D[0x13]; // 0x24d(0x13)

	float SetOpacity(); // Function UMG.TextBlock.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x6058600
	struct FText GetText(); // Function UMG.TextBlock.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051ebc
	float SetMinDesiredWidth(); // Function UMG.TextBlock.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x6058018
	struct FSlateFontInfo SetFont(); // Function UMG.TextBlock.SetFont // Final|Native|Public|BlueprintCallable // @ game+0x6055804
	struct FText SetText(); // Function UMG.TextBlock.SetText // Native|Public|BlueprintCallable // @ game+0x605a354
	float SetWrapTextAt(); // Function UMG.TextBlock.SetWrapTextAt // Final|Native|Public|BlueprintCallable // @ game+0x605b304
	struct FLinearColor SetShadowColorAndOpacity(); // Function UMG.TextBlock.SetShadowColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6059678
	struct FVector2D SetShadowOffset(); // Function UMG.TextBlock.SetShadowOffset // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6059710
	struct FSlateColor SetColorAndOpacity(); // Function UMG.TextBlock.SetColorAndOpacity // Final|Native|Public|BlueprintCallable // @ game+0x66d17c
	enum class ETextJustify SetJustification(); // Function UMG.TextBlock.SetJustification // Final|Native|Public|BlueprintCallable // @ game+0x605754c
};

// Class UMG.ComboBoxString
// Size: 0xdb0 (Inherited: 0x130)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> *4331cab7dd; // 0x130(0x10)
	struct FString *41ce27954d; // 0x140(0x10)
	struct F*14d43d58b2 WidgetStyle; // 0x150(0x428)
	struct F*c57f627735 ItemStyle; // 0x578(0x718)
	struct FMargin ContentPadding; // 0xc90(0x10)
	float MaxListHeight; // 0xca0(0x04)
	bool HasDownArrow; // 0xca4(0x01)
	bool EnableGamepadNavigationMode; // 0xca5(0x01)
	char pad_CA6[0x2]; // 0xca6(0x02)
	struct FSlateFontInfo Font; // 0xca8(0x68)
	struct FSlateColor ForegroundColor; // 0xd10(0x28)
	bool bIsFocusable; // 0xd38(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0xd39(0x01)
	char pad_D3A[0x6]; // 0xd3a(0x06)
	DelegateProperty OnGenerateWidgetEvent; // 0xd40(0x10)
	struct FMulticastDelegate OnSelectionChanged; // 0xd50(0x10)
	struct FMulticastDelegate OnOpening; // 0xd60(0x10)
	char pad_D70[0x40]; // 0xd70(0x40)

	struct FString AddOption(); // Function UMG.ComboBoxString.AddOption // Final|Native|Public|BlueprintCallable // @ game+0x604e3b0
	int32 FindOptionIndex(); // Function UMG.ComboBoxString.FindOptionIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604fdc0
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // Final|Native|Public|BlueprintCallable // @ game+0x604e9f4
	struct FString SetSelectedOption(); // Function UMG.ComboBoxString.SetSelectedOption // Final|Native|Public|BlueprintCallable // @ game+0x605957c
	struct FString GetOptionAtIndex(); // Function UMG.ComboBoxString.GetOptionAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051768
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x273e04
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // Final|Native|Public|BlueprintCallable // @ game+0x6052fec
	bool RemoveOption(); // Function UMG.ComboBoxString.RemoveOption // Final|Native|Public|BlueprintCallable // @ game+0x6053708
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051b38
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // Final|Native|Public|BlueprintCallable // @ game+0x604e9e0
	enum class ESelectInfo OnSelectionChangedEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x273e04
	int32 GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60518a8
};

// Class UMG.WidgetSwitcher
// Size: 0x160 (Inherited: 0x148)
struct UWidgetSwitcher : U*7762a61952 {
	int32 ActiveWidgetIndex; // 0x148(0x04)
	char pad_14C[0x14]; // 0x14c(0x14)

	int32 SetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // Native|Public|BlueprintCallable // @ game+0xbb81cc
	int32 GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051704
	struct UWidget* GetWidgetAtIndex(); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60506b0
	struct UWidget* SetActiveWidget(); // Function UMG.WidgetSwitcher.SetActiveWidget // Native|Public|BlueprintCallable // @ game+0x6053b54
	int32 GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x604feb4
};

// Class UMG.*6e0c2fa578
// Size: 0x50 (Inherited: 0x30)
struct U*6e0c2fa578 : U*0dbf8eac01 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFail; // 0x40(0x10)

	struct U*6e0c2fa578* *3081b7af10(); // Function UMG.*6e0c2fa578.*3081b7af10 // Final|Native|Static|Public|BlueprintCallable // @ game+0x604a634
};

// Class UMG.*599ceab1d1
// Size: 0x3f0 (Inherited: 0xd0)
struct U*599ceab1d1 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve Translation[0x02]; // 0xd8(0xe0)
	struct FRichCurve Rotation; // 0x1b8(0x70)
	struct FRichCurve Scale[0x02]; // 0x228(0xe0)
	struct FRichCurve Shear[0x02]; // 0x308(0xe0)
	char pad_3E8[0x8]; // 0x3e8(0x08)
};

// Class UMG.*dc8faf6127
// Size: 0xe0 (Inherited: 0xe0)
struct U*dc8faf6127 : UMovieScenePropertyTrack {
};

// Class UMG.*d6995cdf5f
// Size: 0x2a0 (Inherited: 0xd0)
struct U*d6995cdf5f : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *66843a1ebc; // 0xd8(0x70)
	struct FRichCurve *e207c29198; // 0x148(0x70)
	struct FRichCurve *cb5a1d462d; // 0x1b8(0x70)
	struct FRichCurve *5aa80af22d; // 0x228(0x70)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class UMG.*6f818ef179
// Size: 0xe0 (Inherited: 0xe0)
struct U*6f818ef179 : UMovieScenePropertyTrack {
};

// Class UMG.*de44630c31
// Size: 0xe0 (Inherited: 0xd0)
struct U*de44630c31 : U*771ec893c5 {
	struct TArray<struct FName> *ab9138e846; // 0xc8(0x10)
	struct FName TrackName; // 0xd8(0x08)
};

// Class UMG.*f74040bfc1
// Size: 0x30 (Inherited: 0x30)
struct U*f74040bfc1 : UInterface {
};

// Class UMG.*a6e680fd1f
// Size: 0x50 (Inherited: 0x30)
struct U*a6e680fd1f : UObject {
	struct UObject* SourceObject; // 0x30(0x08)
	struct F*b9de5e4d27 SourcePath; // 0x38(0x10)
	struct FName *f6054127ed; // 0x48(0x08)
};

// Class UMG.*7f5abf0420
// Size: 0x50 (Inherited: 0x50)
struct U*7f5abf0420 : U*a6e680fd1f {

	bool GetValue(); // Function UMG.*7f5abf0420.GetValue // Final|Native|Public|Const // @ game+0x604b068
};

// Class UMG.*52c4cb1eb8
// Size: 0x58 (Inherited: 0x50)
struct U*52c4cb1eb8 : U*a6e680fd1f {
	char pad_50[0x8]; // 0x50(0x08)

	struct FSlateBrush GetValue(); // Function UMG.*52c4cb1eb8.GetValue // Final|Native|Public|Const // @ game+0x604b08c
};

// Class UMG.*52d3ab6906
// Size: 0x58 (Inherited: 0x50)
struct U*52d3ab6906 : U*a6e680fd1f {
	char pad_50[0x8]; // 0x50(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.*52d3ab6906.GetValue // Final|Native|Public|Const // @ game+0x604b118
};

// Class UMG.*559ed3fc5f
// Size: 0x58 (Inherited: 0x50)
struct U*559ed3fc5f : U*a6e680fd1f {
	char pad_50[0x8]; // 0x50(0x08)

	struct FLinearColor GetLinearValue(); // Function UMG.*559ed3fc5f.GetLinearValue // Final|Native|Public|HasDefaults|Const // @ game+0xb21508
	struct FSlateColor GetSlateValue(); // Function UMG.*559ed3fc5f.GetSlateValue // Final|Native|Public|Const // @ game+0x604af68
};

// Class UMG.*c61f65d376
// Size: 0x50 (Inherited: 0x50)
struct U*c61f65d376 : U*a6e680fd1f {

	float GetValue(); // Function UMG.*c61f65d376.GetValue // Final|Native|Public|Const // @ game+0x604b13c
};

// Class UMG.*c647e1d059
// Size: 0x50 (Inherited: 0x50)
struct U*c647e1d059 : U*a6e680fd1f {

	int32 GetValue(); // Function UMG.*c647e1d059.GetValue // Final|Native|Public|Const // @ game+0x604b164
};

// Class UMG.*37058e1b68
// Size: 0x50 (Inherited: 0x50)
struct U*37058e1b68 : U*a6e680fd1f {

	enum class EMouseCursor GetValue(); // Function UMG.*37058e1b68.GetValue // Final|Native|Public|Const // @ game+0x604b188
};

// Class UMG.*a717fca2d3
// Size: 0x58 (Inherited: 0x50)
struct U*a717fca2d3 : U*a6e680fd1f {
	char pad_50[0x8]; // 0x50(0x08)

	struct FString GetStringValue(); // Function UMG.*a717fca2d3.GetStringValue // Final|Native|Public|Const // @ game+0x604afe0
	struct FText GetTextValue(); // Function UMG.*a717fca2d3.GetTextValue // Final|Native|Public|Const // @ game+0xab4b9c
};

// Class UMG.*ebb5cf2462
// Size: 0x50 (Inherited: 0x50)
struct U*ebb5cf2462 : U*a6e680fd1f {

	enum class ESlateVisibility GetValue(); // Function UMG.*ebb5cf2462.GetValue // Final|Native|Public|Const // @ game+0x604b1ac
};

// Class UMG.*05df2cf887
// Size: 0x50 (Inherited: 0x50)
struct U*05df2cf887 : U*a6e680fd1f {

	struct UWidget* GetValue(); // Function UMG.*05df2cf887.GetValue // Final|Native|Public|Const // @ game+0x604b1d0
};

// Class UMG.*7633077302
// Size: 0x38 (Inherited: 0x30)
struct U*7633077302 : UObject {
	bool bReveal; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 RevealedIndex; // 0x34(0x04)
};

// Class UMG.*c60f54b220
// Size: 0x30 (Inherited: 0x30)
struct U*c60f54b220 : UBlueprintFunctionLibrary {

	struct FVector2D *1adafbac69(); // Function UMG.*c60f54b220.*1adafbac69 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x604a1d8
	struct FVector2D *d5bd67c409(); // Function UMG.*c60f54b220.*d5bd67c409 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x604c63c
	struct FVector2D *45733ea366(); // Function UMG.*c60f54b220.*45733ea366 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x604a378
	bool *a41fc37a6c(); // Function UMG.*c60f54b220.*a41fc37a6c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x604a9dc
	struct FVector2D *623bb05504(); // Function UMG.*c60f54b220.*623bb05504 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x604c514
	struct FVector2D *36383c88a3(); // Function UMG.*c60f54b220.*36383c88a3 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x604c764
	struct FVector2D *4565bf1cc2(); // Function UMG.*c60f54b220.*4565bf1cc2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x604bd20
	struct FVector2D *7a677bbbab(); // Function UMG.*c60f54b220.*7a677bbbab // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x604adf0
	bool *8caa7921e6(); // Function UMG.*c60f54b220.*8caa7921e6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x604b98c
	struct FVector2D *6fcc7c9659(); // Function UMG.*c60f54b220.*6fcc7c9659 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x604be78
};

// Class UMG.*b3319b691b
// Size: 0x438 (Inherited: 0x30)
struct U*b3319b691b : UObject {
	struct UTexture2D* *23b3861216; // 0x30(0x08)
	char pad_38[0x400]; // 0x38(0x400)
};

// Class UMG.*858647ccf6
// Size: 0x68 (Inherited: 0x30)
struct U*858647ccf6 : UObject {
	struct TArray<struct F*f99144d292> *237688b410; // 0x30(0x10)
	struct TArray<uint32> *eef6288821; // 0x40(0x10)
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FVector2D *8c5ae62a94; // 0x58(0x08)
	struct FVector2D *109b78e44e; // 0x60(0x08)
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x430 (Inherited: 0x3c0)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x3c0(0x08)
	bool *8826b11e8b; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct TArray<struct F*cfa4c07157> Bindings; // 0x3d0(0x10)
	struct TArray<struct U*54cc75d10f*> Animations; // 0x3e0(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3f0(0x10)
	bool *074710c55f; // 0x400(0x01)
	bool *1e84d37570; // 0x401(0x01)
	bool *a503e85a5c; // 0x402(0x01)
	char pad_403[0x5]; // 0x403(0x05)
	struct UUserWidget* *de60c51349; // 0x408(0x20)
	struct UUserWidget* Template; // 0x428(0x08)
};

// Class UMG.*af92c71e68
// Size: 0x6b0 (Inherited: 0x30)
struct U*af92c71e68 : UObject {
	char pad_30[0x348]; // 0x30(0x348)
	struct U*54cc75d10f* Animation; // 0x378(0x08)
	char pad_380[0x330]; // 0x380(0x330)
};

// Class UMG.PanelSlot
// Size: 0x40 (Inherited: 0x30)
struct UPanelSlot : UVisual {
	struct U*7762a61952* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)
};

// Class UMG.*5f1157099f
// Size: 0x68 (Inherited: 0x40)
struct U*5f1157099f : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*5f1157099f.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605a90c
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*5f1157099f.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6055ed4
	struct FMargin SetPadding(); // Function UMG.*5f1157099f.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60587d8
};

// Class UMG.*1b1e399807
// Size: 0x68 (Inherited: 0x40)
struct U*1b1e399807 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*1b1e399807.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605aa34
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*1b1e399807.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6055ffc
	struct FMargin SetPadding(); // Function UMG.*1b1e399807.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058918
};

// Class UMG.*8bc20cff46
// Size: 0x68 (Inherited: 0x40)
struct U*8bc20cff46 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*8bc20cff46.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605aac8
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*8bc20cff46.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6056090
	struct FMargin SetPadding(); // Function UMG.*8bc20cff46.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60589b8
};

// Class UMG.*6ca2ab22f3
// Size: 0x78 (Inherited: 0x40)
struct U*6ca2ab22f3 : UPanelSlot {
	struct F*1930ebf77e LayoutData; // 0x40(0x28)
	bool bAutoSize; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32 ZOrder; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	struct FVector2D GetPosition(); // Function UMG.*6ca2ab22f3.GetPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60518e4
	int32 *8d79016d5e(); // Function UMG.*6ca2ab22f3.*8d79016d5e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6052178
	struct FAnchors SetAnchors(); // Function UMG.*6ca2ab22f3.SetAnchors // Final|Native|Public|BlueprintCallable // @ game+0x6053d10
	struct FVector2D SetPosition(); // Function UMG.*6ca2ab22f3.SetPosition // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6059090
	struct FAnchors *367a2f01d6(); // Function UMG.*6ca2ab22f3.*367a2f01d6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6050268
	struct FMargin SetOffsets(); // Function UMG.*6ca2ab22f3.SetOffsets // Final|Native|Public|BlueprintCallable // @ game+0x66fbb0
	struct F*1930ebf77e SetLayout(); // Function UMG.*6ca2ab22f3.SetLayout // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x60577fc
	struct FVector2D SetSize(); // Function UMG.*6ca2ab22f3.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x605982c
	struct FVector2D GetAlignment(); // Function UMG.*6ca2ab22f3.GetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x604fed8
	int32 SetZOrder(); // Function UMG.*6ca2ab22f3.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x605b39c
	struct FVector2D GetSize(); // Function UMG.*6ca2ab22f3.GetSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6051c0c
	struct F*1930ebf77e GetLayout(); // Function UMG.*6ca2ab22f3.GetLayout // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x605138c
	struct FVector2D SetAlignment(); // Function UMG.*6ca2ab22f3.SetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6053be8
	struct FVector2D SetMinimum(); // Function UMG.*6ca2ab22f3.SetMinimum // Final|Native|Public|HasDefaults // @ game+0x60581e0
	struct FVector2D SetMaximum(); // Function UMG.*6ca2ab22f3.SetMaximum // Final|Native|Public|HasDefaults // @ game+0x6057d2c
	struct FMargin *a6bd1a86d5(); // Function UMG.*6ca2ab22f3.*a6bd1a86d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051728
	bool SetAutoSize(); // Function UMG.*6ca2ab22f3.SetAutoSize // Final|Native|Public|BlueprintCallable // @ game+0x6054130
	bool *c91ca394c9(); // Function UMG.*6ca2ab22f3.*c91ca394c9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6050298
};

// Class UMG.GridSlot
// Size: 0x78 (Inherited: 0x40)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32 row; // 0x54(0x04)
	int32 RowSpan; // 0x58(0x04)
	int32 column; // 0x5c(0x04)
	int32 ColumnSpan; // 0x60(0x04)
	int32 Layer; // 0x64(0x04)
	struct FVector2D Nudge; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.GridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605ab5c
	struct FMargin SetPadding(); // Function UMG.GridSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0xa7d5e4
	int32 SetLayer(); // Function UMG.GridSlot.SetLayer // Final|Native|Public|BlueprintCallable // @ game+0x60576d4
	int32 SetRowSpan(); // Function UMG.GridSlot.SetRowSpan // Final|Native|Public|BlueprintCallable // @ game+0x60592d8
	int32 SetColumnSpan(); // Function UMG.GridSlot.SetColumnSpan // Final|Native|Public|BlueprintCallable // @ game+0x6054e18
	int32 SetRow(); // Function UMG.GridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x60591bc
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.GridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6056124
	int32 SetColumn(); // Function UMG.GridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x6054cfc
};

// Class UMG.*257ae73062
// Size: 0x68 (Inherited: 0x40)
struct U*257ae73062 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	struct FSlateChildSize SetSize(); // Function UMG.*257ae73062.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x60598b8
	struct FMargin SetPadding(); // Function UMG.*257ae73062.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058a58
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*257ae73062.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60561b4
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*257ae73062.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605abec
};

// Class UMG.*9650b8c862
// Size: 0x60 (Inherited: 0x40)
struct U*9650b8c862 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32 ZOrder; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*9650b8c862.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605ac7c
	struct FMargin SetPadding(); // Function UMG.*9650b8c862.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058af8
	int32 *8d79016d5e(); // Function UMG.*9650b8c862.*8d79016d5e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x605219c
	int32 SetZOrder(); // Function UMG.*9650b8c862.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x605b42c
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*9650b8c862.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6056244
};

// Class UMG.*b0d52a7b07
// Size: 0x68 (Inherited: 0x40)
struct U*b0d52a7b07 : UPanelSlot {
	bool bIsTitleSafe; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FMargin SafeAreaScale; // 0x44(0x10)
	enum class EHorizontalAlignment HAlign; // 0x54(0x01)
	enum class EVerticalAlignment VAlign; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FMargin Padding; // 0x58(0x10)
};

// Class UMG.*1bd7c64892
// Size: 0x68 (Inherited: 0x40)
struct U*1bd7c64892 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*1bd7c64892.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605ad0c
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*1bd7c64892.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60562d4
	struct FMargin SetPadding(); // Function UMG.*1bd7c64892.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058b98
};

// Class UMG.*c0b5b5162e
// Size: 0x60 (Inherited: 0x40)
struct U*c0b5b5162e : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)

	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*c0b5b5162e.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6056368
	struct FMargin SetPadding(); // Function UMG.*c0b5b5162e.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058c2c
};

// Class UMG.*d8fae5138c
// Size: 0x68 (Inherited: 0x40)
struct U*d8fae5138c : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*d8fae5138c.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605ada0
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*d8fae5138c.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60563f8
	struct FMargin SetPadding(); // Function UMG.*d8fae5138c.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058ccc
};

// Class UMG.UniformGridSlot
// Size: 0x58 (Inherited: 0x40)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x40(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32 row; // 0x44(0x04)
	int32 column; // 0x48(0x04)
	char pad_4C[0xc]; // 0x4c(0x0c)

	int32 SetColumn(); // Function UMG.UniformGridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x6054d8c
	int32 SetRow(); // Function UMG.UniformGridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x605924c
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.UniformGridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605648c
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.UniformGridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605ae34
};

// Class UMG.*64ba102e89
// Size: 0x68 (Inherited: 0x40)
struct U*64ba102e89 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	struct FSlateChildSize SetSize(); // Function UMG.*64ba102e89.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x60598b8
	struct FMargin SetPadding(); // Function UMG.*64ba102e89.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058a58
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*64ba102e89.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60561b4
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*64ba102e89.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605abec
};

// Class UMG.*c357953a24
// Size: 0x60 (Inherited: 0x40)
struct U*c357953a24 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*c357953a24.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605ac7c
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*c357953a24.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6056244
	struct FMargin SetPadding(); // Function UMG.*c357953a24.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058c2c
};

// Class UMG.*095222729c
// Size: 0x168 (Inherited: 0x148)
struct U*095222729c : U*98b93d26ba {
	bool bDoubleClickTogglesFullscreen; // 0x148(0x01)
	char pad_149[0x1f]; // 0x149(0x1f)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*095222729c.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605aec4
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*095222729c.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605651c
	struct FMargin SetPadding(); // Function UMG.*095222729c.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058d6c
};

// Class UMG.*ccba555fed
// Size: 0x68 (Inherited: 0x40)
struct U*ccba555fed : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*ccba555fed.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605af54
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*ccba555fed.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60565ac
	struct FMargin SetPadding(); // Function UMG.*ccba555fed.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058e0c
};

// Class UMG.*188b715550
// Size: 0x68 (Inherited: 0x40)
struct U*188b715550 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	float SetFillSpanWhenLessThan(); // Function UMG.*188b715550.SetFillSpanWhenLessThan // Final|Native|Public|BlueprintCallable // @ game+0x6055684
	struct FMargin SetPadding(); // Function UMG.*188b715550.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058eac
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*188b715550.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605afe8
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*188b715550.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6056640
	bool SetFillEmptySpace(); // Function UMG.*188b715550.SetFillEmptySpace // Final|Native|Public|BlueprintCallable // @ game+0x60555f0
};

// Class UMG.CircularThrobber
// Size: 0x1f0 (Inherited: 0x130)
struct UCircularThrobber : UWidget {
	int32 NumberOfPieces; // 0x130(0x04)
	float Period; // 0x134(0x04)
	float Radius; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct USlateBrushAsset* PieceImage; // 0x140(0x08)
	struct FSlateBrush Image; // 0x148(0x90)
	bool bEnableRadius; // 0x1d8(0x01)
	char pad_1D9[0x17]; // 0x1d9(0x17)

	float SetRadius(); // Function UMG.CircularThrobber.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x605911c
	float SetPeriod(); // Function UMG.CircularThrobber.SetPeriod // Final|Native|Public|BlueprintCallable // @ game+0x6058fe4
	int32 SetNumberOfPieces(); // Function UMG.CircularThrobber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x6058410
};

// Class UMG.ComboBox
// Size: 0x168 (Inherited: 0x130)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x130(0x10)
	DelegateProperty OnGenerateWidgetEvent; // 0x140(0x10)
	bool bIsFocusable; // 0x150(0x01)
	char pad_151[0x17]; // 0x151(0x17)
};

// Class UMG.EditableTextBox
// Size: 0xae8 (Inherited: 0x130)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x130(0x18)
	DelegateProperty TextDelegate; // 0x148(0x10)
	struct F*7051df995c WidgetStyle; // 0x158(0x870)
	struct USlateWidgetStyleAsset* Style; // 0x9c8(0x08)
	struct FText HintText; // 0x9d0(0x18)
	DelegateProperty HintTextDelegate; // 0x9e8(0x10)
	struct FSlateFontInfo Font; // 0x9f8(0x68)
	struct FLinearColor ForegroundColor; // 0xa60(0x10)
	struct FLinearColor BackgroundColor; // 0xa70(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xa80(0x10)
	bool IsReadOnly; // 0xa90(0x01)
	bool IsPassword; // 0xa91(0x01)
	char pad_A92[0x2]; // 0xa92(0x02)
	float MinimumDesiredWidth; // 0xa94(0x04)
	struct FMargin Padding; // 0xa98(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xaa8(0x01)
	bool SelectAllTextWhenFocused; // 0xaa9(0x01)
	bool RevertTextOnEscape; // 0xaaa(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xaab(0x01)
	bool SelectAllTextOnCommit; // 0xaac(0x01)
	bool *04f30eb062; // 0xaad(0x01)
	enum class EVirtualKeyboardType *0427d9466c; // 0xaae(0x01)
	char pad_AAF[0x1]; // 0xaaf(0x01)
	struct F*d6addb82fe ShapedTextOptions; // 0xab0(0x08)
	struct FMulticastDelegate OnTextChanged; // 0xab8(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xac8(0x10)
	char pad_AD8[0x10]; // 0xad8(0x10)

	enum class ETextCommit OnEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x273e04
	bool HasError(); // Function UMG.EditableTextBox.HasError // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60522fc
	struct FText SetError(); // Function UMG.EditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x60551fc
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051cd0
	struct FText SetHintText(); // Function UMG.EditableTextBox.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x6055d4c
	bool SetIsReadOnly(); // Function UMG.EditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x6057200
	struct FText OnEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x273e04
	struct FText SetText(); // Function UMG.EditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x605a078
	void ClearError(); // Function UMG.EditableTextBox.ClearError // Final|Native|Public|BlueprintCallable // @ game+0x604e8c4
};

// Class UMG.ExpandableArea
// Size: 0x378 (Inherited: 0x130)
struct UExpandableArea : UWidget {
	char pad_130[0x8]; // 0x130(0x08)
	struct F*02f9ad486c Style; // 0x138(0x130)
	struct FSlateBrush BorderBrush; // 0x268(0x90)
	struct FSlateColor BorderColor; // 0x2f8(0x28)
	bool bIsExpanded; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	float MaxHeight; // 0x324(0x04)
	struct FMargin HeaderPadding; // 0x328(0x10)
	struct FMargin AreaPadding; // 0x338(0x10)
	struct FMulticastDelegate OnExpansionChanged; // 0x348(0x10)
	struct UWidget* *7ead08adbe; // 0x358(0x08)
	struct UWidget* *c2a3e400f9; // 0x360(0x08)
	char pad_368[0x10]; // 0x368(0x10)

	bool SetIsExpanded_Animated(); // Function UMG.ExpandableArea.SetIsExpanded_Animated // Final|Native|Public|BlueprintCallable // @ game+0x6056f80
	bool SetIsExpanded(); // Function UMG.ExpandableArea.SetIsExpanded // Final|Native|Public|BlueprintCallable // @ game+0x6056ee4
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051188
};

// Class UMG.Image
// Size: 0x218 (Inherited: 0x130)
struct UImage : UWidget {
	struct USlateBrushAsset* Image; // 0x130(0x08)
	struct FSlateBrush Brush; // 0x138(0x90)
	DelegateProperty BrushDelegate; // 0x1c8(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1d8(0x10)
	DelegateProperty ColorAndOpacityDelegate; // 0x1e8(0x10)
	DelegateProperty OnMouseButtonDownEvent; // 0x1f8(0x10)
	char pad_208[0x10]; // 0x208(0x10)

	float SetOpacity(); // Function UMG.Image.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x6058568
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x60508cc
	bool SetBrushFromTextureDynamic(); // Function UMG.Image.SetBrushFromTextureDynamic // Final|Native|Public|BlueprintCallable // @ game+0x6054810
	struct FSlateBrush SetBrush(); // Function UMG.Image.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x60544d4
	bool SetBrushFromTexture(); // Function UMG.Image.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0xbd907c
	struct UMaterialInterface* SetBrushFromMaterial(); // Function UMG.Image.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x6054780
	struct FLinearColor SetColorAndOpacity(); // Function UMG.Image.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ed7c
	struct USlateBrushAsset* SetBrushFromAsset(); // Function UMG.Image.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x6054660
	struct FVector2D SetBrushSize(); // Function UMG.Image.SetBrushSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6054aa4
};

// Class UMG.InputKeySelector
// Size: 0x230 (Inherited: 0x130)
struct UInputKeySelector : UWidget {
	struct F*4396e9090b SelectedKey; // 0x130(0x20)
	struct FSlateFontInfo Font; // 0x150(0x68)
	struct FMargin Margin; // 0x1b8(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1c8(0x10)
	struct FText KeySelectionText; // 0x1d8(0x18)
	bool bAllowModifierKeys; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FMulticastDelegate OnKeySelected; // 0x1f8(0x10)
	struct FMulticastDelegate OnIsSelectingKeyChanged; // 0x208(0x10)
	char pad_218[0x18]; // 0x218(0x18)

	struct F*4396e9090b SetSelectedKey(); // Function UMG.InputKeySelector.SetSelectedKey // Final|Native|Public|BlueprintCallable // @ game+0x6059490
	struct F*4396e9090b OnKeySelected__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x273e04
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60511cc
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x273e04
	bool SetAllowModifierKeys(); // Function UMG.InputKeySelector.SetAllowModifierKeys // Final|Native|Public|BlueprintCallable // @ game+0x6053c74
	struct FText SetKeySelectionText(); // Function UMG.InputKeySelector.SetKeySelectionText // Final|Native|Public|BlueprintCallable // @ game+0x60575e0
};

// Class UMG.NativeWidgetHost
// Size: 0x140 (Inherited: 0x130)
struct UNativeWidgetHost : UWidget {
	char pad_130[0x10]; // 0x130(0x10)
};

// Class UMG.CanvasPanel
// Size: 0x158 (Inherited: 0x148)
struct UCanvasPanel : U*7762a61952 {
	char pad_148[0x10]; // 0x148(0x10)

	struct U*6ca2ab22f3* AddChildToCanvas(); // Function UMG.CanvasPanel.AddChildToCanvas // Final|Native|Public|BlueprintCallable // @ game+0x604dcb0
};

// Class UMG.BackgroundBlur
// Size: 0x208 (Inherited: 0x148)
struct UBackgroundBlur : U*98b93d26ba {
	struct FMargin Padding; // 0x148(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x158(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x159(0x01)
	bool bApplyAlphaToBlur; // 0x15a(0x01)
	char pad_15B[0x1]; // 0x15b(0x01)
	float BlurStrength; // 0x15c(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	int32 BlurRadius; // 0x164(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x168(0x90)
	char pad_1F8[0x10]; // 0x1f8(0x10)

	bool SetApplyAlphaToBlur(); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // Final|Native|Public|BlueprintCallable // @ game+0x6053ffc
	struct FMargin SetPadding(); // Function UMG.BackgroundBlur.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058738
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.BackgroundBlur.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6055e40
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.BackgroundBlur.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605a878
	struct FSlateBrush SetLowQualityFallbackBrush(); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6057938
	int32 SetBlurRadius(); // Function UMG.BackgroundBlur.SetBlurRadius // Final|Native|Public|BlueprintCallable // @ game+0x6054348
	float SetBlurStrength(); // Function UMG.BackgroundBlur.SetBlurStrength // Native|Public|BlueprintCallable // @ game+0xdac5c0
};

// Class UMG.Border
// Size: 0x2a8 (Inherited: 0x148)
struct UBorder : U*98b93d26ba {
	struct FLinearColor ContentColorAndOpacity; // 0x148(0x10)
	DelegateProperty ContentColorAndOpacityDelegate; // 0x158(0x10)
	struct FMargin Padding; // 0x168(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x178(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
	struct FSlateBrush Background; // 0x180(0x90)
	DelegateProperty BackgroundDelegate; // 0x210(0x10)
	struct FLinearColor BrushColor; // 0x220(0x10)
	DelegateProperty BrushColorDelegate; // 0x230(0x10)
	struct FVector2D DesiredSizeScale; // 0x240(0x08)
	bool bShowEffectWhenDisabled; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	DelegateProperty OnMouseButtonDownEvent; // 0x250(0x10)
	DelegateProperty OnMouseButtonUpEvent; // 0x260(0x10)
	DelegateProperty OnMouseMoveEvent; // 0x270(0x10)
	DelegateProperty OnMouseDoubleClickEvent; // 0x280(0x10)
	char pad_290[0x10]; // 0x290(0x10)
	struct USlateBrushAsset* Brush; // 0x2a0(0x08)

	struct FLinearColor SetBrushColor(); // Function UMG.Border.SetBrushColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xbb90c4
	struct FMargin SetPadding(); // Function UMG.Border.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6058878
	struct UTexture2D* SetBrushFromTexture(); // Function UMG.Border.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0x60546f0
	struct UMaterialInterface* SetBrushFromMaterial(); // Function UMG.Border.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x60546f0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x60508a8
	struct USlateBrushAsset* SetBrushFromAsset(); // Function UMG.Border.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x60545d0
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.Border.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6055f68
	struct FVector2D SetDesiredSizeScale(); // Function UMG.Border.SetDesiredSizeScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x605501c
	struct FLinearColor SetContentColorAndOpacity(); // Function UMG.Border.SetContentColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ee14
	struct FSlateBrush SetBrush(); // Function UMG.Border.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x60543d8
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.Border.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x605a9a0
};

// Class UMG.CheckBox
// Size: 0x7f8 (Inherited: 0x148)
struct UCheckBox : U*98b93d26ba {
	enum class ECheckBoxState CheckedState; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty CheckedStateDelegate; // 0x150(0x10)
	struct F*d23c67e4c5 WidgetStyle; // 0x160(0x5e0)
	struct USlateWidgetStyleAsset* Style; // 0x740(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x748(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x750(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x758(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x760(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x768(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x770(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x778(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x780(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x788(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x790(0x01)
	char pad_791[0x3]; // 0x791(0x03)
	struct FMargin Padding; // 0x794(0x10)
	char pad_7A4[0x4]; // 0x7a4(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x7a8(0x28)
	bool IsFocusable; // 0x7d0(0x01)
	char pad_7D1[0x7]; // 0x7d1(0x07)
	struct FMulticastDelegate OnCheckStateChanged; // 0x7d8(0x10)
	char pad_7E8[0x10]; // 0x7e8(0x10)

	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x605068c
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60524a4
	enum class ECheckBoxState SetCheckedState(); // Function UMG.CheckBox.SetCheckedState // Final|Native|Public|BlueprintCallable // @ game+0x6054bd4
	bool SetIsChecked(); // Function UMG.CheckBox.SetIsChecked // Final|Native|Public|BlueprintCallable // @ game+0x6056e50
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60523bc
};

// Class UMG.InvalidationBox
// Size: 0x160 (Inherited: 0x148)
struct UInvalidationBox : U*98b93d26ba {
	bool *b81f57084d; // 0x148(0x01)
	bool CacheRelativeTransforms; // 0x149(0x01)
	char pad_14A[0x16]; // 0x14a(0x16)

	bool SetCanCache(); // Function UMG.InvalidationBox.SetCanCache // Final|Native|Public|BlueprintCallable // @ game+0x6054b40
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x605066c
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // Final|Native|Public|BlueprintCallable // @ game+0x6052384
};

// Class UMG.MenuAnchor
// Size: 0x188 (Inherited: 0x148)
struct UMenuAnchor : U*98b93d26ba {
	struct UClass* MenuClass; // 0x148(0x08)
	DelegateProperty OnGetMenuContentEvent; // 0x150(0x10)
	enum class *0bc71ad42c Placement; // 0x160(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x161(0x01)
	bool UseApplicationMenuStack; // 0x162(0x01)
	char pad_163[0x5]; // 0x163(0x05)
	struct FMulticastDelegate OnMenuOpenChanged; // 0x168(0x10)
	char pad_178[0x10]; // 0x178(0x10)

	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6052404
	bool ToggleOpen(); // Function UMG.MenuAnchor.ToggleOpen // Final|Native|Public|BlueprintCallable // @ game+0x605b8f0
	bool Open(); // Function UMG.MenuAnchor.Open // Final|Native|Public|BlueprintCallable // @ game+0x6052ad8
	void Close(); // Function UMG.MenuAnchor.Close // Final|Native|Public|BlueprintCallable // @ game+0x604eb94
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x605234c
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x605b4bc
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6051528
};

// Class UMG.NamedSlot
// Size: 0x158 (Inherited: 0x148)
struct UNamedSlot : U*98b93d26ba {
	char pad_148[0x10]; // 0x148(0x10)
};

// Class UMG.RetainerBox
// Size: 0x178 (Inherited: 0x148)
struct URetainerBox : U*98b93d26ba {
	bool *f8fbe48fbf; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	int32 phase; // 0x14c(0x04)
	int32 *09a066d23a; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x158(0x08)
	struct FName TextureParameter; // 0x160(0x08)
	char pad_168[0x10]; // 0x168(0x10)

	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60509e8
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // Final|Native|Public|BlueprintCallable // @ game+0x6053840
	struct UMaterialInterface* SetEffectMaterial(); // Function UMG.RetainerBox.SetEffectMaterial // Final|Native|Public|BlueprintCallable // @ game+0x605516c
	struct FName SetTextureParameter(); // Function UMG.RetainerBox.SetTextureParameter // Final|Native|Public|BlueprintCallable // @ game+0x605a44c
};

// Class UMG.SafeZone
// Size: 0x160 (Inherited: 0x148)
struct USafeZone : U*98b93d26ba {
	bool PadLeft; // 0x148(0x01)
	bool PadRight; // 0x149(0x01)
	bool PadTop; // 0x14a(0x01)
	bool PadBottom; // 0x14b(0x01)
	char pad_14C[0x14]; // 0x14c(0x14)
};

// Class UMG.ScaleBox
// Size: 0x168 (Inherited: 0x148)
struct UScaleBox : U*98b93d26ba {
	enum class EStretch Stretch; // 0x148(0x01)
	enum class EStretchDirection StretchDirection; // 0x149(0x01)
	char pad_14A[0x2]; // 0x14a(0x02)
	float UserSpecifiedScale; // 0x14c(0x04)
	bool IgnoreInheritedScale; // 0x150(0x01)
	char pad_151[0x17]; // 0x151(0x17)

	enum class EStretchDirection SetStretchDirection(); // Function UMG.ScaleBox.SetStretchDirection // Final|Native|Public|BlueprintCallable // @ game+0x6059e1c
	enum class EStretch SetStretch(); // Function UMG.ScaleBox.SetStretch // Final|Native|Public|BlueprintCallable // @ game+0x6059d84
	float SetUserSpecifiedScale(); // Function UMG.ScaleBox.SetUserSpecifiedScale // Final|Native|Public|BlueprintCallable // @ game+0x605a6b0
	bool SetIgnoreInheritedScale(); // Function UMG.ScaleBox.SetIgnoreInheritedScale // Final|Native|Public|BlueprintCallable // @ game+0x60566d0
};

// Class UMG.SizeBox
// Size: 0x178 (Inherited: 0x148)
struct USizeBox : U*98b93d26ba {
	char bOverride_WidthOverride : 1; // 0x148(0x01)
	char bOverride_HeightOverride : 1; // 0x148(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x148(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x148(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x148(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x148(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x148(0x01)
	char pad_148_7 : 1; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float WidthOverride; // 0x14c(0x04)
	float HeightOverride; // 0x150(0x04)
	float MinDesiredWidth; // 0x154(0x04)
	float MinDesiredHeight; // 0x158(0x04)
	float MaxDesiredWidth; // 0x15c(0x04)
	float MaxDesiredHeight; // 0x160(0x04)
	float MaxAspectRatio; // 0x164(0x04)
	char pad_168[0x10]; // 0x168(0x10)

	float SetMinDesiredWidth(); // Function UMG.SizeBox.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x6057f80
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x604e940
	float SetMaxDesiredWidth(); // Function UMG.SizeBox.SetMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x6057b64
	float SetMaxDesiredHeight(); // Function UMG.SizeBox.SetMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x6057acc
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x604e990
	float SetMinDesiredHeight(); // Function UMG.SizeBox.SetMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x6057db8
	float SetHeightOverride(); // Function UMG.SizeBox.SetHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x73eb80
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x604e918
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x604e954
	float SetMaxAspectRatio(); // Function UMG.SizeBox.SetMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x6057a34
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x604e9a4
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x604e92c
	float SetWidthOverride(); // Function UMG.SizeBox.SetWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x73ee2c
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x604eb80
};

// Class UMG.Viewport
// Size: 0x170 (Inherited: 0x148)
struct UViewport : U*98b93d26ba {
	struct FLinearColor BackgroundColor; // 0x148(0x10)
	char pad_158[0x18]; // 0x158(0x18)

	struct FVector SetViewLocation(); // Function UMG.Viewport.SetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x605b078
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6052158
	struct AActor* Spawn(); // Function UMG.Viewport.Spawn // Final|Native|Public|BlueprintCallable // @ game+0x605b850
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6051f98
	struct FRotator SetViewRotation(); // Function UMG.Viewport.SetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x605b130
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6051fe4
};

// Class UMG.GridPanel
// Size: 0x178 (Inherited: 0x148)
struct UGridPanel : U*7762a61952 {
	struct TArray<float> ColumnFill; // 0x148(0x10)
	struct TArray<float> RowFill; // 0x158(0x10)
	char pad_168[0x10]; // 0x168(0x10)

	struct UGridSlot* AddChildToGrid(); // Function UMG.GridPanel.AddChildToGrid // Final|Native|Public|BlueprintCallable // @ game+0x604ddb0
};

// Class UMG.HorizontalBox
// Size: 0x158 (Inherited: 0x148)
struct UHorizontalBox : U*7762a61952 {
	char pad_148[0x10]; // 0x148(0x10)

	struct U*257ae73062* AddChildToHorizontalBox(); // Function UMG.HorizontalBox.AddChildToHorizontalBox // Final|Native|Public|BlueprintCallable // @ game+0x604deb0
};

// Class UMG.Overlay
// Size: 0x158 (Inherited: 0x148)
struct UOverlay : U*7762a61952 {
	char pad_148[0x10]; // 0x148(0x10)

	struct U*9650b8c862* AddChildToOverlay(); // Function UMG.Overlay.AddChildToOverlay // Final|Native|Public|BlueprintCallable // @ game+0x604dfb0
};

// Class UMG.ScrollBox
// Size: 0x8e0 (Inherited: 0x148)
struct UScrollBox : U*7762a61952 {
	struct F*894106b4cc WidgetStyle; // 0x148(0x248)
	struct F*49a6b284e1 WidgetBarStyle; // 0x390(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x8a8(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x8b0(0x08)
	enum class EOrientation Orientation; // 0x8b8(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x8b9(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x8ba(0x01)
	char pad_8BB[0x1]; // 0x8bb(0x01)
	struct FVector2D ScrollbarThickness; // 0x8bc(0x08)
	bool AlwaysShowScrollbar; // 0x8c4(0x01)
	bool bUseRightMouseButtonToScroll; // 0x8c5(0x01)
	bool bGainFocusWhenClickedScrollBar; // 0x8c6(0x01)
	bool bLinearScrollOnWheel; // 0x8c7(0x01)
	char pad_8C8[0x18]; // 0x8c8(0x18)

	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // Final|Native|Public|BlueprintCallable // @ game+0x6053868
	enum class ESlateVisibility SetScrollBarVisibility(); // Function UMG.ScrollBox.SetScrollBarVisibility // Final|Native|Public|BlueprintCallable // @ game+0x6059368
	float SetScrollOffset(); // Function UMG.ScrollBox.SetScrollOffset // Final|Native|Public|BlueprintCallable // @ game+0x60593f8
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051af0
	bool ScrollWidgetIntoView(); // Function UMG.ScrollBox.ScrollWidgetIntoView // Final|Native|Public|BlueprintCallable // @ game+0x6053918
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // Final|Native|Public|BlueprintCallable // @ game+0x6053854
	float GetScrollToEndOffset(); // Function UMG.ScrollBox.GetScrollToEndOffset // Final|Native|Public|BlueprintCallable // @ game+0x6051b10
};

// Class UMG.UniformGridPanel
// Size: 0x170 (Inherited: 0x148)
struct UUniformGridPanel : U*7762a61952 {
	struct FMargin SlotPadding; // 0x148(0x10)
	float MinDesiredSlotWidth; // 0x158(0x04)
	float MinDesiredSlotHeight; // 0x15c(0x04)
	char pad_160[0x10]; // 0x160(0x10)

	float SetMinDesiredSlotWidth(); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // Final|Native|Public|BlueprintCallable // @ game+0x6057ee8
	struct FMargin SetSlotPadding(); // Function UMG.UniformGridPanel.SetSlotPadding // Final|Native|Public|BlueprintCallable // @ game+0x6059b50
	float SetMinDesiredSlotHeight(); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // Final|Native|Public|BlueprintCallable // @ game+0x6057e50
	struct UUniformGridSlot* AddChildToUniformGrid(); // Function UMG.UniformGridPanel.AddChildToUniformGrid // Final|Native|Public|BlueprintCallable // @ game+0x604e0b0
};

// Class UMG.VerticalBox
// Size: 0x158 (Inherited: 0x148)
struct UVerticalBox : U*7762a61952 {
	char pad_148[0x10]; // 0x148(0x10)

	struct U*64ba102e89* AddChildToVerticalBox(); // Function UMG.VerticalBox.AddChildToVerticalBox // Final|Native|Public|BlueprintCallable // @ game+0x604e1b0
};

// Class UMG.WrapBox
// Size: 0x168 (Inherited: 0x148)
struct UWrapBox : U*7762a61952 {
	struct FVector2D InnerSlotPadding; // 0x148(0x08)
	float WrapWidth; // 0x150(0x04)
	bool bExplicitWrapWidth; // 0x154(0x01)
	char pad_155[0x13]; // 0x155(0x13)

	struct U*188b715550* AddChildWrapBox(); // Function UMG.WrapBox.AddChildWrapBox // Final|Native|Public|BlueprintCallable // @ game+0x604e2b0
	struct FVector2D SetInnerSlotPadding(); // Function UMG.WrapBox.SetInnerSlotPadding // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60567fc
};

// Class UMG.ProgressBar
// Size: 0x350 (Inherited: 0x130)
struct UProgressBar : UWidget {
	struct F*d246388505 WidgetStyle; // 0x130(0x1b8)
	struct USlateWidgetStyleAsset* Style; // 0x2e8(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x2f0(0x08)
	struct USlateBrushAsset* FillImage; // 0x2f8(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x300(0x08)
	float Percent; // 0x308(0x04)
	enum class EProgressBarFillType BarFillType; // 0x30c(0x01)
	bool bIsMarquee; // 0x30d(0x01)
	char pad_30E[0x2]; // 0x30e(0x02)
	DelegateProperty PercentDelegate; // 0x310(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x320(0x10)
	DelegateProperty FillColorAndOpacityDelegate; // 0x330(0x10)
	char pad_340[0x10]; // 0x340(0x10)

	bool SetIsMarquee(); // Function UMG.ProgressBar.SetIsMarquee // Final|Native|Public|BlueprintCallable // @ game+0x605701c
	struct FLinearColor SetFillColorAndOpacity(); // Function UMG.ProgressBar.SetFillColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6055558
	float SetPercent(); // Function UMG.ProgressBar.SetPercent // Final|Native|Public|BlueprintCallable // @ game+0x6058f4c
};

// Class UMG.ScrollBar
// Size: 0x670 (Inherited: 0x130)
struct UScrollBar : UWidget {
	struct F*49a6b284e1 WidgetStyle; // 0x130(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x648(0x08)
	bool *f86cccd6c9; // 0x650(0x01)
	enum class EOrientation Orientation; // 0x651(0x01)
	char pad_652[0x2]; // 0x652(0x02)
	struct FVector2D Thickness; // 0x654(0x08)
	char pad_65C[0x14]; // 0x65c(0x14)

	float SetState(); // Function UMG.ScrollBar.SetState // Final|Native|Public|BlueprintCallable // @ game+0x6059bf0
};

// Class UMG.Slider
// Size: 0x428 (Inherited: 0x130)
struct USlider : UWidget {
	float Value; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	DelegateProperty ValueDelegate; // 0x138(0x10)
	struct F*a4fb316a11 WidgetStyle; // 0x148(0x250)
	enum class EOrientation Orientation; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FLinearColor SliderBarColor; // 0x39c(0x10)
	struct FLinearColor SliderHandleColor; // 0x3ac(0x10)
	bool IndentHandle; // 0x3bc(0x01)
	bool Locked; // 0x3bd(0x01)
	char pad_3BE[0x2]; // 0x3be(0x02)
	float StepSize; // 0x3c0(0x04)
	bool IsFocusable; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	struct FMulticastDelegate OnMouseCaptureBegin; // 0x3c8(0x10)
	struct FMulticastDelegate OnMouseCaptureEnd; // 0x3d8(0x10)
	struct FMulticastDelegate OnControllerCaptureBegin; // 0x3e8(0x10)
	struct FMulticastDelegate OnControllerCaptureEnd; // 0x3f8(0x10)
	struct FMulticastDelegate OnValueChanged; // 0x408(0x10)
	char pad_418[0x10]; // 0x418(0x10)

	bool SetLocked(); // Function UMG.Slider.SetLocked // Final|Native|Public|BlueprintCallable // @ game+0x60578a4
	float GetValue(); // Function UMG.Slider.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051f48
	float SetValue(); // Function UMG.Slider.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x605a748
	bool SetIndentHandle(); // Function UMG.Slider.SetIndentHandle // Final|Native|Public|BlueprintCallable // @ game+0x6056768
	struct FLinearColor SetSliderHandleColor(); // Function UMG.Slider.SetSliderHandleColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6059aa4
	float SetStepSize(); // Function UMG.Slider.SetStepSize // Final|Native|Public|BlueprintCallable // @ game+0x6059cec
	struct FLinearColor SetSliderBarColor(); // Function UMG.Slider.SetSliderBarColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60599f8
};

// Class UMG.Spacer
// Size: 0x148 (Inherited: 0x130)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)

	struct FVector2D SetSize(); // Function UMG.Spacer.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x605996c
};

// Class UMG.SpinBox
// Size: 0x568 (Inherited: 0x130)
struct USpinBox : UWidget {
	float Value; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	DelegateProperty ValueDelegate; // 0x138(0x10)
	struct F*905149747b WidgetStyle; // 0x148(0x310)
	struct USlateWidgetStyleAsset* Style; // 0x458(0x08)
	float Delta; // 0x460(0x04)
	float SliderExponent; // 0x464(0x04)
	struct FSlateFontInfo Font; // 0x468(0x68)
	float MinDesiredWidth; // 0x4d0(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x4d4(0x01)
	bool SelectAllTextOnCommit; // 0x4d5(0x01)
	char pad_4D6[0x2]; // 0x4d6(0x02)
	struct FSlateColor ForegroundColor; // 0x4d8(0x28)
	struct FMulticastDelegate OnValueChanged; // 0x500(0x10)
	struct FMulticastDelegate OnValueCommitted; // 0x510(0x10)
	struct FMulticastDelegate OnBeginSliderMovement; // 0x520(0x10)
	struct FMulticastDelegate OnEndSliderMovement; // 0x530(0x10)
	char bOverride_MinValue : 1; // 0x540(0x01)
	char bOverride_MaxValue : 1; // 0x540(0x01)
	char bOverride_MinSliderValue : 1; // 0x540(0x01)
	char bOverride_MaxSliderValue : 1; // 0x540(0x01)
	char pad_540_4 : 4; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	float MinValue; // 0x544(0x04)
	float MaxValue; // 0x548(0x04)
	float *ad3d5161ab; // 0x54c(0x04)
	float *8e28c2fa59; // 0x550(0x04)
	char pad_554[0x14]; // 0x554(0x14)

	float GetValue(); // Function UMG.SpinBox.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051f70
	float SetMaxSliderValue(); // Function UMG.SpinBox.SetMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x6057bfc
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051500
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x273e04
	float SetMaxValue(); // Function UMG.SpinBox.SetMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x6057c94
	float SetMinValue(); // Function UMG.SpinBox.SetMinValue // Final|Native|Public|BlueprintCallable // @ game+0x6058148
	float OnSpinBoxValueChangedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x273e04
	float SetValue(); // Function UMG.SpinBox.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x605a7e0
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051570
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60514d8
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051598
	enum class ETextCommit OnSpinBoxValueCommittedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x273e04
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x604e97c
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x604e968
	struct FSlateColor SetForegroundColor(); // Function UMG.SpinBox.SetForegroundColor // Final|Native|Public|BlueprintCallable // @ game+0x6055930
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // Final|Native|Public|BlueprintCallable // @ game+0x604e9cc
	float SetMinSliderValue(); // Function UMG.SpinBox.SetMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x60580b0
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x604e9b8
};

// Class UMG.*7676240b6c
// Size: 0x130 (Inherited: 0x130)
struct U*7676240b6c : UWidget {

	struct UWidget* OnGenerateRowUObject__DelegateSignature(); // DelegateFunction UMG.*7676240b6c.OnGenerateRowUObject__DelegateSignature // Public|Delegate // @ game+0x273e04
};

// Class UMG.ListView
// Size: 0x170 (Inherited: 0x130)
struct UListView : U*7676240b6c {
	float *bd098f7073; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	enum class ESelectionMode *d4062bef60; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty OnGenerateRowEvent; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
};

// Class UMG.TileView
// Size: 0x170 (Inherited: 0x130)
struct UTileView : U*7676240b6c {
	float *b46a7023fd; // 0x130(0x04)
	float *bd098f7073; // 0x134(0x04)
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	enum class ESelectionMode *d4062bef60; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty OnGenerateTileEvent; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)

	void RequestListRefresh(); // Function UMG.TileView.RequestListRefresh // Final|Native|Public|BlueprintCallable // @ game+0x6053824
	float SetItemHeight(); // Function UMG.TileView.SetItemHeight // Final|Native|Public|BlueprintCallable // @ game+0x60573e4
	float SetItemWidth(); // Function UMG.TileView.SetItemWidth // Final|Native|Public|BlueprintCallable // @ game+0x6057498
};

// Class UMG.MultiLineEditableText
// Size: 0x448 (Inherited: 0x158)
struct UMultiLineEditableText : U*e12a436fb2 {
	struct FText Text; // 0x158(0x18)
	struct FText HintText; // 0x170(0x18)
	DelegateProperty HintTextDelegate; // 0x188(0x10)
	struct F*7f8a9226a3 WidgetStyle; // 0x198(0x208)
	bool bIsReadOnly; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FSlateFontInfo Font; // 0x3a8(0x68)
	bool *04f30eb062; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FMulticastDelegate OnTextChanged; // 0x418(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x428(0x10)
	char pad_438[0x10]; // 0x438(0x10)

	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051d90
	struct FText OnMultiLineEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x273e04
	bool SetIsReadOnly(); // Function UMG.MultiLineEditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x60572bc
	struct FText SetText(); // Function UMG.MultiLineEditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x605a16c
	enum class ETextCommit OnMultiLineEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x273e04
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xce8 (Inherited: 0x158)
struct UMultiLineEditableTextBox : U*e12a436fb2 {
	struct FText Text; // 0x158(0x18)
	struct FText HintText; // 0x170(0x18)
	DelegateProperty HintTextDelegate; // 0x188(0x10)
	struct F*7051df995c WidgetStyle; // 0x198(0x870)
	struct F*7f8a9226a3 TextStyle; // 0xa08(0x208)
	bool bIsReadOnly; // 0xc10(0x01)
	bool *04f30eb062; // 0xc11(0x01)
	char pad_C12[0x6]; // 0xc12(0x06)
	struct USlateWidgetStyleAsset* Style; // 0xc18(0x08)
	struct FSlateFontInfo Font; // 0xc20(0x68)
	struct FLinearColor ForegroundColor; // 0xc88(0x10)
	struct FLinearColor BackgroundColor; // 0xc98(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xca8(0x10)
	struct FMulticastDelegate OnTextChanged; // 0xcb8(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xcc8(0x10)
	char pad_CD8[0x10]; // 0xcd8(0x10)

	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051e48
	struct FText OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x273e04
	bool SetIsReadOnly(); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x6057350
	enum class ETextCommit OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x273e04
	struct FText SetError(); // Function UMG.MultiLineEditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x6055360
	struct FText SetText(); // Function UMG.MultiLineEditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x605a260
};

// Class UMG.RichTextBlock
// Size: 0x420 (Inherited: 0x158)
struct URichTextBlock : U*e12a436fb2 {
	struct FText Text; // 0x158(0x18)
	DelegateProperty TextDelegate; // 0x170(0x10)
	struct FSlateFontInfo Font; // 0x180(0x68)
	struct FLinearColor Color; // 0x1e8(0x10)
	struct TArray<struct U*7633077302*> *449088c133; // 0x1f8(0x10)
	char pad_208[0x218]; // 0x208(0x218)
};

// Class UMG.Throbber
// Size: 0x1e0 (Inherited: 0x130)
struct UThrobber : UWidget {
	int32 NumberOfPieces; // 0x130(0x04)
	bool bAnimateHorizontally; // 0x134(0x01)
	bool bAnimateVertically; // 0x135(0x01)
	bool bAnimateOpacity; // 0x136(0x01)
	char pad_137[0x1]; // 0x137(0x01)
	struct USlateBrushAsset* PieceImage; // 0x138(0x08)
	struct FSlateBrush Image; // 0x140(0x90)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	bool SetAnimateHorizontally(); // Function UMG.Throbber.SetAnimateHorizontally // Final|Native|Public|BlueprintCallable // @ game+0x6053db0
	int32 SetNumberOfPieces(); // Function UMG.Throbber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x60584b8
	bool SetAnimateVertically(); // Function UMG.Throbber.SetAnimateVertically // Final|Native|Public|BlueprintCallable // @ game+0x6053f3c
	bool SetAnimateOpacity(); // Function UMG.Throbber.SetAnimateOpacity // Final|Native|Public|BlueprintCallable // @ game+0x6053e74
};

// Class UMG.*54cc75d10f
// Size: 0x380 (Inherited: 0x330)
struct U*54cc75d10f : UMovieSceneSequence {
	struct FMulticastDelegate OnAnimationStarted; // 0x330(0x10)
	struct FMulticastDelegate OnAnimationFinished; // 0x340(0x10)
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct TArray<struct F*36fd1c0181> *691d79a1d5; // 0x358(0x10)
	struct FString *e52847fcb9; // 0x368(0x10)
	char pad_378[0x8]; // 0x378(0x08)

	float *e0333ffbb8(); // Function UMG.*54cc75d10f.*e0333ffbb8 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6050a10
	float *5f125b80f1(); // Function UMG.*54cc75d10f.*5f125b80f1 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051c3c
};

// Class UMG.*a69dc6d540
// Size: 0x30 (Inherited: 0x30)
struct U*a69dc6d540 : UBlueprintFunctionLibrary {

	bool *c1452c8c5a(); // Function UMG.*a69dc6d540.*c1452c8c5a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x604f5b8
	void *af1f679492(); // Function UMG.*a69dc6d540.*af1f679492 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x604f1c8
	enum class EMouseLockMode *a64e914e1b(); // Function UMG.*a69dc6d540.*a64e914e1b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6056d38
	struct F*9ffd49d3c3 *f24605a91e(); // Function UMG.*a69dc6d540.*f24605a91e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6050c78
	struct UDragDropOperation* *3a82e2fd83(); // Function UMG.*a69dc6d540.*3a82e2fd83 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6050854
	struct FEventReply *e3fc113435(); // Function UMG.*a69dc6d540.*e3fc113435 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x604e738
	struct UTexture2D* *1a601ccf55(); // Function UMG.*a69dc6d540.*1a601ccf55 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6050510
	struct UObject* *d1c4aaac06(); // Function UMG.*a69dc6d540.*d1c4aaac06 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60502bc
	struct FLinearColor *4d04403af1(); // Function UMG.*a69dc6d540.*4d04403af1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x604f1ec
	struct FVector2D *326a8c6e6e(); // Function UMG.*a69dc6d540.*326a8c6e6e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6051960
	struct UTexture2D* *df24b70edb(); // Function UMG.*a69dc6d540.*df24b70edb // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x605494c
	bool *6ffa5f5832(); // Function UMG.*a69dc6d540.*6ffa5f5832 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6055ab4
	struct F*9ffd49d3c3 *e458bde1d8(); // Function UMG.*a69dc6d540.*e458bde1d8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6051084
	void *65d81b6746(); // Function UMG.*a69dc6d540.*65d81b6746 // Final|Native|Static|Public|BlueprintCallable // @ game+0x604e558
	struct FEventReply *0439345480(); // Function UMG.*a69dc6d540.*0439345480 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x74a950
	struct FSlateBrush *1e8569efeb(); // Function UMG.*a69dc6d540.*1e8569efeb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60528c4
	struct FEventReply CaptureJoystick(); // Function UMG.*a69dc6d540.CaptureJoystick // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x604e574
	struct FEventReply *0ddfe846bd(); // Function UMG.*a69dc6d540.*0ddfe846bd // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x604ea08
	struct FSlateBrush *8a3a2c4ee7(); // Function UMG.*a69dc6d540.*8a3a2c4ee7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x605273c
	struct UMaterialInterface* *db17be3750(); // Function UMG.*a69dc6d540.*db17be3750 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x605494c
	bool *6ef7e33359(); // Function UMG.*a69dc6d540.*6ef7e33359 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60523e0
	bool *06ff39e0a4(); // Function UMG.*a69dc6d540.*06ff39e0a4 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6056a38
	bool *bd37aed05b(); // Function UMG.*a69dc6d540.*bd37aed05b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x60568bc
	struct UMaterialInstanceDynamic* *b97db9ec4f(); // Function UMG.*a69dc6d540.*b97db9ec4f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60508f0
	struct F*9ffd49d3c3 *f1126debdf(); // Function UMG.*a69dc6d540.*f1126debdf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6050f98
	struct FLinearColor *376229bab6(); // Function UMG.*a69dc6d540.*376229bab6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x604f77c
	struct FEventReply *bfa90e2916(); // Function UMG.*a69dc6d540.*bfa90e2916 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6053310
	bool *2d1c2faf12(); // Function UMG.*a69dc6d540.*2d1c2faf12 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x604f3f8
	struct UUserWidget* Create(); // Function UMG.*a69dc6d540.Create // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0xbc129c
	struct F*9ffd49d3c3 *f09e5403b9(); // Function UMG.*a69dc6d540.*f09e5403b9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6050e64
	struct APlayerController* *99892f8509(); // Function UMG.*a69dc6d540.*99892f8509 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6056b9c
	struct FEventReply *6ab9c5aa54(); // Function UMG.*a69dc6d540.*6ab9c5aa54 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x605a4ec
	bool *9017ad8225(); // Function UMG.*a69dc6d540.*9017ad8225 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6056c1c
	struct UDragDropOperation* *adc0bd9300(); // Function UMG.*a69dc6d540.*adc0bd9300 // Final|Native|Static|Public|BlueprintCallable // @ game+0x604ece4
	struct FEventReply *f7e060e592(); // Function UMG.*a69dc6d540.*f7e060e592 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x605b994
	struct FKeyEvent *9e6a8f9bc9(); // Function UMG.*a69dc6d540.*9e6a8f9bc9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60511f4
	struct FEventReply ReleaseJoystickCapture(); // Function UMG.*a69dc6d540.ReleaseJoystickCapture // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60530a4
	struct FEventReply SetMousePosition(); // Function UMG.*a69dc6d540.SetMousePosition // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x605826c
	struct FSlateBrush *68990a132a(); // Function UMG.*a69dc6d540.*68990a132a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6052a4c
	struct FLinearColor *7e8b7031b1(); // Function UMG.*a69dc6d540.*7e8b7031b1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x604f978
	struct FSlateBrush *fe931678fe(); // Function UMG.*a69dc6d540.*fe931678fe // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6052644
	bool *a5246fa800(); // Function UMG.*a69dc6d540.*a5246fa800 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x60500b8
	struct FEventReply Handled(); // Function UMG.*a69dc6d540.Handled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60521c4
	bool *8d7d1a49cf(); // Function UMG.*a69dc6d540.*8d7d1a49cf // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x604ff08
	struct FEventReply *ec2208ce36(); // Function UMG.*a69dc6d540.*ec2208ce36 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x604ef90
	void *38a8323c90(); // Function UMG.*a69dc6d540.*38a8323c90 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x60557e8
	struct FEventReply *5443be233e(); // Function UMG.*a69dc6d540.*5443be233e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x604fc8c
	struct F*9ffd49d3c3 *c7d61ba5e6(); // Function UMG.*a69dc6d540.*c7d61ba5e6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6050d6c
	struct UMaterialInterface* *35d6085c4c(); // Function UMG.*a69dc6d540.*35d6085c4c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60503b4
	struct FEventReply *3e8d71beb3(); // Function UMG.*a69dc6d540.*3e8d71beb3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60524cc
	struct FEventReply *e42c401c58(); // Function UMG.*a69dc6d540.*e42c401c58 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x604ed74
};

// Class UMG.*171af945ca
// Size: 0x6d0 (Inherited: 0x4e0)
struct U*171af945ca : USceneComponent {
	struct FMulticastDelegate OnHoveredWidgetChanged; // 0x4e0(0x10)
	char pad_4F0[0x10]; // 0x4f0(0x10)
	int32 VirtualUserIndex; // 0x500(0x04)
	float PointerIndex; // 0x504(0x04)
	enum class ECollisionChannel TraceChannel; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	float InteractionDistance; // 0x50c(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x510(0x01)
	bool bEnableHitTesting; // 0x511(0x01)
	bool bShowDebug; // 0x512(0x01)
	char pad_513[0x1]; // 0x513(0x01)
	struct FLinearColor DebugColor; // 0x514(0x10)
	char pad_524[0x7c]; // 0x524(0x7c)
	struct FHitResult *bea457c9a9; // 0x5a0(0x88)
	struct FVector2D *dd6e78549a; // 0x628(0x08)
	struct FVector2D *2b8aab5647; // 0x630(0x08)
	struct UWidgetComponent* *7a4d8ef620; // 0x638(0x08)
	struct FHitResult *91b8aa6c70; // 0x640(0x88)
	bool *d3dd42f76c; // 0x6c8(0x01)
	bool *6b4d1fd66b; // 0x6c9(0x01)
	bool *c21db9416c; // 0x6ca(0x01)
	char pad_6CB[0x5]; // 0x6cb(0x05)

	bool *8d27684cb3(); // Function UMG.*171af945ca.*8d27684cb3 // Native|Public|BlueprintCallable // @ game+0x6052b80
	struct FHitResult *262f46f27e(); // Function UMG.*171af945ca.*262f46f27e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6051370
	bool *1509803049(); // Function UMG.*171af945ca.*1509803049 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6052468
	bool *7353100201(); // Function UMG.*171af945ca.*7353100201 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6052450
	struct UWidgetComponent* *a670ccf893(); // Function UMG.*171af945ca.*a670ccf893 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6050c60
	float *15f5aba6b7(); // Function UMG.*171af945ca.*15f5aba6b7 // Native|Public|BlueprintCallable // @ game+0x605387c
	bool *30fbd0bc51(); // Function UMG.*171af945ca.*30fbd0bc51 // Native|Public|BlueprintCallable // @ game+0x6052c78
	bool *dbbeffc7e1(); // Function UMG.*171af945ca.*dbbeffc7e1 // Native|Public|BlueprintCallable // @ game+0x6053218
	bool *6dc0f4f5d2(); // Function UMG.*171af945ca.*6dc0f4f5d2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6052438
	struct FVector2D *f5eab5b14c(); // Function UMG.*171af945ca.*f5eab5b14c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x604fe8c
	bool *d3cebae617(); // Function UMG.*171af945ca.*d3cebae617 // Native|Public|BlueprintCallable // @ game+0x60539f8
	struct FHitResult *c8e2a03ba3(); // Function UMG.*171af945ca.*c8e2a03ba3 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6054f54
	struct FKey *83a6b91ac8(); // Function UMG.*171af945ca.*83a6b91ac8 // Native|Public|BlueprintCallable // @ game+0x6052dc4
	struct FKey *078c99b2df(); // Function UMG.*171af945ca.*078c99b2df // Native|Public|BlueprintCallable // @ game+0x6053444
};

// Class UMG.*842710e14c
// Size: 0x30 (Inherited: 0x30)
struct U*842710e14c : UBlueprintFunctionLibrary {

	struct FVector2D *81a50ace3a(); // Function UMG.*842710e14c.*81a50ace3a // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x60520c0
	struct U*1b1e399807* *59e5cb6e44(); // Function UMG.*842710e14c.*59e5cb6e44 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x605b4f0
	struct U*257ae73062* *924888b17e(); // Function UMG.*842710e14c.*924888b17e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x605b610
	struct UUniformGridSlot* *3c22ef515d(); // Function UMG.*842710e14c.*3c22ef515d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x605b730
	struct U*6ca2ab22f3* *6f0e1f8bfb(); // Function UMG.*842710e14c.*6f0e1f8bfb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x605b580
	float *5e3d5037eb(); // Function UMG.*842710e14c.*5e3d5037eb // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6052030
	struct U*9650b8c862* *01e108ec97(); // Function UMG.*842710e14c.*01e108ec97 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x605b6a0
	bool *e9d54f0e05(); // Function UMG.*842710e14c.*e9d54f0e05 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60515c0
	struct U*64ba102e89* *af3bc017c9(); // Function UMG.*842710e14c.*af3bc017c9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x605b7c0
	struct UGridSlot* *068e75748b(); // Function UMG.*842710e14c.*068e75748b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb138dc
	bool *1454a23edc(); // Function UMG.*842710e14c.*1454a23edc // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6052eac
	struct UObject* *c9fc849400(); // Function UMG.*842710e14c.*c9fc849400 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x605352c
};

// Class UMG.WidgetNavigation
// Size: 0xc0 (Inherited: 0x30)
struct UWidgetNavigation : UObject {
	struct F*5c92b250c5 Up; // 0x30(0x18)
	struct F*5c92b250c5 Down; // 0x48(0x18)
	struct F*5c92b250c5 Left; // 0x60(0x18)
	struct F*5c92b250c5 Right; // 0x78(0x18)
	struct F*5c92b250c5 Next; // 0x90(0x18)
	struct F*5c92b250c5 Previous; // 0xa8(0x18)
};

// Class UMG.WidgetTree
// Size: 0x38 (Inherited: 0x30)
struct UWidgetTree : UObject {
	struct UWidget* *4f2514a9d2; // 0x30(0x08)
};


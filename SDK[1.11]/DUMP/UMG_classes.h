// Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x128 (Inherited: 0x28)
struct UWidget : UVisual {
	bool *361b9675a4; // 0x28(0x01)
	bool *e880a4e5cc; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct UPanelSlot* Slot[0x08]; // 0x30(0x08)
	bool bIsEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	DelegateProperty bIsEnabledDelegate[0x10]; // 0x40(0x10)
	DelegateProperty OnPrepass[0x10]; // 0x50(0x10)
	struct FText ToolTipText[0x18]; // 0x60(0x18)
	DelegateProperty ToolTipTextDelegate[0x10]; // 0x78(0x10)
	struct UWidget* ToolTipWidget[0x08]; // 0x88(0x08)
	DelegateProperty *faeb44212b[0x10]; // 0x90(0x10)
	enum class ESlateVisibility Visiblity; // 0xa0(0x01)
	enum class ESlateVisibility Visibility; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	DelegateProperty VisibilityDelegate[0x10]; // 0xa8(0x10)
	char bOverride_Cursor : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	enum class EMouseCursor Cursor; // 0xbc(0x01)
	bool bIsVolatile; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct FWidgetTransform RenderTransform[0x1c]; // 0xc0(0x1c)
	struct FVector2D RenderTransformPivot[0x08]; // 0xdc(0x08)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UWidgetNavigation* Navigation[0x08]; // 0xe8(0x08)
	char pad_F0[0x28]; // 0xf0(0x28)
	struct TArray<struct U*a6e680fd1f*> *cb8754bb01[0x10]; // 0x118(0x10)

	struct UObject* GenerateWidgetForObject__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus // Final|Native|Public|BlueprintCallable // @ game+0x5f88830
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // Final|Native|Public|BlueprintCallable // @ game+0x60dfdc
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // Final|Native|Public|BlueprintCallable // @ game+0x5f85a30
	void OnPointerEvent__DelegateSignature(struct F*174cd056c7* MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f86468
	void IsHovered(); // Function UMG.Widget.IsHovered // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f86718
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	enum class EUINavigationRule SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // Final|Native|Public|BlueprintCallable // @ game+0x5f87d9c
	struct APlayerController* HasUserFocus(); // Function UMG.Widget.HasUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f86508
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85d58
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f863c4
	void SetVisibility(); // Function UMG.Widget.SetVisibility // Native|Public|BlueprintCallable // @ game+0x776ccc
	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // Final|Native|Public|BlueprintCallable // @ game+0x5f883ac
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // Public|Delegate|HasDefaults // @ game+0x2cd4ac
	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f88620
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85c18
	void ResetCursor(); // Function UMG.Widget.ResetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5f87278
	void IsVisible(); // Function UMG.Widget.IsVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f869a8
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f88754
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdd2394
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f86270
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // Native|Public|BlueprintCallable // @ game+0x58dcf3c
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // Final|Native|Public|BlueprintCallable // @ game+0x5f86648
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f884f0
	void GetVisibility(); // Function UMG.Widget.GetVisibility // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f86074
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void HasUserFocusedDescendants(struct APlayerController** PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f865a8
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85bbc
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85be8
	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // Native|Public|BlueprintCallable // @ game+0x5f87cf0
	enum class EUINavigationRule SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // Final|Native|Public|BlueprintCallable // @ game+0x5f87814
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile // Final|Native|Public|BlueprintCallable // @ game+0x5f85a44
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // Final|Native|Public|BlueprintCallable // @ game+0x5f85a1c
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void GetParent(); // Function UMG.Widget.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85dc4
	void SetToolTip(); // Function UMG.Widget.SetToolTip // Final|Native|Public|BlueprintCallable // @ game+0x5f886c4
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void SetCursor(); // Function UMG.Widget.SetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5f87984
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // Final|Native|Public|BlueprintCallable // @ game+0x5f87d88
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f8844c
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f88594
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f86324
};

// Class UMG.UserWidget
// Size: 0x250 (Inherited: 0x128)
struct UUserWidget : UWidget {
	char pad_128[0x8]; // 0x128(0x08)
	struct FLinearColor ColorAndOpacity[0x10]; // 0x130(0x10)
	DelegateProperty ColorAndOpacityDelegate[0x10]; // 0x140(0x10)
	struct FSlateColor ForegroundColor[0x28]; // 0x150(0x28)
	DelegateProperty ForegroundColorDelegate[0x10]; // 0x178(0x10)
	struct FMargin Padding[0x10]; // 0x188(0x10)
	bool bSupportsKeyboardFocus; // 0x198(0x01)
	bool bIsFocusable; // 0x199(0x01)
	char pad_19A[0x6]; // 0x19a(0x06)
	struct TArray<struct U*af92c71e68*> *c872a81f5b[0x10]; // 0x1a0(0x10)
	struct TArray<struct U*af92c71e68*> *0d110e6b03[0x10]; // 0x1b0(0x10)
	bool bStopAction; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	int32 Priority[0x04]; // 0x1c4(0x04)
	struct TArray<struct F*fdcc2aae04> *79ebd843d4[0x10]; // 0x1c8(0x10)
	struct UWidgetTree* WidgetTree[0x08]; // 0x1d8(0x08)
	char bCanEverTick : 1; // 0x1e0(0x01)
	char *b278606584 : 1; // 0x1e0(0x01)
	char pad_1E0_2 : 6; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	char *4af56597b6 : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct U*4aa7f8d102* *4aa7f8d102[0x08]; // 0x1f0(0x08)
	char pad_1F8[0x58]; // 0x1f8(0x58)

	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x5f87264
	void Tick(struct FGeometry* MyGeometry); // Function UMG.UserWidget.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnAnimationStarted(); // Function UMG.UserWidget.OnAnimationStarted // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x60d634
	void SetDesiredSizeInViewport(); // Function UMG.UserWidget.SetDesiredSizeInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f87a18
	struct FControllerEvent OnControllerAnalogValueChanged(); // Function UMG.UserWidget.OnControllerAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnDragLeave(); // Function UMG.UserWidget.OnDragLeave // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetForegroundColor(); // Function UMG.UserWidget.SetForegroundColor // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f87ac0
	struct F*174cd056c7 OnPreviewMouseButtonDown(); // Function UMG.UserWidget.OnPreviewMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void OnDragCancelled(struct F*174cd056c7* PointerEvent); // Function UMG.UserWidget.OnDragCancelled // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void OnMouseEnter(struct FGeometry* MyGeometry); // Function UMG.UserWidget.OnMouseEnter // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	enum class EUMGSequencePlayMode PlayAnimation(); // Function UMG.UserWidget.PlayAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xd00e3c
	void GetWidgetComponent(); // Function UMG.UserWidget.GetWidgetComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f86098
	void IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f866fc
	struct F*174cd056c7 OnTouchGesture(); // Function UMG.UserWidget.OnTouchGesture // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	struct F*174cd056c7 OnTouchEnded(); // Function UMG.UserWidget.OnTouchEnded // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function UMG.UserWidget.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetAnchorsInViewport(); // Function UMG.UserWidget.SetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f878f0
	void SetOwningLocalPlayer(); // Function UMG.UserWidget.SetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f87ffc
	enum class EUMGSequencePlayMode PlayAnimationTo(); // Function UMG.UserWidget.PlayAnimationTo // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f86f98
	void OnPaint(); // Function UMG.UserWidget.OnPaint // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x2cd4ac
	struct F*174cd056c7 OnMouseButtonDown(); // Function UMG.UserWidget.OnMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	struct F*174cd056c7 OnMouseMove(); // Function UMG.UserWidget.OnMouseMove // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void ReverseAnimation(); // Function UMG.UserWidget.ReverseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f8728c
	struct FKeyEvent OnKeyUp(); // Function UMG.UserWidget.OnKeyUp // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnAnimationFinished(); // Function UMG.UserWidget.OnAnimationFinished // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x60f794
	void GetOwningLocalPlayer(); // Function UMG.UserWidget.GetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85d7c
	void SetInputActionBlocking(); // Function UMG.UserWidget.SetInputActionBlocking // Final|Native|Protected|BlueprintCallable // @ game+0x5f87bb4
	struct F*174cd056c7 OnMouseButtonUp(); // Function UMG.UserWidget.OnMouseButtonUp // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void AddToViewport(); // Function UMG.UserWidget.AddToViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f8541c
	struct FGeometry OnKeyDown(struct FKeyEvent* InKeyEvent); // Function UMG.UserWidget.OnKeyDown // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnDragDetected(struct F*174cd056c7* PointerEvent); // Function UMG.UserWidget.OnDragDetected // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	struct UDragDropOperation* OnDragOver(); // Function UMG.UserWidget.OnDragOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetInputActionPriority(); // Function UMG.UserWidget.SetInputActionPriority // Final|Native|Protected|BlueprintCallable // @ game+0x5f87c58
	void IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f866fc
	void StopListeningForInputAction(); // Function UMG.UserWidget.StopListeningForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x5f888e8
	bool ListenForInputAction(); // Function UMG.UserWidget.ListenForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x5f869cc
	void OnDragEnter(struct F*174cd056c7* PointerEvent); // Function UMG.UserWidget.OnDragEnter // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetColorAndOpacity(); // Function UMG.UserWidget.SetColorAndOpacity // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60df64
	void IsInViewport(); // Function UMG.UserWidget.IsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85c3c
	struct U*54cc75d10f* IsAnimationPlaying(); // Function UMG.UserWidget.IsAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8665c
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x58dcf3c
	void GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85c3c
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // Final|Native|Protected|BlueprintCallable // @ game+0x5f888d4
	struct UDragDropOperation* OnDrop(); // Function UMG.UserWidget.OnDrop // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnPreviewKeyDown(struct FGeometry* MyGeometry); // Function UMG.UserWidget.OnPreviewKeyDown // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnControllerButtonPressed(struct FControllerEvent* ControllerEvent); // Function UMG.UserWidget.OnControllerButtonPressed // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct F*174cd056c7 OnTouchStarted(); // Function UMG.UserWidget.OnTouchStarted // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void GetOwningPlayer(); // Function UMG.UserWidget.GetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdd2394
	void OnMouseWheel(struct F*174cd056c7* MouseEvent); // Function UMG.UserWidget.OnMouseWheel // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	struct F*46d690d4c5 OnMotionDetected(); // Function UMG.UserWidget.OnMotionDetected // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetPositionInViewport(struct FVector2D* Position); // Function UMG.UserWidget.SetPositionInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f882d4
	void GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85ad8
	struct FName IsListeningForInputAction(); // Function UMG.UserWidget.IsListeningForInputAction // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8673c
	struct FFocusEvent OnFocusReceived(); // Function UMG.UserWidget.OnFocusReceived // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x5f889cc
	void GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85b00
	struct U*54cc75d10f* GetAnimationCurrentTime(); // Function UMG.UserWidget.GetAnimationCurrentTime // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85b1c
	void OnFocusLost(); // Function UMG.UserWidget.OnFocusLost // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void PauseAnimation(); // Function UMG.UserWidget.PauseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f86ef8
	void IsInteractable(); // Function UMG.UserWidget.IsInteractable // BlueprintCosmetic|Event|Public|BlueprintEvent|Const // @ game+0x2cd4ac
	void PlaySound(); // Function UMG.UserWidget.PlaySound // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f871b8
	void OnMouseLeave(); // Function UMG.UserWidget.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f85da0
	struct F*174cd056c7 OnMouseButtonDoubleClick(); // Function UMG.UserWidget.OnMouseButtonDoubleClick // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void SetPadding(); // Function UMG.UserWidget.SetPadding // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f88154
	void FinishStoppedSequencePlayers(); // Function UMG.UserWidget.FinishStoppedSequencePlayers // Final|Native|Public|BlueprintCallable // @ game+0x5f85a08
	void OnAnalogValueChanged(struct FGeometry* MyGeometry); // Function UMG.UserWidget.OnAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void StopAnimation(); // Function UMG.UserWidget.StopAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xbfb050
	void OnControllerButtonReleased(struct FGeometry* MyGeometry); // Function UMG.UserWidget.OnControllerButtonReleased // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetOwningPlayer(); // Function UMG.UserWidget.SetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f880a8
	int32 AddToPlayerScreen(); // Function UMG.UserWidget.AddToPlayerScreen // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f8537c
	void Destruct(); // Function UMG.UserWidget.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetNumLoopsToPlay(struct U*54cc75d10f** InAnimation); // Function UMG.UserWidget.SetNumLoopsToPlay // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f87ed4
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // Final|Native|Public|BlueprintCallable // @ game+0x5f888c0
	void SetAlignmentInViewport(); // Function UMG.UserWidget.SetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f87778
	struct F*174cd056c7 OnTouchMoved(); // Function UMG.UserWidget.OnTouchMoved // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	struct U*54cc75d10f* SetPlaybackSpeed(); // Function UMG.UserWidget.SetPlaybackSpeed // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5f881f4
	void OnKeyChar(struct F*e56f4981f2* InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void PreConstruct(); // Function UMG.UserWidget.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
};

// Class UMG.WidgetComponent
// Size: 0xcd0 (Inherited: 0xb00)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0xb00(0x01)
	enum class EWidgetTimingPolicy *a990aec1b1; // 0xb01(0x01)
	char pad_B02[0x6]; // 0xb02(0x06)
	struct UClass* WidgetClass[0x08]; // 0xb08(0x08)
	struct FIntPoint DrawSize[0x08]; // 0xb10(0x08)
	bool *dc2f780bdb; // 0xb18(0x01)
	bool *2f49043939; // 0xb19(0x01)
	char pad_B1A[0x2]; // 0xb1a(0x02)
	float *9b5e8ac687[0x04]; // 0xb1c(0x04)
	char pad_B20[0x8]; // 0xb20(0x08)
	struct FIntPoint *21adc875b6[0x08]; // 0xb28(0x08)
	bool *48437b47a6; // 0xb30(0x01)
	char pad_B31[0x3]; // 0xb31(0x03)
	struct FVector2D Pivot[0x08]; // 0xb34(0x08)
	bool *ac9ec0b78d; // 0xb3c(0x01)
	bool *31223fe84c; // 0xb3d(0x01)
	char pad_B3E[0x2]; // 0xb3e(0x02)
	struct ULocalPlayer* *db4640f658[0x08]; // 0xb40(0x08)
	struct FLinearColor BackgroundColor[0x10]; // 0xb48(0x10)
	struct FLinearColor TintColorAndOpacity[0x10]; // 0xb58(0x10)
	float OpacityFromTexture[0x04]; // 0xb68(0x04)
	enum class EWidgetBlendMode BlendMode; // 0xb6c(0x01)
	bool bIsTwoSided; // 0xb6d(0x01)
	bool *9945aefdd0; // 0xb6e(0x01)
	char pad_B6F[0x1]; // 0xb6f(0x01)
	struct UUserWidget* Widget[0x08]; // 0xb70(0x08)
	char pad_B78[0x20]; // 0xb78(0x20)
	struct UBodySetup* BodySetup[0x08]; // 0xb98(0x08)
	struct UMaterialInterface* TranslucentMaterial[0x08]; // 0xba0(0x08)
	struct UMaterialInterface* *adfc4bbbba[0x08]; // 0xba8(0x08)
	struct UMaterialInterface* OpaqueMaterial[0x08]; // 0xbb0(0x08)
	struct UMaterialInterface* *a7cfbfb7e8[0x08]; // 0xbb8(0x08)
	struct UMaterialInterface* MaskedMaterial[0x08]; // 0xbc0(0x08)
	struct UMaterialInterface* *94e4f2e160[0x08]; // 0xbc8(0x08)
	struct UTextureRenderTarget2D* RenderTarget[0x08]; // 0xbd0(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance[0x08]; // 0xbd8(0x08)
	bool *68ddda5ff5; // 0xbe0(0x01)
	bool *aaea1c9757; // 0xbe1(0x01)
	char pad_BE2[0x6]; // 0xbe2(0x06)
	struct FName *23728e54e6[0x08]; // 0xbe8(0x08)
	int32 *1655ab5e13[0x04]; // 0xbf0(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0xbf4(0x01)
	char pad_BF5[0x3]; // 0xbf5(0x03)
	float CylinderArcAngle[0x04]; // 0xbf8(0x04)
	char pad_BFC[0x24]; // 0xbfc(0x24)
	struct FVector2D FixedScreenSize[0x08]; // 0xc20(0x08)
	enum class EWidgetForcedLOD ForcedLOD; // 0xc28(0x01)
	bool bUseLOD; // 0xc29(0x01)
	bool bAutoSetFixedScreenSize; // 0xc2a(0x01)
	char pad_C2B[0x5]; // 0xc2b(0x05)
	struct TArray<float> LODScreenSizes[0x10]; // 0xc30(0x10)
	float LODUpdateInterval[0x04]; // 0xc40(0x04)
	float LODNextUpdateTime[0x04]; // 0xc44(0x04)
	float LODLastScreenSize[0x04]; // 0xc48(0x04)
	float LODScale[0x04]; // 0xc4c(0x04)
	float *20aae33e2a[0x04]; // 0xc50(0x04)
	bool bShouldRenderWidget; // 0xc54(0x01)
	bool bAlwaysVisibleWidget; // 0xc55(0x01)
	char pad_C56[0x2]; // 0xc56(0x02)
	struct TMap<struct UPrimitiveComponent*, struct UMaterialInstanceDynamic*> *d001820ce2[0x50]; // 0xc58(0x50)
	struct TArray<struct UMeshComponent*> *29f913fc47[0x10]; // 0xca8(0x10)
	struct UTextureRenderTarget2D* OverrideRenderTarget[0x08]; // 0xcb8(0x08)
	struct USceneComponent* *f2a0e9b38b[0x08]; // 0xcc0(0x08)
	char pad_CC8[0x8]; // 0xcc8(0x08)

	void *e970a1b809(); // Function UMG.WidgetComponent.*e970a1b809 // Final|Native|Public|BlueprintCallable // @ game+0x5f8ee98
	void *4368fe4192(); // Function UMG.WidgetComponent.*4368fe4192 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f8feb0
	void *aa4b3994a0(); // Function UMG.WidgetComponent.*aa4b3994a0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8d1b8
	void *1bdc785bda(); // Function UMG.WidgetComponent.*1bdc785bda // Final|Native|Public|BlueprintCallable // @ game+0x5f9082c
	void *dd1bd01892(); // Function UMG.WidgetComponent.*dd1bd01892 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b6c8
	void *cfbd4c9db6(); // Function UMG.WidgetComponent.*cfbd4c9db6 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8ba58
	void *33a2a8c75a(); // Function UMG.WidgetComponent.*33a2a8c75a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c734
	void *2db99c5112(); // Function UMG.WidgetComponent.*2db99c5112 // Final|Native|Public|BlueprintCallable // @ game+0x5f945a4
	void *b7067c9036(); // Function UMG.WidgetComponent.*b7067c9036 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c75c
	void *b4b9675398(); // Function UMG.WidgetComponent.*b4b9675398 // Final|Native|Public|BlueprintCallable // @ game+0x5f934a0
	void *9c43388213(); // Function UMG.WidgetComponent.*9c43388213 // Final|Native|Public|BlueprintCallable // @ game+0x5f9606c
	void *8f2558f839(); // Function UMG.WidgetComponent.*8f2558f839 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8cd50
	void *396956c427(); // Function UMG.WidgetComponent.*396956c427 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c6e0
	void *868e258c4a(); // Function UMG.WidgetComponent.*868e258c4a // Final|Native|Public|BlueprintCallable // @ game+0x5f902cc
	void *ba92c94cc4(); // Function UMG.WidgetComponent.*ba92c94cc4 // Final|Native|Public|BlueprintCallable // @ game+0x5f8de08
	float *23a03b42a8(); // Function UMG.WidgetComponent.*23a03b42a8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c1f0
	void *a8d0364c79(); // Function UMG.WidgetComponent.*a8d0364c79 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f90524
	void *9b8b9a6946(); // Function UMG.WidgetComponent.*9b8b9a6946 // Native|Public|BlueprintCallable // @ game+0x7d92a8
	void *f9a87286a5(); // Function UMG.WidgetComponent.*f9a87286a5 // Native|Public|BlueprintCallable // @ game+0x5f95fd8
	void *57226a667a(); // Function UMG.WidgetComponent.*57226a667a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b880
	int32 *f79b9b15ca(); // Function UMG.WidgetComponent.*f79b9b15ca // Final|Native|Public|BlueprintCallable // @ game+0x5f892c0
	void *bc2637381a(); // Function UMG.WidgetComponent.*bc2637381a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x587653c
	void *2f07de0502(); // Function UMG.WidgetComponent.*2f07de0502 // Final|Native|Public|BlueprintCallable // @ game+0x5f968bc
	void *3895eb0a88(); // Function UMG.WidgetComponent.*3895eb0a88 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c1d8
	int32 *d3e80d90e3(struct UMaterialInterface** OverrideMat); // Function UMG.WidgetComponent.*d3e80d90e3 // Final|Native|Public|BlueprintCallable // @ game+0x5f89a18
	void *ff712ad262(); // Function UMG.WidgetComponent.*ff712ad262 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f8f064
};

// Class UMG.*7762a61952
// Size: 0x140 (Inherited: 0x128)
struct U*7762a61952 : UWidget {
	struct TArray<struct UPanelSlot*> Slots[0x10]; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	void GetChildAt(); // Function UMG.*7762a61952.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b500
	void ClearChildren(); // Function UMG.*7762a61952.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x5f89700
	struct UWidget* AddChild(); // Function UMG.*7762a61952.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x5f88a60
	void GetChildIndex(struct UWidget** Content); // Function UMG.*7762a61952.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b5a0
	void RemoveChildAt(int32* Index); // Function UMG.*7762a61952.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x5f8e470
	struct UWidget* RemoveChild(); // Function UMG.*7762a61952.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x5f8e3d0
	void GetChildrenCount(); // Function UMG.*7762a61952.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b640
	void HasChild(struct UWidget** Content); // Function UMG.*7762a61952.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8d07c
	void HasAnyChildren(); // Function UMG.*7762a61952.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8d060
};

// Class UMG.*98b93d26ba
// Size: 0x140 (Inherited: 0x140)
struct U*98b93d26ba : U*7762a61952 {

	void GetContent(); // Function UMG.*98b93d26ba.GetContent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b658
	struct UWidget* SetContent(); // Function UMG.*98b93d26ba.SetContent // Final|Native|Public|BlueprintCallable // @ game+0x5f8fcb0
	void GetContentSlot(); // Function UMG.*98b93d26ba.GetContentSlot // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b684
};

// Class UMG.Button
// Size: 0x478 (Inherited: 0x140)
struct UButton : U*98b93d26ba {
	struct USlateWidgetStyleAsset* Style[0x08]; // 0x140(0x08)
	struct F*7bb05e3554 WidgetStyle[0x2a8]; // 0x148(0x2a8)
	struct FLinearColor ColorAndOpacity[0x10]; // 0x3f0(0x10)
	struct FLinearColor BackgroundColor[0x10]; // 0x400(0x10)
	enum class *b8a8b7551d ClickMethod; // 0x410(0x01)
	enum class *3270985d6b TouchMethod; // 0x411(0x01)
	bool IsFocusable; // 0x412(0x01)
	char pad_413[0x5]; // 0x413(0x05)
	struct FMulticastDelegate OnClicked[0x10]; // 0x418(0x10)
	struct FMulticastDelegate OnPressed[0x10]; // 0x428(0x10)
	struct FMulticastDelegate OnReleased[0x10]; // 0x438(0x10)
	struct FMulticastDelegate OnHovered[0x10]; // 0x448(0x10)
	struct FMulticastDelegate OnUnHovered[0x10]; // 0x458(0x10)
	char pad_468[0x10]; // 0x468(0x10)

	void SetColorAndOpacity(); // Function UMG.Button.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f8fa6c
	void SetStyle(); // Function UMG.Button.SetStyle // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f94cbc
	void SetBackgroundColor(); // Function UMG.Button.SetBackgroundColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f8efcc
	void IsPressed(); // Function UMG.Button.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8d288
};

// Class UMG.EditableText
// Size: 0x4b8 (Inherited: 0x128)
struct UEditableText : UWidget {
	struct FText Text[0x18]; // 0x128(0x18)
	DelegateProperty TextDelegate[0x10]; // 0x140(0x10)
	struct FText HintText[0x18]; // 0x150(0x18)
	DelegateProperty HintTextDelegate[0x10]; // 0x168(0x10)
	struct F*543a4cf75e WidgetStyle[0x248]; // 0x178(0x248)
	struct USlateWidgetStyleAsset* Style[0x08]; // 0x3c0(0x08)
	struct USlateBrushAsset* BackgroundImageSelected[0x08]; // 0x3c8(0x08)
	struct USlateBrushAsset* BackgroundImageComposing[0x08]; // 0x3d0(0x08)
	struct USlateBrushAsset* CaretImage[0x08]; // 0x3d8(0x08)
	struct FSlateFontInfo Font[0x68]; // 0x3e0(0x68)
	struct FSlateColor ColorAndOpacity[0x28]; // 0x448(0x28)
	bool IsReadOnly; // 0x470(0x01)
	bool *5f2425a678; // 0x471(0x01)
	char pad_472[0x2]; // 0x472(0x02)
	float *e9b9cb0edf[0x04]; // 0x474(0x04)
	bool *0d25a4c712; // 0x478(0x01)
	bool *5b0997cea4; // 0x479(0x01)
	bool *f7003cc95f; // 0x47a(0x01)
	bool *290d1ae35f; // 0x47b(0x01)
	bool *812f642b07; // 0x47c(0x01)
	bool *04f30eb062; // 0x47d(0x01)
	enum class EVirtualKeyboardType *0427d9466c; // 0x47e(0x01)
	char pad_47F[0x1]; // 0x47f(0x01)
	struct F*d6addb82fe ShapedTextOptions[0x08]; // 0x480(0x08)
	struct FMulticastDelegate OnTextChanged[0x10]; // 0x488(0x10)
	struct FMulticastDelegate OnTextCommitted[0x10]; // 0x498(0x10)
	char pad_4A8[0x10]; // 0x4a8(0x10)

	void SetText(); // Function UMG.EditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5f94d8c
	void OnEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	struct FText OnEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void GetText(); // Function UMG.EditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8ca7c
	void SetIsReadOnly(); // Function UMG.EditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5f91f74
	void SetIsPassword(); // Function UMG.EditableText.SetIsPassword // Final|Native|Public|BlueprintCallable // @ game+0x5f91eb8
	void SetHintText(); // Function UMG.EditableText.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x5f90a60
};

// Class UMG.DragDropOperation
// Size: 0x88 (Inherited: 0x28)
struct UDragDropOperation : UObject {
	struct FString Tag[0x10]; // 0x28(0x10)
	struct UObject* Payload[0x08]; // 0x38(0x08)
	struct UWidget* DefaultDragVisual[0x08]; // 0x40(0x08)
	enum class EDragPivot Pivot; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector2D Offset[0x08]; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct FMulticastDelegate OnDrop[0x10]; // 0x58(0x10)
	struct FMulticastDelegate OnDragCancelled[0x10]; // 0x68(0x10)
	struct FMulticastDelegate OnDragged[0x10]; // 0x78(0x10)

	void Dragged(); // Function UMG.DragDropOperation.Dragged // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5f85674
	void DragCancelled(); // Function UMG.DragDropOperation.DragCancelled // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5f85580
	void Drop(); // Function UMG.DragDropOperation.Drop // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5f85768
};

// Class UMG.*e12a436fb2
// Size: 0x150 (Inherited: 0x128)
struct U*e12a436fb2 : UWidget {
	struct F*d6addb82fe ShapedTextOptions[0x08]; // 0x128(0x08)
	enum class ETextJustify Justification; // 0x130(0x01)
	bool AutoWrapText; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	float WrapTextAt[0x04]; // 0x134(0x04)
	enum class *091373b171 WrappingPolicy; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FMargin Margin[0x10]; // 0x13c(0x10)
	float LineHeightPercentage[0x04]; // 0x14c(0x04)
};

// Class UMG.TextBlock
// Size: 0x258 (Inherited: 0x150)
struct UTextBlock : U*e12a436fb2 {
	struct FText Text[0x18]; // 0x150(0x18)
	DelegateProperty TextDelegate[0x10]; // 0x168(0x10)
	struct FSlateColor ColorAndOpacity[0x28]; // 0x178(0x28)
	DelegateProperty ColorAndOpacityDelegate[0x10]; // 0x1a0(0x10)
	struct FSlateFontInfo Font[0x68]; // 0x1b0(0x68)
	struct FVector2D ShadowOffset[0x08]; // 0x218(0x08)
	struct FLinearColor ShadowColorAndOpacity[0x10]; // 0x220(0x10)
	DelegateProperty ShadowColorAndOpacityDelegate[0x10]; // 0x230(0x10)
	float MinDesiredWidth[0x04]; // 0x240(0x04)
	bool bWrapWithInvalidationPanel; // 0x244(0x01)
	char pad_245[0x13]; // 0x245(0x13)

	void SetOpacity(); // Function UMG.TextBlock.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5f93408
	void GetText(); // Function UMG.TextBlock.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8ccdc
	void SetMinDesiredWidth(); // Function UMG.TextBlock.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5f92e20
	void SetFont(); // Function UMG.TextBlock.SetFont // Final|Native|Public|BlueprintCallable // @ game+0x5f9060c
	void SetText(); // Function UMG.TextBlock.SetText // Native|Public|BlueprintCallable // @ game+0x5f9515c
	void SetWrapTextAt(); // Function UMG.TextBlock.SetWrapTextAt // Final|Native|Public|BlueprintCallable // @ game+0x5f9610c
	void SetShadowColorAndOpacity(); // Function UMG.TextBlock.SetShadowColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f94480
	void SetShadowOffset(); // Function UMG.TextBlock.SetShadowOffset // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f94518
	void SetColorAndOpacity(); // Function UMG.TextBlock.SetColorAndOpacity // Final|Native|Public|BlueprintCallable // @ game+0x60de4c
	void SetJustification(); // Function UMG.TextBlock.SetJustification // Final|Native|Public|BlueprintCallable // @ game+0x5f92354
};

// Class UMG.ComboBoxString
// Size: 0xda8 (Inherited: 0x128)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> *4331cab7dd[0x10]; // 0x128(0x10)
	struct FString *41ce27954d[0x10]; // 0x138(0x10)
	struct F*14d43d58b2 WidgetStyle[0x428]; // 0x148(0x428)
	struct F*c57f627735 ItemStyle[0x718]; // 0x570(0x718)
	struct FMargin ContentPadding[0x10]; // 0xc88(0x10)
	float MaxListHeight[0x04]; // 0xc98(0x04)
	bool HasDownArrow; // 0xc9c(0x01)
	bool EnableGamepadNavigationMode; // 0xc9d(0x01)
	char pad_C9E[0x2]; // 0xc9e(0x02)
	struct FSlateFontInfo Font[0x68]; // 0xca0(0x68)
	struct FSlateColor ForegroundColor[0x28]; // 0xd08(0x28)
	bool bIsFocusable; // 0xd30(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0xd31(0x01)
	char pad_D32[0x6]; // 0xd32(0x06)
	DelegateProperty OnGenerateWidgetEvent[0x10]; // 0xd38(0x10)
	struct FMulticastDelegate OnSelectionChanged[0x10]; // 0xd48(0x10)
	struct FMulticastDelegate OnOpening[0x10]; // 0xd58(0x10)
	char pad_D68[0x40]; // 0xd68(0x40)

	void AddOption(); // Function UMG.ComboBoxString.AddOption // Final|Native|Public|BlueprintCallable // @ game+0x5f89200
	void FindOptionIndex(struct FString* Option); // Function UMG.ComboBoxString.FindOptionIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8ac10
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // Final|Native|Public|BlueprintCallable // @ game+0x5f89844
	void SetSelectedOption(); // Function UMG.ComboBoxString.SetSelectedOption // Final|Native|Public|BlueprintCallable // @ game+0x5f94384
	int32 GetOptionAtIndex(); // Function UMG.ComboBoxString.GetOptionAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c588
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // Final|Native|Public|BlueprintCallable // @ game+0x5f8ddf4
	void RemoveOption(); // Function UMG.ComboBoxString.RemoveOption // Final|Native|Public|BlueprintCallable // @ game+0x5f8e510
	void GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c958
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // Final|Native|Public|BlueprintCallable // @ game+0x5f89830
	void OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c6c8
};

// Class UMG.WidgetSwitcher
// Size: 0x158 (Inherited: 0x140)
struct UWidgetSwitcher : U*7762a61952 {
	int32 ActiveWidgetIndex[0x04]; // 0x140(0x04)
	char pad_144[0x14]; // 0x144(0x14)

	void SetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // Native|Public|BlueprintCallable // @ game+0xa3fa1c
	void GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c524
	int32 GetWidgetAtIndex(); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b500
	void SetActiveWidget(); // Function UMG.WidgetSwitcher.SetActiveWidget // Native|Public|BlueprintCallable // @ game+0x5f8e95c
	void GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8ad04
};

// Class UMG.*6e0c2fa578
// Size: 0x48 (Inherited: 0x28)
struct U*6e0c2fa578 : U*0dbf8eac01 {
	struct FMulticastDelegate OnSuccess[0x10]; // 0x28(0x10)
	struct FMulticastDelegate OnFail[0x10]; // 0x38(0x10)

	void *3081b7af10(); // Function UMG.*6e0c2fa578.*3081b7af10 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f854b4
};

// Class UMG.*599ceab1d1
// Size: 0x3f0 (Inherited: 0xd0)
struct U*599ceab1d1 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve Translation[0x70]; // 0xd8(0xe0)
	struct FRichCurve Rotation[0x70]; // 0x1b8(0x70)
	struct FRichCurve Scale[0x70]; // 0x228(0xe0)
	struct FRichCurve Shear[0x70]; // 0x308(0xe0)
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
	struct FRichCurve *66843a1ebc[0x70]; // 0xd8(0x70)
	struct FRichCurve *e207c29198[0x70]; // 0x148(0x70)
	struct FRichCurve *cb5a1d462d[0x70]; // 0x1b8(0x70)
	struct FRichCurve *5aa80af22d[0x70]; // 0x228(0x70)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class UMG.*6f818ef179
// Size: 0xe0 (Inherited: 0xe0)
struct U*6f818ef179 : UMovieScenePropertyTrack {
};

// Class UMG.*de44630c31
// Size: 0xe0 (Inherited: 0xd0)
struct U*de44630c31 : U*771ec893c5 {
	struct TArray<struct FName> *ab9138e846[0x10]; // 0xc8(0x10)
	struct FName TrackName[0x08]; // 0xd8(0x08)
};

// Class UMG.*f74040bfc1
// Size: 0x28 (Inherited: 0x28)
struct U*f74040bfc1 : UInterface {
};

// Class UMG.*a6e680fd1f
// Size: 0x48 (Inherited: 0x28)
struct U*a6e680fd1f : UObject {
	struct UObject* SourceObject[0x08]; // 0x28(0x08)
	struct F*b9de5e4d27 SourcePath[0x10]; // 0x30(0x10)
	struct FName *f6054127ed[0x08]; // 0x40(0x08)
};

// Class UMG.*7f5abf0420
// Size: 0x48 (Inherited: 0x48)
struct U*7f5abf0420 : U*a6e680fd1f {

	void GetValue(); // Function UMG.*7f5abf0420.GetValue // Final|Native|Public|Const // @ game+0x5f85ee8
};

// Class UMG.*52c4cb1eb8
// Size: 0x50 (Inherited: 0x48)
struct U*52c4cb1eb8 : U*a6e680fd1f {
	char pad_48[0x8]; // 0x48(0x08)

	void GetValue(); // Function UMG.*52c4cb1eb8.GetValue // Final|Native|Public|Const // @ game+0x5f85f0c
};

// Class UMG.*52d3ab6906
// Size: 0x50 (Inherited: 0x48)
struct U*52d3ab6906 : U*a6e680fd1f {
	char pad_48[0x8]; // 0x48(0x08)

	void GetValue(); // Function UMG.*52d3ab6906.GetValue // Final|Native|Public|Const // @ game+0x5f85f98
};

// Class UMG.*559ed3fc5f
// Size: 0x50 (Inherited: 0x48)
struct U*559ed3fc5f : U*a6e680fd1f {
	char pad_48[0x8]; // 0x48(0x08)

	void GetLinearValue(); // Function UMG.*559ed3fc5f.GetLinearValue // Final|Native|Public|HasDefaults|Const // @ game+0xb1b2dc
	void GetSlateValue(); // Function UMG.*559ed3fc5f.GetSlateValue // Final|Native|Public|Const // @ game+0x5f85de8
};

// Class UMG.*c61f65d376
// Size: 0x48 (Inherited: 0x48)
struct U*c61f65d376 : U*a6e680fd1f {

	void GetValue(); // Function UMG.*c61f65d376.GetValue // Final|Native|Public|Const // @ game+0x5f85fbc
};

// Class UMG.*c647e1d059
// Size: 0x48 (Inherited: 0x48)
struct U*c647e1d059 : U*a6e680fd1f {

	void GetValue(); // Function UMG.*c647e1d059.GetValue // Final|Native|Public|Const // @ game+0x5f85fe4
};

// Class UMG.*37058e1b68
// Size: 0x48 (Inherited: 0x48)
struct U*37058e1b68 : U*a6e680fd1f {

	void GetValue(); // Function UMG.*37058e1b68.GetValue // Final|Native|Public|Const // @ game+0x5f86008
};

// Class UMG.*a717fca2d3
// Size: 0x50 (Inherited: 0x48)
struct U*a717fca2d3 : U*a6e680fd1f {
	char pad_48[0x8]; // 0x48(0x08)

	void GetStringValue(); // Function UMG.*a717fca2d3.GetStringValue // Final|Native|Public|Const // @ game+0x5f85e60
	void GetTextValue(); // Function UMG.*a717fca2d3.GetTextValue // Final|Native|Public|Const // @ game+0xa9e7b0
};

// Class UMG.*ebb5cf2462
// Size: 0x48 (Inherited: 0x48)
struct U*ebb5cf2462 : U*a6e680fd1f {

	void GetValue(); // Function UMG.*ebb5cf2462.GetValue // Final|Native|Public|Const // @ game+0x5f8602c
};

// Class UMG.*05df2cf887
// Size: 0x48 (Inherited: 0x48)
struct U*05df2cf887 : U*a6e680fd1f {

	void GetValue(); // Function UMG.*05df2cf887.GetValue // Final|Native|Public|Const // @ game+0x5f86050
};

// Class UMG.*7633077302
// Size: 0x30 (Inherited: 0x28)
struct U*7633077302 : UObject {
	bool bReveal; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32 RevealedIndex[0x04]; // 0x2c(0x04)
};

// Class UMG.*c60f54b220
// Size: 0x28 (Inherited: 0x28)
struct U*c60f54b220 : UBlueprintFunctionLibrary {

	struct FGeometry *1adafbac69(struct FVector2D* AbsoluteCoordinate); // Function UMG.*c60f54b220.*1adafbac69 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f85058
	void *d5bd67c409(struct FVector2D* Param1); // Function UMG.*c60f54b220.*d5bd67c409 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x5f8748c
	struct FVector2D *45733ea366(); // Function UMG.*c60f54b220.*45733ea366 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f851f8
	void *a41fc37a6c(struct FSlateBrush* A); // Function UMG.*c60f54b220.*a41fc37a6c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8585c
	void *623bb05504(struct UObject** Param0); // Function UMG.*c60f54b220.*623bb05504 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x5f87364
	struct FVector2D *36383c88a3(); // Function UMG.*c60f54b220.*36383c88a3 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x5f875b4
	void *4565bf1cc2(struct FVector2D* LocalCoordinate); // Function UMG.*c60f54b220.*4565bf1cc2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f86b70
	void *7a677bbbab(); // Function UMG.*c60f54b220.*7a677bbbab // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f85c70
	struct FVector2D *8caa7921e6(); // Function UMG.*c60f54b220.*8caa7921e6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f867dc
	void *6fcc7c9659(struct FGeometry* Geometry, struct FVector2D* PixelPosition); // Function UMG.*c60f54b220.*6fcc7c9659 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f86cc8
};

// Class UMG.*b3319b691b
// Size: 0x430 (Inherited: 0x28)
struct U*b3319b691b : UObject {
	struct UTexture2D* *23b3861216[0x08]; // 0x28(0x08)
	char pad_30[0x400]; // 0x30(0x400)
};

// Class UMG.*858647ccf6
// Size: 0x60 (Inherited: 0x28)
struct U*858647ccf6 : UObject {
	struct TArray<struct F*f99144d292> *237688b410[0x10]; // 0x28(0x10)
	struct TArray<uint32> *eef6288821[0x10]; // 0x38(0x10)
	struct UMaterialInterface* Material[0x08]; // 0x48(0x08)
	struct FVector2D *8c5ae62a94[0x08]; // 0x50(0x08)
	struct FVector2D *109b78e44e[0x08]; // 0x58(0x08)
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x428 (Inherited: 0x3b8)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree[0x08]; // 0x3b8(0x08)
	bool *8826b11e8b; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct TArray<struct F*cfa4c07157> Bindings[0x10]; // 0x3c8(0x10)
	struct TArray<struct U*54cc75d10f*> Animations[0x10]; // 0x3d8(0x10)
	struct TArray<struct FName> NamedSlots[0x10]; // 0x3e8(0x10)
	bool *074710c55f; // 0x3f8(0x01)
	bool *1e84d37570; // 0x3f9(0x01)
	bool *a503e85a5c; // 0x3fa(0x01)
	char pad_3FB[0x5]; // 0x3fb(0x05)
	struct UUserWidget* *de60c51349[0x20]; // 0x400(0x20)
	struct UUserWidget* Template[0x08]; // 0x420(0x08)
};

// Class UMG.*af92c71e68
// Size: 0x6a0 (Inherited: 0x28)
struct U*af92c71e68 : UObject {
	char pad_28[0x348]; // 0x28(0x348)
	struct U*54cc75d10f* Animation[0x08]; // 0x370(0x08)
	char pad_378[0x328]; // 0x378(0x328)
};

// Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual {
	struct U*7762a61952* Parent[0x08]; // 0x28(0x08)
	struct UWidget* Content[0x08]; // 0x30(0x08)
};

// Class UMG.*5f1157099f
// Size: 0x60 (Inherited: 0x38)
struct U*5f1157099f : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*5f1157099f.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f95714
	void SetHorizontalAlignment(); // Function UMG.*5f1157099f.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f90cdc
	void SetPadding(); // Function UMG.*5f1157099f.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f935e0
};

// Class UMG.*1b1e399807
// Size: 0x60 (Inherited: 0x38)
struct U*1b1e399807 : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*1b1e399807.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f9583c
	void SetHorizontalAlignment(); // Function UMG.*1b1e399807.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f90e04
	void SetPadding(); // Function UMG.*1b1e399807.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93720
};

// Class UMG.*8bc20cff46
// Size: 0x60 (Inherited: 0x38)
struct U*8bc20cff46 : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*8bc20cff46.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f958d0
	void SetHorizontalAlignment(); // Function UMG.*8bc20cff46.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f90e98
	void SetPadding(); // Function UMG.*8bc20cff46.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f937c0
};

// Class UMG.*6ca2ab22f3
// Size: 0x70 (Inherited: 0x38)
struct U*6ca2ab22f3 : UPanelSlot {
	struct F*1930ebf77e LayoutData[0x28]; // 0x38(0x28)
	bool bAutoSize; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32 ZOrder[0x04]; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)

	void GetPosition(); // Function UMG.*6ca2ab22f3.GetPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c704
	void *8d79016d5e(); // Function UMG.*6ca2ab22f3.*8d79016d5e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8cf98
	void SetAnchors(); // Function UMG.*6ca2ab22f3.SetAnchors // Final|Native|Public|BlueprintCallable // @ game+0x5f8eb18
	void SetPosition(); // Function UMG.*6ca2ab22f3.SetPosition // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f93e98
	void *367a2f01d6(); // Function UMG.*6ca2ab22f3.*367a2f01d6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b0b8
	void SetOffsets(); // Function UMG.*6ca2ab22f3.SetOffsets // Final|Native|Public|BlueprintCallable // @ game+0x610704
	void SetLayout(); // Function UMG.*6ca2ab22f3.SetLayout // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f92604
	void SetSize(); // Function UMG.*6ca2ab22f3.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f94634
	void GetAlignment(); // Function UMG.*6ca2ab22f3.GetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8ad28
	void SetZOrder(); // Function UMG.*6ca2ab22f3.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x5f961a4
	void GetSize(); // Function UMG.*6ca2ab22f3.GetSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8ca2c
	void GetLayout(); // Function UMG.*6ca2ab22f3.GetLayout // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c1ac
	void SetAlignment(); // Function UMG.*6ca2ab22f3.SetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f8e9f0
	void SetMinimum(); // Function UMG.*6ca2ab22f3.SetMinimum // Final|Native|Public|HasDefaults // @ game+0x5f92fe8
	void SetMaximum(); // Function UMG.*6ca2ab22f3.SetMaximum // Final|Native|Public|HasDefaults // @ game+0x5f92b34
	void *a6bd1a86d5(); // Function UMG.*6ca2ab22f3.*a6bd1a86d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c548
	void SetAutoSize(); // Function UMG.*6ca2ab22f3.SetAutoSize // Final|Native|Public|BlueprintCallable // @ game+0x5f8ef38
	void *c91ca394c9(); // Function UMG.*6ca2ab22f3.*c91ca394c9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b0e8
};

// Class UMG.GridSlot
// Size: 0x70 (Inherited: 0x38)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32 row[0x04]; // 0x4c(0x04)
	int32 RowSpan[0x04]; // 0x50(0x04)
	int32 column[0x04]; // 0x54(0x04)
	int32 ColumnSpan[0x04]; // 0x58(0x04)
	int32 Layer[0x04]; // 0x5c(0x04)
	struct FVector2D Nudge[0x08]; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)

	void SetVerticalAlignment(); // Function UMG.GridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f95964
	void SetPadding(); // Function UMG.GridSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0xa1d2c0
	void SetLayer(); // Function UMG.GridSlot.SetLayer // Final|Native|Public|BlueprintCallable // @ game+0x5f924dc
	void SetRowSpan(); // Function UMG.GridSlot.SetRowSpan // Final|Native|Public|BlueprintCallable // @ game+0x5f940e0
	void SetColumnSpan(); // Function UMG.GridSlot.SetColumnSpan // Final|Native|Public|BlueprintCallable // @ game+0x5f8fc20
	void SetRow(); // Function UMG.GridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x5f93fc4
	void SetHorizontalAlignment(); // Function UMG.GridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f90f2c
	void SetColumn(); // Function UMG.GridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x5f8fb04
};

// Class UMG.*257ae73062
// Size: 0x60 (Inherited: 0x38)
struct U*257ae73062 : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	struct FSlateChildSize Size[0x08]; // 0x48(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetSize(); // Function UMG.*257ae73062.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x5f946c0
	void SetPadding(); // Function UMG.*257ae73062.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93860
	void SetHorizontalAlignment(); // Function UMG.*257ae73062.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f90fbc
	void SetVerticalAlignment(); // Function UMG.*257ae73062.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f959f4
};

// Class UMG.*9650b8c862
// Size: 0x58 (Inherited: 0x38)
struct U*9650b8c862 : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32 ZOrder[0x04]; // 0x4c(0x04)
	char pad_50[0x8]; // 0x50(0x08)

	void SetVerticalAlignment(); // Function UMG.*9650b8c862.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f95a84
	void SetPadding(); // Function UMG.*9650b8c862.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93900
	void *8d79016d5e(); // Function UMG.*9650b8c862.*8d79016d5e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8cfbc
	void SetZOrder(); // Function UMG.*9650b8c862.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x5f96234
	void SetHorizontalAlignment(); // Function UMG.*9650b8c862.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f9104c
};

// Class UMG.*b0d52a7b07
// Size: 0x60 (Inherited: 0x38)
struct U*b0d52a7b07 : UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FMargin SafeAreaScale[0x10]; // 0x3c(0x10)
	enum class EHorizontalAlignment HAlign; // 0x4c(0x01)
	enum class EVerticalAlignment VAlign; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FMargin Padding[0x10]; // 0x50(0x10)
};

// Class UMG.*1bd7c64892
// Size: 0x60 (Inherited: 0x38)
struct U*1bd7c64892 : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*1bd7c64892.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f95b14
	void SetHorizontalAlignment(); // Function UMG.*1bd7c64892.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f910dc
	void SetPadding(); // Function UMG.*1bd7c64892.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f939a0
};

// Class UMG.*c0b5b5162e
// Size: 0x58 (Inherited: 0x38)
struct U*c0b5b5162e : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	char pad_49[0xf]; // 0x49(0x0f)

	void SetHorizontalAlignment(); // Function UMG.*c0b5b5162e.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f91170
	void SetPadding(); // Function UMG.*c0b5b5162e.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93a34
};

// Class UMG.*d8fae5138c
// Size: 0x60 (Inherited: 0x38)
struct U*d8fae5138c : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*d8fae5138c.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f95ba8
	void SetHorizontalAlignment(); // Function UMG.*d8fae5138c.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f91200
	void SetPadding(); // Function UMG.*d8fae5138c.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93ad4
};

// Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32 row[0x04]; // 0x3c(0x04)
	int32 column[0x04]; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)

	void SetColumn(); // Function UMG.UniformGridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x5f8fb94
	void SetRow(); // Function UMG.UniformGridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x5f94054
	void SetHorizontalAlignment(); // Function UMG.UniformGridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f91294
	void SetVerticalAlignment(); // Function UMG.UniformGridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f95c3c
};

// Class UMG.*64ba102e89
// Size: 0x60 (Inherited: 0x38)
struct U*64ba102e89 : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	struct FSlateChildSize Size[0x08]; // 0x48(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetSize(); // Function UMG.*64ba102e89.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x5f946c0
	void SetPadding(); // Function UMG.*64ba102e89.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93860
	void SetHorizontalAlignment(); // Function UMG.*64ba102e89.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f90fbc
	void SetVerticalAlignment(); // Function UMG.*64ba102e89.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f959f4
};

// Class UMG.*c357953a24
// Size: 0x58 (Inherited: 0x38)
struct U*c357953a24 : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0xe]; // 0x4a(0x0e)

	void SetVerticalAlignment(); // Function UMG.*c357953a24.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f95a84
	void SetHorizontalAlignment(); // Function UMG.*c357953a24.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f9104c
	void SetPadding(); // Function UMG.*c357953a24.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93a34
};

// Class UMG.*095222729c
// Size: 0x160 (Inherited: 0x140)
struct U*095222729c : U*98b93d26ba {
	bool bDoubleClickTogglesFullscreen; // 0x140(0x01)
	char pad_141[0x1f]; // 0x141(0x1f)

	void SetVerticalAlignment(); // Function UMG.*095222729c.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f95ccc
	void SetHorizontalAlignment(); // Function UMG.*095222729c.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f91324
	void SetPadding(); // Function UMG.*095222729c.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93b74
};

// Class UMG.*ccba555fed
// Size: 0x60 (Inherited: 0x38)
struct U*ccba555fed : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*ccba555fed.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f95d5c
	void SetHorizontalAlignment(); // Function UMG.*ccba555fed.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f913b4
	void SetPadding(); // Function UMG.*ccba555fed.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93c14
};

// Class UMG.*188b715550
// Size: 0x60 (Inherited: 0x38)
struct U*188b715550 : UPanelSlot {
	struct FMargin Padding[0x10]; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float FillSpanWhenLessThan[0x04]; // 0x4c(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetFillSpanWhenLessThan(); // Function UMG.*188b715550.SetFillSpanWhenLessThan // Final|Native|Public|BlueprintCallable // @ game+0x5f9048c
	void SetPadding(); // Function UMG.*188b715550.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93cb4
	void SetVerticalAlignment(); // Function UMG.*188b715550.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f95df0
	void SetHorizontalAlignment(); // Function UMG.*188b715550.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f91448
	void SetFillEmptySpace(); // Function UMG.*188b715550.SetFillEmptySpace // Final|Native|Public|BlueprintCallable // @ game+0x5f903f8
};

// Class UMG.CircularThrobber
// Size: 0x1e8 (Inherited: 0x128)
struct UCircularThrobber : UWidget {
	int32 NumberOfPieces[0x04]; // 0x128(0x04)
	float Period[0x04]; // 0x12c(0x04)
	float Radius[0x04]; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct USlateBrushAsset* PieceImage[0x08]; // 0x138(0x08)
	struct FSlateBrush Image[0x90]; // 0x140(0x90)
	bool bEnableRadius; // 0x1d0(0x01)
	char pad_1D1[0x17]; // 0x1d1(0x17)

	void SetRadius(); // Function UMG.CircularThrobber.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x5f93f24
	void SetPeriod(); // Function UMG.CircularThrobber.SetPeriod // Final|Native|Public|BlueprintCallable // @ game+0x5f93dec
	void SetNumberOfPieces(); // Function UMG.CircularThrobber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x5f93218
};

// Class UMG.ComboBox
// Size: 0x160 (Inherited: 0x128)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items[0x10]; // 0x128(0x10)
	DelegateProperty OnGenerateWidgetEvent[0x10]; // 0x138(0x10)
	bool bIsFocusable; // 0x148(0x01)
	char pad_149[0x17]; // 0x149(0x17)
};

// Class UMG.EditableTextBox
// Size: 0xae0 (Inherited: 0x128)
struct UEditableTextBox : UWidget {
	struct FText Text[0x18]; // 0x128(0x18)
	DelegateProperty TextDelegate[0x10]; // 0x140(0x10)
	struct F*7051df995c WidgetStyle[0x870]; // 0x150(0x870)
	struct USlateWidgetStyleAsset* Style[0x08]; // 0x9c0(0x08)
	struct FText HintText[0x18]; // 0x9c8(0x18)
	DelegateProperty HintTextDelegate[0x10]; // 0x9e0(0x10)
	struct FSlateFontInfo Font[0x68]; // 0x9f0(0x68)
	struct FLinearColor ForegroundColor[0x10]; // 0xa58(0x10)
	struct FLinearColor BackgroundColor[0x10]; // 0xa68(0x10)
	struct FLinearColor ReadOnlyForegroundColor[0x10]; // 0xa78(0x10)
	bool IsReadOnly; // 0xa88(0x01)
	bool IsPassword; // 0xa89(0x01)
	char pad_A8A[0x2]; // 0xa8a(0x02)
	float MinimumDesiredWidth[0x04]; // 0xa8c(0x04)
	struct FMargin Padding[0x10]; // 0xa90(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xaa0(0x01)
	bool SelectAllTextWhenFocused; // 0xaa1(0x01)
	bool RevertTextOnEscape; // 0xaa2(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xaa3(0x01)
	bool SelectAllTextOnCommit; // 0xaa4(0x01)
	bool *04f30eb062; // 0xaa5(0x01)
	enum class EVirtualKeyboardType *0427d9466c; // 0xaa6(0x01)
	char pad_AA7[0x1]; // 0xaa7(0x01)
	struct F*d6addb82fe ShapedTextOptions[0x08]; // 0xaa8(0x08)
	struct FMulticastDelegate OnTextChanged[0x10]; // 0xab0(0x10)
	struct FMulticastDelegate OnTextCommitted[0x10]; // 0xac0(0x10)
	char pad_AD0[0x10]; // 0xad0(0x10)

	struct FText OnEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void HasError(); // Function UMG.EditableTextBox.HasError // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8d11c
	void SetError(); // Function UMG.EditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x5f90004
	void GetText(); // Function UMG.EditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8caf0
	void SetHintText(); // Function UMG.EditableTextBox.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x5f90b54
	void SetIsReadOnly(); // Function UMG.EditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5f92008
	void OnEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void SetText(); // Function UMG.EditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5f94e80
	void ClearError(); // Function UMG.EditableTextBox.ClearError // Final|Native|Public|BlueprintCallable // @ game+0x5f89714
};

// Class UMG.ExpandableArea
// Size: 0x370 (Inherited: 0x128)
struct UExpandableArea : UWidget {
	char pad_128[0x8]; // 0x128(0x08)
	struct F*02f9ad486c Style[0x130]; // 0x130(0x130)
	struct FSlateBrush BorderBrush[0x90]; // 0x260(0x90)
	struct FSlateColor BorderColor[0x28]; // 0x2f0(0x28)
	bool bIsExpanded; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float MaxHeight[0x04]; // 0x31c(0x04)
	struct FMargin HeaderPadding[0x10]; // 0x320(0x10)
	struct FMargin AreaPadding[0x10]; // 0x330(0x10)
	struct FMulticastDelegate OnExpansionChanged[0x10]; // 0x340(0x10)
	struct UWidget* *7ead08adbe[0x08]; // 0x350(0x08)
	struct UWidget* *c2a3e400f9[0x08]; // 0x358(0x08)
	char pad_360[0x10]; // 0x360(0x10)

	void SetIsExpanded_Animated(); // Function UMG.ExpandableArea.SetIsExpanded_Animated // Final|Native|Public|BlueprintCallable // @ game+0x5f91d88
	void SetIsExpanded(); // Function UMG.ExpandableArea.SetIsExpanded // Final|Native|Public|BlueprintCallable // @ game+0x5f91cec
	void GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8bfa8
};

// Class UMG.Image
// Size: 0x210 (Inherited: 0x128)
struct UImage : UWidget {
	struct USlateBrushAsset* Image[0x08]; // 0x128(0x08)
	struct FSlateBrush Brush[0x90]; // 0x130(0x90)
	DelegateProperty BrushDelegate[0x10]; // 0x1c0(0x10)
	struct FLinearColor ColorAndOpacity[0x10]; // 0x1d0(0x10)
	DelegateProperty ColorAndOpacityDelegate[0x10]; // 0x1e0(0x10)
	DelegateProperty OnMouseButtonDownEvent[0x10]; // 0x1f0(0x10)
	char pad_200[0x10]; // 0x200(0x10)

	void SetOpacity(); // Function UMG.Image.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5f93370
	void GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5f8b71c
	struct U*0aab017b56* SetBrushFromTextureDynamic(); // Function UMG.Image.SetBrushFromTextureDynamic // Final|Native|Public|BlueprintCallable // @ game+0x5f8f618
	void SetBrush(); // Function UMG.Image.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f8f2dc
	void SetBrushFromTexture(); // Function UMG.Image.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0xbd6d54
	void SetBrushFromMaterial(); // Function UMG.Image.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5f8f588
	void SetColorAndOpacity(); // Function UMG.Image.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60f900
	void SetBrushFromAsset(); // Function UMG.Image.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x5f8f468
	void SetBrushSize(); // Function UMG.Image.SetBrushSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f8f8ac
};

// Class UMG.InputKeySelector
// Size: 0x228 (Inherited: 0x128)
struct UInputKeySelector : UWidget {
	struct F*4396e9090b SelectedKey[0x20]; // 0x128(0x20)
	struct FSlateFontInfo Font[0x68]; // 0x148(0x68)
	struct FMargin Margin[0x10]; // 0x1b0(0x10)
	struct FLinearColor ColorAndOpacity[0x10]; // 0x1c0(0x10)
	struct FText KeySelectionText[0x18]; // 0x1d0(0x18)
	bool bAllowModifierKeys; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct FMulticastDelegate OnKeySelected[0x10]; // 0x1f0(0x10)
	struct FMulticastDelegate OnIsSelectingKeyChanged[0x10]; // 0x200(0x10)
	char pad_210[0x18]; // 0x210(0x18)

	void SetSelectedKey(); // Function UMG.InputKeySelector.SetSelectedKey // Final|Native|Public|BlueprintCallable // @ game+0x5f94298
	void OnKeySelected__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8bfec
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void SetAllowModifierKeys(); // Function UMG.InputKeySelector.SetAllowModifierKeys // Final|Native|Public|BlueprintCallable // @ game+0x5f8ea7c
	void SetKeySelectionText(); // Function UMG.InputKeySelector.SetKeySelectionText // Final|Native|Public|BlueprintCallable // @ game+0x5f923e8
};

// Class UMG.NativeWidgetHost
// Size: 0x138 (Inherited: 0x128)
struct UNativeWidgetHost : UWidget {
	char pad_128[0x10]; // 0x128(0x10)
};

// Class UMG.CanvasPanel
// Size: 0x150 (Inherited: 0x140)
struct UCanvasPanel : U*7762a61952 {
	char pad_140[0x10]; // 0x140(0x10)

	struct UWidget* AddChildToCanvas(); // Function UMG.CanvasPanel.AddChildToCanvas // Final|Native|Public|BlueprintCallable // @ game+0x5f88b00
};

// Class UMG.BackgroundBlur
// Size: 0x200 (Inherited: 0x140)
struct UBackgroundBlur : U*98b93d26ba {
	struct FMargin Padding[0x10]; // 0x140(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x150(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x151(0x01)
	bool bApplyAlphaToBlur; // 0x152(0x01)
	char pad_153[0x1]; // 0x153(0x01)
	float BlurStrength[0x04]; // 0x154(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	int32 BlurRadius[0x04]; // 0x15c(0x04)
	struct FSlateBrush LowQualityFallbackBrush[0x90]; // 0x160(0x90)
	char pad_1F0[0x10]; // 0x1f0(0x10)

	void SetApplyAlphaToBlur(); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // Final|Native|Public|BlueprintCallable // @ game+0x5f8ee04
	void SetPadding(); // Function UMG.BackgroundBlur.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93540
	void SetHorizontalAlignment(); // Function UMG.BackgroundBlur.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f90c48
	void SetVerticalAlignment(); // Function UMG.BackgroundBlur.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f95680
	void SetLowQualityFallbackBrush(); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f92740
	void SetBlurRadius(); // Function UMG.BackgroundBlur.SetBlurRadius // Final|Native|Public|BlueprintCallable // @ game+0x5f8f150
	void SetBlurStrength(); // Function UMG.BackgroundBlur.SetBlurStrength // Native|Public|BlueprintCallable // @ game+0x833660
};

// Class UMG.Border
// Size: 0x2a0 (Inherited: 0x140)
struct UBorder : U*98b93d26ba {
	struct FLinearColor ContentColorAndOpacity[0x10]; // 0x140(0x10)
	DelegateProperty ContentColorAndOpacityDelegate[0x10]; // 0x150(0x10)
	struct FMargin Padding[0x10]; // 0x160(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x170(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x171(0x01)
	char pad_172[0x6]; // 0x172(0x06)
	struct FSlateBrush Background[0x90]; // 0x178(0x90)
	DelegateProperty BackgroundDelegate[0x10]; // 0x208(0x10)
	struct FLinearColor BrushColor[0x10]; // 0x218(0x10)
	DelegateProperty BrushColorDelegate[0x10]; // 0x228(0x10)
	struct FVector2D DesiredSizeScale[0x08]; // 0x238(0x08)
	bool bShowEffectWhenDisabled; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	DelegateProperty OnMouseButtonDownEvent[0x10]; // 0x248(0x10)
	DelegateProperty OnMouseButtonUpEvent[0x10]; // 0x258(0x10)
	DelegateProperty OnMouseMoveEvent[0x10]; // 0x268(0x10)
	DelegateProperty OnMouseDoubleClickEvent[0x10]; // 0x278(0x10)
	char pad_288[0x10]; // 0x288(0x10)
	struct USlateBrushAsset* Brush[0x08]; // 0x298(0x08)

	void SetBrushColor(); // Function UMG.Border.SetBrushColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xbbb7ec
	void SetPadding(); // Function UMG.Border.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f93680
	void SetBrushFromTexture(); // Function UMG.Border.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0x5f8f4f8
	void SetBrushFromMaterial(); // Function UMG.Border.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5f8f4f8
	void GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5f8b6f8
	void SetBrushFromAsset(); // Function UMG.Border.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x5f8f3d8
	void SetHorizontalAlignment(); // Function UMG.Border.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f90d70
	void SetDesiredSizeScale(); // Function UMG.Border.SetDesiredSizeScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f8fe24
	void SetContentColorAndOpacity(); // Function UMG.Border.SetContentColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60f998
	void SetBrush(); // Function UMG.Border.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f8f1e0
	void SetVerticalAlignment(); // Function UMG.Border.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5f957a8
};

// Class UMG.CheckBox
// Size: 0x7f0 (Inherited: 0x140)
struct UCheckBox : U*98b93d26ba {
	enum class ECheckBoxState CheckedState; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	DelegateProperty CheckedStateDelegate[0x10]; // 0x148(0x10)
	struct F*d23c67e4c5 WidgetStyle[0x5e0]; // 0x158(0x5e0)
	struct USlateWidgetStyleAsset* Style[0x08]; // 0x738(0x08)
	struct USlateBrushAsset* UncheckedImage[0x08]; // 0x740(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage[0x08]; // 0x748(0x08)
	struct USlateBrushAsset* UncheckedPressedImage[0x08]; // 0x750(0x08)
	struct USlateBrushAsset* CheckedImage[0x08]; // 0x758(0x08)
	struct USlateBrushAsset* CheckedHoveredImage[0x08]; // 0x760(0x08)
	struct USlateBrushAsset* CheckedPressedImage[0x08]; // 0x768(0x08)
	struct USlateBrushAsset* UndeterminedImage[0x08]; // 0x770(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage[0x08]; // 0x778(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage[0x08]; // 0x780(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x788(0x01)
	char pad_789[0x3]; // 0x789(0x03)
	struct FMargin Padding[0x10]; // 0x78c(0x10)
	char pad_79C[0x4]; // 0x79c(0x04)
	struct FSlateColor BorderBackgroundColor[0x28]; // 0x7a0(0x28)
	bool IsFocusable; // 0x7c8(0x01)
	char pad_7C9[0x7]; // 0x7c9(0x07)
	struct FMulticastDelegate OnCheckStateChanged[0x10]; // 0x7d0(0x10)
	char pad_7E0[0x10]; // 0x7e0(0x10)

	void GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b4dc
	void IsPressed(); // Function UMG.CheckBox.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8d2ac
	void SetCheckedState(); // Function UMG.CheckBox.SetCheckedState // Final|Native|Public|BlueprintCallable // @ game+0x5f8f9dc
	void SetIsChecked(); // Function UMG.CheckBox.SetIsChecked // Final|Native|Public|BlueprintCallable // @ game+0x5f91c58
	void IsChecked(); // Function UMG.CheckBox.IsChecked // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8d1dc
};

// Class UMG.InvalidationBox
// Size: 0x158 (Inherited: 0x140)
struct UInvalidationBox : U*98b93d26ba {
	bool *b81f57084d; // 0x140(0x01)
	bool CacheRelativeTransforms; // 0x141(0x01)
	char pad_142[0x16]; // 0x142(0x16)

	void SetCanCache(); // Function UMG.InvalidationBox.SetCanCache // Final|Native|Public|BlueprintCallable // @ game+0x5f8f948
	void GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b4bc
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // Final|Native|Public|BlueprintCallable // @ game+0x5f8d1a4
};

// Class UMG.MenuAnchor
// Size: 0x180 (Inherited: 0x140)
struct UMenuAnchor : U*98b93d26ba {
	struct UClass* MenuClass[0x08]; // 0x140(0x08)
	DelegateProperty OnGetMenuContentEvent[0x10]; // 0x148(0x10)
	enum class *0bc71ad42c Placement; // 0x158(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x159(0x01)
	bool UseApplicationMenuStack; // 0x15a(0x01)
	char pad_15B[0x5]; // 0x15b(0x05)
	struct FMulticastDelegate OnMenuOpenChanged[0x10]; // 0x160(0x10)
	char pad_170[0x10]; // 0x170(0x10)

	void IsOpen(); // Function UMG.MenuAnchor.IsOpen // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8d224
	void ToggleOpen(); // Function UMG.MenuAnchor.ToggleOpen // Final|Native|Public|BlueprintCallable // @ game+0x5f966f8
	void Open(); // Function UMG.MenuAnchor.Open // Final|Native|Public|BlueprintCallable // @ game+0x5f8d8e0
	void Close(); // Function UMG.MenuAnchor.Close // Final|Native|Public|BlueprintCallable // @ game+0x5f899e4
	void HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8d16c
	void ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f962c4
	void GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c348
};

// Class UMG.NamedSlot
// Size: 0x150 (Inherited: 0x140)
struct UNamedSlot : U*98b93d26ba {
	char pad_140[0x10]; // 0x140(0x10)
};

// Class UMG.RetainerBox
// Size: 0x170 (Inherited: 0x140)
struct URetainerBox : U*98b93d26ba {
	bool *f8fbe48fbf; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	int32 phase[0x04]; // 0x144(0x04)
	int32 *09a066d23a[0x04]; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct UMaterialInterface* EffectMaterial[0x08]; // 0x150(0x08)
	struct FName TextureParameter[0x08]; // 0x158(0x08)
	char pad_160[0x10]; // 0x160(0x10)

	void GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b838
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // Final|Native|Public|BlueprintCallable // @ game+0x5f8e648
	void SetEffectMaterial(); // Function UMG.RetainerBox.SetEffectMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5f8ff74
	void SetTextureParameter(); // Function UMG.RetainerBox.SetTextureParameter // Final|Native|Public|BlueprintCallable // @ game+0x5f95254
};

// Class UMG.SafeZone
// Size: 0x158 (Inherited: 0x140)
struct USafeZone : U*98b93d26ba {
	bool PadLeft; // 0x140(0x01)
	bool PadRight; // 0x141(0x01)
	bool PadTop; // 0x142(0x01)
	bool PadBottom; // 0x143(0x01)
	char pad_144[0x14]; // 0x144(0x14)
};

// Class UMG.ScaleBox
// Size: 0x160 (Inherited: 0x140)
struct UScaleBox : U*98b93d26ba {
	enum class EStretch Stretch; // 0x140(0x01)
	enum class EStretchDirection StretchDirection; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	float UserSpecifiedScale[0x04]; // 0x144(0x04)
	bool IgnoreInheritedScale; // 0x148(0x01)
	char pad_149[0x17]; // 0x149(0x17)

	void SetStretchDirection(); // Function UMG.ScaleBox.SetStretchDirection // Final|Native|Public|BlueprintCallable // @ game+0x5f94c24
	void SetStretch(); // Function UMG.ScaleBox.SetStretch // Final|Native|Public|BlueprintCallable // @ game+0x5f94b8c
	void SetUserSpecifiedScale(); // Function UMG.ScaleBox.SetUserSpecifiedScale // Final|Native|Public|BlueprintCallable // @ game+0x5f954b8
	void SetIgnoreInheritedScale(); // Function UMG.ScaleBox.SetIgnoreInheritedScale // Final|Native|Public|BlueprintCallable // @ game+0x5f914d8
};

// Class UMG.SizeBox
// Size: 0x170 (Inherited: 0x140)
struct USizeBox : U*98b93d26ba {
	char bOverride_WidthOverride : 1; // 0x140(0x01)
	char bOverride_HeightOverride : 1; // 0x140(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x140(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x140(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x140(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x140(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x140(0x01)
	char pad_140_7 : 1; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	float WidthOverride[0x04]; // 0x144(0x04)
	float HeightOverride[0x04]; // 0x148(0x04)
	float MinDesiredWidth[0x04]; // 0x14c(0x04)
	float MinDesiredHeight[0x04]; // 0x150(0x04)
	float MaxDesiredWidth[0x04]; // 0x154(0x04)
	float MaxDesiredHeight[0x04]; // 0x158(0x04)
	float MaxAspectRatio[0x04]; // 0x15c(0x04)
	char pad_160[0x10]; // 0x160(0x10)

	void SetMinDesiredWidth(); // Function UMG.SizeBox.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5f92d88
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5f89790
	void SetMaxDesiredWidth(); // Function UMG.SizeBox.SetMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5f9296c
	void SetMaxDesiredHeight(); // Function UMG.SizeBox.SetMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5f928d4
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5f897e0
	void SetMinDesiredHeight(); // Function UMG.SizeBox.SetMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5f92bc0
	void SetHeightOverride(); // Function UMG.SizeBox.SetHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x776820
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x5f89768
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5f897a4
	void SetMaxAspectRatio(); // Function UMG.SizeBox.SetMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x5f9283c
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5f897f4
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x5f8977c
	void SetWidthOverride(); // Function UMG.SizeBox.SetWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x776acc
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x5f899d0
};

// Class UMG.Viewport
// Size: 0x168 (Inherited: 0x140)
struct UViewport : U*98b93d26ba {
	struct FLinearColor BackgroundColor[0x10]; // 0x140(0x10)
	char pad_150[0x18]; // 0x150(0x18)

	void SetViewLocation(); // Function UMG.Viewport.SetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f95e80
	void GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8cf78
	struct UClass* Spawn(); // Function UMG.Viewport.Spawn // Final|Native|Public|BlueprintCallable // @ game+0x5f96658
	void GetViewLocation(); // Function UMG.Viewport.GetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8cdb8
	void SetViewRotation(); // Function UMG.Viewport.SetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f95f38
	void GetViewRotation(); // Function UMG.Viewport.GetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8ce04
};

// Class UMG.GridPanel
// Size: 0x170 (Inherited: 0x140)
struct UGridPanel : U*7762a61952 {
	struct TArray<float> ColumnFill[0x10]; // 0x140(0x10)
	struct TArray<float> RowFill[0x10]; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)

	struct UWidget* AddChildToGrid(); // Function UMG.GridPanel.AddChildToGrid // Final|Native|Public|BlueprintCallable // @ game+0x5f88c00
};

// Class UMG.HorizontalBox
// Size: 0x150 (Inherited: 0x140)
struct UHorizontalBox : U*7762a61952 {
	char pad_140[0x10]; // 0x140(0x10)

	void AddChildToHorizontalBox(); // Function UMG.HorizontalBox.AddChildToHorizontalBox // Final|Native|Public|BlueprintCallable // @ game+0x5f88d00
};

// Class UMG.Overlay
// Size: 0x150 (Inherited: 0x140)
struct UOverlay : U*7762a61952 {
	char pad_140[0x10]; // 0x140(0x10)

	void AddChildToOverlay(struct UWidget** Content); // Function UMG.Overlay.AddChildToOverlay // Final|Native|Public|BlueprintCallable // @ game+0x5f88e00
};

// Class UMG.ScrollBox
// Size: 0x8d8 (Inherited: 0x140)
struct UScrollBox : U*7762a61952 {
	struct F*894106b4cc WidgetStyle[0x248]; // 0x140(0x248)
	struct F*49a6b284e1 WidgetBarStyle[0x518]; // 0x388(0x518)
	struct USlateWidgetStyleAsset* Style[0x08]; // 0x8a0(0x08)
	struct USlateWidgetStyleAsset* BarStyle[0x08]; // 0x8a8(0x08)
	enum class EOrientation Orientation; // 0x8b0(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x8b1(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x8b2(0x01)
	char pad_8B3[0x1]; // 0x8b3(0x01)
	struct FVector2D ScrollbarThickness[0x08]; // 0x8b4(0x08)
	bool AlwaysShowScrollbar; // 0x8bc(0x01)
	bool bUseRightMouseButtonToScroll; // 0x8bd(0x01)
	bool bGainFocusWhenClickedScrollBar; // 0x8be(0x01)
	bool bLinearScrollOnWheel; // 0x8bf(0x01)
	char pad_8C0[0x18]; // 0x8c0(0x18)

	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // Final|Native|Public|BlueprintCallable // @ game+0x5f8e670
	void SetScrollBarVisibility(); // Function UMG.ScrollBox.SetScrollBarVisibility // Final|Native|Public|BlueprintCallable // @ game+0x5f94170
	void SetScrollOffset(); // Function UMG.ScrollBox.SetScrollOffset // Final|Native|Public|BlueprintCallable // @ game+0x5f94200
	void GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c910
	struct UWidget* ScrollWidgetIntoView(); // Function UMG.ScrollBox.ScrollWidgetIntoView // Final|Native|Public|BlueprintCallable // @ game+0x5f8e720
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // Final|Native|Public|BlueprintCallable // @ game+0x5f8e65c
	void GetScrollToEndOffset(); // Function UMG.ScrollBox.GetScrollToEndOffset // Final|Native|Public|BlueprintCallable // @ game+0x5f8c930
};

// Class UMG.UniformGridPanel
// Size: 0x168 (Inherited: 0x140)
struct UUniformGridPanel : U*7762a61952 {
	struct FMargin SlotPadding[0x10]; // 0x140(0x10)
	float MinDesiredSlotWidth[0x04]; // 0x150(0x04)
	float MinDesiredSlotHeight[0x04]; // 0x154(0x04)
	char pad_158[0x10]; // 0x158(0x10)

	void SetMinDesiredSlotWidth(); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // Final|Native|Public|BlueprintCallable // @ game+0x5f92cf0
	void SetSlotPadding(); // Function UMG.UniformGridPanel.SetSlotPadding // Final|Native|Public|BlueprintCallable // @ game+0x5f94958
	void SetMinDesiredSlotHeight(); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // Final|Native|Public|BlueprintCallable // @ game+0x5f92c58
	struct UWidget* AddChildToUniformGrid(); // Function UMG.UniformGridPanel.AddChildToUniformGrid // Final|Native|Public|BlueprintCallable // @ game+0x5f88f00
};

// Class UMG.VerticalBox
// Size: 0x150 (Inherited: 0x140)
struct UVerticalBox : U*7762a61952 {
	char pad_140[0x10]; // 0x140(0x10)

	void AddChildToVerticalBox(); // Function UMG.VerticalBox.AddChildToVerticalBox // Final|Native|Public|BlueprintCallable // @ game+0x5f89000
};

// Class UMG.WrapBox
// Size: 0x160 (Inherited: 0x140)
struct UWrapBox : U*7762a61952 {
	struct FVector2D InnerSlotPadding[0x08]; // 0x140(0x08)
	float WrapWidth[0x04]; // 0x148(0x04)
	bool bExplicitWrapWidth; // 0x14c(0x01)
	char pad_14D[0x13]; // 0x14d(0x13)

	struct UWidget* AddChildWrapBox(); // Function UMG.WrapBox.AddChildWrapBox // Final|Native|Public|BlueprintCallable // @ game+0x5f89100
	void SetInnerSlotPadding(); // Function UMG.WrapBox.SetInnerSlotPadding // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f91604
};

// Class UMG.ProgressBar
// Size: 0x348 (Inherited: 0x128)
struct UProgressBar : UWidget {
	struct F*d246388505 WidgetStyle[0x1b8]; // 0x128(0x1b8)
	struct USlateWidgetStyleAsset* Style[0x08]; // 0x2e0(0x08)
	struct USlateBrushAsset* BackgroundImage[0x08]; // 0x2e8(0x08)
	struct USlateBrushAsset* FillImage[0x08]; // 0x2f0(0x08)
	struct USlateBrushAsset* MarqueeImage[0x08]; // 0x2f8(0x08)
	float Percent[0x04]; // 0x300(0x04)
	enum class EProgressBarFillType BarFillType; // 0x304(0x01)
	bool bIsMarquee; // 0x305(0x01)
	char pad_306[0x2]; // 0x306(0x02)
	DelegateProperty PercentDelegate[0x10]; // 0x308(0x10)
	struct FLinearColor FillColorAndOpacity[0x10]; // 0x318(0x10)
	DelegateProperty FillColorAndOpacityDelegate[0x10]; // 0x328(0x10)
	char pad_338[0x10]; // 0x338(0x10)

	void SetIsMarquee(); // Function UMG.ProgressBar.SetIsMarquee // Final|Native|Public|BlueprintCallable // @ game+0x5f91e24
	void SetFillColorAndOpacity(); // Function UMG.ProgressBar.SetFillColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f90360
	void SetPercent(); // Function UMG.ProgressBar.SetPercent // Final|Native|Public|BlueprintCallable // @ game+0x5f93d54
};

// Class UMG.ScrollBar
// Size: 0x668 (Inherited: 0x128)
struct UScrollBar : UWidget {
	struct F*49a6b284e1 WidgetStyle[0x518]; // 0x128(0x518)
	struct USlateWidgetStyleAsset* Style[0x08]; // 0x640(0x08)
	bool *f86cccd6c9; // 0x648(0x01)
	enum class EOrientation Orientation; // 0x649(0x01)
	char pad_64A[0x2]; // 0x64a(0x02)
	struct FVector2D Thickness[0x08]; // 0x64c(0x08)
	char pad_654[0x14]; // 0x654(0x14)

	void SetState(float* InOffsetFraction); // Function UMG.ScrollBar.SetState // Final|Native|Public|BlueprintCallable // @ game+0x5f949f8
};

// Class UMG.Slider
// Size: 0x420 (Inherited: 0x128)
struct USlider : UWidget {
	float Value[0x04]; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	DelegateProperty ValueDelegate[0x10]; // 0x130(0x10)
	struct F*a4fb316a11 WidgetStyle[0x250]; // 0x140(0x250)
	enum class EOrientation Orientation; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	struct FLinearColor SliderBarColor[0x10]; // 0x394(0x10)
	struct FLinearColor SliderHandleColor[0x10]; // 0x3a4(0x10)
	bool IndentHandle; // 0x3b4(0x01)
	bool Locked; // 0x3b5(0x01)
	char pad_3B6[0x2]; // 0x3b6(0x02)
	float StepSize[0x04]; // 0x3b8(0x04)
	bool IsFocusable; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	struct FMulticastDelegate OnMouseCaptureBegin[0x10]; // 0x3c0(0x10)
	struct FMulticastDelegate OnMouseCaptureEnd[0x10]; // 0x3d0(0x10)
	struct FMulticastDelegate OnControllerCaptureBegin[0x10]; // 0x3e0(0x10)
	struct FMulticastDelegate OnControllerCaptureEnd[0x10]; // 0x3f0(0x10)
	struct FMulticastDelegate OnValueChanged[0x10]; // 0x400(0x10)
	char pad_410[0x10]; // 0x410(0x10)

	void SetLocked(); // Function UMG.Slider.SetLocked // Final|Native|Public|BlueprintCallable // @ game+0x5f926ac
	void GetValue(); // Function UMG.Slider.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8cd68
	void SetValue(); // Function UMG.Slider.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x5f95550
	void SetIndentHandle(); // Function UMG.Slider.SetIndentHandle // Final|Native|Public|BlueprintCallable // @ game+0x5f91570
	void SetSliderHandleColor(); // Function UMG.Slider.SetSliderHandleColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f948ac
	void SetStepSize(); // Function UMG.Slider.SetStepSize // Final|Native|Public|BlueprintCallable // @ game+0x5f94af4
	void SetSliderBarColor(); // Function UMG.Slider.SetSliderBarColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f94800
};

// Class UMG.Spacer
// Size: 0x140 (Inherited: 0x128)
struct USpacer : UWidget {
	struct FVector2D Size[0x08]; // 0x128(0x08)
	char pad_130[0x10]; // 0x130(0x10)

	void SetSize(); // Function UMG.Spacer.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f94774
};

// Class UMG.SpinBox
// Size: 0x560 (Inherited: 0x128)
struct USpinBox : UWidget {
	float Value[0x04]; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	DelegateProperty ValueDelegate[0x10]; // 0x130(0x10)
	struct F*905149747b WidgetStyle[0x310]; // 0x140(0x310)
	struct USlateWidgetStyleAsset* Style[0x08]; // 0x450(0x08)
	float Delta[0x04]; // 0x458(0x04)
	float SliderExponent[0x04]; // 0x45c(0x04)
	struct FSlateFontInfo Font[0x68]; // 0x460(0x68)
	float MinDesiredWidth[0x04]; // 0x4c8(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x4cc(0x01)
	bool SelectAllTextOnCommit; // 0x4cd(0x01)
	char pad_4CE[0x2]; // 0x4ce(0x02)
	struct FSlateColor ForegroundColor[0x28]; // 0x4d0(0x28)
	struct FMulticastDelegate OnValueChanged[0x10]; // 0x4f8(0x10)
	struct FMulticastDelegate OnValueCommitted[0x10]; // 0x508(0x10)
	struct FMulticastDelegate OnBeginSliderMovement[0x10]; // 0x518(0x10)
	struct FMulticastDelegate OnEndSliderMovement[0x10]; // 0x528(0x10)
	char bOverride_MinValue : 1; // 0x538(0x01)
	char bOverride_MaxValue : 1; // 0x538(0x01)
	char bOverride_MinSliderValue : 1; // 0x538(0x01)
	char bOverride_MaxSliderValue : 1; // 0x538(0x01)
	char pad_538_4 : 4; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	float MinValue[0x04]; // 0x53c(0x04)
	float MaxValue[0x04]; // 0x540(0x04)
	float *ad3d5161ab[0x04]; // 0x544(0x04)
	float *8e28c2fa59[0x04]; // 0x548(0x04)
	char pad_54C[0x14]; // 0x54c(0x14)

	void GetValue(); // Function UMG.SpinBox.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8cd90
	void SetMaxSliderValue(); // Function UMG.SpinBox.SetMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5f92a04
	void GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c320
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void SetMaxValue(); // Function UMG.SpinBox.SetMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x5f92a9c
	void SetMinValue(); // Function UMG.SpinBox.SetMinValue // Final|Native|Public|BlueprintCallable // @ game+0x5f92f50
	void OnSpinBoxValueChangedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void SetValue(); // Function UMG.SpinBox.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x5f955e8
	void GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c390
	void GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c2f8
	void GetMinValue(); // Function UMG.SpinBox.GetMinValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c3b8
	void OnSpinBoxValueCommittedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x5f897cc
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5f897b8
	void SetForegroundColor(); // Function UMG.SpinBox.SetForegroundColor // Final|Native|Public|BlueprintCallable // @ game+0x5f90738
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // Final|Native|Public|BlueprintCallable // @ game+0x5f8981c
	void SetMinSliderValue(); // Function UMG.SpinBox.SetMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5f92eb8
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5f89808
};

// Class UMG.*7676240b6c
// Size: 0x128 (Inherited: 0x128)
struct U*7676240b6c : UWidget {

	struct UObject* OnGenerateRowUObject__DelegateSignature(); // DelegateFunction UMG.*7676240b6c.OnGenerateRowUObject__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
};

// Class UMG.ListView
// Size: 0x168 (Inherited: 0x128)
struct UListView : U*7676240b6c {
	float *bd098f7073[0x04]; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<struct UObject*> Items[0x10]; // 0x130(0x10)
	enum class ESelectionMode *d4062bef60; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	DelegateProperty OnGenerateRowEvent[0x10]; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)
};

// Class UMG.TileView
// Size: 0x168 (Inherited: 0x128)
struct UTileView : U*7676240b6c {
	float *b46a7023fd[0x04]; // 0x128(0x04)
	float *bd098f7073[0x04]; // 0x12c(0x04)
	struct TArray<struct UObject*> Items[0x10]; // 0x130(0x10)
	enum class ESelectionMode *d4062bef60; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	DelegateProperty OnGenerateTileEvent[0x10]; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)

	void RequestListRefresh(); // Function UMG.TileView.RequestListRefresh // Final|Native|Public|BlueprintCallable // @ game+0x5f8e62c
	void SetItemHeight(); // Function UMG.TileView.SetItemHeight // Final|Native|Public|BlueprintCallable // @ game+0x5f921ec
	void SetItemWidth(); // Function UMG.TileView.SetItemWidth // Final|Native|Public|BlueprintCallable // @ game+0x5f922a0
};

// Class UMG.MultiLineEditableText
// Size: 0x440 (Inherited: 0x150)
struct UMultiLineEditableText : U*e12a436fb2 {
	struct FText Text[0x18]; // 0x150(0x18)
	struct FText HintText[0x18]; // 0x168(0x18)
	DelegateProperty HintTextDelegate[0x10]; // 0x180(0x10)
	struct F*7f8a9226a3 WidgetStyle[0x208]; // 0x190(0x208)
	bool bIsReadOnly; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FSlateFontInfo Font[0x68]; // 0x3a0(0x68)
	bool *04f30eb062; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FMulticastDelegate OnTextChanged[0x10]; // 0x410(0x10)
	struct FMulticastDelegate OnTextCommitted[0x10]; // 0x420(0x10)
	char pad_430[0x10]; // 0x430(0x10)

	void GetText(); // Function UMG.MultiLineEditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8cbb0
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void SetIsReadOnly(); // Function UMG.MultiLineEditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5f920c4
	void SetText(); // Function UMG.MultiLineEditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5f94f74
	struct FText OnMultiLineEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xce0 (Inherited: 0x150)
struct UMultiLineEditableTextBox : U*e12a436fb2 {
	struct FText Text[0x18]; // 0x150(0x18)
	struct FText HintText[0x18]; // 0x168(0x18)
	DelegateProperty HintTextDelegate[0x10]; // 0x180(0x10)
	struct F*7051df995c WidgetStyle[0x870]; // 0x190(0x870)
	struct F*7f8a9226a3 TextStyle[0x208]; // 0xa00(0x208)
	bool bIsReadOnly; // 0xc08(0x01)
	bool *04f30eb062; // 0xc09(0x01)
	char pad_C0A[0x6]; // 0xc0a(0x06)
	struct USlateWidgetStyleAsset* Style[0x08]; // 0xc10(0x08)
	struct FSlateFontInfo Font[0x68]; // 0xc18(0x68)
	struct FLinearColor ForegroundColor[0x10]; // 0xc80(0x10)
	struct FLinearColor BackgroundColor[0x10]; // 0xc90(0x10)
	struct FLinearColor ReadOnlyForegroundColor[0x10]; // 0xca0(0x10)
	struct FMulticastDelegate OnTextChanged[0x10]; // 0xcb0(0x10)
	struct FMulticastDelegate OnTextCommitted[0x10]; // 0xcc0(0x10)
	char pad_CD0[0x10]; // 0xcd0(0x10)

	void GetText(); // Function UMG.MultiLineEditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8cc68
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void SetIsReadOnly(); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5f92158
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void SetError(); // Function UMG.MultiLineEditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x5f90168
	void SetText(); // Function UMG.MultiLineEditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5f95068
};

// Class UMG.RichTextBlock
// Size: 0x418 (Inherited: 0x150)
struct URichTextBlock : U*e12a436fb2 {
	struct FText Text[0x18]; // 0x150(0x18)
	DelegateProperty TextDelegate[0x10]; // 0x168(0x10)
	struct FSlateFontInfo Font[0x68]; // 0x178(0x68)
	struct FLinearColor Color[0x10]; // 0x1e0(0x10)
	struct TArray<struct U*7633077302*> *449088c133[0x10]; // 0x1f0(0x10)
	char pad_200[0x218]; // 0x200(0x218)
};

// Class UMG.Throbber
// Size: 0x1d8 (Inherited: 0x128)
struct UThrobber : UWidget {
	int32 NumberOfPieces[0x04]; // 0x128(0x04)
	bool bAnimateHorizontally; // 0x12c(0x01)
	bool bAnimateVertically; // 0x12d(0x01)
	bool bAnimateOpacity; // 0x12e(0x01)
	char pad_12F[0x1]; // 0x12f(0x01)
	struct USlateBrushAsset* PieceImage[0x08]; // 0x130(0x08)
	struct FSlateBrush Image[0x90]; // 0x138(0x90)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	void SetAnimateHorizontally(); // Function UMG.Throbber.SetAnimateHorizontally // Final|Native|Public|BlueprintCallable // @ game+0x5f8ebb8
	void SetNumberOfPieces(); // Function UMG.Throbber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x5f932c0
	void SetAnimateVertically(); // Function UMG.Throbber.SetAnimateVertically // Final|Native|Public|BlueprintCallable // @ game+0x5f8ed44
	void SetAnimateOpacity(); // Function UMG.Throbber.SetAnimateOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5f8ec7c
};

// Class UMG.*54cc75d10f
// Size: 0x380 (Inherited: 0x330)
struct U*54cc75d10f : UMovieSceneSequence {
	struct FMulticastDelegate OnAnimationStarted[0x10]; // 0x330(0x10)
	struct FMulticastDelegate OnAnimationFinished[0x10]; // 0x340(0x10)
	struct UMovieScene* MovieScene[0x08]; // 0x350(0x08)
	struct TArray<struct F*36fd1c0181> *691d79a1d5[0x10]; // 0x358(0x10)
	struct FString *e52847fcb9[0x10]; // 0x368(0x10)
	char pad_378[0x8]; // 0x378(0x08)

	void *e0333ffbb8(); // Function UMG.*54cc75d10f.*e0333ffbb8 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8b860
	void *5f125b80f1(); // Function UMG.*54cc75d10f.*5f125b80f1 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8ca5c
};

// Class UMG.*a69dc6d540
// Size: 0x28 (Inherited: 0x28)
struct U*a69dc6d540 : UBlueprintFunctionLibrary {

	struct F*51ab529e16 *c1452c8c5a(struct TArray<struct FVector2D>* Points); // Function UMG.*a69dc6d540.*c1452c8c5a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f8a408
	void *af1f679492(); // Function UMG.*a69dc6d540.*af1f679492 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5f8a018
	struct UWidget* *a64e914e1b(); // Function UMG.*a69dc6d540.*a64e914e1b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5f91b40
	struct F*e56f4981f2 *f24605a91e(); // Function UMG.*a69dc6d540.*f24605a91e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8ba98
	void *3a82e2fd83(); // Function UMG.*a69dc6d540.*3a82e2fd83 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f8b6a4
	void *e3fc113435(struct FEventReply* Reply); // Function UMG.*a69dc6d540.*e3fc113435 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f89588
	struct FSlateBrush *1a601ccf55(); // Function UMG.*a69dc6d540.*1a601ccf55 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8b360
	void *d1c4aaac06(struct FSlateBrush* Brush); // Function UMG.*a69dc6d540.*d1c4aaac06 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8b10c
	void *4d04403af1(struct F*51ab529e16* Context, struct FVector2D* Size); // Function UMG.*a69dc6d540.*4d04403af1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f8a03c
	struct FVector2D *326a8c6e6e(); // Function UMG.*a69dc6d540.*326a8c6e6e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f8c780
	void *df24b70edb(struct FSlateBrush* Brush); // Function UMG.*a69dc6d540.*df24b70edb // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f8f754
	struct FVector2D *6ffa5f5832(struct UObject** WorldContextObject); // Function UMG.*a69dc6d540.*6ffa5f5832 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5f908bc
	struct F*174cd056c7 *e458bde1d8(); // Function UMG.*a69dc6d540.*e458bde1d8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8bea4
	void *65d81b6746(); // Function UMG.*a69dc6d540.*65d81b6746 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f893a8
	void *0439345480(); // Function UMG.*a69dc6d540.*0439345480 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x7bd92c
	int32 *1e8569efeb(); // Function UMG.*a69dc6d540.*1e8569efeb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f8d6cc
	struct UWidget* CaptureJoystick(bool bInAllJoysticks); // Function UMG.*a69dc6d540.CaptureJoystick // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f893c4
	void *0ddfe846bd(bool bInAllUsers); // Function UMG.*a69dc6d540.*0ddfe846bd // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f89858
	int32 *8a3a2c4ee7(); // Function UMG.*a69dc6d540.*8a3a2c4ee7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f8d544
	void *db17be3750(struct FSlateBrush* Brush); // Function UMG.*a69dc6d540.*db17be3750 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f8f754
	void *6ef7e33359(); // Function UMG.*a69dc6d540.*6ef7e33359 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f8d200
	enum class EMouseLockMode *06ff39e0a4(); // Function UMG.*a69dc6d540.*06ff39e0a4 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5f91840
	void *bd37aed05b(struct APlayerController** Target, bool bLockMouseToViewport); // Function UMG.*a69dc6d540.*bd37aed05b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5f916c4
	void *b97db9ec4f(struct FSlateBrush* Brush); // Function UMG.*a69dc6d540.*b97db9ec4f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8b740
	struct F*fe7b463e2d *f1126debdf(); // Function UMG.*a69dc6d540.*f1126debdf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8bdb8
	struct F*51ab529e16 *376229bab6(struct FString* inString); // Function UMG.*a69dc6d540.*376229bab6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f8a5cc
	void *bfa90e2916(); // Function UMG.*a69dc6d540.*bfa90e2916 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8e118
	struct FLinearColor *2d1c2faf12(); // Function UMG.*a69dc6d540.*2d1c2faf12 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f8a248
	void Create(struct UClass** WidgetType); // Function UMG.*a69dc6d540.Create // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e58e8
	void *f09e5403b9(); // Function UMG.*a69dc6d540.*f09e5403b9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8bc84
	void *99892f8509(); // Function UMG.*a69dc6d540.*99892f8509 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5f919a4
	struct FEventReply *6ab9c5aa54(struct UWidget** FocusWidget); // Function UMG.*a69dc6d540.*6ab9c5aa54 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f952f4
	void *9017ad8225(struct UWidget** InWidgetToFocus); // Function UMG.*a69dc6d540.*9017ad8225 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5f91a24
	struct UClass* *adc0bd9300(); // Function UMG.*a69dc6d540.*adc0bd9300 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f89b34
	struct FEventReply *f7e060e592(); // Function UMG.*a69dc6d540.*f7e060e592 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f9679c
	void *9e6a8f9bc9(struct F*7bb599ef25* Event); // Function UMG.*a69dc6d540.*9e6a8f9bc9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8c014
	bool ReleaseJoystickCapture(); // Function UMG.*a69dc6d540.ReleaseJoystickCapture // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8deac
	struct FVector2D SetMousePosition(); // Function UMG.*a69dc6d540.SetMousePosition // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f93074
	void *68990a132a(); // Function UMG.*a69dc6d540.*68990a132a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f8d854
	struct FName *7e8b7031b1(struct F*51ab529e16* Context); // Function UMG.*a69dc6d540.*7e8b7031b1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f8a7c8
	void *fe931678fe(struct USlateBrushAsset** BrushAsset); // Function UMG.*a69dc6d540.*fe931678fe // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f8d44c
	void *a5246fa800(struct UObject** WorldContextObject, struct UClass** Interface); // Function UMG.*a69dc6d540.*a5246fa800 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f8af08
	void Handled(); // Function UMG.*a69dc6d540.Handled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f8cfe4
	void *8d7d1a49cf(struct UObject** WorldContextObject, struct UClass** WidgetClass); // Function UMG.*a69dc6d540.*8d7d1a49cf // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f8ad58
	struct FKey *ec2208ce36(struct F*174cd056c7* PointerEvent); // Function UMG.*a69dc6d540.*ec2208ce36 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f89de0
	void *38a8323c90(); // Function UMG.*a69dc6d540.*38a8323c90 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5f905f0
	struct FEventReply *5443be233e(); // Function UMG.*a69dc6d540.*5443be233e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8aadc
	void *c7d61ba5e6(); // Function UMG.*a69dc6d540.*c7d61ba5e6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8bb8c
	struct FSlateBrush *35d6085c4c(); // Function UMG.*a69dc6d540.*35d6085c4c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8b204
	struct UWidget* *3e8d71beb3(); // Function UMG.*a69dc6d540.*3e8d71beb3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8d2d4
	void *e42c401c58(struct FEventReply* Reply, struct FKey* DragKey); // Function UMG.*a69dc6d540.*e42c401c58 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f89bc4
};

// Class UMG.*171af945ca
// Size: 0x6c0 (Inherited: 0x4d0)
struct U*171af945ca : USceneComponent {
	struct FMulticastDelegate OnHoveredWidgetChanged[0x10]; // 0x4d0(0x10)
	char pad_4E0[0x10]; // 0x4e0(0x10)
	int32 VirtualUserIndex[0x04]; // 0x4f0(0x04)
	float PointerIndex[0x04]; // 0x4f4(0x04)
	enum class ECollisionChannel TraceChannel; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float InteractionDistance[0x04]; // 0x4fc(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x500(0x01)
	bool bEnableHitTesting; // 0x501(0x01)
	bool bShowDebug; // 0x502(0x01)
	char pad_503[0x1]; // 0x503(0x01)
	struct FLinearColor DebugColor[0x10]; // 0x504(0x10)
	char pad_514[0x7c]; // 0x514(0x7c)
	struct FHitResult *bea457c9a9[0x88]; // 0x590(0x88)
	struct FVector2D *dd6e78549a[0x08]; // 0x618(0x08)
	struct FVector2D *2b8aab5647[0x08]; // 0x620(0x08)
	struct UWidgetComponent* *7a4d8ef620[0x08]; // 0x628(0x08)
	struct FHitResult *91b8aa6c70[0x88]; // 0x630(0x88)
	bool *d3dd42f76c; // 0x6b8(0x01)
	bool *6b4d1fd66b; // 0x6b9(0x01)
	bool *c21db9416c; // 0x6ba(0x01)
	char pad_6BB[0x5]; // 0x6bb(0x05)

	struct FKey *8d27684cb3(); // Function UMG.*171af945ca.*8d27684cb3 // Native|Public|BlueprintCallable // @ game+0x5f8d988
	void *262f46f27e(); // Function UMG.*171af945ca.*262f46f27e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8c190
	void *1509803049(); // Function UMG.*171af945ca.*1509803049 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58cd1a0
	void *7353100201(); // Function UMG.*171af945ca.*7353100201 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8d270
	void *a670ccf893(); // Function UMG.*171af945ca.*a670ccf893 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8ba80
	void *15f5aba6b7(); // Function UMG.*171af945ca.*15f5aba6b7 // Native|Public|BlueprintCallable // @ game+0x5f8e684
	bool *30fbd0bc51(); // Function UMG.*171af945ca.*30fbd0bc51 // Native|Public|BlueprintCallable // @ game+0x5f8da80
	void *dbbeffc7e1(); // Function UMG.*171af945ca.*dbbeffc7e1 // Native|Public|BlueprintCallable // @ game+0x5f8e020
	void *6dc0f4f5d2(); // Function UMG.*171af945ca.*6dc0f4f5d2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8d258
	void *f5eab5b14c(); // Function UMG.*171af945ca.*f5eab5b14c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f8acdc
	struct FString *d3cebae617(bool bRepeat); // Function UMG.*171af945ca.*d3cebae617 // Native|Public|BlueprintCallable // @ game+0x5f8e800
	void *c8e2a03ba3(); // Function UMG.*171af945ca.*c8e2a03ba3 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f8fd5c
	void *83a6b91ac8(); // Function UMG.*171af945ca.*83a6b91ac8 // Native|Public|BlueprintCallable // @ game+0x5f8dbcc
	void *078c99b2df(); // Function UMG.*171af945ca.*078c99b2df // Native|Public|BlueprintCallable // @ game+0x5f8e24c
};

// Class UMG.*842710e14c
// Size: 0x28 (Inherited: 0x28)
struct U*842710e14c : UBlueprintFunctionLibrary {

	struct UObject* *81a50ace3a(); // Function UMG.*842710e14c.*81a50ace3a // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f8cee0
	void *59e5cb6e44(struct UWidget** Widget); // Function UMG.*842710e14c.*59e5cb6e44 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f962f8
	struct UWidget* *924888b17e(); // Function UMG.*842710e14c.*924888b17e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f96418
	struct UWidget* *3c22ef515d(); // Function UMG.*842710e14c.*3c22ef515d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f96538
	void *6f0e1f8bfb(); // Function UMG.*842710e14c.*6f0e1f8bfb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f96388
	void *5e3d5037eb(); // Function UMG.*842710e14c.*5e3d5037eb // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f8ce50
	struct UWidget* *01e108ec97(); // Function UMG.*842710e14c.*01e108ec97 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f964a8
	float *e9d54f0e05(float* LocationY); // Function UMG.*842710e14c.*e9d54f0e05 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f8c3e0
	void *af3bc017c9(struct UWidget** Widget); // Function UMG.*842710e14c.*af3bc017c9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f965c8
	struct UWidget* *068e75748b(); // Function UMG.*842710e14c.*068e75748b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb0e4f0
	struct FVector2D *1454a23edc(); // Function UMG.*842710e14c.*1454a23edc // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f8dcb4
	void *c9fc849400(); // Function UMG.*842710e14c.*c9fc849400 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5f8e334
};

// Class UMG.WidgetNavigation
// Size: 0xb8 (Inherited: 0x28)
struct UWidgetNavigation : UObject {
	struct F*5c92b250c5 Up[0x18]; // 0x28(0x18)
	struct F*5c92b250c5 Down[0x18]; // 0x40(0x18)
	struct F*5c92b250c5 Left[0x18]; // 0x58(0x18)
	struct F*5c92b250c5 Right[0x18]; // 0x70(0x18)
	struct F*5c92b250c5 Next[0x18]; // 0x88(0x18)
	struct F*5c92b250c5 Previous[0x18]; // 0xa0(0x18)
};

// Class UMG.WidgetTree
// Size: 0x30 (Inherited: 0x28)
struct UWidgetTree : UObject {
	struct UWidget* *4f2514a9d2[0x08]; // 0x28(0x08)
};


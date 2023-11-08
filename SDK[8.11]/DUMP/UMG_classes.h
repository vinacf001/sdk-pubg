// Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x128 (Inherited: 0x28)
struct UWidget : UVisual {
	bool *a6eafe4c19; // 0x28(0x01)
	bool *65724910ec; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct UPanelSlot* Slot; // 0x30(0x08)
	bool bIsEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	DelegateProperty bIsEnabledDelegate; // 0x40(0x10)
	DelegateProperty OnPrepass; // 0x50(0x10)
	struct FText ToolTipText; // 0x60(0x18)
	DelegateProperty ToolTipTextDelegate; // 0x78(0x10)
	struct UWidget* ToolTipWidget; // 0x88(0x08)
	DelegateProperty *0d27dbe1b1; // 0x90(0x10)
	enum class ESlateVisibility Visiblity; // 0xa0(0x01)
	enum class ESlateVisibility Visibility; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	DelegateProperty VisibilityDelegate; // 0xa8(0x10)
	char bOverride_Cursor : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	enum class EMouseCursor Cursor; // 0xbc(0x01)
	bool bIsVolatile; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct FWidgetTransform RenderTransform; // 0xc0(0x1c)
	struct FVector2D RenderTransformPivot; // 0xdc(0x08)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UWidgetNavigation* Navigation; // 0xe8(0x08)
	char pad_F0[0x28]; // 0xf0(0x28)
	struct TArray<struct U*e74f5ed9b0*> *524c18407e; // 0x118(0x10)

	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb2478
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // Public|Delegate // @ game+0x293938
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // Public|Delegate // @ game+0x293938
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb00c8
	void GetParent(); // Function UMG.Widget.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eafc58
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5eb25ac
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb02c0
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // Public|Delegate // @ game+0x293938
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb23ec
	void SetVisibility(); // Function UMG.Widget.SetVisibility // Native|Public|BlueprintCallable // @ game+0x67433c
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eafbec
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // Public|Delegate // @ game+0x293938
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // Native|Public|BlueprintCallable // @ game+0x57eec84
	void OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x293938
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // Final|Native|Public|BlueprintCallable // @ game+0x5eaf894
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // Final|Native|Public|BlueprintCallable // @ game+0x41ad9c
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // Final|Native|Public|BlueprintCallable // @ game+0x5eb04a0
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eafa7c
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // Public|Delegate // @ game+0x293938
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // Public|Delegate // @ game+0x293938
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb017c
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // Public|Delegate // @ game+0x293938
	void IsVisible(); // Function UMG.Widget.IsVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb0800
	void SetCursor(); // Function UMG.Widget.SetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5eb17dc
	void IsHovered(); // Function UMG.Widget.IsHovered // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb0570
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // Public|Delegate // @ game+0x293938
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // Native|Public|BlueprintCallable // @ game+0x5eb1b48
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus // Final|Native|Public|BlueprintCallable // @ game+0x5eb2688
	struct UObject* GenerateWidgetForObject__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // Public|Delegate // @ game+0x293938
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eafa4c
	void ResetCursor(); // Function UMG.Widget.ResetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5eb10d0
	void GetVisibility(); // Function UMG.Widget.GetVisibility // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eaff08
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // Public|Delegate|HasDefaults // @ game+0x293938
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // Public|Delegate // @ game+0x293938
	void HasUserFocus(); // Function UMG.Widget.HasUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb0360
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xd93ac8
	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // Final|Native|Public|BlueprintCallable // @ game+0x5eb2204
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eafa20
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // Final|Native|Public|BlueprintCallable // @ game+0x5eb1be0
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // Final|Native|Public|BlueprintCallable // @ game+0x5eaf880
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // Public|Delegate // @ game+0x293938
	enum class EUINavigationRule SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // Final|Native|Public|BlueprintCallable // @ game+0x5eb1bf4
	void HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb0400
	enum class EUINavigationRule SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // Final|Native|Public|BlueprintCallable // @ game+0x5eb166c
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb021c
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb22a4
	void GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // Public|Delegate // @ game+0x293938
	void SetToolTip(); // Function UMG.Widget.SetToolTip // Final|Native|Public|BlueprintCallable // @ game+0x5eb251c
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // Public|Delegate // @ game+0x293938
	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // Public|Delegate // @ game+0x293938
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile // Final|Native|Public|BlueprintCallable // @ game+0x5eaf8a8
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb2348
};

// Class UMG.UserWidget
// Size: 0x250 (Inherited: 0x128)
struct UUserWidget : UWidget {
	char pad_128[0x8]; // 0x128(0x08)
	struct FLinearColor ColorAndOpacity; // 0x130(0x10)
	DelegateProperty ColorAndOpacityDelegate; // 0x140(0x10)
	struct FSlateColor ForegroundColor; // 0x150(0x28)
	DelegateProperty ForegroundColorDelegate; // 0x178(0x10)
	struct FMargin Padding; // 0x188(0x10)
	bool bSupportsKeyboardFocus; // 0x198(0x01)
	bool bIsFocusable; // 0x199(0x01)
	char pad_19A[0x6]; // 0x19a(0x06)
	struct TArray<struct U*89f5a4ae38*> *cfbde3e973; // 0x1a0(0x10)
	struct TArray<struct U*89f5a4ae38*> *7cbb0d5e23; // 0x1b0(0x10)
	bool bStopAction; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	int32 Priority; // 0x1c4(0x04)
	struct TArray<struct F*c8144ff210> *1da74d2862; // 0x1c8(0x10)
	struct UWidgetTree* WidgetTree; // 0x1d8(0x08)
	char bCanEverTick : 1; // 0x1e0(0x01)
	char *cdebf7db93 : 1; // 0x1e0(0x01)
	char pad_1E0_2 : 6; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	char *06b5f0206f : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct U*37a897c2a6* *37a897c2a6; // 0x1f0(0x08)
	char pad_1F8[0x58]; // 0x1f8(0x58)

	void OnAnimationFinished(); // Function UMG.UserWidget.OnAnimationFinished // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x9deef8
	void GetWidgetComponent(); // Function UMG.UserWidget.GetWidgetComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eaff2c
	void Destruct(); // Function UMG.UserWidget.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void OnMouseLeave(); // Function UMG.UserWidget.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void StopListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.StopListeningForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x5eb2740
	void PauseAnimation(); // Function UMG.UserWidget.PauseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eb0d50
	void SetForegroundColor(); // Function UMG.UserWidget.SetForegroundColor // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eb1918
	void ReverseAnimation(); // Function UMG.UserWidget.ReverseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eb10e4
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x5eb10bc
	void OnControllerAnalogValueChanged(struct FControllerEvent ControllerEvent); // Function UMG.UserWidget.OnControllerAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x293938
	void SetInputActionBlocking(); // Function UMG.UserWidget.SetInputActionBlocking // Final|Native|Protected|BlueprintCallable // @ game+0x5eb1a0c
	struct F*a3e4749da2 OnTouchStarted(); // Function UMG.UserWidget.OnTouchStarted // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void IsInteractable(); // Function UMG.UserWidget.IsInteractable // BlueprintCosmetic|Event|Public|BlueprintEvent|Const // @ game+0x293938
	void SetOwningPlayer(); // Function UMG.UserWidget.SetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eb1f00
	void SetAlignmentInViewport(); // Function UMG.UserWidget.SetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb15d0
	struct F*a3e4749da2 OnDragCancelled(); // Function UMG.UserWidget.OnDragCancelled // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void SetPlaybackSpeed(struct U*3335e92189* InAnimation); // Function UMG.UserWidget.SetPlaybackSpeed // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eb204c
	struct FControllerEvent OnControllerButtonReleased(); // Function UMG.UserWidget.OnControllerButtonReleased // Event|Public|BlueprintEvent // @ game+0x293938
	void GetOwningPlayer(); // Function UMG.UserWidget.GetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xd93ac8
	void GetAnimationCurrentTime(struct U*3335e92189* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eaf980
	void FinishStoppedSequencePlayers(); // Function UMG.UserWidget.FinishStoppedSequencePlayers // Final|Native|Public|BlueprintCallable // @ game+0x5eaf86c
	struct F*a3e4749da2 OnTouchGesture(); // Function UMG.UserWidget.OnTouchGesture // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	struct FKeyEvent OnKeyDown(); // Function UMG.UserWidget.OnKeyDown // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void OnMouseButtonDown(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void GetOwningLocalPlayer(); // Function UMG.UserWidget.GetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eafc10
	void SetPadding(); // Function UMG.UserWidget.SetPadding // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eb1fac
	void IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb0554
	void OnAnimationStarted(); // Function UMG.UserWidget.OnAnimationStarted // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x9df3c8
	void GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eafc34
	void PreConstruct(); // Function UMG.UserWidget.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void PlaySound(); // Function UMG.UserWidget.PlaySound // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eb1010
	void OnPreviewMouseButtonDown(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnPreviewMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	struct F*52af343317 OnKeyChar(); // Function UMG.UserWidget.OnKeyChar // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eaf93c
	void PlayAnimation(struct U*3335e92189* InAnimation, int32 NumLoopsToPlay); // Function UMG.UserWidget.PlayAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xc963d4
	void IsInViewport(); // Function UMG.UserWidget.IsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eafaa0
	void AddToViewport(); // Function UMG.UserWidget.AddToViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eaf250
	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x5eb2824
	void SetPositionInViewport(); // Function UMG.UserWidget.SetPositionInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb212c
	void OnKeyUp(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnKeyUp // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void SetInputActionPriority(); // Function UMG.UserWidget.SetInputActionPriority // Final|Native|Protected|BlueprintCallable // @ game+0x5eb1ab0
	struct FGeometry OnDrop(struct F*a3e4749da2 PointerEvent); // Function UMG.UserWidget.OnDrop // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void OnDragLeave(); // Function UMG.UserWidget.OnDragLeave // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void SetDesiredSizeInViewport(); // Function UMG.UserWidget.SetDesiredSizeInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb1870
	struct FName IsListeningForInputAction(); // Function UMG.UserWidget.IsListeningForInputAction // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb0594
	void OnDragDetected(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnDragDetected // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb0554
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x57eec84
	struct F*a3e4749da2 OnTouchEnded(); // Function UMG.UserWidget.OnTouchEnded // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void OnFocusLost(); // Function UMG.UserWidget.OnFocusLost // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void OnMouseMove(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnMouseMove // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eafaa0
	struct FGeometry OnDragEnter(struct F*a3e4749da2 PointerEvent); // Function UMG.UserWidget.OnDragEnter // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void ListenForInputAction(struct FName ActionName, bool bConsume); // Function UMG.UserWidget.ListenForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x5eb0824
	void SetColorAndOpacity(); // Function UMG.UserWidget.SetColorAndOpacity // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x806aec
	void GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eaf964
	void StopAnimation(); // Function UMG.UserWidget.StopAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xba7570
	void OnMouseButtonUp(struct F*a3e4749da2 MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void SetNumLoopsToPlay(); // Function UMG.UserWidget.SetNumLoopsToPlay // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eb1d2c
	struct UDragDropOperation* OnDragOver(); // Function UMG.UserWidget.OnDragOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void SetOwningLocalPlayer(); // Function UMG.UserWidget.SetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eb1e54
	void OnMouseButtonDoubleClick(struct F*a3e4749da2 InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	struct F*a3e4749da2 OnMouseWheel(); // Function UMG.UserWidget.OnMouseWheel // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void OnControllerButtonPressed(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnControllerButtonPressed // Event|Public|BlueprintEvent // @ game+0x293938
	struct FGeometry Tick(); // Function UMG.UserWidget.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	struct FKeyEvent OnPreviewKeyDown(); // Function UMG.UserWidget.OnPreviewKeyDown // Event|Public|BlueprintEvent // @ game+0x293938
	void SetAnchorsInViewport(); // Function UMG.UserWidget.SetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eb1748
	void OnPaint(); // Function UMG.UserWidget.OnPaint // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x293938
	float PlayAnimationTo(float EndAtTime, int32 NumLoopsToPlay); // Function UMG.UserWidget.PlayAnimationTo // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eb0df0
	struct U*3335e92189* IsAnimationPlaying(); // Function UMG.UserWidget.IsAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb04b4
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // Final|Native|Protected|BlueprintCallable // @ game+0x5eb272c
	void Construct(); // Function UMG.UserWidget.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void OnAnalogValueChanged(struct F*8a4c6e0afe InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x293938
	struct F*2e9df8f42a OnMotionDetected(); // Function UMG.UserWidget.OnMotionDetected // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void OnTouchMoved(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnTouchMoved // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	struct FFocusEvent OnFocusReceived(); // Function UMG.UserWidget.OnFocusReceived // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // Final|Native|Public|BlueprintCallable // @ game+0x5eb2718
	void OnMouseEnter(); // Function UMG.UserWidget.OnMouseEnter // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void AddToPlayerScreen(int32 ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5eaf1b0
};

// Class UMG.WidgetComponent
// Size: 0xc60 (Inherited: 0xa90)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0xa90(0x01)
	enum class EWidgetTimingPolicy *a874f2956a; // 0xa91(0x01)
	char pad_A92[0x6]; // 0xa92(0x06)
	struct UClass* WidgetClass; // 0xa98(0x08)
	struct FIntPoint DrawSize; // 0xaa0(0x08)
	bool *b96d0532df; // 0xaa8(0x01)
	bool *b722f23391; // 0xaa9(0x01)
	char pad_AAA[0x2]; // 0xaaa(0x02)
	float *a011dd4f72; // 0xaac(0x04)
	char pad_AB0[0x8]; // 0xab0(0x08)
	struct FIntPoint *ba486f4b76; // 0xab8(0x08)
	bool *8e1e9764d6; // 0xac0(0x01)
	char pad_AC1[0x3]; // 0xac1(0x03)
	struct FVector2D Pivot; // 0xac4(0x08)
	bool *d6058d5d01; // 0xacc(0x01)
	bool *03bff2291d; // 0xacd(0x01)
	char pad_ACE[0x2]; // 0xace(0x02)
	struct ULocalPlayer* *5b4533fedb; // 0xad0(0x08)
	struct FLinearColor BackgroundColor; // 0xad8(0x10)
	struct FLinearColor TintColorAndOpacity; // 0xae8(0x10)
	float OpacityFromTexture; // 0xaf8(0x04)
	enum class EWidgetBlendMode BlendMode; // 0xafc(0x01)
	bool bIsTwoSided; // 0xafd(0x01)
	bool *03adcd321a; // 0xafe(0x01)
	char pad_AFF[0x1]; // 0xaff(0x01)
	struct UUserWidget* Widget; // 0xb00(0x08)
	char pad_B08[0x20]; // 0xb08(0x20)
	struct UBodySetup* BodySetup; // 0xb28(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0xb30(0x08)
	struct UMaterialInterface* *0bc064785d; // 0xb38(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0xb40(0x08)
	struct UMaterialInterface* *8ee5b62788; // 0xb48(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0xb50(0x08)
	struct UMaterialInterface* *dec60e0757; // 0xb58(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0xb60(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0xb68(0x08)
	bool *4a82e5408f; // 0xb70(0x01)
	bool *f67f2b75b3; // 0xb71(0x01)
	char pad_B72[0x6]; // 0xb72(0x06)
	struct FName *e2e00ebdbf; // 0xb78(0x08)
	int32 *478de7691e; // 0xb80(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0xb84(0x01)
	char pad_B85[0x3]; // 0xb85(0x03)
	float CylinderArcAngle; // 0xb88(0x04)
	char pad_B8C[0x24]; // 0xb8c(0x24)
	struct FVector2D FixedScreenSize; // 0xbb0(0x08)
	enum class EWidgetForcedLOD ForcedLOD; // 0xbb8(0x01)
	bool bUseLOD; // 0xbb9(0x01)
	bool bAutoSetFixedScreenSize; // 0xbba(0x01)
	char pad_BBB[0x5]; // 0xbbb(0x05)
	struct TArray<float> LODScreenSizes; // 0xbc0(0x10)
	float LODUpdateInterval; // 0xbd0(0x04)
	float LODNextUpdateTime; // 0xbd4(0x04)
	float LODLastScreenSize; // 0xbd8(0x04)
	float LODScale; // 0xbdc(0x04)
	float *23fef54172; // 0xbe0(0x04)
	bool bShouldRenderWidget; // 0xbe4(0x01)
	bool bAlwaysVisibleWidget; // 0xbe5(0x01)
	char pad_BE6[0x2]; // 0xbe6(0x02)
	struct TMap<struct UPrimitiveComponent*, struct UMaterialInstanceDynamic*> *9ce1319e51; // 0xbe8(0x50)
	struct TArray<struct UMeshComponent*> *8cb6c83369; // 0xc38(0x10)
	struct UTextureRenderTarget2D* OverrideRenderTarget; // 0xc48(0x08)
	struct USceneComponent* *e9b34379df; // 0xc50(0x08)
	char pad_C58[0x8]; // 0xc58(0x08)

	void *edbbafabf9(); // Function UMG.WidgetComponent.*edbbafabf9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb4f98
	void *b83351bb8c(); // Function UMG.WidgetComponent.*b83351bb8c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb8f08
	void *39fa94b676(); // Function UMG.WidgetComponent.*39fa94b676 // Final|Native|Public|BlueprintCallable // @ game+0x5ebd468
	void *23bd6159a7(); // Function UMG.WidgetComponent.*23bd6159a7 // Final|Native|Public|BlueprintCallable // @ game+0x5eb8d3c
	float *50e1cb24ce(); // Function UMG.WidgetComponent.*50e1cb24ce // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb607c
	void *f9aa39b217(); // Function UMG.WidgetComponent.*f9aa39b217 // Final|Native|Public|BlueprintCallable // @ game+0x5ebe56c
	void *7ca0342776(); // Function UMG.WidgetComponent.*7ca0342776 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb58e4
	void *169d061441(); // Function UMG.WidgetComponent.*169d061441 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb65c0
	void *e55dd3886f(); // Function UMG.WidgetComponent.*e55dd3886f // Final|Native|Public|BlueprintCallable // @ game+0x5eb7cac
	void *0da30e166d(); // Function UMG.WidgetComponent.*0da30e166d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6064
	void *18be35add0(); // Function UMG.WidgetComponent.*18be35add0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb5748
	void *ea1e831d1b(); // Function UMG.WidgetComponent.*ea1e831d1b // Native|Public|BlueprintCallable // @ game+0x5ec0054
	void *fa94bd4dd0(); // Function UMG.WidgetComponent.*fa94bd4dd0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eba4f0
	void *f9a1fa8948(); // Function UMG.WidgetComponent.*f9a1fa8948 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb5590
	struct UMaterialInterface* *53c6c6ca30(); // Function UMG.WidgetComponent.*53c6c6ca30 // Final|Native|Public|BlueprintCallable // @ game+0x5eb38c8
	void *545800f849(); // Function UMG.WidgetComponent.*545800f849 // Final|Native|Public|BlueprintCallable // @ game+0x5ec0938
	void *0e3d589835(); // Function UMG.WidgetComponent.*0e3d589835 // Final|Native|Public|BlueprintCallable // @ game+0x5ec00e8
	void *815e97e709(); // Function UMG.WidgetComponent.*815e97e709 // Native|Public|BlueprintCallable // @ game+0x380838
	void *913ef79546(); // Function UMG.WidgetComponent.*913ef79546 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb65e8
	void *5dc4f9fc18(); // Function UMG.WidgetComponent.*5dc4f9fc18 // Final|Native|Public|BlueprintCallable // @ game+0x5eba7f4
	void *a721799963(); // Function UMG.WidgetComponent.*a721799963 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6bdc
	int32 *c1379fd852(); // Function UMG.WidgetComponent.*c1379fd852 // Final|Native|Public|BlueprintCallable // @ game+0x5eb3170
	void *7e8334c9c4(); // Function UMG.WidgetComponent.*7e8334c9c4 // Final|Native|Public|BlueprintCallable // @ game+0x5eba298
	void *a14c2659b8(); // Function UMG.WidgetComponent.*a14c2659b8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb7044
	void *65da1ee799(); // Function UMG.WidgetComponent.*65da1ee799 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb656c
	void *73b95e1918(); // Function UMG.WidgetComponent.*73b95e1918 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb9e7c
};

// Class UMG.*d76301fdac
// Size: 0x140 (Inherited: 0x128)
struct U*d76301fdac : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	void GetChildAt(); // Function UMG.*d76301fdac.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb53c8
	void GetChildIndex(); // Function UMG.*d76301fdac.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb5468
	void HasAnyChildren(); // Function UMG.*d76301fdac.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6eec
	struct UWidget* RemoveChild(); // Function UMG.*d76301fdac.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x5eb8274
	void AddChild(struct UWidget* Content); // Function UMG.*d76301fdac.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x5eb2910
	void ClearChildren(); // Function UMG.*d76301fdac.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x5eb35b0
	void GetChildrenCount(); // Function UMG.*d76301fdac.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb5508
	struct UWidget* HasChild(); // Function UMG.*d76301fdac.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6f08
	void RemoveChildAt(); // Function UMG.*d76301fdac.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x5eb8314
};

// Class UMG.*89c52a3074
// Size: 0x140 (Inherited: 0x140)
struct U*89c52a3074 : U*d76301fdac {

	void GetContent(); // Function UMG.*89c52a3074.GetContent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb5520
	struct UWidget* SetContent(); // Function UMG.*89c52a3074.SetContent // Final|Native|Public|BlueprintCallable // @ game+0x5eb9c7c
	void GetContentSlot(); // Function UMG.*89c52a3074.GetContentSlot // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb554c
};

// Class UMG.Button
// Size: 0x478 (Inherited: 0x140)
struct UButton : U*89c52a3074 {
	struct USlateWidgetStyleAsset* Style; // 0x140(0x08)
	struct F*9ec348ba05 WidgetStyle; // 0x148(0x2a8)
	struct FLinearColor ColorAndOpacity; // 0x3f0(0x10)
	struct FLinearColor BackgroundColor; // 0x400(0x10)
	enum class *9442f73b57 ClickMethod; // 0x410(0x01)
	enum class *9bc5484321 TouchMethod; // 0x411(0x01)
	bool IsFocusable; // 0x412(0x01)
	char pad_413[0x5]; // 0x413(0x05)
	struct FMulticastDelegate OnClicked; // 0x418(0x10)
	struct FMulticastDelegate OnPressed; // 0x428(0x10)
	struct FMulticastDelegate OnReleased; // 0x438(0x10)
	struct FMulticastDelegate OnHovered; // 0x448(0x10)
	struct FMulticastDelegate OnUnHovered; // 0x458(0x10)
	char pad_468[0x10]; // 0x468(0x10)

	void SetBackgroundColor(); // Function UMG.Button.SetBackgroundColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb8e70
	void SetColorAndOpacity(); // Function UMG.Button.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb9a38
	void IsPressed(); // Function UMG.Button.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb712c
	void SetStyle(); // Function UMG.Button.SetStyle // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5ebed38
};

// Class UMG.EditableText
// Size: 0x4b8 (Inherited: 0x128)
struct UEditableText : UWidget {
	struct FText Text; // 0x128(0x18)
	DelegateProperty TextDelegate; // 0x140(0x10)
	struct FText HintText; // 0x150(0x18)
	DelegateProperty HintTextDelegate; // 0x168(0x10)
	struct F*05b420497f WidgetStyle; // 0x178(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x3c0(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3c8(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3d0(0x08)
	struct USlateBrushAsset* CaretImage; // 0x3d8(0x08)
	struct FSlateFontInfo Font; // 0x3e0(0x68)
	struct FSlateColor ColorAndOpacity; // 0x448(0x28)
	bool IsReadOnly; // 0x470(0x01)
	bool *a766d690cf; // 0x471(0x01)
	char pad_472[0x2]; // 0x472(0x02)
	float *265faef0fb; // 0x474(0x04)
	bool *537033f3ef; // 0x478(0x01)
	bool *be43eebe3c; // 0x479(0x01)
	bool *9957ec1e31; // 0x47a(0x01)
	bool *46cbdda7bd; // 0x47b(0x01)
	bool *9ef1fb3dbe; // 0x47c(0x01)
	bool *449281c41b; // 0x47d(0x01)
	enum class EVirtualKeyboardType *e0dcf8efe7; // 0x47e(0x01)
	char pad_47F[0x1]; // 0x47f(0x01)
	struct F*01d8029047 ShapedTextOptions; // 0x480(0x08)
	struct FMulticastDelegate OnTextChanged; // 0x488(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x498(0x10)
	char pad_4A8[0x10]; // 0x4a8(0x10)

	void OnEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void OnEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void GetText(); // Function UMG.EditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6908
	void SetText(); // Function UMG.EditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5ebee08
	void SetIsPassword(); // Function UMG.EditableText.SetIsPassword // Final|Native|Public|BlueprintCallable // @ game+0x5ebbe80
	void SetHintText(); // Function UMG.EditableText.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x5ebaa28
	void SetIsReadOnly(); // Function UMG.EditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5ebbf3c
};

// Class UMG.DragDropOperation
// Size: 0x88 (Inherited: 0x28)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x28(0x10)
	struct UObject* Payload; // 0x38(0x08)
	struct UWidget* DefaultDragVisual; // 0x40(0x08)
	enum class EDragPivot Pivot; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector2D Offset; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct FMulticastDelegate OnDrop; // 0x58(0x10)
	struct FMulticastDelegate OnDragCancelled; // 0x68(0x10)
	struct FMulticastDelegate OnDragged; // 0x78(0x10)

	void Dragged(); // Function UMG.DragDropOperation.Dragged // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5eaf4d8
	void DragCancelled(); // Function UMG.DragDropOperation.DragCancelled // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5eaf3e4
	void Drop(); // Function UMG.DragDropOperation.Drop // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5eaf5cc
};

// Class UMG.*976b2ef95d
// Size: 0x150 (Inherited: 0x128)
struct U*976b2ef95d : UWidget {
	struct F*01d8029047 ShapedTextOptions; // 0x128(0x08)
	enum class ETextJustify Justification; // 0x130(0x01)
	bool AutoWrapText; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	float WrapTextAt; // 0x134(0x04)
	enum class *0dc3e7b6eb WrappingPolicy; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FMargin Margin; // 0x13c(0x10)
	float LineHeightPercentage; // 0x14c(0x04)
};

// Class UMG.TextBlock
// Size: 0x258 (Inherited: 0x150)
struct UTextBlock : U*976b2ef95d {
	struct FText Text; // 0x150(0x18)
	DelegateProperty TextDelegate; // 0x168(0x10)
	struct FSlateColor ColorAndOpacity; // 0x178(0x28)
	DelegateProperty ColorAndOpacityDelegate; // 0x1a0(0x10)
	struct FSlateFontInfo Font; // 0x1b0(0x68)
	struct FVector2D ShadowOffset; // 0x218(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x220(0x10)
	DelegateProperty ShadowColorAndOpacityDelegate; // 0x230(0x10)
	float MinDesiredWidth; // 0x240(0x04)
	bool bWrapWithInvalidationPanel; // 0x244(0x01)
	char pad_245[0x13]; // 0x245(0x13)

	void SetOpacity(); // Function UMG.TextBlock.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5ebd3d0
	void SetShadowColorAndOpacity(); // Function UMG.TextBlock.SetShadowColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ebe448
	void SetColorAndOpacity(); // Function UMG.TextBlock.SetColorAndOpacity // Final|Native|Public|BlueprintCallable // @ game+0xa8d60c
	void SetWrapTextAt(); // Function UMG.TextBlock.SetWrapTextAt // Final|Native|Public|BlueprintCallable // @ game+0x5ec0188
	void SetJustification(); // Function UMG.TextBlock.SetJustification // Final|Native|Public|BlueprintCallable // @ game+0x5ebc31c
	void SetText(); // Function UMG.TextBlock.SetText // Native|Public|BlueprintCallable // @ game+0x5ebf1d8
	void GetText(); // Function UMG.TextBlock.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6b68
	void SetShadowOffset(); // Function UMG.TextBlock.SetShadowOffset // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ebe4e0
	void SetFont(); // Function UMG.TextBlock.SetFont // Final|Native|Public|BlueprintCallable // @ game+0x5eba5d4
	void SetMinDesiredWidth(); // Function UMG.TextBlock.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5ebcde8
};

// Class UMG.ComboBoxString
// Size: 0xda8 (Inherited: 0x128)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> *71691c480f; // 0x128(0x10)
	struct FString *96abc24ba5; // 0x138(0x10)
	struct F*bd10a39d4e WidgetStyle; // 0x148(0x428)
	struct F*e7a296ec72 ItemStyle; // 0x570(0x718)
	struct FMargin ContentPadding; // 0xc88(0x10)
	float MaxListHeight; // 0xc98(0x04)
	bool HasDownArrow; // 0xc9c(0x01)
	bool EnableGamepadNavigationMode; // 0xc9d(0x01)
	char pad_C9E[0x2]; // 0xc9e(0x02)
	struct FSlateFontInfo Font; // 0xca0(0x68)
	struct FSlateColor ForegroundColor; // 0xd08(0x28)
	bool bIsFocusable; // 0xd30(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0xd31(0x01)
	char pad_D32[0x6]; // 0xd32(0x06)
	DelegateProperty OnGenerateWidgetEvent; // 0xd38(0x10)
	struct FMulticastDelegate OnSelectionChanged; // 0xd48(0x10)
	struct FMulticastDelegate OnOpening; // 0xd58(0x10)
	char pad_D68[0x40]; // 0xd68(0x40)

	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb4ac0
	void AddOption(); // Function UMG.ComboBoxString.AddOption // Final|Native|Public|BlueprintCallable // @ game+0x5eb30b0
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // Final|Native|Public|BlueprintCallable // @ game+0x5eb36f4
	void GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb67e4
	void GetOptionAtIndex(int32 Index); // Function UMG.ComboBoxString.GetOptionAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6414
	void RemoveOption(); // Function UMG.ComboBoxString.RemoveOption // Final|Native|Public|BlueprintCallable // @ game+0x5eb83b4
	struct FString OnSelectionChangedEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6554
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // Final|Native|Public|BlueprintCallable // @ game+0x5eb7c98
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // Final|Native|Public|BlueprintCallable // @ game+0x5eb36e0
	void SetSelectedOption(); // Function UMG.ComboBoxString.SetSelectedOption // Final|Native|Public|BlueprintCallable // @ game+0x5ebe34c
};

// Class UMG.WidgetSwitcher
// Size: 0x158 (Inherited: 0x140)
struct UWidgetSwitcher : U*d76301fdac {
	int32 ActiveWidgetIndex; // 0x140(0x04)
	char pad_144[0x14]; // 0x144(0x14)

	void SetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // Native|Public|BlueprintCallable // @ game+0xb83d4c
	void GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb4bb4
	void GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb63b0
	void SetActiveWidget(); // Function UMG.WidgetSwitcher.SetActiveWidget // Native|Public|BlueprintCallable // @ game+0x5eb8800
	void GetWidgetAtIndex(); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb53c8
};

// Class UMG.*6d6e07ab56
// Size: 0x48 (Inherited: 0x28)
struct U*6d6e07ab56 : U*528374bf77 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFail; // 0x38(0x10)

	struct FString *d70c1d6fed(); // Function UMG.*6d6e07ab56.*d70c1d6fed // Final|Native|Static|Public|BlueprintCallable // @ game+0x5eaf2e8
};

// Class UMG.*b31280011b
// Size: 0x3f0 (Inherited: 0xd0)
struct U*b31280011b : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve Translation[0x02]; // 0xd8(0xe0)
	struct FRichCurve Rotation; // 0x1b8(0x70)
	struct FRichCurve Scale[0x02]; // 0x228(0xe0)
	struct FRichCurve Shear[0x02]; // 0x308(0xe0)
	char pad_3E8[0x8]; // 0x3e8(0x08)
};

// Class UMG.*cec9be211a
// Size: 0xe0 (Inherited: 0xe0)
struct U*cec9be211a : UMovieScenePropertyTrack {
};

// Class UMG.*1f44cecc37
// Size: 0x2a0 (Inherited: 0xd0)
struct U*1f44cecc37 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *32f165c06f; // 0xd8(0x70)
	struct FRichCurve *d12a1e1b92; // 0x148(0x70)
	struct FRichCurve *ffce2e0669; // 0x1b8(0x70)
	struct FRichCurve *67fc667e6a; // 0x228(0x70)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class UMG.*e1e1d9cdc6
// Size: 0xe0 (Inherited: 0xe0)
struct U*e1e1d9cdc6 : UMovieScenePropertyTrack {
};

// Class UMG.*5ec3701d33
// Size: 0xe0 (Inherited: 0xd0)
struct U*5ec3701d33 : U*7909cc0548 {
	struct TArray<struct FName> *7b58647712; // 0xc8(0x10)
	struct FName TrackName; // 0xd8(0x08)
};

// Class UMG.*8dfec49837
// Size: 0x28 (Inherited: 0x28)
struct U*8dfec49837 : UInterface {
};

// Class UMG.*e74f5ed9b0
// Size: 0x48 (Inherited: 0x28)
struct U*e74f5ed9b0 : UObject {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*0257e3c7bd SourcePath; // 0x30(0x10)
	struct FName *02924b12b3; // 0x40(0x08)
};

// Class UMG.*821b38e7d2
// Size: 0x48 (Inherited: 0x48)
struct U*821b38e7d2 : U*e74f5ed9b0 {

	void GetValue(); // Function UMG.*821b38e7d2.GetValue // Final|Native|Public|Const // @ game+0x5eafd7c
};

// Class UMG.*70db9ed234
// Size: 0x50 (Inherited: 0x48)
struct U*70db9ed234 : U*e74f5ed9b0 {
	char pad_48[0x8]; // 0x48(0x08)

	void GetValue(); // Function UMG.*70db9ed234.GetValue // Final|Native|Public|Const // @ game+0x5eafda0
};

// Class UMG.*8249e2063a
// Size: 0x50 (Inherited: 0x48)
struct U*8249e2063a : U*e74f5ed9b0 {
	char pad_48[0x8]; // 0x48(0x08)

	void GetValue(); // Function UMG.*8249e2063a.GetValue // Final|Native|Public|Const // @ game+0x5eafe2c
};

// Class UMG.*ec82f90d9e
// Size: 0x50 (Inherited: 0x48)
struct U*ec82f90d9e : U*e74f5ed9b0 {
	char pad_48[0x8]; // 0x48(0x08)

	void GetLinearValue(); // Function UMG.*ec82f90d9e.GetLinearValue // Final|Native|Public|HasDefaults|Const // @ game+0x5eafad4
	void GetSlateValue(); // Function UMG.*ec82f90d9e.GetSlateValue // Final|Native|Public|Const // @ game+0x5eafc7c
};

// Class UMG.*16da5812db
// Size: 0x48 (Inherited: 0x48)
struct U*16da5812db : U*e74f5ed9b0 {

	void GetValue(); // Function UMG.*16da5812db.GetValue // Final|Native|Public|Const // @ game+0x5eafe50
};

// Class UMG.*943c1130a9
// Size: 0x48 (Inherited: 0x48)
struct U*943c1130a9 : U*e74f5ed9b0 {

	void GetValue(); // Function UMG.*943c1130a9.GetValue // Final|Native|Public|Const // @ game+0x5eafe78
};

// Class UMG.*5103bcf183
// Size: 0x48 (Inherited: 0x48)
struct U*5103bcf183 : U*e74f5ed9b0 {

	void GetValue(); // Function UMG.*5103bcf183.GetValue // Final|Native|Public|Const // @ game+0x5eafe9c
};

// Class UMG.*10b1d97b0d
// Size: 0x50 (Inherited: 0x48)
struct U*10b1d97b0d : U*e74f5ed9b0 {
	char pad_48[0x8]; // 0x48(0x08)

	void GetStringValue(); // Function UMG.*10b1d97b0d.GetStringValue // Final|Native|Public|Const // @ game+0x5eafcf4
	void GetTextValue(); // Function UMG.*10b1d97b0d.GetTextValue // Final|Native|Public|Const // @ game+0xa57974
};

// Class UMG.*0b442c28a8
// Size: 0x48 (Inherited: 0x48)
struct U*0b442c28a8 : U*e74f5ed9b0 {

	void GetValue(); // Function UMG.*0b442c28a8.GetValue // Final|Native|Public|Const // @ game+0x5eafec0
};

// Class UMG.*6805cd9815
// Size: 0x48 (Inherited: 0x48)
struct U*6805cd9815 : U*e74f5ed9b0 {

	void GetValue(); // Function UMG.*6805cd9815.GetValue // Final|Native|Public|Const // @ game+0x5eafee4
};

// Class UMG.*e926dbf5c9
// Size: 0x30 (Inherited: 0x28)
struct U*e926dbf5c9 : UObject {
	bool bReveal; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32 RevealedIndex; // 0x2c(0x04)
};

// Class UMG.*d8080ba2be
// Size: 0x28 (Inherited: 0x28)
struct U*d8080ba2be : UBlueprintFunctionLibrary {

	void *6c95a21a80(struct FGeometry Geometry); // Function UMG.*d8080ba2be.*6c95a21a80 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5eaee8c
	struct FVector2D *ca60eb2744(); // Function UMG.*d8080ba2be.*ca60eb2744 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5eb09c8
	struct FVector2D *778499e445(); // Function UMG.*d8080ba2be.*778499e445 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5eb0634
	void *043b3d163d(struct FGeometry Param1); // Function UMG.*d8080ba2be.*043b3d163d // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x5eb140c
	struct FVector2D *2ee3fab50d(); // Function UMG.*d8080ba2be.*2ee3fab50d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5eb0b20
	void *37c0216590(struct FVector2D Param1); // Function UMG.*d8080ba2be.*37c0216590 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x5eb11bc
	void *a89a8692da(struct UObject* Param0); // Function UMG.*d8080ba2be.*a89a8692da // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x5eb12e4
	struct FGeometry *95737f9cd7(); // Function UMG.*d8080ba2be.*95737f9cd7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5eafb04
	void *1392cc8233(struct FSlateBrush A); // Function UMG.*d8080ba2be.*1392cc8233 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eaf6c0
	struct FVector2D *d1c25c8168(struct UObject* WorldContextObject); // Function UMG.*d8080ba2be.*d1c25c8168 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5eaf02c
};

// Class UMG.*6161395bf8
// Size: 0x430 (Inherited: 0x28)
struct U*6161395bf8 : UObject {
	struct UTexture2D* *2048814f5e; // 0x28(0x08)
	char pad_30[0x400]; // 0x30(0x400)
};

// Class UMG.*47b233ee53
// Size: 0x60 (Inherited: 0x28)
struct U*47b233ee53 : UObject {
	struct TArray<struct F*2baae106d3> *86817cd4a3; // 0x28(0x10)
	struct TArray<uint32> *6914e7dc07; // 0x38(0x10)
	struct UMaterialInterface* Material; // 0x48(0x08)
	struct FVector2D *d8c608a0aa; // 0x50(0x08)
	struct FVector2D *a35ee202c8; // 0x58(0x08)
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x428 (Inherited: 0x3b8)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x3b8(0x08)
	bool *c2dcb77636; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct TArray<struct F*b28a91287c> Bindings; // 0x3c8(0x10)
	struct TArray<struct U*3335e92189*> Animations; // 0x3d8(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3e8(0x10)
	bool *209a2d6d29; // 0x3f8(0x01)
	bool *47bd1be933; // 0x3f9(0x01)
	bool *846ea20853; // 0x3fa(0x01)
	char pad_3FB[0x5]; // 0x3fb(0x05)
	struct UUserWidget* *9cb6685090; // 0x400(0x20)
	struct UUserWidget* Template; // 0x420(0x08)
};

// Class UMG.*89f5a4ae38
// Size: 0x6a0 (Inherited: 0x28)
struct U*89f5a4ae38 : UObject {
	char pad_28[0x348]; // 0x28(0x348)
	struct U*3335e92189* Animation; // 0x370(0x08)
	char pad_378[0x328]; // 0x378(0x328)
};

// Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual {
	struct U*d76301fdac* Parent; // 0x28(0x08)
	struct UWidget* Content; // 0x30(0x08)
};

// Class UMG.*5780fe346e
// Size: 0x60 (Inherited: 0x38)
struct U*5780fe346e : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*5780fe346e.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebf790
	void SetHorizontalAlignment(); // Function UMG.*5780fe346e.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebaca4
	void SetPadding(); // Function UMG.*5780fe346e.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebd5a8
};

// Class UMG.*587f12c230
// Size: 0x60 (Inherited: 0x38)
struct U*587f12c230 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*587f12c230.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebf8b8
	void SetHorizontalAlignment(); // Function UMG.*587f12c230.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebadcc
	void SetPadding(); // Function UMG.*587f12c230.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebd6e8
};

// Class UMG.*71e35efa3f
// Size: 0x60 (Inherited: 0x38)
struct U*71e35efa3f : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*71e35efa3f.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebf94c
	void SetHorizontalAlignment(); // Function UMG.*71e35efa3f.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebae60
	void SetPadding(); // Function UMG.*71e35efa3f.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebd788
};

// Class UMG.*8d608b1ea0
// Size: 0x70 (Inherited: 0x38)
struct U*8d608b1ea0 : UPanelSlot {
	struct F*a477d9422f LayoutData; // 0x38(0x28)
	bool bAutoSize; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32 ZOrder; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)

	void GetLayout(); // Function UMG.*8d608b1ea0.GetLayout // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6038
	void SetOffsets(); // Function UMG.*8d608b1ea0.SetOffsets // Final|Native|Public|BlueprintCallable // @ game+0x761148
	void SetZOrder(); // Function UMG.*8d608b1ea0.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x5ec0220
	void *b85a1188e8(); // Function UMG.*8d608b1ea0.*b85a1188e8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb4fb0
	void *87fd3848c3(); // Function UMG.*8d608b1ea0.*87fd3848c3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb63d4
	void SetAnchors(); // Function UMG.*8d608b1ea0.SetAnchors // Final|Native|Public|BlueprintCallable // @ game+0x5eb89bc
	void SetAutoSize(); // Function UMG.*8d608b1ea0.SetAutoSize // Final|Native|Public|BlueprintCallable // @ game+0x5eb8ddc
	void SetMinimum(); // Function UMG.*8d608b1ea0.SetMinimum // Final|Native|Public|HasDefaults // @ game+0x5ebcfb0
	void *d4e579e962(); // Function UMG.*8d608b1ea0.*d4e579e962 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6e24
	void GetAlignment(); // Function UMG.*8d608b1ea0.GetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb4bd8
	void SetAlignment(); // Function UMG.*8d608b1ea0.SetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb8894
	void SetMaximum(); // Function UMG.*8d608b1ea0.SetMaximum // Final|Native|Public|HasDefaults // @ game+0x5ebcafc
	void SetPosition(); // Function UMG.*8d608b1ea0.SetPosition // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ebde60
	void GetPosition(); // Function UMG.*8d608b1ea0.GetPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6590
	void SetLayout(); // Function UMG.*8d608b1ea0.SetLayout // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5ebc5cc
	void GetSize(); // Function UMG.*8d608b1ea0.GetSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb68b8
	void SetSize(); // Function UMG.*8d608b1ea0.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ebe5fc
	void *129c787cc1(); // Function UMG.*8d608b1ea0.*129c787cc1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb4f68
};

// Class UMG.GridSlot
// Size: 0x70 (Inherited: 0x38)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32 row; // 0x4c(0x04)
	int32 RowSpan; // 0x50(0x04)
	int32 column; // 0x54(0x04)
	int32 ColumnSpan; // 0x58(0x04)
	int32 Layer; // 0x5c(0x04)
	struct FVector2D Nudge; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)

	void SetRow(); // Function UMG.GridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x5ebdf8c
	void SetPadding(); // Function UMG.GridSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0xa3cc8c
	void SetColumnSpan(); // Function UMG.GridSlot.SetColumnSpan // Final|Native|Public|BlueprintCallable // @ game+0x5eb9bec
	void SetColumn(); // Function UMG.GridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x5eb9ad0
	void SetVerticalAlignment(); // Function UMG.GridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebf9e0
	void SetHorizontalAlignment(); // Function UMG.GridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebaef4
	void SetLayer(); // Function UMG.GridSlot.SetLayer // Final|Native|Public|BlueprintCallable // @ game+0x5ebc4a4
	void SetRowSpan(); // Function UMG.GridSlot.SetRowSpan // Final|Native|Public|BlueprintCallable // @ game+0x5ebe0a8
};

// Class UMG.*ac77a29870
// Size: 0x60 (Inherited: 0x38)
struct U*ac77a29870 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	struct FSlateChildSize Size; // 0x48(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetHorizontalAlignment(); // Function UMG.*ac77a29870.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebaf84
	void SetSize(); // Function UMG.*ac77a29870.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x5ebe688
	void SetVerticalAlignment(); // Function UMG.*ac77a29870.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebfa70
	void SetPadding(); // Function UMG.*ac77a29870.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebd828
};

// Class UMG.*d668aec7b0
// Size: 0x58 (Inherited: 0x38)
struct U*d668aec7b0 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32 ZOrder; // 0x4c(0x04)
	char pad_50[0x8]; // 0x50(0x08)

	void SetVerticalAlignment(); // Function UMG.*d668aec7b0.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebfb00
	void SetHorizontalAlignment(); // Function UMG.*d668aec7b0.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebb014
	void SetPadding(); // Function UMG.*d668aec7b0.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebd8c8
	void SetZOrder(); // Function UMG.*d668aec7b0.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x5ec02b0
	void *d4e579e962(); // Function UMG.*d668aec7b0.*d4e579e962 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6e48
};

// Class UMG.*a519b14e63
// Size: 0x60 (Inherited: 0x38)
struct U*a519b14e63 : UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FMargin SafeAreaScale; // 0x3c(0x10)
	enum class EHorizontalAlignment HAlign; // 0x4c(0x01)
	enum class EVerticalAlignment VAlign; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FMargin Padding; // 0x50(0x10)
};

// Class UMG.*9f328f65dc
// Size: 0x60 (Inherited: 0x38)
struct U*9f328f65dc : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*9f328f65dc.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebfb90
	void SetHorizontalAlignment(); // Function UMG.*9f328f65dc.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebb0a4
	void SetPadding(); // Function UMG.*9f328f65dc.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebd968
};

// Class UMG.*6493b49e09
// Size: 0x58 (Inherited: 0x38)
struct U*6493b49e09 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	char pad_49[0xf]; // 0x49(0x0f)

	void SetHorizontalAlignment(); // Function UMG.*6493b49e09.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebb138
	void SetPadding(); // Function UMG.*6493b49e09.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebd9fc
};

// Class UMG.*7822369cdf
// Size: 0x60 (Inherited: 0x38)
struct U*7822369cdf : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*7822369cdf.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebfc24
	void SetHorizontalAlignment(); // Function UMG.*7822369cdf.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebb1c8
	void SetPadding(); // Function UMG.*7822369cdf.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebda9c
};

// Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32 row; // 0x3c(0x04)
	int32 column; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)

	void SetHorizontalAlignment(); // Function UMG.UniformGridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebb25c
	void SetColumn(); // Function UMG.UniformGridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x5eb9b60
	void SetVerticalAlignment(); // Function UMG.UniformGridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebfcb8
	void SetRow(); // Function UMG.UniformGridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x5ebe01c
};

// Class UMG.*d2f00ac7d1
// Size: 0x60 (Inherited: 0x38)
struct U*d2f00ac7d1 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	struct FSlateChildSize Size; // 0x48(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetHorizontalAlignment(); // Function UMG.*d2f00ac7d1.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebaf84
	void SetSize(); // Function UMG.*d2f00ac7d1.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x5ebe7c8
	void SetVerticalAlignment(); // Function UMG.*d2f00ac7d1.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebfa70
	void SetPadding(); // Function UMG.*d2f00ac7d1.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebd828
};

// Class UMG.*39ae413baf
// Size: 0x58 (Inherited: 0x38)
struct U*39ae413baf : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0xe]; // 0x4a(0x0e)

	void SetVerticalAlignment(); // Function UMG.*39ae413baf.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebfb00
	void SetHorizontalAlignment(); // Function UMG.*39ae413baf.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebb014
	void SetPadding(); // Function UMG.*39ae413baf.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebd9fc
};

// Class UMG.*63421cc4e8
// Size: 0x160 (Inherited: 0x140)
struct U*63421cc4e8 : U*89c52a3074 {
	bool bDoubleClickTogglesFullscreen; // 0x140(0x01)
	char pad_141[0x1f]; // 0x141(0x1f)

	void SetVerticalAlignment(); // Function UMG.*63421cc4e8.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebfd48
	void SetHorizontalAlignment(); // Function UMG.*63421cc4e8.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebb2ec
	void SetPadding(); // Function UMG.*63421cc4e8.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebdb3c
};

// Class UMG.*313fd14115
// Size: 0x60 (Inherited: 0x38)
struct U*313fd14115 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(); // Function UMG.*313fd14115.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebfdd8
	void SetHorizontalAlignment(); // Function UMG.*313fd14115.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebb37c
	void SetPadding(); // Function UMG.*313fd14115.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebdbdc
};

// Class UMG.*d6bd557e0d
// Size: 0x60 (Inherited: 0x38)
struct U*d6bd557e0d : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float FillSpanWhenLessThan; // 0x4c(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetFillSpanWhenLessThan(); // Function UMG.*d6bd557e0d.SetFillSpanWhenLessThan // Final|Native|Public|BlueprintCallable // @ game+0x5eba458
	void SetFillEmptySpace(); // Function UMG.*d6bd557e0d.SetFillEmptySpace // Final|Native|Public|BlueprintCallable // @ game+0x5eba3c4
	void SetPadding(); // Function UMG.*d6bd557e0d.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebdc7c
	void SetHorizontalAlignment(); // Function UMG.*d6bd557e0d.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebb410
	void SetVerticalAlignment(); // Function UMG.*d6bd557e0d.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebfe6c
};

// Class UMG.CircularThrobber
// Size: 0x1e8 (Inherited: 0x128)
struct UCircularThrobber : UWidget {
	int32 NumberOfPieces; // 0x128(0x04)
	float Period; // 0x12c(0x04)
	float Radius; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct USlateBrushAsset* PieceImage; // 0x138(0x08)
	struct FSlateBrush Image; // 0x140(0x90)
	bool bEnableRadius; // 0x1d0(0x01)
	char pad_1D1[0x17]; // 0x1d1(0x17)

	void SetRadius(); // Function UMG.CircularThrobber.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x5ebdeec
	void SetPeriod(); // Function UMG.CircularThrobber.SetPeriod // Final|Native|Public|BlueprintCallable // @ game+0x5ebddb4
	void SetNumberOfPieces(); // Function UMG.CircularThrobber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x5ebd1e0
};

// Class UMG.ComboBox
// Size: 0x160 (Inherited: 0x128)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x128(0x10)
	DelegateProperty OnGenerateWidgetEvent; // 0x138(0x10)
	bool bIsFocusable; // 0x148(0x01)
	char pad_149[0x17]; // 0x149(0x17)
};

// Class UMG.EditableTextBox
// Size: 0xae0 (Inherited: 0x128)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x128(0x18)
	DelegateProperty TextDelegate; // 0x140(0x10)
	struct F*fcc5c4062b WidgetStyle; // 0x150(0x870)
	struct USlateWidgetStyleAsset* Style; // 0x9c0(0x08)
	struct FText HintText; // 0x9c8(0x18)
	DelegateProperty HintTextDelegate; // 0x9e0(0x10)
	struct FSlateFontInfo Font; // 0x9f0(0x68)
	struct FLinearColor ForegroundColor; // 0xa58(0x10)
	struct FLinearColor BackgroundColor; // 0xa68(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xa78(0x10)
	bool IsReadOnly; // 0xa88(0x01)
	bool IsPassword; // 0xa89(0x01)
	char pad_A8A[0x2]; // 0xa8a(0x02)
	float MinimumDesiredWidth; // 0xa8c(0x04)
	struct FMargin Padding; // 0xa90(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xaa0(0x01)
	bool SelectAllTextWhenFocused; // 0xaa1(0x01)
	bool RevertTextOnEscape; // 0xaa2(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xaa3(0x01)
	bool SelectAllTextOnCommit; // 0xaa4(0x01)
	bool *449281c41b; // 0xaa5(0x01)
	enum class EVirtualKeyboardType *e0dcf8efe7; // 0xaa6(0x01)
	char pad_AA7[0x1]; // 0xaa7(0x01)
	struct F*01d8029047 ShapedTextOptions; // 0xaa8(0x08)
	struct FMulticastDelegate OnTextChanged; // 0xab0(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xac0(0x10)
	char pad_AD0[0x10]; // 0xad0(0x10)

	struct FText OnEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void GetText(); // Function UMG.EditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb697c
	void ClearError(); // Function UMG.EditableTextBox.ClearError // Final|Native|Public|BlueprintCallable // @ game+0x5eb35c4
	void SetIsReadOnly(); // Function UMG.EditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5ebbfd0
	void SetError(); // Function UMG.EditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x5eb9fd0
	void HasError(); // Function UMG.EditableTextBox.HasError // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6fa8
	void OnEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void SetText(); // Function UMG.EditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5ebeefc
	void SetHintText(); // Function UMG.EditableTextBox.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x5ebab1c
};

// Class UMG.ExpandableArea
// Size: 0x370 (Inherited: 0x128)
struct UExpandableArea : UWidget {
	char pad_128[0x8]; // 0x128(0x08)
	struct F*83d892dd18 Style; // 0x130(0x130)
	struct FSlateBrush BorderBrush; // 0x260(0x90)
	struct FSlateColor BorderColor; // 0x2f0(0x28)
	bool bIsExpanded; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float MaxHeight; // 0x31c(0x04)
	struct FMargin HeaderPadding; // 0x320(0x10)
	struct FMargin AreaPadding; // 0x330(0x10)
	struct FMulticastDelegate OnExpansionChanged; // 0x340(0x10)
	struct UWidget* *fd47966c05; // 0x350(0x08)
	struct UWidget* *242b84100b; // 0x358(0x08)
	char pad_360[0x10]; // 0x360(0x10)

	void SetIsExpanded_Animated(); // Function UMG.ExpandableArea.SetIsExpanded_Animated // Final|Native|Public|BlueprintCallable // @ game+0x5ebbd50
	void SetIsExpanded(); // Function UMG.ExpandableArea.SetIsExpanded // Final|Native|Public|BlueprintCallable // @ game+0x5ebbcb4
	void GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb5e34
};

// Class UMG.Image
// Size: 0x210 (Inherited: 0x128)
struct UImage : UWidget {
	struct USlateBrushAsset* Image; // 0x128(0x08)
	struct FSlateBrush Brush; // 0x130(0x90)
	DelegateProperty BrushDelegate; // 0x1c0(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1d0(0x10)
	DelegateProperty ColorAndOpacityDelegate; // 0x1e0(0x10)
	DelegateProperty OnMouseButtonDownEvent; // 0x1f0(0x10)
	char pad_200[0x10]; // 0x200(0x10)

	void SetOpacity(); // Function UMG.Image.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5ebd338
	void SetBrush(); // Function UMG.Image.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5eb9218
	void SetBrushSize(); // Function UMG.Image.SetBrushSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb9878
	void SetBrushFromMaterial(); // Function UMG.Image.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5eb94c4
	struct U*ef97e2e879* SetBrushFromTextureDynamic(); // Function UMG.Image.SetBrushFromTextureDynamic // Final|Native|Public|BlueprintCallable // @ game+0x5eb95e4
	void GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5eb55e4
	void SetColorAndOpacity(); // Function UMG.Image.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x41b0b4
	void SetBrushFromAsset(); // Function UMG.Image.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x5eb93a4
	struct UTexture2D* SetBrushFromTexture(); // Function UMG.Image.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0xb81214
};

// Class UMG.InputKeySelector
// Size: 0x228 (Inherited: 0x128)
struct UInputKeySelector : UWidget {
	struct F*b77ea41268 SelectedKey; // 0x128(0x20)
	struct FSlateFontInfo Font; // 0x148(0x68)
	struct FMargin Margin; // 0x1b0(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1c0(0x10)
	struct FText KeySelectionText; // 0x1d0(0x18)
	bool bAllowModifierKeys; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct FMulticastDelegate OnKeySelected; // 0x1f0(0x10)
	struct FMulticastDelegate OnIsSelectingKeyChanged; // 0x200(0x10)
	char pad_210[0x18]; // 0x210(0x18)

	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void OnKeySelected__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void SetKeySelectionText(); // Function UMG.InputKeySelector.SetKeySelectionText // Final|Native|Public|BlueprintCallable // @ game+0x5ebc3b0
	void SetAllowModifierKeys(); // Function UMG.InputKeySelector.SetAllowModifierKeys // Final|Native|Public|BlueprintCallable // @ game+0x5eb8920
	void GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb5e78
	void SetSelectedKey(); // Function UMG.InputKeySelector.SetSelectedKey // Final|Native|Public|BlueprintCallable // @ game+0x5ebe260
};

// Class UMG.NativeWidgetHost
// Size: 0x138 (Inherited: 0x128)
struct UNativeWidgetHost : UWidget {
	char pad_128[0x10]; // 0x128(0x10)
};

// Class UMG.CanvasPanel
// Size: 0x150 (Inherited: 0x140)
struct UCanvasPanel : U*d76301fdac {
	char pad_140[0x10]; // 0x140(0x10)

	void AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // Final|Native|Public|BlueprintCallable // @ game+0x5eb29b0
};

// Class UMG.BackgroundBlur
// Size: 0x200 (Inherited: 0x140)
struct UBackgroundBlur : U*89c52a3074 {
	struct FMargin Padding; // 0x140(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x150(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x151(0x01)
	bool bApplyAlphaToBlur; // 0x152(0x01)
	char pad_153[0x1]; // 0x153(0x01)
	float BlurStrength; // 0x154(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	int32 BlurRadius; // 0x15c(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x160(0x90)
	char pad_1F0[0x10]; // 0x1f0(0x10)

	void SetHorizontalAlignment(); // Function UMG.BackgroundBlur.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebac10
	void SetPadding(); // Function UMG.BackgroundBlur.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebd508
	void SetVerticalAlignment(); // Function UMG.BackgroundBlur.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebf6fc
	void SetApplyAlphaToBlur(); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // Final|Native|Public|BlueprintCallable // @ game+0x5eb8ca8
	void SetBlurRadius(); // Function UMG.BackgroundBlur.SetBlurRadius // Final|Native|Public|BlueprintCallable // @ game+0x5eb8ff0
	void SetBlurStrength(); // Function UMG.BackgroundBlur.SetBlurStrength // Native|Public|BlueprintCallable // @ game+0x5eb9080
	void SetLowQualityFallbackBrush(); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5ebc708
};

// Class UMG.Border
// Size: 0x2a0 (Inherited: 0x140)
struct UBorder : U*89c52a3074 {
	struct FLinearColor ContentColorAndOpacity; // 0x140(0x10)
	DelegateProperty ContentColorAndOpacityDelegate; // 0x150(0x10)
	struct FMargin Padding; // 0x160(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x170(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x171(0x01)
	char pad_172[0x6]; // 0x172(0x06)
	struct FSlateBrush Background; // 0x178(0x90)
	DelegateProperty BackgroundDelegate; // 0x208(0x10)
	struct FLinearColor BrushColor; // 0x218(0x10)
	DelegateProperty BrushColorDelegate; // 0x228(0x10)
	struct FVector2D DesiredSizeScale; // 0x238(0x08)
	bool bShowEffectWhenDisabled; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	DelegateProperty OnMouseButtonDownEvent; // 0x248(0x10)
	DelegateProperty OnMouseButtonUpEvent; // 0x258(0x10)
	DelegateProperty OnMouseMoveEvent; // 0x268(0x10)
	DelegateProperty OnMouseDoubleClickEvent; // 0x278(0x10)
	char pad_288[0x10]; // 0x288(0x10)
	struct USlateBrushAsset* Brush; // 0x298(0x08)

	void SetPadding(); // Function UMG.Border.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebd648
	void SetHorizontalAlignment(); // Function UMG.Border.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebad38
	void SetBrushFromAsset(); // Function UMG.Border.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x5eb9314
	void SetBrushFromMaterial(); // Function UMG.Border.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5eb9434
	void GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5eb55c0
	void SetBrush(); // Function UMG.Border.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5eb911c
	void SetBrushColor(); // Function UMG.Border.SetBrushColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xbac38c
	void SetVerticalAlignment(); // Function UMG.Border.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ebf824
	void SetDesiredSizeScale(); // Function UMG.Border.SetDesiredSizeScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eb9df0
	void SetBrushFromTexture(); // Function UMG.Border.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0x5eb9554
	void SetContentColorAndOpacity(); // Function UMG.Border.SetContentColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xaeaed4
};

// Class UMG.CheckBox
// Size: 0x7f0 (Inherited: 0x140)
struct UCheckBox : U*89c52a3074 {
	enum class ECheckBoxState CheckedState; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	DelegateProperty CheckedStateDelegate; // 0x148(0x10)
	struct F*1a5b392735 WidgetStyle; // 0x158(0x5e0)
	struct USlateWidgetStyleAsset* Style; // 0x738(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x740(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x748(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x750(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x758(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x760(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x768(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x770(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x778(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x780(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x788(0x01)
	char pad_789[0x3]; // 0x789(0x03)
	struct FMargin Padding; // 0x78c(0x10)
	char pad_79C[0x4]; // 0x79c(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x7a0(0x28)
	bool IsFocusable; // 0x7c8(0x01)
	char pad_7C9[0x7]; // 0x7c9(0x07)
	struct FMulticastDelegate OnCheckStateChanged; // 0x7d0(0x10)
	char pad_7E0[0x10]; // 0x7e0(0x10)

	void GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb53a4
	void IsChecked(); // Function UMG.CheckBox.IsChecked // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb7068
	void IsPressed(); // Function UMG.CheckBox.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb7150
	void SetIsChecked(); // Function UMG.CheckBox.SetIsChecked // Final|Native|Public|BlueprintCallable // @ game+0x5ebbc20
	void SetCheckedState(); // Function UMG.CheckBox.SetCheckedState // Final|Native|Public|BlueprintCallable // @ game+0x5eb99a8
};

// Class UMG.InvalidationBox
// Size: 0x158 (Inherited: 0x140)
struct UInvalidationBox : U*89c52a3074 {
	bool *0dbb97d1d9; // 0x140(0x01)
	bool CacheRelativeTransforms; // 0x141(0x01)
	char pad_142[0x16]; // 0x142(0x16)

	void SetCanCache(); // Function UMG.InvalidationBox.SetCanCache // Final|Native|Public|BlueprintCallable // @ game+0x5eb9914
	void GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb5384
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // Final|Native|Public|BlueprintCallable // @ game+0x5eb7030
};

// Class UMG.MenuAnchor
// Size: 0x180 (Inherited: 0x140)
struct UMenuAnchor : U*89c52a3074 {
	struct UClass* MenuClass; // 0x140(0x08)
	DelegateProperty OnGetMenuContentEvent; // 0x148(0x10)
	enum class *d547f33b80 Placement; // 0x158(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x159(0x01)
	bool UseApplicationMenuStack; // 0x15a(0x01)
	char pad_15B[0x5]; // 0x15b(0x05)
	struct FMulticastDelegate OnMenuOpenChanged; // 0x160(0x10)
	char pad_170[0x10]; // 0x170(0x10)

	void Open(); // Function UMG.MenuAnchor.Open // Final|Native|Public|BlueprintCallable // @ game+0x5eb7784
	void ToggleOpen(); // Function UMG.MenuAnchor.ToggleOpen // Final|Native|Public|BlueprintCallable // @ game+0x5ec0774
	void Close(); // Function UMG.MenuAnchor.Close // Final|Native|Public|BlueprintCallable // @ game+0x5eb3894
	void IsOpen(); // Function UMG.MenuAnchor.IsOpen // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb70b0
	void ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ec0340
	void GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb61d4
	void HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6ff8
};

// Class UMG.NamedSlot
// Size: 0x150 (Inherited: 0x140)
struct UNamedSlot : U*89c52a3074 {
	char pad_140[0x10]; // 0x140(0x10)
};

// Class UMG.RetainerBox
// Size: 0x170 (Inherited: 0x140)
struct URetainerBox : U*89c52a3074 {
	bool *b4fa371c13; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	int32 phase; // 0x144(0x04)
	int32 *3af3024d2e; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x150(0x08)
	struct FName TextureParameter; // 0x158(0x08)
	char pad_160[0x10]; // 0x160(0x10)

	void SetEffectMaterial(); // Function UMG.RetainerBox.SetEffectMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5eb9f40
	void GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb5700
	void SetTextureParameter(); // Function UMG.RetainerBox.SetTextureParameter // Final|Native|Public|BlueprintCallable // @ game+0x5ebf2d0
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // Final|Native|Public|BlueprintCallable // @ game+0x5eb84ec
};

// Class UMG.SafeZone
// Size: 0x158 (Inherited: 0x140)
struct USafeZone : U*89c52a3074 {
	bool PadLeft; // 0x140(0x01)
	bool PadRight; // 0x141(0x01)
	bool PadTop; // 0x142(0x01)
	bool PadBottom; // 0x143(0x01)
	char pad_144[0x14]; // 0x144(0x14)
};

// Class UMG.ScaleBox
// Size: 0x160 (Inherited: 0x140)
struct UScaleBox : U*89c52a3074 {
	enum class EStretch Stretch; // 0x140(0x01)
	enum class EStretchDirection StretchDirection; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	float UserSpecifiedScale; // 0x144(0x04)
	bool IgnoreInheritedScale; // 0x148(0x01)
	char pad_149[0x17]; // 0x149(0x17)

	void SetUserSpecifiedScale(); // Function UMG.ScaleBox.SetUserSpecifiedScale // Final|Native|Public|BlueprintCallable // @ game+0x5ebf534
	void SetStretchDirection(); // Function UMG.ScaleBox.SetStretchDirection // Final|Native|Public|BlueprintCallable // @ game+0x5ebeca0
	void SetIgnoreInheritedScale(); // Function UMG.ScaleBox.SetIgnoreInheritedScale // Final|Native|Public|BlueprintCallable // @ game+0x5ebb4a0
	void SetStretch(); // Function UMG.ScaleBox.SetStretch // Final|Native|Public|BlueprintCallable // @ game+0x5ebec08
};

// Class UMG.SizeBox
// Size: 0x170 (Inherited: 0x140)
struct USizeBox : U*89c52a3074 {
	char bOverride_WidthOverride : 1; // 0x140(0x01)
	char bOverride_HeightOverride : 1; // 0x140(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x140(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x140(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x140(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x140(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x140(0x01)
	char pad_140_7 : 1; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	float WidthOverride; // 0x144(0x04)
	float HeightOverride; // 0x148(0x04)
	float MinDesiredWidth; // 0x14c(0x04)
	float MinDesiredHeight; // 0x150(0x04)
	float MaxDesiredWidth; // 0x154(0x04)
	float MaxDesiredHeight; // 0x158(0x04)
	float MaxAspectRatio; // 0x15c(0x04)
	char pad_160[0x10]; // 0x160(0x10)

	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x5eb3880
	void SetMinDesiredWidth(); // Function UMG.SizeBox.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5ebcd50
	void SetWidthOverride(); // Function UMG.SizeBox.SetWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0xb5d8c0
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5eb3690
	void SetMaxAspectRatio(); // Function UMG.SizeBox.SetMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x5ebc804
	void SetMinDesiredHeight(); // Function UMG.SizeBox.SetMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5ebcb88
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5eb3654
	void SetMaxDesiredHeight(); // Function UMG.SizeBox.SetMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5ebc89c
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5eb3640
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x5eb3618
	void SetMaxDesiredWidth(); // Function UMG.SizeBox.SetMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5ebc934
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5eb36a4
	void SetHeightOverride(); // Function UMG.SizeBox.SetHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0xb5d93c
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x5eb362c
};

// Class UMG.Viewport
// Size: 0x168 (Inherited: 0x140)
struct UViewport : U*89c52a3074 {
	struct FLinearColor BackgroundColor; // 0x140(0x10)
	char pad_150[0x18]; // 0x150(0x18)

	void GetViewLocation(); // Function UMG.Viewport.GetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6c44
	void GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6e04
	void GetViewRotation(); // Function UMG.Viewport.GetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6c90
	void SetViewRotation(); // Function UMG.Viewport.SetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ebffb4
	void Spawn(); // Function UMG.Viewport.Spawn // Final|Native|Public|BlueprintCallable // @ game+0x5ec06d4
	void SetViewLocation(); // Function UMG.Viewport.SetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ebfefc
};

// Class UMG.GridPanel
// Size: 0x170 (Inherited: 0x140)
struct UGridPanel : U*d76301fdac {
	struct TArray<float> ColumnFill; // 0x140(0x10)
	struct TArray<float> RowFill; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)

	struct UWidget* AddChildToGrid(); // Function UMG.GridPanel.AddChildToGrid // Final|Native|Public|BlueprintCallable // @ game+0x5eb2ab0
};

// Class UMG.HorizontalBox
// Size: 0x150 (Inherited: 0x140)
struct UHorizontalBox : U*d76301fdac {
	char pad_140[0x10]; // 0x140(0x10)

	void AddChildToHorizontalBox(); // Function UMG.HorizontalBox.AddChildToHorizontalBox // Final|Native|Public|BlueprintCallable // @ game+0x5eb2bb0
};

// Class UMG.Overlay
// Size: 0x150 (Inherited: 0x140)
struct UOverlay : U*d76301fdac {
	char pad_140[0x10]; // 0x140(0x10)

	void AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // Final|Native|Public|BlueprintCallable // @ game+0x5eb2cb0
};

// Class UMG.ScrollBox
// Size: 0x8d8 (Inherited: 0x140)
struct UScrollBox : U*d76301fdac {
	struct F*8d916b2b30 WidgetStyle; // 0x140(0x248)
	struct F*c846317fd2 WidgetBarStyle; // 0x388(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x8a0(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x8a8(0x08)
	enum class EOrientation Orientation; // 0x8b0(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x8b1(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x8b2(0x01)
	char pad_8B3[0x1]; // 0x8b3(0x01)
	struct FVector2D ScrollbarThickness; // 0x8b4(0x08)
	bool AlwaysShowScrollbar; // 0x8bc(0x01)
	bool bUseRightMouseButtonToScroll; // 0x8bd(0x01)
	bool bGainFocusWhenClickedScrollBar; // 0x8be(0x01)
	bool bLinearScrollOnWheel; // 0x8bf(0x01)
	char pad_8C0[0x18]; // 0x8c0(0x18)

	void SetScrollOffset(); // Function UMG.ScrollBox.SetScrollOffset // Final|Native|Public|BlueprintCallable // @ game+0x5ebe1c8
	void SetScrollBarVisibility(); // Function UMG.ScrollBox.SetScrollBarVisibility // Final|Native|Public|BlueprintCallable // @ game+0x5ebe138
	void GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb679c
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // Final|Native|Public|BlueprintCallable // @ game+0x5eb8514
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // Final|Native|Public|BlueprintCallable // @ game+0x5eb8500
	void GetScrollToEndOffset(); // Function UMG.ScrollBox.GetScrollToEndOffset // Final|Native|Public|BlueprintCallable // @ game+0x5eb67bc
	struct UWidget* ScrollWidgetIntoView(); // Function UMG.ScrollBox.ScrollWidgetIntoView // Final|Native|Public|BlueprintCallable // @ game+0x5eb85c4
};

// Class UMG.UniformGridPanel
// Size: 0x168 (Inherited: 0x140)
struct UUniformGridPanel : U*d76301fdac {
	struct FMargin SlotPadding; // 0x140(0x10)
	float MinDesiredSlotWidth; // 0x150(0x04)
	float MinDesiredSlotHeight; // 0x154(0x04)
	char pad_158[0x10]; // 0x158(0x10)

	void SetMinDesiredSlotHeight(); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // Final|Native|Public|BlueprintCallable // @ game+0x5ebcc20
	void SetMinDesiredSlotWidth(); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // Final|Native|Public|BlueprintCallable // @ game+0x5ebccb8
	void AddChildToUniformGrid(); // Function UMG.UniformGridPanel.AddChildToUniformGrid // Final|Native|Public|BlueprintCallable // @ game+0x5eb2db0
	void SetSlotPadding(); // Function UMG.UniformGridPanel.SetSlotPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ebe9d4
};

// Class UMG.VerticalBox
// Size: 0x150 (Inherited: 0x140)
struct UVerticalBox : U*d76301fdac {
	char pad_140[0x10]; // 0x140(0x10)

	void AddChildToVerticalBox(); // Function UMG.VerticalBox.AddChildToVerticalBox // Final|Native|Public|BlueprintCallable // @ game+0x5eb2eb0
};

// Class UMG.WrapBox
// Size: 0x160 (Inherited: 0x140)
struct UWrapBox : U*d76301fdac {
	struct FVector2D InnerSlotPadding; // 0x140(0x08)
	float WrapWidth; // 0x148(0x04)
	bool bExplicitWrapWidth; // 0x14c(0x01)
	char pad_14D[0x13]; // 0x14d(0x13)

	struct UWidget* AddChildWrapBox(); // Function UMG.WrapBox.AddChildWrapBox // Final|Native|Public|BlueprintCallable // @ game+0x5eb2fb0
	void SetInnerSlotPadding(); // Function UMG.WrapBox.SetInnerSlotPadding // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ebb5cc
};

// Class UMG.ProgressBar
// Size: 0x348 (Inherited: 0x128)
struct UProgressBar : UWidget {
	struct F*3de0585264 WidgetStyle; // 0x128(0x1b8)
	struct USlateWidgetStyleAsset* Style; // 0x2e0(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x2e8(0x08)
	struct USlateBrushAsset* FillImage; // 0x2f0(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x2f8(0x08)
	float Percent; // 0x300(0x04)
	enum class EProgressBarFillType BarFillType; // 0x304(0x01)
	bool bIsMarquee; // 0x305(0x01)
	char pad_306[0x2]; // 0x306(0x02)
	DelegateProperty PercentDelegate; // 0x308(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x318(0x10)
	DelegateProperty FillColorAndOpacityDelegate; // 0x328(0x10)
	char pad_338[0x10]; // 0x338(0x10)

	void SetIsMarquee(); // Function UMG.ProgressBar.SetIsMarquee // Final|Native|Public|BlueprintCallable // @ game+0x5ebbdec
	void SetFillColorAndOpacity(); // Function UMG.ProgressBar.SetFillColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eba32c
	void SetPercent(); // Function UMG.ProgressBar.SetPercent // Final|Native|Public|BlueprintCallable // @ game+0x5ebdd1c
};

// Class UMG.ScrollBar
// Size: 0x668 (Inherited: 0x128)
struct UScrollBar : UWidget {
	struct F*c846317fd2 WidgetStyle; // 0x128(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x640(0x08)
	bool *64f197d52c; // 0x648(0x01)
	enum class EOrientation Orientation; // 0x649(0x01)
	char pad_64A[0x2]; // 0x64a(0x02)
	struct FVector2D Thickness; // 0x64c(0x08)
	char pad_654[0x14]; // 0x654(0x14)

	void SetState(float InOffsetFraction); // Function UMG.ScrollBar.SetState // Final|Native|Public|BlueprintCallable // @ game+0x5ebea74
};

// Class UMG.Slider
// Size: 0x420 (Inherited: 0x128)
struct USlider : UWidget {
	float Value; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	DelegateProperty ValueDelegate; // 0x130(0x10)
	struct F*f46c09a4c7 WidgetStyle; // 0x140(0x250)
	enum class EOrientation Orientation; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	struct FLinearColor SliderBarColor; // 0x394(0x10)
	struct FLinearColor SliderHandleColor; // 0x3a4(0x10)
	bool IndentHandle; // 0x3b4(0x01)
	bool Locked; // 0x3b5(0x01)
	char pad_3B6[0x2]; // 0x3b6(0x02)
	float StepSize; // 0x3b8(0x04)
	bool IsFocusable; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	struct FMulticastDelegate OnMouseCaptureBegin; // 0x3c0(0x10)
	struct FMulticastDelegate OnMouseCaptureEnd; // 0x3d0(0x10)
	struct FMulticastDelegate OnControllerCaptureBegin; // 0x3e0(0x10)
	struct FMulticastDelegate OnControllerCaptureEnd; // 0x3f0(0x10)
	struct FMulticastDelegate OnValueChanged; // 0x400(0x10)
	char pad_410[0x10]; // 0x410(0x10)

	void SetValue(); // Function UMG.Slider.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x5ebf5cc
	void GetValue(); // Function UMG.Slider.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6bf4
	void SetIndentHandle(); // Function UMG.Slider.SetIndentHandle // Final|Native|Public|BlueprintCallable // @ game+0x5ebb538
	void SetLocked(); // Function UMG.Slider.SetLocked // Final|Native|Public|BlueprintCallable // @ game+0x5ebc674
	void SetStepSize(); // Function UMG.Slider.SetStepSize // Final|Native|Public|BlueprintCallable // @ game+0x5ebeb70
	void SetSliderBarColor(); // Function UMG.Slider.SetSliderBarColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ebe87c
	void SetSliderHandleColor(); // Function UMG.Slider.SetSliderHandleColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ebe928
};

// Class UMG.Spacer
// Size: 0x140 (Inherited: 0x128)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x128(0x08)
	char pad_130[0x10]; // 0x130(0x10)

	void SetSize(); // Function UMG.Spacer.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ebe73c
};

// Class UMG.SpinBox
// Size: 0x560 (Inherited: 0x128)
struct USpinBox : UWidget {
	float Value; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	DelegateProperty ValueDelegate; // 0x130(0x10)
	struct F*abe8d1c913 WidgetStyle; // 0x140(0x310)
	struct USlateWidgetStyleAsset* Style; // 0x450(0x08)
	float Delta; // 0x458(0x04)
	float SliderExponent; // 0x45c(0x04)
	struct FSlateFontInfo Font; // 0x460(0x68)
	float MinDesiredWidth; // 0x4c8(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x4cc(0x01)
	bool SelectAllTextOnCommit; // 0x4cd(0x01)
	char pad_4CE[0x2]; // 0x4ce(0x02)
	struct FSlateColor ForegroundColor; // 0x4d0(0x28)
	struct FMulticastDelegate OnValueChanged; // 0x4f8(0x10)
	struct FMulticastDelegate OnValueCommitted; // 0x508(0x10)
	struct FMulticastDelegate OnBeginSliderMovement; // 0x518(0x10)
	struct FMulticastDelegate OnEndSliderMovement; // 0x528(0x10)
	char bOverride_MinValue : 1; // 0x538(0x01)
	char bOverride_MaxValue : 1; // 0x538(0x01)
	char bOverride_MinSliderValue : 1; // 0x538(0x01)
	char bOverride_MaxSliderValue : 1; // 0x538(0x01)
	char pad_538_4 : 4; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	float MinValue; // 0x53c(0x04)
	float MaxValue; // 0x540(0x04)
	float *66225f0319; // 0x544(0x04)
	float *b7069b2904; // 0x548(0x04)
	char pad_54C[0x14]; // 0x54c(0x14)

	float OnSpinBoxValueCommittedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void SetMinValue(); // Function UMG.SpinBox.SetMinValue // Final|Native|Public|BlueprintCallable // @ game+0x5ebcf18
	void GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6184
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5eb36b8
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // Final|Native|Public|BlueprintCallable // @ game+0x5eb36cc
	void GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb61ac
	void SetMinSliderValue(); // Function UMG.SpinBox.SetMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5ebce80
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5eb3668
	void SetMaxSliderValue(); // Function UMG.SpinBox.SetMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5ebc9cc
	void GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb621c
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x5eb367c
	void SetForegroundColor(); // Function UMG.SpinBox.SetForegroundColor // Final|Native|Public|BlueprintCallable // @ game+0x5eba700
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void GetValue(); // Function UMG.SpinBox.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6c1c
	void OnSpinBoxValueChangedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void GetMinValue(); // Function UMG.SpinBox.GetMinValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6244
	void SetValue(); // Function UMG.SpinBox.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x5ebf664
	void SetMaxValue(); // Function UMG.SpinBox.SetMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x5ebca64
};

// Class UMG.*70342b2c32
// Size: 0x128 (Inherited: 0x128)
struct U*70342b2c32 : UWidget {

	struct UObject* OnGenerateRowUObject__DelegateSignature(); // DelegateFunction UMG.*70342b2c32.OnGenerateRowUObject__DelegateSignature // Public|Delegate // @ game+0x293938
};

// Class UMG.ListView
// Size: 0x168 (Inherited: 0x128)
struct UListView : U*70342b2c32 {
	float *1233d7a96d; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<struct UObject*> Items; // 0x130(0x10)
	enum class ESelectionMode *17d1f6413d; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	DelegateProperty OnGenerateRowEvent; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)
};

// Class UMG.TileView
// Size: 0x168 (Inherited: 0x128)
struct UTileView : U*70342b2c32 {
	float *cf86efc101; // 0x128(0x04)
	float *1233d7a96d; // 0x12c(0x04)
	struct TArray<struct UObject*> Items; // 0x130(0x10)
	enum class ESelectionMode *17d1f6413d; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	DelegateProperty OnGenerateTileEvent; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)

	void RequestListRefresh(); // Function UMG.TileView.RequestListRefresh // Final|Native|Public|BlueprintCallable // @ game+0x5eb84d0
	void SetItemHeight(); // Function UMG.TileView.SetItemHeight // Final|Native|Public|BlueprintCallable // @ game+0x5ebc1b4
	void SetItemWidth(); // Function UMG.TileView.SetItemWidth // Final|Native|Public|BlueprintCallable // @ game+0x5ebc268
};

// Class UMG.MultiLineEditableText
// Size: 0x440 (Inherited: 0x150)
struct UMultiLineEditableText : U*976b2ef95d {
	struct FText Text; // 0x150(0x18)
	struct FText HintText; // 0x168(0x18)
	DelegateProperty HintTextDelegate; // 0x180(0x10)
	struct F*e84d4b475c WidgetStyle; // 0x190(0x208)
	bool bIsReadOnly; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FSlateFontInfo Font; // 0x3a0(0x68)
	bool *449281c41b; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FMulticastDelegate OnTextChanged; // 0x410(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x420(0x10)
	char pad_430[0x10]; // 0x430(0x10)

	void GetText(); // Function UMG.MultiLineEditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6a3c
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void SetText(); // Function UMG.MultiLineEditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5ebeff0
	void SetIsReadOnly(); // Function UMG.MultiLineEditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5ebc08c
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xce0 (Inherited: 0x150)
struct UMultiLineEditableTextBox : U*976b2ef95d {
	struct FText Text; // 0x150(0x18)
	struct FText HintText; // 0x168(0x18)
	DelegateProperty HintTextDelegate; // 0x180(0x10)
	struct F*fcc5c4062b WidgetStyle; // 0x190(0x870)
	struct F*e84d4b475c TextStyle; // 0xa00(0x208)
	bool bIsReadOnly; // 0xc08(0x01)
	bool *449281c41b; // 0xc09(0x01)
	char pad_C0A[0x6]; // 0xc0a(0x06)
	struct USlateWidgetStyleAsset* Style; // 0xc10(0x08)
	struct FSlateFontInfo Font; // 0xc18(0x68)
	struct FLinearColor ForegroundColor; // 0xc80(0x10)
	struct FLinearColor BackgroundColor; // 0xc90(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xca0(0x10)
	struct FMulticastDelegate OnTextChanged; // 0xcb0(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xcc0(0x10)
	char pad_CD0[0x10]; // 0xcd0(0x10)

	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x293938
	void SetText(); // Function UMG.MultiLineEditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5ebf0e4
	void SetError(); // Function UMG.MultiLineEditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x5eba134
	void SetIsReadOnly(); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5ebc120
	void GetText(); // Function UMG.MultiLineEditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb6af4
};

// Class UMG.RichTextBlock
// Size: 0x418 (Inherited: 0x150)
struct URichTextBlock : U*976b2ef95d {
	struct FText Text; // 0x150(0x18)
	DelegateProperty TextDelegate; // 0x168(0x10)
	struct FSlateFontInfo Font; // 0x178(0x68)
	struct FLinearColor Color; // 0x1e0(0x10)
	struct TArray<struct U*e926dbf5c9*> *4eb0102556; // 0x1f0(0x10)
	char pad_200[0x218]; // 0x200(0x218)
};

// Class UMG.Throbber
// Size: 0x1d8 (Inherited: 0x128)
struct UThrobber : UWidget {
	int32 NumberOfPieces; // 0x128(0x04)
	bool bAnimateHorizontally; // 0x12c(0x01)
	bool bAnimateVertically; // 0x12d(0x01)
	bool bAnimateOpacity; // 0x12e(0x01)
	char pad_12F[0x1]; // 0x12f(0x01)
	struct USlateBrushAsset* PieceImage; // 0x130(0x08)
	struct FSlateBrush Image; // 0x138(0x90)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	void SetAnimateVertically(); // Function UMG.Throbber.SetAnimateVertically // Final|Native|Public|BlueprintCallable // @ game+0x5eb8be8
	void SetAnimateHorizontally(); // Function UMG.Throbber.SetAnimateHorizontally // Final|Native|Public|BlueprintCallable // @ game+0x5eb8a5c
	void SetAnimateOpacity(); // Function UMG.Throbber.SetAnimateOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5eb8b20
	void SetNumberOfPieces(); // Function UMG.Throbber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x5ebd288
};

// Class UMG.*3335e92189
// Size: 0x380 (Inherited: 0x330)
struct U*3335e92189 : UMovieSceneSequence {
	struct FMulticastDelegate OnAnimationStarted; // 0x330(0x10)
	struct FMulticastDelegate OnAnimationFinished; // 0x340(0x10)
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct TArray<struct F*03b5503892> *fb05b02ce6; // 0x358(0x10)
	struct FString *0d7213d613; // 0x368(0x10)
	char pad_378[0x8]; // 0x378(0x08)

	void *24cf5c5bf6(); // Function UMG.*3335e92189.*24cf5c5bf6 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb5728
	void *7a7153ce05(); // Function UMG.*3335e92189.*7a7153ce05 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb68e8
};

// Class UMG.*72fc5568b9
// Size: 0x28 (Inherited: 0x28)
struct U*72fc5568b9 : UBlueprintFunctionLibrary {

	void *96aa495973(); // Function UMG.*72fc5568b9.*96aa495973 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb5608
	struct APlayerController* Create(); // Function UMG.*72fc5568b9.Create // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x761db0
	struct FVector2D *498ce7680e(struct FVector2D Size); // Function UMG.*72fc5568b9.*498ce7680e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5eb3eec
	void *4dc9c4895d(struct FSlateBrush Brush); // Function UMG.*72fc5568b9.*4dc9c4895d // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5eb9720
	struct F*a3e4749da2 *b35a64ee07(); // Function UMG.*72fc5568b9.*b35a64ee07 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb5d30
	struct FEventReply SetMousePosition(struct FVector2D NewMousePosition); // Function UMG.*72fc5568b9.SetMousePosition // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5ebd03c
	void *0dc117f72a(struct FSlateBrush Brush); // Function UMG.*72fc5568b9.*0dc117f72a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb5228
	void Handled(); // Function UMG.*72fc5568b9.Handled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eb6e70
	bool *3ec2d7197c(); // Function UMG.*72fc5568b9.*3ec2d7197c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb3708
	void *55d8b11790(struct UTexture2D* Texture, int32 Height); // Function UMG.*72fc5568b9.*55d8b11790 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eb7570
	struct FVector2D *ce13b96fb6(); // Function UMG.*72fc5568b9.*ce13b96fb6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5eba884
	void *cace4e1f3e(struct USlateBrushAsset* BrushAsset); // Function UMG.*72fc5568b9.*cace4e1f3e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eb72f0
	void *3753d0f27e(struct FControllerEvent Event); // Function UMG.*72fc5568b9.*3753d0f27e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb5a18
	struct UWidget* *3d37effb97(); // Function UMG.*72fc5568b9.*3d37effb97 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb7178
	struct FText *78a6603821(struct FVector2D Position, int32 FontSize); // Function UMG.*72fc5568b9.*78a6603821 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5eb4678
	struct FSlateBrush *8443c127ea(); // Function UMG.*72fc5568b9.*8443c127ea // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb4fd4
	struct TArray<struct UUserWidget*> *dc343af38e(); // Function UMG.*72fc5568b9.*dc343af38e // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5eb4db8
	void *3492735933(struct FEventReply Reply, bool bInAllUsers); // Function UMG.*72fc5568b9.*3492735933 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ebf370
	bool CaptureJoystick(); // Function UMG.*72fc5568b9.CaptureJoystick // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb3274
	void *94fa4889ea(int32 Width); // Function UMG.*72fc5568b9.*94fa4889ea // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eb73e8
	void *aa14279002(); // Function UMG.*72fc5568b9.*aa14279002 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eb76f8
	void *7229935fb0(); // Function UMG.*72fc5568b9.*7229935fb0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa51770
	struct FEventReply *6988e769b3(); // Function UMG.*72fc5568b9.*6988e769b3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb498c
	void *04c477de51(); // Function UMG.*72fc5568b9.*04c477de51 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb5924
	void *be11e0b6ef(); // Function UMG.*72fc5568b9.*be11e0b6ef // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5eba5b8
	void *86c7ac962e(); // Function UMG.*72fc5568b9.*86c7ac962e // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ebb96c
	void *74be7739c6(); // Function UMG.*72fc5568b9.*74be7739c6 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eb556c
	void *a547dd0898(struct UObject* WorldContextObject, struct UClass* WidgetClass); // Function UMG.*72fc5568b9.*a547dd0898 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5eb4c08
	struct FKey *5c2ff6185f(); // Function UMG.*72fc5568b9.*5c2ff6185f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5eb3c90
	struct FKeyEvent *c8e523ce25(); // Function UMG.*72fc5568b9.*c8e523ce25 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb5b10
	void *a1ed835c00(); // Function UMG.*72fc5568b9.*a1ed835c00 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eb708c
	struct FVector2D *230588c472(); // Function UMG.*72fc5568b9.*230588c472 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5eb447c
	struct UWidget* *5ecd23be65(); // Function UMG.*72fc5568b9.*5ecd23be65 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb3438
	void *71b9fdf36f(struct UWidget* InWidgetToFocus); // Function UMG.*72fc5568b9.*71b9fdf36f // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ebb9ec
	struct FSlateBrush *50f5caf5bf(); // Function UMG.*72fc5568b9.*50f5caf5bf // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5eb9720
	struct FVector2D *e5cc63caae(); // Function UMG.*72fc5568b9.*e5cc63caae // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5eb660c
	void ReleaseJoystickCapture(struct FEventReply Reply); // Function UMG.*72fc5568b9.ReleaseJoystickCapture // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb7d50
	struct F*a4e55cb2ea *9d06e74d17(); // Function UMG.*72fc5568b9.*9d06e74d17 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb5c44
	struct FEventReply *45040f1278(); // Function UMG.*72fc5568b9.*45040f1278 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb7fbc
	void *a9657476bb(struct UClass* OperationClass); // Function UMG.*72fc5568b9.*a9657476bb // Final|Native|Static|Public|BlueprintCallable // @ game+0x5eb39e4
	void *6e6ce4ec68(); // Function UMG.*72fc5568b9.*6e6ce4ec68 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5eb3258
	struct FLinearColor *00ad7eb6f8(); // Function UMG.*72fc5568b9.*00ad7eb6f8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5eb40f8
	void *2c146e2be6(); // Function UMG.*72fc5568b9.*2c146e2be6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb50cc
	void *11972074fe(struct UWidget* InWidgetToFocus); // Function UMG.*72fc5568b9.*11972074fe // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ebb68c
	struct UWidget* *9591a85ee0(); // Function UMG.*72fc5568b9.*9591a85ee0 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ebbb08
	void *8172c4ead7(struct TArray<struct FVector2D> Points); // Function UMG.*72fc5568b9.*8172c4ead7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5eb42b8
	enum class EMouseLockMode *667d076235(); // Function UMG.*72fc5568b9.*667d076235 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ebb808
	void *0e65abcd3e(struct UWidget* WidgetDetectingDrag); // Function UMG.*72fc5568b9.*0e65abcd3e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb3a74
	struct FEventReply *8ed1a8b147(); // Function UMG.*72fc5568b9.*8ed1a8b147 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ec0818
	void *988d990745(); // Function UMG.*72fc5568b9.*988d990745 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5eb3ec8
	struct F*8a4c6e0afe *db64590c11(); // Function UMG.*72fc5568b9.*db64590c11 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb5ea0
};

// Class UMG.*5ff0e9d0ca
// Size: 0x650 (Inherited: 0x460)
struct U*5ff0e9d0ca : USceneComponent {
	struct FMulticastDelegate OnHoveredWidgetChanged; // 0x458(0x10)
	char pad_470[0x8]; // 0x470(0x08)
	int32 VirtualUserIndex; // 0x478(0x04)
	float PointerIndex; // 0x47c(0x04)
	enum class ECollisionChannel TraceChannel; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float InteractionDistance; // 0x484(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x488(0x01)
	bool bEnableHitTesting; // 0x489(0x01)
	bool bShowDebug; // 0x48a(0x01)
	char pad_48B[0x1]; // 0x48b(0x01)
	struct FLinearColor DebugColor; // 0x48c(0x10)
	char pad_49C[0x7c]; // 0x49c(0x7c)
	struct FHitResult *2d35427527; // 0x518(0x88)
	struct FVector2D *c93c24175e; // 0x5a0(0x08)
	struct FVector2D *6455682c51; // 0x5a8(0x08)
	struct UWidgetComponent* *18a2143ea1; // 0x5b0(0x08)
	struct FHitResult *37342a50f0; // 0x5b8(0x88)
	bool *9caaabc6fb; // 0x640(0x01)
	bool *2e3b21ab86; // 0x641(0x01)
	bool *2f5f6b14a2; // 0x642(0x01)
	char pad_643[0xd]; // 0x643(0x0d)

	void *78dfa2ea01(); // Function UMG.*5ff0e9d0ca.*78dfa2ea01 // Native|Public|BlueprintCallable // @ game+0x5eb80f0
	void *eb8e351ac6(struct FKey Key); // Function UMG.*5ff0e9d0ca.*eb8e351ac6 // Native|Public|BlueprintCallable // @ game+0x5eb782c
	void *1e38f9f1cd(); // Function UMG.*5ff0e9d0ca.*1e38f9f1cd // Native|Public|BlueprintCallable // @ game+0x5eb7a70
	void *e3225786b1(); // Function UMG.*5ff0e9d0ca.*e3225786b1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb590c
	void *01a07c096a(); // Function UMG.*5ff0e9d0ca.*01a07c096a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb4b8c
	void *43fad83b89(); // Function UMG.*5ff0e9d0ca.*43fad83b89 // Native|Public|BlueprintCallable // @ game+0x5eb8528
	void *d9fd255cf1(); // Function UMG.*5ff0e9d0ca.*d9fd255cf1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb70e4
	void *dbd2475b5f(); // Function UMG.*5ff0e9d0ca.*dbd2475b5f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb70fc
	void *075123a386(); // Function UMG.*5ff0e9d0ca.*075123a386 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb601c
	struct FKey *7da06e772e(); // Function UMG.*5ff0e9d0ca.*7da06e772e // Native|Public|BlueprintCallable // @ game+0x5eb7ec4
	void *5a53cf5931(); // Function UMG.*5ff0e9d0ca.*5a53cf5931 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb7114
	void *f5a7bff81d(bool bRepeat); // Function UMG.*5ff0e9d0ca.*f5a7bff81d // Native|Public|BlueprintCallable // @ game+0x5eb86a4
	bool *c2a3eed6ce(); // Function UMG.*5ff0e9d0ca.*c2a3eed6ce // Native|Public|BlueprintCallable // @ game+0x5eb7924
	void *1b1d394ff8(); // Function UMG.*5ff0e9d0ca.*1b1d394ff8 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5eb9d28
};

// Class UMG.*5ed7aa7874
// Size: 0x28 (Inherited: 0x28)
struct U*5ed7aa7874 : UBlueprintFunctionLibrary {

	void *064bad7cd0(); // Function UMG.*5ed7aa7874.*064bad7cd0 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eb6cdc
	void *c0353d59d7(struct UWidget* Widget); // Function UMG.*5ed7aa7874.*c0353d59d7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ec0374
	struct UObject* *f9de26ecaa(); // Function UMG.*5ed7aa7874.*f9de26ecaa // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5eb6d6c
	struct UWidget* *5a9dbada10(); // Function UMG.*5ed7aa7874.*5a9dbada10 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ec0494
	void *24028d9cc4(); // Function UMG.*5ed7aa7874.*24028d9cc4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ec0644
	struct UWidget* *dc67dc9433(); // Function UMG.*5ed7aa7874.*dc67dc9433 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ec0404
	float *48c24102a7(); // Function UMG.*5ed7aa7874.*48c24102a7 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eb626c
	void *ea2fc82874(struct FVector WorldLocation); // Function UMG.*5ed7aa7874.*ea2fc82874 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5eb7b58
	void *4fdeb104e2(); // Function UMG.*5ed7aa7874.*4fdeb104e2 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5eb81d8
	struct UWidget* *0e06de2389(); // Function UMG.*5ed7aa7874.*0e06de2389 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ec0524
	void *5d566a4088(); // Function UMG.*5ed7aa7874.*5d566a4088 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb745fc
	void *0787c0fcac(struct UWidget* Widget); // Function UMG.*5ed7aa7874.*0787c0fcac // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ec05b4
};

// Class UMG.WidgetNavigation
// Size: 0xb8 (Inherited: 0x28)
struct UWidgetNavigation : UObject {
	struct F*69f271d76f Up; // 0x28(0x18)
	struct F*69f271d76f Down; // 0x40(0x18)
	struct F*69f271d76f Left; // 0x58(0x18)
	struct F*69f271d76f Right; // 0x70(0x18)
	struct F*69f271d76f Next; // 0x88(0x18)
	struct F*69f271d76f Previous; // 0xa0(0x18)
};

// Class UMG.WidgetTree
// Size: 0x30 (Inherited: 0x28)
struct UWidgetTree : UObject {
	struct UWidget* *6e763cdceb; // 0x28(0x08)
};


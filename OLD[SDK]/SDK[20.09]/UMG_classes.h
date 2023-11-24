// Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x128 (Inherited: 0x28)
struct UWidget : UVisual {
	bool *a2a36e8264; // 0x28(0x01)
	bool *f44a5ad254; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct UPanelSlot* Slot; // 0x30(0x08)
	bool bIsEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	DelegateProperty bIsEnabledDelegate; // 0x40(0x10)
	DelegateProperty OnPrepass; // 0x50(0x10)
	struct FText ToolTipText; // 0x60(0x18)
	DelegateProperty ToolTipTextDelegate; // 0x78(0x10)
	struct UWidget* ToolTipWidget; // 0x88(0x08)
	DelegateProperty *cd3231348e; // 0x90(0x10)
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
	struct TArray<struct U*249bc50ddf*> *dffdcd9e23; // 0x118(0x10)

	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // Final|Native|Public|BlueprintCallable // @ game+0x5d4e2b0
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // Final|Native|Public|BlueprintCallable // @ game+0x5d4c514
	enum class EUINavigationRule SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // Final|Native|Public|BlueprintCallable // @ game+0x5d4dca0
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // Final|Native|Public|BlueprintCallable // @ game+0x5d4b924
	void GetParent(); // Function UMG.Widget.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bccc
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile // Final|Native|Public|BlueprintCallable // @ game+0x5d4b94c
	struct APlayerController* HasUserFocus(); // Function UMG.Widget.HasUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c3d4
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e498
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // Public|Delegate // @ game+0x1e037c
	struct F*387a87ac65 OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x1e037c
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // Final|Native|Public|BlueprintCallable // @ game+0xa1e650
	void IsVisible(); // Function UMG.Widget.IsVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c8ac
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void IsHovered(); // Function UMG.Widget.IsHovered // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c5e4
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // Final|Native|Public|BlueprintCallable // @ game+0x5d4dc8c
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bb20
	void SetCursor(); // Function UMG.Widget.SetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5d4d888
	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e524
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // Public|Delegate|HasDefaults // @ game+0x1e037c
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // Native|Public|BlueprintCallable // @ game+0x5d4dbf4
	void SetToolTip(); // Function UMG.Widget.SetToolTip // Final|Native|Public|BlueprintCallable // @ game+0x5d4e5c8
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c1f0
	struct FString GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5d4e658
	void SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // Final|Native|Public|BlueprintCallable // @ game+0x5d4d718
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xcf0070
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetVisibility(); // Function UMG.Widget.GetVisibility // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bf7c
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c13c
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bac4
	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e350
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus // Final|Native|Public|BlueprintCallable // @ game+0x5d4e734
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c474
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // Final|Native|Public|BlueprintCallable // @ game+0x5d4b938
	void ResetCursor(); // Function UMG.Widget.ResetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5d4d17c
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c290
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4baf0
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bc60
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c334
	void SetVisibility(); // Function UMG.Widget.SetVisibility // Native|Public|BlueprintCallable // @ game+0x1fed44
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // Native|Public|BlueprintCallable // @ game+0x567b5a0
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e3f4
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
	struct TArray<struct U*7aea8ea27e*> *3e3863d4e3; // 0x1a0(0x10)
	struct TArray<struct U*7aea8ea27e*> *4bcceb71fc; // 0x1b0(0x10)
	bool bStopAction; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	int32 Priority; // 0x1c4(0x04)
	struct TArray<struct F*29c64021c8> *705b4e1e17; // 0x1c8(0x10)
	struct UWidgetTree* WidgetTree; // 0x1d8(0x08)
	char bCanEverTick : 1; // 0x1e0(0x01)
	char *108843f716 : 1; // 0x1e0(0x01)
	char pad_1E0_2 : 6; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	char *8635d1ae99 : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct U*63b14265fa* *63b14265fa; // 0x1f0(0x08)
	char pad_1F8[0x58]; // 0x1f8(0x58)

	struct F*387a87ac65 OnMouseButtonDown(); // Function UMG.UserWidget.OnMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void SetForegroundColor(); // Function UMG.UserWidget.SetForegroundColor // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4d9c4
	void GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bb44
	void OnMouseWheel(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnMouseWheel // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void SetAnchorsInViewport(); // Function UMG.UserWidget.SetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4d7f4
	void OnAnimationFinished(); // Function UMG.UserWidget.OnAnimationFinished // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x593a2c
	void GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4ba08
	void Destruct(); // Function UMG.UserWidget.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void GetOwningPlayer(); // Function UMG.UserWidget.GetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xcf0070
	float PlayAnimationTo(float EndAtTime, enum class EUMGSequencePlayMode PlayMode); // Function UMG.UserWidget.PlayAnimationTo // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4ce9c
	void Tick(); // Function UMG.UserWidget.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	struct U*6b11b3bf02* PauseAnimation(); // Function UMG.UserWidget.PauseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4cdfc
	void AddToViewport(); // Function UMG.UserWidget.AddToViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4b2f4
	void IsInteractable(); // Function UMG.UserWidget.IsInteractable // BlueprintCosmetic|Event|Public|BlueprintEvent|Const // @ game+0x1e037c
	void ReverseAnimation(); // Function UMG.UserWidget.ReverseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4d190
	struct F*387a87ac65 OnTouchMoved(); // Function UMG.UserWidget.OnTouchMoved // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void SetColorAndOpacity(); // Function UMG.UserWidget.SetColorAndOpacity // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x9d65ac
	void PlaySound(); // Function UMG.UserWidget.PlaySound // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4d0bc
	struct FControllerEvent OnControllerAnalogValueChanged(); // Function UMG.UserWidget.OnControllerAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct F*387a87ac65 OnDragLeave(); // Function UMG.UserWidget.OnDragLeave // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void OnKeyDown(struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	struct F*646dd34860 OnMotionDetected(); // Function UMG.UserWidget.OnMotionDetected // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void StopAnimation(); // Function UMG.UserWidget.StopAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xb0eca8
	void OnMouseButtonUp(struct F*387a87ac65 MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	struct F*387a87ac65 OnDragDetected(); // Function UMG.UserWidget.OnDragDetected // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void SetOwningLocalPlayer(); // Function UMG.UserWidget.SetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4df00
	void OnDragCancelled(struct F*387a87ac65 PointerEvent); // Function UMG.UserWidget.OnDragCancelled // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void SetDesiredSizeInViewport(); // Function UMG.UserWidget.SetDesiredSizeInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4d91c
	void IsInViewport(); // Function UMG.UserWidget.IsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bb44
	void SetInputActionBlocking(); // Function UMG.UserWidget.SetInputActionBlocking // Final|Native|Protected|BlueprintCallable // @ game+0x5d4dab8
	struct FGeometry OnMouseMove(struct F*387a87ac65 MouseEvent); // Function UMG.UserWidget.OnMouseMove // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void ListenForInputAction(struct FName ActionName, bool bConsume); // Function UMG.UserWidget.ListenForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x5d4c8d0
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // Final|Native|Public|BlueprintCallable // @ game+0x5d4e7c4
	void OnMouseLeave(); // Function UMG.UserWidget.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void GetWidgetComponent(); // Function UMG.UserWidget.GetWidgetComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bfa0
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x567b5a0
	void SetAlignmentInViewport(); // Function UMG.UserWidget.SetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4d67c
	struct F*1a00d10a70 OnKeyChar(); // Function UMG.UserWidget.OnKeyChar // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void AddToPlayerScreen(int32 ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4b254
	void OnDragEnter(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnDragEnter // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void SetInputActionPriority(); // Function UMG.UserWidget.SetInputActionPriority // Final|Native|Protected|BlueprintCallable // @ game+0x5d4db5c
	struct FName IsListeningForInputAction(); // Function UMG.UserWidget.IsListeningForInputAction // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c608
	struct FName StopListeningForInputAction(); // Function UMG.UserWidget.StopListeningForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x5d4e7ec
	void IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c5c8
	struct UDragDropOperation* OnDrop(); // Function UMG.UserWidget.OnDrop // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FFocusEvent OnFocusReceived(); // Function UMG.UserWidget.OnFocusReceived // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c5c8
	enum class EUMGSequencePlayMode PlayAnimation(); // Function UMG.UserWidget.PlayAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xbf50e4
	void GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4b9e0
	void OnTouchStarted(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnTouchStarted // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x5d4e8d0
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // Final|Native|Protected|BlueprintCallable // @ game+0x5d4e7d8
	struct FKeyEvent OnKeyUp(); // Function UMG.UserWidget.OnKeyUp // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x5d4d168
	void SetPadding(); // Function UMG.UserWidget.SetPadding // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4e058
	struct FControllerEvent OnControllerButtonPressed(); // Function UMG.UserWidget.OnControllerButtonPressed // Event|Public|BlueprintEvent // @ game+0x1e037c
	void OnPaint(); // Function UMG.UserWidget.OnPaint // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1e037c
	void SetOwningPlayer(); // Function UMG.UserWidget.SetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4dfac
	struct F*387a87ac65 OnTouchEnded(); // Function UMG.UserWidget.OnTouchEnded // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	struct FControllerEvent OnControllerButtonReleased(); // Function UMG.UserWidget.OnControllerButtonReleased // Event|Public|BlueprintEvent // @ game+0x1e037c
	void OnTouchGesture(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnTouchGesture // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	struct UDragDropOperation* OnDragOver(); // Function UMG.UserWidget.OnDragOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void OnMouseEnter(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnMouseEnter // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void OnFocusLost(); // Function UMG.UserWidget.OnFocusLost // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void FinishStoppedSequencePlayers(); // Function UMG.UserWidget.FinishStoppedSequencePlayers // Final|Native|Public|BlueprintCallable // @ game+0x5d4b910
	struct FVector2D SetPositionInViewport(); // Function UMG.UserWidget.SetPositionInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e1d8
	void SetNumLoopsToPlay(); // Function UMG.UserWidget.SetNumLoopsToPlay // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4ddd8
	struct F*71b15ba99a OnAnalogValueChanged(); // Function UMG.UserWidget.OnAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x1e037c
	void OnAnimationStarted(); // Function UMG.UserWidget.OnAnimationStarted // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x593eec
	void GetAnimationCurrentTime(struct U*6b11b3bf02* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4ba24
	void IsAnimationPlaying(struct U*6b11b3bf02* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c528
	void GetOwningLocalPlayer(); // Function UMG.UserWidget.GetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bc84
	struct F*387a87ac65 OnMouseButtonDoubleClick(); // Function UMG.UserWidget.OnMouseButtonDoubleClick // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function UMG.UserWidget.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bca8
	void PreConstruct(); // Function UMG.UserWidget.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	struct U*6b11b3bf02* SetPlaybackSpeed(); // Function UMG.UserWidget.SetPlaybackSpeed // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d4e0f8
	void OnPreviewMouseButtonDown(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnPreviewMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	struct FKeyEvent OnPreviewKeyDown(); // Function UMG.UserWidget.OnPreviewKeyDown // Event|Public|BlueprintEvent // @ game+0x1e037c
};

// Class UMG.WidgetComponent
// Size: 0xcd0 (Inherited: 0xb00)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0xb00(0x01)
	enum class EWidgetTimingPolicy *93ed1dacee; // 0xb01(0x01)
	char pad_B02[0x6]; // 0xb02(0x06)
	struct UClass* WidgetClass; // 0xb08(0x08)
	struct FIntPoint DrawSize; // 0xb10(0x08)
	bool *3139527671; // 0xb18(0x01)
	bool *4df4feeabc; // 0xb19(0x01)
	char pad_B1A[0x2]; // 0xb1a(0x02)
	float *ed30897737; // 0xb1c(0x04)
	char pad_B20[0x8]; // 0xb20(0x08)
	struct FIntPoint *4c52fc6bc6; // 0xb28(0x08)
	bool *d5a58470bb; // 0xb30(0x01)
	char pad_B31[0x3]; // 0xb31(0x03)
	struct FVector2D Pivot; // 0xb34(0x08)
	bool *f294fafcfd; // 0xb3c(0x01)
	bool *1bcf541074; // 0xb3d(0x01)
	char pad_B3E[0x2]; // 0xb3e(0x02)
	struct ULocalPlayer* *0d8acd893f; // 0xb40(0x08)
	struct FLinearColor BackgroundColor; // 0xb48(0x10)
	struct FLinearColor TintColorAndOpacity; // 0xb58(0x10)
	float OpacityFromTexture; // 0xb68(0x04)
	enum class EWidgetBlendMode BlendMode; // 0xb6c(0x01)
	bool bIsTwoSided; // 0xb6d(0x01)
	bool *f855583de2; // 0xb6e(0x01)
	char pad_B6F[0x1]; // 0xb6f(0x01)
	struct UUserWidget* Widget; // 0xb70(0x08)
	char pad_B78[0x20]; // 0xb78(0x20)
	struct UBodySetup* BodySetup; // 0xb98(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0xba0(0x08)
	struct UMaterialInterface* *4648727e51; // 0xba8(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0xbb0(0x08)
	struct UMaterialInterface* *7b4afd8521; // 0xbb8(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0xbc0(0x08)
	struct UMaterialInterface* *327af41629; // 0xbc8(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0xbd0(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0xbd8(0x08)
	bool *e603d7efb9; // 0xbe0(0x01)
	bool *506ac624e6; // 0xbe1(0x01)
	char pad_BE2[0x6]; // 0xbe2(0x06)
	struct FName *ebd5737b6f; // 0xbe8(0x08)
	int32 *ddc39efeeb; // 0xbf0(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0xbf4(0x01)
	char pad_BF5[0x3]; // 0xbf5(0x03)
	float CylinderArcAngle; // 0xbf8(0x04)
	char pad_BFC[0x24]; // 0xbfc(0x24)
	struct FVector2D FixedScreenSize; // 0xc20(0x08)
	enum class EWidgetForcedLOD ForcedLOD; // 0xc28(0x01)
	bool bUseLOD; // 0xc29(0x01)
	bool bAutoSetFixedScreenSize; // 0xc2a(0x01)
	char pad_C2B[0x5]; // 0xc2b(0x05)
	struct TArray<float> LODScreenSizes; // 0xc30(0x10)
	float LODUpdateInterval; // 0xc40(0x04)
	float LODNextUpdateTime; // 0xc44(0x04)
	float LODLastScreenSize; // 0xc48(0x04)
	float LODScale; // 0xc4c(0x04)
	float *d839619bf7; // 0xc50(0x04)
	bool bShouldRenderWidget; // 0xc54(0x01)
	bool bAlwaysVisibleWidget; // 0xc55(0x01)
	char pad_C56[0x2]; // 0xc56(0x02)
	struct TMap<struct UPrimitiveComponent*, struct UMaterialInstanceDynamic*> *db8ec4d983; // 0xc58(0x50)
	struct TArray<struct UMeshComponent*> *7fa26e2f3b; // 0xca8(0x10)
	struct UTextureRenderTarget2D* OverrideRenderTarget; // 0xcb8(0x08)
	struct USceneComponent* *8561f211bc; // 0xcc0(0x08)
	char pad_CC8[0x8]; // 0xcc8(0x08)

	void *40f1c546c8(); // Function UMG.WidgetComponent.*40f1c546c8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d54fb4
	void *599d22b181(); // Function UMG.WidgetComponent.*599d22b181 // Final|Native|Public|BlueprintCallable // @ game+0x5d53d58
	void *a58027129b(); // Function UMG.WidgetComponent.*a58027129b // Final|Native|Public|BlueprintCallable // @ game+0x5d5c95c
	void *8e9522701f(); // Function UMG.WidgetComponent.*8e9522701f // Final|Native|Public|BlueprintCallable // @ game+0x5d5c10c
	void *2306e43359(); // Function UMG.WidgetComponent.*2306e43359 // Native|Public|BlueprintCallable // @ game+0x64a560
	float *fd9fc96958(); // Function UMG.WidgetComponent.*fd9fc96958 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52128
	void *7c6ab456c6(); // Function UMG.WidgetComponent.*7c6ab456c6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51044
	void *53ed899efd(); // Function UMG.WidgetComponent.*53ed899efd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d56510
	void *25dab87525(); // Function UMG.WidgetComponent.*25dab87525 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52c88
	void *91dfbe81ff(); // Function UMG.WidgetComponent.*91dfbe81ff // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d5163c
	void *ef1ae06482(); // Function UMG.WidgetComponent.*ef1ae06482 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52110
	void *a2fd1e1f6b(); // Function UMG.WidgetComponent.*a2fd1e1f6b // Final|Native|Public|BlueprintCallable // @ game+0x5d56818
	void *3ccf2a3054(); // Function UMG.WidgetComponent.*3ccf2a3054 // Final|Native|Public|BlueprintCallable // @ game+0x5d562b8
	void *1525f9a7d5(); // Function UMG.WidgetComponent.*1525f9a7d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d517f4
	void *f8e07dfcd5(); // Function UMG.WidgetComponent.*f8e07dfcd5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52694
	void *4f2008772e(); // Function UMG.WidgetComponent.*4f2008772e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52618
	void *3d501f1b19(); // Function UMG.WidgetComponent.*3d501f1b19 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d5266c
	void *bb3c4b2536(); // Function UMG.WidgetComponent.*bb3c4b2536 // Final|Native|Public|BlueprintCallable // @ game+0x5d5a590
	void *7c6609fddf(); // Function UMG.WidgetComponent.*7c6609fddf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d530f0
	void *3bc3f8847f(); // Function UMG.WidgetComponent.*3bc3f8847f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51990
	void *f8fdb5f101(struct UPrimitiveComponent* TargetComp, struct UMaterialInterface* OverrideMat); // Function UMG.WidgetComponent.*f8fdb5f101 // Final|Native|Public|BlueprintCallable // @ game+0x5d4f974
	void *ebe4beb900(); // Function UMG.WidgetComponent.*ebe4beb900 // Final|Native|Public|BlueprintCallable // @ game+0x5d5948c
	void *8710155628(); // Function UMG.WidgetComponent.*8710155628 // Native|Public|BlueprintCallable // @ game+0x5d5c078
	void *a9ef2cf827(); // Function UMG.WidgetComponent.*a9ef2cf827 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d55e9c
	void *d58af63bc9(int32 ElemIndex); // Function UMG.WidgetComponent.*d58af63bc9 // Final|Native|Public|BlueprintCallable // @ game+0x5d4f21c
	void *5879e3362b(); // Function UMG.WidgetComponent.*5879e3362b // Final|Native|Public|BlueprintCallable // @ game+0x5d54de8
};

// Class UMG.*c1ef4cc603
// Size: 0x140 (Inherited: 0x128)
struct U*c1ef4cc603 : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52fb4
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51514
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d515b4
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x5d543c0
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51474
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x5d54320
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x5d4e9bc
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x5d4f65c
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52f98
};

// Class UMG.*7fef63158a
// Size: 0x140 (Inherited: 0x140)
struct U*7fef63158a : U*c1ef4cc603 {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52fb4
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51514
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d515b4
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x5d543c0
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51474
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x5d54320
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x5d4e9bc
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x5d4f65c
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52f98
};

// Class UMG.Button
// Size: 0x478 (Inherited: 0x140)
struct UButton : U*7fef63158a {
	struct USlateWidgetStyleAsset* Style; // 0x140(0x08)
	struct F*d5cdd95f37 WidgetStyle; // 0x148(0x2a8)
	struct FLinearColor ColorAndOpacity; // 0x3f0(0x10)
	struct FLinearColor BackgroundColor; // 0x400(0x10)
	enum class *1c449fa2e9 ClickMethod; // 0x410(0x01)
	enum class *63a0064aef TouchMethod; // 0x411(0x01)
	bool IsFocusable; // 0x412(0x01)
	char pad_413[0x5]; // 0x413(0x05)
	struct FMulticastDelegate OnClicked; // 0x418(0x10)
	struct FMulticastDelegate OnPressed; // 0x428(0x10)
	struct FMulticastDelegate OnReleased; // 0x438(0x10)
	struct FMulticastDelegate OnHovered; // 0x448(0x10)
	struct FMulticastDelegate OnUnHovered; // 0x458(0x10)
	char pad_468[0x10]; // 0x468(0x10)

	void SetColorAndOpacity(); // Function UMG.Button.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d55a58
	void IsPressed(); // Function UMG.Button.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d531d8
	void SetStyle(); // Function UMG.Button.SetStyle // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5d5ad5c
	void SetBackgroundColor(); // Function UMG.Button.SetBackgroundColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d54f1c
};

// Class UMG.EditableText
// Size: 0x4b8 (Inherited: 0x128)
struct UEditableText : UWidget {
	struct FText Text; // 0x128(0x18)
	DelegateProperty TextDelegate; // 0x140(0x10)
	struct FText HintText; // 0x150(0x18)
	DelegateProperty HintTextDelegate; // 0x168(0x10)
	struct F*1655c7f388 WidgetStyle; // 0x178(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x3c0(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3c8(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3d0(0x08)
	struct USlateBrushAsset* CaretImage; // 0x3d8(0x08)
	struct FSlateFontInfo Font; // 0x3e0(0x68)
	struct FSlateColor ColorAndOpacity; // 0x448(0x28)
	bool IsReadOnly; // 0x470(0x01)
	bool *d7e649ba19; // 0x471(0x01)
	char pad_472[0x2]; // 0x472(0x02)
	float *5df272fd61; // 0x474(0x04)
	bool *4d02eb0d17; // 0x478(0x01)
	bool *6a3690e4e5; // 0x479(0x01)
	bool *09293faac1; // 0x47a(0x01)
	bool *ed20d539d4; // 0x47b(0x01)
	bool *46816700ca; // 0x47c(0x01)
	bool *76866562c6; // 0x47d(0x01)
	enum class EVirtualKeyboardType *bd48298631; // 0x47e(0x01)
	char pad_47F[0x1]; // 0x47f(0x01)
	struct F*64a42c3900 ShapedTextOptions; // 0x480(0x08)
	struct FMulticastDelegate OnTextChanged; // 0x488(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x498(0x10)
	char pad_4A8[0x10]; // 0x4a8(0x10)

	void GetText(); // Function UMG.EditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d529b4
	void SetIsReadOnly(); // Function UMG.EditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5d57f60
	void SetIsPassword(); // Function UMG.EditableText.SetIsPassword // Final|Native|Public|BlueprintCallable // @ game+0x5d57ea4
	void SetHintText(); // Function UMG.EditableText.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x5d56a4c
	void SetText(); // Function UMG.EditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5d5ae2c
	void OnEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1e037c
	struct FText OnEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1e037c
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

	void DragCancelled(); // Function UMG.DragDropOperation.DragCancelled // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5d4b488
	void Dragged(); // Function UMG.DragDropOperation.Dragged // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5d4b57c
	void Drop(); // Function UMG.DragDropOperation.Drop // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5d4b670
};

// Class UMG.*800d766cf7
// Size: 0x150 (Inherited: 0x128)
struct U*800d766cf7 : UWidget {
	struct F*64a42c3900 ShapedTextOptions; // 0x128(0x08)
	enum class ETextJustify Justification; // 0x130(0x01)
	bool AutoWrapText; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	float WrapTextAt; // 0x134(0x04)
	enum class *00a79681fd WrappingPolicy; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FMargin Margin; // 0x13c(0x10)
	float LineHeightPercentage; // 0x14c(0x04)
};

// Class UMG.TextBlock
// Size: 0x258 (Inherited: 0x150)
struct UTextBlock : U*800d766cf7 {
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

	void SetShadowOffset(); // Function UMG.TextBlock.SetShadowOffset // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d5a504
	void SetColorAndOpacity(); // Function UMG.TextBlock.SetColorAndOpacity // Final|Native|Public|BlueprintCallable // @ game+0x573fd4
	void SetJustification(); // Function UMG.TextBlock.SetJustification // Final|Native|Public|BlueprintCallable // @ game+0x5d58340
	void SetFont(); // Function UMG.TextBlock.SetFont // Final|Native|Public|BlueprintCallable // @ game+0x5d565f8
	void SetShadowColorAndOpacity(); // Function UMG.TextBlock.SetShadowColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d5a46c
	void SetMinDesiredWidth(); // Function UMG.TextBlock.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5d58e0c
	void SetWrapTextAt(); // Function UMG.TextBlock.SetWrapTextAt // Final|Native|Public|BlueprintCallable // @ game+0x5d5c1ac
	void SetText(); // Function UMG.TextBlock.SetText // Native|Public|BlueprintCallable // @ game+0x5d5b1fc
	void GetText(); // Function UMG.TextBlock.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52c14
	void SetOpacity(); // Function UMG.TextBlock.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5d593f4
};

// Class UMG.ComboBoxString
// Size: 0xda8 (Inherited: 0x128)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> *9d8c8ec8b8; // 0x128(0x10)
	struct FString *2a6f35337a; // 0x138(0x10)
	struct F*8032c74862 WidgetStyle; // 0x148(0x428)
	struct F*62e31edfd2 ItemStyle; // 0x570(0x718)
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

	void FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d50b6c
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // Final|Native|Public|BlueprintCallable // @ game+0x5d4f78c
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	void AddOption(); // Function UMG.ComboBoxString.AddOption // Final|Native|Public|BlueprintCallable // @ game+0x5d4f15c
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // Final|Native|Public|BlueprintCallable // @ game+0x5d53d44
	void GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52600
	void SetSelectedOption(); // Function UMG.ComboBoxString.SetSelectedOption // Final|Native|Public|BlueprintCallable // @ game+0x5d5a370
	void RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // Final|Native|Public|BlueprintCallable // @ game+0x5d54460
	void GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52890
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // Final|Native|Public|BlueprintCallable // @ game+0x5d4f7a0
	int32 GetOptionAtIndex(); // Function UMG.ComboBoxString.GetOptionAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d524c0
};

// Class UMG.WidgetSwitcher
// Size: 0x158 (Inherited: 0x140)
struct UWidgetSwitcher : U*c1ef4cc603 {
	int32 ActiveWidgetIndex; // 0x140(0x04)
	char pad_144[0x14]; // 0x144(0x14)

	void GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d50c60
	void SetActiveWidget(); // Function UMG.WidgetSwitcher.SetActiveWidget // Native|Public|BlueprintCallable // @ game+0x5d548ac
	void GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d5245c
	void SetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // Native|Public|BlueprintCallable // @ game+0xcc36f4
	int32 GetWidgetAtIndex(); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51474
};

// Class UMG.*18ce653e55
// Size: 0x48 (Inherited: 0x28)
struct U*18ce653e55 : U*4471bd9586 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFail; // 0x38(0x10)

	struct FString *3192ce7cbc(); // Function UMG.*18ce653e55.*3192ce7cbc // Final|Native|Static|Public|BlueprintCallable // @ game+0x5d4b38c
};

// Class UMG.*366e10968b
// Size: 0x3f0 (Inherited: 0xd0)
struct U*366e10968b : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve Translation[0x02]; // 0xd8(0xe0)
	struct FRichCurve Rotation; // 0x1b8(0x70)
	struct FRichCurve Scale[0x02]; // 0x228(0xe0)
	struct FRichCurve Shear[0x02]; // 0x308(0xe0)
	char pad_3E8[0x8]; // 0x3e8(0x08)
};

// Class UMG.*fdf0cbb3f5
// Size: 0xe0 (Inherited: 0xe0)
struct U*fdf0cbb3f5 : UMovieScenePropertyTrack {
	struct FName PropertyName; // 0xb8(0x08)
	struct FString PropertyPath; // 0xc0(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xd0(0x10)
};

// Class UMG.*cdbf867c06
// Size: 0x2a0 (Inherited: 0xd0)
struct U*cdbf867c06 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *2e9a4cc8c4; // 0xd8(0x70)
	struct FRichCurve *dc87cb8bf8; // 0x148(0x70)
	struct FRichCurve *8da56fb51a; // 0x1b8(0x70)
	struct FRichCurve *2b9409f1dd; // 0x228(0x70)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class UMG.*49bdd9f8ff
// Size: 0xe0 (Inherited: 0xe0)
struct U*49bdd9f8ff : UMovieScenePropertyTrack {
	struct FName PropertyName; // 0xb8(0x08)
	struct FString PropertyPath; // 0xc0(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xd0(0x10)
};

// Class UMG.*d6ff4797a2
// Size: 0xe0 (Inherited: 0xd0)
struct U*d6ff4797a2 : U*be5e5f7e3e {
	struct TArray<struct FName> *538530a004; // 0xc8(0x10)
	struct FName TrackName; // 0xd8(0x08)
};

// Class UMG.*920457baae
// Size: 0x28 (Inherited: 0x28)
struct U*920457baae : UInterface {
};

// Class UMG.*249bc50ddf
// Size: 0x48 (Inherited: 0x28)
struct U*249bc50ddf : UObject {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*5549c10072 SourcePath; // 0x30(0x10)
	struct FName *3fe8ae7e96; // 0x40(0x08)
};

// Class UMG.*5261d09113
// Size: 0x48 (Inherited: 0x48)
struct U*5261d09113 : U*249bc50ddf {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*5549c10072 SourcePath; // 0x30(0x10)
	struct FName *3fe8ae7e96; // 0x40(0x08)
};

// Class UMG.*6587d3aee8
// Size: 0x50 (Inherited: 0x48)
struct U*6587d3aee8 : U*249bc50ddf {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*5549c10072 SourcePath; // 0x30(0x10)
	struct FName *3fe8ae7e96; // 0x40(0x08)
};

// Class UMG.*30c4330022
// Size: 0x50 (Inherited: 0x48)
struct U*30c4330022 : U*249bc50ddf {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*5549c10072 SourcePath; // 0x30(0x10)
	struct FName *3fe8ae7e96; // 0x40(0x08)
};

// Class UMG.*76b4cc2dc5
// Size: 0x50 (Inherited: 0x48)
struct U*76b4cc2dc5 : U*249bc50ddf {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*5549c10072 SourcePath; // 0x30(0x10)
	struct FName *3fe8ae7e96; // 0x40(0x08)
};

// Class UMG.*6d9ead0d8c
// Size: 0x48 (Inherited: 0x48)
struct U*6d9ead0d8c : U*249bc50ddf {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*5549c10072 SourcePath; // 0x30(0x10)
	struct FName *3fe8ae7e96; // 0x40(0x08)
};

// Class UMG.*9f088cbf66
// Size: 0x48 (Inherited: 0x48)
struct U*9f088cbf66 : U*249bc50ddf {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*5549c10072 SourcePath; // 0x30(0x10)
	struct FName *3fe8ae7e96; // 0x40(0x08)
};

// Class UMG.*a0c9881f5f
// Size: 0x48 (Inherited: 0x48)
struct U*a0c9881f5f : U*249bc50ddf {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*5549c10072 SourcePath; // 0x30(0x10)
	struct FName *3fe8ae7e96; // 0x40(0x08)
};

// Class UMG.*b8b03a0048
// Size: 0x50 (Inherited: 0x48)
struct U*b8b03a0048 : U*249bc50ddf {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*5549c10072 SourcePath; // 0x30(0x10)
	struct FName *3fe8ae7e96; // 0x40(0x08)
};

// Class UMG.*340ab56d10
// Size: 0x48 (Inherited: 0x48)
struct U*340ab56d10 : U*249bc50ddf {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*5549c10072 SourcePath; // 0x30(0x10)
	struct FName *3fe8ae7e96; // 0x40(0x08)
};

// Class UMG.*83926c4172
// Size: 0x48 (Inherited: 0x48)
struct U*83926c4172 : U*249bc50ddf {
	struct UObject* SourceObject; // 0x28(0x08)
	struct F*5549c10072 SourcePath; // 0x30(0x10)
	struct FName *3fe8ae7e96; // 0x40(0x08)
};

// Class UMG.*da13e81127
// Size: 0x30 (Inherited: 0x28)
struct U*da13e81127 : UObject {
	bool bReveal; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32 RevealedIndex; // 0x2c(0x04)
};

// Class UMG.*82eb2c9dca
// Size: 0x28 (Inherited: 0x28)
struct U*82eb2c9dca : UBlueprintFunctionLibrary {
};

// Class UMG.*eddfd9fe3f
// Size: 0x430 (Inherited: 0x28)
struct U*eddfd9fe3f : UObject {
	struct UTexture2D* *15dc5d5403; // 0x28(0x08)
	char pad_30[0x400]; // 0x30(0x400)
};

// Class UMG.*58f86e8192
// Size: 0x60 (Inherited: 0x28)
struct U*58f86e8192 : UObject {
	struct TArray<struct F*da695a2c66> *06302e190c; // 0x28(0x10)
	struct TArray<uint32> *87c4e76370; // 0x38(0x10)
	struct UMaterialInterface* Material; // 0x48(0x08)
	struct FVector2D *8044774152; // 0x50(0x08)
	struct FVector2D *404d7c7b6c; // 0x58(0x08)
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x430 (Inherited: 0x3c0)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x3c0(0x08)
	bool *b9f37c028c; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct TArray<struct F*5ca9fc20d0> Bindings; // 0x3d0(0x10)
	struct TArray<struct U*6b11b3bf02*> Animations; // 0x3e0(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3f0(0x10)
	bool *bc97c9e972; // 0x400(0x01)
	bool *32de228706; // 0x401(0x01)
	bool *b23d513faf; // 0x402(0x01)
	char pad_403[0x5]; // 0x403(0x05)
	struct UUserWidget* *c3f675d351; // 0x408(0x20)
	struct UUserWidget* Template; // 0x428(0x08)
};

// Class UMG.*7aea8ea27e
// Size: 0x6a0 (Inherited: 0x28)
struct U*7aea8ea27e : UObject {
	char pad_28[0x348]; // 0x28(0x348)
	struct U*6b11b3bf02* Animation; // 0x370(0x08)
	char pad_378[0x328]; // 0x378(0x328)
};

// Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual {
	struct U*c1ef4cc603* Parent; // 0x28(0x08)
	struct UWidget* Content; // 0x30(0x08)
};

// Class UMG.*73eecc61e4
// Size: 0x60 (Inherited: 0x38)
struct U*73eecc61e4 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetHorizontalAlignment(); // Function UMG.*73eecc61e4.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d56cc8
	void SetVerticalAlignment(); // Function UMG.*73eecc61e4.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5b7b4
	void SetPadding(); // Function UMG.*73eecc61e4.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d595cc
};

// Class UMG.*26255869a0
// Size: 0x60 (Inherited: 0x38)
struct U*26255869a0 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetHorizontalAlignment(); // Function UMG.*26255869a0.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d56df0
	void SetVerticalAlignment(); // Function UMG.*26255869a0.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5b8dc
	void SetPadding(); // Function UMG.*26255869a0.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d5970c
};

// Class UMG.*9800899153
// Size: 0x60 (Inherited: 0x38)
struct U*9800899153 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetHorizontalAlignment(); // Function UMG.*9800899153.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d56e84
	void SetVerticalAlignment(); // Function UMG.*9800899153.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5b970
	void SetPadding(); // Function UMG.*9800899153.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d597ac
};

// Class UMG.*a08fc6dc58
// Size: 0x70 (Inherited: 0x38)
struct U*a08fc6dc58 : UPanelSlot {
	struct F*ef6a4066ac LayoutData; // 0x38(0x28)
	bool bAutoSize; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32 ZOrder; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)

	void SetOffsets(); // Function UMG.*a08fc6dc58.SetOffsets // Final|Native|Public|BlueprintCallable // @ game+0x6a70e8
	void *61af8cd53b(); // Function UMG.*a08fc6dc58.*61af8cd53b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52ed0
	void SetAnchors(); // Function UMG.*a08fc6dc58.SetAnchors // Final|Native|Public|BlueprintCallable // @ game+0x5d54a68
	void SetPosition(); // Function UMG.*a08fc6dc58.SetPosition // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d59e84
	void *d2b4c01368(); // Function UMG.*a08fc6dc58.*d2b4c01368 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51014
	void SetAlignment(); // Function UMG.*a08fc6dc58.SetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d54940
	void GetSize(); // Function UMG.*a08fc6dc58.GetSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52964
	void SetAutoSize(); // Function UMG.*a08fc6dc58.SetAutoSize // Final|Native|Public|BlueprintCallable // @ game+0x5d54e88
	void SetMinimum(); // Function UMG.*a08fc6dc58.SetMinimum // Final|Native|Public|HasDefaults // @ game+0x5d58fd4
	void GetAlignment(); // Function UMG.*a08fc6dc58.GetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d50c84
	void GetPosition(); // Function UMG.*a08fc6dc58.GetPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d5263c
	void *9e0cf81a90(); // Function UMG.*a08fc6dc58.*9e0cf81a90 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d5105c
	void *3fc48845a7(); // Function UMG.*a08fc6dc58.*3fc48845a7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52480
	void SetLayout(); // Function UMG.*a08fc6dc58.SetLayout // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5d585f0
	void GetLayout(); // Function UMG.*a08fc6dc58.GetLayout // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d520e4
	void SetMaximum(); // Function UMG.*a08fc6dc58.SetMaximum // Final|Native|Public|HasDefaults // @ game+0x5d58b20
	void SetZOrder(); // Function UMG.*a08fc6dc58.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x5d5c244
	void SetSize(); // Function UMG.*a08fc6dc58.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d5a620
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

	void SetColumn(); // Function UMG.GridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x5d55af0
	void SetVerticalAlignment(); // Function UMG.GridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5ba04
	void SetRowSpan(); // Function UMG.GridSlot.SetRowSpan // Final|Native|Public|BlueprintCallable // @ game+0x5d5a0cc
	void SetHorizontalAlignment(); // Function UMG.GridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d56f18
	void SetRow(); // Function UMG.GridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x5d59fb0
	void SetPadding(); // Function UMG.GridSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0xb062a4
	void SetLayer(); // Function UMG.GridSlot.SetLayer // Final|Native|Public|BlueprintCallable // @ game+0x5d584c8
	void SetColumnSpan(); // Function UMG.GridSlot.SetColumnSpan // Final|Native|Public|BlueprintCallable // @ game+0x5d55c0c
};

// Class UMG.*da2dead950
// Size: 0x60 (Inherited: 0x38)
struct U*da2dead950 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	struct FSlateChildSize Size; // 0x48(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetSize(); // Function UMG.*da2dead950.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x5d5a6ac
	void SetVerticalAlignment(); // Function UMG.*da2dead950.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5ba94
	void SetPadding(); // Function UMG.*da2dead950.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d5984c
	void SetHorizontalAlignment(); // Function UMG.*da2dead950.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d56fa8
};

// Class UMG.*c19dcb4813
// Size: 0x58 (Inherited: 0x38)
struct U*c19dcb4813 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32 ZOrder; // 0x4c(0x04)
	char pad_50[0x8]; // 0x50(0x08)

	void SetHorizontalAlignment(); // Function UMG.*c19dcb4813.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d57038
	void SetZOrder(); // Function UMG.*c19dcb4813.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x5d5c2d4
	void SetPadding(); // Function UMG.*c19dcb4813.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d598ec
	void SetVerticalAlignment(); // Function UMG.*c19dcb4813.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5bb24
	void *61af8cd53b(); // Function UMG.*c19dcb4813.*61af8cd53b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52ef4
};

// Class UMG.*020230c2d6
// Size: 0x60 (Inherited: 0x38)
struct U*020230c2d6 : UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FMargin SafeAreaScale; // 0x3c(0x10)
	enum class EHorizontalAlignment HAlign; // 0x4c(0x01)
	enum class EVerticalAlignment VAlign; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FMargin Padding; // 0x50(0x10)
};

// Class UMG.*2e2a015a45
// Size: 0x60 (Inherited: 0x38)
struct U*2e2a015a45 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetHorizontalAlignment(); // Function UMG.*2e2a015a45.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d570c8
	void SetVerticalAlignment(); // Function UMG.*2e2a015a45.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5bbb4
	void SetPadding(); // Function UMG.*2e2a015a45.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d5998c
};

// Class UMG.*e33191b74a
// Size: 0x58 (Inherited: 0x38)
struct U*e33191b74a : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	char pad_49[0xf]; // 0x49(0x0f)

	void SetPadding(); // Function UMG.*e33191b74a.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d59a20
	void SetHorizontalAlignment(); // Function UMG.*e33191b74a.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5715c
};

// Class UMG.*e4dae0adf5
// Size: 0x60 (Inherited: 0x38)
struct U*e4dae0adf5 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetHorizontalAlignment(); // Function UMG.*e4dae0adf5.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d571ec
	void SetVerticalAlignment(); // Function UMG.*e4dae0adf5.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5bc48
	void SetPadding(); // Function UMG.*e4dae0adf5.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d59ac0
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

	void SetColumn(); // Function UMG.UniformGridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x5d55b80
	void SetVerticalAlignment(); // Function UMG.UniformGridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5bcdc
	void SetRow(); // Function UMG.UniformGridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x5d5a040
	void SetHorizontalAlignment(); // Function UMG.UniformGridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d57280
};

// Class UMG.*1db1bb498a
// Size: 0x60 (Inherited: 0x38)
struct U*1db1bb498a : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	struct FSlateChildSize Size; // 0x48(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetSize(); // Function UMG.*1db1bb498a.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x5d5a7ec
	void SetVerticalAlignment(); // Function UMG.*1db1bb498a.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5ba94
	void SetPadding(); // Function UMG.*1db1bb498a.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d5984c
	void SetHorizontalAlignment(); // Function UMG.*1db1bb498a.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d56fa8
};

// Class UMG.*c5180b4275
// Size: 0x58 (Inherited: 0x38)
struct U*c5180b4275 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0xe]; // 0x4a(0x0e)

	void SetHorizontalAlignment(); // Function UMG.*c5180b4275.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d57038
	void SetVerticalAlignment(); // Function UMG.*c5180b4275.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5bb24
	void SetPadding(); // Function UMG.*c5180b4275.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d59a20
};

// Class UMG.*86d54e13f0
// Size: 0x160 (Inherited: 0x140)
struct U*86d54e13f0 : U*7fef63158a {
	bool bDoubleClickTogglesFullscreen; // 0x140(0x01)
	char pad_141[0x1f]; // 0x141(0x1f)

	void SetHorizontalAlignment(); // Function UMG.*86d54e13f0.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d57310
	void SetVerticalAlignment(); // Function UMG.*86d54e13f0.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5bd6c
	void SetPadding(); // Function UMG.*86d54e13f0.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d59b60
};

// Class UMG.*272bb23fb7
// Size: 0x60 (Inherited: 0x38)
struct U*272bb23fb7 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetHorizontalAlignment(); // Function UMG.*272bb23fb7.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d573a0
	void SetVerticalAlignment(); // Function UMG.*272bb23fb7.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5bdfc
	void SetPadding(); // Function UMG.*272bb23fb7.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d59c00
};

// Class UMG.*e04e139cb4
// Size: 0x60 (Inherited: 0x38)
struct U*e04e139cb4 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float FillSpanWhenLessThan; // 0x4c(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetFillEmptySpace(); // Function UMG.*e04e139cb4.SetFillEmptySpace // Final|Native|Public|BlueprintCallable // @ game+0x5d563e4
	void SetHorizontalAlignment(); // Function UMG.*e04e139cb4.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d57434
	void SetPadding(); // Function UMG.*e04e139cb4.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d59ca0
	void SetFillSpanWhenLessThan(); // Function UMG.*e04e139cb4.SetFillSpanWhenLessThan // Final|Native|Public|BlueprintCallable // @ game+0x5d56478
	void SetVerticalAlignment(); // Function UMG.*e04e139cb4.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5be90
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

	void SetPeriod(); // Function UMG.CircularThrobber.SetPeriod // Final|Native|Public|BlueprintCallable // @ game+0x5d59dd8
	void SetRadius(); // Function UMG.CircularThrobber.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x5d59f10
	void SetNumberOfPieces(); // Function UMG.CircularThrobber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x5d59204
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
	struct F*66dc9af89d WidgetStyle; // 0x150(0x870)
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
	bool *76866562c6; // 0xaa5(0x01)
	enum class EVirtualKeyboardType *bd48298631; // 0xaa6(0x01)
	char pad_AA7[0x1]; // 0xaa7(0x01)
	struct F*64a42c3900 ShapedTextOptions; // 0xaa8(0x08)
	struct FMulticastDelegate OnTextChanged; // 0xab0(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xac0(0x10)
	char pad_AD0[0x10]; // 0xad0(0x10)

	void SetText(); // Function UMG.EditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5d5af20
	void GetText(); // Function UMG.EditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52a28
	void OnEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1e037c
	void SetHintText(); // Function UMG.EditableTextBox.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x5d56b40
	struct FText OnEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1e037c
	void SetIsReadOnly(); // Function UMG.EditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5d57ff4
	void SetError(); // Function UMG.EditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x5d55ff0
	void HasError(); // Function UMG.EditableTextBox.HasError // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d53054
	void ClearError(); // Function UMG.EditableTextBox.ClearError // Final|Native|Public|BlueprintCallable // @ game+0x5d4f670
};

// Class UMG.ExpandableArea
// Size: 0x370 (Inherited: 0x128)
struct UExpandableArea : UWidget {
	char pad_128[0x8]; // 0x128(0x08)
	struct F*3a160e1e9c Style; // 0x130(0x130)
	struct FSlateBrush BorderBrush; // 0x260(0x90)
	struct FSlateColor BorderColor; // 0x2f0(0x28)
	bool bIsExpanded; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float MaxHeight; // 0x31c(0x04)
	struct FMargin HeaderPadding; // 0x320(0x10)
	struct FMargin AreaPadding; // 0x330(0x10)
	struct FMulticastDelegate OnExpansionChanged; // 0x340(0x10)
	struct UWidget* *83cc60e897; // 0x350(0x08)
	struct UWidget* *e3725f226f; // 0x358(0x08)
	char pad_360[0x10]; // 0x360(0x10)

	void SetIsExpanded(); // Function UMG.ExpandableArea.SetIsExpanded // Final|Native|Public|BlueprintCallable // @ game+0x5d57cd8
	void SetIsExpanded_Animated(); // Function UMG.ExpandableArea.SetIsExpanded_Animated // Final|Native|Public|BlueprintCallable // @ game+0x5d57d74
	void GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51ee0
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

	void SetBrushFromAsset(); // Function UMG.Image.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x5d55454
	void SetBrush(); // Function UMG.Image.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5d552c8
	void SetColorAndOpacity(); // Function UMG.Image.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xa1fc48
	void SetBrushFromTexture(); // Function UMG.Image.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0xae119c
	void SetOpacity(); // Function UMG.Image.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5d5935c
	void SetBrushFromMaterial(); // Function UMG.Image.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5d55574
	void SetBrushFromTextureDynamic(struct U*ec6d9c8af4* Texture); // Function UMG.Image.SetBrushFromTextureDynamic // Final|Native|Public|BlueprintCallable // @ game+0x5d55604
	void GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5d51690
	void SetBrushSize(); // Function UMG.Image.SetBrushSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d55898
};

// Class UMG.InputKeySelector
// Size: 0x228 (Inherited: 0x128)
struct UInputKeySelector : UWidget {
	struct F*83f86360e2 SelectedKey; // 0x128(0x20)
	struct FSlateFontInfo Font; // 0x148(0x68)
	struct FMargin Margin; // 0x1b0(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1c0(0x10)
	struct FText KeySelectionText; // 0x1d0(0x18)
	bool bAllowModifierKeys; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct FMulticastDelegate OnKeySelected; // 0x1f0(0x10)
	struct FMulticastDelegate OnIsSelectingKeyChanged; // 0x200(0x10)
	char pad_210[0x18]; // 0x210(0x18)

	void SetSelectedKey(); // Function UMG.InputKeySelector.SetSelectedKey // Final|Native|Public|BlueprintCallable // @ game+0x5d5a284
	void GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51f24
	void SetKeySelectionText(); // Function UMG.InputKeySelector.SetKeySelectionText // Final|Native|Public|BlueprintCallable // @ game+0x5d583d4
	void SetAllowModifierKeys(); // Function UMG.InputKeySelector.SetAllowModifierKeys // Final|Native|Public|BlueprintCallable // @ game+0x5d549cc
	void OnKeySelected__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
};

// Class UMG.NativeWidgetHost
// Size: 0x138 (Inherited: 0x128)
struct UNativeWidgetHost : UWidget {
	bool *a2a36e8264; // 0x28(0x01)
	bool *f44a5ad254; // 0x29(0x01)
	struct UPanelSlot* Slot; // 0x30(0x08)
	bool bIsEnabled; // 0x38(0x01)
	DelegateProperty bIsEnabledDelegate; // 0x40(0x10)
	DelegateProperty OnPrepass; // 0x50(0x10)
	struct FText ToolTipText; // 0x60(0x18)
	DelegateProperty ToolTipTextDelegate; // 0x78(0x10)
	struct UWidget* ToolTipWidget; // 0x88(0x08)
	DelegateProperty *cd3231348e; // 0x90(0x10)
	enum class ESlateVisibility Visiblity; // 0xa0(0x01)
	enum class ESlateVisibility Visibility; // 0xa1(0x01)
	DelegateProperty VisibilityDelegate; // 0xa8(0x10)
	char bOverride_Cursor : 1; // 0xb8(0x01)
	enum class EMouseCursor Cursor; // 0xbc(0x01)
	bool bIsVolatile; // 0xbd(0x01)
	struct FWidgetTransform RenderTransform; // 0xc0(0x1c)
	struct FVector2D RenderTransformPivot; // 0xdc(0x08)
	struct UWidgetNavigation* Navigation; // 0xe8(0x08)
	struct TArray<struct U*249bc50ddf*> *dffdcd9e23; // 0x118(0x10)

	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // Final|Native|Public|BlueprintCallable // @ game+0x5d4e2b0
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // Final|Native|Public|BlueprintCallable // @ game+0x5d4c514
	enum class EUINavigationRule SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // Final|Native|Public|BlueprintCallable // @ game+0x5d4dca0
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // Final|Native|Public|BlueprintCallable // @ game+0x5d4b924
	void GetParent(); // Function UMG.Widget.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bccc
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile // Final|Native|Public|BlueprintCallable // @ game+0x5d4b94c
	struct APlayerController* HasUserFocus(); // Function UMG.Widget.HasUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c3d4
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e498
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // Public|Delegate // @ game+0x1e037c
	struct F*387a87ac65 OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x1e037c
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // Final|Native|Public|BlueprintCallable // @ game+0xa1e650
	void IsVisible(); // Function UMG.Widget.IsVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c8ac
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void IsHovered(); // Function UMG.Widget.IsHovered // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c5e4
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // Final|Native|Public|BlueprintCallable // @ game+0x5d4dc8c
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bb20
	void SetCursor(); // Function UMG.Widget.SetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5d4d888
	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e524
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // Public|Delegate|HasDefaults // @ game+0x1e037c
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // Native|Public|BlueprintCallable // @ game+0x5d4dbf4
	void SetToolTip(); // Function UMG.Widget.SetToolTip // Final|Native|Public|BlueprintCallable // @ game+0x5d4e5c8
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c1f0
	struct FString GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5d4e658
	void SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // Final|Native|Public|BlueprintCallable // @ game+0x5d4d718
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xcf0070
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetVisibility(); // Function UMG.Widget.GetVisibility // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bf7c
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c13c
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bac4
	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e350
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus // Final|Native|Public|BlueprintCallable // @ game+0x5d4e734
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c474
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // Final|Native|Public|BlueprintCallable // @ game+0x5d4b938
	void ResetCursor(); // Function UMG.Widget.ResetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5d4d17c
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c290
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4baf0
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bc60
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c334
	void SetVisibility(); // Function UMG.Widget.SetVisibility // Native|Public|BlueprintCallable // @ game+0x1fed44
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // Native|Public|BlueprintCallable // @ game+0x567b5a0
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e3f4
};

// Class UMG.CanvasPanel
// Size: 0x150 (Inherited: 0x140)
struct UCanvasPanel : U*c1ef4cc603 {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52fb4
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51514
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d515b4
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x5d543c0
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51474
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x5d54320
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x5d4e9bc
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x5d4f65c
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52f98
};

// Class UMG.BackgroundBlur
// Size: 0x200 (Inherited: 0x140)
struct UBackgroundBlur : U*7fef63158a {
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

	void SetVerticalAlignment(); // Function UMG.BackgroundBlur.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5b720
	void SetLowQualityFallbackBrush(); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5d5872c
	void SetBlurRadius(); // Function UMG.BackgroundBlur.SetBlurRadius // Final|Native|Public|BlueprintCallable // @ game+0x5d550a0
	void SetBlurStrength(); // Function UMG.BackgroundBlur.SetBlurStrength // Native|Public|BlueprintCallable // @ game+0x5d55130
	void SetApplyAlphaToBlur(); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // Final|Native|Public|BlueprintCallable // @ game+0x5d54d54
	void SetPadding(); // Function UMG.BackgroundBlur.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d5952c
	void SetHorizontalAlignment(); // Function UMG.BackgroundBlur.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d56c34
};

// Class UMG.Border
// Size: 0x2a0 (Inherited: 0x140)
struct UBorder : U*7fef63158a {
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

	void SetBrushColor(); // Function UMG.Border.SetBrushColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xb19eec
	void SetVerticalAlignment(); // Function UMG.Border.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d5b848
	void SetPadding(); // Function UMG.Border.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d5966c
	void SetDesiredSizeScale(); // Function UMG.Border.SetDesiredSizeScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d55e10
	void SetBrushFromMaterial(); // Function UMG.Border.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5d554e4
	void SetBrushFromTexture(); // Function UMG.Border.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0x5d554e4
	void SetBrush(); // Function UMG.Border.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5d551cc
	void SetContentColorAndOpacity(); // Function UMG.Border.SetContentColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xa6b828
	void SetHorizontalAlignment(); // Function UMG.Border.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5d56d5c
	void GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5d5166c
	void SetBrushFromAsset(); // Function UMG.Border.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x5d553c4
};

// Class UMG.CheckBox
// Size: 0x7f0 (Inherited: 0x140)
struct UCheckBox : U*7fef63158a {
	enum class ECheckBoxState CheckedState; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	DelegateProperty CheckedStateDelegate; // 0x148(0x10)
	struct F*ea1c6f5c2e WidgetStyle; // 0x158(0x5e0)
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

	void IsChecked(); // Function UMG.CheckBox.IsChecked // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d53114
	void SetIsChecked(); // Function UMG.CheckBox.SetIsChecked // Final|Native|Public|BlueprintCallable // @ game+0x5d57c44
	void IsPressed(); // Function UMG.CheckBox.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d531fc
	void GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51450
	void SetCheckedState(); // Function UMG.CheckBox.SetCheckedState // Final|Native|Public|BlueprintCallable // @ game+0x5d559c8
};

// Class UMG.InvalidationBox
// Size: 0x158 (Inherited: 0x140)
struct UInvalidationBox : U*7fef63158a {
	bool *f9287edec4; // 0x140(0x01)
	bool CacheRelativeTransforms; // 0x141(0x01)
	char pad_142[0x16]; // 0x142(0x16)

	void GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51430
	void SetCanCache(); // Function UMG.InvalidationBox.SetCanCache // Final|Native|Public|BlueprintCallable // @ game+0x5d55934
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // Final|Native|Public|BlueprintCallable // @ game+0x5d530dc
};

// Class UMG.MenuAnchor
// Size: 0x180 (Inherited: 0x140)
struct UMenuAnchor : U*7fef63158a {
	struct UClass* MenuClass; // 0x140(0x08)
	DelegateProperty OnGetMenuContentEvent; // 0x148(0x10)
	enum class *68f032fedc Placement; // 0x158(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x159(0x01)
	bool UseApplicationMenuStack; // 0x15a(0x01)
	char pad_15B[0x5]; // 0x15b(0x05)
	struct FMulticastDelegate OnMenuOpenChanged; // 0x160(0x10)
	char pad_170[0x10]; // 0x170(0x10)

	void Close(); // Function UMG.MenuAnchor.Close // Final|Native|Public|BlueprintCallable // @ game+0x5d4f940
	void HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d530a4
	void ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d5c364
	void GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52280
	void IsOpen(); // Function UMG.MenuAnchor.IsOpen // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d5315c
	void ToggleOpen(); // Function UMG.MenuAnchor.ToggleOpen // Final|Native|Public|BlueprintCallable // @ game+0x5d5c798
	void Open(); // Function UMG.MenuAnchor.Open // Final|Native|Public|BlueprintCallable // @ game+0x5d53830
};

// Class UMG.NamedSlot
// Size: 0x150 (Inherited: 0x140)
struct UNamedSlot : U*7fef63158a {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52fb4
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51514
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d515b4
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x5d543c0
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51474
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x5d54320
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x5d4e9bc
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x5d4f65c
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52f98
};

// Class UMG.RetainerBox
// Size: 0x170 (Inherited: 0x140)
struct URetainerBox : U*7fef63158a {
	bool *fb798c1f65; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	int32 phase; // 0x144(0x04)
	int32 *89f3008bea; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x150(0x08)
	struct FName TextureParameter; // 0x158(0x08)
	char pad_160[0x10]; // 0x160(0x10)

	void GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d517ac
	void SetTextureParameter(); // Function UMG.RetainerBox.SetTextureParameter // Final|Native|Public|BlueprintCallable // @ game+0x5d5b2f4
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // Final|Native|Public|BlueprintCallable // @ game+0x5d54598
	void SetEffectMaterial(); // Function UMG.RetainerBox.SetEffectMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5d55f60
};

// Class UMG.SafeZone
// Size: 0x158 (Inherited: 0x140)
struct USafeZone : U*7fef63158a {
	bool PadLeft; // 0x140(0x01)
	bool PadRight; // 0x141(0x01)
	bool PadTop; // 0x142(0x01)
	bool PadBottom; // 0x143(0x01)
	char pad_144[0x14]; // 0x144(0x14)
};

// Class UMG.ScaleBox
// Size: 0x160 (Inherited: 0x140)
struct UScaleBox : U*7fef63158a {
	enum class EStretch Stretch; // 0x140(0x01)
	enum class EStretchDirection StretchDirection; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	float UserSpecifiedScale; // 0x144(0x04)
	bool IgnoreInheritedScale; // 0x148(0x01)
	char pad_149[0x17]; // 0x149(0x17)

	void SetStretchDirection(); // Function UMG.ScaleBox.SetStretchDirection // Final|Native|Public|BlueprintCallable // @ game+0x5d5acc4
	void SetIgnoreInheritedScale(); // Function UMG.ScaleBox.SetIgnoreInheritedScale // Final|Native|Public|BlueprintCallable // @ game+0x5d574c4
	void SetStretch(); // Function UMG.ScaleBox.SetStretch // Final|Native|Public|BlueprintCallable // @ game+0x5d5ac2c
	void SetUserSpecifiedScale(); // Function UMG.ScaleBox.SetUserSpecifiedScale // Final|Native|Public|BlueprintCallable // @ game+0x5d5b558
};

// Class UMG.SizeBox
// Size: 0x170 (Inherited: 0x140)
struct USizeBox : U*7fef63158a {
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

	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5d4f750
	void SetMaxAspectRatio(); // Function UMG.SizeBox.SetMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x5d58828
	void SetMaxDesiredWidth(); // Function UMG.SizeBox.SetMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5d58958
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x5d4f6d8
	void SetWidthOverride(); // Function UMG.SizeBox.SetWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x6a97d0
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5d4f700
	void SetMaxDesiredHeight(); // Function UMG.SizeBox.SetMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5d588c0
	void SetHeightOverride(); // Function UMG.SizeBox.SetHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x6a9754
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x5d4f92c
	void SetMinDesiredHeight(); // Function UMG.SizeBox.SetMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5d58bac
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5d4f73c
	void SetMinDesiredWidth(); // Function UMG.SizeBox.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5d58d74
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x5d4f6c4
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5d4f6ec
};

// Class UMG.Viewport
// Size: 0x168 (Inherited: 0x140)
struct UViewport : U*7fef63158a {
	struct FLinearColor BackgroundColor; // 0x140(0x10)
	char pad_150[0x18]; // 0x150(0x18)

	void SetViewLocation(); // Function UMG.Viewport.SetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d5bf20
	struct UClass* Spawn(); // Function UMG.Viewport.Spawn // Final|Native|Public|BlueprintCallable // @ game+0x5d5c6f8
	void GetViewRotation(); // Function UMG.Viewport.GetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52d3c
	void SetViewRotation(); // Function UMG.Viewport.SetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d5bfd8
	void GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52eb0
	void GetViewLocation(); // Function UMG.Viewport.GetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52cf0
};

// Class UMG.GridPanel
// Size: 0x170 (Inherited: 0x140)
struct UGridPanel : U*c1ef4cc603 {
	struct TArray<float> ColumnFill; // 0x140(0x10)
	struct TArray<float> RowFill; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)

	struct UWidget* AddChildToGrid(); // Function UMG.GridPanel.AddChildToGrid // Final|Native|Public|BlueprintCallable // @ game+0x5d4eb5c
};

// Class UMG.HorizontalBox
// Size: 0x150 (Inherited: 0x140)
struct UHorizontalBox : U*c1ef4cc603 {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52fb4
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51514
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d515b4
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x5d543c0
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51474
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x5d54320
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x5d4e9bc
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x5d4f65c
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52f98
};

// Class UMG.Overlay
// Size: 0x150 (Inherited: 0x140)
struct UOverlay : U*c1ef4cc603 {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52fb4
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51514
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d515b4
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x5d543c0
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51474
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x5d54320
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x5d4e9bc
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x5d4f65c
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52f98
};

// Class UMG.ScrollBox
// Size: 0x8d8 (Inherited: 0x140)
struct UScrollBox : U*c1ef4cc603 {
	struct F*22ad09d4a5 WidgetStyle; // 0x140(0x248)
	struct F*136abc3336 WidgetBarStyle; // 0x388(0x518)
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

	void GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52848
	struct UWidget* ScrollWidgetIntoView(); // Function UMG.ScrollBox.ScrollWidgetIntoView // Final|Native|Public|BlueprintCallable // @ game+0x5d54670
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // Final|Native|Public|BlueprintCallable // @ game+0x5d545ac
	void GetScrollToEndOffset(); // Function UMG.ScrollBox.GetScrollToEndOffset // Final|Native|Public|BlueprintCallable // @ game+0x5d52868
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // Final|Native|Public|BlueprintCallable // @ game+0x5d545c0
	void SetScrollBarVisibility(); // Function UMG.ScrollBox.SetScrollBarVisibility // Final|Native|Public|BlueprintCallable // @ game+0x5d5a15c
	void SetScrollOffset(); // Function UMG.ScrollBox.SetScrollOffset // Final|Native|Public|BlueprintCallable // @ game+0x5d5a1ec
};

// Class UMG.UniformGridPanel
// Size: 0x168 (Inherited: 0x140)
struct UUniformGridPanel : U*c1ef4cc603 {
	struct FMargin SlotPadding; // 0x140(0x10)
	float MinDesiredSlotWidth; // 0x150(0x04)
	float MinDesiredSlotHeight; // 0x154(0x04)
	char pad_158[0x10]; // 0x158(0x10)

	void SetMinDesiredSlotWidth(); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // Final|Native|Public|BlueprintCallable // @ game+0x5d58cdc
	void AddChildToUniformGrid(struct UWidget* Content); // Function UMG.UniformGridPanel.AddChildToUniformGrid // Final|Native|Public|BlueprintCallable // @ game+0x5d4ee5c
	void SetSlotPadding(); // Function UMG.UniformGridPanel.SetSlotPadding // Final|Native|Public|BlueprintCallable // @ game+0x5d5a9f8
	void SetMinDesiredSlotHeight(); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // Final|Native|Public|BlueprintCallable // @ game+0x5d58c44
};

// Class UMG.VerticalBox
// Size: 0x150 (Inherited: 0x140)
struct UVerticalBox : U*c1ef4cc603 {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52fb4
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51514
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d515b4
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x5d543c0
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d51474
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x5d54320
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x5d4e9bc
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x5d4f65c
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52f98
};

// Class UMG.WrapBox
// Size: 0x160 (Inherited: 0x140)
struct UWrapBox : U*c1ef4cc603 {
	struct FVector2D InnerSlotPadding; // 0x140(0x08)
	float WrapWidth; // 0x148(0x04)
	bool bExplicitWrapWidth; // 0x14c(0x01)
	char pad_14D[0x13]; // 0x14d(0x13)

	void SetInnerSlotPadding(); // Function UMG.WrapBox.SetInnerSlotPadding // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d575f0
	void AddChildWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildWrapBox // Final|Native|Public|BlueprintCallable // @ game+0x5d4f05c
};

// Class UMG.ProgressBar
// Size: 0x348 (Inherited: 0x128)
struct UProgressBar : UWidget {
	struct F*4153f21470 WidgetStyle; // 0x128(0x1b8)
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

	void SetFillColorAndOpacity(); // Function UMG.ProgressBar.SetFillColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d5634c
	void SetIsMarquee(); // Function UMG.ProgressBar.SetIsMarquee // Final|Native|Public|BlueprintCallable // @ game+0x5d57e10
	void SetPercent(); // Function UMG.ProgressBar.SetPercent // Final|Native|Public|BlueprintCallable // @ game+0x5d59d40
};

// Class UMG.ScrollBar
// Size: 0x668 (Inherited: 0x128)
struct UScrollBar : UWidget {
	struct F*136abc3336 WidgetStyle; // 0x128(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x640(0x08)
	bool *5de23e29fa; // 0x648(0x01)
	enum class EOrientation Orientation; // 0x649(0x01)
	char pad_64A[0x2]; // 0x64a(0x02)
	struct FVector2D Thickness; // 0x64c(0x08)
	char pad_654[0x14]; // 0x654(0x14)

	void SetState(float InOffsetFraction); // Function UMG.ScrollBar.SetState // Final|Native|Public|BlueprintCallable // @ game+0x5d5aa98
};

// Class UMG.Slider
// Size: 0x420 (Inherited: 0x128)
struct USlider : UWidget {
	float Value; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	DelegateProperty ValueDelegate; // 0x130(0x10)
	struct F*ef20c0e1ee WidgetStyle; // 0x140(0x250)
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

	void SetIndentHandle(); // Function UMG.Slider.SetIndentHandle // Final|Native|Public|BlueprintCallable // @ game+0x5d5755c
	void SetSliderHandleColor(); // Function UMG.Slider.SetSliderHandleColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d5a94c
	void SetStepSize(); // Function UMG.Slider.SetStepSize // Final|Native|Public|BlueprintCallable // @ game+0x5d5ab94
	void SetSliderBarColor(); // Function UMG.Slider.SetSliderBarColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d5a8a0
	void SetLocked(); // Function UMG.Slider.SetLocked // Final|Native|Public|BlueprintCallable // @ game+0x5d58698
	void GetValue(); // Function UMG.Slider.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52ca0
	void SetValue(); // Function UMG.Slider.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x5d5b5f0
};

// Class UMG.Spacer
// Size: 0x140 (Inherited: 0x128)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x128(0x08)
	char pad_130[0x10]; // 0x130(0x10)

	void SetSize(); // Function UMG.Spacer.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d5a760
};

// Class UMG.SpinBox
// Size: 0x560 (Inherited: 0x128)
struct USpinBox : UWidget {
	float Value; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	DelegateProperty ValueDelegate; // 0x130(0x10)
	struct F*b5d3bae02e WidgetStyle; // 0x140(0x310)
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
	float *25c62d56de; // 0x544(0x04)
	float *053fc64132; // 0x548(0x04)
	char pad_54C[0x14]; // 0x54c(0x14)

	void SetMinValue(); // Function UMG.SpinBox.SetMinValue // Final|Native|Public|BlueprintCallable // @ game+0x5d58f3c
	void SetMaxSliderValue(); // Function UMG.SpinBox.SetMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5d589f0
	void GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52258
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	void SetMaxValue(); // Function UMG.SpinBox.SetMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x5d58a88
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x5d4f728
	void GetMinValue(); // Function UMG.SpinBox.GetMinValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d522f0
	void SetMinSliderValue(); // Function UMG.SpinBox.SetMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5d58ea4
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5d4f714
	void GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d522c8
	void GetValue(); // Function UMG.SpinBox.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52cc8
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5d4f764
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // Final|Native|Public|BlueprintCallable // @ game+0x5d4f778
	void OnSpinBoxValueChangedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	float OnSpinBoxValueCommittedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	void SetForegroundColor(); // Function UMG.SpinBox.SetForegroundColor // Final|Native|Public|BlueprintCallable // @ game+0x5d56724
	void GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52230
	void SetValue(); // Function UMG.SpinBox.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x5d5b688
};

// Class UMG.*b82ec38359
// Size: 0x128 (Inherited: 0x128)
struct U*b82ec38359 : UWidget {
	bool *a2a36e8264; // 0x28(0x01)
	bool *f44a5ad254; // 0x29(0x01)
	struct UPanelSlot* Slot; // 0x30(0x08)
	bool bIsEnabled; // 0x38(0x01)
	DelegateProperty bIsEnabledDelegate; // 0x40(0x10)
	DelegateProperty OnPrepass; // 0x50(0x10)
	struct FText ToolTipText; // 0x60(0x18)
	DelegateProperty ToolTipTextDelegate; // 0x78(0x10)
	struct UWidget* ToolTipWidget; // 0x88(0x08)
	DelegateProperty *cd3231348e; // 0x90(0x10)
	enum class ESlateVisibility Visiblity; // 0xa0(0x01)
	enum class ESlateVisibility Visibility; // 0xa1(0x01)
	DelegateProperty VisibilityDelegate; // 0xa8(0x10)
	char bOverride_Cursor : 1; // 0xb8(0x01)
	enum class EMouseCursor Cursor; // 0xbc(0x01)
	bool bIsVolatile; // 0xbd(0x01)
	struct FWidgetTransform RenderTransform; // 0xc0(0x1c)
	struct FVector2D RenderTransformPivot; // 0xdc(0x08)
	struct UWidgetNavigation* Navigation; // 0xe8(0x08)
	struct TArray<struct U*249bc50ddf*> *dffdcd9e23; // 0x118(0x10)

	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // Final|Native|Public|BlueprintCallable // @ game+0x5d4e2b0
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // Final|Native|Public|BlueprintCallable // @ game+0x5d4c514
	enum class EUINavigationRule SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // Final|Native|Public|BlueprintCallable // @ game+0x5d4dca0
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // Final|Native|Public|BlueprintCallable // @ game+0x5d4b924
	void GetParent(); // Function UMG.Widget.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bccc
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile // Final|Native|Public|BlueprintCallable // @ game+0x5d4b94c
	struct APlayerController* HasUserFocus(); // Function UMG.Widget.HasUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c3d4
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e498
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // Public|Delegate // @ game+0x1e037c
	struct F*387a87ac65 OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x1e037c
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // Final|Native|Public|BlueprintCallable // @ game+0xa1e650
	void IsVisible(); // Function UMG.Widget.IsVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c8ac
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void IsHovered(); // Function UMG.Widget.IsHovered // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c5e4
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // Final|Native|Public|BlueprintCallable // @ game+0x5d4dc8c
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bb20
	void SetCursor(); // Function UMG.Widget.SetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5d4d888
	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e524
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // Public|Delegate|HasDefaults // @ game+0x1e037c
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // Native|Public|BlueprintCallable // @ game+0x5d4dbf4
	void SetToolTip(); // Function UMG.Widget.SetToolTip // Final|Native|Public|BlueprintCallable // @ game+0x5d4e5c8
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c1f0
	struct FString GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5d4e658
	void SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // Final|Native|Public|BlueprintCallable // @ game+0x5d4d718
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xcf0070
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetVisibility(); // Function UMG.Widget.GetVisibility // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bf7c
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c13c
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bac4
	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e350
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus // Final|Native|Public|BlueprintCallable // @ game+0x5d4e734
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // Public|Delegate // @ game+0x1e037c
	void HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c474
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // Final|Native|Public|BlueprintCallable // @ game+0x5d4b938
	void ResetCursor(); // Function UMG.Widget.ResetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5d4d17c
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c290
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4baf0
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4bc60
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d4c334
	void SetVisibility(); // Function UMG.Widget.SetVisibility // Native|Public|BlueprintCallable // @ game+0x1fed44
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // Native|Public|BlueprintCallable // @ game+0x567b5a0
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5d4e3f4
};

// Class UMG.ListView
// Size: 0x168 (Inherited: 0x128)
struct UListView : U*b82ec38359 {
	float *68108bf9a8; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<struct UObject*> Items; // 0x130(0x10)
	enum class ESelectionMode *aff13502d2; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	DelegateProperty OnGenerateRowEvent; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)
};

// Class UMG.TileView
// Size: 0x168 (Inherited: 0x128)
struct UTileView : U*b82ec38359 {
	float *bd29a6b0c6; // 0x128(0x04)
	float *68108bf9a8; // 0x12c(0x04)
	struct TArray<struct UObject*> Items; // 0x130(0x10)
	enum class ESelectionMode *aff13502d2; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	DelegateProperty OnGenerateTileEvent; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)

	void SetItemHeight(); // Function UMG.TileView.SetItemHeight // Final|Native|Public|BlueprintCallable // @ game+0x5d581d8
	void RequestListRefresh(); // Function UMG.TileView.RequestListRefresh // Final|Native|Public|BlueprintCallable // @ game+0x5d5457c
	void SetItemWidth(); // Function UMG.TileView.SetItemWidth // Final|Native|Public|BlueprintCallable // @ game+0x5d5828c
};

// Class UMG.MultiLineEditableText
// Size: 0x440 (Inherited: 0x150)
struct UMultiLineEditableText : U*800d766cf7 {
	struct FText Text; // 0x150(0x18)
	struct FText HintText; // 0x168(0x18)
	DelegateProperty HintTextDelegate; // 0x180(0x10)
	struct F*37ba76b02f WidgetStyle; // 0x190(0x208)
	bool bIsReadOnly; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FSlateFontInfo Font; // 0x3a0(0x68)
	bool *76866562c6; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FMulticastDelegate OnTextChanged; // 0x410(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x420(0x10)
	char pad_430[0x10]; // 0x430(0x10)

	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1e037c
	void SetText(); // Function UMG.MultiLineEditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5d5b014
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1e037c
	void GetText(); // Function UMG.MultiLineEditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52ae8
	void SetIsReadOnly(); // Function UMG.MultiLineEditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5d580b0
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xce0 (Inherited: 0x150)
struct UMultiLineEditableTextBox : U*800d766cf7 {
	struct FText Text; // 0x150(0x18)
	struct FText HintText; // 0x168(0x18)
	DelegateProperty HintTextDelegate; // 0x180(0x10)
	struct F*66dc9af89d WidgetStyle; // 0x190(0x870)
	struct F*37ba76b02f TextStyle; // 0xa00(0x208)
	bool bIsReadOnly; // 0xc08(0x01)
	bool *76866562c6; // 0xc09(0x01)
	char pad_C0A[0x6]; // 0xc0a(0x06)
	struct USlateWidgetStyleAsset* Style; // 0xc10(0x08)
	struct FSlateFontInfo Font; // 0xc18(0x68)
	struct FLinearColor ForegroundColor; // 0xc80(0x10)
	struct FLinearColor BackgroundColor; // 0xc90(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xca0(0x10)
	struct FMulticastDelegate OnTextChanged; // 0xcb0(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xcc0(0x10)
	char pad_CD0[0x10]; // 0xcd0(0x10)

	void GetText(); // Function UMG.MultiLineEditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52ba0
	void SetIsReadOnly(); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5d58144
	void SetText(); // Function UMG.MultiLineEditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5d5b108
	void SetError(); // Function UMG.MultiLineEditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x5d56154
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1e037c
	struct FText OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1e037c
};

// Class UMG.RichTextBlock
// Size: 0x418 (Inherited: 0x150)
struct URichTextBlock : U*800d766cf7 {
	struct FText Text; // 0x150(0x18)
	DelegateProperty TextDelegate; // 0x168(0x10)
	struct FSlateFontInfo Font; // 0x178(0x68)
	struct FLinearColor Color; // 0x1e0(0x10)
	struct TArray<struct U*da13e81127*> *46457a50e7; // 0x1f0(0x10)
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

	void SetAnimateHorizontally(); // Function UMG.Throbber.SetAnimateHorizontally // Final|Native|Public|BlueprintCallable // @ game+0x5d54b08
	void SetAnimateOpacity(); // Function UMG.Throbber.SetAnimateOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5d54bcc
	void SetNumberOfPieces(); // Function UMG.Throbber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x5d592ac
	void SetAnimateVertically(); // Function UMG.Throbber.SetAnimateVertically // Final|Native|Public|BlueprintCallable // @ game+0x5d54c94
};

// Class UMG.*6b11b3bf02
// Size: 0x380 (Inherited: 0x330)
struct U*6b11b3bf02 : UMovieSceneSequence {
	struct FMulticastDelegate OnAnimationStarted; // 0x330(0x10)
	struct FMulticastDelegate OnAnimationFinished; // 0x340(0x10)
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct TArray<struct F*1ed79fbba3> *3ae9f8139b; // 0x358(0x10)
	struct FString *951afb8d1f; // 0x368(0x10)
	char pad_378[0x8]; // 0x378(0x08)

	void *c9cd820bbc(); // Function UMG.*6b11b3bf02.*c9cd820bbc // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d52994
	void *4e238aec7b(); // Function UMG.*6b11b3bf02.*4e238aec7b // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d517d4
};

// Class UMG.*11415fb091
// Size: 0x28 (Inherited: 0x28)
struct U*11415fb091 : UBlueprintFunctionLibrary {
};

// Class UMG.*f39056125e
// Size: 0x6c0 (Inherited: 0x4d0)
struct U*f39056125e : USceneComponent {
	struct FMulticastDelegate OnHoveredWidgetChanged; // 0x4d0(0x10)
	char pad_4E0[0x10]; // 0x4e0(0x10)
	int32 VirtualUserIndex; // 0x4f0(0x04)
	float PointerIndex; // 0x4f4(0x04)
	enum class ECollisionChannel TraceChannel; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float InteractionDistance; // 0x4fc(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x500(0x01)
	bool bEnableHitTesting; // 0x501(0x01)
	bool bShowDebug; // 0x502(0x01)
	char pad_503[0x1]; // 0x503(0x01)
	struct FLinearColor DebugColor; // 0x504(0x10)
	char pad_514[0x7c]; // 0x514(0x7c)
	struct FHitResult *60ab5c187d; // 0x590(0x88)
	struct FVector2D *fb9efc094b; // 0x618(0x08)
	struct FVector2D *3ff04ad9a5; // 0x620(0x08)
	struct UWidgetComponent* *4ec63d53e7; // 0x628(0x08)
	struct FHitResult *fc5c0e3e4b; // 0x630(0x88)
	bool *b770f797d5; // 0x6b8(0x01)
	bool *8a13e59698; // 0x6b9(0x01)
	bool *6c09f7592c; // 0x6ba(0x01)
	char pad_6BB[0x5]; // 0x6bb(0x05)

	bool *c64fd914e3(); // Function UMG.*f39056125e.*c64fd914e3 // Native|Public|BlueprintCallable // @ game+0x5d54750
	void *bee5c18387(); // Function UMG.*f39056125e.*bee5c18387 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5d50c38
	void *0395532ee5(); // Function UMG.*f39056125e.*0395532ee5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d531c0
	void *eacd357f7c(); // Function UMG.*f39056125e.*eacd357f7c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5d55d48
	void *af48f7b75f(); // Function UMG.*f39056125e.*af48f7b75f // Native|Public|BlueprintCallable // @ game+0x5d53b1c
	void *59acb48368(); // Function UMG.*f39056125e.*59acb48368 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d53190
	void *8e37988746(); // Function UMG.*f39056125e.*8e37988746 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d531a8
	bool *58cbe2b669(); // Function UMG.*f39056125e.*58cbe2b669 // Native|Public|BlueprintCallable // @ game+0x5d539d0
	void *31f0a31ab0(); // Function UMG.*f39056125e.*31f0a31ab0 // Native|Public|BlueprintCallable // @ game+0x5d5419c
	void *9989608622(); // Function UMG.*f39056125e.*9989608622 // Native|Public|BlueprintCallable // @ game+0x5d545d4
	void *b18ecd661e(); // Function UMG.*f39056125e.*b18ecd661e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d519b8
	void *48c1693956(); // Function UMG.*f39056125e.*48c1693956 // Native|Public|BlueprintCallable // @ game+0x5d538d8
	struct FKey *bc697bc58b(); // Function UMG.*f39056125e.*bc697bc58b // Native|Public|BlueprintCallable // @ game+0x5d53f70
	void *3c324c59e9(); // Function UMG.*f39056125e.*3c324c59e9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d520c8
};

// Class UMG.*d96599827d
// Size: 0x28 (Inherited: 0x28)
struct U*d96599827d : UBlueprintFunctionLibrary {
};

// Class UMG.WidgetNavigation
// Size: 0xb8 (Inherited: 0x28)
struct UWidgetNavigation : UObject {
	struct F*0ed5837138 Up; // 0x28(0x18)
	struct F*0ed5837138 Down; // 0x40(0x18)
	struct F*0ed5837138 Left; // 0x58(0x18)
	struct F*0ed5837138 Right; // 0x70(0x18)
	struct F*0ed5837138 Next; // 0x88(0x18)
	struct F*0ed5837138 Previous; // 0xa0(0x18)
};

// Class UMG.WidgetTree
// Size: 0x30 (Inherited: 0x28)
struct UWidgetTree : UObject {
	struct UWidget* *b0519a3b2a; // 0x28(0x08)
};


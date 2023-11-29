// Class UMG.Visual
// Size: 0x30 (Inherited: 0x30)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x130 (Inherited: 0x30)
struct UWidget : UVisual {
	bool *a6eafe4c19; // 0x30(0x01)
	bool *65724910ec; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UPanelSlot* Slot; // 0x38(0x08)
	bool bIsEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	DelegateProperty bIsEnabledDelegate; // 0x48(0x10)
	DelegateProperty OnPrepass; // 0x58(0x10)
	struct FText ToolTipText; // 0x68(0x18)
	DelegateProperty ToolTipTextDelegate; // 0x80(0x10)
	struct UWidget* ToolTipWidget; // 0x90(0x08)
	DelegateProperty *0d27dbe1b1; // 0x98(0x10)
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
	struct TArray<struct U*e74f5ed9b0*> *524c18407e; // 0x120(0x10)

	struct FVector2D SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5e9d9a8
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b5f8
	struct U*d76301fdac* GetParent(); // Function UMG.Widget.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b174
	struct FText SetToolTipText(); // Function UMG.Widget.SetToolTipText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e9dadc
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b7f0
	struct UWidget* EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	struct FVector2D SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5e9d91c
	enum class ESlateVisibility SetVisibility(); // Function UMG.Widget.SetVisibility // Native|Public|BlueprintCallable // @ game+0x8a9798
	struct UUserWidget* GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b108
	int32 GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // Native|Public|BlueprintCallable // @ game+0x57d80b8
	struct FEventReply OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x1dcd78
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // Final|Native|Public|BlueprintCallable // @ game+0x5e9adb0
	struct FWidgetTransform SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // Final|Native|Public|BlueprintCallable // @ game+0xa97f88
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // Final|Native|Public|BlueprintCallable // @ game+0x5e9b9d0
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9af98
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b6ac
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	bool IsVisible(); // Function UMG.Widget.IsVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9bd30
	enum class EMouseCursor SetCursor(); // Function UMG.Widget.SetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5e9cd0c
	bool IsHovered(); // Function UMG.Widget.IsHovered // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9baa0
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	bool SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // Native|Public|BlueprintCallable // @ game+0x5e9d078
	struct APlayerController* SetUserFocus(); // Function UMG.Widget.SetUserFocus // Final|Native|Public|BlueprintCallable // @ game+0x5e9dbb8
	struct UWidget* GenerateWidgetForObject__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9af68
	void ResetCursor(); // Function UMG.Widget.ResetCursor // Final|Native|Public|BlueprintCallable // @ game+0x5e9c600
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b424
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // Public|Delegate|HasDefaults // @ game+0x1dcd78
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	bool HasUserFocus(); // Function UMG.Widget.HasUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b890
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xd8264c
	float SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // Final|Native|Public|BlueprintCallable // @ game+0x5e9d734
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9af3c
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // Final|Native|Public|BlueprintCallable // @ game+0x5e9d110
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // Final|Native|Public|BlueprintCallable // @ game+0x5e9ad9c
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	struct FName SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // Final|Native|Public|BlueprintCallable // @ game+0x5e9d124
	bool HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b930
	struct FName SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // Final|Native|Public|BlueprintCallable // @ game+0x5e9cb9c
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b74c
	struct FVector2D SetRenderScale(); // Function UMG.Widget.SetRenderScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5e9d7d4
	struct UWidget* GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	struct UWidget* SetToolTip(); // Function UMG.Widget.SetToolTip // Final|Native|Public|BlueprintCallable // @ game+0x5e9da4c
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // Public|Delegate // @ game+0x1dcd78
	bool ForceVolatile(); // Function UMG.Widget.ForceVolatile // Final|Native|Public|BlueprintCallable // @ game+0x5e9adc4
	struct FVector2D SetRenderShear(); // Function UMG.Widget.SetRenderShear // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5e9d878
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
	struct TArray<struct U*89f5a4ae38*> *cfbde3e973; // 0x1a8(0x10)
	struct TArray<struct U*89f5a4ae38*> *7cbb0d5e23; // 0x1b8(0x10)
	bool bStopAction; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	int32 Priority; // 0x1cc(0x04)
	struct TArray<struct F*c8144ff210> *1da74d2862; // 0x1d0(0x10)
	struct UWidgetTree* WidgetTree; // 0x1e0(0x08)
	char bCanEverTick : 1; // 0x1e8(0x01)
	char *cdebf7db93 : 1; // 0x1e8(0x01)
	char pad_1E8_2 : 6; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	char *06b5f0206f : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct U*37a897c2a6* *37a897c2a6; // 0x1f8(0x08)
	char pad_200[0x58]; // 0x200(0x58)

	struct U*3335e92189* OnAnimationFinished(); // Function UMG.UserWidget.OnAnimationFinished // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x5fd360
	struct UWidgetComponent* GetWidgetComponent(); // Function UMG.UserWidget.GetWidgetComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b448
	void Destruct(); // Function UMG.UserWidget.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct F*a3e4749da2 OnMouseLeave(); // Function UMG.UserWidget.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	enum class *1148c7239b StopListeningForInputAction(); // Function UMG.UserWidget.StopListeningForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x5e9dc70
	float PauseAnimation(); // Function UMG.UserWidget.PauseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9c280
	struct FSlateColor SetForegroundColor(); // Function UMG.UserWidget.SetForegroundColor // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9ce48
	struct U*3335e92189* ReverseAnimation(); // Function UMG.UserWidget.ReverseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9c614
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x5e9c5ec
	struct FEventReply OnControllerAnalogValueChanged(); // Function UMG.UserWidget.OnControllerAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x1dcd78
	bool SetInputActionBlocking(); // Function UMG.UserWidget.SetInputActionBlocking // Final|Native|Protected|BlueprintCallable // @ game+0x5e9cf3c
	struct FEventReply OnTouchStarted(); // Function UMG.UserWidget.OnTouchStarted // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // BlueprintCosmetic|Event|Public|BlueprintEvent|Const // @ game+0x1dcd78
	struct APlayerController* SetOwningPlayer(); // Function UMG.UserWidget.SetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9d430
	struct FVector2D SetAlignmentInViewport(); // Function UMG.UserWidget.SetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5e9cb00
	struct UDragDropOperation* OnDragCancelled(); // Function UMG.UserWidget.OnDragCancelled // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	float SetPlaybackSpeed(); // Function UMG.UserWidget.SetPlaybackSpeed // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9d57c
	struct FEventReply OnControllerButtonReleased(); // Function UMG.UserWidget.OnControllerButtonReleased // Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct APlayerController* GetOwningPlayer(); // Function UMG.UserWidget.GetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xd8264c
	float GetAnimationCurrentTime(); // Function UMG.UserWidget.GetAnimationCurrentTime // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9ae9c
	void FinishStoppedSequencePlayers(); // Function UMG.UserWidget.FinishStoppedSequencePlayers // Final|Native|Public|BlueprintCallable // @ game+0x5e9ad88
	struct FEventReply OnTouchGesture(); // Function UMG.UserWidget.OnTouchGesture // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	struct FEventReply OnKeyDown(); // Function UMG.UserWidget.OnKeyDown // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct FEventReply OnMouseButtonDown(); // Function UMG.UserWidget.OnMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.UserWidget.GetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b12c
	struct FMargin SetPadding(); // Function UMG.UserWidget.SetPadding // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9d4dc
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9ba84
	struct U*3335e92189* OnAnimationStarted(); // Function UMG.UserWidget.OnAnimationStarted // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x5fd848
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b150
	bool PreConstruct(); // Function UMG.UserWidget.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct USoundBase* PlaySound(); // Function UMG.UserWidget.PlaySound // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9c540
	struct FEventReply OnPreviewMouseButtonDown(); // Function UMG.UserWidget.OnPreviewMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	struct FEventReply OnKeyChar(); // Function UMG.UserWidget.OnKeyChar // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9ae58
	float PlayAnimation(); // Function UMG.UserWidget.PlayAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xc8d368
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9afbc
	int32 AddToViewport(); // Function UMG.UserWidget.AddToViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9a76c
	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x5e9dd54
	bool SetPositionInViewport(); // Function UMG.UserWidget.SetPositionInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5e9d65c
	struct FEventReply OnKeyUp(); // Function UMG.UserWidget.OnKeyUp // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	int32 SetInputActionPriority(); // Function UMG.UserWidget.SetInputActionPriority // Final|Native|Protected|BlueprintCallable // @ game+0x5e9cfe0
	bool OnDrop(); // Function UMG.UserWidget.OnDrop // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct UDragDropOperation* OnDragLeave(); // Function UMG.UserWidget.OnDragLeave // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct FVector2D SetDesiredSizeInViewport(); // Function UMG.UserWidget.SetDesiredSizeInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5e9cda0
	bool IsListeningForInputAction(); // Function UMG.UserWidget.IsListeningForInputAction // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9bac4
	struct UDragDropOperation* OnDragDetected(); // Function UMG.UserWidget.OnDragDetected // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9ba84
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x57d80b8
	struct FEventReply OnTouchEnded(); // Function UMG.UserWidget.OnTouchEnded // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	struct FFocusEvent OnFocusLost(); // Function UMG.UserWidget.OnFocusLost // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct FEventReply OnMouseMove(); // Function UMG.UserWidget.OnMouseMove // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9afbc
	struct UDragDropOperation* OnDragEnter(); // Function UMG.UserWidget.OnDragEnter // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	DelegateProperty ListenForInputAction(); // Function UMG.UserWidget.ListenForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x5e9bd54
	struct FLinearColor SetColorAndOpacity(); // Function UMG.UserWidget.SetColorAndOpacity // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x85e504
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9ae80
	struct U*3335e92189* StopAnimation(); // Function UMG.UserWidget.StopAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xbad29c
	struct FEventReply OnMouseButtonUp(); // Function UMG.UserWidget.OnMouseButtonUp // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	int32 SetNumLoopsToPlay(); // Function UMG.UserWidget.SetNumLoopsToPlay // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9d25c
	bool OnDragOver(); // Function UMG.UserWidget.OnDragOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct ULocalPlayer* SetOwningLocalPlayer(); // Function UMG.UserWidget.SetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9d384
	struct FEventReply OnMouseButtonDoubleClick(); // Function UMG.UserWidget.OnMouseButtonDoubleClick // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	struct FEventReply OnMouseWheel(); // Function UMG.UserWidget.OnMouseWheel // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	struct FEventReply OnControllerButtonPressed(); // Function UMG.UserWidget.OnControllerButtonPressed // Event|Public|BlueprintEvent // @ game+0x1dcd78
	float Tick(); // Function UMG.UserWidget.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct FEventReply OnPreviewKeyDown(); // Function UMG.UserWidget.OnPreviewKeyDown // Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct FAnchors SetAnchorsInViewport(); // Function UMG.UserWidget.SetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9cc78
	struct F*338bd9d15e OnPaint(); // Function UMG.UserWidget.OnPaint // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1dcd78
	float PlayAnimationTo(); // Function UMG.UserWidget.PlayAnimationTo // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9c320
	bool IsAnimationPlaying(); // Function UMG.UserWidget.IsAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b9e4
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // Final|Native|Protected|BlueprintCallable // @ game+0x5e9dc5c
	void Construct(); // Function UMG.UserWidget.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct FEventReply OnAnalogValueChanged(); // Function UMG.UserWidget.OnAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct FEventReply OnMotionDetected(); // Function UMG.UserWidget.OnMotionDetected // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct FEventReply OnTouchMoved(); // Function UMG.UserWidget.OnTouchMoved // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	struct FEventReply OnFocusReceived(); // Function UMG.UserWidget.OnFocusReceived // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // Final|Native|Public|BlueprintCallable // @ game+0x5e9dc48
	struct F*a3e4749da2 OnMouseEnter(); // Function UMG.UserWidget.OnMouseEnter // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	bool AddToPlayerScreen(); // Function UMG.UserWidget.AddToPlayerScreen // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e9a6cc
};

// Class UMG.WidgetComponent
// Size: 0xc80 (Inherited: 0xab0)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0xab0(0x01)
	enum class EWidgetTimingPolicy *a874f2956a; // 0xab1(0x01)
	char pad_AB2[0x6]; // 0xab2(0x06)
	struct UClass* WidgetClass; // 0xab8(0x08)
	struct FIntPoint DrawSize; // 0xac0(0x08)
	bool *b96d0532df; // 0xac8(0x01)
	bool *b722f23391; // 0xac9(0x01)
	char pad_ACA[0x2]; // 0xaca(0x02)
	float *a011dd4f72; // 0xacc(0x04)
	char pad_AD0[0x8]; // 0xad0(0x08)
	struct FIntPoint *ba486f4b76; // 0xad8(0x08)
	bool *8e1e9764d6; // 0xae0(0x01)
	char pad_AE1[0x3]; // 0xae1(0x03)
	struct FVector2D Pivot; // 0xae4(0x08)
	bool *d6058d5d01; // 0xaec(0x01)
	bool *03bff2291d; // 0xaed(0x01)
	char pad_AEE[0x2]; // 0xaee(0x02)
	struct ULocalPlayer* *5b4533fedb; // 0xaf0(0x08)
	struct FLinearColor BackgroundColor; // 0xaf8(0x10)
	struct FLinearColor TintColorAndOpacity; // 0xb08(0x10)
	float OpacityFromTexture; // 0xb18(0x04)
	enum class EWidgetBlendMode BlendMode; // 0xb1c(0x01)
	bool bIsTwoSided; // 0xb1d(0x01)
	bool *03adcd321a; // 0xb1e(0x01)
	char pad_B1F[0x1]; // 0xb1f(0x01)
	struct UUserWidget* Widget; // 0xb20(0x08)
	char pad_B28[0x20]; // 0xb28(0x20)
	struct UBodySetup* BodySetup; // 0xb48(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0xb50(0x08)
	struct UMaterialInterface* *0bc064785d; // 0xb58(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0xb60(0x08)
	struct UMaterialInterface* *8ee5b62788; // 0xb68(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0xb70(0x08)
	struct UMaterialInterface* *dec60e0757; // 0xb78(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0xb80(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0xb88(0x08)
	bool *4a82e5408f; // 0xb90(0x01)
	bool *f67f2b75b3; // 0xb91(0x01)
	char pad_B92[0x6]; // 0xb92(0x06)
	struct FName *e2e00ebdbf; // 0xb98(0x08)
	int32 *478de7691e; // 0xba0(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0xba4(0x01)
	char pad_BA5[0x3]; // 0xba5(0x03)
	float CylinderArcAngle; // 0xba8(0x04)
	char pad_BAC[0x24]; // 0xbac(0x24)
	struct FVector2D FixedScreenSize; // 0xbd0(0x08)
	enum class EWidgetForcedLOD ForcedLOD; // 0xbd8(0x01)
	bool bUseLOD; // 0xbd9(0x01)
	bool bAutoSetFixedScreenSize; // 0xbda(0x01)
	char pad_BDB[0x5]; // 0xbdb(0x05)
	struct TArray<float> LODScreenSizes; // 0xbe0(0x10)
	float LODUpdateInterval; // 0xbf0(0x04)
	float LODNextUpdateTime; // 0xbf4(0x04)
	float LODLastScreenSize; // 0xbf8(0x04)
	float LODScale; // 0xbfc(0x04)
	float *23fef54172; // 0xc00(0x04)
	bool bShouldRenderWidget; // 0xc04(0x01)
	bool bAlwaysVisibleWidget; // 0xc05(0x01)
	char pad_C06[0x2]; // 0xc06(0x02)
	struct TMap<struct UPrimitiveComponent*, struct UMaterialInstanceDynamic*> *9ce1319e51; // 0xc08(0x50)
	struct TArray<struct UMeshComponent*> *8cb6c83369; // 0xc58(0x10)
	struct UTextureRenderTarget2D* OverrideRenderTarget; // 0xc68(0x08)
	struct USceneComponent* *e9b34379df; // 0xc70(0x08)
	char pad_C78[0x8]; // 0xc78(0x08)

	float *edbbafabf9(); // Function UMG.WidgetComponent.*edbbafabf9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea04c8
	struct FLinearColor *b83351bb8c(); // Function UMG.WidgetComponent.*b83351bb8c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea4434
	struct ULocalPlayer* *39fa94b676(); // Function UMG.WidgetComponent.*39fa94b676 // Final|Native|Public|BlueprintCallable // @ game+0x5ea8994
	float *23bd6159a7(); // Function UMG.WidgetComponent.*23bd6159a7 // Final|Native|Public|BlueprintCallable // @ game+0x5ea4268
	float *50e1cb24ce(); // Function UMG.WidgetComponent.*50e1cb24ce // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea15a8
	bool *f9aa39b217(); // Function UMG.WidgetComponent.*f9aa39b217 // Final|Native|Public|BlueprintCallable // @ game+0x5ea9a98
	struct FVector2D *7ca0342776(); // Function UMG.WidgetComponent.*7ca0342776 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0e28
	float *169d061441(); // Function UMG.WidgetComponent.*169d061441 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1aec
	struct UMeshComponent* *e55dd3886f(); // Function UMG.WidgetComponent.*e55dd3886f // Final|Native|Public|BlueprintCallable // @ game+0x5ea31d8
	struct UMaterialInstanceDynamic* *0da30e166d(); // Function UMG.WidgetComponent.*0da30e166d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57a4dec
	struct USceneComponent* *18be35add0(); // Function UMG.WidgetComponent.*18be35add0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0c78
	struct UUserWidget* *ea1e831d1b(); // Function UMG.WidgetComponent.*ea1e831d1b // Native|Public|BlueprintCallable // @ game+0x5eab580
	struct FVector2D *fa94bd4dd0(); // Function UMG.WidgetComponent.*fa94bd4dd0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea5a1c
	struct FVector2D *f9a1fa8948(); // Function UMG.WidgetComponent.*f9a1fa8948 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0ac0
	bool *53c6c6ca30(); // Function UMG.WidgetComponent.*53c6c6ca30 // Final|Native|Public|BlueprintCallable // @ game+0x5e9edf8
	struct UMeshComponent* *545800f849(); // Function UMG.WidgetComponent.*545800f849 // Final|Native|Public|BlueprintCallable // @ game+0x5eabe64
	bool *0e3d589835(); // Function UMG.WidgetComponent.*0e3d589835 // Final|Native|Public|BlueprintCallable // @ game+0x5eab614
	void *815e97e709(); // Function UMG.WidgetComponent.*815e97e709 // Native|Public|BlueprintCallable // @ game+0x485f4c
	struct UTextureRenderTarget2D* *913ef79546(); // Function UMG.WidgetComponent.*913ef79546 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1b14
	bool *5dc4f9fc18(); // Function UMG.WidgetComponent.*5dc4f9fc18 // Final|Native|Public|BlueprintCallable // @ game+0x5ea5d20
	struct UUserWidget* *a721799963(); // Function UMG.WidgetComponent.*a721799963 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2108
	bool *c1379fd852(); // Function UMG.WidgetComponent.*c1379fd852 // Final|Native|Public|BlueprintCallable // @ game+0x5e9e6a0
	struct USceneComponent* *7e8334c9c4(); // Function UMG.WidgetComponent.*7e8334c9c4 // Final|Native|Public|BlueprintCallable // @ game+0x5ea57c4
	bool *a14c2659b8(); // Function UMG.WidgetComponent.*a14c2659b8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2570
	struct ULocalPlayer* *65da1ee799(); // Function UMG.WidgetComponent.*65da1ee799 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1a98
	struct FVector2D *73b95e1918(); // Function UMG.WidgetComponent.*73b95e1918 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea53a8
};

// Class UMG.*d76301fdac
// Size: 0x148 (Inherited: 0x130)
struct U*d76301fdac : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x130(0x10)
	char pad_140[0x8]; // 0x140(0x08)

	struct UWidget* GetChildAt(); // Function UMG.*d76301fdac.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea08f8
	int32 GetChildIndex(); // Function UMG.*d76301fdac.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0998
	bool HasAnyChildren(); // Function UMG.*d76301fdac.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2418
	bool RemoveChild(); // Function UMG.*d76301fdac.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x5ea37a0
	struct UPanelSlot* AddChild(); // Function UMG.*d76301fdac.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x5e9de40
	void ClearChildren(); // Function UMG.*d76301fdac.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x5e9eae0
	int32 GetChildrenCount(); // Function UMG.*d76301fdac.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0a38
	bool HasChild(); // Function UMG.*d76301fdac.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2434
	bool RemoveChildAt(); // Function UMG.*d76301fdac.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x5ea3840
};

// Class UMG.*89c52a3074
// Size: 0x148 (Inherited: 0x148)
struct U*89c52a3074 : U*d76301fdac {

	struct UWidget* GetContent(); // Function UMG.*89c52a3074.GetContent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0a50
	struct UPanelSlot* SetContent(); // Function UMG.*89c52a3074.SetContent // Final|Native|Public|BlueprintCallable // @ game+0x5ea51a8
	struct UPanelSlot* GetContentSlot(); // Function UMG.*89c52a3074.GetContentSlot // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0a7c
};

// Class UMG.Button
// Size: 0x480 (Inherited: 0x148)
struct UButton : U*89c52a3074 {
	struct USlateWidgetStyleAsset* Style; // 0x148(0x08)
	struct F*9ec348ba05 WidgetStyle; // 0x150(0x2a8)
	struct FLinearColor ColorAndOpacity; // 0x3f8(0x10)
	struct FLinearColor BackgroundColor; // 0x408(0x10)
	enum class *9442f73b57 ClickMethod; // 0x418(0x01)
	enum class *9bc5484321 TouchMethod; // 0x419(0x01)
	bool IsFocusable; // 0x41a(0x01)
	char pad_41B[0x5]; // 0x41b(0x05)
	struct FMulticastDelegate OnClicked; // 0x420(0x10)
	struct FMulticastDelegate OnPressed; // 0x430(0x10)
	struct FMulticastDelegate OnReleased; // 0x440(0x10)
	struct FMulticastDelegate OnHovered; // 0x450(0x10)
	struct FMulticastDelegate OnUnHovered; // 0x460(0x10)
	char pad_470[0x10]; // 0x470(0x10)

	struct FLinearColor SetBackgroundColor(); // Function UMG.Button.SetBackgroundColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea439c
	struct FLinearColor SetColorAndOpacity(); // Function UMG.Button.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea4f64
	bool IsPressed(); // Function UMG.Button.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2658
	struct F*9ec348ba05 SetStyle(); // Function UMG.Button.SetStyle // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5eaa264
};

// Class UMG.EditableText
// Size: 0x4c0 (Inherited: 0x130)
struct UEditableText : UWidget {
	struct FText Text; // 0x130(0x18)
	DelegateProperty TextDelegate; // 0x148(0x10)
	struct FText HintText; // 0x158(0x18)
	DelegateProperty HintTextDelegate; // 0x170(0x10)
	struct F*05b420497f WidgetStyle; // 0x180(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x3c8(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3d0(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3d8(0x08)
	struct USlateBrushAsset* CaretImage; // 0x3e0(0x08)
	struct FSlateFontInfo Font; // 0x3e8(0x68)
	struct FSlateColor ColorAndOpacity; // 0x450(0x28)
	bool IsReadOnly; // 0x478(0x01)
	bool *a766d690cf; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	float *265faef0fb; // 0x47c(0x04)
	bool *537033f3ef; // 0x480(0x01)
	bool *be43eebe3c; // 0x481(0x01)
	bool *9957ec1e31; // 0x482(0x01)
	bool *46cbdda7bd; // 0x483(0x01)
	bool *9ef1fb3dbe; // 0x484(0x01)
	bool *449281c41b; // 0x485(0x01)
	enum class EVirtualKeyboardType *e0dcf8efe7; // 0x486(0x01)
	char pad_487[0x1]; // 0x487(0x01)
	struct F*01d8029047 ShapedTextOptions; // 0x488(0x08)
	struct FMulticastDelegate OnTextChanged; // 0x490(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x4a0(0x10)
	char pad_4B0[0x10]; // 0x4b0(0x10)

	enum class ETextCommit OnEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1dcd78
	struct FText OnEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1dcd78
	struct FText GetText(); // Function UMG.EditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1e34
	struct FText SetText(); // Function UMG.EditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5eaa334
	bool SetIsPassword(); // Function UMG.EditableText.SetIsPassword // Final|Native|Public|BlueprintCallable // @ game+0x5ea73ac
	struct FText SetHintText(); // Function UMG.EditableText.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x5ea5f54
	bool SetIsReadOnly(); // Function UMG.EditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5ea7468
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

	struct F*a3e4749da2 Dragged(); // Function UMG.DragDropOperation.Dragged // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5e9a9f4
	struct F*a3e4749da2 DragCancelled(); // Function UMG.DragDropOperation.DragCancelled // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5e9a900
	struct F*a3e4749da2 Drop(); // Function UMG.DragDropOperation.Drop // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x5e9aae8
};

// Class UMG.*976b2ef95d
// Size: 0x158 (Inherited: 0x130)
struct U*976b2ef95d : UWidget {
	struct F*01d8029047 ShapedTextOptions; // 0x130(0x08)
	enum class ETextJustify Justification; // 0x138(0x01)
	bool AutoWrapText; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	float WrapTextAt; // 0x13c(0x04)
	enum class *0dc3e7b6eb WrappingPolicy; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	struct FMargin Margin; // 0x144(0x10)
	float LineHeightPercentage; // 0x154(0x04)
};

// Class UMG.TextBlock
// Size: 0x260 (Inherited: 0x158)
struct UTextBlock : U*976b2ef95d {
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

	float SetOpacity(); // Function UMG.TextBlock.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5ea88fc
	struct FLinearColor SetShadowColorAndOpacity(); // Function UMG.TextBlock.SetShadowColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea9974
	struct FSlateColor SetColorAndOpacity(); // Function UMG.TextBlock.SetColorAndOpacity // Final|Native|Public|BlueprintCallable // @ game+0xa900ac
	float SetWrapTextAt(); // Function UMG.TextBlock.SetWrapTextAt // Final|Native|Public|BlueprintCallable // @ game+0x5eab6b4
	enum class ETextJustify SetJustification(); // Function UMG.TextBlock.SetJustification // Final|Native|Public|BlueprintCallable // @ game+0x5ea7848
	struct FText SetText(); // Function UMG.TextBlock.SetText // Native|Public|BlueprintCallable // @ game+0x5eaa704
	struct FText GetText(); // Function UMG.TextBlock.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2094
	struct FVector2D SetShadowOffset(); // Function UMG.TextBlock.SetShadowOffset // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea9a0c
	struct FSlateFontInfo SetFont(); // Function UMG.TextBlock.SetFont // Final|Native|Public|BlueprintCallable // @ game+0x5ea5b00
	float SetMinDesiredWidth(); // Function UMG.TextBlock.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5ea8314
};

// Class UMG.ComboBoxString
// Size: 0xdb0 (Inherited: 0x130)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> *71691c480f; // 0x130(0x10)
	struct FString *96abc24ba5; // 0x140(0x10)
	struct F*bd10a39d4e WidgetStyle; // 0x150(0x428)
	struct F*e7a296ec72 ItemStyle; // 0x578(0x718)
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

	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
	int32 FindOptionIndex(); // Function UMG.ComboBoxString.FindOptionIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9fff0
	struct FString AddOption(); // Function UMG.ComboBoxString.AddOption // Final|Native|Public|BlueprintCallable // @ game+0x5e9e5e0
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // Final|Native|Public|BlueprintCallable // @ game+0x5e9ec24
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1d10
	struct FString GetOptionAtIndex(); // Function UMG.ComboBoxString.GetOptionAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1940
	bool RemoveOption(); // Function UMG.ComboBoxString.RemoveOption // Final|Native|Public|BlueprintCallable // @ game+0x5ea38e0
	enum class ESelectInfo OnSelectionChangedEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
	int32 GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1a80
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // Final|Native|Public|BlueprintCallable // @ game+0x5ea31c4
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // Final|Native|Public|BlueprintCallable // @ game+0x5e9ec10
	struct FString SetSelectedOption(); // Function UMG.ComboBoxString.SetSelectedOption // Final|Native|Public|BlueprintCallable // @ game+0x5ea9878
};

// Class UMG.WidgetSwitcher
// Size: 0x160 (Inherited: 0x148)
struct UWidgetSwitcher : U*d76301fdac {
	int32 ActiveWidgetIndex; // 0x148(0x04)
	char pad_14C[0x14]; // 0x14c(0x14)

	int32 SetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // Native|Public|BlueprintCallable // @ game+0xb82f1c
	int32 GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea00e4
	int32 GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea18dc
	struct UWidget* SetActiveWidget(); // Function UMG.WidgetSwitcher.SetActiveWidget // Native|Public|BlueprintCallable // @ game+0x5ea3d2c
	struct UWidget* GetWidgetAtIndex(); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea08f8
};

// Class UMG.*6d6e07ab56
// Size: 0x50 (Inherited: 0x30)
struct U*6d6e07ab56 : U*528374bf77 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFail; // 0x40(0x10)

	struct U*6d6e07ab56* *d70c1d6fed(); // Function UMG.*6d6e07ab56.*d70c1d6fed // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e9a804
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
// Size: 0x30 (Inherited: 0x30)
struct U*8dfec49837 : UInterface {
};

// Class UMG.*e74f5ed9b0
// Size: 0x50 (Inherited: 0x30)
struct U*e74f5ed9b0 : UObject {
	struct UObject* SourceObject; // 0x30(0x08)
	struct F*0257e3c7bd SourcePath; // 0x38(0x10)
	struct FName *02924b12b3; // 0x48(0x08)
};

// Class UMG.*821b38e7d2
// Size: 0x50 (Inherited: 0x50)
struct U*821b38e7d2 : U*e74f5ed9b0 {

	bool GetValue(); // Function UMG.*821b38e7d2.GetValue // Final|Native|Public|Const // @ game+0x5e9b298
};

// Class UMG.*70db9ed234
// Size: 0x58 (Inherited: 0x50)
struct U*70db9ed234 : U*e74f5ed9b0 {
	char pad_50[0x8]; // 0x50(0x08)

	struct FSlateBrush GetValue(); // Function UMG.*70db9ed234.GetValue // Final|Native|Public|Const // @ game+0x5e9b2bc
};

// Class UMG.*8249e2063a
// Size: 0x58 (Inherited: 0x50)
struct U*8249e2063a : U*e74f5ed9b0 {
	char pad_50[0x8]; // 0x50(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.*8249e2063a.GetValue // Final|Native|Public|Const // @ game+0x5e9b348
};

// Class UMG.*ec82f90d9e
// Size: 0x58 (Inherited: 0x50)
struct U*ec82f90d9e : U*e74f5ed9b0 {
	char pad_50[0x8]; // 0x50(0x08)

	struct FLinearColor GetLinearValue(); // Function UMG.*ec82f90d9e.GetLinearValue // Final|Native|Public|HasDefaults|Const // @ game+0x5e9aff0
	struct FSlateColor GetSlateValue(); // Function UMG.*ec82f90d9e.GetSlateValue // Final|Native|Public|Const // @ game+0x5e9b198
};

// Class UMG.*16da5812db
// Size: 0x50 (Inherited: 0x50)
struct U*16da5812db : U*e74f5ed9b0 {

	float GetValue(); // Function UMG.*16da5812db.GetValue // Final|Native|Public|Const // @ game+0x5e9b36c
};

// Class UMG.*943c1130a9
// Size: 0x50 (Inherited: 0x50)
struct U*943c1130a9 : U*e74f5ed9b0 {

	int32 GetValue(); // Function UMG.*943c1130a9.GetValue // Final|Native|Public|Const // @ game+0x5e9b394
};

// Class UMG.*5103bcf183
// Size: 0x50 (Inherited: 0x50)
struct U*5103bcf183 : U*e74f5ed9b0 {

	enum class EMouseCursor GetValue(); // Function UMG.*5103bcf183.GetValue // Final|Native|Public|Const // @ game+0x5e9b3b8
};

// Class UMG.*10b1d97b0d
// Size: 0x58 (Inherited: 0x50)
struct U*10b1d97b0d : U*e74f5ed9b0 {
	char pad_50[0x8]; // 0x50(0x08)

	struct FString GetStringValue(); // Function UMG.*10b1d97b0d.GetStringValue // Final|Native|Public|Const // @ game+0x5e9b210
	struct FText GetTextValue(); // Function UMG.*10b1d97b0d.GetTextValue // Final|Native|Public|Const // @ game+0xa58d04
};

// Class UMG.*0b442c28a8
// Size: 0x50 (Inherited: 0x50)
struct U*0b442c28a8 : U*e74f5ed9b0 {

	enum class ESlateVisibility GetValue(); // Function UMG.*0b442c28a8.GetValue // Final|Native|Public|Const // @ game+0x5e9b3dc
};

// Class UMG.*6805cd9815
// Size: 0x50 (Inherited: 0x50)
struct U*6805cd9815 : U*e74f5ed9b0 {

	struct UWidget* GetValue(); // Function UMG.*6805cd9815.GetValue // Final|Native|Public|Const // @ game+0x5e9b400
};

// Class UMG.*e926dbf5c9
// Size: 0x38 (Inherited: 0x30)
struct U*e926dbf5c9 : UObject {
	bool bReveal; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 RevealedIndex; // 0x34(0x04)
};

// Class UMG.*d8080ba2be
// Size: 0x30 (Inherited: 0x30)
struct U*d8080ba2be : UBlueprintFunctionLibrary {

	struct FVector2D *6c95a21a80(); // Function UMG.*d8080ba2be.*6c95a21a80 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e9a3a8
	struct FVector2D *ca60eb2744(); // Function UMG.*d8080ba2be.*ca60eb2744 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e9bef8
	bool *778499e445(); // Function UMG.*d8080ba2be.*778499e445 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e9bb64
	struct FVector2D *043b3d163d(); // Function UMG.*d8080ba2be.*043b3d163d // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x5e9c93c
	struct FVector2D *2ee3fab50d(); // Function UMG.*d8080ba2be.*2ee3fab50d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e9c050
	struct FVector2D *37c0216590(); // Function UMG.*d8080ba2be.*37c0216590 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x5e9c6ec
	struct FVector2D *a89a8692da(); // Function UMG.*d8080ba2be.*a89a8692da // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x5e9c814
	struct FVector2D *95737f9cd7(); // Function UMG.*d8080ba2be.*95737f9cd7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e9b020
	bool *1392cc8233(); // Function UMG.*d8080ba2be.*1392cc8233 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e9abdc
	struct FVector2D *d1c25c8168(); // Function UMG.*d8080ba2be.*d1c25c8168 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e9a548
};

// Class UMG.*6161395bf8
// Size: 0x438 (Inherited: 0x30)
struct U*6161395bf8 : UObject {
	struct UTexture2D* *2048814f5e; // 0x30(0x08)
	char pad_38[0x400]; // 0x38(0x400)
};

// Class UMG.*47b233ee53
// Size: 0x68 (Inherited: 0x30)
struct U*47b233ee53 : UObject {
	struct TArray<struct F*2baae106d3> *86817cd4a3; // 0x30(0x10)
	struct TArray<uint32> *6914e7dc07; // 0x40(0x10)
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FVector2D *d8c608a0aa; // 0x58(0x08)
	struct FVector2D *a35ee202c8; // 0x60(0x08)
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
// Size: 0x6b0 (Inherited: 0x30)
struct U*89f5a4ae38 : UObject {
	char pad_30[0x348]; // 0x30(0x348)
	struct U*3335e92189* Animation; // 0x378(0x08)
	char pad_380[0x330]; // 0x380(0x330)
};

// Class UMG.PanelSlot
// Size: 0x40 (Inherited: 0x30)
struct UPanelSlot : UVisual {
	struct U*d76301fdac* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)
};

// Class UMG.*5780fe346e
// Size: 0x68 (Inherited: 0x40)
struct U*5780fe346e : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*5780fe346e.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eaacbc
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*5780fe346e.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea61d0
	struct FMargin SetPadding(); // Function UMG.*5780fe346e.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8ad4
};

// Class UMG.*587f12c230
// Size: 0x68 (Inherited: 0x40)
struct U*587f12c230 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*587f12c230.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eaade4
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*587f12c230.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea62f8
	struct FMargin SetPadding(); // Function UMG.*587f12c230.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8c14
};

// Class UMG.*71e35efa3f
// Size: 0x68 (Inherited: 0x40)
struct U*71e35efa3f : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*71e35efa3f.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eaae78
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*71e35efa3f.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea638c
	struct FMargin SetPadding(); // Function UMG.*71e35efa3f.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8cb4
};

// Class UMG.*8d608b1ea0
// Size: 0x78 (Inherited: 0x40)
struct U*8d608b1ea0 : UPanelSlot {
	struct F*a477d9422f LayoutData; // 0x40(0x28)
	bool bAutoSize; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32 ZOrder; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	struct F*a477d9422f GetLayout(); // Function UMG.*8d608b1ea0.GetLayout // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea157c
	struct FMargin SetOffsets(); // Function UMG.*8d608b1ea0.SetOffsets // Final|Native|Public|BlueprintCallable // @ game+0x8ee1e0
	int32 SetZOrder(); // Function UMG.*8d608b1ea0.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x5eab74c
	bool *b85a1188e8(); // Function UMG.*8d608b1ea0.*b85a1188e8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea04e0
	struct FMargin *87fd3848c3(); // Function UMG.*8d608b1ea0.*87fd3848c3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1900
	struct FAnchors SetAnchors(); // Function UMG.*8d608b1ea0.SetAnchors // Final|Native|Public|BlueprintCallable // @ game+0x5ea3ee8
	bool SetAutoSize(); // Function UMG.*8d608b1ea0.SetAutoSize // Final|Native|Public|BlueprintCallable // @ game+0x5ea4308
	struct FVector2D SetMinimum(); // Function UMG.*8d608b1ea0.SetMinimum // Final|Native|Public|HasDefaults // @ game+0x5ea84dc
	int32 *d4e579e962(); // Function UMG.*8d608b1ea0.*d4e579e962 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2350
	struct FVector2D GetAlignment(); // Function UMG.*8d608b1ea0.GetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0108
	struct FVector2D SetAlignment(); // Function UMG.*8d608b1ea0.SetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea3dc0
	struct FVector2D SetMaximum(); // Function UMG.*8d608b1ea0.SetMaximum // Final|Native|Public|HasDefaults // @ game+0x5ea8028
	struct FVector2D SetPosition(); // Function UMG.*8d608b1ea0.SetPosition // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea938c
	struct FVector2D GetPosition(); // Function UMG.*8d608b1ea0.GetPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1abc
	struct F*a477d9422f SetLayout(); // Function UMG.*8d608b1ea0.SetLayout // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5ea7af8
	struct FVector2D GetSize(); // Function UMG.*8d608b1ea0.GetSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1de4
	struct FVector2D SetSize(); // Function UMG.*8d608b1ea0.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea9b28
	struct FAnchors *129c787cc1(); // Function UMG.*8d608b1ea0.*129c787cc1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0498
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

	int32 SetRow(); // Function UMG.GridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x5ea94b8
	struct FMargin SetPadding(); // Function UMG.GridSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0xa3db68
	int32 SetColumnSpan(); // Function UMG.GridSlot.SetColumnSpan // Final|Native|Public|BlueprintCallable // @ game+0x5ea5118
	int32 SetColumn(); // Function UMG.GridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x5ea4ffc
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.GridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eaaf0c
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.GridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea6420
	int32 SetLayer(); // Function UMG.GridSlot.SetLayer // Final|Native|Public|BlueprintCallable // @ game+0x5ea79d0
	int32 SetRowSpan(); // Function UMG.GridSlot.SetRowSpan // Final|Native|Public|BlueprintCallable // @ game+0x5ea95d4
};

// Class UMG.*ac77a29870
// Size: 0x68 (Inherited: 0x40)
struct U*ac77a29870 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*ac77a29870.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea64b0
	struct FSlateChildSize SetSize(); // Function UMG.*ac77a29870.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x5ea9bb4
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*ac77a29870.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eaaf9c
	struct FMargin SetPadding(); // Function UMG.*ac77a29870.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8d54
};

// Class UMG.*d668aec7b0
// Size: 0x60 (Inherited: 0x40)
struct U*d668aec7b0 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32 ZOrder; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*d668aec7b0.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eab02c
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*d668aec7b0.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea6540
	struct FMargin SetPadding(); // Function UMG.*d668aec7b0.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8df4
	int32 SetZOrder(); // Function UMG.*d668aec7b0.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x5eab7dc
	int32 *d4e579e962(); // Function UMG.*d668aec7b0.*d4e579e962 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2374
};

// Class UMG.*a519b14e63
// Size: 0x68 (Inherited: 0x40)
struct U*a519b14e63 : UPanelSlot {
	bool bIsTitleSafe; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FMargin SafeAreaScale; // 0x44(0x10)
	enum class EHorizontalAlignment HAlign; // 0x54(0x01)
	enum class EVerticalAlignment VAlign; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FMargin Padding; // 0x58(0x10)
};

// Class UMG.*9f328f65dc
// Size: 0x68 (Inherited: 0x40)
struct U*9f328f65dc : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*9f328f65dc.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eab0bc
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*9f328f65dc.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea65d0
	struct FMargin SetPadding(); // Function UMG.*9f328f65dc.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8e94
};

// Class UMG.*6493b49e09
// Size: 0x60 (Inherited: 0x40)
struct U*6493b49e09 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)

	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*6493b49e09.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea6664
	struct FMargin SetPadding(); // Function UMG.*6493b49e09.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8f28
};

// Class UMG.*7822369cdf
// Size: 0x68 (Inherited: 0x40)
struct U*7822369cdf : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*7822369cdf.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eab150
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*7822369cdf.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea66f4
	struct FMargin SetPadding(); // Function UMG.*7822369cdf.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8fc8
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

	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.UniformGridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea6788
	int32 SetColumn(); // Function UMG.UniformGridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x5ea508c
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.UniformGridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eab1e4
	int32 SetRow(); // Function UMG.UniformGridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x5ea9548
};

// Class UMG.*d2f00ac7d1
// Size: 0x68 (Inherited: 0x40)
struct U*d2f00ac7d1 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*d2f00ac7d1.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea64b0
	struct FSlateChildSize SetSize(); // Function UMG.*d2f00ac7d1.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x5ea9cf4
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*d2f00ac7d1.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eaaf9c
	struct FMargin SetPadding(); // Function UMG.*d2f00ac7d1.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8d54
};

// Class UMG.*39ae413baf
// Size: 0x60 (Inherited: 0x40)
struct U*39ae413baf : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*39ae413baf.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eab02c
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*39ae413baf.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea6540
	struct FMargin SetPadding(); // Function UMG.*39ae413baf.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8f28
};

// Class UMG.*63421cc4e8
// Size: 0x168 (Inherited: 0x148)
struct U*63421cc4e8 : U*89c52a3074 {
	bool bDoubleClickTogglesFullscreen; // 0x148(0x01)
	char pad_149[0x1f]; // 0x149(0x1f)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*63421cc4e8.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eab274
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*63421cc4e8.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea6818
	struct FMargin SetPadding(); // Function UMG.*63421cc4e8.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea9068
};

// Class UMG.*313fd14115
// Size: 0x68 (Inherited: 0x40)
struct U*313fd14115 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*313fd14115.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eab304
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*313fd14115.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea68a8
	struct FMargin SetPadding(); // Function UMG.*313fd14115.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea9108
};

// Class UMG.*d6bd557e0d
// Size: 0x68 (Inherited: 0x40)
struct U*d6bd557e0d : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	float SetFillSpanWhenLessThan(); // Function UMG.*d6bd557e0d.SetFillSpanWhenLessThan // Final|Native|Public|BlueprintCallable // @ game+0x5ea5984
	bool SetFillEmptySpace(); // Function UMG.*d6bd557e0d.SetFillEmptySpace // Final|Native|Public|BlueprintCallable // @ game+0x5ea58f0
	struct FMargin SetPadding(); // Function UMG.*d6bd557e0d.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea91a8
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.*d6bd557e0d.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea693c
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.*d6bd557e0d.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eab398
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

	float SetRadius(); // Function UMG.CircularThrobber.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x5ea9418
	float SetPeriod(); // Function UMG.CircularThrobber.SetPeriod // Final|Native|Public|BlueprintCallable // @ game+0x5ea92e0
	int32 SetNumberOfPieces(); // Function UMG.CircularThrobber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x5ea870c
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
	struct F*fcc5c4062b WidgetStyle; // 0x158(0x870)
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
	bool *449281c41b; // 0xaad(0x01)
	enum class EVirtualKeyboardType *e0dcf8efe7; // 0xaae(0x01)
	char pad_AAF[0x1]; // 0xaaf(0x01)
	struct F*01d8029047 ShapedTextOptions; // 0xab0(0x08)
	struct FMulticastDelegate OnTextChanged; // 0xab8(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xac8(0x10)
	char pad_AD8[0x10]; // 0xad8(0x10)

	enum class ETextCommit OnEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1dcd78
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1ea8
	void ClearError(); // Function UMG.EditableTextBox.ClearError // Final|Native|Public|BlueprintCallable // @ game+0x5e9eaf4
	bool SetIsReadOnly(); // Function UMG.EditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5ea74fc
	struct FText SetError(); // Function UMG.EditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x5ea54fc
	bool HasError(); // Function UMG.EditableTextBox.HasError // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea24d4
	struct FText OnEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1dcd78
	struct FText SetText(); // Function UMG.EditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5eaa428
	struct FText SetHintText(); // Function UMG.EditableTextBox.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x5ea6048
};

// Class UMG.ExpandableArea
// Size: 0x378 (Inherited: 0x130)
struct UExpandableArea : UWidget {
	char pad_130[0x8]; // 0x130(0x08)
	struct F*83d892dd18 Style; // 0x138(0x130)
	struct FSlateBrush BorderBrush; // 0x268(0x90)
	struct FSlateColor BorderColor; // 0x2f8(0x28)
	bool bIsExpanded; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	float MaxHeight; // 0x324(0x04)
	struct FMargin HeaderPadding; // 0x328(0x10)
	struct FMargin AreaPadding; // 0x338(0x10)
	struct FMulticastDelegate OnExpansionChanged; // 0x348(0x10)
	struct UWidget* *fd47966c05; // 0x358(0x08)
	struct UWidget* *242b84100b; // 0x360(0x08)
	char pad_368[0x10]; // 0x368(0x10)

	bool SetIsExpanded_Animated(); // Function UMG.ExpandableArea.SetIsExpanded_Animated // Final|Native|Public|BlueprintCallable // @ game+0x5ea727c
	bool SetIsExpanded(); // Function UMG.ExpandableArea.SetIsExpanded // Final|Native|Public|BlueprintCallable // @ game+0x5ea71e0
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1378
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

	float SetOpacity(); // Function UMG.Image.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5ea8864
	struct FSlateBrush SetBrush(); // Function UMG.Image.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5ea4744
	struct FVector2D SetBrushSize(); // Function UMG.Image.SetBrushSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea4da4
	struct UMaterialInterface* SetBrushFromMaterial(); // Function UMG.Image.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5ea49f0
	bool SetBrushFromTextureDynamic(); // Function UMG.Image.SetBrushFromTextureDynamic // Final|Native|Public|BlueprintCallable // @ game+0x5ea4b10
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5ea0b14
	struct FLinearColor SetColorAndOpacity(); // Function UMG.Image.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xa70744
	struct USlateBrushAsset* SetBrushFromAsset(); // Function UMG.Image.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x5ea48d0
	bool SetBrushFromTexture(); // Function UMG.Image.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0xb804d0
};

// Class UMG.InputKeySelector
// Size: 0x230 (Inherited: 0x130)
struct UInputKeySelector : UWidget {
	struct F*b77ea41268 SelectedKey; // 0x130(0x20)
	struct FSlateFontInfo Font; // 0x150(0x68)
	struct FMargin Margin; // 0x1b8(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1c8(0x10)
	struct FText KeySelectionText; // 0x1d8(0x18)
	bool bAllowModifierKeys; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FMulticastDelegate OnKeySelected; // 0x1f8(0x10)
	struct FMulticastDelegate OnIsSelectingKeyChanged; // 0x208(0x10)
	char pad_218[0x18]; // 0x218(0x18)

	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
	struct F*b77ea41268 OnKeySelected__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
	struct FText SetKeySelectionText(); // Function UMG.InputKeySelector.SetKeySelectionText // Final|Native|Public|BlueprintCallable // @ game+0x5ea78dc
	bool SetAllowModifierKeys(); // Function UMG.InputKeySelector.SetAllowModifierKeys // Final|Native|Public|BlueprintCallable // @ game+0x5ea3e4c
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea13bc
	struct F*b77ea41268 SetSelectedKey(); // Function UMG.InputKeySelector.SetSelectedKey // Final|Native|Public|BlueprintCallable // @ game+0x5ea978c
};

// Class UMG.NativeWidgetHost
// Size: 0x140 (Inherited: 0x130)
struct UNativeWidgetHost : UWidget {
	char pad_130[0x10]; // 0x130(0x10)
};

// Class UMG.CanvasPanel
// Size: 0x158 (Inherited: 0x148)
struct UCanvasPanel : U*d76301fdac {
	char pad_148[0x10]; // 0x148(0x10)

	struct U*8d608b1ea0* AddChildToCanvas(); // Function UMG.CanvasPanel.AddChildToCanvas // Final|Native|Public|BlueprintCallable // @ game+0x5e9dee0
};

// Class UMG.BackgroundBlur
// Size: 0x208 (Inherited: 0x148)
struct UBackgroundBlur : U*89c52a3074 {
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

	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.BackgroundBlur.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea613c
	struct FMargin SetPadding(); // Function UMG.BackgroundBlur.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8a34
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.BackgroundBlur.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eaac28
	bool SetApplyAlphaToBlur(); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // Final|Native|Public|BlueprintCallable // @ game+0x5ea41d4
	int32 SetBlurRadius(); // Function UMG.BackgroundBlur.SetBlurRadius // Final|Native|Public|BlueprintCallable // @ game+0x5ea451c
	float SetBlurStrength(); // Function UMG.BackgroundBlur.SetBlurStrength // Native|Public|BlueprintCallable // @ game+0x5ea45ac
	struct FSlateBrush SetLowQualityFallbackBrush(); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5ea7c34
};

// Class UMG.Border
// Size: 0x2a8 (Inherited: 0x148)
struct UBorder : U*89c52a3074 {
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

	struct FMargin SetPadding(); // Function UMG.Border.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea8b74
	enum class EHorizontalAlignment SetHorizontalAlignment(); // Function UMG.Border.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5ea6264
	struct USlateBrushAsset* SetBrushFromAsset(); // Function UMG.Border.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x5ea4840
	struct UMaterialInterface* SetBrushFromMaterial(); // Function UMG.Border.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5ea4960
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5ea0af0
	struct FSlateBrush SetBrush(); // Function UMG.Border.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5ea4648
	struct FLinearColor SetBrushColor(); // Function UMG.Border.SetBrushColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xbb0fc4
	enum class EVerticalAlignment SetVerticalAlignment(); // Function UMG.Border.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x5eaad50
	struct FVector2D SetDesiredSizeScale(); // Function UMG.Border.SetDesiredSizeScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea531c
	struct UTexture2D* SetBrushFromTexture(); // Function UMG.Border.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0x5ea4a80
	struct FLinearColor SetContentColorAndOpacity(); // Function UMG.Border.SetContentColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xae298c
};

// Class UMG.CheckBox
// Size: 0x7f8 (Inherited: 0x148)
struct UCheckBox : U*89c52a3074 {
	enum class ECheckBoxState CheckedState; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty CheckedStateDelegate; // 0x150(0x10)
	struct F*1a5b392735 WidgetStyle; // 0x160(0x5e0)
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

	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea08d4
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2594
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea267c
	bool SetIsChecked(); // Function UMG.CheckBox.SetIsChecked // Final|Native|Public|BlueprintCallable // @ game+0x5ea714c
	enum class ECheckBoxState SetCheckedState(); // Function UMG.CheckBox.SetCheckedState // Final|Native|Public|BlueprintCallable // @ game+0x5ea4ed4
};

// Class UMG.InvalidationBox
// Size: 0x160 (Inherited: 0x148)
struct UInvalidationBox : U*89c52a3074 {
	bool *0dbb97d1d9; // 0x148(0x01)
	bool CacheRelativeTransforms; // 0x149(0x01)
	char pad_14A[0x16]; // 0x14a(0x16)

	bool SetCanCache(); // Function UMG.InvalidationBox.SetCanCache // Final|Native|Public|BlueprintCallable // @ game+0x5ea4e40
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea08b4
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // Final|Native|Public|BlueprintCallable // @ game+0x5ea255c
};

// Class UMG.MenuAnchor
// Size: 0x188 (Inherited: 0x148)
struct UMenuAnchor : U*89c52a3074 {
	struct UClass* MenuClass; // 0x148(0x08)
	DelegateProperty OnGetMenuContentEvent; // 0x150(0x10)
	enum class *d547f33b80 Placement; // 0x160(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x161(0x01)
	bool UseApplicationMenuStack; // 0x162(0x01)
	char pad_163[0x5]; // 0x163(0x05)
	struct FMulticastDelegate OnMenuOpenChanged; // 0x168(0x10)
	char pad_178[0x10]; // 0x178(0x10)

	bool Open(); // Function UMG.MenuAnchor.Open // Final|Native|Public|BlueprintCallable // @ game+0x5ea2cb0
	bool ToggleOpen(); // Function UMG.MenuAnchor.ToggleOpen // Final|Native|Public|BlueprintCallable // @ game+0x5eabca0
	void Close(); // Function UMG.MenuAnchor.Close // Final|Native|Public|BlueprintCallable // @ game+0x5e9edc4
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea25dc
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eab86c
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1700
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2524
};

// Class UMG.NamedSlot
// Size: 0x158 (Inherited: 0x148)
struct UNamedSlot : U*89c52a3074 {
	char pad_148[0x10]; // 0x148(0x10)
};

// Class UMG.RetainerBox
// Size: 0x178 (Inherited: 0x148)
struct URetainerBox : U*89c52a3074 {
	bool *b4fa371c13; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	int32 phase; // 0x14c(0x04)
	int32 *3af3024d2e; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x158(0x08)
	struct FName TextureParameter; // 0x160(0x08)
	char pad_168[0x10]; // 0x168(0x10)

	struct UMaterialInterface* SetEffectMaterial(); // Function UMG.RetainerBox.SetEffectMaterial // Final|Native|Public|BlueprintCallable // @ game+0x5ea546c
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0c30
	struct FName SetTextureParameter(); // Function UMG.RetainerBox.SetTextureParameter // Final|Native|Public|BlueprintCallable // @ game+0x5eaa7fc
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // Final|Native|Public|BlueprintCallable // @ game+0x5ea3a18
};

// Class UMG.SafeZone
// Size: 0x160 (Inherited: 0x148)
struct USafeZone : U*89c52a3074 {
	bool PadLeft; // 0x148(0x01)
	bool PadRight; // 0x149(0x01)
	bool PadTop; // 0x14a(0x01)
	bool PadBottom; // 0x14b(0x01)
	char pad_14C[0x14]; // 0x14c(0x14)
};

// Class UMG.ScaleBox
// Size: 0x168 (Inherited: 0x148)
struct UScaleBox : U*89c52a3074 {
	enum class EStretch Stretch; // 0x148(0x01)
	enum class EStretchDirection StretchDirection; // 0x149(0x01)
	char pad_14A[0x2]; // 0x14a(0x02)
	float UserSpecifiedScale; // 0x14c(0x04)
	bool IgnoreInheritedScale; // 0x150(0x01)
	char pad_151[0x17]; // 0x151(0x17)

	float SetUserSpecifiedScale(); // Function UMG.ScaleBox.SetUserSpecifiedScale // Final|Native|Public|BlueprintCallable // @ game+0x5eaaa60
	enum class EStretchDirection SetStretchDirection(); // Function UMG.ScaleBox.SetStretchDirection // Final|Native|Public|BlueprintCallable // @ game+0x5eaa1cc
	bool SetIgnoreInheritedScale(); // Function UMG.ScaleBox.SetIgnoreInheritedScale // Final|Native|Public|BlueprintCallable // @ game+0x5ea69cc
	enum class EStretch SetStretch(); // Function UMG.ScaleBox.SetStretch // Final|Native|Public|BlueprintCallable // @ game+0x5eaa134
};

// Class UMG.SizeBox
// Size: 0x178 (Inherited: 0x148)
struct USizeBox : U*89c52a3074 {
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

	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x5e9edb0
	float SetMinDesiredWidth(); // Function UMG.SizeBox.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5ea827c
	float SetWidthOverride(); // Function UMG.SizeBox.SetWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0xb56300
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5e9ebc0
	float SetMaxAspectRatio(); // Function UMG.SizeBox.SetMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x5ea7d30
	float SetMinDesiredHeight(); // Function UMG.SizeBox.SetMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5ea80b4
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5e9eb84
	float SetMaxDesiredHeight(); // Function UMG.SizeBox.SetMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5ea7dc8
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x5e9eb70
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x5e9eb48
	float SetMaxDesiredWidth(); // Function UMG.SizeBox.SetMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5ea7e60
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x5e9ebd4
	float SetHeightOverride(); // Function UMG.SizeBox.SetHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0xb5637c
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x5e9eb5c
};

// Class UMG.Viewport
// Size: 0x170 (Inherited: 0x148)
struct UViewport : U*89c52a3074 {
	struct FLinearColor BackgroundColor; // 0x148(0x10)
	char pad_158[0x18]; // 0x158(0x18)

	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2170
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2330
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea21bc
	struct FRotator SetViewRotation(); // Function UMG.Viewport.SetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eab4e0
	struct AActor* Spawn(); // Function UMG.Viewport.Spawn // Final|Native|Public|BlueprintCallable // @ game+0x5eabc00
	struct FVector SetViewLocation(); // Function UMG.Viewport.SetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5eab428
};

// Class UMG.GridPanel
// Size: 0x178 (Inherited: 0x148)
struct UGridPanel : U*d76301fdac {
	struct TArray<float> ColumnFill; // 0x148(0x10)
	struct TArray<float> RowFill; // 0x158(0x10)
	char pad_168[0x10]; // 0x168(0x10)

	struct UGridSlot* AddChildToGrid(); // Function UMG.GridPanel.AddChildToGrid // Final|Native|Public|BlueprintCallable // @ game+0x5e9dfe0
};

// Class UMG.HorizontalBox
// Size: 0x158 (Inherited: 0x148)
struct UHorizontalBox : U*d76301fdac {
	char pad_148[0x10]; // 0x148(0x10)

	struct U*ac77a29870* AddChildToHorizontalBox(); // Function UMG.HorizontalBox.AddChildToHorizontalBox // Final|Native|Public|BlueprintCallable // @ game+0x5e9e0e0
};

// Class UMG.Overlay
// Size: 0x158 (Inherited: 0x148)
struct UOverlay : U*d76301fdac {
	char pad_148[0x10]; // 0x148(0x10)

	struct U*d668aec7b0* AddChildToOverlay(); // Function UMG.Overlay.AddChildToOverlay // Final|Native|Public|BlueprintCallable // @ game+0x5e9e1e0
};

// Class UMG.ScrollBox
// Size: 0x8e0 (Inherited: 0x148)
struct UScrollBox : U*d76301fdac {
	struct F*8d916b2b30 WidgetStyle; // 0x148(0x248)
	struct F*c846317fd2 WidgetBarStyle; // 0x390(0x518)
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

	float SetScrollOffset(); // Function UMG.ScrollBox.SetScrollOffset // Final|Native|Public|BlueprintCallable // @ game+0x5ea96f4
	enum class ESlateVisibility SetScrollBarVisibility(); // Function UMG.ScrollBox.SetScrollBarVisibility // Final|Native|Public|BlueprintCallable // @ game+0x5ea9664
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1cc8
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // Final|Native|Public|BlueprintCallable // @ game+0x5ea3a40
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // Final|Native|Public|BlueprintCallable // @ game+0x5ea3a2c
	float GetScrollToEndOffset(); // Function UMG.ScrollBox.GetScrollToEndOffset // Final|Native|Public|BlueprintCallable // @ game+0x5ea1ce8
	bool ScrollWidgetIntoView(); // Function UMG.ScrollBox.ScrollWidgetIntoView // Final|Native|Public|BlueprintCallable // @ game+0x5ea3af0
};

// Class UMG.UniformGridPanel
// Size: 0x170 (Inherited: 0x148)
struct UUniformGridPanel : U*d76301fdac {
	struct FMargin SlotPadding; // 0x148(0x10)
	float MinDesiredSlotWidth; // 0x158(0x04)
	float MinDesiredSlotHeight; // 0x15c(0x04)
	char pad_160[0x10]; // 0x160(0x10)

	float SetMinDesiredSlotHeight(); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // Final|Native|Public|BlueprintCallable // @ game+0x5ea814c
	float SetMinDesiredSlotWidth(); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // Final|Native|Public|BlueprintCallable // @ game+0x5ea81e4
	struct UUniformGridSlot* AddChildToUniformGrid(); // Function UMG.UniformGridPanel.AddChildToUniformGrid // Final|Native|Public|BlueprintCallable // @ game+0x5e9e2e0
	struct FMargin SetSlotPadding(); // Function UMG.UniformGridPanel.SetSlotPadding // Final|Native|Public|BlueprintCallable // @ game+0x5ea9f00
};

// Class UMG.VerticalBox
// Size: 0x158 (Inherited: 0x148)
struct UVerticalBox : U*d76301fdac {
	char pad_148[0x10]; // 0x148(0x10)

	struct U*d2f00ac7d1* AddChildToVerticalBox(); // Function UMG.VerticalBox.AddChildToVerticalBox // Final|Native|Public|BlueprintCallable // @ game+0x5e9e3e0
};

// Class UMG.WrapBox
// Size: 0x168 (Inherited: 0x148)
struct UWrapBox : U*d76301fdac {
	struct FVector2D InnerSlotPadding; // 0x148(0x08)
	float WrapWidth; // 0x150(0x04)
	bool bExplicitWrapWidth; // 0x154(0x01)
	char pad_155[0x13]; // 0x155(0x13)

	struct U*d6bd557e0d* AddChildWrapBox(); // Function UMG.WrapBox.AddChildWrapBox // Final|Native|Public|BlueprintCallable // @ game+0x5e9e4e0
	struct FVector2D SetInnerSlotPadding(); // Function UMG.WrapBox.SetInnerSlotPadding // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea6af8
};

// Class UMG.ProgressBar
// Size: 0x350 (Inherited: 0x130)
struct UProgressBar : UWidget {
	struct F*3de0585264 WidgetStyle; // 0x130(0x1b8)
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

	bool SetIsMarquee(); // Function UMG.ProgressBar.SetIsMarquee // Final|Native|Public|BlueprintCallable // @ game+0x5ea7318
	struct FLinearColor SetFillColorAndOpacity(); // Function UMG.ProgressBar.SetFillColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea5858
	float SetPercent(); // Function UMG.ProgressBar.SetPercent // Final|Native|Public|BlueprintCallable // @ game+0x5ea9248
};

// Class UMG.ScrollBar
// Size: 0x670 (Inherited: 0x130)
struct UScrollBar : UWidget {
	struct F*c846317fd2 WidgetStyle; // 0x130(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x648(0x08)
	bool *64f197d52c; // 0x650(0x01)
	enum class EOrientation Orientation; // 0x651(0x01)
	char pad_652[0x2]; // 0x652(0x02)
	struct FVector2D Thickness; // 0x654(0x08)
	char pad_65C[0x14]; // 0x65c(0x14)

	float SetState(); // Function UMG.ScrollBar.SetState // Final|Native|Public|BlueprintCallable // @ game+0x5ea9fa0
};

// Class UMG.Slider
// Size: 0x428 (Inherited: 0x130)
struct USlider : UWidget {
	float Value; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	DelegateProperty ValueDelegate; // 0x138(0x10)
	struct F*f46c09a4c7 WidgetStyle; // 0x148(0x250)
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

	float SetValue(); // Function UMG.Slider.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x5eaaaf8
	float GetValue(); // Function UMG.Slider.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2120
	bool SetIndentHandle(); // Function UMG.Slider.SetIndentHandle // Final|Native|Public|BlueprintCallable // @ game+0x5ea6a64
	bool SetLocked(); // Function UMG.Slider.SetLocked // Final|Native|Public|BlueprintCallable // @ game+0x5ea7ba0
	float SetStepSize(); // Function UMG.Slider.SetStepSize // Final|Native|Public|BlueprintCallable // @ game+0x5eaa09c
	struct FLinearColor SetSliderBarColor(); // Function UMG.Slider.SetSliderBarColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea9da8
	struct FLinearColor SetSliderHandleColor(); // Function UMG.Slider.SetSliderHandleColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea9e54
};

// Class UMG.Spacer
// Size: 0x148 (Inherited: 0x130)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)

	struct FVector2D SetSize(); // Function UMG.Spacer.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ea9c68
};

// Class UMG.SpinBox
// Size: 0x568 (Inherited: 0x130)
struct USpinBox : UWidget {
	float Value; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	DelegateProperty ValueDelegate; // 0x138(0x10)
	struct F*abe8d1c913 WidgetStyle; // 0x148(0x310)
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
	float *66225f0319; // 0x54c(0x04)
	float *b7069b2904; // 0x550(0x04)
	char pad_554[0x14]; // 0x554(0x14)

	enum class ETextCommit OnSpinBoxValueCommittedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
	float SetMinValue(); // Function UMG.SpinBox.SetMinValue // Final|Native|Public|BlueprintCallable // @ game+0x5ea8444
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea16b0
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5e9ebe8
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // Final|Native|Public|BlueprintCallable // @ game+0x5e9ebfc
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea16d8
	float SetMinSliderValue(); // Function UMG.SpinBox.SetMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5ea83ac
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5e9eb98
	float SetMaxSliderValue(); // Function UMG.SpinBox.SetMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x5ea7ef8
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1748
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x5e9ebac
	struct FSlateColor SetForegroundColor(); // Function UMG.SpinBox.SetForegroundColor // Final|Native|Public|BlueprintCallable // @ game+0x5ea5c2c
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
	float GetValue(); // Function UMG.SpinBox.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2148
	float OnSpinBoxValueChangedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1770
	float SetValue(); // Function UMG.SpinBox.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x5eaab90
	float SetMaxValue(); // Function UMG.SpinBox.SetMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x5ea7f90
};

// Class UMG.*70342b2c32
// Size: 0x130 (Inherited: 0x130)
struct U*70342b2c32 : UWidget {

	struct UWidget* OnGenerateRowUObject__DelegateSignature(); // DelegateFunction UMG.*70342b2c32.OnGenerateRowUObject__DelegateSignature // Public|Delegate // @ game+0x1dcd78
};

// Class UMG.ListView
// Size: 0x170 (Inherited: 0x130)
struct UListView : U*70342b2c32 {
	float *1233d7a96d; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	enum class ESelectionMode *17d1f6413d; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty OnGenerateRowEvent; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
};

// Class UMG.TileView
// Size: 0x170 (Inherited: 0x130)
struct UTileView : U*70342b2c32 {
	float *cf86efc101; // 0x130(0x04)
	float *1233d7a96d; // 0x134(0x04)
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	enum class ESelectionMode *17d1f6413d; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty OnGenerateTileEvent; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)

	void RequestListRefresh(); // Function UMG.TileView.RequestListRefresh // Final|Native|Public|BlueprintCallable // @ game+0x5ea39fc
	float SetItemHeight(); // Function UMG.TileView.SetItemHeight // Final|Native|Public|BlueprintCallable // @ game+0x5ea76e0
	float SetItemWidth(); // Function UMG.TileView.SetItemWidth // Final|Native|Public|BlueprintCallable // @ game+0x5ea7794
};

// Class UMG.MultiLineEditableText
// Size: 0x448 (Inherited: 0x158)
struct UMultiLineEditableText : U*976b2ef95d {
	struct FText Text; // 0x158(0x18)
	struct FText HintText; // 0x170(0x18)
	DelegateProperty HintTextDelegate; // 0x188(0x10)
	struct F*e84d4b475c WidgetStyle; // 0x198(0x208)
	bool bIsReadOnly; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FSlateFontInfo Font; // 0x3a8(0x68)
	bool *449281c41b; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FMulticastDelegate OnTextChanged; // 0x418(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x428(0x10)
	char pad_438[0x10]; // 0x438(0x10)

	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1f68
	enum class ETextCommit OnMultiLineEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1dcd78
	struct FText OnMultiLineEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1dcd78
	struct FText SetText(); // Function UMG.MultiLineEditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5eaa51c
	bool SetIsReadOnly(); // Function UMG.MultiLineEditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5ea75b8
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xce8 (Inherited: 0x158)
struct UMultiLineEditableTextBox : U*976b2ef95d {
	struct FText Text; // 0x158(0x18)
	struct FText HintText; // 0x170(0x18)
	DelegateProperty HintTextDelegate; // 0x188(0x10)
	struct F*fcc5c4062b WidgetStyle; // 0x198(0x870)
	struct F*e84d4b475c TextStyle; // 0xa08(0x208)
	bool bIsReadOnly; // 0xc10(0x01)
	bool *449281c41b; // 0xc11(0x01)
	char pad_C12[0x6]; // 0xc12(0x06)
	struct USlateWidgetStyleAsset* Style; // 0xc18(0x08)
	struct FSlateFontInfo Font; // 0xc20(0x68)
	struct FLinearColor ForegroundColor; // 0xc88(0x10)
	struct FLinearColor BackgroundColor; // 0xc98(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xca8(0x10)
	struct FMulticastDelegate OnTextChanged; // 0xcb8(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xcc8(0x10)
	char pad_CD8[0x10]; // 0xcd8(0x10)

	enum class ETextCommit OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1dcd78
	struct FText OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1dcd78
	struct FText SetText(); // Function UMG.MultiLineEditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x5eaa610
	struct FText SetError(); // Function UMG.MultiLineEditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x5ea5660
	bool SetIsReadOnly(); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x5ea764c
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2020
};

// Class UMG.RichTextBlock
// Size: 0x420 (Inherited: 0x158)
struct URichTextBlock : U*976b2ef95d {
	struct FText Text; // 0x158(0x18)
	DelegateProperty TextDelegate; // 0x170(0x10)
	struct FSlateFontInfo Font; // 0x180(0x68)
	struct FLinearColor Color; // 0x1e8(0x10)
	struct TArray<struct U*e926dbf5c9*> *4eb0102556; // 0x1f8(0x10)
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

	bool SetAnimateVertically(); // Function UMG.Throbber.SetAnimateVertically // Final|Native|Public|BlueprintCallable // @ game+0x5ea4114
	bool SetAnimateHorizontally(); // Function UMG.Throbber.SetAnimateHorizontally // Final|Native|Public|BlueprintCallable // @ game+0x5ea3f88
	bool SetAnimateOpacity(); // Function UMG.Throbber.SetAnimateOpacity // Final|Native|Public|BlueprintCallable // @ game+0x5ea404c
	int32 SetNumberOfPieces(); // Function UMG.Throbber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x5ea87b4
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

	float *24cf5c5bf6(); // Function UMG.*3335e92189.*24cf5c5bf6 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0c58
	float *7a7153ce05(); // Function UMG.*3335e92189.*7a7153ce05 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1e14
};

// Class UMG.*72fc5568b9
// Size: 0x30 (Inherited: 0x30)
struct U*72fc5568b9 : UBlueprintFunctionLibrary {

	struct UMaterialInstanceDynamic* *96aa495973(); // Function UMG.*72fc5568b9.*96aa495973 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea0b38
	struct UUserWidget* Create(); // Function UMG.*72fc5568b9.Create // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x8eee48
	struct FLinearColor *498ce7680e(); // Function UMG.*72fc5568b9.*498ce7680e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e9f41c
	struct UMaterialInterface* *4dc9c4895d(); // Function UMG.*72fc5568b9.*4dc9c4895d // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5ea4c4c
	struct F*163dc5d8c3 *b35a64ee07(); // Function UMG.*72fc5568b9.*b35a64ee07 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea1274
	struct FEventReply SetMousePosition(); // Function UMG.*72fc5568b9.SetMousePosition // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5ea8568
	struct UTexture2D* *0dc117f72a(); // Function UMG.*72fc5568b9.*0dc117f72a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea0758
	struct FEventReply Handled(); // Function UMG.*72fc5568b9.Handled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ea239c
	struct FEventReply *3ec2d7197c(); // Function UMG.*72fc5568b9.*3ec2d7197c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e9ec38
	struct FSlateBrush *55d8b11790(); // Function UMG.*72fc5568b9.*55d8b11790 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ea2a9c
	bool *ce13b96fb6(); // Function UMG.*72fc5568b9.*ce13b96fb6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5ea5db0
	struct FSlateBrush *cace4e1f3e(); // Function UMG.*72fc5568b9.*cace4e1f3e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ea281c
	struct F*163dc5d8c3 *3753d0f27e(); // Function UMG.*72fc5568b9.*3753d0f27e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea0f5c
	struct FEventReply *3d37effb97(); // Function UMG.*72fc5568b9.*3d37effb97 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea26a4
	struct FLinearColor *78a6603821(); // Function UMG.*72fc5568b9.*78a6603821 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e9fba8
	struct UObject* *8443c127ea(); // Function UMG.*72fc5568b9.*8443c127ea // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea0504
	bool *dc343af38e(); // Function UMG.*72fc5568b9.*dc343af38e // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5ea02e8
	struct FEventReply *3492735933(); // Function UMG.*72fc5568b9.*3492735933 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eaa89c
	struct FEventReply CaptureJoystick(); // Function UMG.*72fc5568b9.CaptureJoystick // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e9e7a4
	struct FSlateBrush *94fa4889ea(); // Function UMG.*72fc5568b9.*94fa4889ea // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ea2914
	struct FSlateBrush *aa14279002(); // Function UMG.*72fc5568b9.*aa14279002 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ea2c24
	struct FEventReply *7229935fb0(); // Function UMG.*72fc5568b9.*7229935fb0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6ff1ec
	struct FEventReply *6988e769b3(); // Function UMG.*72fc5568b9.*6988e769b3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e9febc
	struct F*163dc5d8c3 *04c477de51(); // Function UMG.*72fc5568b9.*04c477de51 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea0e68
	void *be11e0b6ef(); // Function UMG.*72fc5568b9.*be11e0b6ef // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ea5ae4
	struct APlayerController* *86c7ac962e(); // Function UMG.*72fc5568b9.*86c7ac962e // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ea6e98
	struct UDragDropOperation* *74be7739c6(); // Function UMG.*72fc5568b9.*74be7739c6 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ea0a9c
	bool *a547dd0898(); // Function UMG.*72fc5568b9.*a547dd0898 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5ea0138
	struct FEventReply *5c2ff6185f(); // Function UMG.*72fc5568b9.*5c2ff6185f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e9f1c0
	struct F*163dc5d8c3 *c8e523ce25(); // Function UMG.*72fc5568b9.*c8e523ce25 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea1054
	bool *a1ed835c00(); // Function UMG.*72fc5568b9.*a1ed835c00 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ea25b8
	struct FLinearColor *230588c472(); // Function UMG.*72fc5568b9.*230588c472 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e9f9ac
	struct FEventReply *5ecd23be65(); // Function UMG.*72fc5568b9.*5ecd23be65 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e9e968
	bool *71b9fdf36f(); // Function UMG.*72fc5568b9.*71b9fdf36f // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ea6f18
	struct UTexture2D* *50f5caf5bf(); // Function UMG.*72fc5568b9.*50f5caf5bf // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5ea4c4c
	struct FVector2D *e5cc63caae(); // Function UMG.*72fc5568b9.*e5cc63caae // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5ea1b38
	struct FEventReply ReleaseJoystickCapture(); // Function UMG.*72fc5568b9.ReleaseJoystickCapture // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea327c
	struct F*163dc5d8c3 *9d06e74d17(); // Function UMG.*72fc5568b9.*9d06e74d17 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea1188
	struct FEventReply *45040f1278(); // Function UMG.*72fc5568b9.*45040f1278 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea34e8
	struct UDragDropOperation* *a9657476bb(); // Function UMG.*72fc5568b9.*a9657476bb // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e9ef14
	void *6e6ce4ec68(); // Function UMG.*72fc5568b9.*6e6ce4ec68 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e9e788
	bool *00ad7eb6f8(); // Function UMG.*72fc5568b9.*00ad7eb6f8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e9f628
	struct UMaterialInterface* *2c146e2be6(); // Function UMG.*72fc5568b9.*2c146e2be6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea05fc
	bool *11972074fe(); // Function UMG.*72fc5568b9.*11972074fe // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ea6bb8
	enum class EMouseLockMode *9591a85ee0(); // Function UMG.*72fc5568b9.*9591a85ee0 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ea7034
	bool *8172c4ead7(); // Function UMG.*72fc5568b9.*8172c4ead7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e9f7e8
	bool *667d076235(); // Function UMG.*72fc5568b9.*667d076235 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ea6d34
	struct FEventReply *0e65abcd3e(); // Function UMG.*72fc5568b9.*0e65abcd3e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e9efa4
	struct FEventReply *8ed1a8b147(); // Function UMG.*72fc5568b9.*8ed1a8b147 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5eabd44
	void *988d990745(); // Function UMG.*72fc5568b9.*988d990745 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5e9f3f8
	struct FKeyEvent *db64590c11(); // Function UMG.*72fc5568b9.*db64590c11 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea13e4
};

// Class UMG.*5ff0e9d0ca
// Size: 0x670 (Inherited: 0x480)
struct U*5ff0e9d0ca : USceneComponent {
	struct FMulticastDelegate OnHoveredWidgetChanged; // 0x478(0x10)
	char pad_490[0x8]; // 0x490(0x08)
	int32 VirtualUserIndex; // 0x498(0x04)
	float PointerIndex; // 0x49c(0x04)
	enum class ECollisionChannel TraceChannel; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	float InteractionDistance; // 0x4a4(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x4a8(0x01)
	bool bEnableHitTesting; // 0x4a9(0x01)
	bool bShowDebug; // 0x4aa(0x01)
	char pad_4AB[0x1]; // 0x4ab(0x01)
	struct FLinearColor DebugColor; // 0x4ac(0x10)
	char pad_4BC[0x7c]; // 0x4bc(0x7c)
	struct FHitResult *2d35427527; // 0x538(0x88)
	struct FVector2D *c93c24175e; // 0x5c0(0x08)
	struct FVector2D *6455682c51; // 0x5c8(0x08)
	struct UWidgetComponent* *18a2143ea1; // 0x5d0(0x08)
	struct FHitResult *37342a50f0; // 0x5d8(0x88)
	bool *9caaabc6fb; // 0x660(0x01)
	bool *2e3b21ab86; // 0x661(0x01)
	bool *2f5f6b14a2; // 0x662(0x01)
	char pad_663[0xd]; // 0x663(0x0d)

	struct FKey *78dfa2ea01(); // Function UMG.*5ff0e9d0ca.*78dfa2ea01 // Native|Public|BlueprintCallable // @ game+0x5ea361c
	bool *eb8e351ac6(); // Function UMG.*5ff0e9d0ca.*eb8e351ac6 // Native|Public|BlueprintCallable // @ game+0x5ea2d58
	struct FKey *1e38f9f1cd(); // Function UMG.*5ff0e9d0ca.*1e38f9f1cd // Native|Public|BlueprintCallable // @ game+0x5ea2f9c
	struct UWidgetComponent* *e3225786b1(); // Function UMG.*5ff0e9d0ca.*e3225786b1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea0e50
	struct FVector2D *01a07c096a(); // Function UMG.*5ff0e9d0ca.*01a07c096a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea00bc
	float *43fad83b89(); // Function UMG.*5ff0e9d0ca.*43fad83b89 // Native|Public|BlueprintCallable // @ game+0x5ea3a54
	bool *d9fd255cf1(); // Function UMG.*5ff0e9d0ca.*d9fd255cf1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2610
	bool *dbd2475b5f(); // Function UMG.*5ff0e9d0ca.*dbd2475b5f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2628
	struct FHitResult *075123a386(); // Function UMG.*5ff0e9d0ca.*075123a386 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea1560
	bool *7da06e772e(); // Function UMG.*5ff0e9d0ca.*7da06e772e // Native|Public|BlueprintCallable // @ game+0x5ea33f0
	bool *5a53cf5931(); // Function UMG.*5ff0e9d0ca.*5a53cf5931 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ea2640
	bool *f5a7bff81d(); // Function UMG.*5ff0e9d0ca.*f5a7bff81d // Native|Public|BlueprintCallable // @ game+0x5ea3bd0
	bool *c2a3eed6ce(); // Function UMG.*5ff0e9d0ca.*c2a3eed6ce // Native|Public|BlueprintCallable // @ game+0x5ea2e50
	struct FHitResult *1b1d394ff8(); // Function UMG.*5ff0e9d0ca.*1b1d394ff8 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5ea5254
};

// Class UMG.*5ed7aa7874
// Size: 0x30 (Inherited: 0x30)
struct U*5ed7aa7874 : UBlueprintFunctionLibrary {

	float *064bad7cd0(); // Function UMG.*5ed7aa7874.*064bad7cd0 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ea2208
	struct U*587f12c230* *c0353d59d7(); // Function UMG.*5ed7aa7874.*c0353d59d7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eab8a0
	struct FVector2D *f9de26ecaa(); // Function UMG.*5ed7aa7874.*f9de26ecaa // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5ea2298
	struct U*ac77a29870* *5a9dbada10(); // Function UMG.*5ed7aa7874.*5a9dbada10 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eab9c0
	struct U*d2f00ac7d1* *24028d9cc4(); // Function UMG.*5ed7aa7874.*24028d9cc4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eabb70
	struct U*8d608b1ea0* *dc67dc9433(); // Function UMG.*5ed7aa7874.*dc67dc9433 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eab930
	bool *48c24102a7(); // Function UMG.*5ed7aa7874.*48c24102a7 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ea1798
	bool *ea2fc82874(); // Function UMG.*5ed7aa7874.*ea2fc82874 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5ea3084
	struct UObject* *4fdeb104e2(); // Function UMG.*5ed7aa7874.*4fdeb104e2 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5ea3704
	struct U*d668aec7b0* *0e06de2389(); // Function UMG.*5ed7aa7874.*0e06de2389 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eaba50
	struct UGridSlot* *5d566a4088(); // Function UMG.*5ed7aa7874.*5d566a4088 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb72410
	struct UUniformGridSlot* *0787c0fcac(); // Function UMG.*5ed7aa7874.*0787c0fcac // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5eabae0
};

// Class UMG.WidgetNavigation
// Size: 0xc0 (Inherited: 0x30)
struct UWidgetNavigation : UObject {
	struct F*69f271d76f Up; // 0x30(0x18)
	struct F*69f271d76f Down; // 0x48(0x18)
	struct F*69f271d76f Left; // 0x60(0x18)
	struct F*69f271d76f Right; // 0x78(0x18)
	struct F*69f271d76f Next; // 0x90(0x18)
	struct F*69f271d76f Previous; // 0xa8(0x18)
};

// Class UMG.WidgetTree
// Size: 0x38 (Inherited: 0x30)
struct UWidgetTree : UObject {
	struct UWidget* *6e763cdceb; // 0x30(0x08)
};


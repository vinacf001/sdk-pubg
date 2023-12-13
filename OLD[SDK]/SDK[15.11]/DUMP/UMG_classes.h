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

	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a1c2c
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f87c
	void GetParent(); // Function UMG.Widget.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f3b8
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x60a1d60
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609fa74
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a1ba0
	void SetVisibility(); // Function UMG.Widget.SetVisibility // Native|Public|BlueprintCallable // @ game+0x52bbec
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f34c
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // Native|Public|BlueprintCallable // @ game+0x59ce838
	void OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x21d2c4
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // Final|Native|Public|BlueprintCallable // @ game+0x609eff4
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // Final|Native|Public|BlueprintCallable // @ game+0xae47f8
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // Final|Native|Public|BlueprintCallable // @ game+0x609fc54
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f1dc
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f930
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void IsVisible(); // Function UMG.Widget.IsVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609ffb4
	void SetCursor(); // Function UMG.Widget.SetCursor // Final|Native|Public|BlueprintCallable // @ game+0x60a0f90
	void IsHovered(); // Function UMG.Widget.IsHovered // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609fd24
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // Native|Public|BlueprintCallable // @ game+0x60a12fc
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus // Final|Native|Public|BlueprintCallable // @ game+0x60a1e3c
	void GenerateWidgetForObject__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x609f1ac
	void ResetCursor(); // Function UMG.Widget.ResetCursor // Final|Native|Public|BlueprintCallable // @ game+0x60a0884
	void GetVisibility(); // Function UMG.Widget.GetVisibility // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f668
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // Public|Delegate|HasDefaults // @ game+0x21d2c4
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void HasUserFocus(); // Function UMG.Widget.HasUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609fb14
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xe031bc
	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // Final|Native|Public|BlueprintCallable // @ game+0x60a19b8
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f180
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // Final|Native|Public|BlueprintCallable // @ game+0x60a1394
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // Final|Native|Public|BlueprintCallable // @ game+0x609efe0
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // Final|Native|Public|BlueprintCallable // @ game+0x60a13a8
	void HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609fbb4
	void SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // Final|Native|Public|BlueprintCallable // @ game+0x60a0e20
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f9d0
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a1a58
	void GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void SetToolTip(); // Function UMG.Widget.SetToolTip // Final|Native|Public|BlueprintCallable // @ game+0x60a1cd0
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // Public|Delegate // @ game+0x21d2c4
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile // Final|Native|Public|BlueprintCallable // @ game+0x609f008
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a1afc
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

	void OnAnimationFinished(); // Function UMG.UserWidget.OnAnimationFinished // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x9de8f8
	void GetWidgetComponent(); // Function UMG.UserWidget.GetWidgetComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f68c
	void Destruct(); // Function UMG.UserWidget.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void OnMouseLeave(); // Function UMG.UserWidget.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void StopListeningForInputAction(); // Function UMG.UserWidget.StopListeningForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x60a1ef4
	void PauseAnimation(); // Function UMG.UserWidget.PauseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x60a0504
	void SetForegroundColor(); // Function UMG.UserWidget.SetForegroundColor // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x60a10cc
	void ReverseAnimation(); // Function UMG.UserWidget.ReverseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x60a0898
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x60a0870
	void OnControllerAnalogValueChanged(); // Function UMG.UserWidget.OnControllerAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void SetInputActionBlocking(); // Function UMG.UserWidget.SetInputActionBlocking // Final|Native|Protected|BlueprintCallable // @ game+0x60a11c0
	void OnTouchStarted(); // Function UMG.UserWidget.OnTouchStarted // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void IsInteractable(); // Function UMG.UserWidget.IsInteractable // BlueprintCosmetic|Event|Public|BlueprintEvent|Const // @ game+0x21d2c4
	void SetOwningPlayer(); // Function UMG.UserWidget.SetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x60a16b4
	void SetAlignmentInViewport(); // Function UMG.UserWidget.SetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a0d84
	void OnDragCancelled(); // Function UMG.UserWidget.OnDragCancelled // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void SetPlaybackSpeed(); // Function UMG.UserWidget.SetPlaybackSpeed // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x60a1800
	void OnControllerButtonReleased(); // Function UMG.UserWidget.OnControllerButtonReleased // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void GetOwningPlayer(); // Function UMG.UserWidget.GetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xe031bc
	void GetAnimationCurrentTime(); // Function UMG.UserWidget.GetAnimationCurrentTime // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f0e0
	void FinishStoppedSequencePlayers(); // Function UMG.UserWidget.FinishStoppedSequencePlayers // Final|Native|Public|BlueprintCallable // @ game+0x609efcc
	void OnTouchGesture(); // Function UMG.UserWidget.OnTouchGesture // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void OnKeyDown(); // Function UMG.UserWidget.OnKeyDown // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void OnMouseButtonDown(); // Function UMG.UserWidget.OnMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void GetOwningLocalPlayer(); // Function UMG.UserWidget.GetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f370
	void SetPadding(); // Function UMG.UserWidget.SetPadding // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x60a1760
	void IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609fd08
	void OnAnimationStarted(); // Function UMG.UserWidget.OnAnimationStarted // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x9dee54
	void GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f394
	void PreConstruct(); // Function UMG.UserWidget.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void PlaySound(); // Function UMG.UserWidget.PlaySound // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x60a07c4
	void OnPreviewMouseButtonDown(); // Function UMG.UserWidget.OnPreviewMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void OnKeyChar(); // Function UMG.UserWidget.OnKeyChar // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x609f09c
	void PlayAnimation(); // Function UMG.UserWidget.PlayAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xd02e14
	void IsInViewport(); // Function UMG.UserWidget.IsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f200
	void AddToViewport(); // Function UMG.UserWidget.AddToViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x609e9b0
	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x60a1fd8
	void SetPositionInViewport(); // Function UMG.UserWidget.SetPositionInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a18e0
	void OnKeyUp(); // Function UMG.UserWidget.OnKeyUp // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void SetInputActionPriority(); // Function UMG.UserWidget.SetInputActionPriority // Final|Native|Protected|BlueprintCallable // @ game+0x60a1264
	void OnDrop(); // Function UMG.UserWidget.OnDrop // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void OnDragLeave(); // Function UMG.UserWidget.OnDragLeave // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void SetDesiredSizeInViewport(); // Function UMG.UserWidget.SetDesiredSizeInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a1024
	void IsListeningForInputAction(); // Function UMG.UserWidget.IsListeningForInputAction // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x609fd48
	void OnDragDetected(); // Function UMG.UserWidget.OnDragDetected // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609fd08
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x59ce838
	void OnTouchEnded(); // Function UMG.UserWidget.OnTouchEnded // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void OnFocusLost(); // Function UMG.UserWidget.OnFocusLost // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void OnMouseMove(); // Function UMG.UserWidget.OnMouseMove // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f200
	void OnDragEnter(); // Function UMG.UserWidget.OnDragEnter // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void ListenForInputAction(); // Function UMG.UserWidget.ListenForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x609ffd8
	void SetColorAndOpacity(); // Function UMG.UserWidget.SetColorAndOpacity // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x7fd728
	void GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609f0c4
	void StopAnimation(); // Function UMG.UserWidget.StopAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xc0df4c
	void OnMouseButtonUp(); // Function UMG.UserWidget.OnMouseButtonUp // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void SetNumLoopsToPlay(); // Function UMG.UserWidget.SetNumLoopsToPlay // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x60a14e0
	void OnDragOver(); // Function UMG.UserWidget.OnDragOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void SetOwningLocalPlayer(); // Function UMG.UserWidget.SetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x60a1608
	void OnMouseButtonDoubleClick(); // Function UMG.UserWidget.OnMouseButtonDoubleClick // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void OnMouseWheel(); // Function UMG.UserWidget.OnMouseWheel // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void OnControllerButtonPressed(); // Function UMG.UserWidget.OnControllerButtonPressed // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void Tick(); // Function UMG.UserWidget.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void OnPreviewKeyDown(); // Function UMG.UserWidget.OnPreviewKeyDown // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void SetAnchorsInViewport(); // Function UMG.UserWidget.SetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x60a0efc
	void OnPaint(); // Function UMG.UserWidget.OnPaint // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x21d2c4
	void PlayAnimationTo(); // Function UMG.UserWidget.PlayAnimationTo // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x60a05a4
	void IsAnimationPlaying(); // Function UMG.UserWidget.IsAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x609fc68
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // Final|Native|Protected|BlueprintCallable // @ game+0x60a1ee0
	void Construct(); // Function UMG.UserWidget.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void OnAnalogValueChanged(); // Function UMG.UserWidget.OnAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void OnMotionDetected(); // Function UMG.UserWidget.OnMotionDetected // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void OnTouchMoved(); // Function UMG.UserWidget.OnTouchMoved // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void OnFocusReceived(); // Function UMG.UserWidget.OnFocusReceived // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // Final|Native|Public|BlueprintCallable // @ game+0x60a1ecc
	void OnMouseEnter(); // Function UMG.UserWidget.OnMouseEnter // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void AddToPlayerScreen(); // Function UMG.UserWidget.AddToPlayerScreen // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x609e910
};

// Class UMG.WidgetComponent
// Size: 0xc70 (Inherited: 0xaa0)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0xaa0(0x01)
	enum class EWidgetTimingPolicy *a874f2956a; // 0xaa1(0x01)
	char pad_AA2[0x6]; // 0xaa2(0x06)
	struct UClass* WidgetClass; // 0xaa8(0x08)
	struct FIntPoint DrawSize; // 0xab0(0x08)
	bool *b96d0532df; // 0xab8(0x01)
	bool *b722f23391; // 0xab9(0x01)
	char pad_ABA[0x2]; // 0xaba(0x02)
	float *a011dd4f72; // 0xabc(0x04)
	char pad_AC0[0x8]; // 0xac0(0x08)
	struct FIntPoint *ba486f4b76; // 0xac8(0x08)
	bool *8e1e9764d6; // 0xad0(0x01)
	char pad_AD1[0x3]; // 0xad1(0x03)
	struct FVector2D Pivot; // 0xad4(0x08)
	bool *d6058d5d01; // 0xadc(0x01)
	bool *03bff2291d; // 0xadd(0x01)
	char pad_ADE[0x2]; // 0xade(0x02)
	struct ULocalPlayer* *5b4533fedb; // 0xae0(0x08)
	struct FLinearColor BackgroundColor; // 0xae8(0x10)
	struct FLinearColor TintColorAndOpacity; // 0xaf8(0x10)
	float OpacityFromTexture; // 0xb08(0x04)
	enum class EWidgetBlendMode BlendMode; // 0xb0c(0x01)
	bool bIsTwoSided; // 0xb0d(0x01)
	bool *03adcd321a; // 0xb0e(0x01)
	char pad_B0F[0x1]; // 0xb0f(0x01)
	struct UUserWidget* Widget; // 0xb10(0x08)
	char pad_B18[0x20]; // 0xb18(0x20)
	struct UBodySetup* BodySetup; // 0xb38(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0xb40(0x08)
	struct UMaterialInterface* *0bc064785d; // 0xb48(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0xb50(0x08)
	struct UMaterialInterface* *8ee5b62788; // 0xb58(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0xb60(0x08)
	struct UMaterialInterface* *dec60e0757; // 0xb68(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0xb70(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0xb78(0x08)
	bool *4a82e5408f; // 0xb80(0x01)
	bool *f67f2b75b3; // 0xb81(0x01)
	char pad_B82[0x6]; // 0xb82(0x06)
	struct FName *e2e00ebdbf; // 0xb88(0x08)
	int32 *478de7691e; // 0xb90(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0xb94(0x01)
	char pad_B95[0x3]; // 0xb95(0x03)
	float CylinderArcAngle; // 0xb98(0x04)
	char pad_B9C[0x24]; // 0xb9c(0x24)
	struct FVector2D FixedScreenSize; // 0xbc0(0x08)
	enum class EWidgetForcedLOD ForcedLOD; // 0xbc8(0x01)
	bool bUseLOD; // 0xbc9(0x01)
	bool bAutoSetFixedScreenSize; // 0xbca(0x01)
	char pad_BCB[0x5]; // 0xbcb(0x05)
	struct TArray<float> LODScreenSizes; // 0xbd0(0x10)
	float LODUpdateInterval; // 0xbe0(0x04)
	float LODNextUpdateTime; // 0xbe4(0x04)
	float LODLastScreenSize; // 0xbe8(0x04)
	float LODScale; // 0xbec(0x04)
	float *23fef54172; // 0xbf0(0x04)
	bool bShouldRenderWidget; // 0xbf4(0x01)
	bool bAlwaysVisibleWidget; // 0xbf5(0x01)
	char pad_BF6[0x2]; // 0xbf6(0x02)
	struct TMap<struct UPrimitiveComponent*, struct UMaterialInstanceDynamic*> *9ce1319e51; // 0xbf8(0x50)
	struct TArray<struct UMeshComponent*> *8cb6c83369; // 0xc48(0x10)
	struct UTextureRenderTarget2D* OverrideRenderTarget; // 0xc58(0x08)
	struct USceneComponent* *e9b34379df; // 0xc60(0x08)
	char pad_C68[0x8]; // 0xc68(0x08)

	void *edbbafabf9(); // Function UMG.WidgetComponent.*edbbafabf9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a474c
	void *b83351bb8c(); // Function UMG.WidgetComponent.*b83351bb8c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a8710
	void *39fa94b676(); // Function UMG.WidgetComponent.*39fa94b676 // Final|Native|Public|BlueprintCallable // @ game+0x60acc70
	void *23bd6159a7(); // Function UMG.WidgetComponent.*23bd6159a7 // Final|Native|Public|BlueprintCallable // @ game+0x60a8544
	void *50e1cb24ce(); // Function UMG.WidgetComponent.*50e1cb24ce // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5884
	void *f9aa39b217(); // Function UMG.WidgetComponent.*f9aa39b217 // Final|Native|Public|BlueprintCallable // @ game+0x60add74
	void *7ca0342776(); // Function UMG.WidgetComponent.*7ca0342776 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60a50ec
	void *169d061441(); // Function UMG.WidgetComponent.*169d061441 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5dc8
	void *e55dd3886f(); // Function UMG.WidgetComponent.*e55dd3886f // Final|Native|Public|BlueprintCallable // @ game+0x60a74b4
	void *0da30e166d(); // Function UMG.WidgetComponent.*0da30e166d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a586c
	void *18be35add0(); // Function UMG.WidgetComponent.*18be35add0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4efc
	void *ea1e831d1b(); // Function UMG.WidgetComponent.*ea1e831d1b // Native|Public|BlueprintCallable // @ game+0x60af85c
	void *fa94bd4dd0(); // Function UMG.WidgetComponent.*fa94bd4dd0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a9cf8
	void *f9a1fa8948(); // Function UMG.WidgetComponent.*f9a1fa8948 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4d44
	void *53c6c6ca30(); // Function UMG.WidgetComponent.*53c6c6ca30 // Final|Native|Public|BlueprintCallable // @ game+0x60a307c
	void *545800f849(); // Function UMG.WidgetComponent.*545800f849 // Final|Native|Public|BlueprintCallable // @ game+0x60b0140
	void *0e3d589835(); // Function UMG.WidgetComponent.*0e3d589835 // Final|Native|Public|BlueprintCallable // @ game+0x60af8f0
	void *815e97e709(); // Function UMG.WidgetComponent.*815e97e709 // Native|Public|BlueprintCallable // @ game+0x550d24
	void *913ef79546(); // Function UMG.WidgetComponent.*913ef79546 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5df0
	void *5dc4f9fc18(); // Function UMG.WidgetComponent.*5dc4f9fc18 // Final|Native|Public|BlueprintCallable // @ game+0x60a9ffc
	void *a721799963(); // Function UMG.WidgetComponent.*a721799963 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a63e4
	void *c1379fd852(); // Function UMG.WidgetComponent.*c1379fd852 // Final|Native|Public|BlueprintCallable // @ game+0x60a2924
	void *7e8334c9c4(); // Function UMG.WidgetComponent.*7e8334c9c4 // Final|Native|Public|BlueprintCallable // @ game+0x60a9aa0
	void *a14c2659b8(); // Function UMG.WidgetComponent.*a14c2659b8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a684c
	void *65da1ee799(); // Function UMG.WidgetComponent.*65da1ee799 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5d74
	void *73b95e1918(); // Function UMG.WidgetComponent.*73b95e1918 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a9684
};

// Class UMG.*d76301fdac
// Size: 0x148 (Inherited: 0x130)
struct U*d76301fdac : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x130(0x10)
	char pad_140[0x8]; // 0x140(0x08)

	void GetChildAt(); // Function UMG.*d76301fdac.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4b7c
	void GetChildIndex(); // Function UMG.*d76301fdac.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4c1c
	void HasAnyChildren(); // Function UMG.*d76301fdac.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a66f4
	void RemoveChild(); // Function UMG.*d76301fdac.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x60a7a7c
	void AddChild(); // Function UMG.*d76301fdac.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x60a20c4
	void ClearChildren(); // Function UMG.*d76301fdac.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x60a2d64
	void GetChildrenCount(); // Function UMG.*d76301fdac.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4cbc
	void HasChild(); // Function UMG.*d76301fdac.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6710
	void RemoveChildAt(); // Function UMG.*d76301fdac.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x60a7b1c
};

// Class UMG.*89c52a3074
// Size: 0x148 (Inherited: 0x148)
struct U*89c52a3074 : U*d76301fdac {

	void GetContent(); // Function UMG.*89c52a3074.GetContent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4cd4
	void SetContent(); // Function UMG.*89c52a3074.SetContent // Final|Native|Public|BlueprintCallable // @ game+0x60a9484
	void GetContentSlot(); // Function UMG.*89c52a3074.GetContentSlot // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4d00
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

	void SetBackgroundColor(); // Function UMG.Button.SetBackgroundColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a8678
	void SetColorAndOpacity(); // Function UMG.Button.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a9240
	void IsPressed(); // Function UMG.Button.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6934
	void SetStyle(); // Function UMG.Button.SetStyle // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x60ae540
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

	void OnEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x21d2c4
	void OnEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x21d2c4
	void GetText(); // Function UMG.EditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6110
	void SetText(); // Function UMG.EditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x60ae610
	void SetIsPassword(); // Function UMG.EditableText.SetIsPassword // Final|Native|Public|BlueprintCallable // @ game+0x60ab688
	void SetHintText(); // Function UMG.EditableText.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x60aa230
	void SetIsReadOnly(); // Function UMG.EditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x60ab744
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

	void Dragged(); // Function UMG.DragDropOperation.Dragged // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x609ec38
	void DragCancelled(); // Function UMG.DragDropOperation.DragCancelled // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x609eb44
	void Drop(); // Function UMG.DragDropOperation.Drop // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x609ed2c
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

	void SetOpacity(); // Function UMG.TextBlock.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x60acbd8
	void SetShadowColorAndOpacity(); // Function UMG.TextBlock.SetShadowColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60adc50
	void SetColorAndOpacity(); // Function UMG.TextBlock.SetColorAndOpacity // Final|Native|Public|BlueprintCallable // @ game+0xadc7a8
	void SetWrapTextAt(); // Function UMG.TextBlock.SetWrapTextAt // Final|Native|Public|BlueprintCallable // @ game+0x60af990
	void SetJustification(); // Function UMG.TextBlock.SetJustification // Final|Native|Public|BlueprintCallable // @ game+0x60abb24
	void SetText(); // Function UMG.TextBlock.SetText // Native|Public|BlueprintCallable // @ game+0x60ae9e0
	void GetText(); // Function UMG.TextBlock.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6370
	void SetShadowOffset(); // Function UMG.TextBlock.SetShadowOffset // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60adce8
	void SetFont(); // Function UMG.TextBlock.SetFont // Final|Native|Public|BlueprintCallable // @ game+0x60a9ddc
	void SetMinDesiredWidth(); // Function UMG.TextBlock.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x60ac5f0
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

	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x21d2c4
	void FindOptionIndex(); // Function UMG.ComboBoxString.FindOptionIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4274
	void AddOption(); // Function UMG.ComboBoxString.AddOption // Final|Native|Public|BlueprintCallable // @ game+0x60a2864
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // Final|Native|Public|BlueprintCallable // @ game+0x60a2ea8
	void GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5fec
	void GetOptionAtIndex(); // Function UMG.ComboBoxString.GetOptionAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5c1c
	void RemoveOption(); // Function UMG.ComboBoxString.RemoveOption // Final|Native|Public|BlueprintCallable // @ game+0x60a7bbc
	void OnSelectionChangedEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x21d2c4
	void GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5d5c
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // Final|Native|Public|BlueprintCallable // @ game+0x60a74a0
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // Final|Native|Public|BlueprintCallable // @ game+0x60a2e94
	void SetSelectedOption(); // Function UMG.ComboBoxString.SetSelectedOption // Final|Native|Public|BlueprintCallable // @ game+0x60adb54
};

// Class UMG.WidgetSwitcher
// Size: 0x160 (Inherited: 0x148)
struct UWidgetSwitcher : U*d76301fdac {
	int32 ActiveWidgetIndex; // 0x148(0x04)
	char pad_14C[0x14]; // 0x14c(0x14)

	void SetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // Native|Public|BlueprintCallable // @ game+0xbea8fc
	void GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4368
	void GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5bb8
	void SetActiveWidget(); // Function UMG.WidgetSwitcher.SetActiveWidget // Native|Public|BlueprintCallable // @ game+0x60a8008
	void GetWidgetAtIndex(); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4b7c
};

// Class UMG.*6d6e07ab56
// Size: 0x50 (Inherited: 0x30)
struct U*6d6e07ab56 : U*528374bf77 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFail; // 0x40(0x10)

	void *d70c1d6fed(); // Function UMG.*6d6e07ab56.*d70c1d6fed // Final|Native|Static|Public|BlueprintCallable // @ game+0x609ea48
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

	void GetValue(); // Function UMG.*821b38e7d2.GetValue // Final|Native|Public|Const // @ game+0x609f4dc
};

// Class UMG.*70db9ed234
// Size: 0x58 (Inherited: 0x50)
struct U*70db9ed234 : U*e74f5ed9b0 {
	char pad_50[0x8]; // 0x50(0x08)

	void GetValue(); // Function UMG.*70db9ed234.GetValue // Final|Native|Public|Const // @ game+0x609f500
};

// Class UMG.*8249e2063a
// Size: 0x58 (Inherited: 0x50)
struct U*8249e2063a : U*e74f5ed9b0 {
	char pad_50[0x8]; // 0x50(0x08)

	void GetValue(); // Function UMG.*8249e2063a.GetValue // Final|Native|Public|Const // @ game+0x609f58c
};

// Class UMG.*ec82f90d9e
// Size: 0x58 (Inherited: 0x50)
struct U*ec82f90d9e : U*e74f5ed9b0 {
	char pad_50[0x8]; // 0x50(0x08)

	void GetLinearValue(); // Function UMG.*ec82f90d9e.GetLinearValue // Final|Native|Public|HasDefaults|Const // @ game+0x609f234
	void GetSlateValue(); // Function UMG.*ec82f90d9e.GetSlateValue // Final|Native|Public|Const // @ game+0x609f3dc
};

// Class UMG.*16da5812db
// Size: 0x50 (Inherited: 0x50)
struct U*16da5812db : U*e74f5ed9b0 {

	void GetValue(); // Function UMG.*16da5812db.GetValue // Final|Native|Public|Const // @ game+0x609f5b0
};

// Class UMG.*943c1130a9
// Size: 0x50 (Inherited: 0x50)
struct U*943c1130a9 : U*e74f5ed9b0 {

	void GetValue(); // Function UMG.*943c1130a9.GetValue // Final|Native|Public|Const // @ game+0x609f5d8
};

// Class UMG.*5103bcf183
// Size: 0x50 (Inherited: 0x50)
struct U*5103bcf183 : U*e74f5ed9b0 {

	void GetValue(); // Function UMG.*5103bcf183.GetValue // Final|Native|Public|Const // @ game+0x609f5fc
};

// Class UMG.*10b1d97b0d
// Size: 0x58 (Inherited: 0x50)
struct U*10b1d97b0d : U*e74f5ed9b0 {
	char pad_50[0x8]; // 0x50(0x08)

	void GetStringValue(); // Function UMG.*10b1d97b0d.GetStringValue // Final|Native|Public|Const // @ game+0x609f454
	void GetTextValue(); // Function UMG.*10b1d97b0d.GetTextValue // Final|Native|Public|Const // @ game+0xab9730
};

// Class UMG.*0b442c28a8
// Size: 0x50 (Inherited: 0x50)
struct U*0b442c28a8 : U*e74f5ed9b0 {

	void GetValue(); // Function UMG.*0b442c28a8.GetValue // Final|Native|Public|Const // @ game+0x609f620
};

// Class UMG.*6805cd9815
// Size: 0x50 (Inherited: 0x50)
struct U*6805cd9815 : U*e74f5ed9b0 {

	void GetValue(); // Function UMG.*6805cd9815.GetValue // Final|Native|Public|Const // @ game+0x609f644
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

	void *6c95a21a80(); // Function UMG.*d8080ba2be.*6c95a21a80 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x609e5ec
	void *ca60eb2744(); // Function UMG.*d8080ba2be.*ca60eb2744 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x60a017c
	void *778499e445(); // Function UMG.*d8080ba2be.*778499e445 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x609fde8
	void *043b3d163d(); // Function UMG.*d8080ba2be.*043b3d163d // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x60a0bc0
	void *2ee3fab50d(); // Function UMG.*d8080ba2be.*2ee3fab50d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x60a02d4
	void *37c0216590(); // Function UMG.*d8080ba2be.*37c0216590 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x60a0970
	void *a89a8692da(); // Function UMG.*d8080ba2be.*a89a8692da // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x60a0a98
	void *95737f9cd7(); // Function UMG.*d8080ba2be.*95737f9cd7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x609f264
	void *1392cc8233(); // Function UMG.*d8080ba2be.*1392cc8233 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x609ee20
	void *d1c25c8168(); // Function UMG.*d8080ba2be.*d1c25c8168 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x609e78c
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
// Size: 0x438 (Inherited: 0x3c8)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x3c8(0x08)
	bool *c2dcb77636; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct TArray<struct F*b28a91287c> Bindings; // 0x3d8(0x10)
	struct TArray<struct U*3335e92189*> Animations; // 0x3e8(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3f8(0x10)
	bool *209a2d6d29; // 0x408(0x01)
	bool *47bd1be933; // 0x409(0x01)
	bool *846ea20853; // 0x40a(0x01)
	char pad_40B[0x5]; // 0x40b(0x05)
	struct UUserWidget* *9cb6685090; // 0x410(0x20)
	struct UUserWidget* Template; // 0x430(0x08)
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

	void SetVerticalAlignment(); // Function UMG.*5780fe346e.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aef98
	void SetHorizontalAlignment(); // Function UMG.*5780fe346e.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa4ac
	void SetPadding(); // Function UMG.*5780fe346e.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60acdb0
};

// Class UMG.*587f12c230
// Size: 0x68 (Inherited: 0x40)
struct U*587f12c230 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(); // Function UMG.*587f12c230.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af0c0
	void SetHorizontalAlignment(); // Function UMG.*587f12c230.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa5d4
	void SetPadding(); // Function UMG.*587f12c230.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60acef0
};

// Class UMG.*71e35efa3f
// Size: 0x68 (Inherited: 0x40)
struct U*71e35efa3f : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(); // Function UMG.*71e35efa3f.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af154
	void SetHorizontalAlignment(); // Function UMG.*71e35efa3f.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa668
	void SetPadding(); // Function UMG.*71e35efa3f.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60acf90
};

// Class UMG.*8d608b1ea0
// Size: 0x78 (Inherited: 0x40)
struct U*8d608b1ea0 : UPanelSlot {
	struct F*a477d9422f LayoutData; // 0x40(0x28)
	bool bAutoSize; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32 ZOrder; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	void GetLayout(); // Function UMG.*8d608b1ea0.GetLayout // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5840
	void SetOffsets(); // Function UMG.*8d608b1ea0.SetOffsets // Final|Native|Public|BlueprintCallable // @ game+0x8af3a8
	void SetZOrder(); // Function UMG.*8d608b1ea0.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x60afa28
	void *b85a1188e8(); // Function UMG.*8d608b1ea0.*b85a1188e8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4764
	void *87fd3848c3(); // Function UMG.*8d608b1ea0.*87fd3848c3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5bdc
	void SetAnchors(); // Function UMG.*8d608b1ea0.SetAnchors // Final|Native|Public|BlueprintCallable // @ game+0x60a81c4
	void SetAutoSize(); // Function UMG.*8d608b1ea0.SetAutoSize // Final|Native|Public|BlueprintCallable // @ game+0x60a85e4
	void SetMinimum(); // Function UMG.*8d608b1ea0.SetMinimum // Final|Native|Public|HasDefaults // @ game+0x60ac7b8
	void *d4e579e962(); // Function UMG.*8d608b1ea0.*d4e579e962 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a662c
	void GetAlignment(); // Function UMG.*8d608b1ea0.GetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60a438c
	void SetAlignment(); // Function UMG.*8d608b1ea0.SetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a809c
	void SetMaximum(); // Function UMG.*8d608b1ea0.SetMaximum // Final|Native|Public|HasDefaults // @ game+0x60ac304
	void SetPosition(); // Function UMG.*8d608b1ea0.SetPosition // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60ad668
	void GetPosition(); // Function UMG.*8d608b1ea0.GetPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5d98
	void SetLayout(); // Function UMG.*8d608b1ea0.SetLayout // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x60abdd4
	void GetSize(); // Function UMG.*8d608b1ea0.GetSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60a60c0
	void SetSize(); // Function UMG.*8d608b1ea0.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60ade04
	void *129c787cc1(); // Function UMG.*8d608b1ea0.*129c787cc1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a471c
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

	void SetRow(); // Function UMG.GridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x60ad794
	void SetPadding(); // Function UMG.GridSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0xa83a94
	void SetColumnSpan(); // Function UMG.GridSlot.SetColumnSpan // Final|Native|Public|BlueprintCallable // @ game+0x60a93f4
	void SetColumn(); // Function UMG.GridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x60a92d8
	void SetVerticalAlignment(); // Function UMG.GridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af1e8
	void SetHorizontalAlignment(); // Function UMG.GridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa6fc
	void SetLayer(); // Function UMG.GridSlot.SetLayer // Final|Native|Public|BlueprintCallable // @ game+0x60abcac
	void SetRowSpan(); // Function UMG.GridSlot.SetRowSpan // Final|Native|Public|BlueprintCallable // @ game+0x60ad8b0
};

// Class UMG.*ac77a29870
// Size: 0x68 (Inherited: 0x40)
struct U*ac77a29870 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetHorizontalAlignment(); // Function UMG.*ac77a29870.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa78c
	void SetSize(); // Function UMG.*ac77a29870.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x60ade90
	void SetVerticalAlignment(); // Function UMG.*ac77a29870.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af278
	void SetPadding(); // Function UMG.*ac77a29870.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ad030
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

	void SetVerticalAlignment(); // Function UMG.*d668aec7b0.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af308
	void SetHorizontalAlignment(); // Function UMG.*d668aec7b0.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa81c
	void SetPadding(); // Function UMG.*d668aec7b0.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ad0d0
	void SetZOrder(); // Function UMG.*d668aec7b0.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x60afab8
	void *d4e579e962(); // Function UMG.*d668aec7b0.*d4e579e962 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6650
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

	void SetVerticalAlignment(); // Function UMG.*9f328f65dc.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af398
	void SetHorizontalAlignment(); // Function UMG.*9f328f65dc.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa8ac
	void SetPadding(); // Function UMG.*9f328f65dc.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ad170
};

// Class UMG.*6493b49e09
// Size: 0x60 (Inherited: 0x40)
struct U*6493b49e09 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)

	void SetHorizontalAlignment(); // Function UMG.*6493b49e09.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa940
	void SetPadding(); // Function UMG.*6493b49e09.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ad204
};

// Class UMG.*7822369cdf
// Size: 0x68 (Inherited: 0x40)
struct U*7822369cdf : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(); // Function UMG.*7822369cdf.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af42c
	void SetHorizontalAlignment(); // Function UMG.*7822369cdf.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa9d0
	void SetPadding(); // Function UMG.*7822369cdf.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ad2a4
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

	void SetHorizontalAlignment(); // Function UMG.UniformGridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aaa64
	void SetColumn(); // Function UMG.UniformGridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x60a9368
	void SetVerticalAlignment(); // Function UMG.UniformGridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af4c0
	void SetRow(); // Function UMG.UniformGridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x60ad824
};

// Class UMG.*d2f00ac7d1
// Size: 0x68 (Inherited: 0x40)
struct U*d2f00ac7d1 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetHorizontalAlignment(); // Function UMG.*d2f00ac7d1.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa78c
	void SetSize(); // Function UMG.*d2f00ac7d1.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x60adfd0
	void SetVerticalAlignment(); // Function UMG.*d2f00ac7d1.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af278
	void SetPadding(); // Function UMG.*d2f00ac7d1.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ad030
};

// Class UMG.*39ae413baf
// Size: 0x60 (Inherited: 0x40)
struct U*39ae413baf : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(); // Function UMG.*39ae413baf.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af308
	void SetHorizontalAlignment(); // Function UMG.*39ae413baf.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa81c
	void SetPadding(); // Function UMG.*39ae413baf.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ad204
};

// Class UMG.*63421cc4e8
// Size: 0x168 (Inherited: 0x148)
struct U*63421cc4e8 : U*89c52a3074 {
	bool bDoubleClickTogglesFullscreen; // 0x148(0x01)
	char pad_149[0x1f]; // 0x149(0x1f)

	void SetVerticalAlignment(); // Function UMG.*63421cc4e8.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af550
	void SetHorizontalAlignment(); // Function UMG.*63421cc4e8.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aaaf4
	void SetPadding(); // Function UMG.*63421cc4e8.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ad344
};

// Class UMG.*313fd14115
// Size: 0x68 (Inherited: 0x40)
struct U*313fd14115 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(); // Function UMG.*313fd14115.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af5e0
	void SetHorizontalAlignment(); // Function UMG.*313fd14115.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aab84
	void SetPadding(); // Function UMG.*313fd14115.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ad3e4
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

	void SetFillSpanWhenLessThan(); // Function UMG.*d6bd557e0d.SetFillSpanWhenLessThan // Final|Native|Public|BlueprintCallable // @ game+0x60a9c60
	void SetFillEmptySpace(); // Function UMG.*d6bd557e0d.SetFillEmptySpace // Final|Native|Public|BlueprintCallable // @ game+0x60a9bcc
	void SetPadding(); // Function UMG.*d6bd557e0d.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ad484
	void SetHorizontalAlignment(); // Function UMG.*d6bd557e0d.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aac18
	void SetVerticalAlignment(); // Function UMG.*d6bd557e0d.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af674
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

	void SetRadius(); // Function UMG.CircularThrobber.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x60ad6f4
	void SetPeriod(); // Function UMG.CircularThrobber.SetPeriod // Final|Native|Public|BlueprintCallable // @ game+0x60ad5bc
	void SetNumberOfPieces(); // Function UMG.CircularThrobber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x60ac9e8
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

	void OnEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x21d2c4
	void GetText(); // Function UMG.EditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6184
	void ClearError(); // Function UMG.EditableTextBox.ClearError // Final|Native|Public|BlueprintCallable // @ game+0x60a2d78
	void SetIsReadOnly(); // Function UMG.EditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x60ab7d8
	void SetError(); // Function UMG.EditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x60a97d8
	void HasError(); // Function UMG.EditableTextBox.HasError // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a67b0
	void OnEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x21d2c4
	void SetText(); // Function UMG.EditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x60ae704
	void SetHintText(); // Function UMG.EditableTextBox.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x60aa324
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

	void SetIsExpanded_Animated(); // Function UMG.ExpandableArea.SetIsExpanded_Animated // Final|Native|Public|BlueprintCallable // @ game+0x60ab558
	void SetIsExpanded(); // Function UMG.ExpandableArea.SetIsExpanded // Final|Native|Public|BlueprintCallable // @ game+0x60ab4bc
	void GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a563c
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

	void SetOpacity(); // Function UMG.Image.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x60acb40
	void SetBrush(); // Function UMG.Image.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x60a8a20
	void SetBrushSize(); // Function UMG.Image.SetBrushSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a9080
	void SetBrushFromMaterial(); // Function UMG.Image.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x60a8ccc
	void SetBrushFromTextureDynamic(); // Function UMG.Image.SetBrushFromTextureDynamic // Final|Native|Public|BlueprintCallable // @ game+0x60a8dec
	void GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x60a4d98
	void SetColorAndOpacity(); // Function UMG.Image.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xac7dc8
	void SetBrushFromAsset(); // Function UMG.Image.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x60a8bac
	void SetBrushFromTexture(); // Function UMG.Image.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0xbe7c34
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

	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x21d2c4
	void OnKeySelected__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x21d2c4
	void SetKeySelectionText(); // Function UMG.InputKeySelector.SetKeySelectionText // Final|Native|Public|BlueprintCallable // @ game+0x60abbb8
	void SetAllowModifierKeys(); // Function UMG.InputKeySelector.SetAllowModifierKeys // Final|Native|Public|BlueprintCallable // @ game+0x60a8128
	void GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5680
	void SetSelectedKey(); // Function UMG.InputKeySelector.SetSelectedKey // Final|Native|Public|BlueprintCallable // @ game+0x60ada68
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

	void AddChildToCanvas(); // Function UMG.CanvasPanel.AddChildToCanvas // Final|Native|Public|BlueprintCallable // @ game+0x60a2164
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

	void SetHorizontalAlignment(); // Function UMG.BackgroundBlur.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa418
	void SetPadding(); // Function UMG.BackgroundBlur.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60acd10
	void SetVerticalAlignment(); // Function UMG.BackgroundBlur.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aef04
	void SetApplyAlphaToBlur(); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // Final|Native|Public|BlueprintCallable // @ game+0x60a84b0
	void SetBlurRadius(); // Function UMG.BackgroundBlur.SetBlurRadius // Final|Native|Public|BlueprintCallable // @ game+0x60a87f8
	void SetBlurStrength(); // Function UMG.BackgroundBlur.SetBlurStrength // Native|Public|BlueprintCallable // @ game+0x60a8888
	void SetLowQualityFallbackBrush(); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x60abf10
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

	void SetPadding(); // Function UMG.Border.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ace50
	void SetHorizontalAlignment(); // Function UMG.Border.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60aa540
	void SetBrushFromAsset(); // Function UMG.Border.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x60a8b1c
	void SetBrushFromMaterial(); // Function UMG.Border.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x60a8c3c
	void GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x60a4d74
	void SetBrush(); // Function UMG.Border.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x60a8924
	void SetBrushColor(); // Function UMG.Border.SetBrushColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xc11be4
	void SetVerticalAlignment(); // Function UMG.Border.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x60af02c
	void SetDesiredSizeScale(); // Function UMG.Border.SetDesiredSizeScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a95f8
	void SetBrushFromTexture(); // Function UMG.Border.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0x60a8d5c
	void SetContentColorAndOpacity(); // Function UMG.Border.SetContentColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xb3bb88
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

	void GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4b58
	void IsChecked(); // Function UMG.CheckBox.IsChecked // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6870
	void IsPressed(); // Function UMG.CheckBox.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6958
	void SetIsChecked(); // Function UMG.CheckBox.SetIsChecked // Final|Native|Public|BlueprintCallable // @ game+0x60ab428
	void SetCheckedState(); // Function UMG.CheckBox.SetCheckedState // Final|Native|Public|BlueprintCallable // @ game+0x60a91b0
};

// Class UMG.InvalidationBox
// Size: 0x160 (Inherited: 0x148)
struct UInvalidationBox : U*89c52a3074 {
	bool *0dbb97d1d9; // 0x148(0x01)
	bool CacheRelativeTransforms; // 0x149(0x01)
	char pad_14A[0x16]; // 0x14a(0x16)

	void SetCanCache(); // Function UMG.InvalidationBox.SetCanCache // Final|Native|Public|BlueprintCallable // @ game+0x60a911c
	void GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4b38
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // Final|Native|Public|BlueprintCallable // @ game+0x60a6838
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

	void Open(); // Function UMG.MenuAnchor.Open // Final|Native|Public|BlueprintCallable // @ game+0x60a6f8c
	void ToggleOpen(); // Function UMG.MenuAnchor.ToggleOpen // Final|Native|Public|BlueprintCallable // @ game+0x60aff7c
	void Close(); // Function UMG.MenuAnchor.Close // Final|Native|Public|BlueprintCallable // @ game+0x60a3048
	void IsOpen(); // Function UMG.MenuAnchor.IsOpen // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a68b8
	void ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60afb48
	void GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60a59dc
	void HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6800
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

	void SetEffectMaterial(); // Function UMG.RetainerBox.SetEffectMaterial // Final|Native|Public|BlueprintCallable // @ game+0x60a9748
	void GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4eb4
	void SetTextureParameter(); // Function UMG.RetainerBox.SetTextureParameter // Final|Native|Public|BlueprintCallable // @ game+0x60aead8
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // Final|Native|Public|BlueprintCallable // @ game+0x60a7cf4
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

	void SetUserSpecifiedScale(); // Function UMG.ScaleBox.SetUserSpecifiedScale // Final|Native|Public|BlueprintCallable // @ game+0x60aed3c
	void SetStretchDirection(); // Function UMG.ScaleBox.SetStretchDirection // Final|Native|Public|BlueprintCallable // @ game+0x60ae4a8
	void SetIgnoreInheritedScale(); // Function UMG.ScaleBox.SetIgnoreInheritedScale // Final|Native|Public|BlueprintCallable // @ game+0x60aaca8
	void SetStretch(); // Function UMG.ScaleBox.SetStretch // Final|Native|Public|BlueprintCallable // @ game+0x60ae410
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

	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x60a3034
	void SetMinDesiredWidth(); // Function UMG.SizeBox.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x60ac558
	void SetWidthOverride(); // Function UMG.SizeBox.SetWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x8fd488
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x60a2e44
	void SetMaxAspectRatio(); // Function UMG.SizeBox.SetMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x60ac00c
	void SetMinDesiredHeight(); // Function UMG.SizeBox.SetMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x60ac390
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x60a2e08
	void SetMaxDesiredHeight(); // Function UMG.SizeBox.SetMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x60ac0a4
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x60a2df4
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x60a2dcc
	void SetMaxDesiredWidth(); // Function UMG.SizeBox.SetMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x60ac13c
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x60a2e58
	void SetHeightOverride(); // Function UMG.SizeBox.SetHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x8fd40c
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x60a2de0
};

// Class UMG.Viewport
// Size: 0x170 (Inherited: 0x148)
struct UViewport : U*89c52a3074 {
	struct FLinearColor BackgroundColor; // 0x148(0x10)
	char pad_158[0x18]; // 0x158(0x18)

	void GetViewLocation(); // Function UMG.Viewport.GetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60a644c
	void GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a660c
	void GetViewRotation(); // Function UMG.Viewport.GetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6498
	void SetViewRotation(); // Function UMG.Viewport.SetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60af7bc
	void Spawn(); // Function UMG.Viewport.Spawn // Final|Native|Public|BlueprintCallable // @ game+0x60afedc
	void SetViewLocation(); // Function UMG.Viewport.SetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60af704
};

// Class UMG.GridPanel
// Size: 0x178 (Inherited: 0x148)
struct UGridPanel : U*d76301fdac {
	struct TArray<float> ColumnFill; // 0x148(0x10)
	struct TArray<float> RowFill; // 0x158(0x10)
	char pad_168[0x10]; // 0x168(0x10)

	void AddChildToGrid(); // Function UMG.GridPanel.AddChildToGrid // Final|Native|Public|BlueprintCallable // @ game+0x60a2264
};

// Class UMG.HorizontalBox
// Size: 0x158 (Inherited: 0x148)
struct UHorizontalBox : U*d76301fdac {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToHorizontalBox(); // Function UMG.HorizontalBox.AddChildToHorizontalBox // Final|Native|Public|BlueprintCallable // @ game+0x60a2364
};

// Class UMG.Overlay
// Size: 0x158 (Inherited: 0x148)
struct UOverlay : U*d76301fdac {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToOverlay(); // Function UMG.Overlay.AddChildToOverlay // Final|Native|Public|BlueprintCallable // @ game+0x60a2464
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

	void SetScrollOffset(); // Function UMG.ScrollBox.SetScrollOffset // Final|Native|Public|BlueprintCallable // @ game+0x60ad9d0
	void SetScrollBarVisibility(); // Function UMG.ScrollBox.SetScrollBarVisibility // Final|Native|Public|BlueprintCallable // @ game+0x60ad940
	void GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5fa4
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // Final|Native|Public|BlueprintCallable // @ game+0x60a7d1c
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // Final|Native|Public|BlueprintCallable // @ game+0x60a7d08
	void GetScrollToEndOffset(); // Function UMG.ScrollBox.GetScrollToEndOffset // Final|Native|Public|BlueprintCallable // @ game+0x60a5fc4
	void ScrollWidgetIntoView(); // Function UMG.ScrollBox.ScrollWidgetIntoView // Final|Native|Public|BlueprintCallable // @ game+0x60a7dcc
};

// Class UMG.UniformGridPanel
// Size: 0x170 (Inherited: 0x148)
struct UUniformGridPanel : U*d76301fdac {
	struct FMargin SlotPadding; // 0x148(0x10)
	float MinDesiredSlotWidth; // 0x158(0x04)
	float MinDesiredSlotHeight; // 0x15c(0x04)
	char pad_160[0x10]; // 0x160(0x10)

	void SetMinDesiredSlotHeight(); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // Final|Native|Public|BlueprintCallable // @ game+0x60ac428
	void SetMinDesiredSlotWidth(); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // Final|Native|Public|BlueprintCallable // @ game+0x60ac4c0
	void AddChildToUniformGrid(); // Function UMG.UniformGridPanel.AddChildToUniformGrid // Final|Native|Public|BlueprintCallable // @ game+0x60a2564
	void SetSlotPadding(); // Function UMG.UniformGridPanel.SetSlotPadding // Final|Native|Public|BlueprintCallable // @ game+0x60ae1dc
};

// Class UMG.VerticalBox
// Size: 0x158 (Inherited: 0x148)
struct UVerticalBox : U*d76301fdac {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToVerticalBox(); // Function UMG.VerticalBox.AddChildToVerticalBox // Final|Native|Public|BlueprintCallable // @ game+0x60a2664
};

// Class UMG.WrapBox
// Size: 0x168 (Inherited: 0x148)
struct UWrapBox : U*d76301fdac {
	struct FVector2D InnerSlotPadding; // 0x148(0x08)
	float WrapWidth; // 0x150(0x04)
	bool bExplicitWrapWidth; // 0x154(0x01)
	char pad_155[0x13]; // 0x155(0x13)

	void AddChildWrapBox(); // Function UMG.WrapBox.AddChildWrapBox // Final|Native|Public|BlueprintCallable // @ game+0x60a2764
	void SetInnerSlotPadding(); // Function UMG.WrapBox.SetInnerSlotPadding // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60aadd4
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

	void SetIsMarquee(); // Function UMG.ProgressBar.SetIsMarquee // Final|Native|Public|BlueprintCallable // @ game+0x60ab5f4
	void SetFillColorAndOpacity(); // Function UMG.ProgressBar.SetFillColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60a9b34
	void SetPercent(); // Function UMG.ProgressBar.SetPercent // Final|Native|Public|BlueprintCallable // @ game+0x60ad524
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

	void SetState(); // Function UMG.ScrollBar.SetState // Final|Native|Public|BlueprintCallable // @ game+0x60ae27c
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

	void SetValue(); // Function UMG.Slider.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x60aedd4
	void GetValue(); // Function UMG.Slider.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a63fc
	void SetIndentHandle(); // Function UMG.Slider.SetIndentHandle // Final|Native|Public|BlueprintCallable // @ game+0x60aad40
	void SetLocked(); // Function UMG.Slider.SetLocked // Final|Native|Public|BlueprintCallable // @ game+0x60abe7c
	void SetStepSize(); // Function UMG.Slider.SetStepSize // Final|Native|Public|BlueprintCallable // @ game+0x60ae378
	void SetSliderBarColor(); // Function UMG.Slider.SetSliderBarColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60ae084
	void SetSliderHandleColor(); // Function UMG.Slider.SetSliderHandleColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60ae130
};

// Class UMG.Spacer
// Size: 0x148 (Inherited: 0x130)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)

	void SetSize(); // Function UMG.Spacer.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x60adf44
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

	void OnSpinBoxValueCommittedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x21d2c4
	void SetMinValue(); // Function UMG.SpinBox.SetMinValue // Final|Native|Public|BlueprintCallable // @ game+0x60ac720
	void GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a598c
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x60a2e6c
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // Final|Native|Public|BlueprintCallable // @ game+0x60a2e80
	void GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a59b4
	void SetMinSliderValue(); // Function UMG.SpinBox.SetMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x60ac688
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x60a2e1c
	void SetMaxSliderValue(); // Function UMG.SpinBox.SetMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x60ac1d4
	void GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5a24
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x60a2e30
	void SetForegroundColor(); // Function UMG.SpinBox.SetForegroundColor // Final|Native|Public|BlueprintCallable // @ game+0x60a9f08
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x21d2c4
	void GetValue(); // Function UMG.SpinBox.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6424
	void OnSpinBoxValueChangedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x21d2c4
	void GetMinValue(); // Function UMG.SpinBox.GetMinValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5a4c
	void SetValue(); // Function UMG.SpinBox.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x60aee6c
	void SetMaxValue(); // Function UMG.SpinBox.SetMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x60ac26c
};

// Class UMG.*70342b2c32
// Size: 0x130 (Inherited: 0x130)
struct U*70342b2c32 : UWidget {

	void OnGenerateRowUObject__DelegateSignature(); // DelegateFunction UMG.*70342b2c32.OnGenerateRowUObject__DelegateSignature // Public|Delegate // @ game+0x21d2c4
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

	void RequestListRefresh(); // Function UMG.TileView.RequestListRefresh // Final|Native|Public|BlueprintCallable // @ game+0x60a7cd8
	void SetItemHeight(); // Function UMG.TileView.SetItemHeight // Final|Native|Public|BlueprintCallable // @ game+0x60ab9bc
	void SetItemWidth(); // Function UMG.TileView.SetItemWidth // Final|Native|Public|BlueprintCallable // @ game+0x60aba70
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

	void GetText(); // Function UMG.MultiLineEditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6244
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x21d2c4
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x21d2c4
	void SetText(); // Function UMG.MultiLineEditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x60ae7f8
	void SetIsReadOnly(); // Function UMG.MultiLineEditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x60ab894
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

	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x21d2c4
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x21d2c4
	void SetText(); // Function UMG.MultiLineEditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x60ae8ec
	void SetError(); // Function UMG.MultiLineEditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x60a993c
	void SetIsReadOnly(); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x60ab928
	void GetText(); // Function UMG.MultiLineEditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a62fc
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

	void SetAnimateVertically(); // Function UMG.Throbber.SetAnimateVertically // Final|Native|Public|BlueprintCallable // @ game+0x60a83f0
	void SetAnimateHorizontally(); // Function UMG.Throbber.SetAnimateHorizontally // Final|Native|Public|BlueprintCallable // @ game+0x60a8264
	void SetAnimateOpacity(); // Function UMG.Throbber.SetAnimateOpacity // Final|Native|Public|BlueprintCallable // @ game+0x60a8328
	void SetNumberOfPieces(); // Function UMG.Throbber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x60aca90
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

	void *24cf5c5bf6(); // Function UMG.*3335e92189.*24cf5c5bf6 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4edc
	void *7a7153ce05(); // Function UMG.*3335e92189.*7a7153ce05 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a60f0
};

// Class UMG.*72fc5568b9
// Size: 0x30 (Inherited: 0x30)
struct U*72fc5568b9 : UBlueprintFunctionLibrary {

	void *96aa495973(); // Function UMG.*72fc5568b9.*96aa495973 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a4dbc
	void Create(); // Function UMG.*72fc5568b9.Create // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6c67f8
	void *498ce7680e(); // Function UMG.*72fc5568b9.*498ce7680e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x60a36a0
	void *4dc9c4895d(); // Function UMG.*72fc5568b9.*4dc9c4895d // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x60a8f28
	void *b35a64ee07(); // Function UMG.*72fc5568b9.*b35a64ee07 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a5538
	void SetMousePosition(); // Function UMG.*72fc5568b9.SetMousePosition // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x60ac844
	void *0dc117f72a(); // Function UMG.*72fc5568b9.*0dc117f72a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a49dc
	void Handled(); // Function UMG.*72fc5568b9.Handled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60a6678
	void *3ec2d7197c(); // Function UMG.*72fc5568b9.*3ec2d7197c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a2ebc
	void *55d8b11790(); // Function UMG.*72fc5568b9.*55d8b11790 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60a6d78
	void *ce13b96fb6(); // Function UMG.*72fc5568b9.*ce13b96fb6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x60aa08c
	void *cace4e1f3e(); // Function UMG.*72fc5568b9.*cace4e1f3e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60a6af8
	void *3753d0f27e(); // Function UMG.*72fc5568b9.*3753d0f27e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a5220
	void *3d37effb97(); // Function UMG.*72fc5568b9.*3d37effb97 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a6980
	void *78a6603821(); // Function UMG.*72fc5568b9.*78a6603821 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x60a3e2c
	void *8443c127ea(); // Function UMG.*72fc5568b9.*8443c127ea // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a4788
	void *dc343af38e(); // Function UMG.*72fc5568b9.*dc343af38e // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x60a456c
	void *3492735933(); // Function UMG.*72fc5568b9.*3492735933 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60aeb78
	void CaptureJoystick(); // Function UMG.*72fc5568b9.CaptureJoystick // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a2a28
	void *94fa4889ea(); // Function UMG.*72fc5568b9.*94fa4889ea // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60a6bf0
	void *aa14279002(); // Function UMG.*72fc5568b9.*aa14279002 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60a6f00
	void *7229935fb0(); // Function UMG.*72fc5568b9.*7229935fb0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xab347c
	void *6988e769b3(); // Function UMG.*72fc5568b9.*6988e769b3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a4140
	void *04c477de51(); // Function UMG.*72fc5568b9.*04c477de51 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a512c
	void *be11e0b6ef(); // Function UMG.*72fc5568b9.*be11e0b6ef // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x60a9dc0
	void *86c7ac962e(); // Function UMG.*72fc5568b9.*86c7ac962e // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x60ab174
	void *74be7739c6(); // Function UMG.*72fc5568b9.*74be7739c6 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60a4d20
	void *a547dd0898(); // Function UMG.*72fc5568b9.*a547dd0898 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x60a43bc
	void *5c2ff6185f(); // Function UMG.*72fc5568b9.*5c2ff6185f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x60a3444
	void *c8e523ce25(); // Function UMG.*72fc5568b9.*c8e523ce25 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a5318
	void *a1ed835c00(); // Function UMG.*72fc5568b9.*a1ed835c00 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60a6894
	void *230588c472(); // Function UMG.*72fc5568b9.*230588c472 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x60a3c30
	void *5ecd23be65(); // Function UMG.*72fc5568b9.*5ecd23be65 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a2bec
	void *71b9fdf36f(); // Function UMG.*72fc5568b9.*71b9fdf36f // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x60ab1f4
	void *50f5caf5bf(); // Function UMG.*72fc5568b9.*50f5caf5bf // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x60a8f28
	void *e5cc63caae(); // Function UMG.*72fc5568b9.*e5cc63caae // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x60a5e14
	void ReleaseJoystickCapture(); // Function UMG.*72fc5568b9.ReleaseJoystickCapture // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a7558
	void *9d06e74d17(); // Function UMG.*72fc5568b9.*9d06e74d17 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a544c
	void *45040f1278(); // Function UMG.*72fc5568b9.*45040f1278 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a77c4
	void *a9657476bb(); // Function UMG.*72fc5568b9.*a9657476bb // Final|Native|Static|Public|BlueprintCallable // @ game+0x60a3198
	void *6e6ce4ec68(); // Function UMG.*72fc5568b9.*6e6ce4ec68 // Final|Native|Static|Public|BlueprintCallable // @ game+0x60a2a0c
	void *00ad7eb6f8(); // Function UMG.*72fc5568b9.*00ad7eb6f8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x60a38ac
	void *2c146e2be6(); // Function UMG.*72fc5568b9.*2c146e2be6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a4880
	void *11972074fe(); // Function UMG.*72fc5568b9.*11972074fe // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x60aae94
	void *9591a85ee0(); // Function UMG.*72fc5568b9.*9591a85ee0 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x60ab310
	void *8172c4ead7(); // Function UMG.*72fc5568b9.*8172c4ead7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x60a3a6c
	void *667d076235(); // Function UMG.*72fc5568b9.*667d076235 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x60ab010
	void *0e65abcd3e(); // Function UMG.*72fc5568b9.*0e65abcd3e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a3228
	void *8ed1a8b147(); // Function UMG.*72fc5568b9.*8ed1a8b147 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60b0020
	void *988d990745(); // Function UMG.*72fc5568b9.*988d990745 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x60a367c
	void *db64590c11(); // Function UMG.*72fc5568b9.*db64590c11 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a56a8
};

// Class UMG.*5ff0e9d0ca
// Size: 0x660 (Inherited: 0x470)
struct U*5ff0e9d0ca : USceneComponent {
	struct FMulticastDelegate OnHoveredWidgetChanged; // 0x468(0x10)
	char pad_480[0x8]; // 0x480(0x08)
	int32 VirtualUserIndex; // 0x488(0x04)
	float PointerIndex; // 0x48c(0x04)
	enum class ECollisionChannel TraceChannel; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	float InteractionDistance; // 0x494(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x498(0x01)
	bool bEnableHitTesting; // 0x499(0x01)
	bool bShowDebug; // 0x49a(0x01)
	char pad_49B[0x1]; // 0x49b(0x01)
	struct FLinearColor DebugColor; // 0x49c(0x10)
	char pad_4AC[0x7c]; // 0x4ac(0x7c)
	struct FHitResult *2d35427527; // 0x528(0x88)
	struct FVector2D *c93c24175e; // 0x5b0(0x08)
	struct FVector2D *6455682c51; // 0x5b8(0x08)
	struct UWidgetComponent* *18a2143ea1; // 0x5c0(0x08)
	struct FHitResult *37342a50f0; // 0x5c8(0x88)
	bool *9caaabc6fb; // 0x650(0x01)
	bool *2e3b21ab86; // 0x651(0x01)
	bool *2f5f6b14a2; // 0x652(0x01)
	char pad_653[0xd]; // 0x653(0x0d)

	void *78dfa2ea01(); // Function UMG.*5ff0e9d0ca.*78dfa2ea01 // Native|Public|BlueprintCallable // @ game+0x60a78f8
	void *eb8e351ac6(); // Function UMG.*5ff0e9d0ca.*eb8e351ac6 // Native|Public|BlueprintCallable // @ game+0x60a7034
	void *1e38f9f1cd(); // Function UMG.*5ff0e9d0ca.*1e38f9f1cd // Native|Public|BlueprintCallable // @ game+0x60a7278
	void *e3225786b1(); // Function UMG.*5ff0e9d0ca.*e3225786b1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5114
	void *01a07c096a(); // Function UMG.*5ff0e9d0ca.*01a07c096a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x60a4340
	void *43fad83b89(); // Function UMG.*5ff0e9d0ca.*43fad83b89 // Native|Public|BlueprintCallable // @ game+0x60a7d30
	void *d9fd255cf1(); // Function UMG.*5ff0e9d0ca.*d9fd255cf1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a68ec
	void *dbd2475b5f(); // Function UMG.*5ff0e9d0ca.*dbd2475b5f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a6904
	void *075123a386(); // Function UMG.*5ff0e9d0ca.*075123a386 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a5824
	void *7da06e772e(); // Function UMG.*5ff0e9d0ca.*7da06e772e // Native|Public|BlueprintCallable // @ game+0x60a76cc
	void *5a53cf5931(); // Function UMG.*5ff0e9d0ca.*5a53cf5931 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60a691c
	void *f5a7bff81d(); // Function UMG.*5ff0e9d0ca.*f5a7bff81d // Native|Public|BlueprintCallable // @ game+0x60a7eac
	void *c2a3eed6ce(); // Function UMG.*5ff0e9d0ca.*c2a3eed6ce // Native|Public|BlueprintCallable // @ game+0x60a712c
	void *1b1d394ff8(); // Function UMG.*5ff0e9d0ca.*1b1d394ff8 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x60a9530
};

// Class UMG.*5ed7aa7874
// Size: 0x30 (Inherited: 0x30)
struct U*5ed7aa7874 : UBlueprintFunctionLibrary {

	void *064bad7cd0(); // Function UMG.*5ed7aa7874.*064bad7cd0 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60a64e4
	void *c0353d59d7(); // Function UMG.*5ed7aa7874.*c0353d59d7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60afb7c
	void *f9de26ecaa(); // Function UMG.*5ed7aa7874.*f9de26ecaa // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x60a6574
	void *5a9dbada10(); // Function UMG.*5ed7aa7874.*5a9dbada10 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60afc9c
	void *24028d9cc4(); // Function UMG.*5ed7aa7874.*24028d9cc4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60afe4c
	void *dc67dc9433(); // Function UMG.*5ed7aa7874.*dc67dc9433 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60afc0c
	void *48c24102a7(); // Function UMG.*5ed7aa7874.*48c24102a7 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60a5a74
	void *ea2fc82874(); // Function UMG.*5ed7aa7874.*ea2fc82874 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x60a7360
	void *4fdeb104e2(); // Function UMG.*5ed7aa7874.*4fdeb104e2 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x60a79e0
	void *0e06de2389(); // Function UMG.*5ed7aa7874.*0e06de2389 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60afd2c
	void *5d566a4088(); // Function UMG.*5ed7aa7874.*5d566a4088 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbdb1c4
	void *0787c0fcac(); // Function UMG.*5ed7aa7874.*0787c0fcac // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60afdbc
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


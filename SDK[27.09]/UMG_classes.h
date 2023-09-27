// Class UMG.Visual
// Size: 0x30 (Inherited: 0x30)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x130 (Inherited: 0x30)
struct UWidget : UVisual {
	bool *a2a36e8264; // 0x30(0x01)
	bool *f44a5ad254; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UPanelSlot* Slot; // 0x38(0x08)
	bool bIsEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	DelegateProperty bIsEnabledDelegate; // 0x48(0x10)
	DelegateProperty OnPrepass; // 0x58(0x10)
	struct FText ToolTipText; // 0x68(0x18)
	DelegateProperty ToolTipTextDelegate; // 0x80(0x10)
	struct UWidget* ToolTipWidget; // 0x90(0x08)
	DelegateProperty *cd3231348e; // 0x98(0x10)
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
	struct TArray<struct U*249bc50ddf*> *dffdcd9e23; // 0x120(0x10)

	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // Final|Native|Public|BlueprintCallable // @ game+0x6155628
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // Final|Native|Public|BlueprintCallable // @ game+0x615388c
	void SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // Final|Native|Public|BlueprintCallable // @ game+0x6155018
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // Final|Native|Public|BlueprintCallable // @ game+0x6152bbc
	void GetParent(); // Function UMG.Widget.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6152f64
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile // Final|Native|Public|BlueprintCallable // @ game+0x6152be4
	void HasUserFocus(); // Function UMG.Widget.HasUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615374c
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6155810
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x22ddc4
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // Final|Native|Public|BlueprintCallable // @ game+0xaba22c
	void IsVisible(); // Function UMG.Widget.IsVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6153c24
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void GenerateWidgetForObject__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void IsHovered(); // Function UMG.Widget.IsHovered // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615395c
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // Final|Native|Public|BlueprintCallable // @ game+0x6155004
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6152db8
	void SetCursor(); // Function UMG.Widget.SetCursor // Final|Native|Public|BlueprintCallable // @ game+0x6154c00
	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615589c
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // Public|Delegate|HasDefaults // @ game+0x22ddc4
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // Native|Public|BlueprintCallable // @ game+0x6154f6c
	void SetToolTip(); // Function UMG.Widget.SetToolTip // Final|Native|Public|BlueprintCallable // @ game+0x6155940
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6153568
	void GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x61559d0
	void SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // Final|Native|Public|BlueprintCallable // @ game+0x6154a90
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdab090
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void GetVisibility(); // Function UMG.Widget.GetVisibility // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6153214
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61534b4
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6152d5c
	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x61556c8
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus // Final|Native|Public|BlueprintCallable // @ game+0x6155aac
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // Public|Delegate // @ game+0x22ddc4
	void HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61537ec
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // Final|Native|Public|BlueprintCallable // @ game+0x6152bd0
	void ResetCursor(); // Function UMG.Widget.ResetCursor // Final|Native|Public|BlueprintCallable // @ game+0x61544f4
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6153608
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6152d88
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6152ef8
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61536ac
	void SetVisibility(); // Function UMG.Widget.SetVisibility // Native|Public|BlueprintCallable // @ game+0x6f374c
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // Native|Public|BlueprintCallable // @ game+0x5a6f61c
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615576c
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
	struct TArray<struct U*7aea8ea27e*> *3e3863d4e3; // 0x1a8(0x10)
	struct TArray<struct U*7aea8ea27e*> *4bcceb71fc; // 0x1b8(0x10)
	bool bStopAction; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	int32 Priority; // 0x1cc(0x04)
	struct TArray<struct F*29c64021c8> *705b4e1e17; // 0x1d0(0x10)
	struct UWidgetTree* WidgetTree; // 0x1e0(0x08)
	char bCanEverTick : 1; // 0x1e8(0x01)
	char *108843f716 : 1; // 0x1e8(0x01)
	char pad_1E8_2 : 6; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	char *8635d1ae99 : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct U*63b14265fa* *63b14265fa; // 0x1f8(0x08)
	char pad_200[0x58]; // 0x200(0x58)

	void OnMouseButtonDown(); // Function UMG.UserWidget.OnMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void SetForegroundColor(); // Function UMG.UserWidget.SetForegroundColor // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6154d3c
	void GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6152ddc
	void OnMouseWheel(); // Function UMG.UserWidget.OnMouseWheel // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void SetAnchorsInViewport(); // Function UMG.UserWidget.SetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6154b6c
	void OnAnimationFinished(); // Function UMG.UserWidget.OnAnimationFinished // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x7c1458
	void GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6152ca0
	void Destruct(); // Function UMG.UserWidget.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void GetOwningPlayer(); // Function UMG.UserWidget.GetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdab090
	void PlayAnimationTo(); // Function UMG.UserWidget.PlayAnimationTo // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6154214
	void Tick(); // Function UMG.UserWidget.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void PauseAnimation(); // Function UMG.UserWidget.PauseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6154174
	void AddToViewport(); // Function UMG.UserWidget.AddToViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x615258c
	void IsInteractable(); // Function UMG.UserWidget.IsInteractable // BlueprintCosmetic|Event|Public|BlueprintEvent|Const // @ game+0x22ddc4
	void ReverseAnimation(); // Function UMG.UserWidget.ReverseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6154508
	void OnTouchMoved(); // Function UMG.UserWidget.OnTouchMoved // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void SetColorAndOpacity(); // Function UMG.UserWidget.SetColorAndOpacity // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x4862c4
	void PlaySound(); // Function UMG.UserWidget.PlaySound // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6154434
	void OnControllerAnalogValueChanged(); // Function UMG.UserWidget.OnControllerAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnDragLeave(); // Function UMG.UserWidget.OnDragLeave // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnKeyDown(); // Function UMG.UserWidget.OnKeyDown // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnMotionDetected(); // Function UMG.UserWidget.OnMotionDetected // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void StopAnimation(); // Function UMG.UserWidget.StopAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xbc9954
	void OnMouseButtonUp(); // Function UMG.UserWidget.OnMouseButtonUp // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void OnDragDetected(); // Function UMG.UserWidget.OnDragDetected // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void SetOwningLocalPlayer(); // Function UMG.UserWidget.SetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6155278
	void OnDragCancelled(); // Function UMG.UserWidget.OnDragCancelled // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void SetDesiredSizeInViewport(); // Function UMG.UserWidget.SetDesiredSizeInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6154c94
	void IsInViewport(); // Function UMG.UserWidget.IsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6152ddc
	void SetInputActionBlocking(); // Function UMG.UserWidget.SetInputActionBlocking // Final|Native|Protected|BlueprintCallable // @ game+0x6154e30
	void OnMouseMove(); // Function UMG.UserWidget.OnMouseMove // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void ListenForInputAction(); // Function UMG.UserWidget.ListenForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x6153c48
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // Final|Native|Public|BlueprintCallable // @ game+0x6155b3c
	void OnMouseLeave(); // Function UMG.UserWidget.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void GetWidgetComponent(); // Function UMG.UserWidget.GetWidgetComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6153238
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5a6f61c
	void SetAlignmentInViewport(); // Function UMG.UserWidget.SetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x61549f4
	void OnKeyChar(); // Function UMG.UserWidget.OnKeyChar // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void AddToPlayerScreen(); // Function UMG.UserWidget.AddToPlayerScreen // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x61524ec
	void OnDragEnter(); // Function UMG.UserWidget.OnDragEnter // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void SetInputActionPriority(); // Function UMG.UserWidget.SetInputActionPriority // Final|Native|Protected|BlueprintCallable // @ game+0x6154ed4
	void IsListeningForInputAction(); // Function UMG.UserWidget.IsListeningForInputAction // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x6153980
	void StopListeningForInputAction(); // Function UMG.UserWidget.StopListeningForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x6155b64
	void IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6153940
	void OnDrop(); // Function UMG.UserWidget.OnDrop // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnFocusReceived(); // Function UMG.UserWidget.OnFocusReceived // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6153940
	void PlayAnimation(); // Function UMG.UserWidget.PlayAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xcb050c
	void GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6152c78
	void OnTouchStarted(); // Function UMG.UserWidget.OnTouchStarted // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x6155c48
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // Final|Native|Protected|BlueprintCallable // @ game+0x6155b50
	void OnKeyUp(); // Function UMG.UserWidget.OnKeyUp // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x61544e0
	void SetPadding(); // Function UMG.UserWidget.SetPadding // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x61553d0
	void OnControllerButtonPressed(); // Function UMG.UserWidget.OnControllerButtonPressed // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnPaint(); // Function UMG.UserWidget.OnPaint // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x22ddc4
	void SetOwningPlayer(); // Function UMG.UserWidget.SetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6155324
	void OnTouchEnded(); // Function UMG.UserWidget.OnTouchEnded // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void OnControllerButtonReleased(); // Function UMG.UserWidget.OnControllerButtonReleased // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnTouchGesture(); // Function UMG.UserWidget.OnTouchGesture // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void OnDragOver(); // Function UMG.UserWidget.OnDragOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnMouseEnter(); // Function UMG.UserWidget.OnMouseEnter // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void OnFocusLost(); // Function UMG.UserWidget.OnFocusLost // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void FinishStoppedSequencePlayers(); // Function UMG.UserWidget.FinishStoppedSequencePlayers // Final|Native|Public|BlueprintCallable // @ game+0x6152ba8
	void SetPositionInViewport(); // Function UMG.UserWidget.SetPositionInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6155550
	void SetNumLoopsToPlay(); // Function UMG.UserWidget.SetNumLoopsToPlay // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6155150
	void OnAnalogValueChanged(); // Function UMG.UserWidget.OnAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnAnimationStarted(); // Function UMG.UserWidget.OnAnimationStarted // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x7c1a5c
	void GetAnimationCurrentTime(); // Function UMG.UserWidget.GetAnimationCurrentTime // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6152cbc
	void IsAnimationPlaying(); // Function UMG.UserWidget.IsAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61538a0
	void GetOwningLocalPlayer(); // Function UMG.UserWidget.GetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6152f1c
	void OnMouseButtonDoubleClick(); // Function UMG.UserWidget.OnMouseButtonDoubleClick // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void Construct(); // Function UMG.UserWidget.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6152f40
	void PreConstruct(); // Function UMG.UserWidget.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void SetPlaybackSpeed(); // Function UMG.UserWidget.SetPlaybackSpeed // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6155470
	void OnPreviewMouseButtonDown(); // Function UMG.UserWidget.OnPreviewMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void OnPreviewKeyDown(); // Function UMG.UserWidget.OnPreviewKeyDown // Event|Public|BlueprintEvent // @ game+0x22ddc4
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

	void *40f1c546c8(); // Function UMG.WidgetComponent.*40f1c546c8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615c3dc
	void *599d22b181(); // Function UMG.WidgetComponent.*599d22b181 // Final|Native|Public|BlueprintCallable // @ game+0x615b180
	void *a58027129b(); // Function UMG.WidgetComponent.*a58027129b // Final|Native|Public|BlueprintCallable // @ game+0x6163d84
	void *8e9522701f(); // Function UMG.WidgetComponent.*8e9522701f // Final|Native|Public|BlueprintCallable // @ game+0x6163534
	void *2306e43359(); // Function UMG.WidgetComponent.*2306e43359 // Native|Public|BlueprintCallable // @ game+0x836f7c
	void *fd9fc96958(); // Function UMG.WidgetComponent.*fd9fc96958 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6159550
	void *7c6ab456c6(); // Function UMG.WidgetComponent.*7c6ab456c6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a07ce4
	void *53ed899efd(); // Function UMG.WidgetComponent.*53ed899efd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615d938
	void *25dab87525(); // Function UMG.WidgetComponent.*25dab87525 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a0b0
	void *91dfbe81ff(); // Function UMG.WidgetComponent.*91dfbe81ff // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x615899c
	void *ef1ae06482(); // Function UMG.WidgetComponent.*ef1ae06482 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a39574
	void *a2fd1e1f6b(); // Function UMG.WidgetComponent.*a2fd1e1f6b // Final|Native|Public|BlueprintCallable // @ game+0x615dc40
	void *3ccf2a3054(); // Function UMG.WidgetComponent.*3ccf2a3054 // Final|Native|Public|BlueprintCallable // @ game+0x615d6e0
	void *1525f9a7d5(); // Function UMG.WidgetComponent.*1525f9a7d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6158b54
	void *f8e07dfcd5(); // Function UMG.WidgetComponent.*f8e07dfcd5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159abc
	void *4f2008772e(); // Function UMG.WidgetComponent.*4f2008772e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159a40
	void *3d501f1b19(); // Function UMG.WidgetComponent.*3d501f1b19 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159a94
	void *bb3c4b2536(); // Function UMG.WidgetComponent.*bb3c4b2536 // Final|Native|Public|BlueprintCallable // @ game+0x61619b8
	void *7c6609fddf(); // Function UMG.WidgetComponent.*7c6609fddf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a518
	void *3bc3f8847f(); // Function UMG.WidgetComponent.*3bc3f8847f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6158dd0
	void *f8fdb5f101(); // Function UMG.WidgetComponent.*f8fdb5f101 // Final|Native|Public|BlueprintCallable // @ game+0x6156cec
	void *ebe4beb900(); // Function UMG.WidgetComponent.*ebe4beb900 // Final|Native|Public|BlueprintCallable // @ game+0x61608b4
	void *8710155628(); // Function UMG.WidgetComponent.*8710155628 // Native|Public|BlueprintCallable // @ game+0x61634a0
	void *a9ef2cf827(); // Function UMG.WidgetComponent.*a9ef2cf827 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615d2c4
	void *d58af63bc9(); // Function UMG.WidgetComponent.*d58af63bc9 // Final|Native|Public|BlueprintCallable // @ game+0x6156594
	void *5879e3362b(); // Function UMG.WidgetComponent.*5879e3362b // Final|Native|Public|BlueprintCallable // @ game+0x615c210
};

// Class UMG.*c1ef4cc603
// Size: 0x148 (Inherited: 0x130)
struct U*c1ef4cc603 : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x130(0x10)
	char pad_140[0x8]; // 0x140(0x08)

	void HasChild(); // Function UMG.*c1ef4cc603.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a3dc
	void GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6158874
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6158914
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x615b7e8
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61587d4
	void RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x615b748
	void AddChild(); // Function UMG.*c1ef4cc603.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x6155d34
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x61569d4
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a3c0
};

// Class UMG.*7fef63158a
// Size: 0x148 (Inherited: 0x148)
struct U*7fef63158a : U*c1ef4cc603 {

	void SetContent(); // Function UMG.*7fef63158a.SetContent // Final|Native|Public|BlueprintCallable // @ game+0x615d0c4
	void GetContent(); // Function UMG.*7fef63158a.GetContent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615892c
	void GetContentSlot(); // Function UMG.*7fef63158a.GetContentSlot // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6158958
};

// Class UMG.Button
// Size: 0x480 (Inherited: 0x148)
struct UButton : U*7fef63158a {
	struct USlateWidgetStyleAsset* Style; // 0x148(0x08)
	struct F*d5cdd95f37 WidgetStyle; // 0x150(0x2a8)
	struct FLinearColor ColorAndOpacity; // 0x3f8(0x10)
	struct FLinearColor BackgroundColor; // 0x408(0x10)
	enum class *1c449fa2e9 ClickMethod; // 0x418(0x01)
	enum class *63a0064aef TouchMethod; // 0x419(0x01)
	bool IsFocusable; // 0x41a(0x01)
	char pad_41B[0x5]; // 0x41b(0x05)
	struct FMulticastDelegate OnClicked; // 0x420(0x10)
	struct FMulticastDelegate OnPressed; // 0x430(0x10)
	struct FMulticastDelegate OnReleased; // 0x440(0x10)
	struct FMulticastDelegate OnHovered; // 0x450(0x10)
	struct FMulticastDelegate OnUnHovered; // 0x460(0x10)
	char pad_470[0x10]; // 0x470(0x10)

	void SetColorAndOpacity(); // Function UMG.Button.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615ce80
	void IsPressed(); // Function UMG.Button.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a600
	void SetStyle(); // Function UMG.Button.SetStyle // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6162184
	void SetBackgroundColor(); // Function UMG.Button.SetBackgroundColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615c344
};

// Class UMG.EditableText
// Size: 0x4c0 (Inherited: 0x130)
struct UEditableText : UWidget {
	struct FText Text; // 0x130(0x18)
	DelegateProperty TextDelegate; // 0x148(0x10)
	struct FText HintText; // 0x158(0x18)
	DelegateProperty HintTextDelegate; // 0x170(0x10)
	struct F*1655c7f388 WidgetStyle; // 0x180(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x3c8(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3d0(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3d8(0x08)
	struct USlateBrushAsset* CaretImage; // 0x3e0(0x08)
	struct FSlateFontInfo Font; // 0x3e8(0x68)
	struct FSlateColor ColorAndOpacity; // 0x450(0x28)
	bool IsReadOnly; // 0x478(0x01)
	bool *d7e649ba19; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	float *5df272fd61; // 0x47c(0x04)
	bool *4d02eb0d17; // 0x480(0x01)
	bool *6a3690e4e5; // 0x481(0x01)
	bool *09293faac1; // 0x482(0x01)
	bool *ed20d539d4; // 0x483(0x01)
	bool *46816700ca; // 0x484(0x01)
	bool *76866562c6; // 0x485(0x01)
	enum class EVirtualKeyboardType *bd48298631; // 0x486(0x01)
	char pad_487[0x1]; // 0x487(0x01)
	struct F*64a42c3900 ShapedTextOptions; // 0x488(0x08)
	struct FMulticastDelegate OnTextChanged; // 0x490(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x4a0(0x10)
	char pad_4B0[0x10]; // 0x4b0(0x10)

	void GetText(); // Function UMG.EditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159ddc
	void SetIsReadOnly(); // Function UMG.EditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x615f388
	void SetIsPassword(); // Function UMG.EditableText.SetIsPassword // Final|Native|Public|BlueprintCallable // @ game+0x615f2cc
	void SetHintText(); // Function UMG.EditableText.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x615de74
	void SetText(); // Function UMG.EditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x6162254
	void OnEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
	void OnEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
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

	void DragCancelled(); // Function UMG.DragDropOperation.DragCancelled // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6152720
	void Dragged(); // Function UMG.DragDropOperation.Dragged // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6152814
	void Drop(); // Function UMG.DragDropOperation.Drop // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6152908
};

// Class UMG.*800d766cf7
// Size: 0x158 (Inherited: 0x130)
struct U*800d766cf7 : UWidget {
	struct F*64a42c3900 ShapedTextOptions; // 0x130(0x08)
	enum class ETextJustify Justification; // 0x138(0x01)
	bool AutoWrapText; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	float WrapTextAt; // 0x13c(0x04)
	enum class *00a79681fd WrappingPolicy; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	struct FMargin Margin; // 0x144(0x10)
	float LineHeightPercentage; // 0x154(0x04)
};

// Class UMG.TextBlock
// Size: 0x260 (Inherited: 0x158)
struct UTextBlock : U*800d766cf7 {
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

	void SetShadowOffset(); // Function UMG.TextBlock.SetShadowOffset // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x616192c
	void SetColorAndOpacity(); // Function UMG.TextBlock.SetColorAndOpacity // Final|Native|Public|BlueprintCallable // @ game+0x458f50
	void SetJustification(); // Function UMG.TextBlock.SetJustification // Final|Native|Public|BlueprintCallable // @ game+0x615f768
	void SetFont(); // Function UMG.TextBlock.SetFont // Final|Native|Public|BlueprintCallable // @ game+0x615da20
	void SetShadowColorAndOpacity(); // Function UMG.TextBlock.SetShadowColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6161894
	void SetMinDesiredWidth(); // Function UMG.TextBlock.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x6160234
	void SetWrapTextAt(); // Function UMG.TextBlock.SetWrapTextAt // Final|Native|Public|BlueprintCallable // @ game+0x61635d4
	void SetText(); // Function UMG.TextBlock.SetText // Native|Public|BlueprintCallable // @ game+0x6162624
	void GetText(); // Function UMG.TextBlock.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a03c
	void SetOpacity(); // Function UMG.TextBlock.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x616081c
};

// Class UMG.ComboBoxString
// Size: 0xdb0 (Inherited: 0x130)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> *9d8c8ec8b8; // 0x130(0x10)
	struct FString *2a6f35337a; // 0x140(0x10)
	struct F*8032c74862 WidgetStyle; // 0x150(0x428)
	struct F*62e31edfd2 ItemStyle; // 0x578(0x718)
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

	void FindOptionIndex(); // Function UMG.ComboBoxString.FindOptionIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6157ee4
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // Final|Native|Public|BlueprintCallable // @ game+0x6156b04
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void AddOption(); // Function UMG.ComboBoxString.AddOption // Final|Native|Public|BlueprintCallable // @ game+0x61564d4
	void OnSelectionChangedEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // Final|Native|Public|BlueprintCallable // @ game+0x615b16c
	void GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159a28
	void SetSelectedOption(); // Function UMG.ComboBoxString.SetSelectedOption // Final|Native|Public|BlueprintCallable // @ game+0x6161798
	void RemoveOption(); // Function UMG.ComboBoxString.RemoveOption // Final|Native|Public|BlueprintCallable // @ game+0x615b888
	void GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159cb8
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // Final|Native|Public|BlueprintCallable // @ game+0x6156b18
	void GetOptionAtIndex(); // Function UMG.ComboBoxString.GetOptionAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61598e8
};

// Class UMG.WidgetSwitcher
// Size: 0x160 (Inherited: 0x148)
struct UWidgetSwitcher : U*c1ef4cc603 {
	int32 ActiveWidgetIndex; // 0x148(0x04)
	char pad_14C[0x14]; // 0x14c(0x14)

	void GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6157fd8
	void SetActiveWidget(); // Function UMG.WidgetSwitcher.SetActiveWidget // Native|Public|BlueprintCallable // @ game+0x615bcd4
	void GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159884
	void SetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // Native|Public|BlueprintCallable // @ game+0xd7da20
	void GetWidgetAtIndex(); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61587d4
};

// Class UMG.*18ce653e55
// Size: 0x50 (Inherited: 0x30)
struct U*18ce653e55 : U*4471bd9586 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFail; // 0x40(0x10)

	void *3192ce7cbc(); // Function UMG.*18ce653e55.*3192ce7cbc // Final|Native|Static|Public|BlueprintCallable // @ game+0x6152624
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
};

// Class UMG.*d6ff4797a2
// Size: 0xe0 (Inherited: 0xd0)
struct U*d6ff4797a2 : U*be5e5f7e3e {
	struct TArray<struct FName> *538530a004; // 0xc8(0x10)
	struct FName TrackName; // 0xd8(0x08)
};

// Class UMG.*920457baae
// Size: 0x30 (Inherited: 0x30)
struct U*920457baae : UInterface {
};

// Class UMG.*249bc50ddf
// Size: 0x50 (Inherited: 0x30)
struct U*249bc50ddf : UObject {
	struct UObject* SourceObject; // 0x30(0x08)
	struct F*5549c10072 SourcePath; // 0x38(0x10)
	struct FName *3fe8ae7e96; // 0x48(0x08)
};

// Class UMG.*5261d09113
// Size: 0x50 (Inherited: 0x50)
struct U*5261d09113 : U*249bc50ddf {

	void GetValue(); // Function UMG.*5261d09113.GetValue // Final|Native|Public|Const // @ game+0x6153088
};

// Class UMG.*6587d3aee8
// Size: 0x58 (Inherited: 0x50)
struct U*6587d3aee8 : U*249bc50ddf {
	char pad_50[0x8]; // 0x50(0x08)

	void GetValue(); // Function UMG.*6587d3aee8.GetValue // Final|Native|Public|Const // @ game+0x61530ac
};

// Class UMG.*30c4330022
// Size: 0x58 (Inherited: 0x50)
struct U*30c4330022 : U*249bc50ddf {
	char pad_50[0x8]; // 0x50(0x08)

	void GetValue(); // Function UMG.*30c4330022.GetValue // Final|Native|Public|Const // @ game+0x6153138
};

// Class UMG.*76b4cc2dc5
// Size: 0x58 (Inherited: 0x50)
struct U*76b4cc2dc5 : U*249bc50ddf {
	char pad_50[0x8]; // 0x50(0x08)

	void GetSlateValue(); // Function UMG.*76b4cc2dc5.GetSlateValue // Final|Native|Public|Const // @ game+0x6152f88
	void GetLinearValue(); // Function UMG.*76b4cc2dc5.GetLinearValue // Final|Native|Public|HasDefaults|Const // @ game+0xc07c4c
};

// Class UMG.*6d9ead0d8c
// Size: 0x50 (Inherited: 0x50)
struct U*6d9ead0d8c : U*249bc50ddf {

	void GetValue(); // Function UMG.*6d9ead0d8c.GetValue // Final|Native|Public|Const // @ game+0x615315c
};

// Class UMG.*9f088cbf66
// Size: 0x50 (Inherited: 0x50)
struct U*9f088cbf66 : U*249bc50ddf {

	void GetValue(); // Function UMG.*9f088cbf66.GetValue // Final|Native|Public|Const // @ game+0x6153184
};

// Class UMG.*a0c9881f5f
// Size: 0x50 (Inherited: 0x50)
struct U*a0c9881f5f : U*249bc50ddf {

	void GetValue(); // Function UMG.*a0c9881f5f.GetValue // Final|Native|Public|Const // @ game+0x61531a8
};

// Class UMG.*b8b03a0048
// Size: 0x58 (Inherited: 0x50)
struct U*b8b03a0048 : U*249bc50ddf {
	char pad_50[0x8]; // 0x50(0x08)

	void GetTextValue(); // Function UMG.*b8b03a0048.GetTextValue // Final|Native|Public|Const // @ game+0xa43518
	void GetStringValue(); // Function UMG.*b8b03a0048.GetStringValue // Final|Native|Public|Const // @ game+0x6153000
};

// Class UMG.*340ab56d10
// Size: 0x50 (Inherited: 0x50)
struct U*340ab56d10 : U*249bc50ddf {

	void GetValue(); // Function UMG.*340ab56d10.GetValue // Final|Native|Public|Const // @ game+0x61531cc
};

// Class UMG.*83926c4172
// Size: 0x50 (Inherited: 0x50)
struct U*83926c4172 : U*249bc50ddf {

	void GetValue(); // Function UMG.*83926c4172.GetValue // Final|Native|Public|Const // @ game+0x61531f0
};

// Class UMG.*da13e81127
// Size: 0x38 (Inherited: 0x30)
struct U*da13e81127 : UObject {
	bool bReveal; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 RevealedIndex; // 0x34(0x04)
};

// Class UMG.*82eb2c9dca
// Size: 0x30 (Inherited: 0x30)
struct U*82eb2c9dca : UBlueprintFunctionLibrary {

	void *442a8bc56d(); // Function UMG.*82eb2c9dca.*442a8bc56d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6152e10
	void *9f1e7afc1b(); // Function UMG.*82eb2c9dca.*9f1e7afc1b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6153a20
	void *6707f60341(); // Function UMG.*82eb2c9dca.*6707f60341 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6153f44
	void *f8c99492af(); // Function UMG.*82eb2c9dca.*f8c99492af // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61529fc
	void *75e5c9993f(); // Function UMG.*82eb2c9dca.*75e5c9993f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6153dec
	void *05196d1bb2(); // Function UMG.*82eb2c9dca.*05196d1bb2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6152368
	void *ee452fa04b(); // Function UMG.*82eb2c9dca.*ee452fa04b // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x6154830
	void *159645c391(); // Function UMG.*82eb2c9dca.*159645c391 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x61545e0
	void *932d1b7f99(); // Function UMG.*82eb2c9dca.*932d1b7f99 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x6154708
	void *ea53972da0(); // Function UMG.*82eb2c9dca.*ea53972da0 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6152174
};

// Class UMG.*eddfd9fe3f
// Size: 0x438 (Inherited: 0x30)
struct U*eddfd9fe3f : UObject {
	struct UTexture2D* *15dc5d5403; // 0x30(0x08)
	char pad_38[0x400]; // 0x38(0x400)
};

// Class UMG.*58f86e8192
// Size: 0x68 (Inherited: 0x30)
struct U*58f86e8192 : UObject {
	struct TArray<struct F*da695a2c66> *06302e190c; // 0x30(0x10)
	struct TArray<uint32> *87c4e76370; // 0x40(0x10)
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FVector2D *8044774152; // 0x58(0x08)
	struct FVector2D *404d7c7b6c; // 0x60(0x08)
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x438 (Inherited: 0x3c8)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x3c8(0x08)
	bool *b9f37c028c; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct TArray<struct F*5ca9fc20d0> Bindings; // 0x3d8(0x10)
	struct TArray<struct U*6b11b3bf02*> Animations; // 0x3e8(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3f8(0x10)
	bool *bc97c9e972; // 0x408(0x01)
	bool *32de228706; // 0x409(0x01)
	bool *b23d513faf; // 0x40a(0x01)
	char pad_40B[0x5]; // 0x40b(0x05)
	struct UUserWidget* *c3f675d351; // 0x410(0x20)
	struct UUserWidget* Template; // 0x430(0x08)
};

// Class UMG.*7aea8ea27e
// Size: 0x6b0 (Inherited: 0x30)
struct U*7aea8ea27e : UObject {
	char pad_30[0x348]; // 0x30(0x348)
	struct U*6b11b3bf02* Animation; // 0x378(0x08)
	char pad_380[0x330]; // 0x380(0x330)
};

// Class UMG.PanelSlot
// Size: 0x40 (Inherited: 0x30)
struct UPanelSlot : UVisual {
	struct U*c1ef4cc603* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)
};

// Class UMG.*73eecc61e4
// Size: 0x68 (Inherited: 0x40)
struct U*73eecc61e4 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetHorizontalAlignment(); // Function UMG.*73eecc61e4.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e0f0
	void SetVerticalAlignment(); // Function UMG.*73eecc61e4.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6162bdc
	void SetPadding(); // Function UMG.*73eecc61e4.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x61609f4
};

// Class UMG.*26255869a0
// Size: 0x68 (Inherited: 0x40)
struct U*26255869a0 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetHorizontalAlignment(); // Function UMG.*26255869a0.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e218
	void SetVerticalAlignment(); // Function UMG.*26255869a0.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6162d04
	void SetPadding(); // Function UMG.*26255869a0.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160b34
};

// Class UMG.*9800899153
// Size: 0x68 (Inherited: 0x40)
struct U*9800899153 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetHorizontalAlignment(); // Function UMG.*9800899153.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e2ac
	void SetVerticalAlignment(); // Function UMG.*9800899153.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6162d98
	void SetPadding(); // Function UMG.*9800899153.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160bd4
};

// Class UMG.*a08fc6dc58
// Size: 0x78 (Inherited: 0x40)
struct U*a08fc6dc58 : UPanelSlot {
	struct F*ef6a4066ac LayoutData; // 0x40(0x28)
	bool bAutoSize; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32 ZOrder; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	void SetOffsets(); // Function UMG.*a08fc6dc58.SetOffsets // Final|Native|Public|BlueprintCallable // @ game+0x74fe28
	void *61af8cd53b(); // Function UMG.*a08fc6dc58.*61af8cd53b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a2f8
	void SetAnchors(); // Function UMG.*a08fc6dc58.SetAnchors // Final|Native|Public|BlueprintCallable // @ game+0x615be90
	void SetPosition(); // Function UMG.*a08fc6dc58.SetPosition // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x61612ac
	void *d2b4c01368(); // Function UMG.*a08fc6dc58.*d2b4c01368 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615838c
	void SetAlignment(); // Function UMG.*a08fc6dc58.SetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615bd68
	void GetSize(); // Function UMG.*a08fc6dc58.GetSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6159d8c
	void SetAutoSize(); // Function UMG.*a08fc6dc58.SetAutoSize // Final|Native|Public|BlueprintCallable // @ game+0x615c2b0
	void SetMinimum(); // Function UMG.*a08fc6dc58.SetMinimum // Final|Native|Public|HasDefaults // @ game+0x61603fc
	void GetAlignment(); // Function UMG.*a08fc6dc58.GetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6157ffc
	void GetPosition(); // Function UMG.*a08fc6dc58.GetPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6159a64
	void *9e0cf81a90(); // Function UMG.*a08fc6dc58.*9e0cf81a90 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61583bc
	void *3fc48845a7(); // Function UMG.*a08fc6dc58.*3fc48845a7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61598a8
	void SetLayout(); // Function UMG.*a08fc6dc58.SetLayout // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x615fa18
	void GetLayout(); // Function UMG.*a08fc6dc58.GetLayout // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159524
	void SetMaximum(); // Function UMG.*a08fc6dc58.SetMaximum // Final|Native|Public|HasDefaults // @ game+0x615ff48
	void SetZOrder(); // Function UMG.*a08fc6dc58.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x616366c
	void SetSize(); // Function UMG.*a08fc6dc58.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6161a48
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

	void SetColumn(); // Function UMG.GridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x615cf18
	void SetVerticalAlignment(); // Function UMG.GridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6162e2c
	void SetRowSpan(); // Function UMG.GridSlot.SetRowSpan // Final|Native|Public|BlueprintCallable // @ game+0x61614f4
	void SetHorizontalAlignment(); // Function UMG.GridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e340
	void SetRow(); // Function UMG.GridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x61613d8
	void SetPadding(); // Function UMG.GridSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0xa90244
	void SetLayer(); // Function UMG.GridSlot.SetLayer // Final|Native|Public|BlueprintCallable // @ game+0x615f8f0
	void SetColumnSpan(); // Function UMG.GridSlot.SetColumnSpan // Final|Native|Public|BlueprintCallable // @ game+0x615d034
};

// Class UMG.*da2dead950
// Size: 0x68 (Inherited: 0x40)
struct U*da2dead950 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetSize(); // Function UMG.*da2dead950.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x6161ad4
	void SetVerticalAlignment(); // Function UMG.*da2dead950.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6162ebc
	void SetPadding(); // Function UMG.*da2dead950.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160c74
	void SetHorizontalAlignment(); // Function UMG.*da2dead950.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e3d0
};

// Class UMG.*c19dcb4813
// Size: 0x60 (Inherited: 0x40)
struct U*c19dcb4813 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32 ZOrder; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)

	void SetHorizontalAlignment(); // Function UMG.*c19dcb4813.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e460
	void SetZOrder(); // Function UMG.*c19dcb4813.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x61636fc
	void SetPadding(); // Function UMG.*c19dcb4813.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160d14
	void SetVerticalAlignment(); // Function UMG.*c19dcb4813.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6162f4c
	void *61af8cd53b(); // Function UMG.*c19dcb4813.*61af8cd53b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a31c
};

// Class UMG.*020230c2d6
// Size: 0x68 (Inherited: 0x40)
struct U*020230c2d6 : UPanelSlot {
	bool bIsTitleSafe; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FMargin SafeAreaScale; // 0x44(0x10)
	enum class EHorizontalAlignment HAlign; // 0x54(0x01)
	enum class EVerticalAlignment VAlign; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FMargin Padding; // 0x58(0x10)
};

// Class UMG.*2e2a015a45
// Size: 0x68 (Inherited: 0x40)
struct U*2e2a015a45 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetHorizontalAlignment(); // Function UMG.*2e2a015a45.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e4f0
	void SetVerticalAlignment(); // Function UMG.*2e2a015a45.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6162fdc
	void SetPadding(); // Function UMG.*2e2a015a45.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160db4
};

// Class UMG.*e33191b74a
// Size: 0x60 (Inherited: 0x40)
struct U*e33191b74a : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)

	void SetPadding(); // Function UMG.*e33191b74a.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160e48
	void SetHorizontalAlignment(); // Function UMG.*e33191b74a.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e584
};

// Class UMG.*e4dae0adf5
// Size: 0x68 (Inherited: 0x40)
struct U*e4dae0adf5 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetHorizontalAlignment(); // Function UMG.*e4dae0adf5.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e614
	void SetVerticalAlignment(); // Function UMG.*e4dae0adf5.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6163070
	void SetPadding(); // Function UMG.*e4dae0adf5.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160ee8
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

	void SetColumn(); // Function UMG.UniformGridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x615cfa8
	void SetVerticalAlignment(); // Function UMG.UniformGridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6163104
	void SetRow(); // Function UMG.UniformGridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x6161468
	void SetHorizontalAlignment(); // Function UMG.UniformGridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e6a8
};

// Class UMG.*1db1bb498a
// Size: 0x68 (Inherited: 0x40)
struct U*1db1bb498a : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetSize(); // Function UMG.*1db1bb498a.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x6161c14
	void SetVerticalAlignment(); // Function UMG.*1db1bb498a.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6162ebc
	void SetPadding(); // Function UMG.*1db1bb498a.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160c74
	void SetHorizontalAlignment(); // Function UMG.*1db1bb498a.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e3d0
};

// Class UMG.*c5180b4275
// Size: 0x60 (Inherited: 0x40)
struct U*c5180b4275 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetHorizontalAlignment(); // Function UMG.*c5180b4275.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e460
	void SetVerticalAlignment(); // Function UMG.*c5180b4275.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6162f4c
	void SetPadding(); // Function UMG.*c5180b4275.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160e48
};

// Class UMG.*86d54e13f0
// Size: 0x168 (Inherited: 0x148)
struct U*86d54e13f0 : U*7fef63158a {
	bool bDoubleClickTogglesFullscreen; // 0x148(0x01)
	char pad_149[0x1f]; // 0x149(0x1f)

	void SetHorizontalAlignment(); // Function UMG.*86d54e13f0.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e738
	void SetVerticalAlignment(); // Function UMG.*86d54e13f0.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6163194
	void SetPadding(); // Function UMG.*86d54e13f0.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160f88
};

// Class UMG.*272bb23fb7
// Size: 0x68 (Inherited: 0x40)
struct U*272bb23fb7 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetHorizontalAlignment(); // Function UMG.*272bb23fb7.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e7c8
	void SetVerticalAlignment(); // Function UMG.*272bb23fb7.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6163224
	void SetPadding(); // Function UMG.*272bb23fb7.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6161028
};

// Class UMG.*e04e139cb4
// Size: 0x68 (Inherited: 0x40)
struct U*e04e139cb4 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetFillEmptySpace(); // Function UMG.*e04e139cb4.SetFillEmptySpace // Final|Native|Public|BlueprintCallable // @ game+0x615d80c
	void SetHorizontalAlignment(); // Function UMG.*e04e139cb4.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e85c
	void SetPadding(); // Function UMG.*e04e139cb4.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x61610c8
	void SetFillSpanWhenLessThan(); // Function UMG.*e04e139cb4.SetFillSpanWhenLessThan // Final|Native|Public|BlueprintCallable // @ game+0x615d8a0
	void SetVerticalAlignment(); // Function UMG.*e04e139cb4.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x61632b8
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

	void SetPeriod(); // Function UMG.CircularThrobber.SetPeriod // Final|Native|Public|BlueprintCallable // @ game+0x6161200
	void SetRadius(); // Function UMG.CircularThrobber.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x6161338
	void SetNumberOfPieces(); // Function UMG.CircularThrobber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x616062c
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
	struct F*66dc9af89d WidgetStyle; // 0x158(0x870)
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
	bool *76866562c6; // 0xaad(0x01)
	enum class EVirtualKeyboardType *bd48298631; // 0xaae(0x01)
	char pad_AAF[0x1]; // 0xaaf(0x01)
	struct F*64a42c3900 ShapedTextOptions; // 0xab0(0x08)
	struct FMulticastDelegate OnTextChanged; // 0xab8(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xac8(0x10)
	char pad_AD8[0x10]; // 0xad8(0x10)

	void SetText(); // Function UMG.EditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x6162348
	void GetText(); // Function UMG.EditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159e50
	void OnEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
	void SetHintText(); // Function UMG.EditableTextBox.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x615df68
	void OnEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
	void SetIsReadOnly(); // Function UMG.EditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x615f41c
	void SetError(); // Function UMG.EditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x615d418
	void HasError(); // Function UMG.EditableTextBox.HasError // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a47c
	void ClearError(); // Function UMG.EditableTextBox.ClearError // Final|Native|Public|BlueprintCallable // @ game+0x61569e8
};

// Class UMG.ExpandableArea
// Size: 0x378 (Inherited: 0x130)
struct UExpandableArea : UWidget {
	char pad_130[0x8]; // 0x130(0x08)
	struct F*3a160e1e9c Style; // 0x138(0x130)
	struct FSlateBrush BorderBrush; // 0x268(0x90)
	struct FSlateColor BorderColor; // 0x2f8(0x28)
	bool bIsExpanded; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	float MaxHeight; // 0x324(0x04)
	struct FMargin HeaderPadding; // 0x328(0x10)
	struct FMargin AreaPadding; // 0x338(0x10)
	struct FMulticastDelegate OnExpansionChanged; // 0x348(0x10)
	struct UWidget* *83cc60e897; // 0x358(0x08)
	struct UWidget* *e3725f226f; // 0x360(0x08)
	char pad_368[0x10]; // 0x368(0x10)

	void SetIsExpanded(); // Function UMG.ExpandableArea.SetIsExpanded // Final|Native|Public|BlueprintCallable // @ game+0x615f100
	void SetIsExpanded_Animated(); // Function UMG.ExpandableArea.SetIsExpanded_Animated // Final|Native|Public|BlueprintCallable // @ game+0x615f19c
	void GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159320
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

	void SetBrushFromAsset(); // Function UMG.Image.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x615c87c
	void SetBrush(); // Function UMG.Image.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x615c6f0
	void SetColorAndOpacity(); // Function UMG.Image.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xabcc48
	void SetBrushFromTexture(); // Function UMG.Image.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0xb93e38
	void SetOpacity(); // Function UMG.Image.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x6160784
	void SetBrushFromMaterial(); // Function UMG.Image.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x615c99c
	void SetBrushFromTextureDynamic(); // Function UMG.Image.SetBrushFromTextureDynamic // Final|Native|Public|BlueprintCallable // @ game+0x615ca2c
	void GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x61589f0
	void SetBrushSize(); // Function UMG.Image.SetBrushSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615ccc0
};

// Class UMG.InputKeySelector
// Size: 0x230 (Inherited: 0x130)
struct UInputKeySelector : UWidget {
	struct F*83f86360e2 SelectedKey; // 0x130(0x20)
	struct FSlateFontInfo Font; // 0x150(0x68)
	struct FMargin Margin; // 0x1b8(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1c8(0x10)
	struct FText KeySelectionText; // 0x1d8(0x18)
	bool bAllowModifierKeys; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FMulticastDelegate OnKeySelected; // 0x1f8(0x10)
	struct FMulticastDelegate OnIsSelectingKeyChanged; // 0x208(0x10)
	char pad_218[0x18]; // 0x218(0x18)

	void SetSelectedKey(); // Function UMG.InputKeySelector.SetSelectedKey // Final|Native|Public|BlueprintCallable // @ game+0x61616ac
	void GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159364
	void SetKeySelectionText(); // Function UMG.InputKeySelector.SetKeySelectionText // Final|Native|Public|BlueprintCallable // @ game+0x615f7fc
	void SetAllowModifierKeys(); // Function UMG.InputKeySelector.SetAllowModifierKeys // Final|Native|Public|BlueprintCallable // @ game+0x615bdf4
	void OnKeySelected__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
};

// Class UMG.NativeWidgetHost
// Size: 0x140 (Inherited: 0x130)
struct UNativeWidgetHost : UWidget {
	char pad_130[0x10]; // 0x130(0x10)
};

// Class UMG.CanvasPanel
// Size: 0x158 (Inherited: 0x148)
struct UCanvasPanel : U*c1ef4cc603 {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToCanvas(); // Function UMG.CanvasPanel.AddChildToCanvas // Final|Native|Public|BlueprintCallable // @ game+0x6155dd4
};

// Class UMG.BackgroundBlur
// Size: 0x208 (Inherited: 0x148)
struct UBackgroundBlur : U*7fef63158a {
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

	void SetVerticalAlignment(); // Function UMG.BackgroundBlur.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6162b48
	void SetLowQualityFallbackBrush(); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x615fb54
	void SetBlurRadius(); // Function UMG.BackgroundBlur.SetBlurRadius // Final|Native|Public|BlueprintCallable // @ game+0x615c4c8
	void SetBlurStrength(); // Function UMG.BackgroundBlur.SetBlurStrength // Native|Public|BlueprintCallable // @ game+0x615c558
	void SetApplyAlphaToBlur(); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // Final|Native|Public|BlueprintCallable // @ game+0x615c17c
	void SetPadding(); // Function UMG.BackgroundBlur.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160954
	void SetHorizontalAlignment(); // Function UMG.BackgroundBlur.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e05c
};

// Class UMG.Border
// Size: 0x2a8 (Inherited: 0x148)
struct UBorder : U*7fef63158a {
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

	void SetBrushColor(); // Function UMG.Border.SetBrushColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xbd3364
	void SetVerticalAlignment(); // Function UMG.Border.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6162c70
	void SetPadding(); // Function UMG.Border.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6160a94
	void SetDesiredSizeScale(); // Function UMG.Border.SetDesiredSizeScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615d238
	void SetBrushFromMaterial(); // Function UMG.Border.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x615c90c
	void SetBrushFromTexture(); // Function UMG.Border.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0x615c90c
	void SetBrush(); // Function UMG.Border.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x615c5f4
	void SetContentColorAndOpacity(); // Function UMG.Border.SetContentColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xb042a4
	void SetHorizontalAlignment(); // Function UMG.Border.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x615e184
	void GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x61589cc
	void SetBrushFromAsset(); // Function UMG.Border.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x615c7ec
};

// Class UMG.CheckBox
// Size: 0x7f8 (Inherited: 0x148)
struct UCheckBox : U*7fef63158a {
	enum class ECheckBoxState CheckedState; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty CheckedStateDelegate; // 0x150(0x10)
	struct F*ea1c6f5c2e WidgetStyle; // 0x160(0x5e0)
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

	void IsChecked(); // Function UMG.CheckBox.IsChecked // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a53c
	void SetIsChecked(); // Function UMG.CheckBox.SetIsChecked // Final|Native|Public|BlueprintCallable // @ game+0x615f06c
	void IsPressed(); // Function UMG.CheckBox.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a624
	void GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61587b0
	void SetCheckedState(); // Function UMG.CheckBox.SetCheckedState // Final|Native|Public|BlueprintCallable // @ game+0x615cdf0
};

// Class UMG.InvalidationBox
// Size: 0x160 (Inherited: 0x148)
struct UInvalidationBox : U*7fef63158a {
	bool *f9287edec4; // 0x148(0x01)
	bool CacheRelativeTransforms; // 0x149(0x01)
	char pad_14A[0x16]; // 0x14a(0x16)

	void GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6158790
	void SetCanCache(); // Function UMG.InvalidationBox.SetCanCache // Final|Native|Public|BlueprintCallable // @ game+0x615cd5c
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // Final|Native|Public|BlueprintCallable // @ game+0x615a504
};

// Class UMG.MenuAnchor
// Size: 0x188 (Inherited: 0x148)
struct UMenuAnchor : U*7fef63158a {
	struct UClass* MenuClass; // 0x148(0x08)
	DelegateProperty OnGetMenuContentEvent; // 0x150(0x10)
	enum class *68f032fedc Placement; // 0x160(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x161(0x01)
	bool UseApplicationMenuStack; // 0x162(0x01)
	char pad_163[0x5]; // 0x163(0x05)
	struct FMulticastDelegate OnMenuOpenChanged; // 0x168(0x10)
	char pad_178[0x10]; // 0x178(0x10)

	void Close(); // Function UMG.MenuAnchor.Close // Final|Native|Public|BlueprintCallable // @ game+0x6156cb8
	void HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a4cc
	void ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x616378c
	void GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x61596a8
	void IsOpen(); // Function UMG.MenuAnchor.IsOpen // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a584
	void ToggleOpen(); // Function UMG.MenuAnchor.ToggleOpen // Final|Native|Public|BlueprintCallable // @ game+0x6163bc0
	void Open(); // Function UMG.MenuAnchor.Open // Final|Native|Public|BlueprintCallable // @ game+0x615ac58
};

// Class UMG.NamedSlot
// Size: 0x158 (Inherited: 0x148)
struct UNamedSlot : U*7fef63158a {
	char pad_148[0x10]; // 0x148(0x10)
};

// Class UMG.RetainerBox
// Size: 0x178 (Inherited: 0x148)
struct URetainerBox : U*7fef63158a {
	bool *fb798c1f65; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	int32 phase; // 0x14c(0x04)
	int32 *89f3008bea; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x158(0x08)
	struct FName TextureParameter; // 0x160(0x08)
	char pad_168[0x10]; // 0x168(0x10)

	void GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6158b0c
	void SetTextureParameter(); // Function UMG.RetainerBox.SetTextureParameter // Final|Native|Public|BlueprintCallable // @ game+0x616271c
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // Final|Native|Public|BlueprintCallable // @ game+0x615b9c0
	void SetEffectMaterial(); // Function UMG.RetainerBox.SetEffectMaterial // Final|Native|Public|BlueprintCallable // @ game+0x615d388
};

// Class UMG.SafeZone
// Size: 0x160 (Inherited: 0x148)
struct USafeZone : U*7fef63158a {
	bool PadLeft; // 0x148(0x01)
	bool PadRight; // 0x149(0x01)
	bool PadTop; // 0x14a(0x01)
	bool PadBottom; // 0x14b(0x01)
	char pad_14C[0x14]; // 0x14c(0x14)
};

// Class UMG.ScaleBox
// Size: 0x168 (Inherited: 0x148)
struct UScaleBox : U*7fef63158a {
	enum class EStretch Stretch; // 0x148(0x01)
	enum class EStretchDirection StretchDirection; // 0x149(0x01)
	char pad_14A[0x2]; // 0x14a(0x02)
	float UserSpecifiedScale; // 0x14c(0x04)
	bool IgnoreInheritedScale; // 0x150(0x01)
	char pad_151[0x17]; // 0x151(0x17)

	void SetStretchDirection(); // Function UMG.ScaleBox.SetStretchDirection // Final|Native|Public|BlueprintCallable // @ game+0x61620ec
	void SetIgnoreInheritedScale(); // Function UMG.ScaleBox.SetIgnoreInheritedScale // Final|Native|Public|BlueprintCallable // @ game+0x615e8ec
	void SetStretch(); // Function UMG.ScaleBox.SetStretch // Final|Native|Public|BlueprintCallable // @ game+0x6162054
	void SetUserSpecifiedScale(); // Function UMG.ScaleBox.SetUserSpecifiedScale // Final|Native|Public|BlueprintCallable // @ game+0x6162980
};

// Class UMG.SizeBox
// Size: 0x178 (Inherited: 0x148)
struct USizeBox : U*7fef63158a {
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

	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x6156ac8
	void SetMaxAspectRatio(); // Function UMG.SizeBox.SetMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x615fc50
	void SetMaxDesiredWidth(); // Function UMG.SizeBox.SetMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x615fd80
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x6156a50
	void SetWidthOverride(); // Function UMG.SizeBox.SetWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x9291a0
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x6156a78
	void SetMaxDesiredHeight(); // Function UMG.SizeBox.SetMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x615fce8
	void SetHeightOverride(); // Function UMG.SizeBox.SetHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x929124
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x6156ca4
	void SetMinDesiredHeight(); // Function UMG.SizeBox.SetMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x615ffd4
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x6156ab4
	void SetMinDesiredWidth(); // Function UMG.SizeBox.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x616019c
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x6156a3c
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x6156a64
};

// Class UMG.Viewport
// Size: 0x170 (Inherited: 0x148)
struct UViewport : U*7fef63158a {
	struct FLinearColor BackgroundColor; // 0x148(0x10)
	char pad_158[0x18]; // 0x158(0x18)

	void SetViewLocation(); // Function UMG.Viewport.SetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6163348
	void Spawn(); // Function UMG.Viewport.Spawn // Final|Native|Public|BlueprintCallable // @ game+0x6163b20
	void GetViewRotation(); // Function UMG.Viewport.GetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x615a164
	void SetViewRotation(); // Function UMG.Viewport.SetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6163400
	void GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a2d8
	void GetViewLocation(); // Function UMG.Viewport.GetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x615a118
};

// Class UMG.GridPanel
// Size: 0x178 (Inherited: 0x148)
struct UGridPanel : U*c1ef4cc603 {
	struct TArray<float> ColumnFill; // 0x148(0x10)
	struct TArray<float> RowFill; // 0x158(0x10)
	char pad_168[0x10]; // 0x168(0x10)

	void AddChildToGrid(); // Function UMG.GridPanel.AddChildToGrid // Final|Native|Public|BlueprintCallable // @ game+0x6155ed4
};

// Class UMG.HorizontalBox
// Size: 0x158 (Inherited: 0x148)
struct UHorizontalBox : U*c1ef4cc603 {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToHorizontalBox(); // Function UMG.HorizontalBox.AddChildToHorizontalBox // Final|Native|Public|BlueprintCallable // @ game+0x6155fd4
};

// Class UMG.Overlay
// Size: 0x158 (Inherited: 0x148)
struct UOverlay : U*c1ef4cc603 {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToOverlay(); // Function UMG.Overlay.AddChildToOverlay // Final|Native|Public|BlueprintCallable // @ game+0x61560d4
};

// Class UMG.ScrollBox
// Size: 0x8e0 (Inherited: 0x148)
struct UScrollBox : U*c1ef4cc603 {
	struct F*22ad09d4a5 WidgetStyle; // 0x148(0x248)
	struct F*136abc3336 WidgetBarStyle; // 0x390(0x518)
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

	void GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159c70
	void ScrollWidgetIntoView(); // Function UMG.ScrollBox.ScrollWidgetIntoView // Final|Native|Public|BlueprintCallable // @ game+0x615ba98
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // Final|Native|Public|BlueprintCallable // @ game+0x615b9d4
	void GetScrollToEndOffset(); // Function UMG.ScrollBox.GetScrollToEndOffset // Final|Native|Public|BlueprintCallable // @ game+0x6159c90
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // Final|Native|Public|BlueprintCallable // @ game+0x615b9e8
	void SetScrollBarVisibility(); // Function UMG.ScrollBox.SetScrollBarVisibility // Final|Native|Public|BlueprintCallable // @ game+0x6161584
	void SetScrollOffset(); // Function UMG.ScrollBox.SetScrollOffset // Final|Native|Public|BlueprintCallable // @ game+0x6161614
};

// Class UMG.UniformGridPanel
// Size: 0x170 (Inherited: 0x148)
struct UUniformGridPanel : U*c1ef4cc603 {
	struct FMargin SlotPadding; // 0x148(0x10)
	float MinDesiredSlotWidth; // 0x158(0x04)
	float MinDesiredSlotHeight; // 0x15c(0x04)
	char pad_160[0x10]; // 0x160(0x10)

	void SetMinDesiredSlotWidth(); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // Final|Native|Public|BlueprintCallable // @ game+0x6160104
	void AddChildToUniformGrid(); // Function UMG.UniformGridPanel.AddChildToUniformGrid // Final|Native|Public|BlueprintCallable // @ game+0x61561d4
	void SetSlotPadding(); // Function UMG.UniformGridPanel.SetSlotPadding // Final|Native|Public|BlueprintCallable // @ game+0x6161e20
	void SetMinDesiredSlotHeight(); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // Final|Native|Public|BlueprintCallable // @ game+0x616006c
};

// Class UMG.VerticalBox
// Size: 0x158 (Inherited: 0x148)
struct UVerticalBox : U*c1ef4cc603 {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToVerticalBox(); // Function UMG.VerticalBox.AddChildToVerticalBox // Final|Native|Public|BlueprintCallable // @ game+0x61562d4
};

// Class UMG.WrapBox
// Size: 0x168 (Inherited: 0x148)
struct UWrapBox : U*c1ef4cc603 {
	struct FVector2D InnerSlotPadding; // 0x148(0x08)
	float WrapWidth; // 0x150(0x04)
	bool bExplicitWrapWidth; // 0x154(0x01)
	char pad_155[0x13]; // 0x155(0x13)

	void SetInnerSlotPadding(); // Function UMG.WrapBox.SetInnerSlotPadding // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615ea18
	void AddChildWrapBox(); // Function UMG.WrapBox.AddChildWrapBox // Final|Native|Public|BlueprintCallable // @ game+0x61563d4
};

// Class UMG.ProgressBar
// Size: 0x350 (Inherited: 0x130)
struct UProgressBar : UWidget {
	struct F*4153f21470 WidgetStyle; // 0x130(0x1b8)
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

	void SetFillColorAndOpacity(); // Function UMG.ProgressBar.SetFillColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x615d774
	void SetIsMarquee(); // Function UMG.ProgressBar.SetIsMarquee // Final|Native|Public|BlueprintCallable // @ game+0x615f238
	void SetPercent(); // Function UMG.ProgressBar.SetPercent // Final|Native|Public|BlueprintCallable // @ game+0x6161168
};

// Class UMG.ScrollBar
// Size: 0x670 (Inherited: 0x130)
struct UScrollBar : UWidget {
	struct F*136abc3336 WidgetStyle; // 0x130(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x648(0x08)
	bool *5de23e29fa; // 0x650(0x01)
	enum class EOrientation Orientation; // 0x651(0x01)
	char pad_652[0x2]; // 0x652(0x02)
	struct FVector2D Thickness; // 0x654(0x08)
	char pad_65C[0x14]; // 0x65c(0x14)

	void SetState(); // Function UMG.ScrollBar.SetState // Final|Native|Public|BlueprintCallable // @ game+0x6161ec0
};

// Class UMG.Slider
// Size: 0x428 (Inherited: 0x130)
struct USlider : UWidget {
	float Value; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	DelegateProperty ValueDelegate; // 0x138(0x10)
	struct F*ef20c0e1ee WidgetStyle; // 0x148(0x250)
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

	void SetIndentHandle(); // Function UMG.Slider.SetIndentHandle // Final|Native|Public|BlueprintCallable // @ game+0x615e984
	void SetSliderHandleColor(); // Function UMG.Slider.SetSliderHandleColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6161d74
	void SetStepSize(); // Function UMG.Slider.SetStepSize // Final|Native|Public|BlueprintCallable // @ game+0x6161fbc
	void SetSliderBarColor(); // Function UMG.Slider.SetSliderBarColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6161cc8
	void SetLocked(); // Function UMG.Slider.SetLocked // Final|Native|Public|BlueprintCallable // @ game+0x615fac0
	void GetValue(); // Function UMG.Slider.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a0c8
	void SetValue(); // Function UMG.Slider.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x6162a18
};

// Class UMG.Spacer
// Size: 0x148 (Inherited: 0x130)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)

	void SetSize(); // Function UMG.Spacer.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6161b88
};

// Class UMG.SpinBox
// Size: 0x568 (Inherited: 0x130)
struct USpinBox : UWidget {
	float Value; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	DelegateProperty ValueDelegate; // 0x138(0x10)
	struct F*b5d3bae02e WidgetStyle; // 0x148(0x310)
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
	float *25c62d56de; // 0x54c(0x04)
	float *053fc64132; // 0x550(0x04)
	char pad_554[0x14]; // 0x554(0x14)

	void SetMinValue(); // Function UMG.SpinBox.SetMinValue // Final|Native|Public|BlueprintCallable // @ game+0x6160364
	void SetMaxSliderValue(); // Function UMG.SpinBox.SetMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x615fe18
	void GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159680
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void SetMaxValue(); // Function UMG.SpinBox.SetMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x615feb0
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x6156aa0
	void GetMinValue(); // Function UMG.SpinBox.GetMinValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159718
	void SetMinSliderValue(); // Function UMG.SpinBox.SetMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x61602cc
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x6156a8c
	void GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61596f0
	void GetValue(); // Function UMG.SpinBox.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a0f0
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x6156adc
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // Final|Native|Public|BlueprintCallable // @ game+0x6156af0
	void OnSpinBoxValueChangedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void OnSpinBoxValueCommittedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void SetForegroundColor(); // Function UMG.SpinBox.SetForegroundColor // Final|Native|Public|BlueprintCallable // @ game+0x615db4c
	void GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159658
	void SetValue(); // Function UMG.SpinBox.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x6162ab0
};

// Class UMG.*b82ec38359
// Size: 0x130 (Inherited: 0x130)
struct U*b82ec38359 : UWidget {

	void OnGenerateRowUObject__DelegateSignature(); // DelegateFunction UMG.*b82ec38359.OnGenerateRowUObject__DelegateSignature // Public|Delegate // @ game+0x22ddc4
};

// Class UMG.ListView
// Size: 0x170 (Inherited: 0x130)
struct UListView : U*b82ec38359 {
	float *68108bf9a8; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	enum class ESelectionMode *aff13502d2; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty OnGenerateRowEvent; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
};

// Class UMG.TileView
// Size: 0x170 (Inherited: 0x130)
struct UTileView : U*b82ec38359 {
	float *bd29a6b0c6; // 0x130(0x04)
	float *68108bf9a8; // 0x134(0x04)
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	enum class ESelectionMode *aff13502d2; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty OnGenerateTileEvent; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)

	void SetItemHeight(); // Function UMG.TileView.SetItemHeight // Final|Native|Public|BlueprintCallable // @ game+0x615f600
	void RequestListRefresh(); // Function UMG.TileView.RequestListRefresh // Final|Native|Public|BlueprintCallable // @ game+0x615b9a4
	void SetItemWidth(); // Function UMG.TileView.SetItemWidth // Final|Native|Public|BlueprintCallable // @ game+0x615f6b4
};

// Class UMG.MultiLineEditableText
// Size: 0x448 (Inherited: 0x158)
struct UMultiLineEditableText : U*800d766cf7 {
	struct FText Text; // 0x158(0x18)
	struct FText HintText; // 0x170(0x18)
	DelegateProperty HintTextDelegate; // 0x188(0x10)
	struct F*37ba76b02f WidgetStyle; // 0x198(0x208)
	bool bIsReadOnly; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FSlateFontInfo Font; // 0x3a8(0x68)
	bool *76866562c6; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FMulticastDelegate OnTextChanged; // 0x418(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x428(0x10)
	char pad_438[0x10]; // 0x438(0x10)

	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
	void SetText(); // Function UMG.MultiLineEditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x616243c
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
	void GetText(); // Function UMG.MultiLineEditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159f10
	void SetIsReadOnly(); // Function UMG.MultiLineEditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x615f4d8
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xce8 (Inherited: 0x158)
struct UMultiLineEditableTextBox : U*800d766cf7 {
	struct FText Text; // 0x158(0x18)
	struct FText HintText; // 0x170(0x18)
	DelegateProperty HintTextDelegate; // 0x188(0x10)
	struct F*66dc9af89d WidgetStyle; // 0x198(0x870)
	struct F*37ba76b02f TextStyle; // 0xa08(0x208)
	bool bIsReadOnly; // 0xc10(0x01)
	bool *76866562c6; // 0xc11(0x01)
	char pad_C12[0x6]; // 0xc12(0x06)
	struct USlateWidgetStyleAsset* Style; // 0xc18(0x08)
	struct FSlateFontInfo Font; // 0xc20(0x68)
	struct FLinearColor ForegroundColor; // 0xc88(0x10)
	struct FLinearColor BackgroundColor; // 0xc98(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xca8(0x10)
	struct FMulticastDelegate OnTextChanged; // 0xcb8(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xcc8(0x10)
	char pad_CD8[0x10]; // 0xcd8(0x10)

	void GetText(); // Function UMG.MultiLineEditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159fc8
	void SetIsReadOnly(); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x615f56c
	void SetText(); // Function UMG.MultiLineEditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x6162530
	void SetError(); // Function UMG.MultiLineEditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x615d57c
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22ddc4
};

// Class UMG.RichTextBlock
// Size: 0x420 (Inherited: 0x158)
struct URichTextBlock : U*800d766cf7 {
	struct FText Text; // 0x158(0x18)
	DelegateProperty TextDelegate; // 0x170(0x10)
	struct FSlateFontInfo Font; // 0x180(0x68)
	struct FLinearColor Color; // 0x1e8(0x10)
	struct TArray<struct U*da13e81127*> *46457a50e7; // 0x1f8(0x10)
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

	void SetAnimateHorizontally(); // Function UMG.Throbber.SetAnimateHorizontally // Final|Native|Public|BlueprintCallable // @ game+0x615bf30
	void SetAnimateOpacity(); // Function UMG.Throbber.SetAnimateOpacity // Final|Native|Public|BlueprintCallable // @ game+0x615bff4
	void SetNumberOfPieces(); // Function UMG.Throbber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x61606d4
	void SetAnimateVertically(); // Function UMG.Throbber.SetAnimateVertically // Final|Native|Public|BlueprintCallable // @ game+0x615c0bc
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

	void *c9cd820bbc(); // Function UMG.*6b11b3bf02.*c9cd820bbc // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159dbc
	void *4e238aec7b(); // Function UMG.*6b11b3bf02.*4e238aec7b // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6158b34
};

// Class UMG.*11415fb091
// Size: 0x30 (Inherited: 0x30)
struct U*11415fb091 : UBlueprintFunctionLibrary {

	void *cf26ba28f6(); // Function UMG.*11415fb091.*cf26ba28f6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61627bc
	void *d32adb691a(); // Function UMG.*11415fb091.*d32adb691a // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x615da04
	void *14e66ec090(); // Function UMG.*11415fb091.*14e66ec090 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6158e10
	void *388237c196(); // Function UMG.*11415fb091.*388237c196 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x615802c
	void *28d1a98398(); // Function UMG.*11415fb091.*28d1a98398 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6158f04
	void *3359e9a86d(); // Function UMG.*11415fb091.*3359e9a86d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61584d8
	void *0f8590c271(); // Function UMG.*11415fb091.*0f8590c271 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x615cb68
	void *7de3750ede(); // Function UMG.*11415fb091.*7de3750ede // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xaf68e4
	void ReleaseJoystickCapture(); // Function UMG.*11415fb091.ReleaseJoystickCapture // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x615b224
	void *67fc1d39e5(); // Function UMG.*11415fb091.*67fc1d39e5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x615cb68
	void *f979a82b22(); // Function UMG.*11415fb091.*f979a82b22 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x615685c
	void *a29c93ab30(); // Function UMG.*11415fb091.*a29c93ab30 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x615b490
	void *9d1285a43e(); // Function UMG.*11415fb091.*9d1285a43e // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6158978
	void *e20a12007a(); // Function UMG.*11415fb091.*e20a12007a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6156b2c
	void *5914acc8f5(); // Function UMG.*11415fb091.*5914acc8f5 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6159ae0
	void *42c0fedc19(); // Function UMG.*11415fb091.*42c0fedc19 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x615a7c4
	void *4d79fc7669(); // Function UMG.*11415fb091.*4d79fc7669 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x615a8bc
	void *73cee3e4ca(); // Function UMG.*11415fb091.*73cee3e4ca // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x615751c
	void *29b108c0bf(); // Function UMG.*11415fb091.*29b108c0bf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x615aa44
	void *e03ddd5f29(); // Function UMG.*11415fb091.*e03ddd5f29 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x61570b4
	void CaptureJoystick(); // Function UMG.*11415fb091.CaptureJoystick // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6156698
	void *e4a5c0294b(); // Function UMG.*11415fb091.*e4a5c0294b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x615ec54
	void *f01cdacdb6(); // Function UMG.*11415fb091.*f01cdacdb6 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x61581dc
	void *b8c0b77cac(); // Function UMG.*11415fb091.*b8c0b77cac // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6156e98
	void Create(); // Function UMG.*11415fb091.Create // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0xaa3574
	void *992e72d6ec(); // Function UMG.*11415fb091.*992e72d6ec // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6158a14
	void SetMousePosition(); // Function UMG.*11415fb091.SetMousePosition // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6160488
	void *c23d7d1b95(); // Function UMG.*11415fb091.*c23d7d1b95 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x61578a0
	void *3d226a8915(); // Function UMG.*11415fb091.*3d226a8915 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x615938c
	void *ec0ed38f6b(); // Function UMG.*11415fb091.*ec0ed38f6b // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x615dcd0
	void *202dd8f948(); // Function UMG.*11415fb091.*202dd8f948 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6157310
	void *782cf22b98(); // Function UMG.*11415fb091.*782cf22b98 // Final|Native|Static|Public|BlueprintCallable // @ game+0x615667c
	void *6948615886(); // Function UMG.*11415fb091.*6948615886 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x615abcc
	void *5e3535e8ec(); // Function UMG.*11415fb091.*5e3535e8ec // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6159130
	void *cfa3b3013f(); // Function UMG.*11415fb091.*cfa3b3013f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6163c64
	void *71010d08ab(); // Function UMG.*11415fb091.*71010d08ab // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x615ee38
	void *d55b92d2b7(); // Function UMG.*11415fb091.*d55b92d2b7 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x615edb8
	void *5ebc0ff215(); // Function UMG.*11415fb091.*5ebc0ff215 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6156e08
	void *ea916bbf25(); // Function UMG.*11415fb091.*ea916bbf25 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x615ead8
	void *22ddfecaa0(); // Function UMG.*11415fb091.*22ddfecaa0 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x615a560
	void *d8e85ff008(); // Function UMG.*11415fb091.*d8e85ff008 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x61572ec
	void *4d8e2d51be(); // Function UMG.*11415fb091.*4d8e2d51be // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x61576dc
	void *72c8b3b426(); // Function UMG.*11415fb091.*72c8b3b426 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x615ef54
	void *c3fc4fe524(); // Function UMG.*11415fb091.*c3fc4fe524 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6157a9c
	void *fee97565de(); // Function UMG.*11415fb091.*fee97565de // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6157db0
	void *0b3f347e37(); // Function UMG.*11415fb091.*0b3f347e37 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6158634
	void *3c92b881d6(); // Function UMG.*11415fb091.*3c92b881d6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6158ffc
	void *d6c84ee861(); // Function UMG.*11415fb091.*d6c84ee861 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x615a64c
	void Handled(); // Function UMG.*11415fb091.Handled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x615a344
	void *756fd39a31(); // Function UMG.*11415fb091.*756fd39a31 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x615921c
	void *555eb77c88(); // Function UMG.*11415fb091.*555eb77c88 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61583e0
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

	void *c64fd914e3(); // Function UMG.*f39056125e.*c64fd914e3 // Native|Public|BlueprintCallable // @ game+0x615bb78
	void *bee5c18387(); // Function UMG.*f39056125e.*bee5c18387 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6157fb0
	void *0395532ee5(); // Function UMG.*f39056125e.*0395532ee5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a5e8
	void *eacd357f7c(); // Function UMG.*f39056125e.*eacd357f7c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x615d170
	void *af48f7b75f(); // Function UMG.*f39056125e.*af48f7b75f // Native|Public|BlueprintCallable // @ game+0x615af44
	void *59acb48368(); // Function UMG.*f39056125e.*59acb48368 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a5b8
	void *8e37988746(); // Function UMG.*f39056125e.*8e37988746 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x615a5d0
	void *58cbe2b669(); // Function UMG.*f39056125e.*58cbe2b669 // Native|Public|BlueprintCallable // @ game+0x615adf8
	void *31f0a31ab0(); // Function UMG.*f39056125e.*31f0a31ab0 // Native|Public|BlueprintCallable // @ game+0x615b5c4
	void *9989608622(); // Function UMG.*f39056125e.*9989608622 // Native|Public|BlueprintCallable // @ game+0x615b9fc
	void *b18ecd661e(); // Function UMG.*f39056125e.*b18ecd661e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6158df8
	void *48c1693956(); // Function UMG.*f39056125e.*48c1693956 // Native|Public|BlueprintCallable // @ game+0x615ad00
	void *bc697bc58b(); // Function UMG.*f39056125e.*bc697bc58b // Native|Public|BlueprintCallable // @ game+0x615b398
	void *3c324c59e9(); // Function UMG.*f39056125e.*3c324c59e9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6159508
};

// Class UMG.*d96599827d
// Size: 0x30 (Inherited: 0x30)
struct U*d96599827d : UBlueprintFunctionLibrary {

	void *bd263d4011(); // Function UMG.*d96599827d.*bd263d4011 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61637c0
	void *394b3f8bf5(); // Function UMG.*d96599827d.*394b3f8bf5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xba4d2c
	void *bcd017902a(); // Function UMG.*d96599827d.*bcd017902a // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x615a1b0
	void *e7688c5ab7(); // Function UMG.*d96599827d.*e7688c5ab7 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x615a240
	void *81b79bf56b(); // Function UMG.*d96599827d.*81b79bf56b // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x615b02c
	void *b8f4afd538(); // Function UMG.*d96599827d.*b8f4afd538 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6163970
	void *eff41f5de2(); // Function UMG.*d96599827d.*eff41f5de2 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x615b6ac
	void *3b09c3bd2e(); // Function UMG.*d96599827d.*3b09c3bd2e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6163a00
	void *5404986f25(); // Function UMG.*d96599827d.*5404986f25 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6159740
	void *d6903c068e(); // Function UMG.*d96599827d.*d6903c068e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6163a90
	void *ce3c5183db(); // Function UMG.*d96599827d.*ce3c5183db // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61638e0
	void *7841d1b457(); // Function UMG.*d96599827d.*7841d1b457 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6163850
};

// Class UMG.WidgetNavigation
// Size: 0xc0 (Inherited: 0x30)
struct UWidgetNavigation : UObject {
	struct F*0ed5837138 Up; // 0x30(0x18)
	struct F*0ed5837138 Down; // 0x48(0x18)
	struct F*0ed5837138 Left; // 0x60(0x18)
	struct F*0ed5837138 Right; // 0x78(0x18)
	struct F*0ed5837138 Next; // 0x90(0x18)
	struct F*0ed5837138 Previous; // 0xa8(0x18)
};

// Class UMG.WidgetTree
// Size: 0x38 (Inherited: 0x30)
struct UWidgetTree : UObject {
	struct UWidget* *b0519a3b2a; // 0x30(0x08)
};


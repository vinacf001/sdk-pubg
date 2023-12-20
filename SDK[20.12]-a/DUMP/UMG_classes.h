// Class UMG.Visual
// Size: 0x30 (Inherited: 0x30)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x130 (Inherited: 0x30)
struct UWidget : UVisual {
	bool *d2177c9291; // 0x30(0x01)
	bool *d159dac8c3; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UPanelSlot* Slot; // 0x38(0x08)
	bool bIsEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	DelegateProperty bIsEnabledDelegate; // 0x48(0x10)
	DelegateProperty OnPrepass; // 0x58(0x10)
	struct FText ToolTipText; // 0x68(0x18)
	DelegateProperty ToolTipTextDelegate; // 0x80(0x10)
	struct UWidget* ToolTipWidget; // 0x90(0x08)
	DelegateProperty *8474569d5f; // 0x98(0x10)
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
	struct TArray<struct U*08c1c78a2d*> *20982d3590; // 0x120(0x10)

	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // Native|Public|BlueprintCallable // @ game+0x5e4b084
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // Public|Delegate|HasDefaults // @ game+0x3b43ac
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void IsVisible(); // Function UMG.Widget.IsVisible // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65378c4
	void SetToolTip(); // Function UMG.Widget.SetToolTip // Final|Native|Public|BlueprintCallable // @ game+0x65395e0
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6539670
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // Final|Native|Public|BlueprintCallable // @ game+0xc56160
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536bcc
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // Final|Native|Public|BlueprintCallable // @ game+0x6536890
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x653940c
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536a8c
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653718c
	void SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // Final|Native|Public|BlueprintCallable // @ game+0x6538730
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void GenerateWidgetForObject__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // Final|Native|Public|BlueprintCallable // @ game+0x6538cb8
	void HasUserFocus(); // Function UMG.Widget.HasUserFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6537424
	void GetParent(); // Function UMG.Widget.GetParent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536c38
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // Final|Native|Public|BlueprintCallable // @ game+0x65368a4
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6537384
	void SetVisibility(); // Function UMG.Widget.SetVisibility // Native|Public|BlueprintCallable // @ game+0x7ae278
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65372e0
	void HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65374c4
	void IsHovered(); // Function UMG.Widget.IsHovered // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6537634
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // Native|Public|BlueprintCallable // @ game+0x6538c0c
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // Final|Native|Public|BlueprintCallable // @ game+0x6538ca4
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65394b0
	void ResetCursor(); // Function UMG.Widget.ResetCursor // Final|Native|Public|BlueprintCallable // @ game+0x6538194
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536a30
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xf5ddfc
	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // Final|Native|Public|BlueprintCallable // @ game+0x65392c8
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6539368
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // Final|Native|Public|BlueprintCallable // @ game+0x6537564
	void OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // Public|Delegate|HasOutParms // @ game+0x3b43ac
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile // Final|Native|Public|BlueprintCallable // @ game+0x65368b8
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus // Final|Native|Public|BlueprintCallable // @ game+0x653974c
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // Public|Delegate // @ game+0x3b43ac
	void SetCursor(); // Function UMG.Widget.SetCursor // Final|Native|Public|BlueprintCallable // @ game+0x65388a0
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6536a5c
	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x653953c
	void GetVisibility(); // Function UMG.Widget.GetVisibility // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536ee8
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6537240
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
	struct TArray<struct U*378c3975c3*> *9b90592d27; // 0x1a8(0x10)
	struct TArray<struct U*378c3975c3*> *16ef101d90; // 0x1b8(0x10)
	bool bStopAction; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	int32 Priority; // 0x1cc(0x04)
	struct TArray<struct F*5122a09624> *bd3e6d150d; // 0x1d0(0x10)
	struct UWidgetTree* WidgetTree; // 0x1e0(0x08)
	char bCanEverTick : 1; // 0x1e8(0x01)
	char *e42fd9f8bc : 1; // 0x1e8(0x01)
	char pad_1E8_2 : 6; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	char *85a4a52426 : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct U*89f9a84286* *89f9a84286; // 0x1f8(0x08)
	char pad_200[0x58]; // 0x200(0x58)

	void GetAnimationCurrentTime(); // Function UMG.UserWidget.GetAnimationCurrentTime // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536990
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x6538180
	void AddToPlayerScreen(); // Function UMG.UserWidget.AddToPlayerScreen // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x65361c0
	void GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536974
	void Construct(); // Function UMG.UserWidget.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void GetOwningLocalPlayer(); // Function UMG.UserWidget.GetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536bf0
	void OnAnimationStarted(); // Function UMG.UserWidget.OnAnimationStarted // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x681344
	void GetWidgetComponent(); // Function UMG.UserWidget.GetWidgetComponent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536f0c
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5e4b084
	void OnKeyChar(); // Function UMG.UserWidget.OnKeyChar // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void Tick(); // Function UMG.UserWidget.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void SetAlignmentInViewport(); // Function UMG.UserWidget.SetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6538694
	void GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536ab0
	void OnKeyUp(); // Function UMG.UserWidget.OnKeyUp // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // Final|Native|Protected|BlueprintCallable // @ game+0x65398e8
	void OnTouchEnded(); // Function UMG.UserWidget.OnTouchEnded // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnDragCancelled(); // Function UMG.UserWidget.OnDragCancelled // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnMouseButtonDoubleClick(); // Function UMG.UserWidget.OnMouseButtonDoubleClick // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnDrop(); // Function UMG.UserWidget.OnDrop // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnMouseEnter(); // Function UMG.UserWidget.OnMouseEnter // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnAnimationFinished(); // Function UMG.UserWidget.OnAnimationFinished // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x913ba8
	void IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6537618
	void SetOwningLocalPlayer(); // Function UMG.UserWidget.SetOwningLocalPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6538f18
	void ReverseAnimation(); // Function UMG.UserWidget.ReverseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x65381a8
	void OnFocusLost(); // Function UMG.UserWidget.OnFocusLost // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void StopAnimation(); // Function UMG.UserWidget.StopAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xd6c760
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // Final|Native|Protected|BlueprintCallable // @ game+0x65397f0
	void SetPositionInViewport(); // Function UMG.UserWidget.SetPositionInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65391f0
	void IsInteractable(); // Function UMG.UserWidget.IsInteractable // BlueprintCosmetic|Event|Public|BlueprintEvent|Const // @ game+0x3b43ac
	void SetNumLoopsToPlay(); // Function UMG.UserWidget.SetNumLoopsToPlay // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6538df0
	void SetOwningPlayer(); // Function UMG.UserWidget.SetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6538fc4
	void OnControllerButtonReleased(); // Function UMG.UserWidget.OnControllerButtonReleased // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnDragEnter(); // Function UMG.UserWidget.OnDragEnter // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void SetColorAndOpacity(); // Function UMG.UserWidget.SetColorAndOpacity // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x392dc4
	void PlayAnimation(); // Function UMG.UserWidget.PlayAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xe4cf1c
	void OnDragLeave(); // Function UMG.UserWidget.OnDragLeave // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void SetForegroundColor(); // Function UMG.UserWidget.SetForegroundColor // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x65389dc
	void OnTouchGesture(); // Function UMG.UserWidget.OnTouchGesture // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void PlayAnimationTo(); // Function UMG.UserWidget.PlayAnimationTo // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6537eb4
	void SetInputActionPriority(); // Function UMG.UserWidget.SetInputActionPriority // Final|Native|Protected|BlueprintCallable // @ game+0x6538b74
	void OnMouseMove(); // Function UMG.UserWidget.OnMouseMove // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void FinishStoppedSequencePlayers(); // Function UMG.UserWidget.FinishStoppedSequencePlayers // Final|Native|Public|BlueprintCallable // @ game+0x653687c
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // Final|Native|Public|BlueprintCallable // @ game+0x65397dc
	void IsAnimationPlaying(); // Function UMG.UserWidget.IsAnimationPlaying // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6537578
	void OnPaint(); // Function UMG.UserWidget.OnPaint // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x3b43ac
	void OnDragOver(); // Function UMG.UserWidget.OnDragOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnAnalogValueChanged(); // Function UMG.UserWidget.OnAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnMouseWheel(); // Function UMG.UserWidget.OnMouseWheel // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void SetDesiredSizeInViewport(); // Function UMG.UserWidget.SetDesiredSizeInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6538934
	void SetPlaybackSpeed(); // Function UMG.UserWidget.SetPlaybackSpeed // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6539110
	void SetAnchorsInViewport(); // Function UMG.UserWidget.SetAnchorsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x653880c
	void IsInViewport(); // Function UMG.UserWidget.IsInViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536ab0
	void OnMotionDetected(); // Function UMG.UserWidget.OnMotionDetected // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void PlaySound(); // Function UMG.UserWidget.PlaySound // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x65380d4
	void IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6537618
	void SetPadding(); // Function UMG.UserWidget.SetPadding // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6539070
	void OnControllerAnalogValueChanged(); // Function UMG.UserWidget.OnControllerAnalogValueChanged // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void Destruct(); // Function UMG.UserWidget.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void AddToViewport(); // Function UMG.UserWidget.AddToViewport // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6536260
	void PauseAnimation(); // Function UMG.UserWidget.PauseAnimation // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6537e14
	void OnKeyDown(); // Function UMG.UserWidget.OnKeyDown // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void SetInputActionBlocking(); // Function UMG.UserWidget.SetInputActionBlocking // Final|Native|Protected|BlueprintCallable // @ game+0x6538ad0
	void PreConstruct(); // Function UMG.UserWidget.PreConstruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnMouseButtonUp(); // Function UMG.UserWidget.OnMouseButtonUp // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnMouseLeave(); // Function UMG.UserWidget.OnMouseLeave // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnPreviewMouseButtonDown(); // Function UMG.UserWidget.OnPreviewMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnPreviewKeyDown(); // Function UMG.UserWidget.OnPreviewKeyDown // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnControllerButtonPressed(); // Function UMG.UserWidget.OnControllerButtonPressed // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void StopListeningForInputAction(); // Function UMG.UserWidget.StopListeningForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x6539804
	void IsListeningForInputAction(); // Function UMG.UserWidget.IsListeningForInputAction // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x6537658
	void OnTouchStarted(); // Function UMG.UserWidget.OnTouchStarted // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void ListenForInputAction(); // Function UMG.UserWidget.ListenForInputAction // Final|Native|Protected|BlueprintCallable // @ game+0x65378e8
	void GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6536c14
	void GetOwningPlayer(); // Function UMG.UserWidget.GetOwningPlayer // Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xf5ddfc
	void OnMouseButtonDown(); // Function UMG.UserWidget.OnMouseButtonDown // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653694c
	void OnTouchMoved(); // Function UMG.UserWidget.OnTouchMoved // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnDragDetected(); // Function UMG.UserWidget.OnDragDetected // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnFocusReceived(); // Function UMG.UserWidget.OnFocusReceived // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x3b43ac
};

// Class UMG.WidgetComponent
// Size: 0xc80 (Inherited: 0xab0)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0xab0(0x01)
	enum class EWidgetTimingPolicy *57393e7bef; // 0xab1(0x01)
	char pad_AB2[0x6]; // 0xab2(0x06)
	struct UClass* WidgetClass; // 0xab8(0x08)
	struct FIntPoint DrawSize; // 0xac0(0x08)
	bool *a9005a954b; // 0xac8(0x01)
	bool *ba49f9da51; // 0xac9(0x01)
	char pad_ACA[0x2]; // 0xaca(0x02)
	float *a52a812728; // 0xacc(0x04)
	char pad_AD0[0x8]; // 0xad0(0x08)
	struct FIntPoint *c87bf6983e; // 0xad8(0x08)
	bool *ec6837c4a0; // 0xae0(0x01)
	char pad_AE1[0x3]; // 0xae1(0x03)
	struct FVector2D Pivot; // 0xae4(0x08)
	bool *b4c732851d; // 0xaec(0x01)
	bool *7bbe634a72; // 0xaed(0x01)
	char pad_AEE[0x2]; // 0xaee(0x02)
	struct ULocalPlayer* *6a835a1b24; // 0xaf0(0x08)
	struct FLinearColor BackgroundColor; // 0xaf8(0x10)
	struct FLinearColor TintColorAndOpacity; // 0xb08(0x10)
	float OpacityFromTexture; // 0xb18(0x04)
	enum class EWidgetBlendMode BlendMode; // 0xb1c(0x01)
	bool bIsTwoSided; // 0xb1d(0x01)
	bool *c7336eea7b; // 0xb1e(0x01)
	char pad_B1F[0x1]; // 0xb1f(0x01)
	struct UUserWidget* Widget; // 0xb20(0x08)
	char pad_B28[0x20]; // 0xb28(0x20)
	struct UBodySetup* BodySetup; // 0xb48(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0xb50(0x08)
	struct UMaterialInterface* *302cd9d4e9; // 0xb58(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0xb60(0x08)
	struct UMaterialInterface* *31fcff68e4; // 0xb68(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0xb70(0x08)
	struct UMaterialInterface* *28e7a1b2d9; // 0xb78(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0xb80(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0xb88(0x08)
	bool *0b04f839d9; // 0xb90(0x01)
	bool *3cb1f9a89d; // 0xb91(0x01)
	char pad_B92[0x6]; // 0xb92(0x06)
	struct FName *bbecbe4ad3; // 0xb98(0x08)
	int32 *ced7edfa5d; // 0xba0(0x04)
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
	float *045fb57568; // 0xc00(0x04)
	bool bShouldRenderWidget; // 0xc04(0x01)
	bool bAlwaysVisibleWidget; // 0xc05(0x01)
	char pad_C06[0x2]; // 0xc06(0x02)
	struct TMap<struct UPrimitiveComponent*, struct UMaterialInstanceDynamic*> *e817c728af; // 0xc08(0x50)
	struct TArray<struct UMeshComponent*> *83d22ba4aa; // 0xc58(0x10)
	struct UTextureRenderTarget2D* OverrideRenderTarget; // 0xc68(0x08)
	struct USceneComponent* *67a8d67ae8; // 0xc70(0x08)
	char pad_C78[0x8]; // 0xc78(0x08)

	void *83caa54152(); // Function UMG.WidgetComponent.*83caa54152 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653c654
	void *08f77f1b86(); // Function UMG.WidgetComponent.*08f77f1b86 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65415d4
	void *510dcf83fc(); // Function UMG.WidgetComponent.*510dcf83fc // Final|Native|Public|BlueprintCallable // @ game+0x654454c
	void *838635c024(); // Function UMG.WidgetComponent.*838635c024 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c7e4
	void *c191ab3c4d(); // Function UMG.WidgetComponent.*c191ab3c4d // Final|Native|Public|BlueprintCallable // @ game+0x653a234
	void *aeac0b0267(); // Function UMG.WidgetComponent.*aeac0b0267 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d768
	void *bb077b0583(); // Function UMG.WidgetComponent.*bb077b0583 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653d1fc
	void *2f17c08869(); // Function UMG.WidgetComponent.*2f17c08869 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d740
	void *791cf25ed1(); // Function UMG.WidgetComponent.*791cf25ed1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6540088
	void *1c65b2fab3(); // Function UMG.WidgetComponent.*1c65b2fab3 // Final|Native|Public|BlueprintCallable // @ game+0x653a98c
	void *194f57a952(); // Function UMG.WidgetComponent.*194f57a952 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c05c
	void *c8e60dbd6f(); // Function UMG.WidgetComponent.*c8e60dbd6f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6540f60
	void *a45b652d87(); // Function UMG.WidgetComponent.*a45b652d87 // Final|Native|Public|BlueprintCallable // @ game+0x654137c
	void *91c7e81fce(); // Function UMG.WidgetComponent.*91c7e81fce // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d1e4
	void *5789366588(); // Function UMG.WidgetComponent.*5789366588 // Native|Public|BlueprintCallable // @ game+0x6319ac
	void *11d4013ae5(); // Function UMG.WidgetComponent.*11d4013ae5 // Native|Public|BlueprintCallable // @ game+0x6547084
	void *deef80c384(); // Function UMG.WidgetComponent.*deef80c384 // Final|Native|Public|BlueprintCallable // @ game+0x65418d8
	void *df40ff8999(); // Function UMG.WidgetComponent.*df40ff8999 // Final|Native|Public|BlueprintCallable // @ game+0x653ee2c
	void *df47528369(); // Function UMG.WidgetComponent.*df47528369 // Final|Native|Public|BlueprintCallable // @ game+0x6547118
	void *bebec8b484(); // Function UMG.WidgetComponent.*bebec8b484 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653ca64
	void *685806279e(); // Function UMG.WidgetComponent.*685806279e // Final|Native|Public|BlueprintCallable // @ game+0x653febc
	void *2140c83d90(); // Function UMG.WidgetComponent.*2140c83d90 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e1c4
	void *559c1e01bf(); // Function UMG.WidgetComponent.*559c1e01bf // Final|Native|Public|BlueprintCallable // @ game+0x6547968
	void *6d5db7c83a(); // Function UMG.WidgetComponent.*6d5db7c83a // Final|Native|Public|BlueprintCallable // @ game+0x6545650
	void *0ab7b3461e(); // Function UMG.WidgetComponent.*0ab7b3461e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d6ec
	void *5cc8f93228(); // Function UMG.WidgetComponent.*5cc8f93228 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653dd5c
};

// Class UMG.*d519ef66f2
// Size: 0x148 (Inherited: 0x130)
struct U*d519ef66f2 : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x130(0x10)
	char pad_140[0x8]; // 0x140(0x08)

	void HasAnyChildren(); // Function UMG.*d519ef66f2.HasAnyChildren // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e06c
	void AddChild(); // Function UMG.*d519ef66f2.AddChild // Final|Native|Public|BlueprintCallable // @ game+0x65399d4
	void GetChildAt(); // Function UMG.*d519ef66f2.GetChildAt // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c48c
	void GetChildIndex(); // Function UMG.*d519ef66f2.GetChildIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c52c
	void RemoveChild(); // Function UMG.*d519ef66f2.RemoveChild // Final|Native|Public|BlueprintCallable // @ game+0x653f3f4
	void GetChildrenCount(); // Function UMG.*d519ef66f2.GetChildrenCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c5cc
	void ClearChildren(); // Function UMG.*d519ef66f2.ClearChildren // Final|Native|Public|BlueprintCallable // @ game+0x653a674
	void RemoveChildAt(); // Function UMG.*d519ef66f2.RemoveChildAt // Final|Native|Public|BlueprintCallable // @ game+0x653f494
	void HasChild(); // Function UMG.*d519ef66f2.HasChild // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e088
};

// Class UMG.*f5bbc47be6
// Size: 0x148 (Inherited: 0x148)
struct U*f5bbc47be6 : U*d519ef66f2 {

	void GetContent(); // Function UMG.*f5bbc47be6.GetContent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c5e4
	void GetContentSlot(); // Function UMG.*f5bbc47be6.GetContentSlot // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c610
	void SetContent(); // Function UMG.*f5bbc47be6.SetContent // Final|Native|Public|BlueprintCallable // @ game+0x6540d60
};

// Class UMG.Button
// Size: 0x480 (Inherited: 0x148)
struct UButton : U*f5bbc47be6 {
	struct USlateWidgetStyleAsset* Style; // 0x148(0x08)
	struct F*23cea9d391 WidgetStyle; // 0x150(0x2a8)
	struct FLinearColor ColorAndOpacity; // 0x3f8(0x10)
	struct FLinearColor BackgroundColor; // 0x408(0x10)
	enum class *e02042fc11 ClickMethod; // 0x418(0x01)
	enum class *d7b0178695 TouchMethod; // 0x419(0x01)
	bool IsFocusable; // 0x41a(0x01)
	char pad_41B[0x5]; // 0x41b(0x05)
	struct FMulticastDelegate OnClicked; // 0x420(0x10)
	struct FMulticastDelegate OnPressed; // 0x430(0x10)
	struct FMulticastDelegate OnReleased; // 0x440(0x10)
	struct FMulticastDelegate OnHovered; // 0x450(0x10)
	struct FMulticastDelegate OnUnHovered; // 0x460(0x10)
	char pad_470[0x10]; // 0x470(0x10)

	void SetBackgroundColor(); // Function UMG.Button.SetBackgroundColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x653fff0
	void IsPressed(); // Function UMG.Button.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e2ac
	void SetColorAndOpacity(); // Function UMG.Button.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6540b1c
	void SetStyle(); // Function UMG.Button.SetStyle // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6545d68
};

// Class UMG.EditableText
// Size: 0x4c0 (Inherited: 0x130)
struct UEditableText : UWidget {
	struct FText Text; // 0x130(0x18)
	DelegateProperty TextDelegate; // 0x148(0x10)
	struct FText HintText; // 0x158(0x18)
	DelegateProperty HintTextDelegate; // 0x170(0x10)
	struct F*44fef67a56 WidgetStyle; // 0x180(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x3c8(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3d0(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3d8(0x08)
	struct USlateBrushAsset* CaretImage; // 0x3e0(0x08)
	struct FSlateFontInfo Font; // 0x3e8(0x68)
	struct FSlateColor ColorAndOpacity; // 0x450(0x28)
	bool IsReadOnly; // 0x478(0x01)
	bool *2b675a0b32; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	float *ea123c702e; // 0x47c(0x04)
	bool *a331e86f4b; // 0x480(0x01)
	bool *58614cf396; // 0x481(0x01)
	bool *0378f67fd5; // 0x482(0x01)
	bool *6c6ad25919; // 0x483(0x01)
	bool *4c06952f07; // 0x484(0x01)
	bool *3b2fa3a133; // 0x485(0x01)
	enum class EVirtualKeyboardType *d0aa29b652; // 0x486(0x01)
	char pad_487[0x1]; // 0x487(0x01)
	struct F*ffbe57b1eb ShapedTextOptions; // 0x488(0x08)
	struct FMulticastDelegate OnTextChanged; // 0x490(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x4a0(0x10)
	char pad_4B0[0x10]; // 0x4b0(0x10)

	void SetIsPassword(); // Function UMG.EditableText.SetIsPassword // Final|Native|Public|BlueprintCallable // @ game+0x6542f64
	void OnEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x3b43ac
	void OnEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x3b43ac
	void GetText(); // Function UMG.EditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653da88
	void SetText(); // Function UMG.EditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x6545e38
	void SetIsReadOnly(); // Function UMG.EditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x6543020
	void SetHintText(); // Function UMG.EditableText.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x6541b0c
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

	void Dragged(); // Function UMG.DragDropOperation.Dragged // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x65364e8
	void Drop(); // Function UMG.DragDropOperation.Drop // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x65365dc
	void DragCancelled(); // Function UMG.DragDropOperation.DragCancelled // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x65363f4
};

// Class UMG.*8506145097
// Size: 0x158 (Inherited: 0x130)
struct U*8506145097 : UWidget {
	struct F*ffbe57b1eb ShapedTextOptions; // 0x130(0x08)
	enum class ETextJustify Justification; // 0x138(0x01)
	bool AutoWrapText; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	float WrapTextAt; // 0x13c(0x04)
	enum class *d58a605dcf WrappingPolicy; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	struct FMargin Margin; // 0x144(0x10)
	float LineHeightPercentage; // 0x154(0x04)
};

// Class UMG.TextBlock
// Size: 0x260 (Inherited: 0x158)
struct UTextBlock : U*8506145097 {
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

	void SetColorAndOpacity(); // Function UMG.TextBlock.SetColorAndOpacity // Final|Native|Public|BlueprintCallable // @ game+0xc78e80
	void SetJustification(); // Function UMG.TextBlock.SetJustification // Final|Native|Public|BlueprintCallable // @ game+0x6543400
	void SetOpacity(); // Function UMG.TextBlock.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x65444b4
	void GetText(); // Function UMG.TextBlock.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653dce8
	void SetText(); // Function UMG.TextBlock.SetText // Native|Public|BlueprintCallable // @ game+0x6546208
	void SetFont(); // Function UMG.TextBlock.SetFont // Final|Native|Public|BlueprintCallable // @ game+0x65416b8
	void SetMinDesiredWidth(); // Function UMG.TextBlock.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x6543ecc
	void SetWrapTextAt(); // Function UMG.TextBlock.SetWrapTextAt // Final|Native|Public|BlueprintCallable // @ game+0x65471b8
	void SetShadowOffset(); // Function UMG.TextBlock.SetShadowOffset // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65455c4
	void SetShadowColorAndOpacity(); // Function UMG.TextBlock.SetShadowColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x654552c
};

// Class UMG.ComboBoxString
// Size: 0xdb0 (Inherited: 0x130)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> *a610a2dc08; // 0x130(0x10)
	struct FString *e535751eb6; // 0x140(0x10)
	struct F*0e1269d5fe WidgetStyle; // 0x150(0x428)
	struct F*40cf746cc9 ItemStyle; // 0x578(0x718)
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

	void OnSelectionChangedEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void FindOptionIndex(); // Function UMG.ComboBoxString.FindOptionIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653bb84
	void GetOptionAtIndex(); // Function UMG.ComboBoxString.GetOptionAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d594
	void SetSelectedOption(); // Function UMG.ComboBoxString.SetSelectedOption // Final|Native|Public|BlueprintCallable // @ game+0x6545430
	void GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d964
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // Final|Native|Public|BlueprintCallable // @ game+0x653a7b8
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // Final|Native|Public|BlueprintCallable // @ game+0x653ee18
	void RemoveOption(); // Function UMG.ComboBoxString.RemoveOption // Final|Native|Public|BlueprintCallable // @ game+0x653f534
	void AddOption(); // Function UMG.ComboBoxString.AddOption // Final|Native|Public|BlueprintCallable // @ game+0x653a174
	void GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d6d4
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // Final|Native|Public|BlueprintCallable // @ game+0x653a7a4
};

// Class UMG.WidgetSwitcher
// Size: 0x160 (Inherited: 0x148)
struct UWidgetSwitcher : U*d519ef66f2 {
	int32 ActiveWidgetIndex; // 0x148(0x04)
	char pad_14C[0x14]; // 0x14c(0x14)

	void GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d530
	void GetWidgetAtIndex(); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c48c
	void GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653bc78
	void SetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // Native|Public|BlueprintCallable // @ game+0xd79e58
	void SetActiveWidget(); // Function UMG.WidgetSwitcher.SetActiveWidget // Native|Public|BlueprintCallable // @ game+0x653f980
};

// Class UMG.*403fbd550a
// Size: 0x50 (Inherited: 0x30)
struct U*403fbd550a : U*6bfc7814f8 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFail; // 0x40(0x10)

	void *e695961392(); // Function UMG.*403fbd550a.*e695961392 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65362f8
};

// Class UMG.*3c3e049a17
// Size: 0x3f0 (Inherited: 0xd0)
struct U*3c3e049a17 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve Translation[0x02]; // 0xd8(0xe0)
	struct FRichCurve Rotation; // 0x1b8(0x70)
	struct FRichCurve Scale[0x02]; // 0x228(0xe0)
	struct FRichCurve Shear[0x02]; // 0x308(0xe0)
	char pad_3E8[0x8]; // 0x3e8(0x08)
};

// Class UMG.*675057f042
// Size: 0xe0 (Inherited: 0xe0)
struct U*675057f042 : UMovieScenePropertyTrack {
};

// Class UMG.*5ed8453a47
// Size: 0x2a0 (Inherited: 0xd0)
struct U*5ed8453a47 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *f25068ebd3; // 0xd8(0x70)
	struct FRichCurve *08d32caa25; // 0x148(0x70)
	struct FRichCurve *0bdb986a2c; // 0x1b8(0x70)
	struct FRichCurve *edc2915594; // 0x228(0x70)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class UMG.*669296a7d9
// Size: 0xe0 (Inherited: 0xe0)
struct U*669296a7d9 : UMovieScenePropertyTrack {
};

// Class UMG.*ccd42ba379
// Size: 0xe0 (Inherited: 0xd0)
struct U*ccd42ba379 : U*2df8161570 {
	struct TArray<struct FName> *91d4f91f6a; // 0xc8(0x10)
	struct FName TrackName; // 0xd8(0x08)
};

// Class UMG.*9d98f26665
// Size: 0x30 (Inherited: 0x30)
struct U*9d98f26665 : UInterface {
};

// Class UMG.*08c1c78a2d
// Size: 0x50 (Inherited: 0x30)
struct U*08c1c78a2d : UObject {
	struct UObject* SourceObject; // 0x30(0x08)
	struct F*87fdda3b07 SourcePath; // 0x38(0x10)
	struct FName *77d53e1d79; // 0x48(0x08)
};

// Class UMG.*a6bbcbf9b0
// Size: 0x50 (Inherited: 0x50)
struct U*a6bbcbf9b0 : U*08c1c78a2d {

	void GetValue(); // Function UMG.*a6bbcbf9b0.GetValue // Final|Native|Public|Const // @ game+0x6536d5c
};

// Class UMG.*e804f5fef0
// Size: 0x58 (Inherited: 0x50)
struct U*e804f5fef0 : U*08c1c78a2d {
	char pad_50[0x8]; // 0x50(0x08)

	void GetValue(); // Function UMG.*e804f5fef0.GetValue // Final|Native|Public|Const // @ game+0x6536d80
};

// Class UMG.*b8300ee54a
// Size: 0x58 (Inherited: 0x50)
struct U*b8300ee54a : U*08c1c78a2d {
	char pad_50[0x8]; // 0x50(0x08)

	void GetValue(); // Function UMG.*b8300ee54a.GetValue // Final|Native|Public|Const // @ game+0x6536e0c
};

// Class UMG.*ac2cebcd8c
// Size: 0x58 (Inherited: 0x50)
struct U*ac2cebcd8c : U*08c1c78a2d {
	char pad_50[0x8]; // 0x50(0x08)

	void GetLinearValue(); // Function UMG.*ac2cebcd8c.GetLinearValue // Final|Native|Public|HasDefaults|Const // @ game+0xd22c3c
	void GetSlateValue(); // Function UMG.*ac2cebcd8c.GetSlateValue // Final|Native|Public|Const // @ game+0x6536c5c
};

// Class UMG.*4d08cf28d9
// Size: 0x50 (Inherited: 0x50)
struct U*4d08cf28d9 : U*08c1c78a2d {

	void GetValue(); // Function UMG.*4d08cf28d9.GetValue // Final|Native|Public|Const // @ game+0x6536e30
};

// Class UMG.*a672cbb5b4
// Size: 0x50 (Inherited: 0x50)
struct U*a672cbb5b4 : U*08c1c78a2d {

	void GetValue(); // Function UMG.*a672cbb5b4.GetValue // Final|Native|Public|Const // @ game+0x6536e58
};

// Class UMG.*d4d662c9ba
// Size: 0x50 (Inherited: 0x50)
struct U*d4d662c9ba : U*08c1c78a2d {

	void GetValue(); // Function UMG.*d4d662c9ba.GetValue // Final|Native|Public|Const // @ game+0x6536e7c
};

// Class UMG.*f18e8b534b
// Size: 0x58 (Inherited: 0x50)
struct U*f18e8b534b : U*08c1c78a2d {
	char pad_50[0x8]; // 0x50(0x08)

	void GetStringValue(); // Function UMG.*f18e8b534b.GetStringValue // Final|Native|Public|Const // @ game+0x6536cd4
	void GetTextValue(); // Function UMG.*f18e8b534b.GetTextValue // Final|Native|Public|Const // @ game+0xbf572c
};

// Class UMG.*869dc66fe9
// Size: 0x50 (Inherited: 0x50)
struct U*869dc66fe9 : U*08c1c78a2d {

	void GetValue(); // Function UMG.*869dc66fe9.GetValue // Final|Native|Public|Const // @ game+0x6536ea0
};

// Class UMG.*f31121339e
// Size: 0x50 (Inherited: 0x50)
struct U*f31121339e : U*08c1c78a2d {

	void GetValue(); // Function UMG.*f31121339e.GetValue // Final|Native|Public|Const // @ game+0x6536ec4
};

// Class UMG.*e116d8db00
// Size: 0x38 (Inherited: 0x30)
struct U*e116d8db00 : UObject {
	bool bReveal; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 RevealedIndex; // 0x34(0x04)
};

// Class UMG.*da95924b26
// Size: 0x30 (Inherited: 0x30)
struct U*da95924b26 : UBlueprintFunctionLibrary {

	void *2a67c1a4bf(); // Function UMG.*da95924b26.*2a67c1a4bf // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65376f8
	void *266edddc7d(); // Function UMG.*da95924b26.*266edddc7d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6537be4
	void *c5efd70825(); // Function UMG.*da95924b26.*c5efd70825 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6535e9c
	void *0017b51687(); // Function UMG.*da95924b26.*0017b51687 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x65383a8
	void *aa4bd9bec9(); // Function UMG.*da95924b26.*aa4bd9bec9 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x6538280
	void *8d0bf38298(); // Function UMG.*da95924b26.*8d0bf38298 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65366d0
	void *dd12b8cf22(); // Function UMG.*da95924b26.*dd12b8cf22 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653603c
	void *c026722310(); // Function UMG.*da95924b26.*c026722310 // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x65384d0
	void *210e91be6a(); // Function UMG.*da95924b26.*210e91be6a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6536ae4
	void *291b99f150(); // Function UMG.*da95924b26.*291b99f150 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6537a8c
};

// Class UMG.*e05825f375
// Size: 0x438 (Inherited: 0x30)
struct U*e05825f375 : UObject {
	struct UTexture2D* *b2046ad2df; // 0x30(0x08)
	char pad_38[0x400]; // 0x38(0x400)
};

// Class UMG.*2fe903c899
// Size: 0x68 (Inherited: 0x30)
struct U*2fe903c899 : UObject {
	struct TArray<struct F*d1ab71f4f9> *cd4e49cc9b; // 0x30(0x10)
	struct TArray<uint32> *06d6c3adb2; // 0x40(0x10)
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FVector2D *4a230d74b4; // 0x58(0x08)
	struct FVector2D *826b780e88; // 0x60(0x08)
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x438 (Inherited: 0x3c8)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x3c8(0x08)
	bool *ecadd7a32b; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct TArray<struct F*0cf28b4c0a> Bindings; // 0x3d8(0x10)
	struct TArray<struct U*9c8bfa0aee*> Animations; // 0x3e8(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3f8(0x10)
	bool *019b1f9c0c; // 0x408(0x01)
	bool *b8a4dac36e; // 0x409(0x01)
	bool *89133ea461; // 0x40a(0x01)
	char pad_40B[0x5]; // 0x40b(0x05)
	struct UUserWidget* *038ddb2da1; // 0x410(0x20)
	struct UUserWidget* Template; // 0x430(0x08)
};

// Class UMG.*378c3975c3
// Size: 0x6b0 (Inherited: 0x30)
struct U*378c3975c3 : UObject {
	char pad_30[0x348]; // 0x30(0x348)
	struct U*9c8bfa0aee* Animation; // 0x378(0x08)
	char pad_380[0x330]; // 0x380(0x330)
};

// Class UMG.PanelSlot
// Size: 0x40 (Inherited: 0x30)
struct UPanelSlot : UVisual {
	struct U*d519ef66f2* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)
};

// Class UMG.*a04f1967ef
// Size: 0x68 (Inherited: 0x40)
struct U*a04f1967ef : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(); // Function UMG.*a04f1967ef.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x65467c0
	void SetPadding(); // Function UMG.*a04f1967ef.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x654468c
	void SetHorizontalAlignment(); // Function UMG.*a04f1967ef.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6541d88
};

// Class UMG.*f74fb2ffc0
// Size: 0x68 (Inherited: 0x40)
struct U*f74fb2ffc0 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(); // Function UMG.*f74fb2ffc0.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x65468e8
	void SetPadding(); // Function UMG.*f74fb2ffc0.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x65447cc
	void SetHorizontalAlignment(); // Function UMG.*f74fb2ffc0.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6541eb0
};

// Class UMG.*5f4e02a6ec
// Size: 0x68 (Inherited: 0x40)
struct U*5f4e02a6ec : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(); // Function UMG.*5f4e02a6ec.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x654697c
	void SetPadding(); // Function UMG.*5f4e02a6ec.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x654486c
	void SetHorizontalAlignment(); // Function UMG.*5f4e02a6ec.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6541f44
};

// Class UMG.*efa881b15f
// Size: 0x78 (Inherited: 0x40)
struct U*efa881b15f : UPanelSlot {
	struct F*c32d8c9495 LayoutData; // 0x40(0x28)
	bool bAutoSize; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32 ZOrder; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	void SetZOrder(); // Function UMG.*efa881b15f.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x6547250
	void SetOffsets(); // Function UMG.*efa881b15f.SetOffsets // Final|Native|Public|BlueprintCallable // @ game+0x3cd20c
	void GetLayout(); // Function UMG.*efa881b15f.GetLayout // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d1b8
	void GetSize(); // Function UMG.*efa881b15f.GetSize // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653da38
	void SetMinimum(); // Function UMG.*efa881b15f.SetMinimum // Final|Native|Public|HasDefaults // @ game+0x6544094
	void SetAutoSize(); // Function UMG.*efa881b15f.SetAutoSize // Final|Native|Public|BlueprintCallable // @ game+0x653ff5c
	void SetLayout(); // Function UMG.*efa881b15f.SetLayout // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65436b0
	void SetAlignment(); // Function UMG.*efa881b15f.SetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x653fa14
	void SetPosition(); // Function UMG.*efa881b15f.SetPosition // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6544f44
	void SetMaximum(); // Function UMG.*efa881b15f.SetMaximum // Final|Native|Public|HasDefaults // @ game+0x6543be0
	void *349e0a036d(); // Function UMG.*efa881b15f.*349e0a036d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c074
	void SetSize(); // Function UMG.*efa881b15f.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65456e0
	void *44a831d89e(); // Function UMG.*efa881b15f.*44a831d89e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c02c
	void GetAlignment(); // Function UMG.*efa881b15f.GetAlignment // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653bc9c
	void SetAnchors(); // Function UMG.*efa881b15f.SetAnchors // Final|Native|Public|BlueprintCallable // @ game+0x653fb3c
	void *35b0a6b986(); // Function UMG.*efa881b15f.*35b0a6b986 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653dfa4
	void *7a567d6a5a(); // Function UMG.*efa881b15f.*7a567d6a5a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d554
	void GetPosition(); // Function UMG.*efa881b15f.GetPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653d710
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

	void SetColumn(); // Function UMG.GridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x6540bb4
	void SetPadding(); // Function UMG.GridSlot.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0xd590a0
	void SetRow(); // Function UMG.GridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x6545070
	void SetRowSpan(); // Function UMG.GridSlot.SetRowSpan // Final|Native|Public|BlueprintCallable // @ game+0x654518c
	void SetLayer(); // Function UMG.GridSlot.SetLayer // Final|Native|Public|BlueprintCallable // @ game+0x6543588
	void SetHorizontalAlignment(); // Function UMG.GridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6541fd8
	void SetVerticalAlignment(); // Function UMG.GridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546a10
	void SetColumnSpan(); // Function UMG.GridSlot.SetColumnSpan // Final|Native|Public|BlueprintCallable // @ game+0x6540cd0
};

// Class UMG.*df0cbb7899
// Size: 0x68 (Inherited: 0x40)
struct U*df0cbb7899 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetHorizontalAlignment(); // Function UMG.*df0cbb7899.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6542068
	void SetVerticalAlignment(); // Function UMG.*df0cbb7899.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546aa0
	void SetSize(); // Function UMG.*df0cbb7899.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x654576c
	void SetPadding(); // Function UMG.*df0cbb7899.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x654490c
};

// Class UMG.*ae9976ef38
// Size: 0x60 (Inherited: 0x40)
struct U*ae9976ef38 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32 ZOrder; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)

	void SetPadding(); // Function UMG.*ae9976ef38.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x65449ac
	void *35b0a6b986(); // Function UMG.*ae9976ef38.*35b0a6b986 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653dfc8
	void SetHorizontalAlignment(); // Function UMG.*ae9976ef38.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x65420f8
	void SetVerticalAlignment(); // Function UMG.*ae9976ef38.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546b30
	void SetZOrder(); // Function UMG.*ae9976ef38.SetZOrder // Final|Native|Public|BlueprintCallable // @ game+0x65472e0
};

// Class UMG.*521c42e1e9
// Size: 0x68 (Inherited: 0x40)
struct U*521c42e1e9 : UPanelSlot {
	bool bIsTitleSafe; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FMargin SafeAreaScale; // 0x44(0x10)
	enum class EHorizontalAlignment HAlign; // 0x54(0x01)
	enum class EVerticalAlignment VAlign; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FMargin Padding; // 0x58(0x10)
};

// Class UMG.*d1dfd2b830
// Size: 0x68 (Inherited: 0x40)
struct U*d1dfd2b830 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(); // Function UMG.*d1dfd2b830.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546bc0
	void SetPadding(); // Function UMG.*d1dfd2b830.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6544a4c
	void SetHorizontalAlignment(); // Function UMG.*d1dfd2b830.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6542188
};

// Class UMG.*4ba178b411
// Size: 0x60 (Inherited: 0x40)
struct U*4ba178b411 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)

	void SetHorizontalAlignment(); // Function UMG.*4ba178b411.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x654221c
	void SetPadding(); // Function UMG.*4ba178b411.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6544ae0
};

// Class UMG.*d1fef01e89
// Size: 0x68 (Inherited: 0x40)
struct U*d1fef01e89 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(); // Function UMG.*d1fef01e89.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546c54
	void SetPadding(); // Function UMG.*d1fef01e89.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6544b80
	void SetHorizontalAlignment(); // Function UMG.*d1fef01e89.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x65422ac
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

	void SetHorizontalAlignment(); // Function UMG.UniformGridSlot.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6542340
	void SetVerticalAlignment(); // Function UMG.UniformGridSlot.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546ce8
	void SetColumn(); // Function UMG.UniformGridSlot.SetColumn // Final|Native|Public|BlueprintCallable // @ game+0x6540c44
	void SetRow(); // Function UMG.UniformGridSlot.SetRow // Final|Native|Public|BlueprintCallable // @ game+0x6545100
};

// Class UMG.*a75544a5ae
// Size: 0x68 (Inherited: 0x40)
struct U*a75544a5ae : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetHorizontalAlignment(); // Function UMG.*a75544a5ae.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6542068
	void SetVerticalAlignment(); // Function UMG.*a75544a5ae.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546aa0
	void SetSize(); // Function UMG.*a75544a5ae.SetSize // Final|Native|Public|BlueprintCallable // @ game+0x654576c
	void SetPadding(); // Function UMG.*a75544a5ae.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x654490c
};

// Class UMG.*2c54bdfef7
// Size: 0x60 (Inherited: 0x40)
struct U*2c54bdfef7 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(); // Function UMG.*2c54bdfef7.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546b30
	void SetPadding(); // Function UMG.*2c54bdfef7.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6544ae0
	void SetHorizontalAlignment(); // Function UMG.*2c54bdfef7.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x65420f8
};

// Class UMG.*4db5748878
// Size: 0x168 (Inherited: 0x148)
struct U*4db5748878 : U*f5bbc47be6 {
	bool bDoubleClickTogglesFullscreen; // 0x148(0x01)
	char pad_149[0x1f]; // 0x149(0x1f)

	void SetVerticalAlignment(); // Function UMG.*4db5748878.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546d78
	void SetPadding(); // Function UMG.*4db5748878.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6544c20
	void SetHorizontalAlignment(); // Function UMG.*4db5748878.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x65423d0
};

// Class UMG.*052ba18fc4
// Size: 0x68 (Inherited: 0x40)
struct U*052ba18fc4 : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(); // Function UMG.*052ba18fc4.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546e08
	void SetPadding(); // Function UMG.*052ba18fc4.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6544cc0
	void SetHorizontalAlignment(); // Function UMG.*052ba18fc4.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6542460
};

// Class UMG.*cc637b661c
// Size: 0x68 (Inherited: 0x40)
struct U*cc637b661c : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetPadding(); // Function UMG.*cc637b661c.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x6544d60
	void SetVerticalAlignment(); // Function UMG.*cc637b661c.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546e9c
	void SetFillEmptySpace(); // Function UMG.*cc637b661c.SetFillEmptySpace // Final|Native|Public|BlueprintCallable // @ game+0x65414a8
	void SetFillSpanWhenLessThan(); // Function UMG.*cc637b661c.SetFillSpanWhenLessThan // Final|Native|Public|BlueprintCallable // @ game+0x654153c
	void SetHorizontalAlignment(); // Function UMG.*cc637b661c.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x65424f4
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

	void SetRadius(); // Function UMG.CircularThrobber.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x6544fd0
	void SetNumberOfPieces(); // Function UMG.CircularThrobber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x65442c4
	void SetPeriod(); // Function UMG.CircularThrobber.SetPeriod // Final|Native|Public|BlueprintCallable // @ game+0x6544e98
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
	struct F*0704742c93 WidgetStyle; // 0x158(0x870)
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
	bool *3b2fa3a133; // 0xaad(0x01)
	enum class EVirtualKeyboardType *d0aa29b652; // 0xaae(0x01)
	char pad_AAF[0x1]; // 0xaaf(0x01)
	struct F*ffbe57b1eb ShapedTextOptions; // 0xab0(0x08)
	struct FMulticastDelegate OnTextChanged; // 0xab8(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xac8(0x10)
	char pad_AD8[0x10]; // 0xad8(0x10)

	void ClearError(); // Function UMG.EditableTextBox.ClearError // Final|Native|Public|BlueprintCallable // @ game+0x653a688
	void SetError(); // Function UMG.EditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x65410b4
	void OnEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x3b43ac
	void GetText(); // Function UMG.EditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653dafc
	void SetIsReadOnly(); // Function UMG.EditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x65430b4
	void OnEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x3b43ac
	void HasError(); // Function UMG.EditableTextBox.HasError // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e128
	void SetHintText(); // Function UMG.EditableTextBox.SetHintText // Final|Native|Public|BlueprintCallable // @ game+0x6541c00
	void SetText(); // Function UMG.EditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x6545f2c
};

// Class UMG.ExpandableArea
// Size: 0x378 (Inherited: 0x130)
struct UExpandableArea : UWidget {
	char pad_130[0x8]; // 0x130(0x08)
	struct F*0e5537161b Style; // 0x138(0x130)
	struct FSlateBrush BorderBrush; // 0x268(0x90)
	struct FSlateColor BorderColor; // 0x2f8(0x28)
	bool bIsExpanded; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	float MaxHeight; // 0x324(0x04)
	struct FMargin HeaderPadding; // 0x328(0x10)
	struct FMargin AreaPadding; // 0x338(0x10)
	struct FMulticastDelegate OnExpansionChanged; // 0x348(0x10)
	struct UWidget* *b48a5874cb; // 0x358(0x08)
	struct UWidget* *226b107bd9; // 0x360(0x08)
	char pad_368[0x10]; // 0x368(0x10)

	void SetIsExpanded_Animated(); // Function UMG.ExpandableArea.SetIsExpanded_Animated // Final|Native|Public|BlueprintCallable // @ game+0x6542e34
	void GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653cfb4
	void SetIsExpanded(); // Function UMG.ExpandableArea.SetIsExpanded // Final|Native|Public|BlueprintCallable // @ game+0x6542d98
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

	void SetBrushSize(); // Function UMG.Image.SetBrushSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x654095c
	void SetBrushFromTextureDynamic(); // Function UMG.Image.SetBrushFromTextureDynamic // Final|Native|Public|BlueprintCallable // @ game+0x65406c8
	void SetOpacity(); // Function UMG.Image.SetOpacity // Final|Native|Public|BlueprintCallable // @ game+0x654441c
	void SetBrush(); // Function UMG.Image.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65402fc
	void SetBrushFromMaterial(); // Function UMG.Image.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x65405a8
	void SetColorAndOpacity(); // Function UMG.Image.SetColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xc5893c
	void GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x653c6a8
	void SetBrushFromTexture(); // Function UMG.Image.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0xd3b18c
	void SetBrushFromAsset(); // Function UMG.Image.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x6540488
};

// Class UMG.InputKeySelector
// Size: 0x230 (Inherited: 0x130)
struct UInputKeySelector : UWidget {
	struct F*e9a600af5c SelectedKey; // 0x130(0x20)
	struct FSlateFontInfo Font; // 0x150(0x68)
	struct FMargin Margin; // 0x1b8(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1c8(0x10)
	struct FText KeySelectionText; // 0x1d8(0x18)
	bool bAllowModifierKeys; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FMulticastDelegate OnKeySelected; // 0x1f8(0x10)
	struct FMulticastDelegate OnIsSelectingKeyChanged; // 0x208(0x10)
	char pad_218[0x18]; // 0x218(0x18)

	void OnKeySelected__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void SetKeySelectionText(); // Function UMG.InputKeySelector.SetKeySelectionText // Final|Native|Public|BlueprintCallable // @ game+0x6543494
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void SetSelectedKey(); // Function UMG.InputKeySelector.SetSelectedKey // Final|Native|Public|BlueprintCallable // @ game+0x6545344
	void SetAllowModifierKeys(); // Function UMG.InputKeySelector.SetAllowModifierKeys // Final|Native|Public|BlueprintCallable // @ game+0x653faa0
	void GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653cff8
};

// Class UMG.NativeWidgetHost
// Size: 0x140 (Inherited: 0x130)
struct UNativeWidgetHost : UWidget {
	char pad_130[0x10]; // 0x130(0x10)
};

// Class UMG.CanvasPanel
// Size: 0x158 (Inherited: 0x148)
struct UCanvasPanel : U*d519ef66f2 {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToCanvas(); // Function UMG.CanvasPanel.AddChildToCanvas // Final|Native|Public|BlueprintCallable // @ game+0x6539a74
};

// Class UMG.BackgroundBlur
// Size: 0x208 (Inherited: 0x148)
struct UBackgroundBlur : U*f5bbc47be6 {
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

	void SetBlurRadius(); // Function UMG.BackgroundBlur.SetBlurRadius // Final|Native|Public|BlueprintCallable // @ game+0x6540170
	void SetPadding(); // Function UMG.BackgroundBlur.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x65445ec
	void SetHorizontalAlignment(); // Function UMG.BackgroundBlur.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6541cf4
	void SetVerticalAlignment(); // Function UMG.BackgroundBlur.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x654672c
	void SetApplyAlphaToBlur(); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // Final|Native|Public|BlueprintCallable // @ game+0x653fe28
	void SetLowQualityFallbackBrush(); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65437ec
	void SetBlurStrength(); // Function UMG.BackgroundBlur.SetBlurStrength // Native|Public|BlueprintCallable // @ game+0xb2392c
};

// Class UMG.Border
// Size: 0x2a8 (Inherited: 0x148)
struct UBorder : U*f5bbc47be6 {
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

	void SetBrushFromAsset(); // Function UMG.Border.SetBrushFromAsset // Final|Native|Public|BlueprintCallable // @ game+0x65403f8
	void SetBrushColor(); // Function UMG.Border.SetBrushColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xd15a84
	void SetBrush(); // Function UMG.Border.SetBrush // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6540200
	void GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // Final|Native|Public|BlueprintCallable // @ game+0x653c684
	void SetContentColorAndOpacity(); // Function UMG.Border.SetContentColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x70c820
	void SetPadding(); // Function UMG.Border.SetPadding // Final|Native|Public|BlueprintCallable // @ game+0x654472c
	void SetBrushFromTexture(); // Function UMG.Border.SetBrushFromTexture // Final|Native|Public|BlueprintCallable // @ game+0x6540638
	void SetBrushFromMaterial(); // Function UMG.Border.SetBrushFromMaterial // Final|Native|Public|BlueprintCallable // @ game+0x6540518
	void SetVerticalAlignment(); // Function UMG.Border.SetVerticalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6546854
	void SetHorizontalAlignment(); // Function UMG.Border.SetHorizontalAlignment // Final|Native|Public|BlueprintCallable // @ game+0x6541e1c
	void SetDesiredSizeScale(); // Function UMG.Border.SetDesiredSizeScale // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6540ed4
};

// Class UMG.CheckBox
// Size: 0x7f8 (Inherited: 0x148)
struct UCheckBox : U*f5bbc47be6 {
	enum class ECheckBoxState CheckedState; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty CheckedStateDelegate; // 0x150(0x10)
	struct F*9ea8125f90 WidgetStyle; // 0x160(0x5e0)
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

	void IsPressed(); // Function UMG.CheckBox.IsPressed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e2d0
	void SetCheckedState(); // Function UMG.CheckBox.SetCheckedState // Final|Native|Public|BlueprintCallable // @ game+0x6540a8c
	void IsChecked(); // Function UMG.CheckBox.IsChecked // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e1e8
	void GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c468
	void SetIsChecked(); // Function UMG.CheckBox.SetIsChecked // Final|Native|Public|BlueprintCallable // @ game+0x6542d04
};

// Class UMG.InvalidationBox
// Size: 0x160 (Inherited: 0x148)
struct UInvalidationBox : U*f5bbc47be6 {
	bool *ccf3da437c; // 0x148(0x01)
	bool CacheRelativeTransforms; // 0x149(0x01)
	char pad_14A[0x16]; // 0x14a(0x16)

	void SetCanCache(); // Function UMG.InvalidationBox.SetCanCache // Final|Native|Public|BlueprintCallable // @ game+0x65409f8
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // Final|Native|Public|BlueprintCallable // @ game+0x653e1b0
	void GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c448
};

// Class UMG.MenuAnchor
// Size: 0x188 (Inherited: 0x148)
struct UMenuAnchor : U*f5bbc47be6 {
	struct UClass* MenuClass; // 0x148(0x08)
	DelegateProperty OnGetMenuContentEvent; // 0x150(0x10)
	enum class *dd1ae0e7de Placement; // 0x160(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x161(0x01)
	bool UseApplicationMenuStack; // 0x162(0x01)
	char pad_163[0x5]; // 0x163(0x05)
	struct FMulticastDelegate OnMenuOpenChanged; // 0x168(0x10)
	char pad_178[0x10]; // 0x178(0x10)

	void ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6547370
	void ToggleOpen(); // Function UMG.MenuAnchor.ToggleOpen // Final|Native|Public|BlueprintCallable // @ game+0x65477a4
	void Open(); // Function UMG.MenuAnchor.Open // Final|Native|Public|BlueprintCallable // @ game+0x653e904
	void Close(); // Function UMG.MenuAnchor.Close // Final|Native|Public|BlueprintCallable // @ game+0x653a958
	void IsOpen(); // Function UMG.MenuAnchor.IsOpen // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e230
	void HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e178
	void GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653d354
};

// Class UMG.NamedSlot
// Size: 0x158 (Inherited: 0x148)
struct UNamedSlot : U*f5bbc47be6 {
	char pad_148[0x10]; // 0x148(0x10)
};

// Class UMG.RetainerBox
// Size: 0x178 (Inherited: 0x148)
struct URetainerBox : U*f5bbc47be6 {
	bool *be59b4157d; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	int32 phase; // 0x14c(0x04)
	int32 *914ba3595b; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x158(0x08)
	struct FName TextureParameter; // 0x160(0x08)
	char pad_168[0x10]; // 0x168(0x10)

	void SetEffectMaterial(); // Function UMG.RetainerBox.SetEffectMaterial // Final|Native|Public|BlueprintCallable // @ game+0x6541024
	void SetTextureParameter(); // Function UMG.RetainerBox.SetTextureParameter // Final|Native|Public|BlueprintCallable // @ game+0x6546300
	void GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c79c
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // Final|Native|Public|BlueprintCallable // @ game+0x653f66c
};

// Class UMG.SafeZone
// Size: 0x160 (Inherited: 0x148)
struct USafeZone : U*f5bbc47be6 {
	bool PadLeft; // 0x148(0x01)
	bool PadRight; // 0x149(0x01)
	bool PadTop; // 0x14a(0x01)
	bool PadBottom; // 0x14b(0x01)
	char pad_14C[0x14]; // 0x14c(0x14)
};

// Class UMG.ScaleBox
// Size: 0x168 (Inherited: 0x148)
struct UScaleBox : U*f5bbc47be6 {
	enum class EStretch Stretch; // 0x148(0x01)
	enum class EStretchDirection StretchDirection; // 0x149(0x01)
	char pad_14A[0x2]; // 0x14a(0x02)
	float UserSpecifiedScale; // 0x14c(0x04)
	bool IgnoreInheritedScale; // 0x150(0x01)
	char pad_151[0x17]; // 0x151(0x17)

	void SetUserSpecifiedScale(); // Function UMG.ScaleBox.SetUserSpecifiedScale // Final|Native|Public|BlueprintCallable // @ game+0x6546564
	void SetIgnoreInheritedScale(); // Function UMG.ScaleBox.SetIgnoreInheritedScale // Final|Native|Public|BlueprintCallable // @ game+0x6542584
	void SetStretchDirection(); // Function UMG.ScaleBox.SetStretchDirection // Final|Native|Public|BlueprintCallable // @ game+0x6545cd0
	void SetStretch(); // Function UMG.ScaleBox.SetStretch // Final|Native|Public|BlueprintCallable // @ game+0x6545c38
};

// Class UMG.SizeBox
// Size: 0x178 (Inherited: 0x148)
struct USizeBox : U*f5bbc47be6 {
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

	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x653a754
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x653a704
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x653a768
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x653a944
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x653a6dc
	void SetWidthOverride(); // Function UMG.SizeBox.SetWidthOverride // Final|Native|Public|BlueprintCallable // @ game+0x84610c
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x653a718
	void SetMaxDesiredHeight(); // Function UMG.SizeBox.SetMaxDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x6543980
	void SetHeightOverride(); // Function UMG.SizeBox.SetHeightOverride // Final|Native|Public|BlueprintCallable // @ game+0x846188
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x653a6f0
	void SetMaxAspectRatio(); // Function UMG.SizeBox.SetMaxAspectRatio // Final|Native|Public|BlueprintCallable // @ game+0x65438e8
	void SetMinDesiredWidth(); // Function UMG.SizeBox.SetMinDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x6543e34
	void SetMinDesiredHeight(); // Function UMG.SizeBox.SetMinDesiredHeight // Final|Native|Public|BlueprintCallable // @ game+0x6543c6c
	void SetMaxDesiredWidth(); // Function UMG.SizeBox.SetMaxDesiredWidth // Final|Native|Public|BlueprintCallable // @ game+0x6543a18
};

// Class UMG.Viewport
// Size: 0x170 (Inherited: 0x148)
struct UViewport : U*f5bbc47be6 {
	struct FLinearColor BackgroundColor; // 0x148(0x10)
	char pad_158[0x18]; // 0x158(0x18)

	void GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653df84
	void GetViewRotation(); // Function UMG.Viewport.GetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653de10
	void GetViewLocation(); // Function UMG.Viewport.GetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653ddc4
	void SetViewLocation(); // Function UMG.Viewport.SetViewLocation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6546f2c
	void SetViewRotation(); // Function UMG.Viewport.SetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6546fe4
	void Spawn(); // Function UMG.Viewport.Spawn // Final|Native|Public|BlueprintCallable // @ game+0x6547704
};

// Class UMG.GridPanel
// Size: 0x178 (Inherited: 0x148)
struct UGridPanel : U*d519ef66f2 {
	struct TArray<float> ColumnFill; // 0x148(0x10)
	struct TArray<float> RowFill; // 0x158(0x10)
	char pad_168[0x10]; // 0x168(0x10)

	void AddChildToGrid(); // Function UMG.GridPanel.AddChildToGrid // Final|Native|Public|BlueprintCallable // @ game+0x6539b74
};

// Class UMG.HorizontalBox
// Size: 0x158 (Inherited: 0x148)
struct UHorizontalBox : U*d519ef66f2 {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToHorizontalBox(); // Function UMG.HorizontalBox.AddChildToHorizontalBox // Final|Native|Public|BlueprintCallable // @ game+0x6539c74
};

// Class UMG.Overlay
// Size: 0x158 (Inherited: 0x148)
struct UOverlay : U*d519ef66f2 {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToOverlay(); // Function UMG.Overlay.AddChildToOverlay // Final|Native|Public|BlueprintCallable // @ game+0x6539d74
};

// Class UMG.ScrollBox
// Size: 0x8e0 (Inherited: 0x148)
struct UScrollBox : U*d519ef66f2 {
	struct F*a3b1d90177 WidgetStyle; // 0x148(0x248)
	struct F*4cc977c5e0 WidgetBarStyle; // 0x390(0x518)
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

	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // Final|Native|Public|BlueprintCallable // @ game+0x653f680
	void SetScrollBarVisibility(); // Function UMG.ScrollBox.SetScrollBarVisibility // Final|Native|Public|BlueprintCallable // @ game+0x654521c
	void SetScrollOffset(); // Function UMG.ScrollBox.SetScrollOffset // Final|Native|Public|BlueprintCallable // @ game+0x65452ac
	void GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d91c
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // Final|Native|Public|BlueprintCallable // @ game+0x653f694
	void ScrollWidgetIntoView(); // Function UMG.ScrollBox.ScrollWidgetIntoView // Final|Native|Public|BlueprintCallable // @ game+0x653f744
	void GetScrollToEndOffset(); // Function UMG.ScrollBox.GetScrollToEndOffset // Final|Native|Public|BlueprintCallable // @ game+0x653d93c
};

// Class UMG.UniformGridPanel
// Size: 0x170 (Inherited: 0x148)
struct UUniformGridPanel : U*d519ef66f2 {
	struct FMargin SlotPadding; // 0x148(0x10)
	float MinDesiredSlotWidth; // 0x158(0x04)
	float MinDesiredSlotHeight; // 0x15c(0x04)
	char pad_160[0x10]; // 0x160(0x10)

	void SetMinDesiredSlotHeight(); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // Final|Native|Public|BlueprintCallable // @ game+0x6543d04
	void AddChildToUniformGrid(); // Function UMG.UniformGridPanel.AddChildToUniformGrid // Final|Native|Public|BlueprintCallable // @ game+0x6539e74
	void SetMinDesiredSlotWidth(); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // Final|Native|Public|BlueprintCallable // @ game+0x6543d9c
	void SetSlotPadding(); // Function UMG.UniformGridPanel.SetSlotPadding // Final|Native|Public|BlueprintCallable // @ game+0x6545a04
};

// Class UMG.VerticalBox
// Size: 0x158 (Inherited: 0x148)
struct UVerticalBox : U*d519ef66f2 {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToVerticalBox(); // Function UMG.VerticalBox.AddChildToVerticalBox // Final|Native|Public|BlueprintCallable // @ game+0x6539f74
};

// Class UMG.WrapBox
// Size: 0x168 (Inherited: 0x148)
struct UWrapBox : U*d519ef66f2 {
	struct FVector2D InnerSlotPadding; // 0x148(0x08)
	float WrapWidth; // 0x150(0x04)
	bool bExplicitWrapWidth; // 0x154(0x01)
	char pad_155[0x13]; // 0x155(0x13)

	void AddChildWrapBox(); // Function UMG.WrapBox.AddChildWrapBox // Final|Native|Public|BlueprintCallable // @ game+0x653a074
	void SetInnerSlotPadding(); // Function UMG.WrapBox.SetInnerSlotPadding // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65426b0
};

// Class UMG.ProgressBar
// Size: 0x350 (Inherited: 0x130)
struct UProgressBar : UWidget {
	struct F*314a470245 WidgetStyle; // 0x130(0x1b8)
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

	void SetIsMarquee(); // Function UMG.ProgressBar.SetIsMarquee // Final|Native|Public|BlueprintCallable // @ game+0x6542ed0
	void SetPercent(); // Function UMG.ProgressBar.SetPercent // Final|Native|Public|BlueprintCallable // @ game+0x6544e00
	void SetFillColorAndOpacity(); // Function UMG.ProgressBar.SetFillColorAndOpacity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6541410
};

// Class UMG.ScrollBar
// Size: 0x670 (Inherited: 0x130)
struct UScrollBar : UWidget {
	struct F*4cc977c5e0 WidgetStyle; // 0x130(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x648(0x08)
	bool *44275b94ad; // 0x650(0x01)
	enum class EOrientation Orientation; // 0x651(0x01)
	char pad_652[0x2]; // 0x652(0x02)
	struct FVector2D Thickness; // 0x654(0x08)
	char pad_65C[0x14]; // 0x65c(0x14)

	void SetState(); // Function UMG.ScrollBar.SetState // Final|Native|Public|BlueprintCallable // @ game+0x6545aa4
};

// Class UMG.Slider
// Size: 0x428 (Inherited: 0x130)
struct USlider : UWidget {
	float Value; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	DelegateProperty ValueDelegate; // 0x138(0x10)
	struct F*3929c5f692 WidgetStyle; // 0x148(0x250)
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

	void SetStepSize(); // Function UMG.Slider.SetStepSize // Final|Native|Public|BlueprintCallable // @ game+0x6545ba0
	void GetValue(); // Function UMG.Slider.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653dd74
	void SetValue(); // Function UMG.Slider.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x65465fc
	void SetIndentHandle(); // Function UMG.Slider.SetIndentHandle // Final|Native|Public|BlueprintCallable // @ game+0x654261c
	void SetLocked(); // Function UMG.Slider.SetLocked // Final|Native|Public|BlueprintCallable // @ game+0x6543758
	void SetSliderHandleColor(); // Function UMG.Slider.SetSliderHandleColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6545958
	void SetSliderBarColor(); // Function UMG.Slider.SetSliderBarColor // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65458ac
};

// Class UMG.Spacer
// Size: 0x148 (Inherited: 0x130)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)

	void SetSize(); // Function UMG.Spacer.SetSize // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6545820
};

// Class UMG.SpinBox
// Size: 0x568 (Inherited: 0x130)
struct USpinBox : UWidget {
	float Value; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	DelegateProperty ValueDelegate; // 0x138(0x10)
	struct F*1fe5209940 WidgetStyle; // 0x148(0x310)
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
	float *9f126f9fd6; // 0x54c(0x04)
	float *e653e56344; // 0x550(0x04)
	char pad_554[0x14]; // 0x554(0x14)

	void GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d304
	void SetMinValue(); // Function UMG.SpinBox.SetMinValue // Final|Native|Public|BlueprintCallable // @ game+0x6543ffc
	void OnSpinBoxValueCommittedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void GetMinValue(); // Function UMG.SpinBox.GetMinValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d3c4
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x653a72c
	void SetMinSliderValue(); // Function UMG.SpinBox.SetMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x6543f64
	void OnSpinBoxValueChangedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x653a740
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void SetForegroundColor(); // Function UMG.SpinBox.SetForegroundColor // Final|Native|Public|BlueprintCallable // @ game+0x65417e4
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x653a77c
	void SetValue(); // Function UMG.SpinBox.SetValue // Final|Native|Public|BlueprintCallable // @ game+0x6546694
	void SetMaxValue(); // Function UMG.SpinBox.SetMaxValue // Final|Native|Public|BlueprintCallable // @ game+0x6543b48
	void GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d39c
	void GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d32c
	void SetMaxSliderValue(); // Function UMG.SpinBox.SetMaxSliderValue // Final|Native|Public|BlueprintCallable // @ game+0x6543ab0
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // Final|Native|Public|BlueprintCallable // @ game+0x653a790
	void GetValue(); // Function UMG.SpinBox.GetValue // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653dd9c
};

// Class UMG.*308410c210
// Size: 0x130 (Inherited: 0x130)
struct U*308410c210 : UWidget {

	void OnGenerateRowUObject__DelegateSignature(); // DelegateFunction UMG.*308410c210.OnGenerateRowUObject__DelegateSignature // Public|Delegate // @ game+0x3b43ac
};

// Class UMG.ListView
// Size: 0x170 (Inherited: 0x130)
struct UListView : U*308410c210 {
	float *8ba0d7a41e; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	enum class ESelectionMode *9817f06681; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty OnGenerateRowEvent; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
};

// Class UMG.TileView
// Size: 0x170 (Inherited: 0x130)
struct UTileView : U*308410c210 {
	float *99cf54ffb7; // 0x130(0x04)
	float *8ba0d7a41e; // 0x134(0x04)
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	enum class ESelectionMode *9817f06681; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty OnGenerateTileEvent; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)

	void RequestListRefresh(); // Function UMG.TileView.RequestListRefresh // Final|Native|Public|BlueprintCallable // @ game+0x653f650
	void SetItemWidth(); // Function UMG.TileView.SetItemWidth // Final|Native|Public|BlueprintCallable // @ game+0x654334c
	void SetItemHeight(); // Function UMG.TileView.SetItemHeight // Final|Native|Public|BlueprintCallable // @ game+0x6543298
};

// Class UMG.MultiLineEditableText
// Size: 0x448 (Inherited: 0x158)
struct UMultiLineEditableText : U*8506145097 {
	struct FText Text; // 0x158(0x18)
	struct FText HintText; // 0x170(0x18)
	DelegateProperty HintTextDelegate; // 0x188(0x10)
	struct F*b8dc2e8406 WidgetStyle; // 0x198(0x208)
	bool bIsReadOnly; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FSlateFontInfo Font; // 0x3a8(0x68)
	bool *3b2fa3a133; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FMulticastDelegate OnTextChanged; // 0x418(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x428(0x10)
	char pad_438[0x10]; // 0x438(0x10)

	void OnMultiLineEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x3b43ac
	void SetIsReadOnly(); // Function UMG.MultiLineEditableText.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x6543170
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x3b43ac
	void GetText(); // Function UMG.MultiLineEditableText.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653dbbc
	void SetText(); // Function UMG.MultiLineEditableText.SetText // Final|Native|Public|BlueprintCallable // @ game+0x6546020
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xce8 (Inherited: 0x158)
struct UMultiLineEditableTextBox : U*8506145097 {
	struct FText Text; // 0x158(0x18)
	struct FText HintText; // 0x170(0x18)
	DelegateProperty HintTextDelegate; // 0x188(0x10)
	struct F*0704742c93 WidgetStyle; // 0x198(0x870)
	struct F*b8dc2e8406 TextStyle; // 0xa08(0x208)
	bool bIsReadOnly; // 0xc10(0x01)
	bool *3b2fa3a133; // 0xc11(0x01)
	char pad_C12[0x6]; // 0xc12(0x06)
	struct USlateWidgetStyleAsset* Style; // 0xc18(0x08)
	struct FSlateFontInfo Font; // 0xc20(0x68)
	struct FLinearColor ForegroundColor; // 0xc88(0x10)
	struct FLinearColor BackgroundColor; // 0xc98(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xca8(0x10)
	struct FMulticastDelegate OnTextChanged; // 0xcb8(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xcc8(0x10)
	char pad_CD8[0x10]; // 0xcd8(0x10)

	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x3b43ac
	void SetText(); // Function UMG.MultiLineEditableTextBox.SetText // Final|Native|Public|BlueprintCallable // @ game+0x6546114
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x3b43ac
	void GetText(); // Function UMG.MultiLineEditableTextBox.GetText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653dc74
	void SetError(); // Function UMG.MultiLineEditableTextBox.SetError // Final|Native|Public|BlueprintCallable // @ game+0x6541218
	void SetIsReadOnly(); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // Final|Native|Public|BlueprintCallable // @ game+0x6543204
};

// Class UMG.RichTextBlock
// Size: 0x420 (Inherited: 0x158)
struct URichTextBlock : U*8506145097 {
	struct FText Text; // 0x158(0x18)
	DelegateProperty TextDelegate; // 0x170(0x10)
	struct FSlateFontInfo Font; // 0x180(0x68)
	struct FLinearColor Color; // 0x1e8(0x10)
	struct TArray<struct U*e116d8db00*> *12f2b8707a; // 0x1f8(0x10)
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

	void SetAnimateVertically(); // Function UMG.Throbber.SetAnimateVertically // Final|Native|Public|BlueprintCallable // @ game+0x653fd68
	void SetAnimateOpacity(); // Function UMG.Throbber.SetAnimateOpacity // Final|Native|Public|BlueprintCallable // @ game+0x653fca0
	void SetAnimateHorizontally(); // Function UMG.Throbber.SetAnimateHorizontally // Final|Native|Public|BlueprintCallable // @ game+0x653fbdc
	void SetNumberOfPieces(); // Function UMG.Throbber.SetNumberOfPieces // Final|Native|Public|BlueprintCallable // @ game+0x654436c
};

// Class UMG.*9c8bfa0aee
// Size: 0x380 (Inherited: 0x330)
struct U*9c8bfa0aee : UMovieSceneSequence {
	struct FMulticastDelegate OnAnimationStarted; // 0x330(0x10)
	struct FMulticastDelegate OnAnimationFinished; // 0x340(0x10)
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct TArray<struct F*df390b5e27> *49f3dd5030; // 0x358(0x10)
	struct FString *87178b4584; // 0x368(0x10)
	char pad_378[0x8]; // 0x378(0x08)

	void *4487dd5576(); // Function UMG.*9c8bfa0aee.*4487dd5576 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653c7c4
	void *ffc38c2814(); // Function UMG.*9c8bfa0aee.*ffc38c2814 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653da68
};

// Class UMG.*52046fdf98
// Size: 0x30 (Inherited: 0x30)
struct U*52046fdf98 : UBlueprintFunctionLibrary {

	void *19b5c8099e(); // Function UMG.*52046fdf98.*19b5c8099e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653f13c
	void *4de1713b79(); // Function UMG.*52046fdf98.*4de1713b79 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653cb98
	void *d6026a61e7(); // Function UMG.*52046fdf98.*d6026a61e7 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x654169c
	void *0779b85564(); // Function UMG.*52046fdf98.*0779b85564 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653b540
	void *85f02a8e18(); // Function UMG.*52046fdf98.*85f02a8e18 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x65428ec
	void *cfe6b2110e(); // Function UMG.*52046fdf98.*cfe6b2110e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653b1bc
	void *5d59acdf53(); // Function UMG.*52046fdf98.*5d59acdf53 // Final|Native|Static|Public|BlueprintCallable // @ game+0x653a31c
	void *77534a7456(); // Function UMG.*52046fdf98.*77534a7456 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x653ad54
	void *a7e269a81d(); // Function UMG.*52046fdf98.*a7e269a81d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653ab38
	void *fed81c8aff(); // Function UMG.*52046fdf98.*fed81c8aff // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653a4fc
	void *74367d7098(); // Function UMG.*52046fdf98.*74367d7098 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6547848
	void *12f7b4f568(); // Function UMG.*52046fdf98.*12f7b4f568 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6541968
	void *a7bb453194(); // Function UMG.*52046fdf98.*a7bb453194 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x653be7c
	void *318d2dc6ee(); // Function UMG.*52046fdf98.*318d2dc6ee // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653e2f8
	void ReleaseJoystickCapture(); // Function UMG.*52046fdf98.ReleaseJoystickCapture // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653eed0
	void *8ded75f688(); // Function UMG.*52046fdf98.*8ded75f688 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6542bec
	void *062289a9db(); // Function UMG.*52046fdf98.*062289a9db // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6540804
	void *d5f563df33(); // Function UMG.*52046fdf98.*d5f563df33 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653d020
	void *f5a39fe5c3(); // Function UMG.*52046fdf98.*f5a39fe5c3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653e878
	void CaptureJoystick(); // Function UMG.*52046fdf98.CaptureJoystick // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653a338
	void *cdc44af0db(); // Function UMG.*52046fdf98.*cdc44af0db // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653e568
	void *59b69b0a21(); // Function UMG.*52046fdf98.*59b69b0a21 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6542770
	void *085f470dcf(); // Function UMG.*52046fdf98.*085f470dcf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653cdc4
	void *e38bceef96(); // Function UMG.*52046fdf98.*e38bceef96 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653cc90
	void *2e4d8078b8(); // Function UMG.*52046fdf98.*2e4d8078b8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653caa4
	void Create(); // Function UMG.*52046fdf98.Create // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0xdbd018
	void *4261417ffc(); // Function UMG.*52046fdf98.*4261417ffc // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653ceb0
	void *a8e4c6e5e2(); // Function UMG.*52046fdf98.*a8e4c6e5e2 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653c630
	void *b96898ca8f(); // Function UMG.*52046fdf98.*b96898ca8f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653c190
	void *1ae65f839e(); // Function UMG.*52046fdf98.*1ae65f839e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653c2ec
	void *1ab263c22a(); // Function UMG.*52046fdf98.*1ab263c22a // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6542a50
	void *542b62e133(); // Function UMG.*52046fdf98.*542b62e133 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x653af8c
	void Handled(); // Function UMG.*52046fdf98.Handled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653dff0
	void *6e8870aae7(); // Function UMG.*52046fdf98.*6e8870aae7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x653aaa8
	void *e6395b5cdb(); // Function UMG.*52046fdf98.*e6395b5cdb // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6540804
	void *639fd4e94a(); // Function UMG.*52046fdf98.*639fd4e94a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653e6f0
	void *19a10b2f74(); // Function UMG.*52046fdf98.*19a10b2f74 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653c098
	void *280b77097b(); // Function UMG.*52046fdf98.*280b77097b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653c6cc
	void *020da1e867(); // Function UMG.*52046fdf98.*020da1e867 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65463a0
	void *ce4a580194(); // Function UMG.*52046fdf98.*ce4a580194 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653d78c
	void *ad4a4c97ec(); // Function UMG.*52046fdf98.*ad4a4c97ec // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x653bccc
	void SetMousePosition(); // Function UMG.*52046fdf98.SetMousePosition // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6544120
	void *73bfcded52(); // Function UMG.*52046fdf98.*73bfcded52 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb6bc40
	void *7dcafb2a6d(); // Function UMG.*52046fdf98.*7dcafb2a6d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653b73c
	void *b16557c8c8(); // Function UMG.*52046fdf98.*b16557c8c8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653a7cc
	void *d427565e08(); // Function UMG.*52046fdf98.*d427565e08 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653ba50
	void *484d37803a(); // Function UMG.*52046fdf98.*484d37803a // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6542ad0
	void *2ae249c21a(); // Function UMG.*52046fdf98.*2ae249c21a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653b37c
	void *6ccaf2472a(); // Function UMG.*52046fdf98.*6ccaf2472a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x653afb0
	void *0415e77c92(); // Function UMG.*52046fdf98.*0415e77c92 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653e20c
	void *d329968d73(); // Function UMG.*52046fdf98.*d329968d73 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653e470
};

// Class UMG.*f16123d368
// Size: 0x660 (Inherited: 0x470)
struct U*f16123d368 : USceneComponent {
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
	struct FHitResult *6d63ac828e; // 0x528(0x88)
	struct FVector2D *e30a25eb91; // 0x5b0(0x08)
	struct FVector2D *9a48e95322; // 0x5b8(0x08)
	struct UWidgetComponent* *e646e9ea5b; // 0x5c0(0x08)
	struct FHitResult *1aefaae501; // 0x5c8(0x88)
	bool *a48c6c812d; // 0x650(0x01)
	bool *b82462423d; // 0x651(0x01)
	bool *500a755cef; // 0x652(0x01)
	char pad_653[0xd]; // 0x653(0x0d)

	void *1aa796d149(); // Function UMG.*f16123d368.*1aa796d149 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653ca8c
	void *d02d949e1f(); // Function UMG.*f16123d368.*d02d949e1f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653d19c
	void *a651ee2bb2(); // Function UMG.*f16123d368.*a651ee2bb2 // Native|Public|BlueprintCallable // @ game+0x653f824
	void *e6cb08ff94(); // Function UMG.*f16123d368.*e6cb08ff94 // Native|Public|BlueprintCallable // @ game+0x653f270
	void *737d045969(); // Function UMG.*f16123d368.*737d045969 // Native|Public|BlueprintCallable // @ game+0x653f044
	void *d747f1cdfa(); // Function UMG.*f16123d368.*d747f1cdfa // Native|Public|BlueprintCallable // @ game+0x653ebf0
	void *ec5ae146d3(); // Function UMG.*f16123d368.*ec5ae146d3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e264
	void *1772fd0a14(); // Function UMG.*f16123d368.*1772fd0a14 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e27c
	void *b83ef8713e(); // Function UMG.*f16123d368.*b83ef8713e // Native|Public|BlueprintCallable // @ game+0x653eaa4
	void *3c7697996b(); // Function UMG.*f16123d368.*3c7697996b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6540e0c
	void *f497634e1d(); // Function UMG.*f16123d368.*f497634e1d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x653bc50
	void *5dea8c25f9(); // Function UMG.*f16123d368.*5dea8c25f9 // Native|Public|BlueprintCallable // @ game+0x653e9ac
	void *6ad6a524ab(); // Function UMG.*f16123d368.*6ad6a524ab // Native|Public|BlueprintCallable // @ game+0x653f6a8
	void *42ec00037e(); // Function UMG.*f16123d368.*42ec00037e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x653e294
};

// Class UMG.*bb709b98cc
// Size: 0x30 (Inherited: 0x30)
struct U*bb709b98cc : UBlueprintFunctionLibrary {

	void *592d94af9f(); // Function UMG.*bb709b98cc.*592d94af9f // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653ecd8
	void *3dba148229(); // Function UMG.*bb709b98cc.*3dba148229 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65473a4
	void *20b76359ee(); // Function UMG.*bb709b98cc.*20b76359ee // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6547434
	void *0f152dbe8e(); // Function UMG.*bb709b98cc.*0f152dbe8e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65475e4
	void *7d4303d58f(); // Function UMG.*bb709b98cc.*7d4303d58f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6547674
	void *8733a5e8c9(); // Function UMG.*bb709b98cc.*8733a5e8c9 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x653de5c
	void *684d67862e(); // Function UMG.*bb709b98cc.*684d67862e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65474c4
	void *e340fc228b(); // Function UMG.*bb709b98cc.*e340fc228b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6547554
	void *f52b6fce6e(); // Function UMG.*bb709b98cc.*f52b6fce6e // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x653d3ec
	void *337748a8a4(); // Function UMG.*bb709b98cc.*337748a8a4 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x653deec
	void *e32fdee2b9(); // Function UMG.*bb709b98cc.*e32fdee2b9 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x653f358
	void *f1535e1f11(); // Function UMG.*bb709b98cc.*f1535e1f11 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xd3c488
};

// Class UMG.WidgetNavigation
// Size: 0xc0 (Inherited: 0x30)
struct UWidgetNavigation : UObject {
	struct F*484ea86c50 Up; // 0x30(0x18)
	struct F*484ea86c50 Down; // 0x48(0x18)
	struct F*484ea86c50 Left; // 0x60(0x18)
	struct F*484ea86c50 Right; // 0x78(0x18)
	struct F*484ea86c50 Next; // 0x90(0x18)
	struct F*484ea86c50 Previous; // 0xa8(0x18)
};

// Class UMG.WidgetTree
// Size: 0x38 (Inherited: 0x30)
struct UWidgetTree : UObject {
	struct UWidget* *4670f2c809; // 0x30(0x08)
};


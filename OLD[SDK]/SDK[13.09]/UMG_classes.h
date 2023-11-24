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

	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // None // @ game+0x5d47050
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // None // @ game+0x5d452b4
	enum class EUINavigationRule SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // None // @ game+0x5d46a40
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // None // @ game+0x5d446b0
	void GetParent(); // Function UMG.Widget.GetParent // None // @ game+0x5d44a58
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile // None // @ game+0x5d446d8
	struct APlayerController* HasUserFocus(); // Function UMG.Widget.HasUserFocus // None // @ game+0x5d45174
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // None // @ game+0x26a108
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // None // @ game+0x5d47238
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // None // @ game+0x26a108
	struct F*387a87ac65 OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // None // @ game+0x26a108
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // None // @ game+0x9ec9e0
	void IsVisible(); // Function UMG.Widget.IsVisible // None // @ game+0x5d4564c
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // None // @ game+0x26a108
	void GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // None // @ game+0x26a108
	void IsHovered(); // Function UMG.Widget.IsHovered // None // @ game+0x5d45384
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // None // @ game+0x26a108
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // None // @ game+0x5d46a2c
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // None // @ game+0x5d448ac
	void SetCursor(); // Function UMG.Widget.SetCursor // None // @ game+0x5d46628
	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // None // @ game+0x5d472c4
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // None // @ game+0x26a108
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // None // @ game+0x26a108
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // None // @ game+0x5d46994
	void SetToolTip(); // Function UMG.Widget.SetToolTip // None // @ game+0x5d47368
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // None // @ game+0x5d44f90
	struct FString GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // None // @ game+0x26a108
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText // None // @ game+0x5d473f8
	void SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // None // @ game+0x5d464b8
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // None // @ game+0xcb5834
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // None // @ game+0x26a108
	void GetVisibility(); // Function UMG.Widget.GetVisibility // None // @ game+0x5d44d08
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // None // @ game+0x5d44edc
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // None // @ game+0x5d44850
	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // None // @ game+0x26a108
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // None // @ game+0x26a108
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // None // @ game+0x26a108
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // None // @ game+0x26a108
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale // None // @ game+0x5d470f0
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // None // @ game+0x26a108
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus // None // @ game+0x5d474d4
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // None // @ game+0x26a108
	void HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // None // @ game+0x5d45214
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // None // @ game+0x5d446c4
	void ResetCursor(); // Function UMG.Widget.ResetCursor // None // @ game+0x5d45f1c
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // None // @ game+0x5d45030
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // None // @ game+0x5d4487c
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // None // @ game+0x5d449ec
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // None // @ game+0x5d450d4
	void SetVisibility(); // Function UMG.Widget.SetVisibility // None // @ game+0x63db54
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // None // @ game+0x5672ae4
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear // None // @ game+0x5d47194
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

	struct F*387a87ac65 OnMouseButtonDown(); // Function UMG.UserWidget.OnMouseButtonDown // None // @ game+0x26a108
	void SetForegroundColor(); // Function UMG.UserWidget.SetForegroundColor // None // @ game+0x5d46764
	void GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // None // @ game+0x5d448d0
	void OnMouseWheel(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnMouseWheel // None // @ game+0x26a108
	void SetAnchorsInViewport(); // Function UMG.UserWidget.SetAnchorsInViewport // None // @ game+0x5d46594
	void OnAnimationFinished(); // Function UMG.UserWidget.OnAnimationFinished // None // @ game+0x671ad8
	void GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // None // @ game+0x5d44794
	void Destruct(); // Function UMG.UserWidget.Destruct // None // @ game+0x26a108
	void GetOwningPlayer(); // Function UMG.UserWidget.GetOwningPlayer // None // @ game+0xcb5834
	float PlayAnimationTo(float EndAtTime, enum class EUMGSequencePlayMode PlayMode); // Function UMG.UserWidget.PlayAnimationTo // None // @ game+0x5d45c3c
	void Tick(); // Function UMG.UserWidget.Tick // None // @ game+0x26a108
	struct U*6b11b3bf02* PauseAnimation(); // Function UMG.UserWidget.PauseAnimation // None // @ game+0x5d45b9c
	void AddToViewport(); // Function UMG.UserWidget.AddToViewport // None // @ game+0x5d44080
	void IsInteractable(); // Function UMG.UserWidget.IsInteractable // None // @ game+0x26a108
	void ReverseAnimation(); // Function UMG.UserWidget.ReverseAnimation // None // @ game+0x5d45f30
	struct F*387a87ac65 OnTouchMoved(); // Function UMG.UserWidget.OnTouchMoved // None // @ game+0x26a108
	void SetColorAndOpacity(); // Function UMG.UserWidget.SetColorAndOpacity // None // @ game+0x9a87fc
	void PlaySound(); // Function UMG.UserWidget.PlaySound // None // @ game+0x5d45e5c
	struct FControllerEvent OnControllerAnalogValueChanged(); // Function UMG.UserWidget.OnControllerAnalogValueChanged // None // @ game+0x26a108
	struct F*387a87ac65 OnDragLeave(); // Function UMG.UserWidget.OnDragLeave // None // @ game+0x26a108
	void OnKeyDown(struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // None // @ game+0x26a108
	struct F*646dd34860 OnMotionDetected(); // Function UMG.UserWidget.OnMotionDetected // None // @ game+0x26a108
	void StopAnimation(); // Function UMG.UserWidget.StopAnimation // None // @ game+0xae45b0
	void OnMouseButtonUp(struct F*387a87ac65 MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // None // @ game+0x26a108
	struct F*387a87ac65 OnDragDetected(); // Function UMG.UserWidget.OnDragDetected // None // @ game+0x26a108
	void SetOwningLocalPlayer(); // Function UMG.UserWidget.SetOwningLocalPlayer // None // @ game+0x5d46ca0
	void OnDragCancelled(struct F*387a87ac65 PointerEvent); // Function UMG.UserWidget.OnDragCancelled // None // @ game+0x26a108
	void SetDesiredSizeInViewport(); // Function UMG.UserWidget.SetDesiredSizeInViewport // None // @ game+0x5d466bc
	void IsInViewport(); // Function UMG.UserWidget.IsInViewport // None // @ game+0x5d448d0
	void SetInputActionBlocking(); // Function UMG.UserWidget.SetInputActionBlocking // None // @ game+0x5d46858
	struct FGeometry OnMouseMove(struct F*387a87ac65 MouseEvent); // Function UMG.UserWidget.OnMouseMove // None // @ game+0x26a108
	void ListenForInputAction(struct FName ActionName, bool bConsume); // Function UMG.UserWidget.ListenForInputAction // None // @ game+0x5d45670
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // None // @ game+0x5d47564
	void OnMouseLeave(); // Function UMG.UserWidget.OnMouseLeave // None // @ game+0x26a108
	void GetWidgetComponent(); // Function UMG.UserWidget.GetWidgetComponent // None // @ game+0x5d44d2c
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // None // @ game+0x5672ae4
	void SetAlignmentInViewport(); // Function UMG.UserWidget.SetAlignmentInViewport // None // @ game+0x5d4641c
	struct F*1a00d10a70 OnKeyChar(); // Function UMG.UserWidget.OnKeyChar // None // @ game+0x26a108
	void AddToPlayerScreen(int32 ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // None // @ game+0x5d43fe0
	void OnDragEnter(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnDragEnter // None // @ game+0x26a108
	void SetInputActionPriority(); // Function UMG.UserWidget.SetInputActionPriority // None // @ game+0x5d468fc
	struct FName IsListeningForInputAction(); // Function UMG.UserWidget.IsListeningForInputAction // None // @ game+0x5d453a8
	struct FName StopListeningForInputAction(); // Function UMG.UserWidget.StopListeningForInputAction // None // @ game+0x5d4758c
	void IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // None // @ game+0x5d45368
	struct UDragDropOperation* OnDrop(); // Function UMG.UserWidget.OnDrop // None // @ game+0x26a108
	struct FFocusEvent OnFocusReceived(); // Function UMG.UserWidget.OnFocusReceived // None // @ game+0x26a108
	void IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // None // @ game+0x5d45368
	enum class EUMGSequencePlayMode PlayAnimation(); // Function UMG.UserWidget.PlayAnimation // None // @ game+0xbbd558
	void GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // None // @ game+0x5d4476c
	void OnTouchStarted(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnTouchStarted // None // @ game+0x26a108
	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // None // @ game+0x5d47670
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // None // @ game+0x5d47578
	struct FKeyEvent OnKeyUp(); // Function UMG.UserWidget.OnKeyUp // None // @ game+0x26a108
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // None // @ game+0x5d45f08
	void SetPadding(); // Function UMG.UserWidget.SetPadding // None // @ game+0x5d46df8
	struct FControllerEvent OnControllerButtonPressed(); // Function UMG.UserWidget.OnControllerButtonPressed // None // @ game+0x26a108
	void OnPaint(); // Function UMG.UserWidget.OnPaint // None // @ game+0x26a108
	void SetOwningPlayer(); // Function UMG.UserWidget.SetOwningPlayer // None // @ game+0x5d46d4c
	struct F*387a87ac65 OnTouchEnded(); // Function UMG.UserWidget.OnTouchEnded // None // @ game+0x26a108
	struct FControllerEvent OnControllerButtonReleased(); // Function UMG.UserWidget.OnControllerButtonReleased // None // @ game+0x26a108
	void OnTouchGesture(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnTouchGesture // None // @ game+0x26a108
	struct UDragDropOperation* OnDragOver(); // Function UMG.UserWidget.OnDragOver // None // @ game+0x26a108
	void OnMouseEnter(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnMouseEnter // None // @ game+0x26a108
	void OnFocusLost(); // Function UMG.UserWidget.OnFocusLost // None // @ game+0x26a108
	void FinishStoppedSequencePlayers(); // Function UMG.UserWidget.FinishStoppedSequencePlayers // None // @ game+0x5d4469c
	struct FVector2D SetPositionInViewport(); // Function UMG.UserWidget.SetPositionInViewport // None // @ game+0x5d46f78
	void SetNumLoopsToPlay(); // Function UMG.UserWidget.SetNumLoopsToPlay // None // @ game+0x5d46b78
	struct F*71b15ba99a OnAnalogValueChanged(); // Function UMG.UserWidget.OnAnalogValueChanged // None // @ game+0x26a108
	void OnAnimationStarted(); // Function UMG.UserWidget.OnAnimationStarted // None // @ game+0x671fb0
	void GetAnimationCurrentTime(struct U*6b11b3bf02* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // None // @ game+0x5d447b0
	void IsAnimationPlaying(struct U*6b11b3bf02* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // None // @ game+0x5d452c8
	void GetOwningLocalPlayer(); // Function UMG.UserWidget.GetOwningLocalPlayer // None // @ game+0x5d44a10
	struct F*387a87ac65 OnMouseButtonDoubleClick(); // Function UMG.UserWidget.OnMouseButtonDoubleClick // None // @ game+0x26a108
	void Construct(); // Function UMG.UserWidget.Construct // None // @ game+0x26a108
	void GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // None // @ game+0x5d44a34
	void PreConstruct(); // Function UMG.UserWidget.PreConstruct // None // @ game+0x26a108
	struct U*6b11b3bf02* SetPlaybackSpeed(); // Function UMG.UserWidget.SetPlaybackSpeed // None // @ game+0x5d46e98
	void OnPreviewMouseButtonDown(struct FGeometry MyGeometry); // Function UMG.UserWidget.OnPreviewMouseButtonDown // None // @ game+0x26a108
	struct FKeyEvent OnPreviewKeyDown(); // Function UMG.UserWidget.OnPreviewKeyDown // None // @ game+0x26a108
};

// Class UMG.WidgetComponent
// Size: 0xcc0 (Inherited: 0xaf0)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0xaf0(0x01)
	enum class EWidgetTimingPolicy *93ed1dacee; // 0xaf1(0x01)
	char pad_AF2[0x6]; // 0xaf2(0x06)
	struct UClass* WidgetClass; // 0xaf8(0x08)
	struct FIntPoint DrawSize; // 0xb00(0x08)
	bool *3139527671; // 0xb08(0x01)
	bool *4df4feeabc; // 0xb09(0x01)
	char pad_B0A[0x2]; // 0xb0a(0x02)
	float *ed30897737; // 0xb0c(0x04)
	char pad_B10[0x8]; // 0xb10(0x08)
	struct FIntPoint *4c52fc6bc6; // 0xb18(0x08)
	bool *d5a58470bb; // 0xb20(0x01)
	char pad_B21[0x3]; // 0xb21(0x03)
	struct FVector2D Pivot; // 0xb24(0x08)
	bool *f294fafcfd; // 0xb2c(0x01)
	bool *1bcf541074; // 0xb2d(0x01)
	char pad_B2E[0x2]; // 0xb2e(0x02)
	struct ULocalPlayer* *0d8acd893f; // 0xb30(0x08)
	struct FLinearColor BackgroundColor; // 0xb38(0x10)
	struct FLinearColor TintColorAndOpacity; // 0xb48(0x10)
	float OpacityFromTexture; // 0xb58(0x04)
	enum class EWidgetBlendMode BlendMode; // 0xb5c(0x01)
	bool bIsTwoSided; // 0xb5d(0x01)
	bool *f855583de2; // 0xb5e(0x01)
	char pad_B5F[0x1]; // 0xb5f(0x01)
	struct UUserWidget* Widget; // 0xb60(0x08)
	char pad_B68[0x20]; // 0xb68(0x20)
	struct UBodySetup* BodySetup; // 0xb88(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0xb90(0x08)
	struct UMaterialInterface* *4648727e51; // 0xb98(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0xba0(0x08)
	struct UMaterialInterface* *7b4afd8521; // 0xba8(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0xbb0(0x08)
	struct UMaterialInterface* *327af41629; // 0xbb8(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0xbc0(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0xbc8(0x08)
	bool *e603d7efb9; // 0xbd0(0x01)
	bool *506ac624e6; // 0xbd1(0x01)
	char pad_BD2[0x6]; // 0xbd2(0x06)
	struct FName *ebd5737b6f; // 0xbd8(0x08)
	int32 *ddc39efeeb; // 0xbe0(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0xbe4(0x01)
	char pad_BE5[0x3]; // 0xbe5(0x03)
	float CylinderArcAngle; // 0xbe8(0x04)
	char pad_BEC[0x24]; // 0xbec(0x24)
	struct FVector2D FixedScreenSize; // 0xc10(0x08)
	enum class EWidgetForcedLOD ForcedLOD; // 0xc18(0x01)
	bool bUseLOD; // 0xc19(0x01)
	bool bAutoSetFixedScreenSize; // 0xc1a(0x01)
	char pad_C1B[0x5]; // 0xc1b(0x05)
	struct TArray<float> LODScreenSizes; // 0xc20(0x10)
	float LODUpdateInterval; // 0xc30(0x04)
	float LODNextUpdateTime; // 0xc34(0x04)
	float LODLastScreenSize; // 0xc38(0x04)
	float LODScale; // 0xc3c(0x04)
	float *d839619bf7; // 0xc40(0x04)
	bool bShouldRenderWidget; // 0xc44(0x01)
	bool bAlwaysVisibleWidget; // 0xc45(0x01)
	char pad_C46[0x2]; // 0xc46(0x02)
	struct TMap<struct UPrimitiveComponent*, struct UMaterialInstanceDynamic*> *db8ec4d983; // 0xc48(0x50)
	struct TArray<struct UMeshComponent*> *7fa26e2f3b; // 0xc98(0x10)
	struct UTextureRenderTarget2D* OverrideRenderTarget; // 0xca8(0x08)
	struct USceneComponent* *8561f211bc; // 0xcb0(0x08)
	char pad_CB8[0x8]; // 0xcb8(0x08)

	void *40f1c546c8(); // Function UMG.WidgetComponent.*40f1c546c8 // None // @ game+0x5d4dd50
	void *599d22b181(); // Function UMG.WidgetComponent.*599d22b181 // None // @ game+0x5d4caf4
	void *a58027129b(); // Function UMG.WidgetComponent.*a58027129b // None // @ game+0x5d556f8
	void *8e9522701f(); // Function UMG.WidgetComponent.*8e9522701f // None // @ game+0x5d54ea8
	void *2306e43359(); // Function UMG.WidgetComponent.*2306e43359 // None // @ game+0x7ab7e0
	float *fd9fc96958(); // Function UMG.WidgetComponent.*fd9fc96958 // None // @ game+0x5d4aec4
	void *7c6ab456c6(); // Function UMG.WidgetComponent.*7c6ab456c6 // None // @ game+0x5d49de4
	void *53ed899efd(); // Function UMG.WidgetComponent.*53ed899efd // None // @ game+0x5d4f2ac
	void *25dab87525(); // Function UMG.WidgetComponent.*25dab87525 // None // @ game+0x5d4ba24
	void *91dfbe81ff(); // Function UMG.WidgetComponent.*91dfbe81ff // None // @ game+0x5d4a3dc
	void *ef1ae06482(); // Function UMG.WidgetComponent.*ef1ae06482 // None // @ game+0x563ccbc
	void *a2fd1e1f6b(); // Function UMG.WidgetComponent.*a2fd1e1f6b // None // @ game+0x5d4f5b4
	void *3ccf2a3054(); // Function UMG.WidgetComponent.*3ccf2a3054 // None // @ game+0x5d4f054
	void *1525f9a7d5(); // Function UMG.WidgetComponent.*1525f9a7d5 // None // @ game+0x5d4a594
	void *f8e07dfcd5(); // Function UMG.WidgetComponent.*f8e07dfcd5 // None // @ game+0x5d4b430
	void *4f2008772e(); // Function UMG.WidgetComponent.*4f2008772e // None // @ game+0x5d4b3b4
	void *3d501f1b19(); // Function UMG.WidgetComponent.*3d501f1b19 // None // @ game+0x5d4b408
	void *bb3c4b2536(); // Function UMG.WidgetComponent.*bb3c4b2536 // None // @ game+0x5d5332c
	void *7c6609fddf(); // Function UMG.WidgetComponent.*7c6609fddf // None // @ game+0x5d4be8c
	void *3bc3f8847f(); // Function UMG.WidgetComponent.*3bc3f8847f // None // @ game+0x5d4a744
	void *f8fdb5f101(int32 ElemIndex); // Function UMG.WidgetComponent.*f8fdb5f101 // None // @ game+0x5d48714
	void *ebe4beb900(); // Function UMG.WidgetComponent.*ebe4beb900 // None // @ game+0x5d52228
	void *8710155628(); // Function UMG.WidgetComponent.*8710155628 // None // @ game+0x5d54e14
	void *a9ef2cf827(); // Function UMG.WidgetComponent.*a9ef2cf827 // None // @ game+0x5d4ec38
	void *d58af63bc9(struct UPrimitiveComponent* TargetComp); // Function UMG.WidgetComponent.*d58af63bc9 // None // @ game+0x5d47fbc
	void *5879e3362b(); // Function UMG.WidgetComponent.*5879e3362b // None // @ game+0x5d4db84
};

// Class UMG.*c1ef4cc603
// Size: 0x140 (Inherited: 0x128)
struct U*c1ef4cc603 : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // None // @ game+0x5d4bd50
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // None // @ game+0x5d4a2b4
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // None // @ game+0x5d4a354
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // None // @ game+0x5d4d15c
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // None // @ game+0x5d4a214
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // None // @ game+0x5d4d0bc
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // None // @ game+0x5d4775c
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // None // @ game+0x5d483fc
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // None // @ game+0x5d4bd34
};

// Class UMG.*7fef63158a
// Size: 0x140 (Inherited: 0x140)
struct U*7fef63158a : U*c1ef4cc603 {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // None // @ game+0x5d4bd50
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // None // @ game+0x5d4a2b4
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // None // @ game+0x5d4a354
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // None // @ game+0x5d4d15c
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // None // @ game+0x5d4a214
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // None // @ game+0x5d4d0bc
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // None // @ game+0x5d4775c
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // None // @ game+0x5d483fc
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // None // @ game+0x5d4bd34
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

	void SetColorAndOpacity(); // Function UMG.Button.SetColorAndOpacity // None // @ game+0x5d4e7f4
	void IsPressed(); // Function UMG.Button.IsPressed // None // @ game+0x5d4bf74
	void SetStyle(); // Function UMG.Button.SetStyle // None // @ game+0x5d53af8
	void SetBackgroundColor(); // Function UMG.Button.SetBackgroundColor // None // @ game+0x5d4dcb8
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

	void GetText(); // Function UMG.EditableText.GetText // None // @ game+0x5d4b750
	void SetIsReadOnly(); // Function UMG.EditableText.SetIsReadOnly // None // @ game+0x5d50cfc
	void SetIsPassword(); // Function UMG.EditableText.SetIsPassword // None // @ game+0x5d50c40
	void SetHintText(); // Function UMG.EditableText.SetHintText // None // @ game+0x5d4f7e8
	void SetText(); // Function UMG.EditableText.SetText // None // @ game+0x5d53bc8
	void OnEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // None // @ game+0x26a108
	struct FText OnEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // None // @ game+0x26a108
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

	void DragCancelled(); // Function UMG.DragDropOperation.DragCancelled // None // @ game+0x5d44214
	void Dragged(); // Function UMG.DragDropOperation.Dragged // None // @ game+0x5d44308
	void Drop(); // Function UMG.DragDropOperation.Drop // None // @ game+0x5d443fc
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

	void SetShadowOffset(); // Function UMG.TextBlock.SetShadowOffset // None // @ game+0x5d532a0
	void SetColorAndOpacity(); // Function UMG.TextBlock.SetColorAndOpacity // None // @ game+0x59f30c
	void SetJustification(); // Function UMG.TextBlock.SetJustification // None // @ game+0x5d510dc
	void SetFont(); // Function UMG.TextBlock.SetFont // None // @ game+0x5d4f394
	void SetShadowColorAndOpacity(); // Function UMG.TextBlock.SetShadowColorAndOpacity // None // @ game+0x5d53208
	void SetMinDesiredWidth(); // Function UMG.TextBlock.SetMinDesiredWidth // None // @ game+0x5d51ba8
	void SetWrapTextAt(); // Function UMG.TextBlock.SetWrapTextAt // None // @ game+0x5d54f48
	void SetText(); // Function UMG.TextBlock.SetText // None // @ game+0x5d53f98
	void GetText(); // Function UMG.TextBlock.GetText // None // @ game+0x5d4b9b0
	void SetOpacity(); // Function UMG.TextBlock.SetOpacity // None // @ game+0x5d52190
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

	void FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // None // @ game+0x5d4990c
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // None // @ game+0x5d4852c
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // None // @ game+0x26a108
	void AddOption(); // Function UMG.ComboBoxString.AddOption // None // @ game+0x5d47efc
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // None // @ game+0x26a108
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // None // @ game+0x5d4cae0
	void GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // None // @ game+0x5d4b39c
	void SetSelectedOption(); // Function UMG.ComboBoxString.SetSelectedOption // None // @ game+0x5d5310c
	void RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // None // @ game+0x5d4d1fc
	void GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // None // @ game+0x5d4b62c
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // None // @ game+0x5d48540
	int32 GetOptionAtIndex(); // Function UMG.ComboBoxString.GetOptionAtIndex // None // @ game+0x5d4b25c
};

// Class UMG.WidgetSwitcher
// Size: 0x158 (Inherited: 0x140)
struct UWidgetSwitcher : U*c1ef4cc603 {
	int32 ActiveWidgetIndex; // 0x140(0x04)
	char pad_144[0x14]; // 0x144(0x14)

	void GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // None // @ game+0x5d49a00
	void SetActiveWidget(); // Function UMG.WidgetSwitcher.SetActiveWidget // None // @ game+0x5d4d648
	void GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // None // @ game+0x5d4b1f8
	void SetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // None // @ game+0xc89b0c
	int32 GetWidgetAtIndex(); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // None // @ game+0x5d4a214
};

// Class UMG.*18ce653e55
// Size: 0x48 (Inherited: 0x28)
struct U*18ce653e55 : U*4471bd9586 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFail; // 0x38(0x10)

	struct FString *3192ce7cbc(); // Function UMG.*18ce653e55.*3192ce7cbc // None // @ game+0x5d44118
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
// Size: 0x428 (Inherited: 0x3b8)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x3b8(0x08)
	bool *b9f37c028c; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct TArray<struct F*5ca9fc20d0> Bindings; // 0x3c8(0x10)
	struct TArray<struct U*6b11b3bf02*> Animations; // 0x3d8(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3e8(0x10)
	bool *bc97c9e972; // 0x3f8(0x01)
	bool *32de228706; // 0x3f9(0x01)
	bool *b23d513faf; // 0x3fa(0x01)
	char pad_3FB[0x5]; // 0x3fb(0x05)
	struct UUserWidget* *c3f675d351; // 0x400(0x20)
	struct UUserWidget* Template; // 0x420(0x08)
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

	void SetHorizontalAlignment(); // Function UMG.*73eecc61e4.SetHorizontalAlignment // None // @ game+0x5d4fa64
	void SetVerticalAlignment(); // Function UMG.*73eecc61e4.SetVerticalAlignment // None // @ game+0x5d54550
	void SetPadding(); // Function UMG.*73eecc61e4.SetPadding // None // @ game+0x5d52368
};

// Class UMG.*26255869a0
// Size: 0x60 (Inherited: 0x38)
struct U*26255869a0 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetHorizontalAlignment(); // Function UMG.*26255869a0.SetHorizontalAlignment // None // @ game+0x5d4fb8c
	void SetVerticalAlignment(); // Function UMG.*26255869a0.SetVerticalAlignment // None // @ game+0x5d54678
	void SetPadding(); // Function UMG.*26255869a0.SetPadding // None // @ game+0x5d524a8
};

// Class UMG.*9800899153
// Size: 0x60 (Inherited: 0x38)
struct U*9800899153 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetHorizontalAlignment(); // Function UMG.*9800899153.SetHorizontalAlignment // None // @ game+0x5d4fc20
	void SetVerticalAlignment(); // Function UMG.*9800899153.SetVerticalAlignment // None // @ game+0x5d5470c
	void SetPadding(); // Function UMG.*9800899153.SetPadding // None // @ game+0x5d52548
};

// Class UMG.*a08fc6dc58
// Size: 0x70 (Inherited: 0x38)
struct U*a08fc6dc58 : UPanelSlot {
	struct F*ef6a4066ac LayoutData; // 0x38(0x28)
	bool bAutoSize; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32 ZOrder; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)

	void SetOffsets(); // Function UMG.*a08fc6dc58.SetOffsets // None // @ game+0xb1db94
	void *61af8cd53b(); // Function UMG.*a08fc6dc58.*61af8cd53b // None // @ game+0x5d4bc6c
	void SetAnchors(); // Function UMG.*a08fc6dc58.SetAnchors // None // @ game+0x5d4d804
	void SetPosition(); // Function UMG.*a08fc6dc58.SetPosition // None // @ game+0x5d52c20
	void *d2b4c01368(); // Function UMG.*a08fc6dc58.*d2b4c01368 // None // @ game+0x5d49db4
	void SetAlignment(); // Function UMG.*a08fc6dc58.SetAlignment // None // @ game+0x5d4d6dc
	void GetSize(); // Function UMG.*a08fc6dc58.GetSize // None // @ game+0x5d4b700
	void SetAutoSize(); // Function UMG.*a08fc6dc58.SetAutoSize // None // @ game+0x5d4dc24
	void SetMinimum(); // Function UMG.*a08fc6dc58.SetMinimum // None // @ game+0x5d51d70
	void GetAlignment(); // Function UMG.*a08fc6dc58.GetAlignment // None // @ game+0x5d49a24
	void GetPosition(); // Function UMG.*a08fc6dc58.GetPosition // None // @ game+0x5d4b3d8
	void *9e0cf81a90(); // Function UMG.*a08fc6dc58.*9e0cf81a90 // None // @ game+0x5d49dfc
	void *3fc48845a7(); // Function UMG.*a08fc6dc58.*3fc48845a7 // None // @ game+0x5d4b21c
	void SetLayout(); // Function UMG.*a08fc6dc58.SetLayout // None // @ game+0x5d5138c
	void GetLayout(); // Function UMG.*a08fc6dc58.GetLayout // None // @ game+0x5d4ae98
	void SetMaximum(); // Function UMG.*a08fc6dc58.SetMaximum // None // @ game+0x5d518bc
	void SetZOrder(); // Function UMG.*a08fc6dc58.SetZOrder // None // @ game+0x5d54fe0
	void SetSize(); // Function UMG.*a08fc6dc58.SetSize // None // @ game+0x5d533bc
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

	void SetColumn(); // Function UMG.GridSlot.SetColumn // None // @ game+0x5d4e88c
	void SetVerticalAlignment(); // Function UMG.GridSlot.SetVerticalAlignment // None // @ game+0x5d547a0
	void SetRowSpan(); // Function UMG.GridSlot.SetRowSpan // None // @ game+0x5d52e68
	void SetHorizontalAlignment(); // Function UMG.GridSlot.SetHorizontalAlignment // None // @ game+0x5d4fcb4
	void SetRow(); // Function UMG.GridSlot.SetRow // None // @ game+0x5d52d4c
	void SetPadding(); // Function UMG.GridSlot.SetPadding // None // @ game+0xad7b74
	void SetLayer(); // Function UMG.GridSlot.SetLayer // None // @ game+0x5d51264
	void SetColumnSpan(); // Function UMG.GridSlot.SetColumnSpan // None // @ game+0x5d4e9a8
};

// Class UMG.*da2dead950
// Size: 0x60 (Inherited: 0x38)
struct U*da2dead950 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	struct FSlateChildSize Size; // 0x48(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetSize(); // Function UMG.*da2dead950.SetSize // None // @ game+0x5d53448
	void SetVerticalAlignment(); // Function UMG.*da2dead950.SetVerticalAlignment // None // @ game+0x5d54830
	void SetPadding(); // Function UMG.*da2dead950.SetPadding // None // @ game+0x5d525e8
	void SetHorizontalAlignment(); // Function UMG.*da2dead950.SetHorizontalAlignment // None // @ game+0x5d4fd44
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

	void SetHorizontalAlignment(); // Function UMG.*c19dcb4813.SetHorizontalAlignment // None // @ game+0x5d4fdd4
	void SetZOrder(); // Function UMG.*c19dcb4813.SetZOrder // None // @ game+0x5d55070
	void SetPadding(); // Function UMG.*c19dcb4813.SetPadding // None // @ game+0x5d52688
	void SetVerticalAlignment(); // Function UMG.*c19dcb4813.SetVerticalAlignment // None // @ game+0x5d548c0
	void *61af8cd53b(); // Function UMG.*c19dcb4813.*61af8cd53b // None // @ game+0x5d4bc90
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

	void SetHorizontalAlignment(); // Function UMG.*2e2a015a45.SetHorizontalAlignment // None // @ game+0x5d4fe64
	void SetVerticalAlignment(); // Function UMG.*2e2a015a45.SetVerticalAlignment // None // @ game+0x5d54950
	void SetPadding(); // Function UMG.*2e2a015a45.SetPadding // None // @ game+0x5d52728
};

// Class UMG.*e33191b74a
// Size: 0x58 (Inherited: 0x38)
struct U*e33191b74a : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	char pad_49[0xf]; // 0x49(0x0f)

	void SetPadding(); // Function UMG.*e33191b74a.SetPadding // None // @ game+0x5d527bc
	void SetHorizontalAlignment(); // Function UMG.*e33191b74a.SetHorizontalAlignment // None // @ game+0x5d4fef8
};

// Class UMG.*e4dae0adf5
// Size: 0x60 (Inherited: 0x38)
struct U*e4dae0adf5 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetHorizontalAlignment(); // Function UMG.*e4dae0adf5.SetHorizontalAlignment // None // @ game+0x5d4ff88
	void SetVerticalAlignment(); // Function UMG.*e4dae0adf5.SetVerticalAlignment // None // @ game+0x5d549e4
	void SetPadding(); // Function UMG.*e4dae0adf5.SetPadding // None // @ game+0x5d5285c
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

	void SetColumn(); // Function UMG.UniformGridSlot.SetColumn // None // @ game+0x5d4e91c
	void SetVerticalAlignment(); // Function UMG.UniformGridSlot.SetVerticalAlignment // None // @ game+0x5d54a78
	void SetRow(); // Function UMG.UniformGridSlot.SetRow // None // @ game+0x5d52ddc
	void SetHorizontalAlignment(); // Function UMG.UniformGridSlot.SetHorizontalAlignment // None // @ game+0x5d5001c
};

// Class UMG.*1db1bb498a
// Size: 0x60 (Inherited: 0x38)
struct U*1db1bb498a : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	struct FSlateChildSize Size; // 0x48(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetSize(); // Function UMG.*1db1bb498a.SetSize // None // @ game+0x5d53588
	void SetVerticalAlignment(); // Function UMG.*1db1bb498a.SetVerticalAlignment // None // @ game+0x5d54830
	void SetPadding(); // Function UMG.*1db1bb498a.SetPadding // None // @ game+0x5d525e8
	void SetHorizontalAlignment(); // Function UMG.*1db1bb498a.SetHorizontalAlignment // None // @ game+0x5d4fd44
};

// Class UMG.*c5180b4275
// Size: 0x58 (Inherited: 0x38)
struct U*c5180b4275 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0xe]; // 0x4a(0x0e)

	void SetHorizontalAlignment(); // Function UMG.*c5180b4275.SetHorizontalAlignment // None // @ game+0x5d4fdd4
	void SetVerticalAlignment(); // Function UMG.*c5180b4275.SetVerticalAlignment // None // @ game+0x5d548c0
	void SetPadding(); // Function UMG.*c5180b4275.SetPadding // None // @ game+0x5d527bc
};

// Class UMG.*86d54e13f0
// Size: 0x160 (Inherited: 0x140)
struct U*86d54e13f0 : U*7fef63158a {
	bool bDoubleClickTogglesFullscreen; // 0x140(0x01)
	char pad_141[0x1f]; // 0x141(0x1f)

	void SetHorizontalAlignment(); // Function UMG.*86d54e13f0.SetHorizontalAlignment // None // @ game+0x5d500ac
	void SetVerticalAlignment(); // Function UMG.*86d54e13f0.SetVerticalAlignment // None // @ game+0x5d54b08
	void SetPadding(); // Function UMG.*86d54e13f0.SetPadding // None // @ game+0x5d528fc
};

// Class UMG.*272bb23fb7
// Size: 0x60 (Inherited: 0x38)
struct U*272bb23fb7 : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetHorizontalAlignment(); // Function UMG.*272bb23fb7.SetHorizontalAlignment // None // @ game+0x5d5013c
	void SetVerticalAlignment(); // Function UMG.*272bb23fb7.SetVerticalAlignment // None // @ game+0x5d54b98
	void SetPadding(); // Function UMG.*272bb23fb7.SetPadding // None // @ game+0x5d5299c
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

	void SetFillEmptySpace(); // Function UMG.*e04e139cb4.SetFillEmptySpace // None // @ game+0x5d4f180
	void SetHorizontalAlignment(); // Function UMG.*e04e139cb4.SetHorizontalAlignment // None // @ game+0x5d501d0
	void SetPadding(); // Function UMG.*e04e139cb4.SetPadding // None // @ game+0x5d52a3c
	void SetFillSpanWhenLessThan(); // Function UMG.*e04e139cb4.SetFillSpanWhenLessThan // None // @ game+0x5d4f214
	void SetVerticalAlignment(); // Function UMG.*e04e139cb4.SetVerticalAlignment // None // @ game+0x5d54c2c
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

	void SetPeriod(); // Function UMG.CircularThrobber.SetPeriod // None // @ game+0x5d52b74
	void SetRadius(); // Function UMG.CircularThrobber.SetRadius // None // @ game+0x5d52cac
	void SetNumberOfPieces(); // Function UMG.CircularThrobber.SetNumberOfPieces // None // @ game+0x5d51fa0
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

	void SetText(); // Function UMG.EditableTextBox.SetText // None // @ game+0x5d53cbc
	void GetText(); // Function UMG.EditableTextBox.GetText // None // @ game+0x5d4b7c4
	void OnEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // None // @ game+0x26a108
	void SetHintText(); // Function UMG.EditableTextBox.SetHintText // None // @ game+0x5d4f8dc
	struct FText OnEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // None // @ game+0x26a108
	void SetIsReadOnly(); // Function UMG.EditableTextBox.SetIsReadOnly // None // @ game+0x5d50d90
	void SetError(); // Function UMG.EditableTextBox.SetError // None // @ game+0x5d4ed8c
	void HasError(); // Function UMG.EditableTextBox.HasError // None // @ game+0x5d4bdf0
	void ClearError(); // Function UMG.EditableTextBox.ClearError // None // @ game+0x5d48410
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

	void SetIsExpanded(); // Function UMG.ExpandableArea.SetIsExpanded // None // @ game+0x5d50a74
	void SetIsExpanded_Animated(); // Function UMG.ExpandableArea.SetIsExpanded_Animated // None // @ game+0x5d50b10
	void GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // None // @ game+0x5d4ac94
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

	void SetBrushFromAsset(); // Function UMG.Image.SetBrushFromAsset // None // @ game+0x5d4e1f0
	void SetBrush(); // Function UMG.Image.SetBrush // None // @ game+0x5d4e064
	void SetColorAndOpacity(); // Function UMG.Image.SetColorAndOpacity // None // @ game+0x9edc6c
	void SetBrushFromTexture(); // Function UMG.Image.SetBrushFromTexture // None // @ game+0xabaa3c
	void SetOpacity(); // Function UMG.Image.SetOpacity // None // @ game+0x5d520f8
	void SetBrushFromMaterial(); // Function UMG.Image.SetBrushFromMaterial // None // @ game+0x5d4e310
	void SetBrushFromTextureDynamic(struct U*ec6d9c8af4* Texture); // Function UMG.Image.SetBrushFromTextureDynamic // None // @ game+0x5d4e3a0
	void GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // None // @ game+0x5d4a430
	void SetBrushSize(); // Function UMG.Image.SetBrushSize // None // @ game+0x5d4e634
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

	void SetSelectedKey(); // Function UMG.InputKeySelector.SetSelectedKey // None // @ game+0x5d53020
	void GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // None // @ game+0x5d4acd8
	void SetKeySelectionText(); // Function UMG.InputKeySelector.SetKeySelectionText // None // @ game+0x5d51170
	void SetAllowModifierKeys(); // Function UMG.InputKeySelector.SetAllowModifierKeys // None // @ game+0x5d4d768
	void OnKeySelected__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // None // @ game+0x26a108
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // None // @ game+0x26a108
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

	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // None // @ game+0x5d47050
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // None // @ game+0x5d452b4
	enum class EUINavigationRule SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // None // @ game+0x5d46a40
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // None // @ game+0x5d446b0
	void GetParent(); // Function UMG.Widget.GetParent // None // @ game+0x5d44a58
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile // None // @ game+0x5d446d8
	struct APlayerController* HasUserFocus(); // Function UMG.Widget.HasUserFocus // None // @ game+0x5d45174
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // None // @ game+0x26a108
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // None // @ game+0x5d47238
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // None // @ game+0x26a108
	struct F*387a87ac65 OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // None // @ game+0x26a108
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // None // @ game+0x9ec9e0
	void IsVisible(); // Function UMG.Widget.IsVisible // None // @ game+0x5d4564c
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // None // @ game+0x26a108
	void GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // None // @ game+0x26a108
	void IsHovered(); // Function UMG.Widget.IsHovered // None // @ game+0x5d45384
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // None // @ game+0x26a108
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // None // @ game+0x5d46a2c
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // None // @ game+0x5d448ac
	void SetCursor(); // Function UMG.Widget.SetCursor // None // @ game+0x5d46628
	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // None // @ game+0x5d472c4
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // None // @ game+0x26a108
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // None // @ game+0x26a108
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // None // @ game+0x5d46994
	void SetToolTip(); // Function UMG.Widget.SetToolTip // None // @ game+0x5d47368
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // None // @ game+0x5d44f90
	struct FString GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // None // @ game+0x26a108
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText // None // @ game+0x5d473f8
	void SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // None // @ game+0x5d464b8
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // None // @ game+0xcb5834
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // None // @ game+0x26a108
	void GetVisibility(); // Function UMG.Widget.GetVisibility // None // @ game+0x5d44d08
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // None // @ game+0x5d44edc
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // None // @ game+0x5d44850
	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // None // @ game+0x26a108
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // None // @ game+0x26a108
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // None // @ game+0x26a108
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // None // @ game+0x26a108
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale // None // @ game+0x5d470f0
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // None // @ game+0x26a108
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus // None // @ game+0x5d474d4
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // None // @ game+0x26a108
	void HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // None // @ game+0x5d45214
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // None // @ game+0x5d446c4
	void ResetCursor(); // Function UMG.Widget.ResetCursor // None // @ game+0x5d45f1c
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // None // @ game+0x5d45030
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // None // @ game+0x5d4487c
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // None // @ game+0x5d449ec
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // None // @ game+0x5d450d4
	void SetVisibility(); // Function UMG.Widget.SetVisibility // None // @ game+0x63db54
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // None // @ game+0x5672ae4
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear // None // @ game+0x5d47194
};

// Class UMG.CanvasPanel
// Size: 0x150 (Inherited: 0x140)
struct UCanvasPanel : U*c1ef4cc603 {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // None // @ game+0x5d4bd50
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // None // @ game+0x5d4a2b4
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // None // @ game+0x5d4a354
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // None // @ game+0x5d4d15c
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // None // @ game+0x5d4a214
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // None // @ game+0x5d4d0bc
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // None // @ game+0x5d4775c
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // None // @ game+0x5d483fc
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // None // @ game+0x5d4bd34
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

	void SetVerticalAlignment(); // Function UMG.BackgroundBlur.SetVerticalAlignment // None // @ game+0x5d544bc
	void SetLowQualityFallbackBrush(); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // None // @ game+0x5d514c8
	void SetBlurRadius(); // Function UMG.BackgroundBlur.SetBlurRadius // None // @ game+0x5d4de3c
	void SetBlurStrength(); // Function UMG.BackgroundBlur.SetBlurStrength // None // @ game+0x5d4decc
	void SetApplyAlphaToBlur(); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // None // @ game+0x5d4daf0
	void SetPadding(); // Function UMG.BackgroundBlur.SetPadding // None // @ game+0x5d522c8
	void SetHorizontalAlignment(); // Function UMG.BackgroundBlur.SetHorizontalAlignment // None // @ game+0x5d4f9d0
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

	void SetBrushColor(); // Function UMG.Border.SetBrushColor // None // @ game+0xaec14c
	void SetVerticalAlignment(); // Function UMG.Border.SetVerticalAlignment // None // @ game+0x5d545e4
	void SetPadding(); // Function UMG.Border.SetPadding // None // @ game+0x5d52408
	void SetDesiredSizeScale(); // Function UMG.Border.SetDesiredSizeScale // None // @ game+0x5d4ebac
	void SetBrushFromMaterial(); // Function UMG.Border.SetBrushFromMaterial // None // @ game+0x5d4e280
	void SetBrushFromTexture(); // Function UMG.Border.SetBrushFromTexture // None // @ game+0x5d4e280
	void SetBrush(); // Function UMG.Border.SetBrush // None // @ game+0x5d4df68
	void SetContentColorAndOpacity(); // Function UMG.Border.SetContentColorAndOpacity // None // @ game+0xa34d24
	void SetHorizontalAlignment(); // Function UMG.Border.SetHorizontalAlignment // None // @ game+0x5d4faf8
	void GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // None // @ game+0x5d4a40c
	void SetBrushFromAsset(); // Function UMG.Border.SetBrushFromAsset // None // @ game+0x5d4e160
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

	void IsChecked(); // Function UMG.CheckBox.IsChecked // None // @ game+0x5d4beb0
	void SetIsChecked(); // Function UMG.CheckBox.SetIsChecked // None // @ game+0x5d509e0
	void IsPressed(); // Function UMG.CheckBox.IsPressed // None // @ game+0x5d4bf98
	void GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // None // @ game+0x5d4a1f0
	void SetCheckedState(); // Function UMG.CheckBox.SetCheckedState // None // @ game+0x5d4e764
};

// Class UMG.InvalidationBox
// Size: 0x158 (Inherited: 0x140)
struct UInvalidationBox : U*7fef63158a {
	bool *f9287edec4; // 0x140(0x01)
	bool CacheRelativeTransforms; // 0x141(0x01)
	char pad_142[0x16]; // 0x142(0x16)

	void GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // None // @ game+0x5d4a1d0
	void SetCanCache(); // Function UMG.InvalidationBox.SetCanCache // None // @ game+0x5d4e6d0
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // None // @ game+0x5d4be78
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

	void Close(); // Function UMG.MenuAnchor.Close // None // @ game+0x5d486e0
	void HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // None // @ game+0x5d4be40
	void ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // None // @ game+0x5d55100
	void GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // None // @ game+0x5d4b01c
	void IsOpen(); // Function UMG.MenuAnchor.IsOpen // None // @ game+0x5d4bef8
	void ToggleOpen(); // Function UMG.MenuAnchor.ToggleOpen // None // @ game+0x5d55534
	void Open(); // Function UMG.MenuAnchor.Open // None // @ game+0x5d4c5cc
};

// Class UMG.NamedSlot
// Size: 0x150 (Inherited: 0x140)
struct UNamedSlot : U*7fef63158a {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // None // @ game+0x5d4bd50
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // None // @ game+0x5d4a2b4
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // None // @ game+0x5d4a354
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // None // @ game+0x5d4d15c
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // None // @ game+0x5d4a214
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // None // @ game+0x5d4d0bc
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // None // @ game+0x5d4775c
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // None // @ game+0x5d483fc
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // None // @ game+0x5d4bd34
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

	void GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // None // @ game+0x5d4a54c
	void SetTextureParameter(); // Function UMG.RetainerBox.SetTextureParameter // None // @ game+0x5d54090
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // None // @ game+0x5d4d334
	void SetEffectMaterial(); // Function UMG.RetainerBox.SetEffectMaterial // None // @ game+0x5d4ecfc
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

	void SetStretchDirection(); // Function UMG.ScaleBox.SetStretchDirection // None // @ game+0x5d53a60
	void SetIgnoreInheritedScale(); // Function UMG.ScaleBox.SetIgnoreInheritedScale // None // @ game+0x5d50260
	void SetStretch(); // Function UMG.ScaleBox.SetStretch // None // @ game+0x5d539c8
	void SetUserSpecifiedScale(); // Function UMG.ScaleBox.SetUserSpecifiedScale // None // @ game+0x5d542f4
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

	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // None // @ game+0x5d484f0
	void SetMaxAspectRatio(); // Function UMG.SizeBox.SetMaxAspectRatio // None // @ game+0x5d515c4
	void SetMaxDesiredWidth(); // Function UMG.SizeBox.SetMaxDesiredWidth // None // @ game+0x5d516f4
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // None // @ game+0x5d48478
	void SetWidthOverride(); // Function UMG.SizeBox.SetWidthOverride // None // @ game+0x386bb8
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // None // @ game+0x5d484a0
	void SetMaxDesiredHeight(); // Function UMG.SizeBox.SetMaxDesiredHeight // None // @ game+0x5d5165c
	void SetHeightOverride(); // Function UMG.SizeBox.SetHeightOverride // None // @ game+0x386b3c
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // None // @ game+0x5d486cc
	void SetMinDesiredHeight(); // Function UMG.SizeBox.SetMinDesiredHeight // None // @ game+0x5d51948
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // None // @ game+0x5d484dc
	void SetMinDesiredWidth(); // Function UMG.SizeBox.SetMinDesiredWidth // None // @ game+0x5d51b10
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // None // @ game+0x5d48464
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // None // @ game+0x5d4848c
};

// Class UMG.Viewport
// Size: 0x168 (Inherited: 0x140)
struct UViewport : U*7fef63158a {
	struct FLinearColor BackgroundColor; // 0x140(0x10)
	char pad_150[0x18]; // 0x150(0x18)

	void SetViewLocation(); // Function UMG.Viewport.SetViewLocation // None // @ game+0x5d54cbc
	struct UClass* Spawn(); // Function UMG.Viewport.Spawn // None // @ game+0x5d55494
	void GetViewRotation(); // Function UMG.Viewport.GetViewRotation // None // @ game+0x5d4bad8
	void SetViewRotation(); // Function UMG.Viewport.SetViewRotation // None // @ game+0x5d54d74
	void GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // None // @ game+0x5d4bc4c
	void GetViewLocation(); // Function UMG.Viewport.GetViewLocation // None // @ game+0x5d4ba8c
};

// Class UMG.GridPanel
// Size: 0x170 (Inherited: 0x140)
struct UGridPanel : U*c1ef4cc603 {
	struct TArray<float> ColumnFill; // 0x140(0x10)
	struct TArray<float> RowFill; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)

	struct UWidget* AddChildToGrid(); // Function UMG.GridPanel.AddChildToGrid // None // @ game+0x5d478fc
};

// Class UMG.HorizontalBox
// Size: 0x150 (Inherited: 0x140)
struct UHorizontalBox : U*c1ef4cc603 {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // None // @ game+0x5d4bd50
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // None // @ game+0x5d4a2b4
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // None // @ game+0x5d4a354
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // None // @ game+0x5d4d15c
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // None // @ game+0x5d4a214
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // None // @ game+0x5d4d0bc
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // None // @ game+0x5d4775c
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // None // @ game+0x5d483fc
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // None // @ game+0x5d4bd34
};

// Class UMG.Overlay
// Size: 0x150 (Inherited: 0x140)
struct UOverlay : U*c1ef4cc603 {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // None // @ game+0x5d4bd50
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // None // @ game+0x5d4a2b4
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // None // @ game+0x5d4a354
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // None // @ game+0x5d4d15c
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // None // @ game+0x5d4a214
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // None // @ game+0x5d4d0bc
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // None // @ game+0x5d4775c
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // None // @ game+0x5d483fc
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // None // @ game+0x5d4bd34
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

	void GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // None // @ game+0x5d4b5e4
	struct UWidget* ScrollWidgetIntoView(); // Function UMG.ScrollBox.ScrollWidgetIntoView // None // @ game+0x5d4d40c
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // None // @ game+0x5d4d348
	void GetScrollToEndOffset(); // Function UMG.ScrollBox.GetScrollToEndOffset // None // @ game+0x5d4b604
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // None // @ game+0x5d4d35c
	void SetScrollBarVisibility(); // Function UMG.ScrollBox.SetScrollBarVisibility // None // @ game+0x5d52ef8
	void SetScrollOffset(); // Function UMG.ScrollBox.SetScrollOffset // None // @ game+0x5d52f88
};

// Class UMG.UniformGridPanel
// Size: 0x168 (Inherited: 0x140)
struct UUniformGridPanel : U*c1ef4cc603 {
	struct FMargin SlotPadding; // 0x140(0x10)
	float MinDesiredSlotWidth; // 0x150(0x04)
	float MinDesiredSlotHeight; // 0x154(0x04)
	char pad_158[0x10]; // 0x158(0x10)

	void SetMinDesiredSlotWidth(); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // None // @ game+0x5d51a78
	void AddChildToUniformGrid(struct UWidget* Content); // Function UMG.UniformGridPanel.AddChildToUniformGrid // None // @ game+0x5d47bfc
	void SetSlotPadding(); // Function UMG.UniformGridPanel.SetSlotPadding // None // @ game+0x5d53794
	void SetMinDesiredSlotHeight(); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // None // @ game+0x5d519e0
};

// Class UMG.VerticalBox
// Size: 0x150 (Inherited: 0x140)
struct UVerticalBox : U*c1ef4cc603 {
	struct TArray<struct UPanelSlot*> Slots; // 0x128(0x10)

	void HasChild(struct UWidget* Content); // Function UMG.*c1ef4cc603.HasChild // None // @ game+0x5d4bd50
	struct UWidget* GetChildIndex(); // Function UMG.*c1ef4cc603.GetChildIndex // None // @ game+0x5d4a2b4
	void GetChildrenCount(); // Function UMG.*c1ef4cc603.GetChildrenCount // None // @ game+0x5d4a354
	void RemoveChildAt(); // Function UMG.*c1ef4cc603.RemoveChildAt // None // @ game+0x5d4d15c
	void GetChildAt(); // Function UMG.*c1ef4cc603.GetChildAt // None // @ game+0x5d4a214
	struct UWidget* RemoveChild(); // Function UMG.*c1ef4cc603.RemoveChild // None // @ game+0x5d4d0bc
	struct UWidget* AddChild(); // Function UMG.*c1ef4cc603.AddChild // None // @ game+0x5d4775c
	void ClearChildren(); // Function UMG.*c1ef4cc603.ClearChildren // None // @ game+0x5d483fc
	void HasAnyChildren(); // Function UMG.*c1ef4cc603.HasAnyChildren // None // @ game+0x5d4bd34
};

// Class UMG.WrapBox
// Size: 0x160 (Inherited: 0x140)
struct UWrapBox : U*c1ef4cc603 {
	struct FVector2D InnerSlotPadding; // 0x140(0x08)
	float WrapWidth; // 0x148(0x04)
	bool bExplicitWrapWidth; // 0x14c(0x01)
	char pad_14D[0x13]; // 0x14d(0x13)

	void SetInnerSlotPadding(); // Function UMG.WrapBox.SetInnerSlotPadding // None // @ game+0x5d5038c
	void AddChildWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildWrapBox // None // @ game+0x5d47dfc
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

	void SetFillColorAndOpacity(); // Function UMG.ProgressBar.SetFillColorAndOpacity // None // @ game+0x5d4f0e8
	void SetIsMarquee(); // Function UMG.ProgressBar.SetIsMarquee // None // @ game+0x5d50bac
	void SetPercent(); // Function UMG.ProgressBar.SetPercent // None // @ game+0x5d52adc
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

	void SetState(float InOffsetFraction); // Function UMG.ScrollBar.SetState // None // @ game+0x5d53834
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

	void SetIndentHandle(); // Function UMG.Slider.SetIndentHandle // None // @ game+0x5d502f8
	void SetSliderHandleColor(); // Function UMG.Slider.SetSliderHandleColor // None // @ game+0x5d536e8
	void SetStepSize(); // Function UMG.Slider.SetStepSize // None // @ game+0x5d53930
	void SetSliderBarColor(); // Function UMG.Slider.SetSliderBarColor // None // @ game+0x5d5363c
	void SetLocked(); // Function UMG.Slider.SetLocked // None // @ game+0x5d51434
	void GetValue(); // Function UMG.Slider.GetValue // None // @ game+0x5d4ba3c
	void SetValue(); // Function UMG.Slider.SetValue // None // @ game+0x5d5438c
};

// Class UMG.Spacer
// Size: 0x140 (Inherited: 0x128)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x128(0x08)
	char pad_130[0x10]; // 0x130(0x10)

	void SetSize(); // Function UMG.Spacer.SetSize // None // @ game+0x5d534fc
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

	void SetMinValue(); // Function UMG.SpinBox.SetMinValue // None // @ game+0x5d51cd8
	void SetMaxSliderValue(); // Function UMG.SpinBox.SetMaxSliderValue // None // @ game+0x5d5178c
	void GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // None // @ game+0x5d4aff4
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // None // @ game+0x26a108
	void SetMaxValue(); // Function UMG.SpinBox.SetMaxValue // None // @ game+0x5d51824
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // None // @ game+0x5d484c8
	void GetMinValue(); // Function UMG.SpinBox.GetMinValue // None // @ game+0x5d4b08c
	void SetMinSliderValue(); // Function UMG.SpinBox.SetMinSliderValue // None // @ game+0x5d51c40
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // None // @ game+0x5d484b4
	void GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // None // @ game+0x5d4b064
	void GetValue(); // Function UMG.SpinBox.GetValue // None // @ game+0x5d4ba64
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // None // @ game+0x5d48504
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // None // @ game+0x5d48518
	void OnSpinBoxValueChangedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // None // @ game+0x26a108
	float OnSpinBoxValueCommittedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // None // @ game+0x26a108
	void SetForegroundColor(); // Function UMG.SpinBox.SetForegroundColor // None // @ game+0x5d4f4c0
	void GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // None // @ game+0x5d4afcc
	void SetValue(); // Function UMG.SpinBox.SetValue // None // @ game+0x5d54424
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

	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle // None // @ game+0x5d47050
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // None // @ game+0x5d452b4
	enum class EUINavigationRule SetNavigationRule(); // Function UMG.Widget.SetNavigationRule // None // @ game+0x5d46a40
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // None // @ game+0x5d446b0
	void GetParent(); // Function UMG.Widget.GetParent // None // @ game+0x5d44a58
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile // None // @ game+0x5d446d8
	struct APlayerController* HasUserFocus(); // Function UMG.Widget.HasUserFocus // None // @ game+0x5d45174
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // None // @ game+0x26a108
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot // None // @ game+0x5d47238
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // None // @ game+0x26a108
	struct F*387a87ac65 OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // None // @ game+0x26a108
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform // None // @ game+0x9ec9e0
	void IsVisible(); // Function UMG.Widget.IsVisible // None // @ game+0x5d4564c
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // None // @ game+0x26a108
	void GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // None // @ game+0x26a108
	void IsHovered(); // Function UMG.Widget.IsHovered // None // @ game+0x5d45384
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature // None // @ game+0x26a108
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // None // @ game+0x5d46a2c
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // None // @ game+0x5d448ac
	void SetCursor(); // Function UMG.Widget.SetCursor // None // @ game+0x5d46628
	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation // None // @ game+0x5d472c4
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // None // @ game+0x26a108
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // None // @ game+0x26a108
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled // None // @ game+0x5d46994
	void SetToolTip(); // Function UMG.Widget.SetToolTip // None // @ game+0x5d47368
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // None // @ game+0x5d44f90
	struct FString GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // None // @ game+0x26a108
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText // None // @ game+0x5d473f8
	void SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules // None // @ game+0x5d464b8
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // None // @ game+0xcb5834
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // None // @ game+0x26a108
	void GetVisibility(); // Function UMG.Widget.GetVisibility // None // @ game+0x5d44d08
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // None // @ game+0x5d44edc
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // None // @ game+0x5d44850
	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // None // @ game+0x26a108
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // None // @ game+0x26a108
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // None // @ game+0x26a108
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // None // @ game+0x26a108
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale // None // @ game+0x5d470f0
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // None // @ game+0x26a108
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus // None // @ game+0x5d474d4
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // None // @ game+0x26a108
	void HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants // None // @ game+0x5d45214
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave // None // @ game+0x5d446c4
	void ResetCursor(); // Function UMG.Widget.ResetCursor // None // @ game+0x5d45f1c
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // None // @ game+0x5d45030
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // None // @ game+0x5d4487c
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget // None // @ game+0x5d449ec
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // None // @ game+0x5d450d4
	void SetVisibility(); // Function UMG.Widget.SetVisibility // None // @ game+0x63db54
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // None // @ game+0x5672ae4
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear // None // @ game+0x5d47194
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

	void SetItemHeight(); // Function UMG.TileView.SetItemHeight // None // @ game+0x5d50f74
	void RequestListRefresh(); // Function UMG.TileView.RequestListRefresh // None // @ game+0x5d4d318
	void SetItemWidth(); // Function UMG.TileView.SetItemWidth // None // @ game+0x5d51028
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

	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // None // @ game+0x26a108
	void SetText(); // Function UMG.MultiLineEditableText.SetText // None // @ game+0x5d53db0
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // None // @ game+0x26a108
	void GetText(); // Function UMG.MultiLineEditableText.GetText // None // @ game+0x5d4b884
	void SetIsReadOnly(); // Function UMG.MultiLineEditableText.SetIsReadOnly // None // @ game+0x5d50e4c
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

	void GetText(); // Function UMG.MultiLineEditableTextBox.GetText // None // @ game+0x5d4b93c
	void SetIsReadOnly(); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // None // @ game+0x5d50ee0
	void SetText(); // Function UMG.MultiLineEditableTextBox.SetText // None // @ game+0x5d53ea4
	void SetError(); // Function UMG.MultiLineEditableTextBox.SetError // None // @ game+0x5d4eef0
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // None // @ game+0x26a108
	struct FText OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // None // @ game+0x26a108
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

	void SetAnimateHorizontally(); // Function UMG.Throbber.SetAnimateHorizontally // None // @ game+0x5d4d8a4
	void SetAnimateOpacity(); // Function UMG.Throbber.SetAnimateOpacity // None // @ game+0x5d4d968
	void SetNumberOfPieces(); // Function UMG.Throbber.SetNumberOfPieces // None // @ game+0x5d52048
	void SetAnimateVertically(); // Function UMG.Throbber.SetAnimateVertically // None // @ game+0x5d4da30
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

	void *c9cd820bbc(); // Function UMG.*6b11b3bf02.*c9cd820bbc // None // @ game+0x5d4b730
	void *4e238aec7b(); // Function UMG.*6b11b3bf02.*4e238aec7b // None // @ game+0x5d4a574
};

// Class UMG.*11415fb091
// Size: 0x28 (Inherited: 0x28)
struct U*11415fb091 : UBlueprintFunctionLibrary {
};

// Class UMG.*f39056125e
// Size: 0x6b0 (Inherited: 0x4c0)
struct U*f39056125e : USceneComponent {
	struct FMulticastDelegate OnHoveredWidgetChanged; // 0x4c0(0x10)
	char pad_4D0[0x10]; // 0x4d0(0x10)
	int32 VirtualUserIndex; // 0x4e0(0x04)
	float PointerIndex; // 0x4e4(0x04)
	enum class ECollisionChannel TraceChannel; // 0x4e8(0x01)
	char pad_4E9[0x3]; // 0x4e9(0x03)
	float InteractionDistance; // 0x4ec(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x4f0(0x01)
	bool bEnableHitTesting; // 0x4f1(0x01)
	bool bShowDebug; // 0x4f2(0x01)
	char pad_4F3[0x1]; // 0x4f3(0x01)
	struct FLinearColor DebugColor; // 0x4f4(0x10)
	char pad_504[0x7c]; // 0x504(0x7c)
	struct FHitResult *60ab5c187d; // 0x580(0x88)
	struct FVector2D *fb9efc094b; // 0x608(0x08)
	struct FVector2D *3ff04ad9a5; // 0x610(0x08)
	struct UWidgetComponent* *4ec63d53e7; // 0x618(0x08)
	struct FHitResult *fc5c0e3e4b; // 0x620(0x88)
	bool *b770f797d5; // 0x6a8(0x01)
	bool *8a13e59698; // 0x6a9(0x01)
	bool *6c09f7592c; // 0x6aa(0x01)
	char pad_6AB[0x5]; // 0x6ab(0x05)

	bool *c64fd914e3(); // Function UMG.*f39056125e.*c64fd914e3 // None // @ game+0x5d4d4ec
	void *bee5c18387(); // Function UMG.*f39056125e.*bee5c18387 // None // @ game+0x5d499d8
	void *0395532ee5(); // Function UMG.*f39056125e.*0395532ee5 // None // @ game+0x5d4bf5c
	void *eacd357f7c(); // Function UMG.*f39056125e.*eacd357f7c // None // @ game+0x5d4eae4
	void *af48f7b75f(); // Function UMG.*f39056125e.*af48f7b75f // None // @ game+0x5d4c8b8
	void *59acb48368(); // Function UMG.*f39056125e.*59acb48368 // None // @ game+0x5d4bf2c
	void *8e37988746(); // Function UMG.*f39056125e.*8e37988746 // None // @ game+0x5d4bf44
	bool *58cbe2b669(); // Function UMG.*f39056125e.*58cbe2b669 // None // @ game+0x5d4c76c
	void *31f0a31ab0(); // Function UMG.*f39056125e.*31f0a31ab0 // None // @ game+0x5d4cf38
	void *9989608622(); // Function UMG.*f39056125e.*9989608622 // None // @ game+0x5d4d370
	void *b18ecd661e(); // Function UMG.*f39056125e.*b18ecd661e // None // @ game+0x5d4a76c
	void *48c1693956(); // Function UMG.*f39056125e.*48c1693956 // None // @ game+0x5d4c674
	struct FKey *bc697bc58b(); // Function UMG.*f39056125e.*bc697bc58b // None // @ game+0x5d4cd0c
	void *3c324c59e9(); // Function UMG.*f39056125e.*3c324c59e9 // None // @ game+0x5d4ae7c
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


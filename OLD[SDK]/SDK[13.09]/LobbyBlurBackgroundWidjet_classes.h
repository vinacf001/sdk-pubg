// WidgetBlueprintGeneratedClass LobbyBlurBackgroundWidjet.LobbyBlurBackgroundWidjet_C
// Size: 0x250 (Inherited: 0x250)
struct ULobbyBlurBackgroundWidjet_C : UUserWidget {
	struct FLinearColor ColorAndOpacity; // 0x130(0x10)
	DelegateProperty ColorAndOpacityDelegate; // 0x140(0x10)
	struct FSlateColor ForegroundColor; // 0x150(0x28)
	DelegateProperty ForegroundColorDelegate; // 0x178(0x10)
	struct FMargin Padding; // 0x188(0x10)
	bool bSupportsKeyboardFocus; // 0x198(0x01)
	bool bIsFocusable; // 0x199(0x01)
	struct TArray<struct U*7aea8ea27e*> *3e3863d4e3; // 0x1a0(0x10)
	struct TArray<struct U*7aea8ea27e*> *4bcceb71fc; // 0x1b0(0x10)
	bool bStopAction; // 0x1c0(0x01)
	int32 Priority; // 0x1c4(0x04)
	struct TArray<struct F*29c64021c8> *705b4e1e17; // 0x1c8(0x10)
	struct UWidgetTree* WidgetTree; // 0x1d8(0x08)
	char bCanEverTick : 1; // 0x1e0(0x01)
	char *108843f716 : 1; // 0x1e0(0x01)
	char *8635d1ae99 : 1; // 0x1e8(0x01)
	struct U*63b14265fa* *63b14265fa; // 0x1f0(0x08)

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


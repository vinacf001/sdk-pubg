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


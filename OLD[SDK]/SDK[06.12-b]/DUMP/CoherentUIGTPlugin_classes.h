// Class CoherentUIGTPlugin.*8ce6770d29
// Size: 0x3d0 (Inherited: 0x130)
struct U*8ce6770d29 : UWidget {
	char pad_130[0x18]; // 0x130(0x18)
	struct AActor* Owner; // 0x148(0x08)
	struct FMulticastDelegate ReadyForBindings; // 0x150(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x160(0x10)
	struct FMulticastDelegate FinishLoad; // 0x170(0x10)
	struct FMulticastDelegate FailLoad; // 0x180(0x10)
	struct FMulticastDelegate StartLoading; // 0x190(0x10)
	struct FMulticastDelegate NavigateTo; // 0x1a0(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x1b0(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x1c0(0x10)
	char pad_1D0[0x70]; // 0x1d0(0x70)
	enum class TextureFilter Filter; // 0x240(0x01)
	bool bReceiveInput; // 0x241(0x01)
	enum class ECoherentUIGTInputPropagationBehaviour InputPropagationBehaviour; // 0x242(0x01)
	bool bReceiveInputWhenTransparent; // 0x243(0x01)
	bool bGammaCorrectedMaterial; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	float TickPeriodInMinimizedGame; // 0x248(0x04)
	bool AllowPerformanceWarnings; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	float ExecuteJSTimersThresholdMs; // 0x250(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x254(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x258(0x04)
	float PaintWarningThresholdMs; // 0x25c(0x04)
	int32 LayersCountThreshold; // 0x260(0x04)
	int32 LayerWidthThreshold; // 0x264(0x04)
	int32 LayerHeightThreshold; // 0x268(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x26c(0x01)
	char pad_26D[0xc3]; // 0x26d(0xc3)
	struct U*532f87bc11* *55de10b0ab; // 0x330(0x08)
	char pad_338[0x80]; // 0x338(0x80)
	struct FString URL; // 0x3b8(0x10)
	float ClickThroughAlphaThreshold; // 0x3c8(0x04)
	bool Transparent; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)

	enum class ECoherentUIGTInputPropagationBehaviour GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*8ce6770d29.GetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08978
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.*8ce6770d29.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x6a08824
	bool ShowPaintRects(); // Function CoherentUIGTPlugin.*8ce6770d29.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x6a09cfc
	void SynchronizeModels(); // Function CoherentUIGTPlugin.*8ce6770d29.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a09dd8
	void Redraw(); // Function CoherentUIGTPlugin.*8ce6770d29.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a093b0
	bool IsReadyForBindings(); // Function CoherentUIGTPlugin.*8ce6770d29.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08ec4
	enum class ECoherentUIGTInputPropagationBehaviour SetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*8ce6770d29.SetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable // @ game+0x6a09800
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*8ce6770d29.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08938
	float SetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*8ce6770d29.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x6a095a0
	struct UObject* CreateDataModelFromObject(); // Function CoherentUIGTPlugin.*8ce6770d29.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x6a08188
	struct UObject* UpdateWholeDataModelFromObject(); // Function CoherentUIGTPlugin.*8ce6770d29.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a0a2a4
	void Reload(); // Function CoherentUIGTPlugin.*8ce6770d29.Reload // Final|Native|Public|BlueprintCallable // @ game+0x6a09414
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.*8ce6770d29.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x6a08724
	bool HasRequestedView(); // Function CoherentUIGTPlugin.*8ce6770d29.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08c08
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.*8ce6770d29.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08e40
	struct UStructProperty* CreateDataModelFromStruct(); // Function CoherentUIGTPlugin.*8ce6770d29.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x6a0848c
	struct U*865a9b027e* CreateJSEvent(); // Function CoherentUIGTPlugin.*8ce6770d29.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x6a08630
	struct U*865a9b027e* TriggerJSEvent(); // Function CoherentUIGTPlugin.*8ce6770d29.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a0a0bc
	struct UStructProperty* UpdateWholeDataModelFromStruct(); // Function CoherentUIGTPlugin.*8ce6770d29.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a0a494
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.*8ce6770d29.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x6a07fec
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.*8ce6770d29.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08ee8
	struct FString Load(); // Function CoherentUIGTPlugin.*8ce6770d29.Load // Final|Native|Public|BlueprintCallable // @ game+0x6a09050
	struct UTextureRenderTarget2D* GetRenderTexture(); // Function CoherentUIGTPlugin.*8ce6770d29.GetRenderTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08ad0
	bool IsTransparent(); // Function CoherentUIGTPlugin.*8ce6770d29.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08f58
};

// Class CoherentUIGTPlugin.*f82743d2a6
// Size: 0x30 (Inherited: 0x30)
struct U*f82743d2a6 : UObject {
};

// Class CoherentUIGTPlugin.*532f87bc11
// Size: 0x1c0 (Inherited: 0x30)
struct U*532f87bc11 : UObject {
	struct UObject* Owner; // 0x30(0x08)
	struct TMap<int32, struct F*9f91969897> Sounds; // 0x38(0x50)
	char pad_88[0x138]; // 0x88(0x138)
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x438 (Inherited: 0x3f8)
struct ACoherentUIGTSystem : AActor {
	char pad_3F8[0x40]; // 0x3f8(0x40)
};

// Class CoherentUIGTPlugin.*865a9b027e
// Size: 0xc0 (Inherited: 0x30)
struct U*865a9b027e : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct UStruct*> *8158a6dbbc; // 0xb0(0x10)

	bool *89a1a37467(); // Function CoherentUIGTPlugin.*865a9b027e.*89a1a37467 // Final|Native|Public|BlueprintCallable // @ game+0x6a0746c
	float AddFloat(); // Function CoherentUIGTPlugin.*865a9b027e.AddFloat // Final|Native|Public|BlueprintCallable // @ game+0x6a075dc
	int32 *e3bbdfdce4(); // Function CoherentUIGTPlugin.*865a9b027e.*e3bbdfdce4 // Final|Native|Public|BlueprintCallable // @ game+0x6a07748
	struct UObject* *752131c07b(); // Function CoherentUIGTPlugin.*865a9b027e.*752131c07b // Final|Native|Public|BlueprintCallable // @ game+0x6a07950
	struct TArray<int32> *8f5ad4177c(); // Function CoherentUIGTPlugin.*865a9b027e.*8f5ad4177c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6a06f18
	struct FText *d0349b67a2(); // Function CoherentUIGTPlugin.*865a9b027e.*d0349b67a2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6a07db0
	bool *ea8985bf5e(); // Function CoherentUIGTPlugin.*865a9b027e.*ea8985bf5e // Final|Native|Public|BlueprintCallable // @ game+0x6a07300
	struct UStructProperty* *7230279e87(); // Function CoherentUIGTPlugin.*865a9b027e.*7230279e87 // Final|Native|Public|BlueprintCallable // @ game+0x6a07ccc
	struct FName *7150c806ae(); // Function CoherentUIGTPlugin.*865a9b027e.*7150c806ae // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6a077d8
	struct FString *1dc0d86322(); // Function CoherentUIGTPlugin.*865a9b027e.*1dc0d86322 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a07aec
};

// Class CoherentUIGTPlugin.*751e8292ec
// Size: 0x48 (Inherited: 0x30)
struct U*751e8292ec : UObject {
	struct FString EventName; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	struct FString GetString(); // Function CoherentUIGTPlugin.*751e8292ec.GetString // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a08af8
	struct UObject* *fdc236374e(); // Function CoherentUIGTPlugin.*751e8292ec.*fdc236374e // Final|Native|Public|BlueprintCallable // @ game+0x6a092a4
	int32 *77fa603572(); // Function CoherentUIGTPlugin.*751e8292ec.*77fa603572 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a08990
	bool *ddcb016311(); // Function CoherentUIGTPlugin.*751e8292ec.*ddcb016311 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a08858
	float *b306b70a76(); // Function CoherentUIGTPlugin.*751e8292ec.*b306b70a76 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a08a30
};

// Class CoherentUIGTPlugin.*c55f71acbf
// Size: 0x30 (Inherited: 0x30)
struct U*c55f71acbf : UObject {
};

// Class CoherentUIGTPlugin.*315ebda9a9
// Size: 0x470 (Inherited: 0x200)
struct U*315ebda9a9 : UActorComponent {
	struct FMulticastDelegate ReadyForBindings; // 0x200(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x210(0x10)
	struct FMulticastDelegate FinishLoad; // 0x220(0x10)
	struct FMulticastDelegate FailLoad; // 0x230(0x10)
	struct FMulticastDelegate StartLoading; // 0x240(0x10)
	struct FMulticastDelegate NavigateTo; // 0x250(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x260(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x270(0x10)
	DelegateProperty *0d98ee12a8; // 0x280(0x10)
	char pad_290[0x70]; // 0x290(0x70)
	struct UTextureRenderTarget2D* Texture; // 0x300(0x08)
	enum class TextureFilter Filter; // 0x308(0x01)
	bool bReceiveInput; // 0x309(0x01)
	bool bReceiveInputWhenTransparent; // 0x30a(0x01)
	bool AllowPerformanceWarnings; // 0x30b(0x01)
	float ExecuteJSTimersThresholdMs; // 0x30c(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x310(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x314(0x04)
	float PaintWarningThresholdMs; // 0x318(0x04)
	int32 LayersCountThreshold; // 0x31c(0x04)
	int32 LayerWidthThreshold; // 0x320(0x04)
	int32 LayerHeightThreshold; // 0x324(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x328(0x01)
	bool bDelayedUpdate; // 0x329(0x01)
	char pad_32A[0x106]; // 0x32a(0x106)
	struct U*532f87bc11* *55de10b0ab; // 0x430(0x08)
	char pad_438[0x38]; // 0x438(0x38)

	int32 Resize(); // Function CoherentUIGTPlugin.*315ebda9a9.Resize // Native|Public|BlueprintCallable // @ game+0x6a09428
	void *0737830734(); // Function CoherentUIGTPlugin.*315ebda9a9.*0737830734 // Final|Native|Public|BlueprintCallable // @ game+0x6a07fb4
	bool *91d0882571(); // Function CoherentUIGTPlugin.*315ebda9a9.*91d0882571 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08f1c
	void *96ed2c0976(); // Function CoherentUIGTPlugin.*315ebda9a9.*96ed2c0976 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a09d9c
	bool *c66515ba2a(); // Function CoherentUIGTPlugin.*315ebda9a9.*c66515ba2a // Final|Native|Public|BlueprintCallable // @ game+0x6a09c60
	bool *d49037e275(); // Function CoherentUIGTPlugin.*315ebda9a9.*d49037e275 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08ee8
	void *5a08b096f6(); // Function CoherentUIGTPlugin.*315ebda9a9.*5a08b096f6 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a09380
	bool *6bc14a1c83(); // Function CoherentUIGTPlugin.*315ebda9a9.*6bc14a1c83 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08e00
	float *66e1fb722a(); // Function CoherentUIGTPlugin.*315ebda9a9.*66e1fb722a // Final|Native|Public|BlueprintCallable // @ game+0x6a09504
	struct UStructProperty* *14dc97cfe9(); // Function CoherentUIGTPlugin.*315ebda9a9.*14dc97cfe9 // Final|Native|Public|BlueprintCallable // @ game+0x6a082e8
	struct U*865a9b027e* *72257c9c1e(); // Function CoherentUIGTPlugin.*315ebda9a9.*72257c9c1e // Final|Native|Public|BlueprintCallable // @ game+0x6a08630
	struct UObject* *8e2ff4fb36(); // Function CoherentUIGTPlugin.*315ebda9a9.*8e2ff4fb36 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a0a1d8
	float *dd0b328ae2(); // Function CoherentUIGTPlugin.*315ebda9a9.*dd0b328ae2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a088f8
	bool *54fbc6c09d(); // Function CoherentUIGTPlugin.*315ebda9a9.*54fbc6c09d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08ea0
	struct U*865a9b027e* *e32693f1a9(); // Function CoherentUIGTPlugin.*315ebda9a9.*e32693f1a9 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a09e44
	bool *7ff3f2c3c7(); // Function CoherentUIGTPlugin.*315ebda9a9.*7ff3f2c3c7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08be8
	struct FString Load(); // Function CoherentUIGTPlugin.*315ebda9a9.Load // Final|Native|Public|BlueprintCallable // @ game+0x6a08f90
	struct UObject* *ae22bd2ea5(); // Function CoherentUIGTPlugin.*315ebda9a9.*ae22bd2ea5 // Final|Native|Public|BlueprintCallable // @ game+0x6a08028
	struct UStructProperty* *3573e71405(); // Function CoherentUIGTPlugin.*315ebda9a9.*3573e71405 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a0a370
	void *e9381aef83(); // Function CoherentUIGTPlugin.*315ebda9a9.*e9381aef83 // Final|Native|Public|BlueprintCallable // @ game+0x6a086ec
	void Reload(); // Function CoherentUIGTPlugin.*315ebda9a9.Reload // Final|Native|Public|BlueprintCallable // @ game+0x6a093e4
	bool *3989ff9573(); // Function CoherentUIGTPlugin.*315ebda9a9.*3989ff9573 // Final|Native|Public|BlueprintCallable // @ game+0x6a08760
	void *86afcbcc59(); // Function CoherentUIGTPlugin.*315ebda9a9.*86afcbcc59 // Final|Native|Public|BlueprintCallable // @ game+0x6a087f4
};

// Class CoherentUIGTPlugin.*02f9ac3eef
// Size: 0x4a0 (Inherited: 0x470)
struct U*02f9ac3eef : U*315ebda9a9 {
	struct FString URL; // 0x468(0x10)
	int32 Width; // 0x478(0x04)
	int32 Height; // 0x47c(0x04)
	bool ManualTexture; // 0x480(0x01)
	float ClickThroughAlphaThreshold; // 0x484(0x04)
	bool Transparent; // 0x488(0x01)
	char pad_48E[0x12]; // 0x48e(0x12)
};

// Class CoherentUIGTPlugin.CoherentUIGTHUD
// Size: 0x490 (Inherited: 0x470)
struct UCoherentUIGTHUD : U*315ebda9a9 {
	struct FStringAssetReference *31042866a3; // 0x468(0x10)
	struct UMaterial* *cbee996111; // 0x478(0x08)
	struct UMaterialInstanceDynamic* *1e00b10c06; // 0x480(0x08)
};

// Class CoherentUIGTPlugin.*48b058d9ad
// Size: 0x30 (Inherited: 0x30)
struct U*48b058d9ad : UBlueprintFunctionLibrary {

	struct U*865a9b027e* *72257c9c1e(); // Function CoherentUIGTPlugin.*48b058d9ad.*72257c9c1e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a0865c
	struct FString *1dc0d86322(); // Function CoherentUIGTPlugin.*48b058d9ad.*1dc0d86322 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a079e0
	float AddFloat(); // Function CoherentUIGTPlugin.*48b058d9ad.AddFloat // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a07500
	int32 *8f5ad4177c(); // Function CoherentUIGTPlugin.*48b058d9ad.*8f5ad4177c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a06db8
	struct TArray<int32> *e9833f4ce0(); // Function CoherentUIGTPlugin.*48b058d9ad.*e9833f4ce0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a07034
	struct F*bf8e3c5799 *70555cab49(); // Function CoherentUIGTPlugin.*48b058d9ad.*70555cab49 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a0992c
	struct UObject* *752131c07b(); // Function CoherentUIGTPlugin.*48b058d9ad.*752131c07b // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a07878
	struct UStructProperty* *7230279e87(); // Function CoherentUIGTPlugin.*48b058d9ad.*7230279e87 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a07bac
	int32 *e3bbdfdce4(); // Function CoherentUIGTPlugin.*48b058d9ad.*e3bbdfdce4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a07674
	bool *89a1a37467(); // Function CoherentUIGTPlugin.*48b058d9ad.*89a1a37467 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a07394
	struct U*865a9b027e* *e32693f1a9(); // Function CoherentUIGTPlugin.*48b058d9ad.*e32693f1a9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a09f60
	bool *ea8985bf5e(); // Function CoherentUIGTPlugin.*48b058d9ad.*ea8985bf5e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a07228
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x578 (Inherited: 0x4e0)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4e0(0x08)
	char pad_4E8[0x90]; // 0x4e8(0x90)

	bool *14b5ba4a8a(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*14b5ba4a8a // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a08c38
	bool *2767c38edb(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*2767c38edb // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a09a4c
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x450 (Inherited: 0x3f8)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x3f8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x408(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x418(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x428(0x10)
	char pad_438[0x18]; // 0x438(0x18)

	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08e84
	struct U*315ebda9a9* *c5b0bafabd(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*c5b0bafabd // Final|Native|Public|BlueprintCallable // @ game+0x6a096d8
	bool AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // Final|Native|Public|BlueprintCallable // @ game+0x6a07e8c
	enum class ECoherentUIGTInputPropagationBehaviour *ca4b7e1c2e(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*ca4b7e1c2e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08960
	int32 Initialize(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x6a08c5c
	bool *545d36e5dd(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*545d36e5dd // Final|Native|Public|BlueprintCallable // @ game+0x6a09644
	bool *586c4484ec(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*586c4484ec // Final|Native|Public|BlueprintCallable // @ game+0x6a07f20
	enum class ECoherentUIGTInputPropagationBehaviour *dbfcb8868a(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*dbfcb8868a // Final|Native|Public|BlueprintCallable // @ game+0x6a09768
	void *5a6eb85bd6(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*5a6eb85bd6 // Final|Native|Public|BlueprintCallable // @ game+0x6a09e14
	bool *ed1e9a7ce4(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*ed1e9a7ce4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a08ddc
	enum class *5a8b3d9a90 *f716da4898(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*f716da4898 // Final|Native|Public|BlueprintCallable // @ game+0x6a0989c
};

// Class CoherentUIGTPlugin.*0099ae19bb
// Size: 0x230 (Inherited: 0x200)
struct U*0099ae19bb : UActorComponent {
	struct FString LinkName; // 0x200(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x210(0x08)
	char pad_218[0x18]; // 0x218(0x18)

	int32 *ddf9e64d4b(); // Function CoherentUIGTPlugin.*0099ae19bb.*ddf9e64d4b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6a09110
};

// Class CoherentUIGTPlugin.CoherentUIGTSettings
// Size: 0x70 (Inherited: 0x30)
struct UCoherentUIGTSettings : UObject {
	bool EnableLiveReload; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 InspectorPort; // 0x34(0x04)
	int32 WebdriverPort; // 0x38(0x04)
	bool EnableWebSecurity; // 0x3c(0x01)
	bool EnableLocalization; // 0x3d(0x01)
	bool RunAsynchronous; // 0x3e(0x01)
	bool AllowPerformanceWarningsInEditor; // 0x3f(0x01)
	bool ShowWarningsOnScreen; // 0x40(0x01)
	enum class ECoherentUIGTSettingsSeverity LogSeverity; // 0x41(0x01)
	bool bPaintToBackBuffer; // 0x42(0x01)
	bool bRespectTitleSafeZone; // 0x43(0x01)
	bool bRespectLetterboxing; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FString HUDMaterialName; // 0x48(0x10)
	struct FString CoUIResourcesRoot; // 0x58(0x10)
	bool TickWhileGameIsPaused; // 0x68(0x01)
	bool bUseLowerCaseNamesForAutoExposedProperties; // 0x69(0x01)
	enum class *3e7081afa0 MSAA; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};


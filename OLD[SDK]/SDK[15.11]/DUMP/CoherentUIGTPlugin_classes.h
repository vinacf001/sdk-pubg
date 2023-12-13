// Class CoherentUIGTPlugin.*e714e83534
// Size: 0x3d0 (Inherited: 0x130)
struct U*e714e83534 : UWidget {
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
	struct U*0ee09387c4* *7570dad24f; // 0x330(0x08)
	char pad_338[0x80]; // 0x338(0x80)
	struct FString URL; // 0x3b8(0x10)
	float ClickThroughAlphaThreshold; // 0x3c8(0x04)
	bool Transparent; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)

	void TriggerJSEvent(); // Function CoherentUIGTPlugin.*e714e83534.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a324a0
	void IsDocumentReady(); // Function CoherentUIGTPlugin.*e714e83534.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a31224
	void ShowPaintRects(); // Function CoherentUIGTPlugin.*e714e83534.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x6a320e0
	void HasRequestedView(); // Function CoherentUIGTPlugin.*e714e83534.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a30fec
	void UpdateWholeDataModelFromStruct(); // Function CoherentUIGTPlugin.*e714e83534.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a32878
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.*e714e83534.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x6a30c08
	void Reload(); // Function CoherentUIGTPlugin.*e714e83534.Reload // Final|Native|Public|BlueprintCallable // @ game+0x6a317f8
	void GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*e714e83534.GetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a30d5c
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.*e714e83534.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x6a303d0
	void GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*e714e83534.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a30d1c
	void CreateDataModelFromObject(); // Function CoherentUIGTPlugin.*e714e83534.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x6a3056c
	void SetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*e714e83534.SetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable // @ game+0x6a31be4
	void CreateJSEvent(); // Function CoherentUIGTPlugin.*e714e83534.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x6a30a14
	void IsTransparent(); // Function CoherentUIGTPlugin.*e714e83534.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a3133c
	void GetRenderTexture(); // Function CoherentUIGTPlugin.*e714e83534.GetRenderTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a30eb4
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.*e714e83534.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x6a30b08
	void CreateDataModelFromStruct(); // Function CoherentUIGTPlugin.*e714e83534.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x6a30870
	void Load(); // Function CoherentUIGTPlugin.*e714e83534.Load // Final|Native|Public|BlueprintCallable // @ game+0x6a31434
	void SetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*e714e83534.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x6a31984
	void SynchronizeModels(); // Function CoherentUIGTPlugin.*e714e83534.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a321bc
	void IsReadyForBindings(); // Function CoherentUIGTPlugin.*e714e83534.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a312a8
	void Redraw(); // Function CoherentUIGTPlugin.*e714e83534.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a31794
	void UpdateWholeDataModelFromObject(); // Function CoherentUIGTPlugin.*e714e83534.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a32688
	void IsReadyToCreateView(); // Function CoherentUIGTPlugin.*e714e83534.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a312cc
};

// Class CoherentUIGTPlugin.*21717e7730
// Size: 0x30 (Inherited: 0x30)
struct U*21717e7730 : UObject {
};

// Class CoherentUIGTPlugin.*0ee09387c4
// Size: 0x1c0 (Inherited: 0x30)
struct U*0ee09387c4 : UObject {
	struct UObject* Owner; // 0x30(0x08)
	struct TMap<int32, struct F*59bcecaef7> Sounds; // 0x38(0x50)
	char pad_88[0x138]; // 0x88(0x138)
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x438 (Inherited: 0x3f8)
struct ACoherentUIGTSystem : AActor {
	char pad_3F8[0x40]; // 0x3f8(0x40)
};

// Class CoherentUIGTPlugin.*b6a8db1bb4
// Size: 0xc0 (Inherited: 0x30)
struct U*b6a8db1bb4 : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct UStruct*> *97e84cb3f7; // 0xb0(0x10)

	void *c8390b93d4(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*c8390b93d4 // Final|Native|Public|BlueprintCallable // @ game+0x6a2fb2c
	void *24c7acfd04(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*24c7acfd04 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a2fed0
	void *e5d196d609(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*e5d196d609 // Final|Native|Public|BlueprintCallable // @ game+0x6a2f850
	void *474a15b2ff(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*474a15b2ff // Final|Native|Public|BlueprintCallable // @ game+0x6a300b0
	void AddFloat(); // Function CoherentUIGTPlugin.*b6a8db1bb4.AddFloat // Final|Native|Public|BlueprintCallable // @ game+0x6a2f9c0
	void *3043f701d7(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*3043f701d7 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6a2f2fc
	void *499d41e7ff(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*499d41e7ff // Final|Native|Public|BlueprintCallable // @ game+0x6a2fd34
	void *6a3839eaf8(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*6a3839eaf8 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6a2fbbc
	void *87bd2e8fa5(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*87bd2e8fa5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6a30194
	void *2eb03fbcd4(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*2eb03fbcd4 // Final|Native|Public|BlueprintCallable // @ game+0x6a2f6e4
};

// Class CoherentUIGTPlugin.*9a370e5590
// Size: 0x48 (Inherited: 0x30)
struct U*9a370e5590 : UObject {
	struct FString EventName; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	void *15add2e55f(); // Function CoherentUIGTPlugin.*9a370e5590.*15add2e55f // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a30c3c
	void *c59ba22c9d(); // Function CoherentUIGTPlugin.*9a370e5590.*c59ba22c9d // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a30d74
	void GetString(); // Function CoherentUIGTPlugin.*9a370e5590.GetString // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a30edc
	void *4554ebe993(); // Function CoherentUIGTPlugin.*9a370e5590.*4554ebe993 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a30e14
	void *fb0af16d38(); // Function CoherentUIGTPlugin.*9a370e5590.*fb0af16d38 // Final|Native|Public|BlueprintCallable // @ game+0x6a31688
};

// Class CoherentUIGTPlugin.*8d1d3f5ec3
// Size: 0x30 (Inherited: 0x30)
struct U*8d1d3f5ec3 : UObject {
};

// Class CoherentUIGTPlugin.*478b036b4b
// Size: 0x470 (Inherited: 0x200)
struct U*478b036b4b : UActorComponent {
	struct FMulticastDelegate ReadyForBindings; // 0x200(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x210(0x10)
	struct FMulticastDelegate FinishLoad; // 0x220(0x10)
	struct FMulticastDelegate FailLoad; // 0x230(0x10)
	struct FMulticastDelegate StartLoading; // 0x240(0x10)
	struct FMulticastDelegate NavigateTo; // 0x250(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x260(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x270(0x10)
	DelegateProperty *fc4f2cdbe5; // 0x280(0x10)
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
	struct U*0ee09387c4* *7570dad24f; // 0x430(0x08)
	char pad_438[0x38]; // 0x438(0x38)

	void *e04c7d29ec(); // Function CoherentUIGTPlugin.*478b036b4b.*e04c7d29ec // Final|Native|Public|BlueprintCallable // @ game+0x6a3040c
	void Reload(); // Function CoherentUIGTPlugin.*478b036b4b.Reload // Final|Native|Public|BlueprintCallable // @ game+0x6a317c8
	void *dda026ba35(); // Function CoherentUIGTPlugin.*478b036b4b.*dda026ba35 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a31300
	void Resize(); // Function CoherentUIGTPlugin.*478b036b4b.Resize // Native|Public|BlueprintCallable // @ game+0x6a3180c
	void *079f6ea965(); // Function CoherentUIGTPlugin.*478b036b4b.*079f6ea965 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a32754
	void *7c5dd1d586(); // Function CoherentUIGTPlugin.*478b036b4b.*7c5dd1d586 // Final|Native|Public|BlueprintCallable // @ game+0x6a30ad0
	void Load(); // Function CoherentUIGTPlugin.*478b036b4b.Load // Final|Native|Public|BlueprintCallable // @ game+0x6a31374
	void *63272d6c78(); // Function CoherentUIGTPlugin.*478b036b4b.*63272d6c78 // Final|Native|Public|BlueprintCallable // @ game+0x6a32044
	void *ea9498def5(); // Function CoherentUIGTPlugin.*478b036b4b.*ea9498def5 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a325bc
	void *239888fc88(); // Function CoherentUIGTPlugin.*478b036b4b.*239888fc88 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a30cdc
	void *b7d6848ac8(); // Function CoherentUIGTPlugin.*478b036b4b.*b7d6848ac8 // Final|Native|Public|BlueprintCallable // @ game+0x6a30a14
	void *e4ae69b61a(); // Function CoherentUIGTPlugin.*478b036b4b.*e4ae69b61a // Final|Native|Public|BlueprintCallable // @ game+0x6a30398
	void *3e7ab427ef(); // Function CoherentUIGTPlugin.*478b036b4b.*3e7ab427ef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a30fcc
	void *ef720a5425(); // Function CoherentUIGTPlugin.*478b036b4b.*ef720a5425 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a31764
	void *7866c39723(); // Function CoherentUIGTPlugin.*478b036b4b.*7866c39723 // Final|Native|Public|BlueprintCallable // @ game+0x6a30bd8
	void *436138fcd8(); // Function CoherentUIGTPlugin.*478b036b4b.*436138fcd8 // Final|Native|Public|BlueprintCallable // @ game+0x6a318e8
	void *b50ef30f49(); // Function CoherentUIGTPlugin.*478b036b4b.*b50ef30f49 // Final|Native|Public|BlueprintCallable // @ game+0x6a306cc
	void *c0f53d0144(); // Function CoherentUIGTPlugin.*478b036b4b.*c0f53d0144 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a31284
	void *873222998b(); // Function CoherentUIGTPlugin.*478b036b4b.*873222998b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a312cc
	void *6adab9f5f2(); // Function CoherentUIGTPlugin.*478b036b4b.*6adab9f5f2 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a32180
	void *b8150c58f6(); // Function CoherentUIGTPlugin.*478b036b4b.*b8150c58f6 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6a32228
	void *d3fca10c59(); // Function CoherentUIGTPlugin.*478b036b4b.*d3fca10c59 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a311e4
	void *5b9462ec59(); // Function CoherentUIGTPlugin.*478b036b4b.*5b9462ec59 // Final|Native|Public|BlueprintCallable // @ game+0x6a30b44
};

// Class CoherentUIGTPlugin.*ca1df9e7b2
// Size: 0x4a0 (Inherited: 0x470)
struct U*ca1df9e7b2 : U*478b036b4b {
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
struct UCoherentUIGTHUD : U*478b036b4b {
	struct FStringAssetReference *64ef9d6537; // 0x468(0x10)
	struct UMaterial* *f596c96cdc; // 0x478(0x08)
	struct UMaterialInstanceDynamic* *21c84d5c86; // 0x480(0x08)
};

// Class CoherentUIGTPlugin.*c23dda7513
// Size: 0x30 (Inherited: 0x30)
struct U*c23dda7513 : UBlueprintFunctionLibrary {

	void *dad446aad1(); // Function CoherentUIGTPlugin.*c23dda7513.*dad446aad1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a31d10
	void *24c7acfd04(); // Function CoherentUIGTPlugin.*c23dda7513.*24c7acfd04 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a2fdc4
	void *e5d196d609(); // Function CoherentUIGTPlugin.*c23dda7513.*e5d196d609 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a2f778
	void *499d41e7ff(); // Function CoherentUIGTPlugin.*c23dda7513.*499d41e7ff // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a2fc5c
	void *4b7d6f99d2(); // Function CoherentUIGTPlugin.*c23dda7513.*4b7d6f99d2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a2f418
	void AddFloat(); // Function CoherentUIGTPlugin.*c23dda7513.AddFloat // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a2f8e4
	void *c8390b93d4(); // Function CoherentUIGTPlugin.*c23dda7513.*c8390b93d4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a2fa58
	void *b7d6848ac8(); // Function CoherentUIGTPlugin.*c23dda7513.*b7d6848ac8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a30a40
	void *b8150c58f6(); // Function CoherentUIGTPlugin.*c23dda7513.*b8150c58f6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a32344
	void *474a15b2ff(); // Function CoherentUIGTPlugin.*c23dda7513.*474a15b2ff // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a2ff90
	void *2eb03fbcd4(); // Function CoherentUIGTPlugin.*c23dda7513.*2eb03fbcd4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a2f60c
	void *3043f701d7(); // Function CoherentUIGTPlugin.*c23dda7513.*3043f701d7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a2f19c
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x578 (Inherited: 0x4e0)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4e0(0x08)
	char pad_4E8[0x90]; // 0x4e8(0x90)

	void *73e0b2ede8(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*73e0b2ede8 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a3101c
	void *6540639783(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*6540639783 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6a31e30
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x450 (Inherited: 0x3f8)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x3f8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x408(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x418(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x428(0x10)
	char pad_438[0x18]; // 0x438(0x18)

	void *89321bd39d(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*89321bd39d // Final|Native|Public|BlueprintCallable // @ game+0x6a31a28
	void *b636f617ed(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*b636f617ed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a311c0
	void IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a31268
	void *d9f7442e95(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*d9f7442e95 // Final|Native|Public|BlueprintCallable // @ game+0x6a31b4c
	void *7f36881389(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*7f36881389 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a30d44
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // Final|Native|Public|BlueprintCallable // @ game+0x6a30270
	void *938dce7822(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*938dce7822 // Final|Native|Public|BlueprintCallable // @ game+0x6a31abc
	void *accbdd6935(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*accbdd6935 // Final|Native|Public|BlueprintCallable // @ game+0x6a321f8
	void *a351e2bd7f(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*a351e2bd7f // Final|Native|Public|BlueprintCallable // @ game+0x6a31c80
	void *0d8ae02d54(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*0d8ae02d54 // Final|Native|Public|BlueprintCallable // @ game+0x6a30304
	void Initialize(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x6a31040
};

// Class CoherentUIGTPlugin.*43f322b4ca
// Size: 0x230 (Inherited: 0x200)
struct U*43f322b4ca : UActorComponent {
	struct FString LinkName; // 0x200(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x210(0x08)
	char pad_218[0x18]; // 0x218(0x18)

	void *607fb32b07(); // Function CoherentUIGTPlugin.*43f322b4ca.*607fb32b07 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6a314f4
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
	enum class *f2bf644311 MSAA; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};


// Class CoherentUIGTPlugin.*e714e83534
// Size: 0x3d0 (Inherited: 0x128)
struct U*e714e83534 : UWidget {
	char pad_128[0x18]; // 0x128(0x18)
	struct AActor* Owner; // 0x140(0x08)
	struct FMulticastDelegate ReadyForBindings; // 0x148(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x158(0x10)
	struct FMulticastDelegate FinishLoad; // 0x168(0x10)
	struct FMulticastDelegate FailLoad; // 0x178(0x10)
	struct FMulticastDelegate StartLoading; // 0x188(0x10)
	struct FMulticastDelegate NavigateTo; // 0x198(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x1a8(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x1b8(0x10)
	char pad_1C8[0x78]; // 0x1c8(0x78)
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

	void TriggerJSEvent(struct FString Name); // Function CoherentUIGTPlugin.*e714e83534.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x680edcc
	void IsDocumentReady(); // Function CoherentUIGTPlugin.*e714e83534.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680db50
	void ShowPaintRects(); // Function CoherentUIGTPlugin.*e714e83534.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x680ea0c
	void HasRequestedView(); // Function CoherentUIGTPlugin.*e714e83534.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d918
	void UpdateWholeDataModelFromStruct(); // Function CoherentUIGTPlugin.*e714e83534.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x680f1a0
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.*e714e83534.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x680d534
	void Reload(); // Function CoherentUIGTPlugin.*e714e83534.Reload // Final|Native|Public|BlueprintCallable // @ game+0x680e124
	void GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*e714e83534.GetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d688
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.*e714e83534.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x680cd04
	void GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*e714e83534.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d648
	void CreateDataModelFromObject(); // Function CoherentUIGTPlugin.*e714e83534.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x680cea0
	void SetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*e714e83534.SetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable // @ game+0x680e510
	void CreateJSEvent(); // Function CoherentUIGTPlugin.*e714e83534.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x680d340
	void IsTransparent(); // Function CoherentUIGTPlugin.*e714e83534.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680dc68
	void GetRenderTexture(); // Function CoherentUIGTPlugin.*e714e83534.GetRenderTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d7e0
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.*e714e83534.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x680d434
	struct FString CreateDataModelFromStruct(); // Function CoherentUIGTPlugin.*e714e83534.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x680d1a0
	void Load(); // Function CoherentUIGTPlugin.*e714e83534.Load // Final|Native|Public|BlueprintCallable // @ game+0x680dd60
	void SetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*e714e83534.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x680e2b0
	void SynchronizeModels(); // Function CoherentUIGTPlugin.*e714e83534.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x680eae8
	void IsReadyForBindings(); // Function CoherentUIGTPlugin.*e714e83534.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680dbd4
	void Redraw(); // Function CoherentUIGTPlugin.*e714e83534.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x680e0c0
	void UpdateWholeDataModelFromObject(); // Function CoherentUIGTPlugin.*e714e83534.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x680efb4
	void IsReadyToCreateView(); // Function CoherentUIGTPlugin.*e714e83534.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680dbf8
};

// Class CoherentUIGTPlugin.*21717e7730
// Size: 0x28 (Inherited: 0x28)
struct U*21717e7730 : UObject {
};

// Class CoherentUIGTPlugin.*0ee09387c4
// Size: 0x1b8 (Inherited: 0x28)
struct U*0ee09387c4 : UObject {
	struct UObject* Owner; // 0x28(0x08)
	struct TMap<int32, struct F*59bcecaef7> Sounds; // 0x30(0x50)
	char pad_80[0x138]; // 0x80(0x138)
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x428 (Inherited: 0x3e8)
struct ACoherentUIGTSystem : AActor {
	char pad_3E8[0x40]; // 0x3e8(0x40)
};

// Class CoherentUIGTPlugin.*b6a8db1bb4
// Size: 0xb8 (Inherited: 0x28)
struct U*b6a8db1bb4 : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct TArray<struct UStruct*> *97e84cb3f7; // 0xa8(0x10)

	void *c8390b93d4(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*c8390b93d4 // Final|Native|Public|BlueprintCallable // @ game+0x680c460
	void *24c7acfd04(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*24c7acfd04 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680c804
	void *e5d196d609(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*e5d196d609 // Final|Native|Public|BlueprintCallable // @ game+0x680c184
	void *474a15b2ff(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*474a15b2ff // Final|Native|Public|BlueprintCallable // @ game+0x680c9e4
	void AddFloat(); // Function CoherentUIGTPlugin.*b6a8db1bb4.AddFloat // Final|Native|Public|BlueprintCallable // @ game+0x680c2f4
	void *3043f701d7(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*3043f701d7 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x680bc34
	void *499d41e7ff(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*499d41e7ff // Final|Native|Public|BlueprintCallable // @ game+0x680c668
	void *6a3839eaf8(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*6a3839eaf8 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x680c4f0
	void *87bd2e8fa5(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*87bd2e8fa5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x680cac8
	void *2eb03fbcd4(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*2eb03fbcd4 // Final|Native|Public|BlueprintCallable // @ game+0x680c018
};

// Class CoherentUIGTPlugin.*9a370e5590
// Size: 0x40 (Inherited: 0x28)
struct U*9a370e5590 : UObject {
	struct FString EventName; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)

	void *15add2e55f(int32 Index); // Function CoherentUIGTPlugin.*9a370e5590.*15add2e55f // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680d568
	int32 *c59ba22c9d(); // Function CoherentUIGTPlugin.*9a370e5590.*c59ba22c9d // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680d6a0
	int32 GetString(); // Function CoherentUIGTPlugin.*9a370e5590.GetString // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680d808
	void *4554ebe993(); // Function CoherentUIGTPlugin.*9a370e5590.*4554ebe993 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680d740
	void *fb0af16d38(int32 Index); // Function CoherentUIGTPlugin.*9a370e5590.*fb0af16d38 // Final|Native|Public|BlueprintCallable // @ game+0x680dfb4
};

// Class CoherentUIGTPlugin.*8d1d3f5ec3
// Size: 0x28 (Inherited: 0x28)
struct U*8d1d3f5ec3 : UObject {
};

// Class CoherentUIGTPlugin.*478b036b4b
// Size: 0x460 (Inherited: 0x1f0)
struct U*478b036b4b : UActorComponent {
	struct FMulticastDelegate ReadyForBindings; // 0x1f0(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x200(0x10)
	struct FMulticastDelegate FinishLoad; // 0x210(0x10)
	struct FMulticastDelegate FailLoad; // 0x220(0x10)
	struct FMulticastDelegate StartLoading; // 0x230(0x10)
	struct FMulticastDelegate NavigateTo; // 0x240(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x250(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x260(0x10)
	DelegateProperty *fc4f2cdbe5; // 0x270(0x10)
	char pad_280[0x70]; // 0x280(0x70)
	struct UTextureRenderTarget2D* Texture; // 0x2f0(0x08)
	enum class TextureFilter Filter; // 0x2f8(0x01)
	bool bReceiveInput; // 0x2f9(0x01)
	bool bReceiveInputWhenTransparent; // 0x2fa(0x01)
	bool AllowPerformanceWarnings; // 0x2fb(0x01)
	float ExecuteJSTimersThresholdMs; // 0x2fc(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x300(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x304(0x04)
	float PaintWarningThresholdMs; // 0x308(0x04)
	int32 LayersCountThreshold; // 0x30c(0x04)
	int32 LayerWidthThreshold; // 0x310(0x04)
	int32 LayerHeightThreshold; // 0x314(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x318(0x01)
	bool bDelayedUpdate; // 0x319(0x01)
	char pad_31A[0x106]; // 0x31a(0x106)
	struct U*0ee09387c4* *7570dad24f; // 0x420(0x08)
	char pad_428[0x38]; // 0x428(0x38)

	void *e04c7d29ec(struct FString Name); // Function CoherentUIGTPlugin.*478b036b4b.*e04c7d29ec // Final|Native|Public|BlueprintCallable // @ game+0x680cd40
	void Reload(); // Function CoherentUIGTPlugin.*478b036b4b.Reload // Final|Native|Public|BlueprintCallable // @ game+0x680e0f4
	void *dda026ba35(); // Function CoherentUIGTPlugin.*478b036b4b.*dda026ba35 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680dc2c
	int32 Resize(); // Function CoherentUIGTPlugin.*478b036b4b.Resize // Native|Public|BlueprintCallable // @ game+0x680e138
	void *079f6ea965(); // Function CoherentUIGTPlugin.*478b036b4b.*079f6ea965 // Final|Native|Public|BlueprintCallable|Const // @ game+0x680f080
	void *7c5dd1d586(); // Function CoherentUIGTPlugin.*478b036b4b.*7c5dd1d586 // Final|Native|Public|BlueprintCallable // @ game+0x680d3fc
	void Load(); // Function CoherentUIGTPlugin.*478b036b4b.Load // Final|Native|Public|BlueprintCallable // @ game+0x680dca0
	void *63272d6c78(); // Function CoherentUIGTPlugin.*478b036b4b.*63272d6c78 // Final|Native|Public|BlueprintCallable // @ game+0x680e970
	void *ea9498def5(); // Function CoherentUIGTPlugin.*478b036b4b.*ea9498def5 // Final|Native|Public|BlueprintCallable|Const // @ game+0x680eee8
	void *239888fc88(); // Function CoherentUIGTPlugin.*478b036b4b.*239888fc88 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d608
	void *b7d6848ac8(); // Function CoherentUIGTPlugin.*478b036b4b.*b7d6848ac8 // Final|Native|Public|BlueprintCallable // @ game+0x680d340
	void *e4ae69b61a(); // Function CoherentUIGTPlugin.*478b036b4b.*e4ae69b61a // Final|Native|Public|BlueprintCallable // @ game+0x680cccc
	void *3e7ab427ef(); // Function CoherentUIGTPlugin.*478b036b4b.*3e7ab427ef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d8f8
	void *ef720a5425(); // Function CoherentUIGTPlugin.*478b036b4b.*ef720a5425 // Final|Native|Public|BlueprintCallable|Const // @ game+0x680e090
	void *7866c39723(); // Function CoherentUIGTPlugin.*478b036b4b.*7866c39723 // Final|Native|Public|BlueprintCallable // @ game+0x680d504
	void *436138fcd8(); // Function CoherentUIGTPlugin.*478b036b4b.*436138fcd8 // Final|Native|Public|BlueprintCallable // @ game+0x680e214
	struct FString *b50ef30f49(); // Function CoherentUIGTPlugin.*478b036b4b.*b50ef30f49 // Final|Native|Public|BlueprintCallable // @ game+0x680d000
	void *c0f53d0144(); // Function CoherentUIGTPlugin.*478b036b4b.*c0f53d0144 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680dbb0
	void *873222998b(); // Function CoherentUIGTPlugin.*478b036b4b.*873222998b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680dbf8
	void *6adab9f5f2(); // Function CoherentUIGTPlugin.*478b036b4b.*6adab9f5f2 // Final|Native|Public|BlueprintCallable|Const // @ game+0x680eaac
	void *b8150c58f6(); // Function CoherentUIGTPlugin.*478b036b4b.*b8150c58f6 // Final|Native|Public|BlueprintCallable|Const // @ game+0x680eb54
	void *d3fca10c59(); // Function CoherentUIGTPlugin.*478b036b4b.*d3fca10c59 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680db10
	void *5b9462ec59(); // Function CoherentUIGTPlugin.*478b036b4b.*5b9462ec59 // Final|Native|Public|BlueprintCallable // @ game+0x680d470
};

// Class CoherentUIGTPlugin.*ca1df9e7b2
// Size: 0x490 (Inherited: 0x460)
struct U*ca1df9e7b2 : U*478b036b4b {
	struct FString URL; // 0x458(0x10)
	int32 Width; // 0x468(0x04)
	int32 Height; // 0x46c(0x04)
	bool ManualTexture; // 0x470(0x01)
	float ClickThroughAlphaThreshold; // 0x474(0x04)
	bool Transparent; // 0x478(0x01)
	char pad_47E[0x12]; // 0x47e(0x12)
};

// Class CoherentUIGTPlugin.CoherentUIGTHUD
// Size: 0x480 (Inherited: 0x460)
struct UCoherentUIGTHUD : U*478b036b4b {
	struct FStringAssetReference *64ef9d6537; // 0x458(0x10)
	struct UMaterial* *f596c96cdc; // 0x468(0x08)
	struct UMaterialInstanceDynamic* *21c84d5c86; // 0x470(0x08)
};

// Class CoherentUIGTPlugin.*c23dda7513
// Size: 0x28 (Inherited: 0x28)
struct U*c23dda7513 : UBlueprintFunctionLibrary {

	struct UObject* *dad446aad1(); // Function CoherentUIGTPlugin.*c23dda7513.*dad446aad1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x680e63c
	struct U*b6a8db1bb4* *24c7acfd04(); // Function CoherentUIGTPlugin.*c23dda7513.*24c7acfd04 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680c6f8
	void *e5d196d609(struct U*b6a8db1bb4* JSEvent); // Function CoherentUIGTPlugin.*c23dda7513.*e5d196d609 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680c0ac
	void *499d41e7ff(); // Function CoherentUIGTPlugin.*c23dda7513.*499d41e7ff // Final|Native|Static|Public|BlueprintCallable // @ game+0x680c590
	struct U*b6a8db1bb4* *4b7d6f99d2(); // Function CoherentUIGTPlugin.*c23dda7513.*4b7d6f99d2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x680bd50
	void AddFloat(); // Function CoherentUIGTPlugin.*c23dda7513.AddFloat // Final|Native|Static|Public|BlueprintCallable // @ game+0x680c218
	void *c8390b93d4(); // Function CoherentUIGTPlugin.*c23dda7513.*c8390b93d4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680c38c
	struct UObject* *b7d6848ac8(); // Function CoherentUIGTPlugin.*c23dda7513.*b7d6848ac8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680d36c
	struct FString *b8150c58f6(); // Function CoherentUIGTPlugin.*c23dda7513.*b8150c58f6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680ec70
	void *474a15b2ff(struct U*b6a8db1bb4* JSEvent); // Function CoherentUIGTPlugin.*c23dda7513.*474a15b2ff // Final|Native|Static|Public|BlueprintCallable // @ game+0x680c8c4
	struct U*b6a8db1bb4* *2eb03fbcd4(); // Function CoherentUIGTPlugin.*c23dda7513.*2eb03fbcd4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680bf40
	struct TArray<int32> *3043f701d7(); // Function CoherentUIGTPlugin.*c23dda7513.*3043f701d7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x680bad4
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x568 (Inherited: 0x4d0)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4d0(0x08)
	char pad_4D8[0x90]; // 0x4d8(0x90)

	void *73e0b2ede8(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*73e0b2ede8 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680d948
	void *6540639783(struct FString PageUrl, float ClickThroughAlphaThreshold); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*6540639783 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680e75c
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x440 (Inherited: 0x3e8)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x3e8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x3f8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x408(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x418(0x10)
	char pad_428[0x18]; // 0x428(0x18)

	void *89321bd39d(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*89321bd39d // Final|Native|Public|BlueprintCallable // @ game+0x680e354
	void *b636f617ed(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*b636f617ed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680daec
	void IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680db94
	void *d9f7442e95(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*d9f7442e95 // Final|Native|Public|BlueprintCallable // @ game+0x680e478
	void *7f36881389(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*7f36881389 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d670
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // Final|Native|Public|BlueprintCallable // @ game+0x680cba4
	void *938dce7822(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*938dce7822 // Final|Native|Public|BlueprintCallable // @ game+0x680e3e8
	void *accbdd6935(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*accbdd6935 // Final|Native|Public|BlueprintCallable // @ game+0x680eb24
	void *a351e2bd7f(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*a351e2bd7f // Final|Native|Public|BlueprintCallable // @ game+0x680e5ac
	void *0d8ae02d54(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*0d8ae02d54 // Final|Native|Public|BlueprintCallable // @ game+0x680cc38
	enum class *483439e28d Initialize(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x680d96c
};

// Class CoherentUIGTPlugin.*43f322b4ca
// Size: 0x220 (Inherited: 0x1f0)
struct U*43f322b4ca : UActorComponent {
	struct FString LinkName; // 0x1f0(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x200(0x08)
	char pad_208[0x18]; // 0x208(0x18)

	int32 *607fb32b07(); // Function CoherentUIGTPlugin.*43f322b4ca.*607fb32b07 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x680de20
};

// Class CoherentUIGTPlugin.CoherentUIGTSettings
// Size: 0x68 (Inherited: 0x28)
struct UCoherentUIGTSettings : UObject {
	bool EnableLiveReload; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32 InspectorPort; // 0x2c(0x04)
	int32 WebdriverPort; // 0x30(0x04)
	bool EnableWebSecurity; // 0x34(0x01)
	bool EnableLocalization; // 0x35(0x01)
	bool RunAsynchronous; // 0x36(0x01)
	bool AllowPerformanceWarningsInEditor; // 0x37(0x01)
	bool ShowWarningsOnScreen; // 0x38(0x01)
	enum class ECoherentUIGTSettingsSeverity LogSeverity; // 0x39(0x01)
	bool bPaintToBackBuffer; // 0x3a(0x01)
	bool bRespectTitleSafeZone; // 0x3b(0x01)
	bool bRespectLetterboxing; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString HUDMaterialName; // 0x40(0x10)
	struct FString CoUIResourcesRoot; // 0x50(0x10)
	bool TickWhileGameIsPaused; // 0x60(0x01)
	bool bUseLowerCaseNamesForAutoExposedProperties; // 0x61(0x01)
	enum class *f2bf644311 MSAA; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
};


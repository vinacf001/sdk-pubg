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

	struct U*b6a8db1bb4* TriggerJSEvent(); // Function CoherentUIGTPlugin.*e714e83534.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x680e8f0
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.*e714e83534.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d674
	bool ShowPaintRects(); // Function CoherentUIGTPlugin.*e714e83534.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x680e530
	bool HasRequestedView(); // Function CoherentUIGTPlugin.*e714e83534.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d43c
	struct UStructProperty* UpdateWholeDataModelFromStruct(); // Function CoherentUIGTPlugin.*e714e83534.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x680ecc8
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.*e714e83534.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x680d058
	void Reload(); // Function CoherentUIGTPlugin.*e714e83534.Reload // Final|Native|Public|BlueprintCallable // @ game+0x680dc48
	enum class ECoherentUIGTInputPropagationBehaviour GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*e714e83534.GetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d1ac
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.*e714e83534.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x680c820
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*e714e83534.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d16c
	struct UObject* CreateDataModelFromObject(); // Function CoherentUIGTPlugin.*e714e83534.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x680c9bc
	enum class ECoherentUIGTInputPropagationBehaviour SetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*e714e83534.SetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable // @ game+0x680e034
	struct U*b6a8db1bb4* CreateJSEvent(); // Function CoherentUIGTPlugin.*e714e83534.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x680ce64
	bool IsTransparent(); // Function CoherentUIGTPlugin.*e714e83534.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d78c
	struct UTextureRenderTarget2D* GetRenderTexture(); // Function CoherentUIGTPlugin.*e714e83534.GetRenderTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d304
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.*e714e83534.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x680cf58
	struct UStructProperty* CreateDataModelFromStruct(); // Function CoherentUIGTPlugin.*e714e83534.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x680ccc0
	struct FString Load(); // Function CoherentUIGTPlugin.*e714e83534.Load // Final|Native|Public|BlueprintCallable // @ game+0x680d884
	float SetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*e714e83534.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x680ddd4
	void SynchronizeModels(); // Function CoherentUIGTPlugin.*e714e83534.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x680e60c
	bool IsReadyForBindings(); // Function CoherentUIGTPlugin.*e714e83534.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d6f8
	void Redraw(); // Function CoherentUIGTPlugin.*e714e83534.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x680dbe4
	struct UObject* UpdateWholeDataModelFromObject(); // Function CoherentUIGTPlugin.*e714e83534.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x680ead8
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.*e714e83534.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d71c
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
// Size: 0x430 (Inherited: 0x3f0)
struct ACoherentUIGTSystem : AActor {
	char pad_3F0[0x40]; // 0x3f0(0x40)
};

// Class CoherentUIGTPlugin.*b6a8db1bb4
// Size: 0xc0 (Inherited: 0x30)
struct U*b6a8db1bb4 : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct UStruct*> *97e84cb3f7; // 0xb0(0x10)

	int32 *c8390b93d4(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*c8390b93d4 // Final|Native|Public|BlueprintCallable // @ game+0x680bf7c
	struct FString *24c7acfd04(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*24c7acfd04 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680c320
	bool *e5d196d609(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*e5d196d609 // Final|Native|Public|BlueprintCallable // @ game+0x680bca0
	struct UStructProperty* *474a15b2ff(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*474a15b2ff // Final|Native|Public|BlueprintCallable // @ game+0x680c500
	float AddFloat(); // Function CoherentUIGTPlugin.*b6a8db1bb4.AddFloat // Final|Native|Public|BlueprintCallable // @ game+0x680be10
	struct TArray<int32> *3043f701d7(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*3043f701d7 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x680b74c
	struct UObject* *499d41e7ff(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*499d41e7ff // Final|Native|Public|BlueprintCallable // @ game+0x680c184
	struct FName *6a3839eaf8(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*6a3839eaf8 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x680c00c
	struct FText *87bd2e8fa5(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*87bd2e8fa5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x680c5e4
	bool *2eb03fbcd4(); // Function CoherentUIGTPlugin.*b6a8db1bb4.*2eb03fbcd4 // Final|Native|Public|BlueprintCallable // @ game+0x680bb34
};

// Class CoherentUIGTPlugin.*9a370e5590
// Size: 0x48 (Inherited: 0x30)
struct U*9a370e5590 : UObject {
	struct FString EventName; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	bool *15add2e55f(); // Function CoherentUIGTPlugin.*9a370e5590.*15add2e55f // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680d08c
	int32 *c59ba22c9d(); // Function CoherentUIGTPlugin.*9a370e5590.*c59ba22c9d // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680d1c4
	struct FString GetString(); // Function CoherentUIGTPlugin.*9a370e5590.GetString // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680d32c
	float *4554ebe993(); // Function CoherentUIGTPlugin.*9a370e5590.*4554ebe993 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680d264
	struct UObject* *fb0af16d38(); // Function CoherentUIGTPlugin.*9a370e5590.*fb0af16d38 // Final|Native|Public|BlueprintCallable // @ game+0x680dad8
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

	struct UObject* *e04c7d29ec(); // Function CoherentUIGTPlugin.*478b036b4b.*e04c7d29ec // Final|Native|Public|BlueprintCallable // @ game+0x680c85c
	void Reload(); // Function CoherentUIGTPlugin.*478b036b4b.Reload // Final|Native|Public|BlueprintCallable // @ game+0x680dc18
	bool *dda026ba35(); // Function CoherentUIGTPlugin.*478b036b4b.*dda026ba35 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d750
	int32 Resize(); // Function CoherentUIGTPlugin.*478b036b4b.Resize // Native|Public|BlueprintCallable // @ game+0x680dc5c
	struct UStructProperty* *079f6ea965(); // Function CoherentUIGTPlugin.*478b036b4b.*079f6ea965 // Final|Native|Public|BlueprintCallable|Const // @ game+0x680eba4
	void *7c5dd1d586(); // Function CoherentUIGTPlugin.*478b036b4b.*7c5dd1d586 // Final|Native|Public|BlueprintCallable // @ game+0x680cf20
	struct FString Load(); // Function CoherentUIGTPlugin.*478b036b4b.Load // Final|Native|Public|BlueprintCallable // @ game+0x680d7c4
	bool *63272d6c78(); // Function CoherentUIGTPlugin.*478b036b4b.*63272d6c78 // Final|Native|Public|BlueprintCallable // @ game+0x680e494
	struct UObject* *ea9498def5(); // Function CoherentUIGTPlugin.*478b036b4b.*ea9498def5 // Final|Native|Public|BlueprintCallable|Const // @ game+0x680ea0c
	float *239888fc88(); // Function CoherentUIGTPlugin.*478b036b4b.*239888fc88 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d12c
	struct U*b6a8db1bb4* *b7d6848ac8(); // Function CoherentUIGTPlugin.*478b036b4b.*b7d6848ac8 // Final|Native|Public|BlueprintCallable // @ game+0x680ce64
	void *e4ae69b61a(); // Function CoherentUIGTPlugin.*478b036b4b.*e4ae69b61a // Final|Native|Public|BlueprintCallable // @ game+0x680c7e8
	bool *3e7ab427ef(); // Function CoherentUIGTPlugin.*478b036b4b.*3e7ab427ef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d41c
	void *ef720a5425(); // Function CoherentUIGTPlugin.*478b036b4b.*ef720a5425 // Final|Native|Public|BlueprintCallable|Const // @ game+0x680dbb4
	void *7866c39723(); // Function CoherentUIGTPlugin.*478b036b4b.*7866c39723 // Final|Native|Public|BlueprintCallable // @ game+0x680d028
	float *436138fcd8(); // Function CoherentUIGTPlugin.*478b036b4b.*436138fcd8 // Final|Native|Public|BlueprintCallable // @ game+0x680dd38
	struct UStructProperty* *b50ef30f49(); // Function CoherentUIGTPlugin.*478b036b4b.*b50ef30f49 // Final|Native|Public|BlueprintCallable // @ game+0x680cb1c
	bool *c0f53d0144(); // Function CoherentUIGTPlugin.*478b036b4b.*c0f53d0144 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d6d4
	bool *873222998b(); // Function CoherentUIGTPlugin.*478b036b4b.*873222998b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d71c
	void *6adab9f5f2(); // Function CoherentUIGTPlugin.*478b036b4b.*6adab9f5f2 // Final|Native|Public|BlueprintCallable|Const // @ game+0x680e5d0
	struct U*b6a8db1bb4* *b8150c58f6(); // Function CoherentUIGTPlugin.*478b036b4b.*b8150c58f6 // Final|Native|Public|BlueprintCallable|Const // @ game+0x680e678
	bool *d3fca10c59(); // Function CoherentUIGTPlugin.*478b036b4b.*d3fca10c59 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d634
	bool *5b9462ec59(); // Function CoherentUIGTPlugin.*478b036b4b.*5b9462ec59 // Final|Native|Public|BlueprintCallable // @ game+0x680cf94
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

	struct F*9650c1d3a2 *dad446aad1(); // Function CoherentUIGTPlugin.*c23dda7513.*dad446aad1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x680e160
	struct FString *24c7acfd04(); // Function CoherentUIGTPlugin.*c23dda7513.*24c7acfd04 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680c214
	bool *e5d196d609(); // Function CoherentUIGTPlugin.*c23dda7513.*e5d196d609 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680bbc8
	struct UObject* *499d41e7ff(); // Function CoherentUIGTPlugin.*c23dda7513.*499d41e7ff // Final|Native|Static|Public|BlueprintCallable // @ game+0x680c0ac
	struct TArray<int32> *4b7d6f99d2(); // Function CoherentUIGTPlugin.*c23dda7513.*4b7d6f99d2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x680b868
	float AddFloat(); // Function CoherentUIGTPlugin.*c23dda7513.AddFloat // Final|Native|Static|Public|BlueprintCallable // @ game+0x680bd34
	int32 *c8390b93d4(); // Function CoherentUIGTPlugin.*c23dda7513.*c8390b93d4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680bea8
	struct U*b6a8db1bb4* *b7d6848ac8(); // Function CoherentUIGTPlugin.*c23dda7513.*b7d6848ac8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680ce90
	struct U*b6a8db1bb4* *b8150c58f6(); // Function CoherentUIGTPlugin.*c23dda7513.*b8150c58f6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680e794
	struct UStructProperty* *474a15b2ff(); // Function CoherentUIGTPlugin.*c23dda7513.*474a15b2ff // Final|Native|Static|Public|BlueprintCallable // @ game+0x680c3e0
	bool *2eb03fbcd4(); // Function CoherentUIGTPlugin.*c23dda7513.*2eb03fbcd4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x680ba5c
	int32 *3043f701d7(); // Function CoherentUIGTPlugin.*c23dda7513.*3043f701d7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x680b5ec
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x570 (Inherited: 0x4d8)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4d8(0x08)
	char pad_4E0[0x90]; // 0x4e0(0x90)

	bool *73e0b2ede8(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*73e0b2ede8 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680d46c
	bool *6540639783(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*6540639783 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x680e280
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x448 (Inherited: 0x3f0)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x3f0(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x400(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x410(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x420(0x10)
	char pad_430[0x18]; // 0x430(0x18)

	bool *89321bd39d(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*89321bd39d // Final|Native|Public|BlueprintCallable // @ game+0x680de78
	bool *b636f617ed(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*b636f617ed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d610
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d6b8
	enum class ECoherentUIGTInputPropagationBehaviour *d9f7442e95(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*d9f7442e95 // Final|Native|Public|BlueprintCallable // @ game+0x680df9c
	enum class ECoherentUIGTInputPropagationBehaviour *7f36881389(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*7f36881389 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680d194
	bool AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // Final|Native|Public|BlueprintCallable // @ game+0x680c6c0
	struct U*478b036b4b* *938dce7822(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*938dce7822 // Final|Native|Public|BlueprintCallable // @ game+0x680df0c
	void *accbdd6935(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*accbdd6935 // Final|Native|Public|BlueprintCallable // @ game+0x680e648
	enum class *62cd96befc *a351e2bd7f(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*a351e2bd7f // Final|Native|Public|BlueprintCallable // @ game+0x680e0d0
	bool *0d8ae02d54(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*0d8ae02d54 // Final|Native|Public|BlueprintCallable // @ game+0x680c754
	int32 Initialize(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x680d490
};

// Class CoherentUIGTPlugin.*43f322b4ca
// Size: 0x230 (Inherited: 0x200)
struct U*43f322b4ca : UActorComponent {
	struct FString LinkName; // 0x200(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x210(0x08)
	char pad_218[0x18]; // 0x218(0x18)

	int32 *607fb32b07(); // Function CoherentUIGTPlugin.*43f322b4ca.*607fb32b07 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x680d944
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


// Class CoherentUIGTPlugin.*907e23d592
// Size: 0x3d0 (Inherited: 0x130)
struct U*907e23d592 : UWidget {
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
	struct U*3a1cdc8eca* *045723dfed; // 0x330(0x08)
	char pad_338[0x80]; // 0x338(0x80)
	struct FString URL; // 0x3b8(0x10)
	float ClickThroughAlphaThreshold; // 0x3c8(0x04)
	bool Transparent; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)

	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.*907e23d592.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x6ad8640
	void UpdateWholeDataModelFromStruct(); // Function CoherentUIGTPlugin.*907e23d592.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ada3b0
	void IsReadyForBindings(); // Function CoherentUIGTPlugin.*907e23d592.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8de0
	void ShowPaintRects(); // Function CoherentUIGTPlugin.*907e23d592.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x6ad9c18
	void IsDocumentReady(); // Function CoherentUIGTPlugin.*907e23d592.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8d5c
	void Redraw(); // Function CoherentUIGTPlugin.*907e23d592.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ad92cc
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.*907e23d592.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x6ad8740
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.*907e23d592.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x6ad7f08
	void CreateDataModelFromObject(); // Function CoherentUIGTPlugin.*907e23d592.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x6ad80a4
	void SynchronizeModels(); // Function CoherentUIGTPlugin.*907e23d592.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ad9cf4
	void IsReadyToCreateView(); // Function CoherentUIGTPlugin.*907e23d592.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8e04
	void GetRenderTexture(); // Function CoherentUIGTPlugin.*907e23d592.GetRenderTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad89ec
	void IsTransparent(); // Function CoherentUIGTPlugin.*907e23d592.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8e74
	void TriggerJSEvent(); // Function CoherentUIGTPlugin.*907e23d592.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ad9fd8
	void UpdateWholeDataModelFromObject(); // Function CoherentUIGTPlugin.*907e23d592.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ada1c0
	void CreateDataModelFromStruct(); // Function CoherentUIGTPlugin.*907e23d592.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x6ad83a8
	void GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*907e23d592.GetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8894
	void GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*907e23d592.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8854
	void Reload(); // Function CoherentUIGTPlugin.*907e23d592.Reload // Final|Native|Public|BlueprintCallable // @ game+0x6ad9330
	void SetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*907e23d592.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x6ad94bc
	void CreateJSEvent(); // Function CoherentUIGTPlugin.*907e23d592.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x6ad854c
	void SetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*907e23d592.SetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable // @ game+0x6ad971c
	void HasRequestedView(); // Function CoherentUIGTPlugin.*907e23d592.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8b24
	void Load(); // Function CoherentUIGTPlugin.*907e23d592.Load // Final|Native|Public|BlueprintCallable // @ game+0x6ad8f6c
};

// Class CoherentUIGTPlugin.*fcca61ec14
// Size: 0x30 (Inherited: 0x30)
struct U*fcca61ec14 : UObject {
};

// Class CoherentUIGTPlugin.*3a1cdc8eca
// Size: 0x1c0 (Inherited: 0x30)
struct U*3a1cdc8eca : UObject {
	struct UObject* Owner; // 0x30(0x08)
	struct TMap<int32, struct F*94ff8513c9> Sounds; // 0x38(0x50)
	char pad_88[0x138]; // 0x88(0x138)
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x448 (Inherited: 0x408)
struct ACoherentUIGTSystem : AActor {
	char pad_408[0x40]; // 0x408(0x40)
};

// Class CoherentUIGTPlugin.*9885ef9c1c
// Size: 0xc0 (Inherited: 0x30)
struct U*9885ef9c1c : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct UStruct*> *db7fc45904; // 0xb0(0x10)

	void *2610d40f89(); // Function CoherentUIGTPlugin.*9885ef9c1c.*2610d40f89 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6ad76f4
	void *ad6c0c780a(); // Function CoherentUIGTPlugin.*9885ef9c1c.*ad6c0c780a // Final|Native|Public|BlueprintCallable // @ game+0x6ad7388
	void AddFloat(); // Function CoherentUIGTPlugin.*9885ef9c1c.AddFloat // Final|Native|Public|BlueprintCallable // @ game+0x6ad74f8
	void *2309233aa3(); // Function CoherentUIGTPlugin.*9885ef9c1c.*2309233aa3 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6ad7ccc
	void *a281dd395b(); // Function CoherentUIGTPlugin.*9885ef9c1c.*a281dd395b // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6ad7a08
	void *f12125e308(); // Function CoherentUIGTPlugin.*9885ef9c1c.*f12125e308 // Final|Native|Public|BlueprintCallable // @ game+0x6ad721c
	void *0e4e1684ad(); // Function CoherentUIGTPlugin.*9885ef9c1c.*0e4e1684ad // Final|Native|Public|BlueprintCallable // @ game+0x6ad7be8
	void *8499d03261(); // Function CoherentUIGTPlugin.*9885ef9c1c.*8499d03261 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6ad6e34
	void *135472e520(); // Function CoherentUIGTPlugin.*9885ef9c1c.*135472e520 // Final|Native|Public|BlueprintCallable // @ game+0x6ad786c
	void *d9d56e8057(); // Function CoherentUIGTPlugin.*9885ef9c1c.*d9d56e8057 // Final|Native|Public|BlueprintCallable // @ game+0x6ad7664
};

// Class CoherentUIGTPlugin.*f55042be29
// Size: 0x48 (Inherited: 0x30)
struct U*f55042be29 : UObject {
	struct FString EventName; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	void *029a8e4ac8(); // Function CoherentUIGTPlugin.*f55042be29.*029a8e4ac8 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6ad88ac
	void *815ddb91b8(); // Function CoherentUIGTPlugin.*f55042be29.*815ddb91b8 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6ad894c
	void GetString(); // Function CoherentUIGTPlugin.*f55042be29.GetString // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6ad8a14
	void *d53f6efc62(); // Function CoherentUIGTPlugin.*f55042be29.*d53f6efc62 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6ad8774
	void *81060cd8e8(); // Function CoherentUIGTPlugin.*f55042be29.*81060cd8e8 // Final|Native|Public|BlueprintCallable // @ game+0x6ad91c0
};

// Class CoherentUIGTPlugin.*343f6bba5e
// Size: 0x30 (Inherited: 0x30)
struct U*343f6bba5e : UObject {
};

// Class CoherentUIGTPlugin.*5fcf8b1972
// Size: 0x470 (Inherited: 0x200)
struct U*5fcf8b1972 : UActorComponent {
	struct FMulticastDelegate ReadyForBindings; // 0x200(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x210(0x10)
	struct FMulticastDelegate FinishLoad; // 0x220(0x10)
	struct FMulticastDelegate FailLoad; // 0x230(0x10)
	struct FMulticastDelegate StartLoading; // 0x240(0x10)
	struct FMulticastDelegate NavigateTo; // 0x250(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x260(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x270(0x10)
	DelegateProperty *8e187951a1; // 0x280(0x10)
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
	struct U*3a1cdc8eca* *045723dfed; // 0x430(0x08)
	char pad_438[0x38]; // 0x438(0x38)

	void Reload(); // Function CoherentUIGTPlugin.*5fcf8b1972.Reload // Final|Native|Public|BlueprintCallable // @ game+0x6ad9300
	void *33c16e48fa(); // Function CoherentUIGTPlugin.*5fcf8b1972.*33c16e48fa // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ada28c
	void *11d5a2ed62(); // Function CoherentUIGTPlugin.*5fcf8b1972.*11d5a2ed62 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8e04
	void *3ab77c36aa(); // Function CoherentUIGTPlugin.*5fcf8b1972.*3ab77c36aa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8e38
	void Resize(); // Function CoherentUIGTPlugin.*5fcf8b1972.Resize // Native|Public|BlueprintCallable // @ game+0x6ad9344
	void *5c63fd5733(); // Function CoherentUIGTPlugin.*5fcf8b1972.*5c63fd5733 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8d1c
	void *a97a48aa56(); // Function CoherentUIGTPlugin.*5fcf8b1972.*a97a48aa56 // Final|Native|Public|BlueprintCallable // @ game+0x6ad9420
	void *178ab35cbe(); // Function CoherentUIGTPlugin.*5fcf8b1972.*178ab35cbe // Final|Native|Public|BlueprintCallable // @ game+0x6ad854c
	void *1512b5bd6e(); // Function CoherentUIGTPlugin.*5fcf8b1972.*1512b5bd6e // Final|Native|Public|BlueprintCallable // @ game+0x6ad7f44
	void *a423e163fb(); // Function CoherentUIGTPlugin.*5fcf8b1972.*a423e163fb // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ad929c
	void *1f35139b23(); // Function CoherentUIGTPlugin.*5fcf8b1972.*1f35139b23 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ad9d60
	void *3d66f3e532(); // Function CoherentUIGTPlugin.*5fcf8b1972.*3d66f3e532 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8814
	void *50c24047e0(); // Function CoherentUIGTPlugin.*5fcf8b1972.*50c24047e0 // Final|Native|Public|BlueprintCallable // @ game+0x6ad8710
	void *a25269a7e6(); // Function CoherentUIGTPlugin.*5fcf8b1972.*a25269a7e6 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ad9cb8
	void *717d352bfd(); // Function CoherentUIGTPlugin.*5fcf8b1972.*717d352bfd // Final|Native|Public|BlueprintCallable // @ game+0x6ad8204
	void *1ea23157db(); // Function CoherentUIGTPlugin.*5fcf8b1972.*1ea23157db // Final|Native|Public|BlueprintCallable // @ game+0x6ad8608
	void *002c195b57(); // Function CoherentUIGTPlugin.*5fcf8b1972.*002c195b57 // Final|Native|Public|BlueprintCallable // @ game+0x6ad867c
	void *339b76ef1b(); // Function CoherentUIGTPlugin.*5fcf8b1972.*339b76ef1b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8dbc
	void *40c7015b97(); // Function CoherentUIGTPlugin.*5fcf8b1972.*40c7015b97 // Final|Native|Public|BlueprintCallable // @ game+0x6ad9b7c
	void *7fb38cf17c(); // Function CoherentUIGTPlugin.*5fcf8b1972.*7fb38cf17c // Final|Native|Public|BlueprintCallable // @ game+0x6ad7ed0
	void Load(); // Function CoherentUIGTPlugin.*5fcf8b1972.Load // Final|Native|Public|BlueprintCallable // @ game+0x6ad8eac
	void *c04e616c2a(); // Function CoherentUIGTPlugin.*5fcf8b1972.*c04e616c2a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8b04
	void *065b3065ae(); // Function CoherentUIGTPlugin.*5fcf8b1972.*065b3065ae // Final|Native|Public|BlueprintCallable|Const // @ game+0x6ada0f4
};

// Class CoherentUIGTPlugin.*793b76b3a6
// Size: 0x4a0 (Inherited: 0x470)
struct U*793b76b3a6 : U*5fcf8b1972 {
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
struct UCoherentUIGTHUD : U*5fcf8b1972 {
	struct FStringAssetReference *8a3764c04c; // 0x468(0x10)
	struct UMaterial* *94ca56569b; // 0x478(0x08)
	struct UMaterialInstanceDynamic* *9c04e52b5a; // 0x480(0x08)
};

// Class CoherentUIGTPlugin.*3133203f26
// Size: 0x30 (Inherited: 0x30)
struct U*3133203f26 : UBlueprintFunctionLibrary {

	void *a281dd395b(); // Function CoherentUIGTPlugin.*3133203f26.*a281dd395b // Final|Native|Static|Public|BlueprintCallable // @ game+0x6ad78fc
	void *f12125e308(); // Function CoherentUIGTPlugin.*3133203f26.*f12125e308 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6ad7144
	void *3096d37d20(); // Function CoherentUIGTPlugin.*3133203f26.*3096d37d20 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6ad9848
	void *ad6c0c780a(); // Function CoherentUIGTPlugin.*3133203f26.*ad6c0c780a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6ad72b0
	void *178ab35cbe(); // Function CoherentUIGTPlugin.*3133203f26.*178ab35cbe // Final|Native|Static|Public|BlueprintCallable // @ game+0x6ad8578
	void *0e4e1684ad(); // Function CoherentUIGTPlugin.*3133203f26.*0e4e1684ad // Final|Native|Static|Public|BlueprintCallable // @ game+0x6ad7ac8
	void *1f35139b23(); // Function CoherentUIGTPlugin.*3133203f26.*1f35139b23 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6ad9e7c
	void *8499d03261(); // Function CoherentUIGTPlugin.*3133203f26.*8499d03261 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6ad6cd4
	void *d9d56e8057(); // Function CoherentUIGTPlugin.*3133203f26.*d9d56e8057 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6ad7590
	void *19c2c35fb2(); // Function CoherentUIGTPlugin.*3133203f26.*19c2c35fb2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6ad6f50
	void *135472e520(); // Function CoherentUIGTPlugin.*3133203f26.*135472e520 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6ad7794
	void AddFloat(); // Function CoherentUIGTPlugin.*3133203f26.AddFloat // Final|Native|Static|Public|BlueprintCallable // @ game+0x6ad741c
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x588 (Inherited: 0x4f0)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4f0(0x08)
	char pad_4F8[0x90]; // 0x4f8(0x90)

	void *fa86c5bb68(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*fa86c5bb68 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6ad9968
	void *ce5cf316c5(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*ce5cf316c5 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6ad8b54
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x460 (Inherited: 0x408)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x408(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x418(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x428(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x438(0x10)
	char pad_448[0x18]; // 0x448(0x18)

	void *111456ab1e(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*111456ab1e // Final|Native|Public|BlueprintCallable // @ game+0x6ad95f4
	void *5263900c36(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*5263900c36 // Final|Native|Public|BlueprintCallable // @ game+0x6ad9d30
	void *fee10e0639(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*fee10e0639 // Final|Native|Public|BlueprintCallable // @ game+0x6ad9560
	void *61a72446cc(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*61a72446cc // Final|Native|Public|BlueprintCallable // @ game+0x6ad97b8
	void *42073b2fe0(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*42073b2fe0 // Final|Native|Public|BlueprintCallable // @ game+0x6ad9684
	void *6315441ee3(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*6315441ee3 // Final|Native|Public|BlueprintCallable // @ game+0x6ad7e3c
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // Final|Native|Public|BlueprintCallable // @ game+0x6ad7da8
	void Initialize(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x6ad8b78
	void *8daa104973(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*8daa104973 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8cf8
	void *01526e9711(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*01526e9711 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad887c
	void IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ad8da0
};

// Class CoherentUIGTPlugin.*1aa270440d
// Size: 0x230 (Inherited: 0x200)
struct U*1aa270440d : UActorComponent {
	struct FString LinkName; // 0x200(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x210(0x08)
	char pad_218[0x18]; // 0x218(0x18)

	void *59b173f3d7(); // Function CoherentUIGTPlugin.*1aa270440d.*59b173f3d7 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6ad902c
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
	enum class *21391c8a76 MSAA; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};


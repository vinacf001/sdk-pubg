// Class CoherentUIGTPlugin.*9f227672ef
// Size: 0x3d0 (Inherited: 0x128)
struct U*9f227672ef : UWidget {
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
	struct U*176a3b13f2* *6f65c42198; // 0x330(0x08)
	char pad_338[0x80]; // 0x338(0x80)
	struct FString URL; // 0x3b8(0x10)
	float ClickThroughAlphaThreshold; // 0x3c8(0x04)
	bool Transparent; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)

	struct FString TriggerJSEvent(); // Function CoherentUIGTPlugin.*9f227672ef.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x68fdae0
	void Reload(); // Function CoherentUIGTPlugin.*9f227672ef.Reload // Final|Native|Public|BlueprintCallable // @ game+0x68fce38
	void GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*9f227672ef.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc35c
	void IsDocumentReady(); // Function CoherentUIGTPlugin.*9f227672ef.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc864
	void Redraw(); // Function CoherentUIGTPlugin.*9f227672ef.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x68fcdd4
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.*9f227672ef.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x68fc148
	void GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*9f227672ef.GetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc39c
	struct FString CreateDataModelFromStruct(); // Function CoherentUIGTPlugin.*9f227672ef.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x68fbeb4
	void CreateDataModelFromObject(); // Function CoherentUIGTPlugin.*9f227672ef.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x68fbbb4
	void UpdateWholeDataModelFromStruct(); // Function CoherentUIGTPlugin.*9f227672ef.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x68fdeb4
	void IsReadyForBindings(); // Function CoherentUIGTPlugin.*9f227672ef.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc8e8
	void SynchronizeModels(); // Function CoherentUIGTPlugin.*9f227672ef.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x68fd7fc
	void Load(); // Function CoherentUIGTPlugin.*9f227672ef.Load // Final|Native|Public|BlueprintCallable // @ game+0x68fca74
	void ShowPaintRects(); // Function CoherentUIGTPlugin.*9f227672ef.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x68fd720
	void HasRequestedView(); // Function CoherentUIGTPlugin.*9f227672ef.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc62c
	void SetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*9f227672ef.SetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable // @ game+0x68fd224
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.*9f227672ef.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x68fba18
	void SetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*9f227672ef.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x68fcfc4
	void IsTransparent(); // Function CoherentUIGTPlugin.*9f227672ef.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc97c
	void CreateJSEvent(); // Function CoherentUIGTPlugin.*9f227672ef.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x68fc054
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.*9f227672ef.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x68fc248
	void GetRenderTexture(); // Function CoherentUIGTPlugin.*9f227672ef.GetRenderTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc4f4
	void UpdateWholeDataModelFromObject(); // Function CoherentUIGTPlugin.*9f227672ef.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x68fdcc8
	void IsReadyToCreateView(); // Function CoherentUIGTPlugin.*9f227672ef.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc90c
};

// Class CoherentUIGTPlugin.*4220734824
// Size: 0x28 (Inherited: 0x28)
struct U*4220734824 : UObject {
};

// Class CoherentUIGTPlugin.*176a3b13f2
// Size: 0x1b8 (Inherited: 0x28)
struct U*176a3b13f2 : UObject {
	struct UObject* Owner; // 0x28(0x08)
	struct TMap<int32, struct F*6c47452db8> Sounds; // 0x30(0x50)
	char pad_80[0x138]; // 0x80(0x138)
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x428 (Inherited: 0x3e8)
struct ACoherentUIGTSystem : AActor {
	char pad_3E8[0x40]; // 0x3e8(0x40)
};

// Class CoherentUIGTPlugin.*264dc76dcf
// Size: 0xb8 (Inherited: 0x28)
struct U*264dc76dcf : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct TArray<struct UStruct*> *bb8498c070; // 0xa8(0x10)

	void *0e8a6830ec(); // Function CoherentUIGTPlugin.*264dc76dcf.*0e8a6830ec // Final|Native|Public|BlueprintCallable // @ game+0x68fb174
	void *2d2795e19c(); // Function CoherentUIGTPlugin.*264dc76dcf.*2d2795e19c // Final|Native|Public|BlueprintCallable // @ game+0x68fb37c
	void *e3150bfc3c(); // Function CoherentUIGTPlugin.*264dc76dcf.*e3150bfc3c // Final|Native|Public|BlueprintCallable // @ game+0x68fad2c
	void *b8305dec21(); // Function CoherentUIGTPlugin.*264dc76dcf.*b8305dec21 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68fb7dc
	void *9d1f12c095(); // Function CoherentUIGTPlugin.*264dc76dcf.*9d1f12c095 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68fa948
	void *53c21c4348(); // Function CoherentUIGTPlugin.*264dc76dcf.*53c21c4348 // Final|Native|Public|BlueprintCallable // @ game+0x68fb6f8
	void *aad3120f57(); // Function CoherentUIGTPlugin.*264dc76dcf.*aad3120f57 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68fb518
	void *7fff93080e(); // Function CoherentUIGTPlugin.*264dc76dcf.*7fff93080e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68fb204
	void *8a7dbe80c5(); // Function CoherentUIGTPlugin.*264dc76dcf.*8a7dbe80c5 // Final|Native|Public|BlueprintCallable // @ game+0x68fae98
	void AddFloat(); // Function CoherentUIGTPlugin.*264dc76dcf.AddFloat // Final|Native|Public|BlueprintCallable // @ game+0x68fb008
};

// Class CoherentUIGTPlugin.*c34ce542ca
// Size: 0x40 (Inherited: 0x28)
struct U*c34ce542ca : UObject {
	struct FString EventName; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)

	void *b1bd9bb87b(int32 Index); // Function CoherentUIGTPlugin.*c34ce542ca.*b1bd9bb87b // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68fc27c
	void GetString(); // Function CoherentUIGTPlugin.*c34ce542ca.GetString // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68fc51c
	int32 *aef636ceca(); // Function CoherentUIGTPlugin.*c34ce542ca.*aef636ceca // Final|Native|Public|BlueprintCallable // @ game+0x68fccc8
	int32 *87922de353(); // Function CoherentUIGTPlugin.*c34ce542ca.*87922de353 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68fc454
	void *745677527b(int32 Index); // Function CoherentUIGTPlugin.*c34ce542ca.*745677527b // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68fc3b4
};

// Class CoherentUIGTPlugin.*585f91e20a
// Size: 0x28 (Inherited: 0x28)
struct U*585f91e20a : UObject {
};

// Class CoherentUIGTPlugin.*4326b9727b
// Size: 0x460 (Inherited: 0x1f0)
struct U*4326b9727b : UActorComponent {
	struct FMulticastDelegate ReadyForBindings; // 0x1f0(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x200(0x10)
	struct FMulticastDelegate FinishLoad; // 0x210(0x10)
	struct FMulticastDelegate FailLoad; // 0x220(0x10)
	struct FMulticastDelegate StartLoading; // 0x230(0x10)
	struct FMulticastDelegate NavigateTo; // 0x240(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x250(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x260(0x10)
	DelegateProperty *f8ba301675; // 0x270(0x10)
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
	struct U*176a3b13f2* *6f65c42198; // 0x420(0x08)
	char pad_428[0x38]; // 0x428(0x38)

	void *e172f194e7(struct FString Name); // Function CoherentUIGTPlugin.*4326b9727b.*e172f194e7 // Final|Native|Public|BlueprintCallable|Const // @ game+0x68fd868
	void Load(); // Function CoherentUIGTPlugin.*4326b9727b.Load // Final|Native|Public|BlueprintCallable // @ game+0x68fc9b4
	void *35a999de31(); // Function CoherentUIGTPlugin.*4326b9727b.*35a999de31 // Final|Native|Public|BlueprintCallable|Const // @ game+0x68fcda4
	void *24dc84325a(); // Function CoherentUIGTPlugin.*4326b9727b.*24dc84325a // Final|Native|Public|BlueprintCallable // @ game+0x68fd684
	void Resize(); // Function CoherentUIGTPlugin.*4326b9727b.Resize // Native|Public|BlueprintCallable // @ game+0x68fce4c
	void Reload(); // Function CoherentUIGTPlugin.*4326b9727b.Reload // Final|Native|Public|BlueprintCallable // @ game+0x68fce08
	void *e8fe977d47(); // Function CoherentUIGTPlugin.*4326b9727b.*e8fe977d47 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc90c
	void *3c28716932(); // Function CoherentUIGTPlugin.*4326b9727b.*3c28716932 // Final|Native|Public|BlueprintCallable|Const // @ game+0x68fdd94
	void *ec58c6576d(); // Function CoherentUIGTPlugin.*4326b9727b.*ec58c6576d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc940
	void *bdb7f032e0(); // Function CoherentUIGTPlugin.*4326b9727b.*bdb7f032e0 // Final|Native|Public|BlueprintCallable // @ game+0x68fcf28
	void *f2cc38d995(); // Function CoherentUIGTPlugin.*4326b9727b.*f2cc38d995 // Final|Native|Public|BlueprintCallable // @ game+0x68fbd14
	void *38078f969d(); // Function CoherentUIGTPlugin.*4326b9727b.*38078f969d // Final|Native|Public|BlueprintCallable|Const // @ game+0x68fd7c0
	void *6426acf495(); // Function CoherentUIGTPlugin.*4326b9727b.*6426acf495 // Final|Native|Public|BlueprintCallable // @ game+0x68fb9e0
	void *1b9b16130b(); // Function CoherentUIGTPlugin.*4326b9727b.*1b9b16130b // Final|Native|Public|BlueprintCallable|Const // @ game+0x68fdbfc
	void *6a3b14fd2b(); // Function CoherentUIGTPlugin.*4326b9727b.*6a3b14fd2b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc8c4
	void *09dba72fdb(); // Function CoherentUIGTPlugin.*4326b9727b.*09dba72fdb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc31c
	struct FString *3e7f3ba805(); // Function CoherentUIGTPlugin.*4326b9727b.*3e7f3ba805 // Final|Native|Public|BlueprintCallable // @ game+0x68fba54
	void *263faed944(); // Function CoherentUIGTPlugin.*4326b9727b.*263faed944 // Final|Native|Public|BlueprintCallable // @ game+0x68fc218
	void *cae4267e7d(); // Function CoherentUIGTPlugin.*4326b9727b.*cae4267e7d // Final|Native|Public|BlueprintCallable // @ game+0x68fc184
	void *dcd3283e65(); // Function CoherentUIGTPlugin.*4326b9727b.*dcd3283e65 // Final|Native|Public|BlueprintCallable // @ game+0x68fc054
	void *0c38203de8(); // Function CoherentUIGTPlugin.*4326b9727b.*0c38203de8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc60c
	void *eba99e1ed4(); // Function CoherentUIGTPlugin.*4326b9727b.*eba99e1ed4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc824
	void *2f13556f47(); // Function CoherentUIGTPlugin.*4326b9727b.*2f13556f47 // Final|Native|Public|BlueprintCallable // @ game+0x68fc110
};

// Class CoherentUIGTPlugin.*239d634b0d
// Size: 0x490 (Inherited: 0x460)
struct U*239d634b0d : U*4326b9727b {
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
struct UCoherentUIGTHUD : U*4326b9727b {
	struct FStringAssetReference *48c5d80417; // 0x458(0x10)
	struct UMaterial* *5b53c5310c; // 0x468(0x08)
	struct UMaterialInstanceDynamic* *173bf95bc7; // 0x470(0x08)
};

// Class CoherentUIGTPlugin.*8829c78329
// Size: 0x28 (Inherited: 0x28)
struct U*8829c78329 : UBlueprintFunctionLibrary {

	struct U*264dc76dcf* *8a7dbe80c5(); // Function CoherentUIGTPlugin.*8829c78329.*8a7dbe80c5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68fadc0
	void *aad3120f57(); // Function CoherentUIGTPlugin.*8829c78329.*aad3120f57 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68fb40c
	void *2d2795e19c(); // Function CoherentUIGTPlugin.*8829c78329.*2d2795e19c // Final|Native|Static|Public|BlueprintCallable // @ game+0x68fb2a4
	struct TArray<int32> *9d1f12c095(); // Function CoherentUIGTPlugin.*8829c78329.*9d1f12c095 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x68fa7e8
	void AddFloat(struct U*264dc76dcf* JSEvent); // Function CoherentUIGTPlugin.*8829c78329.AddFloat // Final|Native|Static|Public|BlueprintCallable // @ game+0x68faf2c
	void *ef225e6d40(struct UObject* WorldContextObject); // Function CoherentUIGTPlugin.*8829c78329.*ef225e6d40 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x68fd350
	struct U*264dc76dcf* *53c21c4348(); // Function CoherentUIGTPlugin.*8829c78329.*53c21c4348 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68fb5d8
	struct U*264dc76dcf* *0e8a6830ec(); // Function CoherentUIGTPlugin.*8829c78329.*0e8a6830ec // Final|Native|Static|Public|BlueprintCallable // @ game+0x68fb0a0
	void *f564abeb7e(struct U*264dc76dcf* JSEvent); // Function CoherentUIGTPlugin.*8829c78329.*f564abeb7e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x68faa64
	void *e3150bfc3c(); // Function CoherentUIGTPlugin.*8829c78329.*e3150bfc3c // Final|Native|Static|Public|BlueprintCallable // @ game+0x68fac54
	struct UObject* *dcd3283e65(); // Function CoherentUIGTPlugin.*8829c78329.*dcd3283e65 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68fc080
	struct U*4326b9727b* *e172f194e7(struct FString EventName); // Function CoherentUIGTPlugin.*8829c78329.*e172f194e7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68fd984
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x568 (Inherited: 0x4d0)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4d0(0x08)
	char pad_4D8[0x90]; // 0x4d8(0x90)

	void *c308216d93(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*c308216d93 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68fc65c
	float *a62ef3460c(bool bIsTransparent); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*a62ef3460c // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x68fd470
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x440 (Inherited: 0x3e8)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x3e8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x3f8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x408(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x418(0x10)
	char pad_428[0x18]; // 0x428(0x18)

	void *93fb9d0b85(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*93fb9d0b85 // Final|Native|Public|BlueprintCallable // @ game+0x68fd0fc
	void *6c8fc8a2c2(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*6c8fc8a2c2 // Final|Native|Public|BlueprintCallable // @ game+0x68fd068
	void *603d88cb7e(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*603d88cb7e // Final|Native|Public|BlueprintCallable // @ game+0x68fb94c
	void *eda206412a(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*eda206412a // Final|Native|Public|BlueprintCallable // @ game+0x68fd18c
	void *2f2fff63df(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*2f2fff63df // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc384
	void IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc8a8
	void *7671adbc2b(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*7671adbc2b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc800
	void *3bc1743cd0(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*3bc1743cd0 // Final|Native|Public|BlueprintCallable // @ game+0x68fd2c0
	void Initialize(enum class ECollisionChannel CollisionChannel, enum class *e667af27cf RaycastQuality); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x68fc680
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // Final|Native|Public|BlueprintCallable // @ game+0x68fb8b8
	void *bca26cec29(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*bca26cec29 // Final|Native|Public|BlueprintCallable // @ game+0x68fd838
};

// Class CoherentUIGTPlugin.*43f25e873c
// Size: 0x220 (Inherited: 0x1f0)
struct U*43f25e873c : UActorComponent {
	struct FString LinkName; // 0x1f0(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x200(0x08)
	char pad_208[0x18]; // 0x208(0x18)

	struct U*4326b9727b* *18e6de14d6(struct FString Name); // Function CoherentUIGTPlugin.*43f25e873c.*18e6de14d6 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68fcb34
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
	enum class *55ff64bc4c MSAA; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
};


// Class CoherentUIGTPlugin.*9f227672ef
// Size: 0x3d0 (Inherited: 0x130)
struct U*9f227672ef : UWidget {
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
	struct U*176a3b13f2* *6f65c42198; // 0x330(0x08)
	char pad_338[0x80]; // 0x338(0x80)
	struct FString URL; // 0x3b8(0x10)
	float ClickThroughAlphaThreshold; // 0x3c8(0x04)
	bool Transparent; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)

	struct U*264dc76dcf* TriggerJSEvent(); // Function CoherentUIGTPlugin.*9f227672ef.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x69c9a54
	void Reload(); // Function CoherentUIGTPlugin.*9f227672ef.Reload // Final|Native|Public|BlueprintCallable // @ game+0x69c8dac
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*9f227672ef.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c82d0
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.*9f227672ef.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c87d8
	void Redraw(); // Function CoherentUIGTPlugin.*9f227672ef.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x69c8d48
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.*9f227672ef.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x69c80bc
	enum class ECoherentUIGTInputPropagationBehaviour GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*9f227672ef.GetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c8310
	struct UStructProperty* CreateDataModelFromStruct(); // Function CoherentUIGTPlugin.*9f227672ef.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x69c7e24
	struct UObject* CreateDataModelFromObject(); // Function CoherentUIGTPlugin.*9f227672ef.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x69c7b20
	struct UStructProperty* UpdateWholeDataModelFromStruct(); // Function CoherentUIGTPlugin.*9f227672ef.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x69c9e2c
	bool IsReadyForBindings(); // Function CoherentUIGTPlugin.*9f227672ef.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c885c
	void SynchronizeModels(); // Function CoherentUIGTPlugin.*9f227672ef.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x69c9770
	struct FString Load(); // Function CoherentUIGTPlugin.*9f227672ef.Load // Final|Native|Public|BlueprintCallable // @ game+0x69c89e8
	bool ShowPaintRects(); // Function CoherentUIGTPlugin.*9f227672ef.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x69c9694
	bool HasRequestedView(); // Function CoherentUIGTPlugin.*9f227672ef.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c85a0
	enum class ECoherentUIGTInputPropagationBehaviour SetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.*9f227672ef.SetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable // @ game+0x69c9198
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.*9f227672ef.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x69c7984
	float SetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.*9f227672ef.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x69c8f38
	bool IsTransparent(); // Function CoherentUIGTPlugin.*9f227672ef.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c88f0
	struct U*264dc76dcf* CreateJSEvent(); // Function CoherentUIGTPlugin.*9f227672ef.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x69c7fc8
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.*9f227672ef.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x69c81bc
	struct UTextureRenderTarget2D* GetRenderTexture(); // Function CoherentUIGTPlugin.*9f227672ef.GetRenderTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c8468
	struct UObject* UpdateWholeDataModelFromObject(); // Function CoherentUIGTPlugin.*9f227672ef.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x69c9c3c
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.*9f227672ef.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c8880
};

// Class CoherentUIGTPlugin.*4220734824
// Size: 0x30 (Inherited: 0x30)
struct U*4220734824 : UObject {
};

// Class CoherentUIGTPlugin.*176a3b13f2
// Size: 0x1c0 (Inherited: 0x30)
struct U*176a3b13f2 : UObject {
	struct UObject* Owner; // 0x30(0x08)
	struct TMap<int32, struct F*6c47452db8> Sounds; // 0x38(0x50)
	char pad_88[0x138]; // 0x88(0x138)
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x440 (Inherited: 0x400)
struct ACoherentUIGTSystem : AActor {
	char pad_400[0x40]; // 0x400(0x40)
};

// Class CoherentUIGTPlugin.*264dc76dcf
// Size: 0xc0 (Inherited: 0x30)
struct U*264dc76dcf : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct UStruct*> *bb8498c070; // 0xb0(0x10)

	int32 *0e8a6830ec(); // Function CoherentUIGTPlugin.*264dc76dcf.*0e8a6830ec // Final|Native|Public|BlueprintCallable // @ game+0x69c70e0
	struct UObject* *2d2795e19c(); // Function CoherentUIGTPlugin.*264dc76dcf.*2d2795e19c // Final|Native|Public|BlueprintCallable // @ game+0x69c72e8
	bool *e3150bfc3c(); // Function CoherentUIGTPlugin.*264dc76dcf.*e3150bfc3c // Final|Native|Public|BlueprintCallable // @ game+0x69c6c98
	struct FText *b8305dec21(); // Function CoherentUIGTPlugin.*264dc76dcf.*b8305dec21 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69c7748
	struct TArray<int32> *9d1f12c095(); // Function CoherentUIGTPlugin.*264dc76dcf.*9d1f12c095 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69c68b0
	struct UStructProperty* *53c21c4348(); // Function CoherentUIGTPlugin.*264dc76dcf.*53c21c4348 // Final|Native|Public|BlueprintCallable // @ game+0x69c7664
	struct FString *aad3120f57(); // Function CoherentUIGTPlugin.*264dc76dcf.*aad3120f57 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x69c7484
	struct FName *7fff93080e(); // Function CoherentUIGTPlugin.*264dc76dcf.*7fff93080e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69c7170
	bool *8a7dbe80c5(); // Function CoherentUIGTPlugin.*264dc76dcf.*8a7dbe80c5 // Final|Native|Public|BlueprintCallable // @ game+0x69c6e04
	float AddFloat(); // Function CoherentUIGTPlugin.*264dc76dcf.AddFloat // Final|Native|Public|BlueprintCallable // @ game+0x69c6f74
};

// Class CoherentUIGTPlugin.*c34ce542ca
// Size: 0x48 (Inherited: 0x30)
struct U*c34ce542ca : UObject {
	struct FString EventName; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	bool *b1bd9bb87b(); // Function CoherentUIGTPlugin.*c34ce542ca.*b1bd9bb87b // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x69c81f0
	struct FString GetString(); // Function CoherentUIGTPlugin.*c34ce542ca.GetString // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x69c8490
	struct UObject* *aef636ceca(); // Function CoherentUIGTPlugin.*c34ce542ca.*aef636ceca // Final|Native|Public|BlueprintCallable // @ game+0x69c8c3c
	float *87922de353(); // Function CoherentUIGTPlugin.*c34ce542ca.*87922de353 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x69c83c8
	int32 *745677527b(); // Function CoherentUIGTPlugin.*c34ce542ca.*745677527b // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x69c8328
};

// Class CoherentUIGTPlugin.*585f91e20a
// Size: 0x30 (Inherited: 0x30)
struct U*585f91e20a : UObject {
};

// Class CoherentUIGTPlugin.*4326b9727b
// Size: 0x470 (Inherited: 0x200)
struct U*4326b9727b : UActorComponent {
	struct FMulticastDelegate ReadyForBindings; // 0x200(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x210(0x10)
	struct FMulticastDelegate FinishLoad; // 0x220(0x10)
	struct FMulticastDelegate FailLoad; // 0x230(0x10)
	struct FMulticastDelegate StartLoading; // 0x240(0x10)
	struct FMulticastDelegate NavigateTo; // 0x250(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x260(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x270(0x10)
	DelegateProperty *f8ba301675; // 0x280(0x10)
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
	struct U*176a3b13f2* *6f65c42198; // 0x430(0x08)
	char pad_438[0x38]; // 0x438(0x38)

	struct U*264dc76dcf* *e172f194e7(); // Function CoherentUIGTPlugin.*4326b9727b.*e172f194e7 // Final|Native|Public|BlueprintCallable|Const // @ game+0x69c97dc
	struct FString Load(); // Function CoherentUIGTPlugin.*4326b9727b.Load // Final|Native|Public|BlueprintCallable // @ game+0x69c8928
	void *35a999de31(); // Function CoherentUIGTPlugin.*4326b9727b.*35a999de31 // Final|Native|Public|BlueprintCallable|Const // @ game+0x69c8d18
	bool *24dc84325a(); // Function CoherentUIGTPlugin.*4326b9727b.*24dc84325a // Final|Native|Public|BlueprintCallable // @ game+0x69c95f8
	int32 Resize(); // Function CoherentUIGTPlugin.*4326b9727b.Resize // Native|Public|BlueprintCallable // @ game+0x69c8dc0
	void Reload(); // Function CoherentUIGTPlugin.*4326b9727b.Reload // Final|Native|Public|BlueprintCallable // @ game+0x69c8d7c
	bool *e8fe977d47(); // Function CoherentUIGTPlugin.*4326b9727b.*e8fe977d47 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c8880
	struct UStructProperty* *3c28716932(); // Function CoherentUIGTPlugin.*4326b9727b.*3c28716932 // Final|Native|Public|BlueprintCallable|Const // @ game+0x69c9d08
	bool *ec58c6576d(); // Function CoherentUIGTPlugin.*4326b9727b.*ec58c6576d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c88b4
	float *bdb7f032e0(); // Function CoherentUIGTPlugin.*4326b9727b.*bdb7f032e0 // Final|Native|Public|BlueprintCallable // @ game+0x69c8e9c
	struct UStructProperty* *f2cc38d995(); // Function CoherentUIGTPlugin.*4326b9727b.*f2cc38d995 // Final|Native|Public|BlueprintCallable // @ game+0x69c7c80
	void *38078f969d(); // Function CoherentUIGTPlugin.*4326b9727b.*38078f969d // Final|Native|Public|BlueprintCallable|Const // @ game+0x69c9734
	void *6426acf495(); // Function CoherentUIGTPlugin.*4326b9727b.*6426acf495 // Final|Native|Public|BlueprintCallable // @ game+0x69c794c
	struct UObject* *1b9b16130b(); // Function CoherentUIGTPlugin.*4326b9727b.*1b9b16130b // Final|Native|Public|BlueprintCallable|Const // @ game+0x69c9b70
	bool *6a3b14fd2b(); // Function CoherentUIGTPlugin.*4326b9727b.*6a3b14fd2b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c8838
	float *09dba72fdb(); // Function CoherentUIGTPlugin.*4326b9727b.*09dba72fdb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c8290
	struct UObject* *3e7f3ba805(); // Function CoherentUIGTPlugin.*4326b9727b.*3e7f3ba805 // Final|Native|Public|BlueprintCallable // @ game+0x69c79c0
	void *263faed944(); // Function CoherentUIGTPlugin.*4326b9727b.*263faed944 // Final|Native|Public|BlueprintCallable // @ game+0x69c818c
	bool *cae4267e7d(); // Function CoherentUIGTPlugin.*4326b9727b.*cae4267e7d // Final|Native|Public|BlueprintCallable // @ game+0x69c80f8
	struct U*264dc76dcf* *dcd3283e65(); // Function CoherentUIGTPlugin.*4326b9727b.*dcd3283e65 // Final|Native|Public|BlueprintCallable // @ game+0x69c7fc8
	bool *0c38203de8(); // Function CoherentUIGTPlugin.*4326b9727b.*0c38203de8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c8580
	bool *eba99e1ed4(); // Function CoherentUIGTPlugin.*4326b9727b.*eba99e1ed4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c8798
	void *2f13556f47(); // Function CoherentUIGTPlugin.*4326b9727b.*2f13556f47 // Final|Native|Public|BlueprintCallable // @ game+0x69c8084
};

// Class CoherentUIGTPlugin.*239d634b0d
// Size: 0x4a0 (Inherited: 0x470)
struct U*239d634b0d : U*4326b9727b {
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
struct UCoherentUIGTHUD : U*4326b9727b {
	struct FStringAssetReference *48c5d80417; // 0x468(0x10)
	struct UMaterial* *5b53c5310c; // 0x478(0x08)
	struct UMaterialInstanceDynamic* *173bf95bc7; // 0x480(0x08)
};

// Class CoherentUIGTPlugin.*8829c78329
// Size: 0x30 (Inherited: 0x30)
struct U*8829c78329 : UBlueprintFunctionLibrary {

	bool *8a7dbe80c5(); // Function CoherentUIGTPlugin.*8829c78329.*8a7dbe80c5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69c6d2c
	struct FString *aad3120f57(); // Function CoherentUIGTPlugin.*8829c78329.*aad3120f57 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69c7378
	struct UObject* *2d2795e19c(); // Function CoherentUIGTPlugin.*8829c78329.*2d2795e19c // Final|Native|Static|Public|BlueprintCallable // @ game+0x69c7210
	int32 *9d1f12c095(); // Function CoherentUIGTPlugin.*8829c78329.*9d1f12c095 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69c6750
	float AddFloat(); // Function CoherentUIGTPlugin.*8829c78329.AddFloat // Final|Native|Static|Public|BlueprintCallable // @ game+0x69c6e98
	struct F*fe78125f4b *ef225e6d40(); // Function CoherentUIGTPlugin.*8829c78329.*ef225e6d40 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69c92c4
	struct UStructProperty* *53c21c4348(); // Function CoherentUIGTPlugin.*8829c78329.*53c21c4348 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69c7544
	int32 *0e8a6830ec(); // Function CoherentUIGTPlugin.*8829c78329.*0e8a6830ec // Final|Native|Static|Public|BlueprintCallable // @ game+0x69c700c
	struct TArray<int32> *f564abeb7e(); // Function CoherentUIGTPlugin.*8829c78329.*f564abeb7e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69c69cc
	bool *e3150bfc3c(); // Function CoherentUIGTPlugin.*8829c78329.*e3150bfc3c // Final|Native|Static|Public|BlueprintCallable // @ game+0x69c6bc0
	struct U*264dc76dcf* *dcd3283e65(); // Function CoherentUIGTPlugin.*8829c78329.*dcd3283e65 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69c7ff4
	struct U*264dc76dcf* *e172f194e7(); // Function CoherentUIGTPlugin.*8829c78329.*e172f194e7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69c98f8
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x580 (Inherited: 0x4e8)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4e8(0x08)
	char pad_4F0[0x90]; // 0x4f0(0x90)

	bool *c308216d93(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*c308216d93 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x69c85d0
	bool *a62ef3460c(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*a62ef3460c // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x69c93e4
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x458 (Inherited: 0x400)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x400(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x410(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x420(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x430(0x10)
	char pad_440[0x18]; // 0x440(0x18)

	struct U*4326b9727b* *93fb9d0b85(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*93fb9d0b85 // Final|Native|Public|BlueprintCallable // @ game+0x69c9070
	bool *6c8fc8a2c2(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*6c8fc8a2c2 // Final|Native|Public|BlueprintCallable // @ game+0x69c8fdc
	bool *603d88cb7e(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*603d88cb7e // Final|Native|Public|BlueprintCallable // @ game+0x69c78b8
	enum class ECoherentUIGTInputPropagationBehaviour *eda206412a(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*eda206412a // Final|Native|Public|BlueprintCallable // @ game+0x69c9100
	enum class ECoherentUIGTInputPropagationBehaviour *2f2fff63df(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*2f2fff63df // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c82f8
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c881c
	bool *7671adbc2b(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*7671adbc2b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69c8774
	enum class *1151cd0fba *3bc1743cd0(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*3bc1743cd0 // Final|Native|Public|BlueprintCallable // @ game+0x69c9234
	int32 Initialize(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x69c85f4
	bool AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // Final|Native|Public|BlueprintCallable // @ game+0x69c7824
	void *bca26cec29(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*bca26cec29 // Final|Native|Public|BlueprintCallable // @ game+0x69c97ac
};

// Class CoherentUIGTPlugin.*43f25e873c
// Size: 0x230 (Inherited: 0x200)
struct U*43f25e873c : UActorComponent {
	struct FString LinkName; // 0x200(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x210(0x08)
	char pad_218[0x18]; // 0x218(0x18)

	int32 *18e6de14d6(); // Function CoherentUIGTPlugin.*43f25e873c.*18e6de14d6 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69c8aa8
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
	enum class *55ff64bc4c MSAA; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};


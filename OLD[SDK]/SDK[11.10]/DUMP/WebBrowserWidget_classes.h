// Class WebBrowserWidget.WebBrowser
// Size: 0x350 (Inherited: 0x130)
struct UWebBrowser : UWidget {
	struct FMulticastDelegate OnUrlChanged; // 0x130(0x10)
	struct FMulticastDelegate OnBeforePopup; // 0x140(0x10)
	struct FMulticastDelegate OnTitleChanged; // 0x150(0x10)
	char pad_160[0x80]; // 0x160(0x80)
	struct FMulticastDelegate OnMessageReceived; // 0x1e0(0x10)
	struct FMulticastDelegate OnQRCodeRecognized; // 0x1f0(0x10)
	struct FString *eac2bc5046; // 0x200(0x10)
	char pad_210[0x10]; // 0x210(0x10)
	bool *23e0f76b28; // 0x220(0x01)
	bool *59ff6c6ebf; // 0x221(0x01)
	bool *77cc4fe787; // 0x222(0x01)
	char pad_223[0x1]; // 0x223(0x01)
	struct FBox2D *f0cd8810b5; // 0x224(0x14)
	bool *fdf9a26995; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct USoundClass* SoundClass; // 0x240(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x248(0x08)
	char pad_250[0x100]; // 0x250(0x100)

	struct UObject* UnBindObject(); // Function WebBrowserWidget.WebBrowser.UnBindObject // Final|Native|Public|BlueprintCallable // @ game+0x6ac25dc
	bool SetAudioMuted(); // Function WebBrowserWidget.WebBrowser.SetAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x6ac2338
	struct FString OnMessageReceived__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnMessageReceived__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x273e04
	bool EnableIME(); // Function WebBrowserWidget.WebBrowser.EnableIME // Final|Native|Public|BlueprintCallable // @ game+0x6ac1c48
	struct FString ExecuteJavascript(); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // Final|Native|Public|BlueprintCallable // @ game+0x6ac1cdc
	bool IsAudioMuted(); // Function WebBrowserWidget.WebBrowser.IsAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x6ac1f2c
	struct FString OnQRCodeRecognized__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnQRCodeRecognized__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x273e04
	struct FText OnUrlChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x273e04
	float SetAudioVolume(); // Function WebBrowserWidget.WebBrowser.SetAudioVolume // Final|Native|Public|BlueprintCallable // @ game+0x6ac2480
	struct FText OnTitleChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnTitleChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x273e04
	bool SetQRCodeTracking(); // Function WebBrowserWidget.WebBrowser.SetQRCodeTracking // Final|Native|Public|BlueprintCallable // @ game+0x6ac2518
	struct FString SendMessage(); // Function WebBrowserWidget.WebBrowser.SendMessage // Final|Native|Public|BlueprintCallable // @ game+0x6ac2238
	float SetAudioPitch(); // Function WebBrowserWidget.WebBrowser.SetAudioPitch // Final|Native|Public|BlueprintCallable // @ game+0x6ac23e8
	float AudioFadeOut(); // Function WebBrowserWidget.WebBrowser.AudioFadeOut // Final|Native|Public|BlueprintCallable // @ game+0x6ac1a50
	struct FString GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ac1e68
	struct FString LoadURL(); // Function WebBrowserWidget.WebBrowser.LoadURL // Final|Native|Public|BlueprintCallable // @ game+0x6ac213c
	struct FString OnBeforePopup__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x273e04
	float AudioFadeIn(); // Function WebBrowserWidget.WebBrowser.AudioFadeIn // Final|Native|Public|BlueprintCallable // @ game+0x6ac1920
	struct UObject* BindObject(); // Function WebBrowserWidget.WebBrowser.BindObject // Final|Native|Public|BlueprintCallable // @ game+0x6ac1b2c
	struct FString LoadString(); // Function WebBrowserWidget.WebBrowser.LoadString // Final|Native|Public|BlueprintCallable // @ game+0x6ac1f80
	struct FText GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ac1dc0
};


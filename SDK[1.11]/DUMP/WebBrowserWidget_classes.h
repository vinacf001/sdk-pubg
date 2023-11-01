// Class WebBrowserWidget.WebBrowser
// Size: 0x340 (Inherited: 0x128)
struct UWebBrowser : UWidget {
	struct FMulticastDelegate OnUrlChanged; // 0x128(0x10)
	struct FMulticastDelegate OnBeforePopup; // 0x138(0x10)
	struct FMulticastDelegate OnTitleChanged; // 0x148(0x10)
	char pad_158[0x78]; // 0x158(0x78)
	struct FMulticastDelegate OnMessageReceived; // 0x1d0(0x10)
	struct FMulticastDelegate OnQRCodeRecognized; // 0x1e0(0x10)
	struct FString *eac2bc5046; // 0x1f0(0x10)
	char pad_200[0x10]; // 0x200(0x10)
	bool *23e0f76b28; // 0x210(0x01)
	bool *59ff6c6ebf; // 0x211(0x01)
	bool *77cc4fe787; // 0x212(0x01)
	char pad_213[0x1]; // 0x213(0x01)
	struct FBox2D *f0cd8810b5; // 0x214(0x14)
	bool *fdf9a26995; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct USoundClass* SoundClass; // 0x230(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x238(0x08)
	char pad_240[0x100]; // 0x240(0x100)

	void UnBindObject(); // Function WebBrowserWidget.WebBrowser.UnBindObject // Final|Native|Public|BlueprintCallable // @ game+0x69f2f48
	void SetAudioMuted(); // Function WebBrowserWidget.WebBrowser.SetAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x69f2ca4
	void OnMessageReceived__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnMessageReceived__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void EnableIME(); // Function WebBrowserWidget.WebBrowser.EnableIME // Final|Native|Public|BlueprintCallable // @ game+0x69f25b4
	void ExecuteJavascript(); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // Final|Native|Public|BlueprintCallable // @ game+0x69f2648
	void IsAudioMuted(); // Function WebBrowserWidget.WebBrowser.IsAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x69f2898
	void OnQRCodeRecognized__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnQRCodeRecognized__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void OnUrlChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void SetAudioVolume(); // Function WebBrowserWidget.WebBrowser.SetAudioVolume // Final|Native|Public|BlueprintCallable // @ game+0x69f2dec
	void OnTitleChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnTitleChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void SetQRCodeTracking(); // Function WebBrowserWidget.WebBrowser.SetQRCodeTracking // Final|Native|Public|BlueprintCallable // @ game+0x69f2e84
	void SendMessage(); // Function WebBrowserWidget.WebBrowser.SendMessage // Final|Native|Public|BlueprintCallable // @ game+0x69f2ba4
	void SetAudioPitch(); // Function WebBrowserWidget.WebBrowser.SetAudioPitch // Final|Native|Public|BlueprintCallable // @ game+0x69f2d54
	void AudioFadeOut(float FadeOutDuration); // Function WebBrowserWidget.WebBrowser.AudioFadeOut // Final|Native|Public|BlueprintCallable // @ game+0x69f23bc
	void GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69f27d4
	void LoadURL(); // Function WebBrowserWidget.WebBrowser.LoadURL // Final|Native|Public|BlueprintCallable // @ game+0x69f2aa8
	void OnBeforePopup__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void AudioFadeIn(float FadeVolumeLevel); // Function WebBrowserWidget.WebBrowser.AudioFadeIn // Final|Native|Public|BlueprintCallable // @ game+0x69f228c
	void BindObject(struct FString Name); // Function WebBrowserWidget.WebBrowser.BindObject // Final|Native|Public|BlueprintCallable // @ game+0x69f2498
	struct FString LoadString(); // Function WebBrowserWidget.WebBrowser.LoadString // Final|Native|Public|BlueprintCallable // @ game+0x69f28ec
	void GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69f272c
};


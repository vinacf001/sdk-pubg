// Class WebBrowserWidget.WebBrowser
// Size: 0x350 (Inherited: 0x130)
struct UWebBrowser : UWidget {
	struct FMulticastDelegate OnUrlChanged; // 0x130(0x10)
	struct FMulticastDelegate OnBeforePopup; // 0x140(0x10)
	struct FMulticastDelegate OnTitleChanged; // 0x150(0x10)
	char pad_160[0x80]; // 0x160(0x80)
	struct FMulticastDelegate OnMessageReceived; // 0x1e0(0x10)
	struct FMulticastDelegate OnQRCodeRecognized; // 0x1f0(0x10)
	struct FString *d18404f8ee; // 0x200(0x10)
	char pad_210[0x10]; // 0x210(0x10)
	bool *f2d1aac7be; // 0x220(0x01)
	bool *81f66fdd93; // 0x221(0x01)
	bool *8480a19243; // 0x222(0x01)
	char pad_223[0x1]; // 0x223(0x01)
	struct FBox2D *8881c61fa0; // 0x224(0x14)
	bool *08a1048b88; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct USoundClass* SoundClass; // 0x240(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x248(0x08)
	char pad_250[0x100]; // 0x250(0x100)

	void GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b2a2bc
	void SetAudioMuted(); // Function WebBrowserWidget.WebBrowser.SetAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x6b2a834
	void OnBeforePopup__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x21d2c4
	void LoadURL(); // Function WebBrowserWidget.WebBrowser.LoadURL // Final|Native|Public|BlueprintCallable // @ game+0x6b2a638
	void GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b2a364
	void OnMessageReceived__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnMessageReceived__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x21d2c4
	void BindObject(); // Function WebBrowserWidget.WebBrowser.BindObject // Final|Native|Public|BlueprintCallable // @ game+0x6b2a028
	void SetAudioVolume(); // Function WebBrowserWidget.WebBrowser.SetAudioVolume // Final|Native|Public|BlueprintCallable // @ game+0x6b2a97c
	void OnQRCodeRecognized__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnQRCodeRecognized__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x21d2c4
	void IsAudioMuted(); // Function WebBrowserWidget.WebBrowser.IsAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x6b2a428
	void OnTitleChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnTitleChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x21d2c4
	void LoadString(); // Function WebBrowserWidget.WebBrowser.LoadString // Final|Native|Public|BlueprintCallable // @ game+0x6b2a47c
	void UnBindObject(); // Function WebBrowserWidget.WebBrowser.UnBindObject // Final|Native|Public|BlueprintCallable // @ game+0x6b2aad8
	void SetQRCodeTracking(); // Function WebBrowserWidget.WebBrowser.SetQRCodeTracking // Final|Native|Public|BlueprintCallable // @ game+0x6b2aa14
	void AudioFadeIn(); // Function WebBrowserWidget.WebBrowser.AudioFadeIn // Final|Native|Public|BlueprintCallable // @ game+0x6b29e1c
	void SendMessage(); // Function WebBrowserWidget.WebBrowser.SendMessage // Final|Native|Public|BlueprintCallable // @ game+0x6b2a734
	void SetAudioPitch(); // Function WebBrowserWidget.WebBrowser.SetAudioPitch // Final|Native|Public|BlueprintCallable // @ game+0x6b2a8e4
	void EnableIME(); // Function WebBrowserWidget.WebBrowser.EnableIME // Final|Native|Public|BlueprintCallable // @ game+0x6b2a144
	void OnUrlChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x21d2c4
	void AudioFadeOut(); // Function WebBrowserWidget.WebBrowser.AudioFadeOut // Final|Native|Public|BlueprintCallable // @ game+0x6b29f4c
	void ExecuteJavascript(); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // Final|Native|Public|BlueprintCallable // @ game+0x6b2a1d8
};


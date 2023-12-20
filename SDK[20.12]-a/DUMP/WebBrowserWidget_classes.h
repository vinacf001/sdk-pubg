// Class WebBrowserWidget.WebBrowser
// Size: 0x350 (Inherited: 0x130)
struct UWebBrowser : UWidget {
	struct FMulticastDelegate OnUrlChanged; // 0x130(0x10)
	struct FMulticastDelegate OnBeforePopup; // 0x140(0x10)
	struct FMulticastDelegate OnTitleChanged; // 0x150(0x10)
	char pad_160[0x80]; // 0x160(0x80)
	struct FMulticastDelegate OnMessageReceived; // 0x1e0(0x10)
	struct FMulticastDelegate OnQRCodeRecognized; // 0x1f0(0x10)
	struct FString *46e9f20938; // 0x200(0x10)
	char pad_210[0x10]; // 0x210(0x10)
	bool *b8f6b5164d; // 0x220(0x01)
	bool *5cecbc946c; // 0x221(0x01)
	bool *69e1295701; // 0x222(0x01)
	char pad_223[0x1]; // 0x223(0x01)
	struct FBox2D *330650cdac; // 0x224(0x14)
	bool *291d1e9ce0; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct USoundClass* SoundClass; // 0x240(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x248(0x08)
	char pad_250[0x100]; // 0x250(0x100)

	void LoadString(); // Function WebBrowserWidget.WebBrowser.LoadString // Final|Native|Public|BlueprintCallable // @ game+0x6ffd1ec
	void AudioFadeIn(); // Function WebBrowserWidget.WebBrowser.AudioFadeIn // Final|Native|Public|BlueprintCallable // @ game+0x6ffcb8c
	void OnQRCodeRecognized__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnQRCodeRecognized__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void EnableIME(); // Function WebBrowserWidget.WebBrowser.EnableIME // Final|Native|Public|BlueprintCallable // @ game+0x6ffceb4
	void OnUrlChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x3b43ac
	void SendMessage(); // Function WebBrowserWidget.WebBrowser.SendMessage // Final|Native|Public|BlueprintCallable // @ game+0x6ffd4a4
	void AudioFadeOut(); // Function WebBrowserWidget.WebBrowser.AudioFadeOut // Final|Native|Public|BlueprintCallable // @ game+0x6ffccbc
	void SetQRCodeTracking(); // Function WebBrowserWidget.WebBrowser.SetQRCodeTracking // Final|Native|Public|BlueprintCallable // @ game+0x6ffd784
	void BindObject(); // Function WebBrowserWidget.WebBrowser.BindObject // Final|Native|Public|BlueprintCallable // @ game+0x6ffcd98
	void LoadURL(); // Function WebBrowserWidget.WebBrowser.LoadURL // Final|Native|Public|BlueprintCallable // @ game+0x6ffd3a8
	void OnTitleChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnTitleChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x3b43ac
	void GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ffd0d4
	void SetAudioVolume(); // Function WebBrowserWidget.WebBrowser.SetAudioVolume // Final|Native|Public|BlueprintCallable // @ game+0x6ffd6ec
	void OnMessageReceived__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnMessageReceived__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void IsAudioMuted(); // Function WebBrowserWidget.WebBrowser.IsAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x6ffd198
	void ExecuteJavascript(); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // Final|Native|Public|BlueprintCallable // @ game+0x6ffcf48
	void SetAudioMuted(); // Function WebBrowserWidget.WebBrowser.SetAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x6ffd5a4
	void GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ffd02c
	void OnBeforePopup__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void SetAudioPitch(); // Function WebBrowserWidget.WebBrowser.SetAudioPitch // Final|Native|Public|BlueprintCallable // @ game+0x6ffd654
	void UnBindObject(); // Function WebBrowserWidget.WebBrowser.UnBindObject // Final|Native|Public|BlueprintCallable // @ game+0x6ffd848
};


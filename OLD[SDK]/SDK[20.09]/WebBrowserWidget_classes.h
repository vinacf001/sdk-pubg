// Class WebBrowserWidget.WebBrowser
// Size: 0x340 (Inherited: 0x128)
struct UWebBrowser : UWidget {
	struct FMulticastDelegate OnUrlChanged; // 0x128(0x10)
	struct FMulticastDelegate OnBeforePopup; // 0x138(0x10)
	struct FMulticastDelegate OnTitleChanged; // 0x148(0x10)
	char pad_158[0x78]; // 0x158(0x78)
	struct FMulticastDelegate OnMessageReceived; // 0x1d0(0x10)
	struct FMulticastDelegate OnQRCodeRecognized; // 0x1e0(0x10)
	struct FString *65565313bc; // 0x1f0(0x10)
	char pad_200[0x10]; // 0x200(0x10)
	bool *781575590e; // 0x210(0x01)
	bool *ada72b355e; // 0x211(0x01)
	bool *9a207d24f7; // 0x212(0x01)
	char pad_213[0x1]; // 0x213(0x01)
	struct FBox2D *57837b9dc6; // 0x214(0x14)
	bool *95746f4bf0; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct USoundClass* SoundClass; // 0x230(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x238(0x08)
	char pad_240[0x100]; // 0x240(0x100)

	void SetAudioMuted(); // Function WebBrowserWidget.WebBrowser.SetAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x679d6e8
	void GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x679d170
	void OnUrlChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1e037c
	void IsAudioMuted(); // Function WebBrowserWidget.WebBrowser.IsAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x679d2dc
	void OnBeforePopup__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	void LoadURL(); // Function WebBrowserWidget.WebBrowser.LoadURL // Final|Native|Public|BlueprintCallable // @ game+0x679d4ec
	void SetAudioPitch(); // Function WebBrowserWidget.WebBrowser.SetAudioPitch // Final|Native|Public|BlueprintCallable // @ game+0x679d798
	struct FString UnBindObject(); // Function WebBrowserWidget.WebBrowser.UnBindObject // Final|Native|Public|BlueprintCallable // @ game+0x679d98c
	struct FString LoadString(); // Function WebBrowserWidget.WebBrowser.LoadString // Final|Native|Public|BlueprintCallable // @ game+0x679d330
	void SendMessage(); // Function WebBrowserWidget.WebBrowser.SendMessage // Final|Native|Public|BlueprintCallable // @ game+0x679d5e8
	void GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x679d218
	float AudioFadeOut(); // Function WebBrowserWidget.WebBrowser.AudioFadeOut // Final|Native|Public|BlueprintCallable // @ game+0x679ce00
	void ExecuteJavascript(); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // Final|Native|Public|BlueprintCallable // @ game+0x679d08c
	void BindObject(struct FString Name); // Function WebBrowserWidget.WebBrowser.BindObject // Final|Native|Public|BlueprintCallable // @ game+0x679cedc
	void OnTitleChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnTitleChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x1e037c
	void OnQRCodeRecognized__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnQRCodeRecognized__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	void OnMessageReceived__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnMessageReceived__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	void EnableIME(); // Function WebBrowserWidget.WebBrowser.EnableIME // Final|Native|Public|BlueprintCallable // @ game+0x679cff8
	void SetAudioVolume(); // Function WebBrowserWidget.WebBrowser.SetAudioVolume // Final|Native|Public|BlueprintCallable // @ game+0x679d830
	float AudioFadeIn(); // Function WebBrowserWidget.WebBrowser.AudioFadeIn // Final|Native|Public|BlueprintCallable // @ game+0x679ccd0
	void SetQRCodeTracking(); // Function WebBrowserWidget.WebBrowser.SetQRCodeTracking // Final|Native|Public|BlueprintCallable // @ game+0x679d8c8
};


// Class WebBrowserWidget.WebBrowser
// Size: 0x340 (Inherited: 0x128)
struct UWebBrowser : UWidget {
	struct FMulticastDelegate OnUrlChanged; // 0x128(0x10)
	struct FMulticastDelegate OnBeforePopup; // 0x138(0x10)
	struct FMulticastDelegate OnTitleChanged; // 0x148(0x10)
	char pad_158[0x78]; // 0x158(0x78)
	struct FMulticastDelegate OnMessageReceived; // 0x1d0(0x10)
	struct FMulticastDelegate OnQRCodeRecognized; // 0x1e0(0x10)
	struct FString *d18404f8ee; // 0x1f0(0x10)
	char pad_200[0x10]; // 0x200(0x10)
	bool *f2d1aac7be; // 0x210(0x01)
	bool *81f66fdd93; // 0x211(0x01)
	bool *8480a19243; // 0x212(0x01)
	char pad_213[0x1]; // 0x213(0x01)
	struct FBox2D *8881c61fa0; // 0x214(0x14)
	bool *08a1048b88; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct USoundClass* SoundClass; // 0x230(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x238(0x08)
	char pad_240[0x100]; // 0x240(0x100)

	void GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc874
	void SetAudioMuted(); // Function WebBrowserWidget.WebBrowser.SetAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x68fcdec
	void OnBeforePopup__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x32e590
	void LoadURL(); // Function WebBrowserWidget.WebBrowser.LoadURL // Final|Native|Public|BlueprintCallable // @ game+0x68fcbf0
	void GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68fc91c
	void OnMessageReceived__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnMessageReceived__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x32e590
	struct FString BindObject(); // Function WebBrowserWidget.WebBrowser.BindObject // Final|Native|Public|BlueprintCallable // @ game+0x68fc5e0
	void SetAudioVolume(); // Function WebBrowserWidget.WebBrowser.SetAudioVolume // Final|Native|Public|BlueprintCallable // @ game+0x68fcf34
	void OnQRCodeRecognized__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnQRCodeRecognized__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x32e590
	void IsAudioMuted(); // Function WebBrowserWidget.WebBrowser.IsAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x68fc9e0
	void OnTitleChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnTitleChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x32e590
	struct FString LoadString(); // Function WebBrowserWidget.WebBrowser.LoadString // Final|Native|Public|BlueprintCallable // @ game+0x68fca34
	void UnBindObject(struct FString Name); // Function WebBrowserWidget.WebBrowser.UnBindObject // Final|Native|Public|BlueprintCallable // @ game+0x68fd090
	void SetQRCodeTracking(); // Function WebBrowserWidget.WebBrowser.SetQRCodeTracking // Final|Native|Public|BlueprintCallable // @ game+0x68fcfcc
	float AudioFadeIn(); // Function WebBrowserWidget.WebBrowser.AudioFadeIn // Final|Native|Public|BlueprintCallable // @ game+0x68fc3d4
	void SendMessage(); // Function WebBrowserWidget.WebBrowser.SendMessage // Final|Native|Public|BlueprintCallable // @ game+0x68fccec
	void SetAudioPitch(); // Function WebBrowserWidget.WebBrowser.SetAudioPitch // Final|Native|Public|BlueprintCallable // @ game+0x68fce9c
	void EnableIME(); // Function WebBrowserWidget.WebBrowser.EnableIME // Final|Native|Public|BlueprintCallable // @ game+0x68fc6fc
	void OnUrlChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x32e590
	float AudioFadeOut(); // Function WebBrowserWidget.WebBrowser.AudioFadeOut // Final|Native|Public|BlueprintCallable // @ game+0x68fc504
	void ExecuteJavascript(); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // Final|Native|Public|BlueprintCallable // @ game+0x68fc790
};


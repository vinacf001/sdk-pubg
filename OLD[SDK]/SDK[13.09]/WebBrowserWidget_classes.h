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

	void SetAudioMuted(); // Function WebBrowserWidget.WebBrowser.SetAudioMuted // None // @ game+0x6775e64
	void GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // None // @ game+0x67758ec
	void OnUrlChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // None // @ game+0x26a108
	void IsAudioMuted(); // Function WebBrowserWidget.WebBrowser.IsAudioMuted // None // @ game+0x6775a58
	void OnBeforePopup__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // None // @ game+0x26a108
	void LoadURL(); // Function WebBrowserWidget.WebBrowser.LoadURL // None // @ game+0x6775c68
	void SetAudioPitch(); // Function WebBrowserWidget.WebBrowser.SetAudioPitch // None // @ game+0x6775f14
	struct FString UnBindObject(); // Function WebBrowserWidget.WebBrowser.UnBindObject // None // @ game+0x6776108
	struct FString LoadString(); // Function WebBrowserWidget.WebBrowser.LoadString // None // @ game+0x6775aac
	void SendMessage(); // Function WebBrowserWidget.WebBrowser.SendMessage // None // @ game+0x6775d64
	void GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // None // @ game+0x6775994
	float AudioFadeOut(); // Function WebBrowserWidget.WebBrowser.AudioFadeOut // None // @ game+0x677557c
	void ExecuteJavascript(); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // None // @ game+0x6775808
	void BindObject(struct FString Name); // Function WebBrowserWidget.WebBrowser.BindObject // None // @ game+0x6775658
	void OnTitleChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnTitleChanged__DelegateSignature // None // @ game+0x26a108
	void OnQRCodeRecognized__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnQRCodeRecognized__DelegateSignature // None // @ game+0x26a108
	void OnMessageReceived__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnMessageReceived__DelegateSignature // None // @ game+0x26a108
	void EnableIME(); // Function WebBrowserWidget.WebBrowser.EnableIME // None // @ game+0x6775774
	void SetAudioVolume(); // Function WebBrowserWidget.WebBrowser.SetAudioVolume // None // @ game+0x6775fac
	float AudioFadeIn(); // Function WebBrowserWidget.WebBrowser.AudioFadeIn // None // @ game+0x677544c
	void SetQRCodeTracking(); // Function WebBrowserWidget.WebBrowser.SetQRCodeTracking // None // @ game+0x6776044
};


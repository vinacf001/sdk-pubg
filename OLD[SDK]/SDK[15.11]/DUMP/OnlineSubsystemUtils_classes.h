// Class OnlineSubsystemUtils.IpConnection
// Size: 0x65870 (Inherited: 0x65850)
struct UIpConnection : UNetConnection {
	char pad_65850[0x20]; // 0x65850(0x20)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x4f8 (Inherited: 0x4c8)
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x4c8(0x01)
	char AllowPlayerPortUnreach : 1; // 0x4c8(0x01)
	char pad_4C8_2 : 6; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	uint32 MaxPortCountToTry; // 0x4cc(0x04)
	char pad_4D0[0x18]; // 0x4d0(0x18)
	uint32 ServerDesiredSocketReceiveBufferBytes; // 0x4e8(0x04)
	uint32 ServerDesiredSocketSendBufferBytes; // 0x4ec(0x04)
	uint32 ClientDesiredSocketReceiveBufferBytes; // 0x4f0(0x04)
	uint32 ClientDesiredSocketSendBufferBytes; // 0x4f4(0x04)
};

// Class OnlineSubsystemUtils.*9a66b4ca25
// Size: 0x30 (Inherited: 0x30)
struct U*9a66b4ca25 : UBlueprintFunctionLibrary {

	void GetCachedAchievementDescription(); // Function OnlineSubsystemUtils.*9a66b4ca25.GetCachedAchievementDescription // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69e30cc
	void GetCachedAchievementProgress(); // Function OnlineSubsystemUtils.*9a66b4ca25.GetCachedAchievementProgress // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69e3494
};

// Class OnlineSubsystemUtils.*7edde3427b
// Size: 0x68 (Inherited: 0x30)
struct U*7edde3427b : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	void *06779396a3(); // Function OnlineSubsystemUtils.*7edde3427b.*06779396a3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e1c64
	void *1cd1b94614(); // Function OnlineSubsystemUtils.*7edde3427b.*1cd1b94614 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e1d5c
};

// Class OnlineSubsystemUtils.*0f3d93b3e5
// Size: 0x80 (Inherited: 0x30)
struct U*0f3d93b3e5 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	void *e45fa130d4(); // Function OnlineSubsystemUtils.*0f3d93b3e5.*e45fa130d4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e4ddc
};

// Class OnlineSubsystemUtils.*5c3538f725
// Size: 0xb0 (Inherited: 0x30)
struct U*5c3538f725 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	void ConnectToService(); // Function OnlineSubsystemUtils.*5c3538f725.ConnectToService // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e2018
};

// Class OnlineSubsystemUtils.*9ac297cd9a
// Size: 0x100 (Inherited: 0x30)
struct U*9ac297cd9a : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0xb0]; // 0x50(0xb0)

	void CreateSession(); // Function OnlineSubsystemUtils.*9ac297cd9a.CreateSession // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e2628
};

// Class OnlineSubsystemUtils.*435dee9aec
// Size: 0xb0 (Inherited: 0x30)
struct U*435dee9aec : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	void DestroySession(); // Function OnlineSubsystemUtils.*435dee9aec.DestroySession // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e2794
};

// Class OnlineSubsystemUtils.*b93ebab130
// Size: 0x80 (Inherited: 0x30)
struct U*b93ebab130 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	void *59744331f1(); // Function OnlineSubsystemUtils.*b93ebab130.*59744331f1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e2870
};

// Class OnlineSubsystemUtils.*8fb9b23be5
// Size: 0x78 (Inherited: 0x30)
struct U*8fb9b23be5 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	void *6730483cef(); // Function OnlineSubsystemUtils.*8fb9b23be5.*6730483cef // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e2b00
};

// Class OnlineSubsystemUtils.*c3c5212d50
// Size: 0xd0 (Inherited: 0x30)
struct U*c3c5212d50 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *000dbb4c68(); // Function OnlineSubsystemUtils.*c3c5212d50.*000dbb4c68 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x69e4060
	void *fb473a6254(); // Function OnlineSubsystemUtils.*c3c5212d50.*fb473a6254 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x69e3cd4
	void FindSessions(); // Function OnlineSubsystemUtils.*c3c5212d50.FindSessions // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e2cf0
	void *b36002db0d(); // Function OnlineSubsystemUtils.*c3c5212d50.*b36002db0d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x69e367c
	void *e50207002f(); // Function OnlineSubsystemUtils.*c3c5212d50.*e50207002f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x69e39ac
};

// Class OnlineSubsystemUtils.*f60e25d4c8
// Size: 0x88 (Inherited: 0x30)
struct U*f60e25d4c8 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	void *205ee71549(); // Function OnlineSubsystemUtils.*f60e25d4c8.*205ee71549 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e2e5c
};

// Class OnlineSubsystemUtils.*4b248f3226
// Size: 0xc0 (Inherited: 0x30)
struct U*4b248f3226 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x70]; // 0x50(0x70)

	void *09b9c31483(); // Function OnlineSubsystemUtils.*4b248f3226.*09b9c31483 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69e21d0
};

// Class OnlineSubsystemUtils.*7dfe1f446a
// Size: 0xd0 (Inherited: 0x30)
struct U*7dfe1f446a : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *e3a59c8ff8(); // Function OnlineSubsystemUtils.*7dfe1f446a.*e3a59c8ff8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69e22ec
};

// Class OnlineSubsystemUtils.*96419b40f1
// Size: 0xd0 (Inherited: 0x30)
struct U*96419b40f1 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *ae6bac7135(); // Function OnlineSubsystemUtils.*96419b40f1.*ae6bac7135 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69e2404
};

// Class OnlineSubsystemUtils.*0f55b2e335
// Size: 0x1b0 (Inherited: 0x30)
struct U*0f55b2e335 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x160]; // 0x50(0x160)

	void JoinSession(); // Function OnlineSubsystemUtils.*0f55b2e335.JoinSession // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69e422c
};

// Class OnlineSubsystemUtils.*b1cd102dc0
// Size: 0x30 (Inherited: 0x30)
struct U*b1cd102dc0 : UBlueprintFunctionLibrary {

	void *e240f51e02(); // Function OnlineSubsystemUtils.*b1cd102dc0.*e240f51e02 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e4f98
};

// Class OnlineSubsystemUtils.*cbddb45e01
// Size: 0xa0 (Inherited: 0x30)
struct U*cbddb45e01 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	void *e96d9e7cd6(); // Function OnlineSubsystemUtils.*cbddb45e01.*e96d9e7cd6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e20f4
};

// Class OnlineSubsystemUtils.*d9c96cda6e
// Size: 0xd0 (Inherited: 0x30)
struct U*d9c96cda6e : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *c512f9f855(); // Function OnlineSubsystemUtils.*d9c96cda6e.*c512f9f855 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e254c
};

// Class OnlineSubsystemUtils.*2ab0f864d6
// Size: 0x68 (Inherited: 0x30)
struct U*2ab0f864d6 : U*528374bf77 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	void Logout(); // Function OnlineSubsystemUtils.*2ab0f864d6.Logout // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e441c
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x420 (Inherited: 0x3f8)
struct AOnlineBeacon : AActor {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	float BeaconConnectionInitialTimeout; // 0x400(0x04)
	float BeaconConnectionTimeout; // 0x404(0x04)
	struct UNetDriver* NetDriver; // 0x408(0x08)
	char pad_410[0x10]; // 0x410(0x10)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x4b0 (Inherited: 0x420)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* *12b843169e; // 0x420(0x08)
	struct UNetConnection* *6575d6510d; // 0x428(0x08)
	enum class EBeaconConnectionState *66d257caac; // 0x430(0x01)
	char pad_431[0x7f]; // 0x431(0x7f)

	void *2659e929ca(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*2659e929ca // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x59b4e64
};

// Class OnlineSubsystemUtils.*ce8726bb69
// Size: 0x78 (Inherited: 0x30)
struct U*ce8726bb69 : UObject {
	struct FName SessionName; // 0x30(0x08)
	int32 *f2ff5d6839; // 0x38(0x04)
	int32 *64324c6cb3; // 0x3c(0x04)
	int32 *ee0d3bd59b; // 0x40(0x04)
	int32 *6baa8eadd6; // 0x44(0x04)
	struct FName *be7c876eca; // 0x48(0x08)
	int32 *1922a79d60; // 0x50(0x04)
	int32 *3a436e2c86; // 0x54(0x04)
	struct TArray<struct F*32c040d354> *c036306a0d; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x5e0 (Inherited: 0x4b0)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_4B0[0xc0]; // 0x4b0(0xc0)
	struct FString *61727b664b; // 0x570(0x10)
	struct F*32c040d354 *f64304838d; // 0x580(0x30)
	enum class EClientRequestType *590ff4f6c3; // 0x5b0(0x01)
	bool *44546e9013; // 0x5b1(0x01)
	bool *581e9d3c5f; // 0x5b2(0x01)
	char pad_5B3[0x2d]; // 0x5b3(0x2d)

	void *5a2d230fe2(); // Function OnlineSubsystemUtils.PartyBeaconClient.*5a2d230fe2 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x69e1e54
	void *f62ff7946b(); // Function OnlineSubsystemUtils.PartyBeaconClient.*f62ff7946b // Net|NetReliableNative|Event|Public|NetClient // @ game+0x69e1eec
	void *76f2bc03f7(); // Function OnlineSubsystemUtils.PartyBeaconClient.*76f2bc03f7 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x69e1f84
	void *bdf086e512(); // Function OnlineSubsystemUtils.PartyBeaconClient.*bdf086e512 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xd1bf4c
	void *8c876b1daa(); // Function OnlineSubsystemUtils.PartyBeaconClient.*8c876b1daa // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x69e4998
	void *fed444989d(); // Function OnlineSubsystemUtils.PartyBeaconClient.*fed444989d // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x69e4b4c
	void *ce9901bc12(); // Function OnlineSubsystemUtils.PartyBeaconClient.*ce9901bc12 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x69e483c
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x4b0 (Inherited: 0x4b0)
struct ATestBeaconClient : AOnlineBeaconClient {

	void *8e4b53f9a2(); // Function OnlineSubsystemUtils.TestBeaconClient.*8e4b53f9a2 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x69e494c
	void *0d61fefe42(); // Function OnlineSubsystemUtils.TestBeaconClient.*0d61fefe42 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x592dd2c
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x4d8 (Inherited: 0x420)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32 ListenPort; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct TArray<struct AOnlineBeaconClient*> *cd3fb75b60; // 0x428(0x10)
	char pad_438[0xa0]; // 0x438(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x420 (Inherited: 0x3f8)
struct AOnlineBeaconHostObject : AActor {
	struct FString *be9cecb10b; // 0x3f8(0x10)
	struct UClass* *36492fdc21; // 0x408(0x08)
	struct TArray<struct AOnlineBeaconClient*> *cd3fb75b60; // 0x410(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x580 (Inherited: 0x420)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct U*ce8726bb69* State; // 0x420(0x08)
	char pad_428[0x148]; // 0x428(0x148)
	bool bLogoutOnSessionTimeout; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	float SessionTimeoutSecs; // 0x574(0x04)
	float TravelSessionTimeoutSecs; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x420 (Inherited: 0x420)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x180 (Inherited: 0x30)
struct UOnlineEngineInterfaceImpl : U*6f59c92ae0 {
	struct FName VoiceSubsystemNameOverride; // 0x30(0x08)
	char pad_38[0x148]; // 0x38(0x148)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x58 (Inherited: 0x40)
struct UOnlinePIESettings : U*6080c6b78b {
	bool bOnlinePIEEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct F*aa26e6f46d> Logins; // 0x48(0x10)
};

// Class OnlineSubsystemUtils.*72d0c359be
// Size: 0x310 (Inherited: 0x30)
struct U*72d0c359be : U*7e8b14b3a6 {
	char pad_30[0x2d0]; // 0x30(0x2d0)
	bool bIsFromInvite; // 0x300(0x01)
	bool *f5b8b65094; // 0x301(0x01)
	char pad_302[0xe]; // 0x302(0x0e)
};

// Class OnlineSubsystemUtils.*1cd30aa270
// Size: 0x78 (Inherited: 0x30)
struct U*1cd30aa270 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	void *76dc1bba31(); // Function OnlineSubsystemUtils.*1cd30aa270.*76dc1bba31 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e44f8
};

// Class OnlineSubsystemUtils.*fc7b16a031
// Size: 0x60 (Inherited: 0x30)
struct U*fc7b16a031 : U*528374bf77 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	void *318a4f0f3d(); // Function OnlineSubsystemUtils.*fc7b16a031.*318a4f0f3d // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e4d00
};

// Class OnlineSubsystemUtils.*eedd028bd9
// Size: 0x30 (Inherited: 0x30)
struct U*eedd028bd9 : UBlueprintFunctionLibrary {

	void *f43843db10(); // Function OnlineSubsystemUtils.*eedd028bd9.*f43843db10 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69e4724
	void GetMyPlayerIndex(); // Function OnlineSubsystemUtils.*eedd028bd9.GetMyPlayerIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69e3aec
	void *8597799aee(); // Function OnlineSubsystemUtils.*eedd028bd9.*8597799aee // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69e3e18
	void GetIsMyTurn(); // Function OnlineSubsystemUtils.*eedd028bd9.GetIsMyTurn // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69e37c4
};


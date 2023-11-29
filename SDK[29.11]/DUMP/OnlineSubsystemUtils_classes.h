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

	bool GetCachedAchievementDescription(); // Function OnlineSubsystemUtils.*9a66b4ca25.GetCachedAchievementDescription // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67bf5f4
	float GetCachedAchievementProgress(); // Function OnlineSubsystemUtils.*9a66b4ca25.GetCachedAchievementProgress // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67bf9bc
};

// Class OnlineSubsystemUtils.*7edde3427b
// Size: 0x68 (Inherited: 0x30)
struct U*7edde3427b : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct U*7edde3427b* *06779396a3(); // Function OnlineSubsystemUtils.*7edde3427b.*06779396a3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67be18c
	struct U*7edde3427b* *1cd1b94614(); // Function OnlineSubsystemUtils.*7edde3427b.*1cd1b94614 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67be284
};

// Class OnlineSubsystemUtils.*0f3d93b3e5
// Size: 0x80 (Inherited: 0x30)
struct U*0f3d93b3e5 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct U*0f3d93b3e5* *e45fa130d4(); // Function OnlineSubsystemUtils.*0f3d93b3e5.*e45fa130d4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c1304
};

// Class OnlineSubsystemUtils.*5c3538f725
// Size: 0xb0 (Inherited: 0x30)
struct U*5c3538f725 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	struct U*5c3538f725* ConnectToService(); // Function OnlineSubsystemUtils.*5c3538f725.ConnectToService // Final|Native|Static|Public|BlueprintCallable // @ game+0x67be540
};

// Class OnlineSubsystemUtils.*9ac297cd9a
// Size: 0x100 (Inherited: 0x30)
struct U*9ac297cd9a : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0xb0]; // 0x50(0xb0)

	struct U*9ac297cd9a* CreateSession(); // Function OnlineSubsystemUtils.*9ac297cd9a.CreateSession // Final|Native|Static|Public|BlueprintCallable // @ game+0x67beb50
};

// Class OnlineSubsystemUtils.*435dee9aec
// Size: 0xb0 (Inherited: 0x30)
struct U*435dee9aec : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	struct U*435dee9aec* DestroySession(); // Function OnlineSubsystemUtils.*435dee9aec.DestroySession // Final|Native|Static|Public|BlueprintCallable // @ game+0x67becbc
};

// Class OnlineSubsystemUtils.*b93ebab130
// Size: 0x80 (Inherited: 0x30)
struct U*b93ebab130 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct U*b93ebab130* *59744331f1(); // Function OnlineSubsystemUtils.*b93ebab130.*59744331f1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67bed98
};

// Class OnlineSubsystemUtils.*8fb9b23be5
// Size: 0x78 (Inherited: 0x30)
struct U*8fb9b23be5 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct U*8fb9b23be5* *6730483cef(); // Function OnlineSubsystemUtils.*8fb9b23be5.*6730483cef // Final|Native|Static|Public|BlueprintCallable // @ game+0x67bf028
};

// Class OnlineSubsystemUtils.*c3c5212d50
// Size: 0xd0 (Inherited: 0x30)
struct U*c3c5212d50 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	struct FString *000dbb4c68(); // Function OnlineSubsystemUtils.*c3c5212d50.*000dbb4c68 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67c0588
	int32 *fb473a6254(); // Function OnlineSubsystemUtils.*c3c5212d50.*fb473a6254 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67c01fc
	struct U*c3c5212d50* FindSessions(); // Function OnlineSubsystemUtils.*c3c5212d50.FindSessions // Final|Native|Static|Public|BlueprintCallable // @ game+0x67bf218
	int32 *b36002db0d(); // Function OnlineSubsystemUtils.*c3c5212d50.*b36002db0d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67bfba4
	int32 *e50207002f(); // Function OnlineSubsystemUtils.*c3c5212d50.*e50207002f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67bfed4
};

// Class OnlineSubsystemUtils.*f60e25d4c8
// Size: 0x88 (Inherited: 0x30)
struct U*f60e25d4c8 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct U*f60e25d4c8* *205ee71549(); // Function OnlineSubsystemUtils.*f60e25d4c8.*205ee71549 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67bf384
};

// Class OnlineSubsystemUtils.*4b248f3226
// Size: 0xc0 (Inherited: 0x30)
struct U*4b248f3226 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x70]; // 0x50(0x70)

	struct U*4b248f3226* *09b9c31483(); // Function OnlineSubsystemUtils.*4b248f3226.*09b9c31483 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67be6f8
};

// Class OnlineSubsystemUtils.*7dfe1f446a
// Size: 0xd0 (Inherited: 0x30)
struct U*7dfe1f446a : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	struct U*7dfe1f446a* *e3a59c8ff8(); // Function OnlineSubsystemUtils.*7dfe1f446a.*e3a59c8ff8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67be814
};

// Class OnlineSubsystemUtils.*96419b40f1
// Size: 0xd0 (Inherited: 0x30)
struct U*96419b40f1 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	struct U*96419b40f1* *ae6bac7135(); // Function OnlineSubsystemUtils.*96419b40f1.*ae6bac7135 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67be92c
};

// Class OnlineSubsystemUtils.*0f55b2e335
// Size: 0x1b0 (Inherited: 0x30)
struct U*0f55b2e335 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x160]; // 0x50(0x160)

	struct U*0f55b2e335* JoinSession(); // Function OnlineSubsystemUtils.*0f55b2e335.JoinSession // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67c0754
};

// Class OnlineSubsystemUtils.*b1cd102dc0
// Size: 0x30 (Inherited: 0x30)
struct U*b1cd102dc0 : UBlueprintFunctionLibrary {

	bool *e240f51e02(); // Function OnlineSubsystemUtils.*b1cd102dc0.*e240f51e02 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c14c0
};

// Class OnlineSubsystemUtils.*cbddb45e01
// Size: 0xa0 (Inherited: 0x30)
struct U*cbddb45e01 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct U*cbddb45e01* *e96d9e7cd6(); // Function OnlineSubsystemUtils.*cbddb45e01.*e96d9e7cd6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67be61c
};

// Class OnlineSubsystemUtils.*d9c96cda6e
// Size: 0xd0 (Inherited: 0x30)
struct U*d9c96cda6e : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	struct U*d9c96cda6e* *c512f9f855(); // Function OnlineSubsystemUtils.*d9c96cda6e.*c512f9f855 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67bea74
};

// Class OnlineSubsystemUtils.*2ab0f864d6
// Size: 0x68 (Inherited: 0x30)
struct U*2ab0f864d6 : U*528374bf77 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct U*2ab0f864d6* Logout(); // Function OnlineSubsystemUtils.*2ab0f864d6.Logout // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c0944
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x418 (Inherited: 0x3f0)
struct AOnlineBeacon : AActor {
	char pad_3F0[0x8]; // 0x3f0(0x08)
	float BeaconConnectionInitialTimeout; // 0x3f8(0x04)
	float BeaconConnectionTimeout; // 0x3fc(0x04)
	struct UNetDriver* NetDriver; // 0x400(0x08)
	char pad_408[0x10]; // 0x408(0x10)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x4a0 (Inherited: 0x418)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* *12b843169e; // 0x418(0x08)
	struct UNetConnection* *6575d6510d; // 0x420(0x08)
	enum class EBeaconConnectionState *66d257caac; // 0x428(0x01)
	char pad_429[0x77]; // 0x429(0x77)

	void *2659e929ca(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*2659e929ca // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x57be690
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
// Size: 0x5d0 (Inherited: 0x4a0)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_4A0[0xc0]; // 0x4a0(0xc0)
	struct FString *61727b664b; // 0x560(0x10)
	struct F*32c040d354 *f64304838d; // 0x570(0x30)
	enum class EClientRequestType *590ff4f6c3; // 0x5a0(0x01)
	bool *44546e9013; // 0x5a1(0x01)
	bool *581e9d3c5f; // 0x5a2(0x01)
	char pad_5A3[0x2d]; // 0x5a3(0x2d)

	enum class EPartyReservationResult *5a2d230fe2(); // Function OnlineSubsystemUtils.PartyBeaconClient.*5a2d230fe2 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67be37c
	enum class EPartyReservationResult *f62ff7946b(); // Function OnlineSubsystemUtils.PartyBeaconClient.*f62ff7946b // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67be414
	int32 *76f2bc03f7(); // Function OnlineSubsystemUtils.PartyBeaconClient.*76f2bc03f7 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67be4ac
	void *bdf086e512(); // Function OnlineSubsystemUtils.PartyBeaconClient.*bdf086e512 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xca2ea8
	struct F*32c040d354 *8c876b1daa(); // Function OnlineSubsystemUtils.PartyBeaconClient.*8c876b1daa // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67c0ec0
	struct F*32c040d354 *fed444989d(); // Function OnlineSubsystemUtils.PartyBeaconClient.*fed444989d // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67c1074
	struct FUniqueNetIdRepl *ce9901bc12(); // Function OnlineSubsystemUtils.PartyBeaconClient.*ce9901bc12 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67c0d64
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x4a0 (Inherited: 0x4a0)
struct ATestBeaconClient : AOnlineBeaconClient {

	void *8e4b53f9a2(); // Function OnlineSubsystemUtils.TestBeaconClient.*8e4b53f9a2 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67c0e74
	void *0d61fefe42(); // Function OnlineSubsystemUtils.TestBeaconClient.*0d61fefe42 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5737654
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x4d0 (Inherited: 0x418)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32 ListenPort; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct TArray<struct AOnlineBeaconClient*> *cd3fb75b60; // 0x420(0x10)
	char pad_430[0xa0]; // 0x430(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x418 (Inherited: 0x3f0)
struct AOnlineBeaconHostObject : AActor {
	struct FString *be9cecb10b; // 0x3f0(0x10)
	struct UClass* *36492fdc21; // 0x400(0x08)
	struct TArray<struct AOnlineBeaconClient*> *cd3fb75b60; // 0x408(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x570 (Inherited: 0x418)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct U*ce8726bb69* State; // 0x418(0x08)
	char pad_420[0x140]; // 0x420(0x140)
	bool bLogoutOnSessionTimeout; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float SessionTimeoutSecs; // 0x564(0x04)
	float TravelSessionTimeoutSecs; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x418 (Inherited: 0x418)
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

	struct U*1cd30aa270* *76dc1bba31(); // Function OnlineSubsystemUtils.*1cd30aa270.*76dc1bba31 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c0a20
};

// Class OnlineSubsystemUtils.*fc7b16a031
// Size: 0x60 (Inherited: 0x30)
struct U*fc7b16a031 : U*528374bf77 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	struct U*fc7b16a031* *318a4f0f3d(); // Function OnlineSubsystemUtils.*fc7b16a031.*318a4f0f3d // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c1228
};

// Class OnlineSubsystemUtils.*eedd028bd9
// Size: 0x30 (Inherited: 0x30)
struct U*eedd028bd9 : UBlueprintFunctionLibrary {

	struct UObject* *f43843db10(); // Function OnlineSubsystemUtils.*eedd028bd9.*f43843db10 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c0c4c
	int32 GetMyPlayerIndex(); // Function OnlineSubsystemUtils.*eedd028bd9.GetMyPlayerIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67c0014
	struct FString *8597799aee(); // Function OnlineSubsystemUtils.*eedd028bd9.*8597799aee // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67c0340
	bool GetIsMyTurn(); // Function OnlineSubsystemUtils.*eedd028bd9.GetIsMyTurn // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67bfcec
};


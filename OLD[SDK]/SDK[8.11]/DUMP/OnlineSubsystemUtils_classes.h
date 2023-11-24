// Class OnlineSubsystemUtils.IpConnection
// Size: 0x65868 (Inherited: 0x65848)
struct UIpConnection : UNetConnection {
	char pad_65848[0x20]; // 0x65848(0x20)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x4f0 (Inherited: 0x4c0)
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x4c0(0x01)
	char AllowPlayerPortUnreach : 1; // 0x4c0(0x01)
	char pad_4C0_2 : 6; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	uint32 MaxPortCountToTry; // 0x4c4(0x04)
	char pad_4C8[0x18]; // 0x4c8(0x18)
	uint32 ServerDesiredSocketReceiveBufferBytes; // 0x4e0(0x04)
	uint32 ServerDesiredSocketSendBufferBytes; // 0x4e4(0x04)
	uint32 ClientDesiredSocketReceiveBufferBytes; // 0x4e8(0x04)
	uint32 ClientDesiredSocketSendBufferBytes; // 0x4ec(0x04)
};

// Class OnlineSubsystemUtils.*9a66b4ca25
// Size: 0x28 (Inherited: 0x28)
struct U*9a66b4ca25 : UBlueprintFunctionLibrary {

	struct FText GetCachedAchievementDescription(struct UObject* WorldContextObject, struct FName AchievementID); // Function OnlineSubsystemUtils.*9a66b4ca25.GetCachedAchievementDescription // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67d3388
	struct APlayerController* GetCachedAchievementProgress(struct FName AchievementID); // Function OnlineSubsystemUtils.*9a66b4ca25.GetCachedAchievementProgress // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67d3750
};

// Class OnlineSubsystemUtils.*7edde3427b
// Size: 0x60 (Inherited: 0x28)
struct U*7edde3427b : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct APlayerController* *06779396a3(); // Function OnlineSubsystemUtils.*7edde3427b.*06779396a3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d1f20
	struct APlayerController* *1cd1b94614(); // Function OnlineSubsystemUtils.*7edde3427b.*1cd1b94614 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d2018
};

// Class OnlineSubsystemUtils.*0f3d93b3e5
// Size: 0x78 (Inherited: 0x28)
struct U*0f3d93b3e5 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)

	struct APlayerController* *e45fa130d4(struct FName AchievementName, int32 UserTag); // Function OnlineSubsystemUtils.*0f3d93b3e5.*e45fa130d4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d5098
};

// Class OnlineSubsystemUtils.*5c3538f725
// Size: 0xa0 (Inherited: 0x28)
struct U*5c3538f725 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)

	struct APlayerController* ConnectToService(); // Function OnlineSubsystemUtils.*5c3538f725.ConnectToService // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d22d4
};

// Class OnlineSubsystemUtils.*9ac297cd9a
// Size: 0xf0 (Inherited: 0x28)
struct U*9ac297cd9a : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0xa8]; // 0x48(0xa8)

	int32 CreateSession(bool bUseLAN); // Function OnlineSubsystemUtils.*9ac297cd9a.CreateSession // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d28e4
};

// Class OnlineSubsystemUtils.*435dee9aec
// Size: 0xa0 (Inherited: 0x28)
struct U*435dee9aec : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)

	void DestroySession(struct UObject* WorldContextObject); // Function OnlineSubsystemUtils.*435dee9aec.DestroySession // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d2a50
};

// Class OnlineSubsystemUtils.*b93ebab130
// Size: 0x78 (Inherited: 0x28)
struct U*b93ebab130 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)

	enum class EMPMatchOutcome *59744331f1(); // Function OnlineSubsystemUtils.*b93ebab130.*59744331f1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d2b2c
};

// Class OnlineSubsystemUtils.*8fb9b23be5
// Size: 0x70 (Inherited: 0x28)
struct U*8fb9b23be5 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x28]; // 0x48(0x28)

	void *6730483cef(struct APlayerController* PlayerController, TScriptInterface<struct U*4d3c68876f> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.*8fb9b23be5.*6730483cef // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d2dbc
};

// Class OnlineSubsystemUtils.*c3c5212d50
// Size: 0xc0 (Inherited: 0x28)
struct U*c3c5212d50 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x78]; // 0x48(0x78)

	void *000dbb4c68(); // Function OnlineSubsystemUtils.*c3c5212d50.*000dbb4c68 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67d431c
	struct F*e0db277394 *fb473a6254(); // Function OnlineSubsystemUtils.*c3c5212d50.*fb473a6254 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67d3f90
	struct APlayerController* FindSessions(int32 MaxResults); // Function OnlineSubsystemUtils.*c3c5212d50.FindSessions // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d2fac
	void *b36002db0d(struct F*e0db277394 Result); // Function OnlineSubsystemUtils.*c3c5212d50.*b36002db0d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67d3938
	struct F*e0db277394 *e50207002f(); // Function OnlineSubsystemUtils.*c3c5212d50.*e50207002f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67d3c68
};

// Class OnlineSubsystemUtils.*f60e25d4c8
// Size: 0x80 (Inherited: 0x28)
struct U*f60e25d4c8 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x38]; // 0x48(0x38)

	bool *205ee71549(); // Function OnlineSubsystemUtils.*f60e25d4c8.*205ee71549 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d3118
};

// Class OnlineSubsystemUtils.*4b248f3226
// Size: 0xc0 (Inherited: 0x28)
struct U*4b248f3226 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x78]; // 0x48(0x78)

	void *09b9c31483(struct F*00de9b975c ProductRequest); // Function OnlineSubsystemUtils.*4b248f3226.*09b9c31483 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67d248c
};

// Class OnlineSubsystemUtils.*7dfe1f446a
// Size: 0xd0 (Inherited: 0x28)
struct U*7dfe1f446a : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x88]; // 0x48(0x88)

	struct TArray<struct FString> *e3a59c8ff8(); // Function OnlineSubsystemUtils.*7dfe1f446a.*e3a59c8ff8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67d25a8
};

// Class OnlineSubsystemUtils.*96419b40f1
// Size: 0xd0 (Inherited: 0x28)
struct U*96419b40f1 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x88]; // 0x48(0x88)

	void *ae6bac7135(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.*96419b40f1.*ae6bac7135 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67d26c0
};

// Class OnlineSubsystemUtils.*0f55b2e335
// Size: 0x1b0 (Inherited: 0x28)
struct U*0f55b2e335 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x168]; // 0x48(0x168)

	struct F*e0db277394 JoinSession(); // Function OnlineSubsystemUtils.*0f55b2e335.JoinSession // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67d44e8
};

// Class OnlineSubsystemUtils.*b1cd102dc0
// Size: 0x28 (Inherited: 0x28)
struct U*b1cd102dc0 : UBlueprintFunctionLibrary {

	struct APlayerController* *e240f51e02(struct FName StatName); // Function OnlineSubsystemUtils.*b1cd102dc0.*e240f51e02 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d5254
};

// Class OnlineSubsystemUtils.*cbddb45e01
// Size: 0xa0 (Inherited: 0x28)
struct U*cbddb45e01 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)

	struct FName *e96d9e7cd6(); // Function OnlineSubsystemUtils.*cbddb45e01.*e96d9e7cd6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d23b0
};

// Class OnlineSubsystemUtils.*d9c96cda6e
// Size: 0xd0 (Inherited: 0x28)
struct U*d9c96cda6e : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x88]; // 0x48(0x88)

	void *c512f9f855(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.*d9c96cda6e.*c512f9f855 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d2808
};

// Class OnlineSubsystemUtils.*2ab0f864d6
// Size: 0x60 (Inherited: 0x28)
struct U*2ab0f864d6 : U*528374bf77 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct APlayerController* Logout(); // Function OnlineSubsystemUtils.*2ab0f864d6.Logout // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d46d8
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x410 (Inherited: 0x3e8)
struct AOnlineBeacon : AActor {
	char pad_3E8[0x8]; // 0x3e8(0x08)
	float BeaconConnectionInitialTimeout; // 0x3f0(0x04)
	float BeaconConnectionTimeout; // 0x3f4(0x04)
	struct UNetDriver* NetDriver; // 0x3f8(0x08)
	char pad_400[0x10]; // 0x400(0x10)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x4a0 (Inherited: 0x410)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* *12b843169e; // 0x410(0x08)
	struct UNetConnection* *6575d6510d; // 0x418(0x08)
	enum class EBeaconConnectionState *66d257caac; // 0x420(0x01)
	char pad_421[0x7f]; // 0x421(0x7f)

	void *2659e929ca(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*2659e929ca // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x57d529c
};

// Class OnlineSubsystemUtils.*ce8726bb69
// Size: 0x70 (Inherited: 0x28)
struct U*ce8726bb69 : UObject {
	struct FName SessionName; // 0x28(0x08)
	int32 *f2ff5d6839; // 0x30(0x04)
	int32 *64324c6cb3; // 0x34(0x04)
	int32 *ee0d3bd59b; // 0x38(0x04)
	int32 *6baa8eadd6; // 0x3c(0x04)
	struct FName *be7c876eca; // 0x40(0x08)
	int32 *1922a79d60; // 0x48(0x04)
	int32 *3a436e2c86; // 0x4c(0x04)
	struct TArray<struct F*32c040d354> *c036306a0d; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
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

	void *5a2d230fe2(); // Function OnlineSubsystemUtils.PartyBeaconClient.*5a2d230fe2 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67d2110
	void *f62ff7946b(); // Function OnlineSubsystemUtils.PartyBeaconClient.*f62ff7946b // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67d21a8
	void *76f2bc03f7(); // Function OnlineSubsystemUtils.PartyBeaconClient.*76f2bc03f7 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67d2240
	void *bdf086e512(); // Function OnlineSubsystemUtils.PartyBeaconClient.*bdf086e512 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcafb88
	struct FString *8c876b1daa(); // Function OnlineSubsystemUtils.PartyBeaconClient.*8c876b1daa // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67d4c54
	struct FString *fed444989d(); // Function OnlineSubsystemUtils.PartyBeaconClient.*fed444989d // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67d4e08
	void *ce9901bc12(); // Function OnlineSubsystemUtils.PartyBeaconClient.*ce9901bc12 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67d4af8
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x4a0 (Inherited: 0x4a0)
struct ATestBeaconClient : AOnlineBeaconClient {

	void *8e4b53f9a2(); // Function OnlineSubsystemUtils.TestBeaconClient.*8e4b53f9a2 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67d4c08
	void *0d61fefe42(); // Function OnlineSubsystemUtils.TestBeaconClient.*0d61fefe42 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x574e298
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x4c8 (Inherited: 0x410)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32 ListenPort; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct TArray<struct AOnlineBeaconClient*> *cd3fb75b60; // 0x418(0x10)
	char pad_428[0xa0]; // 0x428(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x410 (Inherited: 0x3e8)
struct AOnlineBeaconHostObject : AActor {
	struct FString *be9cecb10b; // 0x3e8(0x10)
	struct UClass* *36492fdc21; // 0x3f8(0x08)
	struct TArray<struct AOnlineBeaconClient*> *cd3fb75b60; // 0x400(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x570 (Inherited: 0x410)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct U*ce8726bb69* State; // 0x410(0x08)
	char pad_418[0x148]; // 0x418(0x148)
	bool bLogoutOnSessionTimeout; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float SessionTimeoutSecs; // 0x564(0x04)
	float TravelSessionTimeoutSecs; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x410 (Inherited: 0x410)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x170 (Inherited: 0x28)
struct UOnlineEngineInterfaceImpl : U*6f59c92ae0 {
	struct FName VoiceSubsystemNameOverride; // 0x28(0x08)
	char pad_30[0x140]; // 0x30(0x140)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x50 (Inherited: 0x38)
struct UOnlinePIESettings : U*6080c6b78b {
	bool bOnlinePIEEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*aa26e6f46d> Logins; // 0x40(0x10)
};

// Class OnlineSubsystemUtils.*72d0c359be
// Size: 0x310 (Inherited: 0x28)
struct U*72d0c359be : U*7e8b14b3a6 {
	char pad_28[0x2d8]; // 0x28(0x2d8)
	bool bIsFromInvite; // 0x300(0x01)
	bool *f5b8b65094; // 0x301(0x01)
	char pad_302[0xe]; // 0x302(0x0e)
};

// Class OnlineSubsystemUtils.*1cd30aa270
// Size: 0x70 (Inherited: 0x28)
struct U*1cd30aa270 : U*0d60cea73e {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x28]; // 0x48(0x28)

	int32 *76dc1bba31(); // Function OnlineSubsystemUtils.*1cd30aa270.*76dc1bba31 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d47b4
};

// Class OnlineSubsystemUtils.*fc7b16a031
// Size: 0x58 (Inherited: 0x28)
struct U*fc7b16a031 : U*528374bf77 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct UObject* *318a4f0f3d(struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.*fc7b16a031.*318a4f0f3d // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d4fbc
};

// Class OnlineSubsystemUtils.*eedd028bd9
// Size: 0x28 (Inherited: 0x28)
struct U*eedd028bd9 : UBlueprintFunctionLibrary {

	void *f43843db10(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.*eedd028bd9.*f43843db10 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67d49e0
	struct FString GetMyPlayerIndex(); // Function OnlineSubsystemUtils.*eedd028bd9.GetMyPlayerIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67d3da8
	struct UObject* *8597799aee(struct APlayerController* PlayerController, int32 PlayerIndex); // Function OnlineSubsystemUtils.*eedd028bd9.*8597799aee // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67d40d4
	struct FString GetIsMyTurn(); // Function OnlineSubsystemUtils.*eedd028bd9.GetIsMyTurn // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67d3a80
};


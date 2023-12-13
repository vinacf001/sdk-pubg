// Class OnlineSubsystemUtils.IpConnection
// Size: 0x65870 (Inherited: 0x65850)
struct UIpConnection : UNetConnection {
	struct TArray<struct UChildConnection*> Children; // 0x50(0x10)
	struct UNetDriver* Driver; // 0x60(0x08)
	struct UClass* *7cc253e76a; // 0x68(0x08)
	struct UPackageMap* PackageMap; // 0x70(0x08)
	struct TArray<struct UChannel*> *e44c91181f; // 0x78(0x10)
	struct TArray<struct AActor*> *274863db2e; // 0x88(0x10)
	struct AActor* ViewTarget; // 0x98(0x08)
	struct AActor* *5e3a3b3f66; // 0xa0(0x08)
	int32 *260ba92558; // 0xa8(0x04)
	char *f5fadd2d69 : 1; // 0xac(0x01)
	char pad_658AC_1 : 1; // 0x658ac(0x01)
	char *1194f7a57c : 1; // 0xac(0x01)
	struct TArray<struct UChannel*> *8a96153c21; // 0x138(0x10)
	struct FUniqueNetIdRepl PlayerId; // 0x170(0x18)
	double *a564cf33c7; // 0x1f0(0x08)
	struct TArray<struct UChannel*> *c638db3738; // 0x65730(0x10)
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

// Class OnlineSubsystemUtils.*d523dfef7f
// Size: 0x30 (Inherited: 0x30)
struct U*d523dfef7f : UBlueprintFunctionLibrary {
};

// Class OnlineSubsystemUtils.*5de524fc58
// Size: 0x68 (Inherited: 0x30)
struct U*5de524fc58 : U*27f1b06f69 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	void *d388edaed6(); // Function OnlineSubsystemUtils.*5de524fc58.*d388edaed6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b7eb38
	void *9e67affea1(); // Function OnlineSubsystemUtils.*5de524fc58.*9e67affea1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b7ec30
};

// Class OnlineSubsystemUtils.*a821e48945
// Size: 0x80 (Inherited: 0x30)
struct U*a821e48945 : U*27f1b06f69 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	void *cf6cf4a3f3(); // Function OnlineSubsystemUtils.*a821e48945.*cf6cf4a3f3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b81cb0
};

// Class OnlineSubsystemUtils.*a8f34d3110
// Size: 0xb0 (Inherited: 0x30)
struct U*a8f34d3110 : U*27f1b06f69 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	void ConnectToService(); // Function OnlineSubsystemUtils.*a8f34d3110.ConnectToService // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b7eeec
};

// Class OnlineSubsystemUtils.*aad4150c72
// Size: 0x100 (Inherited: 0x30)
struct U*aad4150c72 : U*27f1b06f69 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0xb0]; // 0x50(0xb0)

	void CreateSession(); // Function OnlineSubsystemUtils.*aad4150c72.CreateSession // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b7f4fc
};

// Class OnlineSubsystemUtils.*556ac806b9
// Size: 0xb0 (Inherited: 0x30)
struct U*556ac806b9 : U*27f1b06f69 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	void DestroySession(struct UObject* WorldContextObject); // Function OnlineSubsystemUtils.*556ac806b9.DestroySession // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b7f668
};

// Class OnlineSubsystemUtils.*76681d3f5a
// Size: 0x80 (Inherited: 0x30)
struct U*76681d3f5a : U*27f1b06f69 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	void *8430b4980a(struct UObject* WorldContextObject, struct APlayerController* PlayerController, TScriptInterface<struct U*2a966e6b3c> MatchActor, struct FString MatchId, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome, struct U*76681d3f5a* ReturnValue); // Function OnlineSubsystemUtils.*76681d3f5a.*8430b4980a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b7f744
};

// Class OnlineSubsystemUtils.*8b0d807ece
// Size: 0x78 (Inherited: 0x30)
struct U*8b0d807ece : U*27f1b06f69 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	void *c0a9bad110(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchId, TScriptInterface<struct U*2a966e6b3c> TurnBasedMatchInterface, struct U*8b0d807ece* ReturnValue); // Function OnlineSubsystemUtils.*8b0d807ece.*c0a9bad110 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b7f9d4
};

// Class OnlineSubsystemUtils.*e9e4ed6f9f
// Size: 0xd0 (Inherited: 0x30)
struct U*e9e4ed6f9f : U*27f1b06f69 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, struct U*e9e4ed6f9f* ReturnValue); // Function OnlineSubsystemUtils.*e9e4ed6f9f.FindSessions // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b7fbc4
	void *b6fd33033b(struct F*67a462540d Result, int32 ReturnValue); // Function OnlineSubsystemUtils.*e9e4ed6f9f.*b6fd33033b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b80880
	void *f44f22d731(struct F*67a462540d Result, int32 ReturnValue); // Function OnlineSubsystemUtils.*e9e4ed6f9f.*f44f22d731 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b80ba8
	void *4808bf70ba(struct F*67a462540d Result, struct FString ReturnValue); // Function OnlineSubsystemUtils.*e9e4ed6f9f.*4808bf70ba // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b80f34
	void *8b8d1c5697(struct F*67a462540d Result, int32 ReturnValue); // Function OnlineSubsystemUtils.*e9e4ed6f9f.*8b8d1c5697 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b80550
};

// Class OnlineSubsystemUtils.*cc66fda2da
// Size: 0x88 (Inherited: 0x30)
struct U*cc66fda2da : U*27f1b06f69 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	void *7e1dba0ecd(struct UObject* WorldContextObject, struct APlayerController* PlayerController, TScriptInterface<struct U*2a966e6b3c> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches, struct U*cc66fda2da* ReturnValue); // Function OnlineSubsystemUtils.*cc66fda2da.*7e1dba0ecd // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b7fd30
};

// Class OnlineSubsystemUtils.*260c2114d6
// Size: 0xc0 (Inherited: 0x30)
struct U*260c2114d6 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x70]; // 0x50(0x70)

	void *c461437a1b(struct APlayerController* PlayerController, struct F*4231c1ba70 ProductRequest, struct U*260c2114d6* ReturnValue); // Function OnlineSubsystemUtils.*260c2114d6.*c461437a1b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6b7f0a4
};

// Class OnlineSubsystemUtils.*40f7ea3346
// Size: 0xd0 (Inherited: 0x30)
struct U*40f7ea3346 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *b3ffe312da(struct APlayerController* PlayerController, struct TArray<struct FString> ProductIdentifiers, struct U*40f7ea3346* ReturnValue); // Function OnlineSubsystemUtils.*40f7ea3346.*b3ffe312da // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6b7f1c0
};

// Class OnlineSubsystemUtils.*4dd1553934
// Size: 0xd0 (Inherited: 0x30)
struct U*4dd1553934 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *44cf5e4df1(); // Function OnlineSubsystemUtils.*4dd1553934.*44cf5e4df1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6b7f2d8
};

// Class OnlineSubsystemUtils.*ba1da70fab
// Size: 0x1b0 (Inherited: 0x30)
struct U*ba1da70fab : U*27f1b06f69 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x160]; // 0x50(0x160)

	void JoinSession(); // Function OnlineSubsystemUtils.*ba1da70fab.JoinSession // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6b81100
};

// Class OnlineSubsystemUtils.*d1bdbbe96e
// Size: 0x30 (Inherited: 0x30)
struct U*d1bdbbe96e : UBlueprintFunctionLibrary {
};

// Class OnlineSubsystemUtils.*7cf1e898a3
// Size: 0xa0 (Inherited: 0x30)
struct U*7cf1e898a3 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	void *c978fe8fb8(); // Function OnlineSubsystemUtils.*7cf1e898a3.*c978fe8fb8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b7efc8
};

// Class OnlineSubsystemUtils.*053f95c784
// Size: 0xd0 (Inherited: 0x30)
struct U*053f95c784 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *4651475c2e(); // Function OnlineSubsystemUtils.*053f95c784.*4651475c2e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b7f420
};

// Class OnlineSubsystemUtils.*4d0f219a0c
// Size: 0x68 (Inherited: 0x30)
struct U*4d0f219a0c : U*6bfc7814f8 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	void Logout(); // Function OnlineSubsystemUtils.*4d0f219a0c.Logout // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b812f0
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
	struct AOnlineBeaconHostObject* *f9ee9fdd81; // 0x418(0x08)
	struct UNetConnection* *f71cd53f16; // 0x420(0x08)
	enum class EBeaconConnectionState *a83e06cbf4; // 0x428(0x01)
	char pad_429[0x77]; // 0x429(0x77)

	void *3469358c3a(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*3469358c3a // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x5b36c58
};

// Class OnlineSubsystemUtils.*cad91f1d51
// Size: 0x78 (Inherited: 0x30)
struct U*cad91f1d51 : UObject {
	struct FName SessionName; // 0x30(0x08)
	int32 *5d0f740360; // 0x38(0x04)
	int32 *f5e09314da; // 0x3c(0x04)
	int32 *bd15b529a9; // 0x40(0x04)
	int32 *c2980e011e; // 0x44(0x04)
	struct FName *3ff98e2865; // 0x48(0x08)
	int32 *69e863bb38; // 0x50(0x04)
	int32 *1baa86227f; // 0x54(0x04)
	struct TArray<struct F*9959510fcc> *245d7062d8; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x5d0 (Inherited: 0x4a0)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_4A0[0xc0]; // 0x4a0(0xc0)
	struct FString *52e67c87b3; // 0x560(0x10)
	struct F*9959510fcc *2667bec6f7; // 0x570(0x30)
	enum class EClientRequestType *ca2e4557bc; // 0x5a0(0x01)
	bool *423b558cf7; // 0x5a1(0x01)
	bool *c1ecc94293; // 0x5a2(0x01)
	char pad_5A3[0x2d]; // 0x5a3(0x2d)

	void *3539dd1449(struct FString Param0, struct F*9959510fcc Param1); // Function OnlineSubsystemUtils.PartyBeaconClient.*3539dd1449 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6b8186c
	void *d7a39e2757(enum class EPartyReservationResult Param0); // Function OnlineSubsystemUtils.PartyBeaconClient.*d7a39e2757 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6b7edc0
	void *3de2356710(enum class EPartyReservationResult Param0); // Function OnlineSubsystemUtils.PartyBeaconClient.*3de2356710 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6b7ed28
	void *eb38f3e20c(); // Function OnlineSubsystemUtils.PartyBeaconClient.*eb38f3e20c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6b7ee58
	void *d616d5b782(); // Function OnlineSubsystemUtils.PartyBeaconClient.*d616d5b782 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5b44a8c
	void *6d6a871095(); // Function OnlineSubsystemUtils.PartyBeaconClient.*6d6a871095 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6b81710
	void *21ee4d5c1a(); // Function OnlineSubsystemUtils.PartyBeaconClient.*21ee4d5c1a // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6b81a20
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x4a0 (Inherited: 0x4a0)
struct ATestBeaconClient : AOnlineBeaconClient {
	struct AOnlineBeaconHostObject* *f9ee9fdd81; // 0x418(0x08)
	struct UNetConnection* *f71cd53f16; // 0x420(0x08)
	enum class EBeaconConnectionState *a83e06cbf4; // 0x428(0x01)

	void *3469358c3a(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*3469358c3a // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x5b36c58
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x4d0 (Inherited: 0x418)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32 ListenPort; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct TArray<struct AOnlineBeaconClient*> *51c6f07d34; // 0x420(0x10)
	char pad_430[0xa0]; // 0x430(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x418 (Inherited: 0x3f0)
struct AOnlineBeaconHostObject : AActor {
	struct FString *ecfbc0996b; // 0x3f0(0x10)
	struct UClass* *2c616de9a2; // 0x400(0x08)
	struct TArray<struct AOnlineBeaconClient*> *51c6f07d34; // 0x408(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x570 (Inherited: 0x418)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct U*cad91f1d51* State; // 0x418(0x08)
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
	struct FString *ecfbc0996b; // 0x3f0(0x10)
	struct UClass* *2c616de9a2; // 0x400(0x08)
	struct TArray<struct AOnlineBeaconClient*> *51c6f07d34; // 0x408(0x10)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x180 (Inherited: 0x30)
struct UOnlineEngineInterfaceImpl : U*48d25e7d02 {
	struct FName VoiceSubsystemNameOverride; // 0x30(0x08)
	char pad_38[0x148]; // 0x38(0x148)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x58 (Inherited: 0x40)
struct UOnlinePIESettings : U*76e94c1d7f {
	bool bOnlinePIEEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct F*080d29fcef> Logins; // 0x48(0x10)
};

// Class OnlineSubsystemUtils.*9cb4334403
// Size: 0x310 (Inherited: 0x30)
struct U*9cb4334403 : U*bd40d2e124 {
	char pad_30[0x2d0]; // 0x30(0x2d0)
	bool bIsFromInvite; // 0x300(0x01)
	bool *1355959736; // 0x301(0x01)
	char pad_302[0xe]; // 0x302(0x0e)
};

// Class OnlineSubsystemUtils.*2842a6e903
// Size: 0x78 (Inherited: 0x30)
struct U*2842a6e903 : U*27f1b06f69 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	void *633b1553cf(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchId, enum class EMPMatchOutcome Outcome, int32 TurnTimeoutInSeconds, struct U*2842a6e903* ReturnValue); // Function OnlineSubsystemUtils.*2842a6e903.*633b1553cf // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b813cc
};

// Class OnlineSubsystemUtils.*575b6e14b9
// Size: 0x60 (Inherited: 0x30)
struct U*575b6e14b9 : U*6bfc7814f8 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	void *8afb152cd9(struct UObject* WorldContextObject, struct APlayerController* InPlayerController, struct U*575b6e14b9* ReturnValue); // Function OnlineSubsystemUtils.*575b6e14b9.*8afb152cd9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b81bd4
};

// Class OnlineSubsystemUtils.*5e4a29c46b
// Size: 0x30 (Inherited: 0x30)
struct U*5e4a29c46b : UBlueprintFunctionLibrary {
};


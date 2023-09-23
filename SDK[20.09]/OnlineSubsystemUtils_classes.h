// Class OnlineSubsystemUtils.IpConnection
// Size: 0x65868 (Inherited: 0x65848)
struct UIpConnection : UNetConnection {
	struct TArray<struct UChildConnection*> Children; // 0x48(0x10)
	struct UNetDriver* Driver; // 0x58(0x08)
	struct UClass* *2620c0f95a; // 0x60(0x08)
	struct UPackageMap* PackageMap; // 0x68(0x08)
	struct TArray<struct UChannel*> *db17e81f9a; // 0x70(0x10)
	struct TArray<struct AActor*> *4c97345279; // 0x80(0x10)
	struct AActor* ViewTarget; // 0x90(0x08)
	struct AActor* *52a10bb853; // 0x98(0x08)
	int32 *31a15aa452; // 0xa0(0x04)
	char *2b1c0c33d1 : 1; // 0xa4(0x01)
	char pad_658A4_1 : 1; // 0x658a4(0x01)
	char *ae08848d84 : 1; // 0xa4(0x01)
	struct TArray<struct UChannel*> *c0c274a36f; // 0x130(0x10)
	struct FUniqueNetIdRepl PlayerId; // 0x168(0x18)
	double *5be392aec6; // 0x1e8(0x08)
	struct TArray<struct UChannel*> *923a8e82b0; // 0x65728(0x10)
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

// Class OnlineSubsystemUtils.*f91ccb9b0a
// Size: 0x28 (Inherited: 0x28)
struct U*f91ccb9b0a : UBlueprintFunctionLibrary {
};

// Class OnlineSubsystemUtils.*512dc0c677
// Size: 0x60 (Inherited: 0x28)
struct U*512dc0c677 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	void *8da07960dc(struct UObject* WorldContextObject); // Function OnlineSubsystemUtils.*512dc0c677.*8da07960dc // Final|Native|Static|Public|BlueprintCallable // @ game+0x66631ec
	struct APlayerController* *6142936037(); // Function OnlineSubsystemUtils.*512dc0c677.*6142936037 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66630f4
};

// Class OnlineSubsystemUtils.*6c6091262b
// Size: 0x78 (Inherited: 0x28)
struct U*6c6091262b : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)

	int32 *ae5c31d19f(); // Function OnlineSubsystemUtils.*6c6091262b.*ae5c31d19f // Final|Native|Static|Public|BlueprintCallable // @ game+0x666626c
};

// Class OnlineSubsystemUtils.*236ab9f7df
// Size: 0xa0 (Inherited: 0x28)
struct U*236ab9f7df : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)

	void ConnectToService(struct UObject* WorldContextObject); // Function OnlineSubsystemUtils.*236ab9f7df.ConnectToService // Final|Native|Static|Public|BlueprintCallable // @ game+0x66634a8
};

// Class OnlineSubsystemUtils.*2661b98f46
// Size: 0xf0 (Inherited: 0x28)
struct U*2661b98f46 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0xa8]; // 0x48(0xa8)

	bool CreateSession(); // Function OnlineSubsystemUtils.*2661b98f46.CreateSession // Final|Native|Static|Public|BlueprintCallable // @ game+0x6663ab8
};

// Class OnlineSubsystemUtils.*6a3d540bcb
// Size: 0xa0 (Inherited: 0x28)
struct U*6a3d540bcb : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)

	void DestroySession(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.*6a3d540bcb.DestroySession // Final|Native|Static|Public|BlueprintCallable // @ game+0x6663c24
};

// Class OnlineSubsystemUtils.*7864b20184
// Size: 0x78 (Inherited: 0x28)
struct U*7864b20184 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)

	enum class EMPMatchOutcome *d8ff867182(struct UObject* WorldContextObject); // Function OnlineSubsystemUtils.*7864b20184.*d8ff867182 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6663d00
};

// Class OnlineSubsystemUtils.*09f0151f2f
// Size: 0x70 (Inherited: 0x28)
struct U*09f0151f2f : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x28]; // 0x48(0x28)

	TScriptInterface<struct U*6928e405e2> *f8e445e67d(); // Function OnlineSubsystemUtils.*09f0151f2f.*f8e445e67d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6663f90
};

// Class OnlineSubsystemUtils.*5b81aca21c
// Size: 0xc0 (Inherited: 0x28)
struct U*5b81aca21c : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x78]; // 0x48(0x78)

	void *12f1554960(); // Function OnlineSubsystemUtils.*5b81aca21c.*12f1554960 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6665164
	void *045df8d94a(); // Function OnlineSubsystemUtils.*5b81aca21c.*045df8d94a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6664b0c
	bool FindSessions(); // Function OnlineSubsystemUtils.*5b81aca21c.FindSessions // Final|Native|Static|Public|BlueprintCallable // @ game+0x6664180
	void *f5fd1bfb33(); // Function OnlineSubsystemUtils.*5b81aca21c.*f5fd1bfb33 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66654f0
	void *c7b8d59219(struct F*7792accc1d Result); // Function OnlineSubsystemUtils.*5b81aca21c.*c7b8d59219 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6664e3c
};

// Class OnlineSubsystemUtils.*c61c330c3d
// Size: 0x80 (Inherited: 0x28)
struct U*c61c330c3d : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x38]; // 0x48(0x38)

	bool *8d7280b473(struct UObject* WorldContextObject, TScriptInterface<struct U*6928e405e2> MatchActor); // Function OnlineSubsystemUtils.*c61c330c3d.*8d7280b473 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66642ec
};

// Class OnlineSubsystemUtils.*3b0c794516
// Size: 0xc0 (Inherited: 0x28)
struct U*3b0c794516 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x78]; // 0x48(0x78)

	struct F*8e2eb4d4d8 *e66feaf59b(); // Function OnlineSubsystemUtils.*3b0c794516.*e66feaf59b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6663660
};

// Class OnlineSubsystemUtils.*af1ebf94aa
// Size: 0xd0 (Inherited: 0x28)
struct U*af1ebf94aa : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x88]; // 0x48(0x88)

	void *e7b10b2923(struct TArray<struct FString> ProductIdentifiers); // Function OnlineSubsystemUtils.*af1ebf94aa.*e7b10b2923 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x666377c
};

// Class OnlineSubsystemUtils.*b7bf34a189
// Size: 0xd0 (Inherited: 0x28)
struct U*b7bf34a189 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x88]; // 0x48(0x88)

	struct APlayerController* *00ead2c633(); // Function OnlineSubsystemUtils.*b7bf34a189.*00ead2c633 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6663894
};

// Class OnlineSubsystemUtils.*ae3aa1a756
// Size: 0x1b0 (Inherited: 0x28)
struct U*ae3aa1a756 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x168]; // 0x48(0x168)

	void JoinSession(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.*ae3aa1a756.JoinSession // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66656bc
};

// Class OnlineSubsystemUtils.*6ef79c10be
// Size: 0x28 (Inherited: 0x28)
struct U*6ef79c10be : UBlueprintFunctionLibrary {
};

// Class OnlineSubsystemUtils.*bdfee6af64
// Size: 0xa0 (Inherited: 0x28)
struct U*bdfee6af64 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)

	void *3972f0f5f3(struct FName SessionName); // Function OnlineSubsystemUtils.*bdfee6af64.*3972f0f5f3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6663584
};

// Class OnlineSubsystemUtils.*a9e2293a2c
// Size: 0xd0 (Inherited: 0x28)
struct U*a9e2293a2c : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x88]; // 0x48(0x88)

	struct FName *f9b2372017(); // Function OnlineSubsystemUtils.*a9e2293a2c.*f9b2372017 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66639dc
};

// Class OnlineSubsystemUtils.*4f8634f1ff
// Size: 0x60 (Inherited: 0x28)
struct U*4f8634f1ff : U*4471bd9586 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	void Logout(struct UObject* WorldContextObject); // Function OnlineSubsystemUtils.*4f8634f1ff.Logout // Final|Native|Static|Public|BlueprintCallable // @ game+0x66658ac
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
	struct AOnlineBeaconHostObject* *6295b54882; // 0x418(0x08)
	struct UNetConnection* *5570c5318d; // 0x420(0x08)
	enum class EBeaconConnectionState *97d13b6109; // 0x428(0x01)
	char pad_429[0x77]; // 0x429(0x77)

	void *da8e453ad9(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*da8e453ad9 // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x566160c
};

// Class OnlineSubsystemUtils.*d7318bed82
// Size: 0x70 (Inherited: 0x28)
struct U*d7318bed82 : UObject {
	struct FName SessionName; // 0x28(0x08)
	int32 *669dbd615f; // 0x30(0x04)
	int32 *314f740dfd; // 0x34(0x04)
	int32 *2a2c6d2dd5; // 0x38(0x04)
	int32 *2f65b90c82; // 0x3c(0x04)
	struct FName *4962ebf938; // 0x40(0x08)
	int32 *2f156cdd27; // 0x48(0x04)
	int32 *9d1b4bb6e0; // 0x4c(0x04)
	struct TArray<struct F*57e1530851> *1557c80ec8; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x5d0 (Inherited: 0x4a0)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_4A0[0xc0]; // 0x4a0(0xc0)
	struct FString *af75bfb58c; // 0x560(0x10)
	struct F*57e1530851 *b37bafa5aa; // 0x570(0x30)
	enum class EClientRequestType *fbf93baeb1; // 0x5a0(0x01)
	bool *c0ba9d82a4; // 0x5a1(0x01)
	bool *d563e296ae; // 0x5a2(0x01)
	char pad_5A3[0x2d]; // 0x5a3(0x2d)

	void *bd68e9d8dd(); // Function OnlineSubsystemUtils.PartyBeaconClient.*bd68e9d8dd // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6663414
	void *9be76ebf74(); // Function OnlineSubsystemUtils.PartyBeaconClient.*9be76ebf74 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6665ccc
	struct FString *52dcebbf28(); // Function OnlineSubsystemUtils.PartyBeaconClient.*52dcebbf28 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6665e28
	void *63fc4d6591(); // Function OnlineSubsystemUtils.PartyBeaconClient.*63fc4d6591 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6665fdc
	void *2a78700f45(); // Function OnlineSubsystemUtils.PartyBeaconClient.*2a78700f45 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xc09b1c
	void *ccd6665772(); // Function OnlineSubsystemUtils.PartyBeaconClient.*ccd6665772 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x666337c
	void *04a4809aa2(); // Function OnlineSubsystemUtils.PartyBeaconClient.*04a4809aa2 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66632e4
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x4a0 (Inherited: 0x4a0)
struct ATestBeaconClient : AOnlineBeaconClient {
	struct AOnlineBeaconHostObject* *6295b54882; // 0x418(0x08)
	struct UNetConnection* *5570c5318d; // 0x420(0x08)
	enum class EBeaconConnectionState *97d13b6109; // 0x428(0x01)

	void *da8e453ad9(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*da8e453ad9 // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x566160c
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x4d0 (Inherited: 0x418)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32 ListenPort; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct TArray<struct AOnlineBeaconClient*> *b810197bee; // 0x420(0x10)
	char pad_430[0xa0]; // 0x430(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x418 (Inherited: 0x3f0)
struct AOnlineBeaconHostObject : AActor {
	struct FString *ac4a651d39; // 0x3f0(0x10)
	struct UClass* *db396b7354; // 0x400(0x08)
	struct TArray<struct AOnlineBeaconClient*> *b810197bee; // 0x408(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x570 (Inherited: 0x418)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct U*d7318bed82* State; // 0x418(0x08)
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
	struct FString *ac4a651d39; // 0x3f0(0x10)
	struct UClass* *db396b7354; // 0x400(0x08)
	struct TArray<struct AOnlineBeaconClient*> *b810197bee; // 0x408(0x10)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x170 (Inherited: 0x28)
struct UOnlineEngineInterfaceImpl : U*064a1a15d1 {
	struct FName VoiceSubsystemNameOverride; // 0x28(0x08)
	char pad_30[0x140]; // 0x30(0x140)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x50 (Inherited: 0x38)
struct UOnlinePIESettings : U*5cde8540b3 {
	bool bOnlinePIEEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*9aff348f10> Logins; // 0x40(0x10)
};

// Class OnlineSubsystemUtils.*398827b3b0
// Size: 0x310 (Inherited: 0x28)
struct U*398827b3b0 : U*41ff50be2e {
	char pad_28[0x2d8]; // 0x28(0x2d8)
	bool bIsFromInvite; // 0x300(0x01)
	bool *de42fd6886; // 0x301(0x01)
	char pad_302[0xe]; // 0x302(0x0e)
};

// Class OnlineSubsystemUtils.*619d7589d8
// Size: 0x70 (Inherited: 0x28)
struct U*619d7589d8 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x28]; // 0x48(0x28)

	void *4db1905a4e(struct APlayerController* PlayerController, enum class EMPMatchOutcome Outcome); // Function OnlineSubsystemUtils.*619d7589d8.*4db1905a4e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6665988
};

// Class OnlineSubsystemUtils.*029b13df22
// Size: 0x58 (Inherited: 0x28)
struct U*029b13df22 : U*4471bd9586 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct APlayerController* *ec8864b789(); // Function OnlineSubsystemUtils.*029b13df22.*ec8864b789 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6666190
};

// Class OnlineSubsystemUtils.*b5db62c41c
// Size: 0x28 (Inherited: 0x28)
struct U*b5db62c41c : UBlueprintFunctionLibrary {
};


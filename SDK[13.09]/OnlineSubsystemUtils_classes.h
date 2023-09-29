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

	void *8da07960dc(struct UObject* WorldContextObject); // Function OnlineSubsystemUtils.*512dc0c677.*8da07960dc // None // @ game+0x663b03c
	struct APlayerController* *6142936037(); // Function OnlineSubsystemUtils.*512dc0c677.*6142936037 // None // @ game+0x663af44
};

// Class OnlineSubsystemUtils.*6c6091262b
// Size: 0x78 (Inherited: 0x28)
struct U*6c6091262b : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)

	int32 *ae5c31d19f(); // Function OnlineSubsystemUtils.*6c6091262b.*ae5c31d19f // None // @ game+0x663e0bc
};

// Class OnlineSubsystemUtils.*236ab9f7df
// Size: 0xa0 (Inherited: 0x28)
struct U*236ab9f7df : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)

	void ConnectToService(struct UObject* WorldContextObject); // Function OnlineSubsystemUtils.*236ab9f7df.ConnectToService // None // @ game+0x663b2f8
};

// Class OnlineSubsystemUtils.*2661b98f46
// Size: 0xf0 (Inherited: 0x28)
struct U*2661b98f46 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0xa8]; // 0x48(0xa8)

	bool CreateSession(); // Function OnlineSubsystemUtils.*2661b98f46.CreateSession // None // @ game+0x663b908
};

// Class OnlineSubsystemUtils.*6a3d540bcb
// Size: 0xa0 (Inherited: 0x28)
struct U*6a3d540bcb : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)

	void DestroySession(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.*6a3d540bcb.DestroySession // None // @ game+0x663ba74
};

// Class OnlineSubsystemUtils.*7864b20184
// Size: 0x78 (Inherited: 0x28)
struct U*7864b20184 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)

	enum class EMPMatchOutcome *d8ff867182(struct UObject* WorldContextObject); // Function OnlineSubsystemUtils.*7864b20184.*d8ff867182 // None // @ game+0x663bb50
};

// Class OnlineSubsystemUtils.*09f0151f2f
// Size: 0x70 (Inherited: 0x28)
struct U*09f0151f2f : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x28]; // 0x48(0x28)

	TScriptInterface<struct U*6928e405e2> *f8e445e67d(); // Function OnlineSubsystemUtils.*09f0151f2f.*f8e445e67d // None // @ game+0x663bde0
};

// Class OnlineSubsystemUtils.*5b81aca21c
// Size: 0xc0 (Inherited: 0x28)
struct U*5b81aca21c : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x78]; // 0x48(0x78)

	void *12f1554960(); // Function OnlineSubsystemUtils.*5b81aca21c.*12f1554960 // None // @ game+0x663cfb4
	void *045df8d94a(); // Function OnlineSubsystemUtils.*5b81aca21c.*045df8d94a // None // @ game+0x663c95c
	bool FindSessions(); // Function OnlineSubsystemUtils.*5b81aca21c.FindSessions // None // @ game+0x663bfd0
	void *f5fd1bfb33(); // Function OnlineSubsystemUtils.*5b81aca21c.*f5fd1bfb33 // None // @ game+0x663d340
	void *c7b8d59219(struct F*7792accc1d Result); // Function OnlineSubsystemUtils.*5b81aca21c.*c7b8d59219 // None // @ game+0x663cc8c
};

// Class OnlineSubsystemUtils.*c61c330c3d
// Size: 0x80 (Inherited: 0x28)
struct U*c61c330c3d : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x38]; // 0x48(0x38)

	bool *8d7280b473(struct UObject* WorldContextObject, TScriptInterface<struct U*6928e405e2> MatchActor); // Function OnlineSubsystemUtils.*c61c330c3d.*8d7280b473 // None // @ game+0x663c13c
};

// Class OnlineSubsystemUtils.*3b0c794516
// Size: 0xc0 (Inherited: 0x28)
struct U*3b0c794516 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x78]; // 0x48(0x78)

	struct F*8e2eb4d4d8 *e66feaf59b(); // Function OnlineSubsystemUtils.*3b0c794516.*e66feaf59b // None // @ game+0x663b4b0
};

// Class OnlineSubsystemUtils.*af1ebf94aa
// Size: 0xd0 (Inherited: 0x28)
struct U*af1ebf94aa : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x88]; // 0x48(0x88)

	void *e7b10b2923(struct TArray<struct FString> ProductIdentifiers); // Function OnlineSubsystemUtils.*af1ebf94aa.*e7b10b2923 // None // @ game+0x663b5cc
};

// Class OnlineSubsystemUtils.*b7bf34a189
// Size: 0xd0 (Inherited: 0x28)
struct U*b7bf34a189 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x88]; // 0x48(0x88)

	struct APlayerController* *00ead2c633(); // Function OnlineSubsystemUtils.*b7bf34a189.*00ead2c633 // None // @ game+0x663b6e4
};

// Class OnlineSubsystemUtils.*ae3aa1a756
// Size: 0x1b0 (Inherited: 0x28)
struct U*ae3aa1a756 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x168]; // 0x48(0x168)

	void JoinSession(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.*ae3aa1a756.JoinSession // None // @ game+0x663d50c
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

	void *3972f0f5f3(struct FName SessionName); // Function OnlineSubsystemUtils.*bdfee6af64.*3972f0f5f3 // None // @ game+0x663b3d4
};

// Class OnlineSubsystemUtils.*a9e2293a2c
// Size: 0xd0 (Inherited: 0x28)
struct U*a9e2293a2c : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x88]; // 0x48(0x88)

	struct FName *f9b2372017(); // Function OnlineSubsystemUtils.*a9e2293a2c.*f9b2372017 // None // @ game+0x663b82c
};

// Class OnlineSubsystemUtils.*4f8634f1ff
// Size: 0x60 (Inherited: 0x28)
struct U*4f8634f1ff : U*4471bd9586 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	void Logout(struct UObject* WorldContextObject); // Function OnlineSubsystemUtils.*4f8634f1ff.Logout // None // @ game+0x663d6fc
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
	struct AOnlineBeaconHostObject* *6295b54882; // 0x420(0x08)
	struct UNetConnection* *5570c5318d; // 0x428(0x08)
	enum class EBeaconConnectionState *97d13b6109; // 0x430(0x01)
	char pad_431[0x7f]; // 0x431(0x7f)

	void *da8e453ad9(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*da8e453ad9 // None // @ game+0x5658df0
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
// Size: 0x5e0 (Inherited: 0x4b0)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_4B0[0xc0]; // 0x4b0(0xc0)
	struct FString *af75bfb58c; // 0x570(0x10)
	struct F*57e1530851 *b37bafa5aa; // 0x580(0x30)
	enum class EClientRequestType *fbf93baeb1; // 0x5b0(0x01)
	bool *c0ba9d82a4; // 0x5b1(0x01)
	bool *d563e296ae; // 0x5b2(0x01)
	char pad_5B3[0x2d]; // 0x5b3(0x2d)

	void *bd68e9d8dd(); // Function OnlineSubsystemUtils.PartyBeaconClient.*bd68e9d8dd // None // @ game+0x663b264
	void *9be76ebf74(); // Function OnlineSubsystemUtils.PartyBeaconClient.*9be76ebf74 // None // @ game+0x663db1c
	struct FString *52dcebbf28(); // Function OnlineSubsystemUtils.PartyBeaconClient.*52dcebbf28 // None // @ game+0x663dc78
	void *63fc4d6591(); // Function OnlineSubsystemUtils.PartyBeaconClient.*63fc4d6591 // None // @ game+0x663de2c
	void *2a78700f45(); // Function OnlineSubsystemUtils.PartyBeaconClient.*2a78700f45 // None // @ game+0xbd299c
	void *ccd6665772(); // Function OnlineSubsystemUtils.PartyBeaconClient.*ccd6665772 // None // @ game+0x663b1cc
	void *04a4809aa2(); // Function OnlineSubsystemUtils.PartyBeaconClient.*04a4809aa2 // None // @ game+0x663b134
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x4b0 (Inherited: 0x4b0)
struct ATestBeaconClient : AOnlineBeaconClient {
	struct AOnlineBeaconHostObject* *6295b54882; // 0x420(0x08)
	struct UNetConnection* *5570c5318d; // 0x428(0x08)
	enum class EBeaconConnectionState *97d13b6109; // 0x430(0x01)

	void *da8e453ad9(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*da8e453ad9 // None // @ game+0x5658df0
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x4d8 (Inherited: 0x420)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32 ListenPort; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct TArray<struct AOnlineBeaconClient*> *b810197bee; // 0x428(0x10)
	char pad_438[0xa0]; // 0x438(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x420 (Inherited: 0x3f8)
struct AOnlineBeaconHostObject : AActor {
	struct FString *ac4a651d39; // 0x3f8(0x10)
	struct UClass* *db396b7354; // 0x408(0x08)
	struct TArray<struct AOnlineBeaconClient*> *b810197bee; // 0x410(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x580 (Inherited: 0x420)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct U*d7318bed82* State; // 0x420(0x08)
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
	struct FString *ac4a651d39; // 0x3f8(0x10)
	struct UClass* *db396b7354; // 0x408(0x08)
	struct TArray<struct AOnlineBeaconClient*> *b810197bee; // 0x410(0x10)
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

	void *4db1905a4e(struct APlayerController* PlayerController, enum class EMPMatchOutcome Outcome); // Function OnlineSubsystemUtils.*619d7589d8.*4db1905a4e // None // @ game+0x663d7d8
};

// Class OnlineSubsystemUtils.*029b13df22
// Size: 0x58 (Inherited: 0x28)
struct U*029b13df22 : U*4471bd9586 {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct APlayerController* *ec8864b789(); // Function OnlineSubsystemUtils.*029b13df22.*ec8864b789 // None // @ game+0x663dfe0
};

// Class OnlineSubsystemUtils.*b5db62c41c
// Size: 0x28 (Inherited: 0x28)
struct U*b5db62c41c : UBlueprintFunctionLibrary {
};


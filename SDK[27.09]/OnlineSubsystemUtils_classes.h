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

// Class OnlineSubsystemUtils.*f91ccb9b0a
// Size: 0x30 (Inherited: 0x30)
struct U*f91ccb9b0a : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(); // Function OnlineSubsystemUtils.*f91ccb9b0a.GetCachedAchievementProgress // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a8b248
	void GetCachedAchievementDescription(); // Function OnlineSubsystemUtils.*f91ccb9b0a.GetCachedAchievementDescription // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a8ae80
};

// Class OnlineSubsystemUtils.*512dc0c677
// Size: 0x68 (Inherited: 0x30)
struct U*512dc0c677 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	void *8da07960dc(); // Function OnlineSubsystemUtils.*512dc0c677.*8da07960dc // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a89b10
	void *6142936037(); // Function OnlineSubsystemUtils.*512dc0c677.*6142936037 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a89a18
};

// Class OnlineSubsystemUtils.*6c6091262b
// Size: 0x80 (Inherited: 0x30)
struct U*6c6091262b : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	void *ae5c31d19f(); // Function OnlineSubsystemUtils.*6c6091262b.*ae5c31d19f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8cb90
};

// Class OnlineSubsystemUtils.*236ab9f7df
// Size: 0xb0 (Inherited: 0x30)
struct U*236ab9f7df : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	void ConnectToService(); // Function OnlineSubsystemUtils.*236ab9f7df.ConnectToService // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a89dcc
};

// Class OnlineSubsystemUtils.*2661b98f46
// Size: 0x100 (Inherited: 0x30)
struct U*2661b98f46 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0xb0]; // 0x50(0xb0)

	void CreateSession(); // Function OnlineSubsystemUtils.*2661b98f46.CreateSession // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8a3dc
};

// Class OnlineSubsystemUtils.*6a3d540bcb
// Size: 0xb0 (Inherited: 0x30)
struct U*6a3d540bcb : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	void DestroySession(); // Function OnlineSubsystemUtils.*6a3d540bcb.DestroySession // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8a548
};

// Class OnlineSubsystemUtils.*7864b20184
// Size: 0x80 (Inherited: 0x30)
struct U*7864b20184 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	void *d8ff867182(); // Function OnlineSubsystemUtils.*7864b20184.*d8ff867182 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8a624
};

// Class OnlineSubsystemUtils.*09f0151f2f
// Size: 0x78 (Inherited: 0x30)
struct U*09f0151f2f : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	void *f8e445e67d(); // Function OnlineSubsystemUtils.*09f0151f2f.*f8e445e67d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8a8b4
};

// Class OnlineSubsystemUtils.*5b81aca21c
// Size: 0xd0 (Inherited: 0x30)
struct U*5b81aca21c : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *12f1554960(); // Function OnlineSubsystemUtils.*5b81aca21c.*12f1554960 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6a8ba88
	void *045df8d94a(); // Function OnlineSubsystemUtils.*5b81aca21c.*045df8d94a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6a8b430
	void FindSessions(); // Function OnlineSubsystemUtils.*5b81aca21c.FindSessions // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8aaa4
	void *f5fd1bfb33(); // Function OnlineSubsystemUtils.*5b81aca21c.*f5fd1bfb33 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6a8be14
	void *c7b8d59219(); // Function OnlineSubsystemUtils.*5b81aca21c.*c7b8d59219 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6a8b760
};

// Class OnlineSubsystemUtils.*c61c330c3d
// Size: 0x88 (Inherited: 0x30)
struct U*c61c330c3d : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	void *8d7280b473(); // Function OnlineSubsystemUtils.*c61c330c3d.*8d7280b473 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8ac10
};

// Class OnlineSubsystemUtils.*3b0c794516
// Size: 0xc0 (Inherited: 0x30)
struct U*3b0c794516 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x70]; // 0x50(0x70)

	void *e66feaf59b(); // Function OnlineSubsystemUtils.*3b0c794516.*e66feaf59b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a89f84
};

// Class OnlineSubsystemUtils.*af1ebf94aa
// Size: 0xd0 (Inherited: 0x30)
struct U*af1ebf94aa : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *e7b10b2923(); // Function OnlineSubsystemUtils.*af1ebf94aa.*e7b10b2923 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a8a0a0
};

// Class OnlineSubsystemUtils.*b7bf34a189
// Size: 0xd0 (Inherited: 0x30)
struct U*b7bf34a189 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *00ead2c633(); // Function OnlineSubsystemUtils.*b7bf34a189.*00ead2c633 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a8a1b8
};

// Class OnlineSubsystemUtils.*ae3aa1a756
// Size: 0x1b0 (Inherited: 0x30)
struct U*ae3aa1a756 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x160]; // 0x50(0x160)

	void JoinSession(); // Function OnlineSubsystemUtils.*ae3aa1a756.JoinSession // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a8bfe0
};

// Class OnlineSubsystemUtils.*6ef79c10be
// Size: 0x30 (Inherited: 0x30)
struct U*6ef79c10be : UBlueprintFunctionLibrary {

	void *eb02e97933(); // Function OnlineSubsystemUtils.*6ef79c10be.*eb02e97933 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8cd4c
};

// Class OnlineSubsystemUtils.*bdfee6af64
// Size: 0xa0 (Inherited: 0x30)
struct U*bdfee6af64 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	void *3972f0f5f3(); // Function OnlineSubsystemUtils.*bdfee6af64.*3972f0f5f3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a89ea8
};

// Class OnlineSubsystemUtils.*a9e2293a2c
// Size: 0xd0 (Inherited: 0x30)
struct U*a9e2293a2c : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *f9b2372017(); // Function OnlineSubsystemUtils.*a9e2293a2c.*f9b2372017 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8a300
};

// Class OnlineSubsystemUtils.*4f8634f1ff
// Size: 0x68 (Inherited: 0x30)
struct U*4f8634f1ff : U*4471bd9586 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	void Logout(); // Function OnlineSubsystemUtils.*4f8634f1ff.Logout // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8c1d0
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x430 (Inherited: 0x408)
struct AOnlineBeacon : AActor {
	char pad_408[0x8]; // 0x408(0x08)
	float BeaconConnectionInitialTimeout; // 0x410(0x04)
	float BeaconConnectionTimeout; // 0x414(0x04)
	struct UNetDriver* NetDriver; // 0x418(0x08)
	char pad_420[0x10]; // 0x420(0x10)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x4c0 (Inherited: 0x430)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* *6295b54882; // 0x430(0x08)
	struct UNetConnection* *5570c5318d; // 0x438(0x08)
	enum class EBeaconConnectionState *97d13b6109; // 0x440(0x01)
	char pad_441[0x7f]; // 0x441(0x7f)

	void *da8e453ad9(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*da8e453ad9 // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x5a55740
};

// Class OnlineSubsystemUtils.*d7318bed82
// Size: 0x78 (Inherited: 0x30)
struct U*d7318bed82 : UObject {
	struct FName SessionName; // 0x30(0x08)
	int32 *669dbd615f; // 0x38(0x04)
	int32 *314f740dfd; // 0x3c(0x04)
	int32 *2a2c6d2dd5; // 0x40(0x04)
	int32 *2f65b90c82; // 0x44(0x04)
	struct FName *4962ebf938; // 0x48(0x08)
	int32 *2f156cdd27; // 0x50(0x04)
	int32 *9d1b4bb6e0; // 0x54(0x04)
	struct TArray<struct F*57e1530851> *1557c80ec8; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x5f0 (Inherited: 0x4c0)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_4C0[0xc0]; // 0x4c0(0xc0)
	struct FString *af75bfb58c; // 0x580(0x10)
	struct F*57e1530851 *b37bafa5aa; // 0x590(0x30)
	enum class EClientRequestType *fbf93baeb1; // 0x5c0(0x01)
	bool *c0ba9d82a4; // 0x5c1(0x01)
	bool *d563e296ae; // 0x5c2(0x01)
	char pad_5C3[0x2d]; // 0x5c3(0x2d)

	void *bd68e9d8dd(); // Function OnlineSubsystemUtils.PartyBeaconClient.*bd68e9d8dd // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6a89d38
	void *9be76ebf74(); // Function OnlineSubsystemUtils.PartyBeaconClient.*9be76ebf74 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6a8c5f0
	void *52dcebbf28(); // Function OnlineSubsystemUtils.PartyBeaconClient.*52dcebbf28 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6a8c74c
	void *63fc4d6591(); // Function OnlineSubsystemUtils.PartyBeaconClient.*63fc4d6591 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6a8c900
	void *2a78700f45(); // Function OnlineSubsystemUtils.PartyBeaconClient.*2a78700f45 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcc52d8
	void *ccd6665772(); // Function OnlineSubsystemUtils.PartyBeaconClient.*ccd6665772 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6a89ca0
	void *04a4809aa2(); // Function OnlineSubsystemUtils.PartyBeaconClient.*04a4809aa2 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6a89c08
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x4c0 (Inherited: 0x4c0)
struct ATestBeaconClient : AOnlineBeaconClient {

	void *7b7a85fd5a(); // Function OnlineSubsystemUtils.TestBeaconClient.*7b7a85fd5a // Net|NetReliableNative|Event|Public|NetClient // @ game+0x59ce100
	void *f1df54e948(); // Function OnlineSubsystemUtils.TestBeaconClient.*f1df54e948 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6a8c700
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x4e8 (Inherited: 0x430)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32 ListenPort; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct TArray<struct AOnlineBeaconClient*> *b810197bee; // 0x438(0x10)
	char pad_448[0xa0]; // 0x448(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x430 (Inherited: 0x408)
struct AOnlineBeaconHostObject : AActor {
	struct FString *ac4a651d39; // 0x408(0x10)
	struct UClass* *db396b7354; // 0x418(0x08)
	struct TArray<struct AOnlineBeaconClient*> *b810197bee; // 0x420(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x590 (Inherited: 0x430)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct U*d7318bed82* State; // 0x430(0x08)
	char pad_438[0x148]; // 0x438(0x148)
	bool bLogoutOnSessionTimeout; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	float SessionTimeoutSecs; // 0x584(0x04)
	float TravelSessionTimeoutSecs; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x430 (Inherited: 0x430)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x180 (Inherited: 0x30)
struct UOnlineEngineInterfaceImpl : U*064a1a15d1 {
	struct FName VoiceSubsystemNameOverride; // 0x30(0x08)
	char pad_38[0x148]; // 0x38(0x148)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x58 (Inherited: 0x40)
struct UOnlinePIESettings : U*5cde8540b3 {
	bool bOnlinePIEEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct F*9aff348f10> Logins; // 0x48(0x10)
};

// Class OnlineSubsystemUtils.*398827b3b0
// Size: 0x310 (Inherited: 0x30)
struct U*398827b3b0 : U*41ff50be2e {
	char pad_30[0x2d0]; // 0x30(0x2d0)
	bool bIsFromInvite; // 0x300(0x01)
	bool *de42fd6886; // 0x301(0x01)
	char pad_302[0xe]; // 0x302(0x0e)
};

// Class OnlineSubsystemUtils.*619d7589d8
// Size: 0x78 (Inherited: 0x30)
struct U*619d7589d8 : U*d387283508 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	void *4db1905a4e(); // Function OnlineSubsystemUtils.*619d7589d8.*4db1905a4e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8c2ac
};

// Class OnlineSubsystemUtils.*029b13df22
// Size: 0x60 (Inherited: 0x30)
struct U*029b13df22 : U*4471bd9586 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	void *ec8864b789(); // Function OnlineSubsystemUtils.*029b13df22.*ec8864b789 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8cab4
};

// Class OnlineSubsystemUtils.*b5db62c41c
// Size: 0x30 (Inherited: 0x30)
struct U*b5db62c41c : UBlueprintFunctionLibrary {

	void GetMyPlayerIndex(); // Function OnlineSubsystemUtils.*b5db62c41c.GetMyPlayerIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a8b8a0
	void *f8bd38335a(); // Function OnlineSubsystemUtils.*b5db62c41c.*f8bd38335a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a8bbcc
	void GetIsMyTurn(); // Function OnlineSubsystemUtils.*b5db62c41c.GetIsMyTurn // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a8b578
	void *64fadb29b7(); // Function OnlineSubsystemUtils.*b5db62c41c.*64fadb29b7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6a8c4d8
};


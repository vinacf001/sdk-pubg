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

// Class OnlineSubsystemUtils.*f30fb39ad7
// Size: 0x30 (Inherited: 0x30)
struct U*f30fb39ad7 : UBlueprintFunctionLibrary {

	bool GetCachedAchievementDescription(); // Function OnlineSubsystemUtils.*f30fb39ad7.GetCachedAchievementDescription // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66ab7bc
	float GetCachedAchievementProgress(); // Function OnlineSubsystemUtils.*f30fb39ad7.GetCachedAchievementProgress // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66abb84
};

// Class OnlineSubsystemUtils.*09135a2f3d
// Size: 0x68 (Inherited: 0x30)
struct U*09135a2f3d : U*c3bd707d45 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct U*09135a2f3d* *aa3cb7cc04(); // Function OnlineSubsystemUtils.*09135a2f3d.*aa3cb7cc04 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66aa354
	struct U*09135a2f3d* *e4395b0802(); // Function OnlineSubsystemUtils.*09135a2f3d.*e4395b0802 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66aa44c
};

// Class OnlineSubsystemUtils.*3973787094
// Size: 0x80 (Inherited: 0x30)
struct U*3973787094 : U*c3bd707d45 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct U*3973787094* *1834107cfe(); // Function OnlineSubsystemUtils.*3973787094.*1834107cfe // Final|Native|Static|Public|BlueprintCallable // @ game+0x66ad4cc
};

// Class OnlineSubsystemUtils.*ce5605bbe8
// Size: 0xb0 (Inherited: 0x30)
struct U*ce5605bbe8 : U*c3bd707d45 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	struct U*ce5605bbe8* ConnectToService(); // Function OnlineSubsystemUtils.*ce5605bbe8.ConnectToService // Final|Native|Static|Public|BlueprintCallable // @ game+0x66aa708
};

// Class OnlineSubsystemUtils.*56b1f3e5fc
// Size: 0x100 (Inherited: 0x30)
struct U*56b1f3e5fc : U*c3bd707d45 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0xb0]; // 0x50(0xb0)

	struct U*56b1f3e5fc* CreateSession(); // Function OnlineSubsystemUtils.*56b1f3e5fc.CreateSession // Final|Native|Static|Public|BlueprintCallable // @ game+0x66aad18
};

// Class OnlineSubsystemUtils.*f165531a59
// Size: 0xb0 (Inherited: 0x30)
struct U*f165531a59 : U*c3bd707d45 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	struct U*f165531a59* DestroySession(); // Function OnlineSubsystemUtils.*f165531a59.DestroySession // Final|Native|Static|Public|BlueprintCallable // @ game+0x66aae84
};

// Class OnlineSubsystemUtils.*3f6e4f3231
// Size: 0x80 (Inherited: 0x30)
struct U*3f6e4f3231 : U*c3bd707d45 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct U*3f6e4f3231* *73ab7fb69b(); // Function OnlineSubsystemUtils.*3f6e4f3231.*73ab7fb69b // Final|Native|Static|Public|BlueprintCallable // @ game+0x66aaf60
};

// Class OnlineSubsystemUtils.*886469e28e
// Size: 0x78 (Inherited: 0x30)
struct U*886469e28e : U*c3bd707d45 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct U*886469e28e* *909b704e61(); // Function OnlineSubsystemUtils.*886469e28e.*909b704e61 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66ab1f0
};

// Class OnlineSubsystemUtils.*9d2852898d
// Size: 0xd0 (Inherited: 0x30)
struct U*9d2852898d : U*c3bd707d45 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	struct FString *b68af9c26c(); // Function OnlineSubsystemUtils.*9d2852898d.*b68af9c26c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66ac750
	struct U*9d2852898d* FindSessions(); // Function OnlineSubsystemUtils.*9d2852898d.FindSessions // Final|Native|Static|Public|BlueprintCallable // @ game+0x66ab3e0
	int32 *ae058a6c9e(); // Function OnlineSubsystemUtils.*9d2852898d.*ae058a6c9e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66ac09c
	int32 *08bd77b9cf(); // Function OnlineSubsystemUtils.*9d2852898d.*08bd77b9cf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66abd6c
	int32 *bbdf263c0b(); // Function OnlineSubsystemUtils.*9d2852898d.*bbdf263c0b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66ac3c4
};

// Class OnlineSubsystemUtils.*5d1b07b5b8
// Size: 0x88 (Inherited: 0x30)
struct U*5d1b07b5b8 : U*c3bd707d45 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct U*5d1b07b5b8* *a00c4859fd(); // Function OnlineSubsystemUtils.*5d1b07b5b8.*a00c4859fd // Final|Native|Static|Public|BlueprintCallable // @ game+0x66ab54c
};

// Class OnlineSubsystemUtils.*996d87815e
// Size: 0xc0 (Inherited: 0x30)
struct U*996d87815e : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x70]; // 0x50(0x70)

	struct U*996d87815e* *582c2de036(); // Function OnlineSubsystemUtils.*996d87815e.*582c2de036 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66aa8c0
};

// Class OnlineSubsystemUtils.*9e997300e8
// Size: 0xd0 (Inherited: 0x30)
struct U*9e997300e8 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	struct U*9e997300e8* *2d5479b110(); // Function OnlineSubsystemUtils.*9e997300e8.*2d5479b110 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66aa9dc
};

// Class OnlineSubsystemUtils.*250ba3b820
// Size: 0xd0 (Inherited: 0x30)
struct U*250ba3b820 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	struct U*250ba3b820* *eec99890bc(); // Function OnlineSubsystemUtils.*250ba3b820.*eec99890bc // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66aaaf4
};

// Class OnlineSubsystemUtils.*901f81069a
// Size: 0x1b0 (Inherited: 0x30)
struct U*901f81069a : U*c3bd707d45 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x160]; // 0x50(0x160)

	struct U*901f81069a* JoinSession(); // Function OnlineSubsystemUtils.*901f81069a.JoinSession // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66ac91c
};

// Class OnlineSubsystemUtils.*ff6934b8ad
// Size: 0x30 (Inherited: 0x30)
struct U*ff6934b8ad : UBlueprintFunctionLibrary {

	bool *ed2631e9a9(); // Function OnlineSubsystemUtils.*ff6934b8ad.*ed2631e9a9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66ad688
};

// Class OnlineSubsystemUtils.*b64ab2a333
// Size: 0xa0 (Inherited: 0x30)
struct U*b64ab2a333 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct U*b64ab2a333* *55e43ebc8c(); // Function OnlineSubsystemUtils.*b64ab2a333.*55e43ebc8c // Final|Native|Static|Public|BlueprintCallable // @ game+0x66aa7e4
};

// Class OnlineSubsystemUtils.*27ba8e3ff7
// Size: 0xd0 (Inherited: 0x30)
struct U*27ba8e3ff7 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	struct U*27ba8e3ff7* *95fa849753(); // Function OnlineSubsystemUtils.*27ba8e3ff7.*95fa849753 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66aac3c
};

// Class OnlineSubsystemUtils.*29f567509a
// Size: 0x68 (Inherited: 0x30)
struct U*29f567509a : U*0dbf8eac01 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct U*29f567509a* Logout(); // Function OnlineSubsystemUtils.*29f567509a.Logout // Final|Native|Static|Public|BlueprintCallable // @ game+0x66acb0c
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
	struct AOnlineBeaconHostObject* *465249f275; // 0x418(0x08)
	struct UNetConnection* *2bf5cf4e92; // 0x420(0x08)
	enum class EBeaconConnectionState *9b48ae0f6a; // 0x428(0x01)
	char pad_429[0x77]; // 0x429(0x77)

	void *d22a9ec806(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*d22a9ec806 // Final|Net|NetReliableNative|Event|Private|NetClient // @ game+0x56ea3a0
};

// Class OnlineSubsystemUtils.*5546920ca3
// Size: 0x78 (Inherited: 0x30)
struct U*5546920ca3 : UObject {
	struct FName SessionName; // 0x30(0x08)
	int32 *3b1860f842; // 0x38(0x04)
	int32 *562bae12b4; // 0x3c(0x04)
	int32 *95f13abb48; // 0x40(0x04)
	int32 *ffab86cd4a; // 0x44(0x04)
	struct FName *c1419aa873; // 0x48(0x08)
	int32 *d37f51e22b; // 0x50(0x04)
	int32 *4b2ff9e913; // 0x54(0x04)
	struct TArray<struct F*49ed00af1b> *d020b38667; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x5d0 (Inherited: 0x4a0)
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_4A0[0xc0]; // 0x4a0(0xc0)
	struct FString *54fb6236b7; // 0x560(0x10)
	struct F*49ed00af1b *81c16ad00b; // 0x570(0x30)
	enum class EClientRequestType *43b3ff28c1; // 0x5a0(0x01)
	bool *e690aeac08; // 0x5a1(0x01)
	bool *25dcafe328; // 0x5a2(0x01)
	char pad_5A3[0x2d]; // 0x5a3(0x2d)

	void *a98c4c4a59(); // Function OnlineSubsystemUtils.PartyBeaconClient.*a98c4c4a59 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x56f8bec
	enum class EPartyReservationResult *592827dfd5(); // Function OnlineSubsystemUtils.PartyBeaconClient.*592827dfd5 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66aa5dc
	enum class EPartyReservationResult *a6afdda200(); // Function OnlineSubsystemUtils.PartyBeaconClient.*a6afdda200 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66aa544
	int32 *85c6590c44(); // Function OnlineSubsystemUtils.PartyBeaconClient.*85c6590c44 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66aa674
	struct FUniqueNetIdRepl *e0f6b93a55(); // Function OnlineSubsystemUtils.PartyBeaconClient.*e0f6b93a55 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x66acf2c
	struct F*49ed00af1b *e0b0eba78f(); // Function OnlineSubsystemUtils.PartyBeaconClient.*e0b0eba78f // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x66ad088
	struct F*49ed00af1b *fd56556aee(); // Function OnlineSubsystemUtils.PartyBeaconClient.*fd56556aee // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x66ad23c
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x4a0 (Inherited: 0x4a0)
struct ATestBeaconClient : AOnlineBeaconClient {

	void *d22a0e02f4(); // Function OnlineSubsystemUtils.TestBeaconClient.*d22a0e02f4 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66ad03c
	void *c9fad39cb8(); // Function OnlineSubsystemUtils.TestBeaconClient.*c9fad39cb8 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x56645b4
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x4d0 (Inherited: 0x418)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32 ListenPort; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct TArray<struct AOnlineBeaconClient*> *91ccb01995; // 0x420(0x10)
	char pad_430[0xa0]; // 0x430(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x418 (Inherited: 0x3f0)
struct AOnlineBeaconHostObject : AActor {
	struct FString *c1b83c1950; // 0x3f0(0x10)
	struct UClass* *fade146e25; // 0x400(0x08)
	struct TArray<struct AOnlineBeaconClient*> *91ccb01995; // 0x408(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x570 (Inherited: 0x418)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct U*5546920ca3* State; // 0x418(0x08)
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
struct UOnlineEngineInterfaceImpl : U*efa98c076d {
	struct FName VoiceSubsystemNameOverride; // 0x30(0x08)
	char pad_38[0x148]; // 0x38(0x148)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x58 (Inherited: 0x40)
struct UOnlinePIESettings : U*6c389a598a {
	bool bOnlinePIEEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct F*7bf36f7666> Logins; // 0x48(0x10)
};

// Class OnlineSubsystemUtils.*c6ec7246f2
// Size: 0x310 (Inherited: 0x30)
struct U*c6ec7246f2 : U*07115daa65 {
	char pad_30[0x2d0]; // 0x30(0x2d0)
	bool bIsFromInvite; // 0x300(0x01)
	bool *1bfb38ea0e; // 0x301(0x01)
	char pad_302[0xe]; // 0x302(0x0e)
};

// Class OnlineSubsystemUtils.*04c11479f6
// Size: 0x78 (Inherited: 0x30)
struct U*04c11479f6 : U*c3bd707d45 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct U*04c11479f6* *89db010ac9(); // Function OnlineSubsystemUtils.*04c11479f6.*89db010ac9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66acbe8
};

// Class OnlineSubsystemUtils.*90523d3392
// Size: 0x60 (Inherited: 0x30)
struct U*90523d3392 : U*0dbf8eac01 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	struct U*90523d3392* *5f0c71e1f6(); // Function OnlineSubsystemUtils.*90523d3392.*5f0c71e1f6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66ad3f0
};

// Class OnlineSubsystemUtils.*c12a2599e3
// Size: 0x30 (Inherited: 0x30)
struct U*c12a2599e3 : UBlueprintFunctionLibrary {

	int32 GetMyPlayerIndex(); // Function OnlineSubsystemUtils.*c12a2599e3.GetMyPlayerIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66ac1dc
	bool GetIsMyTurn(); // Function OnlineSubsystemUtils.*c12a2599e3.GetIsMyTurn // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66abeb4
	struct UObject* *df8a3e3b58(); // Function OnlineSubsystemUtils.*c12a2599e3.*df8a3e3b58 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66ace14
	struct FString *0abee52901(); // Function OnlineSubsystemUtils.*c12a2599e3.*0abee52901 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66ac508
};


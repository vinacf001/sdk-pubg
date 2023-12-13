// BlueprintGeneratedClass LobbyCharacterBase_v2.LobbyCharacterBase_v2_C
// Size: 0xea0 (Inherited: 0xea0)
struct ALobbyCharacterBase_v2_C : ALobbyCharacter {
	struct FMulticastDelegate OnReady; // 0xb48(0x10)
	struct FMulticastDelegate OnHost; // 0xb58(0x10)
	struct FMulticastDelegate OnRankEmblem; // 0xb68(0x10)
	struct U*bbdf2494d0* EmoteComponent; // 0xb78(0x08)
	char bHasJacket : 1; // 0xc00(0x01)
	char bIsReady : 1; // 0xc00(0x01)
	char bIsHost : 1; // 0xc00(0x01)
	char bIsLogout : 1; // 0xc00(0x01)
	char bIsInCustomizationScene : 1; // 0xc00(0x01)
	enum class ELobbyCharacterAnimationType LobbyCharacterAnimationType; // 0xc01(0x01)
	char bEmoteToReady : 1; // 0xc02(0x01)
	struct FString Status; // 0xc08(0x10)
	struct FRotator *5a23b8eb11; // 0xc18(0x0c)
	bool *c84c0c84e5; // 0xc24(0x01)
	bool *a1e5deb501; // 0xc25(0x01)
	enum class EAnimationMode *8256a01087; // 0xc26(0x01)
	struct F*26e8fbfd7d *6624af5847; // 0xc28(0x18)
	bool *3f1fd59883; // 0xc40(0x01)
	bool *52e7836cca; // 0xc41(0x01)
	bool *a3d00ce6ef; // 0xc42(0x01)
	struct TMap<struct FString, enum class EWeaponClass> OverrideLobbyWeaponAnimationClassDatas; // 0xc48(0x50)
	struct TArray<struct FString> *93b86be7e1; // 0xc98(0x10)
	struct FString *c97d248cc9; // 0xca8(0x10)
	struct TMap<struct FString, int32> *91d266458a; // 0xcb8(0x50)
	struct U*a116da38af* *a116da38af; // 0xdc8(0x08)
	struct F*31b2976c2b *31b2976c2b; // 0xdd0(0x18)
	struct TArray<struct F*8a52a3e731> *01aca3fbcb; // 0xde8(0x10)
	bool bSimulateWind; // 0xe00(0x01)
	struct FString *bf4710bf38; // 0xe08(0x10)
	struct FVector *5738b8a0ad; // 0xe18(0x0c)
	struct U*47fec51608* LobbyPoseComponent; // 0xe28(0x08)
	struct FMulticastDelegate OnSetLobbyPose; // 0xe30(0x10)

	void *85fc3a15a3(); // Function TslGame.LobbyCharacter.*85fc3a15a3 // Final|Native|Public // @ game+0x5e88028
	enum class ELobbyCharacterAnimationType *1fbdb7beb9(); // Function TslGame.LobbyCharacter.*1fbdb7beb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7bf10
	enum class ERankType *9360d0dfba(); // Function TslGame.LobbyCharacter.*9360d0dfba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7c174
	int32 *37de997aca(); // Function TslGame.LobbyCharacter.*37de997aca // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7c15c
	int32 *db7967a11b(); // Function TslGame.LobbyCharacter.*db7967a11b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7c18c
	struct FString *377301223e(); // Function TslGame.LobbyCharacter.*377301223e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7bc40
	void *13feb360b4(enum class ELobbyCharacterAnimationType NewLobbyCharacterAnimationType); // Function TslGame.LobbyCharacter.*13feb360b4 // Final|Native|Public|BlueprintCallable // @ game+0x5e87b74
	void *6e8c505030(struct FString ReturnValue); // Function TslGame.LobbyCharacter.*6e8c505030 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7bb64
	void OnMontageEnded(); // Function TslGame.LobbyCharacter.OnMontageEnded // Final|Native|Public // @ game+0x5e81d24
	void *90502ed4fd(); // Function TslGame.LobbyCharacter.*90502ed4fd // Final|Native|Public // @ game+0x5e87c14
	void *7a3e4593a1(struct FString ReturnValue); // Function TslGame.LobbyCharacter.*7a3e4593a1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7c03c
	void *c6331e9223(bool ReturnValue); // Function TslGame.LobbyCharacter.*c6331e9223 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xe6ae14
	void *b9a256bc5d(); // Function TslGame.LobbyCharacter.*b9a256bc5d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7d6f8
	void *97f008ce2c(); // Function TslGame.LobbyCharacter.*97f008ce2c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7c020
	void *0f5ba3dc48(bool bEmoteToReady); // Function TslGame.LobbyCharacter.*0f5ba3dc48 // Final|Native|Public|BlueprintCallable // @ game+0x5e87adc
	void *7f10559029(struct UAnimationAsset* Animation); // Function TslGame.LobbyCharacter.*7f10559029 // Final|Native|Public|BlueprintCallable // @ game+0x5e789b4
	void *45867ca96d(); // Function TslGame.LobbyCharacter.*45867ca96d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7bb80
	void *aadfdfa007(); // Function TslGame.LobbyCharacter.*aadfdfa007 // Final|Native|Public|BlueprintCallable // @ game+0x5e85d3c
	void *3cf37c5724(enum class EOutGamePlatformProvider ReturnValue); // Function TslGame.LobbyCharacter.*3cf37c5724 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7bb24
	void *4112f0a8f8(bool ReturnValue); // Function TslGame.LobbyCharacter.*4112f0a8f8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7d7b4
	void *227432f96f(); // Function TslGame.LobbyCharacter.*227432f96f // Final|Native|Public // @ game+0x5e81c44
};


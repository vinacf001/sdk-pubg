// BlueprintGeneratedClass LobbyCharacterMale_v2.LobbyCharacterMale_v2_C
// Size: 0xda0 (Inherited: 0xda0)
struct ALobbyCharacterMale_v2_C : ALobbyCharacterBase_v2_C {
	struct FMulticastDelegate OnReady; // 0xa48(0x10)
	struct FMulticastDelegate OnHost; // 0xa58(0x10)
	struct FMulticastDelegate OnRankEmblem; // 0xa68(0x10)
	struct U*27c1a5156e* EmoteComponent; // 0xa78(0x08)
	char bHasJacket : 1; // 0xb00(0x01)
	char bIsReady : 1; // 0xb00(0x01)
	char bIsHost : 1; // 0xb00(0x01)
	char bIsLogout : 1; // 0xb00(0x01)
	char bIsInCustomizationScene : 1; // 0xb00(0x01)
	enum class ELobbyCharacterAnimationType LobbyCharacterAnimationType; // 0xb01(0x01)
	char bEmoteToReady : 1; // 0xb02(0x01)
	struct FString Status; // 0xb08(0x10)
	struct FRotator *ef289b728f; // 0xb18(0x0c)
	bool *3d8c206c8d; // 0xb24(0x01)
	bool *3ccd2a6535; // 0xb25(0x01)
	enum class EAnimationMode *d2dc76b43d; // 0xb26(0x01)
	struct F*030036a724 *1b25a2db49; // 0xb28(0x18)
	bool *e3021f629e; // 0xb40(0x01)
	bool *245de9a90e; // 0xb41(0x01)
	bool *d8fb571c44; // 0xb42(0x01)
	struct TMap<struct FString, enum class EWeaponClass> OverrideLobbyWeaponAnimationClassDatas; // 0xb48(0x50)
	struct TArray<struct FString> *eaa78d19b8; // 0xb98(0x10)
	struct FString *b86179cfbb; // 0xba8(0x10)
	struct TMap<struct FString, int32> *b5e7c515aa; // 0xbb8(0x50)
	struct U*5c1f1ed6a6* *5c1f1ed6a6; // 0xcc8(0x08)
	struct F*2e20d1b959 *2e20d1b959; // 0xcd0(0x18)
	struct TArray<struct F*0c45455209> *3069bd7f88; // 0xce8(0x10)
	bool bSimulateWind; // 0xd00(0x01)
	struct FString *8de8e4c91d; // 0xd08(0x10)
	struct FVector *0a6a2a123f; // 0xd18(0x0c)
	struct U*ceb16e9bc4* LobbyPoseComponent; // 0xd28(0x08)
	struct FMulticastDelegate OnSetLobbyPose; // 0xd30(0x10)

	void *07ba361e24(); // Function TslGame.LobbyCharacter.*07ba361e24 // None // @ game+0x56a0450
	void *1aa3db1bc9(); // Function TslGame.LobbyCharacter.*1aa3db1bc9 // None // @ game+0x56abff0
	void *caaff10bc6(); // Function TslGame.LobbyCharacter.*caaff10bc6 // None // @ game+0x56a0df4
	void *23e687e5de(); // Function TslGame.LobbyCharacter.*23e687e5de // None // @ game+0x56adc04
	void *5c9f0e59d4(); // Function TslGame.LobbyCharacter.*5c9f0e59d4 // None // @ game+0x56a03f4
	void *bf2bbee551(); // Function TslGame.LobbyCharacter.*bf2bbee551 // None // @ game+0x56ae304
	void *a922ec5117(); // Function TslGame.LobbyCharacter.*a922ec5117 // None // @ game+0x56a2300
	struct UAnimMontage* *51c49cfcde(); // Function TslGame.LobbyCharacter.*51c49cfcde // None // @ game+0x56a74a4
	void *3a1d81e476(); // Function TslGame.LobbyCharacter.*3a1d81e476 // None // @ game+0x56aeb7c
	void *c1092cfbf3(); // Function TslGame.LobbyCharacter.*c1092cfbf3 // None // @ game+0x56a04e0
	void *d6ecb4f27b(); // Function TslGame.LobbyCharacter.*d6ecb4f27b // None // @ game+0xbdcd1c
	void *45969b7fb5(); // Function TslGame.LobbyCharacter.*45969b7fb5 // None // @ game+0x56adc9c
	void *71b7838781(); // Function TslGame.LobbyCharacter.*71b7838781 // None // @ game+0x569cc98
	void OnMontageEnded(); // Function TslGame.LobbyCharacter.OnMontageEnded // None // @ game+0x56a7584
	void *80084941f0(); // Function TslGame.LobbyCharacter.*80084941f0 // None // @ game+0x56a0c2c
	void *7e15ad7902(); // Function TslGame.LobbyCharacter.*7e15ad7902 // None // @ game+0x56a0d64
	void *b37f1dcf97(); // Function TslGame.LobbyCharacter.*b37f1dcf97 // None // @ game+0x56a0c10
	void *0303afba0e(); // Function TslGame.LobbyCharacter.*0303afba0e // None // @ game+0x56a0d4c
	void *de3225c3f2(); // Function TslGame.LobbyCharacter.*de3225c3f2 // None // @ game+0x56a22e4
	void *33ad76d674(); // Function TslGame.LobbyCharacter.*33ad76d674 // None // @ game+0x56a091c
	void *3a4c62a031(); // Function TslGame.LobbyCharacter.*3a4c62a031 // None // @ game+0x56a0434
};


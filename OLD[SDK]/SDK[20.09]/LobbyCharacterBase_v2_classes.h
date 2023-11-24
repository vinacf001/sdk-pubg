// BlueprintGeneratedClass LobbyCharacterBase_v2.LobbyCharacterBase_v2_C
// Size: 0xda0 (Inherited: 0xda0)
struct ALobbyCharacterBase_v2_C : ALobbyCharacter {
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

	void *07ba361e24(); // Function TslGame.LobbyCharacter.*07ba361e24 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56a8e6c
	void *1aa3db1bc9(); // Function TslGame.LobbyCharacter.*1aa3db1bc9 // Final|Native|Public|BlueprintCallable // @ game+0x56b4a0c
	void *caaff10bc6(); // Function TslGame.LobbyCharacter.*caaff10bc6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56a9810
	void *23e687e5de(); // Function TslGame.LobbyCharacter.*23e687e5de // Final|Native|Public|BlueprintCallable // @ game+0x56b6620
	void *5c9f0e59d4(); // Function TslGame.LobbyCharacter.*5c9f0e59d4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56a8e10
	void *bf2bbee551(); // Function TslGame.LobbyCharacter.*bf2bbee551 // Final|Native|Public // @ game+0x56b6d20
	void *a922ec5117(); // Function TslGame.LobbyCharacter.*a922ec5117 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56aad1c
	struct UAnimMontage* *51c49cfcde(); // Function TslGame.LobbyCharacter.*51c49cfcde // Final|Native|Public // @ game+0x56afec0
	void *3a1d81e476(); // Function TslGame.LobbyCharacter.*3a1d81e476 // Final|Native|Public // @ game+0x56b7598
	void *c1092cfbf3(); // Function TslGame.LobbyCharacter.*c1092cfbf3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56a8efc
	void *d6ecb4f27b(); // Function TslGame.LobbyCharacter.*d6ecb4f27b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc136c8
	void *45969b7fb5(); // Function TslGame.LobbyCharacter.*45969b7fb5 // Final|Native|Public|BlueprintCallable // @ game+0x56b66b8
	void *71b7838781(); // Function TslGame.LobbyCharacter.*71b7838781 // Final|Native|Public|BlueprintCallable // @ game+0x56a56b4
	void OnMontageEnded(); // Function TslGame.LobbyCharacter.OnMontageEnded // Final|Native|Public // @ game+0x56affa0
	void *80084941f0(); // Function TslGame.LobbyCharacter.*80084941f0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56a9648
	void *7e15ad7902(); // Function TslGame.LobbyCharacter.*7e15ad7902 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56a9780
	void *b37f1dcf97(); // Function TslGame.LobbyCharacter.*b37f1dcf97 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56a962c
	void *0303afba0e(); // Function TslGame.LobbyCharacter.*0303afba0e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56a9768
	void *de3225c3f2(); // Function TslGame.LobbyCharacter.*de3225c3f2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56aad00
	void *33ad76d674(); // Function TslGame.LobbyCharacter.*33ad76d674 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56a9338
	void *3a4c62a031(); // Function TslGame.LobbyCharacter.*3a4c62a031 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56a8e50
};


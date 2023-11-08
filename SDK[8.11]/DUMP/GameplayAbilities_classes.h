// Class GameplayAbilities.*ecaadbdbf7
// Size: 0x28 (Inherited: 0x28)
struct U*ecaadbdbf7 : UInterface {
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1850 (Inherited: 0x260)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_260[0x8]; // 0x260(0x08)
	char *46c85731ab : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct TArray<struct F*45e5d348e0> *dc90cec530; // 0x270(0x10)
	struct FName AffectedAnimInstanceTag; // 0x280(0x08)
	char pad_288[0x5c8]; // 0x288(0x5c8)
	float *420da6deef; // 0x850(0x04)
	float *17caa5ed8d; // 0x854(0x04)
	char pad_858[0x80]; // 0x858(0x80)
	bool *89d2486ff5; // 0x8d8(0x01)
	bool *354fa8f7b4; // 0x8d9(0x01)
	bool *14f8b75378; // 0x8da(0x01)
	bool *0b986490c5; // 0x8db(0x01)
	char pad_8DC[0x4]; // 0x8dc(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> *98d41cb468; // 0x8e0(0x10)
	char pad_8F0[0x38]; // 0x8f0(0x38)
	struct F*794a1eb94d ActivatableAbilities; // 0x928(0xc8)
	char pad_9F0[0x30]; // 0x9f0(0x30)
	struct TArray<struct UGameplayAbility*> *e20ae1afab; // 0xa20(0x10)
	char pad_A30[0x20c]; // 0xa30(0x20c)
	bool *bfa7af0806; // 0xc3c(0x01)
	bool *1d17397880; // 0xc3d(0x01)
	char pad_C3E[0x2]; // 0xc3e(0x02)
	struct F*614399b5bb *86e4c8636b; // 0xc40(0x30)
	char pad_C70[0xa0]; // 0xc70(0xa0)
	struct F*20f1909a08 *d08dc6ad30; // 0xd10(0x4e0)
	struct F*11a3e9312d *2a79cb885d; // 0x11f0(0xd0)
	struct F*11a3e9312d *49a91faadb; // 0x12c0(0xd0)
	char pad_1390[0x318]; // 0x1390(0x318)
	struct TArray<struct UAttributeSet*> *6718f6c4b1; // 0x16a8(0x10)
	struct TArray<struct FString> *38bde194b0; // 0x16b8(0x10)
	struct AActor* *3a349e95dc; // 0x16c8(0x08)
	struct AActor* AvatarActor; // 0x16d0(0x08)
	struct F*b6c0198f0a *83dfd32cf0; // 0x16d8(0x38)
	struct TArray<bool> *11e834f840; // 0x1710(0x10)
	struct F*7e29f4220b *ce0d2779e6; // 0x1720(0x60)
	struct TArray<struct FString> *314ecf159f; // 0x1780(0x10)
	struct F*581546c6a7 *581546c6a7; // 0x1790(0xc0)

	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // Native|Protected // @ game+0x68d7dbc
	struct F*7dd822a454 *7b3fed164d(); // Function GameplayAbilities.AbilitySystemComponent.*7b3fed164d // Net|Native|Event|NetMulticast|Public // @ game+0x68d66b4
	struct UAbilitySystemComponent* *b451c03966(); // Function GameplayAbilities.AbilitySystemComponent.*b451c03966 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68d0e08
	void *c277c1cb42(struct F*1e33a082d1 Param0); // Function GameplayAbilities.AbilitySystemComponent.*c277c1cb42 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68d9bf0
	void *c07b8f6248(); // Function GameplayAbilities.AbilitySystemComponent.*c07b8f6248 // Native|Public|BlueprintCallable // @ game+0x650a848
	struct F*7dd822a454 *34b84aaabd(); // Function GameplayAbilities.AbilitySystemComponent.*34b84aaabd // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68d9f44
	void *5bd61c1cc8(enum class EAbilityGenericReplicatedEvent Param0, struct F*7dd822a454 Param2); // Function GameplayAbilities.AbilitySystemComponent.*5bd61c1cc8 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68d9490
	void *a0f6372d13(); // Function GameplayAbilities.AbilitySystemComponent.*a0f6372d13 // Final|Native|Public|BlueprintCallable // @ game+0x68d8400
	struct F*7dd822a454 *690bf2e3f9(); // Function GameplayAbilities.AbilitySystemComponent.*690bf2e3f9 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68d2354
	void *29d1ffcaa0(); // Function GameplayAbilities.AbilitySystemComponent.*29d1ffcaa0 // Native|Public|BlueprintCallable // @ game+0x68da50c
	void *09b566c51c(struct F*840e447bec Handle); // Function GameplayAbilities.AbilitySystemComponent.*09b566c51c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3f28
	struct F*8fc18b241b NetMulticast_InvokeGameplayCueExecuted_FromSpec(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // Net|Native|Event|NetMulticast|Public // @ game+0x68d61c0
	struct UAnimMontage* *a463bcfd04(); // Function GameplayAbilities.AbilitySystemComponent.*a463bcfd04 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68d8c30
	void *7537f818eb(struct UAbilitySystemComponent* InstigatorAbilitySystemComponent); // Function GameplayAbilities.AbilitySystemComponent.*7537f818eb // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68d85e8
	void *299e54d905(); // Function GameplayAbilities.AbilitySystemComponent.*299e54d905 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57bcc50
	bool TryActivateAbilitiesByTag(); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68da9f8
	void *55bae258e6(bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.*55bae258e6 // Final|Native|Public|BlueprintCallable // @ game+0x68dab4c
	struct F*7dd822a454 *ade0e8d389(); // Function GameplayAbilities.AbilitySystemComponent.*ade0e8d389 // Net|Native|Event|NetMulticast|Public // @ game+0x68d68cc
	void *fa6d27225d(struct F*8fc18b241b Param0); // Function GameplayAbilities.AbilitySystemComponent.*fa6d27225d // Net|Native|Event|NetMulticast|Public // @ game+0x68d5b80
	struct F*7dd822a454 *ea4e49c33b(); // Function GameplayAbilities.AbilitySystemComponent.*ea4e49c33b // Net|Native|Event|NetMulticast|Public // @ game+0x68d64b4
	void *3922ebbdc7(); // Function GameplayAbilities.AbilitySystemComponent.*3922ebbdc7 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68d9208
	void *179d6d5902(float Level); // Function GameplayAbilities.AbilitySystemComponent.*179d6d5902 // Final|Native|Public|BlueprintCallable // @ game+0x68d10dc
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // Final|Native|Public // @ game+0x68d7dd4
	struct FGameplayTagContainer *2bd9676c43(); // Function GameplayAbilities.AbilitySystemComponent.*2bd9676c43 // Final|Native|Public|BlueprintCallable // @ game+0x68d8218
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // Native|Public // @ game+0x57d529c
	void *2ce75d1c54(); // Function GameplayAbilities.AbilitySystemComponent.*2ce75d1c54 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68d262c
	struct F*7dd822a454 *3b1ce46888(); // Function GameplayAbilities.AbilitySystemComponent.*3b1ce46888 // Net|Native|Event|NetMulticast|Public // @ game+0x68d5cb8
	bool *4e060b6352(); // Function GameplayAbilities.AbilitySystemComponent.*4e060b6352 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68d3df8
	void *677a0f05c6(struct F*e6947833dd Query); // Function GameplayAbilities.AbilitySystemComponent.*677a0f05c6 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68da290
	struct FGameplayTagContainer *b833b77a37(); // Function GameplayAbilities.AbilitySystemComponent.*b833b77a37 // Final|Native|Public|BlueprintCallable|Const // @ game+0x68d3a58
	struct F*7dd822a454 *1e85a6941f(); // Function GameplayAbilities.AbilitySystemComponent.*1e85a6941f // Net|Native|Event|NetMulticast|Public // @ game+0x68d5e60
	void *12cca625ad(struct F*7dd822a454 Param1, struct FGameplayTag Param3); // Function GameplayAbilities.AbilitySystemComponent.*12cca625ad // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68d993c
	void AbilityAbilityKey__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void *1e5b144df6(); // Function GameplayAbilities.AbilitySystemComponent.*1e5b144df6 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68d9254
	void *808e5ef850(struct F*1e33a082d1 Param1); // Function GameplayAbilities.AbilitySystemComponent.*808e5ef850 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x68d285c
	int32 RemoveActiveGameplayEffect(); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68d84f4
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // Native|Public // @ game+0x581a384
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // Native|Protected // @ game+0x650a178
	void *12c42d6476(struct UAbilitySystemComponent* Target, struct F*c4e5556a43 Context); // Function GameplayAbilities.AbilitySystemComponent.*12c42d6476 // Final|Native|Public|BlueprintCallable // @ game+0x68d127c
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void *f6f4a316ea(); // Function GameplayAbilities.AbilitySystemComponent.*f6f4a316ea // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68d9330
	void *10def706d2(struct F*840e447bec ActiveHandle); // Function GameplayAbilities.AbilitySystemComponent.*10def706d2 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68da1ac
	struct F*7dd822a454 *91a80aaab9(enum class EAbilityGenericReplicatedEvent Param0); // Function GameplayAbilities.AbilitySystemComponent.*91a80aaab9 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68d96ac
	struct F*1e33a082d1 *51e2e1308c(); // Function GameplayAbilities.AbilitySystemComponent.*51e2e1308c // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68d2254
	void *a397be7946(float Param1); // Function GameplayAbilities.AbilitySystemComponent.*a397be7946 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68d8d44
	struct F*c4e5556a43 *d09abc51e0(); // Function GameplayAbilities.AbilitySystemComponent.*d09abc51e0 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d51ec
	void *e621f1f576(bool Param1); // Function GameplayAbilities.AbilitySystemComponent.*e621f1f576 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68d9db0
	void *a5c5a9013a(struct F*16a3c4107c SpecHandle); // Function GameplayAbilities.AbilitySystemComponent.*a5c5a9013a // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68d0cd0
	struct FGameplayTagContainer *86c8aad118(); // Function GameplayAbilities.AbilitySystemComponent.*86c8aad118 // Final|Native|Public|BlueprintCallable // @ game+0x68d8218
	struct UAnimMontage* *e9ca9280e8(); // Function GameplayAbilities.AbilitySystemComponent.*e9ca9280e8 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68d8f04
	void *18c085fde3(); // Function GameplayAbilities.AbilitySystemComponent.*18c085fde3 // Native|Public|BlueprintCallable // @ game+0xbae4f0
	struct F*7dd822a454 NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag Param0); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // Net|Native|Event|NetMulticast|Public // @ game+0x68d630c
	void *1bf833ec5a(); // Function GameplayAbilities.AbilitySystemComponent.*1bf833ec5a // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68d8990
	struct UClass* *13e8e26b5f(); // Function GameplayAbilities.AbilitySystemComponent.*13e8e26b5f // Final|Native|Public|BlueprintCallable // @ game+0x68d4e98
	void *53b4e40743(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.AbilitySystemComponent.*53b4e40743 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d42b4
	void *10bf386517(); // Function GameplayAbilities.AbilitySystemComponent.*10bf386517 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68d8ac0
	struct FGameplayTagContainer *5e2bc5850e(); // Function GameplayAbilities.AbilitySystemComponent.*5e2bc5850e // Final|Native|Public|BlueprintCallable // @ game+0x68d830c
	struct TArray<struct FString> *6cf1385ba1(); // Function GameplayAbilities.AbilitySystemComponent.*6cf1385ba1 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x68d274c
	void *c4a2be8b92(struct F*7dd822a454 Param1); // Function GameplayAbilities.AbilitySystemComponent.*c4a2be8b92 // Net|Native|Event|NetMulticast|Public // @ game+0x68d6008
	struct F*1e33a082d1 *8cbf19dc63(); // Function GameplayAbilities.AbilitySystemComponent.*8cbf19dc63 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68d250c
	void *4a464054a1(); // Function GameplayAbilities.AbilitySystemComponent.*4a464054a1 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68d93e0
	void *3818ff27f6(); // Function GameplayAbilities.AbilitySystemComponent.*3818ff27f6 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68d2174
	struct F*e6947833dd *535f4f2bf8(); // Function GameplayAbilities.AbilitySystemComponent.*535f4f2bf8 // Final|Native|Public|HasOutParms|BlueprintCallable|Const // @ game+0x68d3900
	void *8405312714(struct F*1e33a082d1 Param0); // Function GameplayAbilities.AbilitySystemComponent.*8405312714 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68d9018
	void *135df5a25f(); // Function GameplayAbilities.AbilitySystemComponent.*135df5a25f // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68d29ac
	void MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d5008
	struct FGameplayTag *73eb6b199c(struct F*7dd822a454 Param1); // Function GameplayAbilities.AbilitySystemComponent.*73eb6b199c // Net|Native|Event|NetMulticast|Public // @ game+0x68d59c8
};

// Class GameplayAbilities.AbilityTask
// Size: 0x80 (Inherited: 0x68)
struct UAbilityTask : UGameplayTask {
	struct UGameplayAbility* Ability; // 0x68(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class GameplayAbilities.AttributeSet
// Size: 0x30 (Inherited: 0x28)
struct UAttributeSet : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class GameplayAbilities.*78d72ddf34
// Size: 0x38 (Inherited: 0x28)
struct U*78d72ddf34 : UObject {
	struct TArray<struct F*62d8b8df42> RelevantAttributesToCapture; // 0x28(0x10)
};

// Class GameplayAbilities.*c9860ab83e
// Size: 0x40 (Inherited: 0x38)
struct U*c9860ab83e : U*78d72ddf34 {
	bool bRequiresPassedInTags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	void Execute(); // Function GameplayAbilities.*c9860ab83e.Execute // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x68d3138
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x570 (Inherited: 0x28)
struct UGameplayAbility : UObject {
	char pad_28[0x238]; // 0x28(0x238)
	struct FGameplayTagContainer *0876b6b837; // 0x260(0x20)
	bool *4692838db3; // 0x280(0x01)
	bool *6828a5e4e6; // 0x281(0x01)
	char pad_282[0x4]; // 0x282(0x04)
	enum class *89526f7527 *4c295243b5; // 0x286(0x01)
	enum class *3af1ba49c3 *d6ca1ad2fd; // 0x287(0x01)
	bool *f41ffa15d8; // 0x288(0x01)
	bool *cef750f31f; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct F*2c0bbebf0c CurrentActivationInfo; // 0x290(0x20)
	struct F*a8e05f09d3 CurrentEventData; // 0x2b0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy *0747ad4d04; // 0x360(0x01)
	enum class EGameplayAbilityNetSecurityPolicy *544c7f2eea; // 0x361(0x01)
	char pad_362[0x6]; // 0x362(0x06)
	struct UClass* *2dcf98957a; // 0x368(0x08)
	struct TArray<struct F*51ee0612c7> *395992b417; // 0x370(0x10)
	struct UClass* *682c27f79b; // 0x380(0x08)
	struct FGameplayTagContainer *5049477be0; // 0x388(0x20)
	struct FGameplayTagContainer *e1dfa211ee; // 0x3a8(0x20)
	struct FGameplayTagContainer *d9887bf53d; // 0x3c8(0x20)
	struct FGameplayTagContainer *e2b9ecda33; // 0x3e8(0x20)
	struct FGameplayTagContainer *25c8b6b841; // 0x408(0x20)
	struct FGameplayTagContainer *81dfa7aa8e; // 0x428(0x20)
	struct FGameplayTagContainer *2dc396c792; // 0x448(0x20)
	struct FGameplayTagContainer *bfa0dca858; // 0x468(0x20)
	struct FGameplayTagContainer *640d1f1391; // 0x488(0x20)
	char pad_4A8[0x20]; // 0x4a8(0x20)
	struct TArray<struct UGameplayTask*> *0810cea91c; // 0x4c8(0x10)
	char pad_4D8[0x10]; // 0x4d8(0x10)
	struct UAnimMontage* *3dfe9786c8; // 0x4e8(0x08)
	char pad_4F0[0x60]; // 0x4f0(0x60)
	bool *bdff81749e; // 0x550(0x01)
	bool *6cfab95e7a; // 0x551(0x01)
	bool *f4460978eb; // 0x552(0x01)
	bool *31735e2848; // 0x553(0x01)
	char pad_554[0x14]; // 0x554(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)

	void *ced098e04a(); // Function GameplayAbilities.GameplayAbility.*ced098e04a // Native|Protected|BlueprintCallable // @ game+0x68d4f74
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // Event|Public|BlueprintEvent // @ game+0x293938
	void *dc670e7b22(); // Function GameplayAbilities.GameplayAbility.*dc670e7b22 // Native|Public|BlueprintCallable // @ game+0x68d49f8
	struct F*840e447bec *703f4e317a(); // Function GameplayAbilities.GameplayAbility.*703f4e317a // Final|Native|Protected|BlueprintCallable // @ game+0x68d18f4
	struct FName *376314e535(); // Function GameplayAbilities.GameplayAbility.*376314e535 // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x68d5474
	void *976b40a5a2(); // Function GameplayAbilities.GameplayAbility.*976b40a5a2 // Final|Native|Public|BlueprintCallable|Const // @ game+0x68d42a0
	void *fac9d392d5(); // Function GameplayAbilities.GameplayAbility.*fac9d392d5 // Final|Native|Protected|BlueprintCallable // @ game+0x68d4788
	void *83ec0eab60(); // Function GameplayAbilities.GameplayAbility.*83ec0eab60 // Native|Public|BlueprintCallable // @ game+0x68d4a20
	void *c50cad65f0(); // Function GameplayAbilities.GameplayAbility.*c50cad65f0 // Final|Native|Public|BlueprintCallable // @ game+0x68d4960
	void GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d379c
	void *0525e8ce0b(); // Function GameplayAbilities.GameplayAbility.*0525e8ce0b // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x68d53e4
	void *010ce73774(); // Function GameplayAbilities.GameplayAbility.*010ce73774 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3bd8
	struct FName *9ee5d121e3(); // Function GameplayAbilities.GameplayAbility.*9ee5d121e3 // Final|Native|Protected|BlueprintCallable // @ game+0x68d561c
	void *4521d18101(struct F*4d4358ec07 OptionalTargetData); // Function GameplayAbilities.GameplayAbility.*4521d18101 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3bfc
	void *5d54e68fbc(); // Function GameplayAbilities.GameplayAbility.*5d54e68fbc // Native|Protected|BlueprintCallable // @ game+0x68d8848
	void *ec10983902(); // Function GameplayAbilities.GameplayAbility.*ec10983902 // Native|Public|BlueprintCallable // @ game+0x68d870c
	void *e8c7fdf8c7(); // Function GameplayAbilities.GameplayAbility.*e8c7fdf8c7 // Final|Native|Protected|BlueprintCallable // @ game+0x68d30a8
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // Event|Protected|BlueprintEvent // @ game+0x293938
	void *ec9b32545e(struct F*1e33a082d1 Handle); // Function GameplayAbilities.GameplayAbility.*ec9b32545e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x68d37c0
	void *bcd1bbc8be(); // Function GameplayAbilities.GameplayAbility.*bcd1bbc8be // Native|Protected|BlueprintCallable // @ game+0x68d4be4
	struct FGameplayTagContainer *e21b25cb80(); // Function GameplayAbilities.GameplayAbility.*e21b25cb80 // Final|Native|Protected|BlueprintCallable // @ game+0x68d168c
	struct UClass* *12c42d6476(int32 GameplayEffectLevel, int32 Stacks); // Function GameplayAbilities.GameplayAbility.*12c42d6476 // Final|Native|Protected|BlueprintCallable // @ game+0x68d1470
	void *38634f5666(); // Function GameplayAbilities.GameplayAbility.*38634f5666 // Final|Native|Public|BlueprintCallable|Const // @ game+0x68d4e7c
	struct FGameplayTag *4de64a089b(); // Function GameplayAbilities.GameplayAbility.*4de64a089b // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x68d4d4c
	bool *bdf283b347(bool ForceCooldown); // Function GameplayAbilities.GameplayAbility.*bdf283b347 // Native|Public|BlueprintCallable // @ game+0x68d4a48
	void *a73e63d488(); // Function GameplayAbilities.GameplayAbility.*a73e63d488 // Final|Native|Protected|BlueprintCallable // @ game+0x68d20e4
	void *ce82870c08(); // Function GameplayAbilities.GameplayAbility.*ce82870c08 // Native|Public|BlueprintCallable // @ game+0x68da3dc
	int32 *17bb29e641(); // Function GameplayAbilities.GameplayAbility.*17bb29e641 // Final|Native|Protected|BlueprintCallable // @ game+0x68d0fa4
	void *940892e14f(); // Function GameplayAbilities.GameplayAbility.*940892e14f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d4058
	void *8524131e98(); // Function GameplayAbilities.GameplayAbility.*8524131e98 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d4160
	struct F*a8e05f09d3 K2_ShouldAbilityRespondToEvent(); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // Event|Protected|BlueprintEvent|Const // @ game+0x293938
	void *3f2e057976(); // Function GameplayAbilities.GameplayAbility.*3f2e057976 // Native|Public|BlueprintCallable // @ game+0x68d49d0
	void *f80080be45(); // Function GameplayAbilities.GameplayAbility.*f80080be45 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3ba4
	void *abdc1da901(); // Function GameplayAbilities.GameplayAbility.*abdc1da901 // Final|Native|Public|BlueprintCallable|Const // @ game+0x68d4358
	struct FGameplayTagContainer *08c60dd596(); // Function GameplayAbilities.GameplayAbility.*08c60dd596 // Final|Native|Protected|BlueprintCallable // @ game+0x68d17c0
	struct F*16a3c4107c *a3e8accca8(); // Function GameplayAbilities.GameplayAbility.*a3e8accca8 // Final|Native|Protected|BlueprintCallable // @ game+0x68d4684
	void *526121d4d5(struct UClass* GameplayEffectClass); // Function GameplayAbilities.GameplayAbility.*526121d4d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d50a4
	void *303a84dea6(); // Function GameplayAbilities.GameplayAbility.*303a84dea6 // Native|Public|BlueprintCallable // @ game+0x68da474
	void *906e702ac9(); // Function GameplayAbilities.GameplayAbility.*906e702ac9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3da4
	void *17507a2d2f(); // Function GameplayAbilities.GameplayAbility.*17507a2d2f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d413c
	void *2411a71c33(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.*2411a71c33 // Native|Protected|BlueprintCallable // @ game+0x68d4bfc
	void *b84654cf54(); // Function GameplayAbilities.GameplayAbility.*b84654cf54 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3d8c
	bool *42b92a729e(); // Function GameplayAbilities.GameplayAbility.*42b92a729e // Native|Public|BlueprintCallable // @ game+0x68d4b3c
	void *a2053a1ff1(); // Function GameplayAbilities.GameplayAbility.*a2053a1ff1 // Final|Native|Protected|BlueprintCallable // @ game+0x68d5574
	void K2_CanActivateAbility(struct F*2ba45c3d5e ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // Event|Protected|HasOutParms|BlueprintEvent|Const // @ game+0x293938
	struct F*6f1c5535b6 *f37d371b55(); // Function GameplayAbilities.GameplayAbility.*f37d371b55 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x68d450c
	void *432f8b31d7(); // Function GameplayAbilities.GameplayAbility.*432f8b31d7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d38dc
	void *5213bc6def(); // Function GameplayAbilities.GameplayAbility.*5213bc6def // Final|Native|Protected|BlueprintCallable // @ game+0x68d2a40
	void *47960a18cb(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.*47960a18cb // Native|Protected|BlueprintCallable // @ game+0x68d437c
	void *73cfdba5fc(); // Function GameplayAbilities.GameplayAbility.*73cfdba5fc // Final|Native|Protected|BlueprintCallable // @ game+0x68d5714
	void K2_OnEndAbility(); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // Event|Protected|BlueprintEvent // @ game+0x293938
	void *fa88ec79fa(struct F*1e33a082d1 Handle); // Function GameplayAbilities.GameplayAbility.*fa88ec79fa // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x68d4184
	void K2_ActivateAbilityFromEvent(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x293938
	void GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3d48
	void *5dcaeaa2db(); // Function GameplayAbilities.GameplayAbility.*5dcaeaa2db // Final|Native|Protected|BlueprintCallable // @ game+0x68d3008
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x880 (Inherited: 0x28)
struct UGameplayEffect : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EGameplayEffectDurationType *2a9919fab8; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FGameplayEffectModifierMagnitude *2baedd8e13; // 0x38(0x200)
	struct FScalableFloat Period; // 0x238(0x30)
	bool bExecutePeriodicEffectOnApplication; // 0x268(0x01)
	enum class *69719bb8fb PeriodicInhibitionPolicy; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct TArray<struct F*926221328b> Modifiers; // 0x270(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x280(0x10)
	struct FScalableFloat *87000027da; // 0x290(0x30)
	struct TArray<struct UClass*> *e07b0016ad; // 0x2c0(0x10)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x2d0(0x10)
	struct TArray<struct F*d06ae42431> ConditionalGameplayEffects; // 0x2e0(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x2f0(0x10)
	bool bDenyOverflowApplication; // 0x300(0x01)
	bool bClearStackOnOverflow; // 0x301(0x01)
	char pad_302[0x6]; // 0x302(0x06)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x308(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x318(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x328(0x01)
	bool *b235d08a9b; // 0x329(0x01)
	char pad_32A[0x6]; // 0x32a(0x06)
	struct TArray<struct F*34e128bdaf> GameplayCues; // 0x330(0x10)
	struct UGameplayEffectUIData* UIData; // 0x340(0x08)
	struct F*fe7a20b016 InheritableGameplayEffectTags; // 0x348(0x60)
	struct F*fe7a20b016 InheritableOwnedTagsContainer; // 0x3a8(0x60)
	struct F*9d96cfa5bb OngoingTagRequirements; // 0x408(0x40)
	struct F*9d96cfa5bb ApplicationTagRequirements; // 0x448(0x40)
	struct F*9d96cfa5bb RemovalTagRequirements; // 0x488(0x40)
	struct F*fe7a20b016 RemoveGameplayEffectsWithTags; // 0x4c8(0x60)
	struct F*9d96cfa5bb GrantedApplicationImmunityTags; // 0x528(0x40)
	char pad_568[0x8]; // 0x568(0x08)
	struct F*e6947833dd GrantedApplicationImmunityQuery; // 0x570(0x170)
	char pad_6E0[0x10]; // 0x6e0(0x10)
	struct F*e6947833dd RemoveGameplayEffectQuery; // 0x6f0(0x170)
	char pad_860[0x1]; // 0x860(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0x861(0x01)
	char pad_862[0x2]; // 0x862(0x02)
	int32 StackLimitCount; // 0x864(0x04)
	enum class *6ce6473375 StackDurationRefreshPolicy; // 0x868(0x01)
	enum class *88c1ff0035 StackPeriodResetPolicy; // 0x869(0x01)
	enum class *f66868d72e StackExpirationPolicy; // 0x86a(0x01)
	char pad_86B[0x5]; // 0x86b(0x05)
	struct TArray<struct F*c151d59839> GrantedAbilities; // 0x870(0x10)
};

// Class GameplayAbilities.*940d5b984c
// Size: 0x30 (Inherited: 0x28)
struct U*940d5b984c : U*528374bf77 {
	char pad_28[0x8]; // 0x28(0x08)

	void *4426366d2f(); // Function GameplayAbilities.*940d5b984c.*4426366d2f // Native|Public|BlueprintCallable // @ game+0xad8ecc
};

// Class GameplayAbilities.*4db59a1042
// Size: 0xf0 (Inherited: 0x30)
struct U*4db59a1042 : U*940d5b984c {
	struct FMulticastDelegate OnApplied; // 0x30(0x10)
	char pad_40[0xb0]; // 0x40(0xb0)

	struct AActor* OnAppliedDelegate__DelegateSignature(struct F*16a3c4107c SpecHandle); // DelegateFunction GameplayAbilities.*4db59a1042.OnAppliedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	bool *bc778619b9(struct AActor* TargetActor, struct F*9d96cfa5bb TargetTagRequirements); // Function GameplayAbilities.*4db59a1042.*bc778619b9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x686c9f8
};

// Class GameplayAbilities.*c6009f028d
// Size: 0x58 (Inherited: 0x30)
struct U*c6009f028d : U*940d5b984c {
	struct FMulticastDelegate EventReceived; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)

	void EventReceivedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*c6009f028d.EventReceivedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void *b18396e0d7(struct AActor* TargetActor, bool OnlyTriggerOnce); // Function GameplayAbilities.*c6009f028d.*b18396e0d7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x686cdb0
};

// Class GameplayAbilities.*d46fb103a6
// Size: 0x50 (Inherited: 0x30)
struct U*d46fb103a6 : U*940d5b984c {
	char pad_30[0x20]; // 0x30(0x20)

	void AsyncWaitGameplayTagDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*d46fb103a6.AsyncWaitGameplayTagDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
};

// Class GameplayAbilities.*0f23ea7557
// Size: 0x60 (Inherited: 0x50)
struct U*0f23ea7557 : U*d46fb103a6 {
	struct FMulticastDelegate Added; // 0x50(0x10)

	struct FGameplayTag *b0c1ab980c(bool OnlyTriggerOnce); // Function GameplayAbilities.*0f23ea7557.*b0c1ab980c // Final|Native|Static|Public|BlueprintCallable // @ game+0x686cf2c
};

// Class GameplayAbilities.*7ea0d84da7
// Size: 0x60 (Inherited: 0x50)
struct U*7ea0d84da7 : U*d46fb103a6 {
	struct FMulticastDelegate Removed; // 0x50(0x10)

	bool *ca0eb3b1c1(); // Function GameplayAbilities.*7ea0d84da7.*ca0eb3b1c1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x686d04c
};

// Class GameplayAbilities.*12ac8b7f4c
// Size: 0x28 (Inherited: 0x28)
struct U*12ac8b7f4c : UInterface {

	void *e663248706(); // Function GameplayAbilities.*12ac8b7f4c.*e663248706 // BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x68689cc
	void BlueprintCustomHandler(); // Function GameplayAbilities.*12ac8b7f4c.BlueprintCustomHandler // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetOrigin(struct F*6f1c5535b6 Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x686a8ac
	struct F*840e447bec *d260e51d1a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d260e51d1a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6868c30
	struct F*8e5ba27004 *778d87f64e(struct AActor* FilterActor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*778d87f64e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686b1d0
	void *7323da5c9a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7323da5c9a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686757c
	struct FGameplayAttribute *4f1c782a36(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4f1c782a36 // Final|Native|Static|Public|BlueprintCallable // @ game+0x686a724
	struct F*16a3c4107c *f4df9f90af(struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f4df9f90af // Final|Native|Static|Public|BlueprintCallable // @ game+0x6865728
	void *213a1607e7(struct AActor* TargetActor, struct FVector Direction); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*213a1607e7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6869f4c
	int32 *7d9a96d86a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7d9a96d86a // Final|Native|Static|Public|BlueprintCallable // @ game+0x686c0f0
	void *8145f71e27(struct F*840e447bec ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*8145f71e27 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6868f48
	void *a094b5afbd(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*a094b5afbd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6869264
	struct F*840e447bec *fc42f113a4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*fc42f113a4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6868da8
	struct F*6f1c5535b6 GetHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686a2b4
	void *b16114453e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b16114453e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x686936c
	struct F*4d4358ec07 *32b336e912(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*32b336e912 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6869740
	struct FGameplayAttribute *f7527ddebd(bool bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f7527ddebd // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6869c5c
	void *7bb6d2762d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7bb6d2762d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6867f58
	struct UClass* *659ce41812(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*659ce41812 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6865ab8
	struct F*6f1c5535b6 *c87d31b96c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c87d31b96c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686b000
	void *84d7cc68c7(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*84d7cc68c7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x686507c
	struct FGameplayTagContainer *4a7c4982ac(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4a7c4982ac // Final|Native|Static|Public|BlueprintCallable // @ game+0x68658c4
	float SetDuration(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // Final|Native|Static|Public|BlueprintCallable // @ game+0x686bf5c
	void *03ee4ca027(int32 Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*03ee4ca027 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686913c
	int32 *e49bb5d1b8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e49bb5d1b8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x686a398
	int32 *cd6d0175cf(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*cd6d0175cf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x686c5b0
	void *de06b7b1a3(struct F*4d4358ec07 HandleToAdd); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*de06b7b1a3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6865e44
	struct F*9d96cfa5bb *d03606bd5b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d03606bd5b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6866df8
	struct F*16a3c4107c *4b199aa3a4(struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4b199aa3a4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6865534
	void *fe467f3a3c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*fe467f3a3c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x686a614
	struct AActor* *5fd4662b87(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5fd4662b87 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6864e3c
	struct TArray<struct AActor*> *c41fc378ae(bool OneTargetPerHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c41fc378ae // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6864f18
	void *55a1b1276a(struct F*16a3c4107c SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*55a1b1276a // Final|Native|Static|Public|BlueprintCallable // @ game+0x686c2e8
	int32 *4733c590db(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4733c590db // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x686a9d4
	int32 *c0c0da375e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c0c0da375e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x686c42c
	bool *6e9564183e(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayTagContainer SourceTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6e9564183e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x686851c
	bool MakeGameplayCueParameters(struct FGameplayTag MatchedTagName, struct FGameplayTagContainer AggregatedSourceTags, struct FVector Location, struct AActor* Instigator); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x686b360
	void *e7968ccc43(struct FGameplayAttribute AttributeA); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e7968ccc43 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686bc3c
	void *66d35f0c1a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*66d35f0c1a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6868ba0
	struct F*840e447bec *4a2951dbca(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4a2951dbca // Final|Native|Static|Public|BlueprintCallable // @ game+0x6869014
	void *c5544fe22d(struct AActor* Actor, bool bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c5544fe22d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x686996c
	int32 *3f000cf9a8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3f000cf9a8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x686c884
	struct F*840e447bec *1bc5a75bea(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*1bc5a75bea // Final|Native|Static|Public|BlueprintCallable // @ game+0x68690a8
	void *aa97c78e1b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*aa97c78e1b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6867a30
	void *37e2c64eb2(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*37e2c64eb2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68678e0
	bool *618257581c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*618257581c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6869dd4
	void *bd21ac74ef(struct F*840e447bec ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bd21ac74ef // Final|Native|Static|Public|BlueprintCallable // @ game+0x6868d14
	void *3fda1c1be5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3fda1c1be5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68677d8
	struct F*16a3c4107c GetEffectContext(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext // Final|Native|Static|Public|BlueprintCallable // @ game+0x6869820
	struct FGameplayAttribute IsValid(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686b0f4
	void *ba07238608(TScriptInterface<struct U*12ac8b7f4c> TargetCueInterface); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ba07238608 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68689e0
	struct AActor* *6406cf8cef(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6406cf8cef // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6867090
	struct F*c4e5556a43 *5fffcf97ed(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5fffcf97ed // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6867e28
	void *2c1dac716b(struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2c1dac716b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68680ec
	struct F*c4e5556a43 *d3afbf0d89(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d3afbf0d89 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6867688
	struct F*16a3c4107c *5e8ebd60c3(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5e8ebd60c3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686962c
	void *a9f813cf40(struct AActor* TargetActor, struct FVector Location); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*a9f813cf40 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x686a0d4
	bool *bb7fc08005(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bb7fc08005 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x686827c
	void *c791b00b09(struct F*16a3c4107c SpecHandle, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c791b00b09 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6865ff4
	int32 *c5276bac5c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c5276bac5c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x686ab18
	struct F*16a3c4107c *ea54a099da(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ea54a099da // Final|Native|Static|Public|BlueprintCallable // @ game+0x6865c50
	void *6d1d495651(struct F*c4e5556a43 EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6d1d495651 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686742c
	struct F*b7eaaf2a6d *91545b53a4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*91545b53a4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6865198
	struct FHitResult *660cdb66db(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*660cdb66db // Final|Native|Static|Public|BlueprintCallable // @ game+0x6867210
	void *d64962e52a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d64962e52a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6867b80
	struct F*6f1c5535b6 IsInstigatorLocallyControlled(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686af0c
	float *652dcbcaf1(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*652dcbcaf1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686ba60
	void *c8c4bb3b9b(struct F*4d4358ec07 HitResult); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c8c4bb3b9b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x686c724
	bool *b96472e4ef(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b96472e4ef // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6869ae4
	void *3d5f1422ef(struct AActor* InNewInstigator, struct F*16a3c4107c GameplayEffectSpecHandle_Clone); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3d5f1422ef // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6866c14
	struct FVector BreakGameplayCueParameters(struct F*6f1c5535b6 Parameters, struct AActor* Instigator, struct UObject* SourceObject, int32 GameplayEffectLevel, struct USceneComponent* TargetAttachComponent); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68663cc
	struct FGameplayTag *65ede5345f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*65ede5345f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6865398
	void *dc002f7284(struct F*840e447bec ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*dc002f7284 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6868e88
	void *5640c7ed18(struct F*51547d5d37 ActorFilterClass); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5640c7ed18 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6868810
	int32 *e6eeea79aa(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e6eeea79aa // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x686acb4
	void GetInstigatorActor(struct F*6f1c5535b6 Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686a540
	void HasHitResult(struct F*6f1c5535b6 Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686ae08
	struct F*4d4358ec07 *7cd2697420(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7cd2697420 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x68694f8
	struct FGameplayTag *b26c0a4e27(float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b26c0a4e27 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68661e0
	void *1baf3ff511(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*1baf3ff511 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6867cd4
	struct FGameplayTag SendGameplayEventToActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x686bdcc
};

// Class GameplayAbilities.*cd0a64ceaf
// Size: 0x28 (Inherited: 0x28)
struct U*cd0a64ceaf : UInterface {
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x4d0 (Inherited: 0x4d0)
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x340 (Inherited: 0x28)
struct UAbilitySystemGlobals : UObject {
	struct FStringClassReference AbilitySystemGlobalsClassName; // 0x28(0x10)
	char pad_38[0x88]; // 0x38(0x88)
	struct FGameplayTag *a7eee213b3; // 0xc0(0x08)
	struct FName ActivateFailIsDeadName; // 0xc8(0x08)
	struct FGameplayTag *d8a0fbca89; // 0xd0(0x08)
	struct FName ActivateFailCooldownName; // 0xd8(0x08)
	struct FGameplayTag *5651975b20; // 0xe0(0x08)
	struct FName ActivateFailCostName; // 0xe8(0x08)
	struct FGameplayTag *fdc763d1e9; // 0xf0(0x08)
	struct FName ActivateFailTagsBlockedName; // 0xf8(0x08)
	struct FGameplayTag *17b956240d; // 0x100(0x08)
	struct FName ActivateFailTagsMissingName; // 0x108(0x08)
	struct FGameplayTag *33fd4ea5fa; // 0x110(0x08)
	struct FName ActivateFailNetworkingName; // 0x118(0x08)
	int32 MinimalReplicationTagCountBits; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct F*7f57cecf64 *9dea95ab6e; // 0x128(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0x138(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FName GameplayModEvaluationChannelAliases[0x0a]; // 0x140(0x50)
	struct FStringAssetReference GlobalCurveTableName; // 0x190(0x10)
	struct UCurveTable* *127842ba44; // 0x1a0(0x08)
	struct FStringAssetReference GlobalAttributeMetaDataTableName; // 0x1a8(0x10)
	struct UDataTable* *c71a9200c1; // 0x1b8(0x08)
	struct FStringAssetReference GlobalAttributeSetDefaultsTableName; // 0x1c0(0x10)
	struct TArray<struct FStringAssetReference> GlobalAttributeSetDefaultsTableNames; // 0x1d0(0x10)
	struct TArray<struct UCurveTable*> *28283e36a7; // 0x1e0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerClass; // 0x1f0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerName; // 0x200(0x10)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x210(0x10)
	struct FStringAssetReference GameplayTagResponseTableName; // 0x220(0x10)
	struct U*5971f8d28f* *6545bc28f3; // 0x230(0x08)
	bool PredictTargetGameplayEffects; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UGameplayCueManager* *110aafa998; // 0x240(0x08)
	char pad_248[0xf8]; // 0x248(0xf8)

	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // Exec|Native|Public // @ game+0x57eec6c
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // Exec|Native|Public // @ game+0x57eec54
	void ServerActivatePlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility // Final|Exec|Native|Public // @ game+0x5765e58
	void ServerEndPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility // Final|Exec|Native|Public // @ game+0x5765e58
	void ServerCancelPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility // Final|Exec|Native|Public // @ game+0x5765e58
	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities // Final|Exec|Native|Public // @ game+0xb8b52c
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x490 (Inherited: 0x470)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_470[0x18]; // 0x470(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x488(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName *3cdde9d462; // 0x80(0x08)
	enum class *8b74868674 *4c81db8270; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FVector *1beb0eb7f6; // 0x8c(0x0c)
	float *ed0654506e; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UCharacterMovementComponent* MovementComponent; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0xf0 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xb8(0x10)
	struct FVector WorldDirection; // 0xc8(0x0c)
	float Strength; // 0xd4(0x04)
	float Duration; // 0xd8(0x04)
	bool *5b0915d5ab; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct UCurveFloat* *5b38dc5497; // 0xe0(0x08)
	bool *7d490c23ae; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	bool *7e1b9fb4e1(enum class *8b74868674 VelocityOnFinishMode, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.*7e1b9fb4e1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68cee7c
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x110 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xb8(0x10)
	struct FMulticastDelegate OnLanded; // 0xc8(0x10)
	struct FRotator Rotation; // 0xd8(0x0c)
	float Distance; // 0xe4(0x04)
	float Height; // 0xe8(0x04)
	float Duration; // 0xec(0x04)
	float *f5f0ce21d4; // 0xf0(0x04)
	bool *f0bcd8ff13; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct U*226eb62c2c* *563ada7118; // 0xf8(0x08)
	struct UCurveFloat* *722a0c8e77; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	struct UCurveFloat* *0682616198(float Duration, enum class *8b74868674 VelocityOnFinishMode, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.*0682616198 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68cf24c
	void OnLandedCallback(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // Final|Native|Public|HasOutParms // @ game+0x68d7730
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // Final|Native|Public|BlueprintCallable // @ game+0x68d3374
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x130 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinished; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FVector StartLocation; // 0xd0(0x0c)
	struct FVector TargetLocation; // 0xdc(0x0c)
	struct AActor* TargetActor; // 0xe8(0x08)
	struct FVector *16c1c30ed3; // 0xf0(0x0c)
	enum class *bf2661327b *e4d53b81bd; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float Duration; // 0x100(0x04)
	bool *0204b28c7c; // 0x104(0x01)
	bool *0dde23efa9; // 0x105(0x01)
	enum class EMovementMode *a0e056ee89; // 0x106(0x01)
	bool *a2be20200e; // 0x107(0x01)
	struct U*226eb62c2c* *563ada7118; // 0x108(0x08)
	struct UCurveFloat* *722a0c8e77; // 0x110(0x08)
	struct UCurveFloat* *a2a3e1aef2; // 0x118(0x08)
	struct UCurveFloat* *6d984e3744; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	struct AActor* *4cd6ddab12(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*4cd6ddab12 // Final|Native|Public // @ game+0x68d7e20
	struct UCurveFloat* *46d13a10a7(struct FName TaskInstanceName, int32 TargetDataIndex, enum class *bf2661327b OffsetAlignment, enum class *8b74868674 VelocityOnFinishMode, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*46d13a10a7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68d0040
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // Final|Native|Protected // @ game+0x68d7de8
	bool *6aef56a632(float Duration, struct UCurveFloat* TargetLerpSpeedVertical, enum class EMovementMode MovementMode, struct U*226eb62c2c* PathOffsetCurve); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*6aef56a632 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68cf6c0
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x108 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnTimedOut; // 0xb8(0x10)
	struct FMulticastDelegate OnTimedOutAndDestinationReached; // 0xc8(0x10)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	float Duration; // 0xf0(0x04)
	bool *0dde23efa9; // 0xf4(0x01)
	enum class EMovementMode *a0e056ee89; // 0xf5(0x01)
	bool *a2be20200e; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct U*226eb62c2c* *563ada7118; // 0xf8(0x08)
	char pad_100[0x8]; // 0x100(0x08)

	bool *5d438c861a(enum class EMovementMode MovementMode, enum class *8b74868674 VelocityOnFinishMode, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.*5d438c861a // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68cfc74
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x110 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xb8(0x10)
	struct FVector Location; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct AActor* *fd564c3007; // 0xd8(0x08)
	float Strength; // 0xe0(0x04)
	float Duration; // 0xe4(0x04)
	float Radius; // 0xe8(0x04)
	bool *14653615d0; // 0xec(0x01)
	bool *5b0915d5ab; // 0xed(0x01)
	bool *4c98d45509; // 0xee(0x01)
	char pad_EF[0x1]; // 0xef(0x01)
	struct UCurveFloat* *b78e36b437; // 0xf0(0x08)
	struct UCurveFloat* *5b38dc5497; // 0xf8(0x08)
	bool *238c940475; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FRotator *1a7f6adb6c; // 0x104(0x0c)

	float *cab1c6b77d(float Strength, float Radius, bool bIsAdditive, struct UCurveFloat* StrengthDistanceFalloff); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.*cab1c6b77d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68d06e8
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastDelegate OnTargetLocationReached; // 0x80(0x10)
	char pad_90[0x4]; // 0x90(0x04)
	struct FVector StartLocation; // 0x94(0x0c)
	struct FVector TargetLocation; // 0xa0(0x0c)
	float *3b82efc525; // 0xac(0x04)
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UCurveFloat* *c540d14e0d; // 0xb8(0x08)
	struct U*226eb62c2c* *07bd84c981; // 0xc0(0x08)

	struct U*226eb62c2c* *9e88fc7518(struct FName TaskInstanceName); // Function GameplayAbilities.AbilityTask_MoveToLocation.*9e88fc7518 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68d57ac
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastDelegate OnSync; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	enum class *701973b44c *77447d9e49(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*77447d9e49 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68de1bc
	void *a7b9b66946(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*a7b9b66946 // Final|Native|Public // @ game+0x68d7e0c
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x170 (Inherited: 0x80)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastDelegate OnCompleted; // 0x80(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x90(0x10)
	struct FMulticastDelegate OnInterrupted; // 0xa0(0x10)
	struct FMulticastDelegate OnCancelled; // 0xb0(0x10)
	char pad_C0[0x88]; // 0xc0(0x88)
	struct UAnimMontage* *46bdc0bbd4; // 0x148(0x08)
	float Rate; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FName *1febf87372; // 0x158(0x08)
	float *2cfd1e1c0a; // 0x160(0x04)
	float *bb8343089c; // 0x164(0x04)
	bool *cccd1b97b0; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)

	struct UAnimMontage* OnMontageEnded(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // Final|Native|Public // @ game+0x68d7910
	void *9eba99aa24(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*9eba99aa24 // Final|Native|Public // @ game+0x68d79f0
	float *70187ccbbf(struct FName TaskInstanceName); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*70187ccbbf // Final|Native|Static|Public|BlueprintCallable // @ game+0x68d2b20
	void *71583fb02b(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*71583fb02b // Final|Native|Public // @ game+0x68d7830
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastDelegate OnPerformAction; // 0x80(0x10)
	struct FMulticastDelegate OnFinished; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	float RepeatAction(int32 TotalActionCount); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // Final|Native|Static|Public|BlueprintCallable // @ game+0x68d8724
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastDelegate SUCCESS; // 0x80(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x90(0x10)
	char pad_A0[0x28]; // 0xa0(0x28)

	struct F*4d4358ec07 FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x68d3388
	struct F*4d4358ec07 BeginSpawningActor(struct UClass* Class); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68d19f8
	void SpawnActor(struct F*4d4358ec07 TargetData); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x68da5a4
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastDelegate OnStateEnded; // 0x80(0x10)
	struct FMulticastDelegate OnStateInterrupted; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	void *ea087dace1(struct UGameplayAbility* OwningAbility, bool bEndCurrentState); // Function GameplayAbilities.AbilityTask_StartAbilityState.*ea087dace1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68da758
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x408 (Inherited: 0x3e8)
struct AGameplayAbilityWorldReticle : AActor {
	struct F*bbcfefc691 Parameters; // 0x3e8(0x0c)
	bool bFaceOwnerFlat; // 0x3f4(0x01)
	bool bSnapToTargetedActor; // 0x3f5(0x01)
	bool bIsTargetValid; // 0x3f6(0x01)
	bool bIsTargetAnActor; // 0x3f7(0x01)
	struct APlayerController* MasterPC; // 0x3f8(0x08)
	struct AActor* TargetingActor; // 0x400(0x08)

	void OnTargetingAnActor(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // Event|Public|BlueprintEvent // @ game+0x293938
	void OnValidTargetChanged(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // Event|Public|BlueprintEvent // @ game+0x293938
	struct FName SetReticleMaterialParamFloat(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // Event|Public|BlueprintEvent // @ game+0x293938
	void SetReticleMaterialParamVector(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // Event|Public|HasDefaults|BlueprintEvent // @ game+0x293938
	void *22921e950a(); // Function GameplayAbilities.GameplayAbilityWorldReticle.*22921e950a // Final|Native|Public|BlueprintCallable // @ game+0x68d32e0
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // Event|Public|BlueprintEvent // @ game+0x293938
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x5b0 (Inherited: 0x3e8)
struct AGameplayAbilityTargetActor : AActor {
	bool *2cd1bfed14; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct F*b7eaaf2a6d StartLocation; // 0x3f0(0x70)
	char pad_460[0xe0]; // 0x460(0xe0)
	struct APlayerController* MasterPC; // 0x540(0x08)
	struct UGameplayAbility* OwningAbility; // 0x548(0x08)
	bool bDestroyOnConfirmation; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct AActor* SourceActor; // 0x558(0x08)
	struct F*bbcfefc691 ReticleParams; // 0x560(0x0c)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct UClass* ReticleClass; // 0x570(0x08)
	struct F*51547d5d37 Filter; // 0x578(0x10)
	bool bDebug; // 0x588(0x01)
	char pad_589[0x17]; // 0x589(0x17)
	struct UAbilitySystemComponent* *41a49c4a98; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)

	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // Native|Public // @ game+0x57d529c
	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // Native|Public // @ game+0x581a384
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastDelegate TimeElapsed; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)

	struct AGameplayAbilityTargetActor* BeginSpawningActor(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68d1bd8
	struct FName *15a66bb84b(float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*15a66bb84b // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dadf8
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x68d350c
	float *3cdf14570d(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*3cdf14570d // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dac88
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x138 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastDelegate OnActivate; // 0x80(0x10)
	char pad_90[0xa8]; // 0x90(0xa8)

	bool *aebd8d80f8(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*aebd8d80f8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68db404
	void *205b5a6754(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithoutTag, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*205b5a6754 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68db21c
	bool *a07301361e(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*a07301361e // Final|Native|Static|Public|BlueprintCallable // @ game+0x68db608
	void *fd5543e534(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*fd5543e534 // Final|Native|Public // @ game+0x68d6acc
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xf8 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastDelegate OnCommit; // 0x80(0x10)
	char pad_90[0x68]; // 0x90(0x68)

	bool *f0970f8e93(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*f0970f8e93 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68db9ac
	struct FGameplayTag *c7cf9c51e4(struct FGameplayTag WithoutTage); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*c7cf9c51e4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68db818
	void *a473687766(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*a473687766 // Final|Native|Public // @ game+0x68d6b5c
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xe0 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x48]; // 0x90(0x48)
	struct UAbilitySystemComponent* *c0db23433a; // 0xd8(0x08)

	struct AActor* *80bf8ffb7b(struct UGameplayAbility* OwningAbility, struct FGameplayTag InWithTag, enum class EWaitAttributeChangeComparison InComparisonType); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*80bf8ffb7b // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dc33c
	struct FGameplayTag *a5068e2924(struct FGameplayTag WithoutSrcTag, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*a5068e2924 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dbb68
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x110 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x78]; // 0x90(0x78)
	struct UAbilitySystemComponent* *c0db23433a; // 0x108(0x08)

	struct AActor* *e476f726e6(struct FGameplayAttribute AttributeNumerator); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.*e476f726e6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dbdcc
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xd8 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x40]; // 0x90(0x40)
	struct UAbilitySystemComponent* *c0db23433a; // 0xd0(0x08)

	struct AActor* *589b91c3ea(); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.*589b91c3ea // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dc0d8
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastDelegate OnCancel; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	struct UGameplayAbility* *11f30597f1(); // Function GameplayAbilities.AbilityTask_WaitCancel.*11f30597f1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68daf68
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x68d77f4
	void *b82f33e2d5(); // Function GameplayAbilities.AbilityTask_WaitCancel.*b82f33e2d5 // Final|Native|Public // @ game+0x68d6fec
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void *c781676ed1(); // Function GameplayAbilities.AbilityTask_WaitConfirm.*c781676ed1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68daffc
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // Final|Native|Public // @ game+0x68d7014
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x80(0x10)
	struct FMulticastDelegate OnCancel; // 0x90(0x10)
	char pad_A0[0x8]; // 0xa0(0x08)

	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // Final|Native|Public // @ game+0x68d781c
	void *b82f33e2d5(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*b82f33e2d5 // Final|Native|Public // @ game+0x68d7000
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // Final|Native|Public // @ game+0x68d70a4
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x68d7808
	void *eb7a5a68e3(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*eb7a5a68e3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68db090
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastDelegate OnFinish; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	float WaitDelay(); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // Final|Native|Static|Public|BlueprintCallable // @ game+0x68db124
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1b8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_80[0x128]; // 0x80(0x128)
	struct UAbilitySystemComponent* *c0db23433a; // 0x1a8(0x08)
	char pad_1B0[0x8]; // 0x1b0(0x08)

	struct F*4b8060af04 *de9bdf53c2(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.*de9bdf53c2 // Final|Native|Public|HasOutParms // @ game+0x68d6e4c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	bool *7104fde5fd(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery SourceTagQuery, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*7104fde5fd // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dccc8
	struct F*9d96cfa5bb *b37836a1ae(bool TriggerOnce, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*b37836a1ae // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dc8c4
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	struct FGameplayTagQuery *c1fa66c3e2(bool TriggerOnce, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*c1fa66c3e2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dd478
	bool *a062262c53(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*a062262c53 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dd074
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x128 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastDelegate bLocked; // 0x80(0x10)
	char pad_90[0x88]; // 0x90(0x88)
	struct UAbilitySystemComponent* *c0db23433a; // 0x118(0x08)
	char pad_120[0x8]; // 0x120(0x08)

	void *ee49827245(struct UGameplayAbility* OwningAbility, struct F*9d96cfa5bb TargetTagRequirements, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.*ee49827245 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dd824
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastDelegate OnRemoved; // 0x80(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x90(0x10)
	char pad_A0[0x20]; // 0xa0(0x20)

	struct F*840e447bec *41b219b2f4(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*41b219b2f4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dc650
	void *d8c8a42980(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*d8c8a42980 // Final|Native|Public|HasOutParms // @ game+0x68d7318
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	struct F*840e447bec *3a9df13381(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*3a9df13381 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dc740
	void *759bf7fb7c(struct F*840e447bec Param0); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*759bf7fb7c // Final|Native|Public // @ game+0x68d73f0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastDelegate EventReceived; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct UAbilitySystemComponent* *66c4165baa; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	void *e489928761(struct UGameplayAbility* OwningAbility, struct AActor* OptionalExternalTarget, bool OnlyMatchExact); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.*e489928761 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68ddab4
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_80[0x10]; // 0x80(0x10)
	struct UAbilitySystemComponent* *66c4165baa; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	struct FGameplayTag *f862e0c51e(); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.*f862e0c51e // Native|Public // @ game+0x68d36bc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Added; // 0xa8(0x10)

	void *3104265db5(struct FGameplayTag Tag, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.*3104265db5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68ddcbc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Removed; // 0xa8(0x10)

	bool *207279a8d0(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.*207279a8d0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dde54
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastDelegate OnPress; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	struct UGameplayAbility* *c0a63d78f2(bool bTestAlreadyPressed); // Function GameplayAbilities.AbilityTask_WaitInputPress.*c0a63d78f2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68ddfec
	void *972f1105bb(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*972f1105bb // Final|Native|Public // @ game+0x68d7b34
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastDelegate OnRelease; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void *9d38ca445e(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*9d38ca445e // Final|Native|Static|Public|BlueprintCallable // @ game+0x68de0d4
	void *72becfe7f3(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*72becfe7f3 // Final|Native|Public // @ game+0x68d7b48
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	enum class EMovementMode *70e930acd1(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.*70e930acd1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68d2de0
	void OnMovementModeChange(struct ACharacter* Param0); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // Final|Native|Public // @ game+0x68d7a04
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x90 (Inherited: 0x80)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastDelegate OnOverlap; // 0x80(0x10)

	struct UGameplayAbility* *1ba6cccc2b(); // Function GameplayAbilities.AbilityTask_WaitOverlap.*1ba6cccc2b // Final|Native|Static|Public|BlueprintCallable // @ game+0x68dc830
	void OnHitCallback(struct UPrimitiveComponent* Param0, struct UPrimitiveComponent* Param2); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // Final|Native|Public|HasOutParms|HasDefaults // @ game+0x68d7520
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc0 (Inherited: 0x80)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastDelegate ValidData; // 0x80(0x10)
	struct FMulticastDelegate Cancelled; // 0x90(0x10)
	struct UClass* TargetClass; // 0xa0(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)

	void *777e7bdb8d(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*777e7bdb8d // Final|Native|Public // @ game+0x68d8204
	void *32df8052c7(struct F*4d4358ec07 Param0); // Function GameplayAbilities.AbilityTask_WaitTargetData.*32df8052c7 // Final|Native|Public|HasOutParms // @ game+0x68d80d0
	struct UClass* *f3e5336e65(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*f3e5336e65 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68de2a0
	void *db3b6fd7ac(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*db3b6fd7ac // Final|Native|Public|HasOutParms // @ game+0x68d7f10
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x68d35e4
	struct AGameplayAbilityTargetActor* BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68d1d14
	void *647afee022(struct FName TaskInstanceName, struct AGameplayAbilityTargetActor* TargetActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.*647afee022 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68de424
	void *93eca56a61(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*93eca56a61 // Final|Native|Public|HasOutParms // @ game+0x68d7ff0
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastDelegate OnVelocityChage; // 0x80(0x10)
	struct UMovementComponent* *5173563719; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	float *579dd1d94b(); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.*579dd1d94b // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68d2ec8
};

// Class GameplayAbilities.*528ca6753e
// Size: 0x70 (Inherited: 0x30)
struct U*528ca6753e : UAttributeSet {
	float MaxHealth; // 0x30(0x04)
	float Health; // 0x34(0x04)
	float Mana; // 0x38(0x04)
	float MaxMana; // 0x3c(0x04)
	float Damage; // 0x40(0x04)
	float SpellDamage; // 0x44(0x04)
	float PhysicalDamage; // 0x48(0x04)
	float CritChance; // 0x4c(0x04)
	float CritMultiplier; // 0x50(0x04)
	float ArmorDamageReduction; // 0x54(0x04)
	float DodgeChance; // 0x58(0x04)
	float LifeSteal; // 0x5c(0x04)
	float Strength; // 0x60(0x04)
	float StackingAttribute1; // 0x64(0x04)
	float StackingAttribute2; // 0x68(0x04)
	float NoStackAttribute; // 0x6c(0x04)
};

// Class GameplayAbilities.*10e3ea6e78
// Size: 0x570 (Inherited: 0x570)
struct U*10e3ea6e78 : UGameplayAbility {
};

// Class GameplayAbilities.*0bb2421c9b
// Size: 0x5b0 (Inherited: 0x570)
struct U*0bb2421c9b : UGameplayAbility {
	struct UAnimMontage* *46bdc0bbd4; // 0x570(0x08)
	float PlayRate; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FName SectionName; // 0x580(0x08)
	struct TArray<struct UClass*> *850bd3bfed; // 0x588(0x10)
	struct TArray<struct UGameplayEffect*> *70d1f4a07f; // 0x598(0x10)
	char pad_5A8[0x8]; // 0x5a8(0x08)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x40 (Inherited: 0x30)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct F*2c22e7afe6> Abilities; // 0x30(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x5b0 (Inherited: 0x5b0)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x5a8(0x04)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x5d0 (Inherited: 0x5b0)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x5a8(0x04)
	struct FCollisionProfileName TraceProfile; // 0x5b0(0x08)
	bool bTraceAffectsAimPitch; // 0x5b8(0x01)
	char pad_5BD[0x13]; // 0x5bd(0x13)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x5f0 (Inherited: 0x5d0)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x5c8(0x04)
	float CollisionHeight; // 0x5cc(0x04)
	char pad_5D8[0x18]; // 0x5d8(0x18)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x600 (Inherited: 0x5f0)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	struct UClass* PlacedActorClass; // 0x5e8(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x5f0(0x08)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x5d0 (Inherited: 0x5d0)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x420 (Inherited: 0x408)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x408(0x08)
	struct TArray<struct UActorComponent*> *d4c00db9c3; // 0x410(0x10)
};

// Class GameplayAbilities.*04aed17bec
// Size: 0x28 (Inherited: 0x28)
struct U*04aed17bec : UObject {
};

// Class GameplayAbilities.*58a5338327
// Size: 0x28 (Inherited: 0x28)
struct U*58a5338327 : U*04aed17bec {
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x460 (Inherited: 0x30)
struct UGameplayCueManager : UDataAsset {
	char pad_30[0x70]; // 0x30(0x70)
	struct F*c1295f93c9 *6411fd6ecf; // 0xa0(0xb0)
	struct F*c1295f93c9 *b274cbb328; // 0x150(0xb0)
	char pad_200[0x1a0]; // 0x200(0x1a0)
	struct TArray<struct UClass*> *d923a02e2c; // 0x3a0(0x10)
	struct TArray<struct UClass*> *9fae9d8257; // 0x3b0(0x10)
	struct TArray<struct F*a9de5b11af> *1a55b977c8; // 0x3c0(0x10)
	int32 *fce8785055; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct F*d75ac321f1> *14dfb599fe; // 0x3d8(0x10)
	char pad_3E8[0x78]; // 0x3e8(0x78)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x448 (Inherited: 0x3e8)
struct AGameplayCueNotify_Actor : AActor {
	bool *59af2bddb0; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	float *9d1900a1b5; // 0x3ec(0x04)
	bool *57145c05a2; // 0x3f0(0x01)
	bool *0f2ac599b6; // 0x3f1(0x01)
	char pad_3F2[0x6]; // 0x3f2(0x06)
	struct FGameplayTag GameplayCueTag; // 0x3f8(0x08)
	struct FName GameplayCueName; // 0x400(0x08)
	bool *f289e7a87a; // 0x408(0x01)
	bool *faaa77e389; // 0x409(0x01)
	bool *e0d627359c; // 0x40a(0x01)
	bool *0b92511631; // 0x40b(0x01)
	bool *09ee7cfed4; // 0x40c(0x01)
	bool *d25dc8bbe4; // 0x40d(0x01)
	char pad_40E[0x2]; // 0x40e(0x02)
	int32 *3752d1a610; // 0x410(0x04)
	char pad_414[0x34]; // 0x414(0x34)

	void *e44de8aaf9(); // Function GameplayAbilities.GameplayCueNotify_Actor.*e44de8aaf9 // Native|Public|BlueprintCallable // @ game+0x3f3df0
	void OnOwnerDestroyed(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // Native|Public // @ game+0x573f170
	enum class EGameplayCueEvent K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void OnExecute(struct AActor* MyTarget); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x68d70b8
	struct F*6f1c5535b6 OnActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x68d6bec
	struct F*6f1c5535b6 WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x68de5a8
	void OnRemove(struct AActor* MyTarget); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x68d7b5c
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x40 (Inherited: 0x28)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x28(0x08)
	struct FName GameplayCueName; // 0x30(0x08)
	bool *faaa77e389; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	struct F*6f1c5535b6 OnActive(); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x68d6d1c
	void OnExecute(struct F*6f1c5535b6 Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x68d71e8
	enum class EGameplayCueEvent K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x293938
	struct F*6f1c5535b6 WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x68de6d8
	void OnRemove(struct AActor* MyTarget); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x68d7c8c
};

// Class GameplayAbilities.*17fed644c0
// Size: 0x50 (Inherited: 0x40)
struct U*17fed644c0 : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x40(0x08)
	struct UParticleSystem* ParticleSystem; // 0x48(0x08)
};

// Class GameplayAbilities.*3bb88e8ef7
// Size: 0x90 (Inherited: 0x30)
struct U*3bb88e8ef7 : UDataAsset {
	struct TArray<struct F*d94b97e6d8> *dc8ecfe352; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class GameplayAbilities.*9f0a5a82b7
// Size: 0x880 (Inherited: 0x880)
struct U*9f0a5a82b7 : UGameplayEffect {
};

// Class GameplayAbilities.*b97394c78c
// Size: 0x40 (Inherited: 0x38)
struct U*b97394c78c : U*78d72ddf34 {
	bool *a08380e9ac; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	void CalculateBaseMagnitude(struct F*4b8060af04 Spec); // Function GameplayAbilities.*b97394c78c.CalculateBaseMagnitude // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x68d1e50
};

// Class GameplayAbilities.*5bf3277602
// Size: 0x28 (Inherited: 0x28)
struct U*5bf3277602 : UObject {

	struct UAbilitySystemComponent* CanApplyGameplayEffect(); // Function GameplayAbilities.*5bf3277602.CanApplyGameplayEffect // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x68d1f48
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.*3f1d6341ca
// Size: 0x40 (Inherited: 0x28)
struct U*3f1d6341ca : UGameplayEffectUIData {
	struct FText Description; // 0x28(0x18)
};

// Class GameplayAbilities.*5971f8d28f
// Size: 0x210 (Inherited: 0x30)
struct U*5971f8d28f : UDataAsset {
	struct TArray<struct F*f6648c1607> Entries; // 0x30(0x10)
	char pad_40[0x1d0]; // 0x40(0x1d0)

	void *706a0bb404(int32 Param1); // Function GameplayAbilities.*5971f8d28f.*706a0bb404 // Final|Native|Protected // @ game+0x68da87c
};

// Class GameplayAbilities.*48a2119993
// Size: 0x28 (Inherited: 0x28)
struct U*48a2119993 : UInterface {
};


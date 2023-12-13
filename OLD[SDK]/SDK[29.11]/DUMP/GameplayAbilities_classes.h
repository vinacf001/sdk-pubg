// Class GameplayAbilities.*ecaadbdbf7
// Size: 0x30 (Inherited: 0x30)
struct U*ecaadbdbf7 : UInterface {
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1860 (Inherited: 0x270)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_270[0x8]; // 0x270(0x08)
	char *46c85731ab : 1; // 0x278(0x01)
	char pad_278_1 : 7; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct TArray<struct F*45e5d348e0> *dc90cec530; // 0x280(0x10)
	struct FName AffectedAnimInstanceTag; // 0x290(0x08)
	char pad_298[0x5c8]; // 0x298(0x5c8)
	float *420da6deef; // 0x860(0x04)
	float *17caa5ed8d; // 0x864(0x04)
	char pad_868[0x80]; // 0x868(0x80)
	bool *89d2486ff5; // 0x8e8(0x01)
	bool *354fa8f7b4; // 0x8e9(0x01)
	bool *14f8b75378; // 0x8ea(0x01)
	bool *0b986490c5; // 0x8eb(0x01)
	char pad_8EC[0x4]; // 0x8ec(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> *98d41cb468; // 0x8f0(0x10)
	char pad_900[0x38]; // 0x900(0x38)
	struct F*794a1eb94d ActivatableAbilities; // 0x938(0xc8)
	char pad_A00[0x30]; // 0xa00(0x30)
	struct TArray<struct UGameplayAbility*> *e20ae1afab; // 0xa30(0x10)
	char pad_A40[0x20c]; // 0xa40(0x20c)
	bool *bfa7af0806; // 0xc4c(0x01)
	bool *1d17397880; // 0xc4d(0x01)
	char pad_C4E[0x2]; // 0xc4e(0x02)
	struct F*614399b5bb *86e4c8636b; // 0xc50(0x30)
	char pad_C80[0xa0]; // 0xc80(0xa0)
	struct F*20f1909a08 *d08dc6ad30; // 0xd20(0x4e0)
	struct F*11a3e9312d *2a79cb885d; // 0x1200(0xd0)
	struct F*11a3e9312d *49a91faadb; // 0x12d0(0xd0)
	char pad_13A0[0x318]; // 0x13a0(0x318)
	struct TArray<struct UAttributeSet*> *6718f6c4b1; // 0x16b8(0x10)
	struct TArray<struct FString> *38bde194b0; // 0x16c8(0x10)
	struct AActor* *3a349e95dc; // 0x16d8(0x08)
	struct AActor* AvatarActor; // 0x16e0(0x08)
	struct F*b6c0198f0a *83dfd32cf0; // 0x16e8(0x38)
	struct TArray<bool> *11e834f840; // 0x1720(0x10)
	struct F*7e29f4220b *ce0d2779e6; // 0x1730(0x60)
	struct TArray<struct FString> *314ecf159f; // 0x1790(0x10)
	struct F*581546c6a7 *581546c6a7; // 0x17a0(0xc0)

	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // Native|Protected // @ game+0x68c5aec
	struct F*c4e5556a43 *7b3fed164d(); // Function GameplayAbilities.AbilitySystemComponent.*7b3fed164d // Net|Native|Event|NetMulticast|Public // @ game+0x68c43e4
	struct F*840e447bec *b451c03966(); // Function GameplayAbilities.AbilitySystemComponent.*b451c03966 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68beb1c
	struct F*7dd822a454 *c277c1cb42(); // Function GameplayAbilities.AbilitySystemComponent.*c277c1cb42 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68c7920
	void *c07b8f6248(); // Function GameplayAbilities.AbilitySystemComponent.*c07b8f6248 // Native|Public|BlueprintCallable // @ game+0x64f6024
	struct F*a8e05f09d3 *34b84aaabd(); // Function GameplayAbilities.AbilitySystemComponent.*34b84aaabd // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68c7c74
	struct F*7dd822a454 *5bd61c1cc8(); // Function GameplayAbilities.AbilitySystemComponent.*5bd61c1cc8 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68c71c0
	int32 *a0f6372d13(); // Function GameplayAbilities.AbilitySystemComponent.*a0f6372d13 // Final|Native|Public|BlueprintCallable // @ game+0x68c6130
	struct F*a8e05f09d3 *690bf2e3f9(); // Function GameplayAbilities.AbilitySystemComponent.*690bf2e3f9 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68c0068
	bool *29d1ffcaa0(); // Function GameplayAbilities.AbilitySystemComponent.*29d1ffcaa0 // Native|Public|BlueprintCallable // @ game+0x68c823c
	float *09b566c51c(); // Function GameplayAbilities.AbilitySystemComponent.*09b566c51c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c1c40
	struct F*7dd822a454 NetMulticast_InvokeGameplayCueExecuted_FromSpec(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // Net|Native|Event|NetMulticast|Public // @ game+0x68c3ef0
	struct FName *a463bcfd04(); // Function GameplayAbilities.AbilitySystemComponent.*a463bcfd04 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68c6960
	int32 *7537f818eb(); // Function GameplayAbilities.AbilitySystemComponent.*7537f818eb // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68c6318
	bool *299e54d905(); // Function GameplayAbilities.AbilitySystemComponent.*299e54d905 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c1fb8
	bool TryActivateAbilitiesByTag(); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68c8728
	bool *55bae258e6(); // Function GameplayAbilities.AbilitySystemComponent.*55bae258e6 // Final|Native|Public|BlueprintCallable // @ game+0x68c887c
	struct F*6f1c5535b6 *ade0e8d389(); // Function GameplayAbilities.AbilitySystemComponent.*ade0e8d389 // Net|Native|Event|NetMulticast|Public // @ game+0x68c45fc
	struct F*7dd822a454 *fa6d27225d(); // Function GameplayAbilities.AbilitySystemComponent.*fa6d27225d // Net|Native|Event|NetMulticast|Public // @ game+0x68c38b0
	struct F*6f1c5535b6 *ea4e49c33b(); // Function GameplayAbilities.AbilitySystemComponent.*ea4e49c33b // Net|Native|Event|NetMulticast|Public // @ game+0x68c41e4
	void *3922ebbdc7(); // Function GameplayAbilities.AbilitySystemComponent.*3922ebbdc7 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68c6f38
	struct F*840e447bec *179d6d5902(); // Function GameplayAbilities.AbilitySystemComponent.*179d6d5902 // Final|Native|Public|BlueprintCallable // @ game+0x68bedf0
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // Final|Native|Public // @ game+0x68c5b04
	int32 *2bd9676c43(); // Function GameplayAbilities.AbilitySystemComponent.*2bd9676c43 // Final|Native|Public|BlueprintCallable // @ game+0x68c5f48
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // Native|Public // @ game+0x57be690
	struct F*2c0bbebf0c *2ce75d1c54(); // Function GameplayAbilities.AbilitySystemComponent.*2ce75d1c54 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68c0340
	struct F*6f1c5535b6 *3b1ce46888(); // Function GameplayAbilities.AbilitySystemComponent.*3b1ce46888 // Net|Native|Event|NetMulticast|Public // @ game+0x68c39e8
	int32 *4e060b6352(); // Function GameplayAbilities.AbilitySystemComponent.*4e060b6352 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68c1b10
	int32 *677a0f05c6(); // Function GameplayAbilities.AbilitySystemComponent.*677a0f05c6 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68c7fc0
	struct TArray<struct F*840e447bec> *b833b77a37(); // Function GameplayAbilities.AbilitySystemComponent.*b833b77a37 // Final|Native|Public|BlueprintCallable|Const // @ game+0x68c176c
	struct F*6f1c5535b6 *1e85a6941f(); // Function GameplayAbilities.AbilitySystemComponent.*1e85a6941f // Net|Native|Event|NetMulticast|Public // @ game+0x68c3b90
	struct F*7dd822a454 *12cca625ad(); // Function GameplayAbilities.AbilitySystemComponent.*12cca625ad // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68c766c
	int32 AbilityAbilityKey__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
	struct TArray<struct FString> *1e5b144df6(); // Function GameplayAbilities.AbilitySystemComponent.*1e5b144df6 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68c6f84
	struct F*7dd822a454 *808e5ef850(); // Function GameplayAbilities.AbilitySystemComponent.*808e5ef850 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x68c0570
	bool RemoveActiveGameplayEffect(); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68c6224
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // Native|Public // @ game+0x58036e8
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // Native|Protected // @ game+0x64f5954
	struct F*840e447bec *12c42d6476(); // Function GameplayAbilities.AbilitySystemComponent.*12c42d6476 // Final|Native|Public|BlueprintCallable // @ game+0x68bef90
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
	struct F*1e33a082d1 *f6f4a316ea(); // Function GameplayAbilities.AbilitySystemComponent.*f6f4a316ea // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68c7060
	int32 *10def706d2(); // Function GameplayAbilities.AbilitySystemComponent.*10def706d2 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68c7edc
	struct FVector_NetQuantize100 *91a80aaab9(); // Function GameplayAbilities.AbilitySystemComponent.*91a80aaab9 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68c73dc
	struct F*7dd822a454 *51e2e1308c(); // Function GameplayAbilities.AbilitySystemComponent.*51e2e1308c // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68bff68
	struct FName *a397be7946(); // Function GameplayAbilities.AbilitySystemComponent.*a397be7946 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68c6a74
	struct F*16a3c4107c *d09abc51e0(); // Function GameplayAbilities.AbilitySystemComponent.*d09abc51e0 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c2f1c
	struct F*7dd822a454 *e621f1f576(); // Function GameplayAbilities.AbilitySystemComponent.*e621f1f576 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68c7ae0
	struct F*840e447bec *a5c5a9013a(); // Function GameplayAbilities.AbilitySystemComponent.*a5c5a9013a // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68be9e4
	int32 *86c8aad118(); // Function GameplayAbilities.AbilitySystemComponent.*86c8aad118 // Final|Native|Public|BlueprintCallable // @ game+0x68c5f48
	float *e9ca9280e8(); // Function GameplayAbilities.AbilitySystemComponent.*e9ca9280e8 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68c6c34
	void *18c085fde3(); // Function GameplayAbilities.AbilitySystemComponent.*18c085fde3 // Native|Public|BlueprintCallable // @ game+0xbb2944
	struct F*6f1c5535b6 NetMulticast_InvokeGameplayCueExecuted_WithParams(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // Net|Native|Event|NetMulticast|Public // @ game+0x68c403c
	struct F*1bf833ec5a *1bf833ec5a(); // Function GameplayAbilities.AbilitySystemComponent.*1bf833ec5a // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68c66c0
	struct UDataTable* *13e8e26b5f(); // Function GameplayAbilities.AbilitySystemComponent.*13e8e26b5f // Final|Native|Public|BlueprintCallable // @ game+0x68c2bc8
	bool *53b4e40743(); // Function GameplayAbilities.AbilitySystemComponent.*53b4e40743 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c1fe4
	struct F*2c0bbebf0c *10bf386517(); // Function GameplayAbilities.AbilitySystemComponent.*10bf386517 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68c67f0
	int32 *5e2bc5850e(); // Function GameplayAbilities.AbilitySystemComponent.*5e2bc5850e // Final|Native|Public|BlueprintCallable // @ game+0x68c603c
	int32 *6cf1385ba1(); // Function GameplayAbilities.AbilitySystemComponent.*6cf1385ba1 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x68c0460
	struct F*c4e5556a43 *c4a2be8b92(); // Function GameplayAbilities.AbilitySystemComponent.*c4a2be8b92 // Net|Native|Event|NetMulticast|Public // @ game+0x68c3d38
	struct F*2c0bbebf0c *8cbf19dc63(); // Function GameplayAbilities.AbilitySystemComponent.*8cbf19dc63 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68c0220
	struct F*1e33a082d1 *4a464054a1(); // Function GameplayAbilities.AbilitySystemComponent.*4a464054a1 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x68c7110
	int16 *3818ff27f6(); // Function GameplayAbilities.AbilitySystemComponent.*3818ff27f6 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68bfe88
	struct TArray<struct F*840e447bec> *535f4f2bf8(); // Function GameplayAbilities.AbilitySystemComponent.*535f4f2bf8 // Final|Native|Public|HasOutParms|BlueprintCallable|Const // @ game+0x68c1614
	struct F*7dd822a454 *8405312714(); // Function GameplayAbilities.AbilitySystemComponent.*8405312714 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x68c6d48
	struct F*1e33a082d1 *135df5a25f(); // Function GameplayAbilities.AbilitySystemComponent.*135df5a25f // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x68c06c0
	struct F*c4e5556a43 MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c2d38
	struct F*c4e5556a43 *73eb6b199c(); // Function GameplayAbilities.AbilitySystemComponent.*73eb6b199c // Net|Native|Event|NetMulticast|Public // @ game+0x68c36f8
};

// Class GameplayAbilities.AbilityTask
// Size: 0x88 (Inherited: 0x70)
struct UAbilityTask : UGameplayTask {
	struct UGameplayAbility* Ability; // 0x70(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class GameplayAbilities.AttributeSet
// Size: 0x38 (Inherited: 0x30)
struct UAttributeSet : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class GameplayAbilities.*78d72ddf34
// Size: 0x40 (Inherited: 0x30)
struct U*78d72ddf34 : UObject {
	struct TArray<struct F*62d8b8df42> RelevantAttributesToCapture; // 0x30(0x10)
};

// Class GameplayAbilities.*c9860ab83e
// Size: 0x48 (Inherited: 0x40)
struct U*c9860ab83e : U*78d72ddf34 {
	bool bRequiresPassedInTags; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	struct F*f8533bba30 Execute(); // Function GameplayAbilities.*c9860ab83e.Execute // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x68c0e4c
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x580 (Inherited: 0x30)
struct UGameplayAbility : UObject {
	char pad_30[0x240]; // 0x30(0x240)
	struct FGameplayTagContainer *0876b6b837; // 0x270(0x20)
	bool *4692838db3; // 0x290(0x01)
	bool *6828a5e4e6; // 0x291(0x01)
	char pad_292[0x4]; // 0x292(0x04)
	enum class *89526f7527 *4c295243b5; // 0x296(0x01)
	enum class *3af1ba49c3 *d6ca1ad2fd; // 0x297(0x01)
	bool *f41ffa15d8; // 0x298(0x01)
	bool *cef750f31f; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct F*2c0bbebf0c CurrentActivationInfo; // 0x2a0(0x20)
	struct F*a8e05f09d3 CurrentEventData; // 0x2c0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy *0747ad4d04; // 0x370(0x01)
	enum class EGameplayAbilityNetSecurityPolicy *544c7f2eea; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct UClass* *2dcf98957a; // 0x378(0x08)
	struct TArray<struct F*51ee0612c7> *395992b417; // 0x380(0x10)
	struct UClass* *682c27f79b; // 0x390(0x08)
	struct FGameplayTagContainer *5049477be0; // 0x398(0x20)
	struct FGameplayTagContainer *e1dfa211ee; // 0x3b8(0x20)
	struct FGameplayTagContainer *d9887bf53d; // 0x3d8(0x20)
	struct FGameplayTagContainer *e2b9ecda33; // 0x3f8(0x20)
	struct FGameplayTagContainer *25c8b6b841; // 0x418(0x20)
	struct FGameplayTagContainer *81dfa7aa8e; // 0x438(0x20)
	struct FGameplayTagContainer *2dc396c792; // 0x458(0x20)
	struct FGameplayTagContainer *bfa0dca858; // 0x478(0x20)
	struct FGameplayTagContainer *640d1f1391; // 0x498(0x20)
	char pad_4B8[0x20]; // 0x4b8(0x20)
	struct TArray<struct UGameplayTask*> *0810cea91c; // 0x4d8(0x10)
	char pad_4E8[0x10]; // 0x4e8(0x10)
	struct UAnimMontage* *3dfe9786c8; // 0x4f8(0x08)
	char pad_500[0x60]; // 0x500(0x60)
	bool *bdff81749e; // 0x560(0x01)
	bool *6cfab95e7a; // 0x561(0x01)
	bool *f4460978eb; // 0x562(0x01)
	bool *31735e2848; // 0x563(0x01)
	char pad_564[0x14]; // 0x564(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)

	struct FGameplayTag *ced098e04a(); // Function GameplayAbilities.GameplayAbility.*ced098e04a // Native|Protected|BlueprintCallable // @ game+0x68c2ca4
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // Event|Public|BlueprintEvent // @ game+0x1dcd78
	bool *dc670e7b22(); // Function GameplayAbilities.GameplayAbility.*dc670e7b22 // Native|Public|BlueprintCallable // @ game+0x68c2728
	int32 *703f4e317a(); // Function GameplayAbilities.GameplayAbility.*703f4e317a // Final|Native|Protected|BlueprintCallable // @ game+0x68bf608
	struct F*b7eaaf2a6d *376314e535(); // Function GameplayAbilities.GameplayAbility.*376314e535 // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x68c31a4
	void *976b40a5a2(); // Function GameplayAbilities.GameplayAbility.*976b40a5a2 // Final|Native|Public|BlueprintCallable|Const // @ game+0x68c1fd0
	struct TArray<struct F*840e447bec> *fac9d392d5(); // Function GameplayAbilities.GameplayAbility.*fac9d392d5 // Final|Native|Protected|BlueprintCallable // @ game+0x68c24b8
	bool *83ec0eab60(); // Function GameplayAbilities.GameplayAbility.*83ec0eab60 // Native|Public|BlueprintCallable // @ game+0x68c2750
	void *c50cad65f0(); // Function GameplayAbilities.GameplayAbility.*c50cad65f0 // Final|Native|Public|BlueprintCallable // @ game+0x68c2690
	int32 GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c14b0
	struct F*b7eaaf2a6d *0525e8ce0b(); // Function GameplayAbilities.GameplayAbility.*0525e8ce0b // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x68c3114
	struct AActor* *010ce73774(); // Function GameplayAbilities.GameplayAbility.*010ce73774 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c18ec
	struct FName *9ee5d121e3(); // Function GameplayAbilities.GameplayAbility.*9ee5d121e3 // Final|Native|Protected|BlueprintCallable // @ game+0x68c334c
	struct F*c4e5556a43 *4521d18101(); // Function GameplayAbilities.GameplayAbility.*4521d18101 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c1910
	struct F*a8e05f09d3 *5d54e68fbc(); // Function GameplayAbilities.GameplayAbility.*5d54e68fbc // Native|Protected|BlueprintCallable // @ game+0x68c6578
	void *ec10983902(); // Function GameplayAbilities.GameplayAbility.*ec10983902 // Native|Public|BlueprintCallable // @ game+0x68c643c
	struct FName *e8c7fdf8c7(); // Function GameplayAbilities.GameplayAbility.*e8c7fdf8c7 // Final|Native|Protected|BlueprintCallable // @ game+0x68c0dbc
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // Event|Protected|BlueprintEvent // @ game+0x1dcd78
	int32 *ec9b32545e(); // Function GameplayAbilities.GameplayAbility.*ec9b32545e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x68c14d4
	void *bcd1bbc8be(); // Function GameplayAbilities.GameplayAbility.*bcd1bbc8be // Native|Protected|BlueprintCallable // @ game+0x68c2914
	int32 *e21b25cb80(); // Function GameplayAbilities.GameplayAbility.*e21b25cb80 // Final|Native|Protected|BlueprintCallable // @ game+0x68bf3a0
	struct TArray<struct F*840e447bec> *12c42d6476(); // Function GameplayAbilities.GameplayAbility.*12c42d6476 // Final|Native|Protected|BlueprintCallable // @ game+0x68bf184
	bool *38634f5666(); // Function GameplayAbilities.GameplayAbility.*38634f5666 // Final|Native|Public|BlueprintCallable|Const // @ game+0x68c2bac
	struct F*6f1c5535b6 *4de64a089b(); // Function GameplayAbilities.GameplayAbility.*4de64a089b // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x68c2a7c
	bool *bdf283b347(); // Function GameplayAbilities.GameplayAbility.*bdf283b347 // Native|Public|BlueprintCallable // @ game+0x68c2778
	struct FName *a73e63d488(); // Function GameplayAbilities.GameplayAbility.*a73e63d488 // Final|Native|Protected|BlueprintCallable // @ game+0x68bfdf8
	bool *ce82870c08(); // Function GameplayAbilities.GameplayAbility.*ce82870c08 // Native|Public|BlueprintCallable // @ game+0x68c810c
	struct F*840e447bec *17bb29e641(); // Function GameplayAbilities.GameplayAbility.*17bb29e641 // Final|Native|Protected|BlueprintCallable // @ game+0x68becb8
	struct F*c4e5556a43 *940892e14f(); // Function GameplayAbilities.GameplayAbility.*940892e14f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c1d70
	struct USkeletalMeshComponent* *8524131e98(); // Function GameplayAbilities.GameplayAbility.*8524131e98 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c1e78
	bool K2_ShouldAbilityRespondToEvent(); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // Event|Protected|BlueprintEvent|Const // @ game+0x1dcd78
	bool *3f2e057976(); // Function GameplayAbilities.GameplayAbility.*3f2e057976 // Native|Public|BlueprintCallable // @ game+0x68c2700
	struct F*2ba45c3d5e *f80080be45(); // Function GameplayAbilities.GameplayAbility.*f80080be45 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c18b8
	bool *abdc1da901(); // Function GameplayAbilities.GameplayAbility.*abdc1da901 // Final|Native|Public|BlueprintCallable|Const // @ game+0x68c2088
	int32 *08c60dd596(); // Function GameplayAbilities.GameplayAbility.*08c60dd596 // Final|Native|Protected|BlueprintCallable // @ game+0x68bf4d4
	struct F*840e447bec *a3e8accca8(); // Function GameplayAbilities.GameplayAbility.*a3e8accca8 // Final|Native|Protected|BlueprintCallable // @ game+0x68c23b4
	struct F*16a3c4107c *526121d4d5(); // Function GameplayAbilities.GameplayAbility.*526121d4d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c2dd4
	bool *303a84dea6(); // Function GameplayAbilities.GameplayAbility.*303a84dea6 // Native|Public|BlueprintCallable // @ game+0x68c81a4
	struct UObject* *906e702ac9(); // Function GameplayAbilities.GameplayAbility.*906e702ac9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c1abc
	struct AActor* *17507a2d2f(); // Function GameplayAbilities.GameplayAbility.*17507a2d2f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c1e54
	struct F*c4e5556a43 *2411a71c33(); // Function GameplayAbilities.GameplayAbility.*2411a71c33 // Native|Protected|BlueprintCallable // @ game+0x68c292c
	struct UAnimMontage* *b84654cf54(); // Function GameplayAbilities.GameplayAbility.*b84654cf54 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c1aa4
	bool *42b92a729e(); // Function GameplayAbilities.GameplayAbility.*42b92a729e // Native|Public|BlueprintCallable // @ game+0x68c286c
	struct FName *a2053a1ff1(); // Function GameplayAbilities.GameplayAbility.*a2053a1ff1 // Final|Native|Protected|BlueprintCallable // @ game+0x68c32a4
	bool K2_CanActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // Event|Protected|HasOutParms|BlueprintEvent|Const // @ game+0x1dcd78
	bool *f37d371b55(); // Function GameplayAbilities.GameplayAbility.*f37d371b55 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x68c223c
	struct UAbilitySystemComponent* *432f8b31d7(); // Function GameplayAbilities.GameplayAbility.*432f8b31d7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c15f0
	bool *5213bc6def(); // Function GameplayAbilities.GameplayAbility.*5213bc6def // Final|Native|Protected|BlueprintCallable // @ game+0x68c0754
	bool *47960a18cb(); // Function GameplayAbilities.GameplayAbility.*47960a18cb // Native|Protected|BlueprintCallable // @ game+0x68c20ac
	float *73cfdba5fc(); // Function GameplayAbilities.GameplayAbility.*73cfdba5fc // Final|Native|Protected|BlueprintCallable // @ game+0x68c3444
	bool K2_OnEndAbility(); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // Event|Protected|BlueprintEvent // @ game+0x1dcd78
	struct UObject* *fa88ec79fa(); // Function GameplayAbilities.GameplayAbility.*fa88ec79fa // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x68c1e9c
	struct F*a8e05f09d3 K2_ActivateAbilityFromEvent(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	float GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68c1a5c
	struct FName *5dcaeaa2db(); // Function GameplayAbilities.GameplayAbility.*5dcaeaa2db // Final|Native|Protected|BlueprintCallable // @ game+0x68c0d1c
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x880 (Inherited: 0x30)
struct UGameplayEffect : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EGameplayEffectDurationType *2a9919fab8; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGameplayEffectModifierMagnitude *2baedd8e13; // 0x40(0x200)
	struct FScalableFloat Period; // 0x240(0x30)
	bool bExecutePeriodicEffectOnApplication; // 0x270(0x01)
	enum class *69719bb8fb PeriodicInhibitionPolicy; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct TArray<struct F*926221328b> Modifiers; // 0x278(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x288(0x10)
	struct FScalableFloat *87000027da; // 0x298(0x30)
	struct TArray<struct UClass*> *e07b0016ad; // 0x2c8(0x10)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x2d8(0x10)
	struct TArray<struct F*d06ae42431> ConditionalGameplayEffects; // 0x2e8(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x2f8(0x10)
	bool bDenyOverflowApplication; // 0x308(0x01)
	bool bClearStackOnOverflow; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x310(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x320(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x330(0x01)
	bool *b235d08a9b; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct TArray<struct F*34e128bdaf> GameplayCues; // 0x338(0x10)
	struct UGameplayEffectUIData* UIData; // 0x348(0x08)
	struct F*fe7a20b016 InheritableGameplayEffectTags; // 0x350(0x60)
	struct F*fe7a20b016 InheritableOwnedTagsContainer; // 0x3b0(0x60)
	struct F*9d96cfa5bb OngoingTagRequirements; // 0x410(0x40)
	struct F*9d96cfa5bb ApplicationTagRequirements; // 0x450(0x40)
	struct F*9d96cfa5bb RemovalTagRequirements; // 0x490(0x40)
	struct F*fe7a20b016 RemoveGameplayEffectsWithTags; // 0x4d0(0x60)
	struct F*9d96cfa5bb GrantedApplicationImmunityTags; // 0x530(0x40)
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
// Size: 0x38 (Inherited: 0x30)
struct U*940d5b984c : U*528374bf77 {
	char pad_30[0x8]; // 0x30(0x08)

	void *4426366d2f(); // Function GameplayAbilities.*940d5b984c.*4426366d2f // Native|Public|BlueprintCallable // @ game+0xacfc40
};

// Class GameplayAbilities.*4db59a1042
// Size: 0xf8 (Inherited: 0x38)
struct U*4db59a1042 : U*940d5b984c {
	struct FMulticastDelegate OnApplied; // 0x38(0x10)
	char pad_48[0xb0]; // 0x48(0xb0)

	struct F*840e447bec OnAppliedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*4db59a1042.OnAppliedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
	struct U*4db59a1042* *bc778619b9(); // Function GameplayAbilities.*4db59a1042.*bc778619b9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6859860
};

// Class GameplayAbilities.*c6009f028d
// Size: 0x60 (Inherited: 0x38)
struct U*c6009f028d : U*940d5b984c {
	struct FMulticastDelegate EventReceived; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct F*a8e05f09d3 EventReceivedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*c6009f028d.EventReceivedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
	struct U*c6009f028d* *b18396e0d7(); // Function GameplayAbilities.*c6009f028d.*b18396e0d7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6859c18
};

// Class GameplayAbilities.*d46fb103a6
// Size: 0x58 (Inherited: 0x38)
struct U*d46fb103a6 : U*940d5b984c {
	char pad_38[0x20]; // 0x38(0x20)

	void AsyncWaitGameplayTagDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*d46fb103a6.AsyncWaitGameplayTagDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
};

// Class GameplayAbilities.*0f23ea7557
// Size: 0x68 (Inherited: 0x58)
struct U*0f23ea7557 : U*d46fb103a6 {
	struct FMulticastDelegate Added; // 0x58(0x10)

	struct U*0f23ea7557* *b0c1ab980c(); // Function GameplayAbilities.*0f23ea7557.*b0c1ab980c // Final|Native|Static|Public|BlueprintCallable // @ game+0x6859d94
};

// Class GameplayAbilities.*7ea0d84da7
// Size: 0x68 (Inherited: 0x58)
struct U*7ea0d84da7 : U*d46fb103a6 {
	struct FMulticastDelegate Removed; // 0x58(0x10)

	struct U*7ea0d84da7* *ca0eb3b1c1(); // Function GameplayAbilities.*7ea0d84da7.*ca0eb3b1c1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6859eb4
};

// Class GameplayAbilities.*12ac8b7f4c
// Size: 0x30 (Inherited: 0x30)
struct U*12ac8b7f4c : UInterface {

	void *e663248706(); // Function GameplayAbilities.*12ac8b7f4c.*e663248706 // BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6855834
	struct F*6f1c5535b6 BlueprintCustomHandler(); // Function GameplayAbilities.*12ac8b7f4c.BlueprintCustomHandler // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FVector GetOrigin(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6857714
	struct FString *d260e51d1a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d260e51d1a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6855a98
	struct F*51547d5d37 *778d87f64e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*778d87f64e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6858038
	struct FHitResult *7323da5c9a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7323da5c9a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68543e4
	float *4f1c782a36(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4f1c782a36 // Final|Native|Static|Public|BlueprintCallable // @ game+0x685758c
	struct F*16a3c4107c *f4df9f90af(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f4df9f90af // Final|Native|Static|Public|BlueprintCallable // @ game+0x6852590
	bool *213a1607e7(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*213a1607e7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6856db4
	struct F*16a3c4107c *7d9a96d86a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7d9a96d86a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6858f58
	int32 *8145f71e27(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*8145f71e27 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6855db0
	int32 *a094b5afbd(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*a094b5afbd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68560cc
	float *fc42f113a4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*fc42f113a4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6855c10
	struct FHitResult GetHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x685711c
	struct TArray<struct AActor*> *b16114453e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b16114453e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x68561d4
	int32 *32b336e912(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*32b336e912 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x68565a8
	float *f7527ddebd(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f7527ddebd // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6856ac4
	struct FVector *7bb6d2762d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7bb6d2762d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6854dc0
	struct F*16a3c4107c *659ce41812(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*659ce41812 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6852920
	bool *c87d31b96c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c87d31b96c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6857e68
	struct F*4d4358ec07 *84d7cc68c7(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*84d7cc68c7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6851ee4
	struct F*16a3c4107c *4a7c4982ac(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4a7c4982ac // Final|Native|Static|Public|BlueprintCallable // @ game+0x685272c
	struct F*16a3c4107c SetDuration(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // Final|Native|Static|Public|BlueprintCallable // @ game+0x6858dc4
	struct AActor* *03ee4ca027(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*03ee4ca027 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6855fa4
	struct FHitResult *e49bb5d1b8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e49bb5d1b8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6857200
	bool *cd6d0175cf(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*cd6d0175cf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6859418
	struct F*4d4358ec07 *de06b7b1a3(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*de06b7b1a3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6852cac
	bool *d03606bd5b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d03606bd5b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6853c60
	struct F*16a3c4107c *4b199aa3a4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4b199aa3a4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x685239c
	struct FTransform *fe467f3a3c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*fe467f3a3c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x685747c
	struct F*4d4358ec07 *5fd4662b87(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5fd4662b87 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6851ca4
	struct F*4d4358ec07 *c41fc378ae(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c41fc378ae // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6851d80
	struct F*16a3c4107c *55a1b1276a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*55a1b1276a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6859150
	struct FVector *4733c590db(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4733c590db // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x685783c
	bool *c0c0da375e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c0c0da375e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6859294
	float *6e9564183e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6e9564183e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6855384
	struct F*6f1c5535b6 MakeGameplayCueParameters(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68581c8
	bool *e7968ccc43(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e7968ccc43 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6858aa4
	struct UAbilitySystemComponent* *66d35f0c1a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*66d35f0c1a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6855a08
	float *4a2951dbca(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4a2951dbca // Final|Native|Static|Public|BlueprintCallable // @ game+0x6855e7c
	float *c5544fe22d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c5544fe22d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x68567d4
	bool *3f000cf9a8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3f000cf9a8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x68596ec
	float *1bc5a75bea(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*1bc5a75bea // Final|Native|Static|Public|BlueprintCallable // @ game+0x6855f10
	struct UObject* *aa97c78e1b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*aa97c78e1b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6854898
	struct AActor* *37e2c64eb2(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*37e2c64eb2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6854748
	float *618257581c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*618257581c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6856c3c
	float *bd21ac74ef(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bd21ac74ef // Final|Native|Static|Public|BlueprintCallable // @ game+0x6855b7c
	struct FVector *3fda1c1be5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3fda1c1be5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6854640
	struct F*c4e5556a43 GetEffectContext(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext // Final|Native|Static|Public|BlueprintCallable // @ game+0x6856688
	bool IsValid(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6857f5c
	struct F*6f1c5535b6 *ba07238608(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ba07238608 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6855848
	bool *6406cf8cef(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6406cf8cef // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6853ef8
	bool *5fffcf97ed(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5fffcf97ed // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6854c90
	bool *2c1dac716b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2c1dac716b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6854f54
	struct AActor* *d3afbf0d89(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d3afbf0d89 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68544f0
	struct TArray<struct F*16a3c4107c> *5e8ebd60c3(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5e8ebd60c3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6856494
	bool *a9f813cf40(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*a9f813cf40 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6856f3c
	float *bb7fc08005(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bb7fc08005 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x68550e4
	struct F*16a3c4107c *c791b00b09(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c791b00b09 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6852e5c
	struct FTransform *c5276bac5c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c5276bac5c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6857980
	struct F*16a3c4107c *ea54a099da(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ea54a099da // Final|Native|Static|Public|BlueprintCallable // @ game+0x6852ab8
	struct AActor* *6d1d495651(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6d1d495651 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6854294
	struct F*4d4358ec07 *91545b53a4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*91545b53a4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6852000
	bool *660cdb66db(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*660cdb66db // Final|Native|Static|Public|BlueprintCallable // @ game+0x6854078
	bool *d64962e52a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d64962e52a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68549e8
	bool IsInstigatorLocallyControlled(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6857d74
	struct F*16a3c4107c *652dcbcaf1(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*652dcbcaf1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68588c8
	bool *c8c4bb3b9b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c8c4bb3b9b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x685958c
	float *b96472e4ef(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b96472e4ef // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x685694c
	struct F*16a3c4107c *3d5f1422ef(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3d5f1422ef // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6853a7c
	bool BreakGameplayCueParameters(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6853234
	struct F*16a3c4107c *65ede5345f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*65ede5345f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6852200
	int32 *dc002f7284(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*dc002f7284 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6855cf0
	struct F*4d4358ec07 *5640c7ed18(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5640c7ed18 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6855678
	struct FTransform *e6eeea79aa(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e6eeea79aa // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6857b1c
	struct AActor* GetInstigatorActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68573a8
	bool HasHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6857c70
	struct TArray<struct AActor*> *7cd2697420(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7cd2697420 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6856360
	struct F*16a3c4107c *b26c0a4e27(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b26c0a4e27 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6853048
	bool *1baf3ff511(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*1baf3ff511 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6854b3c
	struct F*a8e05f09d3 SendGameplayEventToActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x6858c34
};

// Class GameplayAbilities.*cd0a64ceaf
// Size: 0x30 (Inherited: 0x30)
struct U*cd0a64ceaf : UInterface {
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x4d8 (Inherited: 0x4d8)
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x340 (Inherited: 0x30)
struct UAbilitySystemGlobals : UObject {
	struct FStringClassReference AbilitySystemGlobalsClassName; // 0x30(0x10)
	char pad_40[0x80]; // 0x40(0x80)
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

	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // Exec|Native|Public // @ game+0x57d8078
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // Exec|Native|Public // @ game+0x57d8060
	struct FString ServerActivatePlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility // Final|Exec|Native|Public // @ game+0x574f208
	struct FString ServerEndPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility // Final|Exec|Native|Public // @ game+0x574f208
	struct FString ServerCancelPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility // Final|Exec|Native|Public // @ game+0x574f208
	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities // Final|Exec|Native|Public // @ game+0xb8a940
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x498 (Inherited: 0x478)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_478[0x18]; // 0x478(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x490(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName *3cdde9d462; // 0x88(0x08)
	enum class *8b74868674 *4c81db8270; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector *1beb0eb7f6; // 0x94(0x0c)
	float *ed0654506e; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UCharacterMovementComponent* MovementComponent; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0xf8 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FVector WorldDirection; // 0xd0(0x0c)
	float Strength; // 0xdc(0x04)
	float Duration; // 0xe0(0x04)
	bool *5b0915d5ab; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UCurveFloat* *5b38dc5497; // 0xe8(0x08)
	bool *7d490c23ae; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	struct UAbilityTask_ApplyRootMotionConstantForce* *7e1b9fb4e1(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.*7e1b9fb4e1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68bcb90
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x118 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FMulticastDelegate OnLanded; // 0xd0(0x10)
	struct FRotator Rotation; // 0xe0(0x0c)
	float Distance; // 0xec(0x04)
	float Height; // 0xf0(0x04)
	float Duration; // 0xf4(0x04)
	float *f5f0ce21d4; // 0xf8(0x04)
	bool *f0bcd8ff13; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct U*226eb62c2c* *563ada7118; // 0x100(0x08)
	struct UCurveFloat* *722a0c8e77; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	struct UAbilityTask_ApplyRootMotionJumpForce* *0682616198(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.*0682616198 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68bcf60
	struct FHitResult OnLandedCallback(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // Final|Native|Public|HasOutParms // @ game+0x68c5460
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // Final|Native|Public|BlueprintCallable // @ game+0x68c1088
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x138 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinished; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	struct AActor* TargetActor; // 0xf0(0x08)
	struct FVector *16c1c30ed3; // 0xf8(0x0c)
	enum class *bf2661327b *e4d53b81bd; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float Duration; // 0x108(0x04)
	bool *0204b28c7c; // 0x10c(0x01)
	bool *0dde23efa9; // 0x10d(0x01)
	enum class EMovementMode *a0e056ee89; // 0x10e(0x01)
	bool *a2be20200e; // 0x10f(0x01)
	struct U*226eb62c2c* *563ada7118; // 0x110(0x08)
	struct UCurveFloat* *722a0c8e77; // 0x118(0x08)
	struct UCurveFloat* *a2a3e1aef2; // 0x120(0x08)
	struct UCurveFloat* *6d984e3744; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)

	struct AActor* *4cd6ddab12(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*4cd6ddab12 // Final|Native|Public // @ game+0x68c5b50
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* *46d13a10a7(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*46d13a10a7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68bdd54
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // Final|Native|Protected // @ game+0x68c5b18
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* *6aef56a632(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*6aef56a632 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68bd3d4
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x110 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnTimedOut; // 0xc0(0x10)
	struct FMulticastDelegate OnTimedOutAndDestinationReached; // 0xd0(0x10)
	struct FVector StartLocation; // 0xe0(0x0c)
	struct FVector TargetLocation; // 0xec(0x0c)
	float Duration; // 0xf8(0x04)
	bool *0dde23efa9; // 0xfc(0x01)
	enum class EMovementMode *a0e056ee89; // 0xfd(0x01)
	bool *a2be20200e; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	struct U*226eb62c2c* *563ada7118; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	struct UAbilityTask_ApplyRootMotionMoveToForce* *5d438c861a(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.*5d438c861a // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68bd988
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x118 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FVector Location; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct AActor* *fd564c3007; // 0xe0(0x08)
	float Strength; // 0xe8(0x04)
	float Duration; // 0xec(0x04)
	float Radius; // 0xf0(0x04)
	bool *14653615d0; // 0xf4(0x01)
	bool *5b0915d5ab; // 0xf5(0x01)
	bool *4c98d45509; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct UCurveFloat* *b78e36b437; // 0xf8(0x08)
	struct UCurveFloat* *5b38dc5497; // 0x100(0x08)
	bool *238c940475; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FRotator *1a7f6adb6c; // 0x10c(0x0c)

	struct UAbilityTask_ApplyRootMotionRadialForce* *cab1c6b77d(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.*cab1c6b77d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68be3fc
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastDelegate OnTargetLocationReached; // 0x88(0x10)
	char pad_98[0x4]; // 0x98(0x04)
	struct FVector StartLocation; // 0x9c(0x0c)
	struct FVector TargetLocation; // 0xa8(0x0c)
	float *3b82efc525; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UCurveFloat* *c540d14e0d; // 0xc0(0x08)
	struct U*226eb62c2c* *07bd84c981; // 0xc8(0x08)

	struct UAbilityTask_MoveToLocation* *9e88fc7518(); // Function GameplayAbilities.AbilityTask_MoveToLocation.*9e88fc7518 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68c34dc
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastDelegate OnSync; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_NetworkSyncPoint* *77447d9e49(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*77447d9e49 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68cbeec
	void *a7b9b66946(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*a7b9b66946 // Final|Native|Public // @ game+0x68c5b3c
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x180 (Inherited: 0x88)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastDelegate OnCompleted; // 0x88(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x98(0x10)
	struct FMulticastDelegate OnInterrupted; // 0xa8(0x10)
	struct FMulticastDelegate OnCancelled; // 0xb8(0x10)
	char pad_C8[0x90]; // 0xc8(0x90)
	struct UAnimMontage* *46bdc0bbd4; // 0x158(0x08)
	float Rate; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FName *1febf87372; // 0x168(0x08)
	float *2cfd1e1c0a; // 0x170(0x04)
	float *bb8343089c; // 0x174(0x04)
	bool *cccd1b97b0; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)

	bool OnMontageEnded(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // Final|Native|Public // @ game+0x68c5640
	void *9eba99aa24(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*9eba99aa24 // Final|Native|Public // @ game+0x68c5720
	struct UAbilityTask_PlayMontageAndWait* *70187ccbbf(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*70187ccbbf // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c0834
	bool *71583fb02b(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*71583fb02b // Final|Native|Public // @ game+0x68c5560
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastDelegate OnPerformAction; // 0x88(0x10)
	struct FMulticastDelegate OnFinished; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_Repeat* RepeatAction(); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c6454
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastDelegate SUCCESS; // 0x88(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x98(0x10)
	char pad_A8[0x28]; // 0xa8(0x28)

	struct AActor* FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x68c109c
	bool BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68bf70c
	struct UAbilityTask_SpawnActor* SpawnActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c82d4
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastDelegate OnStateEnded; // 0x88(0x10)
	struct FMulticastDelegate OnStateInterrupted; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_StartAbilityState* *ea087dace1(); // Function GameplayAbilities.AbilityTask_StartAbilityState.*ea087dace1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c8488
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x410 (Inherited: 0x3f0)
struct AGameplayAbilityWorldReticle : AActor {
	struct F*bbcfefc691 Parameters; // 0x3f0(0x0c)
	bool bFaceOwnerFlat; // 0x3fc(0x01)
	bool bSnapToTargetedActor; // 0x3fd(0x01)
	bool bIsTargetValid; // 0x3fe(0x01)
	bool bIsTargetAnActor; // 0x3ff(0x01)
	struct APlayerController* MasterPC; // 0x400(0x08)
	struct AActor* TargetingActor; // 0x408(0x08)

	bool OnTargetingAnActor(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // Event|Public|BlueprintEvent // @ game+0x1dcd78
	bool OnValidTargetChanged(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // Event|Public|BlueprintEvent // @ game+0x1dcd78
	float SetReticleMaterialParamFloat(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct FVector SetReticleMaterialParamVector(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // Event|Public|HasDefaults|BlueprintEvent // @ game+0x1dcd78
	bool *22921e950a(); // Function GameplayAbilities.GameplayAbilityWorldReticle.*22921e950a // Final|Native|Public|BlueprintCallable // @ game+0x68c0ff4
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // Event|Public|BlueprintEvent // @ game+0x1dcd78
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x5c0 (Inherited: 0x3f0)
struct AGameplayAbilityTargetActor : AActor {
	bool *2cd1bfed14; // 0x3f0(0x01)
	char pad_3F1[0xf]; // 0x3f1(0x0f)
	struct F*b7eaaf2a6d StartLocation; // 0x400(0x70)
	char pad_470[0xe0]; // 0x470(0xe0)
	struct APlayerController* MasterPC; // 0x550(0x08)
	struct UGameplayAbility* OwningAbility; // 0x558(0x08)
	bool bDestroyOnConfirmation; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct AActor* SourceActor; // 0x568(0x08)
	struct F*bbcfefc691 ReticleParams; // 0x570(0x0c)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct UClass* ReticleClass; // 0x580(0x08)
	struct F*51547d5d37 Filter; // 0x588(0x10)
	bool bDebug; // 0x598(0x01)
	char pad_599[0x17]; // 0x599(0x17)
	struct UAbilitySystemComponent* *41a49c4a98; // 0x5b0(0x08)
	char pad_5B8[0x8]; // 0x5b8(0x08)

	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // Native|Public // @ game+0x57be690
	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // Native|Public // @ game+0x58036e8
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastDelegate TimeElapsed; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)

	bool BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68bf8ec
	struct UAbilityTask_VisualizeTargeting* *15a66bb84b(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*15a66bb84b // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c8b28
	struct AGameplayAbilityTargetActor* FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x68c1220
	struct UAbilityTask_VisualizeTargeting* *3cdf14570d(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*3cdf14570d // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c89b8
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x140 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastDelegate OnActivate; // 0x88(0x10)
	char pad_98[0xa8]; // 0x98(0xa8)

	struct UAbilityTask_WaitAbilityActivate* *aebd8d80f8(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*aebd8d80f8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c9134
	struct UAbilityTask_WaitAbilityActivate* *205b5a6754(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*205b5a6754 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c8f4c
	struct UAbilityTask_WaitAbilityActivate* *a07301361e(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*a07301361e // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c9338
	struct UGameplayAbility* *fd5543e534(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*fd5543e534 // Final|Native|Public // @ game+0x68c47fc
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0x100 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastDelegate OnCommit; // 0x88(0x10)
	char pad_98[0x68]; // 0x98(0x68)

	struct UAbilityTask_WaitAbilityCommit* *f0970f8e93(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*f0970f8e93 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c96dc
	struct UAbilityTask_WaitAbilityCommit* *c7cf9c51e4(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*c7cf9c51e4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c9548
	struct UGameplayAbility* *a473687766(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*a473687766 // Final|Native|Public // @ game+0x68c488c
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xe8 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x48]; // 0x98(0x48)
	struct UAbilitySystemComponent* *c0db23433a; // 0xe0(0x08)

	struct UAbilityTask_WaitAttributeChange* *80bf8ffb7b(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*80bf8ffb7b // Final|Native|Static|Public|BlueprintCallable // @ game+0x68ca06c
	struct UAbilityTask_WaitAttributeChange* *a5068e2924(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*a5068e2924 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c9898
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x118 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x78]; // 0x98(0x78)
	struct UAbilitySystemComponent* *c0db23433a; // 0x110(0x08)

	struct UAbilityTask_WaitAttributeChangeRatioThreshold* *e476f726e6(); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.*e476f726e6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c9afc
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xe0 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x40]; // 0x98(0x40)
	struct UAbilitySystemComponent* *c0db23433a; // 0xd8(0x08)

	struct UAbilityTask_WaitAttributeChangeThreshold* *589b91c3ea(); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.*589b91c3ea // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c9e08
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastDelegate OnCancel; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_WaitCancel* *11f30597f1(); // Function GameplayAbilities.AbilityTask_WaitCancel.*11f30597f1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c8c98
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x68c5524
	void *b82f33e2d5(); // Function GameplayAbilities.AbilityTask_WaitCancel.*b82f33e2d5 // Final|Native|Public // @ game+0x68c4d1c
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitConfirm* *c781676ed1(); // Function GameplayAbilities.AbilityTask_WaitConfirm.*c781676ed1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c8d2c
	struct UGameplayAbility* OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // Final|Native|Public // @ game+0x68c4d44
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	struct FMulticastDelegate OnCancel; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)

	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // Final|Native|Public // @ game+0x68c554c
	void *b82f33e2d5(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*b82f33e2d5 // Final|Native|Public // @ game+0x68c4d30
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // Final|Native|Public // @ game+0x68c4dd4
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x68c5538
	struct UAbilityTask_WaitConfirmCancel* *eb7a5a68e3(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*eb7a5a68e3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c8dc0
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastDelegate OnFinish; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_WaitDelay* WaitDelay(); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c8e54
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1c0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_88[0x128]; // 0x88(0x128)
	struct UAbilitySystemComponent* *c0db23433a; // 0x1b0(0x08)
	char pad_1B8[0x8]; // 0x1b8(0x08)

	struct F*840e447bec *de9bdf53c2(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.*de9bdf53c2 // Final|Native|Public|HasOutParms // @ game+0x68c4b7c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Self* *7104fde5fd(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*7104fde5fd // Final|Native|Static|Public|BlueprintCallable // @ game+0x68ca9f8
	struct UAbilityTask_WaitGameplayEffectApplied_Self* *b37836a1ae(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*b37836a1ae // Final|Native|Static|Public|BlueprintCallable // @ game+0x68ca5f4
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Target* *c1fa66c3e2(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*c1fa66c3e2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68cb1a8
	struct UAbilityTask_WaitGameplayEffectApplied_Target* *a062262c53(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*a062262c53 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68cada4
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x130 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastDelegate bLocked; // 0x88(0x10)
	char pad_98[0x88]; // 0x98(0x88)
	struct UAbilitySystemComponent* *c0db23433a; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* *ee49827245(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.*ee49827245 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68cb554
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastDelegate OnRemoved; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)

	struct UAbilityTask_WaitGameplayEffectRemoved* *41b219b2f4(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*41b219b2f4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68ca380
	struct F*de9d9eb166 *d8c8a42980(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*d8c8a42980 // Final|Native|Public|HasOutParms // @ game+0x68c5048
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_WaitGameplayEffectStackChange* *3a9df13381(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*3a9df13381 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68ca470
	int32 *759bf7fb7c(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*759bf7fb7c // Final|Native|Public // @ game+0x68c5120
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastDelegate EventReceived; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
	struct UAbilitySystemComponent* *66c4165baa; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)

	struct UAbilityTask_WaitGameplayEvent* *e489928761(); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.*e489928761 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68cb7e4
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_88[0x10]; // 0x88(0x10)
	struct UAbilitySystemComponent* *66c4165baa; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	int32 *f862e0c51e(); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.*f862e0c51e // Native|Public // @ game+0x68c13d0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Added; // 0xb0(0x10)

	struct UAbilityTask_WaitGameplayTagAdded* *3104265db5(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.*3104265db5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68cb9ec
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Removed; // 0xb0(0x10)

	struct UAbilityTask_WaitGameplayTagRemoved* *207279a8d0(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.*207279a8d0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68cbb84
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastDelegate OnPress; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitInputPress* *c0a63d78f2(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*c0a63d78f2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68cbd1c
	void *972f1105bb(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*972f1105bb // Final|Native|Public // @ game+0x68c5864
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastDelegate OnRelease; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitInputRelease* *9d38ca445e(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*9d38ca445e // Final|Native|Static|Public|BlueprintCallable // @ game+0x68cbe04
	void *72becfe7f3(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*72becfe7f3 // Final|Native|Public // @ game+0x68c5878
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitMovementModeChange* *70e930acd1(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.*70e930acd1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68c0af4
	bool OnMovementModeChange(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // Final|Native|Public // @ game+0x68c5734
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x98 (Inherited: 0x88)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastDelegate OnOverlap; // 0x88(0x10)

	struct UAbilityTask_WaitOverlap* *1ba6cccc2b(); // Function GameplayAbilities.AbilityTask_WaitOverlap.*1ba6cccc2b // Final|Native|Static|Public|BlueprintCallable // @ game+0x68ca560
	struct FHitResult OnHitCallback(); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // Final|Native|Public|HasOutParms|HasDefaults // @ game+0x68c5250
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastDelegate ValidData; // 0x88(0x10)
	struct FMulticastDelegate Cancelled; // 0x98(0x10)
	struct UClass* TargetClass; // 0xa8(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)

	void *777e7bdb8d(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*777e7bdb8d // Final|Native|Public // @ game+0x68c5f34
	struct FGameplayTag *32df8052c7(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*32df8052c7 // Final|Native|Public|HasOutParms // @ game+0x68c5e00
	struct UAbilityTask_WaitTargetData* *f3e5336e65(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*f3e5336e65 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68cbfd0
	struct F*4d4358ec07 *db3b6fd7ac(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*db3b6fd7ac // Final|Native|Public|HasOutParms // @ game+0x68c5c40
	struct AGameplayAbilityTargetActor* FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x68c12f8
	bool BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68bfa28
	struct UAbilityTask_WaitTargetData* *647afee022(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*647afee022 // Final|Native|Static|Public|BlueprintCallable // @ game+0x68cc154
	struct F*4d4358ec07 *93eca56a61(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*93eca56a61 // Final|Native|Public|HasOutParms // @ game+0x68c5d20
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastDelegate OnVelocityChage; // 0x88(0x10)
	struct UMovementComponent* *5173563719; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	struct UAbilityTask_WaitVelocityChange* *579dd1d94b(); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.*579dd1d94b // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x68c0bdc
};

// Class GameplayAbilities.*528ca6753e
// Size: 0x78 (Inherited: 0x38)
struct U*528ca6753e : UAttributeSet {
	float MaxHealth; // 0x38(0x04)
	float Health; // 0x3c(0x04)
	float Mana; // 0x40(0x04)
	float MaxMana; // 0x44(0x04)
	float Damage; // 0x48(0x04)
	float SpellDamage; // 0x4c(0x04)
	float PhysicalDamage; // 0x50(0x04)
	float CritChance; // 0x54(0x04)
	float CritMultiplier; // 0x58(0x04)
	float ArmorDamageReduction; // 0x5c(0x04)
	float DodgeChance; // 0x60(0x04)
	float LifeSteal; // 0x64(0x04)
	float Strength; // 0x68(0x04)
	float StackingAttribute1; // 0x6c(0x04)
	float StackingAttribute2; // 0x70(0x04)
	float NoStackAttribute; // 0x74(0x04)
};

// Class GameplayAbilities.*10e3ea6e78
// Size: 0x580 (Inherited: 0x580)
struct U*10e3ea6e78 : UGameplayAbility {
};

// Class GameplayAbilities.*0bb2421c9b
// Size: 0x5c0 (Inherited: 0x580)
struct U*0bb2421c9b : UGameplayAbility {
	struct UAnimMontage* *46bdc0bbd4; // 0x580(0x08)
	float PlayRate; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FName SectionName; // 0x590(0x08)
	struct TArray<struct UClass*> *850bd3bfed; // 0x598(0x10)
	struct TArray<struct UGameplayEffect*> *70d1f4a07f; // 0x5a8(0x10)
	char pad_5B8[0x8]; // 0x5b8(0x08)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x48 (Inherited: 0x38)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct F*2c22e7afe6> Abilities; // 0x38(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x5c0 (Inherited: 0x5c0)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x5b8(0x04)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x5e0 (Inherited: 0x5c0)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x5b8(0x04)
	struct FCollisionProfileName TraceProfile; // 0x5c0(0x08)
	bool bTraceAffectsAimPitch; // 0x5c8(0x01)
	char pad_5CD[0x13]; // 0x5cd(0x13)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x600 (Inherited: 0x5e0)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x5d8(0x04)
	float CollisionHeight; // 0x5dc(0x04)
	char pad_5E8[0x18]; // 0x5e8(0x18)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x610 (Inherited: 0x600)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	struct UClass* PlacedActorClass; // 0x5f8(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x600(0x08)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x5e0 (Inherited: 0x5e0)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x428 (Inherited: 0x410)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x410(0x08)
	struct TArray<struct UActorComponent*> *d4c00db9c3; // 0x418(0x10)
};

// Class GameplayAbilities.*04aed17bec
// Size: 0x30 (Inherited: 0x30)
struct U*04aed17bec : UObject {
};

// Class GameplayAbilities.*58a5338327
// Size: 0x30 (Inherited: 0x30)
struct U*58a5338327 : U*04aed17bec {
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x470 (Inherited: 0x38)
struct UGameplayCueManager : UDataAsset {
	char pad_38[0x78]; // 0x38(0x78)
	struct F*c1295f93c9 *6411fd6ecf; // 0xb0(0xb0)
	struct F*c1295f93c9 *b274cbb328; // 0x160(0xb0)
	char pad_210[0x1a0]; // 0x210(0x1a0)
	struct TArray<struct UClass*> *d923a02e2c; // 0x3b0(0x10)
	struct TArray<struct UClass*> *9fae9d8257; // 0x3c0(0x10)
	struct TArray<struct F*a9de5b11af> *1a55b977c8; // 0x3d0(0x10)
	int32 *fce8785055; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct F*d75ac321f1> *14dfb599fe; // 0x3e8(0x10)
	char pad_3F8[0x78]; // 0x3f8(0x78)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x450 (Inherited: 0x3f0)
struct AGameplayCueNotify_Actor : AActor {
	bool *59af2bddb0; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float *9d1900a1b5; // 0x3f4(0x04)
	bool *57145c05a2; // 0x3f8(0x01)
	bool *0f2ac599b6; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct FGameplayTag GameplayCueTag; // 0x400(0x08)
	struct FName GameplayCueName; // 0x408(0x08)
	bool *f289e7a87a; // 0x410(0x01)
	bool *faaa77e389; // 0x411(0x01)
	bool *e0d627359c; // 0x412(0x01)
	bool *0b92511631; // 0x413(0x01)
	bool *09ee7cfed4; // 0x414(0x01)
	bool *d25dc8bbe4; // 0x415(0x01)
	char pad_416[0x2]; // 0x416(0x02)
	int32 *3752d1a610; // 0x418(0x04)
	char pad_41C[0x34]; // 0x41c(0x34)

	void *e44de8aaf9(); // Function GameplayAbilities.GameplayCueNotify_Actor.*e44de8aaf9 // Native|Public|BlueprintCallable // @ game+0x8a611c
	struct AActor* OnOwnerDestroyed(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // Native|Public // @ game+0x572852c
	struct F*6f1c5535b6 K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1dcd78
	bool OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x68c4de8
	bool OnActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x68c491c
	bool WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x68cc2d8
	bool OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x68c588c
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x48 (Inherited: 0x30)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x30(0x08)
	struct FName GameplayCueName; // 0x38(0x08)
	bool *faaa77e389; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	bool OnActive(); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x68c4a4c
	bool OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x68c4f18
	struct F*6f1c5535b6 K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1dcd78
	bool WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x68cc408
	bool OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x68c59bc
};

// Class GameplayAbilities.*17fed644c0
// Size: 0x58 (Inherited: 0x48)
struct U*17fed644c0 : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x48(0x08)
	struct UParticleSystem* ParticleSystem; // 0x50(0x08)
};

// Class GameplayAbilities.*3bb88e8ef7
// Size: 0x98 (Inherited: 0x38)
struct U*3bb88e8ef7 : UDataAsset {
	struct TArray<struct F*d94b97e6d8> *dc8ecfe352; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
};

// Class GameplayAbilities.*9f0a5a82b7
// Size: 0x880 (Inherited: 0x880)
struct U*9f0a5a82b7 : UGameplayEffect {
};

// Class GameplayAbilities.*b97394c78c
// Size: 0x48 (Inherited: 0x40)
struct U*b97394c78c : U*78d72ddf34 {
	bool *a08380e9ac; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	float CalculateBaseMagnitude(); // Function GameplayAbilities.*b97394c78c.CalculateBaseMagnitude // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x68bfb64
};

// Class GameplayAbilities.*5bf3277602
// Size: 0x30 (Inherited: 0x30)
struct U*5bf3277602 : UObject {

	bool CanApplyGameplayEffect(); // Function GameplayAbilities.*5bf3277602.CanApplyGameplayEffect // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x68bfc5c
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x30 (Inherited: 0x30)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.*3f1d6341ca
// Size: 0x48 (Inherited: 0x30)
struct U*3f1d6341ca : UGameplayEffectUIData {
	struct FText Description; // 0x30(0x18)
};

// Class GameplayAbilities.*5971f8d28f
// Size: 0x220 (Inherited: 0x38)
struct U*5971f8d28f : UDataAsset {
	struct TArray<struct F*f6648c1607> Entries; // 0x38(0x10)
	char pad_48[0x1d8]; // 0x48(0x1d8)

	int32 *706a0bb404(); // Function GameplayAbilities.*5971f8d28f.*706a0bb404 // Final|Native|Protected // @ game+0x68c85ac
};

// Class GameplayAbilities.*48a2119993
// Size: 0x30 (Inherited: 0x30)
struct U*48a2119993 : UInterface {
};


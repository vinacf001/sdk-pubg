// Class GameplayAbilities.*abf1c3d4f0
// Size: 0x30 (Inherited: 0x30)
struct U*abf1c3d4f0 : UInterface {
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1860 (Inherited: 0x270)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_270[0x8]; // 0x270(0x08)
	char *68e17f206d : 1; // 0x278(0x01)
	char pad_278_1 : 7; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct TArray<struct F*09a92992df> *3142e14f40; // 0x280(0x10)
	struct FName AffectedAnimInstanceTag; // 0x290(0x08)
	char pad_298[0x5c8]; // 0x298(0x5c8)
	float *10070bc349; // 0x860(0x04)
	float *4aee682f63; // 0x864(0x04)
	char pad_868[0x80]; // 0x868(0x80)
	bool *3712a3e3bc; // 0x8e8(0x01)
	bool *b23bfee9c0; // 0x8e9(0x01)
	bool *d92d9c1981; // 0x8ea(0x01)
	bool *92b4acb71e; // 0x8eb(0x01)
	char pad_8EC[0x4]; // 0x8ec(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> *c67a524687; // 0x8f0(0x10)
	char pad_900[0x38]; // 0x900(0x38)
	struct F*9cb999b8bb ActivatableAbilities; // 0x938(0xc8)
	char pad_A00[0x30]; // 0xa00(0x30)
	struct TArray<struct UGameplayAbility*> *80690422d3; // 0xa30(0x10)
	char pad_A40[0x20c]; // 0xa40(0x20c)
	bool *8e2e7cf750; // 0xc4c(0x01)
	bool *d89a5db9ea; // 0xc4d(0x01)
	char pad_C4E[0x2]; // 0xc4e(0x02)
	struct F*faabcc0725 *f87e7e8882; // 0xc50(0x30)
	char pad_C80[0xa0]; // 0xc80(0xa0)
	struct F*ee714225cf *9907656dac; // 0xd20(0x4e0)
	struct F*24df61b0d0 *48a0e8d827; // 0x1200(0xd0)
	struct F*24df61b0d0 *c9c57cb30e; // 0x12d0(0xd0)
	char pad_13A0[0x318]; // 0x13a0(0x318)
	struct TArray<struct UAttributeSet*> *e09c780a2e; // 0x16b8(0x10)
	struct TArray<struct FString> *35bfe045dd; // 0x16c8(0x10)
	struct AActor* *51eab801d6; // 0x16d8(0x08)
	struct AActor* AvatarActor; // 0x16e0(0x08)
	struct F*0f1e4fd871 *fba7685082; // 0x16e8(0x38)
	struct TArray<bool> *b1acf85918; // 0x1720(0x10)
	struct F*0f96a507f9 *bab1a8aa7b; // 0x1730(0x60)
	struct TArray<struct FString> *81e9c05498; // 0x1790(0x10)
	struct F*60e84a28aa *60e84a28aa; // 0x17a0(0xc0)

	void *9b53d455cc(); // Function GameplayAbilities.AbilitySystemComponent.*9b53d455cc // Net|Native|Event|NetMulticast|Public // @ game+0x6b985b0
	void *85d7aa495e(); // Function GameplayAbilities.AbilitySystemComponent.*85d7aa495e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6b92ad0
	void *5e78a23c48(); // Function GameplayAbilities.AbilitySystemComponent.*5e78a23c48 // Net|Native|Event|NetMulticast|Public // @ game+0x6b97864
	void *37504e23c4(); // Function GameplayAbilities.AbilitySystemComponent.*37504e23c4 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6b9bc50
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // Native|Protected // @ game+0x6b99ac8
	void *26947b9289(); // Function GameplayAbilities.AbilitySystemComponent.*26947b9289 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6b94524
	void *591d771f0e(); // Function GameplayAbilities.AbilitySystemComponent.*591d771f0e // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6b9b19c
	void *5ce1c98667(); // Function GameplayAbilities.AbilitySystemComponent.*5ce1c98667 // Final|Native|Public|BlueprintCallable // @ game+0x6b99f24
	void *c0244568b7(); // Function GameplayAbilities.AbilitySystemComponent.*c0244568b7 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6b9401c
	void *22a176cff4(); // Function GameplayAbilities.AbilitySystemComponent.*22a176cff4 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6b9a2f4
	void *5d9cf23e75(); // Function GameplayAbilities.AbilitySystemComponent.*5d9cf23e75 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6b9b0ec
	void *d9d226e558(); // Function GameplayAbilities.AbilitySystemComponent.*d9d226e558 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6b9af14
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // Native|Public // @ game+0x5a77d08
	void *c9d9e01865(); // Function GameplayAbilities.AbilitySystemComponent.*c9d9e01865 // Net|Native|Event|NetMulticast|Public // @ game+0x6b97cec
	void *9e5d737f7e(); // Function GameplayAbilities.AbilitySystemComponent.*9e5d737f7e // Final|Native|Public|BlueprintCallable|Const // @ game+0x6b95720
	void *301674b70c(); // Function GameplayAbilities.AbilitySystemComponent.*301674b70c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95f6c
	void *2284b3be78(); // Function GameplayAbilities.AbilitySystemComponent.*2284b3be78 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6b942f4
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void *21d2144e80(); // Function GameplayAbilities.AbilitySystemComponent.*21d2144e80 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6b92998
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // Native|Public // @ game+0x5a55740
	void *88c9126b3b(); // Function GameplayAbilities.AbilitySystemComponent.*88c9126b3b // Net|Native|Event|NetMulticast|Public // @ game+0x6b98198
	void RemoveActiveGameplayEffect(); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6b9a200
	void *2085eeb142(); // Function GameplayAbilities.AbilitySystemComponent.*2085eeb142 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95bf4
	void *19c8b259a4(); // Function GameplayAbilities.AbilitySystemComponent.*19c8b259a4 // Net|Native|Event|NetMulticast|Public // @ game+0x6b97b44
	void *1bd87b815b(); // Function GameplayAbilities.AbilitySystemComponent.*1bd87b815b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95f98
	void AbilityAbilityKey__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void TryActivateAbilitiesByTag(); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6b9c704
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // Net|Native|Event|NetMulticast|Public // @ game+0x6b97ff0
	void *4f940a3f93(); // Function GameplayAbilities.AbilitySystemComponent.*4f940a3f93 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b96ed0
	void *23899b201a(); // Function GameplayAbilities.AbilitySystemComponent.*23899b201a // Native|Public|BlueprintCallable // @ game+0xbd25e0
	void *159bbe8511(); // Function GameplayAbilities.AbilitySystemComponent.*159bbe8511 // Final|Native|Public|BlueprintCallable // @ game+0x6b99f24
	void *58e3cc86bf(); // Function GameplayAbilities.AbilitySystemComponent.*58e3cc86bf // Net|Native|Event|NetMulticast|Public // @ game+0x6b976ac
	void *4d43766d51(); // Function GameplayAbilities.AbilitySystemComponent.*4d43766d51 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6b9b03c
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // Net|Native|Event|NetMulticast|Public // @ game+0x6b97ea4
	void *daba645f56(); // Function GameplayAbilities.AbilitySystemComponent.*daba645f56 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6b9ac10
	void *fc1d850dc5(); // Function GameplayAbilities.AbilitySystemComponent.*fc1d850dc5 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6b941d4
	void *0cdae5457c(); // Function GameplayAbilities.AbilitySystemComponent.*0cdae5457c // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6b95ac4
	void *eb7054c635(); // Function GameplayAbilities.AbilitySystemComponent.*eb7054c635 // Final|Native|Public|HasOutParms|BlueprintCallable|Const // @ game+0x6b955c8
	void *19cc56092d(); // Function GameplayAbilities.AbilitySystemComponent.*19cc56092d // Final|Native|Public|BlueprintCallable // @ game+0x6b9a10c
	void *a13312e541(); // Function GameplayAbilities.AbilitySystemComponent.*a13312e541 // Final|Native|Public|BlueprintCallable // @ game+0x6b9c858
	void *d97040cbf8(); // Function GameplayAbilities.AbilitySystemComponent.*d97040cbf8 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6b9babc
	void *31e04d98aa(); // Function GameplayAbilities.AbilitySystemComponent.*31e04d98aa // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6b9a93c
	void *64ddca5de0(); // Function GameplayAbilities.AbilitySystemComponent.*64ddca5de0 // Native|Public|BlueprintCallable // @ game+0x6b9c218
	void *a5f7bc7138(); // Function GameplayAbilities.AbilitySystemComponent.*a5f7bc7138 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6b9a7cc
	void *10332caf95(); // Function GameplayAbilities.AbilitySystemComponent.*10332caf95 // Final|Native|Public|BlueprintCallable // @ game+0x6b92f44
	void *776f4d52f7(); // Function GameplayAbilities.AbilitySystemComponent.*776f4d52f7 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6b94674
	void *2b384434ff(); // Function GameplayAbilities.AbilitySystemComponent.*2b384434ff // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6b9a69c
	void *c218955416(); // Function GameplayAbilities.AbilitySystemComponent.*c218955416 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6b9ad24
	void *22c91ebe63(); // Function GameplayAbilities.AbilitySystemComponent.*22c91ebe63 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6b9b3b8
	void MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b96cec
	void *6630e567f5(); // Function GameplayAbilities.AbilitySystemComponent.*6630e567f5 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6b94414
	void *ed0d180c8a(); // Function GameplayAbilities.AbilitySystemComponent.*ed0d180c8a // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6b93f1c
	void *ad6a2f3d37(); // Function GameplayAbilities.AbilitySystemComponent.*ad6a2f3d37 // Net|Native|Event|NetMulticast|Public // @ game+0x6b98398
	void *5f49e03580(); // Function GameplayAbilities.AbilitySystemComponent.*5f49e03580 // Final|Native|Public|BlueprintCallable // @ game+0x6b9a018
	void *c843d2da98(); // Function GameplayAbilities.AbilitySystemComponent.*c843d2da98 // Native|Public|BlueprintCallable // @ game+0x67c472c
	void *9dc1bfa1de(); // Function GameplayAbilities.AbilitySystemComponent.*9dc1bfa1de // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6b9b648
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // Final|Native|Public // @ game+0x6b99ae0
	void *2ce6ce968c(); // Function GameplayAbilities.AbilitySystemComponent.*2ce6ce968c // Final|Native|Public|BlueprintCallable // @ game+0x6b92da4
	void *827c963f61(); // Function GameplayAbilities.AbilitySystemComponent.*827c963f61 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6b9b8fc
	void *dbc7b5abde(); // Function GameplayAbilities.AbilitySystemComponent.*dbc7b5abde // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6b9af60
	void *555060c0ad(); // Function GameplayAbilities.AbilitySystemComponent.*555060c0ad // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6b9aa50
	void *1a5c923741(); // Function GameplayAbilities.AbilitySystemComponent.*1a5c923741 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6b9beb8
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // Native|Protected // @ game+0x5a9c470
	void *0f94ece9d8(); // Function GameplayAbilities.AbilitySystemComponent.*0f94ece9d8 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6b9bf9c
	void *881ec4c66e(); // Function GameplayAbilities.AbilitySystemComponent.*881ec4c66e // Final|Native|Public|BlueprintCallable // @ game+0x6b96b7c
	void *ec0bbc7650(); // Function GameplayAbilities.AbilitySystemComponent.*ec0bbc7650 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6b93e3c
	void *8decb1bf8a(); // Function GameplayAbilities.AbilitySystemComponent.*8decb1bf8a // Net|Native|Event|NetMulticast|Public // @ game+0x6b9799c
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

// Class GameplayAbilities.*d8da158b4f
// Size: 0x40 (Inherited: 0x30)
struct U*d8da158b4f : UObject {
	struct TArray<struct F*4ac327b4ea> RelevantAttributesToCapture; // 0x30(0x10)
};

// Class GameplayAbilities.*b15f0bb97d
// Size: 0x48 (Inherited: 0x40)
struct U*b15f0bb97d : U*d8da158b4f {
	bool bRequiresPassedInTags; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void Execute(); // Function GameplayAbilities.*b15f0bb97d.Execute // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x6b94e00
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x580 (Inherited: 0x30)
struct UGameplayAbility : UObject {
	char pad_30[0x240]; // 0x30(0x240)
	struct FGameplayTagContainer *9b26c89cfb; // 0x270(0x20)
	bool *786784c62b; // 0x290(0x01)
	bool *f9c2669cbf; // 0x291(0x01)
	char pad_292[0x4]; // 0x292(0x04)
	enum class *643ca7fc97 *61c228a926; // 0x296(0x01)
	enum class *e05b2709c2 *e304cbf120; // 0x297(0x01)
	bool *5eecdf5a7a; // 0x298(0x01)
	bool *e942a70aba; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct F*e3981689eb CurrentActivationInfo; // 0x2a0(0x20)
	struct F*3a9386b60a CurrentEventData; // 0x2c0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy *097386766c; // 0x370(0x01)
	enum class EGameplayAbilityNetSecurityPolicy *23529a853a; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct UClass* *bb06072327; // 0x378(0x08)
	struct TArray<struct F*487c57aeb0> *aa5993b86f; // 0x380(0x10)
	struct UClass* *84aeb768bb; // 0x390(0x08)
	struct FGameplayTagContainer *f54fdd0a92; // 0x398(0x20)
	struct FGameplayTagContainer *58ef6ac272; // 0x3b8(0x20)
	struct FGameplayTagContainer *d4ffe25344; // 0x3d8(0x20)
	struct FGameplayTagContainer *e163417c92; // 0x3f8(0x20)
	struct FGameplayTagContainer *558ea3a4cd; // 0x418(0x20)
	struct FGameplayTagContainer *4348e866d8; // 0x438(0x20)
	struct FGameplayTagContainer *0e9b43d260; // 0x458(0x20)
	struct FGameplayTagContainer *a674cf089a; // 0x478(0x20)
	struct FGameplayTagContainer *bdb6b48888; // 0x498(0x20)
	char pad_4B8[0x20]; // 0x4b8(0x20)
	struct TArray<struct UGameplayTask*> *3bd713bd21; // 0x4d8(0x10)
	char pad_4E8[0x10]; // 0x4e8(0x10)
	struct UAnimMontage* *26b01c962b; // 0x4f8(0x08)
	char pad_500[0x60]; // 0x500(0x60)
	bool *eedbc91ee9; // 0x560(0x01)
	bool *80c3722f29; // 0x561(0x01)
	bool *c388046d15; // 0x562(0x01)
	bool *3ab88657fb; // 0x563(0x01)
	char pad_564[0x14]; // 0x564(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)

	void *6539aa112e(); // Function GameplayAbilities.GameplayAbility.*6539aa112e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95a58
	void *ac5c94f8c4(); // Function GameplayAbilities.GameplayAbility.*ac5c94f8c4 // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x6b97158
	void *70b0ec80a5(); // Function GameplayAbilities.GameplayAbility.*70b0ec80a5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b955a4
	void *b1029c3c76(); // Function GameplayAbilities.GameplayAbility.*b1029c3c76 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95488
	void *061a4e2c70(); // Function GameplayAbilities.GameplayAbility.*061a4e2c70 // Native|Public|BlueprintCallable // @ game+0x6b9c0e8
	void *a9f4ae9a50(); // Function GameplayAbilities.GameplayAbility.*a9f4ae9a50 // Native|Protected|BlueprintCallable // @ game+0x6b96c58
	void *42341dc235(); // Function GameplayAbilities.GameplayAbility.*42341dc235 // Final|Native|Protected|BlueprintCallable // @ game+0x6b93488
	void *e653b19c27(); // Function GameplayAbilities.GameplayAbility.*e653b19c27 // Native|Public|BlueprintCallable // @ game+0x6b9672c
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *8f1c80e010(); // Function GameplayAbilities.GameplayAbility.*8f1c80e010 // Final|Native|Protected|BlueprintCallable // @ game+0x6b935bc
	void *8c8afbd706(); // Function GameplayAbilities.GameplayAbility.*8c8afbd706 // Native|Public|BlueprintCallable // @ game+0x6b96820
	void *5584a57a91(); // Function GameplayAbilities.GameplayAbility.*5584a57a91 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95e50
	void GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95a10
	void *30d8f3e944(); // Function GameplayAbilities.GameplayAbility.*30d8f3e944 // Native|Public|BlueprintCallable // @ game+0x6b96704
	void *acb8e5c74f(); // Function GameplayAbilities.GameplayAbility.*acb8e5c74f // Final|Native|Protected|BlueprintCallable // @ game+0x6b93354
	void *73e21fff21(); // Function GameplayAbilities.GameplayAbility.*73e21fff21 // Final|Native|Protected|BlueprintCallable // @ game+0x6b97258
	void K2_ActivateAbilityFromEvent(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void *144d7af023(); // Function GameplayAbilities.GameplayAbility.*144d7af023 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95e2c
	void *bdd6d9c04f(); // Function GameplayAbilities.GameplayAbility.*bdd6d9c04f // Final|Native|Protected|BlueprintCallable // @ game+0x6b9646c
	void *a7db3ad40e(); // Function GameplayAbilities.GameplayAbility.*a7db3ad40e // Final|Native|Public|BlueprintCallable // @ game+0x6b96644
	void *b086889cfa(); // Function GameplayAbilities.GameplayAbility.*b086889cfa // Final|Native|Public|BlueprintCallable|Const // @ game+0x6b95f84
	void *433933abb0(); // Function GameplayAbilities.GameplayAbility.*433933abb0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95a70
	void *3921b4a965(); // Function GameplayAbilities.GameplayAbility.*3921b4a965 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b96d88
	void *34b19f060f(); // Function GameplayAbilities.GameplayAbility.*34b19f060f // Final|Native|Protected|BlueprintCallable // @ game+0x6b92c6c
	void *713ce252b1(); // Function GameplayAbilities.GameplayAbility.*713ce252b1 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x6b96a30
	void K2_CanActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // Event|Protected|HasOutParms|BlueprintEvent|Const // @ game+0x22ddc4
	void K2_ShouldAbilityRespondToEvent(); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // Event|Protected|BlueprintEvent|Const // @ game+0x22ddc4
	void *21d67206b0(); // Function GameplayAbilities.GameplayAbility.*21d67206b0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95d24
	void *0bf9053a15(); // Function GameplayAbilities.GameplayAbility.*0bf9053a15 // Final|Native|Protected|BlueprintCallable // @ game+0x6b94cd0
	void *8123b159cc(); // Function GameplayAbilities.GameplayAbility.*8123b159cc // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x6b970c8
	void *cdd909a2f3(); // Function GameplayAbilities.GameplayAbility.*cdd909a2f3 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6b96b60
	void *ab2e69dc44(); // Function GameplayAbilities.GameplayAbility.*ab2e69dc44 // Native|Public|BlueprintCallable // @ game+0x6b9c180
	void *5b41730a8c(); // Function GameplayAbilities.GameplayAbility.*5b41730a8c // Native|Protected|BlueprintCallable // @ game+0x6b968e0
	void *f0ae7a1109(); // Function GameplayAbilities.GameplayAbility.*f0ae7a1109 // Final|Native|Protected|BlueprintCallable // @ game+0x6b973f8
	void *aa3dd02c26(); // Function GameplayAbilities.GameplayAbility.*aa3dd02c26 // Native|Public|BlueprintCallable // @ game+0x6b966dc
	void *be6e5237c0(); // Function GameplayAbilities.GameplayAbility.*be6e5237c0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b958a0
	void *ed5ab8efca(); // Function GameplayAbilities.GameplayAbility.*ed5ab8efca // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b958c4
	void *6a6168b265(); // Function GameplayAbilities.GameplayAbility.*6a6168b265 // Native|Protected|BlueprintCallable // @ game+0x6b968c8
	void *8490f88a4d(); // Function GameplayAbilities.GameplayAbility.*8490f88a4d // Native|Public|BlueprintCallable // @ game+0x6b966b4
	void *d34a127418(); // Function GameplayAbilities.GameplayAbility.*d34a127418 // Native|Public|BlueprintCallable // @ game+0x6b9a418
	void *45933288ed(); // Function GameplayAbilities.GameplayAbility.*45933288ed // Native|Protected|BlueprintCallable // @ game+0x6b96060
	void *a6e4beae20(); // Function GameplayAbilities.GameplayAbility.*a6e4beae20 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b9586c
	void GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95464
	void *aac4b86cea(); // Function GameplayAbilities.GameplayAbility.*aac4b86cea // Final|Native|Protected|BlueprintCallable // @ game+0x6b93dac
	void *b33c10f60c(); // Function GameplayAbilities.GameplayAbility.*b33c10f60c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6b95e08
	void *10332caf95(); // Function GameplayAbilities.GameplayAbility.*10332caf95 // Final|Native|Protected|BlueprintCallable // @ game+0x6b93138
	void K2_OnEndAbility(); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *0126a7c539(); // Function GameplayAbilities.GameplayAbility.*0126a7c539 // Final|Native|Protected|BlueprintCallable // @ game+0x6b94d70
	void *ffe9a22546(); // Function GameplayAbilities.GameplayAbility.*ffe9a22546 // Final|Native|Protected|BlueprintCallable // @ game+0x6b94708
	void *dc72fcf017(); // Function GameplayAbilities.GameplayAbility.*dc72fcf017 // Final|Native|Protected|BlueprintCallable // @ game+0x6b97300
	void *5e66f31010(); // Function GameplayAbilities.GameplayAbility.*5e66f31010 // Final|Native|Protected|BlueprintCallable // @ game+0x6b96368
	void *04f3597a32(); // Function GameplayAbilities.GameplayAbility.*04f3597a32 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x6b961f0
	void *58e33f0754(); // Function GameplayAbilities.GameplayAbility.*58e33f0754 // Native|Protected|BlueprintCallable // @ game+0x6b9a554
	void *b5c3a53167(); // Function GameplayAbilities.GameplayAbility.*b5c3a53167 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6b9603c
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x880 (Inherited: 0x30)
struct UGameplayEffect : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EGameplayEffectDurationType *91c7e89b25; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGameplayEffectModifierMagnitude *903a1a4365; // 0x40(0x200)
	struct FScalableFloat Period; // 0x240(0x30)
	bool bExecutePeriodicEffectOnApplication; // 0x270(0x01)
	enum class *8be2c469a1 PeriodicInhibitionPolicy; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct TArray<struct F*50980be3ae> Modifiers; // 0x278(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x288(0x10)
	struct FScalableFloat *c7740ff9ff; // 0x298(0x30)
	struct TArray<struct UClass*> *694a9720de; // 0x2c8(0x10)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x2d8(0x10)
	struct TArray<struct F*458fe9bc56> ConditionalGameplayEffects; // 0x2e8(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x2f8(0x10)
	bool bDenyOverflowApplication; // 0x308(0x01)
	bool bClearStackOnOverflow; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x310(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x320(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x330(0x01)
	bool *fc3bb63163; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct TArray<struct F*bf0f65bacc> GameplayCues; // 0x338(0x10)
	struct UGameplayEffectUIData* UIData; // 0x348(0x08)
	struct F*0c4e6654e0 InheritableGameplayEffectTags; // 0x350(0x60)
	struct F*0c4e6654e0 InheritableOwnedTagsContainer; // 0x3b0(0x60)
	struct F*c6f2db32e3 OngoingTagRequirements; // 0x410(0x40)
	struct F*c6f2db32e3 ApplicationTagRequirements; // 0x450(0x40)
	struct F*c6f2db32e3 RemovalTagRequirements; // 0x490(0x40)
	struct F*0c4e6654e0 RemoveGameplayEffectsWithTags; // 0x4d0(0x60)
	struct F*c6f2db32e3 GrantedApplicationImmunityTags; // 0x530(0x40)
	struct F*9c6a94f9ba GrantedApplicationImmunityQuery; // 0x570(0x170)
	char pad_6E0[0x10]; // 0x6e0(0x10)
	struct F*9c6a94f9ba RemoveGameplayEffectQuery; // 0x6f0(0x170)
	char pad_860[0x1]; // 0x860(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0x861(0x01)
	char pad_862[0x2]; // 0x862(0x02)
	int32 StackLimitCount; // 0x864(0x04)
	enum class *d1650898e1 StackDurationRefreshPolicy; // 0x868(0x01)
	enum class *6b186b2998 StackPeriodResetPolicy; // 0x869(0x01)
	enum class *57c3f5f2bf StackExpirationPolicy; // 0x86a(0x01)
	char pad_86B[0x5]; // 0x86b(0x05)
	struct TArray<struct F*d50d69f3d3> GrantedAbilities; // 0x870(0x10)
};

// Class GameplayAbilities.*e6c8b6b5f4
// Size: 0x38 (Inherited: 0x30)
struct U*e6c8b6b5f4 : U*4471bd9586 {
	char pad_30[0x8]; // 0x30(0x08)

	void *3d90ef212f(); // Function GameplayAbilities.*e6c8b6b5f4.*3d90ef212f // Native|Public|BlueprintCallable // @ game+0xac1580
};

// Class GameplayAbilities.*b3a65d10df
// Size: 0xf8 (Inherited: 0x38)
struct U*b3a65d10df : U*e6c8b6b5f4 {
	struct FMulticastDelegate OnApplied; // 0x38(0x10)
	char pad_48[0xb0]; // 0x48(0xb0)

	void *816a48635e(); // Function GameplayAbilities.*b3a65d10df.*816a48635e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b26504
	void OnAppliedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*b3a65d10df.OnAppliedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
};

// Class GameplayAbilities.*386380c263
// Size: 0x60 (Inherited: 0x38)
struct U*386380c263 : U*e6c8b6b5f4 {
	struct FMulticastDelegate EventReceived; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	void *f73dcb0bb2(); // Function GameplayAbilities.*386380c263.*f73dcb0bb2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b268bc
	void EventReceivedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*386380c263.EventReceivedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
};

// Class GameplayAbilities.*ef255187a2
// Size: 0x58 (Inherited: 0x38)
struct U*ef255187a2 : U*e6c8b6b5f4 {
	char pad_38[0x20]; // 0x38(0x20)

	void AsyncWaitGameplayTagDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*ef255187a2.AsyncWaitGameplayTagDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
};

// Class GameplayAbilities.*0048211de9
// Size: 0x68 (Inherited: 0x58)
struct U*0048211de9 : U*ef255187a2 {
	struct FMulticastDelegate Added; // 0x58(0x10)

	void *6be5b7cb64(); // Function GameplayAbilities.*0048211de9.*6be5b7cb64 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b26a38
};

// Class GameplayAbilities.*3f01be8987
// Size: 0x68 (Inherited: 0x58)
struct U*3f01be8987 : U*ef255187a2 {
	struct FMulticastDelegate Removed; // 0x58(0x10)

	void *d07edfa464(); // Function GameplayAbilities.*3f01be8987.*d07edfa464 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b26b58
};

// Class GameplayAbilities.*e908b14374
// Size: 0x30 (Inherited: 0x30)
struct U*e908b14374 : UInterface {

	void BlueprintCustomHandler(); // Function GameplayAbilities.*e908b14374.BlueprintCustomHandler // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void *b2663f8c6f(); // Function GameplayAbilities.*e908b14374.*b2663f8c6f // BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b224d8
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	void *a99598c8c4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*a99598c8c4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b260bc
	void *70be19ee7b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*70be19ee7b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6b23a58
	void *e089894ebb(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e089894ebb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b21bf8
	void *92bcc4e1a1(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*92bcc4e1a1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b2168c
	void *f4e2054fbb(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f4e2054fbb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b235f0
	void GetOrigin(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6b243b8
	void *48cce6bd64(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*48cce6bd64 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b21d88
	void *b150d077c0(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b150d077c0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b24cdc
	void *e58c7bf80e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e58c7bf80e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b1eb88
	void BreakGameplayCueParameters(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6b1fed8
	void *5904e39fd8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5904e39fd8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b2556c
	void *939a7e05df(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*939a7e05df // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b1f234
	void *05cd341197(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*05cd341197 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b226ac
	void *c62d225d41(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c62d225d41 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b22e78
	void *771262692d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*771262692d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b25bfc
	void HasHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b24914
	void *b719a29dff(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b719a29dff // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6b23be0
	void *3c1e3f8315(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3c1e3f8315 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b25df4
	void *27170911e0(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*27170911e0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b22d70
	void *f5917d084d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f5917d084d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b213ec
	void *df9f912d40(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*df9f912d40 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b23ea4
	void GetInstigatorActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b2404c
	void *3d23e19976(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3d23e19976 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b1fb00
	void *9d5d379abc(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*9d5d379abc // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6b24624
	void *fa66bd0ccb(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*fa66bd0ccb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6b212e4
	void *02c1e6fbe5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*02c1e6fbe5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b1eca4
	void *3ca773d65a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3ca773d65a // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6b21a64
	void *57a9ecc1fc(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*57a9ecc1fc // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b238e0
	void *c4d95a1a00(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c4d95a1a00 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b25748
	void *a628c7c15b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*a628c7c15b // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b228b4
	void *954279ffd2(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*954279ffd2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b21934
	void *a1d840157e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*a1d840157e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b23138
	void *7275e5e79a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7275e5e79a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b1fcec
	void *29d33cba59(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*29d33cba59 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b21088
	void *df8d6d90fc(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*df8d6d90fc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b2273c
	void IsValid(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b24c00
	void *2cedb571b8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2cedb571b8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b23768
	void *aa0b291f19(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*aa0b291f19 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b25f38
	void SendGameplayEventToActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b258d8
	void *9849afeda7(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*9849afeda7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b21194
	void *71ac28d405(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*71ac28d405 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b22bb4
	void *2238d0f192(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2238d0f192 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b22820
	void *197fccadfb(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*197fccadfb // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b24230
	void GetEffectContext(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b2332c
	void *f99fa917ca(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f99fa917ca // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b2153c
	void *8395ea03e1(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*8395ea03e1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b23004
	void *5da055413f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5da055413f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b1f040
	void MakeGameplayCueParameters(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6b24e6c
	void *40d1c8fafb(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*40d1c8fafb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b22028
	void GetHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b23dc0
	void *3623e6e46c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3623e6e46c // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b22b20
	void *9b4df9951a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*9b4df9951a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b22994
	void *dca0710adb(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*dca0710adb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b26390
	void *1266524528(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*1266524528 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b22a54
	void *a17e8fc254(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*a17e8fc254 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b20904
	void IsInstigatorLocallyControlled(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b24a18
	void *9a863d095a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*9a863d095a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b20720
	void *846372d802(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*846372d802 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b2324c
	void *e49ff1540f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e49ff1540f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b224ec
	void *33ef4b7191(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*33ef4b7191 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b24b0c
	void *56c23a0f2b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*56c23a0f2b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b22c48
	void *fd98115460(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*fd98115460 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b20f38
	void *bedf6f7868(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bedf6f7868 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b217e0
	void *34c83f55d8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*34c83f55d8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b20b9c
	void SetDuration(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b25a68
	void *8d342aeff1(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*8d342aeff1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b23478
	void *3f571ac262(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3f571ac262 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b1f75c
	void *d12602ac2a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d12602ac2a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6b247c0
	void *842e5cb9ec(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*842e5cb9ec // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6b24120
	void *37821a41e0(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*37821a41e0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b1f3d0
	void *54dd51d744(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*54dd51d744 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b1eea4
	void *5c6033d4ea(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5c6033d4ea // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6b1f950
	void *810699a2e1(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*810699a2e1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b20d1c
	void *edfd3d6219(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*edfd3d6219 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b2231c
	void *b1550cf66d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b1550cf66d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6b1e948
	void *d7219660d8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d7219660d8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b1ea24
	void *c51bb24bab(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c51bb24bab // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b1f5c4
	void *01144515bc(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*01144515bc // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6b244e0
	void *69c16848ee(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*69c16848ee // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6b26230
};

// Class GameplayAbilities.*389fb20145
// Size: 0x30 (Inherited: 0x30)
struct U*389fb20145 : UInterface {
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x4f0 (Inherited: 0x4f0)
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x340 (Inherited: 0x30)
struct UAbilitySystemGlobals : UObject {
	struct FStringClassReference AbilitySystemGlobalsClassName; // 0x30(0x10)
	char pad_40[0x80]; // 0x40(0x80)
	struct FGameplayTag *8a31e288ec; // 0xc0(0x08)
	struct FName ActivateFailIsDeadName; // 0xc8(0x08)
	struct FGameplayTag *f1d3144be4; // 0xd0(0x08)
	struct FName ActivateFailCooldownName; // 0xd8(0x08)
	struct FGameplayTag *1635ecd6fa; // 0xe0(0x08)
	struct FName ActivateFailCostName; // 0xe8(0x08)
	struct FGameplayTag *ce32ca4d27; // 0xf0(0x08)
	struct FName ActivateFailTagsBlockedName; // 0xf8(0x08)
	struct FGameplayTag *8e6bad45e5; // 0x100(0x08)
	struct FName ActivateFailTagsMissingName; // 0x108(0x08)
	struct FGameplayTag *03ace4be3e; // 0x110(0x08)
	struct FName ActivateFailNetworkingName; // 0x118(0x08)
	int32 MinimalReplicationTagCountBits; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct F*36dd836e71 *c85b4b092f; // 0x128(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0x138(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FName GameplayModEvaluationChannelAliases[0x0a]; // 0x140(0x50)
	struct FStringAssetReference GlobalCurveTableName; // 0x190(0x10)
	struct UCurveTable* *1af9519954; // 0x1a0(0x08)
	struct FStringAssetReference GlobalAttributeMetaDataTableName; // 0x1a8(0x10)
	struct UDataTable* *1f6e828df8; // 0x1b8(0x08)
	struct FStringAssetReference GlobalAttributeSetDefaultsTableName; // 0x1c0(0x10)
	struct TArray<struct FStringAssetReference> GlobalAttributeSetDefaultsTableNames; // 0x1d0(0x10)
	struct TArray<struct UCurveTable*> *c4678419d8; // 0x1e0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerClass; // 0x1f0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerName; // 0x200(0x10)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x210(0x10)
	struct FStringAssetReference GameplayTagResponseTableName; // 0x220(0x10)
	struct U*52f60d886c* *a13c921cf8; // 0x230(0x08)
	bool PredictTargetGameplayEffects; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UGameplayCueManager* *e1f1a26bb8; // 0x240(0x08)
	char pad_248[0xf8]; // 0x248(0xf8)

	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities // Final|Exec|Native|Public // @ game+0xbdbb4c
	void ServerCancelPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility // Final|Exec|Native|Public // @ game+0x59e601c
	void ServerActivatePlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility // Final|Exec|Native|Public // @ game+0x59e601c
	void ServerEndPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility // Final|Exec|Native|Public // @ game+0x59e601c
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // Exec|Native|Public // @ game+0x5a6f5c4
	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // Exec|Native|Public // @ game+0x5a6f5dc
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x4b0 (Inherited: 0x490)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_490[0x18]; // 0x490(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x4a8(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName *2720bc4122; // 0x88(0x08)
	enum class *2aeaa93612 *86f073a2af; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector *c33fa75e23; // 0x94(0x0c)
	float *f4c3c4e896; // 0xa0(0x04)
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
	bool *1d594f7e19; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UCurveFloat* *4c42e8bfef; // 0xe8(0x08)
	bool *8fed9ba281; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	void *c317495973(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.*c317495973 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6b90b44
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
	float *f4e3391f70; // 0xf8(0x04)
	bool *8ad6ba94f5; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct U*1ba2d2b086* *24431390b7; // 0x100(0x08)
	struct UCurveFloat* *e20f1393ef; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	void OnLandedCallback(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // Final|Native|Public|HasOutParms // @ game+0x6b9943c
	void *060bdd53fc(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.*060bdd53fc // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6b90f14
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // Final|Native|Public|BlueprintCallable // @ game+0x6b9503c
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x138 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinished; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	struct AActor* TargetActor; // 0xf0(0x08)
	struct FVector *ba48f1faca; // 0xf8(0x0c)
	enum class *4a539b4f66 *78ceb102b8; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float Duration; // 0x108(0x04)
	bool *f737c05d8c; // 0x10c(0x01)
	bool *c7267d01a3; // 0x10d(0x01)
	enum class EMovementMode *d72a485b77; // 0x10e(0x01)
	bool *b73b187911; // 0x10f(0x01)
	struct U*1ba2d2b086* *24431390b7; // 0x110(0x08)
	struct UCurveFloat* *e20f1393ef; // 0x118(0x08)
	struct UCurveFloat* *274dd826f8; // 0x120(0x08)
	struct UCurveFloat* *40ed4f8504; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)

	void *c9b530bdb7(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*c9b530bdb7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6b91d08
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // Final|Native|Protected // @ game+0x6b99af4
	void *6434ac8de4(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*6434ac8de4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6b91388
	void *21973d7f1b(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*21973d7f1b // Final|Native|Public // @ game+0x6b99b2c
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x110 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnTimedOut; // 0xc0(0x10)
	struct FMulticastDelegate OnTimedOutAndDestinationReached; // 0xd0(0x10)
	struct FVector StartLocation; // 0xe0(0x0c)
	struct FVector TargetLocation; // 0xec(0x0c)
	float Duration; // 0xf8(0x04)
	bool *c7267d01a3; // 0xfc(0x01)
	enum class EMovementMode *d72a485b77; // 0xfd(0x01)
	bool *b73b187911; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	struct U*1ba2d2b086* *24431390b7; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	void *d34e7f4489(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.*d34e7f4489 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6b9193c
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x118 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FVector Location; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct AActor* *e178751a46; // 0xe0(0x08)
	float Strength; // 0xe8(0x04)
	float Duration; // 0xec(0x04)
	float Radius; // 0xf0(0x04)
	bool *ccedf3b8af; // 0xf4(0x01)
	bool *1d594f7e19; // 0xf5(0x01)
	bool *54b67c7c4e; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct UCurveFloat* *4069f440f9; // 0xf8(0x08)
	struct UCurveFloat* *4c42e8bfef; // 0x100(0x08)
	bool *3d80ceba3d; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FRotator *e674703710; // 0x10c(0x0c)

	void *92e5c6f494(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.*92e5c6f494 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6b923b0
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastDelegate OnTargetLocationReached; // 0x88(0x10)
	char pad_98[0x4]; // 0x98(0x04)
	struct FVector StartLocation; // 0x9c(0x0c)
	struct FVector TargetLocation; // 0xa8(0x0c)
	float *7327f71ba2; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UCurveFloat* *90846abb59; // 0xc0(0x08)
	struct U*1ba2d2b086* *f943496ecb; // 0xc8(0x08)

	void *8d0ebecd62(); // Function GameplayAbilities.AbilityTask_MoveToLocation.*8d0ebecd62 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6b97490
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastDelegate OnSync; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void *2516d3ae3e(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*2516d3ae3e // Final|Native|Public // @ game+0x6b99b18
	void *6251b96ad9(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*6251b96ad9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9ff6c
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x180 (Inherited: 0x88)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastDelegate OnCompleted; // 0x88(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x98(0x10)
	struct FMulticastDelegate OnInterrupted; // 0xa8(0x10)
	struct FMulticastDelegate OnCancelled; // 0xb8(0x10)
	char pad_C8[0x90]; // 0xc8(0x90)
	struct UAnimMontage* *22aa76aafc; // 0x158(0x08)
	float Rate; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FName *bf231140fd; // 0x168(0x08)
	float *242f050da7; // 0x170(0x04)
	float *227304d7ed; // 0x174(0x04)
	bool *7997c0d3d1; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)

	void *f958875de5(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*f958875de5 // Final|Native|Public // @ game+0x6b996fc
	void *24c10b22bb(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*24c10b22bb // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b947e8
	void *adb270eeb3(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*adb270eeb3 // Final|Native|Public // @ game+0x6b9953c
	void OnMontageEnded(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // Final|Native|Public // @ game+0x6b9961c
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastDelegate OnPerformAction; // 0x88(0x10)
	struct FMulticastDelegate OnFinished; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	void RepeatAction(); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9a430
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastDelegate SUCCESS; // 0x88(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x98(0x10)
	char pad_A8[0x28]; // 0xa8(0x28)

	void BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6b936c0
	void FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x6b95050
	void SpawnActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9c2b0
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastDelegate OnStateEnded; // 0x88(0x10)
	struct FMulticastDelegate OnStateInterrupted; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	void *d6950f8d5b(); // Function GameplayAbilities.AbilityTask_StartAbilityState.*d6950f8d5b // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9c464
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x428 (Inherited: 0x408)
struct AGameplayAbilityWorldReticle : AActor {
	struct F*471b21c535 Parameters; // 0x408(0x0c)
	bool bFaceOwnerFlat; // 0x414(0x01)
	bool bSnapToTargetedActor; // 0x415(0x01)
	bool bIsTargetValid; // 0x416(0x01)
	bool bIsTargetAnActor; // 0x417(0x01)
	struct APlayerController* MasterPC; // 0x418(0x08)
	struct AActor* TargetingActor; // 0x420(0x08)

	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *3327db0e20(); // Function GameplayAbilities.GameplayAbilityWorldReticle.*3327db0e20 // Final|Native|Public|BlueprintCallable // @ game+0x6b94fa8
	void SetReticleMaterialParamFloat(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void SetReticleMaterialParamVector(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // Event|Public|HasDefaults|BlueprintEvent // @ game+0x22ddc4
	void OnValidTargetChanged(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnTargetingAnActor(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // Event|Public|BlueprintEvent // @ game+0x22ddc4
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x5d0 (Inherited: 0x408)
struct AGameplayAbilityTargetActor : AActor {
	bool *368730d010; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct F*22205d802a StartLocation; // 0x410(0x70)
	char pad_480[0xe0]; // 0x480(0xe0)
	struct APlayerController* MasterPC; // 0x560(0x08)
	struct UGameplayAbility* OwningAbility; // 0x568(0x08)
	bool bDestroyOnConfirmation; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct AActor* SourceActor; // 0x578(0x08)
	struct F*471b21c535 ReticleParams; // 0x580(0x0c)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct UClass* ReticleClass; // 0x590(0x08)
	struct F*90f7ca8447 Filter; // 0x598(0x10)
	bool bDebug; // 0x5a8(0x01)
	char pad_5A9[0x17]; // 0x5a9(0x17)
	struct UAbilitySystemComponent* *757aa9eaa5; // 0x5c0(0x08)
	char pad_5C8[0x8]; // 0x5c8(0x08)

	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // Native|Public // @ game+0x5a77d08
	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // Native|Public // @ game+0x5a55740
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastDelegate TimeElapsed; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)

	void *6a095f6b17(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*6a095f6b17 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9cb04
	void FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x6b951d4
	void *96d7c83000(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*96d7c83000 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9c994
	void BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6b938a0
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x140 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastDelegate OnActivate; // 0x88(0x10)
	char pad_98[0xa8]; // 0x98(0xa8)

	void *3553cdb436(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*3553cdb436 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9cf28
	void *02f90247c0(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*02f90247c0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9d348
	void *9c2e79e614(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*9c2e79e614 // Final|Native|Public // @ game+0x6b987b0
	void *a42835dbea(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*a42835dbea // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9d110
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0x100 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastDelegate OnCommit; // 0x88(0x10)
	char pad_98[0x68]; // 0x98(0x68)

	void *70d08d733a(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*70d08d733a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9d558
	void *282f9de9f9(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*282f9de9f9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9d6ec
	void *881e60814b(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*881e60814b // Final|Native|Public // @ game+0x6b98840
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xe8 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x48]; // 0x98(0x48)
	struct UAbilitySystemComponent* *224fb3624b; // 0xe0(0x08)

	void *def1cb2c8f(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*def1cb2c8f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9d8a8
	void *d81f86d49f(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*d81f86d49f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9e07c
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x118 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x78]; // 0x98(0x78)
	struct UAbilitySystemComponent* *224fb3624b; // 0x110(0x08)

	void *ef0d5efa1b(); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.*ef0d5efa1b // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9db0c
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xe0 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x40]; // 0x98(0x40)
	struct UAbilitySystemComponent* *224fb3624b; // 0xd8(0x08)

	void *7ef481e7f3(); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.*7ef481e7f3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9de18
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastDelegate OnCancel; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x6b99500
	void *eb3807bf3f(); // Function GameplayAbilities.AbilityTask_WaitCancel.*eb3807bf3f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9cc74
	void *3606dc7d05(); // Function GameplayAbilities.AbilityTask_WaitCancel.*3606dc7d05 // Final|Native|Public // @ game+0x6b98cd0
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // Final|Native|Public // @ game+0x6b98cf8
	void *9898fafeb3(); // Function GameplayAbilities.AbilityTask_WaitConfirm.*9898fafeb3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9cd08
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	struct FMulticastDelegate OnCancel; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)

	void *3606dc7d05(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*3606dc7d05 // Final|Native|Public // @ game+0x6b98ce4
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x6b99514
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // Final|Native|Public // @ game+0x6b98d88
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // Final|Native|Public // @ game+0x6b99528
	void *9e9ba02105(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*9e9ba02105 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9cd9c
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastDelegate OnFinish; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void WaitDelay(); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9ce30
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1c0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_88[0x128]; // 0x88(0x128)
	struct UAbilitySystemComponent* *224fb3624b; // 0x1b0(0x08)
	char pad_1B8[0x8]; // 0x1b8(0x08)

	void *3b099110cf(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.*3b099110cf // Final|Native|Public|HasOutParms // @ game+0x6b98b30
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	void *ff2ca12020(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*ff2ca12020 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9e604
	void *93b616b94c(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*93b616b94c // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9ea08
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	void *43ae72aa43(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*43ae72aa43 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9edb4
	void *1c6884a800(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*1c6884a800 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9f1b8
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x130 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastDelegate bLocked; // 0x88(0x10)
	char pad_98[0x88]; // 0x98(0x88)
	struct UAbilitySystemComponent* *224fb3624b; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	void *649f9c67f8(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.*649f9c67f8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9f564
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastDelegate OnRemoved; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)

	void *7b96e9f323(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*7b96e9f323 // Final|Native|Public|HasOutParms // @ game+0x6b98ffc
	void *cc43cfcab8(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*cc43cfcab8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9e390
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	void *e4f9f9b205(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*e4f9f9b205 // Final|Native|Public // @ game+0x6b990fc
	void *b22b7044f5(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*b22b7044f5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9e480
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastDelegate EventReceived; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
	struct UAbilitySystemComponent* *5d826c8f15; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)

	void *f4cb79d62d(); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.*f4cb79d62d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9f864
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_88[0x10]; // 0x88(0x10)
	struct UAbilitySystemComponent* *5d826c8f15; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	void *1ce12a2a7c(); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.*1ce12a2a7c // Native|Public // @ game+0x6b95384
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Added; // 0xb0(0x10)

	void *d7d3a0fd77(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.*d7d3a0fd77 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9fa6c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Removed; // 0xb0(0x10)

	void *d6a5913162(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.*d6a5913162 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9fc04
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastDelegate OnPress; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void *6231448c92(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*6231448c92 // Final|Native|Public // @ game+0x6b99840
	void *907c8a0b34(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*907c8a0b34 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9fd9c
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastDelegate OnRelease; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void *df2c3cc014(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*df2c3cc014 // Final|Native|Public // @ game+0x6b99854
	void *e2fd9f0633(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*e2fd9f0633 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9fe84
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void OnMovementModeChange(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // Final|Native|Public // @ game+0x6b99710
	void *adc46f4d7a(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.*adc46f4d7a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b94aa8
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x98 (Inherited: 0x88)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastDelegate OnOverlap; // 0x88(0x10)

	void OnHitCallback(); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // Final|Native|Public|HasOutParms|HasDefaults // @ game+0x6b9922c
	void *f180d9b239(); // Function GameplayAbilities.AbilityTask_WaitOverlap.*f180d9b239 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6b9e570
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastDelegate ValidData; // 0x88(0x10)
	struct FMulticastDelegate Cancelled; // 0x98(0x10)
	struct UClass* TargetClass; // 0xa8(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)

	void *c4dd75dc59(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*c4dd75dc59 // Final|Native|Public|HasOutParms // @ game+0x6b99c1c
	void FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x6b952ac
	void *0e5e9000cc(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*0e5e9000cc // Final|Native|Public|HasOutParms // @ game+0x6b99cfc
	void BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6b939dc
	void *111945734a(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*111945734a // Final|Native|Public // @ game+0x6b99f10
	void *8b825ee959(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*8b825ee959 // Final|Native|Public|HasOutParms // @ game+0x6b99ddc
	void *e26549f1a9(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*e26549f1a9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6ba01d4
	void *bc416a405e(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*bc416a405e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6ba0050
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastDelegate OnVelocityChage; // 0x88(0x10)
	struct UMovementComponent* *f9bbfa339c; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	void *b03ab6b3ac(); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.*b03ab6b3ac // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6b94b90
};

// Class GameplayAbilities.*4232410033
// Size: 0x78 (Inherited: 0x38)
struct U*4232410033 : UAttributeSet {
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

// Class GameplayAbilities.*1a5b439a63
// Size: 0x580 (Inherited: 0x580)
struct U*1a5b439a63 : UGameplayAbility {
};

// Class GameplayAbilities.*8b9772b4da
// Size: 0x5c0 (Inherited: 0x580)
struct U*8b9772b4da : UGameplayAbility {
	struct UAnimMontage* *22aa76aafc; // 0x580(0x08)
	float PlayRate; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FName SectionName; // 0x590(0x08)
	struct TArray<struct UClass*> *cfdf04f6b2; // 0x598(0x10)
	struct TArray<struct UGameplayEffect*> *9df76845b8; // 0x5a8(0x10)
	char pad_5B8[0x8]; // 0x5b8(0x08)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x48 (Inherited: 0x38)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct F*d0cb6642f7> Abilities; // 0x38(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x5d0 (Inherited: 0x5d0)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x5c8(0x04)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x5f0 (Inherited: 0x5d0)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x5c8(0x04)
	struct FCollisionProfileName TraceProfile; // 0x5d0(0x08)
	bool bTraceAffectsAimPitch; // 0x5d8(0x01)
	char pad_5DD[0x13]; // 0x5dd(0x13)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x610 (Inherited: 0x5f0)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x5e8(0x04)
	float CollisionHeight; // 0x5ec(0x04)
	char pad_5F8[0x18]; // 0x5f8(0x18)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x620 (Inherited: 0x610)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	struct UClass* PlacedActorClass; // 0x608(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x610(0x08)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x5f0 (Inherited: 0x5f0)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x440 (Inherited: 0x428)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x428(0x08)
	struct TArray<struct UActorComponent*> *4faf664733; // 0x430(0x10)
};

// Class GameplayAbilities.*2c0858f6ae
// Size: 0x30 (Inherited: 0x30)
struct U*2c0858f6ae : UObject {
};

// Class GameplayAbilities.*6246dff8ce
// Size: 0x30 (Inherited: 0x30)
struct U*6246dff8ce : U*2c0858f6ae {
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x470 (Inherited: 0x38)
struct UGameplayCueManager : UDataAsset {
	char pad_38[0x78]; // 0x38(0x78)
	struct F*a4edb87042 *7a24790df5; // 0xb0(0xb0)
	struct F*a4edb87042 *42c5a2e702; // 0x160(0xb0)
	char pad_210[0x1a0]; // 0x210(0x1a0)
	struct TArray<struct UClass*> *8a8669126e; // 0x3b0(0x10)
	struct TArray<struct UClass*> *01e6394dd9; // 0x3c0(0x10)
	struct TArray<struct F*776b9f415c> *8eea2e48cd; // 0x3d0(0x10)
	int32 *1fbdacf7ae; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct F*a9d1e7f1fe> *0cde88a10a; // 0x3e8(0x10)
	char pad_3F8[0x78]; // 0x3f8(0x78)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x468 (Inherited: 0x408)
struct AGameplayCueNotify_Actor : AActor {
	bool *8782840932; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float *77c044b0c5; // 0x40c(0x04)
	bool *af5d18204a; // 0x410(0x01)
	bool *d6850e36f4; // 0x411(0x01)
	char pad_412[0x6]; // 0x412(0x06)
	struct FGameplayTag GameplayCueTag; // 0x418(0x08)
	struct FName GameplayCueName; // 0x420(0x08)
	bool *16d62515b3; // 0x428(0x01)
	bool *169558acdb; // 0x429(0x01)
	bool *1c7e5922c2; // 0x42a(0x01)
	bool *9aa29021a4; // 0x42b(0x01)
	bool *794ffa7602; // 0x42c(0x01)
	bool *369a187a2a; // 0x42d(0x01)
	char pad_42E[0x2]; // 0x42e(0x02)
	int32 *967d35ef67; // 0x430(0x04)
	char pad_434[0x34]; // 0x434(0x34)

	void K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6b99868
	void OnActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6b988d0
	void WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6ba0358
	void OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6b98d9c
	void OnOwnerDestroyed(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // Native|Public // @ game+0x5ae6d54
	void *f8f1bf9f9f(); // Function GameplayAbilities.GameplayCueNotify_Actor.*f8f1bf9f9f // Native|Public|BlueprintCallable // @ game+0xa1de88
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x48 (Inherited: 0x30)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x30(0x08)
	struct FName GameplayCueName; // 0x38(0x08)
	bool *169558acdb; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6b98ecc
	void WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6ba0488
	void K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x22ddc4
	void OnActive(); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6b98a00
	void OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6b99998
};

// Class GameplayAbilities.*67d64823ad
// Size: 0x58 (Inherited: 0x48)
struct U*67d64823ad : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x48(0x08)
	struct UParticleSystem* ParticleSystem; // 0x50(0x08)
};

// Class GameplayAbilities.*62132a7048
// Size: 0x98 (Inherited: 0x38)
struct U*62132a7048 : UDataAsset {
	struct TArray<struct F*0f16ebd187> *5cd9b61453; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
};

// Class GameplayAbilities.*0b8828e786
// Size: 0x880 (Inherited: 0x880)
struct U*0b8828e786 : UGameplayEffect {
};

// Class GameplayAbilities.*633e645b66
// Size: 0x48 (Inherited: 0x40)
struct U*633e645b66 : U*d8da158b4f {
	bool *ba33479ec7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void CalculateBaseMagnitude(); // Function GameplayAbilities.*633e645b66.CalculateBaseMagnitude // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x6b93b18
};

// Class GameplayAbilities.*232c7a0322
// Size: 0x30 (Inherited: 0x30)
struct U*232c7a0322 : UObject {

	void CanApplyGameplayEffect(); // Function GameplayAbilities.*232c7a0322.CanApplyGameplayEffect // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x6b93c10
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x30 (Inherited: 0x30)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.*2b1033dfd7
// Size: 0x48 (Inherited: 0x30)
struct U*2b1033dfd7 : UGameplayEffectUIData {
	struct FText Description; // 0x30(0x18)
};

// Class GameplayAbilities.*52f60d886c
// Size: 0x220 (Inherited: 0x38)
struct U*52f60d886c : UDataAsset {
	struct TArray<struct F*ebbd9c1bc4> Entries; // 0x38(0x10)
	char pad_48[0x1d8]; // 0x48(0x1d8)

	void *6949283f0f(); // Function GameplayAbilities.*52f60d886c.*6949283f0f // Final|Native|Protected // @ game+0x6b9c588
};

// Class GameplayAbilities.*ecc9d2c833
// Size: 0x30 (Inherited: 0x30)
struct U*ecc9d2c833 : UInterface {
};


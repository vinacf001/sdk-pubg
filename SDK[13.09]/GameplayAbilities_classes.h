// Class GameplayAbilities.*abf1c3d4f0
// Size: 0x28 (Inherited: 0x28)
struct U*abf1c3d4f0 : UInterface {
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1850 (Inherited: 0x260)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_260[0x8]; // 0x260(0x08)
	char *68e17f206d : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct TArray<struct F*09a92992df> *3142e14f40; // 0x270(0x10)
	struct FName AffectedAnimInstanceTag; // 0x280(0x08)
	char pad_288[0x5c8]; // 0x288(0x5c8)
	float *10070bc349; // 0x850(0x04)
	float *4aee682f63; // 0x854(0x04)
	char pad_858[0x80]; // 0x858(0x80)
	bool *3712a3e3bc; // 0x8d8(0x01)
	bool *b23bfee9c0; // 0x8d9(0x01)
	bool *d92d9c1981; // 0x8da(0x01)
	bool *92b4acb71e; // 0x8db(0x01)
	char pad_8DC[0x4]; // 0x8dc(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> *c67a524687; // 0x8e0(0x10)
	char pad_8F0[0x38]; // 0x8f0(0x38)
	struct F*9cb999b8bb ActivatableAbilities; // 0x928(0xc8)
	char pad_9F0[0x30]; // 0x9f0(0x30)
	struct TArray<struct UGameplayAbility*> *80690422d3; // 0xa20(0x10)
	char pad_A30[0x20c]; // 0xa30(0x20c)
	bool *8e2e7cf750; // 0xc3c(0x01)
	bool *d89a5db9ea; // 0xc3d(0x01)
	char pad_C3E[0x2]; // 0xc3e(0x02)
	struct F*faabcc0725 *f87e7e8882; // 0xc40(0x30)
	char pad_C70[0xa0]; // 0xc70(0xa0)
	struct F*ee714225cf *9907656dac; // 0xd10(0x4e0)
	struct F*24df61b0d0 *48a0e8d827; // 0x11f0(0xd0)
	struct F*24df61b0d0 *c9c57cb30e; // 0x12c0(0xd0)
	char pad_1390[0x318]; // 0x1390(0x318)
	struct TArray<struct UAttributeSet*> *e09c780a2e; // 0x16a8(0x10)
	struct TArray<struct FString> *35bfe045dd; // 0x16b8(0x10)
	struct AActor* *51eab801d6; // 0x16c8(0x08)
	struct AActor* AvatarActor; // 0x16d0(0x08)
	struct F*0f1e4fd871 *fba7685082; // 0x16d8(0x38)
	struct TArray<bool> *b1acf85918; // 0x1710(0x10)
	struct F*0f96a507f9 *bab1a8aa7b; // 0x1720(0x60)
	struct TArray<struct FString> *81e9c05498; // 0x1780(0x10)
	struct F*60e84a28aa *60e84a28aa; // 0x1790(0xc0)

	struct F*af2d0e22f4 *9b53d455cc(); // Function GameplayAbilities.AbilitySystemComponent.*9b53d455cc // None // @ game+0x673c0c0
	struct UAbilitySystemComponent* *85d7aa495e(); // Function GameplayAbilities.AbilitySystemComponent.*85d7aa495e // None // @ game+0x67365f8
	void *5e78a23c48(struct F*2f6835dd93 Param0); // Function GameplayAbilities.AbilitySystemComponent.*5e78a23c48 // None // @ game+0x673b374
	struct F*af2d0e22f4 *37504e23c4(struct F*bcfee612de Param0); // Function GameplayAbilities.AbilitySystemComponent.*37504e23c4 // None // @ game+0x673f760
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // None // @ game+0x673d5d8
	enum class EAbilityGenericReplicatedEvent *26947b9289(struct F*bcfee612de Param1); // Function GameplayAbilities.AbilitySystemComponent.*26947b9289 // None // @ game+0x673804c
	void *591d771f0e(struct F*bcfee612de Param1); // Function GameplayAbilities.AbilitySystemComponent.*591d771f0e // None // @ game+0x673ecac
	struct FGameplayTagContainer *5ce1c98667(); // Function GameplayAbilities.AbilitySystemComponent.*5ce1c98667 // None // @ game+0x673da34
	void *c0244568b7(struct F*bcfee612de Param0); // Function GameplayAbilities.AbilitySystemComponent.*c0244568b7 // None // @ game+0x6737b44
	void *22a176cff4(struct UAbilitySystemComponent* InstigatorAbilitySystemComponent); // Function GameplayAbilities.AbilitySystemComponent.*22a176cff4 // None // @ game+0x673de04
	void *5d9cf23e75(); // Function GameplayAbilities.AbilitySystemComponent.*5d9cf23e75 // None // @ game+0x673ebfc
	void *d9d226e558(); // Function GameplayAbilities.AbilitySystemComponent.*d9d226e558 // None // @ game+0x673ea24
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // None // @ game+0x567b1d0
	void *c9d9e01865(struct F*af2d0e22f4 Param1); // Function GameplayAbilities.AbilitySystemComponent.*c9d9e01865 // None // @ game+0x673b7fc
	struct FGameplayTagContainer *9e5d737f7e(); // Function GameplayAbilities.AbilitySystemComponent.*9e5d737f7e // None // @ game+0x6739248
	void *301674b70c(); // Function GameplayAbilities.AbilitySystemComponent.*301674b70c // None // @ game+0x55ed098
	void *2284b3be78(struct F*bcfee612de Param0); // Function GameplayAbilities.AbilitySystemComponent.*2284b3be78 // None // @ game+0x6737e1c
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // None // @ game+0x26a108
	struct F*84ca2d3f37 *21d2144e80(); // Function GameplayAbilities.AbilitySystemComponent.*21d2144e80 // None // @ game+0x67364c0
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // None // @ game+0x5658df0
	void *88c9126b3b(struct FGameplayTagContainer Param0); // Function GameplayAbilities.AbilitySystemComponent.*88c9126b3b // None // @ game+0x673bca8
	void RemoveActiveGameplayEffect(int32 StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // None // @ game+0x673dd10
	struct FGameplayAttribute *2085eeb142(); // Function GameplayAbilities.AbilitySystemComponent.*2085eeb142 // None // @ game+0x673971c
	void *19c8b259a4(struct FGameplayTag Param0); // Function GameplayAbilities.AbilitySystemComponent.*19c8b259a4 // None // @ game+0x673b654
	void *1bd87b815b(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.AbilitySystemComponent.*1bd87b815b // None // @ game+0x6739aa8
	void AbilityAbilityKey__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // None // @ game+0x26a108
	bool TryActivateAbilitiesByTag(); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // None // @ game+0x6740214
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct F*af2d0e22f4 Param1); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // None // @ game+0x673bb00
	struct F*b3c39b158e *4f940a3f93(); // Function GameplayAbilities.AbilitySystemComponent.*4f940a3f93 // None // @ game+0x673a9e0
	void *23899b201a(); // Function GameplayAbilities.AbilitySystemComponent.*23899b201a // None // @ game+0xaeb4b8
	void *159bbe8511(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.*159bbe8511 // None // @ game+0x673da34
	void *58e3cc86bf(struct FGameplayTag Param0); // Function GameplayAbilities.AbilitySystemComponent.*58e3cc86bf // None // @ game+0x673b1bc
	void *4d43766d51(); // Function GameplayAbilities.AbilitySystemComponent.*4d43766d51 // None // @ game+0x673eb4c
	struct F*2f6835dd93 NetMulticast_InvokeGameplayCueExecuted_FromSpec(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // None // @ game+0x673b9b4
	struct UAnimMontage* *daba645f56(); // Function GameplayAbilities.AbilitySystemComponent.*daba645f56 // None // @ game+0x673e720
	void *fc1d850dc5(struct F*bcfee612de Param0); // Function GameplayAbilities.AbilitySystemComponent.*fc1d850dc5 // None // @ game+0x6737cfc
	bool *0cdae5457c(); // Function GameplayAbilities.AbilitySystemComponent.*0cdae5457c // None // @ game+0x67395ec
	struct F*9c6a94f9ba *eb7054c635(); // Function GameplayAbilities.AbilitySystemComponent.*eb7054c635 // None // @ game+0x67390f0
	void *19cc56092d(); // Function GameplayAbilities.AbilitySystemComponent.*19cc56092d // None // @ game+0x673dc1c
	bool *a13312e541(); // Function GameplayAbilities.AbilitySystemComponent.*a13312e541 // None // @ game+0x6740368
	bool *d97040cbf8(); // Function GameplayAbilities.AbilitySystemComponent.*d97040cbf8 // None // @ game+0x673f5cc
	void *31e04d98aa(); // Function GameplayAbilities.AbilitySystemComponent.*31e04d98aa // None // @ game+0x673e44c
	void *64ddca5de0(); // Function GameplayAbilities.AbilitySystemComponent.*64ddca5de0 // None // @ game+0x673fd28
	struct F*bcfee612de *a5f7bc7138(); // Function GameplayAbilities.AbilitySystemComponent.*a5f7bc7138 // None // @ game+0x673e2dc
	struct UClass* *10332caf95(struct UAbilitySystemComponent* Target, struct F*b3c39b158e Context); // Function GameplayAbilities.AbilitySystemComponent.*10332caf95 // None // @ game+0x6736a6c
	void *776f4d52f7(); // Function GameplayAbilities.AbilitySystemComponent.*776f4d52f7 // None // @ game+0x673819c
	void *2b384434ff(); // Function GameplayAbilities.AbilitySystemComponent.*2b384434ff // None // @ game+0x673e1ac
	struct F*e3981689eb *c218955416(); // Function GameplayAbilities.AbilitySystemComponent.*c218955416 // None // @ game+0x673e834
	void *22c91ebe63(enum class EAbilityGenericReplicatedEvent Param0, struct F*af2d0e22f4 Param2); // Function GameplayAbilities.AbilitySystemComponent.*22c91ebe63 // None // @ game+0x673eec8
	void MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // None // @ game+0x673a7fc
	void *6630e567f5(struct TArray<struct FString> Param0); // Function GameplayAbilities.AbilitySystemComponent.*6630e567f5 // None // @ game+0x6737f3c
	void *ed0d180c8a(struct F*bcfee612de Param0); // Function GameplayAbilities.AbilitySystemComponent.*ed0d180c8a // None // @ game+0x6737a44
	struct F*af2d0e22f4 *ad6a2f3d37(); // Function GameplayAbilities.AbilitySystemComponent.*ad6a2f3d37 // None // @ game+0x673bea8
	struct FGameplayTagContainer *5f49e03580(); // Function GameplayAbilities.AbilitySystemComponent.*5f49e03580 // None // @ game+0x673db28
	void *c843d2da98(); // Function GameplayAbilities.AbilitySystemComponent.*c843d2da98 // None // @ game+0x637edc8
	struct FGameplayTag *9dc1bfa1de(struct F*af2d0e22f4 Param1); // Function GameplayAbilities.AbilitySystemComponent.*9dc1bfa1de // None // @ game+0x673f158
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // None // @ game+0x673d5f0
	struct UClass* *2ce6ce968c(float Level); // Function GameplayAbilities.AbilitySystemComponent.*2ce6ce968c // None // @ game+0x67368cc
	void *827c963f61(struct F*bcfee612de Param0); // Function GameplayAbilities.AbilitySystemComponent.*827c963f61 // None // @ game+0x673f40c
	void *dbc7b5abde(); // Function GameplayAbilities.AbilitySystemComponent.*dbc7b5abde // None // @ game+0x673ea70
	void *555060c0ad(struct UAnimMontage* Param0, struct FName Param2); // Function GameplayAbilities.AbilitySystemComponent.*555060c0ad // None // @ game+0x673e560
	void *1a5c923741(struct F*195c5760a3 ActiveHandle); // Function GameplayAbilities.AbilitySystemComponent.*1a5c923741 // None // @ game+0x673f9c8
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // None // @ game+0x569f71c
	struct F*9c6a94f9ba *0f94ece9d8(); // Function GameplayAbilities.AbilitySystemComponent.*0f94ece9d8 // None // @ game+0x673faac
	void *881ec4c66e(struct UClass* Attributes); // Function GameplayAbilities.AbilitySystemComponent.*881ec4c66e // None // @ game+0x673a68c
	struct F*bcfee612de *ec0bbc7650(); // Function GameplayAbilities.AbilitySystemComponent.*ec0bbc7650 // None // @ game+0x6737964
	struct FGameplayTag *8decb1bf8a(struct F*af2d0e22f4 Param1); // Function GameplayAbilities.AbilitySystemComponent.*8decb1bf8a // None // @ game+0x673b4ac
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

// Class GameplayAbilities.*d8da158b4f
// Size: 0x38 (Inherited: 0x28)
struct U*d8da158b4f : UObject {
	struct TArray<struct F*4ac327b4ea> RelevantAttributesToCapture; // 0x28(0x10)
};

// Class GameplayAbilities.*b15f0bb97d
// Size: 0x40 (Inherited: 0x38)
struct U*b15f0bb97d : U*d8da158b4f {
	bool bRequiresPassedInTags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	struct F*230285452d Execute(); // Function GameplayAbilities.*b15f0bb97d.Execute // None // @ game+0x6738928
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x570 (Inherited: 0x28)
struct UGameplayAbility : UObject {
	char pad_28[0x238]; // 0x28(0x238)
	struct FGameplayTagContainer *9b26c89cfb; // 0x260(0x20)
	bool *786784c62b; // 0x280(0x01)
	bool *f9c2669cbf; // 0x281(0x01)
	char pad_282[0x4]; // 0x282(0x04)
	enum class *643ca7fc97 *61c228a926; // 0x286(0x01)
	enum class *e05b2709c2 *e304cbf120; // 0x287(0x01)
	bool *5eecdf5a7a; // 0x288(0x01)
	bool *e942a70aba; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct F*e3981689eb CurrentActivationInfo; // 0x290(0x20)
	struct F*3a9386b60a CurrentEventData; // 0x2b0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy *097386766c; // 0x360(0x01)
	enum class EGameplayAbilityNetSecurityPolicy *23529a853a; // 0x361(0x01)
	char pad_362[0x6]; // 0x362(0x06)
	struct UClass* *bb06072327; // 0x368(0x08)
	struct TArray<struct F*487c57aeb0> *aa5993b86f; // 0x370(0x10)
	struct UClass* *84aeb768bb; // 0x380(0x08)
	struct FGameplayTagContainer *f54fdd0a92; // 0x388(0x20)
	struct FGameplayTagContainer *58ef6ac272; // 0x3a8(0x20)
	struct FGameplayTagContainer *d4ffe25344; // 0x3c8(0x20)
	struct FGameplayTagContainer *e163417c92; // 0x3e8(0x20)
	struct FGameplayTagContainer *558ea3a4cd; // 0x408(0x20)
	struct FGameplayTagContainer *4348e866d8; // 0x428(0x20)
	struct FGameplayTagContainer *0e9b43d260; // 0x448(0x20)
	struct FGameplayTagContainer *a674cf089a; // 0x468(0x20)
	struct FGameplayTagContainer *bdb6b48888; // 0x488(0x20)
	char pad_4A8[0x20]; // 0x4a8(0x20)
	struct TArray<struct UGameplayTask*> *3bd713bd21; // 0x4c8(0x10)
	char pad_4D8[0x10]; // 0x4d8(0x10)
	struct UAnimMontage* *26b01c962b; // 0x4e8(0x08)
	char pad_4F0[0x60]; // 0x4f0(0x60)
	bool *eedbc91ee9; // 0x550(0x01)
	bool *80c3722f29; // 0x551(0x01)
	bool *c388046d15; // 0x552(0x01)
	bool *3ab88657fb; // 0x553(0x01)
	char pad_554[0x14]; // 0x554(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)

	void *6539aa112e(); // Function GameplayAbilities.GameplayAbility.*6539aa112e // None // @ game+0x6739580
	struct FName *ac5c94f8c4(); // Function GameplayAbilities.GameplayAbility.*ac5c94f8c4 // None // @ game+0x673ac68
	void *70b0ec80a5(); // Function GameplayAbilities.GameplayAbility.*70b0ec80a5 // None // @ game+0x67390cc
	void *b1029c3c76(struct F*bcfee612de Handle); // Function GameplayAbilities.GameplayAbility.*b1029c3c76 // None // @ game+0x6738fb0
	void *061a4e2c70(); // Function GameplayAbilities.GameplayAbility.*061a4e2c70 // None // @ game+0x673fbf8
	void *a9f4ae9a50(); // Function GameplayAbilities.GameplayAbility.*a9f4ae9a50 // None // @ game+0x673a768
	struct FGameplayTagContainer *42341dc235(); // Function GameplayAbilities.GameplayAbility.*42341dc235 // None // @ game+0x6736fb0
	void *e653b19c27(bool ForceCooldown); // Function GameplayAbilities.GameplayAbility.*e653b19c27 // None // @ game+0x673a23c
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // None // @ game+0x26a108
	struct F*195c5760a3 *8f1c80e010(); // Function GameplayAbilities.GameplayAbility.*8f1c80e010 // None // @ game+0x67370e4
	bool *8c8afbd706(); // Function GameplayAbilities.GameplayAbility.*8c8afbd706 // None // @ game+0x673a330
	void *5584a57a91(struct F*bcfee612de Handle); // Function GameplayAbilities.GameplayAbility.*5584a57a91 // None // @ game+0x6739978
	void GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // None // @ game+0x6739538
	void *30d8f3e944(); // Function GameplayAbilities.GameplayAbility.*30d8f3e944 // None // @ game+0x673a214
	struct FGameplayTagContainer *acb8e5c74f(); // Function GameplayAbilities.GameplayAbility.*acb8e5c74f // None // @ game+0x6736e7c
	void *73e21fff21(); // Function GameplayAbilities.GameplayAbility.*73e21fff21 // None // @ game+0x673ad68
	void K2_ActivateAbilityFromEvent(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // None // @ game+0x26a108
	void *144d7af023(); // Function GameplayAbilities.GameplayAbility.*144d7af023 // None // @ game+0x6739954
	struct F*e778ffd93a *bdd6d9c04f(); // Function GameplayAbilities.GameplayAbility.*bdd6d9c04f // None // @ game+0x6739f7c
	void *a7db3ad40e(); // Function GameplayAbilities.GameplayAbility.*a7db3ad40e // None // @ game+0x673a154
	void *b086889cfa(); // Function GameplayAbilities.GameplayAbility.*b086889cfa // None // @ game+0x6739a94
	void *433933abb0(); // Function GameplayAbilities.GameplayAbility.*433933abb0 // None // @ game+0x6739598
	float *3921b4a965(); // Function GameplayAbilities.GameplayAbility.*3921b4a965 // None // @ game+0x673a898
	void *34b19f060f(struct UClass* GameplayEffectClass, int32 Stacks); // Function GameplayAbilities.GameplayAbility.*34b19f060f // None // @ game+0x6736794
	struct FGameplayTag *713ce252b1(); // Function GameplayAbilities.GameplayAbility.*713ce252b1 // None // @ game+0x673a540
	struct FGameplayTagContainer K2_CanActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // None // @ game+0x26a108
	void K2_ShouldAbilityRespondToEvent(struct F*3a9386b60a Payload); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // None // @ game+0x26a108
	void *21d67206b0(); // Function GameplayAbilities.GameplayAbility.*21d67206b0 // None // @ game+0x673984c
	void *0bf9053a15(); // Function GameplayAbilities.GameplayAbility.*0bf9053a15 // None // @ game+0x67387f8
	void *8123b159cc(); // Function GameplayAbilities.GameplayAbility.*8123b159cc // None // @ game+0x673abd8
	void *cdd909a2f3(); // Function GameplayAbilities.GameplayAbility.*cdd909a2f3 // None // @ game+0x673a670
	void *ab2e69dc44(); // Function GameplayAbilities.GameplayAbility.*ab2e69dc44 // None // @ game+0x673fc90
	struct FGameplayTag *5b41730a8c(); // Function GameplayAbilities.GameplayAbility.*5b41730a8c // None // @ game+0x673a3f0
	void *f0ae7a1109(); // Function GameplayAbilities.GameplayAbility.*f0ae7a1109 // None // @ game+0x673af08
	void *aa3dd02c26(); // Function GameplayAbilities.GameplayAbility.*aa3dd02c26 // None // @ game+0x673a1ec
	void *be6e5237c0(); // Function GameplayAbilities.GameplayAbility.*be6e5237c0 // None // @ game+0x67393c8
	struct F*e778ffd93a *ed5ab8efca(); // Function GameplayAbilities.GameplayAbility.*ed5ab8efca // None // @ game+0x67393ec
	void *6a6168b265(); // Function GameplayAbilities.GameplayAbility.*6a6168b265 // None // @ game+0x673a3d8
	void *8490f88a4d(); // Function GameplayAbilities.GameplayAbility.*8490f88a4d // None // @ game+0x673a1c4
	void *d34a127418(); // Function GameplayAbilities.GameplayAbility.*d34a127418 // None // @ game+0x673df28
	void *45933288ed(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.*45933288ed // None // @ game+0x6739b70
	void *a6e4beae20(); // Function GameplayAbilities.GameplayAbility.*a6e4beae20 // None // @ game+0x6739394
	void GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // None // @ game+0x6738f8c
	void *aac4b86cea(); // Function GameplayAbilities.GameplayAbility.*aac4b86cea // None // @ game+0x67378d4
	void *b33c10f60c(); // Function GameplayAbilities.GameplayAbility.*b33c10f60c // None // @ game+0x6739930
	int32 *10332caf95(); // Function GameplayAbilities.GameplayAbility.*10332caf95 // None // @ game+0x6736c60
	void K2_OnEndAbility(); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // None // @ game+0x26a108
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // None // @ game+0x26a108
	void *0126a7c539(); // Function GameplayAbilities.GameplayAbility.*0126a7c539 // None // @ game+0x6738898
	struct FName *ffe9a22546(); // Function GameplayAbilities.GameplayAbility.*ffe9a22546 // None // @ game+0x6738230
	void *dc72fcf017(); // Function GameplayAbilities.GameplayAbility.*dc72fcf017 // None // @ game+0x673ae10
	void *5e66f31010(); // Function GameplayAbilities.GameplayAbility.*5e66f31010 // None // @ game+0x6739e78
	struct F*2f043f1358 *04f3597a32(); // Function GameplayAbilities.GameplayAbility.*04f3597a32 // None // @ game+0x6739d00
	struct FGameplayTag *58e33f0754(); // Function GameplayAbilities.GameplayAbility.*58e33f0754 // None // @ game+0x673e064
	void *b5c3a53167(); // Function GameplayAbilities.GameplayAbility.*b5c3a53167 // None // @ game+0x6739b4c
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x880 (Inherited: 0x28)
struct UGameplayEffect : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EGameplayEffectDurationType *91c7e89b25; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FGameplayEffectModifierMagnitude *903a1a4365; // 0x38(0x200)
	struct FScalableFloat Period; // 0x238(0x30)
	bool bExecutePeriodicEffectOnApplication; // 0x268(0x01)
	enum class *8be2c469a1 PeriodicInhibitionPolicy; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct TArray<struct F*50980be3ae> Modifiers; // 0x270(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x280(0x10)
	struct FScalableFloat *c7740ff9ff; // 0x290(0x30)
	struct TArray<struct UClass*> *694a9720de; // 0x2c0(0x10)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x2d0(0x10)
	struct TArray<struct F*458fe9bc56> ConditionalGameplayEffects; // 0x2e0(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x2f0(0x10)
	bool bDenyOverflowApplication; // 0x300(0x01)
	bool bClearStackOnOverflow; // 0x301(0x01)
	char pad_302[0x6]; // 0x302(0x06)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x308(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x318(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x328(0x01)
	bool *fc3bb63163; // 0x329(0x01)
	char pad_32A[0x6]; // 0x32a(0x06)
	struct TArray<struct F*bf0f65bacc> GameplayCues; // 0x330(0x10)
	struct UGameplayEffectUIData* UIData; // 0x340(0x08)
	struct F*0c4e6654e0 InheritableGameplayEffectTags; // 0x348(0x60)
	struct F*0c4e6654e0 InheritableOwnedTagsContainer; // 0x3a8(0x60)
	struct F*c6f2db32e3 OngoingTagRequirements; // 0x408(0x40)
	struct F*c6f2db32e3 ApplicationTagRequirements; // 0x448(0x40)
	struct F*c6f2db32e3 RemovalTagRequirements; // 0x488(0x40)
	struct F*0c4e6654e0 RemoveGameplayEffectsWithTags; // 0x4c8(0x60)
	struct F*c6f2db32e3 GrantedApplicationImmunityTags; // 0x528(0x40)
	char pad_568[0x8]; // 0x568(0x08)
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
// Size: 0x30 (Inherited: 0x28)
struct U*e6c8b6b5f4 : U*4471bd9586 {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class GameplayAbilities.*b3a65d10df
// Size: 0xf0 (Inherited: 0x30)
struct U*b3a65d10df : U*e6c8b6b5f4 {
	struct FMulticastDelegate OnApplied; // 0x30(0x10)
	char pad_40[0xb0]; // 0x40(0xb0)

	bool *816a48635e(); // Function GameplayAbilities.*b3a65d10df.*816a48635e // None // @ game+0x66d2f4c
	struct F*84ca2d3f37 OnAppliedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*b3a65d10df.OnAppliedDelegate__DelegateSignature // None // @ game+0x26a108
};

// Class GameplayAbilities.*386380c263
// Size: 0x58 (Inherited: 0x30)
struct U*386380c263 : U*e6c8b6b5f4 {
	struct FMulticastDelegate EventReceived; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)

	void *f73dcb0bb2(struct AActor* TargetActor, bool OnlyTriggerOnce); // Function GameplayAbilities.*386380c263.*f73dcb0bb2 // None // @ game+0x66d3304
	void EventReceivedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*386380c263.EventReceivedDelegate__DelegateSignature // None // @ game+0x26a108
};

// Class GameplayAbilities.*ef255187a2
// Size: 0x50 (Inherited: 0x30)
struct U*ef255187a2 : U*e6c8b6b5f4 {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class GameplayAbilities.*0048211de9
// Size: 0x60 (Inherited: 0x50)
struct U*0048211de9 : U*ef255187a2 {
	struct FMulticastDelegate Added; // 0x50(0x10)

	bool *6be5b7cb64(); // Function GameplayAbilities.*0048211de9.*6be5b7cb64 // None // @ game+0x66d3480
};

// Class GameplayAbilities.*3f01be8987
// Size: 0x60 (Inherited: 0x50)
struct U*3f01be8987 : U*ef255187a2 {
	struct FMulticastDelegate Removed; // 0x50(0x10)

	void *d07edfa464(struct FGameplayTag Tag); // Function GameplayAbilities.*3f01be8987.*d07edfa464 // None // @ game+0x66d35a0
};

// Class GameplayAbilities.*e908b14374
// Size: 0x28 (Inherited: 0x28)
struct U*e908b14374 : UInterface {
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class GameplayAbilities.*389fb20145
// Size: 0x28 (Inherited: 0x28)
struct U*389fb20145 : UInterface {
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x4e0 (Inherited: 0x4e0)
struct AAbilitySystemDebugHUD : AHUD {
	struct APlayerController* PlayerOwner; // 0x3f8(0x08)
	char bLostFocusPaused : 1; // 0x400(0x01)
	char bShowHUD : 1; // 0x400(0x01)
	char bShowDebugInfo : 1; // 0x400(0x01)
	char bShowHitBoxDebugInfo : 1; // 0x400(0x01)
	char bShowOverlays : 1; // 0x400(0x01)
	char bEnableDebugTextShadow : 1; // 0x400(0x01)
	struct TArray<struct AActor*> *e03555f483; // 0x408(0x10)
	struct TArray<struct FName> DebugDisplay; // 0x420(0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x430(0x10)
	struct UCanvas* Canvas; // 0x440(0x08)
	struct UCanvas* *62b97b751a; // 0x448(0x08)
	struct TArray<struct F*fae183bc56> *fe8d86efa1; // 0x450(0x10)
	struct UClass* *fb904319b5; // 0x460(0x08)
	struct AActor* *463b4dc366; // 0x468(0x08)

	void ReceiveHitBoxBeginCursorOver(); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver // None // @ game+0x26a108
	bool *df4061b0be(); // Function Engine.HUD.*df4061b0be // None // @ game+0x63653ac
	void AddHitBox(struct FVector2D Position, struct FName InName); // Function Engine.HUD.AddHitBox // None // @ game+0x635cce0
	struct FVector Project(); // Function Engine.HUD.Project // None // @ game+0x63737d8
	void ReceiveHitBoxClick(); // Function Engine.HUD.ReceiveHitBoxClick // None // @ game+0x26a108
	void *0246c1a4d4(struct FString Text, float OutHeight); // Function Engine.HUD.*0246c1a4d4 // None // @ game+0x636ad3c
	float *fe035ce755(); // Function Engine.HUD.*fe035ce755 // None // @ game+0x6363260
	void *c23d7d1b95(struct FLinearColor TextColor, float ScreenY, float Scale); // Function Engine.HUD.*c23d7d1b95 // None // @ game+0x6363a24
	void ShowHUD(); // Function Engine.HUD.ShowHUD // None // @ game+0xcbeb68
	struct AActor* *96bc26c00a(); // Function Engine.HUD.*96bc26c00a // None // @ game+0x6373c34
	void *7ae35533f0(float ScreenX, float Scale); // Function Engine.HUD.*7ae35533f0 // None // @ game+0x63641ec
	struct FLinearColor *73cee3e4ca(); // Function Engine.HUD.*73cee3e4ca // None // @ game+0x6362bcc
	void ShowDebugToggleSubCategory(); // Function Engine.HUD.ShowDebugToggleSubCategory // None // @ game+0x637dd10
	void *2693eb47f0(); // Function Engine.HUD.*2693eb47f0 // None // @ game+0x636a018
	void *9947d93eda(); // Function Engine.HUD.*9947d93eda // None // @ game+0x56a0ed4
	void ShowDebugForReticleTargetToggle(); // Function Engine.HUD.ShowDebugForReticleTargetToggle // None // @ game+0x637dc50
	void Deproject(float ScreenX, struct FVector WorldPosition); // Function Engine.HUD.Deproject // None // @ game+0x63624b8
	void ReceiveHitBoxEndCursorOver(); // Function Engine.HUD.ReceiveHitBoxEndCursorOver // None // @ game+0x26a108
	float DrawTexture(float TextureV, float TextureVHeight, enum class EBlendMode BlendMode, bool bScalePosition); // Function Engine.HUD.DrawTexture // None // @ game+0x6363cdc
	int32 ReceiveDrawHUD(); // Function Engine.HUD.ReceiveDrawHUD // None // @ game+0x26a108
	void *f7fdb39fc4(struct FLinearColor RectColor, float ScreenY); // Function Engine.HUD.*f7fdb39fc4 // None // @ game+0x6363848
	void *872a042141(); // Function Engine.HUD.*872a042141 // None // @ game+0x6373a80
	float *54873e95c6(float MaterialV, float MaterialVHeight, bool bScalePosition); // Function Engine.HUD.*54873e95c6 // None // @ game+0x6362df8
	void ReceiveHitBoxRelease(); // Function Engine.HUD.ReceiveHitBoxRelease // None // @ game+0x26a108
	struct FVector2D *40f4edae17(struct FVector2D V2_Pos, struct FVector2D V1_UV, struct FLinearColor V0_Color); // Function Engine.HUD.*40f4edae17 // None // @ game+0x63634d8
	void ShowDebug(); // Function Engine.HUD.ShowDebug // None // @ game+0x637dbbc
	float *c5ab2302bc(struct FVector Param3, struct FColor Param5, bool Param7, struct UFont* Param9); // Function Engine.HUD.*c5ab2302bc // None // @ game+0x635c3f0
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x340 (Inherited: 0x28)
struct UAbilitySystemGlobals : UObject {
	struct FStringClassReference AbilitySystemGlobalsClassName; // 0x28(0x10)
	char pad_38[0x88]; // 0x38(0x88)
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

	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities // None // @ game+0xaf438c
	void ServerCancelPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility // None // @ game+0x55e9ad0
	void ServerActivatePlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility // None // @ game+0x55e9ad0
	void ServerEndPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility // None // @ game+0x55e9ad0
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // None // @ game+0x5672acc
	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // None // @ game+0xb44448
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x4a0 (Inherited: 0x480)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_480[0x18]; // 0x480(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x498(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName *2720bc4122; // 0x80(0x08)
	enum class *2aeaa93612 *86f073a2af; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FVector *c33fa75e23; // 0x8c(0x0c)
	float *f4c3c4e896; // 0x98(0x04)
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
	bool *1d594f7e19; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct UCurveFloat* *4c42e8bfef; // 0xe0(0x08)
	bool *8fed9ba281; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	float *c317495973(struct FName TaskInstanceName, bool bEnableGravity); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.*c317495973 // None // @ game+0x673466c
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
	float *f4e3391f70; // 0xf0(0x04)
	bool *8ad6ba94f5; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct U*1ba2d2b086* *24431390b7; // 0xf8(0x08)
	struct UCurveFloat* *e20f1393ef; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	void OnLandedCallback(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // None // @ game+0x673cf4c
	float *060bdd53fc(float MinimumLandedTriggerTime, bool bFinishOnLanded, struct FVector SetVelocityOnFinish, struct U*1ba2d2b086* PathOffsetCurve); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.*060bdd53fc // None // @ game+0x6734a3c
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // None // @ game+0x6738b64
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x130 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinished; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FVector StartLocation; // 0xd0(0x0c)
	struct FVector TargetLocation; // 0xdc(0x0c)
	struct AActor* TargetActor; // 0xe8(0x08)
	struct FVector *ba48f1faca; // 0xf0(0x0c)
	enum class *4a539b4f66 *78ceb102b8; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float Duration; // 0x100(0x04)
	bool *f737c05d8c; // 0x104(0x01)
	bool *c7267d01a3; // 0x105(0x01)
	enum class EMovementMode *d72a485b77; // 0x106(0x01)
	bool *b73b187911; // 0x107(0x01)
	struct U*1ba2d2b086* *24431390b7; // 0x108(0x08)
	struct UCurveFloat* *e20f1393ef; // 0x110(0x08)
	struct UCurveFloat* *274dd826f8; // 0x118(0x08)
	struct UCurveFloat* *40ed4f8504; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	bool *c9b530bdb7(struct UGameplayAbility* OwningAbility, struct UCurveFloat* TargetLerpSpeedVertical, enum class EMovementMode MovementMode, struct U*1ba2d2b086* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*c9b530bdb7 // None // @ game+0x6735830
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // None // @ game+0x673d604
	struct UCurveFloat* *6434ac8de4(struct FName TaskInstanceName, enum class *4a539b4f66 OffsetAlignment, enum class *2aeaa93612 VelocityOnFinishMode, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*6434ac8de4 // None // @ game+0x6734eb0
	struct AActor* *21973d7f1b(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*21973d7f1b // None // @ game+0x673d63c
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x108 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnTimedOut; // 0xb8(0x10)
	struct FMulticastDelegate OnTimedOutAndDestinationReached; // 0xc8(0x10)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	float Duration; // 0xf0(0x04)
	bool *c7267d01a3; // 0xf4(0x01)
	enum class EMovementMode *d72a485b77; // 0xf5(0x01)
	bool *b73b187911; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct U*1ba2d2b086* *24431390b7; // 0xf8(0x08)
	char pad_100[0x8]; // 0x100(0x08)

	enum class *2aeaa93612 *d34e7f4489(struct UGameplayAbility* OwningAbility, struct FVector SetVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.*d34e7f4489 // None // @ game+0x6735464
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x110 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xb8(0x10)
	struct FVector Location; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct AActor* *e178751a46; // 0xd8(0x08)
	float Strength; // 0xe0(0x04)
	float Duration; // 0xe4(0x04)
	float Radius; // 0xe8(0x04)
	bool *ccedf3b8af; // 0xec(0x01)
	bool *1d594f7e19; // 0xed(0x01)
	bool *54b67c7c4e; // 0xee(0x01)
	char pad_EF[0x1]; // 0xef(0x01)
	struct UCurveFloat* *4069f440f9; // 0xf0(0x08)
	struct UCurveFloat* *4c42e8bfef; // 0xf8(0x08)
	bool *3d80ceba3d; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FRotator *e674703710; // 0x104(0x0c)

	float *92e5c6f494(bool bIsAdditive, struct UCurveFloat* StrengthDistanceFalloff, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.*92e5c6f494 // None // @ game+0x6735ed8
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastDelegate OnTargetLocationReached; // 0x80(0x10)
	char pad_90[0x4]; // 0x90(0x04)
	struct FVector StartLocation; // 0x94(0x0c)
	struct FVector TargetLocation; // 0xa0(0x0c)
	float *7327f71ba2; // 0xac(0x04)
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UCurveFloat* *90846abb59; // 0xb8(0x08)
	struct U*1ba2d2b086* *f943496ecb; // 0xc0(0x08)

	void *8d0ebecd62(struct FName TaskInstanceName, float Duration, struct U*1ba2d2b086* OptionalVectorInterpolationCurve); // Function GameplayAbilities.AbilityTask_MoveToLocation.*8d0ebecd62 // None // @ game+0x673afa0
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastDelegate OnSync; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	void *2516d3ae3e(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*2516d3ae3e // None // @ game+0x673d628
	void *6251b96ad9(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*6251b96ad9 // None // @ game+0x6743a7c
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x170 (Inherited: 0x80)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastDelegate OnCompleted; // 0x80(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x90(0x10)
	struct FMulticastDelegate OnInterrupted; // 0xa0(0x10)
	struct FMulticastDelegate OnCancelled; // 0xb0(0x10)
	char pad_C0[0x88]; // 0xc0(0x88)
	struct UAnimMontage* *22aa76aafc; // 0x148(0x08)
	float Rate; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FName *bf231140fd; // 0x158(0x08)
	float *242f050da7; // 0x160(0x04)
	float *227304d7ed; // 0x164(0x04)
	bool *7997c0d3d1; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)

	void *f958875de5(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*f958875de5 // None // @ game+0x673d20c
	float *24c10b22bb(struct FName StartSection, float AnimRootMotionTranslationScale); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*24c10b22bb // None // @ game+0x6738310
	struct UAnimMontage* *adb270eeb3(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*adb270eeb3 // None // @ game+0x673d04c
	struct UAnimMontage* OnMontageEnded(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // None // @ game+0x673d12c
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastDelegate OnPerformAction; // 0x80(0x10)
	struct FMulticastDelegate OnFinished; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	int32 RepeatAction(); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // None // @ game+0x673df40
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastDelegate SUCCESS; // 0x80(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x90(0x10)
	char pad_A0[0x28]; // 0xa0(0x28)

	void BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct UClass* Class); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // None // @ game+0x67371e8
	struct F*e778ffd93a FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // None // @ game+0x6738b78
	void SpawnActor(struct F*e778ffd93a TargetData); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // None // @ game+0x673fdc0
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastDelegate OnStateEnded; // 0x80(0x10)
	struct FMulticastDelegate OnStateInterrupted; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	bool *d6950f8d5b(); // Function GameplayAbilities.AbilityTask_StartAbilityState.*d6950f8d5b // None // @ game+0x673ff74
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x418 (Inherited: 0x3f8)
struct AGameplayAbilityWorldReticle : AActor {
	struct F*471b21c535 Parameters; // 0x3f8(0x0c)
	bool bFaceOwnerFlat; // 0x404(0x01)
	bool bSnapToTargetedActor; // 0x405(0x01)
	bool bIsTargetValid; // 0x406(0x01)
	bool bIsTargetAnActor; // 0x407(0x01)
	struct APlayerController* MasterPC; // 0x408(0x08)
	struct AActor* TargetingActor; // 0x410(0x08)

	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // None // @ game+0x26a108
	void *3327db0e20(); // Function GameplayAbilities.GameplayAbilityWorldReticle.*3327db0e20 // None // @ game+0x6738ad0
	struct FName SetReticleMaterialParamFloat(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // None // @ game+0x26a108
	struct FName SetReticleMaterialParamVector(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // None // @ game+0x26a108
	void OnValidTargetChanged(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // None // @ game+0x26a108
	void OnTargetingAnActor(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // None // @ game+0x26a108
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x5c0 (Inherited: 0x3f8)
struct AGameplayAbilityTargetActor : AActor {
	bool *368730d010; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct F*22205d802a StartLocation; // 0x400(0x70)
	char pad_470[0xe0]; // 0x470(0xe0)
	struct APlayerController* MasterPC; // 0x550(0x08)
	struct UGameplayAbility* OwningAbility; // 0x558(0x08)
	bool bDestroyOnConfirmation; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct AActor* SourceActor; // 0x568(0x08)
	struct F*471b21c535 ReticleParams; // 0x570(0x0c)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct UClass* ReticleClass; // 0x580(0x08)
	struct F*90f7ca8447 Filter; // 0x588(0x10)
	bool bDebug; // 0x598(0x01)
	char pad_599[0x17]; // 0x599(0x17)
	struct UAbilitySystemComponent* *757aa9eaa5; // 0x5b0(0x08)
	char pad_5B8[0x8]; // 0x5b8(0x08)

	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // None // @ game+0x567b1d0
	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // None // @ game+0x5658df0
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastDelegate TimeElapsed; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)

	void *6a095f6b17(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*6a095f6b17 // None // @ game+0x6740614
	struct UGameplayAbility* FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // None // @ game+0x6738cfc
	struct UClass* *96d7c83000(struct FName TaskInstanceName); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*96d7c83000 // None // @ game+0x67404a4
	struct AGameplayAbilityTargetActor* BeginSpawningActor(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // None // @ game+0x67373c8
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x138 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastDelegate OnActivate; // 0x80(0x10)
	char pad_90[0xa8]; // 0x90(0xa8)

	bool *3553cdb436(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*3553cdb436 // None // @ game+0x6740a38
	struct FGameplayTagQuery *02f90247c0(bool IncludeTriggeredAbilities); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*02f90247c0 // None // @ game+0x6740e58
	void *9c2e79e614(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*9c2e79e614 // None // @ game+0x673c2c0
	bool *a42835dbea(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*a42835dbea // None // @ game+0x6740c20
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xf8 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastDelegate OnCommit; // 0x80(0x10)
	char pad_90[0x68]; // 0x90(0x68)

	void *70d08d733a(struct FGameplayTag WithTag, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*70d08d733a // None // @ game+0x6741068
	bool *282f9de9f9(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*282f9de9f9 // None // @ game+0x67411fc
	void *881e60814b(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*881e60814b // None // @ game+0x673c350
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xe0 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x48]; // 0x90(0x48)
	struct UAbilitySystemComponent* *224fb3624b; // 0xd8(0x08)

	struct FGameplayTag *def1cb2c8f(struct FGameplayTag WithoutSrcTag, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*def1cb2c8f // None // @ game+0x67413b8
	struct AActor* *d81f86d49f(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*d81f86d49f // None // @ game+0x6741b8c
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x110 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x78]; // 0x90(0x78)
	struct UAbilitySystemComponent* *224fb3624b; // 0x108(0x08)

	void *ef0d5efa1b(struct FGameplayAttribute AttributeNumerator, enum class EWaitAttributeChangeComparison ComparisonType, bool bTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.*ef0d5efa1b // None // @ game+0x674161c
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xd8 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x40]; // 0x90(0x40)
	struct UAbilitySystemComponent* *224fb3624b; // 0xd0(0x08)

	struct AActor* *7ef481e7f3(struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.*7ef481e7f3 // None // @ game+0x6741928
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastDelegate OnCancel; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // None // @ game+0x673d010
	struct UGameplayAbility* *eb3807bf3f(); // Function GameplayAbilities.AbilityTask_WaitCancel.*eb3807bf3f // None // @ game+0x6740784
	void *3606dc7d05(); // Function GameplayAbilities.AbilityTask_WaitCancel.*3606dc7d05 // None // @ game+0x673c7e0
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // None // @ game+0x673c808
	void *9898fafeb3(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.*9898fafeb3 // None // @ game+0x6740818
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x80(0x10)
	struct FMulticastDelegate OnCancel; // 0x90(0x10)
	char pad_A0[0x8]; // 0xa0(0x08)

	void *3606dc7d05(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*3606dc7d05 // None // @ game+0x673c7f4
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // None // @ game+0x673d024
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // None // @ game+0x673c898
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // None // @ game+0x673d038
	struct UGameplayAbility* *9e9ba02105(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*9e9ba02105 // None // @ game+0x67408ac
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastDelegate OnFinish; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	float WaitDelay(); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // None // @ game+0x6740940
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1b8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_80[0x128]; // 0x80(0x128)
	struct UAbilitySystemComponent* *224fb3624b; // 0x1a8(0x08)
	char pad_1B0[0x8]; // 0x1b0(0x08)

	void *3b099110cf(struct F*8f5b72b64a Param1); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.*3b099110cf // None // @ game+0x673c640
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	struct F*c6f2db32e3 *ff2ca12020(struct F*c6f2db32e3 TargetTagRequirements, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*ff2ca12020 // None // @ game+0x6742114
	bool *93b616b94c(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*93b616b94c // None // @ game+0x6742518
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	bool *43ae72aa43(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*43ae72aa43 // None // @ game+0x67428c4
	bool *1c6884a800(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery SourceTagQuery, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*1c6884a800 // None // @ game+0x6742cc8
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x128 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastDelegate bLocked; // 0x80(0x10)
	char pad_90[0x88]; // 0x90(0x88)
	struct UAbilitySystemComponent* *224fb3624b; // 0x118(0x08)
	char pad_120[0x8]; // 0x120(0x08)

	struct F*c6f2db32e3 *649f9c67f8(struct F*c6f2db32e3 TargetTagRequirements, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.*649f9c67f8 // None // @ game+0x6743074
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastDelegate OnRemoved; // 0x80(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x90(0x10)
	char pad_A0[0x20]; // 0xa0(0x20)

	void *7b96e9f323(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*7b96e9f323 // None // @ game+0x673cb0c
	void *cc43cfcab8(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*cc43cfcab8 // None // @ game+0x6741ea0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	void *e4f9f9b205(struct F*195c5760a3 Param0); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*e4f9f9b205 // None // @ game+0x673cc0c
	struct F*195c5760a3 *b22b7044f5(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*b22b7044f5 // None // @ game+0x6741f90
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastDelegate EventReceived; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct UAbilitySystemComponent* *5d826c8f15; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	bool *f4cb79d62d(); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.*f4cb79d62d // None // @ game+0x6743374
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_80[0x10]; // 0x80(0x10)
	struct UAbilitySystemComponent* *5d826c8f15; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	void *1ce12a2a7c(); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.*1ce12a2a7c // None // @ game+0x6738eac
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Added; // 0xa8(0x10)

	bool *d7d3a0fd77(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.*d7d3a0fd77 // None // @ game+0x674357c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Removed; // 0xa8(0x10)

	void *d6a5913162(struct UGameplayAbility* OwningAbility, struct AActor* InOptionalExternalTarget); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.*d6a5913162 // None // @ game+0x6743714
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastDelegate OnPress; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void *6231448c92(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*6231448c92 // None // @ game+0x673d350
	bool *907c8a0b34(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*907c8a0b34 // None // @ game+0x67438ac
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastDelegate OnRelease; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void *df2c3cc014(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*df2c3cc014 // None // @ game+0x673d364
	void *e2fd9f0633(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*e2fd9f0633 // None // @ game+0x6743994
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void OnMovementModeChange(struct ACharacter* Param0); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // None // @ game+0x673d220
	enum class EMovementMode *adc46f4d7a(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.*adc46f4d7a // None // @ game+0x67385d0
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x90 (Inherited: 0x80)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastDelegate OnOverlap; // 0x80(0x10)

	struct FVector OnHitCallback(); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // None // @ game+0x673cd3c
	void *f180d9b239(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitOverlap.*f180d9b239 // None // @ game+0x6742080
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc0 (Inherited: 0x80)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastDelegate ValidData; // 0x80(0x10)
	struct FMulticastDelegate Cancelled; // 0x90(0x10)
	struct UClass* TargetClass; // 0xa0(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)

	void *c4dd75dc59(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*c4dd75dc59 // None // @ game+0x673d72c
	void FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // None // @ game+0x6738dd4
	void *0e5e9000cc(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*0e5e9000cc // None // @ game+0x673d80c
	struct AGameplayAbilityTargetActor* BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // None // @ game+0x6737504
	void *111945734a(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*111945734a // None // @ game+0x673da20
	void *8b825ee959(struct F*e778ffd93a Param0); // Function GameplayAbilities.AbilityTask_WaitTargetData.*8b825ee959 // None // @ game+0x673d8ec
	struct AGameplayAbilityTargetActor* *e26549f1a9(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*e26549f1a9 // None // @ game+0x6743ce4
	void *bc416a405e(struct UGameplayAbility* OwningAbility, enum class EGameplayTargetingConfirmation ConfirmationType); // Function GameplayAbilities.AbilityTask_WaitTargetData.*bc416a405e // None // @ game+0x6743b60
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastDelegate OnVelocityChage; // 0x80(0x10)
	struct UMovementComponent* *f9bbfa339c; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	void *b03ab6b3ac(struct FVector Direction); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.*b03ab6b3ac // None // @ game+0x67386b8
};

// Class GameplayAbilities.*4232410033
// Size: 0x70 (Inherited: 0x30)
struct U*4232410033 : UAttributeSet {
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

// Class GameplayAbilities.*1a5b439a63
// Size: 0x570 (Inherited: 0x570)
struct U*1a5b439a63 : UGameplayAbility {
	struct FGameplayTagContainer *9b26c89cfb; // 0x260(0x20)
	bool *786784c62b; // 0x280(0x01)
	bool *f9c2669cbf; // 0x281(0x01)
	enum class *643ca7fc97 *61c228a926; // 0x286(0x01)
	enum class *e05b2709c2 *e304cbf120; // 0x287(0x01)
	bool *5eecdf5a7a; // 0x288(0x01)
	bool *e942a70aba; // 0x289(0x01)
	struct F*e3981689eb CurrentActivationInfo; // 0x290(0x20)
	struct F*3a9386b60a CurrentEventData; // 0x2b0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy *097386766c; // 0x360(0x01)
	enum class EGameplayAbilityNetSecurityPolicy *23529a853a; // 0x361(0x01)
	struct UClass* *bb06072327; // 0x368(0x08)
	struct TArray<struct F*487c57aeb0> *aa5993b86f; // 0x370(0x10)
	struct UClass* *84aeb768bb; // 0x380(0x08)
	struct FGameplayTagContainer *f54fdd0a92; // 0x388(0x20)
	struct FGameplayTagContainer *58ef6ac272; // 0x3a8(0x20)
	struct FGameplayTagContainer *d4ffe25344; // 0x3c8(0x20)
	struct FGameplayTagContainer *e163417c92; // 0x3e8(0x20)
	struct FGameplayTagContainer *558ea3a4cd; // 0x408(0x20)
	struct FGameplayTagContainer *4348e866d8; // 0x428(0x20)
	struct FGameplayTagContainer *0e9b43d260; // 0x448(0x20)
	struct FGameplayTagContainer *a674cf089a; // 0x468(0x20)
	struct FGameplayTagContainer *bdb6b48888; // 0x488(0x20)
	struct TArray<struct UGameplayTask*> *3bd713bd21; // 0x4c8(0x10)
	struct UAnimMontage* *26b01c962b; // 0x4e8(0x08)
	bool *eedbc91ee9; // 0x550(0x01)
	bool *80c3722f29; // 0x551(0x01)
	bool *c388046d15; // 0x552(0x01)
	bool *3ab88657fb; // 0x553(0x01)
	bool bMarkPendingKillOnAbilityEnd; // 0x568(0x01)

	void *6539aa112e(); // Function GameplayAbilities.GameplayAbility.*6539aa112e // None // @ game+0x6739580
	struct FName *ac5c94f8c4(); // Function GameplayAbilities.GameplayAbility.*ac5c94f8c4 // None // @ game+0x673ac68
	void *70b0ec80a5(); // Function GameplayAbilities.GameplayAbility.*70b0ec80a5 // None // @ game+0x67390cc
	void *b1029c3c76(struct F*bcfee612de Handle); // Function GameplayAbilities.GameplayAbility.*b1029c3c76 // None // @ game+0x6738fb0
	void *061a4e2c70(); // Function GameplayAbilities.GameplayAbility.*061a4e2c70 // None // @ game+0x673fbf8
	void *a9f4ae9a50(); // Function GameplayAbilities.GameplayAbility.*a9f4ae9a50 // None // @ game+0x673a768
	struct FGameplayTagContainer *42341dc235(); // Function GameplayAbilities.GameplayAbility.*42341dc235 // None // @ game+0x6736fb0
	void *e653b19c27(bool ForceCooldown); // Function GameplayAbilities.GameplayAbility.*e653b19c27 // None // @ game+0x673a23c
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // None // @ game+0x26a108
	struct F*195c5760a3 *8f1c80e010(); // Function GameplayAbilities.GameplayAbility.*8f1c80e010 // None // @ game+0x67370e4
	bool *8c8afbd706(); // Function GameplayAbilities.GameplayAbility.*8c8afbd706 // None // @ game+0x673a330
	void *5584a57a91(struct F*bcfee612de Handle); // Function GameplayAbilities.GameplayAbility.*5584a57a91 // None // @ game+0x6739978
	void GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // None // @ game+0x6739538
	void *30d8f3e944(); // Function GameplayAbilities.GameplayAbility.*30d8f3e944 // None // @ game+0x673a214
	struct FGameplayTagContainer *acb8e5c74f(); // Function GameplayAbilities.GameplayAbility.*acb8e5c74f // None // @ game+0x6736e7c
	void *73e21fff21(); // Function GameplayAbilities.GameplayAbility.*73e21fff21 // None // @ game+0x673ad68
	void K2_ActivateAbilityFromEvent(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // None // @ game+0x26a108
	void *144d7af023(); // Function GameplayAbilities.GameplayAbility.*144d7af023 // None // @ game+0x6739954
	struct F*e778ffd93a *bdd6d9c04f(); // Function GameplayAbilities.GameplayAbility.*bdd6d9c04f // None // @ game+0x6739f7c
	void *a7db3ad40e(); // Function GameplayAbilities.GameplayAbility.*a7db3ad40e // None // @ game+0x673a154
	void *b086889cfa(); // Function GameplayAbilities.GameplayAbility.*b086889cfa // None // @ game+0x6739a94
	void *433933abb0(); // Function GameplayAbilities.GameplayAbility.*433933abb0 // None // @ game+0x6739598
	float *3921b4a965(); // Function GameplayAbilities.GameplayAbility.*3921b4a965 // None // @ game+0x673a898
	void *34b19f060f(struct UClass* GameplayEffectClass, int32 Stacks); // Function GameplayAbilities.GameplayAbility.*34b19f060f // None // @ game+0x6736794
	struct FGameplayTag *713ce252b1(); // Function GameplayAbilities.GameplayAbility.*713ce252b1 // None // @ game+0x673a540
	struct FGameplayTagContainer K2_CanActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // None // @ game+0x26a108
	void K2_ShouldAbilityRespondToEvent(struct F*3a9386b60a Payload); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // None // @ game+0x26a108
	void *21d67206b0(); // Function GameplayAbilities.GameplayAbility.*21d67206b0 // None // @ game+0x673984c
	void *0bf9053a15(); // Function GameplayAbilities.GameplayAbility.*0bf9053a15 // None // @ game+0x67387f8
	void *8123b159cc(); // Function GameplayAbilities.GameplayAbility.*8123b159cc // None // @ game+0x673abd8
	void *cdd909a2f3(); // Function GameplayAbilities.GameplayAbility.*cdd909a2f3 // None // @ game+0x673a670
	void *ab2e69dc44(); // Function GameplayAbilities.GameplayAbility.*ab2e69dc44 // None // @ game+0x673fc90
	struct FGameplayTag *5b41730a8c(); // Function GameplayAbilities.GameplayAbility.*5b41730a8c // None // @ game+0x673a3f0
	void *f0ae7a1109(); // Function GameplayAbilities.GameplayAbility.*f0ae7a1109 // None // @ game+0x673af08
	void *aa3dd02c26(); // Function GameplayAbilities.GameplayAbility.*aa3dd02c26 // None // @ game+0x673a1ec
	void *be6e5237c0(); // Function GameplayAbilities.GameplayAbility.*be6e5237c0 // None // @ game+0x67393c8
	struct F*e778ffd93a *ed5ab8efca(); // Function GameplayAbilities.GameplayAbility.*ed5ab8efca // None // @ game+0x67393ec
	void *6a6168b265(); // Function GameplayAbilities.GameplayAbility.*6a6168b265 // None // @ game+0x673a3d8
	void *8490f88a4d(); // Function GameplayAbilities.GameplayAbility.*8490f88a4d // None // @ game+0x673a1c4
	void *d34a127418(); // Function GameplayAbilities.GameplayAbility.*d34a127418 // None // @ game+0x673df28
	void *45933288ed(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.*45933288ed // None // @ game+0x6739b70
	void *a6e4beae20(); // Function GameplayAbilities.GameplayAbility.*a6e4beae20 // None // @ game+0x6739394
	void GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // None // @ game+0x6738f8c
	void *aac4b86cea(); // Function GameplayAbilities.GameplayAbility.*aac4b86cea // None // @ game+0x67378d4
	void *b33c10f60c(); // Function GameplayAbilities.GameplayAbility.*b33c10f60c // None // @ game+0x6739930
	int32 *10332caf95(); // Function GameplayAbilities.GameplayAbility.*10332caf95 // None // @ game+0x6736c60
	void K2_OnEndAbility(); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // None // @ game+0x26a108
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // None // @ game+0x26a108
	void *0126a7c539(); // Function GameplayAbilities.GameplayAbility.*0126a7c539 // None // @ game+0x6738898
	struct FName *ffe9a22546(); // Function GameplayAbilities.GameplayAbility.*ffe9a22546 // None // @ game+0x6738230
	void *dc72fcf017(); // Function GameplayAbilities.GameplayAbility.*dc72fcf017 // None // @ game+0x673ae10
	void *5e66f31010(); // Function GameplayAbilities.GameplayAbility.*5e66f31010 // None // @ game+0x6739e78
	struct F*2f043f1358 *04f3597a32(); // Function GameplayAbilities.GameplayAbility.*04f3597a32 // None // @ game+0x6739d00
	struct FGameplayTag *58e33f0754(); // Function GameplayAbilities.GameplayAbility.*58e33f0754 // None // @ game+0x673e064
	void *b5c3a53167(); // Function GameplayAbilities.GameplayAbility.*b5c3a53167 // None // @ game+0x6739b4c
};

// Class GameplayAbilities.*8b9772b4da
// Size: 0x5b0 (Inherited: 0x570)
struct U*8b9772b4da : UGameplayAbility {
	struct UAnimMontage* *22aa76aafc; // 0x570(0x08)
	float PlayRate; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FName SectionName; // 0x580(0x08)
	struct TArray<struct UClass*> *cfdf04f6b2; // 0x588(0x10)
	struct TArray<struct UGameplayEffect*> *9df76845b8; // 0x598(0x10)
	char pad_5A8[0x8]; // 0x5a8(0x08)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct UGameplayAbilityBlueprint : UBlueprint {
	char bRecompileOnLoad : 1; // 0x50(0x01)
	struct UClass* ParentClass; // 0x58(0x08)
	struct UObject* *dc844bd7af; // 0x60(0x08)
	char *7285e5f110 : 1; // 0x68(0x01)
	char *cab1411839 : 1; // 0x68(0x01)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x70(0x08)
	struct TArray<struct UActorComponent*> *9ef71c20e3; // 0x78(0x10)
	struct TArray<struct U*a7a0563fde*> *259f597d99; // 0x88(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x98(0x08)
	enum class EBlueprintType BlueprintType; // 0xa0(0x01)
	int32 *d085bc18a1; // 0xa4(0x04)
	bool bNativize; // 0x190(0x01)
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x40 (Inherited: 0x30)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct F*d0cb6642f7> Abilities; // 0x30(0x10)
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
	float MaxRange; // 0x5b8(0x04)
	struct FCollisionProfileName TraceProfile; // 0x5c0(0x08)
	bool bTraceAffectsAimPitch; // 0x5c8(0x01)
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x430 (Inherited: 0x418)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x418(0x08)
	struct TArray<struct UActorComponent*> *4faf664733; // 0x420(0x10)
};

// Class GameplayAbilities.*2c0858f6ae
// Size: 0x28 (Inherited: 0x28)
struct U*2c0858f6ae : UObject {
};

// Class GameplayAbilities.*6246dff8ce
// Size: 0x28 (Inherited: 0x28)
struct U*6246dff8ce : U*2c0858f6ae {
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x460 (Inherited: 0x30)
struct UGameplayCueManager : UDataAsset {
	char pad_30[0x70]; // 0x30(0x70)
	struct F*a4edb87042 *7a24790df5; // 0xa0(0xb0)
	struct F*a4edb87042 *42c5a2e702; // 0x150(0xb0)
	char pad_200[0x1a0]; // 0x200(0x1a0)
	struct TArray<struct UClass*> *8a8669126e; // 0x3a0(0x10)
	struct TArray<struct UClass*> *01e6394dd9; // 0x3b0(0x10)
	struct TArray<struct F*776b9f415c> *8eea2e48cd; // 0x3c0(0x10)
	int32 *1fbdacf7ae; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct F*a9d1e7f1fe> *0cde88a10a; // 0x3d8(0x10)
	char pad_3E8[0x78]; // 0x3e8(0x78)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x458 (Inherited: 0x3f8)
struct AGameplayCueNotify_Actor : AActor {
	bool *8782840932; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	float *77c044b0c5; // 0x3fc(0x04)
	bool *af5d18204a; // 0x400(0x01)
	bool *d6850e36f4; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct FGameplayTag GameplayCueTag; // 0x408(0x08)
	struct FName GameplayCueName; // 0x410(0x08)
	bool *16d62515b3; // 0x418(0x01)
	bool *169558acdb; // 0x419(0x01)
	bool *1c7e5922c2; // 0x41a(0x01)
	bool *9aa29021a4; // 0x41b(0x01)
	bool *794ffa7602; // 0x41c(0x01)
	bool *369a187a2a; // 0x41d(0x01)
	char pad_41E[0x2]; // 0x41e(0x02)
	int32 *967d35ef67; // 0x420(0x04)
	char pad_424[0x34]; // 0x424(0x34)

	void K2_HandleGameplayCue(struct AActor* MyTarget); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // None // @ game+0x26a108
	struct F*2f043f1358 OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // None // @ game+0x673d378
	struct F*2f043f1358 OnActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // None // @ game+0x673c3e0
	void WhileActive(struct AActor* MyTarget); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // None // @ game+0x6743e68
	struct F*2f043f1358 OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // None // @ game+0x673c8ac
	void OnOwnerDestroyed(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // None // @ game+0x56e9e40
	void *f8f1bf9f9f(); // Function GameplayAbilities.GameplayCueNotify_Actor.*f8f1bf9f9f // None // @ game+0x97e204
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x40 (Inherited: 0x28)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x28(0x08)
	struct FName GameplayCueName; // 0x30(0x08)
	bool *169558acdb; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	struct F*2f043f1358 OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // None // @ game+0x673c9dc
	struct AActor* WhileActive(struct F*2f043f1358 Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // None // @ game+0x6743f98
	void K2_HandleGameplayCue(struct AActor* MyTarget); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // None // @ game+0x26a108
	struct F*2f043f1358 OnActive(); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // None // @ game+0x673c510
	struct AActor* OnRemove(struct F*2f043f1358 Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // None // @ game+0x673d4a8
};

// Class GameplayAbilities.*67d64823ad
// Size: 0x50 (Inherited: 0x40)
struct U*67d64823ad : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x40(0x08)
	struct UParticleSystem* ParticleSystem; // 0x48(0x08)
};

// Class GameplayAbilities.*62132a7048
// Size: 0x90 (Inherited: 0x30)
struct U*62132a7048 : UDataAsset {
	struct TArray<struct F*0f16ebd187> *5cd9b61453; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class GameplayAbilities.*0b8828e786
// Size: 0x880 (Inherited: 0x880)
struct U*0b8828e786 : UGameplayEffect {
	enum class EGameplayEffectDurationType *91c7e89b25; // 0x30(0x01)
	struct FGameplayEffectModifierMagnitude *903a1a4365; // 0x38(0x200)
	struct FScalableFloat Period; // 0x238(0x30)
	bool bExecutePeriodicEffectOnApplication; // 0x268(0x01)
	enum class *8be2c469a1 PeriodicInhibitionPolicy; // 0x269(0x01)
	struct TArray<struct F*50980be3ae> Modifiers; // 0x270(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x280(0x10)
	struct FScalableFloat *c7740ff9ff; // 0x290(0x30)
	struct TArray<struct UClass*> *694a9720de; // 0x2c0(0x10)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x2d0(0x10)
	struct TArray<struct F*458fe9bc56> ConditionalGameplayEffects; // 0x2e0(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x2f0(0x10)
	bool bDenyOverflowApplication; // 0x300(0x01)
	bool bClearStackOnOverflow; // 0x301(0x01)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x308(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x318(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x328(0x01)
	bool *fc3bb63163; // 0x329(0x01)
	struct TArray<struct F*bf0f65bacc> GameplayCues; // 0x330(0x10)
	struct UGameplayEffectUIData* UIData; // 0x340(0x08)
	struct F*0c4e6654e0 InheritableGameplayEffectTags; // 0x348(0x60)
	struct F*0c4e6654e0 InheritableOwnedTagsContainer; // 0x3a8(0x60)
	struct F*c6f2db32e3 OngoingTagRequirements; // 0x408(0x40)
	struct F*c6f2db32e3 ApplicationTagRequirements; // 0x448(0x40)
	struct F*c6f2db32e3 RemovalTagRequirements; // 0x488(0x40)
	struct F*0c4e6654e0 RemoveGameplayEffectsWithTags; // 0x4c8(0x60)
	struct F*c6f2db32e3 GrantedApplicationImmunityTags; // 0x528(0x40)
	struct F*9c6a94f9ba GrantedApplicationImmunityQuery; // 0x570(0x170)
	struct F*9c6a94f9ba RemoveGameplayEffectQuery; // 0x6f0(0x170)
	enum class EGameplayEffectStackingType StackingType; // 0x861(0x01)
	int32 StackLimitCount; // 0x864(0x04)
	enum class *d1650898e1 StackDurationRefreshPolicy; // 0x868(0x01)
	enum class *6b186b2998 StackPeriodResetPolicy; // 0x869(0x01)
	enum class *57c3f5f2bf StackExpirationPolicy; // 0x86a(0x01)
	struct TArray<struct F*d50d69f3d3> GrantedAbilities; // 0x870(0x10)
};

// Class GameplayAbilities.*633e645b66
// Size: 0x40 (Inherited: 0x38)
struct U*633e645b66 : U*d8da158b4f {
	bool *ba33479ec7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	struct F*8f5b72b64a CalculateBaseMagnitude(); // Function GameplayAbilities.*633e645b66.CalculateBaseMagnitude // None // @ game+0x6737640
};

// Class GameplayAbilities.*232c7a0322
// Size: 0x28 (Inherited: 0x28)
struct U*232c7a0322 : UObject {
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.*2b1033dfd7
// Size: 0x40 (Inherited: 0x28)
struct U*2b1033dfd7 : UGameplayEffectUIData {
	struct FText Description; // 0x28(0x18)
};

// Class GameplayAbilities.*52f60d886c
// Size: 0x210 (Inherited: 0x30)
struct U*52f60d886c : UDataAsset {
	struct TArray<struct F*ebbd9c1bc4> Entries; // 0x30(0x10)
	char pad_40[0x1d0]; // 0x40(0x1d0)

	struct FGameplayTag *6949283f0f(int32 Param1); // Function GameplayAbilities.*52f60d886c.*6949283f0f // None // @ game+0x6740098
};

// Class GameplayAbilities.*ecc9d2c833
// Size: 0x28 (Inherited: 0x28)
struct U*ecc9d2c833 : UInterface {
};


// Class GameplayAbilities.*de9a5a285e
// Size: 0x28 (Inherited: 0x28)
struct U*de9a5a285e : UInterface {
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1850 (Inherited: 0x260)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_260[0x8]; // 0x260(0x08)
	char *62f9bed079 : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct TArray<struct F*f0cf8b7179> *8a1512d2b0; // 0x270(0x10)
	struct FName AffectedAnimInstanceTag; // 0x280(0x08)
	char pad_288[0x5c8]; // 0x288(0x5c8)
	float *e24992b890; // 0x850(0x04)
	float *f462cbec4d; // 0x854(0x04)
	char pad_858[0x80]; // 0x858(0x80)
	bool *5f8615ab34; // 0x8d8(0x01)
	bool *451f1b23f9; // 0x8d9(0x01)
	bool *6b82b5f3cb; // 0x8da(0x01)
	bool *d48b28e060; // 0x8db(0x01)
	char pad_8DC[0x4]; // 0x8dc(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> *4b41094e7e; // 0x8e0(0x10)
	char pad_8F0[0x38]; // 0x8f0(0x38)
	struct F*d30baabecf ActivatableAbilities; // 0x928(0xc8)
	char pad_9F0[0x30]; // 0x9f0(0x30)
	struct TArray<struct UGameplayAbility*> *a42ca7e6e2; // 0xa20(0x10)
	char pad_A30[0x20c]; // 0xa30(0x20c)
	bool *99108c550b; // 0xc3c(0x01)
	bool *a65b21ff95; // 0xc3d(0x01)
	char pad_C3E[0x2]; // 0xc3e(0x02)
	struct F*aed4390e2f *73a0fd3dc9; // 0xc40(0x30)
	char pad_C70[0xa0]; // 0xc70(0xa0)
	struct F*fd3ab3cc0d *59aae4b2e8; // 0xd10(0x4e0)
	struct F*d583d4ccf6 *48269715ca; // 0x11f0(0xd0)
	struct F*d583d4ccf6 *711668646b; // 0x12c0(0xd0)
	char pad_1390[0x318]; // 0x1390(0x318)
	struct TArray<struct UAttributeSet*> *ab243ac431; // 0x16a8(0x10)
	struct TArray<struct FString> *cb30c9d802; // 0x16b8(0x10)
	struct AActor* *282b1f70c0; // 0x16c8(0x08)
	struct AActor* AvatarActor; // 0x16d0(0x08)
	struct F*c838a82bb4 *814d77c69e; // 0x16d8(0x38)
	struct TArray<bool> *9afdd0b505; // 0x1710(0x10)
	struct F*684cb9739a *60e84b4d68; // 0x1720(0x60)
	struct TArray<struct FString> *265ac99221; // 0x1780(0x10)
	struct F*6fe0834992 *6fe0834992; // 0x1790(0xc0)

	void *67500f8353(); // Function GameplayAbilities.AbilitySystemComponent.*67500f8353 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x69b9e0c
	void *49c1518332(); // Function GameplayAbilities.AbilitySystemComponent.*49c1518332 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69b1784
	void *c5f11a4430(); // Function GameplayAbilities.AbilitySystemComponent.*c5f11a4430 // Native|Public|BlueprintCallable // @ game+0x65df7ec
	struct UAbilitySystemComponent* *855e5aece9(); // Function GameplayAbilities.AbilitySystemComponent.*855e5aece9 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69b18bc
	void *83ad8adfce(); // Function GameplayAbilities.AbilitySystemComponent.*83ad8adfce // Native|Public|BlueprintCallable // @ game+0x69bafe8
	void *c16f2a63eb(struct FGameplayTagContainer Param0); // Function GameplayAbilities.AbilitySystemComponent.*c16f2a63eb // Net|Native|Event|NetMulticast|Public // @ game+0x69b7380
	struct F*ef0a92a7f7 *4bd07bab5f(); // Function GameplayAbilities.AbilitySystemComponent.*4bd07bab5f // Final|Native|Public|HasOutParms|BlueprintCallable|Const // @ game+0x69b43b4
	void *03c3bee831(struct F*6a42616980 Param1); // Function GameplayAbilities.AbilitySystemComponent.*03c3bee831 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x69b9af4
	void *28ab2ec9e0(struct F*ec4dfd3d93 ActiveHandle); // Function GameplayAbilities.AbilitySystemComponent.*28ab2ec9e0 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x69bac88
	struct F*4bfab3802b *886d2bafd4(); // Function GameplayAbilities.AbilitySystemComponent.*886d2bafd4 // Net|Native|Event|NetMulticast|Public // @ game+0x69b6634
	struct UAnimMontage* *0263778673(float Param1); // Function GameplayAbilities.AbilitySystemComponent.*0263778673 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x69b9820
	void *5c8ce3349c(bool Param1); // Function GameplayAbilities.AbilitySystemComponent.*5c8ce3349c // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x69baa20
	struct F*66a0d1cb95 *c685ac9b12(); // Function GameplayAbilities.AbilitySystemComponent.*c685ac9b12 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x69ba6cc
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // Native|Protected // @ game+0x5909980
	void *9c500faeda(); // Function GameplayAbilities.AbilitySystemComponent.*9c500faeda // Native|Public|BlueprintCallable // @ game+0xbce874
	void *e79e0e6bf3(struct F*ef8dc34671 Param0); // Function GameplayAbilities.AbilitySystemComponent.*e79e0e6bf3 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x69b30e0
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // Native|Public // @ game+0x58c2cd8
	struct F*66a0d1cb95 *e4182be64c(); // Function GameplayAbilities.AbilitySystemComponent.*e4182be64c // Net|Native|Event|NetMulticast|Public // @ game+0x69b676c
	void *50cde9d9b7(struct UClass* Attributes); // Function GameplayAbilities.AbilitySystemComponent.*50cde9d9b7 // Final|Native|Public|BlueprintCallable // @ game+0x69b594c
	void *0c5baef8d3(); // Function GameplayAbilities.AbilitySystemComponent.*0c5baef8d3 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x69b9ce4
	struct FGameplayTag *be1593507e(); // Function GameplayAbilities.AbilitySystemComponent.*be1593507e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b4d68
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // Native|Protected // @ game+0x69b8898
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // Native|Public // @ game+0x5907f20
	void *dbe66c96b7(struct F*ef8dc34671 Param0); // Function GameplayAbilities.AbilitySystemComponent.*dbe66c96b7 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x69b959c
	struct F*2b830333e1 *f5cf14c714(struct UClass* GameplayEffectClass); // Function GameplayAbilities.AbilitySystemComponent.*f5cf14c714 // Final|Native|Public|BlueprintCallable // @ game+0x69b1d30
	struct FGameplayTagContainer *2d70470eb9(); // Function GameplayAbilities.AbilitySystemComponent.*2d70470eb9 // Final|Native|Public|BlueprintCallable // @ game+0x69b8cf4
	void *fb6bd69b23(struct UAnimMontage* Param0); // Function GameplayAbilities.AbilitySystemComponent.*fb6bd69b23 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x69b970c
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void AbilityAbilityKey__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	struct FGameplayAttribute *2d676432fc(); // Function GameplayAbilities.AbilitySystemComponent.*2d676432fc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b49dc
	void *bb0113fb37(); // Function GameplayAbilities.AbilitySystemComponent.*bb0113fb37 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x69b946c
	void *44ff7985fb(); // Function GameplayAbilities.AbilitySystemComponent.*44ff7985fb // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x69b9d30
	void *3520b25e6d(); // Function GameplayAbilities.AbilitySystemComponent.*3520b25e6d // Final|Native|Public|BlueprintCallable // @ game+0x69b8de8
	struct F*2b830333e1 *f92517261e(struct UClass* GameplayEffectClass); // Function GameplayAbilities.AbilitySystemComponent.*f92517261e // Final|Native|Public|BlueprintCallable // @ game+0x69b1b90
	struct F*66a0d1cb95 *a7039d9a05(); // Function GameplayAbilities.AbilitySystemComponent.*a7039d9a05 // Net|Native|Event|NetMulticast|Public // @ game+0x69b6f68
	void *dc142f74eb(struct UClass* SourceGameplayEffect, bool bEnforceOnGoingCheck); // Function GameplayAbilities.AbilitySystemComponent.*dc142f74eb // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x69b48ac
	bool *1c70d2b7aa(); // Function GameplayAbilities.AbilitySystemComponent.*1c70d2b7aa // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x69ba88c
	struct F*ef0a92a7f7 *f00e6d5d49(); // Function GameplayAbilities.AbilitySystemComponent.*f00e6d5d49 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x69bad6c
	void *a5b86c7e47(struct F*ef8dc34671 Param0, struct F*8fa95bb31f Param2); // Function GameplayAbilities.AbilitySystemComponent.*a5b86c7e47 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x69ba418
	void MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b5abc
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // Final|Native|Public // @ game+0x69b88b0
	void *e3ea1ee8c0(); // Function GameplayAbilities.AbilitySystemComponent.*e3ea1ee8c0 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x69b3460
	void *ad47c42f4e(struct F*ef8dc34671 Param0); // Function GameplayAbilities.AbilitySystemComponent.*ad47c42f4e // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x69b2d08
	bool *b48c76efd1(); // Function GameplayAbilities.AbilitySystemComponent.*b48c76efd1 // Final|Native|Public|BlueprintCallable // @ game+0x69bb628
	struct FGameplayTagContainer *addfb0be78(); // Function GameplayAbilities.AbilitySystemComponent.*addfb0be78 // Final|Native|Public|BlueprintCallable|Const // @ game+0x69b450c
	void *92dfffc944(struct UClass* GameplayEffectClass, struct F*2b830333e1 Context); // Function GameplayAbilities.AbilitySystemComponent.*92dfffc944 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b5ca0
	struct F*66a0d1cb95 *4ba2cacb46(); // Function GameplayAbilities.AbilitySystemComponent.*4ba2cacb46 // Net|Native|Event|NetMulticast|Public // @ game+0x69b647c
	void *523e81691c(); // Function GameplayAbilities.AbilitySystemComponent.*523e81691c // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x69b9ebc
	void *f086c32b80(struct F*66a0d1cb95 Param1); // Function GameplayAbilities.AbilitySystemComponent.*f086c32b80 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x69b2e08
	struct FGameplayTagContainer *9bbf48903b(); // Function GameplayAbilities.AbilitySystemComponent.*9bbf48903b // Final|Native|Public|BlueprintCallable // @ game+0x69b8edc
	struct F*66a0d1cb95 *513139c32c(); // Function GameplayAbilities.AbilitySystemComponent.*513139c32c // Net|Native|Event|NetMulticast|Public // @ game+0x69b6abc
	void *4784049b8c(struct UClass* GameplayEffect); // Function GameplayAbilities.AbilitySystemComponent.*4784049b8c // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x69b90c4
	struct F*66a0d1cb95 *bc0ee136c4(); // Function GameplayAbilities.AbilitySystemComponent.*bc0ee136c4 // Net|Native|Event|NetMulticast|Public // @ game+0x69b7168
	void *2e74816fd8(); // Function GameplayAbilities.AbilitySystemComponent.*2e74816fd8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58aa96c
	void *b80a67a8e4(struct UAnimMontage* Param0); // Function GameplayAbilities.AbilitySystemComponent.*b80a67a8e4 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x69b99e0
	void TryActivateAbilitiesByTag(struct FGameplayTagContainer GameplayTagContainer); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69bb4d4
	struct TArray<struct FString> *c754d13008(); // Function GameplayAbilities.AbilitySystemComponent.*c754d13008 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x69b3200
	enum class EAbilityGenericReplicatedEvent *b41e2d0ef9(struct F*ef8dc34671 Param1); // Function GameplayAbilities.AbilitySystemComponent.*b41e2d0ef9 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x69b9f6c
	void *b55ffef5f0(struct FGameplayTag Param0); // Function GameplayAbilities.AbilitySystemComponent.*b55ffef5f0 // Net|Native|Event|NetMulticast|Public // @ game+0x69b6914
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // Net|Native|Event|NetMulticast|Public // @ game+0x69b6c74
	struct F*66a0d1cb95 NetMulticast_InvokeGameplayCueExecuted_WithParams(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // Net|Native|Event|NetMulticast|Public // @ game+0x69b6dc0
	void *f4c4ee05a7(); // Function GameplayAbilities.AbilitySystemComponent.*f4c4ee05a7 // Final|Native|Public|BlueprintCallable // @ game+0x69b8cf4
	int32 RemoveActiveGameplayEffect(); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x69b8fd0
	struct F*66a0d1cb95 *26ac16d0af(struct F*66a0d1cb95 Param3); // Function GameplayAbilities.AbilitySystemComponent.*26ac16d0af // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x69ba188
	struct F*ef8dc34671 *2f438f5c8c(); // Function GameplayAbilities.AbilitySystemComponent.*2f438f5c8c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x69b3310
	struct F*ef8dc34671 *929fa4cc49(); // Function GameplayAbilities.AbilitySystemComponent.*929fa4cc49 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x69b2c28
	void *5bf405937f(); // Function GameplayAbilities.AbilitySystemComponent.*5bf405937f // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x69b2fc0
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

// Class GameplayAbilities.*4b98fd5b79
// Size: 0x38 (Inherited: 0x28)
struct U*4b98fd5b79 : UObject {
	struct TArray<struct F*a220ab4781> RelevantAttributesToCapture; // 0x28(0x10)
};

// Class GameplayAbilities.*de4a1b2a14
// Size: 0x40 (Inherited: 0x38)
struct U*de4a1b2a14 : U*4b98fd5b79 {
	bool bRequiresPassedInTags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	void Execute(struct F*7fd7e4fa4d ExecutionParams); // Function GameplayAbilities.*de4a1b2a14.Execute // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x69b3bec
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x570 (Inherited: 0x28)
struct UGameplayAbility : UObject {
	char pad_28[0x238]; // 0x28(0x238)
	struct FGameplayTagContainer *bd4922c11b; // 0x260(0x20)
	bool *56059caa84; // 0x280(0x01)
	bool *3767917a59; // 0x281(0x01)
	char pad_282[0x4]; // 0x282(0x04)
	enum class *b6ce87a358 *e77af286b9; // 0x286(0x01)
	enum class *8ae596defb *fcd6604c0b; // 0x287(0x01)
	bool *8ded8b4804; // 0x288(0x01)
	bool *b5d1baa9f9; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct F*6a42616980 CurrentActivationInfo; // 0x290(0x20)
	struct F*35341a2d42 CurrentEventData; // 0x2b0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy *4bc2db944e; // 0x360(0x01)
	enum class EGameplayAbilityNetSecurityPolicy *5a5b82cf5a; // 0x361(0x01)
	char pad_362[0x6]; // 0x362(0x06)
	struct UClass* *46e65f80a3; // 0x368(0x08)
	struct TArray<struct F*e3004e6158> *2885166003; // 0x370(0x10)
	struct UClass* *ef57e6c97b; // 0x380(0x08)
	struct FGameplayTagContainer *6c6505f6de; // 0x388(0x20)
	struct FGameplayTagContainer *c23ec81c5a; // 0x3a8(0x20)
	struct FGameplayTagContainer *1b47118555; // 0x3c8(0x20)
	struct FGameplayTagContainer *5c5342673b; // 0x3e8(0x20)
	struct FGameplayTagContainer *153d10a88d; // 0x408(0x20)
	struct FGameplayTagContainer *6ac2715799; // 0x428(0x20)
	struct FGameplayTagContainer *d72262c83d; // 0x448(0x20)
	struct FGameplayTagContainer *4e4429a049; // 0x468(0x20)
	struct FGameplayTagContainer *2359da15e0; // 0x488(0x20)
	char pad_4A8[0x20]; // 0x4a8(0x20)
	struct TArray<struct UGameplayTask*> *9886fae8f4; // 0x4c8(0x10)
	char pad_4D8[0x10]; // 0x4d8(0x10)
	struct UAnimMontage* *0198870c84; // 0x4e8(0x08)
	char pad_4F0[0x60]; // 0x4f0(0x60)
	bool *a0e3b46900; // 0x550(0x01)
	bool *5bf711d808; // 0x551(0x01)
	bool *435b06b050; // 0x552(0x01)
	bool *c5b0fea3f6; // 0x553(0x01)
	char pad_554[0x14]; // 0x554(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)

	int32 *f5cf14c714(); // Function GameplayAbilities.GameplayAbility.*f5cf14c714 // Final|Native|Protected|BlueprintCallable // @ game+0x69b1f24
	struct FGameplayTag *8028a000da(struct F*2b830333e1 Context); // Function GameplayAbilities.GameplayAbility.*8028a000da // Native|Protected|BlueprintCallable // @ game+0x69b4e30
	void *7ec3cae440(); // Function GameplayAbilities.GameplayAbility.*7ec3cae440 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b4c14
	struct FGameplayTag *f92b3942b3(); // Function GameplayAbilities.GameplayAbility.*f92b3942b3 // Native|Protected|BlueprintCallable // @ game+0x69b9324
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	bool *ac3f57afb8(bool ForceCooldown); // Function GameplayAbilities.GameplayAbility.*ac3f57afb8 // Native|Public|BlueprintCallable // @ game+0x69b54fc
	void *cc153abeae(struct F*c0ab2cfdbe EffectSpecHandle, struct F*8fa95bb31f TargetData); // Function GameplayAbilities.GameplayAbility.*cc153abeae // Final|Native|Protected|BlueprintCallable // @ game+0x69b523c
	struct F*c0ab2cfdbe *47606964fb(); // Function GameplayAbilities.GameplayAbility.*47606964fb // Final|Native|Protected|BlueprintCallable // @ game+0x69b5138
	void *cd2880c3b9(); // Function GameplayAbilities.GameplayAbility.*cd2880c3b9 // Final|Native|Public|BlueprintCallable|Const // @ game+0x69b4e0c
	void *404f69d3ea(); // Function GameplayAbilities.GameplayAbility.*404f69d3ea // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x69b5e98
	void *624b28efa5(); // Function GameplayAbilities.GameplayAbility.*624b28efa5 // Final|Native|Protected|BlueprintCallable // @ game+0x69b3abc
	struct FName *8d9cec26ea(); // Function GameplayAbilities.GameplayAbility.*8d9cec26ea // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x69b5f28
	struct FGameplayTagContainer *444b3df618(); // Function GameplayAbilities.GameplayAbility.*444b3df618 // Final|Native|Protected|BlueprintCallable // @ game+0x69b2140
	void *ba2a95d12b(); // Function GameplayAbilities.GameplayAbility.*ba2a95d12b // Final|Native|Protected|BlueprintCallable // @ game+0x69b2b98
	void K2_CanActivateAbility(struct F*ef8dc34671 Handle); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // Event|Protected|HasOutParms|BlueprintEvent|Const // @ game+0x2cd4ac
	void K2_OnEndAbility(); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void K2_ActivateAbilityFromEvent(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void *39b5e80e29(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.*39b5e80e29 // Final|Native|Protected|BlueprintCallable // @ game+0x69b34f4
	void *3a607b042c(); // Function GameplayAbilities.GameplayAbility.*3a607b042c // Native|Public|BlueprintCallable // @ game+0x69b55f0
	void *31b5007cf5(); // Function GameplayAbilities.GameplayAbility.*31b5007cf5 // Final|Native|Public|BlueprintCallable|Const // @ game+0x69b4d54
	void *8e99d6a8ee(); // Function GameplayAbilities.GameplayAbility.*8e99d6a8ee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b4840
	void *8754f10b06(); // Function GameplayAbilities.GameplayAbility.*8754f10b06 // Native|Protected|BlueprintCallable // @ game+0x69b5698
	void K2_ShouldAbilityRespondToEvent(struct F*35341a2d42 Payload); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // Event|Protected|BlueprintEvent|Const // @ game+0x2cd4ac
	void *a9cb9b9823(); // Function GameplayAbilities.GameplayAbility.*a9cb9b9823 // Final|Native|Protected|BlueprintCallable // @ game+0x69b3b5c
	void *6c23767a65(); // Function GameplayAbilities.GameplayAbility.*6c23767a65 // Final|Native|Protected|BlueprintCallable // @ game+0x69b61c8
	void *1ad75d0055(); // Function GameplayAbilities.GameplayAbility.*1ad75d0055 // Final|Native|Public|BlueprintCallable // @ game+0x69b5414
	void *fc8f17a14e(struct F*ef8dc34671 Handle); // Function GameplayAbilities.GameplayAbility.*fc8f17a14e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x69b4c38
	void *e0eb65dfa4(); // Function GameplayAbilities.GameplayAbility.*e0eb65dfa4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b4390
	void *f94402f947(); // Function GameplayAbilities.GameplayAbility.*f94402f947 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b4bf0
	int32 *35702c2bda(int32 Stacks); // Function GameplayAbilities.GameplayAbility.*35702c2bda // Final|Native|Protected|BlueprintCallable // @ game+0x69b1a58
	void *3c428532e7(struct F*8fa95bb31f OptionalTargetData); // Function GameplayAbilities.GameplayAbility.*3c428532e7 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b46b0
	void *93bcc18ed8(); // Function GameplayAbilities.GameplayAbility.*93bcc18ed8 // Native|Public|BlueprintCallable // @ game+0x69b54ac
	void *79a27ad4f8(); // Function GameplayAbilities.GameplayAbility.*79a27ad4f8 // Final|Native|Public|BlueprintCallable|Const // @ game+0x69b5930
	void *c5f2af83f2(); // Function GameplayAbilities.GameplayAbility.*c5f2af83f2 // Native|Public|BlueprintCallable // @ game+0x69b54d4
	void GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b4250
	void *9f84fdc27b(); // Function GameplayAbilities.GameplayAbility.*9f84fdc27b // Native|Public|BlueprintCallable // @ game+0x69baf50
	struct F*ec4dfd3d93 *8b04b61c98(); // Function GameplayAbilities.GameplayAbility.*8b04b61c98 // Final|Native|Protected|BlueprintCallable // @ game+0x69b23a8
	struct F*ee84a5be65 *66581ce633(); // Function GameplayAbilities.GameplayAbility.*66581ce633 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x69b4274
	void *ecb2cdee8c(); // Function GameplayAbilities.GameplayAbility.*ecb2cdee8c // Native|Public|BlueprintCallable // @ game+0x69baeb8
	void *043014c09a(); // Function GameplayAbilities.GameplayAbility.*043014c09a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b468c
	struct FGameplayTag *65294ff4ae(); // Function GameplayAbilities.GameplayAbility.*65294ff4ae // Native|Protected|BlueprintCallable // @ game+0x69b56b0
	void *a263c278c2(); // Function GameplayAbilities.GameplayAbility.*a263c278c2 // Native|Protected|BlueprintCallable // @ game+0x69b5a28
	void *dc41f1d30d(); // Function GameplayAbilities.GameplayAbility.*dc41f1d30d // Final|Native|Protected|BlueprintCallable // @ game+0x69b6028
	void *89f6f435de(); // Function GameplayAbilities.GameplayAbility.*89f6f435de // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x69b5800
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	float *e3423c8f00(); // Function GameplayAbilities.GameplayAbility.*e3423c8f00 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b5b58
	void *7f0bf70766(); // Function GameplayAbilities.GameplayAbility.*7f0bf70766 // Native|Public|BlueprintCallable // @ game+0x69b91e8
	void *270d69f7f7(); // Function GameplayAbilities.GameplayAbility.*270d69f7f7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b4b0c
	void *575ff6ffca(); // Function GameplayAbilities.GameplayAbility.*575ff6ffca // Final|Native|Protected|BlueprintCallable // @ game+0x69b60d0
	void *43f1170e87(); // Function GameplayAbilities.GameplayAbility.*43f1170e87 // Native|Public|BlueprintCallable // @ game+0x69b5484
	void *c44d03020f(); // Function GameplayAbilities.GameplayAbility.*c44d03020f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b4658
	void GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b47fc
	void *68c6749559(struct FGameplayTagContainer WithGrantedTags); // Function GameplayAbilities.GameplayAbility.*68c6749559 // Final|Native|Protected|BlueprintCallable // @ game+0x69b2274
	struct F*66e6e9d0a8 *50dfe3fd59(); // Function GameplayAbilities.GameplayAbility.*50dfe3fd59 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x69b4fc0
	void *1dcb2f5780(); // Function GameplayAbilities.GameplayAbility.*1dcb2f5780 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b4858
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x880 (Inherited: 0x28)
struct UGameplayEffect : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EGameplayEffectDurationType *88995d608c; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FGameplayEffectModifierMagnitude *0e6af612db; // 0x38(0x200)
	struct FScalableFloat Period; // 0x238(0x30)
	bool bExecutePeriodicEffectOnApplication; // 0x268(0x01)
	enum class *7883aa26a7 PeriodicInhibitionPolicy; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct TArray<struct F*78b34c26ea> Modifiers; // 0x270(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x280(0x10)
	struct FScalableFloat *8ed90c5343; // 0x290(0x30)
	struct TArray<struct UClass*> *4baedd8ac3; // 0x2c0(0x10)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x2d0(0x10)
	struct TArray<struct F*b23d3847b8> ConditionalGameplayEffects; // 0x2e0(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x2f0(0x10)
	bool bDenyOverflowApplication; // 0x300(0x01)
	bool bClearStackOnOverflow; // 0x301(0x01)
	char pad_302[0x6]; // 0x302(0x06)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x308(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x318(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x328(0x01)
	bool *0a6d1b761b; // 0x329(0x01)
	char pad_32A[0x6]; // 0x32a(0x06)
	struct TArray<struct F*cfbad48b2f> GameplayCues; // 0x330(0x10)
	struct UGameplayEffectUIData* UIData; // 0x340(0x08)
	struct F*bd2309b738 InheritableGameplayEffectTags; // 0x348(0x60)
	struct F*bd2309b738 InheritableOwnedTagsContainer; // 0x3a8(0x60)
	struct F*be289b2c60 OngoingTagRequirements; // 0x408(0x40)
	struct F*be289b2c60 ApplicationTagRequirements; // 0x448(0x40)
	struct F*be289b2c60 RemovalTagRequirements; // 0x488(0x40)
	struct F*bd2309b738 RemoveGameplayEffectsWithTags; // 0x4c8(0x60)
	struct F*be289b2c60 GrantedApplicationImmunityTags; // 0x528(0x40)
	char pad_568[0x8]; // 0x568(0x08)
	struct F*ef0a92a7f7 GrantedApplicationImmunityQuery; // 0x570(0x170)
	char pad_6E0[0x10]; // 0x6e0(0x10)
	struct F*ef0a92a7f7 RemoveGameplayEffectQuery; // 0x6f0(0x170)
	char pad_860[0x1]; // 0x860(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0x861(0x01)
	char pad_862[0x2]; // 0x862(0x02)
	int32 StackLimitCount; // 0x864(0x04)
	enum class *03375d8f04 StackDurationRefreshPolicy; // 0x868(0x01)
	enum class *fce1089ae9 StackPeriodResetPolicy; // 0x869(0x01)
	enum class *c283cdea74 StackExpirationPolicy; // 0x86a(0x01)
	char pad_86B[0x5]; // 0x86b(0x05)
	struct TArray<struct F*1ce213372d> GrantedAbilities; // 0x870(0x10)
};

// Class GameplayAbilities.*e370fd54bb
// Size: 0x30 (Inherited: 0x28)
struct U*e370fd54bb : U*0dbf8eac01 {
	char pad_28[0x8]; // 0x28(0x08)

	void *af925b3bc7(); // Function GameplayAbilities.*e370fd54bb.*af925b3bc7 // Native|Public|BlueprintCallable // @ game+0xb1e1e4
};

// Class GameplayAbilities.*0bdb90d9f5
// Size: 0xf0 (Inherited: 0x30)
struct U*0bdb90d9f5 : U*e370fd54bb {
	struct FMulticastDelegate OnApplied; // 0x30(0x10)
	char pad_40[0xb0]; // 0x40(0xb0)

	struct AActor* OnAppliedDelegate__DelegateSignature(struct F*c0ab2cfdbe SpecHandle); // DelegateFunction GameplayAbilities.*0bdb90d9f5.OnAppliedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	bool *7fccca7598(struct F*be289b2c60 TargetTagRequirements); // Function GameplayAbilities.*0bdb90d9f5.*7fccca7598 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6949fa0
};

// Class GameplayAbilities.*c1d8349d38
// Size: 0x58 (Inherited: 0x30)
struct U*c1d8349d38 : U*e370fd54bb {
	struct FMulticastDelegate EventReceived; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)

	void EventReceivedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*c1d8349d38.EventReceivedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void *532423de07(struct FGameplayTag EventTag, bool OnlyMatchExact); // Function GameplayAbilities.*c1d8349d38.*532423de07 // Final|Native|Static|Public|BlueprintCallable // @ game+0x694a358
};

// Class GameplayAbilities.*137715b638
// Size: 0x50 (Inherited: 0x30)
struct U*137715b638 : U*e370fd54bb {
	char pad_30[0x20]; // 0x30(0x20)

	void AsyncWaitGameplayTagDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*137715b638.AsyncWaitGameplayTagDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
};

// Class GameplayAbilities.*021827460f
// Size: 0x60 (Inherited: 0x50)
struct U*021827460f : U*137715b638 {
	struct FMulticastDelegate Added; // 0x50(0x10)

	void *05e2baef2c(struct FGameplayTag Tag); // Function GameplayAbilities.*021827460f.*05e2baef2c // Final|Native|Static|Public|BlueprintCallable // @ game+0x694a4d4
};

// Class GameplayAbilities.*3760d1977e
// Size: 0x60 (Inherited: 0x50)
struct U*3760d1977e : U*137715b638 {
	struct FMulticastDelegate Removed; // 0x50(0x10)

	bool *3fcebff32a(); // Function GameplayAbilities.*3760d1977e.*3fcebff32a // Final|Native|Static|Public|BlueprintCallable // @ game+0x694a5f4
};

// Class GameplayAbilities.*f15d65d400
// Size: 0x28 (Inherited: 0x28)
struct U*f15d65d400 : UInterface {

	void *7dda0f6e9f(); // Function GameplayAbilities.*f15d65d400.*7dda0f6e9f // BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6945f74
	void BlueprintCustomHandler(); // Function GameplayAbilities.*f15d65d400.BlueprintCustomHandler // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	void *4a7c3e82f5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4a7c3e82f5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69464f0
	float *71a6223fa4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*71a6223fa4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6949008
	void *183ab25086(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*183ab25086 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6947bbc
	bool *7bed63668d(struct UAbilitySystemComponent* AbilitySystem); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7bed63668d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x694737c
	struct F*66e6e9d0a8 *5fbf0777db(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5fbf0777db // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x694680c
	void *3f8ceb2bd3(struct F*2b830333e1 EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3f8ceb2bd3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6944e88
	void *44f265707e(struct F*66e6e9d0a8 Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*44f265707e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x69474f4
	int32 *e81f72117b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e81f72117b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6947f7c
	void *776dc874b5(struct F*2b830333e1 EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*776dc874b5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6945500
	void *fb0240dffa(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*fb0240dffa // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x694527c
	bool MakeGameplayCueParameters(struct FVector Location, struct AActor* Instigator, struct UObject* SourceObject, int32 GameplayEffectLevel); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6948908
	struct F*ec4dfd3d93 *c5b9ce8307(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c5b9ce8307 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69461d8
	void *d62048b3a7(struct F*c0ab2cfdbe SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d62048b3a7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6942adc
	int32 *25673272e0(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*25673272e0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69466e4
	enum class EGameplayCueEvent *f4c0c3b8d2(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f4c0c3b8d2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6945f88
	void *d35eb987be(struct F*8fa95bb31f TargetDataHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d35eb987be // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6945db8
	bool *b63bc0b819(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b63bc0b819 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x694708c
	struct F*8b87ae35f3 *32450e403c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*32450e403c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6942740
	struct UObject* BreakGameplayCueParameters(float NormalizedMagnitude, struct F*2b830333e1 EffectContext, struct UPhysicalMaterial* PhysicalMaterial, int32 AbilityLevel); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6943974
	struct F*c0ab2cfdbe *d9a3e38f8a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d9a3e38f8a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69441bc
	int32 *430f794004(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*430f794004 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6949b58
	void *2e69174b28(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2e69174b28 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69453d0
	int32 *7ec0a5aa99(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7ec0a5aa99 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6949698
	int32 *4fd2155ffb(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4fd2155ffb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6949e2c
	void GetOrigin(struct F*66e6e9d0a8 Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6947e54
	struct F*8fa95bb31f *6243d0beaa(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6243d0beaa // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69433ec
	struct F*ec4dfd3d93 *f6d5a4d8ea(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f6d5a4d8ea // Final|Native|Static|Public|BlueprintCallable // @ game+0x6946350
	void *de215eeb67(struct F*8fa95bb31f TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*de215eeb67 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x69480c0
	void *2561f7fe14(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2561f7fe14 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6946148
	int32 *f34033c412(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f34033c412 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6947940
	void *9bccc06ff8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*9bccc06ff8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6944d80
	void *b552b1cb21(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b552b1cb21 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69449d4
	struct F*ec4dfd3d93 *4ab4c34c71(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4ab4c34c71 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6946650
	struct F*c0ab2cfdbe GetEffectContext(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext // Final|Native|Static|Public|BlueprintCallable // @ game+0x6946dc8
	void *0d80cc213a(struct F*c0ab2cfdbe SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*0d80cc213a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6947ccc
	struct F*c0ab2cfdbe *495ecac83e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*495ecac83e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6946bd4
	struct F*2b830333e1 *5e0603bb78(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5e0603bb78 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6944c30
	void *331f826a07(struct F*66e6e9d0a8 Parameters, struct FVector Normal); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*331f826a07 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x694767c
	struct FGameplayAttribute *bbfdbaed76(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bbfdbaed76 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69491e4
	struct FGameplayTag *c5c22bf772(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c5c22bf772 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6942940
	void IsValid(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x694869c
	struct FGameplayAttribute *cff4b3436f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*cff4b3436f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6945694
	struct F*ec4dfd3d93 *0d150472b5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*0d150472b5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6946430
	void *70ef88634f(struct F*2b830333e1 EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*70ef88634f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6944fd8
	void *b0acfd12ac(struct F*8fa95bb31f HitResult); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b0acfd12ac // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6949ccc
	struct F*66e6e9d0a8 IsInstigatorLocallyControlled(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69484b4
	void GetHitResult(struct F*66e6e9d0a8 Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x694785c
	void *52e751a89d(struct FHitResult HitResult); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*52e751a89d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6942624
	struct F*2b830333e1 *03d25a3b3a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*03d25a3b3a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6945128
	struct F*66e6e9d0a8 GetInstigatorActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6947ae8
	void *2a6c89a95c(struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2a6c89a95c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6946f14
	bool *083e12c018(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*083e12c018 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6945ac4
	void *bf831fc80b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bf831fc80b // Final|Native|Static|Public|BlueprintCallable // @ game+0x69462bc
	void *d9b040f696(struct F*8fa95bb31f TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d9b040f696 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6946aa0
	struct F*ec4dfd3d93 *df4f788684(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*df4f788684 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69465bc
	struct UAbilitySystemComponent* *b591cd3b51(struct FGameplayAttribute Attribute, struct FGameplayTagContainer TargetTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b591cd3b51 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6945824
	struct FGameplayTagContainer *73c58f3f49(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*73c58f3f49 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6942e6c
	struct AActor* *45ce31c799(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*45ce31c799 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6944638
	void *179b5e3565(struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*179b5e3565 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6942cd0
	int32 *3280ec14e7(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3280ec14e7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6946914
	struct F*c0ab2cfdbe *70a60b9438(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*70a60b9438 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6949890
	void *732974a293(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*732974a293 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6944b24
	struct AActor* *d0bf3a1b5b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d0bf3a1b5b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69423e4
	struct FHitResult *2653bf832f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2653bf832f // Final|Native|Static|Public|BlueprintCallable // @ game+0x69447b8
	void *19da737797(struct F*be289b2c60 SourceTagReqs); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*19da737797 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x69443a0
	float SetDuration(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // Final|Native|Static|Public|BlueprintCallable // @ game+0x6949504
	int32 *cdfeabf07f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*cdfeabf07f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x694825c
	void *818679ad77(struct FName DataName); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*818679ad77 // Final|Native|Static|Public|BlueprintCallable // @ game+0x694359c
	struct F*66e6e9d0a8 *c78ca5a01f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c78ca5a01f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69485a8
	struct F*8fa95bb31f *f1bae19006(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f1bae19006 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6946ce8
	void SendGameplayEventToActor(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x6949374
	struct AActor* *c58530befd(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c58530befd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6948778
	struct F*c0ab2cfdbe *ac289396bc(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ac289396bc // Final|Native|Static|Public|BlueprintCallable // @ game+0x69431f8
	void *d85a0ea205(struct F*c0ab2cfdbe SpecHandle, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d85a0ea205 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6943788
	bool *39d05244b5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*39d05244b5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6947204
	struct F*66e6e9d0a8 HasHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69483b0
	void *a44c901ca3(struct UClass* LinkedGameplayEffect); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*a44c901ca3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6943060
	int32 *cd588a2d71(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*cd588a2d71 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x69499d4
	struct TArray<struct AActor*> *2375cd7fa2(bool OneTargetPerHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2375cd7fa2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x69424c0
};

// Class GameplayAbilities.*ea3ef74d1d
// Size: 0x28 (Inherited: 0x28)
struct U*ea3ef74d1d : UInterface {
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
	struct FGameplayTag *202de4eb36; // 0xc0(0x08)
	struct FName ActivateFailIsDeadName; // 0xc8(0x08)
	struct FGameplayTag *a1796b6598; // 0xd0(0x08)
	struct FName ActivateFailCooldownName; // 0xd8(0x08)
	struct FGameplayTag *3714a05f6e; // 0xe0(0x08)
	struct FName ActivateFailCostName; // 0xe8(0x08)
	struct FGameplayTag *a02011fb37; // 0xf0(0x08)
	struct FName ActivateFailTagsBlockedName; // 0xf8(0x08)
	struct FGameplayTag *7d49383852; // 0x100(0x08)
	struct FName ActivateFailTagsMissingName; // 0x108(0x08)
	struct FGameplayTag *c8766081ef; // 0x110(0x08)
	struct FName ActivateFailNetworkingName; // 0x118(0x08)
	int32 MinimalReplicationTagCountBits; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct F*dbdd3831ef *ef9f923fda; // 0x128(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0x138(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FName GameplayModEvaluationChannelAliases[0x0a]; // 0x140(0x50)
	struct FStringAssetReference GlobalCurveTableName; // 0x190(0x10)
	struct UCurveTable* *71d4b58726; // 0x1a0(0x08)
	struct FStringAssetReference GlobalAttributeMetaDataTableName; // 0x1a8(0x10)
	struct UDataTable* *2d92a0dc92; // 0x1b8(0x08)
	struct FStringAssetReference GlobalAttributeSetDefaultsTableName; // 0x1c0(0x10)
	struct TArray<struct FStringAssetReference> GlobalAttributeSetDefaultsTableNames; // 0x1d0(0x10)
	struct TArray<struct UCurveTable*> *922e093274; // 0x1e0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerClass; // 0x1f0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerName; // 0x200(0x10)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x210(0x10)
	struct FStringAssetReference GameplayTagResponseTableName; // 0x220(0x10)
	struct U*0e4bd35382* *40fc13c0f7; // 0x230(0x08)
	bool PredictTargetGameplayEffects; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UGameplayCueManager* *a64fbc3828; // 0x240(0x08)
	char pad_248[0xf8]; // 0x248(0xf8)

	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities // Final|Exec|Native|Public // @ game+0xbf00fc
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // Exec|Native|Public // @ game+0x58dcefc
	void ServerCancelPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility // Final|Exec|Native|Public // @ game+0x5853ec4
	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // Exec|Native|Public // @ game+0x86d5dc
	void ServerEndPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility // Final|Exec|Native|Public // @ game+0x5853ec4
	void ServerActivatePlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility // Final|Exec|Native|Public // @ game+0x5853ec4
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
	struct FName *ef04733cfe; // 0x80(0x08)
	enum class *30be4da0fa *5e99cb80d7; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FVector *214e18f7c1; // 0x8c(0x0c)
	float *485a1eeee8; // 0x98(0x04)
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
	bool *5ebf5b10ed; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct UCurveFloat* *8fc156f86d; // 0xe0(0x08)
	bool *12af7914ed; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	bool *ef5ac40731(enum class *30be4da0fa VelocityOnFinishMode, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.*ef5ac40731 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x69af930
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
	float *1c527e8709; // 0xf0(0x04)
	bool *ee530b9e1b; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct U*59a0aeaef9* *da7756b7db; // 0xf8(0x08)
	struct UCurveFloat* *d672920056; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	struct UCurveFloat* *29275691b3(float Duration, enum class *30be4da0fa VelocityOnFinishMode, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.*29275691b3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x69afd00
	void OnLandedCallback(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // Final|Native|Public|HasOutParms // @ game+0x69b820c
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // Final|Native|Public|BlueprintCallable // @ game+0x69b3e28
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x130 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinished; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FVector StartLocation; // 0xd0(0x0c)
	struct FVector TargetLocation; // 0xdc(0x0c)
	struct AActor* TargetActor; // 0xe8(0x08)
	struct FVector *aa08a0e944; // 0xf0(0x0c)
	enum class *a6b6e6317f *1cd1203018; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float Duration; // 0x100(0x04)
	bool *cbb124026d; // 0x104(0x01)
	bool *f27a076109; // 0x105(0x01)
	enum class EMovementMode *c236180f85; // 0x106(0x01)
	bool *fde5dff3b1; // 0x107(0x01)
	struct U*59a0aeaef9* *da7756b7db; // 0x108(0x08)
	struct UCurveFloat* *d672920056; // 0x110(0x08)
	struct UCurveFloat* *a56eb17ba0; // 0x118(0x08)
	struct UCurveFloat* *be969ca714; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	bool *0d91e89864(enum class *a6b6e6317f OffsetAlignment, struct UCurveFloat* TargetLerpSpeedHorizontal, bool bSetNewMovementMode); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*0d91e89864 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x69b0af4
	bool *798b081843(struct UGameplayAbility* OwningAbility, struct AActor* TargetActor, struct U*59a0aeaef9* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, struct FVector SetVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*798b081843 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x69b0174
	struct AActor* *0a24a0f6b5(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*0a24a0f6b5 // Final|Native|Public // @ game+0x69b88fc
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // Final|Native|Protected // @ game+0x69b88c4
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x108 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnTimedOut; // 0xb8(0x10)
	struct FMulticastDelegate OnTimedOutAndDestinationReached; // 0xc8(0x10)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	float Duration; // 0xf0(0x04)
	bool *f27a076109; // 0xf4(0x01)
	enum class EMovementMode *c236180f85; // 0xf5(0x01)
	bool *fde5dff3b1; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct U*59a0aeaef9* *da7756b7db; // 0xf8(0x08)
	char pad_100[0x8]; // 0x100(0x08)

	float *7ee8fa27d5(bool bSetNewMovementMode, bool bRestrictSpeedToExpected, struct U*59a0aeaef9* PathOffsetCurve, struct FVector SetVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.*7ee8fa27d5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x69b0728
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x110 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xb8(0x10)
	struct FVector Location; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct AActor* *f37a2ef1e9; // 0xd8(0x08)
	float Strength; // 0xe0(0x04)
	float Duration; // 0xe4(0x04)
	float Radius; // 0xe8(0x04)
	bool *ff362984df; // 0xec(0x01)
	bool *5ebf5b10ed; // 0xed(0x01)
	bool *5549f9328f; // 0xee(0x01)
	char pad_EF[0x1]; // 0xef(0x01)
	struct UCurveFloat* *ca92445d00; // 0xf0(0x08)
	struct UCurveFloat* *8fc156f86d; // 0xf8(0x08)
	bool *0963b0b13a; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FRotator *426d246e6a; // 0x104(0x0c)

	float *a8ea9292dd(struct AActor* LocationActor, float Duration, bool bIsPush, bool bNoZForce); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.*a8ea9292dd // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x69b119c
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastDelegate OnTargetLocationReached; // 0x80(0x10)
	char pad_90[0x4]; // 0x90(0x04)
	struct FVector StartLocation; // 0x94(0x0c)
	struct FVector TargetLocation; // 0xa0(0x0c)
	float *44735d9bd3; // 0xac(0x04)
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UCurveFloat* *ac01a19749; // 0xb8(0x08)
	struct U*59a0aeaef9* *7e6ffa4995; // 0xc0(0x08)

	struct U*59a0aeaef9* *90cfd116e1(); // Function GameplayAbilities.AbilityTask_MoveToLocation.*90cfd116e1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x69b6260
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastDelegate OnSync; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	enum class *92e29a6c2a *d450aa0f5f(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*d450aa0f5f // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bed08
	void *23e9699b25(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*23e9699b25 // Final|Native|Public // @ game+0x69b88e8
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x170 (Inherited: 0x80)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastDelegate OnCompleted; // 0x80(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x90(0x10)
	struct FMulticastDelegate OnInterrupted; // 0xa0(0x10)
	struct FMulticastDelegate OnCancelled; // 0xb0(0x10)
	char pad_C0[0x88]; // 0xc0(0x88)
	struct UAnimMontage* *cc3fe64113; // 0x148(0x08)
	float Rate; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FName *25c2cf3d7f; // 0x158(0x08)
	float *fdceab32c3; // 0x160(0x04)
	float *db01c9c0ac; // 0x164(0x04)
	bool *faf402ed0e; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)

	void *c8b04ff8bf(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*c8b04ff8bf // Final|Native|Public // @ game+0x69b84cc
	void *2b9c4e6673(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*2b9c4e6673 // Final|Native|Public // @ game+0x69b830c
	void OnMontageEnded(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // Final|Native|Public // @ game+0x69b83ec
	struct FName *2e8692c192(bool bStopWhenAbilityEnds, float StartTimeSeconds); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*2e8692c192 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69b35d4
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastDelegate OnPerformAction; // 0x80(0x10)
	struct FMulticastDelegate OnFinished; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	void RepeatAction(struct UGameplayAbility* OwningAbility, int32 TotalActionCount); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // Final|Native|Static|Public|BlueprintCallable // @ game+0x69b9200
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastDelegate SUCCESS; // 0x80(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x90(0x10)
	char pad_A0[0x28]; // 0xa0(0x28)

	struct F*8fa95bb31f FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x69b3e3c
	void BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct UClass* Class); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69b24ac
	struct UClass* SpawnActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bb080
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastDelegate OnStateEnded; // 0x80(0x10)
	struct FMulticastDelegate OnStateInterrupted; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	void *1fa6be2540(struct UGameplayAbility* OwningAbility, bool bEndCurrentState); // Function GameplayAbilities.AbilityTask_StartAbilityState.*1fa6be2540 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bb234
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x408 (Inherited: 0x3e8)
struct AGameplayAbilityWorldReticle : AActor {
	struct F*26ccbc5580 Parameters; // 0x3e8(0x0c)
	bool bFaceOwnerFlat; // 0x3f4(0x01)
	bool bSnapToTargetedActor; // 0x3f5(0x01)
	bool bIsTargetValid; // 0x3f6(0x01)
	bool bIsTargetAnActor; // 0x3f7(0x01)
	struct APlayerController* MasterPC; // 0x3f8(0x08)
	struct AActor* TargetingActor; // 0x400(0x08)

	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnValidTargetChanged(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *2f227da20d(); // Function GameplayAbilities.GameplayAbilityWorldReticle.*2f227da20d // Final|Native|Public|BlueprintCallable // @ game+0x69b3d94
	void OnTargetingAnActor(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetReticleMaterialParamVector(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // Event|Public|HasDefaults|BlueprintEvent // @ game+0x2cd4ac
	struct FName SetReticleMaterialParamFloat(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // Event|Public|BlueprintEvent // @ game+0x2cd4ac
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x5b0 (Inherited: 0x3e8)
struct AGameplayAbilityTargetActor : AActor {
	bool *450b836311; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct F*8b87ae35f3 StartLocation; // 0x3f0(0x70)
	char pad_460[0xe0]; // 0x460(0xe0)
	struct APlayerController* MasterPC; // 0x540(0x08)
	struct UGameplayAbility* OwningAbility; // 0x548(0x08)
	bool bDestroyOnConfirmation; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct AActor* SourceActor; // 0x558(0x08)
	struct F*26ccbc5580 ReticleParams; // 0x560(0x0c)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct UClass* ReticleClass; // 0x570(0x08)
	struct F*6616fa779a Filter; // 0x578(0x10)
	bool bDebug; // 0x588(0x01)
	char pad_589[0x17]; // 0x589(0x17)
	struct UAbilitySystemComponent* *7cd7f473f1; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)

	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // Native|Public // @ game+0x58c2cd8
	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // Native|Public // @ game+0x5907f20
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastDelegate TimeElapsed; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)

	float *56852db2d1(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*56852db2d1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bb8d4
	void *5540475b96(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*5540475b96 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bb764
	struct AGameplayAbilityTargetActor* BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69b268c
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x69b3fc0
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x138 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastDelegate OnActivate; // 0x80(0x10)
	char pad_90[0xa8]; // 0x90(0xa8)

	struct UGameplayAbility* *b02ad68b1f(struct FGameplayTag WithTag, bool IncludeTriggeredAbilities); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*b02ad68b1f // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bbcf8
	void *5996fba6cf(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*5996fba6cf // Final|Native|Public // @ game+0x69b7580
	bool *db874db42c(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*db874db42c // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bbee0
	void *b5f32b6561(struct UGameplayAbility* OwningAbility, bool IncludeTriggeredAbilities); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*b5f32b6561 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bc0e4
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xf8 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastDelegate OnCommit; // 0x80(0x10)
	char pad_90[0x68]; // 0x90(0x68)

	bool *edb87a324c(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*edb87a324c // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bc488
	void *96425599fc(struct FGameplayTag WithTag, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*96425599fc // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bc2f4
	void *741a10422b(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*741a10422b // Final|Native|Public // @ game+0x69b7610
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xe0 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x48]; // 0x90(0x48)
	struct UAbilitySystemComponent* *1211f01e6b; // 0xd8(0x08)

	struct AActor* *7859bfe701(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*7859bfe701 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bce18
	void *1d9e25bd35(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithSrcTag, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*1d9e25bd35 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bc644
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x110 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x78]; // 0x90(0x78)
	struct UAbilitySystemComponent* *1211f01e6b; // 0x108(0x08)

	float *72549e44d4(bool bTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.*72549e44d4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bc8a8
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xd8 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x40]; // 0x90(0x40)
	struct UAbilitySystemComponent* *1211f01e6b; // 0xd0(0x08)

	struct UGameplayAbility* *1106e20dae(struct FGameplayAttribute Attribute, float ComparisonValue, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.*1106e20dae // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bcbb4
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastDelegate OnCancel; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	void *da78930ae6(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitCancel.*da78930ae6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bba44
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x69b82d0
	void *7871f25f6b(); // Function GameplayAbilities.AbilityTask_WaitCancel.*7871f25f6b // Final|Native|Public // @ game+0x69b7aa0
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	struct UGameplayAbility* *f964b4cd27(); // Function GameplayAbilities.AbilityTask_WaitConfirm.*f964b4cd27 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bbad8
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // Final|Native|Public // @ game+0x69b7ac8
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x80(0x10)
	struct FMulticastDelegate OnCancel; // 0x90(0x10)
	char pad_A0[0x8]; // 0xa0(0x08)

	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // Final|Native|Public // @ game+0x69b82f8
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // Final|Native|Public // @ game+0x69b7b58
	void *f2f502ff6c(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*f2f502ff6c // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bbb6c
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x69b82e4
	void *7871f25f6b(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*7871f25f6b // Final|Native|Public // @ game+0x69b7ab4
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastDelegate OnFinish; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	void WaitDelay(float Time); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bbc00
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1b8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_80[0x128]; // 0x80(0x128)
	struct UAbilitySystemComponent* *1211f01e6b; // 0x1a8(0x08)
	char pad_1B0[0x8]; // 0x1b0(0x08)

	struct UAbilitySystemComponent* *f329e26998(struct F*ca82836aee Param1); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.*f329e26998 // Final|Native|Public|HasOutParms // @ game+0x69b7900
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	bool *c6075117ca(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*c6075117ca // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bd7a4
	bool *6b89ccdaf1(struct F*6616fa779a SourceFilter, struct F*be289b2c60 TargetTagRequirements); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*6b89ccdaf1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bd3a0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	bool *06c7bc8de9(struct F*6616fa779a SourceFilter, struct FGameplayTagQuery TargetTagQuery); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*06c7bc8de9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bdf54
	struct F*6616fa779a *bef1b7cbd1(struct F*be289b2c60 SourceTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffects); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*bef1b7cbd1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bdb50
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x128 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastDelegate bLocked; // 0x80(0x10)
	char pad_90[0x88]; // 0x90(0x88)
	struct UAbilitySystemComponent* *1211f01e6b; // 0x118(0x08)
	char pad_120[0x8]; // 0x120(0x08)

	bool *16ccfb9777(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.*16ccfb9777 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69be300
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastDelegate OnRemoved; // 0x80(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x90(0x10)
	char pad_A0[0x20]; // 0xa0(0x20)

	struct UGameplayAbility* *5bcb6a83fd(struct F*ec4dfd3d93 Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*5bcb6a83fd // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bd12c
	void *7ef6a0f683(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*7ef6a0f683 // Final|Native|Public|HasOutParms // @ game+0x69b7dcc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	void *4e45ccf055(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*4e45ccf055 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bd21c
	int32 *3b61ad754e(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*3b61ad754e // Final|Native|Public // @ game+0x69b7ecc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastDelegate EventReceived; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct UAbilitySystemComponent* *1c4fabdd56; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	bool *5679c0fce1(); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.*5679c0fce1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69be600
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_80[0x10]; // 0x80(0x10)
	struct UAbilitySystemComponent* *1c4fabdd56; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	void *3498b9e799(struct FGameplayTag Param0); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.*3498b9e799 // Native|Public // @ game+0x69b4170
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Added; // 0xa8(0x10)

	bool *d4322f8e1e(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.*d4322f8e1e // Final|Native|Static|Public|BlueprintCallable // @ game+0x69be808
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Removed; // 0xa8(0x10)

	void *f189dcc0db(struct FGameplayTag Tag, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.*f189dcc0db // Final|Native|Static|Public|BlueprintCallable // @ game+0x69be9a0
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastDelegate OnPress; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	bool *21b34a9cee(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*21b34a9cee // Final|Native|Static|Public|BlueprintCallable // @ game+0x69beb38
	void *1837f60e54(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*1837f60e54 // Final|Native|Public // @ game+0x69b8610
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastDelegate OnRelease; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	struct UGameplayAbility* *65db0c58aa(bool bTestAlreadyReleased); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*65db0c58aa // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bec20
	void *34760caa84(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*34760caa84 // Final|Native|Public // @ game+0x69b8624
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void *4a593f76ac(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.*4a593f76ac // Final|Native|Static|Public|BlueprintCallable // @ game+0x69b3894
	enum class EMovementMode OnMovementModeChange(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // Final|Native|Public // @ game+0x69b84e0
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x90 (Inherited: 0x80)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastDelegate OnOverlap; // 0x80(0x10)

	void *4dbe7bfb61(); // Function GameplayAbilities.AbilityTask_WaitOverlap.*4dbe7bfb61 // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bd30c
	struct FVector OnHitCallback(); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // Final|Native|Public|HasOutParms|HasDefaults // @ game+0x69b7ffc
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc0 (Inherited: 0x80)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastDelegate ValidData; // 0x80(0x10)
	struct FMulticastDelegate Cancelled; // 0x90(0x10)
	struct UClass* TargetClass; // 0xa0(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)

	struct UGameplayAbility* FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x69b4098
	void *00dd879f5d(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*00dd879f5d // Final|Native|Public|HasOutParms // @ game+0x69b8bac
	struct AGameplayAbilityTargetActor* *33d590383d(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*33d590383d // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bef70
	void *4a910b4e30(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*4a910b4e30 // Final|Native|Public|HasOutParms // @ game+0x69b8acc
	void *6e792c92cf(struct UGameplayAbility* OwningAbility, enum class EGameplayTargetingConfirmation ConfirmationType); // Function GameplayAbilities.AbilityTask_WaitTargetData.*6e792c92cf // Final|Native|Static|Public|BlueprintCallable // @ game+0x69bedec
	void *6144a5aa22(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*6144a5aa22 // Final|Native|Public // @ game+0x69b8ce0
	struct AGameplayAbilityTargetActor* BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69b27c8
	void *29404f2e5a(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*29404f2e5a // Final|Native|Public|HasOutParms // @ game+0x69b89ec
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastDelegate OnVelocityChage; // 0x80(0x10)
	struct UMovementComponent* *95a3ade266; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	void *6ac81b5ade(struct UGameplayAbility* OwningAbility, float MinimumMagnitude); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.*6ac81b5ade // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x69b397c
};

// Class GameplayAbilities.*f1a7cdc4a5
// Size: 0x70 (Inherited: 0x30)
struct U*f1a7cdc4a5 : UAttributeSet {
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

// Class GameplayAbilities.*0964db9b60
// Size: 0x570 (Inherited: 0x570)
struct U*0964db9b60 : UGameplayAbility {
};

// Class GameplayAbilities.*476845cb3d
// Size: 0x5b0 (Inherited: 0x570)
struct U*476845cb3d : UGameplayAbility {
	struct UAnimMontage* *cc3fe64113; // 0x570(0x08)
	float PlayRate; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FName SectionName; // 0x580(0x08)
	struct TArray<struct UClass*> *e0327af2ec; // 0x588(0x10)
	struct TArray<struct UGameplayEffect*> *ec740b56c0; // 0x598(0x10)
	char pad_5A8[0x8]; // 0x5a8(0x08)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x40 (Inherited: 0x30)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct F*c4cbd103fb> Abilities; // 0x30(0x10)
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
	struct TArray<struct UActorComponent*> *cb5b01ed61; // 0x410(0x10)
};

// Class GameplayAbilities.*47a96362e7
// Size: 0x28 (Inherited: 0x28)
struct U*47a96362e7 : UObject {
};

// Class GameplayAbilities.*4dd74413c2
// Size: 0x28 (Inherited: 0x28)
struct U*4dd74413c2 : U*47a96362e7 {
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x460 (Inherited: 0x30)
struct UGameplayCueManager : UDataAsset {
	char pad_30[0x70]; // 0x30(0x70)
	struct F*a1b25a3259 *fac1076964; // 0xa0(0xb0)
	struct F*a1b25a3259 *649fa6453a; // 0x150(0xb0)
	char pad_200[0x1a0]; // 0x200(0x1a0)
	struct TArray<struct UClass*> *d53caaed62; // 0x3a0(0x10)
	struct TArray<struct UClass*> *a37198c1b8; // 0x3b0(0x10)
	struct TArray<struct F*eae0ebff14> *49b79b92de; // 0x3c0(0x10)
	int32 *3186a4df45; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct F*ae73b4ceaa> *4d1a656c9e; // 0x3d8(0x10)
	char pad_3E8[0x78]; // 0x3e8(0x78)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x448 (Inherited: 0x3e8)
struct AGameplayCueNotify_Actor : AActor {
	bool *63eca00154; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	float *a9940553da; // 0x3ec(0x04)
	bool *6b238b0ded; // 0x3f0(0x01)
	bool *9281ed79b7; // 0x3f1(0x01)
	char pad_3F2[0x6]; // 0x3f2(0x06)
	struct FGameplayTag GameplayCueTag; // 0x3f8(0x08)
	struct FName GameplayCueName; // 0x400(0x08)
	bool *752167823e; // 0x408(0x01)
	bool *669a954dda; // 0x409(0x01)
	bool *b90399ffae; // 0x40a(0x01)
	bool *ff83ffc9f4; // 0x40b(0x01)
	bool *b7226140b4; // 0x40c(0x01)
	bool *487a3b138a; // 0x40d(0x01)
	char pad_40E[0x2]; // 0x40e(0x02)
	int32 *16b408a30f; // 0x410(0x04)
	char pad_414[0x34]; // 0x414(0x34)

	void OnExecute(struct AActor* MyTarget); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x69b7b6c
	void OnOwnerDestroyed(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // Native|Public // @ game+0x582e56c
	void *0ab891be7d(); // Function GameplayAbilities.GameplayCueNotify_Actor.*0ab891be7d // Native|Public|BlueprintCallable // @ game+0xa5db94
	enum class EGameplayCueEvent K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void OnRemove(struct AActor* MyTarget); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x69b8638
	struct F*66e6e9d0a8 OnActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x69b76a0
	struct F*66e6e9d0a8 WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x69bf0f4
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x40 (Inherited: 0x28)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x28(0x08)
	struct FName GameplayCueName; // 0x30(0x08)
	bool *669a954dda; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	struct F*66e6e9d0a8 OnActive(); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x69b77d0
	struct AActor* K2_HandleGameplayCue(enum class EGameplayCueEvent EventType); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x2cd4ac
	void OnRemove(struct F*66e6e9d0a8 Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x69b8768
	struct F*66e6e9d0a8 WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x69bf224
	void OnExecute(struct AActor* MyTarget); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x69b7c9c
};

// Class GameplayAbilities.*9548613553
// Size: 0x50 (Inherited: 0x40)
struct U*9548613553 : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x40(0x08)
	struct UParticleSystem* ParticleSystem; // 0x48(0x08)
};

// Class GameplayAbilities.*936c76ae6d
// Size: 0x90 (Inherited: 0x30)
struct U*936c76ae6d : UDataAsset {
	struct TArray<struct F*731ab2bf2c> *712cfcffae; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class GameplayAbilities.*8b47080544
// Size: 0x880 (Inherited: 0x880)
struct U*8b47080544 : UGameplayEffect {
};

// Class GameplayAbilities.*ef189a554b
// Size: 0x40 (Inherited: 0x38)
struct U*ef189a554b : U*4b98fd5b79 {
	bool *667e53e3e3; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	struct F*ca82836aee CalculateBaseMagnitude(); // Function GameplayAbilities.*ef189a554b.CalculateBaseMagnitude // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x69b2904
};

// Class GameplayAbilities.*d5563668a0
// Size: 0x28 (Inherited: 0x28)
struct U*d5563668a0 : UObject {

	struct UAbilitySystemComponent* CanApplyGameplayEffect(); // Function GameplayAbilities.*d5563668a0.CanApplyGameplayEffect // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x69b29fc
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.*17dab7473f
// Size: 0x40 (Inherited: 0x28)
struct U*17dab7473f : UGameplayEffectUIData {
	struct FText Description; // 0x28(0x18)
};

// Class GameplayAbilities.*0e4bd35382
// Size: 0x210 (Inherited: 0x30)
struct U*0e4bd35382 : UDataAsset {
	struct TArray<struct F*c97d215778> Entries; // 0x30(0x10)
	char pad_40[0x1d0]; // 0x40(0x1d0)

	void *582ca5491c(struct FGameplayTag Param0, struct UAbilitySystemComponent* Param2); // Function GameplayAbilities.*0e4bd35382.*582ca5491c // Final|Native|Protected // @ game+0x69bb358
};

// Class GameplayAbilities.*87b84a339a
// Size: 0x28 (Inherited: 0x28)
struct U*87b84a339a : UInterface {
};


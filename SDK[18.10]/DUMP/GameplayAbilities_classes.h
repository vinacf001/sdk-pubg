// Class GameplayAbilities.*de9a5a285e
// Size: 0x30 (Inherited: 0x30)
struct U*de9a5a285e : UInterface {
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1860 (Inherited: 0x270)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_270[0x8]; // 0x270(0x08)
	char *62f9bed079 : 1; // 0x278(0x01)
	char pad_278_1 : 7; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct TArray<struct F*f0cf8b7179> *8a1512d2b0; // 0x280(0x10)
	struct FName AffectedAnimInstanceTag; // 0x290(0x08)
	char pad_298[0x5c8]; // 0x298(0x5c8)
	float *e24992b890; // 0x860(0x04)
	float *f462cbec4d; // 0x864(0x04)
	char pad_868[0x80]; // 0x868(0x80)
	bool *5f8615ab34; // 0x8e8(0x01)
	bool *451f1b23f9; // 0x8e9(0x01)
	bool *6b82b5f3cb; // 0x8ea(0x01)
	bool *d48b28e060; // 0x8eb(0x01)
	char pad_8EC[0x4]; // 0x8ec(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> *4b41094e7e; // 0x8f0(0x10)
	char pad_900[0x38]; // 0x900(0x38)
	struct F*d30baabecf ActivatableAbilities; // 0x938(0xc8)
	char pad_A00[0x30]; // 0xa00(0x30)
	struct TArray<struct UGameplayAbility*> *a42ca7e6e2; // 0xa30(0x10)
	char pad_A40[0x20c]; // 0xa40(0x20c)
	bool *99108c550b; // 0xc4c(0x01)
	bool *a65b21ff95; // 0xc4d(0x01)
	char pad_C4E[0x2]; // 0xc4e(0x02)
	struct F*aed4390e2f *73a0fd3dc9; // 0xc50(0x30)
	char pad_C80[0xa0]; // 0xc80(0xa0)
	struct F*fd3ab3cc0d *59aae4b2e8; // 0xd20(0x4e0)
	struct F*d583d4ccf6 *48269715ca; // 0x1200(0xd0)
	struct F*d583d4ccf6 *711668646b; // 0x12d0(0xd0)
	char pad_13A0[0x318]; // 0x13a0(0x318)
	struct TArray<struct UAttributeSet*> *ab243ac431; // 0x16b8(0x10)
	struct TArray<struct FString> *cb30c9d802; // 0x16c8(0x10)
	struct AActor* *282b1f70c0; // 0x16d8(0x08)
	struct AActor* AvatarActor; // 0x16e0(0x08)
	struct F*c838a82bb4 *814d77c69e; // 0x16e8(0x38)
	struct TArray<bool> *9afdd0b505; // 0x1720(0x10)
	struct F*684cb9739a *60e84b4d68; // 0x1730(0x60)
	struct TArray<struct FString> *265ac99221; // 0x1790(0x10)
	struct F*6fe0834992 *6fe0834992; // 0x17a0(0xc0)

	struct F*ef8dc34671 *67500f8353(); // Function GameplayAbilities.AbilitySystemComponent.*67500f8353 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67af53c
	struct F*ec4dfd3d93 *49c1518332(); // Function GameplayAbilities.AbilitySystemComponent.*49c1518332 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67a6ec4
	void *c5f11a4430(); // Function GameplayAbilities.AbilitySystemComponent.*c5f11a4430 // Native|Public|BlueprintCallable // @ game+0x63e173c
	struct F*ec4dfd3d93 *855e5aece9(); // Function GameplayAbilities.AbilitySystemComponent.*855e5aece9 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67a6ffc
	bool *83ad8adfce(); // Function GameplayAbilities.AbilitySystemComponent.*83ad8adfce // Native|Public|BlueprintCallable // @ game+0x67b0718
	struct F*66e6e9d0a8 *c16f2a63eb(); // Function GameplayAbilities.AbilitySystemComponent.*c16f2a63eb // Net|Native|Event|NetMulticast|Public // @ game+0x67acab0
	struct TArray<struct F*ec4dfd3d93> *4bd07bab5f(); // Function GameplayAbilities.AbilitySystemComponent.*4bd07bab5f // Final|Native|Public|HasOutParms|BlueprintCallable|Const // @ game+0x67a9af4
	struct F*66a0d1cb95 *03c3bee831(); // Function GameplayAbilities.AbilitySystemComponent.*03c3bee831 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67af224
	int32 *28ab2ec9e0(); // Function GameplayAbilities.AbilitySystemComponent.*28ab2ec9e0 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x67b03b8
	struct F*66a0d1cb95 *886d2bafd4(); // Function GameplayAbilities.AbilitySystemComponent.*886d2bafd4 // Net|Native|Event|NetMulticast|Public // @ game+0x67abd64
	struct FName *0263778673(); // Function GameplayAbilities.AbilitySystemComponent.*0263778673 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67aef50
	struct F*35341a2d42 *5c8ce3349c(); // Function GameplayAbilities.AbilitySystemComponent.*5c8ce3349c // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67b0150
	struct F*66a0d1cb95 *c685ac9b12(); // Function GameplayAbilities.AbilitySystemComponent.*c685ac9b12 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67afdfc
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // Native|Protected // @ game+0x5731030
	void *9c500faeda(); // Function GameplayAbilities.AbilitySystemComponent.*9c500faeda // Native|Public|BlueprintCallable // @ game+0xb6dde4
	struct F*6a42616980 *e79e0e6bf3(); // Function GameplayAbilities.AbilitySystemComponent.*e79e0e6bf3 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x67a8820
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // Native|Public // @ game+0x56ea3a0
	struct F*66e6e9d0a8 *e4182be64c(); // Function GameplayAbilities.AbilitySystemComponent.*e4182be64c // Net|Native|Event|NetMulticast|Public // @ game+0x67abe9c
	struct UDataTable* *50cde9d9b7(); // Function GameplayAbilities.AbilitySystemComponent.*50cde9d9b7 // Final|Native|Public|BlueprintCallable // @ game+0x67ab07c
	void *0c5baef8d3(); // Function GameplayAbilities.AbilitySystemComponent.*0c5baef8d3 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67af414
	bool *be1593507e(); // Function GameplayAbilities.AbilitySystemComponent.*be1593507e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa4c0
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // Native|Protected // @ game+0x67adfc8
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // Native|Public // @ game+0x572f5d0
	struct F*6a42616980 *dbe66c96b7(); // Function GameplayAbilities.AbilitySystemComponent.*dbe66c96b7 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67aeccc
	struct F*ec4dfd3d93 *f5cf14c714(); // Function GameplayAbilities.AbilitySystemComponent.*f5cf14c714 // Final|Native|Public|BlueprintCallable // @ game+0x67a7470
	int32 *2d70470eb9(); // Function GameplayAbilities.AbilitySystemComponent.*2d70470eb9 // Final|Native|Public|BlueprintCallable // @ game+0x67ae424
	struct FName *fb6bd69b23(); // Function GameplayAbilities.AbilitySystemComponent.*fb6bd69b23 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67aee3c
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1b829c
	int32 AbilityAbilityKey__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1b829c
	float *2d676432fc(); // Function GameplayAbilities.AbilitySystemComponent.*2d676432fc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa11c
	struct F*bb0113fb37 *bb0113fb37(); // Function GameplayAbilities.AbilitySystemComponent.*bb0113fb37 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67aeb9c
	struct TArray<struct FString> *44ff7985fb(); // Function GameplayAbilities.AbilitySystemComponent.*44ff7985fb // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67af460
	int32 *3520b25e6d(); // Function GameplayAbilities.AbilitySystemComponent.*3520b25e6d // Final|Native|Public|BlueprintCallable // @ game+0x67ae518
	struct F*ec4dfd3d93 *f92517261e(); // Function GameplayAbilities.AbilitySystemComponent.*f92517261e // Final|Native|Public|BlueprintCallable // @ game+0x67a72d0
	struct F*66e6e9d0a8 *a7039d9a05(); // Function GameplayAbilities.AbilitySystemComponent.*a7039d9a05 // Net|Native|Event|NetMulticast|Public // @ game+0x67ac698
	int32 *dc142f74eb(); // Function GameplayAbilities.AbilitySystemComponent.*dc142f74eb // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67a9fec
	struct F*66a0d1cb95 *1c70d2b7aa(); // Function GameplayAbilities.AbilitySystemComponent.*1c70d2b7aa // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67affbc
	int32 *f00e6d5d49(); // Function GameplayAbilities.AbilitySystemComponent.*f00e6d5d49 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x67b049c
	struct F*66a0d1cb95 *a5b86c7e47(); // Function GameplayAbilities.AbilitySystemComponent.*a5b86c7e47 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67afb48
	struct F*2b830333e1 MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab1ec
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // Final|Native|Public // @ game+0x67adfe0
	struct F*ef8dc34671 *e3ea1ee8c0(); // Function GameplayAbilities.AbilitySystemComponent.*e3ea1ee8c0 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x67a8ba0
	struct F*66a0d1cb95 *ad47c42f4e(); // Function GameplayAbilities.AbilitySystemComponent.*ad47c42f4e // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x67a8448
	bool *b48c76efd1(); // Function GameplayAbilities.AbilitySystemComponent.*b48c76efd1 // Final|Native|Public|BlueprintCallable // @ game+0x67b0d58
	struct TArray<struct F*ec4dfd3d93> *addfb0be78(); // Function GameplayAbilities.AbilitySystemComponent.*addfb0be78 // Final|Native|Public|BlueprintCallable|Const // @ game+0x67a9c4c
	struct F*c0ab2cfdbe *92dfffc944(); // Function GameplayAbilities.AbilitySystemComponent.*92dfffc944 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab3d0
	struct F*2b830333e1 *4ba2cacb46(); // Function GameplayAbilities.AbilitySystemComponent.*4ba2cacb46 // Net|Native|Event|NetMulticast|Public // @ game+0x67abbac
	struct F*ef8dc34671 *523e81691c(); // Function GameplayAbilities.AbilitySystemComponent.*523e81691c // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67af5ec
	struct F*35341a2d42 *f086c32b80(); // Function GameplayAbilities.AbilitySystemComponent.*f086c32b80 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x67a8548
	int32 *9bbf48903b(); // Function GameplayAbilities.AbilitySystemComponent.*9bbf48903b // Final|Native|Public|BlueprintCallable // @ game+0x67ae60c
	struct F*2b830333e1 *513139c32c(); // Function GameplayAbilities.AbilitySystemComponent.*513139c32c // Net|Native|Event|NetMulticast|Public // @ game+0x67ac1ec
	int32 *4784049b8c(); // Function GameplayAbilities.AbilitySystemComponent.*4784049b8c // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x67ae7f4
	struct F*2b830333e1 *bc0ee136c4(); // Function GameplayAbilities.AbilitySystemComponent.*bc0ee136c4 // Net|Native|Event|NetMulticast|Public // @ game+0x67ac898
	bool *2e74816fd8(); // Function GameplayAbilities.AbilitySystemComponent.*2e74816fd8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa494
	float *b80a67a8e4(); // Function GameplayAbilities.AbilitySystemComponent.*b80a67a8e4 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x67af110
	bool TryActivateAbilitiesByTag(); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67b0c04
	int32 *c754d13008(); // Function GameplayAbilities.AbilitySystemComponent.*c754d13008 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a8940
	struct F*66a0d1cb95 *b41e2d0ef9(); // Function GameplayAbilities.AbilitySystemComponent.*b41e2d0ef9 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67af69c
	struct F*66e6e9d0a8 *b55ffef5f0(); // Function GameplayAbilities.AbilitySystemComponent.*b55ffef5f0 // Net|Native|Event|NetMulticast|Public // @ game+0x67ac044
	struct F*66a0d1cb95 NetMulticast_InvokeGameplayCueExecuted_FromSpec(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // Net|Native|Event|NetMulticast|Public // @ game+0x67ac3a4
	struct F*66e6e9d0a8 NetMulticast_InvokeGameplayCueExecuted_WithParams(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // Net|Native|Event|NetMulticast|Public // @ game+0x67ac4f0
	int32 *f4c4ee05a7(); // Function GameplayAbilities.AbilitySystemComponent.*f4c4ee05a7 // Final|Native|Public|BlueprintCallable // @ game+0x67ae424
	bool RemoveActiveGameplayEffect(); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x67ae700
	struct FVector_NetQuantize100 *26ac16d0af(); // Function GameplayAbilities.AbilitySystemComponent.*26ac16d0af // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67af8b8
	struct F*66a0d1cb95 *2f438f5c8c(); // Function GameplayAbilities.AbilitySystemComponent.*2f438f5c8c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x67a8a50
	int16 *929fa4cc49(); // Function GameplayAbilities.AbilitySystemComponent.*929fa4cc49 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x67a8368
	struct F*6a42616980 *5bf405937f(); // Function GameplayAbilities.AbilitySystemComponent.*5bf405937f // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x67a8700
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

// Class GameplayAbilities.*4b98fd5b79
// Size: 0x40 (Inherited: 0x30)
struct U*4b98fd5b79 : UObject {
	struct TArray<struct F*a220ab4781> RelevantAttributesToCapture; // 0x30(0x10)
};

// Class GameplayAbilities.*de4a1b2a14
// Size: 0x48 (Inherited: 0x40)
struct U*de4a1b2a14 : U*4b98fd5b79 {
	bool bRequiresPassedInTags; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	struct F*0f750fe1a2 Execute(); // Function GameplayAbilities.*de4a1b2a14.Execute // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x67a932c
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x580 (Inherited: 0x30)
struct UGameplayAbility : UObject {
	char pad_30[0x240]; // 0x30(0x240)
	struct FGameplayTagContainer *bd4922c11b; // 0x270(0x20)
	bool *56059caa84; // 0x290(0x01)
	bool *3767917a59; // 0x291(0x01)
	char pad_292[0x4]; // 0x292(0x04)
	enum class *b6ce87a358 *e77af286b9; // 0x296(0x01)
	enum class *8ae596defb *fcd6604c0b; // 0x297(0x01)
	bool *8ded8b4804; // 0x298(0x01)
	bool *b5d1baa9f9; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct F*6a42616980 CurrentActivationInfo; // 0x2a0(0x20)
	struct F*35341a2d42 CurrentEventData; // 0x2c0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy *4bc2db944e; // 0x370(0x01)
	enum class EGameplayAbilityNetSecurityPolicy *5a5b82cf5a; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct UClass* *46e65f80a3; // 0x378(0x08)
	struct TArray<struct F*e3004e6158> *2885166003; // 0x380(0x10)
	struct UClass* *ef57e6c97b; // 0x390(0x08)
	struct FGameplayTagContainer *6c6505f6de; // 0x398(0x20)
	struct FGameplayTagContainer *c23ec81c5a; // 0x3b8(0x20)
	struct FGameplayTagContainer *1b47118555; // 0x3d8(0x20)
	struct FGameplayTagContainer *5c5342673b; // 0x3f8(0x20)
	struct FGameplayTagContainer *153d10a88d; // 0x418(0x20)
	struct FGameplayTagContainer *6ac2715799; // 0x438(0x20)
	struct FGameplayTagContainer *d72262c83d; // 0x458(0x20)
	struct FGameplayTagContainer *4e4429a049; // 0x478(0x20)
	struct FGameplayTagContainer *2359da15e0; // 0x498(0x20)
	char pad_4B8[0x20]; // 0x4b8(0x20)
	struct TArray<struct UGameplayTask*> *9886fae8f4; // 0x4d8(0x10)
	char pad_4E8[0x10]; // 0x4e8(0x10)
	struct UAnimMontage* *0198870c84; // 0x4f8(0x08)
	char pad_500[0x60]; // 0x500(0x60)
	bool *a0e3b46900; // 0x560(0x01)
	bool *5bf711d808; // 0x561(0x01)
	bool *435b06b050; // 0x562(0x01)
	bool *c5b0fea3f6; // 0x563(0x01)
	char pad_564[0x14]; // 0x564(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)

	struct TArray<struct F*ec4dfd3d93> *f5cf14c714(); // Function GameplayAbilities.GameplayAbility.*f5cf14c714 // Final|Native|Protected|BlueprintCallable // @ game+0x67a7664
	bool *8028a000da(); // Function GameplayAbilities.GameplayAbility.*8028a000da // Native|Protected|BlueprintCallable // @ game+0x67aa588
	struct USkeletalMeshComponent* *7ec3cae440(); // Function GameplayAbilities.GameplayAbility.*7ec3cae440 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa354
	struct F*35341a2d42 *f92b3942b3(); // Function GameplayAbilities.GameplayAbility.*f92b3942b3 // Native|Protected|BlueprintCallable // @ game+0x67aea54
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // Event|Protected|BlueprintEvent // @ game+0x1b829c
	bool *ac3f57afb8(); // Function GameplayAbilities.GameplayAbility.*ac3f57afb8 // Native|Public|BlueprintCallable // @ game+0x67aac2c
	struct TArray<struct F*ec4dfd3d93> *cc153abeae(); // Function GameplayAbilities.GameplayAbility.*cc153abeae // Final|Native|Protected|BlueprintCallable // @ game+0x67aa994
	struct F*ec4dfd3d93 *47606964fb(); // Function GameplayAbilities.GameplayAbility.*47606964fb // Final|Native|Protected|BlueprintCallable // @ game+0x67aa890
	bool *cd2880c3b9(); // Function GameplayAbilities.GameplayAbility.*cd2880c3b9 // Final|Native|Public|BlueprintCallable|Const // @ game+0x67aa564
	struct F*8b87ae35f3 *404f69d3ea(); // Function GameplayAbilities.GameplayAbility.*404f69d3ea // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x67ab5c8
	struct FName *624b28efa5(); // Function GameplayAbilities.GameplayAbility.*624b28efa5 // Final|Native|Protected|BlueprintCallable // @ game+0x67a91fc
	struct F*8b87ae35f3 *8d9cec26ea(); // Function GameplayAbilities.GameplayAbility.*8d9cec26ea // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x67ab658
	int32 *444b3df618(); // Function GameplayAbilities.GameplayAbility.*444b3df618 // Final|Native|Protected|BlueprintCallable // @ game+0x67a7880
	struct FName *ba2a95d12b(); // Function GameplayAbilities.GameplayAbility.*ba2a95d12b // Final|Native|Protected|BlueprintCallable // @ game+0x67a82d8
	bool K2_CanActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // Event|Protected|HasOutParms|BlueprintEvent|Const // @ game+0x1b829c
	bool K2_OnEndAbility(); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct F*35341a2d42 K2_ActivateAbilityFromEvent(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x1b829c
	bool *39b5e80e29(); // Function GameplayAbilities.GameplayAbility.*39b5e80e29 // Final|Native|Protected|BlueprintCallable // @ game+0x67a8c34
	bool *3a607b042c(); // Function GameplayAbilities.GameplayAbility.*3a607b042c // Native|Public|BlueprintCallable // @ game+0x67aad20
	void *31b5007cf5(); // Function GameplayAbilities.GameplayAbility.*31b5007cf5 // Final|Native|Public|BlueprintCallable|Const // @ game+0x67aa4ac
	struct UAnimMontage* *8e99d6a8ee(); // Function GameplayAbilities.GameplayAbility.*8e99d6a8ee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a9f80
	void *8754f10b06(); // Function GameplayAbilities.GameplayAbility.*8754f10b06 // Native|Protected|BlueprintCallable // @ game+0x67aadc8
	bool K2_ShouldAbilityRespondToEvent(); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // Event|Protected|BlueprintEvent|Const // @ game+0x1b829c
	struct FName *a9cb9b9823(); // Function GameplayAbilities.GameplayAbility.*a9cb9b9823 // Final|Native|Protected|BlueprintCallable // @ game+0x67a929c
	float *6c23767a65(); // Function GameplayAbilities.GameplayAbility.*6c23767a65 // Final|Native|Protected|BlueprintCallable // @ game+0x67ab8f8
	void *1ad75d0055(); // Function GameplayAbilities.GameplayAbility.*1ad75d0055 // Final|Native|Public|BlueprintCallable // @ game+0x67aab6c
	struct UObject* *fc8f17a14e(); // Function GameplayAbilities.GameplayAbility.*fc8f17a14e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa378
	struct UAbilitySystemComponent* *e0eb65dfa4(); // Function GameplayAbilities.GameplayAbility.*e0eb65dfa4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a9ad0
	struct AActor* *f94402f947(); // Function GameplayAbilities.GameplayAbility.*f94402f947 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa330
	struct F*ec4dfd3d93 *35702c2bda(); // Function GameplayAbilities.GameplayAbility.*35702c2bda // Final|Native|Protected|BlueprintCallable // @ game+0x67a7198
	struct F*2b830333e1 *3c428532e7(); // Function GameplayAbilities.GameplayAbility.*3c428532e7 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a9df0
	bool *93bcc18ed8(); // Function GameplayAbilities.GameplayAbility.*93bcc18ed8 // Native|Public|BlueprintCallable // @ game+0x56f438c
	bool *79a27ad4f8(); // Function GameplayAbilities.GameplayAbility.*79a27ad4f8 // Final|Native|Public|BlueprintCallable|Const // @ game+0x67ab060
	bool *c5f2af83f2(); // Function GameplayAbilities.GameplayAbility.*c5f2af83f2 // Native|Public|BlueprintCallable // @ game+0x67aac04
	int32 GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a9990
	bool *9f84fdc27b(); // Function GameplayAbilities.GameplayAbility.*9f84fdc27b // Native|Public|BlueprintCallable // @ game+0x67b0680
	int32 *8b04b61c98(); // Function GameplayAbilities.GameplayAbility.*8b04b61c98 // Final|Native|Protected|BlueprintCallable // @ game+0x67a7ae8
	int32 *66581ce633(); // Function GameplayAbilities.GameplayAbility.*66581ce633 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67a99b4
	bool *ecb2cdee8c(); // Function GameplayAbilities.GameplayAbility.*ecb2cdee8c // Native|Public|BlueprintCallable // @ game+0x67b05e8
	struct AActor* *043014c09a(); // Function GameplayAbilities.GameplayAbility.*043014c09a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a9dcc
	struct F*2b830333e1 *65294ff4ae(); // Function GameplayAbilities.GameplayAbility.*65294ff4ae // Native|Protected|BlueprintCallable // @ game+0x67aade0
	struct FGameplayTag *a263c278c2(); // Function GameplayAbilities.GameplayAbility.*a263c278c2 // Native|Protected|BlueprintCallable // @ game+0x67ab158
	struct FName *dc41f1d30d(); // Function GameplayAbilities.GameplayAbility.*dc41f1d30d // Final|Native|Protected|BlueprintCallable // @ game+0x67ab758
	struct F*66e6e9d0a8 *89f6f435de(); // Function GameplayAbilities.GameplayAbility.*89f6f435de // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x67aaf30
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // Event|Public|BlueprintEvent // @ game+0x1b829c
	struct F*c0ab2cfdbe *e3423c8f00(); // Function GameplayAbilities.GameplayAbility.*e3423c8f00 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67ab288
	void *7f0bf70766(); // Function GameplayAbilities.GameplayAbility.*7f0bf70766 // Native|Public|BlueprintCallable // @ game+0x67ae918
	struct F*2b830333e1 *270d69f7f7(); // Function GameplayAbilities.GameplayAbility.*270d69f7f7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67aa24c
	struct FName *575ff6ffca(); // Function GameplayAbilities.GameplayAbility.*575ff6ffca // Final|Native|Protected|BlueprintCallable // @ game+0x67ab800
	bool *43f1170e87(); // Function GameplayAbilities.GameplayAbility.*43f1170e87 // Native|Public|BlueprintCallable // @ game+0x67aabdc
	struct F*ee84a5be65 *c44d03020f(); // Function GameplayAbilities.GameplayAbility.*c44d03020f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a9d98
	float GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a9f3c
	int32 *68c6749559(); // Function GameplayAbilities.GameplayAbility.*68c6749559 // Final|Native|Protected|BlueprintCallable // @ game+0x67a79b4
	bool *50dfe3fd59(); // Function GameplayAbilities.GameplayAbility.*50dfe3fd59 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x67aa718
	struct UObject* *1dcb2f5780(); // Function GameplayAbilities.GameplayAbility.*1dcb2f5780 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a9f98
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x880 (Inherited: 0x30)
struct UGameplayEffect : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EGameplayEffectDurationType *88995d608c; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGameplayEffectModifierMagnitude *0e6af612db; // 0x40(0x200)
	struct FScalableFloat Period; // 0x240(0x30)
	bool bExecutePeriodicEffectOnApplication; // 0x270(0x01)
	enum class *7883aa26a7 PeriodicInhibitionPolicy; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct TArray<struct F*78b34c26ea> Modifiers; // 0x278(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x288(0x10)
	struct FScalableFloat *8ed90c5343; // 0x298(0x30)
	struct TArray<struct UClass*> *4baedd8ac3; // 0x2c8(0x10)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x2d8(0x10)
	struct TArray<struct F*b23d3847b8> ConditionalGameplayEffects; // 0x2e8(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x2f8(0x10)
	bool bDenyOverflowApplication; // 0x308(0x01)
	bool bClearStackOnOverflow; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x310(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x320(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x330(0x01)
	bool *0a6d1b761b; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct TArray<struct F*cfbad48b2f> GameplayCues; // 0x338(0x10)
	struct UGameplayEffectUIData* UIData; // 0x348(0x08)
	struct F*bd2309b738 InheritableGameplayEffectTags; // 0x350(0x60)
	struct F*bd2309b738 InheritableOwnedTagsContainer; // 0x3b0(0x60)
	struct F*be289b2c60 OngoingTagRequirements; // 0x410(0x40)
	struct F*be289b2c60 ApplicationTagRequirements; // 0x450(0x40)
	struct F*be289b2c60 RemovalTagRequirements; // 0x490(0x40)
	struct F*bd2309b738 RemoveGameplayEffectsWithTags; // 0x4d0(0x60)
	struct F*be289b2c60 GrantedApplicationImmunityTags; // 0x530(0x40)
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
// Size: 0x38 (Inherited: 0x30)
struct U*e370fd54bb : U*0dbf8eac01 {
	char pad_30[0x8]; // 0x30(0x08)

	void *af925b3bc7(); // Function GameplayAbilities.*e370fd54bb.*af925b3bc7 // Native|Public|BlueprintCallable // @ game+0xa5ad70
};

// Class GameplayAbilities.*0bdb90d9f5
// Size: 0xf8 (Inherited: 0x38)
struct U*0bdb90d9f5 : U*e370fd54bb {
	struct FMulticastDelegate OnApplied; // 0x38(0x10)
	char pad_48[0xb0]; // 0x48(0xb0)

	struct F*ec4dfd3d93 OnAppliedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*0bdb90d9f5.OnAppliedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1b829c
	struct U*0bdb90d9f5* *7fccca7598(); // Function GameplayAbilities.*0bdb90d9f5.*7fccca7598 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67438cc
};

// Class GameplayAbilities.*c1d8349d38
// Size: 0x60 (Inherited: 0x38)
struct U*c1d8349d38 : U*e370fd54bb {
	struct FMulticastDelegate EventReceived; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct F*35341a2d42 EventReceivedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*c1d8349d38.EventReceivedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1b829c
	struct U*c1d8349d38* *532423de07(); // Function GameplayAbilities.*c1d8349d38.*532423de07 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6743c84
};

// Class GameplayAbilities.*137715b638
// Size: 0x58 (Inherited: 0x38)
struct U*137715b638 : U*e370fd54bb {
	char pad_38[0x20]; // 0x38(0x20)

	void AsyncWaitGameplayTagDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*137715b638.AsyncWaitGameplayTagDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1b829c
};

// Class GameplayAbilities.*021827460f
// Size: 0x68 (Inherited: 0x58)
struct U*021827460f : U*137715b638 {
	struct FMulticastDelegate Added; // 0x58(0x10)

	struct U*021827460f* *05e2baef2c(); // Function GameplayAbilities.*021827460f.*05e2baef2c // Final|Native|Static|Public|BlueprintCallable // @ game+0x6743e00
};

// Class GameplayAbilities.*3760d1977e
// Size: 0x68 (Inherited: 0x58)
struct U*3760d1977e : U*137715b638 {
	struct FMulticastDelegate Removed; // 0x58(0x10)

	struct U*3760d1977e* *3fcebff32a(); // Function GameplayAbilities.*3760d1977e.*3fcebff32a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6743f20
};

// Class GameplayAbilities.*f15d65d400
// Size: 0x30 (Inherited: 0x30)
struct U*f15d65d400 : UInterface {

	void *7dda0f6e9f(); // Function GameplayAbilities.*f15d65d400.*7dda0f6e9f // BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x673f8a0
	struct F*66e6e9d0a8 BlueprintCustomHandler(); // Function GameplayAbilities.*f15d65d400.BlueprintCustomHandler // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x1b829c
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	int32 *4a7c3e82f5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4a7c3e82f5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673fe1c
	struct F*c0ab2cfdbe *71a6223fa4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*71a6223fa4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6742934
	struct FTransform *183ab25086(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*183ab25086 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67414e8
	float *7bed63668d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7bed63668d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6740ca8
	int32 *5fbf0777db(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5fbf0777db // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6740138
	struct AActor* *3f8ceb2bd3(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3f8ceb2bd3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673e7b4
	bool *44f265707e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*44f265707e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6740e20
	struct FVector *e81f72117b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e81f72117b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67418a8
	struct FVector *776dc874b5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*776dc874b5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x673ee2c
	bool *fb0240dffa(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*fb0240dffa // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673eba8
	struct F*66e6e9d0a8 MakeGameplayCueParameters(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6742234
	struct FString *c5b9ce8307(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c5b9ce8307 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673fb04
	struct F*c0ab2cfdbe *d62048b3a7(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d62048b3a7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673c408
	struct AActor* *25673272e0(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*25673272e0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6740010
	struct F*66e6e9d0a8 *f4c0c3b8d2(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f4c0c3b8d2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673f8b4
	struct F*8fa95bb31f *d35eb987be(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d35eb987be // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x673f6e4
	float *b63bc0b819(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b63bc0b819 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67409b8
	struct F*8fa95bb31f *32450e403c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*32450e403c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x673c06c
	bool BreakGameplayCueParameters(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x673d2a0
	struct F*c0ab2cfdbe *d9a3e38f8a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d9a3e38f8a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673dae8
	bool *430f794004(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*430f794004 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6743484
	bool *2e69174b28(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2e69174b28 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673ecfc
	struct F*c0ab2cfdbe *7ec0a5aa99(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7ec0a5aa99 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6742fc4
	bool *4fd2155ffb(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4fd2155ffb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6743758
	struct FVector GetOrigin(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6741780
	struct F*8fa95bb31f *6243d0beaa(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6243d0beaa // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x673cd18
	float *f6d5a4d8ea(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f6d5a4d8ea // Final|Native|Static|Public|BlueprintCallable // @ game+0x673fc7c
	struct FTransform *de215eeb67(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*de215eeb67 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67419ec
	struct UAbilitySystemComponent* *2561f7fe14(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2561f7fe14 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673fa74
	struct FHitResult *f34033c412(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f34033c412 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x674126c
	struct FVector *9bccc06ff8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*9bccc06ff8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x673e6ac
	struct AActor* *b552b1cb21(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b552b1cb21 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673e300
	float *4ab4c34c71(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4ab4c34c71 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673ff7c
	struct F*2b830333e1 GetEffectContext(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext // Final|Native|Static|Public|BlueprintCallable // @ game+0x67406f4
	float *0d80cc213a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*0d80cc213a // Final|Native|Static|Public|BlueprintCallable // @ game+0x67415f8
	struct TArray<struct F*c0ab2cfdbe> *495ecac83e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*495ecac83e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6740500
	struct AActor* *5e0603bb78(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5e0603bb78 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673e55c
	bool *331f826a07(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*331f826a07 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6740fa8
	bool *bbfdbaed76(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bbfdbaed76 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6742b10
	struct F*c0ab2cfdbe *c5c22bf772(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c5c22bf772 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673c26c
	bool IsValid(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6741fc8
	bool *cff4b3436f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*cff4b3436f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673efc0
	int32 *0d150472b5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*0d150472b5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673fd5c
	struct UObject* *70ef88634f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*70ef88634f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673e904
	bool *b0acfd12ac(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b0acfd12ac // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67435f8
	bool IsInstigatorLocallyControlled(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6741de0
	struct FHitResult GetHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6741188
	struct F*8fa95bb31f *52e751a89d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*52e751a89d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x673bf50
	bool *03d25a3b3a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*03d25a3b3a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673ea54
	struct AActor* GetInstigatorActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6741414
	float *2a6c89a95c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2a6c89a95c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6740840
	float *083e12c018(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*083e12c018 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x673f3f0
	float *bf831fc80b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bf831fc80b // Final|Native|Static|Public|BlueprintCallable // @ game+0x673fbe8
	struct TArray<struct AActor*> *d9b040f696(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d9b040f696 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67403cc
	float *df4f788684(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*df4f788684 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673fee8
	float *b591cd3b51(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b591cd3b51 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x673f150
	struct F*c0ab2cfdbe *73c58f3f49(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*73c58f3f49 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673c798
	bool *45ce31c799(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*45ce31c799 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x673df64
	struct F*c0ab2cfdbe *179b5e3565(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*179b5e3565 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673c5fc
	struct TArray<struct AActor*> *3280ec14e7(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3280ec14e7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6740240
	struct F*c0ab2cfdbe *70a60b9438(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*70a60b9438 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67431bc
	struct FHitResult *732974a293(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*732974a293 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673e450
	struct F*8fa95bb31f *d0bf3a1b5b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d0bf3a1b5b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x673bd10
	bool *2653bf832f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2653bf832f // Final|Native|Static|Public|BlueprintCallable // @ game+0x673e0e4
	bool *19da737797(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*19da737797 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x673dccc
	struct F*c0ab2cfdbe SetDuration(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // Final|Native|Static|Public|BlueprintCallable // @ game+0x6742e30
	struct FTransform *cdfeabf07f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*cdfeabf07f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6741b88
	struct F*c0ab2cfdbe *818679ad77(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*818679ad77 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673cec8
	bool *c78ca5a01f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c78ca5a01f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6741ed4
	int32 *f1bae19006(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f1bae19006 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6740614
	struct F*35341a2d42 SendGameplayEventToActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x6742ca0
	struct F*6616fa779a *c58530befd(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c58530befd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67420a4
	struct F*c0ab2cfdbe *ac289396bc(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ac289396bc // Final|Native|Static|Public|BlueprintCallable // @ game+0x673cb24
	struct F*c0ab2cfdbe *d85a0ea205(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d85a0ea205 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673d0b4
	float *39d05244b5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*39d05244b5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6740b30
	bool HasHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6741cdc
	struct F*c0ab2cfdbe *a44c901ca3(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*a44c901ca3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673c98c
	bool *cd588a2d71(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*cd588a2d71 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6743300
	struct F*8fa95bb31f *2375cd7fa2(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2375cd7fa2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x673bdec
};

// Class GameplayAbilities.*ea3ef74d1d
// Size: 0x30 (Inherited: 0x30)
struct U*ea3ef74d1d : UInterface {
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

	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities // Final|Exec|Native|Public // @ game+0xb91cbc
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // Exec|Native|Public // @ game+0x5704638
	struct FString ServerCancelPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility // Final|Exec|Native|Public // @ game+0x567b738
	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // Exec|Native|Public // @ game+0xae5384
	struct FString ServerEndPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility // Final|Exec|Native|Public // @ game+0x567b738
	struct FString ServerActivatePlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility // Final|Exec|Native|Public // @ game+0x567b738
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x4a0 (Inherited: 0x480)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_480[0x18]; // 0x480(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x498(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName *ef04733cfe; // 0x88(0x08)
	enum class *30be4da0fa *5e99cb80d7; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector *214e18f7c1; // 0x94(0x0c)
	float *485a1eeee8; // 0xa0(0x04)
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
	bool *5ebf5b10ed; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UCurveFloat* *8fc156f86d; // 0xe8(0x08)
	bool *12af7914ed; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	struct UAbilityTask_ApplyRootMotionConstantForce* *ef5ac40731(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.*ef5ac40731 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67a5070
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
	float *1c527e8709; // 0xf8(0x04)
	bool *ee530b9e1b; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct U*59a0aeaef9* *da7756b7db; // 0x100(0x08)
	struct UCurveFloat* *d672920056; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	struct UAbilityTask_ApplyRootMotionJumpForce* *29275691b3(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.*29275691b3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67a5440
	struct FHitResult OnLandedCallback(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // Final|Native|Public|HasOutParms // @ game+0x67ad93c
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // Final|Native|Public|BlueprintCallable // @ game+0x67a9568
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x138 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinished; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	struct AActor* TargetActor; // 0xf0(0x08)
	struct FVector *aa08a0e944; // 0xf8(0x0c)
	enum class *a6b6e6317f *1cd1203018; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float Duration; // 0x108(0x04)
	bool *cbb124026d; // 0x10c(0x01)
	bool *f27a076109; // 0x10d(0x01)
	enum class EMovementMode *c236180f85; // 0x10e(0x01)
	bool *fde5dff3b1; // 0x10f(0x01)
	struct U*59a0aeaef9* *da7756b7db; // 0x110(0x08)
	struct UCurveFloat* *d672920056; // 0x118(0x08)
	struct UCurveFloat* *a56eb17ba0; // 0x120(0x08)
	struct UCurveFloat* *be969ca714; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)

	struct UAbilityTask_ApplyRootMotionMoveToActorForce* *0d91e89864(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*0d91e89864 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67a6234
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* *798b081843(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*798b081843 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67a58b4
	struct AActor* *0a24a0f6b5(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*0a24a0f6b5 // Final|Native|Public // @ game+0x67ae02c
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // Final|Native|Protected // @ game+0x67adff4
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x110 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnTimedOut; // 0xc0(0x10)
	struct FMulticastDelegate OnTimedOutAndDestinationReached; // 0xd0(0x10)
	struct FVector StartLocation; // 0xe0(0x0c)
	struct FVector TargetLocation; // 0xec(0x0c)
	float Duration; // 0xf8(0x04)
	bool *f27a076109; // 0xfc(0x01)
	enum class EMovementMode *c236180f85; // 0xfd(0x01)
	bool *fde5dff3b1; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	struct U*59a0aeaef9* *da7756b7db; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	struct UAbilityTask_ApplyRootMotionMoveToForce* *7ee8fa27d5(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.*7ee8fa27d5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67a5e68
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x118 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FVector Location; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct AActor* *f37a2ef1e9; // 0xe0(0x08)
	float Strength; // 0xe8(0x04)
	float Duration; // 0xec(0x04)
	float Radius; // 0xf0(0x04)
	bool *ff362984df; // 0xf4(0x01)
	bool *5ebf5b10ed; // 0xf5(0x01)
	bool *5549f9328f; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct UCurveFloat* *ca92445d00; // 0xf8(0x08)
	struct UCurveFloat* *8fc156f86d; // 0x100(0x08)
	bool *0963b0b13a; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FRotator *426d246e6a; // 0x10c(0x0c)

	struct UAbilityTask_ApplyRootMotionRadialForce* *a8ea9292dd(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.*a8ea9292dd // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67a68dc
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastDelegate OnTargetLocationReached; // 0x88(0x10)
	char pad_98[0x4]; // 0x98(0x04)
	struct FVector StartLocation; // 0x9c(0x0c)
	struct FVector TargetLocation; // 0xa8(0x0c)
	float *44735d9bd3; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UCurveFloat* *ac01a19749; // 0xc0(0x08)
	struct U*59a0aeaef9* *7e6ffa4995; // 0xc8(0x08)

	struct UAbilityTask_MoveToLocation* *90cfd116e1(); // Function GameplayAbilities.AbilityTask_MoveToLocation.*90cfd116e1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67ab990
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastDelegate OnSync; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_NetworkSyncPoint* *d450aa0f5f(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*d450aa0f5f // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b4438
	void *23e9699b25(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*23e9699b25 // Final|Native|Public // @ game+0x67ae018
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x180 (Inherited: 0x88)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastDelegate OnCompleted; // 0x88(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x98(0x10)
	struct FMulticastDelegate OnInterrupted; // 0xa8(0x10)
	struct FMulticastDelegate OnCancelled; // 0xb8(0x10)
	char pad_C8[0x90]; // 0xc8(0x90)
	struct UAnimMontage* *cc3fe64113; // 0x158(0x08)
	float Rate; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FName *25c2cf3d7f; // 0x168(0x08)
	float *fdceab32c3; // 0x170(0x04)
	float *db01c9c0ac; // 0x174(0x04)
	bool *faf402ed0e; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)

	void *c8b04ff8bf(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*c8b04ff8bf // Final|Native|Public // @ game+0x67adbfc
	bool *2b9c4e6673(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*2b9c4e6673 // Final|Native|Public // @ game+0x67ada3c
	bool OnMontageEnded(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // Final|Native|Public // @ game+0x67adb1c
	struct UAbilityTask_PlayMontageAndWait* *2e8692c192(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*2e8692c192 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67a8d14
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastDelegate OnPerformAction; // 0x88(0x10)
	struct FMulticastDelegate OnFinished; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_Repeat* RepeatAction(); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // Final|Native|Static|Public|BlueprintCallable // @ game+0x67ae930
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastDelegate SUCCESS; // 0x88(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x98(0x10)
	char pad_A8[0x28]; // 0xa8(0x28)

	struct AActor* FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x67a957c
	bool BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67a7bec
	struct UAbilityTask_SpawnActor* SpawnActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b07b0
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastDelegate OnStateEnded; // 0x88(0x10)
	struct FMulticastDelegate OnStateInterrupted; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_StartAbilityState* *1fa6be2540(); // Function GameplayAbilities.AbilityTask_StartAbilityState.*1fa6be2540 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b0964
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x410 (Inherited: 0x3f0)
struct AGameplayAbilityWorldReticle : AActor {
	struct F*26ccbc5580 Parameters; // 0x3f0(0x0c)
	bool bFaceOwnerFlat; // 0x3fc(0x01)
	bool bSnapToTargetedActor; // 0x3fd(0x01)
	bool bIsTargetValid; // 0x3fe(0x01)
	bool bIsTargetAnActor; // 0x3ff(0x01)
	struct APlayerController* MasterPC; // 0x400(0x08)
	struct AActor* TargetingActor; // 0x408(0x08)

	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // Event|Public|BlueprintEvent // @ game+0x1b829c
	bool OnValidTargetChanged(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // Event|Public|BlueprintEvent // @ game+0x1b829c
	bool *2f227da20d(); // Function GameplayAbilities.GameplayAbilityWorldReticle.*2f227da20d // Final|Native|Public|BlueprintCallable // @ game+0x67a94d4
	bool OnTargetingAnActor(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // Event|Public|BlueprintEvent // @ game+0x1b829c
	struct FVector SetReticleMaterialParamVector(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // Event|Public|HasDefaults|BlueprintEvent // @ game+0x1b829c
	float SetReticleMaterialParamFloat(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // Event|Public|BlueprintEvent // @ game+0x1b829c
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x5c0 (Inherited: 0x3f0)
struct AGameplayAbilityTargetActor : AActor {
	bool *450b836311; // 0x3f0(0x01)
	char pad_3F1[0xf]; // 0x3f1(0x0f)
	struct F*8b87ae35f3 StartLocation; // 0x400(0x70)
	char pad_470[0xe0]; // 0x470(0xe0)
	struct APlayerController* MasterPC; // 0x550(0x08)
	struct UGameplayAbility* OwningAbility; // 0x558(0x08)
	bool bDestroyOnConfirmation; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct AActor* SourceActor; // 0x568(0x08)
	struct F*26ccbc5580 ReticleParams; // 0x570(0x0c)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct UClass* ReticleClass; // 0x580(0x08)
	struct F*6616fa779a Filter; // 0x588(0x10)
	bool bDebug; // 0x598(0x01)
	char pad_599[0x17]; // 0x599(0x17)
	struct UAbilitySystemComponent* *7cd7f473f1; // 0x5b0(0x08)
	char pad_5B8[0x8]; // 0x5b8(0x08)

	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // Native|Public // @ game+0x56ea3a0
	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // Native|Public // @ game+0x572f5d0
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastDelegate TimeElapsed; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)

	struct UAbilityTask_VisualizeTargeting* *56852db2d1(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*56852db2d1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b1004
	struct UAbilityTask_VisualizeTargeting* *5540475b96(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*5540475b96 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b0e94
	bool BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67a7dcc
	struct AGameplayAbilityTargetActor* FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x67a9700
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x140 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastDelegate OnActivate; // 0x88(0x10)
	char pad_98[0xa8]; // 0x98(0xa8)

	struct UAbilityTask_WaitAbilityActivate* *b02ad68b1f(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*b02ad68b1f // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b1428
	struct UGameplayAbility* *5996fba6cf(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*5996fba6cf // Final|Native|Public // @ game+0x67accb0
	struct UAbilityTask_WaitAbilityActivate* *db874db42c(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*db874db42c // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b1610
	struct UAbilityTask_WaitAbilityActivate* *b5f32b6561(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*b5f32b6561 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b1814
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0x100 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastDelegate OnCommit; // 0x88(0x10)
	char pad_98[0x68]; // 0x98(0x68)

	struct UAbilityTask_WaitAbilityCommit* *edb87a324c(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*edb87a324c // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b1bb8
	struct UAbilityTask_WaitAbilityCommit* *96425599fc(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*96425599fc // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b1a24
	struct UGameplayAbility* *741a10422b(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*741a10422b // Final|Native|Public // @ game+0x67acd40
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xe8 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x48]; // 0x98(0x48)
	struct UAbilitySystemComponent* *1211f01e6b; // 0xe0(0x08)

	struct UAbilityTask_WaitAttributeChange* *7859bfe701(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*7859bfe701 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b2548
	struct UAbilityTask_WaitAttributeChange* *1d9e25bd35(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*1d9e25bd35 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b1d74
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x118 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x78]; // 0x98(0x78)
	struct UAbilitySystemComponent* *1211f01e6b; // 0x110(0x08)

	struct UAbilityTask_WaitAttributeChangeRatioThreshold* *72549e44d4(); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.*72549e44d4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b1fd8
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xe0 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x40]; // 0x98(0x40)
	struct UAbilitySystemComponent* *1211f01e6b; // 0xd8(0x08)

	struct UAbilityTask_WaitAttributeChangeThreshold* *1106e20dae(); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.*1106e20dae // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b22e4
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastDelegate OnCancel; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_WaitCancel* *da78930ae6(); // Function GameplayAbilities.AbilityTask_WaitCancel.*da78930ae6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b1174
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x67ada00
	void *7871f25f6b(); // Function GameplayAbilities.AbilityTask_WaitCancel.*7871f25f6b // Final|Native|Public // @ game+0x67ad1d0
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitConfirm* *f964b4cd27(); // Function GameplayAbilities.AbilityTask_WaitConfirm.*f964b4cd27 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b1208
	struct UGameplayAbility* OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // Final|Native|Public // @ game+0x67ad1f8
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	struct FMulticastDelegate OnCancel; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)

	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // Final|Native|Public // @ game+0x67ada28
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // Final|Native|Public // @ game+0x67ad288
	struct UAbilityTask_WaitConfirmCancel* *f2f502ff6c(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*f2f502ff6c // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b129c
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x67ada14
	void *7871f25f6b(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*7871f25f6b // Final|Native|Public // @ game+0x67ad1e4
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastDelegate OnFinish; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_WaitDelay* WaitDelay(); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b1330
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1c0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_88[0x128]; // 0x88(0x128)
	struct UAbilitySystemComponent* *1211f01e6b; // 0x1b0(0x08)
	char pad_1B8[0x8]; // 0x1b8(0x08)

	struct F*ec4dfd3d93 *f329e26998(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.*f329e26998 // Final|Native|Public|HasOutParms // @ game+0x67ad030
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Self* *c6075117ca(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*c6075117ca // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b2ed4
	struct UAbilityTask_WaitGameplayEffectApplied_Self* *6b89ccdaf1(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*6b89ccdaf1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b2ad0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Target* *06c7bc8de9(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*06c7bc8de9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b3684
	struct UAbilityTask_WaitGameplayEffectApplied_Target* *bef1b7cbd1(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*bef1b7cbd1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b3280
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x130 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastDelegate bLocked; // 0x88(0x10)
	char pad_98[0x88]; // 0x98(0x88)
	struct UAbilitySystemComponent* *1211f01e6b; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* *16ccfb9777(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.*16ccfb9777 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b3a30
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastDelegate OnRemoved; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)

	struct UAbilityTask_WaitGameplayEffectRemoved* *5bcb6a83fd(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*5bcb6a83fd // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b285c
	struct F*ecebf18aaa *7ef6a0f683(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*7ef6a0f683 // Final|Native|Public|HasOutParms // @ game+0x67ad4fc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_WaitGameplayEffectStackChange* *4e45ccf055(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*4e45ccf055 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b294c
	int32 *3b61ad754e(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*3b61ad754e // Final|Native|Public // @ game+0x67ad5fc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastDelegate EventReceived; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
	struct UAbilitySystemComponent* *1c4fabdd56; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)

	struct UAbilityTask_WaitGameplayEvent* *5679c0fce1(); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.*5679c0fce1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b3d30
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_88[0x10]; // 0x88(0x10)
	struct UAbilitySystemComponent* *1c4fabdd56; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	int32 *3498b9e799(); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.*3498b9e799 // Native|Public // @ game+0x67a98b0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Added; // 0xb0(0x10)

	struct UAbilityTask_WaitGameplayTagAdded* *d4322f8e1e(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.*d4322f8e1e // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b3f38
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Removed; // 0xb0(0x10)

	struct UAbilityTask_WaitGameplayTagRemoved* *f189dcc0db(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.*f189dcc0db // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b40d0
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastDelegate OnPress; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitInputPress* *21b34a9cee(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*21b34a9cee // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b4268
	void *1837f60e54(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*1837f60e54 // Final|Native|Public // @ game+0x67add40
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastDelegate OnRelease; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitInputRelease* *65db0c58aa(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*65db0c58aa // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b4350
	void *34760caa84(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*34760caa84 // Final|Native|Public // @ game+0x67add54
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitMovementModeChange* *4a593f76ac(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.*4a593f76ac // Final|Native|Static|Public|BlueprintCallable // @ game+0x67a8fd4
	bool OnMovementModeChange(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // Final|Native|Public // @ game+0x67adc10
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x98 (Inherited: 0x88)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastDelegate OnOverlap; // 0x88(0x10)

	struct UAbilityTask_WaitOverlap* *4dbe7bfb61(); // Function GameplayAbilities.AbilityTask_WaitOverlap.*4dbe7bfb61 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b2a3c
	struct FHitResult OnHitCallback(); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // Final|Native|Public|HasOutParms|HasDefaults // @ game+0x67ad72c
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastDelegate ValidData; // 0x88(0x10)
	struct FMulticastDelegate Cancelled; // 0x98(0x10)
	struct UClass* TargetClass; // 0xa8(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)

	struct AGameplayAbilityTargetActor* FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x67a97d8
	struct FGameplayTag *00dd879f5d(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*00dd879f5d // Final|Native|Public|HasOutParms // @ game+0x67ae2dc
	struct UAbilityTask_WaitTargetData* *33d590383d(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*33d590383d // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b46a0
	struct F*8fa95bb31f *4a910b4e30(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*4a910b4e30 // Final|Native|Public|HasOutParms // @ game+0x67ae1fc
	struct UAbilityTask_WaitTargetData* *6e792c92cf(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*6e792c92cf // Final|Native|Static|Public|BlueprintCallable // @ game+0x67b451c
	void *6144a5aa22(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*6144a5aa22 // Final|Native|Public // @ game+0x67ae410
	bool BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67a7f08
	struct F*8fa95bb31f *29404f2e5a(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*29404f2e5a // Final|Native|Public|HasOutParms // @ game+0x67ae11c
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastDelegate OnVelocityChage; // 0x88(0x10)
	struct UMovementComponent* *95a3ade266; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	struct UAbilityTask_WaitVelocityChange* *6ac81b5ade(); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.*6ac81b5ade // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67a90bc
};

// Class GameplayAbilities.*f1a7cdc4a5
// Size: 0x78 (Inherited: 0x38)
struct U*f1a7cdc4a5 : UAttributeSet {
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

// Class GameplayAbilities.*0964db9b60
// Size: 0x580 (Inherited: 0x580)
struct U*0964db9b60 : UGameplayAbility {
};

// Class GameplayAbilities.*476845cb3d
// Size: 0x5c0 (Inherited: 0x580)
struct U*476845cb3d : UGameplayAbility {
	struct UAnimMontage* *cc3fe64113; // 0x580(0x08)
	float PlayRate; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FName SectionName; // 0x590(0x08)
	struct TArray<struct UClass*> *e0327af2ec; // 0x598(0x10)
	struct TArray<struct UGameplayEffect*> *ec740b56c0; // 0x5a8(0x10)
	char pad_5B8[0x8]; // 0x5b8(0x08)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x48 (Inherited: 0x38)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct F*c4cbd103fb> Abilities; // 0x38(0x10)
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
	struct TArray<struct UActorComponent*> *cb5b01ed61; // 0x418(0x10)
};

// Class GameplayAbilities.*47a96362e7
// Size: 0x30 (Inherited: 0x30)
struct U*47a96362e7 : UObject {
};

// Class GameplayAbilities.*4dd74413c2
// Size: 0x30 (Inherited: 0x30)
struct U*4dd74413c2 : U*47a96362e7 {
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x470 (Inherited: 0x38)
struct UGameplayCueManager : UDataAsset {
	char pad_38[0x78]; // 0x38(0x78)
	struct F*a1b25a3259 *fac1076964; // 0xb0(0xb0)
	struct F*a1b25a3259 *649fa6453a; // 0x160(0xb0)
	char pad_210[0x1a0]; // 0x210(0x1a0)
	struct TArray<struct UClass*> *d53caaed62; // 0x3b0(0x10)
	struct TArray<struct UClass*> *a37198c1b8; // 0x3c0(0x10)
	struct TArray<struct F*eae0ebff14> *49b79b92de; // 0x3d0(0x10)
	int32 *3186a4df45; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct F*ae73b4ceaa> *4d1a656c9e; // 0x3e8(0x10)
	char pad_3F8[0x78]; // 0x3f8(0x78)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x450 (Inherited: 0x3f0)
struct AGameplayCueNotify_Actor : AActor {
	bool *63eca00154; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float *a9940553da; // 0x3f4(0x04)
	bool *6b238b0ded; // 0x3f8(0x01)
	bool *9281ed79b7; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct FGameplayTag GameplayCueTag; // 0x400(0x08)
	struct FName GameplayCueName; // 0x408(0x08)
	bool *752167823e; // 0x410(0x01)
	bool *669a954dda; // 0x411(0x01)
	bool *b90399ffae; // 0x412(0x01)
	bool *ff83ffc9f4; // 0x413(0x01)
	bool *b7226140b4; // 0x414(0x01)
	bool *487a3b138a; // 0x415(0x01)
	char pad_416[0x2]; // 0x416(0x02)
	int32 *16b408a30f; // 0x418(0x04)
	char pad_41C[0x34]; // 0x41c(0x34)

	bool OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x67ad29c
	struct AActor* OnOwnerDestroyed(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // Native|Public // @ game+0x5655d88
	void *0ab891be7d(); // Function GameplayAbilities.GameplayCueNotify_Actor.*0ab891be7d // Native|Public|BlueprintCallable // @ game+0x8c074c
	struct F*66e6e9d0a8 K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1b829c
	bool OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x67add68
	bool OnActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x67acdd0
	bool WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x67b4824
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x48 (Inherited: 0x30)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x30(0x08)
	struct FName GameplayCueName; // 0x38(0x08)
	bool *669a954dda; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	bool OnActive(); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x67acf00
	struct F*66e6e9d0a8 K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1b829c
	bool OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x67ade98
	bool WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x67b4954
	bool OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x67ad3cc
};

// Class GameplayAbilities.*9548613553
// Size: 0x58 (Inherited: 0x48)
struct U*9548613553 : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x48(0x08)
	struct UParticleSystem* ParticleSystem; // 0x50(0x08)
};

// Class GameplayAbilities.*936c76ae6d
// Size: 0x98 (Inherited: 0x38)
struct U*936c76ae6d : UDataAsset {
	struct TArray<struct F*731ab2bf2c> *712cfcffae; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
};

// Class GameplayAbilities.*8b47080544
// Size: 0x880 (Inherited: 0x880)
struct U*8b47080544 : UGameplayEffect {
};

// Class GameplayAbilities.*ef189a554b
// Size: 0x48 (Inherited: 0x40)
struct U*ef189a554b : U*4b98fd5b79 {
	bool *667e53e3e3; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	float CalculateBaseMagnitude(); // Function GameplayAbilities.*ef189a554b.CalculateBaseMagnitude // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x67a8044
};

// Class GameplayAbilities.*d5563668a0
// Size: 0x30 (Inherited: 0x30)
struct U*d5563668a0 : UObject {

	bool CanApplyGameplayEffect(); // Function GameplayAbilities.*d5563668a0.CanApplyGameplayEffect // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x67a813c
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x30 (Inherited: 0x30)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.*17dab7473f
// Size: 0x48 (Inherited: 0x30)
struct U*17dab7473f : UGameplayEffectUIData {
	struct FText Description; // 0x30(0x18)
};

// Class GameplayAbilities.*0e4bd35382
// Size: 0x220 (Inherited: 0x38)
struct U*0e4bd35382 : UDataAsset {
	struct TArray<struct F*c97d215778> Entries; // 0x38(0x10)
	char pad_48[0x1d8]; // 0x48(0x1d8)

	int32 *582ca5491c(); // Function GameplayAbilities.*0e4bd35382.*582ca5491c // Final|Native|Protected // @ game+0x67b0a88
};

// Class GameplayAbilities.*87b84a339a
// Size: 0x30 (Inherited: 0x30)
struct U*87b84a339a : UInterface {
};


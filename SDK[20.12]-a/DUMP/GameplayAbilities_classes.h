// Class GameplayAbilities.*8448d8e632
// Size: 0x30 (Inherited: 0x30)
struct U*8448d8e632 : UInterface {
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1860 (Inherited: 0x270)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_270[0x8]; // 0x270(0x08)
	char *a2de653ec2 : 1; // 0x278(0x01)
	char pad_278_1 : 7; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct TArray<struct F*b4a65db0a7> *f29c52d57c; // 0x280(0x10)
	struct FName AffectedAnimInstanceTag; // 0x290(0x08)
	char pad_298[0x5c8]; // 0x298(0x5c8)
	float *68ce101bc1; // 0x860(0x04)
	float *cfd565824f; // 0x864(0x04)
	char pad_868[0x80]; // 0x868(0x80)
	bool *f4bd8995ad; // 0x8e8(0x01)
	bool *bfd7f0fa0d; // 0x8e9(0x01)
	bool *1e333e7cfb; // 0x8ea(0x01)
	bool *59d5209ff1; // 0x8eb(0x01)
	char pad_8EC[0x4]; // 0x8ec(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> *572cfea876; // 0x8f0(0x10)
	char pad_900[0x38]; // 0x900(0x38)
	struct F*2f57e44964 ActivatableAbilities; // 0x938(0xc8)
	char pad_A00[0x30]; // 0xa00(0x30)
	struct TArray<struct UGameplayAbility*> *42a4d5de5a; // 0xa30(0x10)
	char pad_A40[0x20c]; // 0xa40(0x20c)
	bool *a0991d3d99; // 0xc4c(0x01)
	bool *918aa88e83; // 0xc4d(0x01)
	char pad_C4E[0x2]; // 0xc4e(0x02)
	struct F*589af052e0 *536b304aff; // 0xc50(0x30)
	char pad_C80[0xa0]; // 0xc80(0xa0)
	struct F*8cd29561c5 *8a7330720a; // 0xd20(0x4e0)
	struct F*65b3785e23 *7a6e901f40; // 0x1200(0xd0)
	struct F*65b3785e23 *1014d359dd; // 0x12d0(0xd0)
	char pad_13A0[0x318]; // 0x13a0(0x318)
	struct TArray<struct UAttributeSet*> *19e3a82526; // 0x16b8(0x10)
	struct TArray<struct FString> *77cc3720e0; // 0x16c8(0x10)
	struct AActor* *e44b518add; // 0x16d8(0x08)
	struct AActor* AvatarActor; // 0x16e0(0x08)
	struct F*6a5bcc596e *f0b4b65534; // 0x16e8(0x38)
	struct TArray<bool> *5aa9a82a8f; // 0x1720(0x10)
	struct F*8cf8a1b08c *c441622927; // 0x1730(0x60)
	struct TArray<struct FString> *33a869daff; // 0x1790(0x10)
	struct F*7d5406741e *7d5406741e; // 0x17a0(0xc0)

	void *ba95354741(); // Function GameplayAbilities.AbilitySystemComponent.*ba95354741 // Final|Native|Public|BlueprintCallable // @ game+0x6fb706c
	void *a7f6ca6ea2(); // Function GameplayAbilities.AbilitySystemComponent.*a7f6ca6ea2 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6fb82e4
	void *4393c5498f(); // Function GameplayAbilities.AbilitySystemComponent.*4393c5498f // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6fb6c60
	void *09502ced07(); // Function GameplayAbilities.AbilitySystemComponent.*09502ced07 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fbef38
	void *4a414e88dd(); // Function GameplayAbilities.AbilitySystemComponent.*4a414e88dd // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6fc02c4
	void *7f449f32c6(); // Function GameplayAbilities.AbilitySystemComponent.*7f449f32c6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb9eb8
	void *91a4ecdf11(); // Function GameplayAbilities.AbilitySystemComponent.*91a4ecdf11 // Native|Public|BlueprintCallable // @ game+0x6fc0a2c
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void *a1d11f009a(); // Function GameplayAbilities.AbilitySystemComponent.*a1d11f009a // Net|Native|Event|NetMulticast|Public // @ game+0x6fbbc48
	void *b851ef7b8a(); // Function GameplayAbilities.AbilitySystemComponent.*b851ef7b8a // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fbf414
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // Net|Native|Event|NetMulticast|Public // @ game+0x6fbc29c
	void *39330d271c(); // Function GameplayAbilities.AbilitySystemComponent.*39330d271c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fbb17c
	void *b43360296a(); // Function GameplayAbilities.AbilitySystemComponent.*b43360296a // Final|Native|Public|BlueprintCallable // @ game+0x6fbe264
	void *32187e4d56(); // Function GameplayAbilities.AbilitySystemComponent.*32187e4d56 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fbf288
	void *bcfada20f4(); // Function GameplayAbilities.AbilitySystemComponent.*bcfada20f4 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6fbe634
	void *77f2a9ef27(); // Function GameplayAbilities.AbilitySystemComponent.*77f2a9ef27 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6fb9d88
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // Native|Protected // @ game+0x6fbde1c
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // Native|Protected // @ game+0x6bd2634
	void *6044438cc2(); // Function GameplayAbilities.AbilitySystemComponent.*6044438cc2 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fbf364
	void *0dfd9189d5(); // Function GameplayAbilities.AbilitySystemComponent.*0dfd9189d5 // Net|Native|Event|NetMulticast|Public // @ game+0x6fbbf98
	void *5cd347d3fb(); // Function GameplayAbilities.AbilitySystemComponent.*5cd347d3fb // Native|Public|BlueprintCallable // @ game+0x6fc0a44
	void *6e5d212b12(); // Function GameplayAbilities.AbilitySystemComponent.*6e5d212b12 // Final|Native|Public|BlueprintCallable // @ game+0x6fbe44c
	void *3a62a3c061(); // Function GameplayAbilities.AbilitySystemComponent.*3a62a3c061 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6fc01e0
	void *e74adc61d2(); // Function GameplayAbilities.AbilitySystemComponent.*e74adc61d2 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fbf04c
	void *90efec5a20(); // Function GameplayAbilities.AbilitySystemComponent.*90efec5a20 // Net|Native|Event|NetMulticast|Public // @ game+0x6fbb958
	void *3771be7c4f(); // Function GameplayAbilities.AbilitySystemComponent.*3771be7c4f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fba25c
	void MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fbaf98
	void *28d7600d2b(); // Function GameplayAbilities.AbilitySystemComponent.*28d7600d2b // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6fb86dc
	void *5dac1f72d3(); // Function GameplayAbilities.AbilitySystemComponent.*5dac1f72d3 // Final|Native|Public|BlueprintCallable // @ game+0x6fb720c
	void *2202d4ef97(); // Function GameplayAbilities.AbilitySystemComponent.*2202d4ef97 // Net|Native|Event|NetMulticast|Public // @ game+0x6fbc85c
	void *bf4cfd83cb(); // Function GameplayAbilities.AbilitySystemComponent.*bf4cfd83cb // Final|Native|Public|BlueprintCallable // @ game+0x6fbe264
	void *a4a9dafc68(); // Function GameplayAbilities.AbilitySystemComponent.*a4a9dafc68 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fbf6e0
	void *208abd8900(); // Function GameplayAbilities.AbilitySystemComponent.*208abd8900 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fba230
	void TryActivateAbilitiesByTag(); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6fc0a5c
	void *7823a0bce1(); // Function GameplayAbilities.AbilitySystemComponent.*7823a0bce1 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6fb8104
	void *eedf3da697(); // Function GameplayAbilities.AbilitySystemComponent.*eedf3da697 // Net|Native|Event|NetMulticast|Public // @ game+0x6fbbdf0
	void *7b0ecc059d(); // Function GameplayAbilities.AbilitySystemComponent.*7b0ecc059d // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fbf4c4
	void *00b5e47550(); // Function GameplayAbilities.AbilitySystemComponent.*00b5e47550 // Net|Native|Event|NetMulticast|Public // @ game+0x6fbbb10
	void *a921a80513(); // Function GameplayAbilities.AbilitySystemComponent.*a921a80513 // Net|Native|Event|NetMulticast|Public // @ game+0x6fbc644
	void *47f0ae7579(); // Function GameplayAbilities.AbilitySystemComponent.*47f0ae7579 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fbed78
	void *5e26fca1f6(); // Function GameplayAbilities.AbilitySystemComponent.*5e26fca1f6 // Final|Native|Public|BlueprintCallable // @ game+0x6fc0bb0
	void RemoveActiveGameplayEffect(); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6fbe540
	void *5053d06c17(); // Function GameplayAbilities.AbilitySystemComponent.*5053d06c17 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6fb6d98
	void *a13e69e1e0(); // Function GameplayAbilities.AbilitySystemComponent.*a13e69e1e0 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fbff78
	void *2c116ff4cc(); // Function GameplayAbilities.AbilitySystemComponent.*2c116ff4cc // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fbec64
	void *7f48b14635(); // Function GameplayAbilities.AbilitySystemComponent.*7f48b14635 // Native|Public|BlueprintCallable // @ game+0x6fc0540
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // Native|Public // @ game+0x5e27f88
	void *4330fca671(); // Function GameplayAbilities.AbilitySystemComponent.*4330fca671 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6fb893c
	void *b4c9b348a3(); // Function GameplayAbilities.AbilitySystemComponent.*b4c9b348a3 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6fb81e4
	void AbilityAbilityKey__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void *a432d2d4a2(); // Function GameplayAbilities.AbilitySystemComponent.*a432d2d4a2 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6fb85bc
	void *0a86bb1fc6(); // Function GameplayAbilities.AbilitySystemComponent.*0a86bb1fc6 // Final|Native|Public|BlueprintCallable // @ game+0x6fbe358
	void *b9b95a2b9c(); // Function GameplayAbilities.AbilitySystemComponent.*b9b95a2b9c // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6fb849c
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // Net|Native|Event|NetMulticast|Public // @ game+0x6fbc150
	void *19ec468815(); // Function GameplayAbilities.AbilitySystemComponent.*19ec468815 // Final|Native|Public|BlueprintCallable // @ game+0x6fbae28
	void *1c0468b989(); // Function GameplayAbilities.AbilitySystemComponent.*1c0468b989 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fbfde4
	void *5a7a540d43(); // Function GameplayAbilities.AbilitySystemComponent.*5a7a540d43 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6fb87ec
	void *4de7ac1ff6(); // Function GameplayAbilities.AbilitySystemComponent.*4de7ac1ff6 // Net|Native|Event|NetMulticast|Public // @ game+0x6fbc444
	void *99bf4c9c24(); // Function GameplayAbilities.AbilitySystemComponent.*99bf4c9c24 // Final|Native|Public|HasOutParms|BlueprintCallable|Const // @ game+0x6fb9890
	void *4077454fe8(); // Function GameplayAbilities.AbilitySystemComponent.*4077454fe8 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fbeaf4
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // Native|Public // @ game+0x5e3d5b8
	void *f2f9f39c48(); // Function GameplayAbilities.AbilitySystemComponent.*f2f9f39c48 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fbe9c4
	void *3139462a48(); // Function GameplayAbilities.AbilitySystemComponent.*3139462a48 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6fb99e8
	void *e1865036a4(); // Function GameplayAbilities.AbilitySystemComponent.*e1865036a4 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fbfc24
	void *9c3cf530f7(); // Function GameplayAbilities.AbilitySystemComponent.*9c3cf530f7 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fbf23c
	void *c1545a0d44(); // Function GameplayAbilities.AbilitySystemComponent.*c1545a0d44 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fbf970
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // Final|Native|Public // @ game+0x6fbde08
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

// Class GameplayAbilities.*4b1d17cc1b
// Size: 0x40 (Inherited: 0x30)
struct U*4b1d17cc1b : UObject {
	struct TArray<struct F*9865947c9e> RelevantAttributesToCapture; // 0x30(0x10)
};

// Class GameplayAbilities.*54f5c5e5ea
// Size: 0x48 (Inherited: 0x40)
struct U*54f5c5e5ea : U*4b1d17cc1b {
	bool bRequiresPassedInTags; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void Execute(); // Function GameplayAbilities.*54f5c5e5ea.Execute // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x6fb90c8
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x580 (Inherited: 0x30)
struct UGameplayAbility : UObject {
	char pad_30[0x240]; // 0x30(0x240)
	struct FGameplayTagContainer *0b60342393; // 0x270(0x20)
	bool *4b123d7cc4; // 0x290(0x01)
	bool *92f4f5518b; // 0x291(0x01)
	char pad_292[0x4]; // 0x292(0x04)
	enum class *8808ad2c04 *e265a6cae4; // 0x296(0x01)
	enum class *e9bca40f1c *9c9313ea29; // 0x297(0x01)
	bool *2298282624; // 0x298(0x01)
	bool *3075f8d415; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct F*6b5f4136eb CurrentActivationInfo; // 0x2a0(0x20)
	struct F*a2f2c750be CurrentEventData; // 0x2c0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy *3fe6e244e5; // 0x370(0x01)
	enum class EGameplayAbilityNetSecurityPolicy *8840946464; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct UClass* *b31859a4c6; // 0x378(0x08)
	struct TArray<struct F*8a876f8a0d> *fb5f88b31a; // 0x380(0x10)
	struct UClass* *f384eb26bd; // 0x390(0x08)
	struct FGameplayTagContainer *6a968bcfb7; // 0x398(0x20)
	struct FGameplayTagContainer *1fe819974a; // 0x3b8(0x20)
	struct FGameplayTagContainer *4c6b6c0945; // 0x3d8(0x20)
	struct FGameplayTagContainer *99d5f2db64; // 0x3f8(0x20)
	struct FGameplayTagContainer *243d2f281c; // 0x418(0x20)
	struct FGameplayTagContainer *b4e81e97a5; // 0x438(0x20)
	struct FGameplayTagContainer *ab14392e34; // 0x458(0x20)
	struct FGameplayTagContainer *a1fbf01630; // 0x478(0x20)
	struct FGameplayTagContainer *fa5de4c18a; // 0x498(0x20)
	char pad_4B8[0x20]; // 0x4b8(0x20)
	struct TArray<struct UGameplayTask*> *1b361b84a5; // 0x4d8(0x10)
	char pad_4E8[0x10]; // 0x4e8(0x10)
	struct UAnimMontage* *f9c064e9f1; // 0x4f8(0x08)
	char pad_500[0x60]; // 0x500(0x60)
	bool *37789dceb0; // 0x560(0x01)
	bool *359dece568; // 0x561(0x01)
	bool *0796c191eb; // 0x562(0x01)
	bool *297a873657; // 0x563(0x01)
	char pad_564[0x14]; // 0x564(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)

	void *8c0031ad6b(); // Function GameplayAbilities.GameplayAbility.*8c0031ad6b // Final|Native|Public|BlueprintCallable // @ game+0x6fba908
	void *89200a133f(); // Function GameplayAbilities.GameplayAbility.*89200a133f // Final|Native|Protected|BlueprintCallable // @ game+0x6fbb5ac
	void *2ad56ef9b1(); // Function GameplayAbilities.GameplayAbility.*2ad56ef9b1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fbb034
	void *08a92c381f(); // Function GameplayAbilities.GameplayAbility.*08a92c381f // Native|Public|BlueprintCallable // @ game+0x6fc04a8
	void *aa6a8af046(); // Function GameplayAbilities.GameplayAbility.*aa6a8af046 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb9fe8
	void GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb9cd8
	void K2_CanActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // Event|Protected|HasOutParms|BlueprintEvent|Const // @ game+0x3b43ac
	void *39f97973e4(); // Function GameplayAbilities.GameplayAbility.*39f97973e4 // Native|Public|BlueprintCallable // @ game+0x6fba9c8
	void *356a35bef3(); // Function GameplayAbilities.GameplayAbility.*356a35bef3 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6fba114
	void *546f4ef9e2(); // Function GameplayAbilities.GameplayAbility.*546f4ef9e2 // Native|Public|BlueprintCallable // @ game+0x6fba978
	void GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb972c
	void *2b336c6c12(); // Function GameplayAbilities.GameplayAbility.*2b336c6c12 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb761c
	void *5dac1f72d3(); // Function GameplayAbilities.GameplayAbility.*5dac1f72d3 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb7400
	void *3b065b6ee9(); // Function GameplayAbilities.GameplayAbility.*3b065b6ee9 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x6fbacdc
	void *73a85cc4b9(); // Function GameplayAbilities.GameplayAbility.*73a85cc4b9 // Final|Native|Protected|BlueprintCallable // @ game+0x6fbb6a4
	void *de3aaf11c4(); // Function GameplayAbilities.GameplayAbility.*de3aaf11c4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fba0f0
	void *edb7b793cc(); // Function GameplayAbilities.GameplayAbility.*edb7b793cc // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb9750
	void *987e4d7778(); // Function GameplayAbilities.GameplayAbility.*987e4d7778 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb8074
	void *8e737cf1b9(); // Function GameplayAbilities.GameplayAbility.*8e737cf1b9 // Native|Protected|BlueprintCallable // @ game+0x6fbab8c
	void *70d061b472(); // Function GameplayAbilities.GameplayAbility.*70d061b472 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb986c
	void *7dd14bb20f(); // Function GameplayAbilities.GameplayAbility.*7dd14bb20f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb9b8c
	void *f1da960198(); // Function GameplayAbilities.GameplayAbility.*f1da960198 // Native|Public|BlueprintCallable // @ game+0x6fba9f0
	void *621c46f094(); // Function GameplayAbilities.GameplayAbility.*621c46f094 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb7884
	void *f9ae446f7d(); // Function GameplayAbilities.GameplayAbility.*f9ae446f7d // Final|Native|Protected|BlueprintCallable // @ game+0x6fb7750
	void *36beb983f5(); // Function GameplayAbilities.GameplayAbility.*36beb983f5 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6fbae0c
	void *e5d7bc256b(); // Function GameplayAbilities.GameplayAbility.*e5d7bc256b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb9b34
	void *ad822c8900(); // Function GameplayAbilities.GameplayAbility.*ad822c8900 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb9d34
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void *2ecd8322f8(); // Function GameplayAbilities.GameplayAbility.*2ecd8322f8 // Native|Public|BlueprintCallable // @ game+0x6fc0410
	void *8168c296b5(); // Function GameplayAbilities.GameplayAbility.*8168c296b5 // Final|Native|Protected|BlueprintCallable // @ game+0x6fba62c
	void *109287e492(); // Function GameplayAbilities.GameplayAbility.*109287e492 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb9d1c
	void *9e38704424(); // Function GameplayAbilities.GameplayAbility.*9e38704424 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb6f34
	void K2_OnEndAbility(); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void *a2c4c9b4ae(); // Function GameplayAbilities.GameplayAbility.*a2c4c9b4ae // Final|Native|Public|BlueprintCallable|Const // @ game+0x6fba248
	void *8fdfcdb3be(); // Function GameplayAbilities.GameplayAbility.*8fdfcdb3be // Native|Protected|BlueprintCallable // @ game+0x6fba324
	void *4b52feb6ae(); // Function GameplayAbilities.GameplayAbility.*4b52feb6ae // Final|Native|Protected|BlueprintCallable // @ game+0x6fbb504
	void *e4a2c8bbfe(); // Function GameplayAbilities.GameplayAbility.*e4a2c8bbfe // Final|Native|Protected|BlueprintCallable // @ game+0x6fba730
	void *3a91c6d12d(); // Function GameplayAbilities.GameplayAbility.*3a91c6d12d // Native|Protected|BlueprintCallable // @ game+0x6fbe87c
	void *56e97b38e7(); // Function GameplayAbilities.GameplayAbility.*56e97b38e7 // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x6fbb404
	void *913e8f9fe1(); // Function GameplayAbilities.GameplayAbility.*913e8f9fe1 // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x6fbb374
	void *2b34d09a81(); // Function GameplayAbilities.GameplayAbility.*2b34d09a81 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb8f98
	void *1e83314f3b(); // Function GameplayAbilities.GameplayAbility.*1e83314f3b // Native|Public|BlueprintCallable // @ game+0x5e4ac54
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void *411c7e64b7(); // Function GameplayAbilities.GameplayAbility.*411c7e64b7 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x6fba4b4
	void *a3060561e4(); // Function GameplayAbilities.GameplayAbility.*a3060561e4 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb9038
	void *5e3b02fdbb(); // Function GameplayAbilities.GameplayAbility.*5e3b02fdbb // Native|Public|BlueprintCallable // @ game+0x6fba9a0
	void *3c5cc3769a(); // Function GameplayAbilities.GameplayAbility.*3c5cc3769a // Final|Native|Public|BlueprintCallable|Const // @ game+0x6fba300
	void K2_ActivateAbilityFromEvent(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void *df3ee0848d(); // Function GameplayAbilities.GameplayAbility.*df3ee0848d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb9b68
	void *cc3a476767(); // Function GameplayAbilities.GameplayAbility.*cc3a476767 // Native|Protected|BlueprintCallable // @ game+0x5e4a758
	void K2_ShouldAbilityRespondToEvent(); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // Event|Protected|BlueprintEvent|Const // @ game+0x3b43ac
	void *4490e17742(); // Function GameplayAbilities.GameplayAbility.*4490e17742 // Native|Protected|BlueprintCallable // @ game+0x6fbaf04
	void *4b4d0526f7(); // Function GameplayAbilities.GameplayAbility.*4b4d0526f7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fba0cc
	void *f98832fc73(); // Function GameplayAbilities.GameplayAbility.*f98832fc73 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb89d0
	void *a7b71e279f(); // Function GameplayAbilities.GameplayAbility.*a7b71e279f // Native|Public|BlueprintCallable // @ game+0x6fbaae4
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x880 (Inherited: 0x30)
struct UGameplayEffect : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EGameplayEffectDurationType *862e176a02; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGameplayEffectModifierMagnitude *39ad3c48be; // 0x40(0x200)
	struct FScalableFloat Period; // 0x240(0x30)
	bool bExecutePeriodicEffectOnApplication; // 0x270(0x01)
	enum class *1cdab040fe PeriodicInhibitionPolicy; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct TArray<struct F*99fdd28db6> Modifiers; // 0x278(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x288(0x10)
	struct FScalableFloat *71a09d99bb; // 0x298(0x30)
	struct TArray<struct UClass*> *e2a98ce54b; // 0x2c8(0x10)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x2d8(0x10)
	struct TArray<struct F*fc501160eb> ConditionalGameplayEffects; // 0x2e8(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x2f8(0x10)
	bool bDenyOverflowApplication; // 0x308(0x01)
	bool bClearStackOnOverflow; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x310(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x320(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x330(0x01)
	bool *a25f5e330c; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct TArray<struct F*2d621db336> GameplayCues; // 0x338(0x10)
	struct UGameplayEffectUIData* UIData; // 0x348(0x08)
	struct F*b39f17e9ff InheritableGameplayEffectTags; // 0x350(0x60)
	struct F*b39f17e9ff InheritableOwnedTagsContainer; // 0x3b0(0x60)
	struct F*db129c0b81 OngoingTagRequirements; // 0x410(0x40)
	struct F*db129c0b81 ApplicationTagRequirements; // 0x450(0x40)
	struct F*db129c0b81 RemovalTagRequirements; // 0x490(0x40)
	struct F*b39f17e9ff RemoveGameplayEffectsWithTags; // 0x4d0(0x60)
	struct F*db129c0b81 GrantedApplicationImmunityTags; // 0x530(0x40)
	struct F*cf29ee6019 GrantedApplicationImmunityQuery; // 0x570(0x170)
	char pad_6E0[0x10]; // 0x6e0(0x10)
	struct F*cf29ee6019 RemoveGameplayEffectQuery; // 0x6f0(0x170)
	char pad_860[0x1]; // 0x860(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0x861(0x01)
	char pad_862[0x2]; // 0x862(0x02)
	int32 StackLimitCount; // 0x864(0x04)
	enum class *7c7ea2d7a5 StackDurationRefreshPolicy; // 0x868(0x01)
	enum class *e264cb211b StackPeriodResetPolicy; // 0x869(0x01)
	enum class *0ce34511ae StackExpirationPolicy; // 0x86a(0x01)
	char pad_86B[0x5]; // 0x86b(0x05)
	struct TArray<struct F*e111967977> GrantedAbilities; // 0x870(0x10)
};

// Class GameplayAbilities.*445b7f9bc5
// Size: 0x38 (Inherited: 0x30)
struct U*445b7f9bc5 : U*6bfc7814f8 {
	char pad_30[0x8]; // 0x30(0x08)

	void *435f0a9fa4(); // Function GameplayAbilities.*445b7f9bc5.*435f0a9fa4 // Native|Public|BlueprintCallable // @ game+0x9464a4
};

// Class GameplayAbilities.*faabc75805
// Size: 0xf8 (Inherited: 0x38)
struct U*faabc75805 : U*445b7f9bc5 {
	struct FMulticastDelegate OnApplied; // 0x38(0x10)
	char pad_48[0xb0]; // 0x48(0xb0)

	void OnAppliedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*faabc75805.OnAppliedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void *3062ed6917(); // Function GameplayAbilities.*faabc75805.*3062ed6917 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f48c8c
};

// Class GameplayAbilities.*ff992b936d
// Size: 0x60 (Inherited: 0x38)
struct U*ff992b936d : U*445b7f9bc5 {
	struct FMulticastDelegate EventReceived; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	void EventReceivedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*ff992b936d.EventReceivedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void *b9aba4fba8(); // Function GameplayAbilities.*ff992b936d.*b9aba4fba8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f49044
};

// Class GameplayAbilities.*a990041f24
// Size: 0x58 (Inherited: 0x38)
struct U*a990041f24 : U*445b7f9bc5 {
	char pad_38[0x20]; // 0x38(0x20)

	void AsyncWaitGameplayTagDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*a990041f24.AsyncWaitGameplayTagDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
};

// Class GameplayAbilities.*1c9d55d59a
// Size: 0x68 (Inherited: 0x58)
struct U*1c9d55d59a : U*a990041f24 {
	struct FMulticastDelegate Added; // 0x58(0x10)

	void *9ca1cf6293(); // Function GameplayAbilities.*1c9d55d59a.*9ca1cf6293 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f491c0
};

// Class GameplayAbilities.*6b16e5842d
// Size: 0x68 (Inherited: 0x58)
struct U*6b16e5842d : U*a990041f24 {
	struct FMulticastDelegate Removed; // 0x58(0x10)

	void *10df2ec0e6(); // Function GameplayAbilities.*6b16e5842d.*10df2ec0e6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f492e0
};

// Class GameplayAbilities.*d1209786b0
// Size: 0x30 (Inherited: 0x30)
struct U*d1209786b0 : UInterface {

	void *ada1cf393a(); // Function GameplayAbilities.*d1209786b0.*ada1cf393a // BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6f44c60
	void BlueprintCustomHandler(); // Function GameplayAbilities.*d1209786b0.BlueprintCustomHandler // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	void *9ecee7ea96(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*9ecee7ea96 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f41b58
	void *9e91bfd545(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*9e91bfd545 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f451dc
	void SendGameplayEventToActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f48060
	void *69b81e6788(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*69b81e6788 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f44510
	void *d9ecda2ee3(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d9ecda2ee3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f44aa4
	void *bff3d26128(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bff3d26128 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6f420d8
	void *54e020ea35(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*54e020ea35 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f468a8
	void *ef1efcc9aa(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ef1efcc9aa // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f44ec4
	void IsValid(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f47388
	void *c7b711ace0(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c7b711ace0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f486c0
	void *d4d56f9593(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d4d56f9593 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f47cf4
	void *d86d011857(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d86d011857 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f45ef0
	void *17a69eb018(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*17a69eb018 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f44380
	void *2ab36962cf(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2ab36962cf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f48b18
	void *5c83489cff(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5c83489cff // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f452a8
	void *aec43bfa29(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*aec43bfa29 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f44c74
	void *ce4bed87a6(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ce4bed87a6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6f441ec
	void *585198e988(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*585198e988 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f434a4
	void *227c74cdd6(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*227c74cdd6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f43cc4
	void *92e7394537(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*92e7394537 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f43f68
	void GetOrigin(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f46b40
	void *91b678347a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*91b678347a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f417c8
	void *51a0aa6d32(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*51a0aa6d32 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f4142c
	void *498b855ae7(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*498b855ae7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f48384
	void *6330647e8d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6330647e8d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f43324
	void *14b04f9346(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*14b04f9346 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f42288
	void *f8ad61d06a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f8ad61d06a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f4511c
	void *5f34bed366(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5f34bed366 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f45c00
	void *45044c992a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*45044c992a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f45600
	void *f8c1b45a1c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f8c1b45a1c // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f41ee4
	void *3b6ca9546d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3b6ca9546d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f459d4
	void *062ba542a4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*062ba542a4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f47294
	void *fc88f3877f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*fc88f3877f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f4391c
	void *cfacac92ac(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*cfacac92ac // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f46368
	void MakeGameplayCueParameters(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f475f4
	void *8c1b24172e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*8c1b24172e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f43b74
	void *ace67b8aad(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ace67b8aad // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f461e0
	void *603953a982(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*603953a982 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f453d0
	void BreakGameplayCueParameters(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f42660
	void *50bf97ff6e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*50bf97ff6e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f4533c
	void *8efe9d661e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*8efe9d661e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f440bc
	void SetDuration(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f481f0
	void *579b1f4a4e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*579b1f4a4e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f42474
	void *812a40e03b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*812a40e03b // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f4162c
	void *cfd9cb7db0(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*cfd9cb7db0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f42ea8
	void *8eb902b246(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*8eb902b246 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f436c0
	void *1012d4e6d8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*1012d4e6d8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f46f48
	void *4b51d86a64(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4b51d86a64 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f43e14
	void *6560bdf4a5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6560bdf4a5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f46068
	void *31c7174263(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*31c7174263 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f41d4c
	void *ffe82809e3(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ffe82809e3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f45d78
	void *d812683158(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d812683158 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f47ed0
	void GetInstigatorActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f467d4
	void *2fd86b0f17(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2fd86b0f17 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f4857c
	void GetEffectContext(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f45ab4
	void *2fe1ee7719(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2fe1ee7719 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f4308c
	void *9ba30f9ad6(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*9ba30f9ad6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f454f8
	void *671c922acc(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*671c922acc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f47464
	void *f984206e94(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*f984206e94 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f44e34
	void *91f92b1649(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*91f92b1649 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f419bc
	void *45da0d7cb1(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*45da0d7cb1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f4662c
	void *c50e852aa4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c50e852aa4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f4503c
	void *b49edb5123(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b49edb5123 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f411ac
	void *2c2ee14c9e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2c2ee14c9e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f46dac
	void *ffd9e03837(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ffd9e03837 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f43810
	void *eebeb8b71d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*eebeb8b71d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f46c68
	void *8e5f85fa3f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*8e5f85fa3f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f489b8
	void IsInstigatorLocallyControlled(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f471a0
	void *6ed6709f72(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6ed6709f72 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f469b8
	void *5417d32de9(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5417d32de9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f44fa8
	void GetHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f46548
	void *1a73dd35ed(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*1a73dd35ed // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f458c0
	void *e0dbb0bb04(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e0dbb0bb04 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f410d0
	void *7a6acfbdc8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7a6acfbdc8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f41310
	void *290ff8a9c1(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*290ff8a9c1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f48844
	void *ef0c48e0a6(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*ef0c48e0a6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f447b0
	void HasHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6f4709c
	void *d990426091(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*d990426091 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6f43a6c
	void *0f4629d894(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*0f4629d894 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6f4578c
};

// Class GameplayAbilities.*56f4ae942d
// Size: 0x30 (Inherited: 0x30)
struct U*56f4ae942d : UInterface {
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x4d0 (Inherited: 0x4d0)
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x340 (Inherited: 0x30)
struct UAbilitySystemGlobals : UObject {
	struct FStringClassReference AbilitySystemGlobalsClassName; // 0x30(0x10)
	char pad_40[0x80]; // 0x40(0x80)
	struct FGameplayTag *0c72694b46; // 0xc0(0x08)
	struct FName ActivateFailIsDeadName; // 0xc8(0x08)
	struct FGameplayTag *20047af935; // 0xd0(0x08)
	struct FName ActivateFailCooldownName; // 0xd8(0x08)
	struct FGameplayTag *ff488e8c69; // 0xe0(0x08)
	struct FName ActivateFailCostName; // 0xe8(0x08)
	struct FGameplayTag *7efe7eb091; // 0xf0(0x08)
	struct FName ActivateFailTagsBlockedName; // 0xf8(0x08)
	struct FGameplayTag *a282a9b706; // 0x100(0x08)
	struct FName ActivateFailTagsMissingName; // 0x108(0x08)
	struct FGameplayTag *5ddbebcb86; // 0x110(0x08)
	struct FName ActivateFailNetworkingName; // 0x118(0x08)
	int32 MinimalReplicationTagCountBits; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct F*9c3711ab7d *0a04ffbeb3; // 0x128(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0x138(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FName GameplayModEvaluationChannelAliases[0x0a]; // 0x140(0x50)
	struct FStringAssetReference GlobalCurveTableName; // 0x190(0x10)
	struct UCurveTable* *e31f678739; // 0x1a0(0x08)
	struct FStringAssetReference GlobalAttributeMetaDataTableName; // 0x1a8(0x10)
	struct UDataTable* *0d3800eac3; // 0x1b8(0x08)
	struct FStringAssetReference GlobalAttributeSetDefaultsTableName; // 0x1c0(0x10)
	struct TArray<struct FStringAssetReference> GlobalAttributeSetDefaultsTableNames; // 0x1d0(0x10)
	struct TArray<struct UCurveTable*> *410f40b66b; // 0x1e0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerClass; // 0x1f0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerName; // 0x200(0x10)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x210(0x10)
	struct FStringAssetReference GameplayTagResponseTableName; // 0x220(0x10)
	struct U*f1f5d32376* *8ce5fe8235; // 0x230(0x08)
	bool PredictTargetGameplayEffects; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UGameplayCueManager* *bf80143df9; // 0x240(0x08)
	char pad_248[0xf8]; // 0x248(0xf8)

	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // Exec|Native|Public // @ game+0x5e55b84
	void ServerActivatePlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility // Final|Exec|Native|Public // @ game+0x5dcaf74
	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // Exec|Native|Public // @ game+0x5e55b6c
	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities // Final|Exec|Native|Public // @ game+0xd5ebb0
	void ServerEndPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility // Final|Exec|Native|Public // @ game+0x5dcaf74
	void ServerCancelPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility // Final|Exec|Native|Public // @ game+0x5dcaf74
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x490 (Inherited: 0x470)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_470[0x18]; // 0x470(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x488(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName *61164d044d; // 0x88(0x08)
	enum class *46b4b581d7 *d59f178692; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector *e5f1645a49; // 0x94(0x0c)
	float *569b612a00; // 0xa0(0x04)
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
	bool *3a28036993; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UCurveFloat* *49d8d8c542; // 0xe8(0x08)
	bool *b1a13a5b34; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	void *3006d62919(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.*3006d62919 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fb4e0c
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
	float *22302b2057; // 0xf8(0x04)
	bool *f1d7167081; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct U*e6746d9844* *865de25d47; // 0x100(0x08)
	struct UCurveFloat* *6b1726fb3b; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	void *efba45ae3d(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.*efba45ae3d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fb51dc
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // Final|Native|Public|BlueprintCallable // @ game+0x6fb9304
	void OnLandedCallback(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // Final|Native|Public|HasOutParms // @ game+0x6fbd6e8
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x138 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinished; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	struct AActor* TargetActor; // 0xf0(0x08)
	struct FVector *f2cb6ad8a1; // 0xf8(0x0c)
	enum class *d3329524d8 *ae0935ada1; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float Duration; // 0x108(0x04)
	bool *a9bce0e762; // 0x10c(0x01)
	bool *f6e5ead421; // 0x10d(0x01)
	enum class EMovementMode *2b211e7ee5; // 0x10e(0x01)
	bool *636ae39ed3; // 0x10f(0x01)
	struct U*e6746d9844* *865de25d47; // 0x110(0x08)
	struct UCurveFloat* *6b1726fb3b; // 0x118(0x08)
	struct UCurveFloat* *bc0f3b6e77; // 0x120(0x08)
	struct UCurveFloat* *c35d4d75d1; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)

	void *47db8d6640(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*47db8d6640 // Final|Native|Public // @ game+0x6fbde6c
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // Final|Native|Protected // @ game+0x6fbde34
	void *ad9252f5cd(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*ad9252f5cd // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fb5fd0
	void *a1b4f952ac(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*a1b4f952ac // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fb5650
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x110 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnTimedOut; // 0xc0(0x10)
	struct FMulticastDelegate OnTimedOutAndDestinationReached; // 0xd0(0x10)
	struct FVector StartLocation; // 0xe0(0x0c)
	struct FVector TargetLocation; // 0xec(0x0c)
	float Duration; // 0xf8(0x04)
	bool *f6e5ead421; // 0xfc(0x01)
	enum class EMovementMode *2b211e7ee5; // 0xfd(0x01)
	bool *636ae39ed3; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	struct U*e6746d9844* *865de25d47; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	void *86d3234b63(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.*86d3234b63 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fb5c04
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x118 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FVector Location; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct AActor* *e492e33ada; // 0xe0(0x08)
	float Strength; // 0xe8(0x04)
	float Duration; // 0xec(0x04)
	float Radius; // 0xf0(0x04)
	bool *e9045a51f0; // 0xf4(0x01)
	bool *3a28036993; // 0xf5(0x01)
	bool *6a5a99bcd6; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct UCurveFloat* *d9fe9d7897; // 0xf8(0x08)
	struct UCurveFloat* *49d8d8c542; // 0x100(0x08)
	bool *f5aa61c72b; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FRotator *2deaa68673; // 0x10c(0x0c)

	void *a74ab3cdeb(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.*a74ab3cdeb // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fb6678
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastDelegate OnTargetLocationReached; // 0x88(0x10)
	char pad_98[0x4]; // 0x98(0x04)
	struct FVector StartLocation; // 0x9c(0x0c)
	struct FVector TargetLocation; // 0xa8(0x0c)
	float *eb5bd841db; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UCurveFloat* *005108b6d9; // 0xc0(0x08)
	struct U*e6746d9844* *ea1f7e206d; // 0xc8(0x08)

	void *951164f513(); // Function GameplayAbilities.AbilityTask_MoveToLocation.*951164f513 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fbb73c
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastDelegate OnSync; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void *38ccf43132(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*38ccf43132 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc4290
	void *617a1f566c(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*617a1f566c // Final|Native|Public // @ game+0x6fbde58
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x180 (Inherited: 0x88)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastDelegate OnCompleted; // 0x88(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x98(0x10)
	struct FMulticastDelegate OnInterrupted; // 0xa8(0x10)
	struct FMulticastDelegate OnCancelled; // 0xb8(0x10)
	char pad_C8[0x90]; // 0xc8(0x90)
	struct UAnimMontage* *ed2a21fc40; // 0x158(0x08)
	float Rate; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FName *f06ac34cad; // 0x168(0x08)
	float *e4eda111d4; // 0x170(0x04)
	float *64a5c9cbf2; // 0x174(0x04)
	bool *04f34c18d5; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)

	void OnMontageEnded(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // Final|Native|Public // @ game+0x6fbd8c8
	void *bffdb6533f(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*bffdb6533f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb8ab0
	void *b81142b155(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*b81142b155 // Final|Native|Public // @ game+0x6fbd9a8
	void *27183e6f1a(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*27183e6f1a // Final|Native|Public // @ game+0x6fbd7e8
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastDelegate OnPerformAction; // 0x88(0x10)
	struct FMulticastDelegate OnFinished; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	void RepeatAction(); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbe758
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastDelegate SUCCESS; // 0x88(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x98(0x10)
	char pad_A8[0x28]; // 0xa8(0x28)

	void FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x6fb9318
	void SpawnActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc05d8
	void BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6fb7988
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastDelegate OnStateEnded; // 0x88(0x10)
	struct FMulticastDelegate OnStateInterrupted; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	void *6d5aaa9ed5(); // Function GameplayAbilities.AbilityTask_StartAbilityState.*6d5aaa9ed5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc078c
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x408 (Inherited: 0x3e8)
struct AGameplayAbilityWorldReticle : AActor {
	struct F*86d5f30aa7 Parameters; // 0x3e8(0x0c)
	bool bFaceOwnerFlat; // 0x3f4(0x01)
	bool bSnapToTargetedActor; // 0x3f5(0x01)
	bool bIsTargetValid; // 0x3f6(0x01)
	bool bIsTargetAnActor; // 0x3f7(0x01)
	struct APlayerController* MasterPC; // 0x3f8(0x08)
	struct AActor* TargetingActor; // 0x400(0x08)

	void OnValidTargetChanged(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void SetReticleMaterialParamFloat(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnTargetingAnActor(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void SetReticleMaterialParamVector(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // Event|Public|HasDefaults|BlueprintEvent // @ game+0x3b43ac
	void *25173234b2(); // Function GameplayAbilities.GameplayAbilityWorldReticle.*25173234b2 // Final|Native|Public|BlueprintCallable // @ game+0x6fb9270
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x5b0 (Inherited: 0x3e8)
struct AGameplayAbilityTargetActor : AActor {
	bool *42681e08dc; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct F*a4827abec5 StartLocation; // 0x3f0(0x70)
	char pad_460[0xe0]; // 0x460(0xe0)
	struct APlayerController* MasterPC; // 0x540(0x08)
	struct UGameplayAbility* OwningAbility; // 0x548(0x08)
	bool bDestroyOnConfirmation; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct AActor* SourceActor; // 0x558(0x08)
	struct F*86d5f30aa7 ReticleParams; // 0x560(0x0c)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct UClass* ReticleClass; // 0x570(0x08)
	struct F*4437ddaee9 Filter; // 0x578(0x10)
	bool bDebug; // 0x588(0x01)
	char pad_589[0x17]; // 0x589(0x17)
	struct UAbilitySystemComponent* *120b693414; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)

	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // Native|Public // @ game+0x5e3c8c0
	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // Native|Public // @ game+0x5e81ba4
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastDelegate TimeElapsed; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)

	void BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6fb7b68
	void FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x6fb949c
	void *4ecf703cb9(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*4ecf703cb9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc0e5c
	void *6809a316ca(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*6809a316ca // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc0cec
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x140 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastDelegate OnActivate; // 0x88(0x10)
	char pad_98[0xa8]; // 0x98(0xa8)

	void *90d93ff4a1(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*90d93ff4a1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc1468
	void *5f3cbfec74(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*5f3cbfec74 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc166c
	void *3736467e46(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*3736467e46 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc1280
	void *bbabe9244b(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*bbabe9244b // Final|Native|Public // @ game+0x6fbca5c
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0x100 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastDelegate OnCommit; // 0x88(0x10)
	char pad_98[0x68]; // 0x98(0x68)

	void *7e6c8afbd9(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*7e6c8afbd9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc1a10
	void *de5ad22ebb(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*de5ad22ebb // Final|Native|Public // @ game+0x6fbcaec
	void *752c291c8d(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*752c291c8d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc187c
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xe8 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x48]; // 0x98(0x48)
	struct UAbilitySystemComponent* *42be512506; // 0xe0(0x08)

	void *b772789060(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*b772789060 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc23a0
	void *a288003a21(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*a288003a21 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc1bcc
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x118 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x78]; // 0x98(0x78)
	struct UAbilitySystemComponent* *42be512506; // 0x110(0x08)

	void *4fef83fdbb(); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.*4fef83fdbb // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc1e30
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xe0 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x40]; // 0x98(0x40)
	struct UAbilitySystemComponent* *42be512506; // 0xd8(0x08)

	void *b20361b684(); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.*b20361b684 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc213c
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastDelegate OnCancel; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void *788afd66fe(); // Function GameplayAbilities.AbilityTask_WaitCancel.*788afd66fe // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc0fcc
	void *e56d0d15d1(); // Function GameplayAbilities.AbilityTask_WaitCancel.*e56d0d15d1 // Final|Native|Public // @ game+0x6fbcf7c
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x6fbd7ac
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void *b18c2ace1f(); // Function GameplayAbilities.AbilityTask_WaitConfirm.*b18c2ace1f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc1060
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // Final|Native|Public // @ game+0x6fbcfa4
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	struct FMulticastDelegate OnCancel; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)

	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // Final|Native|Public // @ game+0x6fbd034
	void *ac4f2a7a22(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*ac4f2a7a22 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc10f4
	void *e56d0d15d1(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*e56d0d15d1 // Final|Native|Public // @ game+0x6fbcf90
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // Final|Native|Public // @ game+0x6fbd7d4
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x6fbd7c0
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastDelegate OnFinish; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void WaitDelay(); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc1188
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1c0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_88[0x128]; // 0x88(0x128)
	struct UAbilitySystemComponent* *42be512506; // 0x1b0(0x08)
	char pad_1B8[0x8]; // 0x1b8(0x08)

	void *321b8b1571(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.*321b8b1571 // Final|Native|Public|HasOutParms // @ game+0x6fbcddc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	void *2b83015bcf(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*2b83015bcf // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc2d2c
	void *b30c9436fd(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*b30c9436fd // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc2928
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	void *a51257c268(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*a51257c268 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc34dc
	void *48cffae5ee(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*48cffae5ee // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc30d8
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x130 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastDelegate bLocked; // 0x88(0x10)
	char pad_98[0x88]; // 0x98(0x88)
	struct UAbilitySystemComponent* *42be512506; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	void *3b90a08963(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.*3b90a08963 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc3888
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastDelegate OnRemoved; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)

	void *af89773cac(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*af89773cac // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc26b4
	void *93fd69731c(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*93fd69731c // Final|Native|Public|HasOutParms // @ game+0x6fbd2a8
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	void *da3fc4866e(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*da3fc4866e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc27a4
	void *761ab59196(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*761ab59196 // Final|Native|Public // @ game+0x6fbd3a8
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastDelegate EventReceived; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
	struct UAbilitySystemComponent* *a6a17eb3b5; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)

	void *8d11548375(); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.*8d11548375 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc3b88
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_88[0x10]; // 0x88(0x10)
	struct UAbilitySystemComponent* *a6a17eb3b5; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	void *5aa7a4315b(); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.*5aa7a4315b // Native|Public // @ game+0x6fb964c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Added; // 0xb0(0x10)

	void *2bf4da9d04(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.*2bf4da9d04 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc3d90
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Removed; // 0xb0(0x10)

	void *cc833dab10(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.*cc833dab10 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc3f28
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastDelegate OnPress; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void *178f24136d(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*178f24136d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc40c0
	void *8a164aec59(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*8a164aec59 // Final|Native|Public // @ game+0x6fbdb80
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastDelegate OnRelease; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void *0c19d4adf7(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*0c19d4adf7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc41a8
	void *ca2b086114(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*ca2b086114 // Final|Native|Public // @ game+0x6fbdb94
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void *5817842072(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.*5817842072 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb8d70
	void OnMovementModeChange(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // Final|Native|Public // @ game+0x6fbd9bc
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x98 (Inherited: 0x88)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastDelegate OnOverlap; // 0x88(0x10)

	void *c20aac26f4(); // Function GameplayAbilities.AbilityTask_WaitOverlap.*c20aac26f4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc2894
	void OnHitCallback(); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // Final|Native|Public|HasOutParms|HasDefaults // @ game+0x6fbd4d8
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastDelegate ValidData; // 0x88(0x10)
	struct FMulticastDelegate Cancelled; // 0x98(0x10)
	struct UClass* TargetClass; // 0xa8(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)

	void *dffe211d52(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*dffe211d52 // Final|Native|Public|HasOutParms // @ game+0x6fbdf5c
	void *7c2ea982ee(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*7c2ea982ee // Final|Native|Public|HasOutParms // @ game+0x6fbe11c
	void *7220c3cf20(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*7220c3cf20 // Final|Native|Public // @ game+0x6fbe250
	void *794d196520(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*794d196520 // Final|Native|Public|HasOutParms // @ game+0x6fbe03c
	void *9e108eb4e7(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*9e108eb4e7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc44f8
	void BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6fb7ca4
	void FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x6fb9574
	void *9195b3a0db(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*9195b3a0db // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fc4374
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastDelegate OnVelocityChage; // 0x88(0x10)
	struct UMovementComponent* *326d60ae01; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	void *91869b36f7(); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.*91869b36f7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fb8e58
};

// Class GameplayAbilities.*1058015569
// Size: 0x78 (Inherited: 0x38)
struct U*1058015569 : UAttributeSet {
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

// Class GameplayAbilities.*a49d5c3056
// Size: 0x580 (Inherited: 0x580)
struct U*a49d5c3056 : UGameplayAbility {
};

// Class GameplayAbilities.*2f07a26c88
// Size: 0x5c0 (Inherited: 0x580)
struct U*2f07a26c88 : UGameplayAbility {
	struct UAnimMontage* *ed2a21fc40; // 0x580(0x08)
	float PlayRate; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FName SectionName; // 0x590(0x08)
	struct TArray<struct UClass*> *1d896314eb; // 0x598(0x10)
	struct TArray<struct UGameplayEffect*> *d710fca60e; // 0x5a8(0x10)
	char pad_5B8[0x8]; // 0x5b8(0x08)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x48 (Inherited: 0x38)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct F*5084f0d16d> Abilities; // 0x38(0x10)
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
	struct TArray<struct UActorComponent*> *85042739be; // 0x410(0x10)
};

// Class GameplayAbilities.*3e923d71b5
// Size: 0x30 (Inherited: 0x30)
struct U*3e923d71b5 : UObject {
};

// Class GameplayAbilities.*674e4f18ef
// Size: 0x30 (Inherited: 0x30)
struct U*674e4f18ef : U*3e923d71b5 {
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x470 (Inherited: 0x38)
struct UGameplayCueManager : UDataAsset {
	char pad_38[0x78]; // 0x38(0x78)
	struct F*319d14b701 *5087b9492c; // 0xb0(0xb0)
	struct F*319d14b701 *674cd8b263; // 0x160(0xb0)
	char pad_210[0x1a0]; // 0x210(0x1a0)
	struct TArray<struct UClass*> *57c92eb6ec; // 0x3b0(0x10)
	struct TArray<struct UClass*> *6eaf46721a; // 0x3c0(0x10)
	struct TArray<struct F*3692018795> *f96a11339d; // 0x3d0(0x10)
	int32 *e2f3fa2efa; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct F*9bd9f27c17> *cf5ea3e66b; // 0x3e8(0x10)
	char pad_3F8[0x78]; // 0x3f8(0x78)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x448 (Inherited: 0x3e8)
struct AGameplayCueNotify_Actor : AActor {
	bool *0a7b64ac9a; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	float *9bbd1cc413; // 0x3ec(0x04)
	bool *9c9c0cc697; // 0x3f0(0x01)
	bool *8ab36c427c; // 0x3f1(0x01)
	char pad_3F2[0x6]; // 0x3f2(0x06)
	struct FGameplayTag GameplayCueTag; // 0x3f8(0x08)
	struct FName GameplayCueName; // 0x400(0x08)
	bool *657bae1ead; // 0x408(0x01)
	bool *51e5b2ab38; // 0x409(0x01)
	bool *95cdd65f10; // 0x40a(0x01)
	bool *12f81a0616; // 0x40b(0x01)
	bool *10fbcb827a; // 0x40c(0x01)
	bool *9eff677314; // 0x40d(0x01)
	char pad_40E[0x2]; // 0x40e(0x02)
	int32 *1d4aae7899; // 0x410(0x04)
	char pad_414[0x34]; // 0x414(0x34)

	void OnActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6fbcb7c
	void OnOwnerDestroyed(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // Native|Public // @ game+0x6fbdaec
	void *84995a2d71(); // Function GameplayAbilities.GameplayCueNotify_Actor.*84995a2d71 // Native|Public|BlueprintCallable // @ game+0x7c9f8c
	void K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6fbd048
	void OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6fbdba8
	void WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6fc467c
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x48 (Inherited: 0x30)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x30(0x08)
	struct FName GameplayCueName; // 0x38(0x08)
	bool *51e5b2ab38; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x3b43ac
	void OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6fbdcd8
	void OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6fbd178
	void OnActive(); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6fbccac
	void WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6fc47ac
};

// Class GameplayAbilities.*0d65e2ddbf
// Size: 0x58 (Inherited: 0x48)
struct U*0d65e2ddbf : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x48(0x08)
	struct UParticleSystem* ParticleSystem; // 0x50(0x08)
};

// Class GameplayAbilities.*e0b4ea48b3
// Size: 0x98 (Inherited: 0x38)
struct U*e0b4ea48b3 : UDataAsset {
	struct TArray<struct F*1e473ac6df> *5f83e6d75d; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
};

// Class GameplayAbilities.*9ed685b664
// Size: 0x880 (Inherited: 0x880)
struct U*9ed685b664 : UGameplayEffect {
};

// Class GameplayAbilities.*8f768d313e
// Size: 0x48 (Inherited: 0x40)
struct U*8f768d313e : U*4b1d17cc1b {
	bool *dcc6100505; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void CalculateBaseMagnitude(); // Function GameplayAbilities.*8f768d313e.CalculateBaseMagnitude // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x6fb7de0
};

// Class GameplayAbilities.*4d96465856
// Size: 0x30 (Inherited: 0x30)
struct U*4d96465856 : UObject {

	void CanApplyGameplayEffect(); // Function GameplayAbilities.*4d96465856.CanApplyGameplayEffect // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x6fb7ed8
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x30 (Inherited: 0x30)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.*7e78d03d2e
// Size: 0x48 (Inherited: 0x30)
struct U*7e78d03d2e : UGameplayEffectUIData {
	struct FText Description; // 0x30(0x18)
};

// Class GameplayAbilities.*f1f5d32376
// Size: 0x220 (Inherited: 0x38)
struct U*f1f5d32376 : UDataAsset {
	struct TArray<struct F*90304cc5c5> Entries; // 0x38(0x10)
	char pad_48[0x1d8]; // 0x48(0x1d8)

	void *e8e26bfeda(); // Function GameplayAbilities.*f1f5d32376.*e8e26bfeda // Final|Native|Protected // @ game+0x6fc08b0
};

// Class GameplayAbilities.*6448acef00
// Size: 0x30 (Inherited: 0x30)
struct U*6448acef00 : UInterface {
};


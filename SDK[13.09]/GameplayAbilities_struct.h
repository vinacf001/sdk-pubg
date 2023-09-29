// ScriptStruct GameplayAbilities.*195c5760a3
// Size: 0x08 (Inherited: 0x00)
struct F*195c5760a3 {
	int32 Handle; // 0x00(0x04)
	bool *ca6ac48e78; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GameplayAbilities.*84ca2d3f37
// Size: 0x10 (Inherited: 0x00)
struct F*84ca2d3f37 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*c6f2db32e3
// Size: 0x40 (Inherited: 0x00)
struct F*c6f2db32e3 {
	struct FGameplayTagContainer RequireTags; // 0x00(0x20)
	struct FGameplayTagContainer IgnoreTags; // 0x20(0x20)
};

// ScriptStruct GameplayAbilities.*90f7ca8447
// Size: 0x10 (Inherited: 0x00)
struct F*90f7ca8447 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*3a9386b60a
// Size: 0xb0 (Inherited: 0x00)
struct F*3a9386b60a {
	struct FGameplayTag EventTag; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* Target; // 0x10(0x08)
	struct UObject* OptionalObject; // 0x18(0x08)
	struct UObject* OptionalObject2; // 0x20(0x08)
	struct F*b3c39b158e ContextHandle; // 0x28(0x18)
	struct FGameplayTagContainer InstigatorTags; // 0x40(0x20)
	struct FGameplayTagContainer TargetTags; // 0x60(0x20)
	float EventMagnitude; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct F*e778ffd93a TargetData; // 0x88(0x28)
};

// ScriptStruct GameplayAbilities.*e778ffd93a
// Size: 0x28 (Inherited: 0x00)
struct F*e778ffd93a {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct GameplayAbilities.*b3c39b158e
// Size: 0x18 (Inherited: 0x00)
struct F*b3c39b158e {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct GameplayAbilities.*fc606c334e
// Size: 0x530 (Inherited: 0x0c)
struct F*fc606c334e : F*6837b5545b {
	char pad_C[0xc]; // 0x0c(0x0c)
	struct F*8f5b72b64a Spec; // 0x18(0x298)
	struct F*af2d0e22f4 *af2d0e22f4; // 0x2b0(0x18)
	float *d9ac7cc018; // 0x2c8(0x04)
	float *a44db8e2f3; // 0x2cc(0x04)
	float StartWorldTime; // 0x2d0(0x04)
	bool bIsInhibited; // 0x2d4(0x01)
	char pad_2D5[0x25b]; // 0x2d5(0x25b)
};

// ScriptStruct GameplayAbilities.*af2d0e22f4
// Size: 0x18 (Inherited: 0x00)
struct F*af2d0e22f4 {
	int16 Current; // 0x00(0x02)
	int16 Base; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct UPackageMap* *53341e720c; // 0x08(0x08)
	bool *efe31b317d; // 0x10(0x01)
	bool *967515eabe; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct GameplayAbilities.*8f5b72b64a
// Size: 0x298 (Inherited: 0x00)
struct F*8f5b72b64a {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct F*f10f253e1d> *e01e303290; // 0x08(0x10)
	struct F*30b3851290 *8cb7d37863; // 0x18(0x28)
	char pad_40[0x10]; // 0x40(0x10)
	float Duration; // 0x50(0x04)
	float Period; // 0x54(0x04)
	float *c7740ff9ff; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct F*6d70d5ea74 *9dfe719f68; // 0x60(0x88)
	struct F*6d70d5ea74 *864f53391b; // 0xe8(0x88)
	struct FGameplayTagContainer *33a315b7cd; // 0x170(0x20)
	struct FGameplayTagContainer *f79598ef63; // 0x190(0x20)
	struct TArray<struct F*7ce814b461> Modifiers; // 0x1b0(0x10)
	int32 StackCount; // 0x1c0(0x04)
	char *5ce8fca282 : 1; // 0x1c4(0x01)
	char *dfc937c37a : 1; // 0x1c4(0x01)
	char *05b883653b : 1; // 0x1c4(0x01)
	char pad_1C4_3 : 5; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
	struct TArray<struct F*d50d69f3d3> *92364c7562; // 0x1c8(0x10)
	char pad_1D8[0xa0]; // 0x1d8(0xa0)
	struct F*b3c39b158e *1bf83f5e1c; // 0x278(0x18)
	float Level; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
};

// ScriptStruct GameplayAbilities.*d50d69f3d3
// Size: 0xa0 (Inherited: 0x00)
struct F*d50d69f3d3 {
	struct UClass* Ability; // 0x00(0x08)
	struct FScalableFloat *00a3c22d4a; // 0x08(0x30)
	int32 *816c88d99a; // 0x38(0x04)
	enum class *8e83f6a467 *742edee554; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UObject* SourceObject; // 0x40(0x08)
	char pad_48[0x50]; // 0x48(0x50)
	struct F*bcfee612de *efe8ac41c7; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct GameplayAbilities.*bcfee612de
// Size: 0x04 (Inherited: 0x00)
struct F*bcfee612de {
	int32 Handle; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.ScalableFloat
// Size: 0x30 (Inherited: 0x00)
struct FScalableFloat {
	float Value; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
	struct FCurveTableRowHandle Curve; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*7ce814b461
// Size: 0x04 (Inherited: 0x00)
struct F*7ce814b461 {
	float *43c833c7fa; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.*6d70d5ea74
// Size: 0x88 (Inherited: 0x00)
struct F*6d70d5ea74 {
	struct FGameplayTagContainer *792ac6f87f; // 0x00(0x20)
	struct FGameplayTagContainer *7b6bfb239a; // 0x20(0x20)
	struct FGameplayTagContainer *616664320c; // 0x40(0x20)
	char pad_60[0x28]; // 0x60(0x28)
};

// ScriptStruct GameplayAbilities.*30b3851290
// Size: 0x28 (Inherited: 0x00)
struct F*30b3851290 {
	struct TArray<struct F*b1e1d02ec4> *cc94c52c22; // 0x00(0x10)
	struct TArray<struct F*b1e1d02ec4> *a6a1bf38bd; // 0x10(0x10)
	bool *9efc0e3c26; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayAbilities.*b1e1d02ec4
// Size: 0x38 (Inherited: 0x00)
struct F*b1e1d02ec4 {
	struct F*4ac327b4ea *9a31be3d57; // 0x00(0x28)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct GameplayAbilities.*4ac327b4ea
// Size: 0x28 (Inherited: 0x00)
struct F*4ac327b4ea {
	struct FGameplayAttribute *c3cfc1eda0; // 0x00(0x20)
	enum class EGameplayEffectAttributeCaptureSource *103b4255ad; // 0x20(0x01)
	bool *650f4d2291; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// Size: 0x20 (Inherited: 0x00)
struct FGameplayAttribute {
	struct FString AttributeName; // 0x00(0x10)
	struct UProperty* Attribute; // 0x10(0x08)
	struct UStruct* *242d86275b; // 0x18(0x08)
};

// ScriptStruct GameplayAbilities.*f10f253e1d
// Size: 0x28 (Inherited: 0x00)
struct F*f10f253e1d {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	float *29fc3311ff; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GameplayAbilities.*afdeb3891f
// Size: 0x20 (Inherited: 0x00)
struct F*afdeb3891f {
	bool bPrematureRemoval; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 StackCount; // 0x04(0x04)
	struct F*b3c39b158e EffectContext; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.*2f043f1358
// Size: 0xc0 (Inherited: 0x00)
struct F*2f043f1358 {
	float NormalizedMagnitude; // 0x00(0x04)
	float RawMagnitude; // 0x04(0x04)
	struct F*b3c39b158e EffectContext; // 0x08(0x18)
	struct FGameplayTag MatchedTagName; // 0x20(0x08)
	struct FGameplayTag OriginalTag; // 0x28(0x08)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x30(0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x50(0x20)
	struct FVector_NetQuantize10 Location; // 0x70(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x7c(0x0c)
	struct AActor* Instigator; // 0x88(0x08)
	struct AActor* EffectCauser; // 0x90(0x08)
	struct UObject* SourceObject; // 0x98(0x08)
	struct UPhysicalMaterial* PhysicalMaterial; // 0xa0(0x08)
	int32 GameplayEffectLevel; // 0xa8(0x04)
	int32 AbilityLevel; // 0xac(0x04)
	struct USceneComponent* TargetAttachComponent; // 0xb0(0x08)
	bool bReplicateLocationWhenUsingMinimalRepProxy; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct GameplayAbilities.*9c6a94f9ba
// Size: 0x170 (Inherited: 0x00)
struct F*9c6a94f9ba {
	char pad_0[0x40]; // 0x00(0x40)
	DelegateProperty CustomMatchDelegate_BP; // 0x40(0x10)
	struct FGameplayTagQuery OwningTagQuery; // 0x50(0x48)
	struct FGameplayTagQuery EffectTagQuery; // 0x98(0x48)
	struct FGameplayTagQuery SourceTagQuery; // 0xe0(0x48)
	struct FGameplayAttribute ModifyingAttribute; // 0x128(0x20)
	struct UObject* EffectSource; // 0x148(0x08)
	struct UClass* EffectDefinition; // 0x150(0x08)
	char pad_158[0x18]; // 0x158(0x18)
};

// ScriptStruct GameplayAbilities.*e3981689eb
// Size: 0x20 (Inherited: 0x00)
struct F*e3981689eb {
	enum class EGameplayAbilityActivationMode ActivationMode; // 0x00(0x01)
	char *81a7884994 : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct F*af2d0e22f4 *3156acc26c; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.*2b384434ff
// Size: 0x50 (Inherited: 0x00)
struct F*2b384434ff {
	struct F*bcfee612de *152de8cdff; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*af2d0e22f4 *af2d0e22f4; // 0x08(0x18)
	struct F*e778ffd93a *2933eae423; // 0x20(0x28)
	bool InputPressed; // 0x48(0x01)
	bool Ended; // 0x49(0x01)
	bool Started; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// ScriptStruct GameplayAbilities.*2f6835dd93
// Size: 0x78 (Inherited: 0x00)
struct F*2f6835dd93 {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct F*f10f253e1d> *e01e303290; // 0x08(0x10)
	struct F*b3c39b158e *1bf83f5e1c; // 0x18(0x18)
	struct FGameplayTagContainer *d8f4bf32eb; // 0x30(0x20)
	struct FGameplayTagContainer *2b6e5e4967; // 0x50(0x20)
	float Level; // 0x70(0x04)
	float AbilityLevel; // 0x74(0x04)
};

// ScriptStruct GameplayAbilities.*60e84a28aa
// Size: 0xc0 (Inherited: 0xb0)
struct F*60e84a28aa : F*9e4daeff05 {
	struct TArray<struct F*509de148d0> *ed264a6e1f; // 0xb0(0x10)
};

// ScriptStruct GameplayAbilities.*509de148d0
// Size: 0x28 (Inherited: 0x0c)
struct F*509de148d0 : F*6837b5545b {
	char pad_C[0x4]; // 0x0c(0x04)
	struct F*af2d0e22f4 *af2d0e22f4; // 0x10(0x18)
};

// ScriptStruct GameplayAbilities.*0f96a507f9
// Size: 0x60 (Inherited: 0x00)
struct F*0f96a507f9 {
	char pad_0[0x50]; // 0x00(0x50)
	struct UAbilitySystemComponent* Owner; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct GameplayAbilities.*0f1e4fd871
// Size: 0x38 (Inherited: 0x00)
struct F*0f1e4fd871 {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Position; // 0x0c(0x04)
	float BlendTime; // 0x10(0x04)
	bool *f6383616c3; // 0x14(0x01)
	char *d03b2eb5b8 : 1; // 0x15(0x01)
	char IsStopped : 1; // 0x15(0x01)
	char *c3322abed3 : 1; // 0x15(0x01)
	char *3e72da960a : 1; // 0x15(0x01)
	char *2f232e16ce : 1; // 0x15(0x01)
	char pad_15_5 : 3; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct F*af2d0e22f4 *af2d0e22f4; // 0x18(0x18)
	bool *5b3180522b; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayAbilities.*24df61b0d0
// Size: 0xd0 (Inherited: 0xb0)
struct F*24df61b0d0 : F*9e4daeff05 {
	struct TArray<struct F*a1fa3f456b> *99adba11ce; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct UAbilitySystemComponent* Owner; // 0xc8(0x08)
};

// ScriptStruct GameplayAbilities.*a1fa3f456b
// Size: 0xf8 (Inherited: 0x0c)
struct F*a1fa3f456b : F*6837b5545b {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FGameplayTag GameplayCueTag; // 0x10(0x08)
	struct F*af2d0e22f4 *af2d0e22f4; // 0x18(0x18)
	struct F*2f043f1358 Parameters; // 0x30(0xc0)
	bool *f73dbfa55a; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct GameplayAbilities.*ee714225cf
// Size: 0x4e0 (Inherited: 0xb0)
struct F*ee714225cf : F*9e4daeff05 {
	char pad_B0[0x80]; // 0xb0(0x80)
	struct TArray<struct F*fc606c334e> *6a9e318524; // 0x130(0x10)
	char pad_140[0x370]; // 0x140(0x370)
	struct TArray<struct UGameplayEffect*> *88c8fe267a; // 0x4b0(0x10)
	char pad_4C0[0x20]; // 0x4c0(0x20)
};

// ScriptStruct GameplayAbilities.*faabcc0725
// Size: 0x30 (Inherited: 0x00)
struct F*faabcc0725 {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	bool *bceba48d35; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*af2d0e22f4 *af2d0e22f4; // 0x10(0x18)
	struct UGameplayAbility* *1102a4e0c6; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*9cb999b8bb
// Size: 0xc8 (Inherited: 0xb0)
struct F*9cb999b8bb : F*9e4daeff05 {
	struct TArray<struct F*2e6de96d9f> Items; // 0xb0(0x10)
	struct UAbilitySystemComponent* Owner; // 0xc0(0x08)
};

// ScriptStruct GameplayAbilities.*2e6de96d9f
// Size: 0xe8 (Inherited: 0x0c)
struct F*2e6de96d9f : F*6837b5545b {
	struct F*bcfee612de Handle; // 0x0c(0x04)
	struct UGameplayAbility* Ability; // 0x10(0x08)
	int32 Level; // 0x18(0x04)
	int32 *816c88d99a; // 0x1c(0x04)
	struct UObject* SourceObject; // 0x20(0x08)
	bool *87fc7e89ae; // 0x28(0x01)
	char InputPressed : 1; // 0x29(0x01)
	char *b45bcdbc5b : 1; // 0x29(0x01)
	char *d6e1fec4d0 : 1; // 0x29(0x01)
	char *176d81d79e : 1; // 0x29(0x01)
	char pad_29_4 : 4; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct F*e3981689eb *080251f656; // 0x30(0x20)
	struct FGameplayTagContainer *d2c40bcb3c; // 0x50(0x20)
	struct TArray<struct UGameplayAbility*> *621f52e2db; // 0x70(0x10)
	struct TArray<struct UGameplayAbility*> *c63ee02c3a; // 0x80(0x10)
	struct F*195c5760a3 *c2ebb8abe0; // 0x90(0x08)
	char pad_98[0x50]; // 0x98(0x50)
};

// ScriptStruct GameplayAbilities.*09a92992df
// Size: 0x10 (Inherited: 0x00)
struct F*09a92992df {
	struct UClass* Attributes; // 0x00(0x08)
	struct UDataTable* *8162aa974d; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*4ec003f875
// Size: 0x58 (Inherited: 0x58)
struct F*4ec003f875 : FIndexedCurve {
	struct FKeyHandleMap KeyHandlesToIndices; // 0x08(0x50)
};

// ScriptStruct GameplayAbilities.*242052ed04
// Size: 0x08 (Inherited: 0x00)
struct F*242052ed04 {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*e89ea70a01
// Size: 0x30 (Inherited: 0x08)
struct F*e89ea70a01 : FTableRowBase {
	float BaseValue; // 0x08(0x04)
	float MinValue; // 0x0c(0x04)
	float MaxValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *ad4de791c4; // 0x18(0x10)
	bool bCanStack; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GameplayAbilities.*6f2b90722e
// Size: 0x10 (Inherited: 0x00)
struct F*6f2b90722e {
	char pad_0[0x8]; // 0x00(0x08)
	float BaseValue; // 0x08(0x04)
	float CurrentValue; // 0x0c(0x04)
};

// ScriptStruct GameplayAbilities.*7e03c3bd95
// Size: 0x20 (Inherited: 0x00)
struct F*7e03c3bd95 {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct F*4c4b1a6f30> *731c6f7ef8; // 0x10(0x10)
};

// ScriptStruct GameplayAbilities.*4c4b1a6f30
// Size: 0x30 (Inherited: 0x00)
struct F*4c4b1a6f30 {
	struct FGameplayTag *343d5ff6e8; // 0x00(0x08)
	struct UProperty* *7e623e61a9; // 0x08(0x08)
	struct FName PropertyName; // 0x10(0x08)
	struct FGuid *1aaf98e282; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*0495ddb01b
// Size: 0x70 (Inherited: 0x00)
struct F*0495ddb01b {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* *babaff1abb; // 0x10(0x08)
	struct UGameplayAbility* *89d54756e4; // 0x18(0x08)
	struct UGameplayAbility* *0757963ca0; // 0x20(0x08)
	int32 AbilityLevel; // 0x28(0x04)
	struct UObject* SourceObject; // 0x2c(0x08)
	struct UAbilitySystemComponent* *a6f6391413; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct AActor*> Actors; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct FVector WorldOrigin; // 0x60(0x0c)
	char *14e69b384f : 1; // 0x6c(0x01)
	char *b2ae5cd381 : 1; // 0x6c(0x01)
	char pad_6C_2 : 6; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct GameplayAbilities.*656a922e93
// Size: 0x38 (Inherited: 0x00)
struct F*656a922e93 {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	enum class EGameplayModOp *8f06afb556; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Magnitude; // 0x24(0x04)
	struct F*195c5760a3 Handle; // 0x28(0x08)
	bool IsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// Size: 0x01 (Inherited: 0x00)
struct FGameplayModEvaluationChannelSettings {
	enum class EGameplayModEvaluationChannel Channel; // 0x00(0x01)
};

// ScriptStruct GameplayAbilities.*0dca0dfdb4
// Size: 0x98 (Inherited: 0x08)
struct F*0dca0dfdb4 : F*005c5e55ed {
	struct FHitResult HitResult; // 0x08(0x88)
	bool *f2996d7b9f; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct GameplayAbilities.*005c5e55ed
// Size: 0x08 (Inherited: 0x00)
struct F*005c5e55ed {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*20d084a99e
// Size: 0x90 (Inherited: 0x08)
struct F*20d084a99e : F*005c5e55ed {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*22205d802a SourceLocation; // 0x10(0x70)
	struct TArray<struct AActor*> *a825252340; // 0x80(0x10)
};

// ScriptStruct GameplayAbilities.*22205d802a
// Size: 0x70 (Inherited: 0x00)
struct F*22205d802a {
	char pad_0[0x10]; // 0x00(0x10)
	enum class *029da045ae LocationType; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FTransform LiteralTransform; // 0x20(0x30)
	struct AActor* SourceActor; // 0x50(0x08)
	struct UMeshComponent* SourceComponent; // 0x58(0x08)
	struct UGameplayAbility* SourceAbility; // 0x60(0x08)
	struct FName SourceSocketName; // 0x68(0x08)
};

// ScriptStruct GameplayAbilities.*6f0be1b76d
// Size: 0xf0 (Inherited: 0x08)
struct F*6f0be1b76d : F*005c5e55ed {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*22205d802a SourceLocation; // 0x10(0x70)
	struct F*22205d802a TargetLocation; // 0x80(0x70)
};

// ScriptStruct GameplayAbilities.*417422c6db
// Size: 0x08 (Inherited: 0x00)
struct F*417422c6db {
	struct F*bcfee612de *6496001e58; // 0x00(0x04)
	int32 *588b03c57a; // 0x04(0x04)
};

// ScriptStruct GameplayAbilities.*5b59372a65
// Size: 0x18 (Inherited: 0x00)
struct F*5b59372a65 {
	struct UGameplayTask* *019aa83057; // 0x00(0x08)
	struct FString Message; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.*945306c827
// Size: 0x10 (Inherited: 0x00)
struct F*945306c827 {
	struct UGameplayAbility* *bdd56cbd9f; // 0x00(0x08)
	struct F*bcfee612de *152de8cdff; // 0x08(0x04)
	bool *bbf815df54; // 0x0c(0x01)
	bool *db17bc9314; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct GameplayAbilities.*e80ea89b67
// Size: 0x48 (Inherited: 0x00)
struct F*e80ea89b67 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* OwnerActor; // 0x08(0x08)
	struct AActor* AvatarActor; // 0x10(0x08)
	struct APlayerController* PlayerController; // 0x18(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x20(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x28(0x08)
	struct UAnimInstance* AnimInstance; // 0x30(0x08)
	struct UMovementComponent* MovementComponent; // 0x38(0x08)
	struct FName AffectedAnimInstanceTag; // 0x40(0x08)
};

// ScriptStruct GameplayAbilities.*9016feff67
// Size: 0x20 (Inherited: 0x00)
struct F*9016feff67 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* SelfActor; // 0x08(0x08)
	struct UClass* RequiredActorClass; // 0x10(0x08)
	enum class *154932b159 SelfFilter; // 0x18(0x01)
	bool bReverseFilter; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct GameplayAbilities.*593da8e637
// Size: 0x2a0 (Inherited: 0x00)
struct F*593da8e637 {
	char pad_0[0x290]; // 0x00(0x290)
	struct UAbilitySystemComponent* Owner; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCueTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayCueTag {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*ca2a178dd8
// Size: 0xa0 (Inherited: 0x00)
struct F*ca2a178dd8 {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct GameplayAbilities.*0c4e6654e0
// Size: 0x60 (Inherited: 0x00)
struct F*0c4e6654e0 {
	struct FGameplayTagContainer CombinedTags; // 0x00(0x20)
	struct FGameplayTagContainer Added; // 0x20(0x20)
	struct FGameplayTagContainer Removed; // 0x40(0x20)
};

// ScriptStruct GameplayAbilities.*bf0f65bacc
// Size: 0x48 (Inherited: 0x00)
struct F*bf0f65bacc {
	struct FGameplayAttribute *c57bb0f4cd; // 0x00(0x20)
	float *d6bd0c7c51; // 0x20(0x04)
	float *c4f76ccbb3; // 0x24(0x04)
	struct FGameplayTagContainer GameplayCueTags; // 0x28(0x20)
};

// ScriptStruct GameplayAbilities.*50980be3ae
// Size: 0x2e0 (Inherited: 0x00)
struct F*50980be3ae {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	enum class EGameplayModOp *8f06afb556; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FScalableFloat Magnitude; // 0x28(0x30)
	struct FGameplayEffectModifierMagnitude *67f2619533; // 0x58(0x200)
	struct FGameplayModEvaluationChannelSettings *ac42bbc56d; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct F*c6f2db32e3 *3ee8f9f110; // 0x260(0x40)
	struct F*c6f2db32e3 TargetTags; // 0x2a0(0x40)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x200 (Inherited: 0x00)
struct FGameplayEffectModifierMagnitude {
	enum class EGameplayEffectMagnitudeCalculation *13a6338c4f; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FScalableFloat *84314b2d6b; // 0x08(0x30)
	struct FAttributeBasedFloat *a843af84f4; // 0x38(0x110)
	struct F*980a04512d *b345b08bfe; // 0x148(0xa8)
	struct F*a91bc79988 *06ad49b0b1; // 0x1f0(0x10)
};

// ScriptStruct GameplayAbilities.*a91bc79988
// Size: 0x10 (Inherited: 0x00)
struct F*a91bc79988 {
	struct FName *5e6c71403d; // 0x00(0x08)
	struct FGameplayTag *62a70ae9c2; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*980a04512d
// Size: 0xa8 (Inherited: 0x00)
struct F*980a04512d {
	struct UClass* *de6553e641; // 0x00(0x08)
	struct FScalableFloat *b4b1db054b; // 0x08(0x30)
	struct FScalableFloat *9beb78277e; // 0x38(0x30)
	struct FScalableFloat *b76d9509e8; // 0x68(0x30)
	struct FCurveTableRowHandle *627be3052f; // 0x98(0x10)
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// Size: 0x110 (Inherited: 0x00)
struct FAttributeBasedFloat {
	struct FScalableFloat *b4b1db054b; // 0x00(0x30)
	struct FScalableFloat *9beb78277e; // 0x30(0x30)
	struct FScalableFloat *b76d9509e8; // 0x60(0x30)
	struct F*4ac327b4ea *0a0cc131cc; // 0x90(0x28)
	struct FCurveTableRowHandle *2045f4b2b4; // 0xb8(0x10)
	enum class EAttributeBasedFloatCalculationType *51b6cff8fd; // 0xc8(0x01)
	enum class EGameplayModEvaluationChannel *2b27a6f81f; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct FGameplayTagContainer *fb02da52d1; // 0xd0(0x20)
	struct FGameplayTagContainer *6b1ded45e0; // 0xf0(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x58 (Inherited: 0x00)
struct FGameplayEffectExecutionDefinition {
	struct UClass* *7f900e7fe3; // 0x00(0x08)
	struct FGameplayTagContainer *2ab51c1df3; // 0x08(0x20)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> *468c26940f; // 0x28(0x10)
	struct TArray<struct UClass*> ConditionalGameplayEffectClasses; // 0x38(0x10)
	struct TArray<struct F*458fe9bc56> *d24370aef4; // 0x48(0x10)
};

// ScriptStruct GameplayAbilities.*458fe9bc56
// Size: 0x28 (Inherited: 0x00)
struct F*458fe9bc56 {
	struct UClass* EffectClass; // 0x00(0x08)
	struct FGameplayTagContainer RequiredSourceTags; // 0x08(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x2c0 (Inherited: 0x00)
struct FGameplayEffectExecutionScopedModifierInfo {
	struct F*4ac327b4ea *74b12dad89; // 0x00(0x28)
	struct FGameplayTag *9e5b276919; // 0x28(0x08)
	enum class EGameplayEffectScopedModifierAggregatorType *d4309d45f7; // 0x30(0x01)
	enum class EGameplayModOp *8f06afb556; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FGameplayEffectModifierMagnitude *67f2619533; // 0x38(0x200)
	struct FGameplayModEvaluationChannelSettings *ac42bbc56d; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct F*c6f2db32e3 *3ee8f9f110; // 0x240(0x40)
	struct F*c6f2db32e3 TargetTags; // 0x280(0x40)
};

// ScriptStruct GameplayAbilities.*487c57aeb0
// Size: 0x10 (Inherited: 0x00)
struct F*487c57aeb0 {
	struct FGameplayTag *7d955c51ed; // 0x00(0x08)
	enum class *b5d3b6d189 *0e5cf84527; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct GameplayAbilities.*36dd836e71
// Size: 0x10 (Inherited: 0x00)
struct F*36dd836e71 {
	struct TArray<struct UScriptStruct*> *518df79a09; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*471b21c535
// Size: 0x0c (Inherited: 0x00)
struct F*471b21c535 {
	struct FVector AOEScale; // 0x00(0x0c)
};

// ScriptStruct GameplayAbilities.*d0cb6642f7
// Size: 0x10 (Inherited: 0x00)
struct F*d0cb6642f7 {
	enum class *19256039c0 Command; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* *bad7accca6; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*a9d1e7f1fe
// Size: 0x68 (Inherited: 0x00)
struct F*a9d1e7f1fe {
	char pad_0[0x50]; // 0x00(0x50)
	struct TArray<struct UClass*> *ccea8221ce; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct GameplayAbilities.*776b9f415c
// Size: 0x178 (Inherited: 0x00)
struct F*776b9f415c {
	char pad_0[0x18]; // 0x00(0x18)
	struct F*af2d0e22f4 *af2d0e22f4; // 0x18(0x18)
	enum class *ce6cbe38da *cd0b7ffd33; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAbilitySystemComponent* *b1d8c49aa4; // 0x38(0x08)
	struct F*2f6835dd93 *0ac100aa71; // 0x40(0x78)
	struct F*2f043f1358 *89548a6a8a; // 0xb8(0xc0)
};

// ScriptStruct GameplayAbilities.*38d0065ea5
// Size: 0x80 (Inherited: 0x00)
struct F*38d0065ea5 {
	struct TArray<struct F*b6b809fcc2> *ff2dfcd4d9; // 0x00(0x10)
	struct TMap<struct FName, struct F*55cac5dbe8> *43f44d51d6; // 0x10(0x50)
	struct U*5bd0b017da* *0c22379b0e; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)
};

// ScriptStruct GameplayAbilities.*55cac5dbe8
// Size: 0x04 (Inherited: 0x00)
struct F*55cac5dbe8 {
	int32 Index; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.*b6b809fcc2
// Size: 0x78 (Inherited: 0x00)
struct F*b6b809fcc2 {
	struct TArray<struct F*56b6c585b9> Links; // 0x00(0x10)
	struct F*55cac5dbe8 *8e9ba0b5d1; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FGameplayTag *63fa76d741; // 0x18(0x08)
	struct FName *7e4b7c91ae; // 0x20(0x08)
	char pad_28[0x50]; // 0x28(0x50)
};

// ScriptStruct GameplayAbilities.*56b6c585b9
// Size: 0x18 (Inherited: 0x00)
struct F*56b6c585b9 {
	struct U*2c0858f6ae* *2a477f5d55; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.*a4edb87042
// Size: 0xb0 (Inherited: 0x00)
struct F*a4edb87042 {
	struct TArray<struct FString> Paths; // 0x00(0x10)
	char pad_10[0x80]; // 0x10(0x80)
	struct UObjectLibrary* *d592097de0; // 0x90(0x08)
	struct UObjectLibrary* *a2edb0e782; // 0x98(0x08)
	struct U*62132a7048* *96e706ece2; // 0xa0(0x08)
	char pad_A8[0x4]; // 0xa8(0x04)
	bool *8462c1a0b5; // 0xac(0x01)
	bool *8088874987; // 0xad(0x01)
	bool *e05614e05b; // 0xae(0x01)
	bool *87b63fe1db; // 0xaf(0x01)
};

// ScriptStruct GameplayAbilities.*0f16ebd187
// Size: 0x28 (Inherited: 0x00)
struct F*0f16ebd187 {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
	struct FStringAssetReference *b85b6350aa; // 0x08(0x10)
	struct UClass* *4de731952a; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct GameplayAbilities.*81dc8fee09
// Size: 0x18 (Inherited: 0x00)
struct F*81dc8fee09 {
	struct TArray<struct F*656a922e93> *65697f99d1; // 0x00(0x10)
	char *9ec28a301f : 1; // 0x10(0x01)
	char *b546b023b6 : 1; // 0x10(0x01)
	char *387a7c1fcf : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayAbilities.*230285452d
// Size: 0xa8 (Inherited: 0x00)
struct F*230285452d {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct GameplayAbilities.*ebbd9c1bc4
// Size: 0x50 (Inherited: 0x00)
struct F*ebbd9c1bc4 {
	struct F*b94a29afd5 Positive; // 0x00(0x28)
	struct F*b94a29afd5 *f4620627e7; // 0x28(0x28)
};

// ScriptStruct GameplayAbilities.*b94a29afd5
// Size: 0x28 (Inherited: 0x00)
struct F*b94a29afd5 {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UClass* *32b840c028; // 0x08(0x08)
	struct TArray<struct UClass*> *c5fb4ade8d; // 0x10(0x10)
	int32 *b618f4f218; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};


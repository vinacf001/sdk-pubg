// Enum GameplayAbilities.*67c365c795
enum class *67c365c795 : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8 {
	None,
};

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8 {
	None,
};

// Enum GameplayAbilities.*c6aa244793
enum class *c6aa244793 : uint8 {
	None,
};

// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8 {
	None,
};

// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8 {
	None,
};

// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.*39b08de6da
enum class *39b08de6da : uint8 {
	None,
};

// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8 {
	None,
};

// Enum GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.*48f5775b2d
enum class *48f5775b2d : uint8 {
	None,
};

// Enum GameplayAbilities.*b6ce87a358
enum class *b6ce87a358 : uint8 {
	None,
};

// Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8 {
	None,
};

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8 {
	None,
};

// Enum GameplayAbilities.*8ae596defb
enum class *8ae596defb : uint8 {
	None,
};

// Enum GameplayAbilities.*4c2df1f49e
enum class *4c2df1f49e : uint8 {
	None,
};

// Enum GameplayAbilities.*7883aa26a7
enum class *7883aa26a7 : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.*c283cdea74
enum class *c283cdea74 : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.*fce1089ae9
enum class *fce1089ae9 : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.*03375d8f04
enum class *03375d8f04 : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.*9693afdc65
enum class *9693afdc65 : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.*a6b6e6317f
enum class *a6b6e6317f : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.*92e29a6c2a
enum class *92e29a6c2a : uint8 {
	None,
	None,
};

// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8 {
	None,
};

// Enum GameplayAbilities.*7e279f4ad6
enum class *7e279f4ad6 : uint8 {
	None,
};

// Enum GameplayAbilities.*fc8ae6a4df
enum class *fc8ae6a4df : uint8 {
	None,
	None,
};

// ScriptStruct GameplayAbilities.*be289b2c60
// Size: 0x40 (Inherited: 0x00)
struct F*be289b2c60 {
	struct FGameplayTagContainer RequireTags; // 0x00(0x20)
	struct FGameplayTagContainer IgnoreTags; // 0x20(0x20)
};

// ScriptStruct GameplayAbilities.*6616fa779a
// Size: 0x10 (Inherited: 0x00)
struct F*6616fa779a {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*ec4dfd3d93
// Size: 0x08 (Inherited: 0x00)
struct F*ec4dfd3d93 {
	int32 Handle; // 0x00(0x04)
	bool *d8f62801ff; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GameplayAbilities.*c0ab2cfdbe
// Size: 0x10 (Inherited: 0x00)
struct F*c0ab2cfdbe {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*35341a2d42
// Size: 0xb0 (Inherited: 0x00)
struct F*35341a2d42 {
	struct FGameplayTag EventTag; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* Target; // 0x10(0x08)
	struct UObject* OptionalObject; // 0x18(0x08)
	struct UObject* OptionalObject2; // 0x20(0x08)
	struct F*2b830333e1 ContextHandle; // 0x28(0x18)
	struct FGameplayTagContainer InstigatorTags; // 0x40(0x20)
	struct FGameplayTagContainer TargetTags; // 0x60(0x20)
	float EventMagnitude; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct F*8fa95bb31f TargetData; // 0x88(0x28)
};

// ScriptStruct GameplayAbilities.*8fa95bb31f
// Size: 0x28 (Inherited: 0x00)
struct F*8fa95bb31f {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct GameplayAbilities.*2b830333e1
// Size: 0x18 (Inherited: 0x00)
struct F*2b830333e1 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct GameplayAbilities.*8bcc1a8249
// Size: 0x530 (Inherited: 0x0c)
struct F*8bcc1a8249 : F*726f9049bc {
	char pad_C[0xc]; // 0x0c(0x0c)
	struct F*ca82836aee Spec; // 0x18(0x298)
	struct F*66a0d1cb95 *66a0d1cb95; // 0x2b0(0x18)
	float *d6a121ab40; // 0x2c8(0x04)
	float *f29f782b7f; // 0x2cc(0x04)
	float StartWorldTime; // 0x2d0(0x04)
	bool bIsInhibited; // 0x2d4(0x01)
	char pad_2D5[0x25b]; // 0x2d5(0x25b)
};

// ScriptStruct GameplayAbilities.*66a0d1cb95
// Size: 0x18 (Inherited: 0x00)
struct F*66a0d1cb95 {
	int16 Current; // 0x00(0x02)
	int16 Base; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct UPackageMap* *06293b0230; // 0x08(0x08)
	bool *f0a56fa7f0; // 0x10(0x01)
	bool *e564075dae; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct GameplayAbilities.*ca82836aee
// Size: 0x298 (Inherited: 0x00)
struct F*ca82836aee {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct F*d6aeb567dd> *4420c3feaf; // 0x08(0x10)
	struct F*9205817fc9 *89277452fd; // 0x18(0x28)
	char pad_40[0x10]; // 0x40(0x10)
	float Duration; // 0x50(0x04)
	float Period; // 0x54(0x04)
	float *8ed90c5343; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct F*369b6b76a7 *6ab2d8a622; // 0x60(0x88)
	struct F*369b6b76a7 *8469289eb5; // 0xe8(0x88)
	struct FGameplayTagContainer *0cf426f93f; // 0x170(0x20)
	struct FGameplayTagContainer *b30a6c04ac; // 0x190(0x20)
	struct TArray<struct F*d452c14177> Modifiers; // 0x1b0(0x10)
	int32 StackCount; // 0x1c0(0x04)
	char *c4054797a8 : 1; // 0x1c4(0x01)
	char *43e302e33d : 1; // 0x1c4(0x01)
	char *0411e3b1bd : 1; // 0x1c4(0x01)
	char pad_1C4_3 : 5; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
	struct TArray<struct F*1ce213372d> *8a27332824; // 0x1c8(0x10)
	char pad_1D8[0xa0]; // 0x1d8(0xa0)
	struct F*2b830333e1 *7ca991562c; // 0x278(0x18)
	float Level; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
};

// ScriptStruct GameplayAbilities.*1ce213372d
// Size: 0xa0 (Inherited: 0x00)
struct F*1ce213372d {
	struct UClass* Ability; // 0x00(0x08)
	struct FScalableFloat *c7d2529d08; // 0x08(0x30)
	int32 *12de0e1f9d; // 0x38(0x04)
	enum class *67c365c795 *dc739a3114; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UObject* SourceObject; // 0x40(0x08)
	char pad_48[0x50]; // 0x48(0x50)
	struct F*ef8dc34671 *65a50c09b2; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct GameplayAbilities.*ef8dc34671
// Size: 0x04 (Inherited: 0x00)
struct F*ef8dc34671 {
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

// ScriptStruct GameplayAbilities.*d452c14177
// Size: 0x04 (Inherited: 0x00)
struct F*d452c14177 {
	float *772591bf6d; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.*369b6b76a7
// Size: 0x88 (Inherited: 0x00)
struct F*369b6b76a7 {
	struct FGameplayTagContainer *c9af3107c6; // 0x00(0x20)
	struct FGameplayTagContainer *e260174408; // 0x20(0x20)
	struct FGameplayTagContainer *c1d56ece8a; // 0x40(0x20)
	char pad_60[0x28]; // 0x60(0x28)
};

// ScriptStruct GameplayAbilities.*9205817fc9
// Size: 0x28 (Inherited: 0x00)
struct F*9205817fc9 {
	struct TArray<struct F*7ebe0e35f3> *8cf339fe69; // 0x00(0x10)
	struct TArray<struct F*7ebe0e35f3> *45ddd5685f; // 0x10(0x10)
	bool *14be341258; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayAbilities.*7ebe0e35f3
// Size: 0x38 (Inherited: 0x00)
struct F*7ebe0e35f3 {
	struct F*a220ab4781 *b41ce52d39; // 0x00(0x28)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct GameplayAbilities.*a220ab4781
// Size: 0x28 (Inherited: 0x00)
struct F*a220ab4781 {
	struct FGameplayAttribute *883453ca58; // 0x00(0x20)
	enum class EGameplayEffectAttributeCaptureSource *890afd2fae; // 0x20(0x01)
	bool *606a86e798; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// Size: 0x20 (Inherited: 0x00)
struct FGameplayAttribute {
	struct FString AttributeName; // 0x00(0x10)
	struct UProperty* Attribute; // 0x10(0x08)
	struct UStruct* *b0dfa66d85; // 0x18(0x08)
};

// ScriptStruct GameplayAbilities.*d6aeb567dd
// Size: 0x28 (Inherited: 0x00)
struct F*d6aeb567dd {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	float *987e7127a3; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GameplayAbilities.*ecebf18aaa
// Size: 0x20 (Inherited: 0x00)
struct F*ecebf18aaa {
	bool bPrematureRemoval; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 StackCount; // 0x04(0x04)
	struct F*2b830333e1 EffectContext; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.*6a42616980
// Size: 0x20 (Inherited: 0x00)
struct F*6a42616980 {
	enum class EGameplayAbilityActivationMode ActivationMode; // 0x00(0x01)
	char *920e453fdf : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct F*66a0d1cb95 *db9511933c; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.*66e6e9d0a8
// Size: 0xc0 (Inherited: 0x00)
struct F*66e6e9d0a8 {
	float NormalizedMagnitude; // 0x00(0x04)
	float RawMagnitude; // 0x04(0x04)
	struct F*2b830333e1 EffectContext; // 0x08(0x18)
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

// ScriptStruct GameplayAbilities.*4bfab3802b
// Size: 0x78 (Inherited: 0x00)
struct F*4bfab3802b {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct F*d6aeb567dd> *4420c3feaf; // 0x08(0x10)
	struct F*2b830333e1 *7ca991562c; // 0x18(0x18)
	struct FGameplayTagContainer *16911eb8f0; // 0x30(0x20)
	struct FGameplayTagContainer *efba7b7dd5; // 0x50(0x20)
	float Level; // 0x70(0x04)
	float AbilityLevel; // 0x74(0x04)
};

// ScriptStruct GameplayAbilities.*ef0a92a7f7
// Size: 0x170 (Inherited: 0x00)
struct F*ef0a92a7f7 {
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

// ScriptStruct GameplayAbilities.*bb0113fb37
// Size: 0x50 (Inherited: 0x00)
struct F*bb0113fb37 {
	struct F*ef8dc34671 *eb6aa0c0e2; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*66a0d1cb95 *66a0d1cb95; // 0x08(0x18)
	struct F*8fa95bb31f *8b0bc9b52f; // 0x20(0x28)
	bool InputPressed; // 0x48(0x01)
	bool Ended; // 0x49(0x01)
	bool Started; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// ScriptStruct GameplayAbilities.*6fe0834992
// Size: 0xc0 (Inherited: 0xb0)
struct F*6fe0834992 : F*12732c41f6 {
	struct TArray<struct F*0f624321af> *a9e2bf9ec0; // 0xb0(0x10)
};

// ScriptStruct GameplayAbilities.*0f624321af
// Size: 0x28 (Inherited: 0x0c)
struct F*0f624321af : F*726f9049bc {
	char pad_C[0x4]; // 0x0c(0x04)
	struct F*66a0d1cb95 *66a0d1cb95; // 0x10(0x18)
};

// ScriptStruct GameplayAbilities.*684cb9739a
// Size: 0x60 (Inherited: 0x00)
struct F*684cb9739a {
	char pad_0[0x50]; // 0x00(0x50)
	struct UAbilitySystemComponent* Owner; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct GameplayAbilities.*c838a82bb4
// Size: 0x38 (Inherited: 0x00)
struct F*c838a82bb4 {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Position; // 0x0c(0x04)
	float BlendTime; // 0x10(0x04)
	bool *4c54c25f9c; // 0x14(0x01)
	char *ec7a6dd3af : 1; // 0x15(0x01)
	char IsStopped : 1; // 0x15(0x01)
	char *fcb51fa4a5 : 1; // 0x15(0x01)
	char *045ad38b8c : 1; // 0x15(0x01)
	char *a8478aae23 : 1; // 0x15(0x01)
	char pad_15_5 : 3; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct F*66a0d1cb95 *66a0d1cb95; // 0x18(0x18)
	bool *5c12138464; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayAbilities.*d583d4ccf6
// Size: 0xd0 (Inherited: 0xb0)
struct F*d583d4ccf6 : F*12732c41f6 {
	struct TArray<struct F*52bbe66dec> *9aa203914f; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct UAbilitySystemComponent* Owner; // 0xc8(0x08)
};

// ScriptStruct GameplayAbilities.*52bbe66dec
// Size: 0xf8 (Inherited: 0x0c)
struct F*52bbe66dec : F*726f9049bc {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FGameplayTag GameplayCueTag; // 0x10(0x08)
	struct F*66a0d1cb95 *66a0d1cb95; // 0x18(0x18)
	struct F*66e6e9d0a8 Parameters; // 0x30(0xc0)
	bool *89eebeec77; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct GameplayAbilities.*fd3ab3cc0d
// Size: 0x4e0 (Inherited: 0xb0)
struct F*fd3ab3cc0d : F*12732c41f6 {
	char pad_B0[0x80]; // 0xb0(0x80)
	struct TArray<struct F*8bcc1a8249> *f4de34cc69; // 0x130(0x10)
	char pad_140[0x370]; // 0x140(0x370)
	struct TArray<struct UGameplayEffect*> *c4cf50e944; // 0x4b0(0x10)
	char pad_4C0[0x20]; // 0x4c0(0x20)
};

// ScriptStruct GameplayAbilities.*aed4390e2f
// Size: 0x30 (Inherited: 0x00)
struct F*aed4390e2f {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	bool *522c10ec97; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*66a0d1cb95 *66a0d1cb95; // 0x10(0x18)
	struct UGameplayAbility* *ee7f7ee7ca; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*d30baabecf
// Size: 0xc8 (Inherited: 0xb0)
struct F*d30baabecf : F*12732c41f6 {
	struct TArray<struct F*f4e528a011> Items; // 0xb0(0x10)
	struct UAbilitySystemComponent* Owner; // 0xc0(0x08)
};

// ScriptStruct GameplayAbilities.*f4e528a011
// Size: 0xe8 (Inherited: 0x0c)
struct F*f4e528a011 : F*726f9049bc {
	struct F*ef8dc34671 Handle; // 0x0c(0x04)
	struct UGameplayAbility* Ability; // 0x10(0x08)
	int32 Level; // 0x18(0x04)
	int32 *12de0e1f9d; // 0x1c(0x04)
	struct UObject* SourceObject; // 0x20(0x08)
	bool *dd8c714a8e; // 0x28(0x01)
	char InputPressed : 1; // 0x29(0x01)
	char *9fb4536471 : 1; // 0x29(0x01)
	char *df305ab6d7 : 1; // 0x29(0x01)
	char *4a5533c1e7 : 1; // 0x29(0x01)
	char pad_29_4 : 4; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct F*6a42616980 *e08ba251e0; // 0x30(0x20)
	struct FGameplayTagContainer *1ca09429f4; // 0x50(0x20)
	struct TArray<struct UGameplayAbility*> *1c78d4a6dd; // 0x70(0x10)
	struct TArray<struct UGameplayAbility*> *f219b1b33d; // 0x80(0x10)
	struct F*ec4dfd3d93 *bbbbe22cae; // 0x90(0x08)
	char pad_98[0x50]; // 0x98(0x50)
};

// ScriptStruct GameplayAbilities.*f0cf8b7179
// Size: 0x10 (Inherited: 0x00)
struct F*f0cf8b7179 {
	struct UClass* Attributes; // 0x00(0x08)
	struct UDataTable* *8352cb86a5; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*8752c7c81a
// Size: 0x58 (Inherited: 0x58)
struct F*8752c7c81a : FIndexedCurve {
};

// ScriptStruct GameplayAbilities.*fe9bf18654
// Size: 0x08 (Inherited: 0x00)
struct F*fe9bf18654 {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*f081bfabcf
// Size: 0x30 (Inherited: 0x08)
struct F*f081bfabcf : FTableRowBase {
	float BaseValue; // 0x08(0x04)
	float MinValue; // 0x0c(0x04)
	float MaxValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *980caac8d8; // 0x18(0x10)
	bool bCanStack; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GameplayAbilities.*b222156066
// Size: 0x10 (Inherited: 0x00)
struct F*b222156066 {
	char pad_0[0x8]; // 0x00(0x08)
	float BaseValue; // 0x08(0x04)
	float CurrentValue; // 0x0c(0x04)
};

// ScriptStruct GameplayAbilities.*2b54e3504a
// Size: 0x20 (Inherited: 0x00)
struct F*2b54e3504a {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct F*fa8ac46ced> *45f92463b3; // 0x10(0x10)
};

// ScriptStruct GameplayAbilities.*fa8ac46ced
// Size: 0x30 (Inherited: 0x00)
struct F*fa8ac46ced {
	struct FGameplayTag *8582c9334d; // 0x00(0x08)
	struct UProperty* *a469e89202; // 0x08(0x08)
	struct FName PropertyName; // 0x10(0x08)
	struct FGuid *5c41c6b751; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*137756b11b
// Size: 0x70 (Inherited: 0x00)
struct F*137756b11b {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* *1f8a3baaff; // 0x10(0x08)
	struct UGameplayAbility* *21284b308e; // 0x18(0x08)
	struct UGameplayAbility* *5b60f57980; // 0x20(0x08)
	int32 AbilityLevel; // 0x28(0x04)
	struct UObject* SourceObject; // 0x2c(0x08)
	struct UAbilitySystemComponent* *6a6629de9d; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct AActor*> Actors; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct FVector WorldOrigin; // 0x60(0x0c)
	char *0e05088d0d : 1; // 0x6c(0x01)
	char *61c4313d2b : 1; // 0x6c(0x01)
	char pad_6C_2 : 6; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct GameplayAbilities.*044163d071
// Size: 0x38 (Inherited: 0x00)
struct F*044163d071 {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	enum class EGameplayModOp *a996c06aab; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Magnitude; // 0x24(0x04)
	struct F*ec4dfd3d93 Handle; // 0x28(0x08)
	bool IsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// Size: 0x01 (Inherited: 0x00)
struct FGameplayModEvaluationChannelSettings {
	enum class EGameplayModEvaluationChannel Channel; // 0x00(0x01)
};

// ScriptStruct GameplayAbilities.*aeceb1f3ca
// Size: 0x98 (Inherited: 0x08)
struct F*aeceb1f3ca : F*40fc7c39b2 {
	struct FHitResult HitResult; // 0x08(0x88)
	bool *533f95c4f8; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct GameplayAbilities.*40fc7c39b2
// Size: 0x08 (Inherited: 0x00)
struct F*40fc7c39b2 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*f0ba43718a
// Size: 0x90 (Inherited: 0x08)
struct F*f0ba43718a : F*40fc7c39b2 {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*8b87ae35f3 SourceLocation; // 0x10(0x70)
	struct TArray<struct AActor*> *d694a32ea8; // 0x80(0x10)
};

// ScriptStruct GameplayAbilities.*8b87ae35f3
// Size: 0x70 (Inherited: 0x00)
struct F*8b87ae35f3 {
	char pad_0[0x10]; // 0x00(0x10)
	enum class *39b08de6da LocationType; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FTransform LiteralTransform; // 0x20(0x30)
	struct AActor* SourceActor; // 0x50(0x08)
	struct UMeshComponent* SourceComponent; // 0x58(0x08)
	struct UGameplayAbility* SourceAbility; // 0x60(0x08)
	struct FName SourceSocketName; // 0x68(0x08)
};

// ScriptStruct GameplayAbilities.*9617efb942
// Size: 0xf0 (Inherited: 0x08)
struct F*9617efb942 : F*40fc7c39b2 {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*8b87ae35f3 SourceLocation; // 0x10(0x70)
	struct F*8b87ae35f3 TargetLocation; // 0x80(0x70)
};

// ScriptStruct GameplayAbilities.*887d439e56
// Size: 0x08 (Inherited: 0x00)
struct F*887d439e56 {
	struct F*ef8dc34671 *c8b0ea2228; // 0x00(0x04)
	int32 *ceb3accd60; // 0x04(0x04)
};

// ScriptStruct GameplayAbilities.*3827d624b9
// Size: 0x18 (Inherited: 0x00)
struct F*3827d624b9 {
	struct UGameplayTask* *ad6c775124; // 0x00(0x08)
	struct FString Message; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.*4e9fbb6922
// Size: 0x10 (Inherited: 0x00)
struct F*4e9fbb6922 {
	struct UGameplayAbility* *d0825d87ac; // 0x00(0x08)
	struct F*ef8dc34671 *eb6aa0c0e2; // 0x08(0x04)
	bool *292a2d9b85; // 0x0c(0x01)
	bool *24ebad26de; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct GameplayAbilities.*ee84a5be65
// Size: 0x48 (Inherited: 0x00)
struct F*ee84a5be65 {
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

// ScriptStruct GameplayAbilities.*7eb3561ae3
// Size: 0x20 (Inherited: 0x00)
struct F*7eb3561ae3 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* SelfActor; // 0x08(0x08)
	struct UClass* RequiredActorClass; // 0x10(0x08)
	enum class *4c2df1f49e SelfFilter; // 0x18(0x01)
	bool bReverseFilter; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct GameplayAbilities.*1169e8c7bb
// Size: 0x2a0 (Inherited: 0x00)
struct F*1169e8c7bb {
	char pad_0[0x290]; // 0x00(0x290)
	struct UAbilitySystemComponent* Owner; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCueTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayCueTag {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*030ca11752
// Size: 0xa0 (Inherited: 0x00)
struct F*030ca11752 {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct GameplayAbilities.*bd2309b738
// Size: 0x60 (Inherited: 0x00)
struct F*bd2309b738 {
	struct FGameplayTagContainer CombinedTags; // 0x00(0x20)
	struct FGameplayTagContainer Added; // 0x20(0x20)
	struct FGameplayTagContainer Removed; // 0x40(0x20)
};

// ScriptStruct GameplayAbilities.*cfbad48b2f
// Size: 0x48 (Inherited: 0x00)
struct F*cfbad48b2f {
	struct FGameplayAttribute *bcdcdce6d7; // 0x00(0x20)
	float *503b02b4c7; // 0x20(0x04)
	float *f6a010b884; // 0x24(0x04)
	struct FGameplayTagContainer GameplayCueTags; // 0x28(0x20)
};

// ScriptStruct GameplayAbilities.*78b34c26ea
// Size: 0x2e0 (Inherited: 0x00)
struct F*78b34c26ea {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	enum class EGameplayModOp *a996c06aab; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FScalableFloat Magnitude; // 0x28(0x30)
	struct FGameplayEffectModifierMagnitude *44fd1337cc; // 0x58(0x200)
	struct FGameplayModEvaluationChannelSettings *78eb687d64; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct F*be289b2c60 *10cb74e052; // 0x260(0x40)
	struct F*be289b2c60 TargetTags; // 0x2a0(0x40)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x200 (Inherited: 0x00)
struct FGameplayEffectModifierMagnitude {
	enum class EGameplayEffectMagnitudeCalculation *fb8a13d56e; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FScalableFloat *fab268806d; // 0x08(0x30)
	struct FAttributeBasedFloat *5be61cd9b7; // 0x38(0x110)
	struct F*153d063733 *baf6b6bc27; // 0x148(0xa8)
	struct F*b6020cf4bd *735ce1b0e9; // 0x1f0(0x10)
};

// ScriptStruct GameplayAbilities.*b6020cf4bd
// Size: 0x10 (Inherited: 0x00)
struct F*b6020cf4bd {
	struct FName *35f7e6d712; // 0x00(0x08)
	struct FGameplayTag *65d3b4f6cf; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*153d063733
// Size: 0xa8 (Inherited: 0x00)
struct F*153d063733 {
	struct UClass* *e2ca0b5076; // 0x00(0x08)
	struct FScalableFloat *0eb0143435; // 0x08(0x30)
	struct FScalableFloat *bdc9a649ad; // 0x38(0x30)
	struct FScalableFloat *b97e3a7e77; // 0x68(0x30)
	struct FCurveTableRowHandle *5a9469e7ba; // 0x98(0x10)
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// Size: 0x110 (Inherited: 0x00)
struct FAttributeBasedFloat {
	struct FScalableFloat *0eb0143435; // 0x00(0x30)
	struct FScalableFloat *bdc9a649ad; // 0x30(0x30)
	struct FScalableFloat *b97e3a7e77; // 0x60(0x30)
	struct F*a220ab4781 *638e903e62; // 0x90(0x28)
	struct FCurveTableRowHandle *071c57984a; // 0xb8(0x10)
	enum class EAttributeBasedFloatCalculationType *979c738483; // 0xc8(0x01)
	enum class EGameplayModEvaluationChannel *395b14f0c4; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct FGameplayTagContainer *edb473ade8; // 0xd0(0x20)
	struct FGameplayTagContainer *2b3167e0fc; // 0xf0(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x58 (Inherited: 0x00)
struct FGameplayEffectExecutionDefinition {
	struct UClass* *33acdc64fb; // 0x00(0x08)
	struct FGameplayTagContainer *5139dfd680; // 0x08(0x20)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> *ad5acf3d12; // 0x28(0x10)
	struct TArray<struct UClass*> ConditionalGameplayEffectClasses; // 0x38(0x10)
	struct TArray<struct F*b23d3847b8> *10f0271b5e; // 0x48(0x10)
};

// ScriptStruct GameplayAbilities.*b23d3847b8
// Size: 0x28 (Inherited: 0x00)
struct F*b23d3847b8 {
	struct UClass* EffectClass; // 0x00(0x08)
	struct FGameplayTagContainer RequiredSourceTags; // 0x08(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x2c0 (Inherited: 0x00)
struct FGameplayEffectExecutionScopedModifierInfo {
	struct F*a220ab4781 *4988b82909; // 0x00(0x28)
	struct FGameplayTag *bc17219c7a; // 0x28(0x08)
	enum class EGameplayEffectScopedModifierAggregatorType *32940c8769; // 0x30(0x01)
	enum class EGameplayModOp *a996c06aab; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FGameplayEffectModifierMagnitude *44fd1337cc; // 0x38(0x200)
	struct FGameplayModEvaluationChannelSettings *78eb687d64; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct F*be289b2c60 *10cb74e052; // 0x240(0x40)
	struct F*be289b2c60 TargetTags; // 0x280(0x40)
};

// ScriptStruct GameplayAbilities.*e3004e6158
// Size: 0x10 (Inherited: 0x00)
struct F*e3004e6158 {
	struct FGameplayTag *cbb03858b5; // 0x00(0x08)
	enum class *48f5775b2d *c9d008e875; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct GameplayAbilities.*dbdd3831ef
// Size: 0x10 (Inherited: 0x00)
struct F*dbdd3831ef {
	struct TArray<struct UScriptStruct*> *a685620a9e; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*26ccbc5580
// Size: 0x0c (Inherited: 0x00)
struct F*26ccbc5580 {
	struct FVector AOEScale; // 0x00(0x0c)
};

// ScriptStruct GameplayAbilities.*c4cbd103fb
// Size: 0x10 (Inherited: 0x00)
struct F*c4cbd103fb {
	enum class *7e279f4ad6 Command; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* *2b3b26c037; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*ae73b4ceaa
// Size: 0x68 (Inherited: 0x00)
struct F*ae73b4ceaa {
	char pad_0[0x50]; // 0x00(0x50)
	struct TArray<struct UClass*> *f67454e193; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct GameplayAbilities.*eae0ebff14
// Size: 0x178 (Inherited: 0x00)
struct F*eae0ebff14 {
	char pad_0[0x18]; // 0x00(0x18)
	struct F*66a0d1cb95 *66a0d1cb95; // 0x18(0x18)
	enum class *fc8ae6a4df *6219a0c9be; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAbilitySystemComponent* *0ef96f60c5; // 0x38(0x08)
	struct F*4bfab3802b *d8a819f91a; // 0x40(0x78)
	struct F*66e6e9d0a8 *bc6e1faeb5; // 0xb8(0xc0)
};

// ScriptStruct GameplayAbilities.*68887b486d
// Size: 0x80 (Inherited: 0x00)
struct F*68887b486d {
	struct TArray<struct F*214c1687f5> *39e92371f0; // 0x00(0x10)
	struct TMap<struct FName, struct F*b2f178e5f6> *aa0ed8f721; // 0x10(0x50)
	struct U*a090700d19* *e9533135d3; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)
};

// ScriptStruct GameplayAbilities.*b2f178e5f6
// Size: 0x04 (Inherited: 0x00)
struct F*b2f178e5f6 {
	int32 Index; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.*214c1687f5
// Size: 0x78 (Inherited: 0x00)
struct F*214c1687f5 {
	struct TArray<struct F*b1378b787d> Links; // 0x00(0x10)
	struct F*b2f178e5f6 *a63607680a; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FGameplayTag *b351e54a94; // 0x18(0x08)
	struct FName *2d772bc2a1; // 0x20(0x08)
	char pad_28[0x50]; // 0x28(0x50)
};

// ScriptStruct GameplayAbilities.*b1378b787d
// Size: 0x18 (Inherited: 0x00)
struct F*b1378b787d {
	struct U*47a96362e7* *68db77eef8; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.*a1b25a3259
// Size: 0xb0 (Inherited: 0x00)
struct F*a1b25a3259 {
	struct TArray<struct FString> Paths; // 0x00(0x10)
	char pad_10[0x80]; // 0x10(0x80)
	struct UObjectLibrary* *6ef0e80ecb; // 0x90(0x08)
	struct UObjectLibrary* *f6b3c6bbe3; // 0x98(0x08)
	struct U*936c76ae6d* *a3f47993fc; // 0xa0(0x08)
	char pad_A8[0x4]; // 0xa8(0x04)
	bool *d7d14fa0bb; // 0xac(0x01)
	bool *512c1a30ca; // 0xad(0x01)
	bool *6df8217776; // 0xae(0x01)
	bool *d731718e58; // 0xaf(0x01)
};

// ScriptStruct GameplayAbilities.*731ab2bf2c
// Size: 0x28 (Inherited: 0x00)
struct F*731ab2bf2c {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
	struct FStringAssetReference *da86eef0d8; // 0x08(0x10)
	struct UClass* *bac0dfd7c6; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct GameplayAbilities.*0f750fe1a2
// Size: 0x18 (Inherited: 0x00)
struct F*0f750fe1a2 {
	struct TArray<struct F*044163d071> *2ee2307dfc; // 0x00(0x10)
	char *e7c0593b14 : 1; // 0x10(0x01)
	char *59da98fe0c : 1; // 0x10(0x01)
	char *926aef2b05 : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayAbilities.*7fd7e4fa4d
// Size: 0xa8 (Inherited: 0x00)
struct F*7fd7e4fa4d {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct GameplayAbilities.*c97d215778
// Size: 0x50 (Inherited: 0x00)
struct F*c97d215778 {
	struct F*00687ca8ef Positive; // 0x00(0x28)
	struct F*00687ca8ef *9db1b39c0c; // 0x28(0x28)
};

// ScriptStruct GameplayAbilities.*00687ca8ef
// Size: 0x28 (Inherited: 0x00)
struct F*00687ca8ef {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UClass* *6140d99636; // 0x08(0x08)
	struct TArray<struct UClass*> *d8f441de81; // 0x10(0x10)
	int32 *b94b559b5a; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};


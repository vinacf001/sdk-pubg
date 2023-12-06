// Enum GameplayAbilities.*080c1a5197
enum class *080c1a5197 : uint8 {
	*ea5fa53846,
	*5d0864c609,
	*314321167c,
	*edb91ac6a6,
	*080c1a5197_MAX,
};

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8 {
	Source,
	Target,
	EGameplayEffectAttributeCaptureSource_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8 {
	Authority,
	NonAuthority,
	Predicting,
	Confirmed,
	Rejected,
	EGameplayAbilityActivationMode_MAX,
};

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8 {
	GenericConfirm,
	GenericCancel,
	InputPressed,
	InputReleased,
	GenericSignalFromClient,
	GenericSignalFromServer,
	GameCustom1,
	GameCustom2,
	GameCustom3,
	GameCustom4,
	GameCustom5,
	GameCustom6,
	MAX,
	EAbilityGenericReplicatedEvent_MAX,
};

// Enum GameplayAbilities.*e32bb7c3d5
enum class *e32bb7c3d5 : uint8 {
	*7a5264ce15,
	*0e185a60c4,
	*1453047668,
	*e32bb7c3d5_MAX,
};

// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8 {
	OnActive,
	WhileActive,
	Executed,
	Removed,
	EGameplayCueEvent_MAX,
};

// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8 {
	None,
	AggregateBySource,
	AggregateByTarget,
	EGameplayEffectStackingType_MAX,
};

// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8 {
	Additive,
	Multiplicitive,
	Division,
	Override,
	Max,
	EGameplayModOp_MAX,
};

// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8 {
	Channel0,
	Channel1,
	Channel2,
	Channel3,
	Channel4,
	Channel5,
	Channel6,
	Channel7,
	Channel8,
	Channel9,
	Channel_MAX,
	EGameplayModEvaluationChannel_MAX,
};

// Enum GameplayAbilities.*c3d4e859b5
enum class *c3d4e859b5 : uint8 {
	*07fcb5b9dc,
	*b065d94cf9,
	*59638e843b,
	*ffa370a923,
	*c3d4e859b5_MAX,
};

// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8 {
	Instant,
	UserConfirmed,
	Custom,
	CustomMulti,
	EGameplayTargetingConfirmation_MAX,
};

// Enum GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8 {
	Position,
	CurrentSectionId,
	ERepAnimPositionMethod_MAX,
};

// Enum GameplayAbilities.*536bc0c7a1
enum class *536bc0c7a1 : uint8 {
	*d34015621e,
	*db050c6dac,
	*85a3b4992f,
	*b7d1ab4e06,
	*536bc0c7a1_MAX,
};

// Enum GameplayAbilities.*8808ad2c04
enum class *8808ad2c04 : uint8 {
	*04de1ac499,
	*f489867197,
	*15ca371972,
	*8808ad2c04_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8 {
	ClientOrServer,
	ServerOnlyExecution,
	ServerOnlyTermination,
	ServerOnly,
	EGameplayAbilityNetSecurityPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8 {
	LocalPredicted,
	LocalOnly,
	ServerInitiated,
	ServerOnly,
	EGameplayAbilityNetExecutionPolicy_MAX,
};

// Enum GameplayAbilities.*e9bca40f1c
enum class *e9bca40f1c : uint8 {
	*3f946fe3ea,
	*0de2e3a35d,
	*b08d104195,
	*28c019b4d8,
	*e9bca40f1c_MAX,
};

// Enum GameplayAbilities.*94cf61726b
enum class *94cf61726b : uint8 {
	*6c385c6ab6,
	*4001292c7e,
	*0c2c264601,
	*8277c04c9e,
	*94cf61726b_MAX,
};

// Enum GameplayAbilities.*1cdab040fe
enum class *1cdab040fe : uint8 {
	*4b4cbe296e,
	*b78960ee02,
	*87a84cd23c,
	*4e28e9f0dc,
	*1cdab040fe_MAX,
};

// Enum GameplayAbilities.*0ce34511ae
enum class *0ce34511ae : uint8 {
	*7525a3469c,
	*f5dcd26bd7,
	*0aa2c37753,
	*a22ccb3ba9,
	*0ce34511ae_MAX,
};

// Enum GameplayAbilities.*e264cb211b
enum class *e264cb211b : uint8 {
	*9c2bdda451,
	*4b4cbe296e,
	*0ae003773e,
	*e264cb211b_MAX,
};

// Enum GameplayAbilities.*7c7ea2d7a5
enum class *7c7ea2d7a5 : uint8 {
	*d81d5da9b2,
	*44dc052095,
	*16651525b8,
	*7c7ea2d7a5_MAX,
};

// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8 {
	Instant,
	Infinite,
	HasDuration,
	EGameplayEffectDurationType_MAX,
};

// Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8 {
	CapturedAttributeBacked,
	Transient,
	EGameplayEffectScopedModifierAggregatorType_MAX,
};

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8 {
	AttributeMagnitude,
	AttributeBaseValue,
	AttributeBonusMagnitude,
	AttributeMagnitudeEvaluatedUpToChannel,
	EAttributeBasedFloatCalculationType_MAX,
};

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8 {
	ScalableFloat,
	AttributeBased,
	CustomCalculationClass,
	SetByCaller,
	EGameplayEffectMagnitudeCalculation_MAX,
};

// Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8 {
	Minimal,
	Mixed,
	Full,
	EGameplayEffectReplicationMode_MAX,
};

// Enum GameplayAbilities.*4f1e5fe914
enum class *4f1e5fe914 : uint8 {
	*a131d5b341,
	*0b2f7bb5eb,
	*66b364f6c2,
	*cd8589dda3,
	*4f1e5fe914_MAX,
};

// Enum GameplayAbilities.*d3329524d8
enum class *d3329524d8 : uint8 {
	*c537cf8d36,
	*8352115ef5,
	*9ae24c1506,
	*730343bb76,
	*d3329524d8_MAX,
};

// Enum GameplayAbilities.*c24e437120
enum class *c24e437120 : uint8 {
	*82b0e86e23,
	*d8a5c78d39,
	*74908289bd,
	*ddab84ba7a,
	*c24e437120_MAX,
};

// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8 {
	None,
	GreaterThan,
	LessThan,
	GreaterThanOrEqualTo,
	LessThanOrEqualTo,
	NotEqualTo,
	ExactlyEqualTo,
	MAX,
	EWaitAttributeChangeComparison_MAX,
};

// Enum GameplayAbilities.*17996bd864
enum class *17996bd864 : uint8 {
	*fd85567221,
	*f674f93031,
	*49339dedeb,
	*c00a0f8246,
	*2d16e0e366,
	*001949c8b3,
	*170293e7af,
	*7ddd6ed333,
	*7331203bce,
	*7a055e9e40,
	*17996bd864_MAX,
};

// Enum GameplayAbilities.*62527a957a
enum class *62527a957a : uint8 {
	*fc8ae63385,
	*b6f5e70714,
	*7671e868b7,
	*62527a957a_MAX,
};

// ScriptStruct GameplayAbilities.*db129c0b81
// Size: 0x40 (Inherited: 0x00)
struct F*db129c0b81 {
	struct FGameplayTagContainer RequireTags; // 0x00(0x20)
	struct FGameplayTagContainer IgnoreTags; // 0x20(0x20)
};

// ScriptStruct GameplayAbilities.*4437ddaee9
// Size: 0x10 (Inherited: 0x00)
struct F*4437ddaee9 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*c3cafe0f98
// Size: 0x08 (Inherited: 0x00)
struct F*c3cafe0f98 {
	int32 Handle; // 0x00(0x04)
	bool *20704e3e7c; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GameplayAbilities.*5cf9f8565c
// Size: 0x10 (Inherited: 0x00)
struct F*5cf9f8565c {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*a2f2c750be
// Size: 0xb0 (Inherited: 0x00)
struct F*a2f2c750be {
	struct FGameplayTag EventTag; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* Target; // 0x10(0x08)
	struct UObject* OptionalObject; // 0x18(0x08)
	struct UObject* OptionalObject2; // 0x20(0x08)
	struct F*1734f92018 ContextHandle; // 0x28(0x18)
	struct FGameplayTagContainer InstigatorTags; // 0x40(0x20)
	struct FGameplayTagContainer TargetTags; // 0x60(0x20)
	float EventMagnitude; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct F*473cd9e976 TargetData; // 0x88(0x28)
};

// ScriptStruct GameplayAbilities.*473cd9e976
// Size: 0x28 (Inherited: 0x00)
struct F*473cd9e976 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct GameplayAbilities.*1734f92018
// Size: 0x18 (Inherited: 0x00)
struct F*1734f92018 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct GameplayAbilities.*b99ca913c4
// Size: 0x530 (Inherited: 0x0c)
struct F*b99ca913c4 : F*1eecbbbccc {
	char pad_C[0xc]; // 0x0c(0x0c)
	struct F*8c145ab21e Spec; // 0x18(0x298)
	struct F*7a56532c22 *7a56532c22; // 0x2b0(0x18)
	float *f9217d094c; // 0x2c8(0x04)
	float *48b8c19dcd; // 0x2cc(0x04)
	float StartWorldTime; // 0x2d0(0x04)
	bool bIsInhibited; // 0x2d4(0x01)
	char pad_2D5[0x25b]; // 0x2d5(0x25b)
};

// ScriptStruct GameplayAbilities.*7a56532c22
// Size: 0x18 (Inherited: 0x00)
struct F*7a56532c22 {
	int16 Current; // 0x00(0x02)
	int16 Base; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct UPackageMap* *7766244add; // 0x08(0x08)
	bool *c7b2dd5c32; // 0x10(0x01)
	bool *2a52f69029; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct GameplayAbilities.*8c145ab21e
// Size: 0x298 (Inherited: 0x00)
struct F*8c145ab21e {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct F*bce3f16e94> *f132af62b0; // 0x08(0x10)
	struct F*b90fa3d5d0 *ee0b7de518; // 0x18(0x28)
	char pad_40[0x10]; // 0x40(0x10)
	float Duration; // 0x50(0x04)
	float Period; // 0x54(0x04)
	float *71a09d99bb; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct F*0155f6b09d *2cd656e2ee; // 0x60(0x88)
	struct F*0155f6b09d *91cd608304; // 0xe8(0x88)
	struct FGameplayTagContainer *a1579c1fa1; // 0x170(0x20)
	struct FGameplayTagContainer *37acd6b87a; // 0x190(0x20)
	struct TArray<struct F*56d7a59ca8> Modifiers; // 0x1b0(0x10)
	int32 StackCount; // 0x1c0(0x04)
	char *6199d7bb64 : 1; // 0x1c4(0x01)
	char *80f217d4ac : 1; // 0x1c4(0x01)
	char *429876ec45 : 1; // 0x1c4(0x01)
	char pad_1C4_3 : 5; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
	struct TArray<struct F*e111967977> *ea5e936ea8; // 0x1c8(0x10)
	char pad_1D8[0xa0]; // 0x1d8(0xa0)
	struct F*1734f92018 *3510ce77e8; // 0x278(0x18)
	float Level; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
};

// ScriptStruct GameplayAbilities.*e111967977
// Size: 0xa0 (Inherited: 0x00)
struct F*e111967977 {
	struct UClass* Ability; // 0x00(0x08)
	struct FScalableFloat *359dc0c18a; // 0x08(0x30)
	int32 *08f24c2e35; // 0x38(0x04)
	enum class *080c1a5197 *bd1bcb0819; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UObject* SourceObject; // 0x40(0x08)
	char pad_48[0x50]; // 0x48(0x50)
	struct F*488da1e323 *c721a75091; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct GameplayAbilities.*488da1e323
// Size: 0x04 (Inherited: 0x00)
struct F*488da1e323 {
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

// ScriptStruct GameplayAbilities.*56d7a59ca8
// Size: 0x04 (Inherited: 0x00)
struct F*56d7a59ca8 {
	float *40c0903c46; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.*0155f6b09d
// Size: 0x88 (Inherited: 0x00)
struct F*0155f6b09d {
	struct FGameplayTagContainer *379bb32617; // 0x00(0x20)
	struct FGameplayTagContainer *05586d7431; // 0x20(0x20)
	struct FGameplayTagContainer *c8a082da6a; // 0x40(0x20)
	char pad_60[0x28]; // 0x60(0x28)
};

// ScriptStruct GameplayAbilities.*b90fa3d5d0
// Size: 0x28 (Inherited: 0x00)
struct F*b90fa3d5d0 {
	struct TArray<struct F*dac0d3c1a7> *6af6b95e15; // 0x00(0x10)
	struct TArray<struct F*dac0d3c1a7> *1eb7c84c34; // 0x10(0x10)
	bool *1ea1107c4a; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayAbilities.*dac0d3c1a7
// Size: 0x38 (Inherited: 0x00)
struct F*dac0d3c1a7 {
	struct F*9865947c9e *3a3fe6eed0; // 0x00(0x28)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct GameplayAbilities.*9865947c9e
// Size: 0x28 (Inherited: 0x00)
struct F*9865947c9e {
	struct FGameplayAttribute *071c4ee617; // 0x00(0x20)
	enum class EGameplayEffectAttributeCaptureSource *d52fc5adcc; // 0x20(0x01)
	bool *f3769c23c1; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// Size: 0x20 (Inherited: 0x00)
struct FGameplayAttribute {
	struct FString AttributeName; // 0x00(0x10)
	struct UProperty* Attribute; // 0x10(0x08)
	struct UStruct* *2ae8ea014e; // 0x18(0x08)
};

// ScriptStruct GameplayAbilities.*bce3f16e94
// Size: 0x28 (Inherited: 0x00)
struct F*bce3f16e94 {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	float *4225591c84; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GameplayAbilities.*4751d1de57
// Size: 0x20 (Inherited: 0x00)
struct F*4751d1de57 {
	bool bPrematureRemoval; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 StackCount; // 0x04(0x04)
	struct F*1734f92018 EffectContext; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.*f2f9f39c48
// Size: 0x50 (Inherited: 0x00)
struct F*f2f9f39c48 {
	struct F*488da1e323 *0a01316271; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*7a56532c22 *7a56532c22; // 0x08(0x18)
	struct F*473cd9e976 *e35b2a21bd; // 0x20(0x28)
	bool InputPressed; // 0x48(0x01)
	bool Ended; // 0x49(0x01)
	bool Started; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// ScriptStruct GameplayAbilities.*6b5f4136eb
// Size: 0x20 (Inherited: 0x00)
struct F*6b5f4136eb {
	enum class EGameplayAbilityActivationMode ActivationMode; // 0x00(0x01)
	char *bf54c144bd : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct F*7a56532c22 *0f32d41ecb; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.*cf29ee6019
// Size: 0x170 (Inherited: 0x00)
struct F*cf29ee6019 {
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

// ScriptStruct GameplayAbilities.*b1f6324a11
// Size: 0xc0 (Inherited: 0x00)
struct F*b1f6324a11 {
	float NormalizedMagnitude; // 0x00(0x04)
	float RawMagnitude; // 0x04(0x04)
	struct F*1734f92018 EffectContext; // 0x08(0x18)
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

// ScriptStruct GameplayAbilities.*e396ab1a1d
// Size: 0x78 (Inherited: 0x00)
struct F*e396ab1a1d {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct F*bce3f16e94> *f132af62b0; // 0x08(0x10)
	struct F*1734f92018 *3510ce77e8; // 0x18(0x18)
	struct FGameplayTagContainer *e3ecd39758; // 0x30(0x20)
	struct FGameplayTagContainer *37d7a77a2e; // 0x50(0x20)
	float Level; // 0x70(0x04)
	float AbilityLevel; // 0x74(0x04)
};

// ScriptStruct GameplayAbilities.*7d5406741e
// Size: 0xc0 (Inherited: 0xb0)
struct F*7d5406741e : F*6408361421 {
	struct TArray<struct F*8014afa64b> *713ec486fa; // 0xb0(0x10)
};

// ScriptStruct GameplayAbilities.*8014afa64b
// Size: 0x28 (Inherited: 0x0c)
struct F*8014afa64b : F*1eecbbbccc {
	char pad_C[0x4]; // 0x0c(0x04)
	struct F*7a56532c22 *7a56532c22; // 0x10(0x18)
};

// ScriptStruct GameplayAbilities.*8cf8a1b08c
// Size: 0x60 (Inherited: 0x00)
struct F*8cf8a1b08c {
	char pad_0[0x50]; // 0x00(0x50)
	struct UAbilitySystemComponent* Owner; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct GameplayAbilities.*6a5bcc596e
// Size: 0x38 (Inherited: 0x00)
struct F*6a5bcc596e {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Position; // 0x0c(0x04)
	float BlendTime; // 0x10(0x04)
	bool *0961d5e1b4; // 0x14(0x01)
	char *371993a2f3 : 1; // 0x15(0x01)
	char IsStopped : 1; // 0x15(0x01)
	char *d3e4577f90 : 1; // 0x15(0x01)
	char *ab98cca70d : 1; // 0x15(0x01)
	char *44f76eeea2 : 1; // 0x15(0x01)
	char pad_15_5 : 3; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct F*7a56532c22 *7a56532c22; // 0x18(0x18)
	bool *a4dbe8fb63; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayAbilities.*65b3785e23
// Size: 0xd0 (Inherited: 0xb0)
struct F*65b3785e23 : F*6408361421 {
	struct TArray<struct F*5d03bf87eb> *9fc52fbd33; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct UAbilitySystemComponent* Owner; // 0xc8(0x08)
};

// ScriptStruct GameplayAbilities.*5d03bf87eb
// Size: 0xf8 (Inherited: 0x0c)
struct F*5d03bf87eb : F*1eecbbbccc {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FGameplayTag GameplayCueTag; // 0x10(0x08)
	struct F*7a56532c22 *7a56532c22; // 0x18(0x18)
	struct F*b1f6324a11 Parameters; // 0x30(0xc0)
	bool *27f7e1d06a; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct GameplayAbilities.*8cd29561c5
// Size: 0x4e0 (Inherited: 0xb0)
struct F*8cd29561c5 : F*6408361421 {
	char pad_B0[0x80]; // 0xb0(0x80)
	struct TArray<struct F*b99ca913c4> *e3c146882f; // 0x130(0x10)
	char pad_140[0x370]; // 0x140(0x370)
	struct TArray<struct UGameplayEffect*> *68d6e5c41f; // 0x4b0(0x10)
	char pad_4C0[0x20]; // 0x4c0(0x20)
};

// ScriptStruct GameplayAbilities.*589af052e0
// Size: 0x30 (Inherited: 0x00)
struct F*589af052e0 {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	bool *f7581b2846; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*7a56532c22 *7a56532c22; // 0x10(0x18)
	struct UGameplayAbility* *58f62526b1; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*2f57e44964
// Size: 0xc8 (Inherited: 0xb0)
struct F*2f57e44964 : F*6408361421 {
	struct TArray<struct F*484c36e1b1> Items; // 0xb0(0x10)
	struct UAbilitySystemComponent* Owner; // 0xc0(0x08)
};

// ScriptStruct GameplayAbilities.*484c36e1b1
// Size: 0xe8 (Inherited: 0x0c)
struct F*484c36e1b1 : F*1eecbbbccc {
	struct F*488da1e323 Handle; // 0x0c(0x04)
	struct UGameplayAbility* Ability; // 0x10(0x08)
	int32 Level; // 0x18(0x04)
	int32 *08f24c2e35; // 0x1c(0x04)
	struct UObject* SourceObject; // 0x20(0x08)
	bool *a6cc7c5962; // 0x28(0x01)
	char InputPressed : 1; // 0x29(0x01)
	char *24e8ce6df4 : 1; // 0x29(0x01)
	char *c36b5a7cb9 : 1; // 0x29(0x01)
	char *a957d01fcd : 1; // 0x29(0x01)
	char pad_29_4 : 4; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct F*6b5f4136eb *2ef510726c; // 0x30(0x20)
	struct FGameplayTagContainer *422e498ef4; // 0x50(0x20)
	struct TArray<struct UGameplayAbility*> *cde5e8ee4d; // 0x70(0x10)
	struct TArray<struct UGameplayAbility*> *8f746abec7; // 0x80(0x10)
	struct F*c3cafe0f98 *dd5c6c2c85; // 0x90(0x08)
	char pad_98[0x50]; // 0x98(0x50)
};

// ScriptStruct GameplayAbilities.*b4a65db0a7
// Size: 0x10 (Inherited: 0x00)
struct F*b4a65db0a7 {
	struct UClass* Attributes; // 0x00(0x08)
	struct UDataTable* *c282ad6aac; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*0e017f1750
// Size: 0x58 (Inherited: 0x58)
struct F*0e017f1750 : FIndexedCurve {
};

// ScriptStruct GameplayAbilities.*e5caa9e23f
// Size: 0x08 (Inherited: 0x00)
struct F*e5caa9e23f {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*bfecc07a4f
// Size: 0x30 (Inherited: 0x08)
struct F*bfecc07a4f : FTableRowBase {
	float BaseValue; // 0x08(0x04)
	float MinValue; // 0x0c(0x04)
	float MaxValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *66848476d1; // 0x18(0x10)
	bool bCanStack; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GameplayAbilities.*63ed072590
// Size: 0x10 (Inherited: 0x00)
struct F*63ed072590 {
	char pad_0[0x8]; // 0x00(0x08)
	float BaseValue; // 0x08(0x04)
	float CurrentValue; // 0x0c(0x04)
};

// ScriptStruct GameplayAbilities.*70b7e61940
// Size: 0x20 (Inherited: 0x00)
struct F*70b7e61940 {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct F*4b683930f4> *690663b228; // 0x10(0x10)
};

// ScriptStruct GameplayAbilities.*4b683930f4
// Size: 0x30 (Inherited: 0x00)
struct F*4b683930f4 {
	struct FGameplayTag *7547c91627; // 0x00(0x08)
	struct UProperty* *ffb6c07725; // 0x08(0x08)
	struct FName PropertyName; // 0x10(0x08)
	struct FGuid *b53cc00b30; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*d0da2b61b8
// Size: 0x70 (Inherited: 0x00)
struct F*d0da2b61b8 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* *755067becc; // 0x10(0x08)
	struct UGameplayAbility* *9a083496e7; // 0x18(0x08)
	struct UGameplayAbility* *8344107348; // 0x20(0x08)
	int32 AbilityLevel; // 0x28(0x04)
	struct UObject* SourceObject; // 0x2c(0x08)
	struct UAbilitySystemComponent* *14dadec423; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct AActor*> Actors; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct FVector WorldOrigin; // 0x60(0x0c)
	char *85eec00f98 : 1; // 0x6c(0x01)
	char *10440e3e81 : 1; // 0x6c(0x01)
	char pad_6C_2 : 6; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct GameplayAbilities.*37d3a84786
// Size: 0x38 (Inherited: 0x00)
struct F*37d3a84786 {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	enum class EGameplayModOp *c8f058e63b; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Magnitude; // 0x24(0x04)
	struct F*c3cafe0f98 Handle; // 0x28(0x08)
	bool IsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// Size: 0x01 (Inherited: 0x00)
struct FGameplayModEvaluationChannelSettings {
	enum class EGameplayModEvaluationChannel Channel; // 0x00(0x01)
};

// ScriptStruct GameplayAbilities.*e6413eb31f
// Size: 0x98 (Inherited: 0x08)
struct F*e6413eb31f : F*92074be1af {
	struct FHitResult HitResult; // 0x08(0x88)
	bool *576aa6e8bf; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct GameplayAbilities.*92074be1af
// Size: 0x08 (Inherited: 0x00)
struct F*92074be1af {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*5a2476a5db
// Size: 0x90 (Inherited: 0x08)
struct F*5a2476a5db : F*92074be1af {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*a4827abec5 SourceLocation; // 0x10(0x70)
	struct TArray<struct AActor*> *2241637a50; // 0x80(0x10)
};

// ScriptStruct GameplayAbilities.*a4827abec5
// Size: 0x70 (Inherited: 0x00)
struct F*a4827abec5 {
	char pad_0[0x10]; // 0x00(0x10)
	enum class *c3d4e859b5 LocationType; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FTransform LiteralTransform; // 0x20(0x30)
	struct AActor* SourceActor; // 0x50(0x08)
	struct UMeshComponent* SourceComponent; // 0x58(0x08)
	struct UGameplayAbility* SourceAbility; // 0x60(0x08)
	struct FName SourceSocketName; // 0x68(0x08)
};

// ScriptStruct GameplayAbilities.*4b06051498
// Size: 0xf0 (Inherited: 0x08)
struct F*4b06051498 : F*92074be1af {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*a4827abec5 SourceLocation; // 0x10(0x70)
	struct F*a4827abec5 TargetLocation; // 0x80(0x70)
};

// ScriptStruct GameplayAbilities.*df1717e086
// Size: 0x08 (Inherited: 0x00)
struct F*df1717e086 {
	struct F*488da1e323 *9f7a37816c; // 0x00(0x04)
	int32 *711e706f38; // 0x04(0x04)
};

// ScriptStruct GameplayAbilities.*b69a08f831
// Size: 0x18 (Inherited: 0x00)
struct F*b69a08f831 {
	struct UGameplayTask* *b9fe48fcc4; // 0x00(0x08)
	struct FString Message; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.*99bfec30fd
// Size: 0x10 (Inherited: 0x00)
struct F*99bfec30fd {
	struct UGameplayAbility* *df3f1a8899; // 0x00(0x08)
	struct F*488da1e323 *0a01316271; // 0x08(0x04)
	bool *8fffc80bdb; // 0x0c(0x01)
	bool *d6ba4ab0d5; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct GameplayAbilities.*350e812946
// Size: 0x48 (Inherited: 0x00)
struct F*350e812946 {
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

// ScriptStruct GameplayAbilities.*f9d711e521
// Size: 0x20 (Inherited: 0x00)
struct F*f9d711e521 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* SelfActor; // 0x08(0x08)
	struct UClass* RequiredActorClass; // 0x10(0x08)
	enum class *94cf61726b SelfFilter; // 0x18(0x01)
	bool bReverseFilter; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct GameplayAbilities.*59826c0d47
// Size: 0x2a0 (Inherited: 0x00)
struct F*59826c0d47 {
	char pad_0[0x290]; // 0x00(0x290)
	struct UAbilitySystemComponent* Owner; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCueTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayCueTag {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*b1a65286ff
// Size: 0xa0 (Inherited: 0x00)
struct F*b1a65286ff {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct GameplayAbilities.*b39f17e9ff
// Size: 0x60 (Inherited: 0x00)
struct F*b39f17e9ff {
	struct FGameplayTagContainer CombinedTags; // 0x00(0x20)
	struct FGameplayTagContainer Added; // 0x20(0x20)
	struct FGameplayTagContainer Removed; // 0x40(0x20)
};

// ScriptStruct GameplayAbilities.*2d621db336
// Size: 0x48 (Inherited: 0x00)
struct F*2d621db336 {
	struct FGameplayAttribute *8e86530ed9; // 0x00(0x20)
	float *8550f0c750; // 0x20(0x04)
	float *9bb5b67566; // 0x24(0x04)
	struct FGameplayTagContainer GameplayCueTags; // 0x28(0x20)
};

// ScriptStruct GameplayAbilities.*99fdd28db6
// Size: 0x2e0 (Inherited: 0x00)
struct F*99fdd28db6 {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	enum class EGameplayModOp *c8f058e63b; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FScalableFloat Magnitude; // 0x28(0x30)
	struct FGameplayEffectModifierMagnitude *d3ed4ce957; // 0x58(0x200)
	struct FGameplayModEvaluationChannelSettings *c686f1fc0a; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct F*db129c0b81 *3284c48147; // 0x260(0x40)
	struct F*db129c0b81 TargetTags; // 0x2a0(0x40)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x200 (Inherited: 0x00)
struct FGameplayEffectModifierMagnitude {
	enum class EGameplayEffectMagnitudeCalculation *d55216ab3b; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FScalableFloat *6e16a468e4; // 0x08(0x30)
	struct FAttributeBasedFloat *6787f70b41; // 0x38(0x110)
	struct F*dc706b1f61 *a1ab9f98f7; // 0x148(0xa8)
	struct F*083104ab8b *1b4502d5b8; // 0x1f0(0x10)
};

// ScriptStruct GameplayAbilities.*083104ab8b
// Size: 0x10 (Inherited: 0x00)
struct F*083104ab8b {
	struct FName *364397752a; // 0x00(0x08)
	struct FGameplayTag *ce0511bc6d; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*dc706b1f61
// Size: 0xa8 (Inherited: 0x00)
struct F*dc706b1f61 {
	struct UClass* *d83cc4411a; // 0x00(0x08)
	struct FScalableFloat *c937175656; // 0x08(0x30)
	struct FScalableFloat *90fa8a43a5; // 0x38(0x30)
	struct FScalableFloat *19c39ac80b; // 0x68(0x30)
	struct FCurveTableRowHandle *45336869fc; // 0x98(0x10)
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// Size: 0x110 (Inherited: 0x00)
struct FAttributeBasedFloat {
	struct FScalableFloat *c937175656; // 0x00(0x30)
	struct FScalableFloat *90fa8a43a5; // 0x30(0x30)
	struct FScalableFloat *19c39ac80b; // 0x60(0x30)
	struct F*9865947c9e *39dfcfc49a; // 0x90(0x28)
	struct FCurveTableRowHandle *c5fe48add1; // 0xb8(0x10)
	enum class EAttributeBasedFloatCalculationType *3c4212d881; // 0xc8(0x01)
	enum class EGameplayModEvaluationChannel *058a3eabcf; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct FGameplayTagContainer *d722458d26; // 0xd0(0x20)
	struct FGameplayTagContainer *0f638e1faa; // 0xf0(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x58 (Inherited: 0x00)
struct FGameplayEffectExecutionDefinition {
	struct UClass* *c1ffecbecf; // 0x00(0x08)
	struct FGameplayTagContainer *9c4619fad6; // 0x08(0x20)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> *b18c1b5f0b; // 0x28(0x10)
	struct TArray<struct UClass*> ConditionalGameplayEffectClasses; // 0x38(0x10)
	struct TArray<struct F*fc501160eb> *f79f89effd; // 0x48(0x10)
};

// ScriptStruct GameplayAbilities.*fc501160eb
// Size: 0x28 (Inherited: 0x00)
struct F*fc501160eb {
	struct UClass* EffectClass; // 0x00(0x08)
	struct FGameplayTagContainer RequiredSourceTags; // 0x08(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x2c0 (Inherited: 0x00)
struct FGameplayEffectExecutionScopedModifierInfo {
	struct F*9865947c9e *bec99cfac5; // 0x00(0x28)
	struct FGameplayTag *1772909ebe; // 0x28(0x08)
	enum class EGameplayEffectScopedModifierAggregatorType *6a3fb032cf; // 0x30(0x01)
	enum class EGameplayModOp *c8f058e63b; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FGameplayEffectModifierMagnitude *d3ed4ce957; // 0x38(0x200)
	struct FGameplayModEvaluationChannelSettings *c686f1fc0a; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct F*db129c0b81 *3284c48147; // 0x240(0x40)
	struct F*db129c0b81 TargetTags; // 0x280(0x40)
};

// ScriptStruct GameplayAbilities.*8a876f8a0d
// Size: 0x10 (Inherited: 0x00)
struct F*8a876f8a0d {
	struct FGameplayTag *253b187846; // 0x00(0x08)
	enum class *536bc0c7a1 *fb0750011f; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct GameplayAbilities.*9c3711ab7d
// Size: 0x10 (Inherited: 0x00)
struct F*9c3711ab7d {
	struct TArray<struct UScriptStruct*> *749d36fa0b; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*86d5f30aa7
// Size: 0x0c (Inherited: 0x00)
struct F*86d5f30aa7 {
	struct FVector AOEScale; // 0x00(0x0c)
};

// ScriptStruct GameplayAbilities.*5084f0d16d
// Size: 0x10 (Inherited: 0x00)
struct F*5084f0d16d {
	enum class *17996bd864 Command; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* *6591f27099; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*9bd9f27c17
// Size: 0x68 (Inherited: 0x00)
struct F*9bd9f27c17 {
	char pad_0[0x50]; // 0x00(0x50)
	struct TArray<struct UClass*> *6dbfca33f4; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct GameplayAbilities.*3692018795
// Size: 0x178 (Inherited: 0x00)
struct F*3692018795 {
	char pad_0[0x18]; // 0x00(0x18)
	struct F*7a56532c22 *7a56532c22; // 0x18(0x18)
	enum class *62527a957a *133fd12348; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAbilitySystemComponent* *df6653e9b6; // 0x38(0x08)
	struct F*e396ab1a1d *b6f5e70714; // 0x40(0x78)
	struct F*b1f6324a11 *fc8ae63385; // 0xb8(0xc0)
};

// ScriptStruct GameplayAbilities.*679116f340
// Size: 0x80 (Inherited: 0x00)
struct F*679116f340 {
	struct TArray<struct F*6f761b951d> *adbd9f912e; // 0x00(0x10)
	struct TMap<struct FName, struct F*1014bda793> *9fe1bbce41; // 0x10(0x50)
	struct U*0210413157* *a15879089e; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)
};

// ScriptStruct GameplayAbilities.*1014bda793
// Size: 0x04 (Inherited: 0x00)
struct F*1014bda793 {
	int32 Index; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.*6f761b951d
// Size: 0x78 (Inherited: 0x00)
struct F*6f761b951d {
	struct TArray<struct F*673e564c89> Links; // 0x00(0x10)
	struct F*1014bda793 *6008064d50; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FGameplayTag *14fdd2b180; // 0x18(0x08)
	struct FName *9e2e958bff; // 0x20(0x08)
	char pad_28[0x50]; // 0x28(0x50)
};

// ScriptStruct GameplayAbilities.*673e564c89
// Size: 0x18 (Inherited: 0x00)
struct F*673e564c89 {
	struct U*3e923d71b5* *401e80d14b; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.*319d14b701
// Size: 0xb0 (Inherited: 0x00)
struct F*319d14b701 {
	struct TArray<struct FString> Paths; // 0x00(0x10)
	char pad_10[0x80]; // 0x10(0x80)
	struct UObjectLibrary* *e1a7e3ff76; // 0x90(0x08)
	struct UObjectLibrary* *dc6e471d8b; // 0x98(0x08)
	struct U*e0b4ea48b3* *c9f1d3ebbd; // 0xa0(0x08)
	char pad_A8[0x4]; // 0xa8(0x04)
	bool *9db63a52fd; // 0xac(0x01)
	bool *d060922e68; // 0xad(0x01)
	bool *331f8b1957; // 0xae(0x01)
	bool *7f2afba96c; // 0xaf(0x01)
};

// ScriptStruct GameplayAbilities.*1e473ac6df
// Size: 0x28 (Inherited: 0x00)
struct F*1e473ac6df {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
	struct FStringAssetReference *fa0c400f26; // 0x08(0x10)
	struct UClass* *15f1e4971f; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct GameplayAbilities.*fd99a7d3bb
// Size: 0x18 (Inherited: 0x00)
struct F*fd99a7d3bb {
	struct TArray<struct F*37d3a84786> *d219a0ede5; // 0x00(0x10)
	char *a1e9afc1ff : 1; // 0x10(0x01)
	char *8565e196f7 : 1; // 0x10(0x01)
	char *de65a828b9 : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayAbilities.*82d9967079
// Size: 0xa8 (Inherited: 0x00)
struct F*82d9967079 {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct GameplayAbilities.*90304cc5c5
// Size: 0x50 (Inherited: 0x00)
struct F*90304cc5c5 {
	struct F*28af7222e6 Positive; // 0x00(0x28)
	struct F*28af7222e6 *342b401813; // 0x28(0x28)
};

// ScriptStruct GameplayAbilities.*28af7222e6
// Size: 0x28 (Inherited: 0x00)
struct F*28af7222e6 {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UClass* *ecbf71330b; // 0x08(0x08)
	struct TArray<struct UClass*> *54914015db; // 0x10(0x10)
	int32 *b0b729394d; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};


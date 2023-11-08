// Enum GameplayAbilities.*e27f348503
enum class *e27f348503 : uint8 {
	*e80ecefad7,
	*8962ac63ea,
	*c255a5d017,
	*c52ed1112f,
	*e27f348503_MAX,
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

// Enum GameplayAbilities.*4b9452e846
enum class *4b9452e846 : uint8 {
	*41bbd1abe5,
	*00f5ea60e1,
	*ead64a22ad,
	*4b9452e846_MAX,
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

// Enum GameplayAbilities.*d22e3b8f23
enum class *d22e3b8f23 : uint8 {
	*503aa57ded,
	*153ea29fa7,
	*f65764577d,
	*63548e546c,
	*d22e3b8f23_MAX,
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

// Enum GameplayAbilities.*dd5819d074
enum class *dd5819d074 : uint8 {
	*25cfce8c4e,
	*0cbcbc8a9f,
	*276738feca,
	*adb8e2d037,
	*dd5819d074_MAX,
};

// Enum GameplayAbilities.*89526f7527
enum class *89526f7527 : uint8 {
	*bba60147b1,
	*3f0cbb368c,
	*b76c0938a5,
	*89526f7527_MAX,
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

// Enum GameplayAbilities.*3af1ba49c3
enum class *3af1ba49c3 : uint8 {
	*3fc8aac70b,
	*49af9bf6ed,
	*d0902f25b2,
	*ba9ed3c708,
	*3af1ba49c3_MAX,
};

// Enum GameplayAbilities.*130052dd35
enum class *130052dd35 : uint8 {
	*3a87bf9e0d,
	*c934f92b00,
	*016166b6f7,
	*55e78ae687,
	*130052dd35_MAX,
};

// Enum GameplayAbilities.*69719bb8fb
enum class *69719bb8fb : uint8 {
	*a831f09b3a,
	*b0bdc01b2d,
	*c69e97f964,
	*fcf539eff7,
	*69719bb8fb_MAX,
};

// Enum GameplayAbilities.*f66868d72e
enum class *f66868d72e : uint8 {
	*07e2aab019,
	*1b12521127,
	*68d545adbe,
	*df3b34850f,
	*f66868d72e_MAX,
};

// Enum GameplayAbilities.*88c1ff0035
enum class *88c1ff0035 : uint8 {
	*0b24a725a1,
	*a831f09b3a,
	*c218110c72,
	*88c1ff0035_MAX,
};

// Enum GameplayAbilities.*6ce6473375
enum class *6ce6473375 : uint8 {
	*f552fbf15b,
	*fb02afeabf,
	*0566f1e85c,
	*6ce6473375_MAX,
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

// Enum GameplayAbilities.*21650074e5
enum class *21650074e5 : uint8 {
	*ca11999b3e,
	*fabb227c87,
	*9ad8f0dec0,
	*8a9f5cb3fe,
	*21650074e5_MAX,
};

// Enum GameplayAbilities.*bf2661327b
enum class *bf2661327b : uint8 {
	*9f38775b6a,
	*87e6aaa65d,
	*4a08dfc048,
	*6f7a2e5329,
	*bf2661327b_MAX,
};

// Enum GameplayAbilities.*701973b44c
enum class *701973b44c : uint8 {
	*1c66a109d5,
	*a5eeb7d0d1,
	*5da0735b23,
	*f20eb95d4b,
	*701973b44c_MAX,
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

// Enum GameplayAbilities.*5f85ec94c1
enum class *5f85ec94c1 : uint8 {
	*9106aaa136,
	*65509c87b1,
	*4c430ba512,
	*82c78ad8e6,
	*9ac544a3ff,
	*d375f3c1cd,
	*05fbe3d402,
	*e21740a008,
	*7903b16b09,
	*246a0578cc,
	*5f85ec94c1_MAX,
};

// Enum GameplayAbilities.*7b42a2a587
enum class *7b42a2a587 : uint8 {
	*1ea498aafb,
	*693d12f35d,
	*33b4d4e604,
	*7b42a2a587_MAX,
};

// ScriptStruct GameplayAbilities.*9d96cfa5bb
// Size: 0x40 (Inherited: 0x00)
struct F*9d96cfa5bb {
	struct FGameplayTagContainer RequireTags; // 0x00(0x20)
	struct FGameplayTagContainer IgnoreTags; // 0x20(0x20)
};

// ScriptStruct GameplayAbilities.*51547d5d37
// Size: 0x10 (Inherited: 0x00)
struct F*51547d5d37 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*840e447bec
// Size: 0x08 (Inherited: 0x00)
struct F*840e447bec {
	int32 Handle; // 0x00(0x04)
	bool *b553e7f87d; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GameplayAbilities.*16a3c4107c
// Size: 0x10 (Inherited: 0x00)
struct F*16a3c4107c {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*a8e05f09d3
// Size: 0xb0 (Inherited: 0x00)
struct F*a8e05f09d3 {
	struct FGameplayTag EventTag; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* Target; // 0x10(0x08)
	struct UObject* OptionalObject; // 0x18(0x08)
	struct UObject* OptionalObject2; // 0x20(0x08)
	struct F*c4e5556a43 ContextHandle; // 0x28(0x18)
	struct FGameplayTagContainer InstigatorTags; // 0x40(0x20)
	struct FGameplayTagContainer TargetTags; // 0x60(0x20)
	float EventMagnitude; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct F*4d4358ec07 TargetData; // 0x88(0x28)
};

// ScriptStruct GameplayAbilities.*4d4358ec07
// Size: 0x28 (Inherited: 0x00)
struct F*4d4358ec07 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct GameplayAbilities.*c4e5556a43
// Size: 0x18 (Inherited: 0x00)
struct F*c4e5556a43 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct GameplayAbilities.*caaf369535
// Size: 0x530 (Inherited: 0x0c)
struct F*caaf369535 : F*fb4b8581ea {
	char pad_C[0xc]; // 0x0c(0x0c)
	struct F*4b8060af04 Spec; // 0x18(0x298)
	struct F*7dd822a454 *7dd822a454; // 0x2b0(0x18)
	float *87df4cf288; // 0x2c8(0x04)
	float *3277222f36; // 0x2cc(0x04)
	float StartWorldTime; // 0x2d0(0x04)
	bool bIsInhibited; // 0x2d4(0x01)
	char pad_2D5[0x25b]; // 0x2d5(0x25b)
};

// ScriptStruct GameplayAbilities.*7dd822a454
// Size: 0x18 (Inherited: 0x00)
struct F*7dd822a454 {
	int16 Current; // 0x00(0x02)
	int16 Base; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct UPackageMap* *18b8d39624; // 0x08(0x08)
	bool *e5abf336b1; // 0x10(0x01)
	bool *aa6ef2460e; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct GameplayAbilities.*4b8060af04
// Size: 0x298 (Inherited: 0x00)
struct F*4b8060af04 {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct F*9c928f3e05> *67d87ebd9f; // 0x08(0x10)
	struct F*8c3ddd875a *a25b095d68; // 0x18(0x28)
	char pad_40[0x10]; // 0x40(0x10)
	float Duration; // 0x50(0x04)
	float Period; // 0x54(0x04)
	float *87000027da; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct F*0d8bdf658c *5448f2fda9; // 0x60(0x88)
	struct F*0d8bdf658c *4c6a708143; // 0xe8(0x88)
	struct FGameplayTagContainer *c3dd80b65e; // 0x170(0x20)
	struct FGameplayTagContainer *39cc65b976; // 0x190(0x20)
	struct TArray<struct F*32ea26a3fa> Modifiers; // 0x1b0(0x10)
	int32 StackCount; // 0x1c0(0x04)
	char *09d75b94fa : 1; // 0x1c4(0x01)
	char *e719d836af : 1; // 0x1c4(0x01)
	char *63089a97d4 : 1; // 0x1c4(0x01)
	char pad_1C4_3 : 5; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
	struct TArray<struct F*c151d59839> *94a8803cde; // 0x1c8(0x10)
	char pad_1D8[0xa0]; // 0x1d8(0xa0)
	struct F*c4e5556a43 *4e85be346f; // 0x278(0x18)
	float Level; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
};

// ScriptStruct GameplayAbilities.*c151d59839
// Size: 0xa0 (Inherited: 0x00)
struct F*c151d59839 {
	struct UClass* Ability; // 0x00(0x08)
	struct FScalableFloat *6dbea1e008; // 0x08(0x30)
	int32 *8441cee5d9; // 0x38(0x04)
	enum class *e27f348503 *04c9c25600; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UObject* SourceObject; // 0x40(0x08)
	char pad_48[0x50]; // 0x48(0x50)
	struct F*1e33a082d1 *549b8fb85c; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct GameplayAbilities.*1e33a082d1
// Size: 0x04 (Inherited: 0x00)
struct F*1e33a082d1 {
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

// ScriptStruct GameplayAbilities.*32ea26a3fa
// Size: 0x04 (Inherited: 0x00)
struct F*32ea26a3fa {
	float *dcf1a5fd8a; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.*0d8bdf658c
// Size: 0x88 (Inherited: 0x00)
struct F*0d8bdf658c {
	struct FGameplayTagContainer *0530aaa74c; // 0x00(0x20)
	struct FGameplayTagContainer *9d8af0e83b; // 0x20(0x20)
	struct FGameplayTagContainer *729382eb89; // 0x40(0x20)
	char pad_60[0x28]; // 0x60(0x28)
};

// ScriptStruct GameplayAbilities.*8c3ddd875a
// Size: 0x28 (Inherited: 0x00)
struct F*8c3ddd875a {
	struct TArray<struct F*514a15e6b2> *fe6a0a7016; // 0x00(0x10)
	struct TArray<struct F*514a15e6b2> *d42a8c1be7; // 0x10(0x10)
	bool *4bf604289f; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayAbilities.*514a15e6b2
// Size: 0x38 (Inherited: 0x00)
struct F*514a15e6b2 {
	struct F*62d8b8df42 *86956e38d0; // 0x00(0x28)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct GameplayAbilities.*62d8b8df42
// Size: 0x28 (Inherited: 0x00)
struct F*62d8b8df42 {
	struct FGameplayAttribute *b96a259fc4; // 0x00(0x20)
	enum class EGameplayEffectAttributeCaptureSource *e1a22e8bc6; // 0x20(0x01)
	bool *f611a055e7; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// Size: 0x20 (Inherited: 0x00)
struct FGameplayAttribute {
	struct FString AttributeName; // 0x00(0x10)
	struct UProperty* Attribute; // 0x10(0x08)
	struct UStruct* *07c4fd21bc; // 0x18(0x08)
};

// ScriptStruct GameplayAbilities.*9c928f3e05
// Size: 0x28 (Inherited: 0x00)
struct F*9c928f3e05 {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	float *e876a29bcb; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GameplayAbilities.*de9d9eb166
// Size: 0x20 (Inherited: 0x00)
struct F*de9d9eb166 {
	bool bPrematureRemoval; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 StackCount; // 0x04(0x04)
	struct F*c4e5556a43 EffectContext; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.*2c0bbebf0c
// Size: 0x20 (Inherited: 0x00)
struct F*2c0bbebf0c {
	enum class EGameplayAbilityActivationMode ActivationMode; // 0x00(0x01)
	char *a849c3f1d2 : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct F*7dd822a454 *90c5dd29f6; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.*e6947833dd
// Size: 0x170 (Inherited: 0x00)
struct F*e6947833dd {
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

// ScriptStruct GameplayAbilities.*1bf833ec5a
// Size: 0x50 (Inherited: 0x00)
struct F*1bf833ec5a {
	struct F*1e33a082d1 *74c8081c8d; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*7dd822a454 *7dd822a454; // 0x08(0x18)
	struct F*4d4358ec07 *3d50d840b7; // 0x20(0x28)
	bool InputPressed; // 0x48(0x01)
	bool Ended; // 0x49(0x01)
	bool Started; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// ScriptStruct GameplayAbilities.*6f1c5535b6
// Size: 0xc0 (Inherited: 0x00)
struct F*6f1c5535b6 {
	float NormalizedMagnitude; // 0x00(0x04)
	float RawMagnitude; // 0x04(0x04)
	struct F*c4e5556a43 EffectContext; // 0x08(0x18)
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

// ScriptStruct GameplayAbilities.*8fc18b241b
// Size: 0x78 (Inherited: 0x00)
struct F*8fc18b241b {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct F*9c928f3e05> *67d87ebd9f; // 0x08(0x10)
	struct F*c4e5556a43 *4e85be346f; // 0x18(0x18)
	struct FGameplayTagContainer *ef6049ab63; // 0x30(0x20)
	struct FGameplayTagContainer *cdbb337636; // 0x50(0x20)
	float Level; // 0x70(0x04)
	float AbilityLevel; // 0x74(0x04)
};

// ScriptStruct GameplayAbilities.*581546c6a7
// Size: 0xc0 (Inherited: 0xb0)
struct F*581546c6a7 : F*6c20ef31e6 {
	struct TArray<struct F*2cc88e1408> *4ec05730c8; // 0xb0(0x10)
};

// ScriptStruct GameplayAbilities.*2cc88e1408
// Size: 0x28 (Inherited: 0x0c)
struct F*2cc88e1408 : F*fb4b8581ea {
	char pad_C[0x4]; // 0x0c(0x04)
	struct F*7dd822a454 *7dd822a454; // 0x10(0x18)
};

// ScriptStruct GameplayAbilities.*7e29f4220b
// Size: 0x60 (Inherited: 0x00)
struct F*7e29f4220b {
	char pad_0[0x50]; // 0x00(0x50)
	struct UAbilitySystemComponent* Owner; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct GameplayAbilities.*b6c0198f0a
// Size: 0x38 (Inherited: 0x00)
struct F*b6c0198f0a {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Position; // 0x0c(0x04)
	float BlendTime; // 0x10(0x04)
	bool *fe7d775251; // 0x14(0x01)
	char *2802f043b8 : 1; // 0x15(0x01)
	char IsStopped : 1; // 0x15(0x01)
	char *0edb3fa10e : 1; // 0x15(0x01)
	char *e854c3e4d6 : 1; // 0x15(0x01)
	char *db7b09b1c4 : 1; // 0x15(0x01)
	char pad_15_5 : 3; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct F*7dd822a454 *7dd822a454; // 0x18(0x18)
	bool *fb30e78e79; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayAbilities.*11a3e9312d
// Size: 0xd0 (Inherited: 0xb0)
struct F*11a3e9312d : F*6c20ef31e6 {
	struct TArray<struct F*ac2ecab4ad> *ba2170841e; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct UAbilitySystemComponent* Owner; // 0xc8(0x08)
};

// ScriptStruct GameplayAbilities.*ac2ecab4ad
// Size: 0xf8 (Inherited: 0x0c)
struct F*ac2ecab4ad : F*fb4b8581ea {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FGameplayTag GameplayCueTag; // 0x10(0x08)
	struct F*7dd822a454 *7dd822a454; // 0x18(0x18)
	struct F*6f1c5535b6 Parameters; // 0x30(0xc0)
	bool *18eeca803d; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct GameplayAbilities.*20f1909a08
// Size: 0x4e0 (Inherited: 0xb0)
struct F*20f1909a08 : F*6c20ef31e6 {
	char pad_B0[0x80]; // 0xb0(0x80)
	struct TArray<struct F*caaf369535> *62c3bf1d07; // 0x130(0x10)
	char pad_140[0x370]; // 0x140(0x370)
	struct TArray<struct UGameplayEffect*> *a916742dcc; // 0x4b0(0x10)
	char pad_4C0[0x20]; // 0x4c0(0x20)
};

// ScriptStruct GameplayAbilities.*614399b5bb
// Size: 0x30 (Inherited: 0x00)
struct F*614399b5bb {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	bool *c395fc854e; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*7dd822a454 *7dd822a454; // 0x10(0x18)
	struct UGameplayAbility* *1ee26dd7ea; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*794a1eb94d
// Size: 0xc8 (Inherited: 0xb0)
struct F*794a1eb94d : F*6c20ef31e6 {
	struct TArray<struct F*82d916d273> Items; // 0xb0(0x10)
	struct UAbilitySystemComponent* Owner; // 0xc0(0x08)
};

// ScriptStruct GameplayAbilities.*82d916d273
// Size: 0xe8 (Inherited: 0x0c)
struct F*82d916d273 : F*fb4b8581ea {
	struct F*1e33a082d1 Handle; // 0x0c(0x04)
	struct UGameplayAbility* Ability; // 0x10(0x08)
	int32 Level; // 0x18(0x04)
	int32 *8441cee5d9; // 0x1c(0x04)
	struct UObject* SourceObject; // 0x20(0x08)
	bool *1efa0ae43f; // 0x28(0x01)
	char InputPressed : 1; // 0x29(0x01)
	char *9fc288ca9d : 1; // 0x29(0x01)
	char *c392cbbf0f : 1; // 0x29(0x01)
	char *2c7810899e : 1; // 0x29(0x01)
	char pad_29_4 : 4; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct F*2c0bbebf0c *b9e9b421b9; // 0x30(0x20)
	struct FGameplayTagContainer *820bfa5155; // 0x50(0x20)
	struct TArray<struct UGameplayAbility*> *6d84749efc; // 0x70(0x10)
	struct TArray<struct UGameplayAbility*> *1613cc643c; // 0x80(0x10)
	struct F*840e447bec *bc7df585fa; // 0x90(0x08)
	char pad_98[0x50]; // 0x98(0x50)
};

// ScriptStruct GameplayAbilities.*45e5d348e0
// Size: 0x10 (Inherited: 0x00)
struct F*45e5d348e0 {
	struct UClass* Attributes; // 0x00(0x08)
	struct UDataTable* *836b9a13a6; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*04ff136795
// Size: 0x58 (Inherited: 0x58)
struct F*04ff136795 : FIndexedCurve {
};

// ScriptStruct GameplayAbilities.*7adcf5db04
// Size: 0x08 (Inherited: 0x00)
struct F*7adcf5db04 {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*ed23aaf2c1
// Size: 0x30 (Inherited: 0x08)
struct F*ed23aaf2c1 : FTableRowBase {
	float BaseValue; // 0x08(0x04)
	float MinValue; // 0x0c(0x04)
	float MaxValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *c9635f8775; // 0x18(0x10)
	bool bCanStack; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GameplayAbilities.*0183172b62
// Size: 0x10 (Inherited: 0x00)
struct F*0183172b62 {
	char pad_0[0x8]; // 0x00(0x08)
	float BaseValue; // 0x08(0x04)
	float CurrentValue; // 0x0c(0x04)
};

// ScriptStruct GameplayAbilities.*2b1c24105c
// Size: 0x20 (Inherited: 0x00)
struct F*2b1c24105c {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct F*0201a7ae15> *2ef99267b4; // 0x10(0x10)
};

// ScriptStruct GameplayAbilities.*0201a7ae15
// Size: 0x30 (Inherited: 0x00)
struct F*0201a7ae15 {
	struct FGameplayTag *3df47a9576; // 0x00(0x08)
	struct UProperty* *e2c116e80c; // 0x08(0x08)
	struct FName PropertyName; // 0x10(0x08)
	struct FGuid *5ba5324fc8; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*3e773a7628
// Size: 0x70 (Inherited: 0x00)
struct F*3e773a7628 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* *09329c3a62; // 0x10(0x08)
	struct UGameplayAbility* *5b17435464; // 0x18(0x08)
	struct UGameplayAbility* *e3450bd520; // 0x20(0x08)
	int32 AbilityLevel; // 0x28(0x04)
	struct UObject* SourceObject; // 0x2c(0x08)
	struct UAbilitySystemComponent* *7532bbe8b3; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct AActor*> Actors; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct FVector WorldOrigin; // 0x60(0x0c)
	char *0550ac8520 : 1; // 0x6c(0x01)
	char *63dab76d29 : 1; // 0x6c(0x01)
	char pad_6C_2 : 6; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct GameplayAbilities.*4e67a6c5ab
// Size: 0x38 (Inherited: 0x00)
struct F*4e67a6c5ab {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	enum class EGameplayModOp *1c26108917; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Magnitude; // 0x24(0x04)
	struct F*840e447bec Handle; // 0x28(0x08)
	bool IsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// Size: 0x01 (Inherited: 0x00)
struct FGameplayModEvaluationChannelSettings {
	enum class EGameplayModEvaluationChannel Channel; // 0x00(0x01)
};

// ScriptStruct GameplayAbilities.*9741fb9941
// Size: 0x98 (Inherited: 0x08)
struct F*9741fb9941 : F*fd19c41f97 {
	struct FHitResult HitResult; // 0x08(0x88)
	bool *6445000ea0; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct GameplayAbilities.*fd19c41f97
// Size: 0x08 (Inherited: 0x00)
struct F*fd19c41f97 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*a692cebf23
// Size: 0x90 (Inherited: 0x08)
struct F*a692cebf23 : F*fd19c41f97 {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*b7eaaf2a6d SourceLocation; // 0x10(0x70)
	struct TArray<struct AActor*> *cf0785cbf4; // 0x80(0x10)
};

// ScriptStruct GameplayAbilities.*b7eaaf2a6d
// Size: 0x70 (Inherited: 0x00)
struct F*b7eaaf2a6d {
	char pad_0[0x10]; // 0x00(0x10)
	enum class *d22e3b8f23 LocationType; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FTransform LiteralTransform; // 0x20(0x30)
	struct AActor* SourceActor; // 0x50(0x08)
	struct UMeshComponent* SourceComponent; // 0x58(0x08)
	struct UGameplayAbility* SourceAbility; // 0x60(0x08)
	struct FName SourceSocketName; // 0x68(0x08)
};

// ScriptStruct GameplayAbilities.*ca7850279d
// Size: 0xf0 (Inherited: 0x08)
struct F*ca7850279d : F*fd19c41f97 {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*b7eaaf2a6d SourceLocation; // 0x10(0x70)
	struct F*b7eaaf2a6d TargetLocation; // 0x80(0x70)
};

// ScriptStruct GameplayAbilities.*b0c0b31a62
// Size: 0x08 (Inherited: 0x00)
struct F*b0c0b31a62 {
	struct F*1e33a082d1 *2f14c4cf61; // 0x00(0x04)
	int32 *709090a047; // 0x04(0x04)
};

// ScriptStruct GameplayAbilities.*229e2f2b84
// Size: 0x18 (Inherited: 0x00)
struct F*229e2f2b84 {
	struct UGameplayTask* *1c0dc7e812; // 0x00(0x08)
	struct FString Message; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.*e3acdcdd7a
// Size: 0x10 (Inherited: 0x00)
struct F*e3acdcdd7a {
	struct UGameplayAbility* *a30c5f3c03; // 0x00(0x08)
	struct F*1e33a082d1 *74c8081c8d; // 0x08(0x04)
	bool *32572f3031; // 0x0c(0x01)
	bool *aedbd1291b; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct GameplayAbilities.*2ba45c3d5e
// Size: 0x48 (Inherited: 0x00)
struct F*2ba45c3d5e {
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

// ScriptStruct GameplayAbilities.*8e5ba27004
// Size: 0x20 (Inherited: 0x00)
struct F*8e5ba27004 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* SelfActor; // 0x08(0x08)
	struct UClass* RequiredActorClass; // 0x10(0x08)
	enum class *130052dd35 SelfFilter; // 0x18(0x01)
	bool bReverseFilter; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct GameplayAbilities.*bece6ff911
// Size: 0x2a0 (Inherited: 0x00)
struct F*bece6ff911 {
	char pad_0[0x290]; // 0x00(0x290)
	struct UAbilitySystemComponent* Owner; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCueTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayCueTag {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*6302a4002e
// Size: 0xa0 (Inherited: 0x00)
struct F*6302a4002e {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct GameplayAbilities.*fe7a20b016
// Size: 0x60 (Inherited: 0x00)
struct F*fe7a20b016 {
	struct FGameplayTagContainer CombinedTags; // 0x00(0x20)
	struct FGameplayTagContainer Added; // 0x20(0x20)
	struct FGameplayTagContainer Removed; // 0x40(0x20)
};

// ScriptStruct GameplayAbilities.*34e128bdaf
// Size: 0x48 (Inherited: 0x00)
struct F*34e128bdaf {
	struct FGameplayAttribute *ea0f420879; // 0x00(0x20)
	float *c880c4af36; // 0x20(0x04)
	float *b0c741480c; // 0x24(0x04)
	struct FGameplayTagContainer GameplayCueTags; // 0x28(0x20)
};

// ScriptStruct GameplayAbilities.*926221328b
// Size: 0x2e0 (Inherited: 0x00)
struct F*926221328b {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	enum class EGameplayModOp *1c26108917; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FScalableFloat Magnitude; // 0x28(0x30)
	struct FGameplayEffectModifierMagnitude *c827564211; // 0x58(0x200)
	struct FGameplayModEvaluationChannelSettings *347404f9cb; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct F*9d96cfa5bb *b0b28b8914; // 0x260(0x40)
	struct F*9d96cfa5bb TargetTags; // 0x2a0(0x40)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x200 (Inherited: 0x00)
struct FGameplayEffectModifierMagnitude {
	enum class EGameplayEffectMagnitudeCalculation *985abc6800; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FScalableFloat *f0c30ba90f; // 0x08(0x30)
	struct FAttributeBasedFloat *7a30efbc4a; // 0x38(0x110)
	struct F*855eff3f8c *b1ed719220; // 0x148(0xa8)
	struct F*160d30390a *41a844d54c; // 0x1f0(0x10)
};

// ScriptStruct GameplayAbilities.*160d30390a
// Size: 0x10 (Inherited: 0x00)
struct F*160d30390a {
	struct FName *e9b6deb380; // 0x00(0x08)
	struct FGameplayTag *1e23124fba; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*855eff3f8c
// Size: 0xa8 (Inherited: 0x00)
struct F*855eff3f8c {
	struct UClass* *21bbe0b074; // 0x00(0x08)
	struct FScalableFloat *25a294d779; // 0x08(0x30)
	struct FScalableFloat *1e77c2e613; // 0x38(0x30)
	struct FScalableFloat *64a680236c; // 0x68(0x30)
	struct FCurveTableRowHandle *e1a7eff56f; // 0x98(0x10)
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// Size: 0x110 (Inherited: 0x00)
struct FAttributeBasedFloat {
	struct FScalableFloat *25a294d779; // 0x00(0x30)
	struct FScalableFloat *1e77c2e613; // 0x30(0x30)
	struct FScalableFloat *64a680236c; // 0x60(0x30)
	struct F*62d8b8df42 *6822fd3255; // 0x90(0x28)
	struct FCurveTableRowHandle *3d475767d9; // 0xb8(0x10)
	enum class EAttributeBasedFloatCalculationType *31572d72a1; // 0xc8(0x01)
	enum class EGameplayModEvaluationChannel *232901c0fb; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct FGameplayTagContainer *025480af14; // 0xd0(0x20)
	struct FGameplayTagContainer *898493a414; // 0xf0(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x58 (Inherited: 0x00)
struct FGameplayEffectExecutionDefinition {
	struct UClass* *6b31667a6e; // 0x00(0x08)
	struct FGameplayTagContainer *a5a1ab3170; // 0x08(0x20)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> *7efccd9d20; // 0x28(0x10)
	struct TArray<struct UClass*> ConditionalGameplayEffectClasses; // 0x38(0x10)
	struct TArray<struct F*d06ae42431> *40aff84a5e; // 0x48(0x10)
};

// ScriptStruct GameplayAbilities.*d06ae42431
// Size: 0x28 (Inherited: 0x00)
struct F*d06ae42431 {
	struct UClass* EffectClass; // 0x00(0x08)
	struct FGameplayTagContainer RequiredSourceTags; // 0x08(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x2c0 (Inherited: 0x00)
struct FGameplayEffectExecutionScopedModifierInfo {
	struct F*62d8b8df42 *63f4e5405a; // 0x00(0x28)
	struct FGameplayTag *91bbdd900c; // 0x28(0x08)
	enum class EGameplayEffectScopedModifierAggregatorType *96f927a5e8; // 0x30(0x01)
	enum class EGameplayModOp *1c26108917; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FGameplayEffectModifierMagnitude *c827564211; // 0x38(0x200)
	struct FGameplayModEvaluationChannelSettings *347404f9cb; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct F*9d96cfa5bb *b0b28b8914; // 0x240(0x40)
	struct F*9d96cfa5bb TargetTags; // 0x280(0x40)
};

// ScriptStruct GameplayAbilities.*51ee0612c7
// Size: 0x10 (Inherited: 0x00)
struct F*51ee0612c7 {
	struct FGameplayTag *03e7e4e3c3; // 0x00(0x08)
	enum class *dd5819d074 *c87b46e158; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct GameplayAbilities.*7f57cecf64
// Size: 0x10 (Inherited: 0x00)
struct F*7f57cecf64 {
	struct TArray<struct UScriptStruct*> *ee6065f5fd; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*bbcfefc691
// Size: 0x0c (Inherited: 0x00)
struct F*bbcfefc691 {
	struct FVector AOEScale; // 0x00(0x0c)
};

// ScriptStruct GameplayAbilities.*2c22e7afe6
// Size: 0x10 (Inherited: 0x00)
struct F*2c22e7afe6 {
	enum class *5f85ec94c1 Command; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* *94d16a863a; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*d75ac321f1
// Size: 0x68 (Inherited: 0x00)
struct F*d75ac321f1 {
	char pad_0[0x50]; // 0x00(0x50)
	struct TArray<struct UClass*> *532508fbb4; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct GameplayAbilities.*a9de5b11af
// Size: 0x178 (Inherited: 0x00)
struct F*a9de5b11af {
	char pad_0[0x18]; // 0x00(0x18)
	struct F*7dd822a454 *7dd822a454; // 0x18(0x18)
	enum class *7b42a2a587 *024612ff2c; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAbilitySystemComponent* *6dccd05427; // 0x38(0x08)
	struct F*8fc18b241b *693d12f35d; // 0x40(0x78)
	struct F*6f1c5535b6 *1ea498aafb; // 0xb8(0xc0)
};

// ScriptStruct GameplayAbilities.*834fcbd0c4
// Size: 0x80 (Inherited: 0x00)
struct F*834fcbd0c4 {
	struct TArray<struct F*337466b6d7> *ad2f059892; // 0x00(0x10)
	struct TMap<struct FName, struct F*9c67584e99> *181cc86842; // 0x10(0x50)
	struct U*5cb8da7fae* *f7a28359c0; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)
};

// ScriptStruct GameplayAbilities.*9c67584e99
// Size: 0x04 (Inherited: 0x00)
struct F*9c67584e99 {
	int32 Index; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.*337466b6d7
// Size: 0x78 (Inherited: 0x00)
struct F*337466b6d7 {
	struct TArray<struct F*a0633e5cca> Links; // 0x00(0x10)
	struct F*9c67584e99 *66acf5651f; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FGameplayTag *1796c14773; // 0x18(0x08)
	struct FName *b5ea4dc261; // 0x20(0x08)
	char pad_28[0x50]; // 0x28(0x50)
};

// ScriptStruct GameplayAbilities.*a0633e5cca
// Size: 0x18 (Inherited: 0x00)
struct F*a0633e5cca {
	struct U*04aed17bec* *1199f27d9d; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.*c1295f93c9
// Size: 0xb0 (Inherited: 0x00)
struct F*c1295f93c9 {
	struct TArray<struct FString> Paths; // 0x00(0x10)
	char pad_10[0x80]; // 0x10(0x80)
	struct UObjectLibrary* *9612e90941; // 0x90(0x08)
	struct UObjectLibrary* *b2d73153ec; // 0x98(0x08)
	struct U*3bb88e8ef7* *616a606573; // 0xa0(0x08)
	char pad_A8[0x4]; // 0xa8(0x04)
	bool *c8a2ae12b9; // 0xac(0x01)
	bool *135d18f27b; // 0xad(0x01)
	bool *37807ba2c2; // 0xae(0x01)
	bool *e6d110e2e0; // 0xaf(0x01)
};

// ScriptStruct GameplayAbilities.*d94b97e6d8
// Size: 0x28 (Inherited: 0x00)
struct F*d94b97e6d8 {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
	struct FStringAssetReference *7a5e2b574a; // 0x08(0x10)
	struct UClass* *f9f8242f1e; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct GameplayAbilities.*f8533bba30
// Size: 0x18 (Inherited: 0x00)
struct F*f8533bba30 {
	struct TArray<struct F*4e67a6c5ab> *18b1e2c6d0; // 0x00(0x10)
	char *48e6ba15a0 : 1; // 0x10(0x01)
	char *2843b4be14 : 1; // 0x10(0x01)
	char *d1ae68defc : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayAbilities.*9689474d77
// Size: 0xa8 (Inherited: 0x00)
struct F*9689474d77 {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct GameplayAbilities.*f6648c1607
// Size: 0x50 (Inherited: 0x00)
struct F*f6648c1607 {
	struct F*f35824693f Positive; // 0x00(0x28)
	struct F*f35824693f *b64fe8302c; // 0x28(0x28)
};

// ScriptStruct GameplayAbilities.*f35824693f
// Size: 0x28 (Inherited: 0x00)
struct F*f35824693f {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UClass* *84d9089bd6; // 0x08(0x08)
	struct TArray<struct UClass*> *62f0f2a95e; // 0x10(0x10)
	int32 *33b6868973; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};


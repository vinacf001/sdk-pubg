// ScriptStruct AIModule.*049a31edee
// Size: 0x04 (Inherited: 0x00)
struct F*049a31edee {
	uint32 RequestID; // 0x00(0x04)
};

// ScriptStruct AIModule.*a85f9d469b
// Size: 0x48 (Inherited: 0x00)
struct F*a85f9d469b {
	float Age; // 0x00(0x04)
	float ExpirationAge; // 0x04(0x04)
	float Strength; // 0x08(0x04)
	struct FVector StimulusLocation; // 0x0c(0x0c)
	struct FVector ReceiverLocation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName Tag; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
	char pad_40_0 : 1; // 0x40(0x01)
	char bSuccessfullySensed : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct AIModule.BlackboardKeySelector
// Size: 0x28 (Inherited: 0x00)
struct FBlackboardKeySelector {
	struct TArray<struct UBlackboardKeyType*> AllowedTypes; // 0x00(0x10)
	struct FName SelectedKeyName; // 0x10(0x08)
	struct UClass* SelectedKeyType; // 0x18(0x08)
	bool SelectedKeyID; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	char bNoneIsAllowedValue : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AIModule.*de7f12a472
// Size: 0x50 (Inherited: 0x00)
struct F*de7f12a472 {
	struct AActor* GoalActor; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)
};

// ScriptStruct AIModule.*b9932b34ce
// Size: 0x01 (Inherited: 0x00)
struct F*b9932b34ce {
	bool TeamId; // 0x00(0x01)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderBoolValue : F*87baf0d408 {
	bool DefaultValue; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct AIModule.*87baf0d408
// Size: 0x28 (Inherited: 0x20)
struct F*87baf0d408 : F*80143f6dad {
	struct UClass* PropertyType; // 0x20(0x08)
};

// ScriptStruct AIModule.*80143f6dad
// Size: 0x20 (Inherited: 0x00)
struct F*80143f6dad {
	char pad_0[0x8]; // 0x00(0x08)
	struct UProperty* *22676a3808; // 0x08(0x08)
	struct U*0bff913aa9* *0346a3fb59; // 0x10(0x08)
	struct FName *bf431e865d; // 0x18(0x08)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderFloatValue : F*87baf0d408 {
	float DefaultValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderIntValue : F*87baf0d408 {
	int32 DefaultValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.*dca839d86c
// Size: 0x30 (Inherited: 0x20)
struct F*dca839d86c : F*80143f6dad {
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct AIModule.*69aff14219
// Size: 0x04 (Inherited: 0x00)
struct F*69aff14219 {
	char bDetectEnemies : 1; // 0x00(0x01)
	char bDetectNeutrals : 1; // 0x00(0x01)
	char bDetectFriendlies : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct AIModule.*824c48b711
// Size: 0x20 (Inherited: 0x00)
struct F*824c48b711 {
	struct AActor* Target; // 0x00(0x08)
	struct TArray<struct F*a85f9d469b> LastSensedStimuli; // 0x08(0x10)
	char bIsHostile : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.*2f8eafb470
// Size: 0x30 (Inherited: 0x00)
struct F*2f8eafb470 {
	float Amount; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector HitLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* DamagedActor; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct AIModule.*c6e7d5afa9
// Size: 0x30 (Inherited: 0x00)
struct F*c6e7d5afa9 {
	char pad_0[0x4]; // 0x00(0x04)
	struct FVector NoiseLocation; // 0x04(0x0c)
	float Loudness; // 0x10(0x04)
	float MaxRange; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FName Tag; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct AIModule.*ec30f63656
// Size: 0x18 (Inherited: 0x00)
struct F*ec30f63656 {
	struct AActor* *0ec7d7a35f; // 0x00(0x08)
	struct AActor* *498e6b2241; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.*b5e0ddbdbf
// Size: 0x18 (Inherited: 0x00)
struct F*b5e0ddbdbf {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* *3b5a0b7927; // 0x08(0x08)
	struct AActor* Observer; // 0x10(0x08)
};

// ScriptStruct AIModule.*499800f6b4
// Size: 0x38 (Inherited: 0x00)
struct F*499800f6b4 {
	char pad_0[0x28]; // 0x00(0x28)
	struct AActor* *a64e1630e3; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)
};

// ScriptStruct AIModule.*71210772b7
// Size: 0x20 (Inherited: 0x00)
struct F*71210772b7 {
	char pad_0[0x10]; // 0x00(0x10)
	struct AActor* *547459240c; // 0x10(0x08)
	struct AActor* OtherActor; // 0x18(0x08)
};

// ScriptStruct AIModule.*a44cd53957
// Size: 0x48 (Inherited: 0x00)
struct F*a44cd53957 {
	struct UEnvQuery* *c9c902c1bb; // 0x00(0x08)
	struct TArray<struct F*adbe44f542> *3e5e5c24de; // 0x08(0x10)
	struct FBlackboardKeySelector *65e8432f43; // 0x18(0x28)
	enum class EEnvQueryRunMode *6759275bad; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char bUseBBKeyForQueryTemplate : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct AIModule.*adbe44f542
// Size: 0x38 (Inherited: 0x00)
struct F*adbe44f542 {
	struct FName ParamName; // 0x00(0x08)
	enum class EAIParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
	struct FBlackboardKeySelector BBKey; // 0x10(0x28)
};

// ScriptStruct AIModule.*6ba04b287b
// Size: 0x40 (Inherited: 0x00)
struct F*6ba04b287b {
	char pad_0[0x10]; // 0x00(0x10)
	struct UClass* ItemType; // 0x10(0x08)
	char pad_18[0x14]; // 0x18(0x14)
	int32 OptionIndex; // 0x2c(0x04)
	int32 QueryID; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct AIModule.*43315c3d9f
// Size: 0x20 (Inherited: 0x00)
struct F*43315c3d9f {
	float ExtentX; // 0x00(0x04)
	float ExtentY; // 0x04(0x04)
	float ExtentZ; // 0x08(0x04)
	struct FVector *02a4c1fa71; // 0x0c(0x0c)
	enum class ECollisionChannel *b36c8bd09d; // 0x18(0x01)
	enum class EEnvOverlapShape *ad1e0dfc65; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	char *c693492db1 : 1; // 0x1c(0x01)
	char *d472318d62 : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct AIModule.EnvTraceData
// Size: 0x30 (Inherited: 0x00)
struct FEnvTraceData {
	int32 *fa67c37439; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* NavigationFilter; // 0x08(0x08)
	float *2024e6c025; // 0x10(0x04)
	float *93d7ef6816; // 0x14(0x04)
	float ExtentX; // 0x18(0x04)
	float ExtentY; // 0x1c(0x04)
	float ExtentZ; // 0x20(0x04)
	float *f8737ef854; // 0x24(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x28(0x01)
	enum class ECollisionChannel *224ca415f2; // 0x29(0x01)
	enum class EEnvTraceShape *9c8ae4f5a2; // 0x2a(0x01)
	enum class EEnvQueryTrace TraceMode; // 0x2b(0x01)
	char *e4fb232040 : 1; // 0x2c(0x01)
	char *c693492db1 : 1; // 0x2c(0x01)
	char *ef959391e4 : 1; // 0x2c(0x01)
	char *4adcc17cd6 : 1; // 0x2c(0x01)
	char *766c733d5e : 1; // 0x2c(0x01)
	char *b6fb9e6dbf : 1; // 0x2c(0x01)
	char pad_2C_6 : 2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AIModule.EnvDirection
// Size: 0x20 (Inherited: 0x00)
struct FEnvDirection {
	struct UClass* LineFrom; // 0x00(0x08)
	struct UClass* LineTo; // 0x08(0x08)
	struct UClass* Rotation; // 0x10(0x08)
	enum class EEnvDirection *7af8acecf7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.EnvNamedValue
// Size: 0x10 (Inherited: 0x00)
struct FEnvNamedValue {
	struct FName ParamName; // 0x00(0x08)
	enum class EAIParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
};

// ScriptStruct AIModule.*bc8cfc90a0
// Size: 0x30 (Inherited: 0x00)
struct F*bc8cfc90a0 {
	struct UBTCompositeNode* *20d717967b; // 0x00(0x08)
	struct UBTTaskNode* *823f56c099; // 0x08(0x08)
	struct TArray<struct UBTDecorator*> *449088c133; // 0x10(0x10)
	struct TArray<struct F*0a3d5e26e0> *ed8e5f17d4; // 0x20(0x10)
};

// ScriptStruct AIModule.*0a3d5e26e0
// Size: 0x04 (Inherited: 0x00)
struct F*0a3d5e26e0 {
	enum class EBTDecoratorLogic Operation; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16 Number; // 0x02(0x02)
};

// ScriptStruct AIModule.*fcbe40058d
// Size: 0x18 (Inherited: 0x00)
struct F*fcbe40058d {
	struct UBehaviorTree* Asset; // 0x00(0x08)
	struct UBTCompositeNode* Template; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.BlackboardEntry
// Size: 0x18 (Inherited: 0x00)
struct FBlackboardEntry {
	struct FName EntryName; // 0x00(0x08)
	struct UBlackboardKeyType* KeyType; // 0x08(0x08)
	char *c73cdd1483 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AIModule.*2735eb2cdf
// Size: 0x20 (Inherited: 0x00)
struct F*2735eb2cdf {
	struct TArray<float> Angles; // 0x00(0x10)
	struct TArray<float> *b14b011430; // 0x10(0x10)
};

// ScriptStruct AIModule.*7dbe801015
// Size: 0x1c (Inherited: 0x00)
struct F*7dbe801015 {
	float *c558412044; // 0x00(0x04)
	float *cfa6e7cc74; // 0x04(0x04)
	float *eea6ff878e; // 0x08(0x04)
	float *a37a40444e; // 0x0c(0x04)
	float *cd55bacbb3; // 0x10(0x04)
	float *e6a471f5d1; // 0x14(0x04)
	bool *8abfd61c08; // 0x18(0x01)
	bool *ea2c9f5e0e; // 0x19(0x01)
	bool *00a453c306; // 0x1a(0x01)
	bool *94c0719ae4; // 0x1b(0x01)
};

// ScriptStruct AIModule.*7c630400ed
// Size: 0x1c0 (Inherited: 0x00)
struct F*7c630400ed {
	struct UEnvQuery* Template; // 0x00(0x08)
	char pad_8[0x1b8]; // 0x08(0x1b8)
};

// ScriptStruct AIModule.*87a65746cd
// Size: 0x68 (Inherited: 0x00)
struct F*87a65746cd {
	struct UEnvQuery* *c9c902c1bb; // 0x00(0x08)
	struct UObject* Owner; // 0x08(0x08)
	struct UWorld* World; // 0x10(0x08)
	char pad_18[0x50]; // 0x18(0x50)
};

// ScriptStruct AIModule.*e6d6914bb8
// Size: 0x08 (Inherited: 0x00)
struct F*e6d6914bb8 {
	struct U*25f78a9188* *69e074d292; // 0x00(0x08)
};

// ScriptStruct AIModule.*9b44471641
// Size: 0x18 (Inherited: 0x00)
struct F*9b44471641 {
	struct U*25f78a9188* Action; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};


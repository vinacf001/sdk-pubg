// ScriptStruct AIModule.*a2e19e07de
// Size: 0x04 (Inherited: 0x00)
struct F*a2e19e07de {
	uint32 RequestID; // 0x00(0x04)
};

// ScriptStruct AIModule.*787aba8c91
// Size: 0x48 (Inherited: 0x00)
struct F*787aba8c91 {
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

// ScriptStruct AIModule.*77dfb50dbd
// Size: 0x50 (Inherited: 0x00)
struct F*77dfb50dbd {
	struct AActor* GoalActor; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)
};

// ScriptStruct AIModule.*2575587a09
// Size: 0x01 (Inherited: 0x00)
struct F*2575587a09 {
	bool TeamId; // 0x00(0x01)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderBoolValue : F*311de335f6 {
	bool DefaultValue; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct AIModule.*311de335f6
// Size: 0x28 (Inherited: 0x20)
struct F*311de335f6 : F*d466d766a8 {
	struct UClass* PropertyType; // 0x20(0x08)
};

// ScriptStruct AIModule.*d466d766a8
// Size: 0x20 (Inherited: 0x00)
struct F*d466d766a8 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UProperty* *85c29fa26c; // 0x08(0x08)
	struct U*693910efed* *5f68dc1115; // 0x10(0x08)
	struct FName *f24326f945; // 0x18(0x08)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderFloatValue : F*311de335f6 {
	float DefaultValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderIntValue : F*311de335f6 {
	int32 DefaultValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.*35de7d2910
// Size: 0x30 (Inherited: 0x20)
struct F*35de7d2910 : F*d466d766a8 {
	struct UProperty* *85c29fa26c; // 0x08(0x08)
	struct U*693910efed* *5f68dc1115; // 0x10(0x08)
	struct FName *f24326f945; // 0x18(0x08)
};

// ScriptStruct AIModule.*eab45cfa59
// Size: 0x04 (Inherited: 0x00)
struct F*eab45cfa59 {
	char bDetectEnemies : 1; // 0x00(0x01)
	char bDetectNeutrals : 1; // 0x00(0x01)
	char bDetectFriendlies : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct AIModule.*e8992fdd58
// Size: 0x20 (Inherited: 0x00)
struct F*e8992fdd58 {
	struct AActor* Target; // 0x00(0x08)
	struct TArray<struct F*787aba8c91> LastSensedStimuli; // 0x08(0x10)
	char bIsHostile : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.*1a2cba3534
// Size: 0x30 (Inherited: 0x00)
struct F*1a2cba3534 {
	float Amount; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector HitLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* DamagedActor; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct AIModule.*8dab4083a8
// Size: 0x30 (Inherited: 0x00)
struct F*8dab4083a8 {
	char pad_0[0x4]; // 0x00(0x04)
	struct FVector NoiseLocation; // 0x04(0x0c)
	float Loudness; // 0x10(0x04)
	float MaxRange; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FName Tag; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct AIModule.*a5c4e338f3
// Size: 0x18 (Inherited: 0x00)
struct F*a5c4e338f3 {
	struct AActor* *5abbd4df7f; // 0x00(0x08)
	struct AActor* *aa6a182927; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.*c16ee1c60e
// Size: 0x18 (Inherited: 0x00)
struct F*c16ee1c60e {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* *bae1fd5946; // 0x08(0x08)
	struct AActor* Observer; // 0x10(0x08)
};

// ScriptStruct AIModule.*3a4e4bdf7a
// Size: 0x38 (Inherited: 0x00)
struct F*3a4e4bdf7a {
	char pad_0[0x28]; // 0x00(0x28)
	struct AActor* *88d275134a; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)
};

// ScriptStruct AIModule.*e9a9a34564
// Size: 0x20 (Inherited: 0x00)
struct F*e9a9a34564 {
	char pad_0[0x10]; // 0x00(0x10)
	struct AActor* *2456c92b8e; // 0x10(0x08)
	struct AActor* OtherActor; // 0x18(0x08)
};

// ScriptStruct AIModule.*94ed19e5c6
// Size: 0x48 (Inherited: 0x00)
struct F*94ed19e5c6 {
	struct UEnvQuery* *2c8ffe8dea; // 0x00(0x08)
	struct TArray<struct F*bfa5db6008> *880248475e; // 0x08(0x10)
	struct FBlackboardKeySelector *c4e138b4d8; // 0x18(0x28)
	enum class EEnvQueryRunMode *83fcce3f45; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char bUseBBKeyForQueryTemplate : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct AIModule.*bfa5db6008
// Size: 0x38 (Inherited: 0x00)
struct F*bfa5db6008 {
	struct FName ParamName; // 0x00(0x08)
	enum class EAIParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
	struct FBlackboardKeySelector BBKey; // 0x10(0x28)
};

// ScriptStruct AIModule.*a0409dfcce
// Size: 0x40 (Inherited: 0x00)
struct F*a0409dfcce {
	char pad_0[0x10]; // 0x00(0x10)
	struct UClass* ItemType; // 0x10(0x08)
	char pad_18[0x14]; // 0x18(0x14)
	int32 OptionIndex; // 0x2c(0x04)
	int32 QueryID; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct AIModule.*9fd1a392bd
// Size: 0x20 (Inherited: 0x00)
struct F*9fd1a392bd {
	float ExtentX; // 0x00(0x04)
	float ExtentY; // 0x04(0x04)
	float ExtentZ; // 0x08(0x04)
	struct FVector *cb6d9dea7a; // 0x0c(0x0c)
	enum class ECollisionChannel *b01bc5fc3c; // 0x18(0x01)
	enum class EEnvOverlapShape *c11fb4ac2b; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	char *d7b632d0d4 : 1; // 0x1c(0x01)
	char *1dcbfd67c8 : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct AIModule.EnvTraceData
// Size: 0x30 (Inherited: 0x00)
struct FEnvTraceData {
	int32 *0e08419c5d; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* NavigationFilter; // 0x08(0x08)
	float *9deb3d30be; // 0x10(0x04)
	float *2a0589cd81; // 0x14(0x04)
	float ExtentX; // 0x18(0x04)
	float ExtentY; // 0x1c(0x04)
	float ExtentZ; // 0x20(0x04)
	float *86f926497c; // 0x24(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x28(0x01)
	enum class ECollisionChannel *5d302861c7; // 0x29(0x01)
	enum class EEnvTraceShape *02d834fc6c; // 0x2a(0x01)
	enum class EEnvQueryTrace TraceMode; // 0x2b(0x01)
	char *6c80534cdb : 1; // 0x2c(0x01)
	char *d7b632d0d4 : 1; // 0x2c(0x01)
	char *a72ee3e29d : 1; // 0x2c(0x01)
	char *25fc8f29e6 : 1; // 0x2c(0x01)
	char *192db816eb : 1; // 0x2c(0x01)
	char *b20b36a2e6 : 1; // 0x2c(0x01)
	char pad_2C_6 : 2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AIModule.EnvDirection
// Size: 0x20 (Inherited: 0x00)
struct FEnvDirection {
	struct UClass* LineFrom; // 0x00(0x08)
	struct UClass* LineTo; // 0x08(0x08)
	struct UClass* Rotation; // 0x10(0x08)
	enum class EEnvDirection *15aed82904; // 0x18(0x01)
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

// ScriptStruct AIModule.*7502765a03
// Size: 0x30 (Inherited: 0x00)
struct F*7502765a03 {
	struct UBTCompositeNode* *3bdc8d5481; // 0x00(0x08)
	struct UBTTaskNode* *62df22cb6f; // 0x08(0x08)
	struct TArray<struct UBTDecorator*> *46457a50e7; // 0x10(0x10)
	struct TArray<struct F*d0a58640e7> *6f14623686; // 0x20(0x10)
};

// ScriptStruct AIModule.*d0a58640e7
// Size: 0x04 (Inherited: 0x00)
struct F*d0a58640e7 {
	enum class EBTDecoratorLogic Operation; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16 Number; // 0x02(0x02)
};

// ScriptStruct AIModule.*9de88ebfff
// Size: 0x18 (Inherited: 0x00)
struct F*9de88ebfff {
	struct UBehaviorTree* Asset; // 0x00(0x08)
	struct UBTCompositeNode* Template; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.BlackboardEntry
// Size: 0x18 (Inherited: 0x00)
struct FBlackboardEntry {
	struct FName EntryName; // 0x00(0x08)
	struct UBlackboardKeyType* KeyType; // 0x08(0x08)
	char *0e0c988278 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AIModule.*546c99a93a
// Size: 0x20 (Inherited: 0x00)
struct F*546c99a93a {
	struct TArray<float> Angles; // 0x00(0x10)
	struct TArray<float> *12bbfd9d02; // 0x10(0x10)
};

// ScriptStruct AIModule.*a866aa098d
// Size: 0x1c (Inherited: 0x00)
struct F*a866aa098d {
	float *b6b3cbbc14; // 0x00(0x04)
	float *2a8a2b72a7; // 0x04(0x04)
	float *a1cb33cdf6; // 0x08(0x04)
	float *a11ff28728; // 0x0c(0x04)
	float *d48174ff0b; // 0x10(0x04)
	float *dc7a2d7fbc; // 0x14(0x04)
	bool *67c46223ce; // 0x18(0x01)
	bool *94edd97b84; // 0x19(0x01)
	bool *92c61c6f8c; // 0x1a(0x01)
	bool *4733970b04; // 0x1b(0x01)
};

// ScriptStruct AIModule.*4ac535c4d7
// Size: 0x1c0 (Inherited: 0x00)
struct F*4ac535c4d7 {
	struct UEnvQuery* Template; // 0x00(0x08)
	char pad_8[0x1b8]; // 0x08(0x1b8)
};

// ScriptStruct AIModule.*c4c1f89878
// Size: 0x68 (Inherited: 0x00)
struct F*c4c1f89878 {
	struct UEnvQuery* *2c8ffe8dea; // 0x00(0x08)
	struct UObject* Owner; // 0x08(0x08)
	struct UWorld* World; // 0x10(0x08)
	char pad_18[0x50]; // 0x18(0x50)
};

// ScriptStruct AIModule.*1143e2dc2f
// Size: 0x08 (Inherited: 0x00)
struct F*1143e2dc2f {
	struct U*fce0072588* *4312a8f17b; // 0x00(0x08)
};

// ScriptStruct AIModule.*258ef4b785
// Size: 0x18 (Inherited: 0x00)
struct F*258ef4b785 {
	struct U*fce0072588* Action; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};


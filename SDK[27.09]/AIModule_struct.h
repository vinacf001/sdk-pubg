// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8 {
	Success,
	Blocked,
	OffPath,
	Aborted,
	Skipped_DEPRECATED,
	Invalid,
	EPathFollowingResult_MAX,
};

// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8 {
	Processing,
	Success,
	Failed,
	Aborted,
	OwnerLost,
	MissingParam,
	EEnvQueryStatus_MAX,
};

// Enum AIModule.EAILockSource
enum class EAILockSource : uint8 {
	Animation,
	Logic,
	Script,
	Gameplay,
	MAX,
	EAILockSource_MAX,
};

// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8 {
	SoftScript,
	Logic,
	HardScript,
	Reaction,
	Ultimate,
	MAX,
	EAIRequestPriority_MAX,
};

// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8 {
	Invalid,
	FailedToStart,
	InstantAbort,
	FinishedAborting,
	FinishedExecution,
	Push,
	EPawnActionEventType_MAX,
};

// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8 {
	NotStarted,
	InProgress,
	Success,
	Failed,
	Aborted,
	EPawnActionResult_MAX,
};

// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8 {
	NeverStarted,
	NotBeingAborted,
	MarkPendingAbort,
	LatentAbortInProgress,
	AbortDone,
	MAX,
	EPawnActionAbortState_MAX,
};

// Enum AIModule.FAIDistanceType
enum class FAIDistanceType : uint8 {
	Distance3D,
	Distance2D,
	DistanceZ,
	MAX,
	FAIDistanceType_MAX,
};

// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8 {
	Default,
	Enable,
	Disable,
	MAX,
	EAIOptionFlag_MAX,
};

// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8 {
	Failed,
	AlreadyAtGoal,
	RequestSuccessful,
	EPathFollowingRequestResult_MAX,
};

// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8 {
	Error,
	NoMove,
	DirectMove,
	PartialPath,
	PathToGoal,
	EPathFollowingAction_MAX,
};

// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8 {
	Idle,
	Waiting,
	Paused,
	Moving,
	EPathFollowingStatus_MAX,
};

// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8 {
	Friendly,
	Neutral,
	Hostile,
	ETeamAttitude_MAX,
};

// Enum AIModule.*6b301790d1
enum class *6b301790d1 : uint8 {
	*7b00d1592c,
	*50403409ac,
	*323d23a955,
	*6b301790d1_MAX,
};

// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8 {
	Lowest,
	Low,
	AutonomousAI,
	High,
	Ultimate,
	EAITaskPriority_MAX,
};

// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8 {
	None,
	LowerPriority,
	Self,
	Both,
	EBTFlowAbortMode_MAX,
};

// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8 {
	Succeeded,
	Failed,
	Aborted,
	InProgress,
	EBTNodeResult_MAX,
};

// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8 {
	None,
	SpecifiedValue,
	FilterThreshold,
	EEnvQueryTestClamping_MAX,
};

// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8 {
	TwoPoints,
	Rotation,
	EEnvDirection_MAX,
};

// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8 {
	Box,
	Sphere,
	Capsule,
	EEnvOverlapShape_MAX,
};

// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8 {
	Line,
	Box,
	Sphere,
	Capsule,
	EEnvTraceShape_MAX,
};

// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8 {
	None,
	Navigation,
	Geometry,
	NavigationOverLedges,
	EEnvQueryTrace_MAX,
};

// Enum AIModule.EAIParamType
enum class EAIParamType : uint8 {
	Float,
	Int,
	Bool,
	EAIParamType_MAX,
};

// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8 {
	Float,
	Int,
	Bool,
	EEnvQueryParam_MAX,
};

// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8 {
	SingleResult,
	RandomBest5Pct,
	RandomBest25Pct,
	AllMatching,
	EEnvQueryRunMode_MAX,
};

// Enum AIModule.*207bfa4cb0
enum class *207bfa4cb0 : uint8 {
	*12fb1fca99,
	*2ab4cb218c,
	*eee5c0f5e8,
	*09d03e8c3f,
	*207bfa4cb0_MAX,
};

// Enum AIModule.*2c56fdede6
enum class *2c56fdede6 : uint8 {
	*f047a65210,
	*8c1da37858,
	*b5ef23546b,
	*2c56fdede6_MAX,
};

// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8 {
	Low,
	Medium,
	High,
	EEnvTestCost_MAX,
};

// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8 {
	None,
	Square,
	Inverse,
	Unused,
	Constant,
	Skip,
	EEnvTestWeight_MAX,
};

// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8 {
	Linear,
	Square,
	InverseLinear,
	SquareRoot,
	Constant,
	EEnvTestScoreEquation_MAX,
};

// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8 {
	Minimum,
	Maximum,
	Range,
	Match,
	EEnvTestFilterType_MAX,
};

// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8 {
	Filter,
	Score,
	FilterAndScore,
	EEnvTestPurpose_MAX,
};

// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8 {
	Invalid,
	Test,
	And,
	Or,
	Not,
	EBTDecoratorLogic_MAX,
};

// Enum AIModule.*d56c4dfc01
enum class *d56c4dfc01 : uint8 {
	*2e42f86c77,
	*324e822d5b,
	*fba0827241,
	*d56c4dfc01_MAX,
};

// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8 {
	Equal,
	NotEqual,
	Contain,
	NotContain,
	ETextKeyOperation_MAX,
};

// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8 {
	Equal,
	NotEqual,
	Less,
	LessOrEqual,
	Greater,
	GreaterOrEqual,
	EArithmeticKeyOperation_MAX,
};

// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8 {
	Set,
	NotSet,
	EBasicKeyOperation_MAX,
};

// Enum AIModule.*938033f8bb
enum class *938033f8bb : uint8 {
	*c2baa93100,
	*57d9fbc0b9,
	*9a591b9ac0,
	*938033f8bb_MAX,
};

// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8 {
	Equal,
	NotEqual,
	EBlackBoardEntryComparison_MAX,
};

// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8 {
	NavmeshRaycast2D,
	HierarchicalQuery,
	RegularPathFinding,
	EPathExistanceQueryType_MAX,
};

// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8 {
	AbortBackground,
	WaitForBackground,
	EBTParallelMode_MAX,
};

// Enum AIModule.*1dfa76b857
enum class *1dfa76b857 : uint8 {
	*76f07c0644,
	*8c5d9d695a,
	*294ffb92e2,
	*1dfa76b857_MAX,
};

// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8 {
	Absolute,
	RelativeToScores,
	EEQSNormalizationType_MAX,
};

// Enum AIModule.*e04dcc3fbf
enum class *e04dcc3fbf : uint8 {
	*99f1e0d50f,
	*cb47a2e75c,
	*d54eeedb97,
	*1566d80a88,
	*e76c50bec0,
	*e04dcc3fbf_MAX,
};

// Enum AIModule.*5d2337e19c
enum class *5d2337e19c : uint8 {
	*d33e7ea907,
	*ef002e4e1c,
	*005b9a14e6,
	*5d2337e19c_MAX,
};

// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8 {
	PathExist,
	PathCost,
	PathLength,
	EEnvTestPathfinding_MAX,
};

// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8 {
	All,
	Best5Pct,
	Best25Pct,
	EEnvQueryHightlightMode_MAX,
};

// Enum AIModule.*ced16c6ad4
enum class *ced16c6ad4 : uint8 {
	*d048376f70,
	*a6d1492ff2,
	*3181545507,
	*ced16c6ad4_MAX,
};

// Enum AIModule.*396beb4c01
enum class *396beb4c01 : uint8 {
	*f369eeeb29,
	*dfbd2c123e,
	*ee4c3550e6,
	*396beb4c01_MAX,
};

// Enum AIModule.*7ce8c72a84
enum class *7ce8c72a84 : uint8 {
	*041a5e41c5,
	*e583209757,
	*1c3dc2f5db,
	*7ce8c72a84_MAX,
};

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
	char pad_20[0x10]; // 0x20(0x10)
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


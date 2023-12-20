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

// Enum AIModule.*aa6e9da3d9
enum class *aa6e9da3d9 : uint8 {
	*f615ca62c7,
	*e9af98a23f,
	*1a2ae72f56,
	*aa6e9da3d9_MAX,
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

// Enum AIModule.*64e2f985de
enum class *64e2f985de : uint8 {
	*da14060220,
	*0e6dbc4496,
	*af8dcb4321,
	*5c45cadbd6,
	*64e2f985de_MAX,
};

// Enum AIModule.*cae4931ba2
enum class *cae4931ba2 : uint8 {
	*fbf20b1360,
	*547d596d4d,
	*a9aa9812c4,
	*cae4931ba2_MAX,
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

// Enum AIModule.*88b82fa7e8
enum class *88b82fa7e8 : uint8 {
	*938bc5315d,
	*b30ca972f4,
	*0ec620e88c,
	*88b82fa7e8_MAX,
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

// Enum AIModule.*a569661a79
enum class *a569661a79 : uint8 {
	*1ebcc00c28,
	*9c8b9193a1,
	*50870cf4ff,
	*a569661a79_MAX,
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

// Enum AIModule.*73f1455814
enum class *73f1455814 : uint8 {
	*cae443c442,
	*5c0766b35f,
	*43d953d34a,
	*73f1455814_MAX,
};

// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8 {
	Absolute,
	RelativeToScores,
	EEQSNormalizationType_MAX,
};

// Enum AIModule.*ab14b0c884
enum class *ab14b0c884 : uint8 {
	*9516afe68e,
	*884dee7ba9,
	*824c0df301,
	*061ffade2a,
	*fde96b8e1b,
	*ab14b0c884_MAX,
};

// Enum AIModule.*05c7f2d894
enum class *05c7f2d894 : uint8 {
	*ec850b1738,
	*8e08008767,
	*f99254a065,
	*05c7f2d894_MAX,
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

// Enum AIModule.*5f1914b78c
enum class *5f1914b78c : uint8 {
	*fdb766063a,
	*3fc51682c6,
	*595bd2d03a,
	*5f1914b78c_MAX,
};

// Enum AIModule.*6cbb510fef
enum class *6cbb510fef : uint8 {
	*36fd7c39b8,
	*e7d73ddaab,
	*fbda343a07,
	*6cbb510fef_MAX,
};

// Enum AIModule.*5d5cfbb7dd
enum class *5d5cfbb7dd : uint8 {
	*b1dd3f281b,
	*a40493ab4e,
	*2201281908,
	*5d5cfbb7dd_MAX,
};

// ScriptStruct AIModule.*32e5aa1c7e
// Size: 0x04 (Inherited: 0x00)
struct F*32e5aa1c7e {
	uint32 RequestID; // 0x00(0x04)
};

// ScriptStruct AIModule.*58d31752db
// Size: 0x48 (Inherited: 0x00)
struct F*58d31752db {
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

// ScriptStruct AIModule.*6df0658f8d
// Size: 0x50 (Inherited: 0x00)
struct F*6df0658f8d {
	struct AActor* GoalActor; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)
};

// ScriptStruct AIModule.*766eef5059
// Size: 0x01 (Inherited: 0x00)
struct F*766eef5059 {
	bool TeamId; // 0x00(0x01)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderBoolValue : F*eb276bc02b {
	bool DefaultValue; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct AIModule.*eb276bc02b
// Size: 0x28 (Inherited: 0x20)
struct F*eb276bc02b : F*d30905afaf {
	struct UClass* PropertyType; // 0x20(0x08)
};

// ScriptStruct AIModule.*d30905afaf
// Size: 0x20 (Inherited: 0x00)
struct F*d30905afaf {
	char pad_0[0x8]; // 0x00(0x08)
	struct UProperty* *cc77d173d2; // 0x08(0x08)
	struct U*1067c9a701* *9f1af9f6bf; // 0x10(0x08)
	struct FName *bd961e0174; // 0x18(0x08)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderFloatValue : F*eb276bc02b {
	float DefaultValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderIntValue : F*eb276bc02b {
	int32 DefaultValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.*99f7717e2a
// Size: 0x30 (Inherited: 0x20)
struct F*99f7717e2a : F*d30905afaf {
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct AIModule.*bb1f234aa3
// Size: 0x04 (Inherited: 0x00)
struct F*bb1f234aa3 {
	char bDetectEnemies : 1; // 0x00(0x01)
	char bDetectNeutrals : 1; // 0x00(0x01)
	char bDetectFriendlies : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct AIModule.*196d244245
// Size: 0x20 (Inherited: 0x00)
struct F*196d244245 {
	struct AActor* Target; // 0x00(0x08)
	struct TArray<struct F*58d31752db> LastSensedStimuli; // 0x08(0x10)
	char bIsHostile : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.*2d46306a24
// Size: 0x30 (Inherited: 0x00)
struct F*2d46306a24 {
	float Amount; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector HitLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* DamagedActor; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct AIModule.*56a6032375
// Size: 0x30 (Inherited: 0x00)
struct F*56a6032375 {
	char pad_0[0x4]; // 0x00(0x04)
	struct FVector NoiseLocation; // 0x04(0x0c)
	float Loudness; // 0x10(0x04)
	float MaxRange; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FName Tag; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct AIModule.*9bff58793a
// Size: 0x18 (Inherited: 0x00)
struct F*9bff58793a {
	struct AActor* *74d2a67712; // 0x00(0x08)
	struct AActor* *382fa0ff54; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.*151c60793f
// Size: 0x18 (Inherited: 0x00)
struct F*151c60793f {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* *dbde02607a; // 0x08(0x08)
	struct AActor* Observer; // 0x10(0x08)
};

// ScriptStruct AIModule.*e5dab2e477
// Size: 0x38 (Inherited: 0x00)
struct F*e5dab2e477 {
	char pad_0[0x28]; // 0x00(0x28)
	struct AActor* *8415998995; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)
};

// ScriptStruct AIModule.*34ce55761d
// Size: 0x20 (Inherited: 0x00)
struct F*34ce55761d {
	char pad_0[0x10]; // 0x00(0x10)
	struct AActor* *c735f52dfc; // 0x10(0x08)
	struct AActor* OtherActor; // 0x18(0x08)
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

// ScriptStruct AIModule.*85e53cc507
// Size: 0x48 (Inherited: 0x00)
struct F*85e53cc507 {
	struct UEnvQuery* *e7500f6f85; // 0x00(0x08)
	struct TArray<struct F*5ede5c6dd5> *293bcaf38d; // 0x08(0x10)
	struct FBlackboardKeySelector *64aa8c8146; // 0x18(0x28)
	enum class EEnvQueryRunMode *fdee3be200; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char bUseBBKeyForQueryTemplate : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct AIModule.*5ede5c6dd5
// Size: 0x38 (Inherited: 0x00)
struct F*5ede5c6dd5 {
	struct FName ParamName; // 0x00(0x08)
	enum class EAIParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
	struct FBlackboardKeySelector BBKey; // 0x10(0x28)
};

// ScriptStruct AIModule.*c46939d9a1
// Size: 0x40 (Inherited: 0x00)
struct F*c46939d9a1 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UClass* ItemType; // 0x10(0x08)
	char pad_18[0x14]; // 0x18(0x14)
	int32 OptionIndex; // 0x2c(0x04)
	int32 QueryID; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct AIModule.*090abebab2
// Size: 0x20 (Inherited: 0x00)
struct F*090abebab2 {
	float ExtentX; // 0x00(0x04)
	float ExtentY; // 0x04(0x04)
	float ExtentZ; // 0x08(0x04)
	struct FVector *b2e137a0c6; // 0x0c(0x0c)
	enum class ECollisionChannel *477f2034dc; // 0x18(0x01)
	enum class EEnvOverlapShape *b13c15fd36; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	char *afa03e2bd3 : 1; // 0x1c(0x01)
	char *3c2250d53c : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct AIModule.EnvTraceData
// Size: 0x30 (Inherited: 0x00)
struct FEnvTraceData {
	int32 *db16a4d3cf; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* NavigationFilter; // 0x08(0x08)
	float *c50264bf95; // 0x10(0x04)
	float *b8aa3593ac; // 0x14(0x04)
	float ExtentX; // 0x18(0x04)
	float ExtentY; // 0x1c(0x04)
	float ExtentZ; // 0x20(0x04)
	float *c32e60d984; // 0x24(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x28(0x01)
	enum class ECollisionChannel *8bd9d803bb; // 0x29(0x01)
	enum class EEnvTraceShape *e2a5a74127; // 0x2a(0x01)
	enum class EEnvQueryTrace TraceMode; // 0x2b(0x01)
	char *767b657202 : 1; // 0x2c(0x01)
	char *afa03e2bd3 : 1; // 0x2c(0x01)
	char *a7e741c703 : 1; // 0x2c(0x01)
	char *ac780c89a3 : 1; // 0x2c(0x01)
	char *60b1b9977e : 1; // 0x2c(0x01)
	char *8bcaa8342d : 1; // 0x2c(0x01)
	char pad_2C_6 : 2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AIModule.EnvDirection
// Size: 0x20 (Inherited: 0x00)
struct FEnvDirection {
	struct UClass* LineFrom; // 0x00(0x08)
	struct UClass* LineTo; // 0x08(0x08)
	struct UClass* Rotation; // 0x10(0x08)
	enum class EEnvDirection *fbcad310de; // 0x18(0x01)
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

// ScriptStruct AIModule.*f9166b06a6
// Size: 0x30 (Inherited: 0x00)
struct F*f9166b06a6 {
	struct UBTCompositeNode* *a6089fc998; // 0x00(0x08)
	struct UBTTaskNode* *126f42c026; // 0x08(0x08)
	struct TArray<struct UBTDecorator*> *12f2b8707a; // 0x10(0x10)
	struct TArray<struct F*4d9a8a794c> *836c80fe8f; // 0x20(0x10)
};

// ScriptStruct AIModule.*4d9a8a794c
// Size: 0x04 (Inherited: 0x00)
struct F*4d9a8a794c {
	enum class EBTDecoratorLogic Operation; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16 Number; // 0x02(0x02)
};

// ScriptStruct AIModule.*072519ed7c
// Size: 0x18 (Inherited: 0x00)
struct F*072519ed7c {
	struct UBehaviorTree* Asset; // 0x00(0x08)
	struct UBTCompositeNode* Template; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.BlackboardEntry
// Size: 0x18 (Inherited: 0x00)
struct FBlackboardEntry {
	struct FName EntryName; // 0x00(0x08)
	struct UBlackboardKeyType* KeyType; // 0x08(0x08)
	char *2e8a8b3461 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AIModule.*a0d84c1f39
// Size: 0x20 (Inherited: 0x00)
struct F*a0d84c1f39 {
	struct TArray<float> Angles; // 0x00(0x10)
	struct TArray<float> *f101e8a669; // 0x10(0x10)
};

// ScriptStruct AIModule.*0ccc7e594e
// Size: 0x1c (Inherited: 0x00)
struct F*0ccc7e594e {
	float *f24d1c59a0; // 0x00(0x04)
	float *8ec7b0700c; // 0x04(0x04)
	float *4c368af2b0; // 0x08(0x04)
	float *453a800e2d; // 0x0c(0x04)
	float *1ed72e062d; // 0x10(0x04)
	float *7a98f965c2; // 0x14(0x04)
	bool *0b11accf70; // 0x18(0x01)
	bool *44fd95d22d; // 0x19(0x01)
	bool *92e5ba5402; // 0x1a(0x01)
	bool *8b48054906; // 0x1b(0x01)
};

// ScriptStruct AIModule.*2a6e97209c
// Size: 0x1c0 (Inherited: 0x00)
struct F*2a6e97209c {
	struct UEnvQuery* Template; // 0x00(0x08)
	char pad_8[0x1b8]; // 0x08(0x1b8)
};

// ScriptStruct AIModule.*866b5c8c76
// Size: 0x68 (Inherited: 0x00)
struct F*866b5c8c76 {
	struct UEnvQuery* *e7500f6f85; // 0x00(0x08)
	struct UObject* Owner; // 0x08(0x08)
	struct UWorld* World; // 0x10(0x08)
	char pad_18[0x50]; // 0x18(0x50)
};

// ScriptStruct AIModule.*f5fe39ee35
// Size: 0x08 (Inherited: 0x00)
struct F*f5fe39ee35 {
	struct U*11ffea466c* *e27b265f94; // 0x00(0x08)
};

// ScriptStruct AIModule.*c2567548e9
// Size: 0x18 (Inherited: 0x00)
struct F*c2567548e9 {
	struct U*11ffea466c* Action; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};


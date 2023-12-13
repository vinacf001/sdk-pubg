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

// Enum AIModule.*b4124d6fb0
enum class *b4124d6fb0 : uint8 {
	*9941835131,
	*7e3ef55ce1,
	*4e03c021c0,
	*b4124d6fb0_MAX,
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

// Enum AIModule.*b804ee6a41
enum class *b804ee6a41 : uint8 {
	*a48c4ae6d0,
	*83dd2b72aa,
	*398b6107ac,
	*a67285df51,
	*b804ee6a41_MAX,
};

// Enum AIModule.*198a3bae68
enum class *198a3bae68 : uint8 {
	*1d0402134a,
	*7c9bf95b5f,
	*66f37974d8,
	*198a3bae68_MAX,
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

// Enum AIModule.*81627ee501
enum class *81627ee501 : uint8 {
	*72d832fa7f,
	*0c25b7579d,
	*deac291050,
	*81627ee501_MAX,
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

// Enum AIModule.*9bc8e8a156
enum class *9bc8e8a156 : uint8 {
	*7813f7bbff,
	*eb612d2764,
	*8b4bad4e8e,
	*9bc8e8a156_MAX,
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

// Enum AIModule.*13564ac2a0
enum class *13564ac2a0 : uint8 {
	*d2d0d2b0fc,
	*8dd0d86cf7,
	*635b13d4d6,
	*13564ac2a0_MAX,
};

// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8 {
	Absolute,
	RelativeToScores,
	EEQSNormalizationType_MAX,
};

// Enum AIModule.*16c724fc3f
enum class *16c724fc3f : uint8 {
	*161298cd21,
	*99779cb077,
	*cfb325f016,
	*cd41106d78,
	*ffbf657068,
	*16c724fc3f_MAX,
};

// Enum AIModule.*f9b10bd6fc
enum class *f9b10bd6fc : uint8 {
	*8803ca54b9,
	*19ca5c1483,
	*18d80f3990,
	*f9b10bd6fc_MAX,
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

// Enum AIModule.*485462fd67
enum class *485462fd67 : uint8 {
	*35e266d0ff,
	*09157f1509,
	*711867d470,
	*485462fd67_MAX,
};

// Enum AIModule.*50ff684d22
enum class *50ff684d22 : uint8 {
	*719202e5e9,
	*ee5be23a39,
	*823adcd6c6,
	*50ff684d22_MAX,
};

// Enum AIModule.*4a9561b84c
enum class *4a9561b84c : uint8 {
	*3e716c616a,
	*e13dad7408,
	*522ae64278,
	*4a9561b84c_MAX,
};

// ScriptStruct AIModule.*be5588f051
// Size: 0x04 (Inherited: 0x00)
struct F*be5588f051 {
	uint32 RequestID; // 0x00(0x04)
};

// ScriptStruct AIModule.*a946306d11
// Size: 0x48 (Inherited: 0x00)
struct F*a946306d11 {
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

// ScriptStruct AIModule.*208456e7fe
// Size: 0x50 (Inherited: 0x00)
struct F*208456e7fe {
	struct AActor* GoalActor; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)
};

// ScriptStruct AIModule.*853dcf25a1
// Size: 0x01 (Inherited: 0x00)
struct F*853dcf25a1 {
	bool TeamId; // 0x00(0x01)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderBoolValue : F*95adf729d2 {
	bool DefaultValue; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct AIModule.*95adf729d2
// Size: 0x28 (Inherited: 0x20)
struct F*95adf729d2 : F*0cbb134cf1 {
	struct UClass* PropertyType; // 0x20(0x08)
};

// ScriptStruct AIModule.*0cbb134cf1
// Size: 0x20 (Inherited: 0x00)
struct F*0cbb134cf1 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UProperty* *b36273c6db; // 0x08(0x08)
	struct U*73f3405f99* *855cad9769; // 0x10(0x08)
	struct FName *42c279a108; // 0x18(0x08)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderFloatValue : F*95adf729d2 {
	float DefaultValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x30 (Inherited: 0x28)
struct FAIDataProviderIntValue : F*95adf729d2 {
	int32 DefaultValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.*f1e8d32cfc
// Size: 0x30 (Inherited: 0x20)
struct F*f1e8d32cfc : F*0cbb134cf1 {
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct AIModule.*47d1f8c155
// Size: 0x04 (Inherited: 0x00)
struct F*47d1f8c155 {
	char bDetectEnemies : 1; // 0x00(0x01)
	char bDetectNeutrals : 1; // 0x00(0x01)
	char bDetectFriendlies : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct AIModule.*15e28a7d51
// Size: 0x20 (Inherited: 0x00)
struct F*15e28a7d51 {
	struct AActor* Target; // 0x00(0x08)
	struct TArray<struct F*a946306d11> LastSensedStimuli; // 0x08(0x10)
	char bIsHostile : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.*674506a016
// Size: 0x30 (Inherited: 0x00)
struct F*674506a016 {
	float Amount; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector HitLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* DamagedActor; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct AIModule.*940acac9e9
// Size: 0x30 (Inherited: 0x00)
struct F*940acac9e9 {
	char pad_0[0x4]; // 0x00(0x04)
	struct FVector NoiseLocation; // 0x04(0x0c)
	float Loudness; // 0x10(0x04)
	float MaxRange; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FName Tag; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct AIModule.*a98d6b3f60
// Size: 0x18 (Inherited: 0x00)
struct F*a98d6b3f60 {
	struct AActor* *c6181e343e; // 0x00(0x08)
	struct AActor* *ace47b789c; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.*3691499e65
// Size: 0x18 (Inherited: 0x00)
struct F*3691499e65 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* *94ad1af88f; // 0x08(0x08)
	struct AActor* Observer; // 0x10(0x08)
};

// ScriptStruct AIModule.*297b7f9f76
// Size: 0x38 (Inherited: 0x00)
struct F*297b7f9f76 {
	char pad_0[0x28]; // 0x00(0x28)
	struct AActor* *a1b26c54b1; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)
};

// ScriptStruct AIModule.*1b6aa77b4c
// Size: 0x20 (Inherited: 0x00)
struct F*1b6aa77b4c {
	char pad_0[0x10]; // 0x00(0x10)
	struct AActor* *13167ec261; // 0x10(0x08)
	struct AActor* OtherActor; // 0x18(0x08)
};

// ScriptStruct AIModule.*be9355b76c
// Size: 0x48 (Inherited: 0x00)
struct F*be9355b76c {
	struct UEnvQuery* *3d66e7d2bc; // 0x00(0x08)
	struct TArray<struct F*91be99e2f4> *1517cc4bc2; // 0x08(0x10)
	struct FBlackboardKeySelector *ad95ac839e; // 0x18(0x28)
	enum class EEnvQueryRunMode *8b7badce7d; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char bUseBBKeyForQueryTemplate : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct AIModule.*91be99e2f4
// Size: 0x38 (Inherited: 0x00)
struct F*91be99e2f4 {
	struct FName ParamName; // 0x00(0x08)
	enum class EAIParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
	struct FBlackboardKeySelector BBKey; // 0x10(0x28)
};

// ScriptStruct AIModule.*c2870f7c71
// Size: 0x40 (Inherited: 0x00)
struct F*c2870f7c71 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UClass* ItemType; // 0x10(0x08)
	char pad_18[0x14]; // 0x18(0x14)
	int32 OptionIndex; // 0x2c(0x04)
	int32 QueryID; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct AIModule.*bbba0bf1a9
// Size: 0x20 (Inherited: 0x00)
struct F*bbba0bf1a9 {
	float ExtentX; // 0x00(0x04)
	float ExtentY; // 0x04(0x04)
	float ExtentZ; // 0x08(0x04)
	struct FVector *7de6ea074a; // 0x0c(0x0c)
	enum class ECollisionChannel *53a2392c71; // 0x18(0x01)
	enum class EEnvOverlapShape *9ed19b2e2f; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	char *d0bc83a1c5 : 1; // 0x1c(0x01)
	char *282e1e4d6c : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct AIModule.EnvTraceData
// Size: 0x30 (Inherited: 0x00)
struct FEnvTraceData {
	int32 *89995e4501; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* NavigationFilter; // 0x08(0x08)
	float *8324da36bf; // 0x10(0x04)
	float *cd603a85aa; // 0x14(0x04)
	float ExtentX; // 0x18(0x04)
	float ExtentY; // 0x1c(0x04)
	float ExtentZ; // 0x20(0x04)
	float *5bf17a2baf; // 0x24(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x28(0x01)
	enum class ECollisionChannel *42ba84b1cd; // 0x29(0x01)
	enum class EEnvTraceShape *539c29961b; // 0x2a(0x01)
	enum class EEnvQueryTrace TraceMode; // 0x2b(0x01)
	char *be7b46afed : 1; // 0x2c(0x01)
	char *d0bc83a1c5 : 1; // 0x2c(0x01)
	char *1512a09009 : 1; // 0x2c(0x01)
	char *e322a97ff4 : 1; // 0x2c(0x01)
	char *64192d8a85 : 1; // 0x2c(0x01)
	char *7885556401 : 1; // 0x2c(0x01)
	char pad_2C_6 : 2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AIModule.EnvDirection
// Size: 0x20 (Inherited: 0x00)
struct FEnvDirection {
	struct UClass* LineFrom; // 0x00(0x08)
	struct UClass* LineTo; // 0x08(0x08)
	struct UClass* Rotation; // 0x10(0x08)
	enum class EEnvDirection *5214f1374d; // 0x18(0x01)
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

// ScriptStruct AIModule.*fa7c63d899
// Size: 0x30 (Inherited: 0x00)
struct F*fa7c63d899 {
	struct UBTCompositeNode* *13fbbc6193; // 0x00(0x08)
	struct UBTTaskNode* *fa8f44f71b; // 0x08(0x08)
	struct TArray<struct UBTDecorator*> *4eb0102556; // 0x10(0x10)
	struct TArray<struct F*74f592b89b> *f8da0bd798; // 0x20(0x10)
};

// ScriptStruct AIModule.*74f592b89b
// Size: 0x04 (Inherited: 0x00)
struct F*74f592b89b {
	enum class EBTDecoratorLogic Operation; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16 Number; // 0x02(0x02)
};

// ScriptStruct AIModule.*afb24ac7ad
// Size: 0x18 (Inherited: 0x00)
struct F*afb24ac7ad {
	struct UBehaviorTree* Asset; // 0x00(0x08)
	struct UBTCompositeNode* Template; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.BlackboardEntry
// Size: 0x18 (Inherited: 0x00)
struct FBlackboardEntry {
	struct FName EntryName; // 0x00(0x08)
	struct UBlackboardKeyType* KeyType; // 0x08(0x08)
	char *c4a3f086ab : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AIModule.*9993e90451
// Size: 0x20 (Inherited: 0x00)
struct F*9993e90451 {
	struct TArray<float> Angles; // 0x00(0x10)
	struct TArray<float> *70a1361177; // 0x10(0x10)
};

// ScriptStruct AIModule.*e8c6a47662
// Size: 0x1c (Inherited: 0x00)
struct F*e8c6a47662 {
	float *00a1e3b29f; // 0x00(0x04)
	float *99ff4ecb24; // 0x04(0x04)
	float *a2c9e3fd9d; // 0x08(0x04)
	float *8f36750dcd; // 0x0c(0x04)
	float *bbffc74593; // 0x10(0x04)
	float *063c94f9f0; // 0x14(0x04)
	bool *6cddb393cc; // 0x18(0x01)
	bool *4385bcc218; // 0x19(0x01)
	bool *acc501ae49; // 0x1a(0x01)
	bool *36f611ae0c; // 0x1b(0x01)
};

// ScriptStruct AIModule.*06d8ff006d
// Size: 0x1c0 (Inherited: 0x00)
struct F*06d8ff006d {
	struct UEnvQuery* Template; // 0x00(0x08)
	char pad_8[0x1b8]; // 0x08(0x1b8)
};

// ScriptStruct AIModule.*932703f4a4
// Size: 0x68 (Inherited: 0x00)
struct F*932703f4a4 {
	struct UEnvQuery* *3d66e7d2bc; // 0x00(0x08)
	struct UObject* Owner; // 0x08(0x08)
	struct UWorld* World; // 0x10(0x08)
	char pad_18[0x50]; // 0x18(0x50)
};

// ScriptStruct AIModule.*0c0c03d5e3
// Size: 0x08 (Inherited: 0x00)
struct F*0c0c03d5e3 {
	struct U*529104dcc3* *a7dec44f27; // 0x00(0x08)
};

// ScriptStruct AIModule.*b0843f664c
// Size: 0x18 (Inherited: 0x00)
struct F*b0843f664c {
	struct U*529104dcc3* Action; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};


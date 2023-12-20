// Class AIModule.AISense
// Size: 0x120 (Inherited: 0x30)
struct UAISense : UObject {
	float DefaultExpirationAge; // 0x30(0x04)
	enum class *aa6e9da3d9 NotifyType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bWantsNewPawnNotification : 1; // 0x38(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAIPerceptionSystem* *05833b56c5; // 0x40(0x08)
	char pad_48[0xd8]; // 0x48(0xd8)
};

// Class AIModule.AISense_Sight
// Size: 0x200 (Inherited: 0x120)
struct UAISense_Sight : UAISense {
	char pad_120[0xb0]; // 0x120(0xb0)
	int32 MaxTracesPerTick; // 0x1d0(0x04)
	int32 MinQueriesPerTimeSliceCheck; // 0x1d4(0x04)
	double MaxTimeSlicePerTick; // 0x1d8(0x08)
	float HighImportanceQueryDistanceThreshold; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	float MaxQueryImportance; // 0x1e8(0x04)
	float SightLimitQueryImportance; // 0x1ec(0x04)
	char pad_1F0[0x10]; // 0x1f0(0x10)
};

// Class AIModule.*a14e0da9c0
// Size: 0x50 (Inherited: 0x30)
struct U*a14e0da9c0 : UObject {
	struct FColor DebugColor; // 0x30(0x04)
	float MaxAge; // 0x34(0x04)
	char bStartsEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x17]; // 0x39(0x17)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x68 (Inherited: 0x50)
struct UAISenseConfig_Hearing : U*a14e0da9c0 {
	struct UClass* Implementation; // 0x50(0x08)
	float HearingRange; // 0x58(0x04)
	float LoSHearingRange; // 0x5c(0x04)
	char bUseLoSHearing : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct F*bb1f234aa3 DetectionByAffiliation; // 0x64(0x04)
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x70 (Inherited: 0x50)
struct UAISenseConfig_Sight : U*a14e0da9c0 {
	struct UClass* Implementation; // 0x50(0x08)
	float SightRadius; // 0x58(0x04)
	float LoseSightRadius; // 0x5c(0x04)
	float PeripheralVisionAngleDegrees; // 0x60(0x04)
	struct F*bb1f234aa3 DetectionByAffiliation; // 0x64(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class AIModule.BlackboardComponent
// Size: 0x300 (Inherited: 0x200)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* *92ac39946d; // 0x200(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x208(0x08)
	char pad_210[0x20]; // 0x210(0x20)
	struct TArray<struct UBlackboardKeyType*> *cb60369972; // 0x230(0x10)
	char pad_240[0xc0]; // 0x240(0xc0)

	void *03490a4a5c(); // Function AIModule.BlackboardComponent.*03490a4a5c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6637c5c
	void *e0dbcc2b56(); // Function AIModule.BlackboardComponent.*e0dbcc2b56 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x663753c
	void *00b6773e35(); // Function AIModule.BlackboardComponent.*00b6773e35 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6634e9c
	void *e86cc9dfdc(); // Function AIModule.BlackboardComponent.*e86cc9dfdc // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6632f9c
	void *b8a474fa69(); // Function AIModule.BlackboardComponent.*b8a474fa69 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6634c74
	void *dafed8928d(); // Function AIModule.BlackboardComponent.*dafed8928d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6634d2c
	void *9a929044d0(); // Function AIModule.BlackboardComponent.*9a929044d0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6637438
	void *f438e463a2(); // Function AIModule.BlackboardComponent.*f438e463a2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x663773c
	void *39c4875c8c(); // Function AIModule.BlackboardComponent.*39c4875c8c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6637844
	void *eb07559dc5(); // Function AIModule.BlackboardComponent.*eb07559dc5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6637b44
	void *76f13d13f1(); // Function AIModule.BlackboardComponent.*76f13d13f1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6634a88
	void *f08aced559(); // Function AIModule.BlackboardComponent.*f08aced559 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x663500c
	void *b6bdfb3cb2(); // Function AIModule.BlackboardComponent.*b6bdfb3cb2 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x663517c
	void *5cbaa8e07b(); // Function AIModule.BlackboardComponent.*5cbaa8e07b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6634de4
	void *50921fcfc6(); // Function AIModule.BlackboardComponent.*50921fcfc6 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6635364
	void *767e3992e5(); // Function AIModule.BlackboardComponent.*767e3992e5 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6635504
	void *e3f47ca089(); // Function AIModule.BlackboardComponent.*e3f47ca089 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6637944
	void *708c02383e(); // Function AIModule.BlackboardComponent.*708c02383e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6637dc0
	void *57e6c8c3db(); // Function AIModule.BlackboardComponent.*57e6c8c3db // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6634468
	void *b8facfb222(); // Function AIModule.BlackboardComponent.*b8facfb222 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6637a44
	void *bdd73cb7cf(); // Function AIModule.BlackboardComponent.*bdd73cb7cf // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66350c4
	void *308994858a(); // Function AIModule.BlackboardComponent.*308994858a // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6635248
	void *214a502ad8(); // Function AIModule.BlackboardComponent.*214a502ad8 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x663763c
	void *480a59561e(); // Function AIModule.BlackboardComponent.*480a59561e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6634f54
};

// Class AIModule.PathFollowingComponent
// Size: 0x4d0 (Inherited: 0x200)
struct UPathFollowingComponent : UActorComponent {
	char pad_200[0x130]; // 0x200(0x130)
	struct UNavMovementComponent* MovementComp; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)
	struct ANavigationData* *e052580b23; // 0x340(0x08)
	char pad_348[0x188]; // 0x348(0x188)

	void *cb29a79ce0(); // Function AIModule.PathFollowingComponent.*cb29a79ce0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x662f15c
	void OnNavDataRegistered(); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // Final|Native|Protected // @ game+0x6630214
	void *67002cf6fb(); // Function AIModule.PathFollowingComponent.*67002cf6fb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x662f0e0
	void OnActorBump(); // Function AIModule.PathFollowingComponent.OnActorBump // Native|Public|HasOutParms|HasDefaults // @ game+0x662fe98
};

// Class AIModule.*66752a7a1b
// Size: 0x30 (Inherited: 0x30)
struct U*66752a7a1b : UInterface {
};

// Class AIModule.AIController
// Size: 0x500 (Inherited: 0x470)
struct AAIController : AController {
	char pad_470[0x38]; // 0x470(0x38)
	char bStopAILogicOnUnposses : 1; // 0x4a8(0x01)
	char *0e810654b0 : 1; // 0x4a8(0x01)
	char *ea12e92a23 : 1; // 0x4a8(0x01)
	char *7dc0c0ee82 : 1; // 0x4a8(0x01)
	char *059eb95d16 : 1; // 0x4a8(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4a8(0x01)
	char pad_4A8_6 : 2; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x4b0(0x08)
	struct UBrainComponent* BrainComponent; // 0x4b8(0x08)
	struct UAIPerceptionComponent* *4f9c79812b; // 0x4c0(0x08)
	struct U*a95a97387c* ActionsComp; // 0x4c8(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4d0(0x08)
	struct UGameplayTasksComponent* *250efc078e; // 0x4d8(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x4e0(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x4e8(0x10)
	char pad_4F8[0x8]; // 0x4f8(0x08)

	void OnPossess(); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void *ccb0760844(); // Function AIModule.AIController.*ccb0760844 // Final|Native|Public|BlueprintCallable // @ game+0x6631368
	void *91de3a7b23(); // Function AIModule.AIController.*91de3a7b23 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x662f0b8
	void *d911259542(); // Function AIModule.AIController.*d911259542 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x662e958
	void *9634d29cd2(); // Function AIModule.AIController.*9634d29cd2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x662f3c4
	void OnUnpossess(); // Function AIModule.AIController.OnUnpossess // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnUsingBlackBoard(); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void *c870254592(); // Function AIModule.AIController.*c870254592 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x662ee20
	void *95796f5859(); // Function AIModule.AIController.*95796f5859 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x662ef0c
	void *150be04ddc(); // Function AIModule.AIController.*150be04ddc // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x662ee54
	void *2e32f9433a(); // Function AIModule.AIController.*2e32f9433a // Final|Native|Public|BlueprintCallable // @ game+0x662f908
	void *0476562773(); // Function AIModule.AIController.*0476562773 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x662f190
	void UseBlackboard(); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66315cc
	void K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x662f740
	void *5aee4409e9(); // Function AIModule.AIController.*5aee4409e9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x662ef30
	void *951164f513(); // Function AIModule.AIController.*951164f513 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662fba0
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x662f67c
	void OnGameplayTaskResourcesClaimed(); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x6630058
	void *1504aa31fa(); // Function AIModule.AIController.*1504aa31fa // Final|Native|Public|BlueprintCallable // @ game+0x6631078
	void *7e8b07238c(); // Function AIModule.AIController.*7e8b07238c // Final|Native|Public|BlueprintCallable // @ game+0x662e618
	void RunBehaviorTree(); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x6630e10
	void K2_SetFocalPoint(); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662f698
};

// Class AIModule.BlackboardKeyType
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AIModule.BTNode
// Size: 0x70 (Inherited: 0x30)
struct UBTNode : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString NodeName; // 0x38(0x10)
	struct FString Tag; // 0x48(0x10)
	struct UBehaviorTree* *fbdb335198; // 0x58(0x08)
	struct UBTCompositeNode* *9df5519921; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class AIModule.BTAuxiliaryNode
// Size: 0x78 (Inherited: 0x70)
struct UBTAuxiliaryNode : UBTNode {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class AIModule.BTDecorator
// Size: 0x80 (Inherited: 0x78)
struct UBTDecorator : UBTAuxiliaryNode {
	char pad_78_0 : 7; // 0x78(0x01)
	char *1a8278ba93 : 1; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
};

// Class AIModule.BTDecorator_BlackboardBase
// Size: 0xa8 (Inherited: 0x80)
struct UBTDecorator_BlackboardBase : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; // 0x80(0x28)
};

// Class AIModule.BTDecorator_Blackboard
// Size: 0xd8 (Inherited: 0xa8)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32 IntValue; // 0xa8(0x04)
	float FloatValue; // 0xac(0x04)
	struct FString StringValue; // 0xb0(0x10)
	struct FString *04ce029884; // 0xc0(0x10)
	bool OperationType; // 0xd0(0x01)
	enum class *a569661a79 NotifyObserver; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
};

// Class AIModule.BTService
// Size: 0x88 (Inherited: 0x78)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x78(0x04)
	float *a370123fc4; // 0x7c(0x04)
	char *98da7e7b54 : 1; // 0x80(0x01)
	char *1cee9dcefe : 1; // 0x80(0x01)
	char pad_80_2 : 6; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.BTService_BlackboardBase
// Size: 0xb0 (Inherited: 0x88)
struct UBTService_BlackboardBase : UBTService {
	struct FBlackboardKeySelector BlackboardKey; // 0x88(0x28)
};

// Class AIModule.BTService_DefaultFocus
// Size: 0xb8 (Inherited: 0xb0)
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	bool *032f4f9c49; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class AIModule.AIPerceptionComponent
// Size: 0x2e0 (Inherited: 0x200)
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct U*a14e0da9c0*> *3764f25dfe; // 0x200(0x10)
	struct UClass* *8fad5a55b8; // 0x210(0x08)
	char pad_218[0x10]; // 0x218(0x10)
	struct AAIController* *334a3a5a20; // 0x228(0x08)
	char pad_230[0x80]; // 0x230(0x80)
	struct FMulticastDelegate OnPerceptionUpdated; // 0x2b0(0x10)
	struct FMulticastDelegate OnTargetPerceptionUpdated; // 0x2c0(0x10)
	char pad_2D0[0x10]; // 0x2d0(0x10)

	void *52e6c56e93(); // Function AIModule.AIPerceptionComponent.*52e6c56e93 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662ef98
	void OnOwnerEndPlay(); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // Final|Native|Public // @ game+0x66302a4
	void *c8071d7713(); // Function AIModule.AIPerceptionComponent.*c8071d7713 // Final|Native|Public|BlueprintCallable // @ game+0x6630dfc
	void *406861bfe8(); // Function AIModule.AIPerceptionComponent.*406861bfe8 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662f1a8
	void *c6e4b498c7(); // Function AIModule.AIPerceptionComponent.*c6e4b498c7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662ed00
	void *6d033b5619(); // Function AIModule.AIPerceptionComponent.*6d033b5619 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662e970
	void *19da8c858f(); // Function AIModule.AIPerceptionComponent.*19da8c858f // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662ed00
};

// Class AIModule.BTTaskNode
// Size: 0x88 (Inherited: 0x70)
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; // 0x70(0x10)
	char *84f152778f : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.BTTask_BlackboardBase
// Size: 0xb0 (Inherited: 0x88)
struct UBTTask_BlackboardBase : UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey; // 0x88(0x28)
};

// Class AIModule.BTTask_MoveTo
// Size: 0xc8 (Inherited: 0xb0)
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UClass* *7820bcd6e4; // 0xb8(0x08)
	float *88137acb97; // 0xc0(0x04)
	char bObserveBlackboardValue : 1; // 0xc4(0x01)
	char *7dc0c0ee82 : 1; // 0xc4(0x01)
	char *f54d025578 : 1; // 0xc4(0x01)
	char *e0093bab68 : 1; // 0xc4(0x01)
	char *2008501114 : 1; // 0xc4(0x01)
	char *75136d3adf : 1; // 0xc4(0x01)
	char pad_C4_6 : 2; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// Class AIModule.*f71eda1e19
// Size: 0x98 (Inherited: 0x88)
struct U*f71eda1e19 : UBTTaskNode {
	struct FGameplayTag *b0790a1921; // 0x88(0x08)
	bool *01171cb00d; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float *22c202ae55; // 0x94(0x04)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xd0 (Inherited: 0xc8)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xc8(0x01)
	char *85b4028e51 : 1; // 0xc8(0x01)
	char *da43f47260 : 1; // 0xc8(0x01)
	char pad_C8_3 : 5; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class AIModule.BTTask_Wait
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_Wait : UBTTaskNode {
	float *7cd813c40c; // 0x88(0x04)
	float *a370123fc4; // 0x8c(0x04)
};

// Class AIModule.*8405618791
// Size: 0xb8 (Inherited: 0x90)
struct U*8405618791 : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; // 0x90(0x28)
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x520 (Inherited: 0x4d0)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	struct FVector *188e53cbbf; // 0x4d0(0x0c)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UCharacterMovementComponent* CharacterMovement; // 0x4e0(0x08)
	struct F*c4bee3ea12 AvoidanceGroup; // 0x4e8(0x04)
	struct F*c4bee3ea12 GroupsToAvoid; // 0x4ec(0x04)
	struct F*c4bee3ea12 GroupsToIgnore; // 0x4f0(0x04)
	char pad_4F4[0x2c]; // 0x4f4(0x2c)

	void *749a8f7b31(); // Function AIModule.CrowdFollowingComponent.*749a8f7b31 // Native|Public|BlueprintCallable // @ game+0x6638058
};

// Class AIModule.BTService_BlueprintBase
// Size: 0xb0 (Inherited: 0x88)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* *334a3a5a20; // 0x88(0x08)
	struct AActor* *d86533e823; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)
	char *0d603bd9d7 : 1; // 0xa8(0x01)
	char *6e3f65c09e : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void ReceiveDeactivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveSearchStartAI(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveSearchStart(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveActivation(); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveActivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTick(); // Function AIModule.BTService_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void *7650563a5a(); // Function AIModule.BTService_BlueprintBase.*7650563a5a // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x66354a0
	void ReceiveTickAI(); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveDeactivation(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // Event|Protected|BlueprintEvent // @ game+0x3b43ac
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xb8 (Inherited: 0x88)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* *334a3a5a20; // 0x88(0x08)
	struct AActor* *d86533e823; // 0x90(0x08)
	char pad_98[0x18]; // 0x98(0x18)
	char *0d603bd9d7 : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	void ReceiveExecute(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveAbortAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTickAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void *1effa25a93(); // Function AIModule.BTTask_BlueprintBase.*1effa25a93 // Final|Native|Protected|BlueprintCallable // @ game+0x6637038
	void *f9fb48d87d(); // Function AIModule.BTTask_BlueprintBase.*f9fb48d87d // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x66354e0
	void ReceiveAbort(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void *944cf03384(); // Function AIModule.BTTask_BlueprintBase.*944cf03384 // Final|Native|Protected|BlueprintCallable // @ game+0x66333ac
	void *72cd22c337(); // Function AIModule.BTTask_BlueprintBase.*72cd22c337 // Final|Native|Protected|BlueprintCallable // @ game+0x6636fa8
	void ReceiveExecuteAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTick(); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void *df7216db34(); // Function AIModule.BTTask_BlueprintBase.*df7216db34 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x66354c4
	void *0e46336569(); // Function AIModule.BTTask_BlueprintBase.*0e46336569 // Final|Native|Protected|BlueprintCallable // @ game+0x66333c0
};

// Class AIModule.AIResourceInterface
// Size: 0x30 (Inherited: 0x30)
struct UAIResourceInterface : UInterface {
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x70 (Inherited: 0x30)
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	void OnMoveCompleted(); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // Final|Native|Public // @ game+0x6630138
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void *a2ed72a790(); // Function AIModule.AIBlueprintHelperLibrary.*a2ed72a790 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x662e6a8
	void *218d260635(); // Function AIModule.AIBlueprintHelperLibrary.*218d260635 // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x662f7d8
	void *ea1caca4ca(); // Function AIModule.AIBlueprintHelperLibrary.*ea1caca4ca // Final|Native|Static|Public|BlueprintCallable // @ game+0x6630eb8
	void *185625e58f(); // Function AIModule.AIBlueprintHelperLibrary.*185625e58f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x662f3e4
	void *7ab182d62c(); // Function AIModule.AIBlueprintHelperLibrary.*7ab182d62c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x662f5c8
	void GetBlackboard(); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x662ec70
	void *290e6c9037(); // Function AIModule.AIBlueprintHelperLibrary.*290e6c9037 // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x66313f8
	void *7d88d7a350(); // Function AIModule.AIBlueprintHelperLibrary.*7d88d7a350 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x662f4e0
	void *1a11520b53(); // Function AIModule.AIBlueprintHelperLibrary.*1a11520b53 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x662e8c8
	void *ea928b6a83(); // Function AIModule.AIBlueprintHelperLibrary.*ea928b6a83 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x663113c
};

// Class AIModule.*c7ce646f1a
// Size: 0x30 (Inherited: 0x30)
struct U*c7ce646f1a : UInterface {
};

// Class AIModule.*c0c7c89972
// Size: 0x30 (Inherited: 0x30)
struct U*c0c7c89972 : UInterface {
};

// Class AIModule.DetourCrowdAIController
// Size: 0x500 (Inherited: 0x500)
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.GridPathAIController
// Size: 0x500 (Inherited: 0x500)
struct AGridPathAIController : AAIController {
};

// Class AIModule.*1067c9a701
// Size: 0x30 (Inherited: 0x30)
struct U*1067c9a701 : UObject {
};

// Class AIModule.*d9c5cefb2c
// Size: 0x48 (Inherited: 0x30)
struct U*d9c5cefb2c : U*1067c9a701 {
	struct FName ParamName; // 0x30(0x08)
	float FloatValue; // 0x38(0x04)
	int32 IntValue; // 0x3c(0x04)
	bool *698018193e; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class AIModule.*9926e1e5e9
// Size: 0x58 (Inherited: 0x48)
struct U*9926e1e5e9 : U*d9c5cefb2c {
	float Min; // 0x48(0x04)
	float Max; // 0x4c(0x04)
	char *66ac90dc20 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.AIHotSpotManager
// Size: 0x30 (Inherited: 0x30)
struct UAIHotSpotManager : UObject {
};

// Class AIModule.AIPerceptionSystem
// Size: 0x138 (Inherited: 0x30)
struct UAIPerceptionSystem : UObject {
	char pad_30[0x58]; // 0x30(0x58)
	struct TArray<struct UAISense*> *fb814fc886; // 0x88(0x10)
	float PerceptionAgingRate; // 0x98(0x04)
	char pad_9C[0x9c]; // 0x9c(0x9c)

	void *54113d2e7a(); // Function AIModule.AIPerceptionSystem.*54113d2e7a // Final|Native|Public|BlueprintCallable // @ game+0x6630840
	void OnPerceptionStimuliSourceEndPlay(); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // Final|Native|Protected // @ game+0x6630388
	void *15ebb2ebb3(); // Function AIModule.AIPerceptionSystem.*15ebb2ebb3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6630ae4
	void *fb7e358a49(); // Function AIModule.AIPerceptionSystem.*fb7e358a49 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66304e8
	void *06af7f8124(); // Function AIModule.AIPerceptionSystem.*06af7f8124 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x662f274
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x220 (Inherited: 0x200)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0x200(0x01)
	char pad_200_1 : 7; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct TArray<struct UClass*> RegisterAsSourceForSenses; // 0x208(0x10)
	char pad_218[0x8]; // 0x218(0x08)

	void *383f52a322(); // Function AIModule.AIPerceptionStimuliSourceComponent.*383f52a322 // Final|Native|Public|BlueprintCallable // @ game+0x6631528
	void *c9646300c7(); // Function AIModule.AIPerceptionStimuliSourceComponent.*c9646300c7 // Final|Native|Public|BlueprintCallable // @ game+0x663153c
	void *10e8cb9ede(); // Function AIModule.AIPerceptionStimuliSourceComponent.*10e8cb9ede // Final|Native|Public|BlueprintCallable // @ game+0x6630458
	void *22486dd08c(); // Function AIModule.AIPerceptionStimuliSourceComponent.*22486dd08c // Final|Native|Public|BlueprintCallable // @ game+0x6630604
};

// Class AIModule.AIResource_Movement
// Size: 0x40 (Inherited: 0x40)
struct UAIResource_Movement : UGameplayTaskResource {
};

// Class AIModule.AIResource_Logic
// Size: 0x40 (Inherited: 0x40)
struct UAIResource_Logic : UGameplayTaskResource {
};

// Class AIModule.AISense_Blueprint
// Size: 0x150 (Inherited: 0x120)
struct UAISense_Blueprint : UAISense {
	struct UClass* ListenerDataType; // 0x120(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x128(0x10)
	struct TArray<struct U*02bed1b956*> *c660d2250b; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)

	void *f561d1d53d(); // Function AIModule.AISense_Blueprint.*f561d1d53d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662ea9c
	void OnUpdate(); // Function AIModule.AISense_Blueprint.OnUpdate // Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnListenerRegistered(); // Function AIModule.AISense_Blueprint.OnListenerRegistered // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnListenerUpdated(); // Function AIModule.AISense_Blueprint.OnListenerUpdated // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnListenerUnregistered(); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void K2_OnNewPawn(); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void *b5c49ed63e(); // Function AIModule.AISense_Blueprint.*b5c49ed63e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662eb64
};

// Class AIModule.AISense_Damage
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Damage : UAISense {
	struct TArray<struct F*2d46306a24> *92d6311b0e; // 0x120(0x10)

	void *fa6dd54e7e(); // Function AIModule.AISense_Damage.*fa6dd54e7e // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6630618
};

// Class AIModule.AISense_Hearing
// Size: 0x190 (Inherited: 0x120)
struct UAISense_Hearing : UAISense {
	struct TArray<struct F*56a6032375> *544a315429; // 0x120(0x10)
	float SpeedOfSoundSq; // 0x130(0x04)
	char pad_134[0x5c]; // 0x134(0x5c)

	void *dd83ffb052(); // Function AIModule.AISense_Hearing.*dd83ffb052 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x66308d0
};

// Class AIModule.AISense_Prediction
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Prediction : UAISense {
	struct TArray<struct F*9bff58793a> *92d6311b0e; // 0x120(0x10)

	void *07148cf4d2(); // Function AIModule.AISense_Prediction.*07148cf4d2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6630ce0
	void *e1e60a93e3(); // Function AIModule.AISense_Prediction.*e1e60a93e3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6630bc4
};

// Class AIModule.AISense_Team
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Team : UAISense {
	struct TArray<struct F*e5dab2e477> *92d6311b0e; // 0x120(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Touch : UAISense {
	struct TArray<struct F*34ce55761d> *92d6311b0e; // 0x120(0x10)
};

// Class AIModule.*90c7fb919f
// Size: 0x108 (Inherited: 0x108)
struct U*90c7fb919f : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x58 (Inherited: 0x50)
struct UAISenseConfig_Blueprint : U*a14e0da9c0 {
	struct UClass* Implementation; // 0x50(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x58 (Inherited: 0x50)
struct UAISenseConfig_Damage : U*a14e0da9c0 {
	struct UClass* Implementation; // 0x50(0x08)
};

// Class AIModule.*2d33b9e2a3
// Size: 0x50 (Inherited: 0x50)
struct U*2d33b9e2a3 : U*a14e0da9c0 {
};

// Class AIModule.*5016ea093f
// Size: 0x50 (Inherited: 0x50)
struct U*5016ea093f : U*a14e0da9c0 {
};

// Class AIModule.*fe0d42de32
// Size: 0x50 (Inherited: 0x50)
struct U*fe0d42de32 : U*a14e0da9c0 {
};

// Class AIModule.*02bed1b956
// Size: 0x30 (Inherited: 0x30)
struct U*02bed1b956 : UObject {
};

// Class AIModule.*81a8684765
// Size: 0x60 (Inherited: 0x30)
struct U*81a8684765 : U*02bed1b956 {
	struct F*2d46306a24 Event; // 0x30(0x30)
};

// Class AIModule.*c5b321eb91
// Size: 0x60 (Inherited: 0x30)
struct U*c5b321eb91 : U*02bed1b956 {
	struct F*56a6032375 Event; // 0x30(0x30)
};

// Class AIModule.AISystem
// Size: 0x118 (Inherited: 0x50)
struct UAISystem : UAISystemBase {
	struct FStringClassReference PerceptionSystemClassName; // 0x50(0x10)
	struct FStringClassReference HotSpotManagerClassName; // 0x60(0x10)
	float AcceptanceRadius; // 0x70(0x04)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x74(0x04)
	float PathfollowingNavLinkAcceptanceRadius; // 0x78(0x04)
	bool bFinishMoveOnGoalOverlap; // 0x7c(0x01)
	bool bAcceptPartialPaths; // 0x7d(0x01)
	bool bAllowStrafing; // 0x7e(0x01)
	bool bEnableBTAITasks; // 0x7f(0x01)
	bool bAllowControllersAsEQSQuerier; // 0x80(0x01)
	bool bEnableDebuggerPlugin; // 0x81(0x01)
	enum class ECollisionChannel DefaultSightCollisionChannel; // 0x82(0x01)
	char pad_83[0x5]; // 0x83(0x05)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0x88(0x08)
	struct UEnvQueryManager* *52bf08d3f5; // 0x90(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0x98(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> *20bcdd6f51; // 0xa0(0x10)
	struct UAIHotSpotManager* *8590abfedd; // 0xb0(0x08)
	struct U*96e7d3e9ce* *2a4b0b5604; // 0xb8(0x08)
	char pad_C0[0x58]; // 0xc0(0x58)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // Exec|Native|Public // @ game+0x5e55aec
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // Exec|Native|Public // @ game+0x6631ff4
};

// Class AIModule.AITask
// Size: 0x78 (Inherited: 0x70)
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; // 0x70(0x08)
};

// Class AIModule.AITask_LockLogic
// Size: 0x78 (Inherited: 0x78)
struct UAITask_LockLogic : UAITask {
};

// Class AIModule.AITask_MoveTo
// Size: 0x128 (Inherited: 0x78)
struct UAITask_MoveTo : UAITask {
	struct FMulticastDelegate OnRequestFailed; // 0x78(0x10)
	struct FMulticastDelegate OnMoveFinished; // 0x88(0x10)
	struct F*6df0658f8d *6f0627bc29; // 0x98(0x50)
	char pad_E8[0x40]; // 0xe8(0x40)

	void AIMoveTo(); // Function AIModule.AITask_MoveTo.AIMoveTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x663200c
};

// Class AIModule.EnvQueryItemType
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryItemType : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AIModule.EnvQueryContext
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext : UObject {
};

// Class AIModule.BehaviorTreeTypes
// Size: 0x30 (Inherited: 0x30)
struct UBehaviorTreeTypes : UObject {
};

// Class AIModule.EnvQueryTypes
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryTypes : UObject {
};

// Class AIModule.AITask_RunEQS
// Size: 0x150 (Inherited: 0x78)
struct UAITask_RunEQS : UAITask {
	char pad_78[0xd8]; // 0x78(0xd8)

	void *27c96fa503(); // Function AIModule.AITask_RunEQS.*27c96fa503 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6635ad0
};

// Class AIModule.BrainComponent
// Size: 0x260 (Inherited: 0x200)
struct UBrainComponent : UActorComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0x208(0x08)
	struct AAIController* *334a3a5a20; // 0x210(0x08)
	char pad_218[0x48]; // 0x218(0x48)

	void IsRunning(); // Function AIModule.BrainComponent.IsRunning // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3c16c
	void *8ec249724d(); // Function AIModule.BrainComponent.*8ec249724d // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6635478
	void *217008070d(); // Function AIModule.BrainComponent.*217008070d // Native|Public|BlueprintCallable // @ game+0x6637f94
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // Native|Public|BlueprintCallable // @ game+0x8cdac0
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x3a0 (Inherited: 0x260)
struct UBehaviorTreeComponent : UBrainComponent {
	char pad_260[0x20]; // 0x260(0x20)
	struct TArray<struct UBTNode*> *d85ddf8cd1; // 0x280(0x10)
	char pad_290[0x110]; // 0x290(0x110)

	void *1c2eff4b84(); // Function AIModule.BehaviorTreeComponent.*1c2eff4b84 // Native|Public|BlueprintCallable // @ game+0x6636ec8
	void *f7c0c8f63a(); // Function AIModule.BehaviorTreeComponent.*f7c0c8f63a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6634ba4
	void *6bd185ff13(); // Function AIModule.BehaviorTreeComponent.*6bd185ff13 // Final|Native|Public|BlueprintCallable // @ game+0x66322e0
};

// Class AIModule.BTCompositeNode
// Size: 0xe0 (Inherited: 0x70)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct F*f9166b06a6> Children; // 0x70(0x10)
	struct TArray<struct UBTService*> Services; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)
};

// Class AIModule.BehaviorTree
// Size: 0x68 (Inherited: 0x30)
struct UBehaviorTree : UObject {
	struct UBTCompositeNode* RootNode; // 0x30(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x38(0x08)
	struct TArray<struct UBTDecorator*> *ade6418ff8; // 0x40(0x10)
	struct TArray<struct F*4d9a8a794c> *f0fcae42bc; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class AIModule.BehaviorTreeManager
// Size: 0x58 (Inherited: 0x30)
struct UBehaviorTreeManager : UObject {
	int32 MaxDebuggerSteps; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct F*072519ed7c> *296418795a; // 0x38(0x10)
	struct TArray<struct UBehaviorTreeComponent*> *a4b70eeb97; // 0x48(0x10)
};

// Class AIModule.BlackboardData
// Size: 0x58 (Inherited: 0x38)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x38(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x40(0x10)
	char *9e4d856a96 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.BlackboardKeyType_Bool
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Class
// Size: 0x40 (Inherited: 0x38)
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	struct UClass* *424cb498b0; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x58 (Inherited: 0x38)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x38(0x08)
	struct FString EnumName; // 0x40(0x10)
	char *28e26356b7 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.BlackboardKeyType_Float
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Float : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Int
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Int : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Name
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Name : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x50 (Inherited: 0x38)
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	struct FString EnumName; // 0x38(0x10)
	struct UEnum* EnumType; // 0x48(0x08)
};

// Class AIModule.BlackboardKeyType_Object
// Size: 0x40 (Inherited: 0x38)
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	struct UClass* *424cb498b0; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_String
// Size: 0x48 (Inherited: 0x38)
struct UBlackboardKeyType_String : UBlackboardKeyType {
	struct FString StringValue; // 0x38(0x10)
};

// Class AIModule.BlackboardKeyType_Vector
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {

	void *a81f7bd198(); // Function AIModule.BTFunctionLibrary.*a81f7bd198 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6636428
	void *cd49175bb3(); // Function AIModule.BTFunctionLibrary.*cd49175bb3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x663426c
	void *ef927f0bdb(); // Function AIModule.BTFunctionLibrary.*ef927f0bdb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6633714
	void *3bdb03ce6a(); // Function AIModule.BTFunctionLibrary.*3bdb03ce6a // Final|Native|Static|Public|BlueprintCallable // @ game+0x5dae7a0
	void *c2fcd68af6(); // Function AIModule.BTFunctionLibrary.*c2fcd68af6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6633598
	void *7544bc0298(); // Function AIModule.BTFunctionLibrary.*7544bc0298 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6634584
	void *7b41efc8df(); // Function AIModule.BTFunctionLibrary.*7b41efc8df // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66362b4
	void *1a27448646(); // Function AIModule.BTFunctionLibrary.*1a27448646 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6632e30
	void *a043a6437c(); // Function AIModule.BTFunctionLibrary.*a043a6437c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66340fc
	void *0cff4587e4(); // Function AIModule.BTFunctionLibrary.*0cff4587e4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6636798
	void GetOwnersBlackboard(); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6634614
	void *ebfba9608b(); // Function AIModule.BTFunctionLibrary.*ebfba9608b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6633a10
	void *59328f8562(); // Function AIModule.BTFunctionLibrary.*59328f8562 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6637ecc
	void *d3d4defc57(); // Function AIModule.BTFunctionLibrary.*d3d4defc57 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6632e30
	void *40b1e656af(); // Function AIModule.BTFunctionLibrary.*40b1e656af // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6633e3c
	void *5c41be9f4a(); // Function AIModule.BTFunctionLibrary.*5c41be9f4a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6633468
	void *414665e898(); // Function AIModule.BTFunctionLibrary.*414665e898 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6636b28
	void *cf8a0b3799(); // Function AIModule.BTFunctionLibrary.*cf8a0b3799 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6635d88
	void *7b3a5d06f4(); // Function AIModule.BTFunctionLibrary.*7b3a5d06f4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66365e0
	void *e3c8eb437c(); // Function AIModule.BTFunctionLibrary.*e3c8eb437c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6635f44
	void *5f3da113e3(); // Function AIModule.BTFunctionLibrary.*5f3da113e3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6636950
	void *b8378a49ec(); // Function AIModule.BTFunctionLibrary.*b8378a49ec // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66360fc
	void *89fac6fb2e(); // Function AIModule.BTFunctionLibrary.*89fac6fb2e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6633b44
	void *a4f22ebacc(); // Function AIModule.BTFunctionLibrary.*a4f22ebacc // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6633fbc
	void *df827f4bc7(); // Function AIModule.BTFunctionLibrary.*df827f4bc7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6636cf0
	void *9ab88da5bc(); // Function AIModule.BTFunctionLibrary.*9ab88da5bc // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6633cc0
	void *7b43f551bb(); // Function AIModule.BTFunctionLibrary.*7b43f551bb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6633894
};

// Class AIModule.*d594778355
// Size: 0xd8 (Inherited: 0xd8)
struct U*d594778355 : UBTDecorator_Blackboard {
};

// Class AIModule.*6552b8bf38
// Size: 0xe8 (Inherited: 0xa8)
struct U*6552b8bf38 : UBTDecorator_BlackboardBase {
	float *6feaf64020; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FAIDataProviderFloatValue *cbd870b859; // 0xb0(0x30)
	enum class FAIDistanceType *d141d9c9f2; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	char bUseParametrizedRadius : 1; // 0xe4(0x01)
	char *933a5ae0c5 : 1; // 0xe4(0x01)
	char bPathFindingBasedTest : 1; // 0xe4(0x01)
	char pad_E4_3 : 5; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
};

// Class AIModule.*174713a6a8
// Size: 0xb0 (Inherited: 0xa8)
struct U*174713a6a8 : UBTDecorator_BlackboardBase {
	struct UClass* *0ebd76ff4c; // 0xa8(0x08)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xb8 (Inherited: 0x80)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* *334a3a5a20; // 0x80(0x08)
	struct AActor* *d86533e823; // 0x88(0x08)
	struct TArray<struct FName> *d2a2209ab4; // 0x90(0x10)
	char pad_A0[0x10]; // 0xa0(0x10)
	char *0d603bd9d7 : 1; // 0xb0(0x01)
	char *bfb7b126b6 : 1; // 0xb0(0x01)
	char *4af9da8004 : 1; // 0xb0(0x01)
	char pad_B0_3 : 5; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	void ReceiveExecutionStartAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void PerformConditionCheckAI(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void PerformConditionCheck(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveExecutionStart(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveObserverActivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTick(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveObserverActivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveObserverDeactivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveExecutionFinish(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void *29af98ab36(); // Function AIModule.BTDecorator_BlueprintBase.*29af98ab36 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x6635454
	void *664312a8f8(); // Function AIModule.BTDecorator_BlueprintBase.*664312a8f8 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x6635430
	void ReceiveObserverDeactivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTickAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveExecutionFinishAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // Event|Protected|BlueprintEvent // @ game+0x3b43ac
};

// Class AIModule.*7ef8511507
// Size: 0xe0 (Inherited: 0x80)
struct U*7ef8511507 : UBTDecorator {
	struct FBlackboardKeySelector *424fe67206; // 0x80(0x28)
	enum class EGameplayContainerMatchType *368a6377b4; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FGameplayTagContainer GameplayTags; // 0xb0(0x20)
	struct FString *04ce029884; // 0xd0(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xd8 (Inherited: 0x80)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FBlackboardKeySelector *a082578159; // 0x88(0x28)
	struct FBlackboardKeySelector *49456b04f5; // 0xb0(0x28)
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0x108 (Inherited: 0x80)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float *70c0914687; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FBlackboardKeySelector *f73cae34bc; // 0x88(0x28)
	struct FBlackboardKeySelector *c83656ec07; // 0xb0(0x28)
	struct FBlackboardKeySelector *78bca14bd2; // 0xd8(0x28)
	char pad_100[0x8]; // 0x100(0x08)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x88 (Inherited: 0x80)
struct UBTDecorator_Cooldown : UBTDecorator {
	float *9efd00caa3; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xe0 (Inherited: 0x80)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector *a082578159; // 0x80(0x28)
	struct FBlackboardKeySelector *49456b04f5; // 0xa8(0x28)
	char *e44a938865 : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	enum class EPathExistanceQueryType *7ed40a645e; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UClass* *7820bcd6e4; // 0xd8(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x80 (Inherited: 0x80)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xe0 (Inherited: 0x80)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float *70c0914687; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FBlackboardKeySelector *f73cae34bc; // 0x88(0x28)
	struct FBlackboardKeySelector *78bca14bd2; // 0xb0(0x28)
	char *e9f74229e9 : 1; // 0xd8(0x01)
	char *412dbf7f2d : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x90 (Inherited: 0x80)
struct UBTDecorator_Loop : UBTDecorator {
	int32 *88bfa41e38; // 0x80(0x04)
	bool bInfiniteLoop; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float *17fcdab298; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x80 (Inherited: 0x80)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.*44693bad78
// Size: 0x90 (Inherited: 0x80)
struct U*44693bad78 : UBTDecorator {
	struct FGameplayTag *b0790a1921; // 0x80(0x08)
	float *22c202ae55; // 0x88(0x04)
	bool *01171cb00d; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// Class AIModule.*f9204af516
// Size: 0x90 (Inherited: 0x80)
struct U*f9204af516 : UBTDecorator {
	struct FGameplayTag *b0790a1921; // 0x80(0x08)
	float *22c202ae55; // 0x88(0x04)
	bool *01171cb00d; // 0x8c(0x01)
	bool bActivatesCooldown; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x88 (Inherited: 0x80)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.*2877528a1d
// Size: 0x140 (Inherited: 0xb0)
struct U*2877528a1d : UBTService_BlackboardBase {
	struct F*85e53cc507 *ab29a08819; // 0xb0(0x48)
	char pad_F8[0x48]; // 0xf8(0x48)
};

// Class AIModule.BTComposite_Selector
// Size: 0xe0 (Inherited: 0xe0)
struct UBTComposite_Selector : UBTCompositeNode {
};

// Class AIModule.BTComposite_Sequence
// Size: 0xe0 (Inherited: 0xe0)
struct UBTComposite_Sequence : UBTCompositeNode {
};

// Class AIModule.BTComposite_SimpleParallel
// Size: 0xe0 (Inherited: 0xe0)
struct UBTComposite_SimpleParallel : UBTCompositeNode {
	enum class EBTParallelMode *9bc4e4cda9; // 0xd8(0x01)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xb8 (Inherited: 0xb0)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class AIModule.BTTask_RunEQSQuery
// Size: 0x1a0 (Inherited: 0xb0)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	struct UEnvQuery* *e7500f6f85; // 0xb0(0x08)
	struct TArray<struct FEnvNamedValue> *a31c7984da; // 0xb8(0x10)
	struct TArray<struct F*5ede5c6dd5> *293bcaf38d; // 0xc8(0x10)
	enum class EEnvQueryRunMode *fdee3be200; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FBlackboardKeySelector *64aa8c8146; // 0xe0(0x28)
	bool bUseBBKey; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct F*85e53cc507 *ab29a08819; // 0x110(0x48)
	char pad_158[0x48]; // 0x158(0x48)
};

// Class AIModule.*06e5ec2faf
// Size: 0x90 (Inherited: 0x88)
struct U*06e5ec2faf : UBTTaskNode {
	char *7048602f49 : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_MakeNoise : UBTTaskNode {
	float *bc941bdfeb; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class AIModule.*90a97a6658
// Size: 0x88 (Inherited: 0x88)
struct U*90a97a6658 : UBTTaskNode {
};

// Class AIModule.*007188c859
// Size: 0x90 (Inherited: 0x88)
struct U*007188c859 : U*90a97a6658 {
	struct U*11ffea466c* Action; // 0x88(0x08)
};

// Class AIModule.*c74d868a0a
// Size: 0x100 (Inherited: 0x88)
struct U*c74d868a0a : UBTTaskNode {
	struct UAnimationAsset* *6f061dd54a; // 0x88(0x08)
	char bLooping : 1; // 0x90(0x01)
	char *99ec413aaf : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UBehaviorTreeComponent* *164ddd597a; // 0x98(0x08)
	struct USkeletalMeshComponent* *65188a44d9; // 0xa0(0x08)
	char pad_A8[0x58]; // 0xa8(0x58)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* *2d62ec588c; // 0x88(0x08)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x88(0x08)
};

// Class AIModule.*74f27fb3c3
// Size: 0xa0 (Inherited: 0x88)
struct U*74f27fb3c3 : UBTTaskNode {
	struct FGameplayTag *c2b2b57581; // 0x88(0x08)
	struct UBehaviorTree* *ec65a5dae0; // 0x90(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x98(0x08)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x30 (Inherited: 0x30)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.CrowdManager
// Size: 0xf0 (Inherited: 0x30)
struct UCrowdManager : UObject {
	struct ANavigationData* *e052580b23; // 0x30(0x08)
	struct TArray<struct F*0ccc7e594e> AvoidanceConfig; // 0x38(0x10)
	struct TArray<struct F*a0d84c1f39> SamplingPatterns; // 0x48(0x10)
	int32 MaxAgents; // 0x58(0x04)
	float MaxAgentRadius; // 0x5c(0x04)
	int32 MaxAvoidedAgents; // 0x60(0x04)
	int32 MaxAvoidedWalls; // 0x64(0x04)
	float NavmeshCheckInterval; // 0x68(0x04)
	float PathOptimizationInterval; // 0x6c(0x04)
	float SeparationDirClamp; // 0x70(0x04)
	char pad_74_0 : 4; // 0x74(0x01)
	char bResolveCollisions : 1; // 0x74(0x01)
	char pad_74_5 : 3; // 0x74(0x01)
	char pad_75[0x7b]; // 0x75(0x7b)
};

// Class AIModule.EnvQuery
// Size: 0x50 (Inherited: 0x38)
struct UEnvQuery : UDataAsset {
	struct FName *b8eb8ace5a; // 0x38(0x08)
	struct TArray<struct UEnvQueryOption*> Options; // 0x40(0x10)
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char pad_30[0x8]; // 0x30(0x08)

	void ProvideActorsSet(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x3b43ac
	void ProvideLocationsSet(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x3b43ac
	void ProvideSingleLocation(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation // Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const // @ game+0x3b43ac
	void ProvideSingleActor(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x3b43ac
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.*efe6188fe5
// Size: 0x30 (Inherited: 0x30)
struct U*efe6188fe5 : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x30 (Inherited: 0x30)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.*6946f4cc72
// Size: 0x80 (Inherited: 0x30)
struct U*6946f4cc72 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	int32 QueryID; // 0x38(0x04)
	char pad_3C[0x24]; // 0x3c(0x24)
	struct UClass* ItemType; // 0x60(0x08)
	int32 OptionIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FMulticastDelegate OnQueryFinishedEvent; // 0x70(0x10)

	void EQSQueryDoneSignature__DelegateSignature(); // DelegateFunction AIModule.*6946f4cc72.EQSQueryDoneSignature__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void *1b821afcfa(); // Function AIModule.*6946f4cc72.*1b821afcfa // Final|Native|Public|BlueprintCallable // @ game+0x66371f4
	void *3df6fe99a0(); // Function AIModule.*6946f4cc72.*3df6fe99a0 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x66343ac
	void *208aa2bc1b(); // Function AIModule.*6946f4cc72.*208aa2bc1b // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6634978
	void *3a58dd3a48(); // Function AIModule.*6946f4cc72.*3a58dd3a48 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6634a00
};

// Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType {
};

// Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Actor
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase {
};

// Class AIModule.EnvQueryItemType_Direction
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Point
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryManager
// Size: 0x140 (Inherited: 0x30)
struct UEnvQueryManager : UObject {
	char pad_30[0x78]; // 0x30(0x78)
	struct TArray<struct F*2a6e97209c> *e048b1efeb; // 0xa8(0x10)
	struct TArray<struct UEnvQueryContext*> *20a11d9d48; // 0xb8(0x10)
	struct TArray<struct U*6946f4cc72*> *8f904e6204; // 0xc8(0x10)
	char pad_D8[0x54]; // 0xd8(0x54)
	float MaxAllowedTestingTime; // 0x12c(0x04)
	bool bTestQueriesUsingBreadth; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32 QueryCountWarningThreshold; // 0x134(0x04)
	double QueryCountWarningInterval; // 0x138(0x08)

	void RunEQSQuery(); // Function AIModule.EnvQueryManager.RunEQSQuery // Final|Native|Static|Public|BlueprintCallable // @ game+0x6635bc8
};

// Class AIModule.*a977370a5d
// Size: 0x38 (Inherited: 0x30)
struct U*a977370a5d : UObject {
	int32 *4e869ec492; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x58 (Inherited: 0x38)
struct UEnvQueryGenerator : U*a977370a5d {
	struct FString OptionName; // 0x38(0x10)
	struct UClass* *8e7577bcec; // 0x48(0x08)
	char *67a7fa0ac0 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.*2c64b6947a
// Size: 0xc8 (Inherited: 0x58)
struct U*2c64b6947a : UEnvQueryGenerator {
	struct UClass* *c4cba84063; // 0x58(0x08)
	struct FAIDataProviderBoolValue *9e291a1574; // 0x60(0x30)
	struct FAIDataProviderFloatValue SearchRadius; // 0x90(0x30)
	struct UClass* *50f155fb9e; // 0xc0(0x08)
};

// Class AIModule.*c82e55872b
// Size: 0x88 (Inherited: 0x58)
struct U*c82e55872b : UEnvQueryGenerator {
	struct FText *d317327d1a; // 0x58(0x18)
	struct UClass* Context; // 0x70(0x08)
	struct UClass* *fce3711331; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)

	void *91d9328824(); // Function AIModule.*c82e55872b.*91d9328824 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6632418
	void *2c7575d40c(); // Function AIModule.*c82e55872b.*2c7575d40c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6634700
	void *a61474dda5(); // Function AIModule.*c82e55872b.*a61474dda5 // Final|Native|Public|HasDefaults|BlueprintCallable|Const // @ game+0x66324a8
	void DoItemGeneration(); // Function AIModule.*c82e55872b.DoItemGeneration // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x3b43ac
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70 (Inherited: 0x58)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x58(0x10)
	bool *824939db61; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class AIModule.*80e1043b14
// Size: 0x60 (Inherited: 0x58)
struct U*80e1043b14 : UEnvQueryGenerator {
	struct UClass* *b1225bdb8f; // 0x58(0x08)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x88 (Inherited: 0x58)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData *facbb04aca; // 0x58(0x30)
};

// Class AIModule.*06cb9e00f1
// Size: 0x158 (Inherited: 0x88)
struct U*06cb9e00f1 : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *a02c093e3c; // 0x88(0x30)
	struct FAIDataProviderFloatValue *e4343dcd26; // 0xb8(0x30)
	struct FAIDataProviderFloatValue *fbe2a69a72; // 0xe8(0x30)
	struct FAIDataProviderFloatValue Range; // 0x118(0x30)
	struct UClass* *1d75ee5696; // 0x148(0x08)
	char *f372a543b9 : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class AIModule.*9902dcee82
// Size: 0x1b0 (Inherited: 0x88)
struct U*9902dcee82 : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x88(0x30)
	struct FAIDataProviderFloatValue OuterRadius; // 0xb8(0x30)
	struct FAIDataProviderIntValue *71c94cafd3; // 0xe8(0x30)
	struct FAIDataProviderIntValue *90dd483491; // 0x118(0x30)
	struct FEnvDirection ArcDirection; // 0x148(0x20)
	struct FAIDataProviderFloatValue *0148be882c; // 0x168(0x30)
	bool *1a795a2b0e; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UClass* Center; // 0x1a0(0x08)
	char bDefineArc : 1; // 0x1a8(0x01)
	char pad_1A8_1 : 7; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x1f0 (Inherited: 0x88)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *a97469d0b2; // 0x88(0x30)
	struct FAIDataProviderFloatValue *3cedcf9e28; // 0xb8(0x30)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xe8(0x30)
	enum class *73f1455814 *eac80ba087; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FEnvDirection ArcDirection; // 0x120(0x20)
	struct FAIDataProviderFloatValue *0148be882c; // 0x140(0x30)
	float *6abc2bcce6; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct UClass* *52d06ee889; // 0x178(0x08)
	bool *c3d51572cb; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FAIDataProviderFloatValue *79b7b1282e; // 0x188(0x30)
	struct FEnvTraceData TraceData; // 0x1b8(0x30)
	char bDefineArc : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xf0 (Inherited: 0x88)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x88(0x30)
	struct FAIDataProviderFloatValue *3cedcf9e28; // 0xb8(0x30)
	struct UClass* *15da8e3e7b; // 0xe8(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x158 (Inherited: 0xf0)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue *03e2c5c62e; // 0xf0(0x30)
	struct UClass* NavigationFilter; // 0x120(0x08)
	struct FAIDataProviderFloatValue *856fbc04ad; // 0x128(0x30)
};

// Class AIModule.EnvQueryTest
// Size: 0x1c8 (Inherited: 0x38)
struct UEnvQueryTest : U*a977370a5d {
	int32 *7eff849232; // 0x38(0x04)
	enum class EEnvTestPurpose *947f353466; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString *f9b100134f; // 0x40(0x10)
	enum class *cae4931ba2 *02a61af40a; // 0x50(0x01)
	enum class *64e2f985de *5027f4843a; // 0x51(0x01)
	enum class EEnvTestFilterType *71a97cab03; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FAIDataProviderBoolValue *698018193e; // 0x58(0x30)
	struct FAIDataProviderFloatValue *760c197eb1; // 0x88(0x30)
	struct FAIDataProviderFloatValue *c9ae3ec86d; // 0xb8(0x30)
	char pad_E8[0x1]; // 0xe8(0x01)
	enum class EEnvTestScoreEquation *71a6d6a0f5; // 0xe9(0x01)
	enum class EEnvQueryTestClamping *6108d77ae0; // 0xea(0x01)
	enum class EEnvQueryTestClamping *bd28011e42; // 0xeb(0x01)
	enum class EEQSNormalizationType *c652fceb50; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FAIDataProviderFloatValue *66a4fe3c50; // 0xf0(0x30)
	struct FAIDataProviderFloatValue *e20f00ebb1; // 0x120(0x30)
	struct FAIDataProviderFloatValue *27ebe47723; // 0x150(0x30)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x180(0x30)
	bool bDefineReferenceValue; // 0x1b0(0x01)
	char pad_1B1[0xf]; // 0x1b1(0x0f)
	char *ce9f2920d3 : 1; // 0x1c0(0x01)
	char pad_1C0_1 : 7; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x1d8 (Inherited: 0x1c8)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class *ab14b0c884 *7f84c6490b; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UClass* DistanceTo; // 0x1d0(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x210 (Inherited: 0x1c8)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection *81ed6998cf; // 0x1c8(0x20)
	struct FEnvDirection *e3c48b7d48; // 0x1e8(0x20)
	enum class *05c7f2d894 *7f84c6490b; // 0x208(0x01)
	bool *5865ae4635; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
};

// Class AIModule.*d6d8cc1937
// Size: 0x238 (Inherited: 0x1c8)
struct U*d6d8cc1937 : UEnvQueryTest {
	struct FGameplayTagQuery *9f6a5738f8; // 0x1c8(0x48)
	bool *90f6d47642; // 0x210(0x01)
	enum class EGameplayContainerMatchType *368a6377b4; // 0x211(0x01)
	char pad_212[0x6]; // 0x212(0x06)
	struct FGameplayTagContainer GameplayTags; // 0x218(0x20)
};

// Class AIModule.*efb8bae1a0
// Size: 0x1e8 (Inherited: 0x1c8)
struct U*efb8bae1a0 : UEnvQueryTest {
	struct F*090abebab2 *432a86c26b; // 0x1c8(0x20)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x240 (Inherited: 0x1c8)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding *7f84c6490b; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UClass* Context; // 0x1d0(0x08)
	struct FAIDataProviderBoolValue *eba2c6b49d; // 0x1d8(0x30)
	struct FAIDataProviderBoolValue *d62b39673e; // 0x208(0x30)
	struct UClass* *7820bcd6e4; // 0x238(0x08)
};

// Class AIModule.*94f11e055d
// Size: 0x270 (Inherited: 0x240)
struct U*94f11e055d : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue *856fbc04ad; // 0x240(0x30)
};

// Class AIModule.*8ea9fbd4a8
// Size: 0x1f8 (Inherited: 0x1c8)
struct U*8ea9fbd4a8 : UEnvQueryTest {
	struct FEnvTraceData *facbb04aca; // 0x1c8(0x30)
};

// Class AIModule.*81c9327914
// Size: 0x1c8 (Inherited: 0x1c8)
struct U*81c9327914 : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x290 (Inherited: 0x1c8)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x1c8(0x30)
	struct FAIDataProviderBoolValue *abfbf5d147; // 0x1f8(0x30)
	struct FAIDataProviderFloatValue *a62b467dee; // 0x228(0x30)
	struct FAIDataProviderFloatValue *9785acf5bf; // 0x258(0x30)
	struct UClass* Context; // 0x288(0x08)
};

// Class AIModule.EnvQueryOption
// Size: 0x48 (Inherited: 0x30)
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; // 0x30(0x08)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x38(0x10)
};

// Class AIModule.EQSRenderingComponent
// Size: 0x9e0 (Inherited: 0x9b0)
struct UEQSRenderingComponent : UPrimitiveComponent {
	char pad_9B0[0x30]; // 0x9b0(0x30)
};

// Class AIModule.EQSTestingPawn
// Size: 0x8d0 (Inherited: 0x860)
struct AEQSTestingPawn : ACharacter {
	char pad_860[0x8]; // 0x860(0x08)
	struct UEnvQuery* *e7500f6f85; // 0x868(0x08)
	struct TArray<struct FEnvNamedValue> *a31c7984da; // 0x870(0x10)
	struct TArray<struct F*5ede5c6dd5> *293bcaf38d; // 0x880(0x10)
	float *4e4cb7c83f; // 0x890(0x04)
	int32 *7ab00b0e35; // 0x894(0x04)
	enum class EEnvQueryHightlightMode *8772032e41; // 0x898(0x01)
	char pad_899[0x3]; // 0x899(0x03)
	char *a67f9985ef : 1; // 0x89c(0x01)
	char *53be5e196a : 1; // 0x89c(0x01)
	char *7ae9f0777b : 1; // 0x89c(0x01)
	char *4a5a3aad47 : 1; // 0x89c(0x01)
	char *95d5e82df9 : 1; // 0x89c(0x01)
	char pad_89C_5 : 3; // 0x89c(0x01)
	char pad_89D[0x3]; // 0x89d(0x03)
	enum class EEnvQueryRunMode *04d8177e80; // 0x8a0(0x01)
	char pad_8A1[0x2f]; // 0x8a1(0x2f)
};

// Class AIModule.*d3feb0c9b9
// Size: 0x50 (Inherited: 0x50)
struct U*d3feb0c9b9 : U*c2b50fe57b {
};

// Class AIModule.*96e7d3e9ce
// Size: 0x60 (Inherited: 0x30)
struct U*96e7d3e9ce : UObject {
	char pad_30[0x30]; // 0x30(0x30)

	void *8f811453ff(); // Function AIModule.*96e7d3e9ce.*8f811453ff // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66327e4
	void *bf7da8ba03(); // Function AIModule.*96e7d3e9ce.*bf7da8ba03 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6637114
	void *8bffd0e4fd(); // Function AIModule.*96e7d3e9ce.*8bffd0e4fd // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6632a58
	void *c5f0a193c4(); // Function AIModule.*96e7d3e9ce.*c5f0a193c4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6632c30
	void *a5764cbc1a(); // Function AIModule.*96e7d3e9ce.*a5764cbc1a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6632548
	void *e9fe3f921b(); // Function AIModule.*96e7d3e9ce.*e9fe3f921b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6633120
	void *5e1081621e(); // Function AIModule.*96e7d3e9ce.*5e1081621e // Final|Native|Static|Public|BlueprintCallable // @ game+0x663599c
};

// Class AIModule.*f64f37d85f
// Size: 0x500 (Inherited: 0x4d0)
struct U*f64f37d85f : UPathFollowingComponent {
	struct U*96e7d3e9ce* *1013d58f35; // 0x4c8(0x08)
	char pad_4D8[0x28]; // 0x4d8(0x28)
};

// Class AIModule.*11ffea466c
// Size: 0xd0 (Inherited: 0x30)
struct U*11ffea466c : UObject {
	struct U*11ffea466c* *9920a3c195; // 0x30(0x08)
	struct U*11ffea466c* *dd91487896; // 0x38(0x08)
	struct U*a95a97387c* *a98114542b; // 0x40(0x08)
	struct UObject* Instigator; // 0x48(0x08)
	struct UBrainComponent* *92ac39946d; // 0x50(0x08)
	char pad_58[0x60]; // 0x58(0x60)
	char bAllowNewSameClassInstance : 1; // 0xb8(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0xb8(0x01)
	char bShouldPauseMovement : 1; // 0xb8(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0xb8(0x01)
	char pad_B8_4 : 4; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)

	void Finish(); // Function AIModule.*11ffea466c.Finish // Native|Protected|BlueprintCallable // @ game+0x663330c
	void *8289a99f9b(); // Function AIModule.*11ffea466c.*8289a99f9b // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6633454
	void *246548833b(); // Function AIModule.*11ffea466c.*246548833b // Final|Native|Static|Public|BlueprintCallable // @ game+0x6633044
};

// Class AIModule.*6203075574
// Size: 0xd0 (Inherited: 0xd0)
struct U*6203075574 : U*11ffea466c {

	void ActionStart(); // Function AIModule.*6203075574.ActionStart // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ActionFinished(); // Function AIModule.*6203075574.ActionFinished // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ActionTick(); // Function AIModule.*6203075574.ActionTick // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ActionPause(); // Function AIModule.*6203075574.ActionPause // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ActionResume(); // Function AIModule.*6203075574.ActionResume // Event|Public|BlueprintEvent // @ game+0x3b43ac
};

// Class AIModule.*8b45c10632
// Size: 0x120 (Inherited: 0xd0)
struct U*8b45c10632 : U*11ffea466c {
	struct AActor* GoalActor; // 0xd0(0x08)
	struct FVector GoalLocation; // 0xd8(0x0c)
	float AcceptableRadius; // 0xe4(0x04)
	struct UClass* FilterClass; // 0xe8(0x08)
	char bAllowStrafe : 1; // 0xf0(0x01)
	char *f092dee744 : 1; // 0xf0(0x01)
	char *cbe8ea7a32 : 1; // 0xf0(0x01)
	char *f54d025578 : 1; // 0xf0(0x01)
	char *29663ef57c : 1; // 0xf0(0x01)
	char *d9d41c93c5 : 1; // 0xf0(0x01)
	char *f6dce12dec : 1; // 0xf0(0x01)
	char pad_F0_7 : 1; // 0xf0(0x01)
	char pad_F1[0x2f]; // 0xf1(0x2f)
};

// Class AIModule.*11d290751a
// Size: 0xf0 (Inherited: 0xd0)
struct U*11d290751a : U*11ffea466c {
	struct U*11ffea466c* *2c41affe86; // 0xd0(0x08)
	struct U*11ffea466c* *c3b61ede2f; // 0xd8(0x08)
	enum class *5f1914b78c ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// Class AIModule.*e83b08d579
// Size: 0x100 (Inherited: 0xd0)
struct U*e83b08d579 : U*11ffea466c {
	struct TArray<struct U*11ffea466c*> *e28b21eb8c; // 0xd0(0x10)
	enum class *5f1914b78c ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct U*11ffea466c* *c3b61ede2f; // 0xe8(0x08)
	char pad_F0[0x10]; // 0xf0(0x10)
};

// Class AIModule.*c12d6a2931
// Size: 0xe0 (Inherited: 0xd0)
struct U*c12d6a2931 : U*11ffea466c {
	float *389ddcdcd4; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
};

// Class AIModule.*a95a97387c
// Size: 0x240 (Inherited: 0x200)
struct U*a95a97387c : UActorComponent {
	struct APawn* ControlledPawn; // 0x200(0x08)
	struct TArray<struct F*f5fe39ee35> *d0d443c035; // 0x208(0x10)
	struct TArray<struct F*c2567548e9> *40eb24e20b; // 0x218(0x10)
	struct U*11ffea466c* *0a7f30adbd; // 0x228(0x08)
	char pad_230[0x10]; // 0x230(0x10)

	void *926c372b92(); // Function AIModule.*a95a97387c.*926c372b92 // Final|Native|Public|BlueprintCallable // @ game+0x66355f0
	void *bc127cf5bf(); // Function AIModule.*a95a97387c.*bc127cf5bf // Final|Native|Public|BlueprintCallable // @ game+0x6635698
	void *c21c2e79f9(); // Function AIModule.*a95a97387c.*c21c2e79f9 // Final|Native|Public|BlueprintCallable // @ game+0x6635864
	void *9198fad360(); // Function AIModule.*a95a97387c.*9198fad360 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6635730
};

// Class AIModule.PawnSensingComponent
// Size: 0x250 (Inherited: 0x200)
struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0x200(0x04)
	float LOSHearingThreshold; // 0x204(0x04)
	float SightRadius; // 0x208(0x04)
	float SensingInterval; // 0x20c(0x04)
	float HearingMaxSoundAge; // 0x210(0x04)
	char bEnableSensingUpdates : 1; // 0x214(0x01)
	char bOnlySensePlayers : 1; // 0x214(0x01)
	char bSeePawns : 1; // 0x214(0x01)
	char bHearNoises : 1; // 0x214(0x01)
	char pad_214_4 : 4; // 0x214(0x01)
	char pad_215[0xb]; // 0x215(0x0b)
	struct FMulticastDelegate OnSeePawn; // 0x220(0x10)
	struct FMulticastDelegate OnHearNoise; // 0x230(0x10)
	float PeripheralVisionAngle; // 0x240(0x04)
	float *0abc93fe01; // 0x244(0x04)
	char pad_248[0x8]; // 0x248(0x08)

	void *cdc9c9a522(); // Function AIModule.PawnSensingComponent.*cdc9c9a522 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5ddbfa8
	void SeePawnDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x3b43ac
	void HearNoiseDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x3b43ac
	void *bb4606926f(); // Function AIModule.PawnSensingComponent.*bb4606926f // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6637304
	void *cea6fe97e6(); // Function AIModule.PawnSensingComponent.*cea6fe97e6 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x66373a0
	void *9e147a780a(); // Function AIModule.PawnSensingComponent.*9e147a780a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66346e8
	void *00816a3c4f(); // Function AIModule.PawnSensingComponent.*00816a3c4f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66346d0
};

// Class AIModule.*1834b5491b
// Size: 0x30 (Inherited: 0x30)
struct U*1834b5491b : UObject {
};


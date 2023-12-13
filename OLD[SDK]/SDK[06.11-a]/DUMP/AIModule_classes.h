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

	struct FString *03490a4a5c(); // Function AIModule.BlackboardComponent.*03490a4a5c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662fb58
	void *e0dbcc2b56(struct FName KeyName, struct UClass* ClassValue); // Function AIModule.BlackboardComponent.*e0dbcc2b56 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662f438
	void *00b6773e35(struct FName KeyName); // Function AIModule.BlackboardComponent.*00b6773e35 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662cda8
	void *e86cc9dfdc(); // Function AIModule.BlackboardComponent.*e86cc9dfdc // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662aeb0
	void *b8a474fa69(struct FName KeyName, bool ReturnValue); // Function AIModule.BlackboardComponent.*b8a474fa69 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662cb80
	void *dafed8928d(struct FName KeyName); // Function AIModule.BlackboardComponent.*dafed8928d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662cc38
	void *9a929044d0(); // Function AIModule.BlackboardComponent.*9a929044d0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662f334
	void *f438e463a2(struct FName KeyName, float FloatValue); // Function AIModule.BlackboardComponent.*f438e463a2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662f638
	void *39c4875c8c(); // Function AIModule.BlackboardComponent.*39c4875c8c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662f740
	void *eb07559dc5(struct FRotator VectorValue); // Function AIModule.BlackboardComponent.*eb07559dc5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662fa40
	void *76f13d13f1(struct FName KeyName, struct FRotator ResultRotation); // Function AIModule.BlackboardComponent.*76f13d13f1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x662c994
	void *f08aced559(); // Function AIModule.BlackboardComponent.*f08aced559 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662cf18
	struct FRotator *b6bdfb3cb2(); // Function AIModule.BlackboardComponent.*b6bdfb3cb2 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x662d088
	bool *5cbaa8e07b(); // Function AIModule.BlackboardComponent.*5cbaa8e07b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662ccf0
	struct FVector *50921fcfc6(); // Function AIModule.BlackboardComponent.*50921fcfc6 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x662d270
	bool *767e3992e5(); // Function AIModule.BlackboardComponent.*767e3992e5 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662d410
	struct FName *e3f47ca089(); // Function AIModule.BlackboardComponent.*e3f47ca089 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662f840
	struct FVector *708c02383e(); // Function AIModule.BlackboardComponent.*708c02383e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662fcbc
	bool *57e6c8c3db(); // Function AIModule.BlackboardComponent.*57e6c8c3db // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x662c374
	struct UObject* *b8facfb222(); // Function AIModule.BlackboardComponent.*b8facfb222 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662f940
	struct UObject* *bdd73cb7cf(); // Function AIModule.BlackboardComponent.*bdd73cb7cf // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662cfd0
	struct FString *308994858a(); // Function AIModule.BlackboardComponent.*308994858a // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662d154
	void *214a502ad8(struct FName KeyName, bool EnumValue); // Function AIModule.BlackboardComponent.*214a502ad8 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662f538
	void *480a59561e(struct FName KeyName); // Function AIModule.BlackboardComponent.*480a59561e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x662ce60
};

// Class AIModule.PathFollowingComponent
// Size: 0x4d0 (Inherited: 0x200)
struct UPathFollowingComponent : UActorComponent {
	char pad_200[0x130]; // 0x200(0x130)
	struct UNavMovementComponent* MovementComp; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)
	struct ANavigationData* *e052580b23; // 0x340(0x08)
	char pad_348[0x188]; // 0x348(0x188)

	struct FVector *cb29a79ce0(); // Function AIModule.PathFollowingComponent.*cb29a79ce0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6627070
	struct ANavigationData* OnNavDataRegistered(); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // Final|Native|Protected // @ game+0x6628128
	enum class EPathFollowingAction *67002cf6fb(); // Function AIModule.PathFollowingComponent.*67002cf6fb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6626ff4
	struct FHitResult OnActorBump(); // Function AIModule.PathFollowingComponent.OnActorBump // Native|Public|HasOutParms|HasDefaults // @ game+0x6627dac
};

// Class AIModule.*66752a7a1b
// Size: 0x30 (Inherited: 0x30)
struct U*66752a7a1b : UInterface {
};

// Class AIModule.AIController
// Size: 0x508 (Inherited: 0x478)
struct AAIController : AController {
	char pad_478[0x38]; // 0x478(0x38)
	char bStopAILogicOnUnposses : 1; // 0x4b0(0x01)
	char *0e810654b0 : 1; // 0x4b0(0x01)
	char *ea12e92a23 : 1; // 0x4b0(0x01)
	char *7dc0c0ee82 : 1; // 0x4b0(0x01)
	char *059eb95d16 : 1; // 0x4b0(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4b0(0x01)
	char pad_4B0_6 : 2; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x4b8(0x08)
	struct UBrainComponent* BrainComponent; // 0x4c0(0x08)
	struct UAIPerceptionComponent* *4f9c79812b; // 0x4c8(0x08)
	struct U*a95a97387c* ActionsComp; // 0x4d0(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4d8(0x08)
	struct UGameplayTasksComponent* *250efc078e; // 0x4e0(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x4e8(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x4f0(0x10)
	char pad_500[0x8]; // 0x500(0x08)

	void OnPossess(); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x370fbc
	void *ccb0760844(); // Function AIModule.AIController.*ccb0760844 // Final|Native|Public|BlueprintCallable // @ game+0x662927c
	void *91de3a7b23(enum class EPathFollowingStatus ReturnValue); // Function AIModule.AIController.*91de3a7b23 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6626fcc
	void *d911259542(struct UAIPerceptionComponent* ReturnValue); // Function AIModule.AIController.*d911259542 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x662686c
	void *9634d29cd2(); // Function AIModule.AIController.*9634d29cd2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66272d8
	void OnUnpossess(); // Function AIModule.AIController.OnUnpossess // Event|Public|BlueprintEvent // @ game+0x370fbc
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void *c870254592(struct FVector ReturnValue); // Function AIModule.AIController.*c870254592 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6626d34
	void *95796f5859(); // Function AIModule.AIController.*95796f5859 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6626e20
	struct FVector *150be04ddc(); // Function AIModule.AIController.*150be04ddc // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6626d68
	enum class EPathFollowingRequestResult *2e32f9433a(); // Function AIModule.AIController.*2e32f9433a // Final|Native|Public|BlueprintCallable // @ game+0x662781c
	struct UPathFollowingComponent* *0476562773(); // Function AIModule.AIController.*0476562773 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66270a4
	bool UseBlackboard(); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66294e0
	struct AActor* K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x6627654
	struct FVector *5aee4409e9(); // Function AIModule.AIController.*5aee4409e9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6626e44
	enum class EPathFollowingRequestResult *951164f513(); // Function AIModule.AIController.*951164f513 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6627ab4
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x6627590
	void OnGameplayTaskResourcesClaimed(struct F*01ce7ec8fb Param0, struct F*01ce7ec8fb Param1); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x6627f6c
	void *1504aa31fa(bool bEnable); // Function AIModule.AIController.*1504aa31fa // Final|Native|Public|BlueprintCallable // @ game+0x6628f8c
	void *7e8b07238c(); // Function AIModule.AIController.*7e8b07238c // Final|Native|Public|BlueprintCallable // @ game+0x662652c
	void RunBehaviorTree(bool ReturnValue); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x6628d24
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66275ac
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
	struct FString NodeName; // 0x38(0x10)
	struct FString Tag; // 0x48(0x10)
	struct UBehaviorTree* *fbdb335198; // 0x58(0x08)
	struct UBTCompositeNode* *9df5519921; // 0x60(0x08)
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

	struct TArray<struct AActor*> *52e6c56e93(); // Function AIModule.AIPerceptionComponent.*52e6c56e93 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6626eac
	enum class EEndPlayReason OnOwnerEndPlay(); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // Final|Native|Public // @ game+0x66281b8
	void *c8071d7713(); // Function AIModule.AIPerceptionComponent.*c8071d7713 // Final|Native|Public|BlueprintCallable // @ game+0x6628d10
	void *406861bfe8(struct TArray<struct AActor*> OutActors); // Function AIModule.AIPerceptionComponent.*406861bfe8 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66270bc
	void *c6e4b498c7(struct UClass* SenseToUse); // Function AIModule.AIPerceptionComponent.*c6e4b498c7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6626c14
	void *6d033b5619(struct F*196d244245 Info, bool ReturnValue); // Function AIModule.AIPerceptionComponent.*6d033b5619 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6626884
	void *19da8c858f(struct UClass* SenseToUse); // Function AIModule.AIPerceptionComponent.*19da8c858f // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6626c14
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

	bool *749a8f7b31(); // Function AIModule.CrowdFollowingComponent.*749a8f7b31 // Native|Public|BlueprintCallable // @ game+0x662ff54
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

	struct APawn* ReceiveDeactivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct APawn* ReceiveSearchStartAI(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct AActor* ReceiveSearchStart(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct AActor* ReceiveActivation(); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct APawn* ReceiveActivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	float ReceiveTick(); // Function AIModule.BTService_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x370fbc
	bool *7650563a5a(); // Function AIModule.BTService_BlueprintBase.*7650563a5a // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x662d3ac
	float ReceiveTickAI(); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct AActor* ReceiveDeactivation(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // Event|Protected|BlueprintEvent // @ game+0x370fbc
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

	void ReceiveExecute(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void ReceiveAbortAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void ReceiveTickAI(struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void *1effa25a93(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.*1effa25a93 // Final|Native|Protected|BlueprintCallable // @ game+0x662ef34
	void *f9fb48d87d(); // Function AIModule.BTTask_BlueprintBase.*f9fb48d87d // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x662d3ec
	void ReceiveAbort(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void *944cf03384(); // Function AIModule.BTTask_BlueprintBase.*944cf03384 // Final|Native|Protected|BlueprintCallable // @ game+0x662b2c0
	void *72cd22c337(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.*72cd22c337 // Final|Native|Protected|BlueprintCallable // @ game+0x662eea4
	void ReceiveExecuteAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void *df7216db34(bool ReturnValue); // Function AIModule.BTTask_BlueprintBase.*df7216db34 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x662d3d0
	void *0e46336569(); // Function AIModule.BTTask_BlueprintBase.*0e46336569 // Final|Native|Protected|BlueprintCallable // @ game+0x662b2d4
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

	enum class EPathFollowingResult OnMoveCompleted(); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // Final|Native|Public // @ game+0x662804c
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {
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
// Size: 0x508 (Inherited: 0x508)
struct ADetourCrowdAIController : AAIController {
	char bStopAILogicOnUnposses : 1; // 0x4b0(0x01)
	char *0e810654b0 : 1; // 0x4b0(0x01)
	char *ea12e92a23 : 1; // 0x4b0(0x01)
	char *7dc0c0ee82 : 1; // 0x4b0(0x01)
	char *059eb95d16 : 1; // 0x4b0(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4b0(0x01)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x4b8(0x08)
	struct UBrainComponent* BrainComponent; // 0x4c0(0x08)
	struct UAIPerceptionComponent* *4f9c79812b; // 0x4c8(0x08)
	struct U*a95a97387c* ActionsComp; // 0x4d0(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4d8(0x08)
	struct UGameplayTasksComponent* *250efc078e; // 0x4e0(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x4e8(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x4f0(0x10)

	void OnPossess(); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x370fbc
	void *ccb0760844(); // Function AIModule.AIController.*ccb0760844 // Final|Native|Public|BlueprintCallable // @ game+0x662927c
	void *91de3a7b23(enum class EPathFollowingStatus ReturnValue); // Function AIModule.AIController.*91de3a7b23 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6626fcc
	void *d911259542(struct UAIPerceptionComponent* ReturnValue); // Function AIModule.AIController.*d911259542 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x662686c
	void *9634d29cd2(); // Function AIModule.AIController.*9634d29cd2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66272d8
	void OnUnpossess(); // Function AIModule.AIController.OnUnpossess // Event|Public|BlueprintEvent // @ game+0x370fbc
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void *c870254592(struct FVector ReturnValue); // Function AIModule.AIController.*c870254592 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6626d34
	void *95796f5859(); // Function AIModule.AIController.*95796f5859 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6626e20
	struct FVector *150be04ddc(); // Function AIModule.AIController.*150be04ddc // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6626d68
	enum class EPathFollowingRequestResult *2e32f9433a(); // Function AIModule.AIController.*2e32f9433a // Final|Native|Public|BlueprintCallable // @ game+0x662781c
	struct UPathFollowingComponent* *0476562773(); // Function AIModule.AIController.*0476562773 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66270a4
	bool UseBlackboard(); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66294e0
	struct AActor* K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x6627654
	struct FVector *5aee4409e9(); // Function AIModule.AIController.*5aee4409e9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6626e44
	enum class EPathFollowingRequestResult *951164f513(); // Function AIModule.AIController.*951164f513 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6627ab4
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x6627590
	void OnGameplayTaskResourcesClaimed(struct F*01ce7ec8fb Param0, struct F*01ce7ec8fb Param1); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x6627f6c
	void *1504aa31fa(bool bEnable); // Function AIModule.AIController.*1504aa31fa // Final|Native|Public|BlueprintCallable // @ game+0x6628f8c
	void *7e8b07238c(); // Function AIModule.AIController.*7e8b07238c // Final|Native|Public|BlueprintCallable // @ game+0x662652c
	void RunBehaviorTree(bool ReturnValue); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x6628d24
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66275ac
};

// Class AIModule.GridPathAIController
// Size: 0x508 (Inherited: 0x508)
struct AGridPathAIController : AAIController {
	char bStopAILogicOnUnposses : 1; // 0x4b0(0x01)
	char *0e810654b0 : 1; // 0x4b0(0x01)
	char *ea12e92a23 : 1; // 0x4b0(0x01)
	char *7dc0c0ee82 : 1; // 0x4b0(0x01)
	char *059eb95d16 : 1; // 0x4b0(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4b0(0x01)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x4b8(0x08)
	struct UBrainComponent* BrainComponent; // 0x4c0(0x08)
	struct UAIPerceptionComponent* *4f9c79812b; // 0x4c8(0x08)
	struct U*a95a97387c* ActionsComp; // 0x4d0(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4d8(0x08)
	struct UGameplayTasksComponent* *250efc078e; // 0x4e0(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x4e8(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x4f0(0x10)

	void OnPossess(); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x370fbc
	void *ccb0760844(); // Function AIModule.AIController.*ccb0760844 // Final|Native|Public|BlueprintCallable // @ game+0x662927c
	void *91de3a7b23(enum class EPathFollowingStatus ReturnValue); // Function AIModule.AIController.*91de3a7b23 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6626fcc
	void *d911259542(struct UAIPerceptionComponent* ReturnValue); // Function AIModule.AIController.*d911259542 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x662686c
	void *9634d29cd2(); // Function AIModule.AIController.*9634d29cd2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66272d8
	void OnUnpossess(); // Function AIModule.AIController.OnUnpossess // Event|Public|BlueprintEvent // @ game+0x370fbc
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void *c870254592(struct FVector ReturnValue); // Function AIModule.AIController.*c870254592 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6626d34
	void *95796f5859(); // Function AIModule.AIController.*95796f5859 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6626e20
	struct FVector *150be04ddc(); // Function AIModule.AIController.*150be04ddc // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6626d68
	enum class EPathFollowingRequestResult *2e32f9433a(); // Function AIModule.AIController.*2e32f9433a // Final|Native|Public|BlueprintCallable // @ game+0x662781c
	struct UPathFollowingComponent* *0476562773(); // Function AIModule.AIController.*0476562773 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66270a4
	bool UseBlackboard(); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66294e0
	struct AActor* K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x6627654
	struct FVector *5aee4409e9(); // Function AIModule.AIController.*5aee4409e9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6626e44
	enum class EPathFollowingRequestResult *951164f513(); // Function AIModule.AIController.*951164f513 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6627ab4
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x6627590
	void OnGameplayTaskResourcesClaimed(struct F*01ce7ec8fb Param0, struct F*01ce7ec8fb Param1); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x6627f6c
	void *1504aa31fa(bool bEnable); // Function AIModule.AIController.*1504aa31fa // Final|Native|Public|BlueprintCallable // @ game+0x6628f8c
	void *7e8b07238c(); // Function AIModule.AIController.*7e8b07238c // Final|Native|Public|BlueprintCallable // @ game+0x662652c
	void RunBehaviorTree(bool ReturnValue); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x6628d24
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66275ac
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

	struct U*02bed1b956* *54113d2e7a(); // Function AIModule.AIPerceptionSystem.*54113d2e7a // Final|Native|Public|BlueprintCallable // @ game+0x6628754
	enum class EEndPlayReason OnPerceptionStimuliSourceEndPlay(); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // Final|Native|Protected // @ game+0x662829c
	struct U*02bed1b956* *15ebb2ebb3(); // Function AIModule.AIPerceptionSystem.*15ebb2ebb3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66289f8
	bool *fb7e358a49(); // Function AIModule.AIPerceptionSystem.*fb7e358a49 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66283fc
	struct UClass* *06af7f8124(); // Function AIModule.AIPerceptionSystem.*06af7f8124 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6627188
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x220 (Inherited: 0x200)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0x200(0x01)
	char pad_200_1 : 7; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct TArray<struct UClass*> RegisterAsSourceForSenses; // 0x208(0x10)
	char pad_218[0x8]; // 0x218(0x08)

	void *383f52a322(); // Function AIModule.AIPerceptionStimuliSourceComponent.*383f52a322 // Final|Native|Public|BlueprintCallable // @ game+0x662943c
	void *c9646300c7(); // Function AIModule.AIPerceptionStimuliSourceComponent.*c9646300c7 // Final|Native|Public|BlueprintCallable // @ game+0x6629450
	void *10e8cb9ede(); // Function AIModule.AIPerceptionStimuliSourceComponent.*10e8cb9ede // Final|Native|Public|BlueprintCallable // @ game+0x662836c
	void *22486dd08c(); // Function AIModule.AIPerceptionStimuliSourceComponent.*22486dd08c // Final|Native|Public|BlueprintCallable // @ game+0x6628518
};

// Class AIModule.AIResource_Movement
// Size: 0x40 (Inherited: 0x40)
struct UAIResource_Movement : UGameplayTaskResource {
	int32 ManualResourceID; // 0x30(0x04)
	int8 *bd3694076d; // 0x34(0x01)
	char bManuallySetID : 1; // 0x38(0x01)
};

// Class AIModule.AIResource_Logic
// Size: 0x40 (Inherited: 0x40)
struct UAIResource_Logic : UGameplayTaskResource {
	int32 ManualResourceID; // 0x30(0x04)
	int8 *bd3694076d; // 0x34(0x01)
	char bManuallySetID : 1; // 0x38(0x01)
};

// Class AIModule.AISense_Blueprint
// Size: 0x150 (Inherited: 0x120)
struct UAISense_Blueprint : UAISense {
	struct UClass* ListenerDataType; // 0x120(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x128(0x10)
	struct TArray<struct U*02bed1b956*> *c660d2250b; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)

	void *f561d1d53d(); // Function AIModule.AISense_Blueprint.*f561d1d53d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66269b0
	void OnUpdate(struct TArray<struct U*02bed1b956*> EventsToProcess, float ReturnValue); // Function AIModule.AISense_Blueprint.OnUpdate // Event|Public|HasOutParms|BlueprintEvent // @ game+0x370fbc
	void OnListenerRegistered(struct AActor* ActorListener); // Function AIModule.AISense_Blueprint.OnListenerRegistered // Event|Public|BlueprintEvent // @ game+0x370fbc
	void OnListenerUpdated(); // Function AIModule.AISense_Blueprint.OnListenerUpdated // Event|Public|BlueprintEvent // @ game+0x370fbc
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // Event|Public|BlueprintEvent // @ game+0x370fbc
	void K2_OnNewPawn(); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // Event|Public|BlueprintEvent // @ game+0x370fbc
	void *b5c49ed63e(); // Function AIModule.AISense_Blueprint.*b5c49ed63e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6626a78
};

// Class AIModule.AISense_Damage
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Damage : UAISense {
	struct TArray<struct F*2d46306a24> *92d6311b0e; // 0x120(0x10)

	struct FVector *fa6dd54e7e(); // Function AIModule.AISense_Damage.*fa6dd54e7e // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x662852c
};

// Class AIModule.AISense_Hearing
// Size: 0x190 (Inherited: 0x120)
struct UAISense_Hearing : UAISense {
	struct TArray<struct F*56a6032375> *544a315429; // 0x120(0x10)
	float SpeedOfSoundSq; // 0x130(0x04)
	char pad_134[0x5c]; // 0x134(0x5c)

	struct FName *dd83ffb052(); // Function AIModule.AISense_Hearing.*dd83ffb052 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x66287e4
};

// Class AIModule.AISense_Prediction
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Prediction : UAISense {
	struct TArray<struct F*9bff58793a> *92d6311b0e; // 0x120(0x10)

	float *07148cf4d2(); // Function AIModule.AISense_Prediction.*07148cf4d2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6628bf4
	float *e1e60a93e3(); // Function AIModule.AISense_Prediction.*e1e60a93e3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6628ad8
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
	struct FGuid Guid; // 0xf8(0x10)
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
	struct FColor DebugColor; // 0x30(0x04)
	float MaxAge; // 0x34(0x04)
	char bStartsEnabled : 1; // 0x38(0x01)
};

// Class AIModule.*5016ea093f
// Size: 0x50 (Inherited: 0x50)
struct U*5016ea093f : U*a14e0da9c0 {
	struct FColor DebugColor; // 0x30(0x04)
	float MaxAge; // 0x34(0x04)
	char bStartsEnabled : 1; // 0x38(0x01)
};

// Class AIModule.*fe0d42de32
// Size: 0x50 (Inherited: 0x50)
struct U*fe0d42de32 : U*a14e0da9c0 {
	struct FColor DebugColor; // 0x30(0x04)
	float MaxAge; // 0x34(0x04)
	char bStartsEnabled : 1; // 0x38(0x01)
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

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // Exec|Native|Public // @ game+0x5e4d44c
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // Exec|Native|Public // @ game+0x6629f08
};

// Class AIModule.AITask
// Size: 0x78 (Inherited: 0x70)
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; // 0x70(0x08)
};

// Class AIModule.AITask_LockLogic
// Size: 0x78 (Inherited: 0x78)
struct UAITask_LockLogic : UAITask {
	struct AAIController* OwnerController; // 0x70(0x08)
};

// Class AIModule.AITask_MoveTo
// Size: 0x128 (Inherited: 0x78)
struct UAITask_MoveTo : UAITask {
	struct FMulticastDelegate OnRequestFailed; // 0x78(0x10)
	struct FMulticastDelegate OnMoveFinished; // 0x88(0x10)
	struct F*6df0658f8d *6f0627bc29; // 0x98(0x50)
	char pad_E8[0x40]; // 0xe8(0x40)

	struct UAITask_MoveTo* AIMoveTo(); // Function AIModule.AITask_MoveTo.AIMoveTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6629f20
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
	struct AAIController* OwnerController; // 0x70(0x08)
	char pad_80[0xd0]; // 0x80(0xd0)
};

// Class AIModule.BrainComponent
// Size: 0x260 (Inherited: 0x200)
struct UBrainComponent : UActorComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0x208(0x08)
	struct AAIController* *334a3a5a20; // 0x210(0x08)
	char pad_218[0x48]; // 0x218(0x48)

	bool IsRunning(); // Function AIModule.BrainComponent.IsRunning // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e33ae4
	bool *8ec249724d(); // Function AIModule.BrainComponent.*8ec249724d // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x662d384
	struct FString *217008070d(); // Function AIModule.BrainComponent.*217008070d // Native|Public|BlueprintCallable // @ game+0x662fe90
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // Native|Public|BlueprintCallable // @ game+0x4ea27c
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x3a0 (Inherited: 0x260)
struct UBehaviorTreeComponent : UBrainComponent {
	char pad_260[0x20]; // 0x260(0x20)
	struct TArray<struct UBTNode*> *d85ddf8cd1; // 0x280(0x10)
	char pad_290[0x110]; // 0x290(0x110)

	void *1c2eff4b84(); // Function AIModule.BehaviorTreeComponent.*1c2eff4b84 // Native|Public|BlueprintCallable // @ game+0x662edc4
	float *f7c0c8f63a(); // Function AIModule.BehaviorTreeComponent.*f7c0c8f63a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x662cab0
	bool *6bd185ff13(); // Function AIModule.BehaviorTreeComponent.*6bd185ff13 // Final|Native|Public|BlueprintCallable // @ game+0x662a1f4
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
};

// Class AIModule.*d594778355
// Size: 0xd8 (Inherited: 0xd8)
struct U*d594778355 : UBTDecorator_Blackboard {
	int32 IntValue; // 0xa8(0x04)
	float FloatValue; // 0xac(0x04)
	struct FString StringValue; // 0xb0(0x10)
	struct FString *04ce029884; // 0xc0(0x10)
	bool OperationType; // 0xd0(0x01)
	enum class *a569661a79 NotifyObserver; // 0xd1(0x01)
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

	struct APawn* ReceiveExecutionStartAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	bool PerformConditionCheckAI(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	bool PerformConditionCheck(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct AActor* ReceiveExecutionStart(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct AActor* ReceiveObserverActivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // Event|Protected|BlueprintEvent // @ game+0x370fbc
	float ReceiveTick(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct APawn* ReceiveObserverActivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct APawn* ReceiveObserverDeactivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void *29af98ab36(); // Function AIModule.BTDecorator_BlueprintBase.*29af98ab36 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x662d360
	void *664312a8f8(); // Function AIModule.BTDecorator_BlueprintBase.*664312a8f8 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x662d33c
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void ReceiveExecutionFinishAI(enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // Event|Protected|BlueprintEvent // @ game+0x370fbc
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
	char pad_80_0 : 7; // 0x80(0x01)
	char *1a8278ba93 : 1; // 0x78(0x01)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x7c(0x01)
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
	char pad_80_0 : 7; // 0x80(0x01)
	char *1a8278ba93 : 1; // 0x78(0x01)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x7c(0x01)
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
	struct TArray<struct F*f9166b06a6> Children; // 0x70(0x10)
	struct TArray<struct UBTService*> Services; // 0x80(0x10)
};

// Class AIModule.BTComposite_Sequence
// Size: 0xe0 (Inherited: 0xe0)
struct UBTComposite_Sequence : UBTCompositeNode {
	struct TArray<struct F*f9166b06a6> Children; // 0x70(0x10)
	struct TArray<struct UBTService*> Services; // 0x80(0x10)
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
	struct TArray<struct UBTService*> Services; // 0x70(0x10)
	char *84f152778f : 1; // 0x80(0x01)
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

	enum class EEnvQueryStatus EQSQueryDoneSignature__DelegateSignature(); // DelegateFunction AIModule.*6946f4cc72.EQSQueryDoneSignature__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x370fbc
	void *1b821afcfa(struct FName ParamName, float Value); // Function AIModule.*6946f4cc72.*1b821afcfa // Final|Native|Public|BlueprintCallable // @ game+0x662f0f0
	void *3df6fe99a0(); // Function AIModule.*6946f4cc72.*3df6fe99a0 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x662c2b8
	void *208aa2bc1b(struct TArray<struct AActor*> ReturnValue); // Function AIModule.*6946f4cc72.*208aa2bc1b // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x662c884
	void *3a58dd3a48(struct TArray<struct FVector> ReturnValue); // Function AIModule.*6946f4cc72.*3a58dd3a48 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x662c90c
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

	struct UObject* RunEQSQuery(struct UEnvQuery* QueryTemplate, struct UObject* Querier, enum class EEnvQueryRunMode RunMode, struct UClass* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery // Final|Native|Static|Public|BlueprintCallable // @ game+0x662dad4
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

	struct AActor* *91d9328824(); // Function AIModule.*c82e55872b.*91d9328824 // Final|Native|Public|BlueprintCallable|Const // @ game+0x662a32c
	struct UObject* *2c7575d40c(); // Function AIModule.*c82e55872b.*2c7575d40c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x662c60c
	struct FVector *a61474dda5(); // Function AIModule.*c82e55872b.*a61474dda5 // Final|Native|Public|HasDefaults|BlueprintCallable|Const // @ game+0x662a3bc
	struct TArray<struct FVector> DoItemGeneration(); // Function AIModule.*c82e55872b.DoItemGeneration // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x370fbc
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
	int32 *7eff849232; // 0x38(0x04)
	enum class EEnvTestPurpose *947f353466; // 0x3c(0x01)
	struct FString *f9b100134f; // 0x40(0x10)
	enum class *cae4931ba2 *02a61af40a; // 0x50(0x01)
	enum class *64e2f985de *5027f4843a; // 0x51(0x01)
	enum class EEnvTestFilterType *71a97cab03; // 0x52(0x01)
	struct FAIDataProviderBoolValue *698018193e; // 0x58(0x30)
	struct FAIDataProviderFloatValue *760c197eb1; // 0x88(0x30)
	struct FAIDataProviderFloatValue *c9ae3ec86d; // 0xb8(0x30)
	enum class EEnvTestScoreEquation *71a6d6a0f5; // 0xe9(0x01)
	enum class EEnvQueryTestClamping *6108d77ae0; // 0xea(0x01)
	enum class EEnvQueryTestClamping *bd28011e42; // 0xeb(0x01)
	enum class EEQSNormalizationType *c652fceb50; // 0xec(0x01)
	struct FAIDataProviderFloatValue *66a4fe3c50; // 0xf0(0x30)
	struct FAIDataProviderFloatValue *e20f00ebb1; // 0x120(0x30)
	struct FAIDataProviderFloatValue *27ebe47723; // 0x150(0x30)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x180(0x30)
	bool bDefineReferenceValue; // 0x1b0(0x01)
	char *ce9f2920d3 : 1; // 0x1c0(0x01)
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
	float MinDrawDistance; // 0x470(0x04)
	float LDMaxDrawDistance; // 0x474(0x04)
	float CachedMaxDrawDistance; // 0x478(0x04)
	enum class *4c2c3fa7ba *eb729ee19c; // 0x47c(0x01)
	enum class *4c2c3fa7ba *4abdb2d2ee; // 0x47d(0x01)
	char pad_9BE_0 : 3; // 0x9be(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x480(0x01)
	char bGenerateOverlapEvents : 1; // 0x480(0x01)
	char bMultiBodyOverlap : 1; // 0x480(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x480(0x01)
	char bTraceComplexOnMove : 1; // 0x480(0x01)
	char bDisableForceFromCharacter : 1; // 0x481(0x01)
	char bReturnMaterialOnMove : 1; // 0x481(0x01)
	char *09f6c4c3d1 : 1; // 0x481(0x01)
	char bAllowCullDistanceVolume : 1; // 0x481(0x01)
	char bImportantMesh : 1; // 0x481(0x01)
	char bOverrideCullingDistances : 1; // 0x481(0x01)
	float HLODScreenSize; // 0x484(0x04)
	char *6d95e74c7f : 1; // 0x488(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x488(0x01)
	char bRenderInMainPass : 1; // 0x488(0x01)
	char bRenderInMono : 1; // 0x488(0x01)
	char bOwnerNoSee : 1; // 0x488(0x01)
	char bOnlyOwnerSee : 1; // 0x488(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x488(0x01)
	char bUseAsOccluder : 1; // 0x488(0x01)
	char bForceAsOccluder : 1; // 0x489(0x01)
	char bForceOcclusionQuerying : 1; // 0x489(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x489(0x01)
	char *2ec0cf6207 : 1; // 0x489(0x01)
	char bForceMipStreaming : 1; // 0x489(0x01)
	char *105359d223 : 1; // 0x489(0x01)
	char CastShadow : 1; // 0x489(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x48a(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x48a(0x01)
	char bCastDynamicShadow : 1; // 0x48a(0x01)
	char bCastStaticShadow : 1; // 0x48a(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x48a(0x01)
	char bSelfShadowOnly : 1; // 0x48a(0x01)
	char bCastFarShadow : 1; // 0x48a(0x01)
	char bCastInsetShadow : 1; // 0x48a(0x01)
	char bCastCinematicShadow : 1; // 0x48b(0x01)
	char bCastHiddenShadow : 1; // 0x48b(0x01)
	char bCastShadowAsTwoSided : 1; // 0x48b(0x01)
	char bLightAsIfStatic : 1; // 0x48b(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x48b(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x48b(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x48b(0x01)
	char bIgnoreRadialImpulse : 1; // 0x48b(0x01)
	char bIgnoreRadialForce : 1; // 0x48c(0x01)
	char bApplyImpulseOnDamage : 1; // 0x48c(0x01)
	char bSyncBodySleep : 1; // 0x48c(0x01)
	char *1e5038da00 : 1; // 0x48c(0x01)
	char *0f77398d5f : 1; // 0x48c(0x01)
	char *c1c03669ea : 1; // 0x48c(0x01)
	char bRenderCustomDepth : 1; // 0x48c(0x01)
	char *7ea77ae49c : 1; // 0x48d(0x01)
	char *d5b1d4efdd : 1; // 0x48e(0x01)
	char *634898d6e3 : 1; // 0x48e(0x01)
	enum class EDecalChannel DecalChannel; // 0x490(0x01)
	enum class *c276e29a27 IndoorOutdoorMask; // 0x491(0x01)
	struct FLightingChannels LightingChannels; // 0x492(0x03)
	enum class *5e872d5d99 IndirectLightingCacheQuality; // 0x495(0x01)
	bool CustomDepthStencilValue; // 0x496(0x01)
	enum class *e33f967072 CustomDepthStencilWriteMask; // 0x497(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x498(0x10)
	int32 TranslucencySortPriority; // 0x4a8(0x04)
	int32 *bc309c15af; // 0x4ac(0x04)
	float LpvBiasMultiplier; // 0x4b4(0x04)
	struct FBodyInstance BodyInstance; // 0x4c0(0x240)
	enum class EHasCustomNavigableGeometry *36f10e7fa8; // 0x708(0x01)
	float BoundsScale; // 0x744(0x04)
	float *990edc28ca; // 0x748(0x04)
	float *680d1c60d0; // 0x74c(0x04)
	float *ba01ced785; // 0x750(0x04)
	enum class *7235c251e5 CanBeCharacterBase; // 0x754(0x01)
	enum class *7235c251e5 CanCharacterStepUpOn; // 0x756(0x01)
	struct TArray<struct AActor*> *23831abfcf; // 0x758(0x10)
	struct TArray<struct UPrimitiveComponent*> *0c87b28730; // 0x768(0x10)
	struct FMulticastDelegate OnComponentHit; // 0x830(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x840(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x850(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x860(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x870(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x890(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8a0(0x10)
	struct FMulticastDelegate OnClicked; // 0x8b0(0x10)
	struct FMulticastDelegate OnReleased; // 0x8c0(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x8d0(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x8e0(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x8f0(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x900(0x10)
	struct UPrimitiveComponent* *aef56929f8; // 0x938(0x08)
	struct UPrimitiveComponent* *0cf5ac713e; // 0x940(0x08)
	struct F*254b7d2b0f *162fbfca55; // 0x948(0x58)

	bool *e9db8211c2(); // Function Engine.PrimitiveComponent.*e9db8211c2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbb3e4
	bool *5ba0e047ef(); // Function Engine.PrimitiveComponent.*5ba0e047ef // Native|Public|BlueprintCallable // @ game+0x6bc308c
	struct TArray<struct AActor*> CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // Final|Native|Public|BlueprintCallable // @ game+0x6bada30
	bool *83d2d5c58f(); // Function Engine.PrimitiveComponent.*83d2d5c58f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb7f28
	int32 *2355b14434(); // Function Engine.PrimitiveComponent.*2355b14434 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5558
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // Native|Public|BlueprintCallable // @ game+0x6badbe4
	float *64501b49de(); // Function Engine.PrimitiveComponent.*64501b49de // Final|Native|Public|BlueprintCallable // @ game+0x6bc4250
	float *52312be303(); // Function Engine.PrimitiveComponent.*52312be303 // Final|Native|Public|BlueprintCallable // @ game+0x6bc5178
	void *28aecd6f59(); // Function Engine.PrimitiveComponent.*28aecd6f59 // Final|Native|Public|BlueprintCallable // @ game+0x6baae80
	void SetMassScale(struct FName BoneName, float InMassScale); // Function Engine.PrimitiveComponent.SetMassScale // Native|Public|BlueprintCallable // @ game+0x6bc6c74
	void *523a890fe3(); // Function Engine.PrimitiveComponent.*523a890fe3 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bb606c
	void AddForceAtLocation(struct FVector force, struct FVector Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddForceAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba8c54
	void *4696406aa4(); // Function Engine.PrimitiveComponent.*4696406aa4 // Final|Native|Public|BlueprintCallable // @ game+0x6bb2428
	void *d97262aee0(); // Function Engine.PrimitiveComponent.*d97262aee0 // Native|Public|BlueprintCallable // @ game+0x6bc7318
	void AddImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba91b4
	void *d81824b167(); // Function Engine.PrimitiveComponent.*d81824b167 // Final|Native|Public|BlueprintCallable // @ game+0x6bb73a0
	void *53ce351ab3(enum class ECollisionChannel Channel, enum class ECollisionResponse ReturnValue); // Function Engine.PrimitiveComponent.*53ce351ab3 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb2460
	void SetAllPhysicsLinearVelocity(struct FVector NewVel); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bc2f8c
	struct FName SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // Final|Native|Public|BlueprintCallable // @ game+0x6bc76ec
	struct TArray<struct F*0f151f07b7> *2457fa2026(); // Function Engine.PrimitiveComponent.*2457fa2026 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb568c
	struct FVector *c547ccf43f(); // Function Engine.PrimitiveComponent.*c547ccf43f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bb1f7c
	int32 *2a28a4ceb1(); // Function Engine.PrimitiveComponent.*2a28a4ceb1 // Final|Native|Public|BlueprintCallable // @ game+0x6bc5210
	struct UMaterialInterface* *b8614f6ee8(); // Function Engine.PrimitiveComponent.*b8614f6ee8 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4ccc
	struct FVector GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xe2640c
	float *c0fc59eca2(); // Function Engine.PrimitiveComponent.*c0fc59eca2 // Native|Public|BlueprintCallable // @ game+0x6bc2df8
	bool *48b0674a6b(); // Function Engine.PrimitiveComponent.*48b0674a6b // Final|Native|Public|BlueprintCallable // @ game+0x6bb72c0
	struct FName *2726371f61(); // Function Engine.PrimitiveComponent.*2726371f61 // Native|Public|BlueprintCallable // @ game+0x6bc8c0c
	enum class ECollisionEnabled *8e06d61cd2(); // Function Engine.PrimitiveComponent.*8e06d61cd2 // Native|Public|BlueprintCallable // @ game+0xdab868
	bool *7d15f33df8(); // Function Engine.PrimitiveComponent.*7d15f33df8 // Native|Public|BlueprintCallable // @ game+0xe2de98
	bool *2fcd5dc4f1(); // Function Engine.PrimitiveComponent.*2fcd5dc4f1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb7fc8
	struct APawn* *af2cc12a58(bool ReturnValue); // Function Engine.PrimitiveComponent.*af2cc12a58 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6baa800
	void *6147859fcb(int32 FaceIndex, struct UMaterialInterface* ReturnValue); // Function Engine.PrimitiveComponent.*6147859fcb // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4d70
	void *b8cf4b4c35(); // Function Engine.PrimitiveComponent.*b8cf4b4c35 // Final|Native|Public|BlueprintCallable // @ game+0x6bc7e50
	void *e13e475844(); // Function Engine.PrimitiveComponent.*e13e475844 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb71dc
	void SetCollisionObjectType(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.SetCollisionObjectType // Native|Public|BlueprintCallable // @ game+0x6bc4944
	void *c32c2b30ad(struct FVector Origin); // Function Engine.PrimitiveComponent.*c32c2b30ad // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba9bc8
	void *3a3aa0f9aa(enum class ECollisionResponse NewResponse); // Function Engine.PrimitiveComponent.*3a3aa0f9aa // Native|Public|BlueprintCallable // @ game+0x6bc4a70
	void *7f0b02410b(enum class EDOFMode ConstraintMode); // Function Engine.PrimitiveComponent.*7f0b02410b // Native|Public|BlueprintCallable // @ game+0x6bc4fe0
	void *714e0a606e(); // Function Engine.PrimitiveComponent.*714e0a606e // Final|Native|Public|BlueprintCallable // @ game+0x6bc52a0
	void *90432a4b88(struct UPhysicalMaterial* NewPhysMaterial); // Function Engine.PrimitiveComponent.*90432a4b88 // Native|Public|BlueprintCallable // @ game+0x6bc7658
	void *b735fad47e(int32 NewTranslucentSortPriority); // Function Engine.PrimitiveComponent.*b735fad47e // Final|Native|Public|BlueprintCallable // @ game+0x6bc8968
	void *4fedb1a6a3(); // Function Engine.PrimitiveComponent.*4fedb1a6a3 // Native|Public|BlueprintCallable // @ game+0x6bc68d8
	void *e87bee575d(); // Function Engine.PrimitiveComponent.*e87bee575d // Final|Native|Public|BlueprintCallable // @ game+0x6bc73b0
	float *aaacbbdb6c(); // Function Engine.PrimitiveComponent.*aaacbbdb6c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5da4b2c
	struct F*705bbdf923 *78d8a0af1f(); // Function Engine.PrimitiveComponent.*78d8a0af1f // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6bc930c
	struct FName SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bc45d4
	float *19a69f011f(); // Function Engine.PrimitiveComponent.*19a69f011f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb227c
	struct FName *0de970a16f(); // Function Engine.PrimitiveComponent.*0de970a16f // Final|Native|Public|BlueprintCallable // @ game+0x6bbf17c
	struct FName SetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xdf5f78
	bool AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba8240
	struct FName AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba92f4
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // Native|Public|BlueprintCallable // @ game+0xe4e7cc
	float *74fc74b263(); // Function Engine.PrimitiveComponent.*74fc74b263 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4c0c
	void *bd0ec46553(struct FVector NewAngVel, bool bAddToCurrent); // Function Engine.PrimitiveComponent.*bd0ec46553 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bc2e94
	void SetAngularDamping(float InDamping); // Function Engine.PrimitiveComponent.SetAngularDamping // Native|Public|BlueprintCallable // @ game+0x6bbdc54
	void *48305203f7(); // Function Engine.PrimitiveComponent.*48305203f7 // Native|Public|BlueprintCallable // @ game+0x6bc6d58
	void *d260a6c731(enum class ECollisionChannel ReturnValue); // Function Engine.PrimitiveComponent.*d260a6c731 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb2400
	void *47ec021dd1(); // Function Engine.PrimitiveComponent.*47ec021dd1 // Native|Public|BlueprintCallable // @ game+0x6bbf6f0
	void *40b80e1f86(float ReturnValue); // Function Engine.PrimitiveComponent.*40b80e1f86 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb12fc
	void *04a08b51bb(); // Function Engine.PrimitiveComponent.*04a08b51bb // Native|Public|BlueprintCallable // @ game+0x5e1c720
	void CreateAndSetMaterialInstanceDynamic(struct UMaterialInstanceDynamic* ReturnValue); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // Native|Public|BlueprintCallable // @ game+0x6badb40
	void *7614d2f54e(bool ReturnValue); // Function Engine.PrimitiveComponent.*7614d2f54e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb7b68
	void *603b323c81(); // Function Engine.PrimitiveComponent.*603b323c81 // Final|Native|Public|BlueprintCallable // @ game+0x6baae9c
	void *448cf7e0f2(); // Function Engine.PrimitiveComponent.*448cf7e0f2 // Native|Public|BlueprintCallable // @ game+0x6bca848
	void *0f1b74141b(); // Function Engine.PrimitiveComponent.*0f1b74141b // Final|Native|Public|BlueprintCallable // @ game+0x6bc7500
	void AddTorque(struct FVector Torque, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddTorque // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6baa088
	bool K2_LineTraceComponent(); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbb474
	struct FName *2e26aaaf30(); // Function Engine.PrimitiveComponent.*2e26aaaf30 // Native|Public|BlueprintCallable // @ game+0x6bc49dc
	struct FVector GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bb5fbc
	struct TArray<struct UPrimitiveComponent*> GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5a2c
	float GetMass(); // Function Engine.PrimitiveComponent.GetMass // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4be0
	bool *09ce12ba0b(); // Function Engine.PrimitiveComponent.*09ce12ba0b // Native|Public|BlueprintCallable // @ game+0x6bc6b48
	bool *85d8176587(); // Function Engine.PrimitiveComponent.*85d8176587 // Native|Public|BlueprintCallable // @ game+0x6bb7678
	bool *6cbdd1633c(); // Function Engine.PrimitiveComponent.*6cbdd1633c // Final|Native|Public|BlueprintCallable // @ game+0x6bc7ee4
	bool *90cc3021c0(); // Function Engine.PrimitiveComponent.*90cc3021c0 // Final|Native|Public|BlueprintCallable // @ game+0x6bc7f78
	struct UClass* GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5834
	void *083545280a(struct TArray<struct UPrimitiveComponent*> ReturnValue); // Function Engine.PrimitiveComponent.*083545280a // Final|Native|Public|BlueprintCallable // @ game+0x6badab8
	void SetPhysicsAngularVelocity(struct FVector NewAngVel, bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xde91c4
	void *8022a6e53e(float Strength, enum class *cb41f937c0 Falloff, bool bAccelChange); // Function Engine.PrimitiveComponent.*8022a6e53e // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba99f4
	void *67e552295b(); // Function Engine.PrimitiveComponent.*67e552295b // Native|Public|BlueprintCallable // @ game+0x6bc4b08
	void *f1e65a30d8(struct FName BoneName, struct FVector ReturnValue); // Function Engine.PrimitiveComponent.*f1e65a30d8 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbfbfc
	void AddForceAtLocationLocal(struct FVector force); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba8da0
	void *6e71cecd23(struct FVector ReturnValue); // Function Engine.PrimitiveComponent.*6e71cecd23 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb3c64
	void CreateDynamicMaterialInstance(int32 ElementIndex, struct UMaterialInterface* SourceMaterial); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x6badcd4
	void *95fc0388db(); // Function Engine.PrimitiveComponent.*95fc0388db // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbb440
	bool AddForce(); // Function Engine.PrimitiveComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba8b14
	enum class ECollisionEnabled *99eb55293a(); // Function Engine.PrimitiveComponent.*99eb55293a // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb23d8
	bool *419ebb4754(); // Function Engine.PrimitiveComponent.*419ebb4754 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbb410
	bool *638da52b6d(); // Function Engine.PrimitiveComponent.*638da52b6d // Final|Native|Public|BlueprintCallable // @ game+0x6bc44a8
	float SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // Native|Public|BlueprintCallable // @ game+0x6bc683c
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
	struct TArray<struct F*67bc07c1f6> Areas; // 0x30(0x10)
	struct F*a0d435eae7 IncludeFlags; // 0x40(0x04)
	struct F*a0d435eae7 ExcludeFlags; // 0x44(0x04)
};

// Class AIModule.*96e7d3e9ce
// Size: 0x60 (Inherited: 0x30)
struct U*96e7d3e9ce : UObject {
	char pad_30[0x30]; // 0x30(0x30)
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

	enum class EPawnActionResult Finish(); // Function AIModule.*11ffea466c.Finish // Native|Protected|BlueprintCallable // @ game+0x662b220
	void *8289a99f9b(enum class EAIRequestPriority ReturnValue); // Function AIModule.*11ffea466c.*8289a99f9b // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x662b368
	void *246548833b(struct UObject* WorldContextObject, struct UClass* ActionClass); // Function AIModule.*11ffea466c.*246548833b // Final|Native|Static|Public|BlueprintCallable // @ game+0x662af58
};

// Class AIModule.*6203075574
// Size: 0xd0 (Inherited: 0xd0)
struct U*6203075574 : U*11ffea466c {
	struct U*11ffea466c* *9920a3c195; // 0x30(0x08)
	struct U*11ffea466c* *dd91487896; // 0x38(0x08)
	struct U*a95a97387c* *a98114542b; // 0x40(0x08)
	struct UObject* Instigator; // 0x48(0x08)
	struct UBrainComponent* *92ac39946d; // 0x50(0x08)
	char bAllowNewSameClassInstance : 1; // 0xb8(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0xb8(0x01)
	char bShouldPauseMovement : 1; // 0xb8(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0xb8(0x01)

	enum class EPawnActionResult Finish(); // Function AIModule.*11ffea466c.Finish // Native|Protected|BlueprintCallable // @ game+0x662b220
	void *8289a99f9b(enum class EAIRequestPriority ReturnValue); // Function AIModule.*11ffea466c.*8289a99f9b // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x662b368
	void *246548833b(struct UObject* WorldContextObject, struct UClass* ActionClass); // Function AIModule.*11ffea466c.*246548833b // Final|Native|Static|Public|BlueprintCallable // @ game+0x662af58
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

	void *926c372b92(); // Function AIModule.*a95a97387c.*926c372b92 // Final|Native|Public|BlueprintCallable // @ game+0x662d4fc
	void *bc127cf5bf(struct U*11ffea466c* ActionToAbort, enum class EPawnActionAbortState ReturnValue); // Function AIModule.*a95a97387c.*bc127cf5bf // Final|Native|Public|BlueprintCallable // @ game+0x662d5a4
	void *c21c2e79f9(); // Function AIModule.*a95a97387c.*c21c2e79f9 // Final|Native|Public|BlueprintCallable // @ game+0x662d770
	void *9198fad360(struct APawn* Pawn, struct U*11ffea466c* Action, enum class EAIRequestPriority Priority); // Function AIModule.*a95a97387c.*9198fad360 // Final|Native|Static|Public|BlueprintCallable // @ game+0x662d63c
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

	void *cdc9c9a522(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.*cdc9c9a522 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5dd3934
	void SeePawnDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x370fbc
	float HearNoiseDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x370fbc
	float *bb4606926f(); // Function AIModule.PawnSensingComponent.*bb4606926f // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x662f200
	bool *cea6fe97e6(); // Function AIModule.PawnSensingComponent.*cea6fe97e6 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x662f29c
	float *9e147a780a(); // Function AIModule.PawnSensingComponent.*9e147a780a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x662c5f4
	float *00816a3c4f(); // Function AIModule.PawnSensingComponent.*00816a3c4f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x662c5dc
};

// Class AIModule.*1834b5491b
// Size: 0x30 (Inherited: 0x30)
struct U*1834b5491b : UObject {
};


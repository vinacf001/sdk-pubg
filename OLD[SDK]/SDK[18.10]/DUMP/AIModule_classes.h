// Class AIModule.BTNode
// Size: 0x70 (Inherited: 0x30)
struct UBTNode : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString NodeName; // 0x38(0x10)
	struct FString Tag; // 0x48(0x10)
	struct UBehaviorTree* *23b47663f5; // 0x58(0x08)
	struct UBTCompositeNode* *7241e2d970; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class AIModule.BTTaskNode
// Size: 0x88 (Inherited: 0x70)
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; // 0x70(0x10)
	char *365341c56f : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.AISense
// Size: 0x120 (Inherited: 0x30)
struct UAISense : UObject {
	float DefaultExpirationAge; // 0x30(0x04)
	enum class *40786627d2 NotifyType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bWantsNewPawnNotification : 1; // 0x38(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAIPerceptionSystem* *65c690bb6c; // 0x40(0x08)
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

// Class AIModule.*87e264aa3c
// Size: 0x50 (Inherited: 0x30)
struct U*87e264aa3c : UObject {
	struct FColor DebugColor; // 0x30(0x04)
	float MaxAge; // 0x34(0x04)
	char bStartsEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x17]; // 0x39(0x17)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x68 (Inherited: 0x50)
struct UAISenseConfig_Hearing : U*87e264aa3c {
	struct UClass* Implementation; // 0x50(0x08)
	float HearingRange; // 0x58(0x04)
	float LoSHearingRange; // 0x5c(0x04)
	char bUseLoSHearing : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct F*69aff14219 DetectionByAffiliation; // 0x64(0x04)
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x70 (Inherited: 0x50)
struct UAISenseConfig_Sight : U*87e264aa3c {
	struct UClass* Implementation; // 0x50(0x08)
	float SightRadius; // 0x58(0x04)
	float LoseSightRadius; // 0x5c(0x04)
	float PeripheralVisionAngleDegrees; // 0x60(0x04)
	struct F*69aff14219 DetectionByAffiliation; // 0x64(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class AIModule.BlackboardComponent
// Size: 0x300 (Inherited: 0x200)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* *291d373322; // 0x200(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x208(0x08)
	char pad_210[0x20]; // 0x210(0x20)
	struct TArray<struct UBlackboardKeyType*> *67afa5be9c; // 0x230(0x10)
	char pad_240[0xc0]; // 0x240(0xc0)

	struct FVector *e8a0981ebb(); // Function AIModule.BlackboardComponent.*e8a0981ebb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e90d74
	struct FName *fd6817de08(); // Function AIModule.BlackboardComponent.*fd6817de08 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8df24
	float *e5eccc974e(); // Function AIModule.BlackboardComponent.*e5eccc974e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e906f0
	struct FVector *311a48a08d(); // Function AIModule.BlackboardComponent.*311a48a08d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8e27c
	bool *24c940d802(); // Function AIModule.BlackboardComponent.*24c940d802 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8db8c
	struct FRotator *bd6a31d38a(); // Function AIModule.BlackboardComponent.*bd6a31d38a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8e094
	struct FString *1717683b44(); // Function AIModule.BlackboardComponent.*1717683b44 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e90c10
	bool *1ea3bf47a9(); // Function AIModule.BlackboardComponent.*1ea3bf47a9 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8e41c
	struct FRotator *b2df238a5a(); // Function AIModule.BlackboardComponent.*b2df238a5a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e90af8
	bool *70a6e5f536(); // Function AIModule.BlackboardComponent.*70a6e5f536 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8d478
	struct UClass* *3de9290273(); // Function AIModule.BlackboardComponent.*3de9290273 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8dc44
	struct FName *f535dbd337(); // Function AIModule.BlackboardComponent.*f535dbd337 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e8bfac
	struct FString *938f378f17(); // Function AIModule.BlackboardComponent.*938f378f17 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8e160
	float *731a90a1ec(); // Function AIModule.BlackboardComponent.*731a90a1ec // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8ddb4
	bool *05a2329dd6(); // Function AIModule.BlackboardComponent.*05a2329dd6 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8dcfc
	bool *16cca2e950(); // Function AIModule.BlackboardComponent.*16cca2e950 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e903ec
	struct UObject* *371d8fefe0(); // Function AIModule.BlackboardComponent.*371d8fefe0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e909f8
	int32 *d63b3ec8d5(); // Function AIModule.BlackboardComponent.*d63b3ec8d5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e907f8
	int32 *688468cfa7(); // Function AIModule.BlackboardComponent.*688468cfa7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8de6c
	struct FName *4f4543824b(); // Function AIModule.BlackboardComponent.*4f4543824b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e908f8
	struct UClass* *c06eb33167(); // Function AIModule.BlackboardComponent.*c06eb33167 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e904f0
	bool *c998fdd5cf(); // Function AIModule.BlackboardComponent.*c998fdd5cf // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e905f0
	bool *fa1e613f19(); // Function AIModule.BlackboardComponent.*fa1e613f19 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8d9a0
	struct UObject* *9c9a40a60e(); // Function AIModule.BlackboardComponent.*9c9a40a60e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8dfdc
};

// Class AIModule.PathFollowingComponent
// Size: 0x4d0 (Inherited: 0x200)
struct UPathFollowingComponent : UActorComponent {
	char pad_200[0x130]; // 0x200(0x130)
	struct UNavMovementComponent* MovementComp; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)
	struct ANavigationData* *eac456cf29; // 0x340(0x08)
	char pad_348[0x188]; // 0x348(0x188)

	enum class EPathFollowingAction *b7793bf9d8(); // Function AIModule.PathFollowingComponent.*b7793bf9d8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e880b8
	struct FHitResult OnActorBump(); // Function AIModule.PathFollowingComponent.OnActorBump // Native|Public|HasOutParms|HasDefaults // @ game+0x5e88e70
	struct FVector *a48d85ef14(); // Function AIModule.PathFollowingComponent.*a48d85ef14 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e88134
	struct ANavigationData* OnNavDataRegistered(); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // Final|Native|Protected // @ game+0x5e891ec
};

// Class AIModule.*c065e5cce0
// Size: 0x30 (Inherited: 0x30)
struct U*c065e5cce0 : UInterface {
};

// Class AIModule.AIController
// Size: 0x500 (Inherited: 0x470)
struct AAIController : AController {
	char pad_470[0x38]; // 0x470(0x38)
	char bStopAILogicOnUnposses : 1; // 0x4a8(0x01)
	char *941dcbacb6 : 1; // 0x4a8(0x01)
	char *7e3c61001f : 1; // 0x4a8(0x01)
	char *d576dec85e : 1; // 0x4a8(0x01)
	char *d9cd8c5a52 : 1; // 0x4a8(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4a8(0x01)
	char pad_4A8_6 : 2; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x4b0(0x08)
	struct UBrainComponent* BrainComponent; // 0x4b8(0x08)
	struct UAIPerceptionComponent* *7501f47eec; // 0x4c0(0x08)
	struct U*abba2dbb00* ActionsComp; // 0x4c8(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4d0(0x08)
	struct UGameplayTasksComponent* *e20b95b0bd; // 0x4d8(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x4e0(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x4e8(0x10)
	char pad_4F8[0x8]; // 0x4f8(0x08)

	struct AActor* K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x5e88718
	bool *f22d9c049e(); // Function AIModule.AIController.*f22d9c049e // Final|Native|Public|BlueprintCallable // @ game+0x5e8a050
	enum class EPathFollowingStatus *af35f57c90(); // Function AIModule.AIController.*af35f57c90 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e88090
	bool *8130a7909f(); // Function AIModule.AIController.*8130a7909f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8839c
	struct APawn* OnUnpossess(); // Function AIModule.AIController.OnUnpossess // Event|Public|BlueprintEvent // @ game+0x1b829c
	bool RunBehaviorTree(); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x5e89de8
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x5e88654
	struct FVector *1384cedcdf(); // Function AIModule.AIController.*1384cedcdf // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e87df8
	struct UClass* *4be075a2a2(); // Function AIModule.AIController.*4be075a2a2 // Final|Native|Public|BlueprintCallable // @ game+0x5e8a340
	bool UseBlackboard(); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e8a5a4
	struct F*2a717b7917 OnGameplayTaskResourcesClaimed(); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x5e89030
	struct UAIPerceptionComponent* *e2693f27ef(); // Function AIModule.AIController.*e2693f27ef // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e87930
	struct UClass* *606eb98157(); // Function AIModule.AIController.*606eb98157 // Final|Native|Public|BlueprintCallable // @ game+0x5e875f0
	enum class EPathFollowingRequestResult *227e52d460(); // Function AIModule.AIController.*227e52d460 // Final|Native|Public|BlueprintCallable // @ game+0x5e888e0
	struct UPathFollowingComponent* *90ea12cbb5(); // Function AIModule.AIController.*90ea12cbb5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e88168
	struct FVector *003473c42b(); // Function AIModule.AIController.*003473c42b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e87e2c
	struct AActor* *6aaddab47e(); // Function AIModule.AIController.*6aaddab47e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e87ee4
	struct UBlackboardData* OnUsingBlackBoard(); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct FVector K2_SetFocalPoint(); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5e88670
	struct FVector *54677b7e4d(); // Function AIModule.AIController.*54677b7e4d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e87f08
	enum class EPathFollowingRequestResult *90cfd116e1(); // Function AIModule.AIController.*90cfd116e1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e88b78
	struct APawn* OnPossess(); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x1b829c
};

// Class AIModule.BlackboardKeyType
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType : UObject {
	char pad_30[0x8]; // 0x30(0x08)
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
	char *030d35b809 : 1; // 0x78(0x01)
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
	struct FString *6def975b7c; // 0xc0(0x10)
	bool OperationType; // 0xd0(0x01)
	enum class *fc84c4adaf NotifyObserver; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
};

// Class AIModule.BTService
// Size: 0x88 (Inherited: 0x78)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x78(0x04)
	float *e7cfc56453; // 0x7c(0x04)
	char *e219488405 : 1; // 0x80(0x01)
	char *8eda4a276a : 1; // 0x80(0x01)
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
	bool *fc3f7936d1; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class AIModule.AIPerceptionComponent
// Size: 0x2e0 (Inherited: 0x200)
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct U*87e264aa3c*> *02ad26e521; // 0x200(0x10)
	struct UClass* *6f1de5bcb4; // 0x210(0x08)
	char pad_218[0x10]; // 0x218(0x10)
	struct AAIController* *9477fbe1d5; // 0x228(0x08)
	char pad_230[0x80]; // 0x230(0x80)
	struct FMulticastDelegate OnPerceptionUpdated; // 0x2b0(0x10)
	struct FMulticastDelegate OnTargetPerceptionUpdated; // 0x2c0(0x10)
	char pad_2D0[0x10]; // 0x2d0(0x10)

	struct TArray<struct AActor*> *9b1aaf60ef(); // Function AIModule.AIPerceptionComponent.*9b1aaf60ef // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e87cd8
	enum class EEndPlayReason OnOwnerEndPlay(); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // Final|Native|Public // @ game+0x5e8927c
	void *93de6f898e(); // Function AIModule.AIPerceptionComponent.*93de6f898e // Final|Native|Public|BlueprintCallable // @ game+0x5e89dd4
	struct TArray<struct AActor*> *e10ab62868(); // Function AIModule.AIPerceptionComponent.*e10ab62868 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e88180
	bool *49c02b16d5(); // Function AIModule.AIPerceptionComponent.*49c02b16d5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e87948
	struct TArray<struct AActor*> *ea44c6195d(); // Function AIModule.AIPerceptionComponent.*ea44c6195d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e87f70
	struct TArray<struct AActor*> *b8cd42e1e5(); // Function AIModule.AIPerceptionComponent.*b8cd42e1e5 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e87cd8
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
	struct UClass* *b5456fcb59; // 0xb8(0x08)
	float *f5b45d93e0; // 0xc0(0x04)
	char bObserveBlackboardValue : 1; // 0xc4(0x01)
	char *d576dec85e : 1; // 0xc4(0x01)
	char *8f2455536c : 1; // 0xc4(0x01)
	char *47d4aab295 : 1; // 0xc4(0x01)
	char *157f9c665f : 1; // 0xc4(0x01)
	char *54a4cf7672 : 1; // 0xc4(0x01)
	char pad_C4_6 : 2; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// Class AIModule.BTTask_Wait
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_Wait : UBTTaskNode {
	float *577765ed3c; // 0x88(0x04)
	float *e7cfc56453; // 0x8c(0x04)
};

// Class AIModule.*2c88f5d3a9
// Size: 0x98 (Inherited: 0x88)
struct U*2c88f5d3a9 : UBTTaskNode {
	struct FGameplayTag *6bb7513bdd; // 0x88(0x08)
	bool *c31f0c00e1; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float *f3d7337c25; // 0x94(0x04)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xd0 (Inherited: 0xc8)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xc8(0x01)
	char *04750026da : 1; // 0xc8(0x01)
	char *304d13f5e7 : 1; // 0xc8(0x01)
	char pad_C8_3 : 5; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class AIModule.*3c47b5fc18
// Size: 0xb8 (Inherited: 0x90)
struct U*3c47b5fc18 : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; // 0x90(0x28)
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x520 (Inherited: 0x4d0)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	struct FVector *7d21e0de79; // 0x4d0(0x0c)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UCharacterMovementComponent* CharacterMovement; // 0x4e0(0x08)
	struct F*f2710e04b9 AvoidanceGroup; // 0x4e8(0x04)
	struct F*f2710e04b9 GroupsToAvoid; // 0x4ec(0x04)
	struct F*f2710e04b9 GroupsToIgnore; // 0x4f0(0x04)
	char pad_4F4[0x2c]; // 0x4f4(0x2c)

	bool *a5c6b63a01(); // Function AIModule.CrowdFollowingComponent.*a5c6b63a01 // Native|Public|BlueprintCallable // @ game+0x5e9100c
};

// Class AIModule.BTService_BlueprintBase
// Size: 0xb0 (Inherited: 0x88)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* *9477fbe1d5; // 0x88(0x08)
	struct AActor* *73e497a1ad; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)
	char *9936f49e91 : 1; // 0xa8(0x01)
	char *0c270317a6 : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	struct AActor* ReceiveSearchStart(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // Event|Protected|BlueprintEvent // @ game+0x1b829c
	bool *02fafa54b8(); // Function AIModule.BTService_BlueprintBase.*02fafa54b8 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8e3b8
	struct APawn* ReceiveSearchStartAI(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct AActor* ReceiveActivation(); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // Event|Protected|BlueprintEvent // @ game+0x1b829c
	float ReceiveTickAI(); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct APawn* ReceiveActivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	float ReceiveTick(); // Function AIModule.BTService_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct AActor* ReceiveDeactivation(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct APawn* ReceiveDeactivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xb8 (Inherited: 0x88)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* *9477fbe1d5; // 0x88(0x08)
	struct AActor* *73e497a1ad; // 0x90(0x08)
	char pad_98[0x18]; // 0x98(0x18)
	char *9936f49e91 : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	float ReceiveTick(); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct APawn* ReceiveAbortAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	void *7c6d384eb4(); // Function AIModule.BTTask_BlueprintBase.*7c6d384eb4 // Final|Native|Protected|BlueprintCallable // @ game+0x5e8c3bc
	int32 *b3b3bf46be(); // Function AIModule.BTTask_BlueprintBase.*b3b3bf46be // Final|Native|Protected|BlueprintCallable // @ game+0x5e8ff50
	float ReceiveTickAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct AActor* ReceiveAbort(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct FName *d8a96e0dcf(); // Function AIModule.BTTask_BlueprintBase.*d8a96e0dcf // Final|Native|Protected|BlueprintCallable // @ game+0x5e8fec0
	struct APawn* ReceiveExecuteAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	bool *cb9d78f358(); // Function AIModule.BTTask_BlueprintBase.*cb9d78f358 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8e3f8
	bool *5cd3d0117e(); // Function AIModule.BTTask_BlueprintBase.*5cd3d0117e // Final|Native|Protected|BlueprintCallable // @ game+0x5e8c3d0
	struct AActor* ReceiveExecute(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // Event|Protected|BlueprintEvent // @ game+0x1b829c
	bool *e523d89c4c(); // Function AIModule.BTTask_BlueprintBase.*e523d89c4c // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8e3dc
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

	enum class EPathFollowingResult OnMoveCompleted(); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // Final|Native|Public // @ game+0x5e89110
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	bool *5ee092a158(); // Function AIModule.AIBlueprintHelperLibrary.*5ee092a158 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e89e90
	bool *832c6112a4(); // Function AIModule.AIBlueprintHelperLibrary.*832c6112a4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e883bc
	bool *ad8d8aebc3(); // Function AIModule.AIBlueprintHelperLibrary.*ad8d8aebc3 // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x5e8a3d0
	struct UBlackboardComponent* GetBlackboard(); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e87c48
	bool *9638abd4f8(); // Function AIModule.AIBlueprintHelperLibrary.*9638abd4f8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e885a0
	bool *aa83b8656f(); // Function AIModule.AIBlueprintHelperLibrary.*aa83b8656f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e884b8
	struct APawn* *596e9bdbf2(); // Function AIModule.AIBlueprintHelperLibrary.*596e9bdbf2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5e8a114
	struct AAIController* *6128913c1a(); // Function AIModule.AIBlueprintHelperLibrary.*6128913c1a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e878a0
	struct UAIAsyncTaskBlueprintProxy* *a1c01b10b4(); // Function AIModule.AIBlueprintHelperLibrary.*a1c01b10b4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5e87680
	bool *9ab28e777d(); // Function AIModule.AIBlueprintHelperLibrary.*9ab28e777d // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x5e887b0
};

// Class AIModule.*78b24eefc2
// Size: 0x30 (Inherited: 0x30)
struct U*78b24eefc2 : UInterface {
};

// Class AIModule.*ef1b2a7637
// Size: 0x30 (Inherited: 0x30)
struct U*ef1b2a7637 : UInterface {
};

// Class AIModule.DetourCrowdAIController
// Size: 0x500 (Inherited: 0x500)
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.GridPathAIController
// Size: 0x500 (Inherited: 0x500)
struct AGridPathAIController : AAIController {
};

// Class AIModule.*0bff913aa9
// Size: 0x30 (Inherited: 0x30)
struct U*0bff913aa9 : UObject {
};

// Class AIModule.*1804c2babe
// Size: 0x48 (Inherited: 0x30)
struct U*1804c2babe : U*0bff913aa9 {
	struct FName ParamName; // 0x30(0x08)
	float FloatValue; // 0x38(0x04)
	int32 IntValue; // 0x3c(0x04)
	bool *3e13fd76d8; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class AIModule.*afb0713af5
// Size: 0x58 (Inherited: 0x48)
struct U*afb0713af5 : U*1804c2babe {
	float Min; // 0x48(0x04)
	float Max; // 0x4c(0x04)
	char *c09ca639e5 : 1; // 0x50(0x01)
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
	struct TArray<struct UAISense*> *826dc25744; // 0x88(0x10)
	float PerceptionAgingRate; // 0x98(0x04)
	char pad_9C[0x9c]; // 0x9c(0x9c)

	bool *0865596528(); // Function AIModule.AIPerceptionSystem.*0865596528 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e894c0
	struct U*1c525798c2* *bc76df2bb9(); // Function AIModule.AIPerceptionSystem.*bc76df2bb9 // Final|Native|Public|BlueprintCallable // @ game+0x5e89818
	enum class EEndPlayReason OnPerceptionStimuliSourceEndPlay(); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // Final|Native|Protected // @ game+0x5e89360
	struct UClass* *809cb4f27c(); // Function AIModule.AIPerceptionSystem.*809cb4f27c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8824c
	struct U*1c525798c2* *0ff342fb71(); // Function AIModule.AIPerceptionSystem.*0ff342fb71 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e89abc
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x220 (Inherited: 0x200)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0x200(0x01)
	char pad_200_1 : 7; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct TArray<struct UClass*> RegisterAsSourceForSenses; // 0x208(0x10)
	char pad_218[0x8]; // 0x218(0x08)

	struct UClass* *de536bfc62(); // Function AIModule.AIPerceptionStimuliSourceComponent.*de536bfc62 // Final|Native|Public|BlueprintCallable // @ game+0x5e89430
	void *ff5c466996(); // Function AIModule.AIPerceptionStimuliSourceComponent.*ff5c466996 // Final|Native|Public|BlueprintCallable // @ game+0x5e895dc
	void *d5e9b5119f(); // Function AIModule.AIPerceptionStimuliSourceComponent.*d5e9b5119f // Final|Native|Public|BlueprintCallable // @ game+0x5e8a500
	struct UClass* *99a14372a4(); // Function AIModule.AIPerceptionStimuliSourceComponent.*99a14372a4 // Final|Native|Public|BlueprintCallable // @ game+0x5e8a514
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
	struct TArray<struct U*1c525798c2*> *c24e4ce1a0; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)

	struct UAIPerceptionComponent* OnListenerUnregistered(); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // Event|Public|BlueprintEvent // @ game+0x1b829c
	float OnUpdate(); // Function AIModule.AISense_Blueprint.OnUpdate // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1b829c
	struct UAIPerceptionComponent* OnListenerRegistered(); // Function AIModule.AISense_Blueprint.OnListenerRegistered // Event|Public|BlueprintEvent // @ game+0x1b829c
	struct UAIPerceptionComponent* OnListenerUpdated(); // Function AIModule.AISense_Blueprint.OnListenerUpdated // Event|Public|BlueprintEvent // @ game+0x1b829c
	struct APawn* K2_OnNewPawn(); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // Event|Public|BlueprintEvent // @ game+0x1b829c
	struct TArray<struct AActor*> *5bb3cf9bcd(); // Function AIModule.AISense_Blueprint.*5bb3cf9bcd // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e87a74
	struct TArray<struct UAIPerceptionComponent*> *279d4082c6(); // Function AIModule.AISense_Blueprint.*279d4082c6 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e87b3c
};

// Class AIModule.AISense_Damage
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Damage : UAISense {
	struct TArray<struct F*2f8eafb470> *c9512b159b; // 0x120(0x10)

	struct FVector *fb803ec302(); // Function AIModule.AISense_Damage.*fb803ec302 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5e895f0
};

// Class AIModule.AISense_Hearing
// Size: 0x190 (Inherited: 0x120)
struct UAISense_Hearing : UAISense {
	struct TArray<struct F*c6e7d5afa9> *552df1ebd8; // 0x120(0x10)
	float SpeedOfSoundSq; // 0x130(0x04)
	char pad_134[0x5c]; // 0x134(0x5c)

	struct FName *ef02789d67(); // Function AIModule.AISense_Hearing.*ef02789d67 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5e898a8
};

// Class AIModule.AISense_Prediction
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Prediction : UAISense {
	struct TArray<struct F*ec30f63656> *c9512b159b; // 0x120(0x10)

	float *793e8f974a(); // Function AIModule.AISense_Prediction.*793e8f974a // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e89cb8
	float *e6181d95b8(); // Function AIModule.AISense_Prediction.*e6181d95b8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e89b9c
};

// Class AIModule.AISense_Team
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Team : UAISense {
	struct TArray<struct F*499800f6b4> *c9512b159b; // 0x120(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Touch : UAISense {
	struct TArray<struct F*71210772b7> *c9512b159b; // 0x120(0x10)
};

// Class AIModule.*89f8b139f5
// Size: 0x108 (Inherited: 0x108)
struct U*89f8b139f5 : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x58 (Inherited: 0x50)
struct UAISenseConfig_Blueprint : U*87e264aa3c {
	struct UClass* Implementation; // 0x50(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x58 (Inherited: 0x50)
struct UAISenseConfig_Damage : U*87e264aa3c {
	struct UClass* Implementation; // 0x50(0x08)
};

// Class AIModule.*70fb661f74
// Size: 0x50 (Inherited: 0x50)
struct U*70fb661f74 : U*87e264aa3c {
};

// Class AIModule.*2425e67841
// Size: 0x50 (Inherited: 0x50)
struct U*2425e67841 : U*87e264aa3c {
};

// Class AIModule.*f52036d123
// Size: 0x50 (Inherited: 0x50)
struct U*f52036d123 : U*87e264aa3c {
};

// Class AIModule.*1c525798c2
// Size: 0x30 (Inherited: 0x30)
struct U*1c525798c2 : UObject {
};

// Class AIModule.*4dc916c1b7
// Size: 0x60 (Inherited: 0x30)
struct U*4dc916c1b7 : U*1c525798c2 {
	struct F*2f8eafb470 Event; // 0x30(0x30)
};

// Class AIModule.*a6f50ad483
// Size: 0x60 (Inherited: 0x30)
struct U*a6f50ad483 : U*1c525798c2 {
	struct F*c6e7d5afa9 Event; // 0x30(0x30)
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
	struct UEnvQueryManager* *392836d7b1; // 0x90(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0x98(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> *3cc5dfc624; // 0xa0(0x10)
	struct UAIHotSpotManager* *718e6887d4; // 0xb0(0x08)
	struct U*ce0e010772* *63b8ba983f; // 0xb8(0x08)
	char pad_C0[0x58]; // 0xc0(0x58)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // Exec|Native|Public // @ game+0x57046d0
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // Exec|Native|Public // @ game+0x5e8b004
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
	struct F*de7f12a472 *d137c5c17f; // 0x98(0x50)
	char pad_E8[0x40]; // 0xe8(0x40)

	struct UAITask_MoveTo* AIMoveTo(); // Function AIModule.AITask_MoveTo.AIMoveTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5e8b01c
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

	struct UAITask_RunEQS* *fcdf87a626(); // Function AIModule.AITask_RunEQS.*fcdf87a626 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e8e9e8
};

// Class AIModule.BrainComponent
// Size: 0x260 (Inherited: 0x200)
struct UBrainComponent : UActorComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0x208(0x08)
	struct AAIController* *9477fbe1d5; // 0x210(0x08)
	char pad_218[0x48]; // 0x218(0x48)

	struct FString *f7792b9799(); // Function AIModule.BrainComponent.*f7792b9799 // Native|Public|BlueprintCallable // @ game+0x5e90f48
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // Native|Public|BlueprintCallable // @ game+0xd49ae8
	bool IsRunning(); // Function AIModule.BrainComponent.IsRunning // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56e9c4c
	bool *7f2ef7f336(); // Function AIModule.BrainComponent.*7f2ef7f336 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8e390
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x3a0 (Inherited: 0x260)
struct UBehaviorTreeComponent : UBrainComponent {
	char pad_260[0x20]; // 0x260(0x20)
	struct TArray<struct UBTNode*> *874ee6642b; // 0x280(0x10)
	char pad_290[0x110]; // 0x290(0x110)

	struct UBehaviorTree* *866fe4dda8(); // Function AIModule.BehaviorTreeComponent.*866fe4dda8 // Native|Public|BlueprintCallable // @ game+0x5e8fde0
	bool *b0a6144ceb(); // Function AIModule.BehaviorTreeComponent.*b0a6144ceb // Final|Native|Public|BlueprintCallable // @ game+0x5e8b2f0
	float *0a70142e47(); // Function AIModule.BehaviorTreeComponent.*0a70142e47 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8dabc
};

// Class AIModule.BTCompositeNode
// Size: 0xe0 (Inherited: 0x70)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct F*bc8cfc90a0> Children; // 0x70(0x10)
	struct TArray<struct UBTService*> Services; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)
};

// Class AIModule.BehaviorTree
// Size: 0x68 (Inherited: 0x30)
struct UBehaviorTree : UObject {
	struct UBTCompositeNode* RootNode; // 0x30(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x38(0x08)
	struct TArray<struct UBTDecorator*> *9fc94fdf8f; // 0x40(0x10)
	struct TArray<struct F*0a3d5e26e0> *38ce266528; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class AIModule.BehaviorTreeManager
// Size: 0x58 (Inherited: 0x30)
struct UBehaviorTreeManager : UObject {
	int32 MaxDebuggerSteps; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct F*fcbe40058d> *62b3bea7fa; // 0x38(0x10)
	struct TArray<struct UBehaviorTreeComponent*> *3f51b8977e; // 0x48(0x10)
};

// Class AIModule.BlackboardData
// Size: 0x58 (Inherited: 0x38)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x38(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x40(0x10)
	char *66cab59db0 : 1; // 0x50(0x01)
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
	struct UClass* *0d626c6c45; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x58 (Inherited: 0x38)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x38(0x08)
	struct FString EnumName; // 0x40(0x10)
	char *eca7de93e0 : 1; // 0x50(0x01)
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
	struct UClass* *0d626c6c45; // 0x38(0x08)
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

	struct FName *c155624e8b(); // Function AIModule.BTFunctionLibrary.*c155624e8b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8f4f8
	float *bbb47922f2(); // Function AIModule.BTFunctionLibrary.*bbb47922f2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e8ca20
	bool *f2bb6ea7cc(); // Function AIModule.BTFunctionLibrary.*f2bb6ea7cc // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8f014
	struct FVector *14a73b5909(); // Function AIModule.BTFunctionLibrary.*14a73b5909 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e8fc08
	bool *8a24f58492(); // Function AIModule.BTFunctionLibrary.*8a24f58492 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e8c5a8
	struct UClass* *0c893d516e(); // Function AIModule.BTFunctionLibrary.*0c893d516e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e8c724
	bool *4984884614(); // Function AIModule.BTFunctionLibrary.*4984884614 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8eca0
	struct FRotator *b4982bcc0e(); // Function AIModule.BTFunctionLibrary.*b4982bcc0e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e8cfcc
	struct UBlackboardComponent* GetOwnersBlackboard(); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e8d624
	struct FVector *7cd49b9dc9(); // Function AIModule.BTFunctionLibrary.*7cd49b9dc9 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5e8d27c
	struct UBehaviorTreeComponent* *8f0b9c3d60(); // Function AIModule.BTFunctionLibrary.*8f0b9c3d60 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e8d594
	struct UBTNode* *df2c8e920d(); // Function AIModule.BTFunctionLibrary.*df2c8e920d // Final|Native|Static|Public|BlueprintCallable // @ game+0x5663dc4
	bool *335ca5cea2(); // Function AIModule.BTFunctionLibrary.*335ca5cea2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e8c8a4
	struct AActor* *d218b9705c(); // Function AIModule.BTFunctionLibrary.*d218b9705c // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e90e80
	struct UObject* *bdf9c9924b(); // Function AIModule.BTFunctionLibrary.*bdf9c9924b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e8ce4c
	struct FBlackboardKeySelector *94967d9c27(); // Function AIModule.BTFunctionLibrary.*94967d9c27 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8be40
	struct FString *342355442a(); // Function AIModule.BTFunctionLibrary.*342355442a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8fa40
	struct FName *c5f8240bd8(); // Function AIModule.BTFunctionLibrary.*c5f8240bd8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e8ccd0
	struct AActor* *10f98cda4b(); // Function AIModule.BTFunctionLibrary.*10f98cda4b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e8c478
	int32 *4191c443fc(); // Function AIModule.BTFunctionLibrary.*4191c443fc // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e8cb54
	struct UClass* *e7edc3f949(); // Function AIModule.BTFunctionLibrary.*e7edc3f949 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8ee5c
	int32 *c5db9a8d96(); // Function AIModule.BTFunctionLibrary.*c5db9a8d96 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8f340
	float *e479240c3c(); // Function AIModule.BTFunctionLibrary.*e479240c3c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8f1cc
	struct FRotator *8a31f256f8(); // Function AIModule.BTFunctionLibrary.*8a31f256f8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e8f868
	struct UObject* *8bc43e093b(); // Function AIModule.BTFunctionLibrary.*8bc43e093b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8f6b0
	struct FBlackboardKeySelector *b8788c0a10(); // Function AIModule.BTFunctionLibrary.*b8788c0a10 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8be40
	struct FString *1798e848cb(); // Function AIModule.BTFunctionLibrary.*1798e848cb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e8d10c
};

// Class AIModule.*d8d2358e71
// Size: 0xd8 (Inherited: 0xd8)
struct U*d8d2358e71 : UBTDecorator_Blackboard {
};

// Class AIModule.*9d927a6f0a
// Size: 0xe8 (Inherited: 0xa8)
struct U*9d927a6f0a : UBTDecorator_BlackboardBase {
	float *e9d5f57f54; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FAIDataProviderFloatValue *4d5e1d1245; // 0xb0(0x30)
	enum class FAIDistanceType *b6adb14f47; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	char bUseParametrizedRadius : 1; // 0xe4(0x01)
	char *8856e2645e : 1; // 0xe4(0x01)
	char bPathFindingBasedTest : 1; // 0xe4(0x01)
	char pad_E4_3 : 5; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
};

// Class AIModule.*269f3e079b
// Size: 0xb0 (Inherited: 0xa8)
struct U*269f3e079b : UBTDecorator_BlackboardBase {
	struct UClass* *bdd1f79260; // 0xa8(0x08)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xb8 (Inherited: 0x80)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* *9477fbe1d5; // 0x80(0x08)
	struct AActor* *73e497a1ad; // 0x88(0x08)
	struct TArray<struct FName> *29763f2980; // 0x90(0x10)
	char pad_A0[0x10]; // 0xa0(0x10)
	char *9936f49e91 : 1; // 0xb0(0x01)
	char *1c8ca9febe : 1; // 0xb0(0x01)
	char *ba2c0067f4 : 1; // 0xb0(0x01)
	char pad_B0_3 : 5; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	struct AActor* ReceiveObserverDeactivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // Event|Protected|BlueprintEvent // @ game+0x1b829c
	bool PerformConditionCheckAI(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	enum class EBTNodeResult ReceiveExecutionFinishAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct APawn* ReceiveObserverDeactivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct APawn* ReceiveExecutionStartAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	float ReceiveTickAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	enum class EBTNodeResult ReceiveExecutionFinish(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct AActor* ReceiveObserverActivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct APawn* ReceiveObserverActivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // Event|Protected|BlueprintEvent // @ game+0x1b829c
	bool *79a465c597(); // Function AIModule.BTDecorator_BlueprintBase.*79a465c597 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8e348
	bool PerformConditionCheck(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // Event|Protected|BlueprintEvent // @ game+0x1b829c
	bool *dd5e7545ee(); // Function AIModule.BTDecorator_BlueprintBase.*dd5e7545ee // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8e36c
	float ReceiveTick(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x1b829c
	struct AActor* ReceiveExecutionStart(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // Event|Protected|BlueprintEvent // @ game+0x1b829c
};

// Class AIModule.*9dfafc2ece
// Size: 0xe0 (Inherited: 0x80)
struct U*9dfafc2ece : UBTDecorator {
	struct FBlackboardKeySelector *694d9ae414; // 0x80(0x28)
	enum class EGameplayContainerMatchType *7860ba4ec0; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FGameplayTagContainer GameplayTags; // 0xb0(0x20)
	struct FString *6def975b7c; // 0xd0(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xd8 (Inherited: 0x80)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FBlackboardKeySelector *0c3b20c2cf; // 0x88(0x28)
	struct FBlackboardKeySelector *f4dbb55888; // 0xb0(0x28)
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0x108 (Inherited: 0x80)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float *2a1ee2b6eb; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FBlackboardKeySelector *af3fa2eef0; // 0x88(0x28)
	struct FBlackboardKeySelector *675d196ff2; // 0xb0(0x28)
	struct FBlackboardKeySelector *eaa5757a7a; // 0xd8(0x28)
	char pad_100[0x8]; // 0x100(0x08)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x88 (Inherited: 0x80)
struct UBTDecorator_Cooldown : UBTDecorator {
	float *7b58746405; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xe0 (Inherited: 0x80)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector *0c3b20c2cf; // 0x80(0x28)
	struct FBlackboardKeySelector *f4dbb55888; // 0xa8(0x28)
	char *75e8f046ef : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	enum class EPathExistanceQueryType *c9f7ee7df2; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UClass* *b5456fcb59; // 0xd8(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x80 (Inherited: 0x80)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xe0 (Inherited: 0x80)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float *2a1ee2b6eb; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FBlackboardKeySelector *af3fa2eef0; // 0x88(0x28)
	struct FBlackboardKeySelector *eaa5757a7a; // 0xb0(0x28)
	char *3709f39bfa : 1; // 0xd8(0x01)
	char *02591a55a1 : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x90 (Inherited: 0x80)
struct UBTDecorator_Loop : UBTDecorator {
	int32 *97ddf9fa54; // 0x80(0x04)
	bool bInfiniteLoop; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float *caeeb46594; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x80 (Inherited: 0x80)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.*a65de6ab75
// Size: 0x90 (Inherited: 0x80)
struct U*a65de6ab75 : UBTDecorator {
	struct FGameplayTag *6bb7513bdd; // 0x80(0x08)
	float *f3d7337c25; // 0x88(0x04)
	bool *c31f0c00e1; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// Class AIModule.*06f5e39e42
// Size: 0x90 (Inherited: 0x80)
struct U*06f5e39e42 : UBTDecorator {
	struct FGameplayTag *6bb7513bdd; // 0x80(0x08)
	float *f3d7337c25; // 0x88(0x04)
	bool *c31f0c00e1; // 0x8c(0x01)
	bool bActivatesCooldown; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x88 (Inherited: 0x80)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.*71d15c7b4c
// Size: 0x140 (Inherited: 0xb0)
struct U*71d15c7b4c : UBTService_BlackboardBase {
	struct F*a44cd53957 *52ef090d74; // 0xb0(0x48)
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
	enum class EBTParallelMode *1f14f522e7; // 0xd8(0x01)
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
	struct UEnvQuery* *c9c902c1bb; // 0xb0(0x08)
	struct TArray<struct FEnvNamedValue> *c1c14617b5; // 0xb8(0x10)
	struct TArray<struct F*adbe44f542> *3e5e5c24de; // 0xc8(0x10)
	enum class EEnvQueryRunMode *6759275bad; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FBlackboardKeySelector *65e8432f43; // 0xe0(0x28)
	bool bUseBBKey; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct F*a44cd53957 *52ef090d74; // 0x110(0x48)
	char pad_158[0x48]; // 0x158(0x48)
};

// Class AIModule.*f7f20fed78
// Size: 0x90 (Inherited: 0x88)
struct U*f7f20fed78 : UBTTaskNode {
	char *8ca3564d89 : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_MakeNoise : UBTTaskNode {
	float *85ab3db8fc; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class AIModule.*e084f28481
// Size: 0x88 (Inherited: 0x88)
struct U*e084f28481 : UBTTaskNode {
};

// Class AIModule.*e3c207468d
// Size: 0x90 (Inherited: 0x88)
struct U*e3c207468d : U*e084f28481 {
	struct U*25f78a9188* Action; // 0x88(0x08)
};

// Class AIModule.*645b456865
// Size: 0x100 (Inherited: 0x88)
struct U*645b456865 : UBTTaskNode {
	struct UAnimationAsset* *75d470c155; // 0x88(0x08)
	char bLooping : 1; // 0x90(0x01)
	char *7fc7c3f7ef : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UBehaviorTreeComponent* *508fb9e143; // 0x98(0x08)
	struct USkeletalMeshComponent* *fa5baba31b; // 0xa0(0x08)
	char pad_A8[0x58]; // 0xa8(0x58)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* *bbd3278733; // 0x88(0x08)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x88(0x08)
};

// Class AIModule.*828c0df4b9
// Size: 0xa0 (Inherited: 0x88)
struct U*828c0df4b9 : UBTTaskNode {
	struct FGameplayTag *97a089001c; // 0x88(0x08)
	struct UBehaviorTree* *57ff9c91fd; // 0x90(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x98(0x08)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x30 (Inherited: 0x30)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.CrowdManager
// Size: 0xf0 (Inherited: 0x30)
struct UCrowdManager : UObject {
	struct ANavigationData* *eac456cf29; // 0x30(0x08)
	struct TArray<struct F*7dbe801015> AvoidanceConfig; // 0x38(0x10)
	struct TArray<struct F*2735eb2cdf> SamplingPatterns; // 0x48(0x10)
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
	struct FName *f4e91bb58c; // 0x38(0x08)
	struct TArray<struct UEnvQueryOption*> Options; // 0x40(0x10)
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char pad_30[0x8]; // 0x30(0x08)

	struct FVector ProvideSingleLocation(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation // Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const // @ game+0x1b829c
	struct AActor* ProvideSingleActor(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1b829c
	struct TArray<struct AActor*> ProvideActorsSet(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1b829c
	struct TArray<struct FVector> ProvideLocationsSet(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1b829c
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.*9eb2512eb3
// Size: 0x30 (Inherited: 0x30)
struct U*9eb2512eb3 : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x30 (Inherited: 0x30)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.*d8b052ce38
// Size: 0x80 (Inherited: 0x30)
struct U*d8b052ce38 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	int32 QueryID; // 0x38(0x04)
	char pad_3C[0x24]; // 0x3c(0x24)
	struct UClass* ItemType; // 0x60(0x08)
	int32 OptionIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FMulticastDelegate OnQueryFinishedEvent; // 0x70(0x10)

	struct TArray<struct AActor*> *2d3a55243a(); // Function AIModule.*d8b052ce38.*2d3a55243a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e8d890
	enum class EEnvQueryStatus EQSQueryDoneSignature__DelegateSignature(); // DelegateFunction AIModule.*d8b052ce38.EQSQueryDoneSignature__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1b829c
	float *d6e77bfdb5(); // Function AIModule.*d8b052ce38.*d6e77bfdb5 // Final|Native|Public|BlueprintCallable // @ game+0x5e9010c
	struct TArray<struct FVector> *95f1922f53(); // Function AIModule.*d8b052ce38.*95f1922f53 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e8d918
	float *0ee6ec8da3(); // Function AIModule.*d8b052ce38.*0ee6ec8da3 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e8d3bc
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
	struct TArray<struct F*7c630400ed> *e2d840aa9e; // 0xa8(0x10)
	struct TArray<struct UEnvQueryContext*> *12595f6df4; // 0xb8(0x10)
	struct TArray<struct U*d8b052ce38*> *e9d64f352a; // 0xc8(0x10)
	char pad_D8[0x54]; // 0xd8(0x54)
	float MaxAllowedTestingTime; // 0x12c(0x04)
	bool bTestQueriesUsingBreadth; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32 QueryCountWarningThreshold; // 0x134(0x04)
	double QueryCountWarningInterval; // 0x138(0x08)

	struct U*d8b052ce38* RunEQSQuery(); // Function AIModule.EnvQueryManager.RunEQSQuery // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e8eae0
};

// Class AIModule.*157e6de374
// Size: 0x38 (Inherited: 0x30)
struct U*157e6de374 : UObject {
	int32 *bf5b181d7a; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x58 (Inherited: 0x38)
struct UEnvQueryGenerator : U*157e6de374 {
	struct FString OptionName; // 0x38(0x10)
	struct UClass* *505b924fe4; // 0x48(0x08)
	char *8a4855a8fb : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.*3191b2cb7c
// Size: 0xc8 (Inherited: 0x58)
struct U*3191b2cb7c : UEnvQueryGenerator {
	struct UClass* *542e4b7f11; // 0x58(0x08)
	struct FAIDataProviderBoolValue *8cb9da09e8; // 0x60(0x30)
	struct FAIDataProviderFloatValue SearchRadius; // 0x90(0x30)
	struct UClass* *ab86b5d69f; // 0xc0(0x08)
};

// Class AIModule.*292d9d5109
// Size: 0x88 (Inherited: 0x58)
struct U*292d9d5109 : UEnvQueryGenerator {
	struct FText *ad2f45badc; // 0x58(0x18)
	struct UClass* Context; // 0x70(0x08)
	struct UClass* *0fa36b6d7b; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)

	struct FVector *31448aa773(); // Function AIModule.*292d9d5109.*31448aa773 // Final|Native|Public|HasDefaults|BlueprintCallable|Const // @ game+0x5e8b4b8
	struct TArray<struct FVector> DoItemGeneration(); // Function AIModule.*292d9d5109.DoItemGeneration // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1b829c
	struct AActor* *eebc36bee1(); // Function AIModule.*292d9d5109.*eebc36bee1 // Final|Native|Public|BlueprintCallable|Const // @ game+0x5e8b428
	struct UObject* *78be7c581e(); // Function AIModule.*292d9d5109.*78be7c581e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8d710
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70 (Inherited: 0x58)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x58(0x10)
	bool *0e52601a34; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class AIModule.*c5d74297a7
// Size: 0x60 (Inherited: 0x58)
struct U*c5d74297a7 : UEnvQueryGenerator {
	struct UClass* *b0e61d7a47; // 0x58(0x08)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x88 (Inherited: 0x58)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData *54275f9c11; // 0x58(0x30)
};

// Class AIModule.*a4c79bb320
// Size: 0x158 (Inherited: 0x88)
struct U*a4c79bb320 : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *0888e93ea5; // 0x88(0x30)
	struct FAIDataProviderFloatValue *00619c8dcf; // 0xb8(0x30)
	struct FAIDataProviderFloatValue *079ea16e2a; // 0xe8(0x30)
	struct FAIDataProviderFloatValue Range; // 0x118(0x30)
	struct UClass* *5a9073ead9; // 0x148(0x08)
	char *bca44fb855 : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class AIModule.*e164f5e7b4
// Size: 0x1b0 (Inherited: 0x88)
struct U*e164f5e7b4 : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x88(0x30)
	struct FAIDataProviderFloatValue OuterRadius; // 0xb8(0x30)
	struct FAIDataProviderIntValue *ef21aaf75e; // 0xe8(0x30)
	struct FAIDataProviderIntValue *d6c8f7821f; // 0x118(0x30)
	struct FEnvDirection ArcDirection; // 0x148(0x20)
	struct FAIDataProviderFloatValue *da0c349b4b; // 0x168(0x30)
	bool *adc7d1ede3; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UClass* Center; // 0x1a0(0x08)
	char bDefineArc : 1; // 0x1a8(0x01)
	char pad_1A8_1 : 7; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x1f0 (Inherited: 0x88)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *fa0e7b41ec; // 0x88(0x30)
	struct FAIDataProviderFloatValue *5dccd4b679; // 0xb8(0x30)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xe8(0x30)
	enum class *d45e0e9b45 *4a09c22335; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FEnvDirection ArcDirection; // 0x120(0x20)
	struct FAIDataProviderFloatValue *da0c349b4b; // 0x140(0x30)
	float *f2c8bb4001; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct UClass* *935973d898; // 0x178(0x08)
	bool *6bc7b1581c; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FAIDataProviderFloatValue *3496f15891; // 0x188(0x30)
	struct FEnvTraceData TraceData; // 0x1b8(0x30)
	char bDefineArc : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xf0 (Inherited: 0x88)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x88(0x30)
	struct FAIDataProviderFloatValue *5dccd4b679; // 0xb8(0x30)
	struct UClass* *822564b3d9; // 0xe8(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x158 (Inherited: 0xf0)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue *98bd50c298; // 0xf0(0x30)
	struct UClass* NavigationFilter; // 0x120(0x08)
	struct FAIDataProviderFloatValue *172a4e4da8; // 0x128(0x30)
};

// Class AIModule.EnvQueryTest
// Size: 0x1c8 (Inherited: 0x38)
struct UEnvQueryTest : U*157e6de374 {
	int32 *1036bcfd3d; // 0x38(0x04)
	enum class EEnvTestPurpose *8a575ea099; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString *dcf986d9d4; // 0x40(0x10)
	enum class *850b7bac8a *de1b1f9290; // 0x50(0x01)
	enum class *2a5434f0e1 *98c39b270d; // 0x51(0x01)
	enum class EEnvTestFilterType *083bf60d68; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FAIDataProviderBoolValue *3e13fd76d8; // 0x58(0x30)
	struct FAIDataProviderFloatValue *b692249611; // 0x88(0x30)
	struct FAIDataProviderFloatValue *84779bab27; // 0xb8(0x30)
	char pad_E8[0x1]; // 0xe8(0x01)
	enum class EEnvTestScoreEquation *5cd2b326ba; // 0xe9(0x01)
	enum class EEnvQueryTestClamping *6c41f4aa0e; // 0xea(0x01)
	enum class EEnvQueryTestClamping *3e692a5411; // 0xeb(0x01)
	enum class EEQSNormalizationType *df7d8082f5; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FAIDataProviderFloatValue *6a6614ff2c; // 0xf0(0x30)
	struct FAIDataProviderFloatValue *fc234cb0ef; // 0x120(0x30)
	struct FAIDataProviderFloatValue *f327f6ae3f; // 0x150(0x30)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x180(0x30)
	bool bDefineReferenceValue; // 0x1b0(0x01)
	char pad_1B1[0xf]; // 0x1b1(0x0f)
	char *d38c51d14e : 1; // 0x1c0(0x01)
	char pad_1C0_1 : 7; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x1d8 (Inherited: 0x1c8)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class *e62db4fc12 *a0bb27be1e; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UClass* DistanceTo; // 0x1d0(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x210 (Inherited: 0x1c8)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection *a18274f722; // 0x1c8(0x20)
	struct FEnvDirection *11403e5e5a; // 0x1e8(0x20)
	enum class *278f23a119 *a0bb27be1e; // 0x208(0x01)
	bool *afa1e8385e; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
};

// Class AIModule.*7b1157a24c
// Size: 0x238 (Inherited: 0x1c8)
struct U*7b1157a24c : UEnvQueryTest {
	struct FGameplayTagQuery *a910d2fee0; // 0x1c8(0x48)
	bool *ae9b1e80fd; // 0x210(0x01)
	enum class EGameplayContainerMatchType *7860ba4ec0; // 0x211(0x01)
	char pad_212[0x6]; // 0x212(0x06)
	struct FGameplayTagContainer GameplayTags; // 0x218(0x20)
};

// Class AIModule.*e9d2629490
// Size: 0x1e8 (Inherited: 0x1c8)
struct U*e9d2629490 : UEnvQueryTest {
	struct F*43315c3d9f *9b8eda705b; // 0x1c8(0x20)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x240 (Inherited: 0x1c8)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding *a0bb27be1e; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UClass* Context; // 0x1d0(0x08)
	struct FAIDataProviderBoolValue *80c5411538; // 0x1d8(0x30)
	struct FAIDataProviderBoolValue *d820beb4de; // 0x208(0x30)
	struct UClass* *b5456fcb59; // 0x238(0x08)
};

// Class AIModule.*ef265485c8
// Size: 0x270 (Inherited: 0x240)
struct U*ef265485c8 : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue *172a4e4da8; // 0x240(0x30)
};

// Class AIModule.*c5407dc7df
// Size: 0x1f8 (Inherited: 0x1c8)
struct U*c5407dc7df : UEnvQueryTest {
	struct FEnvTraceData *54275f9c11; // 0x1c8(0x30)
};

// Class AIModule.*f5bc9afb91
// Size: 0x1c8 (Inherited: 0x1c8)
struct U*f5bc9afb91 : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x290 (Inherited: 0x1c8)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x1c8(0x30)
	struct FAIDataProviderBoolValue *3153f3b147; // 0x1f8(0x30)
	struct FAIDataProviderFloatValue *f78008679a; // 0x228(0x30)
	struct FAIDataProviderFloatValue *7a5e71d083; // 0x258(0x30)
	struct UClass* Context; // 0x288(0x08)
};

// Class AIModule.EnvQueryOption
// Size: 0x48 (Inherited: 0x30)
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; // 0x30(0x08)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x38(0x10)
};

// Class AIModule.EQSRenderingComponent
// Size: 0xa30 (Inherited: 0xa00)
struct UEQSRenderingComponent : UPrimitiveComponent {
	char pad_A00[0x30]; // 0xa00(0x30)
};

// Class AIModule.EQSTestingPawn
// Size: 0x8d0 (Inherited: 0x860)
struct AEQSTestingPawn : ACharacter {
	char pad_860[0x8]; // 0x860(0x08)
	struct UEnvQuery* *c9c902c1bb; // 0x868(0x08)
	struct TArray<struct FEnvNamedValue> *c1c14617b5; // 0x870(0x10)
	struct TArray<struct F*adbe44f542> *3e5e5c24de; // 0x880(0x10)
	float *c9df52bd00; // 0x890(0x04)
	int32 *6abd346d0f; // 0x894(0x04)
	enum class EEnvQueryHightlightMode *4ff487d057; // 0x898(0x01)
	char pad_899[0x3]; // 0x899(0x03)
	char *7eec0e4140 : 1; // 0x89c(0x01)
	char *7b9a11562f : 1; // 0x89c(0x01)
	char *5e4a589ebd : 1; // 0x89c(0x01)
	char *b2711dc29b : 1; // 0x89c(0x01)
	char *a57f444c13 : 1; // 0x89c(0x01)
	char pad_89C_5 : 3; // 0x89c(0x01)
	char pad_89D[0x3]; // 0x89d(0x03)
	enum class EEnvQueryRunMode *68140d2e14; // 0x8a0(0x01)
	char pad_8A1[0x2f]; // 0x8a1(0x2f)
};

// Class AIModule.*17b84e2113
// Size: 0x50 (Inherited: 0x50)
struct U*17b84e2113 : U*1a2c4a78a0 {
};

// Class AIModule.*ce0e010772
// Size: 0x60 (Inherited: 0x30)
struct U*ce0e010772 : UObject {
	char pad_30[0x30]; // 0x30(0x30)

	int32 *57088c996c(); // Function AIModule.*ce0e010772.*57088c996c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e8b558
	bool *ff988be5a8(); // Function AIModule.*ce0e010772.*ff988be5a8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e9002c
	int32 *653773fd69(); // Function AIModule.*ce0e010772.*653773fd69 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e8ba68
	int32 *ea3bc2a400(); // Function AIModule.*ce0e010772.*ea3bc2a400 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e8bc40
	bool *61a3f22a7b(); // Function AIModule.*ce0e010772.*61a3f22a7b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e8c130
	int32 *15e25efe00(); // Function AIModule.*ce0e010772.*15e25efe00 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e8b7f4
	bool *cdef07ddee(); // Function AIModule.*ce0e010772.*cdef07ddee // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e8e8b4
};

// Class AIModule.*b5a882f41d
// Size: 0x500 (Inherited: 0x4d0)
struct U*b5a882f41d : UPathFollowingComponent {
	struct U*ce0e010772* *cfeec1b73c; // 0x4c8(0x08)
	char pad_4D8[0x28]; // 0x4d8(0x28)
};

// Class AIModule.*25f78a9188
// Size: 0xd0 (Inherited: 0x30)
struct U*25f78a9188 : UObject {
	struct U*25f78a9188* *fd59edafdb; // 0x30(0x08)
	struct U*25f78a9188* *846f2c47b1; // 0x38(0x08)
	struct U*abba2dbb00* *139e630113; // 0x40(0x08)
	struct UObject* Instigator; // 0x48(0x08)
	struct UBrainComponent* *291d373322; // 0x50(0x08)
	char pad_58[0x60]; // 0x58(0x60)
	char bAllowNewSameClassInstance : 1; // 0xb8(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0xb8(0x01)
	char bShouldPauseMovement : 1; // 0xb8(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0xb8(0x01)
	char pad_B8_4 : 4; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)

	enum class EPawnActionResult Finish(); // Function AIModule.*25f78a9188.Finish // Native|Protected|BlueprintCallable // @ game+0x5e8c31c
	struct U*25f78a9188* *c8e7e8a198(); // Function AIModule.*25f78a9188.*c8e7e8a198 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e8c054
	enum class EAIRequestPriority *3dd9ae7a1d(); // Function AIModule.*25f78a9188.*3dd9ae7a1d // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e8c464
};

// Class AIModule.*0845d723bd
// Size: 0xd0 (Inherited: 0xd0)
struct U*0845d723bd : U*25f78a9188 {

	struct APawn* ActionPause(); // Function AIModule.*0845d723bd.ActionPause // Event|Public|BlueprintEvent // @ game+0x1b829c
	struct APawn* ActionStart(); // Function AIModule.*0845d723bd.ActionStart // Event|Public|BlueprintEvent // @ game+0x1b829c
	enum class EPawnActionResult ActionFinished(); // Function AIModule.*0845d723bd.ActionFinished // Event|Public|BlueprintEvent // @ game+0x1b829c
	struct APawn* ActionResume(); // Function AIModule.*0845d723bd.ActionResume // Event|Public|BlueprintEvent // @ game+0x1b829c
	float ActionTick(); // Function AIModule.*0845d723bd.ActionTick // Event|Public|BlueprintEvent // @ game+0x1b829c
};

// Class AIModule.*defd96b641
// Size: 0x120 (Inherited: 0xd0)
struct U*defd96b641 : U*25f78a9188 {
	struct AActor* GoalActor; // 0xd0(0x08)
	struct FVector GoalLocation; // 0xd8(0x0c)
	float AcceptableRadius; // 0xe4(0x04)
	struct UClass* FilterClass; // 0xe8(0x08)
	char bAllowStrafe : 1; // 0xf0(0x01)
	char *2507f7eba0 : 1; // 0xf0(0x01)
	char *1655ee4e84 : 1; // 0xf0(0x01)
	char *8f2455536c : 1; // 0xf0(0x01)
	char *92f11d0ec5 : 1; // 0xf0(0x01)
	char *348d1f6e01 : 1; // 0xf0(0x01)
	char *904adfb5d6 : 1; // 0xf0(0x01)
	char pad_F0_7 : 1; // 0xf0(0x01)
	char pad_F1[0x2f]; // 0xf1(0x2f)
};

// Class AIModule.*5b7afa06bf
// Size: 0xf0 (Inherited: 0xd0)
struct U*5b7afa06bf : U*25f78a9188 {
	struct U*25f78a9188* *547a1991a9; // 0xd0(0x08)
	struct U*25f78a9188* *470cf813b5; // 0xd8(0x08)
	enum class *2b7808e2f3 ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// Class AIModule.*3ff3cd7c0f
// Size: 0x100 (Inherited: 0xd0)
struct U*3ff3cd7c0f : U*25f78a9188 {
	struct TArray<struct U*25f78a9188*> *846cfdbb7c; // 0xd0(0x10)
	enum class *2b7808e2f3 ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct U*25f78a9188* *470cf813b5; // 0xe8(0x08)
	char pad_F0[0x10]; // 0xf0(0x10)
};

// Class AIModule.*a98ad99550
// Size: 0xe0 (Inherited: 0xd0)
struct U*a98ad99550 : U*25f78a9188 {
	float *f6c27c77d7; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
};

// Class AIModule.*abba2dbb00
// Size: 0x240 (Inherited: 0x200)
struct U*abba2dbb00 : UActorComponent {
	struct APawn* ControlledPawn; // 0x200(0x08)
	struct TArray<struct F*e6d6914bb8> *14459bc9f9; // 0x208(0x10)
	struct TArray<struct F*9b44471641> *66f66b6f92; // 0x218(0x10)
	struct U*25f78a9188* *59ac9c4cb4; // 0x228(0x08)
	char pad_230[0x10]; // 0x230(0x10)

	bool *0e263e29fe(); // Function AIModule.*abba2dbb00.*0e263e29fe // Final|Native|Public|BlueprintCallable // @ game+0x5e8e77c
	bool *8382f32dbd(); // Function AIModule.*abba2dbb00.*8382f32dbd // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e8e648
	enum class EPawnActionAbortState *21a5fd842f(); // Function AIModule.*abba2dbb00.*21a5fd842f // Final|Native|Public|BlueprintCallable // @ game+0x5e8e508
	enum class EPawnActionAbortState *115ec5bb9d(); // Function AIModule.*abba2dbb00.*115ec5bb9d // Final|Native|Public|BlueprintCallable // @ game+0x5e8e5b0
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
	float *5b0d542a0e; // 0x244(0x04)
	char pad_248[0x8]; // 0x248(0x08)

	bool *2059f771cd(); // Function AIModule.PawnSensingComponent.*2059f771cd // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5e90354
	struct APawn* SeePawnDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1b829c
	float HearNoiseDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x1b829c
	float *acb2a0578f(); // Function AIModule.PawnSensingComponent.*acb2a0578f // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5e902b8
	float *d9a02e835e(); // Function AIModule.PawnSensingComponent.*d9a02e835e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8d6f8
	float *7eb44fb4fb(); // Function AIModule.PawnSensingComponent.*7eb44fb4fb // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5e9021c
	float *4986b6cda6(); // Function AIModule.PawnSensingComponent.*4986b6cda6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e8d6e0
};

// Class AIModule.*912631adfd
// Size: 0x30 (Inherited: 0x30)
struct U*912631adfd : UObject {
};


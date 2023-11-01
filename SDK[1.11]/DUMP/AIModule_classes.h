// Class AIModule.BTNode
// Size: 0x68 (Inherited: 0x28)
struct UBTNode : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString NodeName[0x10]; // 0x30(0x10)
	struct FString Tag[0x10]; // 0x40(0x10)
	struct UBehaviorTree* *23b47663f5[0x08]; // 0x50(0x08)
	struct UBTCompositeNode* *7241e2d970[0x08]; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class AIModule.BTTaskNode
// Size: 0x80 (Inherited: 0x68)
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services[0x10]; // 0x68(0x10)
	char *365341c56f : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AIModule.AISense
// Size: 0x120 (Inherited: 0x28)
struct UAISense : UObject {
	float DefaultExpirationAge[0x04]; // 0x28(0x04)
	enum class *40786627d2 NotifyType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	char bWantsNewPawnNotification : 1; // 0x30(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAIPerceptionSystem* *65c690bb6c[0x08]; // 0x38(0x08)
	char pad_40[0xe0]; // 0x40(0xe0)
};

// Class AIModule.AISense_Sight
// Size: 0x200 (Inherited: 0x120)
struct UAISense_Sight : UAISense {
	char pad_120[0xb0]; // 0x120(0xb0)
	int32 MaxTracesPerTick[0x04]; // 0x1d0(0x04)
	int32 MinQueriesPerTimeSliceCheck[0x04]; // 0x1d4(0x04)
	double MaxTimeSlicePerTick[0x08]; // 0x1d8(0x08)
	float HighImportanceQueryDistanceThreshold[0x04]; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	float MaxQueryImportance[0x04]; // 0x1e8(0x04)
	float SightLimitQueryImportance[0x04]; // 0x1ec(0x04)
	char pad_1F0[0x10]; // 0x1f0(0x10)
};

// Class AIModule.*87e264aa3c
// Size: 0x48 (Inherited: 0x28)
struct U*87e264aa3c : UObject {
	struct FColor DebugColor[0x04]; // 0x28(0x04)
	float MaxAge[0x04]; // 0x2c(0x04)
	char bStartsEnabled : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x17]; // 0x31(0x17)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x60 (Inherited: 0x48)
struct UAISenseConfig_Hearing : U*87e264aa3c {
	struct UClass* Implementation[0x08]; // 0x48(0x08)
	float HearingRange[0x04]; // 0x50(0x04)
	float LoSHearingRange[0x04]; // 0x54(0x04)
	char bUseLoSHearing : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct F*69aff14219 DetectionByAffiliation[0x04]; // 0x5c(0x04)
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x68 (Inherited: 0x48)
struct UAISenseConfig_Sight : U*87e264aa3c {
	struct UClass* Implementation[0x08]; // 0x48(0x08)
	float SightRadius[0x04]; // 0x50(0x04)
	float LoseSightRadius[0x04]; // 0x54(0x04)
	float PeripheralVisionAngleDegrees[0x04]; // 0x58(0x04)
	struct F*69aff14219 DetectionByAffiliation[0x04]; // 0x5c(0x04)
	float AutoSuccessRangeFromLastSeenLocation[0x04]; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class AIModule.BlackboardComponent
// Size: 0x2f0 (Inherited: 0x1f0)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* *291d373322[0x08]; // 0x1f0(0x08)
	struct UBlackboardData* BlackboardAsset[0x08]; // 0x1f8(0x08)
	char pad_200[0x20]; // 0x200(0x20)
	struct TArray<struct UBlackboardKeyType*> *67afa5be9c[0x10]; // 0x220(0x10)
	char pad_230[0xc0]; // 0x230(0xc0)

	void *e8a0981ebb(); // Function AIModule.BlackboardComponent.*e8a0981ebb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x607f8a4
	struct FName *fd6817de08(); // Function AIModule.BlackboardComponent.*fd6817de08 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x607ca54
	void *e5eccc974e(struct FName* KeyName); // Function AIModule.BlackboardComponent.*e5eccc974e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x607f220
	void *311a48a08d(struct FName* KeyName); // Function AIModule.BlackboardComponent.*311a48a08d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x607cdac
	struct FName *24c940d802(); // Function AIModule.BlackboardComponent.*24c940d802 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x607c6bc
	struct FName *bd6a31d38a(); // Function AIModule.BlackboardComponent.*bd6a31d38a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x607cbc4
	void *1717683b44(); // Function AIModule.BlackboardComponent.*1717683b44 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x607f740
	void *1ea3bf47a9(struct FName* KeyName); // Function AIModule.BlackboardComponent.*1ea3bf47a9 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x607cf4c
	struct FName *b2df238a5a(); // Function AIModule.BlackboardComponent.*b2df238a5a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x607f628
	struct FName *70a6e5f536(struct FVector* ResultLocation); // Function AIModule.BlackboardComponent.*70a6e5f536 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x607bf5c
	void *3de9290273(struct FName* KeyName); // Function AIModule.BlackboardComponent.*3de9290273 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x607c774
	void *f535dbd337(); // Function AIModule.BlackboardComponent.*f535dbd337 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x607aa90
	struct FName *938f378f17(); // Function AIModule.BlackboardComponent.*938f378f17 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x607cc90
	void *731a90a1ec(struct FName* KeyName); // Function AIModule.BlackboardComponent.*731a90a1ec // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x607c8e4
	void *05a2329dd6(); // Function AIModule.BlackboardComponent.*05a2329dd6 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x607c82c
	struct FName *16cca2e950(); // Function AIModule.BlackboardComponent.*16cca2e950 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x607ef1c
	struct FName *371d8fefe0(); // Function AIModule.BlackboardComponent.*371d8fefe0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x607f528
	void *d63b3ec8d5(struct FName* KeyName); // Function AIModule.BlackboardComponent.*d63b3ec8d5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x607f328
	void *688468cfa7(struct FName* KeyName); // Function AIModule.BlackboardComponent.*688468cfa7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x607c99c
	struct FName *4f4543824b(); // Function AIModule.BlackboardComponent.*4f4543824b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x607f428
	struct FName *c06eb33167(); // Function AIModule.BlackboardComponent.*c06eb33167 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x607f020
	void *c998fdd5cf(); // Function AIModule.BlackboardComponent.*c998fdd5cf // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x607f120
	struct FRotator *fa1e613f19(); // Function AIModule.BlackboardComponent.*fa1e613f19 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x607c4d0
	struct FName *9c9a40a60e(); // Function AIModule.BlackboardComponent.*9c9a40a60e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x607cb0c
};

// Class AIModule.PathFollowingComponent
// Size: 0x4c0 (Inherited: 0x1f0)
struct UPathFollowingComponent : UActorComponent {
	char pad_1F0[0x130]; // 0x1f0(0x130)
	struct UNavMovementComponent* MovementComp[0x08]; // 0x320(0x08)
	char pad_328[0x8]; // 0x328(0x08)
	struct ANavigationData* *eac456cf29[0x08]; // 0x330(0x08)
	char pad_338[0x188]; // 0x338(0x188)

	void *b7793bf9d8(); // Function AIModule.PathFollowingComponent.*b7793bf9d8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6076be4
	void OnActorBump(struct AActor** Param1); // Function AIModule.PathFollowingComponent.OnActorBump // Native|Public|HasOutParms|HasDefaults // @ game+0x607799c
	void *a48d85ef14(); // Function AIModule.PathFollowingComponent.*a48d85ef14 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6076c60
	void OnNavDataRegistered(); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // Final|Native|Protected // @ game+0x6077d18
};

// Class AIModule.*c065e5cce0
// Size: 0x28 (Inherited: 0x28)
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
	struct UPathFollowingComponent* PathFollowingComponent[0x08]; // 0x4b0(0x08)
	struct UBrainComponent* BrainComponent[0x08]; // 0x4b8(0x08)
	struct UAIPerceptionComponent* *7501f47eec[0x08]; // 0x4c0(0x08)
	struct U*abba2dbb00* ActionsComp[0x08]; // 0x4c8(0x08)
	struct UBlackboardComponent* Blackboard[0x08]; // 0x4d0(0x08)
	struct UGameplayTasksComponent* *e20b95b0bd[0x08]; // 0x4d8(0x08)
	struct UClass* DefaultNavigationFilterClass[0x08]; // 0x4e0(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted[0x10]; // 0x4e8(0x10)
	char pad_4F8[0x8]; // 0x4f8(0x08)

	void K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x6077244
	void *f22d9c049e(); // Function AIModule.AIController.*f22d9c049e // Final|Native|Public|BlueprintCallable // @ game+0x6078b7c
	void *af35f57c90(); // Function AIModule.AIController.*af35f57c90 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6076bbc
	void *8130a7909f(); // Function AIModule.AIController.*8130a7909f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6076ec8
	void OnUnpossess(); // Function AIModule.AIController.OnUnpossess // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void RunBehaviorTree(); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x6078914
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x6077180
	void *1384cedcdf(); // Function AIModule.AIController.*1384cedcdf // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6076924
	void *4be075a2a2(); // Function AIModule.AIController.*4be075a2a2 // Final|Native|Public|BlueprintCallable // @ game+0x6078e6c
	void UseBlackboard(struct UBlackboardComponent** BlackboardComponent); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x60790d0
	struct F*2a717b7917 OnGameplayTaskResourcesClaimed(); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x6077b5c
	void *e2693f27ef(); // Function AIModule.AIController.*e2693f27ef // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x607645c
	void *606eb98157(); // Function AIModule.AIController.*606eb98157 // Final|Native|Public|BlueprintCallable // @ game+0x607611c
	bool *227e52d460(float* AcceptanceRadius); // Function AIModule.AIController.*227e52d460 // Final|Native|Public|BlueprintCallable // @ game+0x607740c
	void *90ea12cbb5(); // Function AIModule.AIController.*90ea12cbb5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6076c94
	void *003473c42b(); // Function AIModule.AIController.*003473c42b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6076958
	void *6aaddab47e(); // Function AIModule.AIController.*6aaddab47e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6076a10
	struct UBlackboardComponent* OnUsingBlackBoard(); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void K2_SetFocalPoint(); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x607719c
	void *54677b7e4d(); // Function AIModule.AIController.*54677b7e4d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6076a34
	bool *90cfd116e1(struct FVector* Dest); // Function AIModule.AIController.*90cfd116e1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x60776a4
	void OnPossess(); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x2cd4ac
};

// Class AIModule.BlackboardKeyType
// Size: 0x30 (Inherited: 0x28)
struct UBlackboardKeyType : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class AIModule.BTAuxiliaryNode
// Size: 0x70 (Inherited: 0x68)
struct UBTAuxiliaryNode : UBTNode {
	char pad_68[0x8]; // 0x68(0x08)
};

// Class AIModule.BTDecorator
// Size: 0x78 (Inherited: 0x70)
struct UBTDecorator : UBTAuxiliaryNode {
	char pad_70_0 : 7; // 0x70(0x01)
	char *030d35b809 : 1; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class AIModule.BTDecorator_BlackboardBase
// Size: 0xa0 (Inherited: 0x78)
struct UBTDecorator_BlackboardBase : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey[0x28]; // 0x78(0x28)
};

// Class AIModule.BTDecorator_Blackboard
// Size: 0xd0 (Inherited: 0xa0)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32 IntValue[0x04]; // 0xa0(0x04)
	float FloatValue[0x04]; // 0xa4(0x04)
	struct FString StringValue[0x10]; // 0xa8(0x10)
	struct FString *6def975b7c[0x10]; // 0xb8(0x10)
	bool OperationType; // 0xc8(0x01)
	enum class *fc84c4adaf NotifyObserver; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
};

// Class AIModule.BTService
// Size: 0x80 (Inherited: 0x70)
struct UBTService : UBTAuxiliaryNode {
	float Interval[0x04]; // 0x70(0x04)
	float *e7cfc56453[0x04]; // 0x74(0x04)
	char *e219488405 : 1; // 0x78(0x01)
	char *8eda4a276a : 1; // 0x78(0x01)
	char pad_78_2 : 6; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AIModule.BTService_BlackboardBase
// Size: 0xa8 (Inherited: 0x80)
struct UBTService_BlackboardBase : UBTService {
	struct FBlackboardKeySelector BlackboardKey[0x28]; // 0x80(0x28)
};

// Class AIModule.BTService_DefaultFocus
// Size: 0xb0 (Inherited: 0xa8)
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	bool *fc3f7936d1; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AIModule.AIPerceptionComponent
// Size: 0x2d0 (Inherited: 0x1f0)
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct U*87e264aa3c*> *02ad26e521[0x10]; // 0x1f0(0x10)
	struct UClass* *6f1de5bcb4[0x08]; // 0x200(0x08)
	char pad_208[0x10]; // 0x208(0x10)
	struct AAIController* *9477fbe1d5[0x08]; // 0x218(0x08)
	char pad_220[0x80]; // 0x220(0x80)
	struct FMulticastDelegate OnPerceptionUpdated[0x10]; // 0x2a0(0x10)
	struct FMulticastDelegate OnTargetPerceptionUpdated[0x10]; // 0x2b0(0x10)
	char pad_2C0[0x10]; // 0x2c0(0x10)

	void *9b1aaf60ef(); // Function AIModule.AIPerceptionComponent.*9b1aaf60ef // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6076804
	struct AActor* OnOwnerEndPlay(); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // Final|Native|Public // @ game+0x6077da8
	void *93de6f898e(); // Function AIModule.AIPerceptionComponent.*93de6f898e // Final|Native|Public|BlueprintCallable // @ game+0x6078900
	void *e10ab62868(); // Function AIModule.AIPerceptionComponent.*e10ab62868 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6076cac
	struct F*824c48b711 *49c02b16d5(); // Function AIModule.AIPerceptionComponent.*49c02b16d5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6076474
	struct UClass* *ea44c6195d(); // Function AIModule.AIPerceptionComponent.*ea44c6195d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6076a9c
	void *b8cd42e1e5(); // Function AIModule.AIPerceptionComponent.*b8cd42e1e5 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6076804
};

// Class AIModule.BTTask_BlackboardBase
// Size: 0xa8 (Inherited: 0x80)
struct UBTTask_BlackboardBase : UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey[0x28]; // 0x80(0x28)
};

// Class AIModule.BTTask_MoveTo
// Size: 0xc0 (Inherited: 0xa8)
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius[0x04]; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UClass* *b5456fcb59[0x08]; // 0xb0(0x08)
	float *f5b45d93e0[0x04]; // 0xb8(0x04)
	char bObserveBlackboardValue : 1; // 0xbc(0x01)
	char *d576dec85e : 1; // 0xbc(0x01)
	char *8f2455536c : 1; // 0xbc(0x01)
	char *47d4aab295 : 1; // 0xbc(0x01)
	char *157f9c665f : 1; // 0xbc(0x01)
	char *54a4cf7672 : 1; // 0xbc(0x01)
	char pad_BC_6 : 2; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
};

// Class AIModule.BTTask_Wait
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_Wait : UBTTaskNode {
	float *577765ed3c[0x04]; // 0x80(0x04)
	float *e7cfc56453[0x04]; // 0x84(0x04)
};

// Class AIModule.*2c88f5d3a9
// Size: 0x90 (Inherited: 0x80)
struct U*2c88f5d3a9 : UBTTaskNode {
	struct FGameplayTag *6bb7513bdd[0x08]; // 0x80(0x08)
	bool *c31f0c00e1; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float *f3d7337c25[0x04]; // 0x8c(0x04)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xc8 (Inherited: 0xc0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xc0(0x01)
	char *04750026da : 1; // 0xc0(0x01)
	char *304d13f5e7 : 1; // 0xc0(0x01)
	char pad_C0_3 : 5; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class AIModule.*3c47b5fc18
// Size: 0xb0 (Inherited: 0x88)
struct U*3c47b5fc18 : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey[0x28]; // 0x88(0x28)
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x510 (Inherited: 0x4c0)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	struct FVector *7d21e0de79[0x0c]; // 0x4c0(0x0c)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct UCharacterMovementComponent* CharacterMovement[0x08]; // 0x4d0(0x08)
	struct F*f2710e04b9 AvoidanceGroup[0x04]; // 0x4d8(0x04)
	struct F*f2710e04b9 GroupsToAvoid[0x04]; // 0x4dc(0x04)
	struct F*f2710e04b9 GroupsToIgnore[0x04]; // 0x4e0(0x04)
	char pad_4E4[0x2c]; // 0x4e4(0x2c)

	void *a5c6b63a01(); // Function AIModule.CrowdFollowingComponent.*a5c6b63a01 // Native|Public|BlueprintCallable // @ game+0x607fb3c
};

// Class AIModule.BTService_BlueprintBase
// Size: 0xa8 (Inherited: 0x80)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* *9477fbe1d5[0x08]; // 0x80(0x08)
	struct AActor* *73e497a1ad[0x08]; // 0x88(0x08)
	char pad_90[0x10]; // 0x90(0x10)
	char *9936f49e91 : 1; // 0xa0(0x01)
	char *0c270317a6 : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	void ReceiveSearchStart(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void *02fafa54b8(); // Function AIModule.BTService_BlueprintBase.*02fafa54b8 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x607cee8
	struct AAIController* ReceiveSearchStartAI(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveActivation(); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveTickAI(struct AAIController** OwnerController); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	struct AAIController* ReceiveActivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	struct AActor* ReceiveTick(); // Function AIModule.BTService_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveDeactivation(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveDeactivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xb0 (Inherited: 0x80)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* *9477fbe1d5[0x08]; // 0x80(0x08)
	struct AActor* *73e497a1ad[0x08]; // 0x88(0x08)
	char pad_90[0x18]; // 0x90(0x18)
	char *9936f49e91 : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	struct AActor* ReceiveTick(); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveAbortAI(struct AAIController** OwnerController); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void *7c6d384eb4(); // Function AIModule.BTTask_BlueprintBase.*7c6d384eb4 // Final|Native|Protected|BlueprintCallable // @ game+0x607aea0
	struct FName *b3b3bf46be(); // Function AIModule.BTTask_BlueprintBase.*b3b3bf46be // Final|Native|Protected|BlueprintCallable // @ game+0x607ea80
	struct APawn* ReceiveTickAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveAbort(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void *d8a96e0dcf(); // Function AIModule.BTTask_BlueprintBase.*d8a96e0dcf // Final|Native|Protected|BlueprintCallable // @ game+0x607e9f0
	struct AAIController* ReceiveExecuteAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void *cb9d78f358(); // Function AIModule.BTTask_BlueprintBase.*cb9d78f358 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x607cf28
	void *5cd3d0117e(); // Function AIModule.BTTask_BlueprintBase.*5cd3d0117e // Final|Native|Protected|BlueprintCallable // @ game+0x607aeb4
	void ReceiveExecute(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void *e523d89c4c(); // Function AIModule.BTTask_BlueprintBase.*e523d89c4c // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x607cf0c
};

// Class AIModule.AIResourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIResourceInterface : UInterface {
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x68 (Inherited: 0x28)
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastDelegate OnSuccess[0x10]; // 0x28(0x10)
	struct FMulticastDelegate OnFail[0x10]; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)

	struct F*049a31edee OnMoveCompleted(); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // Final|Native|Public // @ game+0x6077c3c
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void *5ee092a158(struct APawn** Target, struct UObject** MessageSource); // Function AIModule.AIBlueprintHelperLibrary.*5ee092a158 // Final|Native|Static|Public|BlueprintCallable // @ game+0x60789bc
	void *832c6112a4(struct FVector* DirectionVector); // Function AIModule.AIBlueprintHelperLibrary.*832c6112a4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6076ee8
	bool *ad8d8aebc3(); // Function AIModule.AIBlueprintHelperLibrary.*ad8d8aebc3 // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x6078efc
	void GetBlackboard(struct AActor** Target); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6076774
	void *9638abd4f8(struct FRotator* Rotation); // Function AIModule.AIBlueprintHelperLibrary.*9638abd4f8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x60770cc
	struct FVector *aa83b8656f(); // Function AIModule.AIBlueprintHelperLibrary.*aa83b8656f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6076fe4
	struct UBehaviorTree* *596e9bdbf2(struct FVector* Location, bool bNoCollisionFail); // Function AIModule.AIBlueprintHelperLibrary.*596e9bdbf2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6078c40
	void *6128913c1a(struct AActor** ControlledActor); // Function AIModule.AIBlueprintHelperLibrary.*6128913c1a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60763cc
	float *a1c01b10b4(bool bStopOnOverlap); // Function AIModule.AIBlueprintHelperLibrary.*a1c01b10b4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x60761ac
	void *9ab28e777d(struct UAnimInstance** AnimInstance); // Function AIModule.AIBlueprintHelperLibrary.*9ab28e777d // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x60772dc
};

// Class AIModule.*78b24eefc2
// Size: 0x28 (Inherited: 0x28)
struct U*78b24eefc2 : UInterface {
};

// Class AIModule.*ef1b2a7637
// Size: 0x28 (Inherited: 0x28)
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
// Size: 0x28 (Inherited: 0x28)
struct U*0bff913aa9 : UObject {
};

// Class AIModule.*1804c2babe
// Size: 0x40 (Inherited: 0x28)
struct U*1804c2babe : U*0bff913aa9 {
	struct FName ParamName[0x08]; // 0x28(0x08)
	float FloatValue[0x04]; // 0x30(0x04)
	int32 IntValue[0x04]; // 0x34(0x04)
	bool *3e13fd76d8; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class AIModule.*afb0713af5
// Size: 0x50 (Inherited: 0x40)
struct U*afb0713af5 : U*1804c2babe {
	float Min[0x04]; // 0x40(0x04)
	float Max[0x04]; // 0x44(0x04)
	char *c09ca639e5 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AIModule.AIHotSpotManager
// Size: 0x28 (Inherited: 0x28)
struct UAIHotSpotManager : UObject {
};

// Class AIModule.AIPerceptionSystem
// Size: 0x130 (Inherited: 0x28)
struct UAIPerceptionSystem : UObject {
	char pad_28[0x58]; // 0x28(0x58)
	struct TArray<struct UAISense*> *826dc25744[0x10]; // 0x80(0x10)
	float PerceptionAgingRate[0x04]; // 0x90(0x04)
	char pad_94[0x9c]; // 0x94(0x9c)

	void *0865596528(struct UClass** Sense); // Function AIModule.AIPerceptionSystem.*0865596528 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6077fec
	void *bc76df2bb9(); // Function AIModule.AIPerceptionSystem.*bc76df2bb9 // Final|Native|Public|BlueprintCallable // @ game+0x6078344
	struct AActor* OnPerceptionStimuliSourceEndPlay(); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // Final|Native|Protected // @ game+0x6077e8c
	struct UObject* *809cb4f27c(struct F*a85f9d469b* Stimulus); // Function AIModule.AIPerceptionSystem.*809cb4f27c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6076d78
	void *0ff342fb71(struct UObject** WorldContext); // Function AIModule.AIPerceptionSystem.*0ff342fb71 // Final|Native|Static|Public|BlueprintCallable // @ game+0x60785e8
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x210 (Inherited: 0x1f0)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct TArray<struct UClass*> RegisterAsSourceForSenses[0x10]; // 0x1f8(0x10)
	char pad_208[0x8]; // 0x208(0x08)

	void *de536bfc62(); // Function AIModule.AIPerceptionStimuliSourceComponent.*de536bfc62 // Final|Native|Public|BlueprintCallable // @ game+0x6077f5c
	void *ff5c466996(); // Function AIModule.AIPerceptionStimuliSourceComponent.*ff5c466996 // Final|Native|Public|BlueprintCallable // @ game+0x6078108
	void *d5e9b5119f(); // Function AIModule.AIPerceptionStimuliSourceComponent.*d5e9b5119f // Final|Native|Public|BlueprintCallable // @ game+0x607902c
	void *99a14372a4(); // Function AIModule.AIPerceptionStimuliSourceComponent.*99a14372a4 // Final|Native|Public|BlueprintCallable // @ game+0x6079040
};

// Class AIModule.AIResource_Movement
// Size: 0x38 (Inherited: 0x38)
struct UAIResource_Movement : UGameplayTaskResource {
};

// Class AIModule.AIResource_Logic
// Size: 0x38 (Inherited: 0x38)
struct UAIResource_Logic : UGameplayTaskResource {
};

// Class AIModule.AISense_Blueprint
// Size: 0x150 (Inherited: 0x120)
struct UAISense_Blueprint : UAISense {
	struct UClass* ListenerDataType[0x08]; // 0x120(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer[0x10]; // 0x128(0x10)
	struct TArray<struct U*1c525798c2*> *c24e4ce1a0[0x10]; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)

	void OnListenerUnregistered(struct AActor** ActorListener); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnUpdate(); // Function AIModule.AISense_Blueprint.OnUpdate // Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	struct AActor* OnListenerRegistered(); // Function AIModule.AISense_Blueprint.OnListenerRegistered // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct AActor* OnListenerUpdated(); // Function AIModule.AISense_Blueprint.OnListenerUpdated // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void K2_OnNewPawn(); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *5bb3cf9bcd(); // Function AIModule.AISense_Blueprint.*5bb3cf9bcd // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x60765a0
	void *279d4082c6(); // Function AIModule.AISense_Blueprint.*279d4082c6 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6076668
};

// Class AIModule.AISense_Damage
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Damage : UAISense {
	struct TArray<struct F*2f8eafb470> *c9512b159b[0x10]; // 0x120(0x10)

	void *fb803ec302(struct UObject** WorldContext, struct AActor** Instigator, struct FVector* EventLocation); // Function AIModule.AISense_Damage.*fb803ec302 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x607811c
};

// Class AIModule.AISense_Hearing
// Size: 0x190 (Inherited: 0x120)
struct UAISense_Hearing : UAISense {
	struct TArray<struct F*c6e7d5afa9> *552df1ebd8[0x10]; // 0x120(0x10)
	float SpeedOfSoundSq[0x04]; // 0x130(0x04)
	char pad_134[0x5c]; // 0x134(0x5c)

	float *ef02789d67(); // Function AIModule.AISense_Hearing.*ef02789d67 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x60783d4
};

// Class AIModule.AISense_Prediction
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Prediction : UAISense {
	struct TArray<struct F*ec30f63656> *c9512b159b[0x10]; // 0x120(0x10)

	struct AActor* *793e8f974a(); // Function AIModule.AISense_Prediction.*793e8f974a // Final|Native|Static|Public|BlueprintCallable // @ game+0x60787e4
	void *e6181d95b8(struct AAIController** Requestor); // Function AIModule.AISense_Prediction.*e6181d95b8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x60786c8
};

// Class AIModule.AISense_Team
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Team : UAISense {
	struct TArray<struct F*499800f6b4> *c9512b159b[0x10]; // 0x120(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Touch : UAISense {
	struct TArray<struct F*71210772b7> *c9512b159b[0x10]; // 0x120(0x10)
};

// Class AIModule.*89f8b139f5
// Size: 0x100 (Inherited: 0x100)
struct U*89f8b139f5 : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Blueprint : U*87e264aa3c {
	struct UClass* Implementation[0x08]; // 0x48(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Damage : U*87e264aa3c {
	struct UClass* Implementation[0x08]; // 0x48(0x08)
};

// Class AIModule.*70fb661f74
// Size: 0x48 (Inherited: 0x48)
struct U*70fb661f74 : U*87e264aa3c {
};

// Class AIModule.*2425e67841
// Size: 0x48 (Inherited: 0x48)
struct U*2425e67841 : U*87e264aa3c {
};

// Class AIModule.*f52036d123
// Size: 0x48 (Inherited: 0x48)
struct U*f52036d123 : U*87e264aa3c {
};

// Class AIModule.*1c525798c2
// Size: 0x28 (Inherited: 0x28)
struct U*1c525798c2 : UObject {
};

// Class AIModule.*4dc916c1b7
// Size: 0x58 (Inherited: 0x28)
struct U*4dc916c1b7 : U*1c525798c2 {
	struct F*2f8eafb470 Event[0x30]; // 0x28(0x30)
};

// Class AIModule.*a6f50ad483
// Size: 0x58 (Inherited: 0x28)
struct U*a6f50ad483 : U*1c525798c2 {
	struct F*c6e7d5afa9 Event[0x30]; // 0x28(0x30)
};

// Class AIModule.AISystem
// Size: 0x110 (Inherited: 0x48)
struct UAISystem : UAISystemBase {
	struct FStringClassReference PerceptionSystemClassName[0x10]; // 0x48(0x10)
	struct FStringClassReference HotSpotManagerClassName[0x10]; // 0x58(0x10)
	float AcceptanceRadius[0x04]; // 0x68(0x04)
	float PathfollowingRegularPathPointAcceptanceRadius[0x04]; // 0x6c(0x04)
	float PathfollowingNavLinkAcceptanceRadius[0x04]; // 0x70(0x04)
	bool bFinishMoveOnGoalOverlap; // 0x74(0x01)
	bool bAcceptPartialPaths; // 0x75(0x01)
	bool bAllowStrafing; // 0x76(0x01)
	bool bEnableBTAITasks; // 0x77(0x01)
	bool bAllowControllersAsEQSQuerier; // 0x78(0x01)
	bool bEnableDebuggerPlugin; // 0x79(0x01)
	enum class ECollisionChannel DefaultSightCollisionChannel; // 0x7a(0x01)
	char pad_7B[0x5]; // 0x7b(0x05)
	struct UBehaviorTreeManager* BehaviorTreeManager[0x08]; // 0x80(0x08)
	struct UEnvQueryManager* *392836d7b1[0x08]; // 0x88(0x08)
	struct UAIPerceptionSystem* PerceptionSystem[0x08]; // 0x90(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> *3cc5dfc624[0x10]; // 0x98(0x10)
	struct UAIHotSpotManager* *718e6887d4[0x08]; // 0xa8(0x08)
	struct U*ce0e010772* *63b8ba983f[0x08]; // 0xb0(0x08)
	char pad_B8[0x58]; // 0xb8(0x58)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // Exec|Native|Public // @ game+0x58dcf94
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // Exec|Native|Public // @ game+0x6079ae8
};

// Class AIModule.AITask
// Size: 0x70 (Inherited: 0x68)
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController[0x08]; // 0x68(0x08)
};

// Class AIModule.AITask_LockLogic
// Size: 0x70 (Inherited: 0x70)
struct UAITask_LockLogic : UAITask {
};

// Class AIModule.AITask_MoveTo
// Size: 0x120 (Inherited: 0x70)
struct UAITask_MoveTo : UAITask {
	struct FMulticastDelegate OnRequestFailed[0x10]; // 0x70(0x10)
	struct FMulticastDelegate OnMoveFinished[0x10]; // 0x80(0x10)
	struct F*de7f12a472 *d137c5c17f[0x50]; // 0x90(0x50)
	char pad_E0[0x40]; // 0xe0(0x40)

	bool AIMoveTo(); // Function AIModule.AITask_MoveTo.AIMoveTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6079b00
};

// Class AIModule.EnvQueryItemType
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryItemType : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class AIModule.EnvQueryContext
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext : UObject {
};

// Class AIModule.BehaviorTreeTypes
// Size: 0x28 (Inherited: 0x28)
struct UBehaviorTreeTypes : UObject {
};

// Class AIModule.EnvQueryTypes
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryTypes : UObject {
};

// Class AIModule.AITask_RunEQS
// Size: 0x150 (Inherited: 0x70)
struct UAITask_RunEQS : UAITask {
	char pad_70[0xe0]; // 0x70(0xe0)

	void *fcdf87a626(struct AAIController** Controller); // Function AIModule.AITask_RunEQS.*fcdf87a626 // Final|Native|Static|Public|BlueprintCallable // @ game+0x607d518
};

// Class AIModule.BrainComponent
// Size: 0x250 (Inherited: 0x1f0)
struct UBrainComponent : UActorComponent {
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct UBlackboardComponent* BlackboardComp[0x08]; // 0x1f8(0x08)
	struct AAIController* *9477fbe1d5[0x08]; // 0x200(0x08)
	char pad_208[0x48]; // 0x208(0x48)

	void *f7792b9799(); // Function AIModule.BrainComponent.*f7792b9799 // Native|Public|BlueprintCallable // @ game+0x607fa78
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // Native|Public|BlueprintCallable // @ game+0xda893c
	void IsRunning(); // Function AIModule.BrainComponent.IsRunning // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58c2584
	void *7f2ef7f336(); // Function AIModule.BrainComponent.*7f2ef7f336 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x607cec0
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x390 (Inherited: 0x250)
struct UBehaviorTreeComponent : UBrainComponent {
	char pad_250[0x20]; // 0x250(0x20)
	struct TArray<struct UBTNode*> *874ee6642b[0x10]; // 0x270(0x10)
	char pad_280[0x110]; // 0x280(0x110)

	void *866fe4dda8(); // Function AIModule.BehaviorTreeComponent.*866fe4dda8 // Native|Public|BlueprintCallable // @ game+0x607e910
	float *b0a6144ceb(); // Function AIModule.BehaviorTreeComponent.*b0a6144ceb // Final|Native|Public|BlueprintCallable // @ game+0x6079dd4
	struct FGameplayTag *0a70142e47(); // Function AIModule.BehaviorTreeComponent.*0a70142e47 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x607c5ec
};

// Class AIModule.BTCompositeNode
// Size: 0xe0 (Inherited: 0x68)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct F*bc8cfc90a0> Children[0x10]; // 0x68(0x10)
	struct TArray<struct UBTService*> Services[0x10]; // 0x78(0x10)
	char pad_88[0x58]; // 0x88(0x58)
};

// Class AIModule.BehaviorTree
// Size: 0x60 (Inherited: 0x28)
struct UBehaviorTree : UObject {
	struct UBTCompositeNode* RootNode[0x08]; // 0x28(0x08)
	struct UBlackboardData* BlackboardAsset[0x08]; // 0x30(0x08)
	struct TArray<struct UBTDecorator*> *9fc94fdf8f[0x10]; // 0x38(0x10)
	struct TArray<struct F*0a3d5e26e0> *38ce266528[0x10]; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class AIModule.BehaviorTreeManager
// Size: 0x50 (Inherited: 0x28)
struct UBehaviorTreeManager : UObject {
	int32 MaxDebuggerSteps[0x04]; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct F*fcbe40058d> *62b3bea7fa[0x10]; // 0x30(0x10)
	struct TArray<struct UBehaviorTreeComponent*> *3f51b8977e[0x10]; // 0x40(0x10)
};

// Class AIModule.BlackboardData
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent[0x08]; // 0x30(0x08)
	struct TArray<struct FBlackboardEntry> Keys[0x10]; // 0x38(0x10)
	char *66cab59db0 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AIModule.BlackboardKeyType_Bool
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Class
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	struct UClass* *0d626c6c45[0x08]; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType[0x08]; // 0x30(0x08)
	struct FString EnumName[0x10]; // 0x38(0x10)
	char *eca7de93e0 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AIModule.BlackboardKeyType_Float
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Float : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Int
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Int : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Name
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Name : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x48 (Inherited: 0x30)
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	struct FString EnumName[0x10]; // 0x30(0x10)
	struct UEnum* EnumType[0x08]; // 0x40(0x08)
};

// Class AIModule.BlackboardKeyType_Object
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	struct UClass* *0d626c6c45[0x08]; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_String
// Size: 0x40 (Inherited: 0x30)
struct UBlackboardKeyType_String : UBlackboardKeyType {
	struct FString StringValue[0x10]; // 0x30(0x10)
};

// Class AIModule.BlackboardKeyType_Vector
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {

	struct FBlackboardKeySelector *c155624e8b(); // Function AIModule.BTFunctionLibrary.*c155624e8b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x607e028
	void *bbb47922f2(struct FBlackboardKeySelector* Key); // Function AIModule.BTFunctionLibrary.*bbb47922f2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x607b504
	void *f2bb6ea7cc(struct UBTNode** NodeOwner); // Function AIModule.BTFunctionLibrary.*f2bb6ea7cc // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x607db44
	struct FBlackboardKeySelector *14a73b5909(); // Function AIModule.BTFunctionLibrary.*14a73b5909 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x607e738
	void *8a24f58492(struct FBlackboardKeySelector* Key); // Function AIModule.BTFunctionLibrary.*8a24f58492 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x607b08c
	void *0c893d516e(struct UBTNode** NodeOwner); // Function AIModule.BTFunctionLibrary.*0c893d516e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x607b208
	struct FBlackboardKeySelector *4984884614(); // Function AIModule.BTFunctionLibrary.*4984884614 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x607d7d0
	void *b4982bcc0e(struct FBlackboardKeySelector* Key); // Function AIModule.BTFunctionLibrary.*b4982bcc0e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x607bab0
	void GetOwnersBlackboard(struct UBTNode** NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x607c108
	struct FBlackboardKeySelector *7cd49b9dc9(); // Function AIModule.BTFunctionLibrary.*7cd49b9dc9 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x607bd60
	void *8f0b9c3d60(struct UBTNode** NodeOwner); // Function AIModule.BTFunctionLibrary.*8f0b9c3d60 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x607c078
	void *df2c8e920d(); // Function AIModule.BTFunctionLibrary.*df2c8e920d // Final|Native|Static|Public|BlueprintCallable // @ game+0x583c5a8
	struct FBlackboardKeySelector *335ca5cea2(); // Function AIModule.BTFunctionLibrary.*335ca5cea2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x607b388
	struct UBTNode* *d218b9705c(); // Function AIModule.BTFunctionLibrary.*d218b9705c // Final|Native|Static|Public|BlueprintCallable // @ game+0x607f9b0
	void *bdf9c9924b(struct UBTNode** NodeOwner); // Function AIModule.BTFunctionLibrary.*bdf9c9924b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x607b930
	void *94967d9c27(); // Function AIModule.BTFunctionLibrary.*94967d9c27 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x607a924
	struct FBlackboardKeySelector *342355442a(); // Function AIModule.BTFunctionLibrary.*342355442a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x607e570
	void *c5f8240bd8(struct FBlackboardKeySelector* Key); // Function AIModule.BTFunctionLibrary.*c5f8240bd8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x607b7b4
	void *10f98cda4b(struct UBTNode** NodeOwner); // Function AIModule.BTFunctionLibrary.*10f98cda4b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x607af5c
	struct FBlackboardKeySelector *4191c443fc(); // Function AIModule.BTFunctionLibrary.*4191c443fc // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x607b638
	void *e7edc3f949(struct FBlackboardKeySelector* Key); // Function AIModule.BTFunctionLibrary.*e7edc3f949 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x607d98c
	void *c5db9a8d96(struct UBTNode** NodeOwner); // Function AIModule.BTFunctionLibrary.*c5db9a8d96 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x607de70
	struct FBlackboardKeySelector *e479240c3c(); // Function AIModule.BTFunctionLibrary.*e479240c3c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x607dcfc
	void *8a31f256f8(struct FBlackboardKeySelector* Key); // Function AIModule.BTFunctionLibrary.*8a31f256f8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x607e398
	struct FBlackboardKeySelector *8bc43e093b(); // Function AIModule.BTFunctionLibrary.*8bc43e093b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x607e1e0
	struct UBTNode* *b8788c0a10(); // Function AIModule.BTFunctionLibrary.*b8788c0a10 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x607a924
	void *1798e848cb(struct UBTNode** NodeOwner); // Function AIModule.BTFunctionLibrary.*1798e848cb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x607bbf0
};

// Class AIModule.*d8d2358e71
// Size: 0xd0 (Inherited: 0xd0)
struct U*d8d2358e71 : UBTDecorator_Blackboard {
};

// Class AIModule.*9d927a6f0a
// Size: 0xe0 (Inherited: 0xa0)
struct U*9d927a6f0a : UBTDecorator_BlackboardBase {
	float *e9d5f57f54[0x04]; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAIDataProviderFloatValue *4d5e1d1245[0x30]; // 0xa8(0x30)
	enum class FAIDistanceType *b6adb14f47; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	char bUseParametrizedRadius : 1; // 0xdc(0x01)
	char *8856e2645e : 1; // 0xdc(0x01)
	char bPathFindingBasedTest : 1; // 0xdc(0x01)
	char pad_DC_3 : 5; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
};

// Class AIModule.*269f3e079b
// Size: 0xa8 (Inherited: 0xa0)
struct U*269f3e079b : UBTDecorator_BlackboardBase {
	struct UClass* *bdd1f79260[0x08]; // 0xa0(0x08)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xb0 (Inherited: 0x78)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* *9477fbe1d5[0x08]; // 0x78(0x08)
	struct AActor* *73e497a1ad[0x08]; // 0x80(0x08)
	struct TArray<struct FName> *29763f2980[0x10]; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)
	char *9936f49e91 : 1; // 0xa8(0x01)
	char *1c8ca9febe : 1; // 0xa8(0x01)
	char *ba2c0067f4 : 1; // 0xa8(0x01)
	char pad_A8_3 : 5; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void ReceiveObserverDeactivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	struct APawn* PerformConditionCheckAI(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveExecutionFinishAI(struct APawn** ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveObserverDeactivatedAI(struct AAIController** OwnerController); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	struct AAIController* ReceiveExecutionStartAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	struct AAIController* ReceiveTickAI(struct APawn** ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveExecutionFinish(struct AActor** OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveObserverActivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	struct AAIController* ReceiveObserverActivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void *79a465c597(); // Function AIModule.BTDecorator_BlueprintBase.*79a465c597 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x607ce78
	void PerformConditionCheck(struct AActor** OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void *dd5e7545ee(); // Function AIModule.BTDecorator_BlueprintBase.*dd5e7545ee // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x607ce9c
	struct AActor* ReceiveTick(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveExecutionStart(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
};

// Class AIModule.*9dfafc2ece
// Size: 0xd8 (Inherited: 0x78)
struct U*9dfafc2ece : UBTDecorator {
	struct FBlackboardKeySelector *694d9ae414[0x28]; // 0x78(0x28)
	enum class EGameplayContainerMatchType *7860ba4ec0; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FGameplayTagContainer GameplayTags[0x20]; // 0xa8(0x20)
	struct FString *6def975b7c[0x10]; // 0xc8(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xd0 (Inherited: 0x78)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FBlackboardKeySelector *0c3b20c2cf[0x28]; // 0x80(0x28)
	struct FBlackboardKeySelector *f4dbb55888[0x28]; // 0xa8(0x28)
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0x100 (Inherited: 0x78)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float *2a1ee2b6eb[0x04]; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FBlackboardKeySelector *af3fa2eef0[0x28]; // 0x80(0x28)
	struct FBlackboardKeySelector *675d196ff2[0x28]; // 0xa8(0x28)
	struct FBlackboardKeySelector *eaa5757a7a[0x28]; // 0xd0(0x28)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x80 (Inherited: 0x78)
struct UBTDecorator_Cooldown : UBTDecorator {
	float *7b58746405[0x04]; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xd8 (Inherited: 0x78)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector *0c3b20c2cf[0x28]; // 0x78(0x28)
	struct FBlackboardKeySelector *f4dbb55888[0x28]; // 0xa0(0x28)
	char *75e8f046ef : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	enum class EPathExistanceQueryType *c9f7ee7df2; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct UClass* *b5456fcb59[0x08]; // 0xd0(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x78 (Inherited: 0x78)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xd8 (Inherited: 0x78)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float *2a1ee2b6eb[0x04]; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FBlackboardKeySelector *af3fa2eef0[0x28]; // 0x80(0x28)
	struct FBlackboardKeySelector *eaa5757a7a[0x28]; // 0xa8(0x28)
	char *3709f39bfa : 1; // 0xd0(0x01)
	char *02591a55a1 : 1; // 0xd0(0x01)
	char pad_D0_2 : 6; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x88 (Inherited: 0x78)
struct UBTDecorator_Loop : UBTDecorator {
	int32 *97ddf9fa54[0x04]; // 0x78(0x04)
	bool bInfiniteLoop; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float *caeeb46594[0x04]; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x78 (Inherited: 0x78)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.*a65de6ab75
// Size: 0x88 (Inherited: 0x78)
struct U*a65de6ab75 : UBTDecorator {
	struct FGameplayTag *6bb7513bdd[0x08]; // 0x78(0x08)
	float *f3d7337c25[0x04]; // 0x80(0x04)
	bool *c31f0c00e1; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// Class AIModule.*06f5e39e42
// Size: 0x88 (Inherited: 0x78)
struct U*06f5e39e42 : UBTDecorator {
	struct FGameplayTag *6bb7513bdd[0x08]; // 0x78(0x08)
	float *f3d7337c25[0x04]; // 0x80(0x04)
	bool *c31f0c00e1; // 0x84(0x01)
	bool bActivatesCooldown; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x80 (Inherited: 0x78)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit[0x04]; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class AIModule.*71d15c7b4c
// Size: 0x130 (Inherited: 0xa8)
struct U*71d15c7b4c : UBTService_BlackboardBase {
	struct F*a44cd53957 *52ef090d74[0x48]; // 0xa8(0x48)
	char pad_F0[0x40]; // 0xf0(0x40)
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
// Size: 0xb0 (Inherited: 0xa8)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision[0x04]; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class AIModule.BTTask_RunEQSQuery
// Size: 0x190 (Inherited: 0xa8)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	struct UEnvQuery* *c9c902c1bb[0x08]; // 0xa8(0x08)
	struct TArray<struct FEnvNamedValue> *c1c14617b5[0x10]; // 0xb0(0x10)
	struct TArray<struct F*adbe44f542> *3e5e5c24de[0x10]; // 0xc0(0x10)
	enum class EEnvQueryRunMode *6759275bad; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FBlackboardKeySelector *65e8432f43[0x28]; // 0xd8(0x28)
	bool bUseBBKey; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct F*a44cd53957 *52ef090d74[0x48]; // 0x108(0x48)
	char pad_150[0x40]; // 0x150(0x40)
};

// Class AIModule.*f7f20fed78
// Size: 0x88 (Inherited: 0x80)
struct U*f7f20fed78 : UBTTaskNode {
	char *8ca3564d89 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_MakeNoise : UBTTaskNode {
	float *85ab3db8fc[0x04]; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.*e084f28481
// Size: 0x80 (Inherited: 0x80)
struct U*e084f28481 : UBTTaskNode {
};

// Class AIModule.*e3c207468d
// Size: 0x88 (Inherited: 0x80)
struct U*e3c207468d : U*e084f28481 {
	struct U*25f78a9188* Action[0x08]; // 0x80(0x08)
};

// Class AIModule.*645b456865
// Size: 0x100 (Inherited: 0x80)
struct U*645b456865 : UBTTaskNode {
	struct UAnimationAsset* *75d470c155[0x08]; // 0x80(0x08)
	char bLooping : 1; // 0x88(0x01)
	char *7fc7c3f7ef : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UBehaviorTreeComponent* *508fb9e143[0x08]; // 0x90(0x08)
	struct USkeletalMeshComponent* *fa5baba31b[0x08]; // 0x98(0x08)
	char pad_A0[0x60]; // 0xa0(0x60)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* *bbd3278733[0x08]; // 0x80(0x08)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset[0x08]; // 0x80(0x08)
};

// Class AIModule.*828c0df4b9
// Size: 0x98 (Inherited: 0x80)
struct U*828c0df4b9 : UBTTaskNode {
	struct FGameplayTag *97a089001c[0x08]; // 0x80(0x08)
	struct UBehaviorTree* *57ff9c91fd[0x08]; // 0x88(0x08)
	struct UBehaviorTree* BehaviorAsset[0x08]; // 0x90(0x08)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.CrowdManager
// Size: 0xe8 (Inherited: 0x28)
struct UCrowdManager : UObject {
	struct ANavigationData* *eac456cf29[0x08]; // 0x28(0x08)
	struct TArray<struct F*7dbe801015> AvoidanceConfig[0x10]; // 0x30(0x10)
	struct TArray<struct F*2735eb2cdf> SamplingPatterns[0x10]; // 0x40(0x10)
	int32 MaxAgents[0x04]; // 0x50(0x04)
	float MaxAgentRadius[0x04]; // 0x54(0x04)
	int32 MaxAvoidedAgents[0x04]; // 0x58(0x04)
	int32 MaxAvoidedWalls[0x04]; // 0x5c(0x04)
	float NavmeshCheckInterval[0x04]; // 0x60(0x04)
	float PathOptimizationInterval[0x04]; // 0x64(0x04)
	float SeparationDirClamp[0x04]; // 0x68(0x04)
	char pad_6C_0 : 4; // 0x6c(0x01)
	char bResolveCollisions : 1; // 0x6c(0x01)
	char pad_6C_5 : 3; // 0x6c(0x01)
	char pad_6D[0x7b]; // 0x6d(0x7b)
};

// Class AIModule.EnvQuery
// Size: 0x48 (Inherited: 0x30)
struct UEnvQuery : UDataAsset {
	struct FName *f4e91bb58c[0x08]; // 0x30(0x08)
	struct TArray<struct UEnvQueryOption*> Options[0x10]; // 0x38(0x10)
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char pad_28[0x8]; // 0x28(0x08)

	struct AActor* ProvideSingleLocation(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation // Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const // @ game+0x2cd4ac
	void ProvideSingleActor(struct AActor** QuerierActor); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x2cd4ac
	struct AActor* ProvideActorsSet(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x2cd4ac
	struct UObject* ProvideLocationsSet(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x2cd4ac
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.*9eb2512eb3
// Size: 0x28 (Inherited: 0x28)
struct U*9eb2512eb3 : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.*d8b052ce38
// Size: 0x78 (Inherited: 0x28)
struct U*d8b052ce38 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	int32 QueryID[0x04]; // 0x30(0x04)
	char pad_34[0x24]; // 0x34(0x24)
	struct UClass* ItemType[0x08]; // 0x58(0x08)
	int32 OptionIndex[0x04]; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FMulticastDelegate OnQueryFinishedEvent[0x10]; // 0x68(0x10)

	void *2d3a55243a(); // Function AIModule.*d8b052ce38.*2d3a55243a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x607c3c0
	void EQSQueryDoneSignature__DelegateSignature(); // DelegateFunction AIModule.*d8b052ce38.EQSQueryDoneSignature__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	struct FName *d6e77bfdb5(); // Function AIModule.*d8b052ce38.*d6e77bfdb5 // Final|Native|Public|BlueprintCallable // @ game+0x607ec3c
	void *95f1922f53(); // Function AIModule.*d8b052ce38.*95f1922f53 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x607c448
	void *0ee6ec8da3(int32* ItemIndex); // Function AIModule.*d8b052ce38.*0ee6ec8da3 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x607bea0
};

// Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType {
};

// Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Actor
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase {
};

// Class AIModule.EnvQueryItemType_Direction
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Point
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryManager
// Size: 0x138 (Inherited: 0x28)
struct UEnvQueryManager : UObject {
	char pad_28[0x78]; // 0x28(0x78)
	struct TArray<struct F*7c630400ed> *e2d840aa9e[0x10]; // 0xa0(0x10)
	struct TArray<struct UEnvQueryContext*> *12595f6df4[0x10]; // 0xb0(0x10)
	struct TArray<struct U*d8b052ce38*> *e9d64f352a[0x10]; // 0xc0(0x10)
	char pad_D0[0x54]; // 0xd0(0x54)
	float MaxAllowedTestingTime[0x04]; // 0x124(0x04)
	bool bTestQueriesUsingBreadth; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32 QueryCountWarningThreshold[0x04]; // 0x12c(0x04)
	double QueryCountWarningInterval[0x08]; // 0x130(0x08)

	struct UClass* RunEQSQuery(struct UObject** WorldContext); // Function AIModule.EnvQueryManager.RunEQSQuery // Final|Native|Static|Public|BlueprintCallable // @ game+0x607d610
};

// Class AIModule.*157e6de374
// Size: 0x30 (Inherited: 0x28)
struct U*157e6de374 : UObject {
	int32 *bf5b181d7a[0x04]; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x50 (Inherited: 0x30)
struct UEnvQueryGenerator : U*157e6de374 {
	struct FString OptionName[0x10]; // 0x30(0x10)
	struct UClass* *505b924fe4[0x08]; // 0x40(0x08)
	char *8a4855a8fb : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AIModule.*3191b2cb7c
// Size: 0xc0 (Inherited: 0x50)
struct U*3191b2cb7c : UEnvQueryGenerator {
	struct UClass* *542e4b7f11[0x08]; // 0x50(0x08)
	struct FAIDataProviderBoolValue *8cb9da09e8[0x30]; // 0x58(0x30)
	struct FAIDataProviderFloatValue SearchRadius[0x30]; // 0x88(0x30)
	struct UClass* *ab86b5d69f[0x08]; // 0xb8(0x08)
};

// Class AIModule.*292d9d5109
// Size: 0x80 (Inherited: 0x50)
struct U*292d9d5109 : UEnvQueryGenerator {
	struct FText *ad2f45badc[0x18]; // 0x50(0x18)
	struct UClass* Context[0x08]; // 0x68(0x08)
	struct UClass* *0fa36b6d7b[0x08]; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)

	void *31448aa773(); // Function AIModule.*292d9d5109.*31448aa773 // Final|Native|Public|HasDefaults|BlueprintCallable|Const // @ game+0x6079f9c
	void DoItemGeneration(); // Function AIModule.*292d9d5109.DoItemGeneration // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x2cd4ac
	void *eebc36bee1(); // Function AIModule.*292d9d5109.*eebc36bee1 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6079f0c
	void *78be7c581e(); // Function AIModule.*292d9d5109.*78be7c581e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x607c1f4
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x68 (Inherited: 0x50)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators[0x10]; // 0x50(0x10)
	bool *0e52601a34; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class AIModule.*c5d74297a7
// Size: 0x58 (Inherited: 0x50)
struct U*c5d74297a7 : UEnvQueryGenerator {
	struct UClass* *b0e61d7a47[0x08]; // 0x50(0x08)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x80 (Inherited: 0x50)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData *54275f9c11[0x30]; // 0x50(0x30)
};

// Class AIModule.*a4c79bb320
// Size: 0x150 (Inherited: 0x80)
struct U*a4c79bb320 : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *0888e93ea5[0x30]; // 0x80(0x30)
	struct FAIDataProviderFloatValue *00619c8dcf[0x30]; // 0xb0(0x30)
	struct FAIDataProviderFloatValue *079ea16e2a[0x30]; // 0xe0(0x30)
	struct FAIDataProviderFloatValue Range[0x30]; // 0x110(0x30)
	struct UClass* *5a9073ead9[0x08]; // 0x140(0x08)
	char *bca44fb855 : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class AIModule.*e164f5e7b4
// Size: 0x1a8 (Inherited: 0x80)
struct U*e164f5e7b4 : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius[0x30]; // 0x80(0x30)
	struct FAIDataProviderFloatValue OuterRadius[0x30]; // 0xb0(0x30)
	struct FAIDataProviderIntValue *ef21aaf75e[0x30]; // 0xe0(0x30)
	struct FAIDataProviderIntValue *d6c8f7821f[0x30]; // 0x110(0x30)
	struct FEnvDirection ArcDirection[0x20]; // 0x140(0x20)
	struct FAIDataProviderFloatValue *da0c349b4b[0x30]; // 0x160(0x30)
	bool *adc7d1ede3; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct UClass* Center[0x08]; // 0x198(0x08)
	char bDefineArc : 1; // 0x1a0(0x01)
	char pad_1A0_1 : 7; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x1e8 (Inherited: 0x80)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *fa0e7b41ec[0x30]; // 0x80(0x30)
	struct FAIDataProviderFloatValue *5dccd4b679[0x30]; // 0xb0(0x30)
	struct FAIDataProviderIntValue NumberOfPoints[0x30]; // 0xe0(0x30)
	enum class *d45e0e9b45 *4a09c22335; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FEnvDirection ArcDirection[0x20]; // 0x118(0x20)
	struct FAIDataProviderFloatValue *da0c349b4b[0x30]; // 0x138(0x30)
	float *f2c8bb4001[0x04]; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UClass* *935973d898[0x08]; // 0x170(0x08)
	bool *6bc7b1581c; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct FAIDataProviderFloatValue *3496f15891[0x30]; // 0x180(0x30)
	struct FEnvTraceData TraceData[0x30]; // 0x1b0(0x30)
	char bDefineArc : 1; // 0x1e0(0x01)
	char pad_1E0_1 : 7; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xe8 (Inherited: 0x80)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize[0x30]; // 0x80(0x30)
	struct FAIDataProviderFloatValue *5dccd4b679[0x30]; // 0xb0(0x30)
	struct UClass* *822564b3d9[0x08]; // 0xe0(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x150 (Inherited: 0xe8)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue *98bd50c298[0x30]; // 0xe8(0x30)
	struct UClass* NavigationFilter[0x08]; // 0x118(0x08)
	struct FAIDataProviderFloatValue *172a4e4da8[0x30]; // 0x120(0x30)
};

// Class AIModule.EnvQueryTest
// Size: 0x1c0 (Inherited: 0x30)
struct UEnvQueryTest : U*157e6de374 {
	int32 *1036bcfd3d[0x04]; // 0x30(0x04)
	enum class EEnvTestPurpose *8a575ea099; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FString *dcf986d9d4[0x10]; // 0x38(0x10)
	enum class *850b7bac8a *de1b1f9290; // 0x48(0x01)
	enum class *2a5434f0e1 *98c39b270d; // 0x49(0x01)
	enum class EEnvTestFilterType *083bf60d68; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	struct FAIDataProviderBoolValue *3e13fd76d8[0x30]; // 0x50(0x30)
	struct FAIDataProviderFloatValue *b692249611[0x30]; // 0x80(0x30)
	struct FAIDataProviderFloatValue *84779bab27[0x30]; // 0xb0(0x30)
	char pad_E0[0x1]; // 0xe0(0x01)
	enum class EEnvTestScoreEquation *5cd2b326ba; // 0xe1(0x01)
	enum class EEnvQueryTestClamping *6c41f4aa0e; // 0xe2(0x01)
	enum class EEnvQueryTestClamping *3e692a5411; // 0xe3(0x01)
	enum class EEQSNormalizationType *df7d8082f5; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct FAIDataProviderFloatValue *6a6614ff2c[0x30]; // 0xe8(0x30)
	struct FAIDataProviderFloatValue *fc234cb0ef[0x30]; // 0x118(0x30)
	struct FAIDataProviderFloatValue *f327f6ae3f[0x30]; // 0x148(0x30)
	struct FAIDataProviderFloatValue ReferenceValue[0x30]; // 0x178(0x30)
	bool bDefineReferenceValue; // 0x1a8(0x01)
	char pad_1A9[0xf]; // 0x1a9(0x0f)
	char *d38c51d14e : 1; // 0x1b8(0x01)
	char pad_1B8_1 : 7; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x1d0 (Inherited: 0x1c0)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class *e62db4fc12 *a0bb27be1e; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UClass* DistanceTo[0x08]; // 0x1c8(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x208 (Inherited: 0x1c0)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection *a18274f722[0x20]; // 0x1c0(0x20)
	struct FEnvDirection *11403e5e5a[0x20]; // 0x1e0(0x20)
	enum class *278f23a119 *a0bb27be1e; // 0x200(0x01)
	bool *afa1e8385e; // 0x201(0x01)
	char pad_202[0x6]; // 0x202(0x06)
};

// Class AIModule.*7b1157a24c
// Size: 0x230 (Inherited: 0x1c0)
struct U*7b1157a24c : UEnvQueryTest {
	struct FGameplayTagQuery *a910d2fee0[0x48]; // 0x1c0(0x48)
	bool *ae9b1e80fd; // 0x208(0x01)
	enum class EGameplayContainerMatchType *7860ba4ec0; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
	struct FGameplayTagContainer GameplayTags[0x20]; // 0x210(0x20)
};

// Class AIModule.*e9d2629490
// Size: 0x1e0 (Inherited: 0x1c0)
struct U*e9d2629490 : UEnvQueryTest {
	struct F*43315c3d9f *9b8eda705b[0x20]; // 0x1c0(0x20)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x238 (Inherited: 0x1c0)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding *a0bb27be1e; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UClass* Context[0x08]; // 0x1c8(0x08)
	struct FAIDataProviderBoolValue *80c5411538[0x30]; // 0x1d0(0x30)
	struct FAIDataProviderBoolValue *d820beb4de[0x30]; // 0x200(0x30)
	struct UClass* *b5456fcb59[0x08]; // 0x230(0x08)
};

// Class AIModule.*ef265485c8
// Size: 0x268 (Inherited: 0x238)
struct U*ef265485c8 : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue *172a4e4da8[0x30]; // 0x238(0x30)
};

// Class AIModule.*c5407dc7df
// Size: 0x1f0 (Inherited: 0x1c0)
struct U*c5407dc7df : UEnvQueryTest {
	struct FEnvTraceData *54275f9c11[0x30]; // 0x1c0(0x30)
};

// Class AIModule.*f5bc9afb91
// Size: 0x1c0 (Inherited: 0x1c0)
struct U*f5bc9afb91 : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x288 (Inherited: 0x1c0)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData[0x30]; // 0x1c0(0x30)
	struct FAIDataProviderBoolValue *3153f3b147[0x30]; // 0x1f0(0x30)
	struct FAIDataProviderFloatValue *f78008679a[0x30]; // 0x220(0x30)
	struct FAIDataProviderFloatValue *7a5e71d083[0x30]; // 0x250(0x30)
	struct UClass* Context[0x08]; // 0x280(0x08)
};

// Class AIModule.EnvQueryOption
// Size: 0x40 (Inherited: 0x28)
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator[0x08]; // 0x28(0x08)
	struct TArray<struct UEnvQueryTest*> Tests[0x10]; // 0x30(0x10)
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
	struct UEnvQuery* *c9c902c1bb[0x08]; // 0x868(0x08)
	struct TArray<struct FEnvNamedValue> *c1c14617b5[0x10]; // 0x870(0x10)
	struct TArray<struct F*adbe44f542> *3e5e5c24de[0x10]; // 0x880(0x10)
	float *c9df52bd00[0x04]; // 0x890(0x04)
	int32 *6abd346d0f[0x04]; // 0x894(0x04)
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
// Size: 0x48 (Inherited: 0x48)
struct U*17b84e2113 : U*1a2c4a78a0 {
};

// Class AIModule.*ce0e010772
// Size: 0x58 (Inherited: 0x28)
struct U*ce0e010772 : UObject {
	char pad_28[0x30]; // 0x28(0x30)

	struct FRotator *57088c996c(int32* Radius2D, bool bRebuildGrids); // Function AIModule.*ce0e010772.*57088c996c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x607a03c
	void *ff988be5a8(struct UObject** WorldContext); // Function AIModule.*ce0e010772.*ff988be5a8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x607eb5c
	float *653773fd69(bool bRebuildGrids); // Function AIModule.*ce0e010772.*653773fd69 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x607a54c
	bool *ea3bc2a400(struct TArray<struct FVector>* Locations); // Function AIModule.*ce0e010772.*ea3bc2a400 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x607a724
	struct FVector *61a3f22a7b(struct FVector* End); // Function AIModule.*ce0e010772.*61a3f22a7b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x607ac14
	bool *15e25efe00(struct UObject** WorldContext); // Function AIModule.*ce0e010772.*15e25efe00 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x607a2d8
	void *cdef07ddee(struct UObject** WorldContext); // Function AIModule.*ce0e010772.*cdef07ddee // Final|Native|Static|Public|BlueprintCallable // @ game+0x607d3e4
};

// Class AIModule.*b5a882f41d
// Size: 0x4f0 (Inherited: 0x4c0)
struct U*b5a882f41d : UPathFollowingComponent {
	struct U*ce0e010772* *cfeec1b73c[0x08]; // 0x4b8(0x08)
	char pad_4C8[0x28]; // 0x4c8(0x28)
};

// Class AIModule.*25f78a9188
// Size: 0xd0 (Inherited: 0x28)
struct U*25f78a9188 : UObject {
	struct U*25f78a9188* *fd59edafdb[0x08]; // 0x28(0x08)
	struct U*25f78a9188* *846f2c47b1[0x08]; // 0x30(0x08)
	struct U*abba2dbb00* *139e630113[0x08]; // 0x38(0x08)
	struct UObject* Instigator[0x08]; // 0x40(0x08)
	struct UBrainComponent* *291d373322[0x08]; // 0x48(0x08)
	char pad_50[0x68]; // 0x50(0x68)
	char bAllowNewSameClassInstance : 1; // 0xb8(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0xb8(0x01)
	char bShouldPauseMovement : 1; // 0xb8(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0xb8(0x01)
	char pad_B8_4 : 4; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)

	void Finish(); // Function AIModule.*25f78a9188.Finish // Native|Protected|BlueprintCallable // @ game+0x607ae00
	void *c8e7e8a198(struct UObject** WorldContextObject); // Function AIModule.*25f78a9188.*c8e7e8a198 // Final|Native|Static|Public|BlueprintCallable // @ game+0x607ab38
	void *3dd9ae7a1d(); // Function AIModule.*25f78a9188.*3dd9ae7a1d // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x607af48
};

// Class AIModule.*0845d723bd
// Size: 0xd0 (Inherited: 0xd0)
struct U*0845d723bd : U*25f78a9188 {

	void ActionPause(); // Function AIModule.*0845d723bd.ActionPause // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ActionStart(); // Function AIModule.*0845d723bd.ActionStart // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct APawn* ActionFinished(); // Function AIModule.*0845d723bd.ActionFinished // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ActionResume(); // Function AIModule.*0845d723bd.ActionResume // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ActionTick(); // Function AIModule.*0845d723bd.ActionTick // Event|Public|BlueprintEvent // @ game+0x2cd4ac
};

// Class AIModule.*defd96b641
// Size: 0x120 (Inherited: 0xd0)
struct U*defd96b641 : U*25f78a9188 {
	struct AActor* GoalActor[0x08]; // 0xd0(0x08)
	struct FVector GoalLocation[0x0c]; // 0xd8(0x0c)
	float AcceptableRadius[0x04]; // 0xe4(0x04)
	struct UClass* FilterClass[0x08]; // 0xe8(0x08)
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
	struct U*25f78a9188* *547a1991a9[0x08]; // 0xd0(0x08)
	struct U*25f78a9188* *470cf813b5[0x08]; // 0xd8(0x08)
	enum class *2b7808e2f3 ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// Class AIModule.*3ff3cd7c0f
// Size: 0x100 (Inherited: 0xd0)
struct U*3ff3cd7c0f : U*25f78a9188 {
	struct TArray<struct U*25f78a9188*> *846cfdbb7c[0x10]; // 0xd0(0x10)
	enum class *2b7808e2f3 ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct U*25f78a9188* *470cf813b5[0x08]; // 0xe8(0x08)
	char pad_F0[0x10]; // 0xf0(0x10)
};

// Class AIModule.*a98ad99550
// Size: 0xe0 (Inherited: 0xd0)
struct U*a98ad99550 : U*25f78a9188 {
	float *f6c27c77d7[0x04]; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
};

// Class AIModule.*abba2dbb00
// Size: 0x230 (Inherited: 0x1f0)
struct U*abba2dbb00 : UActorComponent {
	struct APawn* ControlledPawn[0x08]; // 0x1f0(0x08)
	struct TArray<struct F*e6d6914bb8> *14459bc9f9[0x10]; // 0x1f8(0x10)
	struct TArray<struct F*9b44471641> *66f66b6f92[0x10]; // 0x208(0x10)
	struct U*25f78a9188* *59ac9c4cb4[0x08]; // 0x218(0x08)
	char pad_220[0x10]; // 0x220(0x10)

	struct UObject* *0e263e29fe(); // Function AIModule.*abba2dbb00.*0e263e29fe // Final|Native|Public|BlueprintCallable // @ game+0x607d2ac
	void *8382f32dbd(struct U*25f78a9188** Action); // Function AIModule.*abba2dbb00.*8382f32dbd // Final|Native|Static|Public|BlueprintCallable // @ game+0x607d178
	void *21a5fd842f(); // Function AIModule.*abba2dbb00.*21a5fd842f // Final|Native|Public|BlueprintCallable // @ game+0x607d038
	struct U*25f78a9188* *115ec5bb9d(); // Function AIModule.*abba2dbb00.*115ec5bb9d // Final|Native|Public|BlueprintCallable // @ game+0x607d0e0
};

// Class AIModule.PawnSensingComponent
// Size: 0x240 (Inherited: 0x1f0)
struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold[0x04]; // 0x1f0(0x04)
	float LOSHearingThreshold[0x04]; // 0x1f4(0x04)
	float SightRadius[0x04]; // 0x1f8(0x04)
	float SensingInterval[0x04]; // 0x1fc(0x04)
	float HearingMaxSoundAge[0x04]; // 0x200(0x04)
	char bEnableSensingUpdates : 1; // 0x204(0x01)
	char bOnlySensePlayers : 1; // 0x204(0x01)
	char bSeePawns : 1; // 0x204(0x01)
	char bHearNoises : 1; // 0x204(0x01)
	char pad_204_4 : 4; // 0x204(0x01)
	char pad_205[0xb]; // 0x205(0x0b)
	struct FMulticastDelegate OnSeePawn[0x10]; // 0x210(0x10)
	struct FMulticastDelegate OnHearNoise[0x10]; // 0x220(0x10)
	float PeripheralVisionAngle[0x04]; // 0x230(0x04)
	float *5b0d542a0e[0x04]; // 0x234(0x04)
	char pad_238[0x8]; // 0x238(0x08)

	void *2059f771cd(); // Function AIModule.PawnSensingComponent.*2059f771cd // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x607ee84
	void SeePawnDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void HearNoiseDelegate__DelegateSignature(struct FVector* Location); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x2cd4ac
	void *acb2a0578f(); // Function AIModule.PawnSensingComponent.*acb2a0578f // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x607ede8
	void *d9a02e835e(); // Function AIModule.PawnSensingComponent.*d9a02e835e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x607c1dc
	void *7eb44fb4fb(); // Function AIModule.PawnSensingComponent.*7eb44fb4fb // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x607ed4c
	void *4986b6cda6(); // Function AIModule.PawnSensingComponent.*4986b6cda6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x607c1c4
};

// Class AIModule.*912631adfd
// Size: 0x28 (Inherited: 0x28)
struct U*912631adfd : UObject {
};


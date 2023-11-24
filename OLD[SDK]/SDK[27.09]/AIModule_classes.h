// Class AIModule.BTNode
// Size: 0x70 (Inherited: 0x30)
struct UBTNode : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString NodeName; // 0x38(0x10)
	struct FString Tag; // 0x48(0x10)
	struct UBehaviorTree* *6a2f2d4d5d; // 0x58(0x08)
	struct UBTCompositeNode* *295966c944; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class AIModule.BTTaskNode
// Size: 0x88 (Inherited: 0x70)
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; // 0x70(0x10)
	char *3afbfbcd22 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.AISense
// Size: 0x120 (Inherited: 0x30)
struct UAISense : UObject {
	float DefaultExpirationAge; // 0x30(0x04)
	enum class *6b301790d1 NotifyType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bWantsNewPawnNotification : 1; // 0x38(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAIPerceptionSystem* *c47b88183f; // 0x40(0x08)
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

// Class AIModule.*81954aace3
// Size: 0x50 (Inherited: 0x30)
struct U*81954aace3 : UObject {
	struct FColor DebugColor; // 0x30(0x04)
	float MaxAge; // 0x34(0x04)
	char bStartsEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x17]; // 0x39(0x17)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x68 (Inherited: 0x50)
struct UAISenseConfig_Hearing : U*81954aace3 {
	struct UClass* Implementation; // 0x50(0x08)
	float HearingRange; // 0x58(0x04)
	float LoSHearingRange; // 0x5c(0x04)
	char bUseLoSHearing : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct F*eab45cfa59 DetectionByAffiliation; // 0x64(0x04)
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x70 (Inherited: 0x50)
struct UAISenseConfig_Sight : U*81954aace3 {
	struct UClass* Implementation; // 0x50(0x08)
	float SightRadius; // 0x58(0x04)
	float LoseSightRadius; // 0x5c(0x04)
	float PeripheralVisionAngleDegrees; // 0x60(0x04)
	struct F*eab45cfa59 DetectionByAffiliation; // 0x64(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class AIModule.BlackboardComponent
// Size: 0x300 (Inherited: 0x200)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* *409ccbdde3; // 0x200(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x208(0x08)
	char pad_210[0x20]; // 0x210(0x20)
	struct TArray<struct UBlackboardKeyType*> *59aa6d1aed; // 0x230(0x10)
	char pad_240[0xc0]; // 0x240(0xc0)

	void *94ad0dda03(); // Function AIModule.BlackboardComponent.*94ad0dda03 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6249f14
	void *0bfb2f7afd(); // Function AIModule.BlackboardComponent.*0bfb2f7afd // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6249204
	void *3b71c606b4(); // Function AIModule.BlackboardComponent.*3b71c606b4 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6249ac4
	void *58e35476fa(); // Function AIModule.BlackboardComponent.*58e35476fa // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6249c34
	void *075fbd68c6(); // Function AIModule.BlackboardComponent.*075fbd68c6 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x624a0fc
	void *86cc9b2591(); // Function AIModule.BlackboardComponent.*86cc9b2591 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6249a0c
	void *89b48d02d4(); // Function AIModule.BlackboardComponent.*89b48d02d4 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x624c370
	void *cb7be3f4a8(); // Function AIModule.BlackboardComponent.*cb7be3f4a8 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x624c878
	void *405818cbdb(); // Function AIModule.BlackboardComponent.*405818cbdb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x624c978
	void *4e08c7b05e(); // Function AIModule.BlackboardComponent.*4e08c7b05e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6247d38
	void *12928bb838(); // Function AIModule.BlackboardComponent.*12928bb838 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6249e5c
	void *9e535e6d72(); // Function AIModule.BlackboardComponent.*9e535e6d72 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x624c470
	void *ab9e5cdf1f(); // Function AIModule.BlackboardComponent.*ab9e5cdf1f // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6249cec
	void *563ff39ee4(); // Function AIModule.BlackboardComponent.*563ff39ee4 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x624cbf4
	void *515ad51661(); // Function AIModule.BlackboardComponent.*515ad51661 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6249820
	void *f1be75ee9e(); // Function AIModule.BlackboardComponent.*f1be75ee9e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x624a29c
	void *06afae9efe(); // Function AIModule.BlackboardComponent.*06afae9efe // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x624ca90
	void *7d505ab534(); // Function AIModule.BlackboardComponent.*7d505ab534 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x624c570
	void *b06b07db14(); // Function AIModule.BlackboardComponent.*b06b07db14 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6249da4
	void *b36f8f9501(); // Function AIModule.BlackboardComponent.*b36f8f9501 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x624c678
	void *c6625e01fa(); // Function AIModule.BlackboardComponent.*c6625e01fa // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x624c778
	void *6dda1fc140(); // Function AIModule.BlackboardComponent.*6dda1fc140 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x624c26c
	void *bd79557a83(); // Function AIModule.BlackboardComponent.*bd79557a83 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6249b7c
	void *2587dab987(); // Function AIModule.BlackboardComponent.*2587dab987 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6249fe0
};

// Class AIModule.PathFollowingComponent
// Size: 0x4d0 (Inherited: 0x200)
struct UPathFollowingComponent : UActorComponent {
	char pad_200[0x130]; // 0x200(0x130)
	struct UNavMovementComponent* MovementComp; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)
	struct ANavigationData* *e412750adf; // 0x340(0x08)
	char pad_348[0x188]; // 0x348(0x188)

	void *84acdfdba8(); // Function AIModule.PathFollowingComponent.*84acdfdba8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6243e10
	void OnNavDataRegistered(); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // Final|Native|Protected // @ game+0x6244f44
	void OnActorBump(); // Function AIModule.PathFollowingComponent.OnActorBump // Native|Public|HasOutParms|HasDefaults // @ game+0x6244bc8
	void *7778d3a8c9(); // Function AIModule.PathFollowingComponent.*7778d3a8c9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6243e8c
};

// Class AIModule.*c052b925d4
// Size: 0x30 (Inherited: 0x30)
struct U*c052b925d4 : UInterface {
};

// Class AIModule.AIController
// Size: 0x518 (Inherited: 0x488)
struct AAIController : AController {
	char pad_488[0x38]; // 0x488(0x38)
	char bStopAILogicOnUnposses : 1; // 0x4c0(0x01)
	char *97c1252c2c : 1; // 0x4c0(0x01)
	char *8fd7a1bc1b : 1; // 0x4c0(0x01)
	char *ca527bbb9d : 1; // 0x4c0(0x01)
	char *4b8de6844a : 1; // 0x4c0(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4c0(0x01)
	char pad_4C0_6 : 2; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x4c8(0x08)
	struct UBrainComponent* BrainComponent; // 0x4d0(0x08)
	struct UAIPerceptionComponent* *48ae6b3f42; // 0x4d8(0x08)
	struct U*5750687860* ActionsComp; // 0x4e0(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4e8(0x08)
	struct UGameplayTasksComponent* *8e756889fb; // 0x4f0(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x4f8(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x500(0x10)
	char pad_510[0x8]; // 0x510(0x08)

	void RunBehaviorTree(); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x6245b40
	void OnGameplayTaskResourcesClaimed(); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x6244d88
	void OnUnpossess(); // Function AIModule.AIController.OnUnpossess // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnPossess(); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void UseBlackboard(); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x62462fc
	void *ceeb0b0cbd(); // Function AIModule.AIController.*ceeb0b0cbd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6243b50
	void *b175c1078b(); // Function AIModule.AIController.*b175c1078b // Final|Native|Public|BlueprintCallable // @ game+0x6243348
	void K2_SetFocalPoint(); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x62443c8
	void *f14cd3ffb7(); // Function AIModule.AIController.*f14cd3ffb7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6243c3c
	void K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x6244470
	void *5aed30e03a(); // Function AIModule.AIController.*5aed30e03a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6243ec0
	void *8d0ebecd62(); // Function AIModule.AIController.*8d0ebecd62 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x62448d0
	void *28327cf9b0(); // Function AIModule.AIController.*28327cf9b0 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6243688
	void *61f84da4d3(); // Function AIModule.AIController.*61f84da4d3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6243c60
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x62443ac
	void *742f53ad3b(); // Function AIModule.AIController.*742f53ad3b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6243b84
	void *09f1d95f4a(); // Function AIModule.AIController.*09f1d95f4a // Final|Native|Public|BlueprintCallable // @ game+0x6245da8
	void *a0e347c1be(); // Function AIModule.AIController.*a0e347c1be // Final|Native|Public|BlueprintCallable // @ game+0x6244638
	void OnUsingBlackBoard(); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *69da0c9c2b(); // Function AIModule.AIController.*69da0c9c2b // Final|Native|Public|BlueprintCallable // @ game+0x6246098
	void *e3643c4ff6(); // Function AIModule.AIController.*e3643c4ff6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6243de8
	void *fb081ec689(); // Function AIModule.AIController.*fb081ec689 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x62440f4
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
	char *3e87395321 : 1; // 0x78(0x01)
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
	struct FString *4f0a8f002f; // 0xc0(0x10)
	bool OperationType; // 0xd0(0x01)
	enum class *938033f8bb NotifyObserver; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
};

// Class AIModule.BTService
// Size: 0x88 (Inherited: 0x78)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x78(0x04)
	float *7a4ce0097b; // 0x7c(0x04)
	char *d3a934d5d9 : 1; // 0x80(0x01)
	char *8f685d3d00 : 1; // 0x80(0x01)
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
	bool *e2491db427; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class AIModule.AIPerceptionComponent
// Size: 0x2e0 (Inherited: 0x200)
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct U*81954aace3*> *6588aceefc; // 0x200(0x10)
	struct UClass* *679c5b2bfe; // 0x210(0x08)
	char pad_218[0x10]; // 0x218(0x10)
	struct AAIController* *2915bdac5c; // 0x228(0x08)
	char pad_230[0x80]; // 0x230(0x80)
	struct FMulticastDelegate OnPerceptionUpdated; // 0x2b0(0x10)
	struct FMulticastDelegate OnTargetPerceptionUpdated; // 0x2c0(0x10)
	char pad_2D0[0x10]; // 0x2d0(0x10)

	void *420d22d223(); // Function AIModule.AIPerceptionComponent.*420d22d223 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6243ed8
	void *d9d5e58cda(); // Function AIModule.AIPerceptionComponent.*d9d5e58cda // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x62436a0
	void *3f343a184f(); // Function AIModule.AIPerceptionComponent.*3f343a184f // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6243cc8
	void *a7a8847700(); // Function AIModule.AIPerceptionComponent.*a7a8847700 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6243a30
	void *6000a05a68(); // Function AIModule.AIPerceptionComponent.*6000a05a68 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6243a30
	void OnOwnerEndPlay(); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // Final|Native|Public // @ game+0x6244fd4
	void *60e13874b3(); // Function AIModule.AIPerceptionComponent.*60e13874b3 // Final|Native|Public|BlueprintCallable // @ game+0x6245b2c
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
	struct UClass* *a2da6fc5f4; // 0xb8(0x08)
	float *60a110fa86; // 0xc0(0x04)
	char bObserveBlackboardValue : 1; // 0xc4(0x01)
	char *ca527bbb9d : 1; // 0xc4(0x01)
	char *f942b5de7a : 1; // 0xc4(0x01)
	char *e0fe01c056 : 1; // 0xc4(0x01)
	char *34d55b84f3 : 1; // 0xc4(0x01)
	char *886a8a58b0 : 1; // 0xc4(0x01)
	char pad_C4_6 : 2; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// Class AIModule.BTTask_Wait
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_Wait : UBTTaskNode {
	float *de6e50ee5a; // 0x88(0x04)
	float *7a4ce0097b; // 0x8c(0x04)
};

// Class AIModule.*8a86a45dc3
// Size: 0x98 (Inherited: 0x88)
struct U*8a86a45dc3 : UBTTaskNode {
	struct FGameplayTag *0ca9fed388; // 0x88(0x08)
	bool *3a60b15fc6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float *d8d5f031e5; // 0x94(0x04)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xd0 (Inherited: 0xc8)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xc8(0x01)
	char *48bf5c8b48 : 1; // 0xc8(0x01)
	char *d7d7cad95c : 1; // 0xc8(0x01)
	char pad_C8_3 : 5; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class AIModule.*2a0c222999
// Size: 0xb8 (Inherited: 0x90)
struct U*2a0c222999 : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; // 0x90(0x28)
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x520 (Inherited: 0x4d0)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	struct FVector *088d42d6a0; // 0x4d0(0x0c)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UCharacterMovementComponent* CharacterMovement; // 0x4e0(0x08)
	struct F*4c8082789d AvoidanceGroup; // 0x4e8(0x04)
	struct F*4c8082789d GroupsToAvoid; // 0x4ec(0x04)
	struct F*4c8082789d GroupsToIgnore; // 0x4f0(0x04)
	char pad_4F4[0x2c]; // 0x4f4(0x2c)

	void *5fa1e8b41f(); // Function AIModule.CrowdFollowingComponent.*5fa1e8b41f // Native|Public|BlueprintCallable // @ game+0x624ce8c
};

// Class AIModule.BTService_BlueprintBase
// Size: 0xb0 (Inherited: 0x88)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* *2915bdac5c; // 0x88(0x08)
	struct AActor* *ff5af5a4a3; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)
	char *2b415a8e25 : 1; // 0xa8(0x01)
	char *320bd4cfdc : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void ReceiveDeactivation(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveActivation(); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveTick(); // Function AIModule.BTService_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveTickAI(); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveSearchStart(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveActivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveSearchStartAI(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *7f870e532c(); // Function AIModule.BTService_BlueprintBase.*7f870e532c // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x624a238
	void ReceiveDeactivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xb8 (Inherited: 0x88)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* *2915bdac5c; // 0x88(0x08)
	struct AActor* *ff5af5a4a3; // 0x90(0x08)
	char pad_98[0x18]; // 0x98(0x18)
	char *2b415a8e25 : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	void ReceiveAbortAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *a3662677a6(); // Function AIModule.BTTask_BlueprintBase.*a3662677a6 // Final|Native|Protected|BlueprintCallable // @ game+0x624815c
	void ReceiveAbort(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveTick(); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveExecute(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *3fa1af4cc3(); // Function AIModule.BTTask_BlueprintBase.*3fa1af4cc3 // Final|Native|Protected|BlueprintCallable // @ game+0x624bd40
	void *7f62d84e0d(); // Function AIModule.BTTask_BlueprintBase.*7f62d84e0d // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x624a25c
	void *5e8022baaf(); // Function AIModule.BTTask_BlueprintBase.*5e8022baaf // Final|Native|Protected|BlueprintCallable // @ game+0x624bdd0
	void ReceiveExecuteAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *0aa5fa8916(); // Function AIModule.BTTask_BlueprintBase.*0aa5fa8916 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x624a278
	void *d76e32b6ce(); // Function AIModule.BTTask_BlueprintBase.*d76e32b6ce // Final|Native|Protected|BlueprintCallable // @ game+0x6248148
	void ReceiveTickAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
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

	void OnMoveCompleted(); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // Final|Native|Public // @ game+0x6244e68
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void *aacc2efdce(); // Function AIModule.AIBlueprintHelperLibrary.*aacc2efdce // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x62435f8
	void *0ed42a0251(); // Function AIModule.AIBlueprintHelperLibrary.*0ed42a0251 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x62433d8
	void *677a8cbd81(); // Function AIModule.AIBlueprintHelperLibrary.*677a8cbd81 // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x6244508
	void GetBlackboard(); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x62439a0
	void *220b58bdb2(); // Function AIModule.AIBlueprintHelperLibrary.*220b58bdb2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6245e6c
	void *938aed6cc1(); // Function AIModule.AIBlueprintHelperLibrary.*938aed6cc1 // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x6246128
	void *bc4e607ca3(); // Function AIModule.AIBlueprintHelperLibrary.*bc4e607ca3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6244210
	void *969dd50865(); // Function AIModule.AIBlueprintHelperLibrary.*969dd50865 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x62442f8
	void *f7a09f891a(); // Function AIModule.AIBlueprintHelperLibrary.*f7a09f891a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6244114
	void *fe73df0170(); // Function AIModule.AIBlueprintHelperLibrary.*fe73df0170 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6245be8
};

// Class AIModule.*19312c13a4
// Size: 0x30 (Inherited: 0x30)
struct U*19312c13a4 : UInterface {
};

// Class AIModule.*734364720c
// Size: 0x30 (Inherited: 0x30)
struct U*734364720c : UInterface {
};

// Class AIModule.DetourCrowdAIController
// Size: 0x518 (Inherited: 0x518)
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.GridPathAIController
// Size: 0x518 (Inherited: 0x518)
struct AGridPathAIController : AAIController {
};

// Class AIModule.*693910efed
// Size: 0x30 (Inherited: 0x30)
struct U*693910efed : UObject {
};

// Class AIModule.*87122ce70f
// Size: 0x48 (Inherited: 0x30)
struct U*87122ce70f : U*693910efed {
	struct FName ParamName; // 0x30(0x08)
	float FloatValue; // 0x38(0x04)
	int32 IntValue; // 0x3c(0x04)
	bool *d4b293af0c; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class AIModule.*4247dc29e1
// Size: 0x58 (Inherited: 0x48)
struct U*4247dc29e1 : U*87122ce70f {
	float Min; // 0x48(0x04)
	float Max; // 0x4c(0x04)
	char *19b9ab86c0 : 1; // 0x50(0x01)
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
	struct TArray<struct UAISense*> *50ac497e20; // 0x88(0x10)
	float PerceptionAgingRate; // 0x98(0x04)
	char pad_9C[0x9c]; // 0x9c(0x9c)

	void *5474241f97(); // Function AIModule.AIPerceptionSystem.*5474241f97 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6245814
	void *8560befb93(); // Function AIModule.AIPerceptionSystem.*8560befb93 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6243fa4
	void *51969abfa1(); // Function AIModule.AIPerceptionSystem.*51969abfa1 // Final|Native|Public|BlueprintCallable // @ game+0x6245570
	void *1543cec135(); // Function AIModule.AIPerceptionSystem.*1543cec135 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6245218
	void OnPerceptionStimuliSourceEndPlay(); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // Final|Native|Protected // @ game+0x62450b8
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x220 (Inherited: 0x200)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0x200(0x01)
	char pad_200_1 : 7; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct TArray<struct UClass*> RegisterAsSourceForSenses; // 0x208(0x10)
	char pad_218[0x8]; // 0x218(0x08)

	void *9960961727(); // Function AIModule.AIPerceptionStimuliSourceComponent.*9960961727 // Final|Native|Public|BlueprintCallable // @ game+0x6245188
	void *03d6b78988(); // Function AIModule.AIPerceptionStimuliSourceComponent.*03d6b78988 // Final|Native|Public|BlueprintCallable // @ game+0x624626c
	void *fb27fb38b9(); // Function AIModule.AIPerceptionStimuliSourceComponent.*fb27fb38b9 // Final|Native|Public|BlueprintCallable // @ game+0x6245334
	void *e6cbaa8a85(); // Function AIModule.AIPerceptionStimuliSourceComponent.*e6cbaa8a85 // Final|Native|Public|BlueprintCallable // @ game+0x6246258
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
	struct TArray<struct U*4b4bdab98d*> *59a242574e; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)

	void OnListenerUpdated(); // Function AIModule.AISense_Blueprint.OnListenerUpdated // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void K2_OnNewPawn(); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void *0c60d7423b(); // Function AIModule.AISense_Blueprint.*0c60d7423b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x62437cc
	void *8f4ed61261(); // Function AIModule.AISense_Blueprint.*8f4ed61261 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6243894
	void OnListenerUnregistered(); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void OnUpdate(); // Function AIModule.AISense_Blueprint.OnUpdate // Event|Public|HasOutParms|BlueprintEvent // @ game+0x22ddc4
	void OnListenerRegistered(); // Function AIModule.AISense_Blueprint.OnListenerRegistered // Event|Public|BlueprintEvent // @ game+0x22ddc4
};

// Class AIModule.AISense_Damage
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Damage : UAISense {
	struct TArray<struct F*1a2cba3534> *14789d26cc; // 0x120(0x10)

	void *32a2e83ed7(); // Function AIModule.AISense_Damage.*32a2e83ed7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6245348
};

// Class AIModule.AISense_Hearing
// Size: 0x190 (Inherited: 0x120)
struct UAISense_Hearing : UAISense {
	struct TArray<struct F*8dab4083a8> *fd264af21f; // 0x120(0x10)
	float SpeedOfSoundSq; // 0x130(0x04)
	char pad_134[0x5c]; // 0x134(0x5c)

	void *c4ea5733c7(); // Function AIModule.AISense_Hearing.*c4ea5733c7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6245600
};

// Class AIModule.AISense_Prediction
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Prediction : UAISense {
	struct TArray<struct F*a5c4e338f3> *14789d26cc; // 0x120(0x10)

	void *aa21df2848(); // Function AIModule.AISense_Prediction.*aa21df2848 // Final|Native|Static|Public|BlueprintCallable // @ game+0x62458f4
	void *d4debf996b(); // Function AIModule.AISense_Prediction.*d4debf996b // Final|Native|Static|Public|BlueprintCallable // @ game+0x6245a10
};

// Class AIModule.AISense_Team
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Team : UAISense {
	struct TArray<struct F*3a4e4bdf7a> *14789d26cc; // 0x120(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Touch : UAISense {
	struct TArray<struct F*e9a9a34564> *14789d26cc; // 0x120(0x10)
};

// Class AIModule.*110ebeeee3
// Size: 0x108 (Inherited: 0x108)
struct U*110ebeeee3 : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x58 (Inherited: 0x50)
struct UAISenseConfig_Blueprint : U*81954aace3 {
	struct UClass* Implementation; // 0x50(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x58 (Inherited: 0x50)
struct UAISenseConfig_Damage : U*81954aace3 {
	struct UClass* Implementation; // 0x50(0x08)
};

// Class AIModule.*663cc04617
// Size: 0x50 (Inherited: 0x50)
struct U*663cc04617 : U*81954aace3 {
};

// Class AIModule.*d0a5aca4d2
// Size: 0x50 (Inherited: 0x50)
struct U*d0a5aca4d2 : U*81954aace3 {
};

// Class AIModule.*8e8e799568
// Size: 0x50 (Inherited: 0x50)
struct U*8e8e799568 : U*81954aace3 {
};

// Class AIModule.*4b4bdab98d
// Size: 0x30 (Inherited: 0x30)
struct U*4b4bdab98d : UObject {
};

// Class AIModule.*ddef876eb4
// Size: 0x60 (Inherited: 0x30)
struct U*ddef876eb4 : U*4b4bdab98d {
	struct F*1a2cba3534 Event; // 0x30(0x30)
};

// Class AIModule.*bdeae13c51
// Size: 0x60 (Inherited: 0x30)
struct U*bdeae13c51 : U*4b4bdab98d {
	struct F*8dab4083a8 Event; // 0x30(0x30)
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
	struct UEnvQueryManager* *1d54bd33ad; // 0x90(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0x98(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> *387f4cea7b; // 0xa0(0x10)
	struct UAIHotSpotManager* *42c56411c0; // 0xb0(0x08)
	struct U*d2a9631777* *d0503f17d8; // 0xb8(0x08)
	char pad_C0[0x58]; // 0xc0(0x58)

	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // Exec|Native|Public // @ game+0x6246d90
	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // Exec|Native|Public // @ game+0x5a6f674
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
	struct F*77dfb50dbd *e1bcd24883; // 0x98(0x50)
	char pad_E8[0x40]; // 0xe8(0x40)

	void AIMoveTo(); // Function AIModule.AITask_MoveTo.AIMoveTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6246da8
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

	void *35722a5887(); // Function AIModule.AITask_RunEQS.*35722a5887 // Final|Native|Static|Public|BlueprintCallable // @ game+0x624a868
};

// Class AIModule.BrainComponent
// Size: 0x260 (Inherited: 0x200)
struct UBrainComponent : UActorComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0x208(0x08)
	struct AAIController* *2915bdac5c; // 0x210(0x08)
	char pad_218[0x48]; // 0x218(0x48)

	void *edb3040425(); // Function AIModule.BrainComponent.*edb3040425 // Native|Public|BlueprintCallable // @ game+0x624cdc8
	void *56322a2a36(); // Function AIModule.BrainComponent.*56322a2a36 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x624a210
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // Native|Public|BlueprintCallable // @ game+0xcfd574
	void IsRunning(); // Function AIModule.BrainComponent.IsRunning // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a54fec
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x3a0 (Inherited: 0x260)
struct UBehaviorTreeComponent : UBrainComponent {
	char pad_260[0x20]; // 0x260(0x20)
	struct TArray<struct UBTNode*> *ce2d1d421b; // 0x280(0x10)
	char pad_290[0x110]; // 0x290(0x110)

	void *d77e861bbc(); // Function AIModule.BehaviorTreeComponent.*d77e861bbc // Final|Native|Public|BlueprintCallable // @ game+0x624707c
	void *b5b474e79f(); // Function AIModule.BehaviorTreeComponent.*b5b474e79f // Native|Public|BlueprintCallable // @ game+0x624bc60
	void *9d82df5de8(); // Function AIModule.BehaviorTreeComponent.*9d82df5de8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x624993c
};

// Class AIModule.BTCompositeNode
// Size: 0xe0 (Inherited: 0x70)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct F*7502765a03> Children; // 0x70(0x10)
	struct TArray<struct UBTService*> Services; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)
};

// Class AIModule.BehaviorTree
// Size: 0x68 (Inherited: 0x30)
struct UBehaviorTree : UObject {
	struct UBTCompositeNode* RootNode; // 0x30(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x38(0x08)
	struct TArray<struct UBTDecorator*> *c86695082a; // 0x40(0x10)
	struct TArray<struct F*d0a58640e7> *346e869dcd; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class AIModule.BehaviorTreeManager
// Size: 0x58 (Inherited: 0x30)
struct UBehaviorTreeManager : UObject {
	int32 MaxDebuggerSteps; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct F*9de88ebfff> *46644e1421; // 0x38(0x10)
	struct TArray<struct UBehaviorTreeComponent*> *6a92b19b59; // 0x48(0x10)
};

// Class AIModule.BlackboardData
// Size: 0x58 (Inherited: 0x38)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x38(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x40(0x10)
	char *581de7f6b5 : 1; // 0x50(0x01)
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
	struct UClass* *a53a87f6e7; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x58 (Inherited: 0x38)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x38(0x08)
	struct FString EnumName; // 0x40(0x10)
	char *8dc726c948 : 1; // 0x50(0x01)
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
	struct UClass* *a53a87f6e7; // 0x38(0x08)
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

	void *3fe0ed0ac5(); // Function AIModule.BTFunctionLibrary.*3fe0ed0ac5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6248a5c
	void *b59978e3ea(); // Function AIModule.BTFunctionLibrary.*b59978e3ea // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x624b6e8
	void *ea904f9076(); // Function AIModule.BTFunctionLibrary.*ea904f9076 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6247bcc
	void *a69557a0e0(); // Function AIModule.BTFunctionLibrary.*a69557a0e0 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x624ba88
	void *4a6dc8c794(); // Function AIModule.BTFunctionLibrary.*4a6dc8c794 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6248334
	void *2c4849c748(); // Function AIModule.BTFunctionLibrary.*2c4849c748 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6248d58
	void *a8224b14fb(); // Function AIModule.BTFunctionLibrary.*a8224b14fb // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x624b8c0
	void *eeede7a541(); // Function AIModule.BTFunctionLibrary.*eeede7a541 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x624b530
	void GetOwnersBlackboard(); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x62493b0
	void *86260d1ab9(); // Function AIModule.BTFunctionLibrary.*86260d1ab9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x62488e0
	void *58e8789a9a(); // Function AIModule.BTFunctionLibrary.*58e8789a9a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x624b04c
	void *ae11b333e0(); // Function AIModule.BTFunctionLibrary.*ae11b333e0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x624acdc
	void *6ef4ae005e(); // Function AIModule.BTFunctionLibrary.*6ef4ae005e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6248bd8
	void *81990eb8ad(); // Function AIModule.BTFunctionLibrary.*81990eb8ad // Final|Native|Static|Public|BlueprintCallable // @ game+0x59bccf4
	void *d976c4a264(); // Function AIModule.BTFunctionLibrary.*d976c4a264 // Final|Native|Static|Public|BlueprintCallable // @ game+0x624cd00
	void *afdb5bb70c(); // Function AIModule.BTFunctionLibrary.*afdb5bb70c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6248204
	void *9c41e08cf9(); // Function AIModule.BTFunctionLibrary.*9c41e08cf9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6247bcc
	void *0e72e22cf1(); // Function AIModule.BTFunctionLibrary.*0e72e22cf1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6249008
	void *bfa7ca3533(); // Function AIModule.BTFunctionLibrary.*bfa7ca3533 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x624b1c0
	void *6dab82041d(); // Function AIModule.BTFunctionLibrary.*6dab82041d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x62487ac
	void *8fcf2467d9(); // Function AIModule.BTFunctionLibrary.*8fcf2467d9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x624ae94
	void *44debe6149(); // Function AIModule.BTFunctionLibrary.*44debe6149 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6248630
	void *6a5ad52c52(); // Function AIModule.BTFunctionLibrary.*6a5ad52c52 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x624ab20
	void *3bbf699c0c(); // Function AIModule.BTFunctionLibrary.*3bbf699c0c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6248e98
	void *487188d105(); // Function AIModule.BTFunctionLibrary.*487188d105 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x624b378
	void *e629ef5667(); // Function AIModule.BTFunctionLibrary.*e629ef5667 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6249320
	void *78b8133aff(); // Function AIModule.BTFunctionLibrary.*78b8133aff // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x62484b0
};

// Class AIModule.*85d8281644
// Size: 0xd8 (Inherited: 0xd8)
struct U*85d8281644 : UBTDecorator_Blackboard {
};

// Class AIModule.*4c59b258aa
// Size: 0xe8 (Inherited: 0xa8)
struct U*4c59b258aa : UBTDecorator_BlackboardBase {
	float *bc2d26e277; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FAIDataProviderFloatValue *e6b66fb5b5; // 0xb0(0x30)
	enum class FAIDistanceType *88ab4a04f9; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	char bUseParametrizedRadius : 1; // 0xe4(0x01)
	char *ec3e12c116 : 1; // 0xe4(0x01)
	char bPathFindingBasedTest : 1; // 0xe4(0x01)
	char pad_E4_3 : 5; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
};

// Class AIModule.*3df2e8c877
// Size: 0xb0 (Inherited: 0xa8)
struct U*3df2e8c877 : UBTDecorator_BlackboardBase {
	struct UClass* *c205b2161d; // 0xa8(0x08)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xb8 (Inherited: 0x80)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* *2915bdac5c; // 0x80(0x08)
	struct AActor* *ff5af5a4a3; // 0x88(0x08)
	struct TArray<struct FName> *8bcf19ac50; // 0x90(0x10)
	char pad_A0[0x10]; // 0xa0(0x10)
	char *2b415a8e25 : 1; // 0xb0(0x01)
	char *754e2dad64 : 1; // 0xb0(0x01)
	char *ea07152c6a : 1; // 0xb0(0x01)
	char pad_B0_3 : 5; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	void PerformConditionCheck(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *56377b29a2(); // Function AIModule.BTDecorator_BlueprintBase.*56377b29a2 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x624a1c8
	void ReceiveExecutionFinishAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void *a0a7eaae4d(); // Function AIModule.BTDecorator_BlueprintBase.*a0a7eaae4d // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x624a1ec
	void ReceiveTick(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveObserverActivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveObserverDeactivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveExecutionFinish(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveExecutionStart(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveTickAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveExecutionStartAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveObserverDeactivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void ReceiveObserverActivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void PerformConditionCheckAI(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // Event|Protected|BlueprintEvent // @ game+0x22ddc4
};

// Class AIModule.*b3802bd811
// Size: 0xe0 (Inherited: 0x80)
struct U*b3802bd811 : UBTDecorator {
	struct FBlackboardKeySelector *8572d6e663; // 0x80(0x28)
	enum class EGameplayContainerMatchType *6bec836d85; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FGameplayTagContainer GameplayTags; // 0xb0(0x20)
	struct FString *4f0a8f002f; // 0xd0(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xd8 (Inherited: 0x80)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FBlackboardKeySelector *b84d63d253; // 0x88(0x28)
	struct FBlackboardKeySelector *72d98ff589; // 0xb0(0x28)
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0x108 (Inherited: 0x80)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float *4eb850d215; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FBlackboardKeySelector *e4707c4383; // 0x88(0x28)
	struct FBlackboardKeySelector *1e6bd6c241; // 0xb0(0x28)
	struct FBlackboardKeySelector *d733a67044; // 0xd8(0x28)
	char pad_100[0x8]; // 0x100(0x08)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x88 (Inherited: 0x80)
struct UBTDecorator_Cooldown : UBTDecorator {
	float *675c29da44; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xe0 (Inherited: 0x80)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector *b84d63d253; // 0x80(0x28)
	struct FBlackboardKeySelector *72d98ff589; // 0xa8(0x28)
	char *3cdd56bd8c : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	enum class EPathExistanceQueryType *fe5965ef19; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UClass* *a2da6fc5f4; // 0xd8(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x80 (Inherited: 0x80)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xe0 (Inherited: 0x80)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float *4eb850d215; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FBlackboardKeySelector *e4707c4383; // 0x88(0x28)
	struct FBlackboardKeySelector *d733a67044; // 0xb0(0x28)
	char *7e50375e70 : 1; // 0xd8(0x01)
	char *e79b75c07f : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x90 (Inherited: 0x80)
struct UBTDecorator_Loop : UBTDecorator {
	int32 *ba3b6e10af; // 0x80(0x04)
	bool bInfiniteLoop; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float *81184ad6c0; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x80 (Inherited: 0x80)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.*13958fdbae
// Size: 0x90 (Inherited: 0x80)
struct U*13958fdbae : UBTDecorator {
	struct FGameplayTag *0ca9fed388; // 0x80(0x08)
	float *d8d5f031e5; // 0x88(0x04)
	bool *3a60b15fc6; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// Class AIModule.*ffc420930f
// Size: 0x90 (Inherited: 0x80)
struct U*ffc420930f : UBTDecorator {
	struct FGameplayTag *0ca9fed388; // 0x80(0x08)
	float *d8d5f031e5; // 0x88(0x04)
	bool *3a60b15fc6; // 0x8c(0x01)
	bool bActivatesCooldown; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x88 (Inherited: 0x80)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.*1f2a01473a
// Size: 0x140 (Inherited: 0xb0)
struct U*1f2a01473a : UBTService_BlackboardBase {
	struct F*94ed19e5c6 *aaf83ab470; // 0xb0(0x48)
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
	enum class EBTParallelMode *f445e228de; // 0xd8(0x01)
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
	struct UEnvQuery* *2c8ffe8dea; // 0xb0(0x08)
	struct TArray<struct FEnvNamedValue> *c32d9e67f9; // 0xb8(0x10)
	struct TArray<struct F*bfa5db6008> *880248475e; // 0xc8(0x10)
	enum class EEnvQueryRunMode *83fcce3f45; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FBlackboardKeySelector *c4e138b4d8; // 0xe0(0x28)
	bool bUseBBKey; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct F*94ed19e5c6 *aaf83ab470; // 0x110(0x48)
	char pad_158[0x48]; // 0x158(0x48)
};

// Class AIModule.*6fc44b5887
// Size: 0x90 (Inherited: 0x88)
struct U*6fc44b5887 : UBTTaskNode {
	char *edf50b9e21 : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_MakeNoise : UBTTaskNode {
	float *fd10ab7651; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class AIModule.*10267a802a
// Size: 0x88 (Inherited: 0x88)
struct U*10267a802a : UBTTaskNode {
};

// Class AIModule.*e97ae1499e
// Size: 0x90 (Inherited: 0x88)
struct U*e97ae1499e : U*10267a802a {
	struct U*fce0072588* Action; // 0x88(0x08)
};

// Class AIModule.*d683847876
// Size: 0x100 (Inherited: 0x88)
struct U*d683847876 : UBTTaskNode {
	struct UAnimationAsset* *bfa32de75a; // 0x88(0x08)
	char bLooping : 1; // 0x90(0x01)
	char *21a4c999cd : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UBehaviorTreeComponent* *6f3cd80763; // 0x98(0x08)
	struct USkeletalMeshComponent* *44fe632ad2; // 0xa0(0x08)
	char pad_A8[0x58]; // 0xa8(0x58)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* *d114c715f0; // 0x88(0x08)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x90 (Inherited: 0x88)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x88(0x08)
};

// Class AIModule.*d2941ca6fe
// Size: 0xa0 (Inherited: 0x88)
struct U*d2941ca6fe : UBTTaskNode {
	struct FGameplayTag *d4392652e5; // 0x88(0x08)
	struct UBehaviorTree* *fe4c8dff52; // 0x90(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x98(0x08)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x30 (Inherited: 0x30)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.CrowdManager
// Size: 0xf0 (Inherited: 0x30)
struct UCrowdManager : UObject {
	struct ANavigationData* *e412750adf; // 0x30(0x08)
	struct TArray<struct F*a866aa098d> AvoidanceConfig; // 0x38(0x10)
	struct TArray<struct F*546c99a93a> SamplingPatterns; // 0x48(0x10)
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
	struct FName *d354db79c1; // 0x38(0x08)
	struct TArray<struct UEnvQueryOption*> Options; // 0x40(0x10)
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char pad_30[0x8]; // 0x30(0x08)

	void ProvideSingleLocation(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation // Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const // @ game+0x22ddc4
	void ProvideLocationsSet(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x22ddc4
	void ProvideSingleActor(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x22ddc4
	void ProvideActorsSet(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x22ddc4
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.*163fd1ddcb
// Size: 0x30 (Inherited: 0x30)
struct U*163fd1ddcb : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x30 (Inherited: 0x30)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.*8f71a47536
// Size: 0x80 (Inherited: 0x30)
struct U*8f71a47536 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	int32 QueryID; // 0x38(0x04)
	char pad_3C[0x24]; // 0x3c(0x24)
	struct UClass* ItemType; // 0x60(0x08)
	int32 OptionIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FMulticastDelegate OnQueryFinishedEvent; // 0x70(0x10)

	void *ba63f807ed(); // Function AIModule.*8f71a47536.*ba63f807ed // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6249148
	void *72b148cfeb(); // Function AIModule.*8f71a47536.*72b148cfeb // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6249798
	void EQSQueryDoneSignature__DelegateSignature(); // DelegateFunction AIModule.*8f71a47536.EQSQueryDoneSignature__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void *87c728f743(); // Function AIModule.*8f71a47536.*87c728f743 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6249710
	void *272325b4e5(); // Function AIModule.*8f71a47536.*272325b4e5 // Final|Native|Public|BlueprintCallable // @ game+0x624bf8c
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
	struct TArray<struct F*4ac535c4d7> *10f164bc98; // 0xa8(0x10)
	struct TArray<struct UEnvQueryContext*> *aa84e41bf9; // 0xb8(0x10)
	struct TArray<struct U*8f71a47536*> *a0d8ec7cbf; // 0xc8(0x10)
	char pad_D8[0x54]; // 0xd8(0x54)
	float MaxAllowedTestingTime; // 0x12c(0x04)
	bool bTestQueriesUsingBreadth; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32 QueryCountWarningThreshold; // 0x134(0x04)
	double QueryCountWarningInterval; // 0x138(0x08)

	void RunEQSQuery(); // Function AIModule.EnvQueryManager.RunEQSQuery // Final|Native|Static|Public|BlueprintCallable // @ game+0x624a960
};

// Class AIModule.*3cdeb6bd03
// Size: 0x38 (Inherited: 0x30)
struct U*3cdeb6bd03 : UObject {
	int32 *cdfd0322fb; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x58 (Inherited: 0x38)
struct UEnvQueryGenerator : U*3cdeb6bd03 {
	struct FString OptionName; // 0x38(0x10)
	struct UClass* *fb89bc0044; // 0x48(0x08)
	char *a3a9d80337 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.*a3fd14efa4
// Size: 0xc8 (Inherited: 0x58)
struct U*a3fd14efa4 : UEnvQueryGenerator {
	struct UClass* *617a97e959; // 0x58(0x08)
	struct FAIDataProviderBoolValue *e4562882d8; // 0x60(0x30)
	struct FAIDataProviderFloatValue SearchRadius; // 0x90(0x30)
	struct UClass* *c1803703e4; // 0xc0(0x08)
};

// Class AIModule.*1c1b96a88e
// Size: 0x88 (Inherited: 0x58)
struct U*1c1b96a88e : UEnvQueryGenerator {
	struct FText *b8cc556455; // 0x58(0x18)
	struct UClass* Context; // 0x70(0x08)
	struct UClass* *8e798974cc; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)

	void *8747de6d12(); // Function AIModule.*1c1b96a88e.*8747de6d12 // Final|Native|Public|HasDefaults|BlueprintCallable|Const // @ game+0x6247244
	void *bd80e13231(); // Function AIModule.*1c1b96a88e.*bd80e13231 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x624949c
	void DoItemGeneration(); // Function AIModule.*1c1b96a88e.DoItemGeneration // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x22ddc4
	void *c5063734ed(); // Function AIModule.*1c1b96a88e.*c5063734ed // Final|Native|Public|BlueprintCallable|Const // @ game+0x62471b4
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70 (Inherited: 0x58)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x58(0x10)
	bool *f12a918a37; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class AIModule.*f1b1633e1f
// Size: 0x60 (Inherited: 0x58)
struct U*f1b1633e1f : UEnvQueryGenerator {
	struct UClass* *931b1b5129; // 0x58(0x08)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x88 (Inherited: 0x58)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData *dcd9f0f741; // 0x58(0x30)
};

// Class AIModule.*5de94d2ebd
// Size: 0x158 (Inherited: 0x88)
struct U*5de94d2ebd : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *539ea3ce05; // 0x88(0x30)
	struct FAIDataProviderFloatValue *5382831bfa; // 0xb8(0x30)
	struct FAIDataProviderFloatValue *7d96643ff4; // 0xe8(0x30)
	struct FAIDataProviderFloatValue Range; // 0x118(0x30)
	struct UClass* *bbeaf288d5; // 0x148(0x08)
	char *aa623663fc : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class AIModule.*d266d02a1b
// Size: 0x1b0 (Inherited: 0x88)
struct U*d266d02a1b : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x88(0x30)
	struct FAIDataProviderFloatValue OuterRadius; // 0xb8(0x30)
	struct FAIDataProviderIntValue *fbc9bb3650; // 0xe8(0x30)
	struct FAIDataProviderIntValue *dedf48bf45; // 0x118(0x30)
	struct FEnvDirection ArcDirection; // 0x148(0x20)
	struct FAIDataProviderFloatValue *153475f56e; // 0x168(0x30)
	bool *3d49332f91; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UClass* Center; // 0x1a0(0x08)
	char bDefineArc : 1; // 0x1a8(0x01)
	char pad_1A8_1 : 7; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x1f0 (Inherited: 0x88)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *0a23a851a6; // 0x88(0x30)
	struct FAIDataProviderFloatValue *8e39ffcb20; // 0xb8(0x30)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xe8(0x30)
	enum class *1dfa76b857 *be829a7b6c; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FEnvDirection ArcDirection; // 0x120(0x20)
	struct FAIDataProviderFloatValue *153475f56e; // 0x140(0x30)
	float *d01a05b302; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct UClass* *5090249023; // 0x178(0x08)
	bool *e444ecd97e; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FAIDataProviderFloatValue *8ddc087459; // 0x188(0x30)
	struct FEnvTraceData TraceData; // 0x1b8(0x30)
	char bDefineArc : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xf0 (Inherited: 0x88)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x88(0x30)
	struct FAIDataProviderFloatValue *8e39ffcb20; // 0xb8(0x30)
	struct UClass* *cec591678a; // 0xe8(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x158 (Inherited: 0xf0)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue *46bab01e57; // 0xf0(0x30)
	struct UClass* NavigationFilter; // 0x120(0x08)
	struct FAIDataProviderFloatValue *dc44382115; // 0x128(0x30)
};

// Class AIModule.EnvQueryTest
// Size: 0x1c8 (Inherited: 0x38)
struct UEnvQueryTest : U*3cdeb6bd03 {
	int32 *f4972e862b; // 0x38(0x04)
	enum class EEnvTestPurpose *212f57b384; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString *45ace0c605; // 0x40(0x10)
	enum class *2c56fdede6 *d7ff1da381; // 0x50(0x01)
	enum class *207bfa4cb0 *cfb700fbbe; // 0x51(0x01)
	enum class EEnvTestFilterType *9ec76caae2; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FAIDataProviderBoolValue *d4b293af0c; // 0x58(0x30)
	struct FAIDataProviderFloatValue *6cde0949ec; // 0x88(0x30)
	struct FAIDataProviderFloatValue *cc430685d1; // 0xb8(0x30)
	char pad_E8[0x1]; // 0xe8(0x01)
	enum class EEnvTestScoreEquation *7c07aad950; // 0xe9(0x01)
	enum class EEnvQueryTestClamping *b17ed9119d; // 0xea(0x01)
	enum class EEnvQueryTestClamping *08348b86f3; // 0xeb(0x01)
	enum class EEQSNormalizationType *21bad46c4b; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FAIDataProviderFloatValue *2bbe02554f; // 0xf0(0x30)
	struct FAIDataProviderFloatValue *58ea5d2b40; // 0x120(0x30)
	struct FAIDataProviderFloatValue *803a16d807; // 0x150(0x30)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x180(0x30)
	bool bDefineReferenceValue; // 0x1b0(0x01)
	char pad_1B1[0xf]; // 0x1b1(0x0f)
	char *489d15a6b1 : 1; // 0x1c0(0x01)
	char pad_1C0_1 : 7; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x1d8 (Inherited: 0x1c8)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class *e04dcc3fbf *c3969de01d; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UClass* DistanceTo; // 0x1d0(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x210 (Inherited: 0x1c8)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection *0212e09bd7; // 0x1c8(0x20)
	struct FEnvDirection *41524a5ed7; // 0x1e8(0x20)
	enum class *5d2337e19c *c3969de01d; // 0x208(0x01)
	bool *fda5fb6ea4; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
};

// Class AIModule.*e879405927
// Size: 0x238 (Inherited: 0x1c8)
struct U*e879405927 : UEnvQueryTest {
	struct FGameplayTagQuery *779d8b0447; // 0x1c8(0x48)
	bool *6babcee7b8; // 0x210(0x01)
	enum class EGameplayContainerMatchType *6bec836d85; // 0x211(0x01)
	char pad_212[0x6]; // 0x212(0x06)
	struct FGameplayTagContainer GameplayTags; // 0x218(0x20)
};

// Class AIModule.*ffabba2087
// Size: 0x1e8 (Inherited: 0x1c8)
struct U*ffabba2087 : UEnvQueryTest {
	struct F*9fd1a392bd *6b6f19f921; // 0x1c8(0x20)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x240 (Inherited: 0x1c8)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding *c3969de01d; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UClass* Context; // 0x1d0(0x08)
	struct FAIDataProviderBoolValue *241ae00917; // 0x1d8(0x30)
	struct FAIDataProviderBoolValue *32b52bd88a; // 0x208(0x30)
	struct UClass* *a2da6fc5f4; // 0x238(0x08)
};

// Class AIModule.*9eef1f1643
// Size: 0x270 (Inherited: 0x240)
struct U*9eef1f1643 : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue *dc44382115; // 0x240(0x30)
};

// Class AIModule.*c15909af39
// Size: 0x1f8 (Inherited: 0x1c8)
struct U*c15909af39 : UEnvQueryTest {
	struct FEnvTraceData *dcd9f0f741; // 0x1c8(0x30)
};

// Class AIModule.*38cb09c781
// Size: 0x1c8 (Inherited: 0x1c8)
struct U*38cb09c781 : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x290 (Inherited: 0x1c8)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x1c8(0x30)
	struct FAIDataProviderBoolValue *1a456552ba; // 0x1f8(0x30)
	struct FAIDataProviderFloatValue *15d1a7482e; // 0x228(0x30)
	struct FAIDataProviderFloatValue *a8bcaad4f0; // 0x258(0x30)
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
// Size: 0x8f0 (Inherited: 0x880)
struct AEQSTestingPawn : ACharacter {
	char pad_880[0x8]; // 0x880(0x08)
	struct UEnvQuery* *2c8ffe8dea; // 0x888(0x08)
	struct TArray<struct FEnvNamedValue> *c32d9e67f9; // 0x890(0x10)
	struct TArray<struct F*bfa5db6008> *880248475e; // 0x8a0(0x10)
	float *f06f2889e6; // 0x8b0(0x04)
	int32 *61806f813d; // 0x8b4(0x04)
	enum class EEnvQueryHightlightMode *3a0ec6748d; // 0x8b8(0x01)
	char pad_8B9[0x3]; // 0x8b9(0x03)
	char *85e9c279e0 : 1; // 0x8bc(0x01)
	char *5b448194f7 : 1; // 0x8bc(0x01)
	char *9c3c880797 : 1; // 0x8bc(0x01)
	char *8427b0c737 : 1; // 0x8bc(0x01)
	char *34b2062b93 : 1; // 0x8bc(0x01)
	char pad_8BC_5 : 3; // 0x8bc(0x01)
	char pad_8BD[0x3]; // 0x8bd(0x03)
	enum class EEnvQueryRunMode *341ab1d553; // 0x8c0(0x01)
	char pad_8C1[0x2f]; // 0x8c1(0x2f)
};

// Class AIModule.*205cf34bba
// Size: 0x50 (Inherited: 0x50)
struct U*205cf34bba : U*7faddb26b3 {
};

// Class AIModule.*d2a9631777
// Size: 0x60 (Inherited: 0x30)
struct U*d2a9631777 : UObject {
	char pad_30[0x30]; // 0x30(0x30)

	void *e66440486b(); // Function AIModule.*d2a9631777.*e66440486b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x62479cc
	void *a1fc938dec(); // Function AIModule.*d2a9631777.*a1fc938dec // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6247ebc
	void *7fc10dc553(); // Function AIModule.*d2a9631777.*7fc10dc553 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6247580
	void *3d0158784f(); // Function AIModule.*d2a9631777.*3d0158784f // Final|Native|Static|Public|BlueprintCallable // @ game+0x624a734
	void *4678ac3daa(); // Function AIModule.*d2a9631777.*4678ac3daa // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x62472e4
	void *65efda4fce(); // Function AIModule.*d2a9631777.*65efda4fce // Final|Native|Static|Public|BlueprintCallable // @ game+0x624beac
	void *f19825f828(); // Function AIModule.*d2a9631777.*f19825f828 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x62477f4
};

// Class AIModule.*7046b266c8
// Size: 0x500 (Inherited: 0x4d0)
struct U*7046b266c8 : UPathFollowingComponent {
	struct U*d2a9631777* *2b0e39940c; // 0x4c8(0x08)
	char pad_4D8[0x28]; // 0x4d8(0x28)
};

// Class AIModule.*fce0072588
// Size: 0xd0 (Inherited: 0x30)
struct U*fce0072588 : UObject {
	struct U*fce0072588* *a30a81d34d; // 0x30(0x08)
	struct U*fce0072588* *3f1819a703; // 0x38(0x08)
	struct U*5750687860* *75104f4396; // 0x40(0x08)
	struct UObject* Instigator; // 0x48(0x08)
	struct UBrainComponent* *409ccbdde3; // 0x50(0x08)
	char pad_58[0x60]; // 0x58(0x60)
	char bAllowNewSameClassInstance : 1; // 0xb8(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0xb8(0x01)
	char bShouldPauseMovement : 1; // 0xb8(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0xb8(0x01)
	char pad_B8_4 : 4; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)

	void *6e0eecc1ae(); // Function AIModule.*fce0072588.*6e0eecc1ae // Final|Native|Static|Public|BlueprintCallable // @ game+0x6247de0
	void Finish(); // Function AIModule.*fce0072588.Finish // Native|Protected|BlueprintCallable // @ game+0x62480a8
	void *6744b6ccde(); // Function AIModule.*fce0072588.*6744b6ccde // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x62481f0
};

// Class AIModule.*c5c050c2c4
// Size: 0xd0 (Inherited: 0xd0)
struct U*c5c050c2c4 : U*fce0072588 {

	void ActionTick(); // Function AIModule.*c5c050c2c4.ActionTick // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ActionResume(); // Function AIModule.*c5c050c2c4.ActionResume // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ActionStart(); // Function AIModule.*c5c050c2c4.ActionStart // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ActionPause(); // Function AIModule.*c5c050c2c4.ActionPause // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ActionFinished(); // Function AIModule.*c5c050c2c4.ActionFinished // Event|Public|BlueprintEvent // @ game+0x22ddc4
};

// Class AIModule.*0fb9fa39ab
// Size: 0x120 (Inherited: 0xd0)
struct U*0fb9fa39ab : U*fce0072588 {
	struct AActor* GoalActor; // 0xd0(0x08)
	struct FVector GoalLocation; // 0xd8(0x0c)
	float AcceptableRadius; // 0xe4(0x04)
	struct UClass* FilterClass; // 0xe8(0x08)
	char bAllowStrafe : 1; // 0xf0(0x01)
	char *55f5ffb523 : 1; // 0xf0(0x01)
	char *2f0d9a1900 : 1; // 0xf0(0x01)
	char *f942b5de7a : 1; // 0xf0(0x01)
	char *264b90c995 : 1; // 0xf0(0x01)
	char *33b0e605a2 : 1; // 0xf0(0x01)
	char *cd81c6498b : 1; // 0xf0(0x01)
	char pad_F0_7 : 1; // 0xf0(0x01)
	char pad_F1[0x2f]; // 0xf1(0x2f)
};

// Class AIModule.*354b49da05
// Size: 0xf0 (Inherited: 0xd0)
struct U*354b49da05 : U*fce0072588 {
	struct U*fce0072588* *319cb45091; // 0xd0(0x08)
	struct U*fce0072588* *2b041e3e25; // 0xd8(0x08)
	enum class *ced16c6ad4 ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// Class AIModule.*56cd1e31a6
// Size: 0x100 (Inherited: 0xd0)
struct U*56cd1e31a6 : U*fce0072588 {
	struct TArray<struct U*fce0072588*> *23379450cb; // 0xd0(0x10)
	enum class *ced16c6ad4 ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct U*fce0072588* *2b041e3e25; // 0xe8(0x08)
	char pad_F0[0x10]; // 0xf0(0x10)
};

// Class AIModule.*6637979398
// Size: 0xe0 (Inherited: 0xd0)
struct U*6637979398 : U*fce0072588 {
	float *d0cdd32f75; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
};

// Class AIModule.*5750687860
// Size: 0x240 (Inherited: 0x200)
struct U*5750687860 : UActorComponent {
	struct APawn* ControlledPawn; // 0x200(0x08)
	struct TArray<struct F*1143e2dc2f> *fa68601003; // 0x208(0x10)
	struct TArray<struct F*258ef4b785> *01f1255adc; // 0x218(0x10)
	struct U*fce0072588* *45f65fe30e; // 0x228(0x08)
	char pad_230[0x10]; // 0x230(0x10)

	void *09af6c21df(); // Function AIModule.*5750687860.*09af6c21df // Final|Native|Public|BlueprintCallable // @ game+0x624a5fc
	void *ab8a9185b9(); // Function AIModule.*5750687860.*ab8a9185b9 // Final|Native|Public|BlueprintCallable // @ game+0x624a430
	void *096dd7b028(); // Function AIModule.*5750687860.*096dd7b028 // Final|Native|Static|Public|BlueprintCallable // @ game+0x624a4c8
	void *1aae6113b0(); // Function AIModule.*5750687860.*1aae6113b0 // Final|Native|Public|BlueprintCallable // @ game+0x624a388
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
	float *50fa6620af; // 0x244(0x04)
	char pad_248[0x8]; // 0x248(0x08)

	void *fa00991aed(); // Function AIModule.PawnSensingComponent.*fa00991aed // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x624c138
	void *c8a174403f(); // Function AIModule.PawnSensingComponent.*c8a174403f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6249484
	void *56124d2fd9(); // Function AIModule.PawnSensingComponent.*56124d2fd9 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x624c09c
	void *64247500ee(); // Function AIModule.PawnSensingComponent.*64247500ee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x624946c
	void *c82bbc6be3(); // Function AIModule.PawnSensingComponent.*c82bbc6be3 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x624c1d4
	void SeePawnDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void HearNoiseDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x22ddc4
};

// Class AIModule.*11c8d0f96d
// Size: 0x30 (Inherited: 0x30)
struct U*11c8d0f96d : UObject {
};


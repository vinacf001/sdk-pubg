// Class AIModule.BTNode
// Size: 0x68 (Inherited: 0x28)
struct UBTNode : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString NodeName; // 0x30(0x10)
	struct FString Tag; // 0x40(0x10)
	struct UBehaviorTree* *6a2f2d4d5d; // 0x50(0x08)
	struct UBTCompositeNode* *295966c944; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class AIModule.BTTaskNode
// Size: 0x80 (Inherited: 0x68)
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; // 0x68(0x10)
	char *3afbfbcd22 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AIModule.AISense
// Size: 0x120 (Inherited: 0x28)
struct UAISense : UObject {
	float DefaultExpirationAge; // 0x28(0x04)
	enum class *6b301790d1 NotifyType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	char bWantsNewPawnNotification : 1; // 0x30(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAIPerceptionSystem* *c47b88183f; // 0x38(0x08)
	char pad_40[0xe0]; // 0x40(0xe0)
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
// Size: 0x48 (Inherited: 0x28)
struct U*81954aace3 : UObject {
	struct FColor DebugColor; // 0x28(0x04)
	float MaxAge; // 0x2c(0x04)
	char bStartsEnabled : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x17]; // 0x31(0x17)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x60 (Inherited: 0x48)
struct UAISenseConfig_Hearing : U*81954aace3 {
	struct UClass* Implementation; // 0x48(0x08)
	float HearingRange; // 0x50(0x04)
	float LoSHearingRange; // 0x54(0x04)
	char bUseLoSHearing : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct F*eab45cfa59 DetectionByAffiliation; // 0x5c(0x04)
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x68 (Inherited: 0x48)
struct UAISenseConfig_Sight : U*81954aace3 {
	struct UClass* Implementation; // 0x48(0x08)
	float SightRadius; // 0x50(0x04)
	float LoseSightRadius; // 0x54(0x04)
	float PeripheralVisionAngleDegrees; // 0x58(0x04)
	struct F*eab45cfa59 DetectionByAffiliation; // 0x5c(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class AIModule.BlackboardComponent
// Size: 0x2f0 (Inherited: 0x1f0)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* *409ccbdde3; // 0x1f0(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x1f8(0x08)
	char pad_200[0x20]; // 0x200(0x20)
	struct TArray<struct UBlackboardKeyType*> *59aa6d1aed; // 0x220(0x10)
	char pad_230[0xc0]; // 0x230(0xc0)

	void *94ad0dda03(struct FName KeyName); // Function AIModule.BlackboardComponent.*94ad0dda03 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3b0a4
	struct FVector *0bfb2f7afd(); // Function AIModule.BlackboardComponent.*0bfb2f7afd // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3a478
	struct FName *3b71c606b4(); // Function AIModule.BlackboardComponent.*3b71c606b4 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3ac54
	void *58e35476fa(struct FName KeyName); // Function AIModule.BlackboardComponent.*58e35476fa // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3adc4
	void *075fbd68c6(); // Function AIModule.BlackboardComponent.*075fbd68c6 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3b28c
	struct FName *86cc9b2591(); // Function AIModule.BlackboardComponent.*86cc9b2591 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3ab9c
	void *89b48d02d4(struct FName KeyName); // Function AIModule.BlackboardComponent.*89b48d02d4 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e3d500
	void *cb7be3f4a8(struct FName KeyName); // Function AIModule.BlackboardComponent.*cb7be3f4a8 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e3da08
	struct FName *405818cbdb(); // Function AIModule.BlackboardComponent.*405818cbdb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e3db08
	void *4e08c7b05e(); // Function AIModule.BlackboardComponent.*4e08c7b05e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e38fac
	void *12928bb838(); // Function AIModule.BlackboardComponent.*12928bb838 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3afec
	void *9e535e6d72(); // Function AIModule.BlackboardComponent.*9e535e6d72 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e3d600
	struct FName *ab9e5cdf1f(); // Function AIModule.BlackboardComponent.*ab9e5cdf1f // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3ae7c
	struct FName *563ff39ee4(); // Function AIModule.BlackboardComponent.*563ff39ee4 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e3dd84
	void *515ad51661(struct FRotator ResultRotation); // Function AIModule.BlackboardComponent.*515ad51661 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3a9b0
	struct FName *f1be75ee9e(); // Function AIModule.BlackboardComponent.*f1be75ee9e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3b42c
	struct FName *06afae9efe(); // Function AIModule.BlackboardComponent.*06afae9efe // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e3dc20
	void *7d505ab534(); // Function AIModule.BlackboardComponent.*7d505ab534 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e3d700
	void *b06b07db14(struct FName KeyName); // Function AIModule.BlackboardComponent.*b06b07db14 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3af34
	struct FName *b36f8f9501(); // Function AIModule.BlackboardComponent.*b36f8f9501 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e3d808
	struct FName *c6625e01fa(); // Function AIModule.BlackboardComponent.*c6625e01fa // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e3d908
	void *6dda1fc140(); // Function AIModule.BlackboardComponent.*6dda1fc140 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e3d3fc
	struct FName *bd79557a83(); // Function AIModule.BlackboardComponent.*bd79557a83 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3ad0c
	struct FName *2587dab987(); // Function AIModule.BlackboardComponent.*2587dab987 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3b170
};

// Class AIModule.PathFollowingComponent
// Size: 0x4c0 (Inherited: 0x1f0)
struct UPathFollowingComponent : UActorComponent {
	char pad_1F0[0x130]; // 0x1f0(0x130)
	struct UNavMovementComponent* MovementComp; // 0x320(0x08)
	char pad_328[0x8]; // 0x328(0x08)
	struct ANavigationData* *e412750adf; // 0x330(0x08)
	char pad_338[0x188]; // 0x338(0x188)

	void *84acdfdba8(); // Function AIModule.PathFollowingComponent.*84acdfdba8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3501c
	void OnNavDataRegistered(); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // Final|Native|Protected // @ game+0x5e36150
	void OnActorBump(struct AActor* Param1); // Function AIModule.PathFollowingComponent.OnActorBump // Native|Public|HasOutParms|HasDefaults // @ game+0x5e35dd4
	void *7778d3a8c9(); // Function AIModule.PathFollowingComponent.*7778d3a8c9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e35098
};

// Class AIModule.*c052b925d4
// Size: 0x28 (Inherited: 0x28)
struct U*c052b925d4 : UInterface {
};

// Class AIModule.AIController
// Size: 0x500 (Inherited: 0x470)
struct AAIController : AController {
	char pad_470[0x38]; // 0x470(0x38)
	char bStopAILogicOnUnposses : 1; // 0x4a8(0x01)
	char *97c1252c2c : 1; // 0x4a8(0x01)
	char *8fd7a1bc1b : 1; // 0x4a8(0x01)
	char *ca527bbb9d : 1; // 0x4a8(0x01)
	char *4b8de6844a : 1; // 0x4a8(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4a8(0x01)
	char pad_4A8_6 : 2; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x4b0(0x08)
	struct UBrainComponent* BrainComponent; // 0x4b8(0x08)
	struct UAIPerceptionComponent* *48ae6b3f42; // 0x4c0(0x08)
	struct U*5750687860* ActionsComp; // 0x4c8(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4d0(0x08)
	struct UGameplayTasksComponent* *8e756889fb; // 0x4d8(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x4e0(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x4e8(0x10)
	char pad_4F8[0x8]; // 0x4f8(0x08)

	void RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x5e36d4c
	void OnGameplayTaskResourcesClaimed(); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x5e35f94
	void OnUnpossess(); // Function AIModule.AIController.OnUnpossess // Event|Public|BlueprintEvent // @ game+0x1e037c
	void OnPossess(); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x1e037c
	void UseBlackboard(struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e37508
	void *ceeb0b0cbd(); // Function AIModule.AIController.*ceeb0b0cbd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34d5c
	void *b175c1078b(); // Function AIModule.AIController.*b175c1078b // Final|Native|Public|BlueprintCallable // @ game+0x5e34554
	void K2_SetFocalPoint(); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5e355d4
	void *f14cd3ffb7(); // Function AIModule.AIController.*f14cd3ffb7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34e48
	void K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x5e3567c
	void *5aed30e03a(); // Function AIModule.AIController.*5aed30e03a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e350cc
	bool *8d0ebecd62(bool bUsePathfinding, bool bCanStrafe, bool bAllowPartialPath); // Function AIModule.AIController.*8d0ebecd62 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e35adc
	void *28327cf9b0(); // Function AIModule.AIController.*28327cf9b0 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e34894
	void *61f84da4d3(); // Function AIModule.AIController.*61f84da4d3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34e6c
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x5e355b8
	void *742f53ad3b(struct AActor* Actor); // Function AIModule.AIController.*742f53ad3b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34d90
	void *09f1d95f4a(); // Function AIModule.AIController.*09f1d95f4a // Final|Native|Public|BlueprintCallable // @ game+0x5e36fb4
	struct UClass* *a0e347c1be(bool bAllowPartialPath); // Function AIModule.AIController.*a0e347c1be // Final|Native|Public|BlueprintCallable // @ game+0x5e35844
	void OnUsingBlackBoard(); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void *69da0c9c2b(); // Function AIModule.AIController.*69da0c9c2b // Final|Native|Public|BlueprintCallable // @ game+0x5e372a4
	void *e3643c4ff6(); // Function AIModule.AIController.*e3643c4ff6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34ff4
	void *fb081ec689(); // Function AIModule.AIController.*fb081ec689 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e35300
};

// Class AIModule.BlackboardKeyType
// Size: 0x30 (Inherited: 0x28)
struct UBlackboardKeyType : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class AIModule.BTAuxiliaryNode
// Size: 0x70 (Inherited: 0x68)
struct UBTAuxiliaryNode : UBTNode {
	struct FString NodeName; // 0x30(0x10)
	struct FString Tag; // 0x40(0x10)
	struct UBehaviorTree* *6a2f2d4d5d; // 0x50(0x08)
	struct UBTCompositeNode* *295966c944; // 0x58(0x08)
};

// Class AIModule.BTDecorator
// Size: 0x78 (Inherited: 0x70)
struct UBTDecorator : UBTAuxiliaryNode {
	char pad_70_0 : 7; // 0x70(0x01)
	char *3e87395321 : 1; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class AIModule.BTDecorator_BlackboardBase
// Size: 0xa0 (Inherited: 0x78)
struct UBTDecorator_BlackboardBase : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x28)
};

// Class AIModule.BTDecorator_Blackboard
// Size: 0xd0 (Inherited: 0xa0)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32 IntValue; // 0xa0(0x04)
	float FloatValue; // 0xa4(0x04)
	struct FString StringValue; // 0xa8(0x10)
	struct FString *4f0a8f002f; // 0xb8(0x10)
	bool OperationType; // 0xc8(0x01)
	enum class *938033f8bb NotifyObserver; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
};

// Class AIModule.BTService
// Size: 0x80 (Inherited: 0x70)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x70(0x04)
	float *7a4ce0097b; // 0x74(0x04)
	char *d3a934d5d9 : 1; // 0x78(0x01)
	char *8f685d3d00 : 1; // 0x78(0x01)
	char pad_78_2 : 6; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AIModule.BTService_BlackboardBase
// Size: 0xa8 (Inherited: 0x80)
struct UBTService_BlackboardBase : UBTService {
	struct FBlackboardKeySelector BlackboardKey; // 0x80(0x28)
};

// Class AIModule.BTService_DefaultFocus
// Size: 0xb0 (Inherited: 0xa8)
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	bool *e2491db427; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AIModule.AIPerceptionComponent
// Size: 0x2d0 (Inherited: 0x1f0)
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct U*81954aace3*> *6588aceefc; // 0x1f0(0x10)
	struct UClass* *679c5b2bfe; // 0x200(0x08)
	char pad_208[0x10]; // 0x208(0x10)
	struct AAIController* *2915bdac5c; // 0x218(0x08)
	char pad_220[0x80]; // 0x220(0x80)
	struct FMulticastDelegate OnPerceptionUpdated; // 0x2a0(0x10)
	struct FMulticastDelegate OnTargetPerceptionUpdated; // 0x2b0(0x10)
	char pad_2C0[0x10]; // 0x2c0(0x10)

	void *420d22d223(); // Function AIModule.AIPerceptionComponent.*420d22d223 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e350e4
	void *d9d5e58cda(struct F*e8992fdd58 Info); // Function AIModule.AIPerceptionComponent.*d9d5e58cda // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e348ac
	struct UClass* *3f343a184f(); // Function AIModule.AIPerceptionComponent.*3f343a184f // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34ed4
	void *a7a8847700(struct UClass* SenseToUse); // Function AIModule.AIPerceptionComponent.*a7a8847700 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34c3c
	void *6000a05a68(); // Function AIModule.AIPerceptionComponent.*6000a05a68 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34c3c
	struct AActor* OnOwnerEndPlay(); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // Final|Native|Public // @ game+0x5e361e0
	void *60e13874b3(); // Function AIModule.AIPerceptionComponent.*60e13874b3 // Final|Native|Public|BlueprintCallable // @ game+0x5e36d38
};

// Class AIModule.BTTask_BlackboardBase
// Size: 0xa8 (Inherited: 0x80)
struct UBTTask_BlackboardBase : UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey; // 0x80(0x28)
};

// Class AIModule.BTTask_MoveTo
// Size: 0xc0 (Inherited: 0xa8)
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UClass* *a2da6fc5f4; // 0xb0(0x08)
	float *60a110fa86; // 0xb8(0x04)
	char bObserveBlackboardValue : 1; // 0xbc(0x01)
	char *ca527bbb9d : 1; // 0xbc(0x01)
	char *f942b5de7a : 1; // 0xbc(0x01)
	char *e0fe01c056 : 1; // 0xbc(0x01)
	char *34d55b84f3 : 1; // 0xbc(0x01)
	char *886a8a58b0 : 1; // 0xbc(0x01)
	char pad_BC_6 : 2; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
};

// Class AIModule.BTTask_Wait
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_Wait : UBTTaskNode {
	float *de6e50ee5a; // 0x80(0x04)
	float *7a4ce0097b; // 0x84(0x04)
};

// Class AIModule.*8a86a45dc3
// Size: 0x90 (Inherited: 0x80)
struct U*8a86a45dc3 : UBTTaskNode {
	struct FGameplayTag *0ca9fed388; // 0x80(0x08)
	bool *3a60b15fc6; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float *d8d5f031e5; // 0x8c(0x04)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xc8 (Inherited: 0xc0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xc0(0x01)
	char *48bf5c8b48 : 1; // 0xc0(0x01)
	char *d7d7cad95c : 1; // 0xc0(0x01)
	char pad_C0_3 : 5; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class AIModule.*2a0c222999
// Size: 0xb0 (Inherited: 0x88)
struct U*2a0c222999 : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; // 0x88(0x28)
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x510 (Inherited: 0x4c0)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	struct FVector *088d42d6a0; // 0x4c0(0x0c)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct UCharacterMovementComponent* CharacterMovement; // 0x4d0(0x08)
	struct F*4c8082789d AvoidanceGroup; // 0x4d8(0x04)
	struct F*4c8082789d GroupsToAvoid; // 0x4dc(0x04)
	struct F*4c8082789d GroupsToIgnore; // 0x4e0(0x04)
	char pad_4E4[0x2c]; // 0x4e4(0x2c)

	void *5fa1e8b41f(); // Function AIModule.CrowdFollowingComponent.*5fa1e8b41f // Native|Public|BlueprintCallable // @ game+0x5e3e01c
};

// Class AIModule.BTService_BlueprintBase
// Size: 0xa8 (Inherited: 0x80)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* *2915bdac5c; // 0x80(0x08)
	struct AActor* *ff5af5a4a3; // 0x88(0x08)
	char pad_90[0x10]; // 0x90(0x10)
	char *2b415a8e25 : 1; // 0xa0(0x01)
	char *320bd4cfdc : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	void ReceiveDeactivation(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveActivation(); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // Event|Protected|BlueprintEvent // @ game+0x1e037c
	struct AActor* ReceiveTick(); // Function AIModule.BTService_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveTickAI(struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveSearchStart(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // Event|Protected|BlueprintEvent // @ game+0x1e037c
	struct AAIController* ReceiveActivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveSearchStartAI(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void *7f870e532c(); // Function AIModule.BTService_BlueprintBase.*7f870e532c // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3b3c8
	struct AAIController* ReceiveDeactivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xb0 (Inherited: 0x80)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* *2915bdac5c; // 0x80(0x08)
	struct AActor* *ff5af5a4a3; // 0x88(0x08)
	char pad_90[0x18]; // 0x90(0x18)
	char *2b415a8e25 : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	struct AAIController* ReceiveAbortAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void *a3662677a6(); // Function AIModule.BTTask_BlueprintBase.*a3662677a6 // Final|Native|Protected|BlueprintCallable // @ game+0x5e393d0
	void ReceiveAbort(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // Event|Protected|BlueprintEvent // @ game+0x1e037c
	struct AActor* ReceiveTick(); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveExecute(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void *3fa1af4cc3(); // Function AIModule.BTTask_BlueprintBase.*3fa1af4cc3 // Final|Native|Protected|BlueprintCallable // @ game+0x5e3ced0
	void *7f62d84e0d(); // Function AIModule.BTTask_BlueprintBase.*7f62d84e0d // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3b3ec
	struct FName *5e8022baaf(); // Function AIModule.BTTask_BlueprintBase.*5e8022baaf // Final|Native|Protected|BlueprintCallable // @ game+0x5e3cf60
	struct AAIController* ReceiveExecuteAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void *0aa5fa8916(); // Function AIModule.BTTask_BlueprintBase.*0aa5fa8916 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3b408
	void *d76e32b6ce(); // Function AIModule.BTTask_BlueprintBase.*d76e32b6ce // Final|Native|Protected|BlueprintCallable // @ game+0x5e393bc
	struct APawn* ReceiveTickAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
};

// Class AIModule.AIResourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UAIResourceInterface : UInterface {
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x68 (Inherited: 0x28)
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastDelegate OnFail; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)

	struct F*a2e19e07de OnMoveCompleted(); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // Final|Native|Public // @ game+0x5e36074
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {
};

// Class AIModule.*19312c13a4
// Size: 0x28 (Inherited: 0x28)
struct U*19312c13a4 : UInterface {
};

// Class AIModule.*734364720c
// Size: 0x28 (Inherited: 0x28)
struct U*734364720c : UInterface {
};

// Class AIModule.DetourCrowdAIController
// Size: 0x500 (Inherited: 0x500)
struct ADetourCrowdAIController : AAIController {
	char bStopAILogicOnUnposses : 1; // 0x4a8(0x01)
	char *97c1252c2c : 1; // 0x4a8(0x01)
	char *8fd7a1bc1b : 1; // 0x4a8(0x01)
	char *ca527bbb9d : 1; // 0x4a8(0x01)
	char *4b8de6844a : 1; // 0x4a8(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4a8(0x01)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x4b0(0x08)
	struct UBrainComponent* BrainComponent; // 0x4b8(0x08)
	struct UAIPerceptionComponent* *48ae6b3f42; // 0x4c0(0x08)
	struct U*5750687860* ActionsComp; // 0x4c8(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4d0(0x08)
	struct UGameplayTasksComponent* *8e756889fb; // 0x4d8(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x4e0(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x4e8(0x10)

	void RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x5e36d4c
	void OnGameplayTaskResourcesClaimed(); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x5e35f94
	void OnUnpossess(); // Function AIModule.AIController.OnUnpossess // Event|Public|BlueprintEvent // @ game+0x1e037c
	void OnPossess(); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x1e037c
	void UseBlackboard(struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e37508
	void *ceeb0b0cbd(); // Function AIModule.AIController.*ceeb0b0cbd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34d5c
	void *b175c1078b(); // Function AIModule.AIController.*b175c1078b // Final|Native|Public|BlueprintCallable // @ game+0x5e34554
	void K2_SetFocalPoint(); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5e355d4
	void *f14cd3ffb7(); // Function AIModule.AIController.*f14cd3ffb7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34e48
	void K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x5e3567c
	void *5aed30e03a(); // Function AIModule.AIController.*5aed30e03a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e350cc
	bool *8d0ebecd62(bool bUsePathfinding, bool bCanStrafe, bool bAllowPartialPath); // Function AIModule.AIController.*8d0ebecd62 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e35adc
	void *28327cf9b0(); // Function AIModule.AIController.*28327cf9b0 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e34894
	void *61f84da4d3(); // Function AIModule.AIController.*61f84da4d3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34e6c
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x5e355b8
	void *742f53ad3b(struct AActor* Actor); // Function AIModule.AIController.*742f53ad3b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34d90
	void *09f1d95f4a(); // Function AIModule.AIController.*09f1d95f4a // Final|Native|Public|BlueprintCallable // @ game+0x5e36fb4
	struct UClass* *a0e347c1be(bool bAllowPartialPath); // Function AIModule.AIController.*a0e347c1be // Final|Native|Public|BlueprintCallable // @ game+0x5e35844
	void OnUsingBlackBoard(); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void *69da0c9c2b(); // Function AIModule.AIController.*69da0c9c2b // Final|Native|Public|BlueprintCallable // @ game+0x5e372a4
	void *e3643c4ff6(); // Function AIModule.AIController.*e3643c4ff6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34ff4
	void *fb081ec689(); // Function AIModule.AIController.*fb081ec689 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e35300
};

// Class AIModule.GridPathAIController
// Size: 0x500 (Inherited: 0x500)
struct AGridPathAIController : AAIController {
	char bStopAILogicOnUnposses : 1; // 0x4a8(0x01)
	char *97c1252c2c : 1; // 0x4a8(0x01)
	char *8fd7a1bc1b : 1; // 0x4a8(0x01)
	char *ca527bbb9d : 1; // 0x4a8(0x01)
	char *4b8de6844a : 1; // 0x4a8(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4a8(0x01)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x4b0(0x08)
	struct UBrainComponent* BrainComponent; // 0x4b8(0x08)
	struct UAIPerceptionComponent* *48ae6b3f42; // 0x4c0(0x08)
	struct U*5750687860* ActionsComp; // 0x4c8(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4d0(0x08)
	struct UGameplayTasksComponent* *8e756889fb; // 0x4d8(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x4e0(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x4e8(0x10)

	void RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x5e36d4c
	void OnGameplayTaskResourcesClaimed(); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x5e35f94
	void OnUnpossess(); // Function AIModule.AIController.OnUnpossess // Event|Public|BlueprintEvent // @ game+0x1e037c
	void OnPossess(); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x1e037c
	void UseBlackboard(struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e37508
	void *ceeb0b0cbd(); // Function AIModule.AIController.*ceeb0b0cbd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34d5c
	void *b175c1078b(); // Function AIModule.AIController.*b175c1078b // Final|Native|Public|BlueprintCallable // @ game+0x5e34554
	void K2_SetFocalPoint(); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5e355d4
	void *f14cd3ffb7(); // Function AIModule.AIController.*f14cd3ffb7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34e48
	void K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x5e3567c
	void *5aed30e03a(); // Function AIModule.AIController.*5aed30e03a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e350cc
	bool *8d0ebecd62(bool bUsePathfinding, bool bCanStrafe, bool bAllowPartialPath); // Function AIModule.AIController.*8d0ebecd62 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e35adc
	void *28327cf9b0(); // Function AIModule.AIController.*28327cf9b0 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e34894
	void *61f84da4d3(); // Function AIModule.AIController.*61f84da4d3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34e6c
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x5e355b8
	void *742f53ad3b(struct AActor* Actor); // Function AIModule.AIController.*742f53ad3b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34d90
	void *09f1d95f4a(); // Function AIModule.AIController.*09f1d95f4a // Final|Native|Public|BlueprintCallable // @ game+0x5e36fb4
	struct UClass* *a0e347c1be(bool bAllowPartialPath); // Function AIModule.AIController.*a0e347c1be // Final|Native|Public|BlueprintCallable // @ game+0x5e35844
	void OnUsingBlackBoard(); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void *69da0c9c2b(); // Function AIModule.AIController.*69da0c9c2b // Final|Native|Public|BlueprintCallable // @ game+0x5e372a4
	void *e3643c4ff6(); // Function AIModule.AIController.*e3643c4ff6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34ff4
	void *fb081ec689(); // Function AIModule.AIController.*fb081ec689 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e35300
};

// Class AIModule.*693910efed
// Size: 0x28 (Inherited: 0x28)
struct U*693910efed : UObject {
};

// Class AIModule.*87122ce70f
// Size: 0x40 (Inherited: 0x28)
struct U*87122ce70f : U*693910efed {
	struct FName ParamName; // 0x28(0x08)
	float FloatValue; // 0x30(0x04)
	int32 IntValue; // 0x34(0x04)
	bool *d4b293af0c; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class AIModule.*4247dc29e1
// Size: 0x50 (Inherited: 0x40)
struct U*4247dc29e1 : U*87122ce70f {
	float Min; // 0x40(0x04)
	float Max; // 0x44(0x04)
	char *19b9ab86c0 : 1; // 0x48(0x01)
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
	struct TArray<struct UAISense*> *50ac497e20; // 0x80(0x10)
	float PerceptionAgingRate; // 0x90(0x04)
	char pad_94[0x9c]; // 0x94(0x9c)

	struct UObject* *5474241f97(); // Function AIModule.AIPerceptionSystem.*5474241f97 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e36a20
	struct UObject* *8560befb93(); // Function AIModule.AIPerceptionSystem.*8560befb93 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e351b0
	void *51969abfa1(); // Function AIModule.AIPerceptionSystem.*51969abfa1 // Final|Native|Public|BlueprintCallable // @ game+0x5e3677c
	struct AActor* *1543cec135(); // Function AIModule.AIPerceptionSystem.*1543cec135 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e36424
	struct AActor* OnPerceptionStimuliSourceEndPlay(); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // Final|Native|Protected // @ game+0x5e362c4
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x210 (Inherited: 0x1f0)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct TArray<struct UClass*> RegisterAsSourceForSenses; // 0x1f8(0x10)
	char pad_208[0x8]; // 0x208(0x08)

	void *9960961727(); // Function AIModule.AIPerceptionStimuliSourceComponent.*9960961727 // Final|Native|Public|BlueprintCallable // @ game+0x5e36394
	void *03d6b78988(); // Function AIModule.AIPerceptionStimuliSourceComponent.*03d6b78988 // Final|Native|Public|BlueprintCallable // @ game+0x5e37478
	void *fb27fb38b9(); // Function AIModule.AIPerceptionStimuliSourceComponent.*fb27fb38b9 // Final|Native|Public|BlueprintCallable // @ game+0x5e36540
	void *e6cbaa8a85(); // Function AIModule.AIPerceptionStimuliSourceComponent.*e6cbaa8a85 // Final|Native|Public|BlueprintCallable // @ game+0x5e37464
};

// Class AIModule.AIResource_Movement
// Size: 0x38 (Inherited: 0x38)
struct UAIResource_Movement : UGameplayTaskResource {
	int32 ManualResourceID; // 0x28(0x04)
	int8 *ea1bc642ef; // 0x2c(0x01)
	char bManuallySetID : 1; // 0x30(0x01)
};

// Class AIModule.AIResource_Logic
// Size: 0x38 (Inherited: 0x38)
struct UAIResource_Logic : UGameplayTaskResource {
	int32 ManualResourceID; // 0x28(0x04)
	int8 *ea1bc642ef; // 0x2c(0x01)
	char bManuallySetID : 1; // 0x30(0x01)
};

// Class AIModule.AISense_Blueprint
// Size: 0x150 (Inherited: 0x120)
struct UAISense_Blueprint : UAISense {
	struct UClass* ListenerDataType; // 0x120(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x128(0x10)
	struct TArray<struct U*4b4bdab98d*> *59a242574e; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)

	struct AActor* OnListenerUpdated(); // Function AIModule.AISense_Blueprint.OnListenerUpdated // Event|Public|BlueprintEvent // @ game+0x1e037c
	void K2_OnNewPawn(); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // Event|Public|BlueprintEvent // @ game+0x1e037c
	void *0c60d7423b(); // Function AIModule.AISense_Blueprint.*0c60d7423b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e349d8
	void *8f4ed61261(); // Function AIModule.AISense_Blueprint.*8f4ed61261 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e34aa0
	struct AActor* OnListenerUnregistered(); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // Event|Public|BlueprintEvent // @ game+0x1e037c
	void OnUpdate(struct TArray<struct U*4b4bdab98d*> EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void OnListenerRegistered(struct AActor* ActorListener); // Function AIModule.AISense_Blueprint.OnListenerRegistered // Event|Public|BlueprintEvent // @ game+0x1e037c
};

// Class AIModule.AISense_Damage
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Damage : UAISense {
	struct TArray<struct F*1a2cba3534> *14789d26cc; // 0x120(0x10)

	struct FVector *32a2e83ed7(); // Function AIModule.AISense_Damage.*32a2e83ed7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5e36554
};

// Class AIModule.AISense_Hearing
// Size: 0x190 (Inherited: 0x120)
struct UAISense_Hearing : UAISense {
	struct TArray<struct F*8dab4083a8> *fd264af21f; // 0x120(0x10)
	float SpeedOfSoundSq; // 0x130(0x04)
	char pad_134[0x5c]; // 0x134(0x5c)

	void *c4ea5733c7(struct FVector NoiseLocation, struct AActor* Instigator); // Function AIModule.AISense_Hearing.*c4ea5733c7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5e3680c
};

// Class AIModule.AISense_Prediction
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Prediction : UAISense {
	struct TArray<struct F*a5c4e338f3> *14789d26cc; // 0x120(0x10)

	void *aa21df2848(struct AActor* PredictedActor); // Function AIModule.AISense_Prediction.*aa21df2848 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e36b00
	struct AActor* *d4debf996b(); // Function AIModule.AISense_Prediction.*d4debf996b // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e36c1c
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
// Size: 0x100 (Inherited: 0x100)
struct U*110ebeeee3 : UUserDefinedStruct {
	struct FGuid Guid; // 0xf0(0x10)
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Blueprint : U*81954aace3 {
	struct UClass* Implementation; // 0x48(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Damage : U*81954aace3 {
	struct UClass* Implementation; // 0x48(0x08)
};

// Class AIModule.*663cc04617
// Size: 0x48 (Inherited: 0x48)
struct U*663cc04617 : U*81954aace3 {
	struct FColor DebugColor; // 0x28(0x04)
	float MaxAge; // 0x2c(0x04)
	char bStartsEnabled : 1; // 0x30(0x01)
};

// Class AIModule.*d0a5aca4d2
// Size: 0x48 (Inherited: 0x48)
struct U*d0a5aca4d2 : U*81954aace3 {
	struct FColor DebugColor; // 0x28(0x04)
	float MaxAge; // 0x2c(0x04)
	char bStartsEnabled : 1; // 0x30(0x01)
};

// Class AIModule.*8e8e799568
// Size: 0x48 (Inherited: 0x48)
struct U*8e8e799568 : U*81954aace3 {
	struct FColor DebugColor; // 0x28(0x04)
	float MaxAge; // 0x2c(0x04)
	char bStartsEnabled : 1; // 0x30(0x01)
};

// Class AIModule.*4b4bdab98d
// Size: 0x28 (Inherited: 0x28)
struct U*4b4bdab98d : UObject {
};

// Class AIModule.*ddef876eb4
// Size: 0x58 (Inherited: 0x28)
struct U*ddef876eb4 : U*4b4bdab98d {
	struct F*1a2cba3534 Event; // 0x28(0x30)
};

// Class AIModule.*bdeae13c51
// Size: 0x58 (Inherited: 0x28)
struct U*bdeae13c51 : U*4b4bdab98d {
	struct F*8dab4083a8 Event; // 0x28(0x30)
};

// Class AIModule.AISystem
// Size: 0x110 (Inherited: 0x48)
struct UAISystem : UAISystemBase {
	struct FStringClassReference PerceptionSystemClassName; // 0x48(0x10)
	struct FStringClassReference HotSpotManagerClassName; // 0x58(0x10)
	float AcceptanceRadius; // 0x68(0x04)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x6c(0x04)
	float PathfollowingNavLinkAcceptanceRadius; // 0x70(0x04)
	bool bFinishMoveOnGoalOverlap; // 0x74(0x01)
	bool bAcceptPartialPaths; // 0x75(0x01)
	bool bAllowStrafing; // 0x76(0x01)
	bool bEnableBTAITasks; // 0x77(0x01)
	bool bAllowControllersAsEQSQuerier; // 0x78(0x01)
	bool bEnableDebuggerPlugin; // 0x79(0x01)
	enum class ECollisionChannel DefaultSightCollisionChannel; // 0x7a(0x01)
	char pad_7B[0x5]; // 0x7b(0x05)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0x80(0x08)
	struct UEnvQueryManager* *1d54bd33ad; // 0x88(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0x90(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> *387f4cea7b; // 0x98(0x10)
	struct UAIHotSpotManager* *42c56411c0; // 0xa8(0x08)
	struct U*d2a9631777* *d0503f17d8; // 0xb0(0x08)
	char pad_B8[0x58]; // 0xb8(0x58)

	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // Exec|Native|Public // @ game+0x5e38004
	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // Exec|Native|Public // @ game+0x567b5f8
};

// Class AIModule.AITask
// Size: 0x70 (Inherited: 0x68)
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; // 0x68(0x08)
};

// Class AIModule.AITask_LockLogic
// Size: 0x70 (Inherited: 0x70)
struct UAITask_LockLogic : UAITask {
	struct AAIController* OwnerController; // 0x68(0x08)
};

// Class AIModule.AITask_MoveTo
// Size: 0x120 (Inherited: 0x70)
struct UAITask_MoveTo : UAITask {
	struct FMulticastDelegate OnRequestFailed; // 0x70(0x10)
	struct FMulticastDelegate OnMoveFinished; // 0x80(0x10)
	struct F*77dfb50dbd *e1bcd24883; // 0x90(0x50)
	char pad_E0[0x40]; // 0xe0(0x40)

	void AIMoveTo(struct AAIController* Controller, struct AActor* GoalActor, enum class EAIOptionFlag StopOnOverlap, bool bUsePathfinding); // Function AIModule.AITask_MoveTo.AIMoveTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5e3801c
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
	struct AAIController* OwnerController; // 0x68(0x08)
	char pad_78[0xd8]; // 0x78(0xd8)
};

// Class AIModule.BrainComponent
// Size: 0x250 (Inherited: 0x1f0)
struct UBrainComponent : UActorComponent {
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0x1f8(0x08)
	struct AAIController* *2915bdac5c; // 0x200(0x08)
	char pad_208[0x48]; // 0x208(0x48)

	void *edb3040425(); // Function AIModule.BrainComponent.*edb3040425 // Native|Public|BlueprintCallable // @ game+0x5e3df58
	void *56322a2a36(); // Function AIModule.BrainComponent.*56322a2a36 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3b3a0
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // Native|Public|BlueprintCallable // @ game+0xc42c0c
	void IsRunning(); // Function AIModule.BrainComponent.IsRunning // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5660eb8
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x390 (Inherited: 0x250)
struct UBehaviorTreeComponent : UBrainComponent {
	char pad_250[0x20]; // 0x250(0x20)
	struct TArray<struct UBTNode*> *ce2d1d421b; // 0x270(0x10)
	char pad_280[0x110]; // 0x280(0x110)

	float *d77e861bbc(); // Function AIModule.BehaviorTreeComponent.*d77e861bbc // Final|Native|Public|BlueprintCallable // @ game+0x5e382f0
	void *b5b474e79f(struct FGameplayTag InjectTag); // Function AIModule.BehaviorTreeComponent.*b5b474e79f // Native|Public|BlueprintCallable // @ game+0x5e3cdf0
	void *9d82df5de8(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.*9d82df5de8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3aacc
};

// Class AIModule.BTCompositeNode
// Size: 0xe0 (Inherited: 0x68)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct F*7502765a03> Children; // 0x68(0x10)
	struct TArray<struct UBTService*> Services; // 0x78(0x10)
	char pad_88[0x58]; // 0x88(0x58)
};

// Class AIModule.BehaviorTree
// Size: 0x60 (Inherited: 0x28)
struct UBehaviorTree : UObject {
	struct UBTCompositeNode* RootNode; // 0x28(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x30(0x08)
	struct TArray<struct UBTDecorator*> *c86695082a; // 0x38(0x10)
	struct TArray<struct F*d0a58640e7> *346e869dcd; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class AIModule.BehaviorTreeManager
// Size: 0x50 (Inherited: 0x28)
struct UBehaviorTreeManager : UObject {
	int32 MaxDebuggerSteps; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct F*9de88ebfff> *46644e1421; // 0x30(0x10)
	struct TArray<struct UBehaviorTreeComponent*> *6a92b19b59; // 0x40(0x10)
};

// Class AIModule.BlackboardData
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x30(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x38(0x10)
	char *581de7f6b5 : 1; // 0x48(0x01)
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
	struct UClass* *a53a87f6e7; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x30(0x08)
	struct FString EnumName; // 0x38(0x10)
	char *8dc726c948 : 1; // 0x48(0x01)
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
	struct FString EnumName; // 0x30(0x10)
	struct UEnum* EnumType; // 0x40(0x08)
};

// Class AIModule.BlackboardKeyType_Object
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	struct UClass* *a53a87f6e7; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_String
// Size: 0x40 (Inherited: 0x30)
struct UBlackboardKeyType_String : UBlackboardKeyType {
	struct FString StringValue; // 0x30(0x10)
};

// Class AIModule.BlackboardKeyType_Vector
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class AIModule.*85d8281644
// Size: 0xd0 (Inherited: 0xd0)
struct U*85d8281644 : UBTDecorator_Blackboard {
	int32 IntValue; // 0xa0(0x04)
	float FloatValue; // 0xa4(0x04)
	struct FString StringValue; // 0xa8(0x10)
	struct FString *4f0a8f002f; // 0xb8(0x10)
	bool OperationType; // 0xc8(0x01)
	enum class *938033f8bb NotifyObserver; // 0xc9(0x01)
};

// Class AIModule.*4c59b258aa
// Size: 0xe0 (Inherited: 0xa0)
struct U*4c59b258aa : UBTDecorator_BlackboardBase {
	float *bc2d26e277; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAIDataProviderFloatValue *e6b66fb5b5; // 0xa8(0x30)
	enum class FAIDistanceType *88ab4a04f9; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	char bUseParametrizedRadius : 1; // 0xdc(0x01)
	char *ec3e12c116 : 1; // 0xdc(0x01)
	char bPathFindingBasedTest : 1; // 0xdc(0x01)
	char pad_DC_3 : 5; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
};

// Class AIModule.*3df2e8c877
// Size: 0xa8 (Inherited: 0xa0)
struct U*3df2e8c877 : UBTDecorator_BlackboardBase {
	struct UClass* *c205b2161d; // 0xa0(0x08)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xb0 (Inherited: 0x78)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* *2915bdac5c; // 0x78(0x08)
	struct AActor* *ff5af5a4a3; // 0x80(0x08)
	struct TArray<struct FName> *8bcf19ac50; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)
	char *2b415a8e25 : 1; // 0xa8(0x01)
	char *754e2dad64 : 1; // 0xa8(0x01)
	char *ea07152c6a : 1; // 0xa8(0x01)
	char pad_A8_3 : 5; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	struct AActor* PerformConditionCheck(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void *56377b29a2(); // Function AIModule.BTDecorator_BlueprintBase.*56377b29a2 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3b358
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void *a0a7eaae4d(); // Function AIModule.BTDecorator_BlueprintBase.*a0a7eaae4d // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3b37c
	struct AActor* ReceiveTick(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x1e037c
	struct AAIController* ReceiveObserverActivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
	struct AActor* ReceiveExecutionFinish(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveExecutionStart(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveTickAI(struct AAIController* OwnerController); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveExecutionStartAI(struct AAIController* OwnerController); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveObserverDeactivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveObserverActivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void PerformConditionCheckAI(struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // Event|Protected|BlueprintEvent // @ game+0x1e037c
};

// Class AIModule.*b3802bd811
// Size: 0xd8 (Inherited: 0x78)
struct U*b3802bd811 : UBTDecorator {
	struct FBlackboardKeySelector *8572d6e663; // 0x78(0x28)
	enum class EGameplayContainerMatchType *6bec836d85; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FGameplayTagContainer GameplayTags; // 0xa8(0x20)
	struct FString *4f0a8f002f; // 0xc8(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xd0 (Inherited: 0x78)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FBlackboardKeySelector *b84d63d253; // 0x80(0x28)
	struct FBlackboardKeySelector *72d98ff589; // 0xa8(0x28)
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0x100 (Inherited: 0x78)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float *4eb850d215; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FBlackboardKeySelector *e4707c4383; // 0x80(0x28)
	struct FBlackboardKeySelector *1e6bd6c241; // 0xa8(0x28)
	struct FBlackboardKeySelector *d733a67044; // 0xd0(0x28)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x80 (Inherited: 0x78)
struct UBTDecorator_Cooldown : UBTDecorator {
	float *675c29da44; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xd8 (Inherited: 0x78)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector *b84d63d253; // 0x78(0x28)
	struct FBlackboardKeySelector *72d98ff589; // 0xa0(0x28)
	char *3cdd56bd8c : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	enum class EPathExistanceQueryType *fe5965ef19; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct UClass* *a2da6fc5f4; // 0xd0(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x78 (Inherited: 0x78)
struct UBTDecorator_ForceSuccess : UBTDecorator {
	char pad_78_0 : 7; // 0x78(0x01)
	char *3e87395321 : 1; // 0x70(0x01)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x74(0x01)
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xd8 (Inherited: 0x78)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float *4eb850d215; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FBlackboardKeySelector *e4707c4383; // 0x80(0x28)
	struct FBlackboardKeySelector *d733a67044; // 0xa8(0x28)
	char *7e50375e70 : 1; // 0xd0(0x01)
	char *e79b75c07f : 1; // 0xd0(0x01)
	char pad_D0_2 : 6; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x88 (Inherited: 0x78)
struct UBTDecorator_Loop : UBTDecorator {
	int32 *ba3b6e10af; // 0x78(0x04)
	bool bInfiniteLoop; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float *81184ad6c0; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x78 (Inherited: 0x78)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
	char pad_78_0 : 7; // 0x78(0x01)
	char *3e87395321 : 1; // 0x70(0x01)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x74(0x01)
};

// Class AIModule.*13958fdbae
// Size: 0x88 (Inherited: 0x78)
struct U*13958fdbae : UBTDecorator {
	struct FGameplayTag *0ca9fed388; // 0x78(0x08)
	float *d8d5f031e5; // 0x80(0x04)
	bool *3a60b15fc6; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// Class AIModule.*ffc420930f
// Size: 0x88 (Inherited: 0x78)
struct U*ffc420930f : UBTDecorator {
	struct FGameplayTag *0ca9fed388; // 0x78(0x08)
	float *d8d5f031e5; // 0x80(0x04)
	bool *3a60b15fc6; // 0x84(0x01)
	bool bActivatesCooldown; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x80 (Inherited: 0x78)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class AIModule.*1f2a01473a
// Size: 0x130 (Inherited: 0xa8)
struct U*1f2a01473a : UBTService_BlackboardBase {
	struct F*94ed19e5c6 *aaf83ab470; // 0xa8(0x48)
	char pad_F0[0x40]; // 0xf0(0x40)
};

// Class AIModule.BTComposite_Selector
// Size: 0xe0 (Inherited: 0xe0)
struct UBTComposite_Selector : UBTCompositeNode {
	struct TArray<struct F*7502765a03> Children; // 0x68(0x10)
	struct TArray<struct UBTService*> Services; // 0x78(0x10)
};

// Class AIModule.BTComposite_Sequence
// Size: 0xe0 (Inherited: 0xe0)
struct UBTComposite_Sequence : UBTCompositeNode {
	struct TArray<struct F*7502765a03> Children; // 0x68(0x10)
	struct TArray<struct UBTService*> Services; // 0x78(0x10)
};

// Class AIModule.BTComposite_SimpleParallel
// Size: 0xe0 (Inherited: 0xe0)
struct UBTComposite_SimpleParallel : UBTCompositeNode {
	enum class EBTParallelMode *f445e228de; // 0xd8(0x01)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xb0 (Inherited: 0xa8)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class AIModule.BTTask_RunEQSQuery
// Size: 0x190 (Inherited: 0xa8)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	struct UEnvQuery* *2c8ffe8dea; // 0xa8(0x08)
	struct TArray<struct FEnvNamedValue> *c32d9e67f9; // 0xb0(0x10)
	struct TArray<struct F*bfa5db6008> *880248475e; // 0xc0(0x10)
	enum class EEnvQueryRunMode *83fcce3f45; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FBlackboardKeySelector *c4e138b4d8; // 0xd8(0x28)
	bool bUseBBKey; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct F*94ed19e5c6 *aaf83ab470; // 0x108(0x48)
	char pad_150[0x40]; // 0x150(0x40)
};

// Class AIModule.*6fc44b5887
// Size: 0x88 (Inherited: 0x80)
struct U*6fc44b5887 : UBTTaskNode {
	char *edf50b9e21 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_MakeNoise : UBTTaskNode {
	float *fd10ab7651; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.*10267a802a
// Size: 0x80 (Inherited: 0x80)
struct U*10267a802a : UBTTaskNode {
	struct TArray<struct UBTService*> Services; // 0x68(0x10)
	char *3afbfbcd22 : 1; // 0x78(0x01)
};

// Class AIModule.*e97ae1499e
// Size: 0x88 (Inherited: 0x80)
struct U*e97ae1499e : U*10267a802a {
	struct U*fce0072588* Action; // 0x80(0x08)
};

// Class AIModule.*d683847876
// Size: 0x100 (Inherited: 0x80)
struct U*d683847876 : UBTTaskNode {
	struct UAnimationAsset* *bfa32de75a; // 0x80(0x08)
	char bLooping : 1; // 0x88(0x01)
	char *21a4c999cd : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UBehaviorTreeComponent* *6f3cd80763; // 0x90(0x08)
	struct USkeletalMeshComponent* *44fe632ad2; // 0x98(0x08)
	char pad_A0[0x60]; // 0xa0(0x60)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* *d114c715f0; // 0x80(0x08)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x80(0x08)
};

// Class AIModule.*d2941ca6fe
// Size: 0x98 (Inherited: 0x80)
struct U*d2941ca6fe : UBTTaskNode {
	struct FGameplayTag *d4392652e5; // 0x80(0x08)
	struct UBehaviorTree* *fe4c8dff52; // 0x88(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x90(0x08)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.CrowdManager
// Size: 0xe8 (Inherited: 0x28)
struct UCrowdManager : UObject {
	struct ANavigationData* *e412750adf; // 0x28(0x08)
	struct TArray<struct F*a866aa098d> AvoidanceConfig; // 0x30(0x10)
	struct TArray<struct F*546c99a93a> SamplingPatterns; // 0x40(0x10)
	int32 MaxAgents; // 0x50(0x04)
	float MaxAgentRadius; // 0x54(0x04)
	int32 MaxAvoidedAgents; // 0x58(0x04)
	int32 MaxAvoidedWalls; // 0x5c(0x04)
	float NavmeshCheckInterval; // 0x60(0x04)
	float PathOptimizationInterval; // 0x64(0x04)
	float SeparationDirClamp; // 0x68(0x04)
	char pad_6C_0 : 4; // 0x6c(0x01)
	char bResolveCollisions : 1; // 0x6c(0x01)
	char pad_6C_5 : 3; // 0x6c(0x01)
	char pad_6D[0x7b]; // 0x6d(0x7b)
};

// Class AIModule.EnvQuery
// Size: 0x48 (Inherited: 0x30)
struct UEnvQuery : UDataAsset {
	struct FName *d354db79c1; // 0x30(0x08)
	struct TArray<struct UEnvQueryOption*> Options; // 0x38(0x10)
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.*163fd1ddcb
// Size: 0x28 (Inherited: 0x28)
struct U*163fd1ddcb : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.*8f71a47536
// Size: 0x78 (Inherited: 0x28)
struct U*8f71a47536 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	int32 QueryID; // 0x30(0x04)
	char pad_34[0x24]; // 0x34(0x24)
	struct UClass* ItemType; // 0x58(0x08)
	int32 OptionIndex; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FMulticastDelegate OnQueryFinishedEvent; // 0x68(0x10)

	int32 *ba63f807ed(); // Function AIModule.*8f71a47536.*ba63f807ed // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e3a3bc
	void *72b148cfeb(); // Function AIModule.*8f71a47536.*72b148cfeb // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e3a928
	void EQSQueryDoneSignature__DelegateSignature(struct U*8f71a47536* QueryInstance); // DelegateFunction AIModule.*8f71a47536.EQSQueryDoneSignature__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	void *87c728f743(); // Function AIModule.*8f71a47536.*87c728f743 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e3a8a0
	struct FName *272325b4e5(); // Function AIModule.*8f71a47536.*272325b4e5 // Final|Native|Public|BlueprintCallable // @ game+0x5e3d11c
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
	struct TArray<struct F*4ac535c4d7> *10f164bc98; // 0xa0(0x10)
	struct TArray<struct UEnvQueryContext*> *aa84e41bf9; // 0xb0(0x10)
	struct TArray<struct U*8f71a47536*> *a0d8ec7cbf; // 0xc0(0x10)
	char pad_D0[0x54]; // 0xd0(0x54)
	float MaxAllowedTestingTime; // 0x124(0x04)
	bool bTestQueriesUsingBreadth; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32 QueryCountWarningThreshold; // 0x12c(0x04)
	double QueryCountWarningInterval; // 0x130(0x08)

	struct UClass* RunEQSQuery(); // Function AIModule.EnvQueryManager.RunEQSQuery // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e3baf0
};

// Class AIModule.*3cdeb6bd03
// Size: 0x30 (Inherited: 0x28)
struct U*3cdeb6bd03 : UObject {
	int32 *cdfd0322fb; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x50 (Inherited: 0x30)
struct UEnvQueryGenerator : U*3cdeb6bd03 {
	struct FString OptionName; // 0x30(0x10)
	struct UClass* *fb89bc0044; // 0x40(0x08)
	char *a3a9d80337 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AIModule.*a3fd14efa4
// Size: 0xc0 (Inherited: 0x50)
struct U*a3fd14efa4 : UEnvQueryGenerator {
	struct UClass* *617a97e959; // 0x50(0x08)
	struct FAIDataProviderBoolValue *e4562882d8; // 0x58(0x30)
	struct FAIDataProviderFloatValue SearchRadius; // 0x88(0x30)
	struct UClass* *c1803703e4; // 0xb8(0x08)
};

// Class AIModule.*1c1b96a88e
// Size: 0x80 (Inherited: 0x50)
struct U*1c1b96a88e : UEnvQueryGenerator {
	struct FText *b8cc556455; // 0x50(0x18)
	struct UClass* Context; // 0x68(0x08)
	struct UClass* *8e798974cc; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)

	void *8747de6d12(); // Function AIModule.*1c1b96a88e.*8747de6d12 // Final|Native|Public|HasDefaults|BlueprintCallable|Const // @ game+0x5e384b8
	void *bd80e13231(); // Function AIModule.*1c1b96a88e.*bd80e13231 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3a710
	void DoItemGeneration(); // Function AIModule.*1c1b96a88e.DoItemGeneration // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x1e037c
	void *c5063734ed(); // Function AIModule.*1c1b96a88e.*c5063734ed // Final|Native|Public|BlueprintCallable|Const // @ game+0x5e38428
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x68 (Inherited: 0x50)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x50(0x10)
	bool *f12a918a37; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class AIModule.*f1b1633e1f
// Size: 0x58 (Inherited: 0x50)
struct U*f1b1633e1f : UEnvQueryGenerator {
	struct UClass* *931b1b5129; // 0x50(0x08)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x80 (Inherited: 0x50)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData *dcd9f0f741; // 0x50(0x30)
};

// Class AIModule.*5de94d2ebd
// Size: 0x150 (Inherited: 0x80)
struct U*5de94d2ebd : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *539ea3ce05; // 0x80(0x30)
	struct FAIDataProviderFloatValue *5382831bfa; // 0xb0(0x30)
	struct FAIDataProviderFloatValue *7d96643ff4; // 0xe0(0x30)
	struct FAIDataProviderFloatValue Range; // 0x110(0x30)
	struct UClass* *bbeaf288d5; // 0x140(0x08)
	char *aa623663fc : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class AIModule.*d266d02a1b
// Size: 0x1a8 (Inherited: 0x80)
struct U*d266d02a1b : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x80(0x30)
	struct FAIDataProviderFloatValue OuterRadius; // 0xb0(0x30)
	struct FAIDataProviderIntValue *fbc9bb3650; // 0xe0(0x30)
	struct FAIDataProviderIntValue *dedf48bf45; // 0x110(0x30)
	struct FEnvDirection ArcDirection; // 0x140(0x20)
	struct FAIDataProviderFloatValue *153475f56e; // 0x160(0x30)
	bool *3d49332f91; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct UClass* Center; // 0x198(0x08)
	char bDefineArc : 1; // 0x1a0(0x01)
	char pad_1A0_1 : 7; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x1e8 (Inherited: 0x80)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *0a23a851a6; // 0x80(0x30)
	struct FAIDataProviderFloatValue *8e39ffcb20; // 0xb0(0x30)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xe0(0x30)
	enum class *1dfa76b857 *be829a7b6c; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FEnvDirection ArcDirection; // 0x118(0x20)
	struct FAIDataProviderFloatValue *153475f56e; // 0x138(0x30)
	float *d01a05b302; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UClass* *5090249023; // 0x170(0x08)
	bool *e444ecd97e; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct FAIDataProviderFloatValue *8ddc087459; // 0x180(0x30)
	struct FEnvTraceData TraceData; // 0x1b0(0x30)
	char bDefineArc : 1; // 0x1e0(0x01)
	char pad_1E0_1 : 7; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xe8 (Inherited: 0x80)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x80(0x30)
	struct FAIDataProviderFloatValue *8e39ffcb20; // 0xb0(0x30)
	struct UClass* *cec591678a; // 0xe0(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x150 (Inherited: 0xe8)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue *46bab01e57; // 0xe8(0x30)
	struct UClass* NavigationFilter; // 0x118(0x08)
	struct FAIDataProviderFloatValue *dc44382115; // 0x120(0x30)
};

// Class AIModule.EnvQueryTest
// Size: 0x1c0 (Inherited: 0x30)
struct UEnvQueryTest : U*3cdeb6bd03 {
	int32 *f4972e862b; // 0x30(0x04)
	enum class EEnvTestPurpose *212f57b384; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FString *45ace0c605; // 0x38(0x10)
	enum class *2c56fdede6 *d7ff1da381; // 0x48(0x01)
	enum class *207bfa4cb0 *cfb700fbbe; // 0x49(0x01)
	enum class EEnvTestFilterType *9ec76caae2; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	struct FAIDataProviderBoolValue *d4b293af0c; // 0x50(0x30)
	struct FAIDataProviderFloatValue *6cde0949ec; // 0x80(0x30)
	struct FAIDataProviderFloatValue *cc430685d1; // 0xb0(0x30)
	char pad_E0[0x1]; // 0xe0(0x01)
	enum class EEnvTestScoreEquation *7c07aad950; // 0xe1(0x01)
	enum class EEnvQueryTestClamping *b17ed9119d; // 0xe2(0x01)
	enum class EEnvQueryTestClamping *08348b86f3; // 0xe3(0x01)
	enum class EEQSNormalizationType *21bad46c4b; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct FAIDataProviderFloatValue *2bbe02554f; // 0xe8(0x30)
	struct FAIDataProviderFloatValue *58ea5d2b40; // 0x118(0x30)
	struct FAIDataProviderFloatValue *803a16d807; // 0x148(0x30)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x178(0x30)
	bool bDefineReferenceValue; // 0x1a8(0x01)
	char pad_1A9[0xf]; // 0x1a9(0x0f)
	char *489d15a6b1 : 1; // 0x1b8(0x01)
	char pad_1B8_1 : 7; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x1d0 (Inherited: 0x1c0)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class *e04dcc3fbf *c3969de01d; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UClass* DistanceTo; // 0x1c8(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x208 (Inherited: 0x1c0)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection *0212e09bd7; // 0x1c0(0x20)
	struct FEnvDirection *41524a5ed7; // 0x1e0(0x20)
	enum class *5d2337e19c *c3969de01d; // 0x200(0x01)
	bool *fda5fb6ea4; // 0x201(0x01)
	char pad_202[0x6]; // 0x202(0x06)
};

// Class AIModule.*e879405927
// Size: 0x230 (Inherited: 0x1c0)
struct U*e879405927 : UEnvQueryTest {
	struct FGameplayTagQuery *779d8b0447; // 0x1c0(0x48)
	bool *6babcee7b8; // 0x208(0x01)
	enum class EGameplayContainerMatchType *6bec836d85; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
	struct FGameplayTagContainer GameplayTags; // 0x210(0x20)
};

// Class AIModule.*ffabba2087
// Size: 0x1e0 (Inherited: 0x1c0)
struct U*ffabba2087 : UEnvQueryTest {
	struct F*9fd1a392bd *6b6f19f921; // 0x1c0(0x20)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x238 (Inherited: 0x1c0)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding *c3969de01d; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UClass* Context; // 0x1c8(0x08)
	struct FAIDataProviderBoolValue *241ae00917; // 0x1d0(0x30)
	struct FAIDataProviderBoolValue *32b52bd88a; // 0x200(0x30)
	struct UClass* *a2da6fc5f4; // 0x230(0x08)
};

// Class AIModule.*9eef1f1643
// Size: 0x268 (Inherited: 0x238)
struct U*9eef1f1643 : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue *dc44382115; // 0x238(0x30)
};

// Class AIModule.*c15909af39
// Size: 0x1f0 (Inherited: 0x1c0)
struct U*c15909af39 : UEnvQueryTest {
	struct FEnvTraceData *dcd9f0f741; // 0x1c0(0x30)
};

// Class AIModule.*38cb09c781
// Size: 0x1c0 (Inherited: 0x1c0)
struct U*38cb09c781 : UEnvQueryTest {
	int32 *f4972e862b; // 0x30(0x04)
	enum class EEnvTestPurpose *212f57b384; // 0x34(0x01)
	struct FString *45ace0c605; // 0x38(0x10)
	enum class *2c56fdede6 *d7ff1da381; // 0x48(0x01)
	enum class *207bfa4cb0 *cfb700fbbe; // 0x49(0x01)
	enum class EEnvTestFilterType *9ec76caae2; // 0x4a(0x01)
	struct FAIDataProviderBoolValue *d4b293af0c; // 0x50(0x30)
	struct FAIDataProviderFloatValue *6cde0949ec; // 0x80(0x30)
	struct FAIDataProviderFloatValue *cc430685d1; // 0xb0(0x30)
	enum class EEnvTestScoreEquation *7c07aad950; // 0xe1(0x01)
	enum class EEnvQueryTestClamping *b17ed9119d; // 0xe2(0x01)
	enum class EEnvQueryTestClamping *08348b86f3; // 0xe3(0x01)
	enum class EEQSNormalizationType *21bad46c4b; // 0xe4(0x01)
	struct FAIDataProviderFloatValue *2bbe02554f; // 0xe8(0x30)
	struct FAIDataProviderFloatValue *58ea5d2b40; // 0x118(0x30)
	struct FAIDataProviderFloatValue *803a16d807; // 0x148(0x30)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x178(0x30)
	bool bDefineReferenceValue; // 0x1a8(0x01)
	char *489d15a6b1 : 1; // 0x1b8(0x01)
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x288 (Inherited: 0x1c0)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x1c0(0x30)
	struct FAIDataProviderBoolValue *1a456552ba; // 0x1f0(0x30)
	struct FAIDataProviderFloatValue *15d1a7482e; // 0x220(0x30)
	struct FAIDataProviderFloatValue *a8bcaad4f0; // 0x250(0x30)
	struct UClass* Context; // 0x280(0x08)
};

// Class AIModule.EnvQueryOption
// Size: 0x40 (Inherited: 0x28)
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; // 0x28(0x08)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x30(0x10)
};

// Class AIModule.EQSRenderingComponent
// Size: 0xa30 (Inherited: 0xa00)
struct UEQSRenderingComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x4d8(0x04)
	float LDMaxDrawDistance; // 0x4dc(0x04)
	float CachedMaxDrawDistance; // 0x4e0(0x04)
	enum class *3c659ab94c *7512e3d028; // 0x4e4(0x01)
	enum class *3c659ab94c *d9fcd9b4bb; // 0x4e5(0x01)
	char pad_A0E_0 : 3; // 0xa0e(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x4e8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4e8(0x01)
	char bMultiBodyOverlap : 1; // 0x4e8(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x4e8(0x01)
	char bTraceComplexOnMove : 1; // 0x4e8(0x01)
	char bDisableForceFromCharacter : 1; // 0x4e9(0x01)
	char bReturnMaterialOnMove : 1; // 0x4e9(0x01)
	char *3e4d34552d : 1; // 0x4e9(0x01)
	char bAllowCullDistanceVolume : 1; // 0x4e9(0x01)
	char bImportantMesh : 1; // 0x4e9(0x01)
	char bOverrideCullingDistances : 1; // 0x4e9(0x01)
	float HLODScreenSize; // 0x4ec(0x04)
	char *2f091bbd0e : 1; // 0x4f0(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x4f0(0x01)
	char bRenderInMainPass : 1; // 0x4f0(0x01)
	char bRenderInMono : 1; // 0x4f0(0x01)
	char bOwnerNoSee : 1; // 0x4f0(0x01)
	char bOnlyOwnerSee : 1; // 0x4f0(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x4f0(0x01)
	char bUseAsOccluder : 1; // 0x4f0(0x01)
	char bForceAsOccluder : 1; // 0x4f1(0x01)
	char bForceOcclusionQuerying : 1; // 0x4f1(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x4f1(0x01)
	char *afd92d8969 : 1; // 0x4f1(0x01)
	char bForceMipStreaming : 1; // 0x4f1(0x01)
	char *4c581fbba9 : 1; // 0x4f1(0x01)
	char CastShadow : 1; // 0x4f1(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4f2(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x4f2(0x01)
	char bCastDynamicShadow : 1; // 0x4f2(0x01)
	char bCastStaticShadow : 1; // 0x4f2(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x4f2(0x01)
	char bSelfShadowOnly : 1; // 0x4f2(0x01)
	char bCastFarShadow : 1; // 0x4f2(0x01)
	char bCastInsetShadow : 1; // 0x4f2(0x01)
	char bCastCinematicShadow : 1; // 0x4f3(0x01)
	char bCastHiddenShadow : 1; // 0x4f3(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4f3(0x01)
	char bLightAsIfStatic : 1; // 0x4f3(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x4f3(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x4f3(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x4f3(0x01)
	char bIgnoreRadialImpulse : 1; // 0x4f3(0x01)
	char bIgnoreRadialForce : 1; // 0x4f4(0x01)
	char bApplyImpulseOnDamage : 1; // 0x4f4(0x01)
	char bSyncBodySleep : 1; // 0x4f4(0x01)
	char *27b0806be5 : 1; // 0x4f4(0x01)
	char *6f3b773115 : 1; // 0x4f4(0x01)
	char *b11801b90d : 1; // 0x4f4(0x01)
	char bRenderCustomDepth : 1; // 0x4f4(0x01)
	char *668636af81 : 1; // 0x4f5(0x01)
	char *b3a3eee86b : 1; // 0x4f6(0x01)
	char *07830a14a6 : 1; // 0x4f6(0x01)
	enum class EDecalChannel DecalChannel; // 0x4f8(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x4f9(0x01)
	struct FLightingChannels LightingChannels; // 0x4fa(0x03)
	enum class *d315e71b47 IndirectLightingCacheQuality; // 0x4fd(0x01)
	bool CustomDepthStencilValue; // 0x4fe(0x01)
	enum class *6e131cfc7f CustomDepthStencilWriteMask; // 0x4ff(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x500(0x10)
	int32 TranslucencySortPriority; // 0x510(0x04)
	int32 *6862844184; // 0x514(0x04)
	float LpvBiasMultiplier; // 0x51c(0x04)
	struct FBodyInstance BodyInstance; // 0x520(0x230)
	enum class EHasCustomNavigableGeometry *9a13a32dd1; // 0x758(0x01)
	float BoundsScale; // 0x794(0x04)
	float *aa675c3c9f; // 0x798(0x04)
	float *8aba3be418; // 0x79c(0x04)
	float *69906a8560; // 0x7a0(0x04)
	enum class *ed39c8987e CanBeCharacterBase; // 0x7a4(0x01)
	enum class *ed39c8987e CanCharacterStepUpOn; // 0x7a6(0x01)
	struct TArray<struct AActor*> *5559023e99; // 0x7a8(0x10)
	struct TArray<struct UPrimitiveComponent*> *34f682ee35; // 0x7b8(0x10)
	struct FMulticastDelegate OnComponentHit; // 0x880(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x890(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x8a0(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x8b0(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x8c0(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x8e0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8f0(0x10)
	struct FMulticastDelegate OnClicked; // 0x900(0x10)
	struct FMulticastDelegate OnReleased; // 0x910(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x920(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x930(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x940(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x950(0x10)
	struct UPrimitiveComponent* *afbfc200cf; // 0x988(0x08)
	struct UPrimitiveComponent* *c423c7f1c7; // 0x990(0x08)
	struct F*1d83c9bd93 *605bfc3d64; // 0x998(0x58)

	struct FVector AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6383740
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638ff78
	void *3f4951ae21(); // Function Engine.PrimitiveComponent.*3f4951ae21 // Native|Public|BlueprintCallable // @ game+0x63a1f20
	void *aa442ff688(); // Function Engine.PrimitiveComponent.*aa442ff688 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6392e38
	enum class *d6dc0510f4 *2acabdc4bc(); // Function Engine.PrimitiveComponent.*2acabdc4bc // Native|Public|HasDefaults|BlueprintCallable // @ game+0x63844e0
	void *dfb097147a(); // Function Engine.PrimitiveComponent.*dfb097147a // Native|Public|BlueprintCallable // @ game+0x5b4d80
	void *1d5b572e97(); // Function Engine.PrimitiveComponent.*1d5b572e97 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63968d8
	struct AActor* *58360a298b(); // Function Engine.PrimitiveComponent.*58360a298b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63931d0
	struct UMaterialInterface* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // Native|Public|BlueprintCallable // @ game+0x6388de8
	void *155e776c01(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.*155e776c01 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d7fc
	enum class *d6dc0510f4 *776b623f1e(); // Function Engine.PrimitiveComponent.*776b623f1e // Native|Public|HasDefaults|BlueprintCallable // @ game+0x63846b4
	void *401e8be8c9(); // Function Engine.PrimitiveComponent.*401e8be8c9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6396908
	void *6c17800325(); // Function Engine.PrimitiveComponent.*6c17800325 // Native|Public|BlueprintCallable // @ game+0x63a0078
	void *1060cf1432(); // Function Engine.PrimitiveComponent.*1060cf1432 // Final|Native|Public|BlueprintCallable // @ game+0x63a08ac
	void *733d8ffdab(); // Function Engine.PrimitiveComponent.*733d8ffdab // Native|Public|BlueprintCallable // @ game+0x63a2bc4
	void *c09d067d0f(); // Function Engine.PrimitiveComponent.*c09d067d0f // Final|Native|Public|BlueprintCallable // @ game+0x63a3460
	void *dfc478eaef(); // Function Engine.PrimitiveComponent.*dfc478eaef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63924d0
	void *d70adb1efd(float MassInKg); // Function Engine.PrimitiveComponent.*d70adb1efd // Native|Public|BlueprintCallable // @ game+0x63a2190
	struct FVector K2_LineTraceComponent(struct FName BoneName); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x639693c
	void *8f296e8ac0(); // Function Engine.PrimitiveComponent.*8f296e8ac0 // Final|Native|Public|BlueprintCallable // @ game+0x63a2a68
	void *3579dd87c5(); // Function Engine.PrimitiveComponent.*3579dd87c5 // Native|Public|BlueprintCallable // @ game+0x63929ac
	int32 *c513e9cfca(); // Function Engine.PrimitiveComponent.*c513e9cfca // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6390108
	void CreateAndSetMaterialInstanceDynamic(bool bConcurrent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // Native|Public|BlueprintCallable // @ game+0x6388cf8
	void SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // Native|Public|BlueprintCallable // @ game+0x568aeec
	int32 *c602cc5bf9(); // Function Engine.PrimitiveComponent.*c602cc5bf9 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6390064
	void *6f5a420568(); // Function Engine.PrimitiveComponent.*6f5a420568 // Final|Native|Public|BlueprintCallable // @ game+0x63a3588
	void *4179761c58(); // Function Engine.PrimitiveComponent.*4179761c58 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63852ec
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // Native|Public|BlueprintCallable // @ game+0xb7f5ac
	struct FName GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x63912b0
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // Final|Native|Public|BlueprintCallable // @ game+0x6388be8
	void *c4ebdc3c8f(struct AActor* Actor); // Function Engine.PrimitiveComponent.*c4ebdc3c8f // Final|Native|Public|BlueprintCallable // @ game+0x63925b4
	struct FName AddTorque(); // Function Engine.PrimitiveComponent.AddTorque // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6384b74
	void *5b3c874cbe(struct FVector NewAngVel); // Function Engine.PrimitiveComponent.*5b3c874cbe // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x639e494
	void *baff305a0b(); // Function Engine.PrimitiveComponent.*baff305a0b // Native|Public|BlueprintCallable // @ game+0x63a010c
	void *b24da2aba6(); // Function Engine.PrimitiveComponent.*b24da2aba6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63908c4
	void *6d15f9d7fc(); // Function Engine.PrimitiveComponent.*6d15f9d7fc // Final|Native|Public|BlueprintCallable // @ game+0x638593c
	struct UPrimitiveComponent* *bba26f131c(); // Function Engine.PrimitiveComponent.*bba26f131c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6393270
	void SetPhysicsLinearVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x92e96c
	bool SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // Final|Native|Public|BlueprintCallable // @ game+0x63a2c58
	void *10c86d98d5(); // Function Engine.PrimitiveComponent.*10c86d98d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63909f8
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // Native|Public|BlueprintCallable // @ game+0x6382fb0
	void *fc3da87902(); // Function Engine.PrimitiveComponent.*fc3da87902 // Native|Public|BlueprintCallable // @ game+0x63a287c
	void *1e088aa233(); // Function Engine.PrimitiveComponent.*1e088aa233 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x63a4a0c
	struct FName *9d203d4e3a(); // Function Engine.PrimitiveComponent.*9d203d4e3a // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638efd0
	void *7ab8b110bc(); // Function Engine.PrimitiveComponent.*7ab8b110bc // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638fe44
	void *cefd2a89e7(); // Function Engine.PrimitiveComponent.*cefd2a89e7 // Native|Public|BlueprintCallable // @ game+0x63a22bc
	void *4135b69ecb(); // Function Engine.PrimitiveComponent.*4135b69ecb // Final|Native|Public|BlueprintCallable // @ game+0x63a34f4
	struct FName AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6382d2c
	void *065d5e11f8(struct FName BoneName); // Function Engine.PrimitiveComponent.*065d5e11f8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x638d2a8
	void *e06446eb04(); // Function Engine.PrimitiveComponent.*e06446eb04 // Final|Native|Public|BlueprintCallable // @ game+0x639aadc
	void *f6986ba874(); // Function Engine.PrimitiveComponent.*f6986ba874 // Final|Native|Public|BlueprintCallable // @ game+0x63a3f78
	bool *285b57600a(); // Function Engine.PrimitiveComponent.*285b57600a // Native|Public|BlueprintCallable // @ game+0x63a421c
	void *5cdc853a89(); // Function Engine.PrimitiveComponent.*5cdc853a89 // Final|Native|Public|BlueprintCallable // @ game+0x63a093c
	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // Native|Public|BlueprintCallable // @ game+0x639ffe0
	struct FVector AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6383de0
	void *b9e13958df(); // Function Engine.PrimitiveComponent.*b9e13958df // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d774
	void SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // Native|Public|HasDefaults|BlueprintCallable // @ game+0x639e58c
	void *29c20efb0b(); // Function Engine.PrimitiveComponent.*29c20efb0b // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c644
	void *056cc90593(); // Function Engine.PrimitiveComponent.*056cc90593 // Final|Native|Public|BlueprintCallable // @ game+0x639fb44
	struct FVector SetPhysicsAngularVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xb0d434
	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // Native|Public|BlueprintCallable // @ game+0x639e724
	struct FName AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6383ca0
	enum class ECollisionChannel *58f998cca1(); // Function Engine.PrimitiveComponent.*58f998cca1 // Native|Public|BlueprintCallable // @ game+0x63a01a4
	void *6ad19621d9(); // Function Engine.PrimitiveComponent.*6ad19621d9 // Final|Native|Public|BlueprintCallable // @ game+0x63a2914
	void *6721a3eb8a(); // Function Engine.PrimitiveComponent.*6721a3eb8a // Final|Native|Public|BlueprintCallable // @ game+0x6385958
	void *601c402444(); // Function Engine.PrimitiveComponent.*601c402444 // Native|Public|BlueprintCallable // @ game+0x63a5f64
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6390d98
	void AddForce(struct FVector force); // Function Engine.PrimitiveComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6383600
	void *1f028ad67d(); // Function Engine.PrimitiveComponent.*1f028ad67d // Final|Native|Public|BlueprintCallable // @ game+0x638d7c4
	struct FName *75116bc348(); // Function Engine.PrimitiveComponent.*75116bc348 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x639b55c
	void *46193842e9(); // Function Engine.PrimitiveComponent.*46193842e9 // Final|Native|Public|BlueprintCallable // @ game+0x6388c70
	void *10f75e50ac(); // Function Engine.PrimitiveComponent.*10f75e50ac // Final|Native|Public|BlueprintCallable // @ game+0x639f8ec
	void *e3b0f43f9e(struct FVector Point); // Function Engine.PrimitiveComponent.*e3b0f43f9e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6391360
	struct FName *36ad2d15e7(); // Function Engine.PrimitiveComponent.*36ad2d15e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638d618
	void *fec7ca08f4(struct FName BoneName); // Function Engine.PrimitiveComponent.*fec7ca08f4 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638ffa4
	void *0e38375bb9(); // Function Engine.PrimitiveComponent.*0e38375bb9 // Final|Native|Public|BlueprintCallable // @ game+0x6392694
	void *23f39ad152(); // Function Engine.PrimitiveComponent.*23f39ad152 // Native|Public|BlueprintCallable // @ game+0x63a0bec
	struct FVector AddForceAtLocationLocal(struct FVector Location); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // Native|Public|HasDefaults|BlueprintCallable // @ game+0x638388c
	void CreateDynamicMaterialInstance(int32 ElementIndex); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x6388ed8
	void *923a62a1b9(); // Function Engine.PrimitiveComponent.*923a62a1b9 // Final|Native|Public|BlueprintCallable // @ game+0x63a0814
	struct FName GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xb59468
	void *41428e55af(); // Function Engine.PrimitiveComponent.*41428e55af // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63968ac
	void *9f5fbe7730(); // Function Engine.PrimitiveComponent.*9f5fbe7730 // Native|Public|BlueprintCallable // @ game+0x63a067c
	struct FVector SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x639fc70
	void *95f3208c0a(); // Function Engine.PrimitiveComponent.*95f3208c0a // Native|Public|BlueprintCallable // @ game+0x639e68c
	void *926dc117b6(); // Function Engine.PrimitiveComponent.*926dc117b6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d79c
	void *d7c852a7d5(); // Function Engine.PrimitiveComponent.*d7c852a7d5 // Native|Public|BlueprintCallable // @ game+0x63994f8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6390ba0
	void *b76664dec1(); // Function Engine.PrimitiveComponent.*b76664dec1 // Native|Public|BlueprintCallable // @ game+0x63a5f4c
	void *a306d03f54(); // Function Engine.PrimitiveComponent.*a306d03f54 // Native|Public|BlueprintCallable // @ game+0xb360a8
};

// Class AIModule.EQSTestingPawn
// Size: 0x8d0 (Inherited: 0x860)
struct AEQSTestingPawn : ACharacter {
	char pad_860[0x8]; // 0x860(0x08)
	struct UEnvQuery* *2c8ffe8dea; // 0x868(0x08)
	struct TArray<struct FEnvNamedValue> *c32d9e67f9; // 0x870(0x10)
	struct TArray<struct F*bfa5db6008> *880248475e; // 0x880(0x10)
	float *f06f2889e6; // 0x890(0x04)
	int32 *61806f813d; // 0x894(0x04)
	enum class EEnvQueryHightlightMode *3a0ec6748d; // 0x898(0x01)
	char pad_899[0x3]; // 0x899(0x03)
	char *85e9c279e0 : 1; // 0x89c(0x01)
	char *5b448194f7 : 1; // 0x89c(0x01)
	char *9c3c880797 : 1; // 0x89c(0x01)
	char *8427b0c737 : 1; // 0x89c(0x01)
	char *34b2062b93 : 1; // 0x89c(0x01)
	char pad_89C_5 : 3; // 0x89c(0x01)
	char pad_89D[0x3]; // 0x89d(0x03)
	enum class EEnvQueryRunMode *341ab1d553; // 0x8a0(0x01)
	char pad_8A1[0x2f]; // 0x8a1(0x2f)
};

// Class AIModule.*205cf34bba
// Size: 0x48 (Inherited: 0x48)
struct U*205cf34bba : U*7faddb26b3 {
	struct TArray<struct F*614c6831c7> Areas; // 0x28(0x10)
	struct F*dd97a4099e IncludeFlags; // 0x38(0x04)
	struct F*dd97a4099e ExcludeFlags; // 0x3c(0x04)
};

// Class AIModule.*d2a9631777
// Size: 0x58 (Inherited: 0x28)
struct U*d2a9631777 : UObject {
	char pad_28[0x30]; // 0x28(0x30)
};

// Class AIModule.*7046b266c8
// Size: 0x4f0 (Inherited: 0x4c0)
struct U*7046b266c8 : UPathFollowingComponent {
	struct U*d2a9631777* *2b0e39940c; // 0x4b8(0x08)
	char pad_4C8[0x28]; // 0x4c8(0x28)
};

// Class AIModule.*fce0072588
// Size: 0xd0 (Inherited: 0x28)
struct U*fce0072588 : UObject {
	struct U*fce0072588* *a30a81d34d; // 0x28(0x08)
	struct U*fce0072588* *3f1819a703; // 0x30(0x08)
	struct U*5750687860* *75104f4396; // 0x38(0x08)
	struct UObject* Instigator; // 0x40(0x08)
	struct UBrainComponent* *409ccbdde3; // 0x48(0x08)
	char pad_50[0x68]; // 0x50(0x68)
	char bAllowNewSameClassInstance : 1; // 0xb8(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0xb8(0x01)
	char bShouldPauseMovement : 1; // 0xb8(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0xb8(0x01)
	char pad_B8_4 : 4; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)

	struct UObject* *6e0eecc1ae(struct UClass* ActionClass); // Function AIModule.*fce0072588.*6e0eecc1ae // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e39054
	void Finish(); // Function AIModule.*fce0072588.Finish // Native|Protected|BlueprintCallable // @ game+0x5e3931c
	void *6744b6ccde(); // Function AIModule.*fce0072588.*6744b6ccde // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e39464
};

// Class AIModule.*c5c050c2c4
// Size: 0xd0 (Inherited: 0xd0)
struct U*c5c050c2c4 : U*fce0072588 {
	struct U*fce0072588* *a30a81d34d; // 0x28(0x08)
	struct U*fce0072588* *3f1819a703; // 0x30(0x08)
	struct U*5750687860* *75104f4396; // 0x38(0x08)
	struct UObject* Instigator; // 0x40(0x08)
	struct UBrainComponent* *409ccbdde3; // 0x48(0x08)
	char bAllowNewSameClassInstance : 1; // 0xb8(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0xb8(0x01)
	char bShouldPauseMovement : 1; // 0xb8(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0xb8(0x01)

	struct UObject* *6e0eecc1ae(struct UClass* ActionClass); // Function AIModule.*fce0072588.*6e0eecc1ae // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e39054
	void Finish(); // Function AIModule.*fce0072588.Finish // Native|Protected|BlueprintCallable // @ game+0x5e3931c
	void *6744b6ccde(); // Function AIModule.*fce0072588.*6744b6ccde // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5e39464
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
// Size: 0x230 (Inherited: 0x1f0)
struct U*5750687860 : UActorComponent {
	struct APawn* ControlledPawn; // 0x1f0(0x08)
	struct TArray<struct F*1143e2dc2f> *fa68601003; // 0x1f8(0x10)
	struct TArray<struct F*258ef4b785> *01f1255adc; // 0x208(0x10)
	struct U*fce0072588* *45f65fe30e; // 0x218(0x08)
	char pad_220[0x10]; // 0x220(0x10)

	struct UObject* *09af6c21df(); // Function AIModule.*5750687860.*09af6c21df // Final|Native|Public|BlueprintCallable // @ game+0x5e3b78c
	struct U*fce0072588* *ab8a9185b9(); // Function AIModule.*5750687860.*ab8a9185b9 // Final|Native|Public|BlueprintCallable // @ game+0x5e3b5c0
	void *096dd7b028(struct APawn* Pawn, enum class EAIRequestPriority Priority); // Function AIModule.*5750687860.*096dd7b028 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e3b658
	struct U*fce0072588* *1aae6113b0(); // Function AIModule.*5750687860.*1aae6113b0 // Final|Native|Public|BlueprintCallable // @ game+0x5e3b518
};

// Class AIModule.PawnSensingComponent
// Size: 0x240 (Inherited: 0x1f0)
struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0x1f0(0x04)
	float LOSHearingThreshold; // 0x1f4(0x04)
	float SightRadius; // 0x1f8(0x04)
	float SensingInterval; // 0x1fc(0x04)
	float HearingMaxSoundAge; // 0x200(0x04)
	char bEnableSensingUpdates : 1; // 0x204(0x01)
	char bOnlySensePlayers : 1; // 0x204(0x01)
	char bSeePawns : 1; // 0x204(0x01)
	char bHearNoises : 1; // 0x204(0x01)
	char pad_204_4 : 4; // 0x204(0x01)
	char pad_205[0xb]; // 0x205(0x0b)
	struct FMulticastDelegate OnSeePawn; // 0x210(0x10)
	struct FMulticastDelegate OnHearNoise; // 0x220(0x10)
	float PeripheralVisionAngle; // 0x230(0x04)
	float *50fa6620af; // 0x234(0x04)
	char pad_238[0x8]; // 0x238(0x08)

	void *fa00991aed(); // Function AIModule.PawnSensingComponent.*fa00991aed // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5e3d2c8
	void *c8a174403f(); // Function AIModule.PawnSensingComponent.*c8a174403f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3a6f8
	void *56124d2fd9(); // Function AIModule.PawnSensingComponent.*56124d2fd9 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5e3d22c
	void *64247500ee(); // Function AIModule.PawnSensingComponent.*64247500ee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e3a6e0
	void *c82bbc6be3(); // Function AIModule.PawnSensingComponent.*c82bbc6be3 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5e3d364
	void SeePawnDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	void HearNoiseDelegate__DelegateSignature(struct FVector Location); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x1e037c
};

// Class AIModule.*11c8d0f96d
// Size: 0x28 (Inherited: 0x28)
struct U*11c8d0f96d : UObject {
};


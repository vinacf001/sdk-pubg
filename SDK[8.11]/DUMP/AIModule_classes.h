// Class AIModule.BTNode
// Size: 0x68 (Inherited: 0x28)
struct UBTNode : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString NodeName; // 0x30(0x10)
	struct FString Tag; // 0x40(0x10)
	struct UBehaviorTree* *3c200612f9; // 0x50(0x08)
	struct UBTCompositeNode* *21981b01be; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class AIModule.BTTaskNode
// Size: 0x80 (Inherited: 0x68)
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; // 0x68(0x10)
	char *5f9f09f2b4 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AIModule.AISense
// Size: 0x120 (Inherited: 0x28)
struct UAISense : UObject {
	float DefaultExpirationAge; // 0x28(0x04)
	enum class *b4124d6fb0 NotifyType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	char bWantsNewPawnNotification : 1; // 0x30(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAIPerceptionSystem* *951961d24f; // 0x38(0x08)
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

// Class AIModule.*64730ad89a
// Size: 0x48 (Inherited: 0x28)
struct U*64730ad89a : UObject {
	struct FColor DebugColor; // 0x28(0x04)
	float MaxAge; // 0x2c(0x04)
	char bStartsEnabled : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x17]; // 0x31(0x17)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x60 (Inherited: 0x48)
struct UAISenseConfig_Hearing : U*64730ad89a {
	struct UClass* Implementation; // 0x48(0x08)
	float HearingRange; // 0x50(0x04)
	float LoSHearingRange; // 0x54(0x04)
	char bUseLoSHearing : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct F*47d1f8c155 DetectionByAffiliation; // 0x5c(0x04)
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x68 (Inherited: 0x48)
struct UAISenseConfig_Sight : U*64730ad89a {
	struct UClass* Implementation; // 0x48(0x08)
	float SightRadius; // 0x50(0x04)
	float LoseSightRadius; // 0x54(0x04)
	float PeripheralVisionAngleDegrees; // 0x58(0x04)
	struct F*47d1f8c155 DetectionByAffiliation; // 0x5c(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class AIModule.BlackboardComponent
// Size: 0x2f0 (Inherited: 0x1f0)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* *ab3d60cc4f; // 0x1f0(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x1f8(0x08)
	char pad_200[0x20]; // 0x200(0x20)
	struct TArray<struct UBlackboardKeyType*> *6d586f4d47; // 0x220(0x10)
	char pad_230[0xc0]; // 0x230(0xc0)

	void *1fd93b69c3(); // Function AIModule.BlackboardComponent.*1fd93b69c3 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5fa2b64
	struct FName *7e0a61f4d3(); // Function AIModule.BlackboardComponent.*7e0a61f4d3 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5fa0108
	struct FName *a3c532a498(); // Function AIModule.BlackboardComponent.*a3c532a498 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9fc40
	void *98aa05ba0d(struct FName KeyName); // Function AIModule.BlackboardComponent.*98aa05ba0d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9fb88
	struct FVector *8ae5f9fcef(); // Function AIModule.BlackboardComponent.*8ae5f9fcef // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9f2f4
	struct FName *773b553aa9(); // Function AIModule.BlackboardComponent.*773b553aa9 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5fa22e0
	void *f5207110ae(); // Function AIModule.BlackboardComponent.*f5207110ae // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9fdb0
	void *05b16a4a0a(); // Function AIModule.BlackboardComponent.*05b16a4a0a // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5fa2a00
	struct FName *b3ab2e25ae(); // Function AIModule.BlackboardComponent.*b3ab2e25ae // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5fa27e8
	struct FName *d10e703cec(); // Function AIModule.BlackboardComponent.*d10e703cec // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5fa24e0
	void *779fbdd818(); // Function AIModule.BlackboardComponent.*779fbdd818 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5fa28e8
	void *eff81849eb(); // Function AIModule.BlackboardComponent.*eff81849eb // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5fa21dc
	struct FName *cb0bfac935(); // Function AIModule.BlackboardComponent.*cb0bfac935 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5fa26e8
	void *4aa4f4a647(struct FName KeyName); // Function AIModule.BlackboardComponent.*4aa4f4a647 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9fcf8
	void *25a767063b(); // Function AIModule.BlackboardComponent.*25a767063b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5fa23e0
	struct FName *7c4a10e3a5(); // Function AIModule.BlackboardComponent.*7c4a10e3a5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9ff20
	struct FName *88e29a3dfc(); // Function AIModule.BlackboardComponent.*88e29a3dfc // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5fa02a8
	void *918aec830e(struct FName KeyName); // Function AIModule.BlackboardComponent.*918aec830e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9ffec
	void *53e33fbc48(); // Function AIModule.BlackboardComponent.*53e33fbc48 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5fa25e8
	void *fa759f2339(); // Function AIModule.BlackboardComponent.*fa759f2339 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f9de28
	struct FName *fe709de2eb(); // Function AIModule.BlackboardComponent.*fe709de2eb // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9fad0
	void *6947bb5e74(struct FName KeyName); // Function AIModule.BlackboardComponent.*6947bb5e74 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9fa18
	struct FRotator *dc8889158f(); // Function AIModule.BlackboardComponent.*dc8889158f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9f82c
	struct FName *da864a6066(); // Function AIModule.BlackboardComponent.*da864a6066 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9fe68
};

// Class AIModule.PathFollowingComponent
// Size: 0x4c0 (Inherited: 0x1f0)
struct UPathFollowingComponent : UActorComponent {
	char pad_1F0[0x130]; // 0x1f0(0x130)
	struct UNavMovementComponent* MovementComp; // 0x320(0x08)
	char pad_328[0x8]; // 0x328(0x08)
	struct ANavigationData* *ffe00a80d5; // 0x330(0x08)
	char pad_338[0x188]; // 0x338(0x188)

	void *13e0e93736(); // Function AIModule.PathFollowingComponent.*13e0e93736 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99ff8
	void *74c3b85c91(); // Function AIModule.PathFollowingComponent.*74c3b85c91 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99f7c
	void OnNavDataRegistered(); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // Final|Native|Protected // @ game+0x5f9b0b0
	struct FVector OnActorBump(struct AActor* Param0); // Function AIModule.PathFollowingComponent.OnActorBump // Native|Public|HasOutParms|HasDefaults // @ game+0x5f9ad34
};

// Class AIModule.*500d89e469
// Size: 0x28 (Inherited: 0x28)
struct U*500d89e469 : UInterface {
};

// Class AIModule.AIController
// Size: 0x500 (Inherited: 0x470)
struct AAIController : AController {
	char pad_470[0x38]; // 0x470(0x38)
	char bStopAILogicOnUnposses : 1; // 0x4a8(0x01)
	char *8cfcda11e4 : 1; // 0x4a8(0x01)
	char *95942ee8b4 : 1; // 0x4a8(0x01)
	char *24e64d9332 : 1; // 0x4a8(0x01)
	char *4b604ee19c : 1; // 0x4a8(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4a8(0x01)
	char pad_4A8_6 : 2; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x4b0(0x08)
	struct UBrainComponent* BrainComponent; // 0x4b8(0x08)
	struct UAIPerceptionComponent* *88512dfd8f; // 0x4c0(0x08)
	struct U*b1d8b90a6a* ActionsComp; // 0x4c8(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4d0(0x08)
	struct UGameplayTasksComponent* *764fd754f3; // 0x4d8(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x4e0(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x4e8(0x10)
	char pad_4F8[0x8]; // 0x4f8(0x08)

	bool *a81d5bb356(); // Function AIModule.AIController.*a81d5bb356 // Final|Native|Public|BlueprintCallable // @ game+0x5f9a7a4
	void *679bb813bf(); // Function AIModule.AIController.*679bb813bf // Final|Native|Public|BlueprintCallable // @ game+0x5f9bf14
	bool *9e88fc7518(); // Function AIModule.AIController.*9e88fc7518 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f9aa3c
	void *6ad8263c7d(); // Function AIModule.AIController.*6ad8263c7d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9a260
	void OnGameplayTaskResourcesClaimed(struct F*dcc564d94b Param0); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // Native|Public // @ game+0x5f9aef4
	void OnPossess(); // Function AIModule.AIController.OnPossess // Event|Public|BlueprintEvent // @ game+0x293938
	void K2_SetFocalPoint(); // Function AIModule.AIController.K2_SetFocalPoint // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f9a534
	void *5befe147bd(); // Function AIModule.AIController.*5befe147bd // Final|Native|Public|BlueprintCallable // @ game+0x5f994b4
	void *59b7b8323d(); // Function AIModule.AIController.*59b7b8323d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9a02c
	void *98b87a0e94(); // Function AIModule.AIController.*98b87a0e94 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99f54
	void *bb24ab9ab3(); // Function AIModule.AIController.*bb24ab9ab3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99dcc
	struct UBlackboardData* UseBlackboard(struct UBlackboardComponent* BlackboardComponent); // Function AIModule.AIController.UseBlackboard // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f9c468
	void *a1318af19b(); // Function AIModule.AIController.*a1318af19b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99da8
	struct AActor* *b1b94ca9eb(); // Function AIModule.AIController.*b1b94ca9eb // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99cf0
	struct UBlackboardComponent* OnUsingBlackBoard(); // Function AIModule.AIController.OnUsingBlackBoard // Event|Protected|BlueprintEvent // @ game+0x293938
	void *99177f39c5(); // Function AIModule.AIController.*99177f39c5 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5f997f4
	void RunBehaviorTree(); // Function AIModule.AIController.RunBehaviorTree // Native|Public|BlueprintCallable // @ game+0x5f9bcac
	void K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus // Final|Native|Public|BlueprintCallable // @ game+0x5f9a5dc
	void OnUnpossess(); // Function AIModule.AIController.OnUnpossess // Event|Public|BlueprintEvent // @ game+0x293938
	void *b27aedde0f(); // Function AIModule.AIController.*b27aedde0f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99cbc
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // Final|Native|Public|BlueprintCallable // @ game+0x5f9a518
	void *999135302f(); // Function AIModule.AIController.*999135302f // Final|Native|Public|BlueprintCallable // @ game+0x5f9c204
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
	char *039ad6a54b : 1; // 0x70(0x01)
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
	struct FString *8194d480d2; // 0xb8(0x10)
	bool OperationType; // 0xc8(0x01)
	enum class *9bc8e8a156 NotifyObserver; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
};

// Class AIModule.BTService
// Size: 0x80 (Inherited: 0x70)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x70(0x04)
	float *92c7b0196f; // 0x74(0x04)
	char *49d5108215 : 1; // 0x78(0x01)
	char *3528e26cbc : 1; // 0x78(0x01)
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
	bool *e950e456a9; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AIModule.AIPerceptionComponent
// Size: 0x2d0 (Inherited: 0x1f0)
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct U*64730ad89a*> *5d3d6f5529; // 0x1f0(0x10)
	struct UClass* *f16c1af564; // 0x200(0x08)
	char pad_208[0x10]; // 0x208(0x10)
	struct AAIController* *0211fe195c; // 0x218(0x08)
	char pad_220[0x80]; // 0x220(0x80)
	struct FMulticastDelegate OnPerceptionUpdated; // 0x2a0(0x10)
	struct FMulticastDelegate OnTargetPerceptionUpdated; // 0x2b0(0x10)
	char pad_2C0[0x10]; // 0x2c0(0x10)

	void *71fb21def4(); // Function AIModule.AIPerceptionComponent.*71fb21def4 // Final|Native|Public|BlueprintCallable // @ game+0x5f9bc98
	void OnOwnerEndPlay(); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // Final|Native|Public // @ game+0x5f9b140
	void *52521ca7e9(); // Function AIModule.AIPerceptionComponent.*52521ca7e9 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9a044
	struct UClass* *1da2532f6b(); // Function AIModule.AIPerceptionComponent.*1da2532f6b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99b9c
	void *5de0209eed(); // Function AIModule.AIPerceptionComponent.*5de0209eed // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99e34
	void *794fd0ad8f(); // Function AIModule.AIPerceptionComponent.*794fd0ad8f // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99b9c
	struct F*15e28a7d51 *25d7a019b7(); // Function AIModule.AIPerceptionComponent.*25d7a019b7 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f9980c
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
	struct UClass* *7692f634d9; // 0xb0(0x08)
	float *2ff42b9e3c; // 0xb8(0x04)
	char bObserveBlackboardValue : 1; // 0xbc(0x01)
	char *24e64d9332 : 1; // 0xbc(0x01)
	char *68fe1298d2 : 1; // 0xbc(0x01)
	char *45fca71982 : 1; // 0xbc(0x01)
	char *a962fbacc3 : 1; // 0xbc(0x01)
	char *28c93e35c6 : 1; // 0xbc(0x01)
	char pad_BC_6 : 2; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
};

// Class AIModule.BTTask_Wait
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_Wait : UBTTaskNode {
	float *af2c86d9dd; // 0x80(0x04)
	float *92c7b0196f; // 0x84(0x04)
};

// Class AIModule.*24146de457
// Size: 0x90 (Inherited: 0x80)
struct U*24146de457 : UBTTaskNode {
	struct FGameplayTag *c4f2132ae4; // 0x80(0x08)
	bool *eadfcade1a; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float *1ee55b69d2; // 0x8c(0x04)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xc8 (Inherited: 0xc0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xc0(0x01)
	char *43fe9836b5 : 1; // 0xc0(0x01)
	char *0cc509cf33 : 1; // 0xc0(0x01)
	char pad_C0_3 : 5; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class AIModule.*1eb9fddca9
// Size: 0xb0 (Inherited: 0x88)
struct U*1eb9fddca9 : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; // 0x88(0x28)
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x510 (Inherited: 0x4c0)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	struct FVector *0c0b96d0a2; // 0x4c0(0x0c)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct UCharacterMovementComponent* CharacterMovement; // 0x4d0(0x08)
	struct F*056e48c16d AvoidanceGroup; // 0x4d8(0x04)
	struct F*056e48c16d GroupsToAvoid; // 0x4dc(0x04)
	struct F*056e48c16d GroupsToIgnore; // 0x4e0(0x04)
	char pad_4E4[0x2c]; // 0x4e4(0x2c)

	void *402be7283d(); // Function AIModule.CrowdFollowingComponent.*402be7283d // Native|Public|BlueprintCallable // @ game+0x5fa2dfc
};

// Class AIModule.BTService_BlueprintBase
// Size: 0xa8 (Inherited: 0x80)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* *0211fe195c; // 0x80(0x08)
	struct AActor* *539fd8f1e5; // 0x88(0x08)
	char pad_90[0x10]; // 0x90(0x10)
	char *eb76bcc2b1 : 1; // 0xa0(0x01)
	char *1135835beb : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	void ReceiveSearchStart(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveActivation(); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // Event|Protected|BlueprintEvent // @ game+0x293938
	struct AAIController* ReceiveDeactivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // Event|Protected|BlueprintEvent // @ game+0x293938
	struct AAIController* ReceiveActivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveSearchStartAI(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // Event|Protected|BlueprintEvent // @ game+0x293938
	void *f3fd61332d(); // Function AIModule.BTService_BlueprintBase.*f3fd61332d // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5fa0244
	struct AActor* ReceiveTick(); // Function AIModule.BTService_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveDeactivation(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveTickAI(struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x293938
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xb0 (Inherited: 0x80)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* *0211fe195c; // 0x80(0x08)
	struct AActor* *539fd8f1e5; // 0x88(0x08)
	char pad_90[0x18]; // 0x90(0x18)
	char *eb76bcc2b1 : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void ReceiveAbort(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // Event|Protected|BlueprintEvent // @ game+0x293938
	struct AAIController* ReceiveAbortAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveTick(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x293938
	void *29f4c7a5d8(); // Function AIModule.BTTask_BlueprintBase.*29f4c7a5d8 // Final|Native|Protected|BlueprintCallable // @ game+0x5f9e238
	void *2956879520(); // Function AIModule.BTTask_BlueprintBase.*2956879520 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5fa0284
	struct APawn* ReceiveTickAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveExecuteAI(struct AAIController* OwnerController); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveExecute(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // Event|Protected|BlueprintEvent // @ game+0x293938
	void *b43fae6ff1(); // Function AIModule.BTTask_BlueprintBase.*b43fae6ff1 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5fa0268
	void *7a510c77c6(); // Function AIModule.BTTask_BlueprintBase.*7a510c77c6 // Final|Native|Protected|BlueprintCallable // @ game+0x5fa1d4c
	void *5ed3b8dc49(); // Function AIModule.BTTask_BlueprintBase.*5ed3b8dc49 // Final|Native|Protected|BlueprintCallable // @ game+0x5f9e24c
	void *61868200b4(); // Function AIModule.BTTask_BlueprintBase.*61868200b4 // Final|Native|Protected|BlueprintCallable // @ game+0x5fa1ddc
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

	struct F*be5588f051 OnMoveCompleted(); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // Final|Native|Public // @ game+0x5f9afd4
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	struct UObject* *35e333fcb6(); // Function AIModule.AIBlueprintHelperLibrary.*35e333fcb6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f9bd54
	void *8ba6bdb62c(struct UClass* PawnClass, struct FVector Location, bool bNoCollisionFail); // Function AIModule.AIBlueprintHelperLibrary.*8ba6bdb62c // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5f9bfd8
	float *0b2e28b400(bool bStopOnOverlap); // Function AIModule.AIBlueprintHelperLibrary.*0b2e28b400 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5f99544
	void *e25af5373a(struct FVector Location); // Function AIModule.AIBlueprintHelperLibrary.*e25af5373a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f9a37c
	bool *0c3bc3702a(); // Function AIModule.AIBlueprintHelperLibrary.*0c3bc3702a // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x5f9a674
	struct FRotator *ca0ce74136(); // Function AIModule.AIBlueprintHelperLibrary.*ca0ce74136 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f9a464
	void *b97becee2f(); // Function AIModule.AIBlueprintHelperLibrary.*b97becee2f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f9a280
	void *5c3c8c430a(); // Function AIModule.AIBlueprintHelperLibrary.*5c3c8c430a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f99764
	struct AActor* GetBlackboard(); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f99b0c
	void *75712c57eb(struct UAnimInstance* AnimInstance); // Function AIModule.AIBlueprintHelperLibrary.*75712c57eb // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x5f9c294
};

// Class AIModule.*45fe1dd2b0
// Size: 0x28 (Inherited: 0x28)
struct U*45fe1dd2b0 : UInterface {
};

// Class AIModule.*78800ae671
// Size: 0x28 (Inherited: 0x28)
struct U*78800ae671 : UInterface {
};

// Class AIModule.DetourCrowdAIController
// Size: 0x500 (Inherited: 0x500)
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.GridPathAIController
// Size: 0x500 (Inherited: 0x500)
struct AGridPathAIController : AAIController {
};

// Class AIModule.*73f3405f99
// Size: 0x28 (Inherited: 0x28)
struct U*73f3405f99 : UObject {
};

// Class AIModule.*533b8784bd
// Size: 0x40 (Inherited: 0x28)
struct U*533b8784bd : U*73f3405f99 {
	struct FName ParamName; // 0x28(0x08)
	float FloatValue; // 0x30(0x04)
	int32 IntValue; // 0x34(0x04)
	bool *c46a7efbc1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class AIModule.*0282138bac
// Size: 0x50 (Inherited: 0x40)
struct U*0282138bac : U*533b8784bd {
	float Min; // 0x40(0x04)
	float Max; // 0x44(0x04)
	char *03eda704b4 : 1; // 0x48(0x01)
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
	struct TArray<struct UAISense*> *39006018f6; // 0x80(0x10)
	float PerceptionAgingRate; // 0x90(0x04)
	char pad_94[0x9c]; // 0x94(0x9c)

	struct AActor* *c004b687e2(); // Function AIModule.AIPerceptionSystem.*c004b687e2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f9b384
	void *ccc40905f6(struct UObject* WorldContext); // Function AIModule.AIPerceptionSystem.*ccc40905f6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f9b980
	void *85dac1aec3(); // Function AIModule.AIPerceptionSystem.*85dac1aec3 // Final|Native|Public|BlueprintCallable // @ game+0x5f9b6dc
	struct F*a946306d11 *3a9facc67c(); // Function AIModule.AIPerceptionSystem.*3a9facc67c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f9a110
	struct AActor* OnPerceptionStimuliSourceEndPlay(); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // Final|Native|Protected // @ game+0x5f9b224
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x210 (Inherited: 0x1f0)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct TArray<struct UClass*> RegisterAsSourceForSenses; // 0x1f8(0x10)
	char pad_208[0x8]; // 0x208(0x08)

	void *c2d5ce44e4(); // Function AIModule.AIPerceptionStimuliSourceComponent.*c2d5ce44e4 // Final|Native|Public|BlueprintCallable // @ game+0x5f9c3c4
	void *1d237280f4(); // Function AIModule.AIPerceptionStimuliSourceComponent.*1d237280f4 // Final|Native|Public|BlueprintCallable // @ game+0x5f9b2f4
	void *74e52f74e7(); // Function AIModule.AIPerceptionStimuliSourceComponent.*74e52f74e7 // Final|Native|Public|BlueprintCallable // @ game+0x5f9c3d8
	void *78c4ecd78e(); // Function AIModule.AIPerceptionStimuliSourceComponent.*78c4ecd78e // Final|Native|Public|BlueprintCallable // @ game+0x5f9b4a0
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
	struct UClass* ListenerDataType; // 0x120(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x128(0x10)
	struct TArray<struct U*f46c1b43a5*> *e53dfb64fa; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)

	struct AActor* OnListenerRegistered(); // Function AIModule.AISense_Blueprint.OnListenerRegistered // Event|Public|BlueprintEvent // @ game+0x293938
	struct TArray<struct U*f46c1b43a5*> OnUpdate(); // Function AIModule.AISense_Blueprint.OnUpdate // Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void OnListenerUpdated(); // Function AIModule.AISense_Blueprint.OnListenerUpdated // Event|Public|BlueprintEvent // @ game+0x293938
	struct AActor* OnListenerUnregistered(); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // Event|Public|BlueprintEvent // @ game+0x293938
	void *0f61ec161d(); // Function AIModule.AISense_Blueprint.*0f61ec161d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99938
	void *ca42431214(); // Function AIModule.AISense_Blueprint.*ca42431214 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f99a00
	void K2_OnNewPawn(); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // Event|Public|BlueprintEvent // @ game+0x293938
};

// Class AIModule.AISense_Damage
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Damage : UAISense {
	struct TArray<struct F*674506a016> *0fae3f657e; // 0x120(0x10)

	float *2bb4c5dfda(struct FVector EventLocation); // Function AIModule.AISense_Damage.*2bb4c5dfda // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5f9b4b4
};

// Class AIModule.AISense_Hearing
// Size: 0x190 (Inherited: 0x120)
struct UAISense_Hearing : UAISense {
	struct TArray<struct F*940acac9e9> *ff019c727a; // 0x120(0x10)
	float SpeedOfSoundSq; // 0x130(0x04)
	char pad_134[0x5c]; // 0x134(0x5c)

	void *663b78d91a(struct FVector NoiseLocation, struct AActor* Instigator); // Function AIModule.AISense_Hearing.*663b78d91a // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5f9b76c
};

// Class AIModule.AISense_Prediction
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Prediction : UAISense {
	struct TArray<struct F*a98d6b3f60> *0fae3f657e; // 0x120(0x10)

	void *6bf6017906(struct AActor* PredictedActor); // Function AIModule.AISense_Prediction.*6bf6017906 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f9bb7c
	struct AActor* *31e875aa6e(); // Function AIModule.AISense_Prediction.*31e875aa6e // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f9ba60
};

// Class AIModule.AISense_Team
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Team : UAISense {
	struct TArray<struct F*297b7f9f76> *0fae3f657e; // 0x120(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0x130 (Inherited: 0x120)
struct UAISense_Touch : UAISense {
	struct TArray<struct F*1b6aa77b4c> *0fae3f657e; // 0x120(0x10)
};

// Class AIModule.*642459d857
// Size: 0x100 (Inherited: 0x100)
struct U*642459d857 : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Blueprint : U*64730ad89a {
	struct UClass* Implementation; // 0x48(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Damage : U*64730ad89a {
	struct UClass* Implementation; // 0x48(0x08)
};

// Class AIModule.*daa5fc0f35
// Size: 0x48 (Inherited: 0x48)
struct U*daa5fc0f35 : U*64730ad89a {
};

// Class AIModule.*bfa74b3273
// Size: 0x48 (Inherited: 0x48)
struct U*bfa74b3273 : U*64730ad89a {
};

// Class AIModule.*951b1efb29
// Size: 0x48 (Inherited: 0x48)
struct U*951b1efb29 : U*64730ad89a {
};

// Class AIModule.*f46c1b43a5
// Size: 0x28 (Inherited: 0x28)
struct U*f46c1b43a5 : UObject {
};

// Class AIModule.*49b215a50d
// Size: 0x58 (Inherited: 0x28)
struct U*49b215a50d : U*f46c1b43a5 {
	struct F*674506a016 Event; // 0x28(0x30)
};

// Class AIModule.*b07f971cd7
// Size: 0x58 (Inherited: 0x28)
struct U*b07f971cd7 : U*f46c1b43a5 {
	struct F*940acac9e9 Event; // 0x28(0x30)
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
	struct UEnvQueryManager* *47f214d20c; // 0x88(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0x90(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> *8546498508; // 0x98(0x10)
	struct UAIHotSpotManager* *68636749f0; // 0xa8(0x08)
	struct U*f5ba415de7* *35758f2b39; // 0xb0(0x08)
	char pad_B8[0x58]; // 0xb8(0x58)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // Exec|Native|Public // @ game+0x57eecdc
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // Exec|Native|Public // @ game+0x5f9ce80
};

// Class AIModule.AITask
// Size: 0x70 (Inherited: 0x68)
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; // 0x68(0x08)
};

// Class AIModule.AITask_LockLogic
// Size: 0x70 (Inherited: 0x70)
struct UAITask_LockLogic : UAITask {
};

// Class AIModule.AITask_MoveTo
// Size: 0x120 (Inherited: 0x70)
struct UAITask_MoveTo : UAITask {
	struct FMulticastDelegate OnRequestFailed; // 0x70(0x10)
	struct FMulticastDelegate OnMoveFinished; // 0x80(0x10)
	struct F*208456e7fe *72ee7ff844; // 0x90(0x50)
	char pad_E0[0x40]; // 0xe0(0x40)

	void AIMoveTo(struct AAIController* Controller, struct AActor* GoalActor, enum class EAIOptionFlag StopOnOverlap, bool bUsePathfinding); // Function AIModule.AITask_MoveTo.AIMoveTo // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5f9ce98
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

	struct UEnvQuery* *7ee4a9f5b0(); // Function AIModule.AITask_RunEQS.*7ee4a9f5b0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fa0874
};

// Class AIModule.BrainComponent
// Size: 0x250 (Inherited: 0x1f0)
struct UBrainComponent : UActorComponent {
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0x1f8(0x08)
	struct AAIController* *0211fe195c; // 0x200(0x08)
	char pad_208[0x48]; // 0x208(0x48)

	void IsRunning(); // Function AIModule.BrainComponent.IsRunning // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x57d4b48
	void *11c9f2098f(); // Function AIModule.BrainComponent.*11c9f2098f // Native|Public|BlueprintCallable // @ game+0x5fa2d38
	void *6b6f4aefed(); // Function AIModule.BrainComponent.*6b6f4aefed // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5fa021c
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // Native|Public|BlueprintCallable // @ game+0x79cdc8
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x390 (Inherited: 0x250)
struct UBehaviorTreeComponent : UBrainComponent {
	char pad_250[0x20]; // 0x250(0x20)
	struct TArray<struct UBTNode*> *23c6dfd3ef; // 0x270(0x10)
	char pad_280[0x110]; // 0x280(0x110)

	struct FGameplayTag *ab437dff5c(); // Function AIModule.BehaviorTreeComponent.*ab437dff5c // Native|Public|BlueprintCallable // @ game+0x5fa1c6c
	struct FGameplayTag *1e02b422fa(float CooldownDuration); // Function AIModule.BehaviorTreeComponent.*1e02b422fa // Final|Native|Public|BlueprintCallable // @ game+0x5f9d16c
	void *e61c952874(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.*e61c952874 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9f948
};

// Class AIModule.BTCompositeNode
// Size: 0xe0 (Inherited: 0x68)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct F*fa7c63d899> Children; // 0x68(0x10)
	struct TArray<struct UBTService*> Services; // 0x78(0x10)
	char pad_88[0x58]; // 0x88(0x58)
};

// Class AIModule.BehaviorTree
// Size: 0x60 (Inherited: 0x28)
struct UBehaviorTree : UObject {
	struct UBTCompositeNode* RootNode; // 0x28(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x30(0x08)
	struct TArray<struct UBTDecorator*> *facabbe4a2; // 0x38(0x10)
	struct TArray<struct F*74f592b89b> *fc6969be65; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class AIModule.BehaviorTreeManager
// Size: 0x50 (Inherited: 0x28)
struct UBehaviorTreeManager : UObject {
	int32 MaxDebuggerSteps; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct F*afb24ac7ad> *f837e8d328; // 0x30(0x10)
	struct TArray<struct UBehaviorTreeComponent*> *7c956e23ab; // 0x40(0x10)
};

// Class AIModule.BlackboardData
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x30(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x38(0x10)
	char *84710828bb : 1; // 0x48(0x01)
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
	struct UClass* *d254f77890; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x30(0x08)
	struct FString EnumName; // 0x38(0x10)
	char *6dc2034d47 : 1; // 0x48(0x01)
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
	struct UClass* *d254f77890; // 0x30(0x08)
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

	struct UBTNode* *73a141535b(); // Function AIModule.BTFunctionLibrary.*73a141535b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f9f410
	void *2987021131(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.*2987021131 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5fa153c
	struct FBlackboardKeySelector *2c21ad2d2d(); // Function AIModule.BTFunctionLibrary.*2c21ad2d2d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f9e5a0
	struct UBTNode* *2c9e14c0dd(struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.*2c9e14c0dd // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5fa1384
	void *45eb1bf8cd(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.*45eb1bf8cd // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5fa1a94
	struct FBlackboardKeySelector *bad3590386(); // Function AIModule.BTFunctionLibrary.*bad3590386 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f9ee48
	struct UBTNode* *121a62e899(struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.*121a62e899 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5fa0b2c
	void *8e6f7e8701(struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.*8e6f7e8701 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f9e424
	struct UBTNode* *9a752bb0c2(); // Function AIModule.BTFunctionLibrary.*9a752bb0c2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fa2c70
	struct UBTNode* *de17ad9ec5(struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.*de17ad9ec5 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5fa16f4
	void *51d4845e3b(); // Function AIModule.BTFunctionLibrary.*51d4845e3b // Final|Native|Static|Public|BlueprintCallable // @ game+0x574dac0
	struct UBTNode* GetOwnersBlackboard(); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f9f4a0
	struct FBlackboardKeySelector *71b5ffd5e5(); // Function AIModule.BTFunctionLibrary.*71b5ffd5e5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f9eb4c
	void *d961ffcf8b(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.*d961ffcf8b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5fa0ea0
	struct FBlackboardKeySelector *251c9c3236(); // Function AIModule.BTFunctionLibrary.*251c9c3236 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f9e720
	struct FBlackboardKeySelector *98015601a6(); // Function AIModule.BTFunctionLibrary.*98015601a6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5fa1058
	void *1b6fac1e91(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.*1b6fac1e91 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f9dcbc
	struct FBlackboardKeySelector *4380c253ec(); // Function AIModule.BTFunctionLibrary.*4380c253ec // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f9e9d0
	struct FBlackboardKeySelector *17de1d0cd3(); // Function AIModule.BTFunctionLibrary.*17de1d0cd3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f9ecc8
	void *1a4de83c0e(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.*1a4de83c0e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f9dcbc
	void *e56410e524(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.*e56410e524 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f9e2f4
	struct FBlackboardKeySelector *603f0b4280(); // Function AIModule.BTFunctionLibrary.*603f0b4280 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5fa0ce8
	void *8675f60f4a(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.*8675f60f4a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5fa11cc
	struct FBlackboardKeySelector *2d470b4c8c(); // Function AIModule.BTFunctionLibrary.*2d470b4c8c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x5f9f0f8
	struct FBlackboardKeySelector *fadf66012c(); // Function AIModule.BTFunctionLibrary.*fadf66012c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f9ef88
	void *819e61cf0b(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.*819e61cf0b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f9e89c
	struct FBlackboardKeySelector *b5afd10bb9(); // Function AIModule.BTFunctionLibrary.*b5afd10bb9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5fa18cc
};

// Class AIModule.*895a1752a5
// Size: 0xd0 (Inherited: 0xd0)
struct U*895a1752a5 : UBTDecorator_Blackboard {
};

// Class AIModule.*eabef75c79
// Size: 0xe0 (Inherited: 0xa0)
struct U*eabef75c79 : UBTDecorator_BlackboardBase {
	float *b77e1f3357; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAIDataProviderFloatValue *1343129565; // 0xa8(0x30)
	enum class FAIDistanceType *93d8b11eba; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	char bUseParametrizedRadius : 1; // 0xdc(0x01)
	char *2983973ef8 : 1; // 0xdc(0x01)
	char bPathFindingBasedTest : 1; // 0xdc(0x01)
	char pad_DC_3 : 5; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
};

// Class AIModule.*a645269c28
// Size: 0xa8 (Inherited: 0xa0)
struct U*a645269c28 : UBTDecorator_BlackboardBase {
	struct UClass* *2e40a4c44c; // 0xa0(0x08)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xb0 (Inherited: 0x78)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* *0211fe195c; // 0x78(0x08)
	struct AActor* *539fd8f1e5; // 0x80(0x08)
	struct TArray<struct FName> *c51d521f89; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)
	char *eb76bcc2b1 : 1; // 0xa8(0x01)
	char *ed89f9c1fc : 1; // 0xa8(0x01)
	char *c2ef3f27d8 : 1; // 0xa8(0x01)
	char pad_A8_3 : 5; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void ReceiveExecutionStart(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveObserverDeactivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveTick(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveExecutionStartAI(struct AAIController* OwnerController); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // Event|Protected|BlueprintEvent // @ game+0x293938
	void *2acf771e6a(); // Function AIModule.BTDecorator_BlueprintBase.*2acf771e6a // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5fa01d4
	struct APawn* ReceiveTickAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveObserverActivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // Event|Protected|BlueprintEvent // @ game+0x293938
	struct AAIController* ReceiveObserverDeactivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // Event|Protected|BlueprintEvent // @ game+0x293938
	struct APawn* PerformConditionCheckAI(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveObserverActivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveExecutionFinishAI(struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // Event|Protected|BlueprintEvent // @ game+0x293938
	struct AActor* PerformConditionCheck(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // Event|Protected|BlueprintEvent // @ game+0x293938
	struct AActor* ReceiveExecutionFinish(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // Event|Protected|BlueprintEvent // @ game+0x293938
	void *9e77a02a51(); // Function AIModule.BTDecorator_BlueprintBase.*9e77a02a51 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5fa01f8
};

// Class AIModule.*22fc046cbc
// Size: 0xd8 (Inherited: 0x78)
struct U*22fc046cbc : UBTDecorator {
	struct FBlackboardKeySelector *3f6b779a45; // 0x78(0x28)
	enum class EGameplayContainerMatchType *274c1c6dc6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FGameplayTagContainer GameplayTags; // 0xa8(0x20)
	struct FString *8194d480d2; // 0xc8(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xd0 (Inherited: 0x78)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FBlackboardKeySelector *d157846f65; // 0x80(0x28)
	struct FBlackboardKeySelector *1ff49137a9; // 0xa8(0x28)
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0x100 (Inherited: 0x78)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float *a200831573; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FBlackboardKeySelector *df082ecbe6; // 0x80(0x28)
	struct FBlackboardKeySelector *0ba5f0a9d7; // 0xa8(0x28)
	struct FBlackboardKeySelector *eb2e5cf716; // 0xd0(0x28)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x80 (Inherited: 0x78)
struct UBTDecorator_Cooldown : UBTDecorator {
	float *e1bf8095ec; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xd8 (Inherited: 0x78)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector *d157846f65; // 0x78(0x28)
	struct FBlackboardKeySelector *1ff49137a9; // 0xa0(0x28)
	char *44f9ce1799 : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	enum class EPathExistanceQueryType *e02f1acb3e; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct UClass* *7692f634d9; // 0xd0(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x78 (Inherited: 0x78)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xd8 (Inherited: 0x78)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float *a200831573; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FBlackboardKeySelector *df082ecbe6; // 0x80(0x28)
	struct FBlackboardKeySelector *eb2e5cf716; // 0xa8(0x28)
	char *c98710063f : 1; // 0xd0(0x01)
	char *27ff06e247 : 1; // 0xd0(0x01)
	char pad_D0_2 : 6; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x88 (Inherited: 0x78)
struct UBTDecorator_Loop : UBTDecorator {
	int32 *a41593041a; // 0x78(0x04)
	bool bInfiniteLoop; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float *d09f094725; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x78 (Inherited: 0x78)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.*1611ee13fb
// Size: 0x88 (Inherited: 0x78)
struct U*1611ee13fb : UBTDecorator {
	struct FGameplayTag *c4f2132ae4; // 0x78(0x08)
	float *1ee55b69d2; // 0x80(0x04)
	bool *eadfcade1a; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// Class AIModule.*40a28b04f7
// Size: 0x88 (Inherited: 0x78)
struct U*40a28b04f7 : UBTDecorator {
	struct FGameplayTag *c4f2132ae4; // 0x78(0x08)
	float *1ee55b69d2; // 0x80(0x04)
	bool *eadfcade1a; // 0x84(0x01)
	bool bActivatesCooldown; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x80 (Inherited: 0x78)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class AIModule.*2bc6aa1f60
// Size: 0x130 (Inherited: 0xa8)
struct U*2bc6aa1f60 : UBTService_BlackboardBase {
	struct F*be9355b76c *2781bb5b52; // 0xa8(0x48)
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
	enum class EBTParallelMode *8185fa172a; // 0xd8(0x01)
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
	struct UEnvQuery* *3d66e7d2bc; // 0xa8(0x08)
	struct TArray<struct FEnvNamedValue> *91522057ce; // 0xb0(0x10)
	struct TArray<struct F*91be99e2f4> *1517cc4bc2; // 0xc0(0x10)
	enum class EEnvQueryRunMode *8b7badce7d; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FBlackboardKeySelector *ad95ac839e; // 0xd8(0x28)
	bool bUseBBKey; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct F*be9355b76c *2781bb5b52; // 0x108(0x48)
	char pad_150[0x40]; // 0x150(0x40)
};

// Class AIModule.*53fc978dd0
// Size: 0x88 (Inherited: 0x80)
struct U*53fc978dd0 : UBTTaskNode {
	char *574b975d29 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_MakeNoise : UBTTaskNode {
	float *a3b10e3c41; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.*b06225afcb
// Size: 0x80 (Inherited: 0x80)
struct U*b06225afcb : UBTTaskNode {
};

// Class AIModule.*db1b54329c
// Size: 0x88 (Inherited: 0x80)
struct U*db1b54329c : U*b06225afcb {
	struct U*529104dcc3* Action; // 0x80(0x08)
};

// Class AIModule.*d51eaf77e6
// Size: 0x100 (Inherited: 0x80)
struct U*d51eaf77e6 : UBTTaskNode {
	struct UAnimationAsset* *6e6c3bef6d; // 0x80(0x08)
	char bLooping : 1; // 0x88(0x01)
	char *3db4387b27 : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UBehaviorTreeComponent* *f67911a4d2; // 0x90(0x08)
	struct USkeletalMeshComponent* *9673adbe2d; // 0x98(0x08)
	char pad_A0[0x60]; // 0xa0(0x60)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* *79121c5d32; // 0x80(0x08)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x88 (Inherited: 0x80)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x80(0x08)
};

// Class AIModule.*f3cf68ba12
// Size: 0x98 (Inherited: 0x80)
struct U*f3cf68ba12 : UBTTaskNode {
	struct FGameplayTag *5259afdcbd; // 0x80(0x08)
	struct UBehaviorTree* *3d064d8982; // 0x88(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x90(0x08)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.CrowdManager
// Size: 0xe8 (Inherited: 0x28)
struct UCrowdManager : UObject {
	struct ANavigationData* *ffe00a80d5; // 0x28(0x08)
	struct TArray<struct F*e8c6a47662> AvoidanceConfig; // 0x30(0x10)
	struct TArray<struct F*9993e90451> SamplingPatterns; // 0x40(0x10)
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
	struct FName *680c7ed1e9; // 0x30(0x08)
	struct TArray<struct UEnvQueryOption*> Options; // 0x38(0x10)
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char pad_28[0x8]; // 0x28(0x08)

	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x293938
	void ProvideSingleLocation(struct UObject* QuerierObject); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation // Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const // @ game+0x293938
	struct AActor* ProvideLocationsSet(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x293938
	void ProvideSingleActor(struct UObject* QuerierObject); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x293938
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.*3d9a00ca58
// Size: 0x28 (Inherited: 0x28)
struct U*3d9a00ca58 : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.*26c95fce24
// Size: 0x78 (Inherited: 0x28)
struct U*26c95fce24 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	int32 QueryID; // 0x30(0x04)
	char pad_34[0x24]; // 0x34(0x24)
	struct UClass* ItemType; // 0x58(0x08)
	int32 OptionIndex; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FMulticastDelegate OnQueryFinishedEvent; // 0x68(0x10)

	void *23d0a24371(); // Function AIModule.*26c95fce24.*23d0a24371 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5f9f71c
	int32 *b3e0f97d00(); // Function AIModule.*26c95fce24.*b3e0f97d00 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5f9f238
	void EQSQueryDoneSignature__DelegateSignature(struct U*26c95fce24* QueryInstance); // DelegateFunction AIModule.*26c95fce24.EQSQueryDoneSignature__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void *bda72ca2f5(); // Function AIModule.*26c95fce24.*bda72ca2f5 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5f9f7a4
	struct FName *3416a46e02(); // Function AIModule.*26c95fce24.*3416a46e02 // Final|Native|Public|BlueprintCallable // @ game+0x5fa1f98
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
	struct TArray<struct F*06d8ff006d> *6ce0cd1adb; // 0xa0(0x10)
	struct TArray<struct UEnvQueryContext*> *c5ddda9943; // 0xb0(0x10)
	struct TArray<struct U*26c95fce24*> *e9d9bea022; // 0xc0(0x10)
	char pad_D0[0x54]; // 0xd0(0x54)
	float MaxAllowedTestingTime; // 0x124(0x04)
	bool bTestQueriesUsingBreadth; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32 QueryCountWarningThreshold; // 0x12c(0x04)
	double QueryCountWarningInterval; // 0x130(0x08)

	struct UClass* RunEQSQuery(); // Function AIModule.EnvQueryManager.RunEQSQuery // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fa096c
};

// Class AIModule.*2fdd018e14
// Size: 0x30 (Inherited: 0x28)
struct U*2fdd018e14 : UObject {
	int32 *8388fb8987; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x50 (Inherited: 0x30)
struct UEnvQueryGenerator : U*2fdd018e14 {
	struct FString OptionName; // 0x30(0x10)
	struct UClass* *466d4d9ab0; // 0x40(0x08)
	char *9e1dcb5f52 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AIModule.*9f68055b1c
// Size: 0xc0 (Inherited: 0x50)
struct U*9f68055b1c : UEnvQueryGenerator {
	struct UClass* *d1efbc350e; // 0x50(0x08)
	struct FAIDataProviderBoolValue *b76319ce5c; // 0x58(0x30)
	struct FAIDataProviderFloatValue SearchRadius; // 0x88(0x30)
	struct UClass* *0a64c5eefe; // 0xb8(0x08)
};

// Class AIModule.*8b4da7a886
// Size: 0x80 (Inherited: 0x50)
struct U*8b4da7a886 : UEnvQueryGenerator {
	struct FText *54e66a9050; // 0x50(0x18)
	struct UClass* Context; // 0x68(0x08)
	struct UClass* *25d8443bca; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)

	void *aa978965d9(); // Function AIModule.*8b4da7a886.*aa978965d9 // Final|Native|Public|BlueprintCallable|Const // @ game+0x5f9d2a4
	void *5043431cc6(); // Function AIModule.*8b4da7a886.*5043431cc6 // Final|Native|Public|HasDefaults|BlueprintCallable|Const // @ game+0x5f9d334
	void *8e488719c0(); // Function AIModule.*8b4da7a886.*8e488719c0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9f58c
	void DoItemGeneration(); // Function AIModule.*8b4da7a886.DoItemGeneration // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x293938
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x68 (Inherited: 0x50)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x50(0x10)
	bool *d96dc6a234; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class AIModule.*ddf360f601
// Size: 0x58 (Inherited: 0x50)
struct U*ddf360f601 : UEnvQueryGenerator {
	struct UClass* *db3dba06bf; // 0x50(0x08)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x80 (Inherited: 0x50)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData *d330b8ff06; // 0x50(0x30)
};

// Class AIModule.*9d78daf8d3
// Size: 0x150 (Inherited: 0x80)
struct U*9d78daf8d3 : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *c1a6cb876c; // 0x80(0x30)
	struct FAIDataProviderFloatValue *bbbc249c35; // 0xb0(0x30)
	struct FAIDataProviderFloatValue *5e50c723e8; // 0xe0(0x30)
	struct FAIDataProviderFloatValue Range; // 0x110(0x30)
	struct UClass* *156d0971c0; // 0x140(0x08)
	char *18db033236 : 1; // 0x148(0x01)
	char pad_148_1 : 7; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class AIModule.*df17c22ca2
// Size: 0x1a8 (Inherited: 0x80)
struct U*df17c22ca2 : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x80(0x30)
	struct FAIDataProviderFloatValue OuterRadius; // 0xb0(0x30)
	struct FAIDataProviderIntValue *4341130305; // 0xe0(0x30)
	struct FAIDataProviderIntValue *fb0073a559; // 0x110(0x30)
	struct FEnvDirection ArcDirection; // 0x140(0x20)
	struct FAIDataProviderFloatValue *bc7b7cc012; // 0x160(0x30)
	bool *da6836f009; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct UClass* Center; // 0x198(0x08)
	char bDefineArc : 1; // 0x1a0(0x01)
	char pad_1A0_1 : 7; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x1e8 (Inherited: 0x80)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *b724381a1d; // 0x80(0x30)
	struct FAIDataProviderFloatValue *cc0f5d6a71; // 0xb0(0x30)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xe0(0x30)
	enum class *13564ac2a0 *c95150b76e; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FEnvDirection ArcDirection; // 0x118(0x20)
	struct FAIDataProviderFloatValue *bc7b7cc012; // 0x138(0x30)
	float *97f02b5e23; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UClass* *cfd6e710fc; // 0x170(0x08)
	bool *277cbc1c4d; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct FAIDataProviderFloatValue *7d34a7aaa7; // 0x180(0x30)
	struct FEnvTraceData TraceData; // 0x1b0(0x30)
	char bDefineArc : 1; // 0x1e0(0x01)
	char pad_1E0_1 : 7; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xe8 (Inherited: 0x80)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x80(0x30)
	struct FAIDataProviderFloatValue *cc0f5d6a71; // 0xb0(0x30)
	struct UClass* *0915d4710f; // 0xe0(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x150 (Inherited: 0xe8)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue *4be24098a3; // 0xe8(0x30)
	struct UClass* NavigationFilter; // 0x118(0x08)
	struct FAIDataProviderFloatValue *49c6433d4c; // 0x120(0x30)
};

// Class AIModule.EnvQueryTest
// Size: 0x1c0 (Inherited: 0x30)
struct UEnvQueryTest : U*2fdd018e14 {
	int32 *4c64cb17d0; // 0x30(0x04)
	enum class EEnvTestPurpose *c70046e4fe; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FString *227f0ea5b5; // 0x38(0x10)
	enum class *198a3bae68 *61c0c27464; // 0x48(0x01)
	enum class *b804ee6a41 *13939fa2a1; // 0x49(0x01)
	enum class EEnvTestFilterType *36e100d9d8; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	struct FAIDataProviderBoolValue *c46a7efbc1; // 0x50(0x30)
	struct FAIDataProviderFloatValue *3c80ac7ea7; // 0x80(0x30)
	struct FAIDataProviderFloatValue *28430e5659; // 0xb0(0x30)
	char pad_E0[0x1]; // 0xe0(0x01)
	enum class EEnvTestScoreEquation *51d7fa7d19; // 0xe1(0x01)
	enum class EEnvQueryTestClamping *d1d85233a1; // 0xe2(0x01)
	enum class EEnvQueryTestClamping *f06e110649; // 0xe3(0x01)
	enum class EEQSNormalizationType *379234d864; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct FAIDataProviderFloatValue *4bff51443f; // 0xe8(0x30)
	struct FAIDataProviderFloatValue *c3914b2e6d; // 0x118(0x30)
	struct FAIDataProviderFloatValue *f376ab9fa9; // 0x148(0x30)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x178(0x30)
	bool bDefineReferenceValue; // 0x1a8(0x01)
	char pad_1A9[0xf]; // 0x1a9(0x0f)
	char *030e5d930e : 1; // 0x1b8(0x01)
	char pad_1B8_1 : 7; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x1d0 (Inherited: 0x1c0)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class *16c724fc3f *c2adb44cbf; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UClass* DistanceTo; // 0x1c8(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x208 (Inherited: 0x1c0)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection *d8551b3b99; // 0x1c0(0x20)
	struct FEnvDirection *36ffdfbdac; // 0x1e0(0x20)
	enum class *f9b10bd6fc *c2adb44cbf; // 0x200(0x01)
	bool *5f13382996; // 0x201(0x01)
	char pad_202[0x6]; // 0x202(0x06)
};

// Class AIModule.*952a868a10
// Size: 0x230 (Inherited: 0x1c0)
struct U*952a868a10 : UEnvQueryTest {
	struct FGameplayTagQuery *510f9754ca; // 0x1c0(0x48)
	bool *432120c4b5; // 0x208(0x01)
	enum class EGameplayContainerMatchType *274c1c6dc6; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
	struct FGameplayTagContainer GameplayTags; // 0x210(0x20)
};

// Class AIModule.*d1acb9313e
// Size: 0x1e0 (Inherited: 0x1c0)
struct U*d1acb9313e : UEnvQueryTest {
	struct F*bbba0bf1a9 *39b91a2383; // 0x1c0(0x20)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x238 (Inherited: 0x1c0)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding *c2adb44cbf; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UClass* Context; // 0x1c8(0x08)
	struct FAIDataProviderBoolValue *d266d7f609; // 0x1d0(0x30)
	struct FAIDataProviderBoolValue *fa7881ae53; // 0x200(0x30)
	struct UClass* *7692f634d9; // 0x230(0x08)
};

// Class AIModule.*ee260b8590
// Size: 0x268 (Inherited: 0x238)
struct U*ee260b8590 : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue *49c6433d4c; // 0x238(0x30)
};

// Class AIModule.*911375bfb1
// Size: 0x1f0 (Inherited: 0x1c0)
struct U*911375bfb1 : UEnvQueryTest {
	struct FEnvTraceData *d330b8ff06; // 0x1c0(0x30)
};

// Class AIModule.*5093e129f0
// Size: 0x1c0 (Inherited: 0x1c0)
struct U*5093e129f0 : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x288 (Inherited: 0x1c0)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x1c0(0x30)
	struct FAIDataProviderBoolValue *aa3b7b3cf4; // 0x1f0(0x30)
	struct FAIDataProviderFloatValue *ba4ac0e372; // 0x220(0x30)
	struct FAIDataProviderFloatValue *d6d37a327b; // 0x250(0x30)
	struct UClass* Context; // 0x280(0x08)
};

// Class AIModule.EnvQueryOption
// Size: 0x40 (Inherited: 0x28)
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; // 0x28(0x08)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x30(0x10)
};

// Class AIModule.EQSRenderingComponent
// Size: 0x9c0 (Inherited: 0x990)
struct UEQSRenderingComponent : UPrimitiveComponent {
	char pad_990[0x30]; // 0x990(0x30)
};

// Class AIModule.EQSTestingPawn
// Size: 0x8c0 (Inherited: 0x850)
struct AEQSTestingPawn : ACharacter {
	char pad_850[0x8]; // 0x850(0x08)
	struct UEnvQuery* *3d66e7d2bc; // 0x858(0x08)
	struct TArray<struct FEnvNamedValue> *91522057ce; // 0x860(0x10)
	struct TArray<struct F*91be99e2f4> *1517cc4bc2; // 0x870(0x10)
	float *b0d63cc00a; // 0x880(0x04)
	int32 *aaa886cca6; // 0x884(0x04)
	enum class EEnvQueryHightlightMode *1a0a9c6122; // 0x888(0x01)
	char pad_889[0x3]; // 0x889(0x03)
	char *7ebca96a56 : 1; // 0x88c(0x01)
	char *6e1ee557e2 : 1; // 0x88c(0x01)
	char *9ff06da237 : 1; // 0x88c(0x01)
	char *deb4083d8f : 1; // 0x88c(0x01)
	char *ebe6bb61f1 : 1; // 0x88c(0x01)
	char pad_88C_5 : 3; // 0x88c(0x01)
	char pad_88D[0x3]; // 0x88d(0x03)
	enum class EEnvQueryRunMode *87c75bc152; // 0x890(0x01)
	char pad_891[0x2f]; // 0x891(0x2f)
};

// Class AIModule.*216fae228a
// Size: 0x48 (Inherited: 0x48)
struct U*216fae228a : U*10128294dc {
};

// Class AIModule.*f5ba415de7
// Size: 0x58 (Inherited: 0x28)
struct U*f5ba415de7 : UObject {
	char pad_28[0x30]; // 0x28(0x30)

	float *b1182bb04f(bool bRebuildGrids); // Function AIModule.*f5ba415de7.*b1182bb04f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f9d8e4
	void *1827c1d033(float CellSize); // Function AIModule.*f5ba415de7.*1827c1d033 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fa1eb8
	bool *05f112a5c5(); // Function AIModule.*f5ba415de7.*05f112a5c5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f9dabc
	bool *4a54695131(struct UObject* WorldContext, struct FVector Extent); // Function AIModule.*f5ba415de7.*4a54695131 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f9d3d4
	struct FVector *8260ffdecf(float CapsuleRadius, int32 Radius2D, bool bRebuildGrids); // Function AIModule.*f5ba415de7.*8260ffdecf // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f9d670
	int32 *a1d923f79e(); // Function AIModule.*f5ba415de7.*a1d923f79e // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fa0740
	struct FVector *d9cd1db91d(struct TArray<struct FVector> PathPoints); // Function AIModule.*f5ba415de7.*d9cd1db91d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f9dfac
};

// Class AIModule.*57c9fd189f
// Size: 0x4f0 (Inherited: 0x4c0)
struct U*57c9fd189f : UPathFollowingComponent {
	struct U*f5ba415de7* *9cf4bd2303; // 0x4b8(0x08)
	char pad_4C8[0x28]; // 0x4c8(0x28)
};

// Class AIModule.*529104dcc3
// Size: 0xd0 (Inherited: 0x28)
struct U*529104dcc3 : UObject {
	struct U*529104dcc3* *7521987366; // 0x28(0x08)
	struct U*529104dcc3* *a84b508c2e; // 0x30(0x08)
	struct U*b1d8b90a6a* *02b019a270; // 0x38(0x08)
	struct UObject* Instigator; // 0x40(0x08)
	struct UBrainComponent* *ab3d60cc4f; // 0x48(0x08)
	char pad_50[0x68]; // 0x50(0x68)
	char bAllowNewSameClassInstance : 1; // 0xb8(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0xb8(0x01)
	char bShouldPauseMovement : 1; // 0xb8(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0xb8(0x01)
	char pad_B8_4 : 4; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)

	void Finish(); // Function AIModule.*529104dcc3.Finish // Native|Protected|BlueprintCallable // @ game+0x5f9e198
	void *0c970183a0(struct UObject* WorldContextObject); // Function AIModule.*529104dcc3.*0c970183a0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f9ded0
	void *03d042f7d5(); // Function AIModule.*529104dcc3.*03d042f7d5 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5f9e2e0
};

// Class AIModule.*4e275105a6
// Size: 0xd0 (Inherited: 0xd0)
struct U*4e275105a6 : U*529104dcc3 {

	void ActionPause(); // Function AIModule.*4e275105a6.ActionPause // Event|Public|BlueprintEvent // @ game+0x293938
	void ActionTick(struct APawn* ControlledPawn); // Function AIModule.*4e275105a6.ActionTick // Event|Public|BlueprintEvent // @ game+0x293938
	void ActionStart(); // Function AIModule.*4e275105a6.ActionStart // Event|Public|BlueprintEvent // @ game+0x293938
	void ActionResume(); // Function AIModule.*4e275105a6.ActionResume // Event|Public|BlueprintEvent // @ game+0x293938
	void ActionFinished(); // Function AIModule.*4e275105a6.ActionFinished // Event|Public|BlueprintEvent // @ game+0x293938
};

// Class AIModule.*aa242ccb44
// Size: 0x120 (Inherited: 0xd0)
struct U*aa242ccb44 : U*529104dcc3 {
	struct AActor* GoalActor; // 0xd0(0x08)
	struct FVector GoalLocation; // 0xd8(0x0c)
	float AcceptableRadius; // 0xe4(0x04)
	struct UClass* FilterClass; // 0xe8(0x08)
	char bAllowStrafe : 1; // 0xf0(0x01)
	char *2f05344084 : 1; // 0xf0(0x01)
	char *02a0421b2c : 1; // 0xf0(0x01)
	char *68fe1298d2 : 1; // 0xf0(0x01)
	char *7511fbde1c : 1; // 0xf0(0x01)
	char *34df41ec61 : 1; // 0xf0(0x01)
	char *cd643ba9b5 : 1; // 0xf0(0x01)
	char pad_F0_7 : 1; // 0xf0(0x01)
	char pad_F1[0x2f]; // 0xf1(0x2f)
};

// Class AIModule.*4b75cd6345
// Size: 0xf0 (Inherited: 0xd0)
struct U*4b75cd6345 : U*529104dcc3 {
	struct U*529104dcc3* *3512b9c85f; // 0xd0(0x08)
	struct U*529104dcc3* *8c75e312be; // 0xd8(0x08)
	enum class *485462fd67 ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// Class AIModule.*2b1484949a
// Size: 0x100 (Inherited: 0xd0)
struct U*2b1484949a : U*529104dcc3 {
	struct TArray<struct U*529104dcc3*> *69a3bfd9a2; // 0xd0(0x10)
	enum class *485462fd67 ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct U*529104dcc3* *8c75e312be; // 0xe8(0x08)
	char pad_F0[0x10]; // 0xf0(0x10)
};

// Class AIModule.*449897d2a8
// Size: 0xe0 (Inherited: 0xd0)
struct U*449897d2a8 : U*529104dcc3 {
	float *ec437b4009; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
};

// Class AIModule.*b1d8b90a6a
// Size: 0x230 (Inherited: 0x1f0)
struct U*b1d8b90a6a : UActorComponent {
	struct APawn* ControlledPawn; // 0x1f0(0x08)
	struct TArray<struct F*0c0c03d5e3> *f0463a1d35; // 0x1f8(0x10)
	struct TArray<struct F*b0843f664c> *ef90b16744; // 0x208(0x10)
	struct U*529104dcc3* *178dc99385; // 0x218(0x08)
	char pad_220[0x10]; // 0x220(0x10)

	struct U*529104dcc3* *0f6d5022c7(); // Function AIModule.*b1d8b90a6a.*0f6d5022c7 // Final|Native|Public|BlueprintCallable // @ game+0x5fa0394
	struct UObject* *43d28937eb(); // Function AIModule.*b1d8b90a6a.*43d28937eb // Final|Native|Public|BlueprintCallable // @ game+0x5fa0608
	void *953a096317(struct U*529104dcc3* ActionToAbort); // Function AIModule.*b1d8b90a6a.*953a096317 // Final|Native|Public|BlueprintCallable // @ game+0x5fa043c
	enum class EAIRequestPriority *bbc576ed66(); // Function AIModule.*b1d8b90a6a.*bbc576ed66 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5fa04d4
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
	float *4e442538e9; // 0x234(0x04)
	char pad_238[0x8]; // 0x238(0x08)

	struct FVector HearNoiseDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x293938
	void SeePawnDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x293938
	void *8e9723f648(); // Function AIModule.PawnSensingComponent.*8e9723f648 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5fa20a8
	void *167d41072a(); // Function AIModule.PawnSensingComponent.*167d41072a // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5fa2144
	void *402d1ab211(); // Function AIModule.PawnSensingComponent.*402d1ab211 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x5776cbc
	void *a4e757ef97(); // Function AIModule.PawnSensingComponent.*a4e757ef97 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9f55c
	void *70f5527449(); // Function AIModule.PawnSensingComponent.*70f5527449 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9f574
};

// Class AIModule.*47f44af128
// Size: 0x28 (Inherited: 0x28)
struct U*47f44af128 : UObject {
};


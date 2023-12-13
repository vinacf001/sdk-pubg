// Class GameplayTasks.GameplayTasksComponent
// Size: 0x260 (Inherited: 0x1f0)
struct UGameplayTasksComponent : UActorComponent {
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct TArray<struct UGameplayTask*> *49eec4cbba; // 0x1f8(0x10)
	struct TArray<struct UGameplayTask*> *33ceae67cf; // 0x208(0x10)
	char pad_218[0x10]; // 0x218(0x10)
	struct TArray<struct UGameplayTask*> *a3f60aca96; // 0x228(0x10)
	char pad_238[0x8]; // 0x238(0x08)
	struct FMulticastDelegate OnClaimedResourcesChange; // 0x240(0x10)
	char pad_250[0x10]; // 0x250(0x10)

	bool *24f5772186(struct TArray<struct UClass*> AdditionalClaimedResources); // Function GameplayTasks.GameplayTasksComponent.*24f5772186 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f1428c
	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // Final|Native|Public // @ game+0x5f14548
};

// Class GameplayTasks.GameplayTask
// Size: 0x68 (Inherited: 0x28)
struct UGameplayTask : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FName *d82aaafc91; // 0x30(0x08)
	char pad_38[0x2]; // 0x38(0x02)
	enum class *27b03ddb1d ResourceOverlapPolicy; // 0x3a(0x01)
	char pad_3B[0x25]; // 0x3b(0x25)
	struct UGameplayTask* *fa8f44f71b; // 0x60(0x08)

	void *8e3eb59115(); // Function GameplayTasks.GameplayTask.*8e3eb59115 // Final|Native|Public|BlueprintCallable // @ game+0x5f14198
	void *11edce6049(); // Function GameplayTasks.GameplayTask.*11edce6049 // Final|Native|Public|BlueprintCallable // @ game+0x5f1455c
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x32e590
};

// Class GameplayTasks.*05f329b6bd
// Size: 0x28 (Inherited: 0x28)
struct U*05f329b6bd : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTaskResource : UObject {
	int32 ManualResourceID; // 0x28(0x04)
	int8 *676a32e044; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	char bManuallySetID : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x68 (Inherited: 0x68)
struct UGameplayTask_ClaimResource : UGameplayTask {

	void *2199d05991(struct TArray<struct UClass*> ResourceClasses, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.*2199d05991 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f13f4c
	struct FName *a943e293f5(); // Function GameplayTasks.GameplayTask_ClaimResource.*a943e293f5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f13db0
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xa8 (Inherited: 0x68)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastDelegate SUCCESS; // 0x68(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)
	struct UClass* *7be1a1109f; // 0xa0(0x08)

	void FinishSpawningActor(struct UObject* WorldContextObject); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // Native|Public|BlueprintCallable // @ game+0x5f141ac
	void BeginSpawningActor(struct UObject* WorldContextObject); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f13cb4
	bool SpawnActor(); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5f14570
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x98 (Inherited: 0x68)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastDelegate OnFinished; // 0x68(0x10)
	struct FMulticastDelegate OnTimeExpired; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)

	void TaskFinishDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_TimeLimitedExecution.TaskFinishDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x32e590
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x80 (Inherited: 0x68)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastDelegate OnFinish; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)

	bool *0d538c6d5c(); // Function GameplayTasks.GameplayTask_WaitDelay.*0d538c6d5c // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f14770
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x32e590
};


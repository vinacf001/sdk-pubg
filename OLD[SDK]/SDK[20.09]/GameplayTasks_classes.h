// Class GameplayTasks.GameplayTasksComponent
// Size: 0x260 (Inherited: 0x1f0)
struct UGameplayTasksComponent : UActorComponent {
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct TArray<struct UGameplayTask*> *4b45b77fe8; // 0x1f8(0x10)
	struct TArray<struct UGameplayTask*> *5602928e7b; // 0x208(0x10)
	char pad_218[0x10]; // 0x218(0x10)
	struct TArray<struct UGameplayTask*> *6f3bf070a7; // 0x228(0x10)
	char pad_238[0x8]; // 0x238(0x08)
	struct FMulticastDelegate OnClaimedResourcesChange; // 0x240(0x10)
	char pad_250[0x10]; // 0x250(0x10)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // Final|Native|Public // @ game+0x5dbc64c
	struct TArray<struct UClass*> *56b948e4b5(TScriptInterface<struct U*9e473420ba> TaskOwner, bool Priority, struct TArray<struct UClass*> AdditionalRequiredResources); // Function GameplayTasks.GameplayTasksComponent.*56b948e4b5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5dbc390
};

// Class GameplayTasks.GameplayTask
// Size: 0x68 (Inherited: 0x28)
struct UGameplayTask : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FName *713527eb11; // 0x30(0x08)
	char pad_38[0x2]; // 0x38(0x02)
	enum class *3373c6ce7b ResourceOverlapPolicy; // 0x3a(0x01)
	char pad_3B[0x25]; // 0x3b(0x25)
	struct UGameplayTask* *62df22cb6f; // 0x60(0x08)

	void *887635d731(); // Function GameplayTasks.GameplayTask.*887635d731 // Final|Native|Public|BlueprintCallable // @ game+0x5dbc660
	void *263edce6c7(); // Function GameplayTasks.GameplayTask.*263edce6c7 // Final|Native|Public|BlueprintCallable // @ game+0x5dbc29c
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
};

// Class GameplayTasks.*9e473420ba
// Size: 0x28 (Inherited: 0x28)
struct U*9e473420ba : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTaskResource : UObject {
	int32 ManualResourceID; // 0x28(0x04)
	int8 *ea1bc642ef; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	char bManuallySetID : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x68 (Inherited: 0x68)
struct UGameplayTask_ClaimResource : UGameplayTask {
	struct FName *713527eb11; // 0x30(0x08)
	enum class *3373c6ce7b ResourceOverlapPolicy; // 0x3a(0x01)
	struct UGameplayTask* *62df22cb6f; // 0x60(0x08)

	void *887635d731(); // Function GameplayTasks.GameplayTask.*887635d731 // Final|Native|Public|BlueprintCallable // @ game+0x5dbc660
	void *263edce6c7(); // Function GameplayTasks.GameplayTask.*263edce6c7 // Final|Native|Public|BlueprintCallable // @ game+0x5dbc29c
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xa8 (Inherited: 0x68)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastDelegate SUCCESS; // 0x68(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)
	struct UClass* *8e6f50012c; // 0xa0(0x08)

	struct UObject* BeginSpawningActor(struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // Native|Public|HasOutParms|BlueprintCallable // @ game+0x5dbbdb8
	void FinishSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // Native|Public|BlueprintCallable // @ game+0x5dbc2b0
	bool SpawnActor(); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5dbc674
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x98 (Inherited: 0x68)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastDelegate OnFinished; // 0x68(0x10)
	struct FMulticastDelegate OnTimeExpired; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)

	void TaskFinishDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_TimeLimitedExecution.TaskFinishDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x80 (Inherited: 0x68)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastDelegate OnFinish; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)

	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1e037c
	void *15aa1a642d(float Time); // Function GameplayTasks.GameplayTask_WaitDelay.*15aa1a642d // Final|Native|Static|Public|BlueprintCallable // @ game+0x5dbc874
};


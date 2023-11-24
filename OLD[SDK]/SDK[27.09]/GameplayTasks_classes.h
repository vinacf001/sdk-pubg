// Class GameplayTasks.GameplayTasksComponent
// Size: 0x270 (Inherited: 0x200)
struct UGameplayTasksComponent : UActorComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct TArray<struct UGameplayTask*> *4b45b77fe8; // 0x208(0x10)
	struct TArray<struct UGameplayTask*> *5602928e7b; // 0x218(0x10)
	char pad_228[0x10]; // 0x228(0x10)
	struct TArray<struct UGameplayTask*> *6f3bf070a7; // 0x238(0x10)
	char pad_248[0x8]; // 0x248(0x08)
	struct FMulticastDelegate OnClaimedResourcesChange; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // Final|Native|Public // @ game+0x61c4a08
	void *56b948e4b5(); // Function GameplayTasks.GameplayTasksComponent.*56b948e4b5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x61c474c
};

// Class GameplayTasks.GameplayTask
// Size: 0x70 (Inherited: 0x30)
struct UGameplayTask : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FName *713527eb11; // 0x38(0x08)
	char pad_40[0x2]; // 0x40(0x02)
	enum class *3373c6ce7b ResourceOverlapPolicy; // 0x42(0x01)
	char pad_43[0x25]; // 0x43(0x25)
	struct UGameplayTask* *62df22cb6f; // 0x68(0x08)

	void *887635d731(); // Function GameplayTasks.GameplayTask.*887635d731 // Final|Native|Public|BlueprintCallable // @ game+0x61c4a1c
	void *263edce6c7(); // Function GameplayTasks.GameplayTask.*263edce6c7 // Final|Native|Public|BlueprintCallable // @ game+0x61c4658
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
};

// Class GameplayTasks.*9e473420ba
// Size: 0x30 (Inherited: 0x30)
struct U*9e473420ba : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x40 (Inherited: 0x30)
struct UGameplayTaskResource : UObject {
	int32 ManualResourceID; // 0x30(0x04)
	int8 *ea1bc642ef; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bManuallySetID : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x70 (Inherited: 0x70)
struct UGameplayTask_ClaimResource : UGameplayTask {

	void *56f70201f3(); // Function GameplayTasks.GameplayTask_ClaimResource.*56f70201f3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x61c4270
	void *b57dd59ec5(); // Function GameplayTasks.GameplayTask_ClaimResource.*b57dd59ec5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x61c440c
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xb0 (Inherited: 0x70)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastDelegate SUCCESS; // 0x70(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct UClass* *8e6f50012c; // 0xa8(0x08)

	void BeginSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // Native|Public|HasOutParms|BlueprintCallable // @ game+0x61c4174
	void FinishSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // Native|Public|BlueprintCallable // @ game+0x61c466c
	void SpawnActor(); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x61c4a30
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0xa0 (Inherited: 0x70)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastDelegate OnFinished; // 0x70(0x10)
	struct FMulticastDelegate OnTimeExpired; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void TaskFinishDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_TimeLimitedExecution.TaskFinishDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x88 (Inherited: 0x70)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastDelegate OnFinish; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)

	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22ddc4
	void *15aa1a642d(); // Function GameplayTasks.GameplayTask_WaitDelay.*15aa1a642d // Final|Native|Static|Public|BlueprintCallable // @ game+0x61c4c30
};


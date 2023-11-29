// Class GameplayTasks.GameplayTasksComponent
// Size: 0x270 (Inherited: 0x200)
struct UGameplayTasksComponent : UActorComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct TArray<struct UGameplayTask*> *49eec4cbba; // 0x208(0x10)
	struct TArray<struct UGameplayTask*> *33ceae67cf; // 0x218(0x10)
	char pad_228[0x10]; // 0x228(0x10)
	struct TArray<struct UGameplayTask*> *a3f60aca96; // 0x238(0x10)
	char pad_248[0x8]; // 0x248(0x08)
	struct FMulticastDelegate OnClaimedResourcesChange; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)

	enum class EGameplayTaskRunResult *24f5772186(); // Function GameplayTasks.GameplayTasksComponent.*24f5772186 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f0d2e4
	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // Final|Native|Public // @ game+0x5f0d5a0
};

// Class GameplayTasks.GameplayTask
// Size: 0x70 (Inherited: 0x30)
struct UGameplayTask : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FName *d82aaafc91; // 0x38(0x08)
	char pad_40[0x2]; // 0x40(0x02)
	enum class *27b03ddb1d ResourceOverlapPolicy; // 0x42(0x01)
	char pad_43[0x25]; // 0x43(0x25)
	struct UGameplayTask* *fa8f44f71b; // 0x68(0x08)

	void *8e3eb59115(); // Function GameplayTasks.GameplayTask.*8e3eb59115 // Final|Native|Public|BlueprintCallable // @ game+0x5f0d1f0
	void *11edce6049(); // Function GameplayTasks.GameplayTask.*11edce6049 // Final|Native|Public|BlueprintCallable // @ game+0x5f0d5b4
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
};

// Class GameplayTasks.*05f329b6bd
// Size: 0x30 (Inherited: 0x30)
struct U*05f329b6bd : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x40 (Inherited: 0x30)
struct UGameplayTaskResource : UObject {
	int32 ManualResourceID; // 0x30(0x04)
	int8 *676a32e044; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bManuallySetID : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x70 (Inherited: 0x70)
struct UGameplayTask_ClaimResource : UGameplayTask {

	struct UGameplayTask_ClaimResource* *2199d05991(); // Function GameplayTasks.GameplayTask_ClaimResource.*2199d05991 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f0cfa4
	struct UGameplayTask_ClaimResource* *a943e293f5(); // Function GameplayTasks.GameplayTask_ClaimResource.*a943e293f5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f0ce08
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xb0 (Inherited: 0x70)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastDelegate SUCCESS; // 0x70(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct UClass* *7be1a1109f; // 0xa8(0x08)

	struct AActor* FinishSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // Native|Public|BlueprintCallable // @ game+0x5f0d204
	bool BeginSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f0cd0c
	struct UGameplayTask_SpawnActor* SpawnActor(); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5f0d5c8
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0xa0 (Inherited: 0x70)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastDelegate OnFinished; // 0x70(0x10)
	struct FMulticastDelegate OnTimeExpired; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void TaskFinishDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_TimeLimitedExecution.TaskFinishDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x88 (Inherited: 0x70)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastDelegate OnFinish; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)

	struct UGameplayTask_WaitDelay* *0d538c6d5c(); // Function GameplayTasks.GameplayTask_WaitDelay.*0d538c6d5c // Final|Native|Static|Public|BlueprintCallable // @ game+0x5f0d7c8
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1dcd78
};


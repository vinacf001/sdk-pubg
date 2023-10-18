// Class GameplayTasks.GameplayTasksComponent
// Size: 0x270 (Inherited: 0x200)
struct UGameplayTasksComponent : UActorComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct TArray<struct UGameplayTask*> *22beda8612; // 0x208(0x10)
	struct TArray<struct UGameplayTask*> *50b7ed7bd1; // 0x218(0x10)
	char pad_228[0x10]; // 0x228(0x10)
	struct TArray<struct UGameplayTask*> *02c28b0a2b; // 0x238(0x10)
	char pad_248[0x8]; // 0x248(0x08)
	struct FMulticastDelegate OnClaimedResourcesChange; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)

	enum class EGameplayTaskRunResult *824e06f04a(); // Function GameplayTasks.GameplayTasksComponent.*824e06f04a // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e0f710
	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // Final|Native|Public // @ game+0x5e0f9cc
};

// Class GameplayTasks.GameplayTask
// Size: 0x70 (Inherited: 0x30)
struct UGameplayTask : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FName *8f519e168b; // 0x38(0x08)
	char pad_40[0x2]; // 0x40(0x02)
	enum class *80bc88b4fb ResourceOverlapPolicy; // 0x42(0x01)
	char pad_43[0x25]; // 0x43(0x25)
	struct UGameplayTask* *823f56c099; // 0x68(0x08)

	void *aafe2a8a0b(); // Function GameplayTasks.GameplayTask.*aafe2a8a0b // Final|Native|Public|BlueprintCallable // @ game+0x5e0f61c
	void *ac45259a96(); // Function GameplayTasks.GameplayTask.*ac45259a96 // Final|Native|Public|BlueprintCallable // @ game+0x5e0f9e0
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1b829c
};

// Class GameplayTasks.*0cab9d4009
// Size: 0x30 (Inherited: 0x30)
struct U*0cab9d4009 : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x40 (Inherited: 0x30)
struct UGameplayTaskResource : UObject {
	int32 ManualResourceID; // 0x30(0x04)
	int8 *394e88f5a2; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bManuallySetID : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x70 (Inherited: 0x70)
struct UGameplayTask_ClaimResource : UGameplayTask {

	struct UGameplayTask_ClaimResource* *4d8533ca0b(); // Function GameplayTasks.GameplayTask_ClaimResource.*4d8533ca0b // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e0f3d0
	struct UGameplayTask_ClaimResource* *9a1d880afa(); // Function GameplayTasks.GameplayTask_ClaimResource.*9a1d880afa // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e0f234
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xb0 (Inherited: 0x70)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastDelegate SUCCESS; // 0x70(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct UClass* *3772a3fd29; // 0xa8(0x08)

	struct AActor* FinishSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // Native|Public|BlueprintCallable // @ game+0x5e0f630
	bool BeginSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // Native|Public|HasOutParms|BlueprintCallable // @ game+0x5e0f138
	struct UGameplayTask_SpawnActor* SpawnActor(); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5e0f9f4
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0xa0 (Inherited: 0x70)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastDelegate OnFinished; // 0x70(0x10)
	struct FMulticastDelegate OnTimeExpired; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void TaskFinishDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_TimeLimitedExecution.TaskFinishDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1b829c
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x88 (Inherited: 0x70)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastDelegate OnFinish; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)

	struct UGameplayTask_WaitDelay* *c619f4be11(); // Function GameplayTasks.GameplayTask_WaitDelay.*c619f4be11 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5e0fbf4
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x1b829c
};


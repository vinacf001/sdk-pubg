// Class GameplayTasks.GameplayTasksComponent
// Size: 0x260 (Inherited: 0x1f0)
struct UGameplayTasksComponent : UActorComponent {
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct TArray<struct UGameplayTask*> *22beda8612[0x10]; // 0x1f8(0x10)
	struct TArray<struct UGameplayTask*> *50b7ed7bd1[0x10]; // 0x208(0x10)
	char pad_218[0x10]; // 0x218(0x10)
	struct TArray<struct UGameplayTask*> *02c28b0a2b[0x10]; // 0x228(0x10)
	char pad_238[0x8]; // 0x238(0x08)
	struct FMulticastDelegate OnClaimedResourcesChange[0x10]; // 0x240(0x10)
	char pad_250[0x10]; // 0x250(0x10)

	struct TArray<struct UClass*> *824e06f04a(TScriptInterface<struct U*0cab9d4009>* TaskOwner); // Function GameplayTasks.GameplayTasksComponent.*824e06f04a // Final|Native|Static|Public|BlueprintCallable // @ game+0x5ff7a24
	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // Final|Native|Public // @ game+0x5ff7ce0
};

// Class GameplayTasks.GameplayTask
// Size: 0x68 (Inherited: 0x28)
struct UGameplayTask : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FName *8f519e168b[0x08]; // 0x30(0x08)
	char pad_38[0x2]; // 0x38(0x02)
	enum class *80bc88b4fb ResourceOverlapPolicy; // 0x3a(0x01)
	char pad_3B[0x25]; // 0x3b(0x25)
	struct UGameplayTask* *823f56c099[0x08]; // 0x60(0x08)

	void *aafe2a8a0b(); // Function GameplayTasks.GameplayTask.*aafe2a8a0b // Final|Native|Public|BlueprintCallable // @ game+0x5ff7930
	void *ac45259a96(); // Function GameplayTasks.GameplayTask.*ac45259a96 // Final|Native|Public|BlueprintCallable // @ game+0x5ff7cf4
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
};

// Class GameplayTasks.*0cab9d4009
// Size: 0x28 (Inherited: 0x28)
struct U*0cab9d4009 : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTaskResource : UObject {
	int32 ManualResourceID[0x04]; // 0x28(0x04)
	int8 *394e88f5a2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	char bManuallySetID : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x68 (Inherited: 0x68)
struct UGameplayTask_ClaimResource : UGameplayTask {

	struct FName *4d8533ca0b(TScriptInterface<struct U*0cab9d4009>* InTaskOwner); // Function GameplayTasks.GameplayTask_ClaimResource.*4d8533ca0b // Final|Native|Static|Public|BlueprintCallable // @ game+0x5ff76e4
	struct UClass* *9a1d880afa(bool Priority); // Function GameplayTasks.GameplayTask_ClaimResource.*9a1d880afa // Final|Native|Static|Public|BlueprintCallable // @ game+0x5ff7548
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xa8 (Inherited: 0x68)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastDelegate SUCCESS[0x10]; // 0x68(0x10)
	struct FMulticastDelegate DidNotSpawn[0x10]; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)
	struct UClass* *3772a3fd29[0x08]; // 0xa0(0x08)

	void FinishSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // Native|Public|BlueprintCallable // @ game+0x5ff7944
	struct AActor* BeginSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // Native|Public|HasOutParms|BlueprintCallable // @ game+0x5ff744c
	struct FRotator SpawnActor(struct UClass** Class); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5ff7d08
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x98 (Inherited: 0x68)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastDelegate OnFinished[0x10]; // 0x68(0x10)
	struct FMulticastDelegate OnTimeExpired[0x10]; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)

	void TaskFinishDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_TimeLimitedExecution.TaskFinishDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x80 (Inherited: 0x68)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastDelegate OnFinish[0x10]; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)

	void *c619f4be11(TScriptInterface<struct U*0cab9d4009>* TaskOwner, bool Priority); // Function GameplayTasks.GameplayTask_WaitDelay.*c619f4be11 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5ff7f08
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
};


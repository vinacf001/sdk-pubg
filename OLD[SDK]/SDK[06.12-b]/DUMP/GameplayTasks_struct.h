// Enum GameplayTasks.*377996c843
enum class *377996c843 : uint8 {
	*be0fe12a85,
	*c8a1c77864,
	*069311497a,
	*377996c843_MAX,
};

// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8 {
	Error,
	Failed,
	Success_Paused,
	Success_Active,
	Success_Finished,
	EGameplayTaskRunResult_MAX,
};

// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8 {
	Uninitialized,
	AwaitingActivation,
	Paused,
	Active,
	Finished,
	EGameplayTaskState_MAX,
};

// ScriptStruct GameplayTasks.*01ce7ec8fb
// Size: 0x02 (Inherited: 0x00)
struct F*01ce7ec8fb {
	char pad_0[0x2]; // 0x00(0x02)
};


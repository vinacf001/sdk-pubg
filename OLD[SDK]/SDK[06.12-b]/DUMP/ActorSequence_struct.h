// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8 {
	ContextActor,
	ExternalActor,
	Component,
	EActorSequenceObjectReferenceType_MAX,
};

// ScriptStruct ActorSequence.*299bc15e9c
// Size: 0x20 (Inherited: 0x00)
struct F*299bc15e9c {
	struct TArray<struct FGuid> *4c73a79079; // 0x00(0x10)
	struct TArray<struct F*6da21234e0> References; // 0x10(0x10)
};

// ScriptStruct ActorSequence.*6da21234e0
// Size: 0x10 (Inherited: 0x00)
struct F*6da21234e0 {
	struct TArray<struct F*4ad1b9509e> Array; // 0x00(0x10)
};

// ScriptStruct ActorSequence.*4ad1b9509e
// Size: 0x28 (Inherited: 0x00)
struct F*4ad1b9509e {
	enum class EActorSequenceObjectReferenceType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid *2a56d6e47f; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *bf7f0ebd53; // 0x18(0x10)
};


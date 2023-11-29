// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8 {
	ContextActor,
	ExternalActor,
	Component,
	EActorSequenceObjectReferenceType_MAX,
};

// ScriptStruct ActorSequence.*eff8335965
// Size: 0x20 (Inherited: 0x00)
struct F*eff8335965 {
	struct TArray<struct FGuid> *0095804d40; // 0x00(0x10)
	struct TArray<struct F*8e84812ebc> References; // 0x10(0x10)
};

// ScriptStruct ActorSequence.*8e84812ebc
// Size: 0x10 (Inherited: 0x00)
struct F*8e84812ebc {
	struct TArray<struct F*a68617ff7e> Array; // 0x00(0x10)
};

// ScriptStruct ActorSequence.*a68617ff7e
// Size: 0x28 (Inherited: 0x00)
struct F*a68617ff7e {
	enum class EActorSequenceObjectReferenceType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid *87f79139d1; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *4582d894eb; // 0x18(0x10)
};


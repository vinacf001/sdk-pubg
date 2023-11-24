// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8 {
	ContextActor,
	ExternalActor,
	Component,
	EActorSequenceObjectReferenceType_MAX,
};

// ScriptStruct ActorSequence.*1eb9bfc2f8
// Size: 0x20 (Inherited: 0x00)
struct F*1eb9bfc2f8 {
	struct TArray<struct FGuid> *d7218f0a01; // 0x00(0x10)
	struct TArray<struct F*3eeb341443> References; // 0x10(0x10)
};

// ScriptStruct ActorSequence.*3eeb341443
// Size: 0x10 (Inherited: 0x00)
struct F*3eeb341443 {
	struct TArray<struct F*21e7c668cf> Array; // 0x00(0x10)
};

// ScriptStruct ActorSequence.*21e7c668cf
// Size: 0x28 (Inherited: 0x00)
struct F*21e7c668cf {
	enum class EActorSequenceObjectReferenceType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid *2aed7db672; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *cc52681cfc; // 0x18(0x10)
};


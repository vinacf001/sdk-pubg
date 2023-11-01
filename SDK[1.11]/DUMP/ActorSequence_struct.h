// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8 {
	ContextActor,
	ExternalActor,
	Component,
	EActorSequenceObjectReferenceType_MAX,
};

// ScriptStruct ActorSequence.*476b0d3797
// Size: 0x20 (Inherited: 0x00)
struct F*476b0d3797 {
	struct TArray<struct FGuid> *84867e0294; // 0x00(0x10)
	struct TArray<struct F*7444b3f5fa> References; // 0x10(0x10)
};

// ScriptStruct ActorSequence.*7444b3f5fa
// Size: 0x10 (Inherited: 0x00)
struct F*7444b3f5fa {
	struct TArray<struct F*12cb699fc3> Array; // 0x00(0x10)
};

// ScriptStruct ActorSequence.*12cb699fc3
// Size: 0x28 (Inherited: 0x00)
struct F*12cb699fc3 {
	enum class EActorSequenceObjectReferenceType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid *5671195009; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *86cf5b1fa2; // 0x18(0x10)
};


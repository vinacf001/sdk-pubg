// Class OnlineSubsystem.NamedInterfaces
// Size: 0xc0 (Inherited: 0x28)
struct UNamedInterfaces : UObject {
	struct TArray<struct F*c591fb3793> *c57225d61b; // 0x28(0x10)
	struct TArray<struct F*9b538c5435> NamedInterfaceDefs; // 0x38(0x10)
	char pad_48[0x78]; // 0x48(0x78)
};

// Class OnlineSubsystem.*537eb5ab91
// Size: 0x28 (Inherited: 0x28)
struct U*537eb5ab91 : UInterface {

	void OnMatchEnded(); // Function OnlineSubsystem.*537eb5ab91.OnMatchEnded // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnMatchReceivedTurn(struct FString Match); // Function OnlineSubsystem.*537eb5ab91.OnMatchReceivedTurn // Event|Public|BlueprintEvent // @ game+0x2cd4ac
};


// Class OnlineSubsystem.NamedInterfaces
// Size: 0xc0 (Inherited: 0x28)
struct UNamedInterfaces : UObject {
	struct TArray<struct F*24fd8219bd> *1b137263fc; // 0x28(0x10)
	struct TArray<struct F*c0969b688b> NamedInterfaceDefs; // 0x38(0x10)
	char pad_48[0x78]; // 0x48(0x78)
};

// Class OnlineSubsystem.*4d3c68876f
// Size: 0x28 (Inherited: 0x28)
struct U*4d3c68876f : UInterface {

	void OnMatchEnded(); // Function OnlineSubsystem.*4d3c68876f.OnMatchEnded // Event|Public|BlueprintEvent // @ game+0x293938
	struct FString OnMatchReceivedTurn(); // Function OnlineSubsystem.*4d3c68876f.OnMatchReceivedTurn // Event|Public|BlueprintEvent // @ game+0x293938
};


// Class OnlineSubsystem.NamedInterfaces
// Size: 0xc0 (Inherited: 0x30)
struct UNamedInterfaces : UObject {
	struct TArray<struct F*24fd8219bd> *1b137263fc; // 0x30(0x10)
	struct TArray<struct F*c0969b688b> NamedInterfaceDefs; // 0x40(0x10)
	char pad_50[0x70]; // 0x50(0x70)
};

// Class OnlineSubsystem.*4d3c68876f
// Size: 0x30 (Inherited: 0x30)
struct U*4d3c68876f : UInterface {

	void OnMatchEnded(); // Function OnlineSubsystem.*4d3c68876f.OnMatchEnded // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void OnMatchReceivedTurn(); // Function OnlineSubsystem.*4d3c68876f.OnMatchReceivedTurn // Event|Public|BlueprintEvent // @ game+0x21d2c4
};


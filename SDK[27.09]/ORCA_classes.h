// Class ORCA.ORCAManager
// Size: 0x468 (Inherited: 0x408)
struct AORCAManager : AActor {
	struct FString ConfigIni; // 0x408(0x10)
	float NeighborDist; // 0x418(0x04)
	int32 MaxNeighbors; // 0x41c(0x04)
	float TimeHorizon; // 0x420(0x04)
	float Radius; // 0x424(0x04)
	float MaxSpeed; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct TArray<struct UNavMovementComponent*> *2722ca24d3; // 0x430(0x10)
	struct TArray<struct UNavMovementComponent*> *979dd98dcc; // 0x440(0x10)
	char pad_450[0x18]; // 0x450(0x18)
};


// Class ORCA.ORCAManager
// Size: 0x458 (Inherited: 0x3f8)
struct AORCAManager : AActor {
	struct FString ConfigIni; // 0x3f8(0x10)
	float NeighborDist; // 0x408(0x04)
	int32 MaxNeighbors; // 0x40c(0x04)
	float TimeHorizon; // 0x410(0x04)
	float Radius; // 0x414(0x04)
	float MaxSpeed; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct TArray<struct UNavMovementComponent*> *2722ca24d3; // 0x420(0x10)
	struct TArray<struct UNavMovementComponent*> *979dd98dcc; // 0x430(0x10)
	char pad_440[0x18]; // 0x440(0x18)
};


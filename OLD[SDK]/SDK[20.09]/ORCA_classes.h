// Class ORCA.ORCAManager
// Size: 0x450 (Inherited: 0x3f0)
struct AORCAManager : AActor {
	struct FString ConfigIni; // 0x3f0(0x10)
	float NeighborDist; // 0x400(0x04)
	int32 MaxNeighbors; // 0x404(0x04)
	float TimeHorizon; // 0x408(0x04)
	float Radius; // 0x40c(0x04)
	float MaxSpeed; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct TArray<struct UNavMovementComponent*> *2722ca24d3; // 0x418(0x10)
	struct TArray<struct UNavMovementComponent*> *979dd98dcc; // 0x428(0x10)
	char pad_438[0x18]; // 0x438(0x18)
};


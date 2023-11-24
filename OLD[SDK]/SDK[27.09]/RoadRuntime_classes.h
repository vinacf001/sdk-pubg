// Class RoadRuntime.CrossActor
// Size: 0x448 (Inherited: 0x418)
struct ACrossActor : AStaticMeshActor {
	struct FString *ec680a1b00; // 0x418(0x10)
	struct TArray<struct F*5308e57ec9> *e1a7f3eb7b; // 0x428(0x10)
	struct TArray<struct F*f06a718bf9> *030df6ead4; // 0x438(0x10)

	void *602e42c87d(); // Function RoadRuntime.CrossActor.*602e42c87d // Final|Native|Public|HasDefaults // @ game+0x6acfed4
	void *76801e2bfb(); // Function RoadRuntime.CrossActor.*76801e2bfb // Final|Native|Public|HasDefaults // @ game+0x6ad0170
	void *0d034b86c2(); // Function RoadRuntime.CrossActor.*0d034b86c2 // Final|Native|Public|HasDefaults // @ game+0x6acf99c
	void *9b3d0c9b56(); // Function RoadRuntime.CrossActor.*9b3d0c9b56 // Final|Native|Public|HasDefaults // @ game+0x6acfc38
	void *0681748572(); // Function RoadRuntime.CrossActor.*0681748572 // Final|Native|Public // @ game+0x6acf944
};

// Class RoadRuntime.RoadActor
// Size: 0x480 (Inherited: 0x408)
struct ARoadActor : AActor {
	enum class ESplineMeshAxis *7d227d9a39; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	struct FVector LocalOffset; // 0x40c(0x0c)
	struct FString *ec680a1b00; // 0x418(0x10)
	struct USplineComponent* Spline; // 0x428(0x08)
	int32 *bead26044f; // 0x430(0x04)
	int32 *d4bcfd5cbf; // 0x434(0x04)
	struct UStaticMesh* *07bb7bd512; // 0x438(0x08)
	struct TArray<struct USplineMeshComponent*> *2c116db5ad; // 0x440(0x10)
	struct TArray<struct F*5ae9ae3aeb> *e1a7f3eb7b; // 0x450(0x10)
	struct TArray<struct F*b576a86630> *030df6ead4; // 0x460(0x10)
	struct TArray<struct F*4f488eada4> *dd32d21046; // 0x470(0x10)
};


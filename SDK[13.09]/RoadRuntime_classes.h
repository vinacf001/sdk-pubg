// Class RoadRuntime.CrossActor
// Size: 0x438 (Inherited: 0x408)
struct ACrossActor : AStaticMeshActor {
	struct FString *ec680a1b00; // 0x408(0x10)
	struct TArray<struct F*5308e57ec9> *e1a7f3eb7b; // 0x418(0x10)
	struct TArray<struct F*f06a718bf9> *030df6ead4; // 0x428(0x10)

	bool *602e42c87d(struct FVector Param1); // Function RoadRuntime.CrossActor.*602e42c87d // None // @ game+0x6680cd0
	struct UStaticMesh* *76801e2bfb(struct FVector Param1, struct FVector Param3, bool Param5); // Function RoadRuntime.CrossActor.*76801e2bfb // None // @ game+0x6680f6c
	bool *0d034b86c2(); // Function RoadRuntime.CrossActor.*0d034b86c2 // None // @ game+0x6680798
	void *9b3d0c9b56(struct UStaticMesh* Param0, struct FRotator Param2, int32 Param4); // Function RoadRuntime.CrossActor.*9b3d0c9b56 // None // @ game+0x6680a34
	void *0681748572(); // Function RoadRuntime.CrossActor.*0681748572 // None // @ game+0x6680740
};

// Class RoadRuntime.RoadActor
// Size: 0x470 (Inherited: 0x3f8)
struct ARoadActor : AActor {
	enum class ESplineMeshAxis *7d227d9a39; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	struct FVector LocalOffset; // 0x3fc(0x0c)
	struct FString *ec680a1b00; // 0x408(0x10)
	struct USplineComponent* Spline; // 0x418(0x08)
	int32 *bead26044f; // 0x420(0x04)
	int32 *d4bcfd5cbf; // 0x424(0x04)
	struct UStaticMesh* *07bb7bd512; // 0x428(0x08)
	struct TArray<struct USplineMeshComponent*> *2c116db5ad; // 0x430(0x10)
	struct TArray<struct F*5ae9ae3aeb> *e1a7f3eb7b; // 0x440(0x10)
	struct TArray<struct F*b576a86630> *030df6ead4; // 0x450(0x10)
	struct TArray<struct F*4f488eada4> *dd32d21046; // 0x460(0x10)
};


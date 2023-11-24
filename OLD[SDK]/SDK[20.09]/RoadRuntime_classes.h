// Class RoadRuntime.CrossActor
// Size: 0x430 (Inherited: 0x400)
struct ACrossActor : AStaticMeshActor {
	struct FString *ec680a1b00; // 0x400(0x10)
	struct TArray<struct F*5308e57ec9> *e1a7f3eb7b; // 0x410(0x10)
	struct TArray<struct F*f06a718bf9> *030df6ead4; // 0x420(0x10)

	bool *602e42c87d(struct FVector Param1); // Function RoadRuntime.CrossActor.*602e42c87d // Final|Native|Public|HasDefaults // @ game+0x66a8fa8
	struct UStaticMesh* *76801e2bfb(struct FVector Param1, struct FVector Param3, bool Param5); // Function RoadRuntime.CrossActor.*76801e2bfb // Final|Native|Public|HasDefaults // @ game+0x66a9244
	bool *0d034b86c2(); // Function RoadRuntime.CrossActor.*0d034b86c2 // Final|Native|Public|HasDefaults // @ game+0x66a8a70
	void *9b3d0c9b56(struct UStaticMesh* Param0, struct FRotator Param2, int32 Param4); // Function RoadRuntime.CrossActor.*9b3d0c9b56 // Final|Native|Public|HasDefaults // @ game+0x66a8d0c
	void *0681748572(); // Function RoadRuntime.CrossActor.*0681748572 // Final|Native|Public // @ game+0x66a8a18
};

// Class RoadRuntime.RoadActor
// Size: 0x468 (Inherited: 0x3f0)
struct ARoadActor : AActor {
	enum class ESplineMeshAxis *7d227d9a39; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	struct FVector LocalOffset; // 0x3f4(0x0c)
	struct FString *ec680a1b00; // 0x400(0x10)
	struct USplineComponent* Spline; // 0x410(0x08)
	int32 *bead26044f; // 0x418(0x04)
	int32 *d4bcfd5cbf; // 0x41c(0x04)
	struct UStaticMesh* *07bb7bd512; // 0x420(0x08)
	struct TArray<struct USplineMeshComponent*> *2c116db5ad; // 0x428(0x10)
	struct TArray<struct F*5ae9ae3aeb> *e1a7f3eb7b; // 0x438(0x10)
	struct TArray<struct F*b576a86630> *030df6ead4; // 0x448(0x10)
	struct TArray<struct F*4f488eada4> *dd32d21046; // 0x458(0x10)
};


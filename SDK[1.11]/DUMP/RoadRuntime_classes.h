// Class RoadRuntime.CrossActor
// Size: 0x428 (Inherited: 0x3f8)
struct ACrossActor : AStaticMeshActor {
	struct FString *239deb22ac; // 0x3f8(0x10)
	struct TArray<struct F*da3fc6fcb8> *8de59d22d8; // 0x408(0x10)
	struct TArray<struct F*4c7ad277d8> *c25964cb6a; // 0x418(0x10)

	bool *5765e683bb(struct UStaticMesh* Param0); // Function RoadRuntime.CrossActor.*5765e683bb // Final|Native|Public|HasDefaults // @ game+0x68f37c4
	struct UClass* *007ca4fe91(struct FVector Param1, struct FVector Param3, bool Param5); // Function RoadRuntime.CrossActor.*007ca4fe91 // Final|Native|Public|HasDefaults // @ game+0x68f3528
	void *fd6b0bb66d(); // Function RoadRuntime.CrossActor.*fd6b0bb66d // Final|Native|Public // @ game+0x68f34d0
	int32 *0838d7e154(bool Param5); // Function RoadRuntime.CrossActor.*0838d7e154 // Final|Native|Public|HasDefaults // @ game+0x68f3cfc
	bool *26486b7184(struct FVector Param1); // Function RoadRuntime.CrossActor.*26486b7184 // Final|Native|Public|HasDefaults // @ game+0x68f3a60
};

// Class RoadRuntime.RoadActor
// Size: 0x460 (Inherited: 0x3e8)
struct ARoadActor : AActor {
	enum class ESplineMeshAxis *027ccf2fca; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	struct FVector LocalOffset; // 0x3ec(0x0c)
	struct FString *239deb22ac; // 0x3f8(0x10)
	struct USplineComponent* Spline; // 0x408(0x08)
	int32 *ca1df9feca; // 0x410(0x04)
	int32 *862dc237ba; // 0x414(0x04)
	struct UStaticMesh* *7e69c4a8ca; // 0x418(0x08)
	struct TArray<struct USplineMeshComponent*> *22c75f55a4; // 0x420(0x10)
	struct TArray<struct F*6332d153d5> *8de59d22d8; // 0x430(0x10)
	struct TArray<struct F*fc659451b0> *c25964cb6a; // 0x440(0x10)
	struct TArray<struct F*bad823b6c7> *a45e083a01; // 0x450(0x10)
};


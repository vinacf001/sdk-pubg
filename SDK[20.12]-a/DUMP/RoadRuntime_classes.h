// Class RoadRuntime.CrossActor
// Size: 0x428 (Inherited: 0x3f8)
struct ACrossActor : AStaticMeshActor {
	struct FString *ed6a5e6e68; // 0x3f8(0x10)
	struct TArray<struct F*d270fe3eca> *aaf20daa29; // 0x408(0x10)
	struct TArray<struct F*c75887bab4> *c2a1582b25; // 0x418(0x10)

	void *0ae83177e5(); // Function RoadRuntime.CrossActor.*0ae83177e5 // Final|Native|Public|HasDefaults // @ game+0x6eeda58
	void *164be878dd(); // Function RoadRuntime.CrossActor.*164be878dd // Final|Native|Public // @ game+0x6eeda00
	void *4869a52521(); // Function RoadRuntime.CrossActor.*4869a52521 // Final|Native|Public|HasDefaults // @ game+0x6eedf90
	void *da4186110d(); // Function RoadRuntime.CrossActor.*da4186110d // Final|Native|Public|HasDefaults // @ game+0x6eedcf4
	void *94f1cd06d0(); // Function RoadRuntime.CrossActor.*94f1cd06d0 // Final|Native|Public|HasDefaults // @ game+0x6eee22c
};

// Class RoadRuntime.RoadActor
// Size: 0x460 (Inherited: 0x3e8)
struct ARoadActor : AActor {
	enum class ESplineMeshAxis *aa23e29dd2; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	struct FVector LocalOffset; // 0x3ec(0x0c)
	struct FString *ed6a5e6e68; // 0x3f8(0x10)
	struct USplineComponent* Spline; // 0x408(0x08)
	int32 *0115ef6a13; // 0x410(0x04)
	int32 *d804bf5b88; // 0x414(0x04)
	struct UStaticMesh* *a2090021ca; // 0x418(0x08)
	struct TArray<struct USplineMeshComponent*> *6f938b5908; // 0x420(0x10)
	struct TArray<struct F*cf969401df> *aaf20daa29; // 0x430(0x10)
	struct TArray<struct F*14d6a803f5> *c2a1582b25; // 0x440(0x10)
	struct TArray<struct F*983225c887> *3adc527728; // 0x450(0x10)
};


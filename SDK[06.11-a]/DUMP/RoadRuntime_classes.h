// Class RoadRuntime.CrossActor
// Size: 0x438 (Inherited: 0x408)
struct ACrossActor : AStaticMeshActor {
	struct FString *ed6a5e6e68; // 0x408(0x10)
	struct TArray<struct F*d270fe3eca> *aaf20daa29; // 0x418(0x10)
	struct TArray<struct F*c75887bab4> *c2a1582b25; // 0x428(0x10)

	int32 *0ae83177e5(bool Param5, bool Param6); // Function RoadRuntime.CrossActor.*0ae83177e5 // Final|Native|Public|HasDefaults // @ game+0x6ee54c0
	void *164be878dd(); // Function RoadRuntime.CrossActor.*164be878dd // Final|Native|Public // @ game+0x6ee5468
	void *4869a52521(int32 Param4, bool Param5, bool Param6); // Function RoadRuntime.CrossActor.*4869a52521 // Final|Native|Public|HasDefaults // @ game+0x6ee59f8
	void *da4186110d(int32 Param4, bool Param5, bool Param6); // Function RoadRuntime.CrossActor.*da4186110d // Final|Native|Public|HasDefaults // @ game+0x6ee575c
	void *94f1cd06d0(int32 Param4, bool Param5, bool Param6); // Function RoadRuntime.CrossActor.*94f1cd06d0 // Final|Native|Public|HasDefaults // @ game+0x6ee5c94
};

// Class RoadRuntime.RoadActor
// Size: 0x470 (Inherited: 0x3f8)
struct ARoadActor : AActor {
	enum class ESplineMeshAxis *aa23e29dd2; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	struct FVector LocalOffset; // 0x3fc(0x0c)
	struct FString *ed6a5e6e68; // 0x408(0x10)
	struct USplineComponent* Spline; // 0x418(0x08)
	int32 *0115ef6a13; // 0x420(0x04)
	int32 *d804bf5b88; // 0x424(0x04)
	struct UStaticMesh* *a2090021ca; // 0x428(0x08)
	struct TArray<struct USplineMeshComponent*> *6f938b5908; // 0x430(0x10)
	struct TArray<struct F*cf969401df> *aaf20daa29; // 0x440(0x10)
	struct TArray<struct F*14d6a803f5> *c2a1582b25; // 0x450(0x10)
	struct TArray<struct F*983225c887> *3adc527728; // 0x460(0x10)
};


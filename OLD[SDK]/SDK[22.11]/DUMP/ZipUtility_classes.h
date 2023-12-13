// Class ZipUtility.*43de21beae
// Size: 0x28 (Inherited: 0x28)
struct U*43de21beae : UInterface {

	void OnStartProcess(); // Function ZipUtility.*43de21beae.OnStartProcess // Native|Event|Public|BlueprintEvent // @ game+0x663cfe4
	void OnDone(); // Function ZipUtility.*43de21beae.OnDone // Native|Event|Public|BlueprintEvent // @ game+0x663cbd0
	float OnProgress(); // Function ZipUtility.*43de21beae.OnProgress // Native|Event|Public|BlueprintEvent // @ game+0x663ce84
	struct FString OnFileDone(); // Function ZipUtility.*43de21beae.OnFileDone // Native|Event|Public|BlueprintEvent // @ game+0x6638344
	void OnFileFound(struct FString archive); // Function ZipUtility.*43de21beae.OnFileFound // Native|Event|Public|BlueprintEvent // @ game+0x663ccf0
};

// Class ZipUtility.*d76854c190
// Size: 0x70 (Inherited: 0x28)
struct U*d76854c190 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class *313784bb1f CompressionFormat; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString file; // 0x38(0x10)
	struct FString DestinationFolder; // 0x48(0x10)
	int32 *78298c8dff; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UObject* Callback; // 0x60(0x08)
	bool *346fcb1e73; // 0x68(0x01)
	bool *d59cab1d62; // 0x69(0x01)
	bool *5c31799936; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};

// Class ZipUtility.*4c56a7d04b
// Size: 0x28 (Inherited: 0x28)
struct U*4c56a7d04b : UBlueprintFunctionLibrary {

	enum class *313784bb1f *eccf31c912(); // Function ZipUtility.*4c56a7d04b.*eccf31c912 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663d42c
	void *ca668af191(struct FString archivePath, struct UObject* ZipUtilityInterfaceDelegate); // Function ZipUtility.*4c56a7d04b.*ca668af191 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663d254
	enum class *313784bb1f *ad6ba4ca13(); // Function ZipUtility.*4c56a7d04b.*ad6ba4ca13 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663d100
	struct TArray<int32> *8bd1d290d1(struct FString archivePath, enum class *313784bb1f Format); // Function ZipUtility.*4c56a7d04b.*8bd1d290d1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663d658
	enum class *313784bb1f *c9cf21dcc2(); // Function ZipUtility.*4c56a7d04b.*c9cf21dcc2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663ca70
	enum class *313784bb1f Zip(enum class *cd43c163d2 Level, bool bIsDirectory); // Function ZipUtility.*4c56a7d04b.Zip // Final|Native|Static|Public|BlueprintCallable // @ game+0x663dce0
	bool *d5b382984b(); // Function ZipUtility.*4c56a7d04b.*d5b382984b // Final|Native|Static|Public|BlueprintCallable // @ game+0x663dabc
	void *0a24656402(struct TArray<int32> fileIndices, struct FString destinationPath, enum class *313784bb1f Format); // Function ZipUtility.*4c56a7d04b.*0a24656402 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663d85c
};

// Class ZipUtility.*360ded6d14
// Size: 0xd0 (Inherited: 0x28)
struct U*360ded6d14 : UObject {
	char pad_28[0xa8]; // 0x28(0xa8)
};


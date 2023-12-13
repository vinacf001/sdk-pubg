// Class ZipUtility.*43de21beae
// Size: 0x30 (Inherited: 0x30)
struct U*43de21beae : UInterface {

	int32 OnStartProcess(); // Function ZipUtility.*43de21beae.OnStartProcess // Native|Event|Public|BlueprintEvent // @ game+0x663b4ec
	enum class EZipUtilityCompletionState OnDone(); // Function ZipUtility.*43de21beae.OnDone // Native|Event|Public|BlueprintEvent // @ game+0x663b0d8
	int32 OnProgress(); // Function ZipUtility.*43de21beae.OnProgress // Native|Event|Public|BlueprintEvent // @ game+0x663b38c
	struct FString OnFileDone(); // Function ZipUtility.*43de21beae.OnFileDone // Native|Event|Public|BlueprintEvent // @ game+0x663680c
	int32 OnFileFound(); // Function ZipUtility.*43de21beae.OnFileFound // Native|Event|Public|BlueprintEvent // @ game+0x663b1f8
};

// Class ZipUtility.*d76854c190
// Size: 0x78 (Inherited: 0x30)
struct U*d76854c190 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class *313784bb1f CompressionFormat; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString file; // 0x40(0x10)
	struct FString DestinationFolder; // 0x50(0x10)
	int32 *78298c8dff; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UObject* Callback; // 0x68(0x08)
	bool *346fcb1e73; // 0x70(0x01)
	bool *d59cab1d62; // 0x71(0x01)
	bool *5c31799936; // 0x72(0x01)
	char pad_73[0x5]; // 0x73(0x05)
};

// Class ZipUtility.*4c56a7d04b
// Size: 0x30 (Inherited: 0x30)
struct U*4c56a7d04b : UBlueprintFunctionLibrary {

	bool *eccf31c912(); // Function ZipUtility.*4c56a7d04b.*eccf31c912 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663b934
	bool *ca668af191(); // Function ZipUtility.*4c56a7d04b.*ca668af191 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663b75c
	bool *ad6ba4ca13(); // Function ZipUtility.*4c56a7d04b.*ad6ba4ca13 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663b608
	bool *8bd1d290d1(); // Function ZipUtility.*4c56a7d04b.*8bd1d290d1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663bb60
	bool *c9cf21dcc2(); // Function ZipUtility.*4c56a7d04b.*c9cf21dcc2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663af78
	bool Zip(); // Function ZipUtility.*4c56a7d04b.Zip // Final|Native|Static|Public|BlueprintCallable // @ game+0x663c1e8
	bool *d5b382984b(); // Function ZipUtility.*4c56a7d04b.*d5b382984b // Final|Native|Static|Public|BlueprintCallable // @ game+0x663bfc4
	bool *0a24656402(); // Function ZipUtility.*4c56a7d04b.*0a24656402 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663bd64
};

// Class ZipUtility.*360ded6d14
// Size: 0xe0 (Inherited: 0x30)
struct U*360ded6d14 : UObject {
	char pad_30[0xb0]; // 0x30(0xb0)
};


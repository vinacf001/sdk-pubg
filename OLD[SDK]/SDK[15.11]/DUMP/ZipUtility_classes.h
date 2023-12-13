// Class ZipUtility.*43de21beae
// Size: 0x30 (Inherited: 0x30)
struct U*43de21beae : UInterface {

	void OnStartProcess(); // Function ZipUtility.*43de21beae.OnStartProcess // Native|Event|Public|BlueprintEvent // @ game+0x685af14
	void OnDone(); // Function ZipUtility.*43de21beae.OnDone // Native|Event|Public|BlueprintEvent // @ game+0x685ab00
	void OnProgress(); // Function ZipUtility.*43de21beae.OnProgress // Native|Event|Public|BlueprintEvent // @ game+0x685adb4
	void OnFileDone(); // Function ZipUtility.*43de21beae.OnFileDone // Native|Event|Public|BlueprintEvent // @ game+0x68561a0
	void OnFileFound(); // Function ZipUtility.*43de21beae.OnFileFound // Native|Event|Public|BlueprintEvent // @ game+0x685ac20
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

	void *eccf31c912(); // Function ZipUtility.*4c56a7d04b.*eccf31c912 // Final|Native|Static|Public|BlueprintCallable // @ game+0x685b35c
	void *ca668af191(); // Function ZipUtility.*4c56a7d04b.*ca668af191 // Final|Native|Static|Public|BlueprintCallable // @ game+0x685b184
	void *ad6ba4ca13(); // Function ZipUtility.*4c56a7d04b.*ad6ba4ca13 // Final|Native|Static|Public|BlueprintCallable // @ game+0x685b030
	void *8bd1d290d1(); // Function ZipUtility.*4c56a7d04b.*8bd1d290d1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x685b588
	void *c9cf21dcc2(); // Function ZipUtility.*4c56a7d04b.*c9cf21dcc2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x685a9a0
	void Zip(); // Function ZipUtility.*4c56a7d04b.Zip // Final|Native|Static|Public|BlueprintCallable // @ game+0x685bc10
	void *d5b382984b(); // Function ZipUtility.*4c56a7d04b.*d5b382984b // Final|Native|Static|Public|BlueprintCallable // @ game+0x685b9ec
	void *0a24656402(); // Function ZipUtility.*4c56a7d04b.*0a24656402 // Final|Native|Static|Public|BlueprintCallable // @ game+0x685b78c
};

// Class ZipUtility.*360ded6d14
// Size: 0xe0 (Inherited: 0x30)
struct U*360ded6d14 : UObject {
	char pad_30[0xb0]; // 0x30(0xb0)
};


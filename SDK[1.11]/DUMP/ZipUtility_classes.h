// Class ZipUtility.*a84de67cfe
// Size: 0x28 (Inherited: 0x28)
struct U*a84de67cfe : UInterface {

	void OnStartProcess(); // Function ZipUtility.*a84de67cfe.OnStartProcess // Native|Event|Public|BlueprintEvent // @ game+0x6726e64
	void OnProgress(float Percentage); // Function ZipUtility.*a84de67cfe.OnProgress // Native|Event|Public|BlueprintEvent // @ game+0x6726d04
	struct FString OnFileFound(); // Function ZipUtility.*a84de67cfe.OnFileFound // Native|Event|Public|BlueprintEvent // @ game+0x6726b70
	void OnFileDone(struct FString archive); // Function ZipUtility.*a84de67cfe.OnFileDone // Native|Event|Public|BlueprintEvent // @ game+0x6722144
	void OnDone(); // Function ZipUtility.*a84de67cfe.OnDone // Native|Event|Public|BlueprintEvent // @ game+0x6726a50
};

// Class ZipUtility.*56aea4c34a
// Size: 0x70 (Inherited: 0x28)
struct U*56aea4c34a : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class *4b1520253d CompressionFormat; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString file; // 0x38(0x10)
	struct FString DestinationFolder; // 0x48(0x10)
	int32 *841f38bbaf; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UObject* Callback; // 0x60(0x08)
	bool *64ea7722e9; // 0x68(0x01)
	bool *36b97a3603; // 0x69(0x01)
	bool *aa30b5fb63; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};

// Class ZipUtility.*d178243782
// Size: 0x28 (Inherited: 0x28)
struct U*d178243782 : UBlueprintFunctionLibrary {

	enum class *4b1520253d *d961a4a49a(); // Function ZipUtility.*d178243782.*d961a4a49a // Final|Native|Static|Public|BlueprintCallable // @ game+0x67268f0
	struct FString *992774cc8e(struct FString Name, enum class *4b1520253d Format); // Function ZipUtility.*d178243782.*992774cc8e // Final|Native|Static|Public|BlueprintCallable // @ game+0x67270d4
	bool *d875764b72(); // Function ZipUtility.*d178243782.*d875764b72 // Final|Native|Static|Public|BlueprintCallable // @ game+0x672793c
	void *ecbb4b6978(struct TArray<int32> fileIndices, struct FString destinationPath, enum class *4b1520253d Format); // Function ZipUtility.*d178243782.*ecbb4b6978 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67276dc
	enum class *4b1520253d *fb24ed80b4(); // Function ZipUtility.*d178243782.*fb24ed80b4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6726f80
	struct FString *8891dd72d2(struct FString Name, struct UObject* ZipUtilityInterfaceDelegate); // Function ZipUtility.*d178243782.*8891dd72d2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67272ac
	bool Zip(); // Function ZipUtility.*d178243782.Zip // Final|Native|Static|Public|BlueprintCallable // @ game+0x6727b60
	void *4986dded8a(struct TArray<int32> fileIndices, struct UObject* ZipUtilityInterfaceDelegate); // Function ZipUtility.*d178243782.*4986dded8a // Final|Native|Static|Public|BlueprintCallable // @ game+0x67274d8
};

// Class ZipUtility.*0f791a7a7c
// Size: 0xd0 (Inherited: 0x28)
struct U*0f791a7a7c : UObject {
	char pad_28[0xa8]; // 0x28(0xa8)
};


// Class ZipUtility.*a84de67cfe
// Size: 0x30 (Inherited: 0x30)
struct U*a84de67cfe : UInterface {

	int32 OnStartProcess(); // Function ZipUtility.*a84de67cfe.OnStartProcess // Native|Event|Public|BlueprintEvent // @ game+0x6527dd0
	int32 OnProgress(); // Function ZipUtility.*a84de67cfe.OnProgress // Native|Event|Public|BlueprintEvent // @ game+0x6527c70
	int32 OnFileFound(); // Function ZipUtility.*a84de67cfe.OnFileFound // Native|Event|Public|BlueprintEvent // @ game+0x6527adc
	struct FString OnFileDone(); // Function ZipUtility.*a84de67cfe.OnFileDone // Native|Event|Public|BlueprintEvent // @ game+0x6523164
	enum class EZipUtilityCompletionState OnDone(); // Function ZipUtility.*a84de67cfe.OnDone // Native|Event|Public|BlueprintEvent // @ game+0x65279bc
};

// Class ZipUtility.*56aea4c34a
// Size: 0x78 (Inherited: 0x30)
struct U*56aea4c34a : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class *4b1520253d CompressionFormat; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString file; // 0x40(0x10)
	struct FString DestinationFolder; // 0x50(0x10)
	int32 *841f38bbaf; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UObject* Callback; // 0x68(0x08)
	bool *64ea7722e9; // 0x70(0x01)
	bool *36b97a3603; // 0x71(0x01)
	bool *aa30b5fb63; // 0x72(0x01)
	char pad_73[0x5]; // 0x73(0x05)
};

// Class ZipUtility.*d178243782
// Size: 0x30 (Inherited: 0x30)
struct U*d178243782 : UBlueprintFunctionLibrary {

	bool *d961a4a49a(); // Function ZipUtility.*d178243782.*d961a4a49a // Final|Native|Static|Public|BlueprintCallable // @ game+0x652785c
	bool *992774cc8e(); // Function ZipUtility.*d178243782.*992774cc8e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6528040
	bool *d875764b72(); // Function ZipUtility.*d178243782.*d875764b72 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65288a8
	bool *ecbb4b6978(); // Function ZipUtility.*d178243782.*ecbb4b6978 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6528648
	bool *fb24ed80b4(); // Function ZipUtility.*d178243782.*fb24ed80b4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6527eec
	bool *8891dd72d2(); // Function ZipUtility.*d178243782.*8891dd72d2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6528218
	bool Zip(); // Function ZipUtility.*d178243782.Zip // Final|Native|Static|Public|BlueprintCallable // @ game+0x6528acc
	bool *4986dded8a(); // Function ZipUtility.*d178243782.*4986dded8a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6528444
};

// Class ZipUtility.*0f791a7a7c
// Size: 0xe0 (Inherited: 0x30)
struct U*0f791a7a7c : UObject {
	char pad_30[0xb0]; // 0x30(0xb0)
};


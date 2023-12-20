// Class ZipUtility.*ef65632b93
// Size: 0x30 (Inherited: 0x30)
struct U*ef65632b93 : UInterface {

	void OnProgress(); // Function ZipUtility.*ef65632b93.OnProgress // Native|Event|Public|BlueprintEvent // @ game+0x6d1a578
	void OnFileFound(); // Function ZipUtility.*ef65632b93.OnFileFound // Native|Event|Public|BlueprintEvent // @ game+0x6d1a3e4
	void OnDone(); // Function ZipUtility.*ef65632b93.OnDone // Native|Event|Public|BlueprintEvent // @ game+0x6d1a2c4
	void OnStartProcess(); // Function ZipUtility.*ef65632b93.OnStartProcess // Native|Event|Public|BlueprintEvent // @ game+0x6d1a6d8
	void OnFileDone(); // Function ZipUtility.*ef65632b93.OnFileDone // Native|Event|Public|BlueprintEvent // @ game+0x6d1586c
};

// Class ZipUtility.*f8cd485fe1
// Size: 0x78 (Inherited: 0x30)
struct U*f8cd485fe1 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class *ca5a863db4 CompressionFormat; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString file; // 0x40(0x10)
	struct FString DestinationFolder; // 0x50(0x10)
	int32 *ac89c610b6; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UObject* Callback; // 0x68(0x08)
	bool *e9800c940e; // 0x70(0x01)
	bool *888850b64a; // 0x71(0x01)
	bool *c0ec5a68a2; // 0x72(0x01)
	char pad_73[0x5]; // 0x73(0x05)
};

// Class ZipUtility.*d9eb82f508
// Size: 0x30 (Inherited: 0x30)
struct U*d9eb82f508 : UBlueprintFunctionLibrary {

	void *1a8e4837b0(); // Function ZipUtility.*d9eb82f508.*1a8e4837b0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6d1ad4c
	void *ca2e4e630e(); // Function ZipUtility.*d9eb82f508.*ca2e4e630e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6d1a948
	void *8fb2f8766d(); // Function ZipUtility.*d9eb82f508.*8fb2f8766d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6d1ab20
	void *6dff5c71d1(); // Function ZipUtility.*d9eb82f508.*6dff5c71d1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6d1af50
	void *7814fed5ef(); // Function ZipUtility.*d9eb82f508.*7814fed5ef // Final|Native|Static|Public|BlueprintCallable // @ game+0x6d1b1b0
	void Zip(); // Function ZipUtility.*d9eb82f508.Zip // Final|Native|Static|Public|BlueprintCallable // @ game+0x6d1b3d4
	void *35fb6382dc(); // Function ZipUtility.*d9eb82f508.*35fb6382dc // Final|Native|Static|Public|BlueprintCallable // @ game+0x6d1a164
	void *1db45a8d35(); // Function ZipUtility.*d9eb82f508.*1db45a8d35 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6d1a7f4
};

// Class ZipUtility.*33af3168cb
// Size: 0xe0 (Inherited: 0x30)
struct U*33af3168cb : UObject {
	char pad_30[0xb0]; // 0x30(0xb0)
};


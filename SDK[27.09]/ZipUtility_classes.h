// Class ZipUtility.*b5246c1e6b
// Size: 0x30 (Inherited: 0x30)
struct U*b5246c1e6b : UInterface {

	void OnDone(); // Function ZipUtility.*b5246c1e6b.OnDone // Native|Event|Public|BlueprintEvent // @ game+0x6909c84
	void OnFileDone(); // Function ZipUtility.*b5246c1e6b.OnFileDone // Native|Event|Public|BlueprintEvent // @ game+0x69051e4
	void OnProgress(); // Function ZipUtility.*b5246c1e6b.OnProgress // Native|Event|Public|BlueprintEvent // @ game+0x6909f38
	void OnStartProcess(); // Function ZipUtility.*b5246c1e6b.OnStartProcess // Native|Event|Public|BlueprintEvent // @ game+0x690a098
	void OnFileFound(); // Function ZipUtility.*b5246c1e6b.OnFileFound // Native|Event|Public|BlueprintEvent // @ game+0x6909da4
};

// Class ZipUtility.*a40fc12f27
// Size: 0x78 (Inherited: 0x30)
struct U*a40fc12f27 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class *ab94b09326 CompressionFormat; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString file; // 0x40(0x10)
	struct FString DestinationFolder; // 0x50(0x10)
	int32 *4f77c535ab; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UObject* Callback; // 0x68(0x08)
	bool *b1c337d7c7; // 0x70(0x01)
	bool *f388e1df63; // 0x71(0x01)
	bool *24453e1145; // 0x72(0x01)
	char pad_73[0x5]; // 0x73(0x05)
};

// Class ZipUtility.*da1df6b610
// Size: 0x30 (Inherited: 0x30)
struct U*da1df6b610 : UBlueprintFunctionLibrary {

	void *1889ec0796(); // Function ZipUtility.*da1df6b610.*1889ec0796 // Final|Native|Static|Public|BlueprintCallable // @ game+0x690a70c
	void *fb6fc638ac(); // Function ZipUtility.*da1df6b610.*fb6fc638ac // Final|Native|Static|Public|BlueprintCallable // @ game+0x6909b24
	void *1bb12d529f(); // Function ZipUtility.*da1df6b610.*1bb12d529f // Final|Native|Static|Public|BlueprintCallable // @ game+0x690a910
	void Zip(); // Function ZipUtility.*da1df6b610.Zip // Final|Native|Static|Public|BlueprintCallable // @ game+0x690ad94
	void *591cc6a7f8(); // Function ZipUtility.*da1df6b610.*591cc6a7f8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x690a4e0
	void *42e2093748(); // Function ZipUtility.*da1df6b610.*42e2093748 // Final|Native|Static|Public|BlueprintCallable // @ game+0x690a308
	void *2eea894258(); // Function ZipUtility.*da1df6b610.*2eea894258 // Final|Native|Static|Public|BlueprintCallable // @ game+0x690ab70
	void *1e20ce8ba9(); // Function ZipUtility.*da1df6b610.*1e20ce8ba9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x690a1b4
};

// Class ZipUtility.*b300ca37b9
// Size: 0xe0 (Inherited: 0x30)
struct U*b300ca37b9 : UObject {
	char pad_30[0xb0]; // 0x30(0xb0)
};


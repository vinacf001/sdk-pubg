// Class WindowsFileUtility.*47a03cd76a
// Size: 0x28 (Inherited: 0x28)
struct U*47a03cd76a : UInterface {

	struct TArray<struct FString> OnListDone(); // Function WindowsFileUtility.*47a03cd76a.OnListDone // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x664ada0
	struct FString OnListDirectoryFound(); // Function WindowsFileUtility.*47a03cd76a.OnListDirectoryFound // Native|Event|Public|BlueprintEvent // @ game+0x664ac58
	void OnListFileFound(int32 ByteCount); // Function WindowsFileUtility.*47a03cd76a.OnListFileFound // Native|Event|Public|BlueprintEvent // @ game+0x664af58
};

// Class WindowsFileUtility.*a07b8e14b6
// Size: 0x80 (Inherited: 0x28)
struct U*a07b8e14b6 : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class WindowsFileUtility.*a4f06fe9bd
// Size: 0x28 (Inherited: 0x28)
struct U*a4f06fe9bd : UInterface {

	struct FString OnDirectoryChanged(); // Function WindowsFileUtility.*a4f06fe9bd.OnDirectoryChanged // Native|Event|Public|BlueprintEvent // @ game+0x664ab10
	void OnFileChanged(); // Function WindowsFileUtility.*a4f06fe9bd.OnFileChanged // Native|Event|Public|BlueprintEvent // @ game+0x664ac58
};

// Class WindowsFileUtility.*87f6babf1d
// Size: 0x80 (Inherited: 0x28)
struct U*87f6babf1d : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class WindowsFileUtility.*f24c7826e4
// Size: 0x28 (Inherited: 0x28)
struct U*f24c7826e4 : UBlueprintFunctionLibrary {

	struct FString *8f386679e6(); // Function WindowsFileUtility.*f24c7826e4.*8f386679e6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x664a540
	struct FString *c2e2c572ff(); // Function WindowsFileUtility.*f24c7826e4.*c2e2c572ff // Final|Native|Static|Public|BlueprintCallable // @ game+0x664a9b0
	void *6dd793bf30(); // Function WindowsFileUtility.*f24c7826e4.*6dd793bf30 // Final|Native|Static|Public|BlueprintCallable // @ game+0x664a7b4
	struct FString *823620b8ba(); // Function WindowsFileUtility.*f24c7826e4.*823620b8ba // Final|Native|Static|Public|BlueprintCallable // @ game+0x664a614
	struct FString *6d521459b7(); // Function WindowsFileUtility.*f24c7826e4.*6d521459b7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x664a870
	void *944617162c(); // Function WindowsFileUtility.*f24c7826e4.*944617162c // Final|Native|Static|Public|BlueprintCallable // @ game+0x664b0ec
	void *f71f9e213d(); // Function WindowsFileUtility.*f24c7826e4.*f71f9e213d // Final|Native|Static|Public|BlueprintCallable // @ game+0x664b1f8
	struct FString *d1c4e7d371(); // Function WindowsFileUtility.*f24c7826e4.*d1c4e7d371 // Final|Native|Static|Public|BlueprintCallable // @ game+0x664a6e4
};


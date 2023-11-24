// Class WindowsFileUtility.*97d645f62c
// Size: 0x28 (Inherited: 0x28)
struct U*97d645f62c : UInterface {

	struct TArray<struct FString> OnListDone(); // Function WindowsFileUtility.*97d645f62c.OnListDone // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x672228c
	struct FString OnListDirectoryFound(); // Function WindowsFileUtility.*97d645f62c.OnListDirectoryFound // Native|Event|Public|BlueprintEvent // @ game+0x6722144
	void OnListFileFound(int32 ByteCount); // Function WindowsFileUtility.*97d645f62c.OnListFileFound // Native|Event|Public|BlueprintEvent // @ game+0x6722444
};

// Class WindowsFileUtility.*da90a5f466
// Size: 0x80 (Inherited: 0x28)
struct U*da90a5f466 : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class WindowsFileUtility.*7d49eb7f10
// Size: 0x28 (Inherited: 0x28)
struct U*7d49eb7f10 : UInterface {

	struct FString OnDirectoryChanged(); // Function WindowsFileUtility.*7d49eb7f10.OnDirectoryChanged // Native|Event|Public|BlueprintEvent // @ game+0x6721ffc
	void OnFileChanged(); // Function WindowsFileUtility.*7d49eb7f10.OnFileChanged // Native|Event|Public|BlueprintEvent // @ game+0x6722144
};

// Class WindowsFileUtility.*8236aa5b78
// Size: 0x80 (Inherited: 0x28)
struct U*8236aa5b78 : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class WindowsFileUtility.*981a580844
// Size: 0x28 (Inherited: 0x28)
struct U*981a580844 : UBlueprintFunctionLibrary {

	struct FString *9eb092cc55(); // Function WindowsFileUtility.*981a580844.*9eb092cc55 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6721d5c
	struct FString *cc8a32ab4c(); // Function WindowsFileUtility.*981a580844.*cc8a32ab4c // Final|Native|Static|Public|BlueprintCallable // @ game+0x6721e9c
	void *be4e70325d(); // Function WindowsFileUtility.*981a580844.*be4e70325d // Final|Native|Static|Public|BlueprintCallable // @ game+0x67226e4
	void *30def009de(); // Function WindowsFileUtility.*981a580844.*30def009de // Final|Native|Static|Public|BlueprintCallable // @ game+0x6721bd0
	struct FString *1157a53d99(); // Function WindowsFileUtility.*981a580844.*1157a53d99 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6721ca0
	void *9603cc7c6f(struct FString FullPath); // Function WindowsFileUtility.*981a580844.*9603cc7c6f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6721a2c
	void *5b40aae030(struct FString FullPath); // Function WindowsFileUtility.*981a580844.*5b40aae030 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67225d8
	struct FString *09bbf4195d(); // Function WindowsFileUtility.*981a580844.*09bbf4195d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6721b00
};


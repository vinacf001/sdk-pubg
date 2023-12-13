// Class ACLPlugin.ACLStatsDumpCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UACLStatsDumpCommandlet : UCommandlet {
	struct FString HelpDescription; // 0x30(0x10)
	struct FString HelpUsage; // 0x40(0x10)
	struct FString HelpWebLink; // 0x50(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x60(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x70(0x10)
	char IsServer : 1; // 0x80(0x01)
	char IsClient : 1; // 0x80(0x01)
	char IsEditor : 1; // 0x80(0x01)
	char LogToConsole : 1; // 0x80(0x01)
	char ShowErrorCount : 1; // 0x80(0x01)
};

// Class ACLPlugin.AnimCompress_ACLAuto
// Size: 0x50 (Inherited: 0x50)
struct UAnimCompress_ACLAuto : UAnimCompress {
	struct FString Description; // 0x30(0x10)
	char *3addc88350 : 1; // 0x40(0x01)
	enum class AnimationCompressionFormat *9a80dacfb6; // 0x44(0x01)
	enum class AnimationCompressionFormat *e0d7d1e69f; // 0x45(0x01)
	enum class AnimationCompressionFormat *10e9b8feb6; // 0x46(0x01)
	float *4806a30e1b; // 0x48(0x04)
};

// Class ACLPlugin.*0c7a994f60
// Size: 0x50 (Inherited: 0x50)
struct U*0c7a994f60 : UAnimCompress {
	struct FString Description; // 0x30(0x10)
	char *3addc88350 : 1; // 0x40(0x01)
	enum class AnimationCompressionFormat *9a80dacfb6; // 0x44(0x01)
	enum class AnimationCompressionFormat *e0d7d1e69f; // 0x45(0x01)
	enum class AnimationCompressionFormat *10e9b8feb6; // 0x46(0x01)
	float *4806a30e1b; // 0x48(0x04)
};

// Class ACLPlugin.*002a434c06
// Size: 0x68 (Inherited: 0x50)
struct U*002a434c06 : U*0c7a994f60 {
	enum class *5dc5c5f2d2 *9085d412cd; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float *3c610d441d; // 0x54(0x04)
	float *1177e7dcdd; // 0x58(0x04)
	float *5c8bae55c9; // 0x5c(0x04)
	float *487f237c49; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class ACLPlugin.*fcdbc7d951
// Size: 0x78 (Inherited: 0x50)
struct U*fcdbc7d951 : U*0c7a994f60 {
	float *3c610d441d; // 0x50(0x04)
	float *1177e7dcdd; // 0x54(0x04)
	enum class *5dc5c5f2d2 *9085d412cd; // 0x58(0x01)
	enum class *576187bc4d *82aa79a113; // 0x59(0x01)
	enum class *156b937466 *434292ce2b; // 0x5a(0x01)
	enum class *156b937466 *c1b7d05dc6; // 0x5b(0x01)
	float *487f237c49; // 0x5c(0x04)
	float *d8e955444c; // 0x60(0x04)
	float *1fe79abbc3; // 0x64(0x04)
	float *7fb4f70973; // 0x68(0x04)
	char *a0eac16f12 : 1; // 0x6c(0x01)
	char *b1b5c6a31c : 1; // 0x6c(0x01)
	char *82c5cca650 : 1; // 0x6c(0x01)
	char *88dc9ecc68 : 1; // 0x6c(0x01)
	char *1d7c4e8427 : 1; // 0x6c(0x01)
	char *4478bf6a98 : 1; // 0x6c(0x01)
	char *539e0e427f : 1; // 0x6c(0x01)
	char pad_6C_7 : 1; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	uint16 *a52b4fd1fa; // 0x70(0x02)
	uint16 *059df5e8b2; // 0x72(0x02)
	char pad_74[0x4]; // 0x74(0x04)
};


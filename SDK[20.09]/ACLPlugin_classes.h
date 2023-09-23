// Class ACLPlugin.ACLStatsDumpCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UACLStatsDumpCommandlet : UCommandlet {
	struct FString HelpDescription; // 0x28(0x10)
	struct FString HelpUsage; // 0x38(0x10)
	struct FString HelpWebLink; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
};

// Class ACLPlugin.AnimCompress_ACLAuto
// Size: 0x48 (Inherited: 0x48)
struct UAnimCompress_ACLAuto : UAnimCompress {
	struct FString Description; // 0x28(0x10)
	char *6f2b554c06 : 1; // 0x38(0x01)
	enum class AnimationCompressionFormat *b6136e48ec; // 0x3c(0x01)
	enum class AnimationCompressionFormat *e93b168264; // 0x3d(0x01)
	enum class AnimationCompressionFormat *1def19490b; // 0x3e(0x01)
	float *cb16fd1092; // 0x40(0x04)
};

// Class ACLPlugin.*26ddbcc924
// Size: 0x48 (Inherited: 0x48)
struct U*26ddbcc924 : UAnimCompress {
	struct FString Description; // 0x28(0x10)
	char *6f2b554c06 : 1; // 0x38(0x01)
	enum class AnimationCompressionFormat *b6136e48ec; // 0x3c(0x01)
	enum class AnimationCompressionFormat *e93b168264; // 0x3d(0x01)
	enum class AnimationCompressionFormat *1def19490b; // 0x3e(0x01)
	float *cb16fd1092; // 0x40(0x04)
};

// Class ACLPlugin.*0e53730cf3
// Size: 0x60 (Inherited: 0x48)
struct U*0e53730cf3 : U*26ddbcc924 {
	enum class *7e21892861 *baaeeb7b3d; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float *dd700f471f; // 0x4c(0x04)
	float *ec5e58f59c; // 0x50(0x04)
	float *d51408043a; // 0x54(0x04)
	float *82ad38d200; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class ACLPlugin.*aedc2c2c19
// Size: 0x70 (Inherited: 0x48)
struct U*aedc2c2c19 : U*26ddbcc924 {
	float *dd700f471f; // 0x48(0x04)
	float *ec5e58f59c; // 0x4c(0x04)
	enum class *7e21892861 *baaeeb7b3d; // 0x50(0x01)
	enum class *adfeed7711 *a2c4fdf1ee; // 0x51(0x01)
	enum class *4135de9f5f *8fc48140c9; // 0x52(0x01)
	enum class *4135de9f5f *608910a48e; // 0x53(0x01)
	float *82ad38d200; // 0x54(0x04)
	float *ded144e4cc; // 0x58(0x04)
	float *b1d8358d5b; // 0x5c(0x04)
	float *fdf3ea6011; // 0x60(0x04)
	char *192d1638c8 : 1; // 0x64(0x01)
	char *c4391ddb76 : 1; // 0x64(0x01)
	char *da33a3180d : 1; // 0x64(0x01)
	char *3611f2a664 : 1; // 0x64(0x01)
	char *92b533bf0e : 1; // 0x64(0x01)
	char *171a84b198 : 1; // 0x64(0x01)
	char *ce9f659792 : 1; // 0x64(0x01)
	char pad_64_7 : 1; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	uint16 *65acc98570; // 0x68(0x02)
	uint16 *de2afb68df; // 0x6a(0x02)
	char pad_6C[0x4]; // 0x6c(0x04)
};


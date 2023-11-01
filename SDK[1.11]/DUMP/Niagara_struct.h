// ScriptStruct Niagara.*831ef3e2b5
// Size: 0x30 (Inherited: 0x00)
struct F*831ef3e2b5 {
	struct FGuid ID; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct F*9a153aec71 TypeDef; // 0x18(0x08)
	struct TArray<bool> *b189824777; // 0x20(0x10)
};

// ScriptStruct Niagara.*9a153aec71
// Size: 0x08 (Inherited: 0x00)
struct F*9a153aec71 {
	struct UStruct* Struct; // 0x00(0x08)
};

// ScriptStruct Niagara.NiagaraMatrix
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraMatrix {
	struct FVector4 Row0; // 0x00(0x10)
	struct FVector4 Row1; // 0x10(0x10)
	struct FVector4 Row2; // 0x20(0x10)
	struct FVector4 Row3; // 0x30(0x10)
};

// ScriptStruct Niagara.NiagaraTestStruct
// Size: 0x48 (Inherited: 0x00)
struct FNiagaraTestStruct {
	struct FVector *bd927370af; // 0x00(0x0c)
	struct FVector Vector2; // 0x0c(0x0c)
	struct F*84378d86f8 *2b62d9e34c; // 0x18(0x18)
	struct F*84378d86f8 *d960e6b2bd; // 0x30(0x18)
};

// ScriptStruct Niagara.*84378d86f8
// Size: 0x18 (Inherited: 0x00)
struct F*84378d86f8 {
	struct FVector *af829feb10; // 0x00(0x0c)
	struct FVector *8ce18fcdd5; // 0x0c(0x0c)
};

// ScriptStruct Niagara.NiagaraNumeric
// Size: 0x01 (Inherited: 0x00)
struct FNiagaraNumeric {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraBool
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraBool {
	int32 Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraInt32
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraInt32 {
	int32 Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraFloat
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraFloat {
	float Value; // 0x00(0x04)
};

// ScriptStruct Niagara.*293bdb6ea6
// Size: 0x30 (Inherited: 0x00)
struct F*293bdb6ea6 {
	struct FName Name; // 0x00(0x08)
	struct FGuid *052d6ca11f; // 0x08(0x10)
	struct TArray<bool> *4707982dee; // 0x18(0x10)
	int32 NumOutputs; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Niagara.*71a0132d52
// Size: 0x20 (Inherited: 0x00)
struct F*71a0132d52 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Niagara.*f4f6cf12de
// Size: 0x20 (Inherited: 0x00)
struct F*f4f6cf12de {
	struct U*ffb587be47* *55be5764d7; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct FName Name; // 0x18(0x08)
};

// ScriptStruct Niagara.*f247a61667
// Size: 0x40 (Inherited: 0x00)
struct F*f247a61667 {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*831ef3e2b5> Inputs; // 0x08(0x10)
	struct TArray<struct F*831ef3e2b5> Outputs; // 0x18(0x10)
	struct FGuid *052d6ca11f; // 0x28(0x10)
	bool *045cc24f10; // 0x38(0x01)
	bool *9c9e24ab45; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Niagara.*4d34e704b7
// Size: 0x01 (Inherited: 0x00)
struct F*4d34e704b7 {
	bool *428bf3cc32; // 0x00(0x01)
};

// ScriptStruct Niagara.*ba006c8db9
// Size: 0x20 (Inherited: 0x00)
struct F*ba006c8db9 {
	struct F*f60a0b30ce ID; // 0x00(0x10)
	struct TArray<struct F*831ef3e2b5> Variables; // 0x10(0x10)
};

// ScriptStruct Niagara.*f60a0b30ce
// Size: 0x10 (Inherited: 0x00)
struct F*f60a0b30ce {
	struct FName Name; // 0x00(0x08)
	enum class ENiagaraDataSetType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Niagara.*0307a8383f
// Size: 0x68 (Inherited: 0x00)
struct F*0307a8383f {
	struct TArray<int32> *90a1d2b433; // 0x00(0x10)
	char pad_10[0x58]; // 0x10(0x58)
};

// ScriptStruct Niagara.*e4abd30a00
// Size: 0x10 (Inherited: 0x00)
struct F*e4abd30a00 {
	int32 Tri; // 0x00(0x04)
	struct FVector *343daeea76; // 0x04(0x0c)
};

// ScriptStruct Niagara.*e392b910f6
// Size: 0x30 (Inherited: 0x00)
struct F*e392b910f6 {
	struct FGuid ID; // 0x00(0x10)
	struct FName *7bd28bdede; // 0x10(0x08)
	bool bIsEnabled; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FName Name; // 0x20(0x08)
	struct U*a99086bd72* Instance; // 0x28(0x08)
};

// ScriptStruct Niagara.*95905ae00c
// Size: 0x30 (Inherited: 0x00)
struct F*95905ae00c {
	struct FGuid *bdd1c58b0f; // 0x00(0x10)
	struct FGuid *d1a2b446f6; // 0x10(0x10)
	struct FString *050a3a60d2; // 0x20(0x10)
};

// ScriptStruct Niagara.*a21fec00bc
// Size: 0x30 (Inherited: 0x00)
struct F*a21fec00bc {
	struct FGuid *bdd1c58b0f; // 0x00(0x10)
	struct FGuid *d1a2b446f6; // 0x10(0x10)
	struct FGuid *89dd03fb38; // 0x20(0x10)
};

// ScriptStruct Niagara.*5aeb905912
// Size: 0x10 (Inherited: 0x00)
struct F*5aeb905912 {
	struct TArray<struct F*831ef3e2b5> Parameters; // 0x00(0x10)
};

// ScriptStruct Niagara.*d1b19a5814
// Size: 0x2c (Inherited: 0x00)
struct F*d1b19a5814 {
	struct FVector *89cff90eb6; // 0x00(0x0c)
	struct FVector CollisionNormal; // 0x0c(0x0c)
	int32 PhysicalMaterialIndex; // 0x18(0x04)
	struct FVector CollisionVelocity; // 0x1c(0x0c)
	int32 ParticleIndex; // 0x28(0x04)
};

// ScriptStruct Niagara.*b8f3e1d819
// Size: 0x10 (Inherited: 0x00)
struct F*b8f3e1d819 {
	float Time; // 0x00(0x04)
	float *d9393a67e1; // 0x04(0x04)
	uint32 *a5a562a03d; // 0x08(0x04)
	uint32 *385a9d4c9a; // 0x0c(0x04)
};

// ScriptStruct Niagara.*603143bda9
// Size: 0x50 (Inherited: 0x28)
struct F*603143bda9 : F*c2b29cb2c9 {
	enum class *b9494b70e6 *1db494df53; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32 *496ffd9bf9; // 0x2c(0x04)
	uint32 *92946d4cfd; // 0x30(0x04)
	struct FGuid *20b25aadfe; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
	struct FName *da7e4ce818; // 0x48(0x08)
};

// ScriptStruct Niagara.*c2b29cb2c9
// Size: 0x28 (Inherited: 0x00)
struct F*c2b29cb2c9 {
	struct U*10bb51f6b2* Script; // 0x00(0x08)
	struct TArray<struct F*99fd1a7c40> EventReceivers; // 0x08(0x10)
	struct TArray<struct F*0eb7fc76c4> *b365273800; // 0x18(0x10)
};

// ScriptStruct Niagara.*0eb7fc76c4
// Size: 0x38 (Inherited: 0x00)
struct F*0eb7fc76c4 {
	int32 *92946d4cfd; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
	struct F*ba006c8db9 *2b433eb33c; // 0x18(0x20)
};

// ScriptStruct Niagara.*99fd1a7c40
// Size: 0x28 (Inherited: 0x00)
struct F*99fd1a7c40 {
	struct FName Name; // 0x00(0x08)
	struct FName *dd85beea3f; // 0x08(0x08)
	struct FName *6935870f66; // 0x10(0x08)
	struct TArray<struct U*0e293a70a5*> EmitterActions; // 0x18(0x10)
};


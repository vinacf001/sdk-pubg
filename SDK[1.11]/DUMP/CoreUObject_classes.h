// Class CoreUObject.Object
// Size: 0x28 (Inherited: 0x00)
struct UObject {
	char pad_0[0x28]; // 0x00(0x28)

	void ExecuteUbergraph(); // Function CoreUObject.Object.ExecuteUbergraph // Event|Public|BlueprintEvent // @ game+0x2cd4ac
};

// Class CoreUObject.Interface
// Size: 0x28 (Inherited: 0x28)
struct UInterface : UObject {
};

// Class CoreUObject.GCObjectReferencer
// Size: 0x60 (Inherited: 0x28)
struct UGCObjectReferencer : UObject {
	char pad_28[0x38]; // 0x28(0x38)
};

// Class CoreUObject.TextBuffer
// Size: 0x50 (Inherited: 0x28)
struct UTextBuffer : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class CoreUObject.Field
// Size: 0x30 (Inherited: 0x28)
struct UField : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class CoreUObject.Struct
// Size: 0xe0 (Inherited: 0x30)
struct UStruct : UField {
	char pad_30[0xb0]; // 0x30(0xb0)
};

// Class CoreUObject.ScriptStruct
// Size: 0xf0 (Inherited: 0xe0)
struct UScriptStruct : UStruct {
	char pad_E0[0x10]; // 0xe0(0x10)
};

// Class CoreUObject.Package
// Size: 0x150 (Inherited: 0x28)
struct UPackage : UObject {
	char pad_28[0x128]; // 0x28(0x128)
};

// Class CoreUObject.Class
// Size: 0x2b0 (Inherited: 0xe0)
struct UClass : UStruct {
	char pad_E0[0x1d0]; // 0xe0(0x1d0)
};

// Class CoreUObject.Function
// Size: 0x130 (Inherited: 0xe0)
struct UFunction : UStruct {
	char pad_E0[0x50]; // 0xe0(0x50)
};

// Class CoreUObject.DelegateFunction
// Size: 0x130 (Inherited: 0x130)
struct UDelegateFunction : UFunction {
};

// Class CoreUObject.DynamicClass
// Size: 0x318 (Inherited: 0x2b0)
struct UDynamicClass : UClass {
	char pad_2B0[0x68]; // 0x2b0(0x68)
};

// Class CoreUObject.PackageMap
// Size: 0xe0 (Inherited: 0x28)
struct UPackageMap : UObject {
	char pad_28[0xb8]; // 0x28(0xb8)
};

// Class CoreUObject.Enum
// Size: 0x70 (Inherited: 0x30)
struct UEnum : UField {
	char pad_30[0x40]; // 0x30(0x40)
};

// Class CoreUObject.Property
// Size: 0x78 (Inherited: 0x30)
struct UProperty : UField {
	char pad_30[0x48]; // 0x30(0x48)
};

// Class CoreUObject.EnumProperty
// Size: 0x88 (Inherited: 0x78)
struct UEnumProperty : UProperty {
	char pad_78[0x10]; // 0x78(0x10)
};

// Class CoreUObject.LinkerPlaceholderClass
// Size: 0x450 (Inherited: 0x2b0)
struct ULinkerPlaceholderClass : UClass {
	char pad_2B0[0x1a0]; // 0x2b0(0x1a0)
};

// Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0xd8 (Inherited: 0x28)
struct ULinkerPlaceholderExportObject : UObject {
	char pad_28[0xb0]; // 0x28(0xb0)
};

// Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x2d0 (Inherited: 0x130)
struct ULinkerPlaceholderFunction : UFunction {
	char pad_130[0x1a0]; // 0x130(0x1a0)
};

// Class CoreUObject.MetaData
// Size: 0xc8 (Inherited: 0x28)
struct UMetaData : UObject {
	char pad_28[0xa0]; // 0x28(0xa0)
};

// Class CoreUObject.ObjectRedirector
// Size: 0x30 (Inherited: 0x28)
struct UObjectRedirector : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class CoreUObject.ArrayProperty
// Size: 0x80 (Inherited: 0x78)
struct UArrayProperty : UProperty {
	char pad_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.ObjectPropertyBase
// Size: 0x80 (Inherited: 0x78)
struct UObjectPropertyBase : UProperty {
	char pad_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.AssetObjectProperty
// Size: 0x80 (Inherited: 0x80)
struct UAssetObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.AssetClassProperty
// Size: 0x88 (Inherited: 0x80)
struct UAssetClassProperty : UAssetObjectProperty {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class CoreUObject.BoolProperty
// Size: 0x80 (Inherited: 0x78)
struct UBoolProperty : UProperty {
	char pad_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.NumericProperty
// Size: 0x78 (Inherited: 0x78)
struct UNumericProperty : UProperty {
};

// Class CoreUObject.ByteProperty
// Size: 0x80 (Inherited: 0x78)
struct UByteProperty : UNumericProperty {
	char pad_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.ObjectProperty
// Size: 0x80 (Inherited: 0x80)
struct UObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.ClassProperty
// Size: 0x88 (Inherited: 0x80)
struct UClassProperty : UObjectProperty {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class CoreUObject.DelegateProperty
// Size: 0x80 (Inherited: 0x78)
struct UDelegateProperty : UProperty {
	char pad_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.DoubleProperty
// Size: 0x78 (Inherited: 0x78)
struct UDoubleProperty : UNumericProperty {
};

// Class CoreUObject.FloatProperty
// Size: 0x78 (Inherited: 0x78)
struct UFloatProperty : UNumericProperty {
};

// Class CoreUObject.IntProperty
// Size: 0x78 (Inherited: 0x78)
struct UIntProperty : UNumericProperty {
};

// Class CoreUObject.Int16Property
// Size: 0x78 (Inherited: 0x78)
struct UInt16Property : UNumericProperty {
};

// Class CoreUObject.Int64Property
// Size: 0x78 (Inherited: 0x78)
struct UInt64Property : UNumericProperty {
};

// Class CoreUObject.Int8Property
// Size: 0x78 (Inherited: 0x78)
struct UInt8Property : UNumericProperty {
};

// Class CoreUObject.InterfaceProperty
// Size: 0x80 (Inherited: 0x78)
struct UInterfaceProperty : UProperty {
	char pad_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.LazyObjectProperty
// Size: 0x80 (Inherited: 0x80)
struct ULazyObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.MapProperty
// Size: 0xb0 (Inherited: 0x78)
struct UMapProperty : UProperty {
	char pad_78[0x38]; // 0x78(0x38)
};

// Class CoreUObject.MulticastDelegateProperty
// Size: 0x80 (Inherited: 0x78)
struct UMulticastDelegateProperty : UProperty {
	char pad_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.NameProperty
// Size: 0x78 (Inherited: 0x78)
struct UNameProperty : UProperty {
};

// Class CoreUObject.EncryptedObjectProperty
// Size: 0x80 (Inherited: 0x80)
struct UEncryptedObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.SetProperty
// Size: 0xa0 (Inherited: 0x78)
struct USetProperty : UProperty {
	char pad_78[0x28]; // 0x78(0x28)
};

// Class CoreUObject.StrProperty
// Size: 0x78 (Inherited: 0x78)
struct UStrProperty : UProperty {
};

// Class CoreUObject.StructProperty
// Size: 0x80 (Inherited: 0x78)
struct UStructProperty : UProperty {
	char pad_78[0x8]; // 0x78(0x08)
};

// Class CoreUObject.UInt16Property
// Size: 0x78 (Inherited: 0x78)
struct UUInt16Property : UNumericProperty {
};

// Class CoreUObject.UInt32Property
// Size: 0x78 (Inherited: 0x78)
struct UUInt32Property : UNumericProperty {
};

// Class CoreUObject.UInt64Property
// Size: 0x78 (Inherited: 0x78)
struct UUInt64Property : UNumericProperty {
};

// Class CoreUObject.WeakObjectProperty
// Size: 0x80 (Inherited: 0x80)
struct UWeakObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.TextProperty
// Size: 0x78 (Inherited: 0x78)
struct UTextProperty : UProperty {
};


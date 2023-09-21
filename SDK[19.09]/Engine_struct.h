// ScriptStruct Engine.DistributionLookupTable
// Size: 0x28 (Inherited: 0x00)
struct FDistributionLookupTable {
	bool Op; // 0x00(0x01)
	bool EntryCount; // 0x01(0x01)
	bool EntryStride; // 0x02(0x01)
	bool SubEntryStride; // 0x03(0x01)
	float TimeScale; // 0x04(0x04)
	float TimeBias; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<float> Values; // 0x10(0x10)
	bool LockFlag; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.RawDistribution
// Size: 0x28 (Inherited: 0x00)
struct FRawDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.FloatDistribution
// Size: 0x28 (Inherited: 0x00)
struct FFloatDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.VectorDistribution
// Size: 0x28 (Inherited: 0x00)
struct FVectorDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.Vector4Distribution
// Size: 0x28 (Inherited: 0x00)
struct FVector4Distribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.FormatArgumentData
// Size: 0x40 (Inherited: 0x00)
struct FFormatArgumentData {
	struct FString ArgumentName; // 0x00(0x10)
	enum class EFormatArgumentType ArgumentValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText ArgumentValue; // 0x18(0x18)
	int32 ArgumentValueInt; // 0x30(0x04)
	float ArgumentValueFloat; // 0x34(0x04)
	enum class ETextGender ArgumentValueGender; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.ExpressionInput
// Size: 0x38 (Inherited: 0x00)
struct FExpressionInput {
	int32 OutputIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString InputName; // 0x08(0x10)
	int32 Mask; // 0x18(0x04)
	int32 MaskR; // 0x1c(0x04)
	int32 MaskG; // 0x20(0x04)
	int32 MaskB; // 0x24(0x04)
	int32 MaskA; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName ExpressionName; // 0x30(0x08)
};

// ScriptStruct Engine.MaterialAttributesInput
// Size: 0x40 (Inherited: 0x38)
struct FMaterialAttributesInput : FExpressionInput {
	int32 PropertyConnectedBitmask; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.ExpressionOutput
// Size: 0x28 (Inherited: 0x00)
struct FExpressionOutput {
	struct FString OutputName; // 0x00(0x10)
	int32 Mask; // 0x10(0x04)
	int32 MaskR; // 0x14(0x04)
	int32 MaskG; // 0x18(0x04)
	int32 MaskB; // 0x1c(0x04)
	int32 MaskA; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.MaterialInput
// Size: 0x38 (Inherited: 0x00)
struct FMaterialInput {
	int32 OutputIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString InputName; // 0x08(0x10)
	int32 Mask; // 0x18(0x04)
	int32 MaskR; // 0x1c(0x04)
	int32 MaskG; // 0x20(0x04)
	int32 MaskB; // 0x24(0x04)
	int32 MaskA; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName ExpressionName; // 0x30(0x08)
};

// ScriptStruct Engine.ColorMaterialInput
// Size: 0x40 (Inherited: 0x38)
struct FColorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FColor Constant; // 0x3c(0x04)
};

// ScriptStruct Engine.ScalarMaterialInput
// Size: 0x40 (Inherited: 0x38)
struct FScalarMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Constant; // 0x3c(0x04)
};

// ScriptStruct Engine.VectorMaterialInput
// Size: 0x48 (Inherited: 0x38)
struct FVectorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector Constant; // 0x3c(0x0c)
};

// ScriptStruct Engine.Vector2MaterialInput
// Size: 0x48 (Inherited: 0x38)
struct FVector2MaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float ConstantX; // 0x3c(0x04)
	float ConstantY; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.HitResult
// Size: 0x88 (Inherited: 0x00)
struct FHitResult {
	char bBlockingHit : 1; // 0x00(0x01)
	char bStartPenetrating : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Time; // 0x04(0x04)
	float Distance; // 0x08(0x04)
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	struct FVector_NetQuantize ImpactPoint; // 0x18(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x24(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x30(0x0c)
	struct FVector_NetQuantize TraceStart; // 0x3c(0x0c)
	struct FVector_NetQuantize TraceEnd; // 0x48(0x0c)
	float PenetrationDepth; // 0x54(0x04)
	int32 Item; // 0x58(0x04)
	struct UPhysicalMaterial* PhysMaterial; // 0x5c(0x08)
	struct AActor* Actor; // 0x64(0x08)
	struct UPrimitiveComponent* Component; // 0x6c(0x08)
	char pad_74[0x4]; // 0x74(0x04)
	struct FName BoneName; // 0x78(0x08)
	int32 FaceIndex; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Engine.Vector_NetQuantize
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize : FVector {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantizeNormal : FVector {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct Engine.*861f26b4bb
// Size: 0x10 (Inherited: 0x00)
struct F*861f26b4bb {
	struct TArray<struct FFloatCurve> *87b8344682; // 0x00(0x10)
};

// ScriptStruct Engine.FloatCurve
// Size: 0x90 (Inherited: 0x20)
struct FFloatCurve : FAnimCurveBase {
	struct FRichCurve FloatCurve; // 0x20(0x70)
};

// ScriptStruct Engine.AnimCurveBase
// Size: 0x20 (Inherited: 0x00)
struct FAnimCurveBase {
	struct FName LastObservedName; // 0x00(0x08)
	struct FSmartName Name; // 0x08(0x10)
	int32 CurveTypeFlags; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.SmartName
// Size: 0x10 (Inherited: 0x00)
struct FSmartName {
	struct FName DisplayName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.RichCurve
// Size: 0x70 (Inherited: 0x58)
struct FRichCurve : FIndexedCurve {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x58(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float DefaultValue; // 0x5c(0x04)
	struct TArray<struct FRichCurveKey> Keys; // 0x60(0x10)
};

// ScriptStruct Engine.IndexedCurve
// Size: 0x58 (Inherited: 0x00)
struct FIndexedCurve {
	char pad_0[0x8]; // 0x00(0x08)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x08(0x50)
};

// ScriptStruct Engine.KeyHandleMap
// Size: 0x50 (Inherited: 0x00)
struct FKeyHandleMap {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.RichCurveKey
// Size: 0x1c (Inherited: 0x00)
struct FRichCurveKey {
	enum class *c9716074e5 InterpMode; // 0x00(0x01)
	enum class *ceb76151f9 TangentMode; // 0x01(0x01)
	enum class *496dbc6708 TangentWeightMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
	float ArriveTangent; // 0x0c(0x04)
	float ArriveTangentWeight; // 0x10(0x04)
	float LeaveTangent; // 0x14(0x04)
	float LeaveTangentWeight; // 0x18(0x04)
};

// ScriptStruct Engine.AnimNotifyEvent
// Size: 0xa8 (Inherited: 0x30)
struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30(0x04)
	float *15fb7de5c8; // 0x34(0x04)
	float *4505e42056; // 0x38(0x04)
	float TriggerWeightThreshold; // 0x3c(0x04)
	struct FName NotifyName; // 0x40(0x08)
	struct UAnimNotify* Notify; // 0x48(0x08)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x08)
	float Duration; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool *3464e08733; // 0x90(0x01)
	enum class EMontageNotifyTickType MontageTickType; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float NotifyTriggerChance; // 0x94(0x04)
	enum class ENotifyFilterType NotifyFilterType; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 NotifyFilterLOD; // 0x9c(0x04)
	bool bTriggerOnDedicatedServer; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 TrackIndex; // 0xa4(0x04)
};

// ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x00)
struct FAnimLinkableElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAnimMontage* *a4be709a3b; // 0x08(0x08)
	int32 SlotIndex; // 0x10(0x04)
	int32 *11084054b7; // 0x14(0x04)
	enum class EAnimLinkMethod *d4a0a43e13; // 0x18(0x01)
	enum class EAnimLinkMethod *35966c566f; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float *e9da86e92f; // 0x1c(0x04)
	float *562e7b16f7; // 0x20(0x04)
	float *76d613685b; // 0x24(0x04)
	struct UAnimSequenceBase* *724cb57b19; // 0x28(0x08)
};

// ScriptStruct Engine.*053a0453d8
// Size: 0x0c (Inherited: 0x00)
struct F*053a0453d8 {
	int32 *754da211b7; // 0x00(0x04)
	float *71d2c752e8; // 0x04(0x04)
	enum class EAnimNotifyEventType *62a1bfb361; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : FAnimLinkableElement {
	struct FName EventName; // 0x30(0x08)
	float DisplayTime; // 0x38(0x04)
	float *15fb7de5c8; // 0x3c(0x04)
};

// ScriptStruct Engine.*e4cf0cd6cd
// Size: 0x18 (Inherited: 0x00)
struct F*e4cf0cd6cd {
	struct FName SlotName; // 0x00(0x08)
	struct FAnimTrack AnimTrack; // 0x08(0x10)
};

// ScriptStruct Engine.AnimTrack
// Size: 0x10 (Inherited: 0x00)
struct FAnimTrack {
	struct TArray<struct FAnimSegment> AnimSegments; // 0x00(0x10)
};

// ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x00)
struct FAnimSegment {
	struct UAnimSequenceBase* AnimReference; // 0x00(0x08)
	float StartPos; // 0x08(0x04)
	float AnimStartTime; // 0x0c(0x04)
	float AnimEndTime; // 0x10(0x04)
	float AnimPlayRate; // 0x14(0x04)
	int32 LoopingCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*e65551b591
// Size: 0x58 (Inherited: 0x30)
struct F*e65551b591 : FAnimLinkableElement {
	struct FName SectionName; // 0x30(0x08)
	float StartTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FName *158bc9d851; // 0x40(0x08)
	struct TArray<struct U*460f026d00*> MetaData; // 0x48(0x10)
};

// ScriptStruct Engine.*744d0d8f9a
// Size: 0x20 (Inherited: 0x00)
struct F*744d0d8f9a {
	struct TArray<struct F*faa7441826> AuthoredSyncMarkers; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*faa7441826
// Size: 0x10 (Inherited: 0x00)
struct F*faa7441826 {
	struct FName MarkerName; // 0x00(0x08)
	float Time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.AlphaBlend
// Size: 0x38 (Inherited: 0x00)
struct FAlphaBlend {
	enum class EAlphaBlendOption BlendOption; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* CustomCurve; // 0x08(0x08)
	float BlendTime; // 0x10(0x04)
	char pad_14[0x24]; // 0x14(0x24)
};

// ScriptStruct Engine.*85ff546bee
// Size: 0x20 (Inherited: 0x00)
struct F*85ff546bee {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x00)
struct FSimpleMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FName MemberName; // 0x08(0x08)
	struct FGuid *a35af00483; // 0x10(0x10)
};

// ScriptStruct Engine.*64c6f9629b
// Size: 0x58 (Inherited: 0x50)
struct F*64c6f9629b : F*83ad5ff7d4 {
	enum class ETickingGroup *dd7d84feff; // 0x08(0x01)
	enum class ETickingGroup *a83d44e470; // 0x09(0x01)
	char *c10f697e3c : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *5363d98d66 : 1; // 0x0c(0x01)
	char *2015f44ce1 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*83ad5ff7d4
// Size: 0x50 (Inherited: 0x00)
struct F*83ad5ff7d4 {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ETickingGroup *dd7d84feff; // 0x08(0x01)
	enum class ETickingGroup *a83d44e470; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	char *c10f697e3c : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *5363d98d66 : 1; // 0x0c(0x01)
	char *2015f44ce1 : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x33]; // 0x0d(0x33)
	float TickInterval; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct Engine.*cc00d9579b
// Size: 0x20 (Inherited: 0x00)
struct F*cc00d9579b {
	struct FText Text; // 0x00(0x18)
	float Time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*b7b753c7d1
// Size: 0x1c (Inherited: 0x00)
struct F*b7b753c7d1 {
	struct FVector PositionControlPoint; // 0x00(0x0c)
	bool bPositionIsRelative; // 0x0c(0x01)
	char pad_D[0xf]; // 0x0d(0x0f)
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x18 (Inherited: 0x01)
struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	char pad_1[0x17]; // 0x01(0x17)
};

// ScriptStruct Engine.*d4417ddf12
// Size: 0x38 (Inherited: 0x00)
struct F*d4417ddf12 {
	bool *dda7aa4b31; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*f6f1ba044c Data; // 0x08(0x30)
};

// ScriptStruct Engine.*f6f1ba044c
// Size: 0x30 (Inherited: 0x00)
struct F*f6f1ba044c {
	struct FName *5e6c71403d; // 0x00(0x08)
	enum class *5cd579a4ad Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 IntValue; // 0x0c(0x04)
	float FloatValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* *eab4d77c70; // 0x28(0x08)
};

// ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x00)
struct FDebugFloatHistory {
	struct TArray<float> Samples; // 0x00(0x10)
	float MaxSamples; // 0x10(0x04)
	float MinValue; // 0x14(0x04)
	float MaxValue; // 0x18(0x04)
	bool bAutoAdjustMinMax; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*9c84e0ea54
// Size: 0x08 (Inherited: 0x00)
struct F*9c84e0ea54 {
	uint64 Handle; // 0x00(0x08)
};

// ScriptStruct Engine.*f12de431dc
// Size: 0x18 (Inherited: 0x00)
struct F*f12de431dc {
	int32 Linkage; // 0x00(0x04)
	int32 UUID; // 0x04(0x04)
	struct FName *d81c8dd57b; // 0x08(0x08)
	struct UObject* *bedb110571; // 0x10(0x08)
};

// ScriptStruct Engine.*14fe4436f4
// Size: 0x04 (Inherited: 0x00)
struct F*14fe4436f4 {
	int32 Data; // 0x00(0x04)
};

// ScriptStruct Engine.*601793cca8
// Size: 0x18 (Inherited: 0x00)
struct F*601793cca8 {
	struct FString ActionName; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.CollisionProfileName
// Size: 0x08 (Inherited: 0x00)
struct FCollisionProfileName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Engine.*6837b5545b
// Size: 0x0c (Inherited: 0x00)
struct F*6837b5545b {
	int32 *c030499774; // 0x00(0x04)
	int32 *8c26d5dd4e; // 0x04(0x04)
	int32 *648d64ce56; // 0x08(0x04)
};

// ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FCurveTableRowHandle {
	struct UCurveTable* CurveTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize10
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize10 : FVector {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize100 : FVector {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct Engine.*9e4daeff05
// Size: 0xb0 (Inherited: 0x00)
struct F*9e4daeff05 {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.*2177a5ac2f
// Size: 0x18 (Inherited: 0x00)
struct F*2177a5ac2f {
	char pad_0[0x8]; // 0x00(0x08)
	struct FAttackId AttackId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *16f53171af; // 0x10(0x08)
};

// ScriptStruct Engine.AttackId
// Size: 0x04 (Inherited: 0x00)
struct FAttackId {
	int32 ID; // 0x00(0x04)
};

// ScriptStruct Engine.*2066290a18
// Size: 0x58 (Inherited: 0x50)
struct F*2066290a18 : F*83ad5ff7d4 {
	enum class ETickingGroup *dd7d84feff; // 0x08(0x01)
	enum class ETickingGroup *a83d44e470; // 0x09(0x01)
	char *c10f697e3c : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *5363d98d66 : 1; // 0x0c(0x01)
	char *2015f44ce1 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*e5bda3d960
// Size: 0x40 (Inherited: 0x00)
struct F*e5bda3d960 {
	struct AActor* AttachParent; // 0x00(0x08)
	struct FVector_NetQuantize100 *60056591c2; // 0x08(0x0c)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0x0c)
	struct FRotator *49f00cb00d; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName *37a308a56c; // 0x30(0x08)
	struct USceneComponent* AttachComponent; // 0x38(0x08)
};

// ScriptStruct Engine.RepMovement
// Size: 0x34 (Inherited: 0x00)
struct FRepMovement {
	struct FVector LinearVelocity; // 0x00(0x0c)
	struct FVector AngularVelocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	char *2a9de59290 : 1; // 0x30(0x01)
	char *01db0b29a2 : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	enum class *8c71f2d788 *84f19c787a; // 0x31(0x01)
	enum class *8c71f2d788 *f8a96d7c8e; // 0x32(0x01)
	enum class *464520e949 *3c61d8c2fb; // 0x33(0x01)
};

// ScriptStruct Engine.*37b25a6e05
// Size: 0x04 (Inherited: 0x00)
struct F*37b25a6e05 {
	char bCanCrouch : 1; // 0x00(0x01)
	char bCanJump : 1; // 0x00(0x01)
	char bCanWalk : 1; // 0x00(0x01)
	char bCanSwim : 1; // 0x00(0x01)
	char bCanFly : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*112b6d08d9
// Size: 0x20 (Inherited: 0x04)
struct F*112b6d08d9 : F*37b25a6e05 {
	float AgentRadius; // 0x04(0x04)
	float AgentHeight; // 0x08(0x04)
	float AgentStepHeight; // 0x0c(0x04)
	float NavWalkingSearchHeightScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* PreferredNavData; // 0x18(0x08)
};

// ScriptStruct Engine.TableRowBase
// Size: 0x08 (Inherited: 0x00)
struct FTableRowBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x58 (Inherited: 0x30)
struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	bool bIgnoreForRelevancyTest; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 GroupIndex; // 0x34(0x04)
	enum class *99201bf055 GroupRole; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float BlendWeight; // 0x3c(0x04)
	float InternalTimeAccumulator; // 0x40(0x04)
	char pad_44[0x14]; // 0x44(0x14)
};

// ScriptStruct Engine.AnimNode_Base
// Size: 0x30 (Inherited: 0x00)
struct FAnimNode_Base {
	char pad_0[0x8]; // 0x00(0x08)
	struct FExposedValueHandler EvaluateGraphExposedInputs; // 0x08(0x28)
};

// ScriptStruct Engine.ExposedValueHandler
// Size: 0x28 (Inherited: 0x00)
struct FExposedValueHandler {
	struct FName BoundFunction; // 0x00(0x08)
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x80 (Inherited: 0x00)
struct FExposedValueCopyRecord {
	struct UProperty* SourceProperty; // 0x00(0x08)
	struct FName SourcePropertyName; // 0x08(0x08)
	struct FName SourceSubPropertyName; // 0x10(0x08)
	int32 SourceArrayIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UProperty* DestProperty; // 0x20(0x08)
	int32 DestArrayIndex; // 0x28(0x04)
	int32 Size; // 0x2c(0x04)
	bool bInstanceIsTarget; // 0x30(0x01)
	enum class EPostCopyOperation PostCopyOperation; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UBoolProperty* CachedBoolSourceProperty; // 0x38(0x08)
	struct UBoolProperty* CachedBoolDestProperty; // 0x40(0x08)
	struct UStructProperty* CachedStructDestProperty; // 0x48(0x08)
	struct UObjectProperty* CachedObjectSourceProperty; // 0x50(0x08)
	struct UProperty* CachedObjectSubProperty; // 0x58(0x08)
	char pad_60[0x20]; // 0x60(0x20)
};

// ScriptStruct Engine.BlendSampleData
// Size: 0x40 (Inherited: 0x00)
struct FBlendSampleData {
	int32 SampleDataIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* Animation; // 0x08(0x08)
	float TotalWeight; // 0x10(0x04)
	float Time; // 0x14(0x04)
	float PreviousTime; // 0x18(0x04)
	char pad_1C[0x24]; // 0x1c(0x24)
};

// ScriptStruct Engine.BlendFilter
// Size: 0x90 (Inherited: 0x00)
struct FBlendFilter {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.InputScaleBiasClamp
// Size: 0x30 (Inherited: 0x00)
struct FInputScaleBiasClamp {
	bool bMapRange; // 0x00(0x01)
	bool bClampResult; // 0x01(0x01)
	bool bInterpResult; // 0x02(0x01)
	bool bInitialized; // 0x03(0x01)
	struct FInputRange InRange; // 0x04(0x08)
	struct FInputRange OutRange; // 0x0c(0x08)
	float Scale; // 0x14(0x04)
	float Bias; // 0x18(0x04)
	float ClampMin; // 0x1c(0x04)
	float ClampMax; // 0x20(0x04)
	float InterpSpeedIncreasing; // 0x24(0x04)
	float InterpSpeedDecreasing; // 0x28(0x04)
	float InterpolatedResult; // 0x2c(0x04)
};

// ScriptStruct Engine.InputRange
// Size: 0x08 (Inherited: 0x00)
struct FInputRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Engine.InputAlphaBoolBlend
// Size: 0x50 (Inherited: 0x00)
struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x00(0x04)
	float BlendOutTime; // 0x04(0x04)
	enum class EAlphaBlendOption BlendOption; // 0x08(0x01)
	bool bInitialized; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UCurveFloat* CustomCurve; // 0x10(0x08)
	struct FAlphaBlend AlphaBlend; // 0x18(0x38)
};

// ScriptStruct Engine.InputScaleBias
// Size: 0x08 (Inherited: 0x00)
struct FInputScaleBias {
	float Scale; // 0x00(0x04)
	float Bias; // 0x04(0x04)
};

// ScriptStruct Engine.BoneReference
// Size: 0x18 (Inherited: 0x00)
struct FBoneReference {
	struct FName BoneName; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.PoseLink
// Size: 0x18 (Inherited: 0x18)
struct FPoseLink : FPoseLinkBase {
	int32 LinkID; // 0x00(0x04)
};

// ScriptStruct Engine.PoseLinkBase
// Size: 0x18 (Inherited: 0x00)
struct FPoseLinkBase {
	int32 LinkID; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x18 (Inherited: 0x18)
struct FComponentSpacePoseLink : FPoseLinkBase {
	int32 LinkID; // 0x00(0x04)
};

// ScriptStruct Engine.Axis
// Size: 0x10 (Inherited: 0x00)
struct FAxis {
	struct FVector Axis; // 0x00(0x0c)
	bool bInLocalSpace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x70 (Inherited: 0x58)
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x58(0x08)
	bool bLoopAnimation; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float PlayRate; // 0x64(0x04)
	float StartPosition; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.*434fea7363
// Size: 0x520 (Inherited: 0x00)
struct F*434fea7363 {
	char pad_0[0x520]; // 0x00(0x520)
};

// ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x00)
struct FInputBlendPose {
	struct TArray<struct FBranchFilter> BranchFilters; // 0x00(0x10)
};

// ScriptStruct Engine.BranchFilter
// Size: 0x10 (Inherited: 0x00)
struct FBranchFilter {
	struct FName BoneName; // 0x00(0x08)
	int32 BlendDepth; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*73b9fa8895
// Size: 0xb0 (Inherited: 0x18)
struct F*73b9fa8895 : F*2177a5ac2f {
	float Damage; // 0x18(0x04)
	struct FVector_NetQuantizeNormal *bdd8a6580f; // 0x1c(0x0c)
	struct FHitResult *0ce8cdb166; // 0x28(0x88)
};

// ScriptStruct Engine.*09352ad00b
// Size: 0x01 (Inherited: 0x00)
struct F*09352ad00b {
	char pad_0_0 : 1; // 0x00(0x01)
	char *45e691f48c : 1; // 0x00(0x01)
	char *f6f10f5050 : 1; // 0x00(0x01)
	char *776913e899 : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
};

// ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x78 (Inherited: 0x00)
struct FRuntimeFloatCurve {
	struct FRichCurve EditorCurveData; // 0x00(0x70)
	struct UCurveFloat* ExternalCurve; // 0x70(0x08)
};

// ScriptStruct Engine.LightingChannels
// Size: 0x03 (Inherited: 0x00)
struct FLightingChannels {
	bool bChannel0; // 0x00(0x01)
	bool bChannel1; // 0x01(0x01)
	bool bChannel2; // 0x02(0x01)
};

// ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x08 (Inherited: 0x00)
struct FPerBoneBlendWeight {
	int32 SourceIndex; // 0x00(0x04)
	float BlendWeight; // 0x04(0x04)
};

// ScriptStruct Engine.PoseSnapshot
// Size: 0x38 (Inherited: 0x00)
struct FPoseSnapshot {
	struct TArray<struct FTransform> LocalTransforms; // 0x00(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x08)
	struct FName SnapshotName; // 0x28(0x08)
	bool bIsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Engine.SplineCurves
// Size: 0x60 (Inherited: 0x00)
struct FSplineCurves {
	struct FInterpCurveVector Position; // 0x00(0x18)
	struct FInterpCurveQuat Rotation; // 0x18(0x18)
	struct FInterpCurveVector Scale; // 0x30(0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48(0x18)
};

// ScriptStruct Engine.AnimCurveParam
// Size: 0x10 (Inherited: 0x00)
struct FAnimCurveParam {
	struct FName Name; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*5d74728a19
// Size: 0x70 (Inherited: 0x58)
struct F*5d74728a19 : FIndexedCurve {
	struct TArray<struct F*ad401c9bc5> Keys; // 0x58(0x10)
	int32 DefaultValue; // 0x68(0x04)
	bool *0670bbeb22; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.*ad401c9bc5
// Size: 0x08 (Inherited: 0x00)
struct F*ad401c9bc5 {
	float Time; // 0x00(0x04)
	int32 Value; // 0x04(0x04)
};

// ScriptStruct Engine.*bff53d7b09
// Size: 0x78 (Inherited: 0x58)
struct F*bff53d7b09 : FIndexedCurve {
	struct FString DefaultValue; // 0x58(0x10)
	struct TArray<struct F*c2c3f24eda> Keys; // 0x68(0x10)
};

// ScriptStruct Engine.*c2c3f24eda
// Size: 0x18 (Inherited: 0x00)
struct F*c2c3f24eda {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FDirectoryPath {
	struct FString path; // 0x00(0x10)
};

// ScriptStruct Engine.*65d445c338
// Size: 0x60 (Inherited: 0x00)
struct F*65d445c338 {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UTexture2D* Heightmap; // 0x08(0x08)
	struct UTexture2D* Normalmap; // 0x10(0x08)
	struct TArray<struct UTexture2D*> Weightmaps; // 0x18(0x10)
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct Engine.*c08c8bf8e5
// Size: 0x60 (Inherited: 0x00)
struct F*c08c8bf8e5 {
	struct FVector2D V0_Pos; // 0x00(0x08)
	struct FVector2D V0_UV; // 0x08(0x08)
	struct FLinearColor V0_Color; // 0x10(0x10)
	struct FVector2D V1_Pos; // 0x20(0x08)
	struct FVector2D V1_UV; // 0x28(0x08)
	struct FLinearColor V1_Color; // 0x30(0x10)
	struct FVector2D V2_Pos; // 0x40(0x08)
	struct FVector2D V2_UV; // 0x48(0x08)
	struct FLinearColor V2_Color; // 0x50(0x10)
};

// ScriptStruct Engine.*c64512550f
// Size: 0x28 (Inherited: 0x00)
struct F*c64512550f {
	char bClipText : 1; // 0x00(0x01)
	char bEnableShadow : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*30fbd39d76 GlowInfo; // 0x04(0x24)
};

// ScriptStruct Engine.*30fbd39d76
// Size: 0x24 (Inherited: 0x00)
struct F*30fbd39d76 {
	char bEnableGlow : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor GlowColor; // 0x04(0x10)
	struct FVector2D GlowOuterRadius; // 0x14(0x08)
	struct FVector2D GlowInnerRadius; // 0x1c(0x08)
};

// ScriptStruct Engine.Redirector
// Size: 0x10 (Inherited: 0x00)
struct FRedirector {
	struct FName OldName; // 0x00(0x08)
	struct FName NewName; // 0x08(0x08)
};

// ScriptStruct Engine.FilePath
// Size: 0x10 (Inherited: 0x00)
struct FFilePath {
	struct FString FilePath; // 0x00(0x10)
};

// ScriptStruct Engine.*9c3d74819a
// Size: 0x18 (Inherited: 0x00)
struct F*9c3d74819a {
	struct AActor* OtherActor; // 0x00(0x08)
	struct FName *47550bf0f6; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.*9fec3d1c28
// Size: 0x08 (Inherited: 0x00)
struct F*9fec3d1c28 {
	struct FName ComponentName; // 0x00(0x08)
};

// ScriptStruct Engine.*de38513b35
// Size: 0x10 (Inherited: 0x00)
struct F*de38513b35 {
	enum class *ae345d82a0 WalkableSlopeBehavior; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WalkableSlopeAngle; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*1be26bd321
// Size: 0x58 (Inherited: 0x28)
struct F*1be26bd321 : F*680c8de76f {
	struct F*e24211c015 Params; // 0x28(0x14)
	struct FVector Origin; // 0x3c(0x0c)
	struct TArray<struct FHitResult> *adb56da673; // 0x48(0x10)
};

// ScriptStruct Engine.*680c8de76f
// Size: 0x28 (Inherited: 0x18)
struct F*680c8de76f : F*2177a5ac2f {
	struct FVector *e544cac359; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*e24211c015
// Size: 0x14 (Inherited: 0x00)
struct F*e24211c015 {
	float *d279788619; // 0x00(0x04)
	float *2d3dec9180; // 0x04(0x04)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float *4b6f7d3e38; // 0x10(0x04)
};

// ScriptStruct Engine.MeshBuildSettings
// Size: 0x40 (Inherited: 0x00)
struct FMeshBuildSettings {
	bool *000a1c460b; // 0x00(0x01)
	bool bRecomputeNormals; // 0x01(0x01)
	bool bRecomputeTangents; // 0x02(0x01)
	bool bRemoveDegenerates; // 0x03(0x01)
	bool bBuildAdjacencyBuffer; // 0x04(0x01)
	bool bBuildReversedIndexBuffer; // 0x05(0x01)
	bool bUseHighPrecisionTangentBasis; // 0x06(0x01)
	bool bUseFullPrecisionUVs; // 0x07(0x01)
	bool bGenerateLightmapUVs; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 MinLightmapResolution; // 0x0c(0x04)
	int32 SrcLightmapIndex; // 0x10(0x04)
	int32 DstLightmapIndex; // 0x14(0x04)
	float BuildScale; // 0x18(0x04)
	struct FVector BuildScale3D; // 0x1c(0x0c)
	float DistanceFieldResolutionScale; // 0x28(0x04)
	bool bGenerateDistanceFieldAsIfTwoSided; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float DistanceFieldBias; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x38(0x08)
};

// ScriptStruct Engine.*a30a1fe112
// Size: 0x1c (Inherited: 0x00)
struct F*a30a1fe112 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
};

// ScriptStruct Engine.*97e2340286
// Size: 0x88 (Inherited: 0x00)
struct F*97e2340286 {
	char pad_0[0x4]; // 0x00(0x04)
	int32 UpdateRate; // 0x04(0x04)
	int32 *5445456200; // 0x08(0x04)
	bool *1df4d59e75; // 0x0c(0x01)
	bool *21850dfaa3; // 0x0d(0x01)
	bool *32742f095d; // 0x0e(0x01)
	bool *9079501493; // 0x0f(0x01)
	float *9d19a745ce; // 0x10(0x04)
	float *7f2bdc0ad0; // 0x14(0x04)
	char pad_18[0x4]; // 0x18(0x04)
	int32 *c75a10cef7; // 0x1c(0x04)
	struct TArray<float> *fe090ed172; // 0x20(0x10)
	struct TMap<int32, int32> *a433e90a27; // 0x30(0x50)
	int32 *d001e43203; // 0x80(0x04)
	enum class *70d622340e *8737d341c5; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct Engine.*dcf213d185
// Size: 0x10 (Inherited: 0x00)
struct F*dcf213d185 {
	struct FName SlotName; // 0x00(0x08)
	int32 *7907ef25cf; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*b1594aeff9
// Size: 0x18 (Inherited: 0x00)
struct F*b1594aeff9 {
	struct FName SlotName; // 0x00(0x08)
	struct TArray<float> *c8c4b40448; // 0x08(0x10)
};

// ScriptStruct Engine.*56ca47a0e7
// Size: 0x10 (Inherited: 0x00)
struct F*56ca47a0e7 {
	struct FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct Engine.*5a2763f680
// Size: 0x18 (Inherited: 0x00)
struct F*5a2763f680 {
	struct AActor* Actor; // 0x00(0x08)
	struct UPrimitiveComponent* Component; // 0x08(0x08)
	char pad_10[0x4]; // 0x10(0x04)
	char bBlockingHit : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Engine.*c6f92a96cc
// Size: 0x18 (Inherited: 0x00)
struct F*c6f92a96cc {
	struct UPrimitiveComponent* Primitive; // 0x00(0x08)
	struct UDecalComponent* Decal; // 0x08(0x08)
	int32 ElementIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*94284c2e6b
// Size: 0x04 (Inherited: 0x00)
struct F*94284c2e6b {
	char bDistributionEnabled : 1; // 0x00(0x01)
	char bForceContentExport : 1; // 0x00(0x01)
	char *6af8642522 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*595b6d1605
// Size: 0x10 (Inherited: 0x00)
struct F*595b6d1605 {
	char bDebugMode : 1; // 0x00(0x01)
	char bStatsEnabled : 1; // 0x00(0x01)
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CoplanarTolerance; // 0x04(0x04)
	char bUseImmediateImport : 1; // 0x08(0x01)
	char bImmediateProcessMappings : 1; // 0x08(0x01)
	char bSortMappings : 1; // 0x08(0x01)
	char bDumpBinaryFiles : 1; // 0x08(0x01)
	char bDebugMaterials : 1; // 0x08(0x01)
	char bPadMappings : 1; // 0x08(0x01)
	char bDebugPaddings : 1; // 0x08(0x01)
	char bOnlyCalcDebugTexelMappings : 1; // 0x08(0x01)
	char bUseRandomColors : 1; // 0x09(0x01)
	char bColorBordersGreen : 1; // 0x09(0x01)
	char bColorByExecutionTime : 1; // 0x09(0x01)
	char pad_9_3 : 5; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float ExecutionTimeDivisor; // 0x0c(0x04)
};

// ScriptStruct Engine.*553842a41b
// Size: 0x18 (Inherited: 0x00)
struct F*553842a41b {
	char bUseTwoSidedLighting : 1; // 0x00(0x01)
	char bShadowIndirectOnly : 1; // 0x00(0x01)
	char bUseEmissiveForStaticLighting : 1; // 0x00(0x01)
	char bUseVertexNormalForHemisphereGather : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *ea0435a27f; // 0x04(0x04)
	float *b9471159c9; // 0x08(0x04)
	float EmissiveBoost; // 0x0c(0x04)
	float DiffuseBoost; // 0x10(0x04)
	float FullyOccludedSamplesFraction; // 0x14(0x04)
};

// ScriptStruct Engine.*5257c413f1
// Size: 0x10 (Inherited: 0x0c)
struct F*5257c413f1 : F*3a4c691e28 {
	float LightSourceAngle; // 0x0c(0x04)
};

// ScriptStruct Engine.*3a4c691e28
// Size: 0x0c (Inherited: 0x00)
struct F*3a4c691e28 {
	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.*e2c22c44c3
// Size: 0x0c (Inherited: 0x0c)
struct F*e2c22c44c3 : F*3a4c691e28 {
	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
};

// ScriptStruct Engine.*3f2b6dfbf7
// Size: 0x28 (Inherited: 0x00)
struct F*3f2b6dfbf7 {
	struct FString *586a83d299; // 0x00(0x10)
	struct TArray<struct F*cc00d9579b> Subtitles; // 0x10(0x10)
	char *8a3cc4a7c8 : 1; // 0x20(0x01)
	char *e0b2b13598 : 1; // 0x20(0x01)
	char *ee39d4b19b : 1; // 0x20(0x01)
	char pad_20_3 : 5; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*7b1e20c5cf
// Size: 0x38 (Inherited: 0x00)
struct F*7b1e20c5cf {
	struct AActor* Base; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	struct FVector *12f71e5dfb; // 0x14(0x0c)
	struct FRotator *24521bf15a; // 0x20(0x0c)
	struct FVector *15ef31e7b9; // 0x2c(0x0c)
};

// ScriptStruct Engine.*ea886402eb
// Size: 0x10 (Inherited: 0x00)
struct F*ea886402eb {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct USoundBase* Sound; // 0x08(0x08)
};

// ScriptStruct Engine.*7325643d05
// Size: 0x28 (Inherited: 0x00)
struct F*7325643d05 {
	struct TArray<struct F*4d7b8b024f> *efe764bdfc; // 0x00(0x10)
	struct FVector *0de6563cd2; // 0x10(0x0c)
	struct FVector *e27b89eec1; // 0x1c(0x0c)
};

// ScriptStruct Engine.*4d7b8b024f
// Size: 0x30 (Inherited: 0x00)
struct F*4d7b8b024f {
	struct FVector *e675c361ec; // 0x00(0x0c)
	struct FVector *028510dbd7; // 0x0c(0x0c)
	float *871d5a00eb; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UPhysicalMaterial* PhysMaterial[0x02]; // 0x20(0x10)
};

// ScriptStruct Engine.*eab1f0d427
// Size: 0x1c (Inherited: 0x00)
struct F*eab1f0d427 {
	float LinearDeltaThresholdSq; // 0x00(0x04)
	float LinearInterpAlpha; // 0x04(0x04)
	float LinearRecipFixTime; // 0x08(0x04)
	float AngularDeltaThreshold; // 0x0c(0x04)
	float AngularInterpAlpha; // 0x10(0x04)
	float AngularRecipFixTime; // 0x14(0x04)
	float BodySpeedThresholdSq; // 0x18(0x04)
};

// ScriptStruct Engine.*8957597047
// Size: 0x40 (Inherited: 0x00)
struct F*8957597047 {
	struct FVector_NetQuantize100 Position; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 *ed10cca70e; // 0x20(0x0c)
	struct FVector_NetQuantize100 AngVel; // 0x2c(0x0c)
	bool Flags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x00)
struct FCollisionResponseContainer {
	enum class ECollisionResponse WorldStatic; // 0x00(0x01)
	enum class ECollisionResponse WorldDynamic; // 0x01(0x01)
	enum class ECollisionResponse Pawn; // 0x02(0x01)
	enum class ECollisionResponse Visibility; // 0x03(0x01)
	enum class ECollisionResponse Camera; // 0x04(0x01)
	enum class ECollisionResponse PhysicsBody; // 0x05(0x01)
	enum class ECollisionResponse Vehicle; // 0x06(0x01)
	enum class ECollisionResponse Destructible; // 0x07(0x01)
	enum class ECollisionResponse EngineTraceChannel1; // 0x08(0x01)
	enum class ECollisionResponse EngineTraceChannel2; // 0x09(0x01)
	enum class ECollisionResponse EngineTraceChannel3; // 0x0a(0x01)
	enum class ECollisionResponse EngineTraceChannel4; // 0x0b(0x01)
	enum class ECollisionResponse EngineTraceChannel5; // 0x0c(0x01)
	enum class ECollisionResponse EngineTraceChannel6; // 0x0d(0x01)
	enum class ECollisionResponse GameTraceChannel1; // 0x0e(0x01)
	enum class ECollisionResponse GameTraceChannel2; // 0x0f(0x01)
	enum class ECollisionResponse GameTraceChannel3; // 0x10(0x01)
	enum class ECollisionResponse GameTraceChannel4; // 0x11(0x01)
	enum class ECollisionResponse GameTraceChannel5; // 0x12(0x01)
	enum class ECollisionResponse GameTraceChannel6; // 0x13(0x01)
	enum class ECollisionResponse GameTraceChannel7; // 0x14(0x01)
	enum class ECollisionResponse GameTraceChannel8; // 0x15(0x01)
	enum class ECollisionResponse GameTraceChannel9; // 0x16(0x01)
	enum class ECollisionResponse GameTraceChannel10; // 0x17(0x01)
	enum class ECollisionResponse GameTraceChannel11; // 0x18(0x01)
	enum class ECollisionResponse GameTraceChannel12; // 0x19(0x01)
	enum class ECollisionResponse GameTraceChannel13; // 0x1a(0x01)
	enum class ECollisionResponse GameTraceChannel14; // 0x1b(0x01)
	enum class ECollisionResponse GameTraceChannel15; // 0x1c(0x01)
	enum class ECollisionResponse GameTraceChannel16; // 0x1d(0x01)
	enum class ECollisionResponse GameTraceChannel17; // 0x1e(0x01)
	enum class ECollisionResponse GameTraceChannel18; // 0x1f(0x01)
};

// ScriptStruct Engine.*f1df7ecfec
// Size: 0x10 (Inherited: 0x00)
struct F*f1df7ecfec {
	struct FName Channel; // 0x00(0x08)
	enum class ECollisionResponse Response; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.ExposureSettings
// Size: 0x08 (Inherited: 0x00)
struct FExposureSettings {
	int32 *2318410323; // 0x00(0x04)
	bool *8c554723b4; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.URL
// Size: 0x70 (Inherited: 0x00)
struct FURL {
	struct FString Protocol; // 0x00(0x10)
	struct FString Host; // 0x10(0x10)
	int32 Port; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)
	int32 Valid; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.*1d83c9bd93
// Size: 0x58 (Inherited: 0x50)
struct F*1d83c9bd93 : F*83ad5ff7d4 {
	enum class ETickingGroup *dd7d84feff; // 0x08(0x01)
	enum class ETickingGroup *a83d44e470; // 0x09(0x01)
	char *c10f697e3c : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *5363d98d66 : 1; // 0x0c(0x01)
	char *2015f44ce1 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*4481bb1990
// Size: 0x58 (Inherited: 0x50)
struct F*4481bb1990 : F*83ad5ff7d4 {
	enum class ETickingGroup *dd7d84feff; // 0x08(0x01)
	enum class ETickingGroup *a83d44e470; // 0x09(0x01)
	char *c10f697e3c : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *5363d98d66 : 1; // 0x0c(0x01)
	char *2015f44ce1 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*914103834d
// Size: 0x58 (Inherited: 0x50)
struct F*914103834d : F*83ad5ff7d4 {
	enum class ETickingGroup *dd7d84feff; // 0x08(0x01)
	enum class ETickingGroup *a83d44e470; // 0x09(0x01)
	char *c10f697e3c : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *5363d98d66 : 1; // 0x0c(0x01)
	char *2015f44ce1 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*d83ba7b84d
// Size: 0x10 (Inherited: 0x00)
struct F*d83ba7b84d {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*7d29406739
// Size: 0x30 (Inherited: 0x00)
struct F*7d29406739 {
	struct FString *9c1a24a06b; // 0x00(0x10)
	struct FString *166f3f9940; // 0x10(0x10)
	struct UObject* *4a722e605b; // 0x20(0x08)
	bool *9f7360fdde; // 0x28(0x01)
	bool *b039938828; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.*d638d17bdb
// Size: 0x18 (Inherited: 0x00)
struct F*d638d17bdb {
	struct UEdGraphNode* *4943dfa413; // 0x00(0x08)
	struct FGuid *eb8e37277b; // 0x08(0x10)
};

// ScriptStruct Engine.*c760683241
// Size: 0x80 (Inherited: 0x00)
struct F*c760683241 {
	struct FString PinCategory; // 0x00(0x10)
	struct FString *ab0735345e; // 0x10(0x10)
	struct UObject* *4a2d3b439f; // 0x20(0x08)
	struct FSimpleMemberReference *09a4aa1195; // 0x28(0x20)
	struct F*7d29406739 *24dfa0f953; // 0x48(0x30)
	bool *e93cabffe6; // 0x78(0x01)
	bool *97c13079ee; // 0x79(0x01)
	bool *a7159caf41; // 0x7a(0x01)
	bool *23bfafc6cb; // 0x7b(0x01)
	bool *3012456e66; // 0x7c(0x01)
	bool *6e38a3ea39; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// ScriptStruct Engine.*f0cd319f88
// Size: 0x10 (Inherited: 0x00)
struct F*f0cd319f88 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*02bf9bca30
// Size: 0x90 (Inherited: 0x00)
struct F*02bf9bca30 {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.*665907b268
// Size: 0x80 (Inherited: 0x00)
struct F*665907b268 {
	bool *500ca6e00b; // 0x00(0x01)
	enum class EMaterialLODType *00c37ac263; // 0x01(0x01)
	bool *7fc35eba10; // 0x02(0x01)
	enum class *b1eac2ac70 *494aca0938; // 0x03(0x01)
	enum class *b1eac2ac70 *b6391eba89; // 0x04(0x01)
	enum class ESimplygonTextureSamplingQuality SamplingQuality; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32 GutterSpace; // 0x08(0x04)
	enum class ESimplygonTextureStrech *96da936920; // 0x0c(0x01)
	bool *15f262794a; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct F*d4b409c18a> *3cf9ca0870; // 0x10(0x10)
	bool *67156e2c7b; // 0x20(0x01)
	bool *7733cda6d1; // 0x21(0x01)
	bool *c1107e5543; // 0x22(0x01)
	bool *33a98a5420; // 0x23(0x01)
	bool *a6e0930964; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct F*a7b60350b6 *a7b60350b6; // 0x28(0x58)
};

// ScriptStruct Engine.*a7b60350b6
// Size: 0x58 (Inherited: 0x00)
struct F*a7b60350b6 {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Engine.*d4b409c18a
// Size: 0x10 (Inherited: 0x00)
struct F*d4b409c18a {
	enum class *92f5ee0f0e *9bfc897829; // 0x00(0x01)
	enum class ESimplygonCasterType *42633e2fd7; // 0x01(0x01)
	bool *500ca6e00b; // 0x02(0x01)
	enum class ESimplygonColorChannels *010eb7ee2b; // 0x03(0x01)
	int32 *8650fd74ca; // 0x04(0x04)
	bool *0f3d1329ed; // 0x08(0x01)
	bool *ecd3ddaa2d; // 0x09(0x01)
	bool *f4c415109f; // 0x0a(0x01)
	bool *a990515735; // 0x0b(0x01)
	bool *f4b1a8b995; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.MaterialProxySettings
// Size: 0x9c (Inherited: 0x00)
struct FMaterialProxySettings {
	struct FIntPoint TextureSize; // 0x00(0x08)
	enum class ETextureSizingType TextureSizingType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float GutterSpace; // 0x0c(0x04)
	enum class EMaterialProxySmaplingQuality SamplingQuality; // 0x10(0x01)
	enum class EUVStrech UVStrech; // 0x11(0x01)
	bool bSplitProxyMaterialBasedOnType; // 0x12(0x01)
	bool bUseTangentSpace; // 0x13(0x01)
	bool bNormalMap; // 0x14(0x01)
	bool bMetallicMap; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float MetallicConstant; // 0x18(0x04)
	bool bRoughnessMap; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float RoughnessConstant; // 0x20(0x04)
	bool bSpecularMap; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float SpecularConstant; // 0x28(0x04)
	bool bEmissiveMap; // 0x2c(0x01)
	bool bOpacityMap; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float OpacityConstant; // 0x30(0x04)
	bool bAmbientOcclusionMap; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float AOConstant; // 0x38(0x04)
	float AmbientOcclusionConstant; // 0x3c(0x04)
	bool bOpacityMaskMap; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float OpacityMaskConstant; // 0x44(0x04)
	struct FIntPoint DiffuseTextureSize; // 0x48(0x08)
	struct FIntPoint NormalTextureSize; // 0x50(0x08)
	struct FIntPoint MetallicTextureSize; // 0x58(0x08)
	struct FIntPoint RoughnessTextureSize; // 0x60(0x08)
	struct FIntPoint SpecularTextureSize; // 0x68(0x08)
	struct FIntPoint EmissiveTextureSize; // 0x70(0x08)
	struct FIntPoint OpacityTextureSize; // 0x78(0x08)
	struct FIntPoint AmbientOcclusionTextureSize; // 0x80(0x08)
	struct FIntPoint OpacityMaskTextureSize; // 0x88(0x08)
	enum class EMaterialMergeType MaterialMergeType; // 0x90(0x01)
	enum class EBlendMode BlendMode; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	int32 BakingTextureSizeRatioOutdoor; // 0x94(0x04)
	int32 BakingTextureSizeRatioIndoor; // 0x98(0x04)
};

// ScriptStruct Engine.*a40d36bd7d
// Size: 0xa8 (Inherited: 0x00)
struct F*a40d36bd7d {
	bool *500ca6e00b; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 ScreenSize; // 0x04(0x04)
	bool bRecalculateNormals; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float HardAngleThreshold; // 0x0c(0x04)
	int32 MergeDistance; // 0x10(0x04)
	bool *a80eefc9ed; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *821ee04bba; // 0x18(0x04)
	int32 *badaea3a65; // 0x1c(0x04)
	bool *c0e7fed908; // 0x20(0x01)
	bool *8eca19f1d4; // 0x21(0x01)
	bool *c74e5a4402; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct F*665907b268 *dc64d5ead7; // 0x28(0x80)
};

// ScriptStruct Engine.MeshMergingSettings
// Size: 0xd4 (Inherited: 0x00)
struct FMeshMergingSettings {
	bool bGenerateLightMapUV; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 TargetLightMapResolution; // 0x04(0x04)
	bool bImportVertexColors; // 0x08(0x01)
	bool bPivotPointAtZero; // 0x09(0x01)
	bool bMergePhysicsData; // 0x0a(0x01)
	bool bAssignLODGroup; // 0x0b(0x01)
	int32 LODGroupIndex; // 0x0c(0x04)
	bool bMergeMaterials; // 0x10(0x01)
	bool bForceUniqueUVGeneration; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FMaterialProxySettings MaterialSettings; // 0x14(0x9c)
	bool bBakeVertexDataToMesh; // 0xb0(0x01)
	bool bUseVertexDataForBakingMaterial; // 0xb1(0x01)
	bool bUseTextureBinning; // 0xb2(0x01)
	bool bCalculateCorrectLODModel; // 0xb3(0x01)
	enum class EMeshLODSelectionType LODSelectionType; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32 ExportSpecificLOD; // 0xb8(0x04)
	int32 SpecificLOD; // 0xbc(0x04)
	bool bUseLandscapeCulling; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float MinimalBoundsSize; // 0xc4(0x04)
	bool bExportNormalMap; // 0xc8(0x01)
	bool bExportMetallicMap; // 0xc9(0x01)
	bool bExportRoughnessMap; // 0xca(0x01)
	bool bExportSpecularMap; // 0xcb(0x01)
	int32 MergedMaterialAtlasResolution; // 0xcc(0x04)
	char pad_D0[0x4]; // 0xd0(0x04)
};

// ScriptStruct Engine.MeshProxySettings
// Size: 0xfc (Inherited: 0x00)
struct FMeshProxySettings {
	int32 ScreenSize; // 0x00(0x04)
	char bOverrideVoxelSize : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float VoxelSize; // 0x08(0x04)
	struct FMaterialProxySettings MaterialSettings; // 0x0c(0x9c)
	int32 TextureWidth; // 0xa8(0x04)
	int32 TextureHeight; // 0xac(0x04)
	bool bExportNormalMap; // 0xb0(0x01)
	bool bExportMetallicMap; // 0xb1(0x01)
	bool bExportRoughnessMap; // 0xb2(0x01)
	bool bExportSpecularMap; // 0xb3(0x01)
	bool bCalculateCorrectLODModel; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float OverrideDistanceForLevelLOD; // 0xb8(0x04)
	float MergeDistance; // 0xbc(0x04)
	float *a110ee7f56; // 0xc0(0x04)
	struct FColor *d6582098f3; // 0xc4(0x04)
	bool bOverrideTransferDistance; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float *ee81647563; // 0xcc(0x04)
	bool *e68743022c; // 0xd0(0x01)
	bool bComputeLightMapResolution; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	float HardAngleThreshold; // 0xd4(0x04)
	enum class *c931352ba4 NormalCalculationMethod; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32 LightMapResolution; // 0xdc(0x04)
	bool bRecalculateNormals; // 0xe0(0x01)
	bool bBakeVertexData; // 0xe1(0x01)
	bool bUseLandscapeCulling; // 0xe2(0x01)
	enum class ELandscapeCullingPrecision *c5a5569aca; // 0xe3(0x01)
	bool bAllowAdjacency; // 0xe4(0x01)
	bool bAllowDistanceField; // 0xe5(0x01)
	bool bReuseMeshLightmapUVs; // 0xe6(0x01)
	bool bCreateCollision; // 0xe7(0x01)
	bool bAllowVertexColors; // 0xe8(0x01)
	bool bGenerateLightmapUVs; // 0xe9(0x01)
	bool *30c0248164; // 0xea(0x01)
	char pad_EB[0x1]; // 0xeb(0x01)
	int32 *8c926bf77d; // 0xec(0x04)
	bool *c44de28cdb; // 0xf0(0x01)
	enum class EChartAggregationMode *bf5e6aec2e; // 0xf1(0x01)
	enum class EPhysXAggregationMode PhysXAggregationMode; // 0xf2(0x01)
	bool *f3dc2d3928; // 0xf3(0x01)
	float MergeBoldness; // 0xf4(0x04)
	float MaxTriangleSize; // 0xf8(0x04)
};

// ScriptStruct Engine.*1dd977ee69
// Size: 0x28 (Inherited: 0x00)
struct F*1dd977ee69 {
	char *22c98c4227 : 1; // 0x00(0x01)
	char *d13744739d : 1; // 0x00(0x01)
	char *f66d447b53 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	enum class EImposterCaptureType *1b49fc2912; // 0x01(0x01)
	enum class EImposterCaptureType *c7db47dc41; // 0x02(0x01)
	enum class EImposterCaptureType *2939e409be; // 0x03(0x01)
	enum class EImposterCaptureType *8b2390be8c; // 0x04(0x01)
	enum class EImposterCaptureType *0083adf28e; // 0x05(0x01)
	bool *2f583f3bb4; // 0x06(0x01)
	bool *d4f17aa327; // 0x07(0x01)
	float ScreenSize; // 0x08(0x04)
	struct FLinearColor *04275cd183; // 0x0c(0x10)
	float BaseSaturation; // 0x1c(0x04)
	float VariationBrightness; // 0x20(0x04)
	float BaseBrightness; // 0x24(0x04)
};

// ScriptStruct Engine.MeshReductionSettings
// Size: 0x158 (Inherited: 0x00)
struct FMeshReductionSettings {
	int32 BaseLODModel; // 0x00(0x04)
	enum class EOptimizationMetric *ba4d2dfcf6; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float PercentTriangles; // 0x08(0x04)
	float ScreenSize; // 0x0c(0x04)
	float MaxDeviation; // 0x10(0x04)
	float PixelError; // 0x14(0x04)
	float WeldingThreshold; // 0x18(0x04)
	enum class EMeshFeatureImportance SilhouetteImportance; // 0x1c(0x01)
	enum class EMeshFeatureImportance TextureImportance; // 0x1d(0x01)
	enum class EMeshFeatureImportance ShadingImportance; // 0x1e(0x01)
	enum class EMeshFeatureImportance VertexColorImportance; // 0x1f(0x01)
	float PercentVertices; // 0x20(0x04)
	bool bRecalculateNormals; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float HardAngleThreshold; // 0x28(0x04)
	bool bActive; // 0x2c(0x01)
	bool *4941d024e6; // 0x2d(0x01)
	bool *e7961cfb88; // 0x2e(0x01)
	bool *5e8dc4fd5c; // 0x2f(0x01)
	bool *2f234042cd; // 0x30(0x01)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x31(0x01)
	enum class EMeshFeatureImportance *8406c10b95; // 0x32(0x01)
	bool *a6e0930964; // 0x33(0x01)
	bool *f9da4f5e2d; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct F*665907b268 MaterialLODSettings; // 0x38(0x80)
	struct FMaterialProxySettings MaterialProxySettings; // 0xb8(0x9c)
	char pad_154[0x4]; // 0x154(0x04)
};

// ScriptStruct Engine.*4be506b9a2
// Size: 0x168 (Inherited: 0x00)
struct F*4be506b9a2 {
	bool bCreatePackagePerAsset; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DetailsPercentage; // 0x04(0x04)
	float MergeDistance; // 0x08(0x04)
	float *a110ee7f56; // 0x0c(0x04)
	float MergeBoldness; // 0x10(0x04)
	enum class EPhysXAggregationMode PhysXAggregationMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MaxTriangleSize; // 0x18(0x04)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x1c(0x9c)
	bool bOverrideLandscapeExportLOD; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 *38620c733a; // 0xbc(0x04)
	struct FMaterialProxySettings *3b99aa198e; // 0xc0(0x9c)
	bool bBakeFoliageToLandscape; // 0x15c(0x01)
	bool bBakeGrassToLandscape; // 0x15d(0x01)
	bool bGenerateMeshNormalMap; // 0x15e(0x01)
	bool bGenerateMeshMetallicMap; // 0x15f(0x01)
	bool bGenerateMeshRoughnessMap; // 0x160(0x01)
	bool bGenerateMeshSpecularMap; // 0x161(0x01)
	bool bGenerateLandscapeNormalMap; // 0x162(0x01)
	bool bGenerateLandscapeMetallicMap; // 0x163(0x01)
	bool bGenerateLandscapeRoughnessMap; // 0x164(0x01)
	bool bGenerateLandscapeSpecularMap; // 0x165(0x01)
	bool bUseLandscapeCulling; // 0x166(0x01)
	enum class ELandscapeCullingPrecision *c5a5569aca; // 0x167(0x01)
};

// ScriptStruct Engine.*fd9d7d1beb
// Size: 0x38 (Inherited: 0x28)
struct F*fd9d7d1beb : F*a908d3d65c {
	struct UTexture2D* Texture; // 0x28(0x08)
	bool *f4b856154a; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *65ed9469bd; // 0x34(0x04)
};

// ScriptStruct Engine.*a908d3d65c
// Size: 0x28 (Inherited: 0x00)
struct F*a908d3d65c {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Engine.*fc49b70054
// Size: 0x20 (Inherited: 0x00)
struct F*fc49b70054 {
	enum class EAutoBenchViewMode ViewMode; // 0x00(0x01)
	enum class EAutoBenchPathType PathType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 CameraSpeed; // 0x04(0x04)
	int32 CameraHeightOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FString> StatNames; // 0x10(0x10)
};

// ScriptStruct Engine.BodyInstance
// Size: 0x230 (Inherited: 0x00)
struct FBodyInstance {
	char pad_0[0x12]; // 0x00(0x12)
	struct FCollisionResponseContainer ResponseToChannels; // 0x12(0x20)
	char pad_32[0x6]; // 0x32(0x06)
	struct FName CollisionProfileName; // 0x38(0x08)
	struct F*344e0ec100 CollisionResponses; // 0x40(0x30)
	char pad_70[0x4]; // 0x70(0x04)
	char bUseCCD : 1; // 0x74(0x01)
	char bNotifyRigidBodyCollision : 1; // 0x74(0x01)
	char bSimulatePhysics : 1; // 0x74(0x01)
	char bUseComplexForSimulation : 1; // 0x74(0x01)
	char bOverrideMass : 1; // 0x74(0x01)
	char bEnableGravity : 1; // 0x74(0x01)
	char bAutoWeld : 1; // 0x74(0x01)
	char bStartAwake : 1; // 0x74(0x01)
	char bGenerateWakeEvents : 1; // 0x75(0x01)
	char *1bfb497da5 : 1; // 0x75(0x01)
	char *e589c12d0f : 1; // 0x75(0x01)
	char *869f27881c : 1; // 0x75(0x01)
	char *29bf203757 : 1; // 0x75(0x01)
	char *93c3d1ad2c : 1; // 0x75(0x01)
	char *2018d37674 : 1; // 0x75(0x01)
	char *f2c81a9670 : 1; // 0x75(0x01)
	char *7a1f7fd2af : 1; // 0x76(0x01)
	char *3d826c96fa : 1; // 0x76(0x01)
	char bOverrideMaxAngularVelocity : 1; // 0x76(0x01)
	char pad_76_3 : 4; // 0x76(0x01)
	char bOverrideMaxDepenetrationVelocity : 1; // 0x76(0x01)
	char bOverrideWalkableSlopeOnInstance : 1; // 0x77(0x01)
	char pad_77_1 : 7; // 0x77(0x01)
	float MaxDepenetrationVelocity; // 0x78(0x04)
	char pad_7C[0x8]; // 0x7c(0x08)
	float MassInKgOverride; // 0x84(0x04)
	float LinearDamping; // 0x88(0x04)
	float AngularDamping; // 0x8c(0x04)
	struct FVector CustomDOFPlaneNormal; // 0x90(0x0c)
	struct FVector COMNudge; // 0x9c(0x0c)
	char pad_A8[0x10]; // 0xa8(0x10)
	float MassScale; // 0xb8(0x04)
	char pad_BC[0x14]; // 0xbc(0x14)
	struct F*de38513b35 WalkableSlopeOverride; // 0xd0(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0xe0(0x08)
	float MaxAngularVelocity; // 0xe8(0x04)
	float CustomSleepThresholdMultiplier; // 0xec(0x04)
	float StabilizationThresholdMultiplier; // 0xf0(0x04)
	float *ab5a04395c; // 0xf4(0x04)
	int32 PositionSolverIterationCount; // 0xf8(0x04)
	char pad_FC[0x24]; // 0xfc(0x24)
	uint64 *c062060ee8; // 0x120(0x08)
	int32 VelocitySolverIterationCount; // 0x128(0x04)
	char pad_12C[0xf8]; // 0x12c(0xf8)
	enum class ESleepFamily SleepFamily; // 0x224(0x01)
	enum class EDOFMode DOFMode; // 0x225(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x226(0x01)
	enum class ECollisionChannel ObjectType; // 0x227(0x01)
	char pad_228[0x8]; // 0x228(0x08)
};

// ScriptStruct Engine.*344e0ec100
// Size: 0x30 (Inherited: 0x00)
struct F*344e0ec100 {
	struct FCollisionResponseContainer *cd778d7543; // 0x00(0x20)
	struct TArray<struct F*f1df7ecfec> *15f475b337; // 0x20(0x10)
};

// ScriptStruct Engine.*2680edbad5
// Size: 0x0c (Inherited: 0x00)
struct F*2680edbad5 {
	uint32 *9a04522b0c; // 0x00(0x04)
	int32 *afca47b5df; // 0x04(0x04)
	float *e6c601654f; // 0x08(0x04)
};

// ScriptStruct Engine.*56864ba69b
// Size: 0x30 (Inherited: 0x00)
struct F*56864ba69b {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FBoxSphereBounds Bounds; // 0x08(0x1c)
	float *e6c601654f; // 0x24(0x04)
	uint32 *9a04522b0c; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*dd97a4099e
// Size: 0x04 (Inherited: 0x00)
struct F*dd97a4099e {
	char *d72caf3335 : 1; // 0x00(0x01)
	char *93561d4985 : 1; // 0x00(0x01)
	char *12a6e47392 : 1; // 0x00(0x01)
	char *1200cca04c : 1; // 0x00(0x01)
	char *5bc61a9b9f : 1; // 0x00(0x01)
	char *144a117d85 : 1; // 0x00(0x01)
	char *114890b960 : 1; // 0x00(0x01)
	char *6055b31f8c : 1; // 0x00(0x01)
	char *a96bd7b55b : 1; // 0x01(0x01)
	char *9d4d4aba99 : 1; // 0x01(0x01)
	char *fe1c871cce : 1; // 0x01(0x01)
	char *48124394c8 : 1; // 0x01(0x01)
	char *007ade7aa0 : 1; // 0x01(0x01)
	char *b3a854e9ec : 1; // 0x01(0x01)
	char *82e06d57f2 : 1; // 0x01(0x01)
	char *2058a9b6b7 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.*614c6831c7
// Size: 0x18 (Inherited: 0x00)
struct F*614c6831c7 {
	struct UClass* AreaClass; // 0x00(0x08)
	float *e7c718642e; // 0x08(0x04)
	float *aae8a2d853; // 0x0c(0x04)
	char *a8076d9b2b : 1; // 0x10(0x01)
	char bOverrideTravelCost : 1; // 0x10(0x01)
	char bOverrideEnteringCost : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.*cea43c9ba9
// Size: 0x14 (Inherited: 0x00)
struct F*cea43c9ba9 {
	struct FVector TargetLocation; // 0x00(0x0c)
	float GenerateRadiusMin; // 0x0c(0x04)
	float GenerateRadiusMax; // 0x10(0x04)
};

// ScriptStruct Engine.*b471f00637
// Size: 0x50 (Inherited: 0x20)
struct F*b471f00637 : F*112b6d08d9 {
	struct FName Name; // 0x20(0x08)
	struct FColor Color; // 0x28(0x04)
	struct FVector DefaultQueryExtent; // 0x2c(0x0c)
	struct UClass* NavigationDataClass; // 0x38(0x08)
	struct FStringClassReference NavigationDataClassName; // 0x40(0x10)
};

// ScriptStruct Engine.NavAgentSelector
// Size: 0x04 (Inherited: 0x00)
struct FNavAgentSelector {
	char *716f59006b : 1; // 0x00(0x01)
	char *2fbb47e074 : 1; // 0x00(0x01)
	char *7a86eeb89c : 1; // 0x00(0x01)
	char *bf1d7fefe9 : 1; // 0x00(0x01)
	char *c4f486f5a7 : 1; // 0x00(0x01)
	char *82fd8b2ef4 : 1; // 0x00(0x01)
	char *77a326d992 : 1; // 0x00(0x01)
	char *4f9b9ccd2a : 1; // 0x00(0x01)
	char *45824ea8cf : 1; // 0x01(0x01)
	char *a9475d7cbf : 1; // 0x01(0x01)
	char *43647f8df7 : 1; // 0x01(0x01)
	char *96c15245de : 1; // 0x01(0x01)
	char *b023ef7072 : 1; // 0x01(0x01)
	char *0f3493946c : 1; // 0x01(0x01)
	char *071dd88531 : 1; // 0x01(0x01)
	char *a620166a24 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.*72f49050d6
// Size: 0x38 (Inherited: 0x00)
struct F*72f49050d6 {
	struct FName Category; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
};

// ScriptStruct Engine.*d49026f3ea
// Size: 0x14 (Inherited: 0x00)
struct F*d49026f3ea {
	bool *6af8642522; // 0x00(0x01)
	bool bOverrideDensities; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *ef1402b2ad[0x04]; // 0x04(0x10)
};

// ScriptStruct Engine.*d5cc1098e9
// Size: 0x18 (Inherited: 0x00)
struct F*d5cc1098e9 {
	uint32 *342d84ebbf; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32> *83c0eca325; // 0x08(0x10)
};

// ScriptStruct Engine.*43af02caf0
// Size: 0x28 (Inherited: 0x00)
struct F*43af02caf0 {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct F*d49026f3ea UVChannelData; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*388f84eb2d
// Size: 0x28 (Inherited: 0x00)
struct F*388f84eb2d {
	bool *97c13079ee; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *9d2bddd893; // 0x04(0x0c)
	struct FVector *1753a12a8f; // 0x10(0x0c)
	struct FRotator *3285914dbb; // 0x1c(0x0c)
};

// ScriptStruct Engine.*b836533d8b
// Size: 0x50 (Inherited: 0x00)
struct F*b836533d8b {
	struct TMap<struct FString, struct F*9fcd227c6c> Map; // 0x00(0x50)
};

// ScriptStruct Engine.*9fcd227c6c
// Size: 0x50 (Inherited: 0x00)
struct F*9fcd227c6c {
	struct TMap<uint32, struct F*4cb34a69bb> Map; // 0x00(0x50)
};

// ScriptStruct Engine.*4cb34a69bb
// Size: 0x08 (Inherited: 0x00)
struct F*4cb34a69bb {
	int32 MaterialIndex; // 0x00(0x04)
	bool bEnableCollision; // 0x04(0x01)
	bool *c9bc49e16d; // 0x05(0x01)
	bool *c24ca70349; // 0x06(0x01)
	bool IndoorOutdoorMask; // 0x07(0x01)
};

// ScriptStruct Engine.*1e77a83b31
// Size: 0x04 (Inherited: 0x00)
struct F*1e77a83b31 {
	uint16 LODIndex; // 0x00(0x02)
	uint16 SectionIndex; // 0x02(0x02)
};

// ScriptStruct Engine.*9c47917aaf
// Size: 0x4b0 (Inherited: 0x00)
struct F*9c47917aaf {
	struct FMeshBuildSettings BuildSettings; // 0x00(0x40)
	struct FMeshReductionSettings ReductionSettings; // 0x40(0x158)
	struct F*a40d36bd7d RemeshingSettings; // 0x198(0xa8)
	bool *7d0a6ca518; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct FGroupedStaticMeshOptimizationSettings OptimizationSettings; // 0x248(0x260)
	float LODDistance; // 0x4a8(0x04)
	float ScreenSize; // 0x4ac(0x04)
};

// ScriptStruct Engine.GroupedStaticMeshOptimizationSettings
// Size: 0x260 (Inherited: 0x00)
struct FGroupedStaticMeshOptimizationSettings {
	enum class EStaticMeshLODType *a47cf34b5f; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMeshReductionSettings ReductionSettings; // 0x08(0x158)
	struct FMeshProxySettings ProxySettings; // 0x160(0xfc)
	char pad_25C[0x4]; // 0x25c(0x04)
};

// ScriptStruct Engine.*889a6fbf3c
// Size: 0x1c (Inherited: 0x00)
struct F*889a6fbf3c {
	enum class *6d7294814a *b9117781cf; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float *ed7f00f5f6; // 0x08(0x04)
	float WeldingThreshold; // 0x0c(0x04)
	bool bRecalcNormals; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *74c63ae24f; // 0x14(0x04)
	bool SilhouetteImportance; // 0x18(0x01)
	bool TextureImportance; // 0x19(0x01)
	bool ShadingImportance; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.*47c2c57997
// Size: 0xc8 (Inherited: 0x00)
struct F*47c2c57997 {
	bool bUseCustomCapture; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Saturation; // 0x04(0x04)
	struct FLinearColor *461dc79906; // 0x08(0x10)
	struct FLinearColor *16ffe1b69b; // 0x18(0x10)
	struct FLinearColor *c97be8e600; // 0x28(0x10)
	struct FLinearColor *fef4fa4524; // 0x38(0x10)
	struct FLinearColor *ba7c1057e2; // 0x48(0x10)
	struct FLinearColor *9eae9303cc; // 0x58(0x10)
	struct FLinearColor *260478bf5d; // 0x68(0x10)
	struct FLinearColor *945abb16d5; // 0x78(0x10)
	struct FLinearColor *b27a984a81; // 0x88(0x10)
	struct FLinearColor *c59590778c; // 0x98(0x10)
	struct FLinearColor *eaf73476d5; // 0xa8(0x10)
	struct FLinearColor *122804d84c; // 0xb8(0x10)
};

// ScriptStruct Engine.AmbientCube
// Size: 0x94 (Inherited: 0x00)
struct FAmbientCube {
	float Saturation; // 0x00(0x04)
	struct F*281a9c9983 Faces[0x06]; // 0x04(0x90)
};

// ScriptStruct Engine.*281a9c9983
// Size: 0x18 (Inherited: 0x00)
struct F*281a9c9983 {
	struct FColor Color; // 0x00(0x04)
	struct FLinearColor Tint; // 0x04(0x10)
	float FaceSaturation; // 0x14(0x04)
};

// ScriptStruct Engine.*d4dfcacc3f
// Size: 0x0c (Inherited: 0x00)
struct F*d4dfcacc3f {
	int32 Type; // 0x00(0x04)
	int32 Index; // 0x04(0x04)
	int32 *9fac166d75; // 0x08(0x04)
};

// ScriptStruct Engine.*2b1daf3feb
// Size: 0x24 (Inherited: 0x00)
struct F*2b1daf3feb {
	char bIsWorldSettings : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ExteriorVolume; // 0x04(0x04)
	float ExteriorTime; // 0x08(0x04)
	float ExteriorLPF; // 0x0c(0x04)
	float ExteriorLPFTime; // 0x10(0x04)
	float InteriorVolume; // 0x14(0x04)
	float InteriorTime; // 0x18(0x04)
	float InteriorLPF; // 0x1c(0x04)
	float InteriorLPFTime; // 0x20(0x04)
};

// ScriptStruct Engine.ReverbSettings
// Size: 0x18 (Inherited: 0x00)
struct FReverbSettings {
	char bApplyReverb : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class *02dc90854e ReverbType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UReverbEffect* ReverbEffect; // 0x08(0x08)
	float Volume; // 0x10(0x04)
	float FadeTime; // 0x14(0x04)
};

// ScriptStruct Engine.*a4caa301c7
// Size: 0x08 (Inherited: 0x00)
struct F*a4caa301c7 {
	float Size; // 0x00(0x04)
	float CullDistance; // 0x04(0x04)
};

// ScriptStruct Engine.PostProcessSettings
// Size: 0x570 (Inherited: 0x00)
struct FPostProcessSettings {
	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_WhiteTint : 1; // 0x00(0x01)
	char bOverride_ColorSaturation : 1; // 0x00(0x01)
	char bOverride_ColorContrast : 1; // 0x00(0x01)
	char bOverride_ColorGamma : 1; // 0x00(0x01)
	char bOverride_ColorGain : 1; // 0x00(0x01)
	char bOverride_ColorOffset : 1; // 0x00(0x01)
	char bOverride_ColorSaturationShadows : 1; // 0x00(0x01)
	char bOverride_ColorContrastShadows : 1; // 0x01(0x01)
	char bOverride_ColorGammaShadows : 1; // 0x01(0x01)
	char bOverride_ColorGainShadows : 1; // 0x01(0x01)
	char bOverride_ColorOffsetShadows : 1; // 0x01(0x01)
	char bOverride_ColorSaturationMidtones : 1; // 0x01(0x01)
	char bOverride_ColorContrastMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGammaMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGainMidtones : 1; // 0x01(0x01)
	char bOverride_ColorOffsetMidtones : 1; // 0x02(0x01)
	char bOverride_ColorSaturationHighlights : 1; // 0x02(0x01)
	char bOverride_ColorContrastHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGammaHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGainHighlights : 1; // 0x02(0x01)
	char bOverride_ColorOffsetHighlights : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x02(0x01)
	char bOverride_FilmWhitePoint : 1; // 0x03(0x01)
	char bOverride_FilmSaturation : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerRed : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerGreen : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerBlue : 1; // 0x03(0x01)
	char bOverride_FilmContrast : 1; // 0x03(0x01)
	char bOverride_FilmDynamicRange : 1; // 0x03(0x01)
	char bOverride_FilmHealAmount : 1; // 0x03(0x01)
	char bOverride_FilmToeAmount : 1; // 0x04(0x01)
	char bOverride_FilmShadowTint : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintBlend : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintAmount : 1; // 0x04(0x01)
	char bOverride_FilmSlope : 1; // 0x04(0x01)
	char bOverride_FilmToe : 1; // 0x04(0x01)
	char bOverride_FilmShoulder : 1; // 0x04(0x01)
	char bOverride_FilmBlackClip : 1; // 0x04(0x01)
	char bOverride_FilmWhiteClip : 1; // 0x05(0x01)
	char bOverride_SceneColorTint : 1; // 0x05(0x01)
	char bOverride_SceneFringeIntensity : 1; // 0x05(0x01)
	char bOverride_AmbientCubemapTint : 1; // 0x05(0x01)
	char bOverride_AmbientCubemapIntensity : 1; // 0x05(0x01)
	char bOverride_BloomMethod : 1; // 0x05(0x01)
	char bOverride_BloomIntensity : 1; // 0x05(0x01)
	char bOverride_BloomThreshold : 1; // 0x05(0x01)
	char bOverride_Bloom1Tint : 1; // 0x06(0x01)
	char bOverride_Bloom1Size : 1; // 0x06(0x01)
	char bOverride_Bloom2Size : 1; // 0x06(0x01)
	char bOverride_Bloom2Tint : 1; // 0x06(0x01)
	char bOverride_Bloom3Tint : 1; // 0x06(0x01)
	char bOverride_Bloom3Size : 1; // 0x06(0x01)
	char bOverride_Bloom4Tint : 1; // 0x06(0x01)
	char bOverride_Bloom4Size : 1; // 0x06(0x01)
	char bOverride_Bloom5Tint : 1; // 0x07(0x01)
	char bOverride_Bloom5Size : 1; // 0x07(0x01)
	char bOverride_Bloom6Tint : 1; // 0x07(0x01)
	char bOverride_Bloom6Size : 1; // 0x07(0x01)
	char bOverride_BloomSizeScale : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionTexture : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionSize : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionCenterUV : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionPreFilter : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionBufferScale : 1; // 0x08(0x01)
	char bOverride_BloomDirtMaskIntensity : 1; // 0x08(0x01)
	char bOverride_BloomDirtMaskTint : 1; // 0x08(0x01)
	char bOverride_BloomDirtMask : 1; // 0x08(0x01)
	char bOverride_TslBlurIntensity : 1; // 0x09(0x01)
	char bOverride_TslBlurScopeInnerEdge : 1; // 0x09(0x01)
	char bOverride_TslBlurScopeOutterEdge : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthBlackPoint : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthWhitePoint : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthGamma : 1; // 0x09(0x01)
	char bOverride_bTslBlurUseBranching : 1; // 0x09(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityStartLuminance : 1; // 0x09(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityFadeSpeed : 1; // 0x0a(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityReticleLuminanceMultiplier : 1; // 0x0a(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityReticleOpacity : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMethod : 1; // 0x0a(0x01)
	char bOverride_AutoExposureLowPercent : 1; // 0x0a(0x01)
	char bOverride_AutoExposureHighPercent : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMinBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMaxBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureSpeedUp : 1; // 0x0b(0x01)
	char bOverride_AutoExposureSpeedDown : 1; // 0x0b(0x01)
	char bOverride_AutoExposureBias : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMin : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMax : 1; // 0x0b(0x01)
	char bOverride_LensFlareIntensity : 1; // 0x0b(0x01)
	char bOverride_LensFlareTint : 1; // 0x0b(0x01)
	char bOverride_LensFlareTints : 1; // 0x0b(0x01)
	char bOverride_LensFlareBokehSize : 1; // 0x0c(0x01)
	char bOverride_LensFlareBokehShape : 1; // 0x0c(0x01)
	char bOverride_LensFlareThreshold : 1; // 0x0c(0x01)
	char bOverride_VignetteIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainJitter : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionIntensity : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x0d(0x01)
	char bOverride_HBAOPowerExponent : 1; // 0x0d(0x01)
	char bOverride_HBAORadius : 1; // 0x0d(0x01)
	char bOverride_HBAOBias : 1; // 0x0d(0x01)
	char bOverride_HBAODetailAO : 1; // 0x0d(0x01)
	char bOverride_HBAOBlurRadius : 1; // 0x0d(0x01)
	char bOverride_HBAOBlurSharpness : 1; // 0x0e(0x01)
	char bOverride_HBAOMaxViewDepth : 1; // 0x0e(0x01)
	char bOverride_HBAODepthSharpness : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionDistance : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x0f(0x01)
	char bOverride_LPVIntensity : 1; // 0x0f(0x01)
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x0f(0x01)
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x0f(0x01)
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x0f(0x01)
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x0f(0x01)
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSize : 1; // 0x10(0x01)
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x10(0x01)
	char bOverride_LPVGeometryVolumeBias : 1; // 0x10(0x01)
	char bOverride_LPVVplInjectionBias : 1; // 0x10(0x01)
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVFadeRange : 1; // 0x11(0x01)
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x11(0x01)
	char bOverride_IndirectLightingColor : 1; // 0x11(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x11(0x01)
	char bOverride_ColorGradingIntensity : 1; // 0x11(0x01)
	char bOverride_ColorGradingLUT : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldFstop : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldScopeSize : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldSensorWidth : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldScale : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldMaxBokehSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldMethod : 1; // 0x13(0x01)
	char bOverride_MobileHQGaussian : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldBokehShape : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldOcclusion : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldColorThreshold : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldSizeThreshold : 1; // 0x14(0x01)
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x14(0x01)
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x14(0x01)
	char bOverride_MotionBlurAmount : 1; // 0x14(0x01)
	char bOverride_MotionBlurMax : 1; // 0x14(0x01)
	char bOverride_MotionBlurPerObjectSize : 1; // 0x14(0x01)
	char bOverride_ScreenPercentage : 1; // 0x14(0x01)
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x14(0x01)
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x15(0x01)
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x15(0x01)
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x15(0x01)
	char bOverride_OutlineSettings : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTexture : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTextureScale : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTextureScrollSpeed : 1; // 0x15(0x01)
	char pad_15_7 : 1; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float WhiteTemp; // 0x18(0x04)
	float WhiteTint; // 0x1c(0x04)
	struct FVector4 ColorSaturation; // 0x20(0x10)
	struct FVector4 ColorContrast; // 0x30(0x10)
	struct FVector4 ColorGamma; // 0x40(0x10)
	struct FVector4 ColorGain; // 0x50(0x10)
	struct FVector4 ColorOffset; // 0x60(0x10)
	struct FVector4 ColorSaturationShadows; // 0x70(0x10)
	struct FVector4 ColorContrastShadows; // 0x80(0x10)
	struct FVector4 ColorGammaShadows; // 0x90(0x10)
	struct FVector4 ColorGainShadows; // 0xa0(0x10)
	struct FVector4 ColorOffsetShadows; // 0xb0(0x10)
	float ColorCorrectionShadowsMax; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FVector4 ColorSaturationMidtones; // 0xd0(0x10)
	struct FVector4 ColorContrastMidtones; // 0xe0(0x10)
	struct FVector4 ColorGammaMidtones; // 0xf0(0x10)
	struct FVector4 ColorGainMidtones; // 0x100(0x10)
	struct FVector4 ColorOffsetMidtones; // 0x110(0x10)
	struct FVector4 ColorSaturationHighlights; // 0x120(0x10)
	struct FVector4 ColorContrastHighlights; // 0x130(0x10)
	struct FVector4 ColorGammaHighlights; // 0x140(0x10)
	struct FVector4 ColorGainHighlights; // 0x150(0x10)
	struct FVector4 ColorOffsetHighlights; // 0x160(0x10)
	float ColorCorrectionHighlightsMin; // 0x170(0x04)
	float FilmSlope; // 0x174(0x04)
	float FilmToe; // 0x178(0x04)
	float FilmShoulder; // 0x17c(0x04)
	float FilmBlackClip; // 0x180(0x04)
	float FilmWhiteClip; // 0x184(0x04)
	struct FLinearColor FilmWhitePoint; // 0x188(0x10)
	struct FLinearColor FilmShadowTint; // 0x198(0x10)
	float FilmShadowTintBlend; // 0x1a8(0x04)
	float FilmShadowTintAmount; // 0x1ac(0x04)
	float FilmSaturation; // 0x1b0(0x04)
	struct FLinearColor FilmChannelMixerRed; // 0x1b4(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x1c4(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x1d4(0x10)
	float FilmContrast; // 0x1e4(0x04)
	float FilmToeAmount; // 0x1e8(0x04)
	float FilmHealAmount; // 0x1ec(0x04)
	float FilmDynamicRange; // 0x1f0(0x04)
	struct FLinearColor SceneColorTint; // 0x1f4(0x10)
	float SceneFringeIntensity; // 0x204(0x04)
	enum class *309c4c7683 BloomMethod; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	float BloomIntensity; // 0x20c(0x04)
	float BloomThreshold; // 0x210(0x04)
	float BloomSizeScale; // 0x214(0x04)
	float Bloom1Size; // 0x218(0x04)
	float Bloom2Size; // 0x21c(0x04)
	float Bloom3Size; // 0x220(0x04)
	float Bloom4Size; // 0x224(0x04)
	float Bloom5Size; // 0x228(0x04)
	float Bloom6Size; // 0x22c(0x04)
	struct FLinearColor Bloom1Tint; // 0x230(0x10)
	struct FLinearColor Bloom2Tint; // 0x240(0x10)
	struct FLinearColor Bloom3Tint; // 0x250(0x10)
	struct FLinearColor Bloom4Tint; // 0x260(0x10)
	struct FLinearColor Bloom5Tint; // 0x270(0x10)
	struct FLinearColor Bloom6Tint; // 0x280(0x10)
	struct UTexture2D* BloomConvolutionTexture; // 0x290(0x08)
	float BloomConvolutionSize; // 0x298(0x04)
	struct FVector2D BloomConvolutionCenterUV; // 0x29c(0x08)
	struct FVector BloomConvolutionPreFilter; // 0x2a4(0x0c)
	float BloomConvolutionPreFilterMin; // 0x2b0(0x04)
	float BloomConvolutionPreFilterMax; // 0x2b4(0x04)
	float BloomConvolutionPreFilterMult; // 0x2b8(0x04)
	float BloomConvolutionBufferScale; // 0x2bc(0x04)
	struct UTexture* BloomDirtMask; // 0x2c0(0x08)
	float BloomDirtMaskIntensity; // 0x2c8(0x04)
	struct FLinearColor BloomDirtMaskTint; // 0x2cc(0x10)
	float TslBlurIntensity; // 0x2dc(0x04)
	float TslBlurScopeInnerEdge; // 0x2e0(0x04)
	float TslBlurScopeOutterEdge; // 0x2e4(0x04)
	float TslBlurReticleBrightSceneVisibilityStartLuminance; // 0x2e8(0x04)
	float TslBlurReticleBrightSceneVisibilityFadeSpeed; // 0x2ec(0x04)
	float TslBlurReticleBrightSceneVisibilityReticleLuminanceMultiplier; // 0x2f0(0x04)
	float TslBlurReticleBrightSceneVisibilityReticleOpacity; // 0x2f4(0x04)
	float TslBlurDepthBlackPoint; // 0x2f8(0x04)
	float TslBlurDepthWhitePoint; // 0x2fc(0x04)
	float TslBlurDepthGamma; // 0x300(0x04)
	bool bTslBlurUseBranching; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct FLinearColor AmbientCubemapTint; // 0x308(0x10)
	float AmbientCubemapIntensity; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UTextureCube* AmbientCubemap; // 0x320(0x08)
	enum class EAutoExposureMethod AutoExposureMethod; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	float AutoExposureLowPercent; // 0x32c(0x04)
	float AutoExposureHighPercent; // 0x330(0x04)
	float AutoExposureMinBrightness; // 0x334(0x04)
	float AutoExposureMaxBrightness; // 0x338(0x04)
	float AutoExposureSpeedUp; // 0x33c(0x04)
	float AutoExposureSpeedDown; // 0x340(0x04)
	float AutoExposureBias; // 0x344(0x04)
	float HistogramLogMin; // 0x348(0x04)
	float HistogramLogMax; // 0x34c(0x04)
	float LensFlareIntensity; // 0x350(0x04)
	struct FLinearColor LensFlareTint; // 0x354(0x10)
	float LensFlareBokehSize; // 0x364(0x04)
	float LensFlareThreshold; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct UTexture* LensFlareBokehShape; // 0x370(0x08)
	struct FLinearColor LensFlareTints[0x08]; // 0x378(0x80)
	float VignetteIntensity; // 0x3f8(0x04)
	float GrainJitter; // 0x3fc(0x04)
	float GrainIntensity; // 0x400(0x04)
	float HBAOPowerExponent; // 0x404(0x04)
	float HBAORadius; // 0x408(0x04)
	float HBAOBias; // 0x40c(0x04)
	float HBAODetailAO; // 0x410(0x04)
	enum class EHBAOBlurRadius HBAOBlurRadius; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	float HBAOBlurSharpness; // 0x418(0x04)
	float HBAOMaxViewDepth; // 0x41c(0x04)
	float HBAODepthSharpness; // 0x420(0x04)
	float AmbientOcclusionIntensity; // 0x424(0x04)
	float AmbientOcclusionStaticFraction; // 0x428(0x04)
	float AmbientOcclusionRadius; // 0x42c(0x04)
	char AmbientOcclusionRadiusInWS : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float AmbientOcclusionFadeDistance; // 0x434(0x04)
	float AmbientOcclusionFadeRadius; // 0x438(0x04)
	float AmbientOcclusionDistance; // 0x43c(0x04)
	float AmbientOcclusionPower; // 0x440(0x04)
	float AmbientOcclusionBias; // 0x444(0x04)
	float AmbientOcclusionQuality; // 0x448(0x04)
	float AmbientOcclusionMipBlend; // 0x44c(0x04)
	float AmbientOcclusionMipScale; // 0x450(0x04)
	float AmbientOcclusionMipThreshold; // 0x454(0x04)
	struct FLinearColor IndirectLightingColor; // 0x458(0x10)
	float IndirectLightingIntensity; // 0x468(0x04)
	float ColorGradingIntensity; // 0x46c(0x04)
	struct UTexture* ColorGradingLUT; // 0x470(0x08)
	enum class EDepthOfFieldMethod DepthOfFieldMethod; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	char bMobileHQGaussian : 1; // 0x47c(0x01)
	char pad_47C_1 : 7; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	float DepthOfFieldFstop; // 0x480(0x04)
	float DepthOfFieldSensorWidth; // 0x484(0x04)
	float DepthOfFieldFocalDistance; // 0x488(0x04)
	float DepthOfFieldDepthBlurAmount; // 0x48c(0x04)
	float DepthOfFieldDepthBlurRadius; // 0x490(0x04)
	float DepthOfFieldFocalRegion; // 0x494(0x04)
	float DepthOfFieldNearTransitionRegion; // 0x498(0x04)
	float DepthOfFieldFarTransitionRegion; // 0x49c(0x04)
	float DepthOfFieldScale; // 0x4a0(0x04)
	float DepthOfFieldMaxBokehSize; // 0x4a4(0x04)
	float DepthOfFieldNearBlurSize; // 0x4a8(0x04)
	float DepthOfFieldFarBlurSize; // 0x4ac(0x04)
	struct UTexture* DepthOfFieldBokehShape; // 0x4b0(0x08)
	float DepthOfFieldOcclusion; // 0x4b8(0x04)
	float DepthOfFieldColorThreshold; // 0x4bc(0x04)
	float DepthOfFieldSizeThreshold; // 0x4c0(0x04)
	float DepthOfFieldSkyFocusDistance; // 0x4c4(0x04)
	float DepthOfFieldVignetteSize; // 0x4c8(0x04)
	float MotionBlurAmount; // 0x4cc(0x04)
	float MotionBlurMax; // 0x4d0(0x04)
	float MotionBlurPerObjectSize; // 0x4d4(0x04)
	float LPVIntensity; // 0x4d8(0x04)
	float LPVVplInjectionBias; // 0x4dc(0x04)
	float LPVSize; // 0x4e0(0x04)
	float LPVSecondaryOcclusionIntensity; // 0x4e4(0x04)
	float LPVSecondaryBounceIntensity; // 0x4e8(0x04)
	float LPVGeometryVolumeBias; // 0x4ec(0x04)
	float LPVEmissiveInjectionIntensity; // 0x4f0(0x04)
	float LPVDirectionalOcclusionIntensity; // 0x4f4(0x04)
	float LPVDirectionalOcclusionRadius; // 0x4f8(0x04)
	float LPVDiffuseOcclusionExponent; // 0x4fc(0x04)
	float LPVSpecularOcclusionExponent; // 0x500(0x04)
	float LPVDiffuseOcclusionIntensity; // 0x504(0x04)
	float LPVSpecularOcclusionIntensity; // 0x508(0x04)
	float ScreenSpaceReflectionIntensity; // 0x50c(0x04)
	float ScreenSpaceReflectionQuality; // 0x510(0x04)
	float ScreenSpaceReflectionMaxRoughness; // 0x514(0x04)
	float LPVFadeRange; // 0x518(0x04)
	float LPVDirectionalOcclusionFadeRange; // 0x51c(0x04)
	float ScreenPercentage; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct UTexture2D* OutlineMaskTexture; // 0x528(0x08)
	struct FVector2D OutlineMaskTextureScale; // 0x530(0x08)
	struct FVector2D OutlineMaskTextureScrollSpeed; // 0x538(0x08)
	struct TArray<struct FPostProcessOutlineSettings> OutlineSettings; // 0x540(0x10)
	struct FWeightedBlendables WeightedBlendables; // 0x550(0x10)
	struct TArray<struct UObject*> Blendables; // 0x560(0x10)
};

// ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendables {
	struct TArray<struct FWeightedBlendable> Array; // 0x00(0x10)
};

// ScriptStruct Engine.WeightedBlendable
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendable {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* Object; // 0x08(0x08)
};

// ScriptStruct Engine.PostProcessOutlineSettings
// Size: 0x1c (Inherited: 0x00)
struct FPostProcessOutlineSettings {
	struct FLinearColor Color; // 0x00(0x10)
	float OuterRadius; // 0x10(0x04)
	float InnerRadius; // 0x14(0x04)
	bool bUseNoiseTexture; // 0x18(0x01)
	bool bXRay; // 0x19(0x01)
	bool CustomStencilValue; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.LatentActionManager
// Size: 0xf0 (Inherited: 0x00)
struct FLatentActionManager {
	char pad_0[0xf0]; // 0x00(0xf0)
};

// ScriptStruct Engine.*5ac60a3c18
// Size: 0x38 (Inherited: 0x00)
struct F*5ac60a3c18 {
	char pad_0[0x30]; // 0x00(0x30)
	bool *3e9d10be3a; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 *d05b15c73a; // 0x34(0x04)
};

// ScriptStruct Engine.*cfcaca8725
// Size: 0x5c0 (Inherited: 0x00)
struct F*cfcaca8725 {
	float OrthoFarClipPlane; // 0x00(0x04)
	struct FRotator Rotation; // 0x04(0x0c)
	struct FVector Location; // 0x10(0x0c)
	float FOV; // 0x1c(0x04)
	float AspectRatio; // 0x20(0x04)
	float OrthoNearClipPlane; // 0x24(0x04)
	enum class ECameraProjectionMode ProjectionMode; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FPostProcessSettings PostProcessSettings; // 0x30(0x570)
	char bConstrainAspectRatio : 1; // 0x5a0(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x5a0(0x01)
	char pad_5A0_2 : 6; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	float PostProcessBlendWeight; // 0x5a4(0x04)
	struct FVector2D OffCenterProjectionOffset; // 0x5a8(0x08)
	float OrthoWidth; // 0x5b0(0x04)
	char pad_5B4[0xc]; // 0x5b4(0x0c)
};

// ScriptStruct Engine.*eff78d75d0
// Size: 0x24 (Inherited: 0x00)
struct F*eff78d75d0 {
	struct F*58787e3608 X; // 0x00(0x0c)
	struct F*58787e3608 Y; // 0x0c(0x0c)
	struct F*58787e3608 Z; // 0x18(0x0c)
};

// ScriptStruct Engine.*58787e3608
// Size: 0x0c (Inherited: 0x00)
struct F*58787e3608 {
	float *6c8b0cbf54; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	enum class *e6a30cf507 *431985cc66; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.*673e053786
// Size: 0x24 (Inherited: 0x00)
struct F*673e053786 {
	struct F*58787e3608 Pitch; // 0x00(0x0c)
	struct F*58787e3608 Yaw; // 0x0c(0x0c)
	struct F*58787e3608 Roll; // 0x18(0x0c)
};

// ScriptStruct Engine.*ff3e9275fa
// Size: 0x10 (Inherited: 0x00)
struct F*ff3e9275fa {
	float BlendTime; // 0x00(0x04)
	enum class *5d3636c297 BlendFunction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float BlendExp; // 0x08(0x04)
	char bLockOutgoing : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*0653442295
// Size: 0x5e0 (Inherited: 0x00)
struct F*0653442295 {
	struct AActor* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct F*cfcaca8725 POV; // 0x10(0x5c0)
	struct APlayerState* PlayerState; // 0x5d0(0x08)
	char pad_5D8[0x8]; // 0x5d8(0x08)
};

// ScriptStruct Engine.*af5ae819d5
// Size: 0x5d0 (Inherited: 0x00)
struct F*af5ae819d5 {
	float Timestamp; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct F*cfcaca8725 *a30a1fe112; // 0x10(0x5c0)
};

// ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputAxisKeyMapping {
	struct FName AxisName; // 0x00(0x08)
	struct FKey Key; // 0x08(0x18)
	float Scale; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.InputActionKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputActionKeyMapping {
	struct FName ActionName; // 0x00(0x08)
	struct FKey Key; // 0x08(0x18)
	char bShift : 1; // 0x20(0x01)
	char bCtrl : 1; // 0x20(0x01)
	char bAlt : 1; // 0x20(0x01)
	char bCmd : 1; // 0x20(0x01)
	char pad_20_4 : 4; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x28 (Inherited: 0x00)
struct FInputAxisConfigEntry {
	struct FName AxisKeyName; // 0x00(0x08)
	struct F*04427713cd AxisProperties; // 0x08(0x20)
};

// ScriptStruct Engine.*04427713cd
// Size: 0x20 (Inherited: 0x00)
struct F*04427713cd {
	float DEADZONE; // 0x00(0x04)
	float OuterDeadZone; // 0x04(0x04)
	float Sensitivity; // 0x08(0x04)
	float Exponent; // 0x0c(0x04)
	char bInvert : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UCurveFloat* MultiplierAxisValueCurve; // 0x18(0x08)
};

// ScriptStruct Engine.*c1a57810c7
// Size: 0x30 (Inherited: 0x00)
struct F*c1a57810c7 {
	struct FKey Key; // 0x00(0x18)
	struct FString Command; // 0x18(0x10)
	char Control : 1; // 0x28(0x01)
	char Shift : 1; // 0x28(0x01)
	char Alt : 1; // 0x28(0x01)
	char Cmd : 1; // 0x28(0x01)
	char bIgnoreCtrl : 1; // 0x28(0x01)
	char bIgnoreShift : 1; // 0x28(0x01)
	char bIgnoreAlt : 1; // 0x28(0x01)
	char bIgnoreCmd : 1; // 0x28(0x01)
	char *d8c19e1ab6 : 1; // 0x29(0x01)
	char pad_29_1 : 7; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.*cbcf0f0f07
// Size: 0x10 (Inherited: 0x00)
struct F*cbcf0f0f07 {
	struct FName ActionName; // 0x00(0x08)
	enum class *8d42d05dff KeyEvent; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*08ee4d66ce
// Size: 0x70 (Inherited: 0x00)
struct F*08ee4d66ce {
	struct UPlayerInput* PlayerInput; // 0x00(0x08)
	char pad_8[0x68]; // 0x08(0x68)
};

// ScriptStruct Engine.*846c4d8d15
// Size: 0x18 (Inherited: 0x00)
struct F*846c4d8d15 {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.*4d87801027
// Size: 0x80 (Inherited: 0x00)
struct F*4d87801027 {
	char *dbaa4f07b0 : 1; // 0x00(0x01)
	char *407341a817 : 1; // 0x00(0x01)
	char *1469c03969 : 1; // 0x00(0x01)
	char *4dab7a78a9 : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve Curve; // 0x08(0x78)
};

// ScriptStruct Engine.*e7110f7bbf
// Size: 0x10 (Inherited: 0x00)
struct F*e7110f7bbf {
	struct FName PackageName; // 0x00(0x08)
	char bIsVisible : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*f981ef2f05
// Size: 0x10 (Inherited: 0x00)
struct F*f981ef2f05 {
	struct FName PackageName; // 0x00(0x08)
	int32 LODIndex; // 0x08(0x04)
	char *dc2ee2c1a1 : 1; // 0x0c(0x01)
	char *62cb33450e : 1; // 0x0c(0x01)
	char *6cdfbef554 : 1; // 0x0c(0x01)
	char pad_C_3 : 5; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*fae183bc56
// Size: 0x60 (Inherited: 0x00)
struct F*fae183bc56 {
	struct AActor* *4d184ccbd5; // 0x00(0x08)
	struct FVector *6916259289; // 0x08(0x0c)
	struct FVector *e3d20efa45; // 0x14(0x0c)
	struct FString *fc26e604fa; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x04)
	float Duration; // 0x34(0x04)
	struct FColor TextColor; // 0x38(0x04)
	char bAbsoluteLocation : 1; // 0x3c(0x01)
	char *a738d4eeaa : 1; // 0x3c(0x01)
	char *6411c24e6c : 1; // 0x3c(0x01)
	char pad_3C_3 : 5; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector *de1fb2ae10; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UFont* Font; // 0x50(0x08)
	float *55a47513fa; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Engine.*ffa7c96f53
// Size: 0x28 (Inherited: 0x00)
struct F*ffa7c96f53 {
	bool bUseMBPOnClient; // 0x00(0x01)
	bool bUseMBPOnServer; // 0x01(0x01)
	bool bUseMBPOuterBounds; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FBox MBPBounds; // 0x04(0x1c)
	float MBPOuterBoundsExpandSize; // 0x20(0x04)
	uint32 MBPNumSubdivs; // 0x24(0x04)
};

// ScriptStruct Engine.HierarchicalSimplification
// Size: 0x1e8 (Inherited: 0x00)
struct FHierarchicalSimplification {
	char pad_0[0x4]; // 0x00(0x04)
	float *7bf51e1737; // 0x04(0x04)
	bool *6d9be856a7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FMeshProxySettings *ec4b5a273f; // 0x0c(0xfc)
	struct FMeshMergingSettings *8867101be0; // 0x108(0xd4)
	float *a5485b57ce; // 0x1dc(0x04)
	float *d4a51b5175; // 0x1e0(0x04)
	int32 *69fa31b785; // 0x1e4(0x04)
};

// ScriptStruct Engine.*6ca3c6038b
// Size: 0x30 (Inherited: 0x00)
struct F*6ca3c6038b {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* *0715f5f5c3; // 0x08(0x08)
	struct AActor* ViewTarget; // 0x10(0x08)
	struct FVector ViewLocation; // 0x18(0x0c)
	struct FVector ViewDir; // 0x24(0x0c)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x44 (Inherited: 0x00)
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x00(0x04)
	int32 *99c715bbe2; // 0x04(0x04)
	float *48db6e9e9d; // 0x08(0x04)
	float *09d1fd9e75; // 0x0c(0x04)
	struct FColor EnvironmentColor; // 0x10(0x04)
	float *8eec223df9; // 0x14(0x04)
	float EmissiveBoost; // 0x18(0x04)
	float DiffuseBoost; // 0x1c(0x04)
	char *da00828299 : 1; // 0x20(0x01)
	char *65d7be3a60 : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *eb2db6c5d6; // 0x24(0x04)
	float *2f2b32fc2d; // 0x28(0x04)
	float OcclusionExponent; // 0x2c(0x04)
	float *1ba9d36d3f; // 0x30(0x04)
	float MaxOcclusionDistance; // 0x34(0x04)
	char *604d9b6f27 : 1; // 0x38(0x01)
	char *a22b353001 : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *280767b1e1; // 0x3c(0x04)
	char bCompressLightmaps : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.*b8e9ab889d
// Size: 0x04 (Inherited: 0x00)
struct F*b8e9ab889d {
	char bWaterSurface : 1; // 0x00(0x01)
	char bWaterFX : 1; // 0x00(0x01)
	char bWeather : 1; // 0x00(0x01)
	char bEnvironment : 1; // 0x00(0x01)
	char bVegetationSmall : 1; // 0x00(0x01)
	char bVegetationMedium : 1; // 0x00(0x01)
	char bVegetationLarge : 1; // 0x00(0x01)
	char bVegetationHuge : 1; // 0x00(0x01)
	char bSmokeGrenade : 1; // 0x01(0x01)
	char bSmoke : 1; // 0x01(0x01)
	char bExplosion : 1; // 0x01(0x01)
	char bMolotov : 1; // 0x01(0x01)
	char bFire : 1; // 0x01(0x01)
	char bSparks : 1; // 0x01(0x01)
	char bDebris : 1; // 0x01(0x01)
	char bWeaponFX : 1; // 0x01(0x01)
	char bVehicleFX : 1; // 0x02(0x01)
	char bOther : 1; // 0x02(0x01)
	char pad_2_2 : 6; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
};

// ScriptStruct Engine.*bed7a8a90d
// Size: 0x10 (Inherited: 0x00)
struct F*bed7a8a90d {
	float SamplingScale; // 0x00(0x04)
	int32 *ca47dd992b; // 0x04(0x04)
	struct FName TextureName; // 0x08(0x08)
};

// ScriptStruct Engine.*5dc70d11a6
// Size: 0x14 (Inherited: 0x00)
struct F*5dc70d11a6 {
	char bCastShadowAsMasked : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EmissiveBoost; // 0x04(0x04)
	float DiffuseBoost; // 0x08(0x04)
	float ExportResolutionScale; // 0x0c(0x04)
	char *46a1092e3c : 1; // 0x10(0x01)
	char *6b6bed6f16 : 1; // 0x10(0x01)
	char *8fccfda591 : 1; // 0x10(0x01)
	char *d003cc811a : 1; // 0x10(0x01)
	char pad_10_4 : 4; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.*e52484916f
// Size: 0xa0 (Inherited: 0x00)
struct F*e52484916f {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct F*9d7f7b8516> PaintedVertices; // 0x20(0x10)
	char pad_30[0x70]; // 0x30(0x70)
};

// ScriptStruct Engine.*9d7f7b8516
// Size: 0x14 (Inherited: 0x00)
struct F*9d7f7b8516 {
	struct FVector Position; // 0x00(0x0c)
	struct FPackedNormal Normal; // 0x0c(0x04)
	struct FColor Color; // 0x10(0x04)
};

// ScriptStruct Engine.*d41fb53a74
// Size: 0x18 (Inherited: 0x00)
struct F*d41fb53a74 {
	struct FName ObjectName; // 0x00(0x08)
	struct TArray<struct AActor*> Actors; // 0x08(0x10)
};

// ScriptStruct Engine.*b584e80f7c
// Size: 0x10 (Inherited: 0x00)
struct F*b584e80f7c {
	struct FVector Location; // 0x00(0x0c)
	float Timestamp; // 0x0c(0x04)
};

// ScriptStruct Engine.*4474e4d98f
// Size: 0x20 (Inherited: 0x00)
struct F*4474e4d98f {
	struct FString *b11f022b46; // 0x00(0x10)
	int32 *6c8bfc451f; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* AreaClass; // 0x18(0x08)
};

// ScriptStruct Engine.*ba6500be87
// Size: 0x18 (Inherited: 0x00)
struct F*ba6500be87 {
	struct UObject* Owner; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.*b5cc1897b1
// Size: 0x18 (Inherited: 0x00)
struct F*b5cc1897b1 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.NavigationSegmentLink
// Size: 0x68 (Inherited: 0x38)
struct FNavigationSegmentLink : FNavigationLinkBase {
	struct FVector LeftStart; // 0x38(0x0c)
	struct FVector LeftEnd; // 0x44(0x0c)
	struct FVector RightStart; // 0x50(0x0c)
	struct FVector RightEnd; // 0x5c(0x0c)
};

// ScriptStruct Engine.NavigationLinkBase
// Size: 0x38 (Inherited: 0x00)
struct FNavigationLinkBase {
	float *d88bd232a6; // 0x00(0x04)
	float *890af19296; // 0x04(0x04)
	enum class ENavLinkDirection Direction; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	float *e31197fc4c; // 0x10(0x04)
	float *550bf83b46; // 0x14(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x18(0x04)
	char *716f59006b : 1; // 0x1c(0x01)
	char *2fbb47e074 : 1; // 0x1c(0x01)
	char *7a86eeb89c : 1; // 0x1c(0x01)
	char *bf1d7fefe9 : 1; // 0x1c(0x01)
	char *c4f486f5a7 : 1; // 0x1c(0x01)
	char *82fd8b2ef4 : 1; // 0x1c(0x01)
	char *77a326d992 : 1; // 0x1c(0x01)
	char *4f9b9ccd2a : 1; // 0x1c(0x01)
	char *45824ea8cf : 1; // 0x1d(0x01)
	char *a9475d7cbf : 1; // 0x1d(0x01)
	char *43647f8df7 : 1; // 0x1d(0x01)
	char *96c15245de : 1; // 0x1d(0x01)
	char *b023ef7072 : 1; // 0x1d(0x01)
	char *0f3493946c : 1; // 0x1d(0x01)
	char *071dd88531 : 1; // 0x1d(0x01)
	char *a620166a24 : 1; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	char bUseSnapHeight : 1; // 0x20(0x01)
	char *5b1538dc9b : 1; // 0x20(0x01)
	char *c175bb102f : 1; // 0x20(0x01)
	char *2c54976521 : 1; // 0x20(0x01)
	char *7ff247ef3a : 1; // 0x20(0x01)
	char *9877e7dc6e : 1; // 0x20(0x01)
	char *02d2d535b7 : 1; // 0x20(0x01)
	char *ce018e92b6 : 1; // 0x20(0x01)
	char *b615b5f40f : 1; // 0x21(0x01)
	char *52f963494b : 1; // 0x21(0x01)
	char pad_21_2 : 6; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct UClass* AreaClass; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Engine.NavigationLink
// Size: 0x50 (Inherited: 0x38)
struct FNavigationLink : FNavigationLinkBase {
	struct FVector Left; // 0x38(0x0c)
	struct FVector Right; // 0x44(0x0c)
};

// ScriptStruct Engine.*dead56482b
// Size: 0x10 (Inherited: 0x00)
struct F*dead56482b {
	struct FName Name; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Engine.*87ee2611df
// Size: 0x10 (Inherited: 0x00)
struct F*87ee2611df {
	struct TArray<bool> *769a900fd0; // 0x00(0x10)
};

// ScriptStruct Engine.*ace7ccc201
// Size: 0x01 (Inherited: 0x00)
struct F*ace7ccc201 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.ParticleSysParam
// Size: 0x80 (Inherited: 0x00)
struct FParticleSysParam {
	struct FName Name; // 0x00(0x08)
	enum class *3f778283b4 ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Scalar; // 0x0c(0x04)
	float Scalar_Low; // 0x10(0x04)
	struct FVector Vector; // 0x14(0x0c)
	struct FVector Vector_Low; // 0x20(0x0c)
	struct FColor Color; // 0x2c(0x04)
	struct AActor* Actor; // 0x30(0x08)
	struct UMaterialInterface* Material; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)
};

// ScriptStruct Engine.*65d1ed0e99
// Size: 0x10 (Inherited: 0x00)
struct F*65d1ed0e99 {
	struct TArray<struct F*2ea42359e9> *6c762a9e31; // 0x00(0x10)
};

// ScriptStruct Engine.*2ea42359e9
// Size: 0x30 (Inherited: 0x00)
struct F*2ea42359e9 {
	struct UObject* *7c6ad248b5; // 0x00(0x20)
	struct UObject* Object; // 0x20(0x08)
	struct FName *692c6e0293; // 0x28(0x08)
};

// ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 (Inherited: 0x00)
struct FAnimNotifyTrack {
	struct FName TrackName; // 0x00(0x08)
	struct FLinearColor TrackColor; // 0x08(0x10)
	char pad_18[0x20]; // 0x18(0x20)
};

// ScriptStruct Engine.*3af23108a0
// Size: 0x10 (Inherited: 0x00)
struct F*3af23108a0 {
	struct TArray<struct FPerBoneBlendWeight> *ef4a2dc44c; // 0x00(0x10)
};

// ScriptStruct Engine.*c98fa22526
// Size: 0x30 (Inherited: 0x00)
struct F*c98fa22526 {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	bool bEnableShadowCasting; // 0x08(0x01)
	bool bRecomputeTangent; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FName MaterialSlotName; // 0x10(0x08)
	struct F*d49026f3ea UVChannelData; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x78 (Inherited: 0x00)
struct FClothingAssetData_Legacy {
	struct FName AssetName; // 0x00(0x08)
	struct FString *ddeed3a5be; // 0x08(0x10)
	bool *1c2d8cd410; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FClothPhysicsProperties_Legacy *83f10073d0; // 0x1c(0x50)
	char pad_6C[0xc]; // 0x6c(0x0c)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x00)
struct FClothPhysicsProperties_Legacy {
	float *9693dacbb4; // 0x00(0x04)
	float *b018e545aa; // 0x04(0x04)
	float *b13f36f47b; // 0x08(0x04)
	float *be553c3518; // 0x0c(0x04)
	float Friction; // 0x10(0x04)
	float Damping; // 0x14(0x04)
	float TetherStiffness; // 0x18(0x04)
	float TetherLimit; // 0x1c(0x04)
	float Drag; // 0x20(0x04)
	float StiffnessFrequency; // 0x24(0x04)
	float GravityScale; // 0x28(0x04)
	float MassScale; // 0x2c(0x04)
	float *e7982644b5; // 0x30(0x04)
	float SelfCollisionThickness; // 0x34(0x04)
	float SelfCollisionSquashScale; // 0x38(0x04)
	float SelfCollisionStiffness; // 0x3c(0x04)
	float SolverFrequency; // 0x40(0x04)
	float *10feec7a84; // 0x44(0x04)
	float *944a26d147; // 0x48(0x04)
	float *aeab5e1d88; // 0x4c(0x04)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0x540 (Inherited: 0x00)
struct FSkeletalMeshLODInfo {
	float ScreenSize; // 0x00(0x04)
	float *bd2c81c2b0; // 0x04(0x04)
	struct TArray<int32> LODMaterialMap; // 0x08(0x10)
	struct TArray<bool> bEnableShadowCasting; // 0x18(0x10)
	struct TArray<struct FTriangleSortSettings> TriangleSortSettings; // 0x28(0x10)
	char *7d0a6ca518 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40(0x188)
	struct TArray<struct FBoneReference> *195f139168; // 0x1c8(0x10)
	float *af0a833418; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct F*a40d36bd7d RemeshingSettings; // 0x1e0(0xa8)
	struct FGroupedSkeletalOptimizationSettings OptimizationSettings; // 0x288(0x290)
	struct TArray<struct FName> RemovedBones; // 0x518(0x10)
	struct FString *ad2e162231; // 0x528(0x10)
	char *f645e0b57b : 1; // 0x538(0x01)
	char pad_538_1 : 7; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
};

// ScriptStruct Engine.GroupedSkeletalOptimizationSettings
// Size: 0x290 (Inherited: 0x00)
struct FGroupedSkeletalOptimizationSettings {
	bool *f731a583bc; // 0x00(0x01)
	enum class ESkeletalMeshLODType *a47cf34b5f; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x08(0x188)
	struct FMeshProxySettings ProxySettings; // 0x190(0xfc)
	bool *815084d288; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x188 (Inherited: 0x00)
struct FSkeletalMeshOptimizationSettings {
	enum class *9119324448 *c65ae189ab; // 0x00(0x01)
	enum class SkeletalMeshOptimizationType *b9117781cf; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float *4fc3c9b7f8; // 0x08(0x04)
	uint32 *9518ee5add; // 0x0c(0x04)
	uint32 *601d14f6b0; // 0x10(0x04)
	float *6243e75e8f; // 0x14(0x04)
	float *ed7f00f5f6; // 0x18(0x04)
	int32 ScreenSize; // 0x1c(0x04)
	float WeldingThreshold; // 0x20(0x04)
	bool bRecalcNormals; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float *74c63ae24f; // 0x28(0x04)
	enum class *82205c88b1 SilhouetteImportance; // 0x2c(0x01)
	enum class *82205c88b1 TextureImportance; // 0x2d(0x01)
	enum class *82205c88b1 ShadingImportance; // 0x2e(0x01)
	enum class *82205c88b1 SkinningImportance; // 0x2f(0x01)
	float *a87bcb8017; // 0x30(0x04)
	int32 MaxBonesPerVertex; // 0x34(0x04)
	bool *c52d215c71; // 0x38(0x01)
	bool *6a620cff21; // 0x39(0x01)
	bool *966565319b; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x40(0x10)
	int32 BaseLOD; // 0x50(0x04)
	int32 *e62dfbaff4; // 0x54(0x04)
	bool *a6e0930964; // 0x58(0x01)
	bool *b7d3003064; // 0x59(0x01)
	bool *f9da4f5e2d; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct F*665907b268 MaterialLODSettings; // 0x60(0x80)
	struct FMaterialProxySettings MaterialSettings; // 0xe0(0x9c)
	bool *419a7f9e5b; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct UAnimSequence* BakePose; // 0x180(0x08)
};

// ScriptStruct Engine.TriangleSortSettings
// Size: 0x10 (Inherited: 0x00)
struct FTriangleSortSettings {
	enum class *c34beacf79 TriangleSorting; // 0x00(0x01)
	enum class *1923fc776c *5a93842907; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FName *f60d515d00; // 0x08(0x08)
};

// ScriptStruct Engine.*9efb284a3c
// Size: 0x50 (Inherited: 0x00)
struct F*9efb284a3c {
	struct FString AssetName; // 0x00(0x10)
	int32 LODIndex; // 0x10(0x04)
	int32 SourceSection; // 0x14(0x04)
	bool *a6b834be5f; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UPhysicsAsset* PhysicsAsset; // 0x20(0x20)
	bool bTryAutoFix; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float *6a7f155011; // 0x44(0x04)
	float *654b1c2b42; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Engine.*5ebe305604
// Size: 0x18 (Inherited: 0x00)
struct F*5ebe305604 {
	struct FName BoneName; // 0x00(0x08)
	struct FName SourceBoneName; // 0x08(0x08)
	enum class EAxis *cd844c820c; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.*e996e4d3f5
// Size: 0x08 (Inherited: 0x00)
struct F*e996e4d3f5 {
	int32 *f3d3bcef3f; // 0x00(0x04)
	enum class EAxis *cd844c820c; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*0fd77f3507
// Size: 0x10 (Inherited: 0x00)
struct F*0fd77f3507 {
	struct FName GroupName; // 0x00(0x08)
	enum class *99201bf055 *e0b25c38c6; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*f882669a6a
// Size: 0x40 (Inherited: 0x00)
struct F*f882669a6a {
	bool *3ccf704488; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendWeight; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform *c8f3209513; // 0x10(0x30)
};

// ScriptStruct Engine.*0941f48b67
// Size: 0x80 (Inherited: 0x00)
struct F*0941f48b67 {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct Engine.*18ff2d5e51
// Size: 0x48 (Inherited: 0x00)
struct F*18ff2d5e51 {
	struct UAnimationAsset* *5970d93c9a; // 0x00(0x08)
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.*30d73db4a8
// Size: 0x18 (Inherited: 0x00)
struct F*30d73db4a8 {
	struct FName *d645c5ec3e; // 0x00(0x08)
	struct FName *9bac8be05d; // 0x08(0x08)
	float *7e3fa1f2bc; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x100 (Inherited: 0x00)
struct FRootMotionSourceGroup {
	char pad_0[0xe8]; // 0x00(0xe8)
	bool *57127faa91; // 0xe8(0x01)
	bool *e24bd2bf96; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	struct FVector_NetQuantize10 *778695f42e; // 0xec(0x0c)
	bool *f093779f27; // 0xf8(0x01)
	struct F*1f9f835af5 *8b96ff903e; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
};

// ScriptStruct Engine.*1f9f835af5
// Size: 0x01 (Inherited: 0x00)
struct F*1f9f835af5 {
	bool Flags; // 0x00(0x01)
};

// ScriptStruct Engine.*2ce9edbde1
// Size: 0xd0 (Inherited: 0xa0)
struct F*2ce9edbde1 : F*6bdd685936 {
	struct FRotator Rotation; // 0x98(0x0c)
	float Distance; // 0xa4(0x04)
	float Height; // 0xa8(0x04)
	bool *7c0cc1b20f; // 0xac(0x01)
	struct U*1ba2d2b086* *24431390b7; // 0xb0(0x08)
	struct UCurveFloat* *e20f1393ef; // 0xb8(0x08)
	char pad_C5[0xb]; // 0xc5(0x0b)
};

// ScriptStruct Engine.*6bdd685936
// Size: 0xa0 (Inherited: 0x00)
struct F*6bdd685936 {
	char pad_0[0x10]; // 0x00(0x10)
	uint16 Priority; // 0x10(0x02)
	uint16 *4fa822f2ad; // 0x12(0x02)
	enum class ERootMotionAccumulateMode *c10d30c95c; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName *713527eb11; // 0x18(0x08)
	float StartTime; // 0x20(0x04)
	float CurrentTime; // 0x24(0x04)
	float *efc0253e49; // 0x28(0x04)
	float Duration; // 0x2c(0x04)
	struct F*f4784cd95d Status; // 0x30(0x01)
	struct F*1f9f835af5 Settings; // 0x31(0x01)
	bool *e357699300; // 0x32(0x01)
	char pad_33[0xd]; // 0x33(0x0d)
	struct F*f882669a6a *8ac2e140c6; // 0x40(0x40)
	struct F*4eb471e597 *10f3f57d12; // 0x80(0x14)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.*4eb471e597
// Size: 0x14 (Inherited: 0x00)
struct F*4eb471e597 {
	enum class *2aeaa93612 Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *9387b8acf0; // 0x04(0x0c)
	float *e8c3a460d8; // 0x10(0x04)
};

// ScriptStruct Engine.*f4784cd95d
// Size: 0x01 (Inherited: 0x00)
struct F*f4784cd95d {
	bool Flags; // 0x00(0x01)
};

// ScriptStruct Engine.*0cb9bdaab7
// Size: 0xd0 (Inherited: 0xa0)
struct F*0cb9bdaab7 : F*6bdd685936 {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector *bed03540a3; // 0xa4(0x0c)
	struct FVector TargetLocation; // 0xb0(0x0c)
	bool *b73b187911; // 0xbc(0x01)
	struct U*1ba2d2b086* *24431390b7; // 0xc0(0x08)
	struct UCurveFloat* *e20f1393ef; // 0xc8(0x08)
};

// ScriptStruct Engine.*a874bfea2d
// Size: 0xc0 (Inherited: 0xa0)
struct F*a874bfea2d : F*6bdd685936 {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector TargetLocation; // 0xa4(0x0c)
	bool *b73b187911; // 0xb0(0x01)
	struct U*1ba2d2b086* *24431390b7; // 0xb8(0x08)
};

// ScriptStruct Engine.*9489de1c22
// Size: 0xe0 (Inherited: 0xa0)
struct F*9489de1c22 : F*6bdd685936 {
	struct FVector Location; // 0x98(0x0c)
	struct AActor* *e178751a46; // 0xa8(0x08)
	float Radius; // 0xb0(0x04)
	float Strength; // 0xb4(0x04)
	bool *ccedf3b8af; // 0xb8(0x01)
	bool *54b67c7c4e; // 0xb9(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct UCurveFloat* *4069f440f9; // 0xc0(0x08)
	struct UCurveFloat* *4c42e8bfef; // 0xc8(0x08)
	bool *3d80ceba3d; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FRotator *e674703710; // 0xd4(0x0c)
};

// ScriptStruct Engine.*ab8e30d809
// Size: 0xb0 (Inherited: 0xa0)
struct F*ab8e30d809 : F*6bdd685936 {
	struct FVector force; // 0x98(0x0c)
	struct UCurveFloat* *4c42e8bfef; // 0xa8(0x08)
};

// ScriptStruct Engine.*c6f03cdc0f
// Size: 0x48 (Inherited: 0x00)
struct F*c6f03cdc0f {
	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector_NetQuantize100 Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	bool *ec2d3242cd; // 0x28(0x01)
	bool *c74ecf1119; // 0x29(0x01)
	bool *13f0ed6114; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct UPrimitiveComponent* *0bbc8e06ca; // 0x30(0x08)
	struct FVector *bba001c3c6; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.*f1a5265894
// Size: 0x168 (Inherited: 0x00)
struct F*f1a5265894 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*e60dc8ad15 RootMotion; // 0x08(0x160)
};

// ScriptStruct Engine.*e60dc8ad15
// Size: 0x160 (Inherited: 0x00)
struct F*e60dc8ad15 {
	bool *eedbc91ee9; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
	float Position; // 0x10(0x04)
	struct FVector_NetQuantize100 Location; // 0x14(0x0c)
	struct FRotator Rotation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UPrimitiveComponent* MovementBase; // 0x30(0x08)
	struct FName *2e6d683917; // 0x38(0x08)
	bool *22d91d98e1; // 0x40(0x01)
	bool *c74ecf1119; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FRootMotionSourceGroup *4177eaf855; // 0x48(0x100)
	struct FVector_NetQuantize10 Acceleration; // 0x148(0x0c)
	struct FVector_NetQuantize10 LinearVelocity; // 0x154(0x0c)
};

// ScriptStruct Engine.*d4bdb64586
// Size: 0x08 (Inherited: 0x00)
struct F*d4bdb64586 {
	int32 *6bffaa557c; // 0x00(0x04)
	int32 Num; // 0x04(0x04)
};

// ScriptStruct Engine.*88ee8c31b8
// Size: 0x10 (Inherited: 0x00)
struct F*88ee8c31b8 {
	struct FName *9dd87a470a; // 0x00(0x08)
	int32 *dff0d0d132; // 0x08(0x04)
	int32 InstanceId; // 0x0c(0x04)
};

// ScriptStruct Engine.*aa275c74a9
// Size: 0x40 (Inherited: 0x00)
struct F*aa275c74a9 {
	struct FVector4 *4fefd9c24f; // 0x00(0x10)
	struct FVector4 *d4d4214283; // 0x10(0x10)
	struct FVector4 *16bcacb2b2; // 0x20(0x10)
	struct FVector4 *e9865f6f27; // 0x30(0x10)
};

// ScriptStruct Engine.*be14cd1088
// Size: 0x04 (Inherited: 0x00)
struct F*be14cd1088 {
	int32 RandomSeed; // 0x00(0x04)
};

// ScriptStruct Engine.*c7095221f3
// Size: 0x50 (Inherited: 0x00)
struct F*c7095221f3 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.*6d24ae0360
// Size: 0xf8 (Inherited: 0x00)
struct F*6d24ae0360 {
	char pad_0[0xf8]; // 0x00(0xf8)
};

// ScriptStruct Engine.*d3ffbed782
// Size: 0x18 (Inherited: 0x00)
struct F*d3ffbed782 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*e31b62c6d7
// Size: 0x02 (Inherited: 0x00)
struct F*e31b62c6d7 {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Engine.*58d120ed00
// Size: 0x18 (Inherited: 0x00)
struct F*58d120ed00 {
	struct FName SourceBoneName; // 0x00(0x08)
	struct FName TargetBoneName; // 0x08(0x08)
	struct FName *71e4e0f78a; // 0x10(0x08)
};

// ScriptStruct Engine.*6d4e23887b
// Size: 0x18 (Inherited: 0x00)
struct F*6d4e23887b {
	struct FName GroupName; // 0x00(0x08)
	struct TArray<struct FName> SlotNames; // 0x08(0x10)
};

// ScriptStruct Engine.*ffaa5a8054
// Size: 0x18 (Inherited: 0x00)
struct F*ffaa5a8054 {
	struct URig* Rig; // 0x00(0x08)
	struct TArray<struct F*57e23d9469> *c0fd8f0b4b; // 0x08(0x10)
};

// ScriptStruct Engine.*57e23d9469
// Size: 0x10 (Inherited: 0x00)
struct F*57e23d9469 {
	struct FName NodeName; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
};

// ScriptStruct Engine.*039ba1271d
// Size: 0x10 (Inherited: 0x00)
struct F*039ba1271d {
	struct TArray<struct FName> BonesToRemove; // 0x00(0x10)
};

// ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x00)
struct FReferencePose {
	struct FName PoseName; // 0x00(0x08)
	struct TArray<struct FTransform> ReferencePose; // 0x08(0x10)
};

// ScriptStruct Engine.*7c53f3877f
// Size: 0x10 (Inherited: 0x00)
struct F*7c53f3877f {
	struct FName Name; // 0x00(0x08)
	int32 ParentIndex; // 0x08(0x04)
	enum class EBoneTranslationRetargetingMode *cdece37da4; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*6d20fa54b7
// Size: 0x20 (Inherited: 0x00)
struct F*6d20fa54b7 {
	struct TArray<int32> *8a2771a8e4; // 0x00(0x10)
	struct TArray<int32> *c6b5e8784c; // 0x10(0x10)
};

// ScriptStruct Engine.*f186ee216f
// Size: 0x470 (Inherited: 0x20)
struct F*f186ee216f : FAnimCurveBase {
	struct FVectorCurve *e3d474c01b; // 0x20(0x170)
	struct FVectorCurve *457b381550; // 0x190(0x170)
	struct FVectorCurve *5b13d24445; // 0x300(0x170)
};

// ScriptStruct Engine.VectorCurve
// Size: 0x170 (Inherited: 0x20)
struct FVectorCurve : FAnimCurveBase {
	struct FRichCurve *87b8344682[0x03]; // 0x20(0x150)
};

// ScriptStruct Engine.*301356f094
// Size: 0x10 (Inherited: 0x00)
struct F*301356f094 {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float StartPosition; // 0x08(0x04)
	float *715fba4947; // 0x0c(0x04)
};

// ScriptStruct Engine.*984185b0c1
// Size: 0x1e0 (Inherited: 0x00)
struct F*984185b0c1 {
	struct UAnimMontage* Montage; // 0x00(0x08)
	char pad_8[0xd8]; // 0x08(0xd8)
	bool *46bc8732cd; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float *1c057839fa; // 0xe4(0x04)
	char pad_E8[0x28]; // 0xe8(0x28)
	struct TArray<int32> *30163812a8; // 0x110(0x10)
	struct TArray<int32> *7bf7c99dcd; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
	struct TArray<struct FAnimNotifyEvent> *68f9b88e69; // 0x140(0x10)
	float Position; // 0x150(0x04)
	float PlayRate; // 0x154(0x04)
	struct FAlphaBlend Blend; // 0x158(0x38)
	char pad_190[0x20]; // 0x190(0x20)
	int32 *11c7d46c58; // 0x1b0(0x04)
	char pad_1B4[0x2c]; // 0x1b4(0x2c)
};

// ScriptStruct Engine.*4c8082789d
// Size: 0x04 (Inherited: 0x00)
struct F*4c8082789d {
	char bGroup0 : 1; // 0x00(0x01)
	char bGroup1 : 1; // 0x00(0x01)
	char bGroup2 : 1; // 0x00(0x01)
	char bGroup3 : 1; // 0x00(0x01)
	char bGroup4 : 1; // 0x00(0x01)
	char bGroup5 : 1; // 0x00(0x01)
	char bGroup6 : 1; // 0x00(0x01)
	char bGroup7 : 1; // 0x00(0x01)
	char bGroup8 : 1; // 0x01(0x01)
	char bGroup9 : 1; // 0x01(0x01)
	char bGroup10 : 1; // 0x01(0x01)
	char bGroup11 : 1; // 0x01(0x01)
	char bGroup12 : 1; // 0x01(0x01)
	char bGroup13 : 1; // 0x01(0x01)
	char bGroup14 : 1; // 0x01(0x01)
	char bGroup15 : 1; // 0x01(0x01)
	char bGroup16 : 1; // 0x02(0x01)
	char bGroup17 : 1; // 0x02(0x01)
	char bGroup18 : 1; // 0x02(0x01)
	char bGroup19 : 1; // 0x02(0x01)
	char bGroup20 : 1; // 0x02(0x01)
	char bGroup21 : 1; // 0x02(0x01)
	char bGroup22 : 1; // 0x02(0x01)
	char bGroup23 : 1; // 0x02(0x01)
	char bGroup24 : 1; // 0x03(0x01)
	char bGroup25 : 1; // 0x03(0x01)
	char bGroup26 : 1; // 0x03(0x01)
	char bGroup27 : 1; // 0x03(0x01)
	char bGroup28 : 1; // 0x03(0x01)
	char bGroup29 : 1; // 0x03(0x01)
	char bGroup30 : 1; // 0x03(0x01)
	char bGroup31 : 1; // 0x03(0x01)
};

// ScriptStruct Engine.*d33504fa9e
// Size: 0x58 (Inherited: 0x50)
struct F*d33504fa9e : F*83ad5ff7d4 {
	enum class ETickingGroup *dd7d84feff; // 0x08(0x01)
	enum class ETickingGroup *a83d44e470; // 0x09(0x01)
	char *c10f697e3c : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *5363d98d66 : 1; // 0x0c(0x01)
	char *2015f44ce1 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*771b3804ba
// Size: 0x98 (Inherited: 0x00)
struct F*771b3804ba {
	char bBlockingHit : 1; // 0x00(0x01)
	char bWalkableFloor : 1; // 0x00(0x01)
	char bLineTrace : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FloorDist; // 0x04(0x04)
	float LineDist; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FHitResult HitResult; // 0x10(0x88)
};

// ScriptStruct Engine.*f0729c9526
// Size: 0x1c (Inherited: 0x14)
struct F*f0729c9526 : F*763bb5ca58 {
	float *340163087b; // 0x14(0x04)
	enum class *b5888d5fa8 *f6b2aa609c; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.*763bb5ca58
// Size: 0x14 (Inherited: 0x00)
struct F*763bb5ca58 {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float Restitution; // 0x08(0x04)
	float ContactDistance; // 0x0c(0x04)
	char bSoftConstraint : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.*c4abdfcece
// Size: 0x20 (Inherited: 0x14)
struct F*c4abdfcece : F*763bb5ca58 {
	float *bd19c9566a; // 0x14(0x04)
	float *86a654ccf2; // 0x18(0x04)
	enum class *b5888d5fa8 *0fcd7d7cff; // 0x1c(0x01)
	enum class *b5888d5fa8 *6607498979; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Engine.*6286a7d297
// Size: 0x1c (Inherited: 0x14)
struct F*6286a7d297 : F*763bb5ca58 {
	float Limit; // 0x14(0x04)
	enum class *d4f3ed8c24 *5c7ebae4a3; // 0x18(0x01)
	enum class *d4f3ed8c24 *db16cf8076; // 0x19(0x01)
	enum class *d4f3ed8c24 *42aee0508c; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.*a4cdab962c
// Size: 0x4c (Inherited: 0x00)
struct F*a4cdab962c {
	struct F*19709908c0 *81b4a0e3e2; // 0x00(0x10)
	struct F*19709908c0 *e275c46da3; // 0x10(0x10)
	struct F*19709908c0 *f857db9929; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0x0c)
	struct FVector AngularVelocityTarget; // 0x3c(0x0c)
	enum class EAngularDriveMode AngularDriveMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.*19709908c0
// Size: 0x10 (Inherited: 0x00)
struct F*19709908c0 {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float MaxForce; // 0x08(0x04)
	char *83143f35fa : 1; // 0x0c(0x01)
	char *3aeda0fe5a : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*81a6141233
// Size: 0x4c (Inherited: 0x00)
struct F*81a6141233 {
	struct FVector PositionTarget; // 0x00(0x0c)
	struct FVector VelocityTarget; // 0x0c(0x0c)
	struct F*19709908c0 *a112d40b22; // 0x18(0x10)
	struct F*19709908c0 *e60defa26e; // 0x28(0x10)
	struct F*19709908c0 *bd57ec0b17; // 0x38(0x10)
	char *83143f35fa : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.ConstraintInstance
// Size: 0x1f0 (Inherited: 0x00)
struct FConstraintInstance {
	char pad_0[0x18]; // 0x00(0x18)
	struct FName *e2a8b1dea3; // 0x18(0x08)
	struct FName *6155e362ca; // 0x20(0x08)
	struct FName *9b7664238c; // 0x28(0x08)
	struct FVector *bff5670b82; // 0x30(0x0c)
	struct FVector *9bff754a31; // 0x3c(0x0c)
	struct FVector *330c806e3b; // 0x48(0x0c)
	struct FVector *9676d3c1c6; // 0x54(0x0c)
	struct FVector *b48d39633b; // 0x60(0x0c)
	struct FVector *2ee43257ea; // 0x6c(0x0c)
	struct FRotator *09cd111f46; // 0x78(0x0c)
	char *639058d7c3 : 1; // 0x84(0x01)
	char pad_84_1 : 7; // 0x84(0x01)
	char pad_85[0x7]; // 0x85(0x07)
	struct F*7fa5281433 *076fa80f33; // 0x8c(0x104)
	char pad_190[0x60]; // 0x190(0x60)
};

// ScriptStruct Engine.*7fa5281433
// Size: 0x104 (Inherited: 0x00)
struct F*7fa5281433 {
	float ProjectionLinearTolerance; // 0x00(0x04)
	float ProjectionAngularTolerance; // 0x04(0x04)
	float *934f3713fc; // 0x08(0x04)
	float *85cce9ab6e; // 0x0c(0x04)
	struct F*6286a7d297 LinearLimit; // 0x10(0x1c)
	struct F*c4abdfcece *ac6c3ad847; // 0x2c(0x20)
	struct F*f0729c9526 TwistLimit; // 0x4c(0x1c)
	struct F*81a6141233 *0e24061e2a; // 0x68(0x4c)
	struct F*a4cdab962c *98df0a4710; // 0xb4(0x4c)
	char *bea543a7e6 : 1; // 0x100(0x01)
	char bEnableProjection : 1; // 0x100(0x01)
	char bAngularBreakable : 1; // 0x100(0x01)
	char *792c0b60b3 : 1; // 0x100(0x01)
	char pad_100_4 : 4; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
};

// ScriptStruct Engine.*a8d9e92905
// Size: 0x28 (Inherited: 0x00)
struct F*a8d9e92905 {
	struct FName *03a5f6b863; // 0x00(0x08)
	char bIsLocalSimulation : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float OrientationStrength; // 0x0c(0x04)
	float AngularVelocityStrength; // 0x10(0x04)
	float PositionStrength; // 0x14(0x04)
	float VelocityStrength; // 0x18(0x04)
	float MaxLinearForce; // 0x1c(0x04)
	float MaxAngularForce; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*4ac06f229c
// Size: 0x08 (Inherited: 0x00)
struct F*4ac06f229c {
	float Height; // 0x00(0x04)
	float Density; // 0x04(0x04)
};

// ScriptStruct Engine.*662319d9f9
// Size: 0x2c (Inherited: 0x00)
struct F*662319d9f9 {
	float DensityHeight; // 0x00(0x04)
	float DecayHeight; // 0x04(0x04)
	int32 MaxScatteringOrder; // 0x08(0x04)
	int32 *e28d97d4bc; // 0x0c(0x04)
	int32 *d0fe9f70a8; // 0x10(0x04)
	int32 *317e6cb4d1; // 0x14(0x04)
	int32 *1d9711774d; // 0x18(0x04)
	int32 InscatterAltitudeSampleNum; // 0x1c(0x04)
	int32 *0c14f34486; // 0x20(0x04)
	int32 *fbefaf2924; // 0x24(0x04)
	int32 *0dadc5cf45; // 0x28(0x04)
};

// ScriptStruct Engine.*a36ecf2112
// Size: 0xa8 (Inherited: 0x00)
struct F*a36ecf2112 {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x10(0x78)
	enum class EAttenuationShape AttenuationShape; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float dBAttenuationAtMax; // 0x8c(0x04)
	struct FVector AttenuationShapeExtents; // 0x90(0x0c)
	float ConeOffset; // 0x9c(0x04)
	float FalloffDistance; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x130 (Inherited: 0xa8)
struct FSoundAttenuationSettings : F*a36ecf2112 {
	char bAttenuate : 1; // 0xa8(0x01)
	char bSpatialize : 1; // 0xa8(0x01)
	char bAttenuateWithLPF : 1; // 0xa8(0x01)
	char bEnableListenerFocus : 1; // 0xa8(0x01)
	char bEnableOcclusion : 1; // 0xa8(0x01)
	char bUseComplexCollisionForOcclusion : 1; // 0xa8(0x01)
	char pad_A8_6 : 2; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class *4a289fcd42 DistanceType; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float OmniRadius; // 0xb0(0x04)
	float StereoSpread; // 0xb4(0x04)
	enum class *7a2100467d SpatializationAlgorithm; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct U*dd82106d9d* SpatializationPluginSettings; // 0xc0(0x08)
	float RadiusMin; // 0xc8(0x04)
	float RadiusMax; // 0xcc(0x04)
	float LPFRadiusMin; // 0xd0(0x04)
	float LPFRadiusMax; // 0xd4(0x04)
	float LPFFrequencyAtMin; // 0xd8(0x04)
	float LPFFrequencyAtMax; // 0xdc(0x04)
	float FocusAzimuth; // 0xe0(0x04)
	float NonFocusAzimuth; // 0xe4(0x04)
	float FocusDistanceScale; // 0xe8(0x04)
	float NonFocusDistanceScale; // 0xec(0x04)
	float FocusPriorityScale; // 0xf0(0x04)
	float NonFocusPriorityScale; // 0xf4(0x04)
	float FocusVolumeAttenuation; // 0xf8(0x04)
	float NonFocusVolumeAttenuation; // 0xfc(0x04)
	enum class ECollisionChannel OcclusionTraceChannel; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float OcclusionLowPassFilterFrequency; // 0x104(0x04)
	float OcclusionVolumeAttenuation; // 0x108(0x04)
	float OcclusionInterpolationTime; // 0x10c(0x04)
	struct U*c56adf0d9d* OcclusionPluginSettings; // 0x110(0x08)
	struct U*7ac139f02b* ReverbPluginSettings; // 0x118(0x08)
	float ReverbWetLevelMin; // 0x120(0x04)
	float ReverbWetLevelMax; // 0x124(0x04)
	float ReverbDistanceMin; // 0x128(0x04)
	float ReverbDistanceMax; // 0x12c(0x04)
};

// ScriptStruct Engine.*71fadb6221
// Size: 0x20 (Inherited: 0x00)
struct F*71fadb6221 {
	struct FName ParamName; // 0x00(0x08)
	float FloatParam; // 0x08(0x04)
	bool BoolParam; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32 IntParam; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWaveParam; // 0x18(0x08)
};

// ScriptStruct Engine.*22fe4d4845
// Size: 0x08 (Inherited: 0x00)
struct F*22fe4d4845 {
	float Height; // 0x00(0x04)
	float Density; // 0x04(0x04)
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xa8 (Inherited: 0xa8)
struct FForceFeedbackAttenuationSettings : F*a36ecf2112 {
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x08(0x01)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x10(0x78)
	enum class EAttenuationShape AttenuationShape; // 0x88(0x01)
	float dBAttenuationAtMax; // 0x8c(0x04)
	struct FVector AttenuationShapeExtents; // 0x90(0x0c)
	float ConeOffset; // 0x9c(0x04)
	float FalloffDistance; // 0xa0(0x04)
};

// ScriptStruct Engine.*56ae635e0d
// Size: 0x80 (Inherited: 0x00)
struct F*56ae635e0d {
	struct FMatrix Transform; // 0x00(0x40)
	struct FSplineParams SplineParams; // 0x40(0x38)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Engine.SplineParams
// Size: 0x38 (Inherited: 0x00)
struct FSplineParams {
	struct FVector *1add5c435c; // 0x00(0x0c)
	struct FVector *530763e958; // 0x0c(0x0c)
	float *3ddec08ed9; // 0x18(0x04)
	struct FVector *36db4b3392; // 0x1c(0x0c)
	struct FVector *f818314904; // 0x28(0x0c)
	float *a21fcde602; // 0x34(0x04)
};

// ScriptStruct Engine.*feddb3650a
// Size: 0x28 (Inherited: 0x00)
struct F*feddb3650a {
	struct FStringAssetReference Template; // 0x00(0x10)
	float Probability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*24ee776f52> *d889f9e8db; // 0x18(0x10)
};

// ScriptStruct Engine.*24ee776f52
// Size: 0x0c (Inherited: 0x00)
struct F*24ee776f52 {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	float Step; // 0x08(0x04)
};

// ScriptStruct Engine.*0cc15d87bf
// Size: 0x08 (Inherited: 0x00)
struct F*0cc15d87bf {
	float CellSize; // 0x00(0x04)
	float MaxRadius; // 0x04(0x04)
};

// ScriptStruct Engine.*8558347a38
// Size: 0x18 (Inherited: 0x00)
struct F*8558347a38 {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct TArray<uint16> InstanceIndices; // 0x08(0x10)
};

// ScriptStruct Engine.*3f1ec42700
// Size: 0x24 (Inherited: 0x00)
struct F*3f1ec42700 {
	struct FVector Center; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FVector Extent; // 0x18(0x0c)
};

// ScriptStruct Engine.*51971af3cb
// Size: 0x28 (Inherited: 0x00)
struct F*51971af3cb {
	struct FVector Position; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	float PointSize; // 0x1c(0x04)
	float *9fa5332528; // 0x20(0x04)
	bool *1241f0cb7a; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.*537e677394
// Size: 0x34 (Inherited: 0x00)
struct F*537e677394 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	float *9fa5332528; // 0x2c(0x04)
	bool *1241f0cb7a; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Engine.*001d4a8b3e
// Size: 0x28 (Inherited: 0x00)
struct F*001d4a8b3e {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x08(0x08)
	char bSizeIsInScreenSpace : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BaseSizeX; // 0x14(0x04)
	float BaseSizeY; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x08)
};

// ScriptStruct Engine.*cbe45bb4a6
// Size: 0x20 (Inherited: 0x00)
struct F*cbe45bb4a6 {
	struct TArray<bool> *801aaa1534; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*74ac78a0e1
// Size: 0x28 (Inherited: 0x00)
struct F*74ac78a0e1 {
	int32 Bones[0x08]; // 0x00(0x20)
	bool Weights[0x08]; // 0x20(0x08)
};

// ScriptStruct Engine.*030036a724
// Size: 0x18 (Inherited: 0x00)
struct F*030036a724 {
	struct UAnimationAsset* AnimToPlay; // 0x00(0x08)
	char bSavedLooping : 1; // 0x08(0x01)
	char bSavedPlaying : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SavedPosition; // 0x0c(0x04)
	float SavedPlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*811f5bbfa9
// Size: 0x58 (Inherited: 0x50)
struct F*811f5bbfa9 : F*83ad5ff7d4 {
	enum class ETickingGroup *dd7d84feff; // 0x08(0x01)
	enum class ETickingGroup *a83d44e470; // 0x09(0x01)
	char *c10f697e3c : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *5363d98d66 : 1; // 0x0c(0x01)
	char *2015f44ce1 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*b1b73c4a56
// Size: 0x58 (Inherited: 0x50)
struct F*b1b73c4a56 : F*83ad5ff7d4 {
	enum class ETickingGroup *dd7d84feff; // 0x08(0x01)
	enum class ETickingGroup *a83d44e470; // 0x09(0x01)
	char *c10f697e3c : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *5363d98d66 : 1; // 0x0c(0x01)
	char *2015f44ce1 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*08d1cc2639
// Size: 0x58 (Inherited: 0x00)
struct F*08d1cc2639 {
	struct FVector StartPos; // 0x00(0x0c)
	struct FVector StartTangent; // 0x0c(0x0c)
	struct FVector2D StartScale; // 0x18(0x08)
	float StartRoll; // 0x20(0x04)
	struct FVector2D StartOffset; // 0x24(0x08)
	struct FVector EndPos; // 0x2c(0x0c)
	struct FVector EndTangent; // 0x38(0x0c)
	struct FVector2D EndScale; // 0x44(0x08)
	float EndRoll; // 0x4c(0x04)
	struct FVector2D EndOffset; // 0x50(0x08)
};

// ScriptStruct Engine.*be7798eda9
// Size: 0x64 (Inherited: 0x00)
struct F*be7798eda9 {
	struct F*08d1cc2639 *08d1cc2639; // 0x00(0x58)
	struct FVector SplineUpDir; // 0x58(0x0c)
};

// ScriptStruct Engine.*379f451670
// Size: 0x08 (Inherited: 0x00)
struct F*379f451670 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*75ea8e2bf3
// Size: 0x50 (Inherited: 0x00)
struct F*75ea8e2bf3 {
	struct FMatrix Transform; // 0x00(0x40)
	struct FVector4 CustomData; // 0x40(0x10)
};

// ScriptStruct Engine.*7baf937463
// Size: 0x28 (Inherited: 0x00)
struct F*7baf937463 {
	struct FVector *afaeb47a7f; // 0x00(0x0c)
	int32 *9a0fae942d; // 0x0c(0x04)
	struct FVector *f22ef857b0; // 0x10(0x0c)
	int32 *3ae575ef70; // 0x1c(0x04)
	int32 *a298e8745c; // 0x20(0x04)
	int32 *88be593160; // 0x24(0x04)
};

// ScriptStruct Engine.PerPlatformFloat
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformFloat {
	float Default; // 0x00(0x04)
};

// ScriptStruct Engine.PerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformInt {
	int32 Default; // 0x00(0x04)
};

// ScriptStruct Engine.*7cd2c10055
// Size: 0x18 (Inherited: 0x00)
struct F*7cd2c10055 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*ff354e9461
// Size: 0x90 (Inherited: 0x00)
struct F*ff354e9461 {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.SplinePoint
// Size: 0x44 (Inherited: 0x00)
struct FSplinePoint {
	float InputKey; // 0x00(0x04)
	struct FVector Position; // 0x04(0x0c)
	struct FVector ArriveTangent; // 0x10(0x0c)
	struct FVector LeaveTangent; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	struct FVector Scale; // 0x34(0x0c)
	enum class ESplinePointType Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.*a821055bfd
// Size: 0x20 (Inherited: 0x00)
struct F*a821055bfd {
	struct UObject* Obj; // 0x00(0x08)
	struct UClass* *c0275a19d9; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*8f41bd28ce
// Size: 0x18 (Inherited: 0x00)
struct F*8f41bd28ce {
	struct FString ShowFlagName; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.Timeline
// Size: 0xe0 (Inherited: 0x00)
struct FTimeline {
	enum class *3519cdbfbf *11d5ce723d; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Length; // 0x04(0x04)
	char bLooping : 1; // 0x08(0x01)
	char *c74475af73 : 1; // 0x08(0x01)
	char *46bc8732cd : 1; // 0x08(0x01)
	char pad_8_3 : 5; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float PlayRate; // 0x0c(0x04)
	float Position; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*228abc3be6> Events; // 0x18(0x10)
	struct TArray<struct F*c6f44e9f12> *ad6691efb2; // 0x28(0x10)
	struct TArray<struct F*4bcaa1bae2> *5fe1233d9b; // 0x38(0x10)
	struct TArray<struct F*4ca1a89962> *a478659408; // 0x48(0x10)
	DelegateProperty *56844635aa; // 0x58(0x10)
	DelegateProperty *a8c4ae7494; // 0x68(0x10)
	char pad_78[0x48]; // 0x78(0x48)
	struct UObject* *420b43ca0d; // 0xc0(0x08)
	struct FName *a679def82b; // 0xc8(0x08)
	struct UProperty* *333f947942; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// ScriptStruct Engine.*4ca1a89962
// Size: 0x70 (Inherited: 0x00)
struct F*4ca1a89962 {
	struct U*1fa4fa0482* *de4ca4ac37; // 0x00(0x08)
	DelegateProperty *1c2c46b87a; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *063e0b78a3; // 0x20(0x08)
	struct UStructProperty* *707de291e8; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*4bcaa1bae2
// Size: 0x70 (Inherited: 0x00)
struct F*4bcaa1bae2 {
	struct UCurveFloat* *2d625a83c8; // 0x00(0x08)
	DelegateProperty *1c2c46b87a; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *11789e4e37; // 0x20(0x08)
	struct UFloatProperty* *b44e7ac11a; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*c6f44e9f12
// Size: 0x70 (Inherited: 0x00)
struct F*c6f44e9f12 {
	struct U*1ba2d2b086* VectorCurve; // 0x00(0x08)
	DelegateProperty *1c2c46b87a; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *12b51ddb31; // 0x20(0x08)
	struct UStructProperty* *79fa75e555; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*228abc3be6
// Size: 0x18 (Inherited: 0x00)
struct F*228abc3be6 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	DelegateProperty *5d320ba8b8; // 0x08(0x10)
};

// ScriptStruct Engine.*98933d9a72
// Size: 0x38 (Inherited: 0x00)
struct F*98933d9a72 {
	struct TArray<bool> *6c8345b9c4; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float *801e25c6b9[0x03]; // 0x20(0x0c)
	float Ranges[0x03]; // 0x2c(0x0c)
};

// ScriptStruct Engine.*c838f5e17a
// Size: 0x18 (Inherited: 0x00)
struct F*c838f5e17a {
	struct FName CurveName; // 0x00(0x08)
	struct TArray<float> *8160274ab0; // 0x08(0x10)
};

// ScriptStruct Engine.*6619629df9
// Size: 0x20 (Inherited: 0x00)
struct F*6619629df9 {
	struct TArray<struct FVector> ScaleKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*6932f4b3b7
// Size: 0x20 (Inherited: 0x00)
struct F*6932f4b3b7 {
	struct TArray<struct FQuat> *1b92557d4b; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*a3bea3f2d4
// Size: 0x20 (Inherited: 0x00)
struct F*a3bea3f2d4 {
	struct TArray<struct FVector> *bbe54f4e15; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*8d35e74c36
// Size: 0x04 (Inherited: 0x00)
struct F*8d35e74c36 {
	int32 *00e137269d; // 0x00(0x04)
};

// ScriptStruct Engine.*67c6207e60
// Size: 0x20 (Inherited: 0x00)
struct F*67c6207e60 {
	struct TArray<struct F*6b8667cb9f> *3ff04a735e; // 0x00(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// ScriptStruct Engine.*6b8667cb9f
// Size: 0x30 (Inherited: 0x00)
struct F*6b8667cb9f {
	struct TArray<struct FVector> *bbe54f4e15; // 0x00(0x10)
	struct TArray<struct FQuat> *1b92557d4b; // 0x10(0x10)
	struct TArray<struct FVector> ScaleKeys; // 0x20(0x10)
};

// ScriptStruct Engine.*727ca29295
// Size: 0x20 (Inherited: 0x00)
struct F*727ca29295 {
	struct FBoneReference BoneReference; // 0x00(0x18)
	float *bbcaa19b5c; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*fa4617aa50
// Size: 0x1c (Inherited: 0x00)
struct F*fa4617aa50 {
	struct F*fff699ec0f *55351ee52d; // 0x00(0x18)
	float BlendWeight; // 0x18(0x04)
};

// ScriptStruct Engine.*fff699ec0f
// Size: 0x18 (Inherited: 0x00)
struct F*fff699ec0f {
	int32 Indices[0x03]; // 0x00(0x0c)
	float Weights[0x03]; // 0x0c(0x0c)
};

// ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x00)
struct FBlendSample {
	struct UAnimSequence* Animation; // 0x00(0x08)
	struct FVector *9baaa6da4e; // 0x08(0x0c)
	float *5d1245bca9; // 0x14(0x04)
};

// ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x00)
struct FBlendParameter {
	struct FString DisplayName; // 0x00(0x10)
	float Min; // 0x10(0x04)
	float Max; // 0x14(0x04)
	int32 GridNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InterpolationParameter
// Size: 0x08 (Inherited: 0x00)
struct FInterpolationParameter {
	float *593aab89de; // 0x00(0x04)
	enum class *8754b851ea InterpolationType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*64d360f6b1
// Size: 0x90 (Inherited: 0x00)
struct F*64d360f6b1 {
	struct TArray<struct FSmartName> *ca29b8b690; // 0x00(0x10)
	struct TArray<struct F*50b1352c54> Poses; // 0x10(0x10)
	struct TArray<struct FName> Tracks; // 0x20(0x10)
	struct TMap<struct FName, int32> *87813fd4cf; // 0x30(0x50)
	struct TArray<struct FAnimCurveBase> Curves; // 0x80(0x10)
};

// ScriptStruct Engine.*50b1352c54
// Size: 0x30 (Inherited: 0x00)
struct F*50b1352c54 {
	struct TArray<struct FTransform> *b3617be4a5; // 0x00(0x10)
	struct TArray<bool> *f11558ae92; // 0x10(0x10)
	struct TArray<float> *573876ea3f; // 0x20(0x10)
};

// ScriptStruct Engine.*426a5c2b9f
// Size: 0x30 (Inherited: 0x00)
struct F*426a5c2b9f {
	struct FName *24e741c7a6; // 0x00(0x08)
	int32 *a0901c443a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*28c0937149> States; // 0x10(0x10)
	struct TArray<struct F*9327fba60d> Transitions; // 0x20(0x10)
};

// ScriptStruct Engine.*9327fba60d
// Size: 0x40 (Inherited: 0x08)
struct F*9327fba60d : F*26097c1394 {
	int32 *16cfb80f58; // 0x08(0x04)
	int32 NextState; // 0x0c(0x04)
	float CrossfadeDuration; // 0x10(0x04)
	int32 *dd98b144ac; // 0x14(0x04)
	int32 *f013c2d5d1; // 0x18(0x04)
	int32 *79d06387a9; // 0x1c(0x04)
	enum class EAlphaBlendOption BlendMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UCurveFloat* CustomCurve; // 0x28(0x08)
	struct UBlendProfile* BlendProfile; // 0x30(0x08)
	enum class *4f772ffe9b LogicType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.*26097c1394
// Size: 0x08 (Inherited: 0x00)
struct F*26097c1394 {
	struct FName StateName; // 0x00(0x08)
};

// ScriptStruct Engine.*28c0937149
// Size: 0x48 (Inherited: 0x00)
struct F*28c0937149 {
	struct FName StateName; // 0x00(0x08)
	struct TArray<struct F*79e20f7a58> Transitions; // 0x08(0x10)
	int32 *6f7cabfdb8; // 0x18(0x04)
	int32 *dd98b144ac; // 0x1c(0x04)
	int32 *f013c2d5d1; // 0x20(0x04)
	int32 *bb51756317; // 0x24(0x04)
	bool *2910bde461; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32 *9f02e0a273; // 0x2c(0x04)
	struct TArray<int32> *86213870a5; // 0x30(0x10)
	bool *9d013eaff7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Engine.*79e20f7a58
// Size: 0x20 (Inherited: 0x00)
struct F*79e20f7a58 {
	int32 *aa6cb93e69; // 0x00(0x04)
	int32 *d1381ac30f; // 0x04(0x04)
	int32 TransitionIndex; // 0x08(0x04)
	bool *d9251ab7ff; // 0x0c(0x01)
	bool *897e95ea54; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<int32> *7098420b35; // 0x10(0x10)
};

// ScriptStruct Engine.*6fe0a60e41
// Size: 0x28 (Inherited: 0x08)
struct F*6fe0a60e41 : F*26097c1394 {
	struct TArray<struct F*506b39eb1a> Transitions; // 0x08(0x10)
	int32 *6f7cabfdb8; // 0x18(0x04)
	int32 *dd98b144ac; // 0x1c(0x04)
	int32 *f013c2d5d1; // 0x20(0x04)
	int32 *bb51756317; // 0x24(0x04)
};

// ScriptStruct Engine.*506b39eb1a
// Size: 0x10 (Inherited: 0x00)
struct F*506b39eb1a {
	struct FName *c3012b9e76; // 0x00(0x08)
	bool *3e8db8145d; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 TransitionIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*6770045752
// Size: 0x40 (Inherited: 0x00)
struct F*6770045752 {
	enum class EAdditiveAnimationType *6bc40631e5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Engine.*824fb335c8
// Size: 0x28 (Inherited: 0x10)
struct F*824fb335c8 : F*d64f77e51e {
	char pad_10[0x8]; // 0x10(0x08)
	struct TArray<bool> *84346b8d97; // 0x18(0x10)
};

// ScriptStruct Engine.*d64f77e51e
// Size: 0x10 (Inherited: 0x00)
struct F*d64f77e51e {
	struct TArray<struct FTransform> Bones; // 0x00(0x10)
};

// ScriptStruct Engine.*04c2f29f5d
// Size: 0x10 (Inherited: 0x00)
struct F*04c2f29f5d {
	struct TArray<int32> *72dad123e9; // 0x00(0x10)
};

// ScriptStruct Engine.AssetImportInfo
// Size: 0x01 (Inherited: 0x00)
struct FAssetImportInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*141f1c5ea7
// Size: 0x80 (Inherited: 0x00)
struct F*141f1c5ea7 {
	struct FName PrimaryAssetType; // 0x00(0x08)
	struct UClass* AssetBaseClass; // 0x08(0x20)
	struct UClass* *c1b2901b0a; // 0x28(0x08)
	bool bHasBlueprintClasses; // 0x30(0x01)
	bool bIsEditorOnly; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<struct FDirectoryPath> Directories; // 0x38(0x10)
	struct TArray<struct FStringAssetReference> *de33de83f5; // 0x48(0x10)
	struct F*18043fceb7 Rules; // 0x58(0x10)
	struct TArray<struct FString> *451244fc85; // 0x68(0x10)
	bool *da0a241bec; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 *60be067f55; // 0x7c(0x04)
};

// ScriptStruct Engine.*18043fceb7
// Size: 0x10 (Inherited: 0x00)
struct F*18043fceb7 {
	int32 Priority; // 0x00(0x04)
	bool *a0533e1adb; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 ChunkId; // 0x08(0x04)
	enum class EPrimaryAssetCookRule CookRule; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*cf68db82ff
// Size: 0x10 (Inherited: 0x00)
struct F*cf68db82ff {
	struct UAnimationAsset* *5970d93c9a; // 0x00(0x08)
	struct UAnimationAsset* *ba6a38f155; // 0x08(0x08)
};

// ScriptStruct Engine.*60c520701f
// Size: 0x20 (Inherited: 0x00)
struct F*60c520701f {
	struct FFilePath LaunchOnTestmap; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// ScriptStruct Engine.*8c7469d46d
// Size: 0x18 (Inherited: 0x00)
struct F*8c7469d46d {
	struct FStringAssetReference PerformanceTestmap; // 0x00(0x10)
	int32 TestTimer; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*db82af7711
// Size: 0x1f0 (Inherited: 0x00)
struct F*db82af7711 {
	struct FFilePath *05de0148f0; // 0x00(0x10)
	struct F*38ce76cc5b *02827461f5; // 0x10(0x150)
	struct F*9f1fdca4c8 *de3313c359; // 0x160(0x60)
	struct F*4309920246 *ebbcfa4d8e; // 0x1c0(0x20)
	struct FFilePath *1ced5a37a0; // 0x1e0(0x10)
};

// ScriptStruct Engine.*4309920246
// Size: 0x20 (Inherited: 0x00)
struct F*4309920246 {
	struct FDirectoryPath *f92f5c09fa; // 0x00(0x10)
	struct FString *c3c1c0393d; // 0x10(0x10)
};

// ScriptStruct Engine.*9f1fdca4c8
// Size: 0x60 (Inherited: 0x00)
struct F*9f1fdca4c8 {
	struct FFilePath BlueprintAsset; // 0x00(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// ScriptStruct Engine.*38ce76cc5b
// Size: 0x150 (Inherited: 0x00)
struct F*38ce76cc5b {
	struct F*5ee9e552b3 Diffuse; // 0x00(0x20)
	struct F*5ee9e552b3 Normal; // 0x20(0x20)
	struct F*5ee9e552b3 StaticMesh; // 0x40(0x20)
	struct F*5ee9e552b3 ReimportStaticMesh; // 0x60(0x20)
	struct F*5ee9e552b3 BlendShapeMesh; // 0x80(0x20)
	struct F*5ee9e552b3 MorphMesh; // 0xa0(0x20)
	struct F*5ee9e552b3 SkeletalMesh; // 0xc0(0x20)
	struct F*5ee9e552b3 Animation; // 0xe0(0x20)
	struct F*5ee9e552b3 Sound; // 0x100(0x20)
	struct F*5ee9e552b3 SurroundSound; // 0x120(0x20)
	struct TArray<struct F*5ee9e552b3> OtherAssetsToImport; // 0x140(0x10)
};

// ScriptStruct Engine.*5ee9e552b3
// Size: 0x20 (Inherited: 0x00)
struct F*5ee9e552b3 {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct TArray<struct F*93612967af> FactorySettings; // 0x10(0x10)
};

// ScriptStruct Engine.*93612967af
// Size: 0x20 (Inherited: 0x00)
struct F*93612967af {
	struct FString SettingName; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Engine.*843ed1145e
// Size: 0x30 (Inherited: 0x00)
struct F*843ed1145e {
	struct FFilePath *475d2f1110; // 0x00(0x10)
	struct FFilePath *e5744d3d23; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)
};

// ScriptStruct Engine.*fba027fbea
// Size: 0x10 (Inherited: 0x00)
struct F*fba027fbea {
	struct FFilePath DefaultParticleAsset; // 0x00(0x10)
};

// ScriptStruct Engine.*c6045635b7
// Size: 0x30 (Inherited: 0x00)
struct F*c6045635b7 {
	struct FFilePath DefaultMaterialAsset; // 0x00(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// ScriptStruct Engine.*c115a4f143
// Size: 0x38 (Inherited: 0x00)
struct F*c115a4f143 {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct F*93612967af> FactorySettings; // 0x28(0x10)
};

// ScriptStruct Engine.*7fe8ecb7f7
// Size: 0x60 (Inherited: 0x00)
struct F*7fe8ecb7f7 {
	struct FString ToolName; // 0x00(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// ScriptStruct Engine.*476320d38c
// Size: 0x3c (Inherited: 0x00)
struct F*476320d38c {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct Engine.*706cda68b7
// Size: 0x20 (Inherited: 0x00)
struct F*706cda68b7 {
	struct FBoneReference BoneReference; // 0x00(0x18)
	float *60b432006c; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*2d4fa3c3ed
// Size: 0x18 (Inherited: 0x00)
struct F*2d4fa3c3ed {
	struct UObject* *7c257f9cfe; // 0x00(0x08)
	struct FVector2D *60a4702215; // 0x08(0x08)
	float *ee451068d1; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*9d4dc6b86a
// Size: 0x18 (Inherited: 0x00)
struct F*9d4dc6b86a {
	struct UClass* Interface; // 0x00(0x08)
	struct TArray<struct UEdGraph*> Graphs; // 0x08(0x10)
};

// ScriptStruct Engine.*d190d497b4
// Size: 0xf8 (Inherited: 0x00)
struct F*d190d497b4 {
	struct FName VarName; // 0x00(0x08)
	struct FGuid *b68cec8fd8; // 0x08(0x10)
	struct F*c760683241 VarType; // 0x18(0x80)
	struct FString FriendlyName; // 0x98(0x10)
	struct FText Category; // 0xa8(0x18)
	uint64 PropertyFlags; // 0xc0(0x08)
	struct FName *ca95ad6ff0; // 0xc8(0x08)
	enum class ELifetimeCondition *42a776f158; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct F*2eaa2367a5> *f004f939a8; // 0xd8(0x10)
	struct FString DefaultValue; // 0xe8(0x10)
};

// ScriptStruct Engine.*2eaa2367a5
// Size: 0x18 (Inherited: 0x00)
struct F*2eaa2367a5 {
	struct FName *bd515a0826; // 0x00(0x08)
	struct FString *886711ec6c; // 0x08(0x10)
};

// ScriptStruct Engine.*5659db236e
// Size: 0x01 (Inherited: 0x00)
struct F*5659db236e {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*1bfa66bd83
// Size: 0x80 (Inherited: 0x00)
struct F*1bfa66bd83 {
	struct FName PlatformName; // 0x00(0x08)
	bool *c32fa7a5a8; // 0x08(0x01)
	bool *430ed57ebe; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FName> *036dc07f3a; // 0x10(0x10)
	SetProperty ExcludedAssets; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)
};

// ScriptStruct Engine.*eee89c8a68
// Size: 0x18 (Inherited: 0x00)
struct F*eee89c8a68 {
	struct UAnimationAsset* NewAsset; // 0x00(0x08)
	struct FGuid *24d6b5b35f; // 0x08(0x10)
};

// ScriptStruct Engine.*00a65185c9
// Size: 0x18 (Inherited: 0x00)
struct F*00a65185c9 {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 (Inherited: 0x00)
struct FDataTableCategoryHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName ColumnName; // 0x08(0x08)
	struct FName RowContents; // 0x10(0x08)
};

// ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FDataTableRowHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.CustomProfile
// Size: 0x18 (Inherited: 0x00)
struct FCustomProfile {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*f1df7ecfec> CustomResponses; // 0x08(0x10)
};

// ScriptStruct Engine.*14863ddeb2
// Size: 0x18 (Inherited: 0x00)
struct F*14863ddeb2 {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Name; // 0x08(0x08)
	enum class ECollisionResponse DefaultResponse; // 0x10(0x01)
	bool bTraceType; // 0x11(0x01)
	bool bStaticObject; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct Engine.*c681dac543
// Size: 0x60 (Inherited: 0x00)
struct F*c681dac543 {
	struct FName Name; // 0x00(0x08)
	enum class ECollisionEnabled CollisionEnabled; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName ObjectTypeName; // 0x10(0x08)
	struct TArray<struct F*f1df7ecfec> CustomResponses; // 0x18(0x10)
	struct FString HelpMessage; // 0x28(0x10)
	bool bCanModify; // 0x38(0x01)
	char pad_39[0x27]; // 0x39(0x27)
};

// ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x00)
struct FDialogueWaveParameter {
	struct UDialogueWave* DialogueWave; // 0x00(0x08)
	struct FDialogueContext Context; // 0x08(0x18)
};

// ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x00)
struct FDialogueContext {
	struct UDialogueVoice* Speaker; // 0x00(0x08)
	struct TArray<struct UDialogueVoice*> Targets; // 0x08(0x10)
};

// ScriptStruct Engine.*fd003a9ad3
// Size: 0xb8 (Inherited: 0x00)
struct F*fd003a9ad3 {
	struct TArray<struct F*151600c9c5> PathData; // 0x00(0x10)
	struct F*151600c9c5 LastTraceDestination; // 0x10(0x1c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FHitResult HitResult; // 0x30(0x88)
};

// ScriptStruct Engine.*151600c9c5
// Size: 0x1c (Inherited: 0x00)
struct F*151600c9c5 {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Time; // 0x18(0x04)
};

// ScriptStruct Engine.*2445c28642
// Size: 0x130 (Inherited: 0x00)
struct F*2445c28642 {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector LaunchVelocity; // 0x0c(0x0c)
	bool bTraceWithCollision; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ProjectileRadius; // 0x1c(0x04)
	float MaxSimTime; // 0x20(0x04)
	bool bTraceWithChannel; // 0x24(0x01)
	bool bTraceWithProfile; // 0x25(0x01)
	char pad_26[0xaa]; // 0x26(0xaa)
	enum class ECollisionChannel TraceChannel; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FName TraceProfile; // 0xd8(0x08)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0xe0(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0xf0(0x10)
	float SimFrequency; // 0x100(0x04)
	float OverrideGravityZ; // 0x104(0x04)
	float DragForce; // 0x108(0x04)
	float MaxSpeed; // 0x10c(0x04)
	struct UCurveFloat* MaxSpeedOverTimeCurve; // 0x110(0x08)
	enum class EDrawDebugTrace DrawDebugType; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float DrawDebugTime; // 0x11c(0x04)
	bool bTraceComplex; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
};

// ScriptStruct Engine.*7841460713
// Size: 0x18 (Inherited: 0x00)
struct F*7841460713 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*b70ba165d9
// Size: 0x08 (Inherited: 0x00)
struct F*b70ba165d9 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*cd24fe433c
// Size: 0x10 (Inherited: 0x00)
struct F*cd24fe433c {
	struct UTextureRenderTarget2D* RenderTarget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*02431ea27c
// Size: 0x50 (Inherited: 0x00)
struct F*02431ea27c {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*376ef283f4> *5050c51ded; // 0x08(0x10)
	char pad_18[0x38]; // 0x18(0x38)
};

// ScriptStruct Engine.*376ef283f4
// Size: 0x18 (Inherited: 0x00)
struct F*376ef283f4 {
	struct FName PropertyName; // 0x00(0x08)
	int32 ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* *7c93e0c555; // 0x10(0x08)
};

// ScriptStruct Engine.*3600aa5c0a
// Size: 0x10 (Inherited: 0x00)
struct F*3600aa5c0a {
	struct UFunction* *aaccb499db; // 0x00(0x08)
	int32 *4b27a2e44a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*8a8a616b75
// Size: 0x01 (Inherited: 0x00)
struct F*8a8a616b75 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*73a77c28fa
// Size: 0x08 (Inherited: 0x00)
struct F*73a77c28fa {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*85d83f98f8
// Size: 0x1e0 (Inherited: 0x00)
struct F*85d83f98f8 {
	char pad_0[0x1e0]; // 0x00(0x1e0)
};

// ScriptStruct Engine.*218c3a49de
// Size: 0x14 (Inherited: 0x00)
struct F*218c3a49de {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintDebugData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*278ebe80ed
// Size: 0x01 (Inherited: 0x00)
struct F*278ebe80ed {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*65927b8b25
// Size: 0xb0 (Inherited: 0x00)
struct F*65927b8b25 {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.*09ebcfce52
// Size: 0x20 (Inherited: 0x00)
struct F*09ebcfce52 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.*701b304477
// Size: 0x90 (Inherited: 0x20)
struct F*701b304477 : F*09ebcfce52 {
	struct TArray<struct FVector> *06302e190c; // 0x20(0x10)
	struct FBox *9363faa29d; // 0x30(0x1c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FTransform Transform; // 0x50(0x30)
	char pad_80[0x10]; // 0x80(0x10)
};

// ScriptStruct Engine.*97ffb10af0
// Size: 0xa0 (Inherited: 0x20)
struct F*97ffb10af0 : F*09ebcfce52 {
	struct FMatrix TM; // 0x20(0x40)
	struct FQuat Orientation; // 0x60(0x10)
	struct FVector Center; // 0x70(0x0c)
	struct FRotator Rotation; // 0x7c(0x0c)
	float X; // 0x88(0x04)
	float Y; // 0x8c(0x04)
	float Z; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.*660012141c
// Size: 0x70 (Inherited: 0x20)
struct F*660012141c : F*09ebcfce52 {
	struct FMatrix TM; // 0x20(0x40)
	struct FVector Center; // 0x60(0x0c)
	float Radius; // 0x6c(0x04)
};

// ScriptStruct Engine.*d7e6bfc868
// Size: 0x90 (Inherited: 0x20)
struct F*d7e6bfc868 : F*09ebcfce52 {
	struct FMatrix TM; // 0x20(0x40)
	struct FQuat Orientation; // 0x60(0x10)
	struct FVector Center; // 0x70(0x0c)
	struct FRotator Rotation; // 0x7c(0x0c)
	float Radius; // 0x88(0x04)
	float Length; // 0x8c(0x04)
};

// ScriptStruct Engine.*b1850c8096
// Size: 0x48 (Inherited: 0x00)
struct F*b1850c8096 {
	struct TArray<struct F*660012141c> *05662d2c2d; // 0x00(0x10)
	struct TArray<struct F*97ffb10af0> *62c1960255; // 0x10(0x10)
	struct TArray<struct F*d7e6bfc868> *e49c11da52; // 0x20(0x10)
	struct TArray<struct F*701b304477> *ef40f19d1e; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Engine.*6922805fd0
// Size: 0x30 (Inherited: 0x00)
struct F*6922805fd0 {
	struct TArray<struct F*9d5503c599> *deae3765e1; // 0x00(0x10)
	struct TArray<struct F*bbf0035ee1> *133f93de4b; // 0x10(0x10)
	struct TArray<struct F*75f96903c6> *76427fcc3f; // 0x20(0x10)
};

// ScriptStruct Engine.*75f96903c6
// Size: 0x10 (Inherited: 0x00)
struct F*75f96903c6 {
	struct TArray<struct FVector2D> *06302e190c; // 0x00(0x10)
};

// ScriptStruct Engine.*bbf0035ee1
// Size: 0x14 (Inherited: 0x00)
struct F*bbf0035ee1 {
	struct FVector2D Center; // 0x00(0x08)
	float Width; // 0x08(0x04)
	float Height; // 0x0c(0x04)
	float Angle; // 0x10(0x04)
};

// ScriptStruct Engine.*9d5503c599
// Size: 0x0c (Inherited: 0x00)
struct F*9d5503c599 {
	struct FVector2D Center; // 0x00(0x08)
	float Radius; // 0x08(0x04)
};

// ScriptStruct Engine.*2fcd8cc2b2
// Size: 0x30 (Inherited: 0x00)
struct F*2fcd8cc2b2 {
	struct FName ProfileName; // 0x00(0x08)
	struct F*a8d9e92905 *a8d9e92905; // 0x08(0x28)
};

// ScriptStruct Engine.*b53522766a
// Size: 0x28 (Inherited: 0x00)
struct F*b53522766a {
	struct TArray<int32> VertexIndices; // 0x00(0x10)
	int32 Direction; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName ItemName; // 0x18(0x08)
	int32 PolyFlags; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*bb679ae161
// Size: 0x18 (Inherited: 0x00)
struct F*bb679ae161 {
	struct FString Value; // 0x00(0x10)
	struct FVector2D *77fb005fb5; // 0x10(0x08)
};

// ScriptStruct Engine.*c26b086fd0
// Size: 0x28 (Inherited: 0x00)
struct F*c26b086fd0 {
	float *2871c77821; // 0x00(0x04)
	float *e5506e8644; // 0x04(0x04)
	float *ed5cfe84e4; // 0x08(0x04)
	float *60a51fab01; // 0x0c(0x04)
	struct FVector2D Scaling; // 0x10(0x08)
	struct UFont* *4501c8c0e0; // 0x18(0x08)
	struct FVector2D *29fa2c011e; // 0x20(0x08)
};

// ScriptStruct Engine.*a18afc9425
// Size: 0x18 (Inherited: 0x00)
struct F*a18afc9425 {
	struct UTexture* Texture; // 0x00(0x08)
	float U; // 0x08(0x04)
	float V; // 0x0c(0x04)
	float UL; // 0x10(0x04)
	float VL; // 0x14(0x04)
};

// ScriptStruct Engine.*fa6445d1a1
// Size: 0x18 (Inherited: 0x00)
struct F*fa6445d1a1 {
	struct FGuid *50b1b2bcf5; // 0x00(0x10)
	struct FIntPoint ComponentId; // 0x10(0x08)
};

// ScriptStruct Engine.*f52b0ce0bc
// Size: 0x80 (Inherited: 0x00)
struct F*f52b0ce0bc {
	char pad_0[0x8]; // 0x00(0x08)
	struct AGameStateBase* GameState; // 0x08(0x08)
	struct UNetDriver* NetDriver; // 0x10(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x08)
	struct ULevel* PersistentLevel; // 0x20(0x08)
	SetProperty Levels; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Engine.*571cceb100
// Size: 0x58 (Inherited: 0x50)
struct F*571cceb100 : F*83ad5ff7d4 {
	enum class ETickingGroup *dd7d84feff; // 0x08(0x01)
	enum class ETickingGroup *a83d44e470; // 0x09(0x01)
	char *c10f697e3c : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *5363d98d66 : 1; // 0x0c(0x01)
	char *2015f44ce1 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*f8440817bc
// Size: 0x58 (Inherited: 0x50)
struct F*f8440817bc : F*83ad5ff7d4 {
	enum class ETickingGroup *dd7d84feff; // 0x08(0x01)
	enum class ETickingGroup *a83d44e470; // 0x09(0x01)
	char *c10f697e3c : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *5363d98d66 : 1; // 0x0c(0x01)
	char *2015f44ce1 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*dfc3943b5b
// Size: 0x20 (Inherited: 0x00)
struct F*dfc3943b5b {
	struct FVector *f905796ba9; // 0x00(0x0c)
	struct FRotator *8840c21752; // 0x0c(0x0c)
	float *76cf660f0b; // 0x18(0x04)
	bool *c4fe3fc8e8; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*93620d28f2
// Size: 0x20 (Inherited: 0x00)
struct F*93620d28f2 {
	struct FString *3ffc88422c; // 0x00(0x10)
	struct FString *3433cf9017; // 0x10(0x10)
};

// ScriptStruct Engine.*305cf84e03
// Size: 0x10 (Inherited: 0x00)
struct F*305cf84e03 {
	struct FName *54cfe552ca; // 0x00(0x08)
	struct FName *4f9fed5f22; // 0x08(0x08)
};

// ScriptStruct Engine.*96501223f2
// Size: 0x40 (Inherited: 0x00)
struct F*96501223f2 {
	struct FName ObjectName; // 0x00(0x08)
	struct FName OldClassName; // 0x08(0x08)
	struct FName NewClassName; // 0x10(0x08)
	struct FName OldSubobjName; // 0x18(0x08)
	struct FName NewSubobjName; // 0x20(0x08)
	struct FName *a678c650ac; // 0x28(0x08)
	struct FName *97c756b32e; // 0x30(0x08)
	bool InstanceOnly; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.*588c0e2b3a
// Size: 0x10 (Inherited: 0x00)
struct F*588c0e2b3a {
	struct FName OldGameName; // 0x00(0x08)
	struct FName NewGameName; // 0x08(0x08)
};

// ScriptStruct Engine.*5b1a76e8fb
// Size: 0x30 (Inherited: 0x00)
struct F*5b1a76e8fb {
	uint64 Key; // 0x00(0x08)
	struct FString *309f2db104; // 0x08(0x10)
	struct FColor DisplayColor; // 0x18(0x04)
	float *2a8463294f; // 0x1c(0x04)
	float *6a66b26957; // 0x20(0x04)
	struct FVector2D *d946ec93da; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*ecc95ccbfb
// Size: 0x28 (Inherited: 0x00)
struct F*ecc95ccbfb {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FString Comment; // 0x18(0x10)
};

// ScriptStruct Engine.*1c8a6a1959
// Size: 0x28 (Inherited: 0x00)
struct F*1c8a6a1959 {
	struct FString StatName; // 0x00(0x10)
	struct TArray<struct F*7f53a60082> ColorMap; // 0x10(0x10)
	char DisableBlend : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*7f53a60082
// Size: 0x08 (Inherited: 0x00)
struct F*7f53a60082 {
	float In; // 0x00(0x04)
	struct FColor Out; // 0x04(0x04)
};

// ScriptStruct Engine.WorldContext
// Size: 0x2a0 (Inherited: 0x00)
struct FWorldContext {
	char pad_0[0x8]; // 0x00(0x08)
	struct FURL *77c52629e3; // 0x08(0x70)
	struct TArray<struct F*763d6f8a36> *b6d3f72c7b; // 0x78(0x10)
	char pad_88[0xd0]; // 0x88(0xd0)
	struct FURL *2689ac4446; // 0x158(0x70)
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct TArray<struct U*d1847240ea*> *f366a5d87a; // 0x1d0(0x10)
	char pad_1E0[0x8]; // 0x1e0(0x08)
	struct TArray<struct F*207b02ae26> PackagesToFullyLoad; // 0x1e8(0x10)
	char pad_1F8[0x30]; // 0x1f8(0x30)
	struct TArray<struct ULevel*> *0c199fcd23; // 0x228(0x10)
	struct U*c15025d53a* *c15025d53a; // 0x238(0x08)
	char pad_240[0x10]; // 0x240(0x10)
	struct TArray<struct F*a504c4a12a> *d9cc5d9d66; // 0x250(0x10)
	struct UGameViewportClient* GameViewport; // 0x260(0x08)
	char pad_268[0x10]; // 0x268(0x10)
	struct UGameInstance* *31e7d6ddee; // 0x278(0x08)
	char pad_280[0x20]; // 0x280(0x20)
};

// ScriptStruct Engine.*a504c4a12a
// Size: 0x10 (Inherited: 0x00)
struct F*a504c4a12a {
	struct FName PackageName; // 0x00(0x08)
	char *7f5fdd9db8 : 1; // 0x08(0x01)
	char *5b5e63d8e3 : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32 LODIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*207b02ae26
// Size: 0x38 (Inherited: 0x00)
struct F*207b02ae26 {
	enum class *2ddced7fbf *3a0ec3d65e; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Tag; // 0x08(0x10)
	struct TArray<struct FName> *37214cb15c; // 0x18(0x10)
	struct TArray<struct UObject*> *3dd20b5080; // 0x28(0x10)
};

// ScriptStruct Engine.*763d6f8a36
// Size: 0x10 (Inherited: 0x00)
struct F*763d6f8a36 {
	struct UNetDriver* NetDriver; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*34e3a3f3fe
// Size: 0x18 (Inherited: 0x00)
struct F*34e3a3f3fe {
	struct FName DefName; // 0x00(0x08)
	struct FName DriverClassName; // 0x08(0x08)
	struct FName DriverClassNameFallback; // 0x10(0x08)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x1c8 (Inherited: 0x00)
struct FRuntimeCurveLinearColor {
	struct FRichCurve *849aaa1381[0x04]; // 0x00(0x1c0)
	struct U*1fa4fa0482* ExternalCurve; // 0x1c0(0x08)
};

// ScriptStruct Engine.*2fff0ca913
// Size: 0x10 (Inherited: 0x00)
struct F*2fff0ca913 {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x20 (Inherited: 0x00)
struct FPreviewMeshCollectionEntry {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x20)
};

// ScriptStruct Engine.*4841245fc4
// Size: 0x04 (Inherited: 0x00)
struct F*4841245fc4 {
	bool *bf502efcff; // 0x00(0x01)
	bool *13465b7edf; // 0x01(0x01)
	bool *9895058256; // 0x02(0x01)
	bool *8a24bd63f8; // 0x03(0x01)
};

// ScriptStruct Engine.*5263c872a6
// Size: 0x24 (Inherited: 0x00)
struct F*5263c872a6 {
	struct FVector2D UVScale; // 0x00(0x08)
	struct FVector2D *d660e564a3; // 0x08(0x08)
	struct FVector Tangent; // 0x10(0x0c)
	float *f66f340c7c; // 0x1c(0x04)
	int32 *e5196e576b; // 0x20(0x04)
};

// ScriptStruct Engine.*6841a79db6
// Size: 0x20 (Inherited: 0x00)
struct F*6841a79db6 {
	struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
	struct F*18043fceb7 Rules; // 0x10(0x10)
};

// ScriptStruct Engine.*f367913f49
// Size: 0x20 (Inherited: 0x00)
struct F*f367913f49 {
	struct FString Old; // 0x00(0x10)
	struct FString New; // 0x10(0x10)
};

// ScriptStruct Engine.*66e470be9a
// Size: 0x20 (Inherited: 0x00)
struct F*66e470be9a {
	struct FText DisplayName; // 0x00(0x18)
	int32 MaxChannels; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*694ea3d910
// Size: 0x10 (Inherited: 0x00)
struct F*694ea3d910 {
	enum class EPhysicalSurface Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.*1a10c5dd28
// Size: 0x10 (Inherited: 0x00)
struct F*1a10c5dd28 {
	struct FName *d350b97aed; // 0x00(0x08)
	struct FVector2D *10a26c9ca8; // 0x08(0x08)
};

// ScriptStruct Engine.*3e9e0dd38d
// Size: 0x38 (Inherited: 0x00)
struct F*3e9e0dd38d {
	struct FDialogueContext Context; // 0x00(0x18)
	struct USoundWave* SoundWave; // 0x18(0x08)
	struct FString *87a7834de5; // 0x20(0x10)
	struct U*d5836d1cb7* Proxy; // 0x30(0x08)
};

// ScriptStruct Engine.*fc532221d4
// Size: 0x38 (Inherited: 0x28)
struct F*fc532221d4 : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct U*137fe4d756* Distribution; // 0x30(0x08)
};

// ScriptStruct Engine.RawDistributionVector
// Size: 0x50 (Inherited: 0x28)
struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct FVector *555f7b1bba; // 0x30(0x0c)
	struct FVector *808cbe0372; // 0x3c(0x0c)
	struct U*422628e054* Distribution; // 0x48(0x08)
};

// ScriptStruct Engine.*b36bc1f2de
// Size: 0x18 (Inherited: 0x00)
struct F*b36bc1f2de {
	struct FName ComponentPropertyName; // 0x00(0x08)
	struct FName DelegatePropertyName; // 0x08(0x08)
	struct FName *d0c7a28c76; // 0x10(0x08)
};

// ScriptStruct Engine.*ae53ebe416
// Size: 0x04 (Inherited: 0x00)
struct F*ae53ebe416 {
	char *2fc47058aa : 1; // 0x00(0x01)
	char *2a6b3c8af0 : 1; // 0x00(0x01)
	char *b6f1e20056 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*062fdaa0ce
// Size: 0x20 (Inherited: 0x04)
struct F*062fdaa0ce : F*ae53ebe416 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FName InputActionName; // 0x08(0x08)
	enum class *8d42d05dff *2cfad97925; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FName *d0c7a28c76; // 0x18(0x08)
};

// ScriptStruct Engine.*8422347cf3
// Size: 0x18 (Inherited: 0x04)
struct F*8422347cf3 : F*ae53ebe416 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FName InputAxisName; // 0x08(0x08)
	struct FName *d0c7a28c76; // 0x10(0x08)
};

// ScriptStruct Engine.*1a61e6dd37
// Size: 0x28 (Inherited: 0x04)
struct F*1a61e6dd37 : F*ae53ebe416 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FKey AxisKey; // 0x08(0x18)
	struct FName *d0c7a28c76; // 0x20(0x08)
};

// ScriptStruct Engine.*850d970b7b
// Size: 0x38 (Inherited: 0x04)
struct F*850d970b7b : F*ae53ebe416 {
	char pad_4[0x4]; // 0x04(0x04)
	struct F*83f86360e2 *83f86360e2; // 0x08(0x20)
	enum class *8d42d05dff *2cfad97925; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FName *d0c7a28c76; // 0x30(0x08)
};

// ScriptStruct Engine.*58db994419
// Size: 0x10 (Inherited: 0x04)
struct F*58db994419 : F*ae53ebe416 {
	enum class *8d42d05dff *2cfad97925; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName *d0c7a28c76; // 0x08(0x08)
};

// ScriptStruct Engine.*e3333c05d9
// Size: 0x20 (Inherited: 0x00)
struct F*e3333c05d9 {
	struct UEdGraph* MacroGraph; // 0x00(0x08)
	struct UBlueprint* *77556e419a; // 0x08(0x08)
	struct FGuid *4b0005401b; // 0x10(0x10)
};

// ScriptStruct Engine.*4ccd1e1e1b
// Size: 0x108 (Inherited: 0x100)
struct F*4ccd1e1e1b : F*7ac63cb981 {
	struct UEdGraphNode* *dec68cade9; // 0x100(0x08)
};

// ScriptStruct Engine.*7ac63cb981
// Size: 0x100 (Inherited: 0x00)
struct F*7ac63cb981 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FText *a38df995c4; // 0x08(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32 Grouping; // 0x68(0x04)
	int32 SectionID; // 0x6c(0x04)
	struct TArray<struct FString> *a157989d03; // 0x70(0x10)
	struct TArray<struct FString> *e53546dedb; // 0x80(0x10)
	struct TArray<struct FString> *6ab3b27667; // 0x90(0x10)
	struct TArray<struct FString> *49e5f71867; // 0xa0(0x10)
	struct TArray<struct FString> *f7ffc334b5; // 0xb0(0x10)
	struct TArray<struct FString> *d4c5be3408; // 0xc0(0x10)
	struct TArray<struct FString> *a4d0214adc; // 0xd0(0x10)
	struct TArray<struct FString> *43e7fbe56d; // 0xe0(0x10)
	struct FString *e3bbbd8812; // 0xf0(0x10)
};

// ScriptStruct Engine.*a33400ce28
// Size: 0x10 (Inherited: 0x00)
struct F*a33400ce28 {
	struct FName *9dd87a470a; // 0x00(0x08)
	int32 BeginIndex; // 0x08(0x04)
	int32 EndIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*ecf6e0eed3
// Size: 0xb0 (Inherited: 0x00)
struct F*ecf6e0eed3 {
	struct FString FontName; // 0x00(0x10)
	float Height; // 0x10(0x04)
	char *f1bc00887b : 1; // 0x14(0x01)
	char *f25f74d97c : 1; // 0x14(0x01)
	char *99213ad652 : 1; // 0x14(0x01)
	char *f1e26241e9 : 1; // 0x14(0x01)
	char *6c26662682 : 1; // 0x14(0x01)
	char pad_14_5 : 3; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	enum class *822ff679f3 *6e0c9a2dff; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString *35db7224c6; // 0x20(0x10)
	struct FString *ce47dbd461; // 0x30(0x10)
	struct FString *4a35266e89; // 0x40(0x10)
	struct FString *701b593e2d; // 0x50(0x10)
	char *38a70146f1 : 1; // 0x60(0x01)
	char *2a5673895a : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FLinearColor ForegroundColor; // 0x64(0x10)
	char *a21cfa0755 : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	int32 *01ba5e0325; // 0x78(0x04)
	int32 *32a9afb925; // 0x7c(0x04)
	int32 *ae8a610517; // 0x80(0x04)
	int32 *78eba363c8; // 0x84(0x04)
	int32 *67a4e20c75; // 0x88(0x04)
	int32 *df60d4aa07; // 0x8c(0x04)
	int32 *639a3b2598; // 0x90(0x04)
	int32 *4186eda611; // 0x94(0x04)
	char *843a34ac68 : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 Kerning; // 0x9c(0x04)
	char bUseDistanceFieldAlpha : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 *c2a2639285; // 0xa4(0x04)
	float *d9d1f4a74f; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.*f9faf08d7f
// Size: 0x18 (Inherited: 0x00)
struct F*f9faf08d7f {
	int32 *e51d10ef89; // 0x00(0x04)
	int32 *c6b982b613; // 0x04(0x04)
	int32 *05d7b5b1a8; // 0x08(0x04)
	int32 *0fd03d50ab; // 0x0c(0x04)
	bool *5d90380bfd; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *35786d5c6f; // 0x14(0x04)
};

// ScriptStruct Engine.*7e1db01f82
// Size: 0x18 (Inherited: 0x00)
struct F*7e1db01f82 {
	struct U*3e3af884c4* *76bcf21acb; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0xf0 (Inherited: 0x00)
struct FHapticFeedbackDetails_Curve {
	struct FRuntimeFloatCurve Frequency; // 0x00(0x78)
	struct FRuntimeFloatCurve *6c8b0cbf54; // 0x78(0x78)
};

// ScriptStruct Engine.*b577448d97
// Size: 0x80 (Inherited: 0x00)
struct F*b577448d97 {
	struct UClass* ComponentClass; // 0x00(0x08)
	struct UActorComponent* *24a02264b6; // 0x08(0x08)
	struct FComponentKey ComponentKey; // 0x10(0x20)
	struct F*02431ea27c *54cd37d868; // 0x30(0x50)
};

// ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x00)
struct FComponentKey {
	struct UClass* *81b45d1009; // 0x00(0x08)
	struct FName SCSVariableName; // 0x08(0x08)
	struct FGuid AssociatedGuid; // 0x10(0x10)
};

// ScriptStruct Engine.*04a25d94c7
// Size: 0x30 (Inherited: 0x00)
struct F*04a25d94c7 {
	struct FString TabName; // 0x00(0x10)
	struct TArray<struct F*809720a821> Curves; // 0x10(0x10)
	float *728647ba05; // 0x20(0x04)
	float *540056b41a; // 0x24(0x04)
	float *acc0de6897; // 0x28(0x04)
	float *828cb1d206; // 0x2c(0x04)
};

// ScriptStruct Engine.*809720a821
// Size: 0x38 (Inherited: 0x00)
struct F*809720a821 {
	struct UObject* *eeda0f6038; // 0x00(0x08)
	struct FColor *09cf830246; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString CurveName; // 0x10(0x10)
	int32 *242b595e60; // 0x20(0x04)
	int32 *481c1b0bea; // 0x24(0x04)
	int32 *931dc10634; // 0x28(0x04)
	int32 *d14cc81001; // 0x2c(0x04)
	float *ece31bf3c3; // 0x30(0x04)
	float *bc885a48ee; // 0x34(0x04)
};

// ScriptStruct Engine.*33c5a44876
// Size: 0x18 (Inherited: 0x00)
struct F*33c5a44876 {
	struct U*e3d2da250a* Group; // 0x00(0x08)
	struct U*2d530f7a8e* Track; // 0x08(0x08)
	int32 *77828928a2; // 0x10(0x04)
	float *d8e5212ce3; // 0x14(0x04)
};

// ScriptStruct Engine.*7d0bb528bc
// Size: 0x30 (Inherited: 0x00)
struct F*7d0bb528bc {
	struct UClass* PawnClass; // 0x00(0x08)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct APawn* *6a42c9820f; // 0x28(0x08)
};

// ScriptStruct Engine.*d62a1e9963
// Size: 0x28 (Inherited: 0x00)
struct F*d62a1e9963 {
	struct FString GroupName; // 0x00(0x10)
	struct TArray<int32> *9631553342; // 0x10(0x10)
	char *0b7058ce77 : 1; // 0x20(0x01)
	char *9172b38034 : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*738c687a18
// Size: 0x20 (Inherited: 0x00)
struct F*738c687a18 {
	struct UClass* *a9bc0e3835; // 0x00(0x08)
	struct FString *3b8e5865ff; // 0x08(0x10)
	int32 *2c7986608f; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*8cd41f99f9
// Size: 0x08 (Inherited: 0x00)
struct F*8cd41f99f9 {
	float Time; // 0x00(0x04)
	char Value : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*39bb57c7aa
// Size: 0x18 (Inherited: 0x00)
struct F*39bb57c7aa {
	float Time; // 0x00(0x04)
	float *415f7a7e7c; // 0x04(0x04)
	struct FName *4e8b38178c; // 0x08(0x08)
	int32 ShotNumber; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*76fda87b17
// Size: 0x10 (Inherited: 0x00)
struct F*76fda87b17 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName EventName; // 0x08(0x08)
};

// ScriptStruct Engine.*f6a436c9e5
// Size: 0x20 (Inherited: 0x00)
struct F*f6a436c9e5 {
	float StartTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	float *af26280a83; // 0x10(0x04)
	float *0cd053da82; // 0x14(0x04)
	float AnimPlayRate; // 0x18(0x04)
	char bLooping : 1; // 0x1c(0x01)
	char *3c7b58347f : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*d33f89aed3
// Size: 0x10 (Inherited: 0x00)
struct F*d33f89aed3 {
	struct TArray<struct F*94fb1274c3> Points; // 0x00(0x10)
};

// ScriptStruct Engine.*94fb1274c3
// Size: 0x10 (Inherited: 0x00)
struct F*94fb1274c3 {
	struct FName GroupName; // 0x00(0x08)
	float Time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*ca7a93bcf9
// Size: 0x0c (Inherited: 0x00)
struct F*ca7a93bcf9 {
	float Time; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	int32 ClipIDNumber; // 0x08(0x04)
};

// ScriptStruct Engine.*700ed3cbaf
// Size: 0x08 (Inherited: 0x00)
struct F*700ed3cbaf {
	float Time; // 0x00(0x04)
	enum class *9539c54071 ToggleAction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*438b64dc3f
// Size: 0x18 (Inherited: 0x00)
struct F*438b64dc3f {
	float Time; // 0x00(0x04)
	float Volume; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USoundBase* Sound; // 0x10(0x08)
};

// ScriptStruct Engine.*a47b54e36d
// Size: 0x08 (Inherited: 0x00)
struct F*a47b54e36d {
	float Time; // 0x00(0x04)
	enum class *787860b0e3 Action; // 0x04(0x01)
	enum class *35bfacd08e *29a1ea0f15; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Engine.*1027900afb
// Size: 0x38 (Inherited: 0x00)
struct F*1027900afb {
	struct U*6035905e92* Container; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Engine.*291da25063
// Size: 0x110 (Inherited: 0x00)
struct F*291da25063 {
	struct FName *9dd87a470a; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FIntPoint Size; // 0x40(0x08)
	struct FIntPoint *a968d5edfd; // 0x48(0x08)
	char *eac968ba6d : 1; // 0x50(0x01)
	char *593d15c0fa : 1; // 0x50(0x01)
	char *47fff5b9ca : 1; // 0x50(0x01)
	char *f5d55e540e : 1; // 0x50(0x01)
	char pad_50_4 : 4; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FName> *bdd5360fc6; // 0x58(0x10)
	struct TArray<bool> *91e70ce269; // 0x68(0x10)
	struct TArray<struct U*d374a71f52*> *dc537abae5; // 0x78(0x10)
	char pad_88[0x88]; // 0x88(0x88)
};

// ScriptStruct Engine.*fe32b3613f
// Size: 0x10 (Inherited: 0x00)
struct F*fe32b3613f {
	struct UClass* Type; // 0x00(0x08)
	int32 Total; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*eac2fdaa49
// Size: 0x20 (Inherited: 0x00)
struct F*eac2fdaa49 {
	struct FVector *c5374933a5; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInterface* DecalMaterial; // 0x10(0x08)
	int32 SortOrder; // 0x18(0x04)
	bool *ead7375c8e; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*db27cffb30
// Size: 0x30 (Inherited: 0x00)
struct F*db27cffb30 {
	struct FName *9dd87a470a; // 0x00(0x08)
	struct F*3f1ec42700 Volume; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*c34a007b7e
// Size: 0x40 (Inherited: 0x00)
struct F*c34a007b7e {
	struct FName *9dd87a470a; // 0x00(0x08)
	uint32 TypeId; // 0x08(0x04)
	char *14ebdf2b40 : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.*f413e38e41
// Size: 0x08 (Inherited: 0x00)
struct F*f413e38e41 {
	struct ULevelBlockType* LevelBlockType; // 0x00(0x08)
};

// ScriptStruct Engine.*709f7529e1
// Size: 0x50 (Inherited: 0x00)
struct F*709f7529e1 {
	struct FName *9dd87a470a; // 0x00(0x08)
	struct U*ae010490f6* Data; // 0x08(0x08)
	struct FVector2D Offset; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x30)
};

// ScriptStruct Engine.*258dc007a5
// Size: 0x40 (Inherited: 0x00)
struct F*258dc007a5 {
	struct FName *9dd87a470a; // 0x00(0x08)
	struct U*51d3af11ce* Data; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.*369f104026
// Size: 0xb0 (Inherited: 0x00)
struct F*369f104026 {
	struct FString *9dd87a470a; // 0x00(0x10)
	struct FTransform *35213f6865; // 0x10(0x30)
	struct FString *67a7a81f9e; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct TMap<struct FVector, struct FString> *bfa0fa3a43; // 0x58(0x50)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct Engine.*31b68f6de6
// Size: 0xa0 (Inherited: 0x00)
struct F*31b68f6de6 {
	struct FString *9dd87a470a; // 0x00(0x10)
	struct FTransform *35213f6865; // 0x10(0x30)
	struct FString *2532903f45; // 0x40(0x10)
	struct FTransform *e6fc1d4ba1; // 0x50(0x30)
	char pad_80[0x20]; // 0x80(0x20)
};

// ScriptStruct Engine.*d63bed8ce6
// Size: 0x60 (Inherited: 0x00)
struct F*d63bed8ce6 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.*04c4db89c2
// Size: 0xb0 (Inherited: 0x00)
struct F*04c4db89c2 {
	char *8fe0f3e785 : 1; // 0x00(0x01)
	char *7b2e9ba708 : 1; // 0x00(0x01)
	char *0c0cf4f030 : 1; // 0x00(0x01)
	char *45ca1d924f : 1; // 0x00(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x00(0x01)
	char LightingChannel0 : 1; // 0x00(0x01)
	char LightingChannel1 : 1; // 0x00(0x01)
	char *359430f852 : 1; // 0x00(0x01)
	char *a7b0f3fc94 : 1; // 0x01(0x01)
	char *4a1794cbf9 : 1; // 0x01(0x01)
	char *e5c2c6f875 : 1; // 0x01(0x01)
	char bUseInverseSquaredFalloff : 1; // 0x01(0x01)
	char pad_1_4 : 4; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UMaterialInterface* *24d5ee119e; // 0x08(0x20)
	struct U*b63877ce42* IESTexture; // 0x28(0x20)
	float Temperature; // 0x48(0x04)
	float MaxDrawDistance; // 0x4c(0x04)
	float *e7a4eb8e90; // 0x50(0x04)
	float *6921a3504a; // 0x54(0x04)
	float *59a00e6bb9; // 0x58(0x04)
	float *aa5fabe585; // 0x5c(0x04)
	float ShadowSharpen; // 0x60(0x04)
	float *0865574625; // 0x64(0x04)
	struct FVector *057c31aba0; // 0x68(0x0c)
	float *de16738efc; // 0x74(0x04)
	float *7a9e9b9e5c; // 0x78(0x04)
	float *d5fafa9464; // 0x7c(0x04)
	float *665f10f097; // 0x80(0x04)
	float BloomThreshold; // 0x84(0x04)
	struct FColor *29e0691896; // 0x88(0x04)
	float RayStartOffsetDepthScale; // 0x8c(0x04)
	float AttenuationRadius; // 0x90(0x04)
	float LightFalloffExponent; // 0x94(0x04)
	float *874e076710; // 0x98(0x04)
	float *1154cee395; // 0x9c(0x04)
	float InnerConeAngle; // 0xa0(0x04)
	float OuterConeAngle; // 0xa4(0x04)
	float *b1cbf4dcff; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.*f2959ab045
// Size: 0x50 (Inherited: 0x00)
struct F*f2959ab045 {
	struct FTransform Transform; // 0x00(0x30)
	float *bd45f2a2e5; // 0x30(0x04)
	float Alpha; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector4 CustomData; // 0x40(0x10)
};

// ScriptStruct Engine.*1f1a8c60da
// Size: 0x78 (Inherited: 0x00)
struct F*1f1a8c60da {
	struct UStaticMesh* Mesh; // 0x00(0x20)
	struct TArray<struct UMaterialInterface*> *aaa1ce8566; // 0x20(0x10)
	char pad_30[0x1c]; // 0x30(0x1c)
	float CachedMaxDrawDistance; // 0x4c(0x04)
	char bImportantMesh : 1; // 0x50(0x01)
	char *503bdacadb : 1; // 0x50(0x01)
	char LightingChannel0 : 1; // 0x50(0x01)
	char LightingChannel1 : 1; // 0x50(0x01)
	char *359430f852 : 1; // 0x50(0x01)
	char *0f39bab833 : 1; // 0x50(0x01)
	char *230ba77560 : 1; // 0x50(0x01)
	char pad_50_7 : 1; // 0x50(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x51(0x01)
	enum class ECollisionChannel *022bc0abe0; // 0x52(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*f1df7ecfec> *2f52dc27d4; // 0x58(0x10)
	struct FName CollisionProfileName; // 0x68(0x08)
	int32 MeshSize; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Engine.*445f967097
// Size: 0x40 (Inherited: 0x00)
struct F*445f967097 {
	struct APlayerController* LocalPC; // 0x00(0x08)
	struct FName MessageType; // 0x08(0x08)
	int32 *1afbe0a9d9; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *807b081977; // 0x18(0x10)
	struct APlayerState* *0d8964c216; // 0x28(0x08)
	struct APlayerState* *a6199cd093; // 0x30(0x08)
	struct UObject* *5e329a4768; // 0x38(0x08)
};

// ScriptStruct Engine.*ce20c9df3f
// Size: 0x48 (Inherited: 0x00)
struct F*ce20c9df3f {
	struct FString InputName; // 0x00(0x10)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Engine.*52e5e1b80a
// Size: 0x40 (Inherited: 0x00)
struct F*52e5e1b80a {
	struct U*8eaf84e920* *c71da35d64; // 0x00(0x08)
	struct FGuid *df088a4b91; // 0x08(0x10)
	struct FExpressionOutput Output; // 0x18(0x28)
};

// ScriptStruct Engine.*f6335bfdb5
// Size: 0x50 (Inherited: 0x00)
struct F*f6335bfdb5 {
	struct U*47e9beaddb* ExpressionInput; // 0x00(0x08)
	struct FGuid *911c113fee; // 0x08(0x10)
	struct FExpressionInput Input; // 0x18(0x38)
};

// ScriptStruct Engine.*90a39ffcd1
// Size: 0x128 (Inherited: 0x00)
struct F*90a39ffcd1 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput *ed5ca6967a; // 0x80(0x38)
	struct FExpressionInput DiffuseTexture; // 0xb8(0x38)
	struct FExpressionInput NormalTexture; // 0xf0(0x38)
};

// ScriptStruct Engine.*c183a88925
// Size: 0x128 (Inherited: 0x00)
struct F*c183a88925 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput DiffuseTexture; // 0x80(0x38)
	struct FExpressionInput NormalTexture; // 0xb8(0x38)
	struct FExpressionInput Specular; // 0xf0(0x38)
};

// ScriptStruct Engine.*72d0292f10
// Size: 0xf0 (Inherited: 0x00)
struct F*72d0292f10 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput DiffuseTexture; // 0x80(0x38)
	struct FExpressionInput NormalTexture; // 0xb8(0x38)
};

// ScriptStruct Engine.*3dfa74d6b2
// Size: 0x18 (Inherited: 0x00)
struct F*3dfa74d6b2 {
	struct FGuid *f498029bb1; // 0x00(0x10)
	struct UMaterialParameterCollection* *9a96bce360; // 0x10(0x08)
};

// ScriptStruct Engine.*ee799b23b1
// Size: 0x18 (Inherited: 0x00)
struct F*ee799b23b1 {
	struct FGuid *f498029bb1; // 0x00(0x10)
	struct UMaterialFunction* Function; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x24 (Inherited: 0x00)
struct FMaterialInstanceBasePropertyOverrides {
	bool bOverride_OpacityMaskClipValue; // 0x00(0x01)
	bool bOverride_BlendMode; // 0x01(0x01)
	bool bOverride_ShadingModel; // 0x02(0x01)
	bool bOverride_PrepassMasked; // 0x03(0x01)
	bool bOverride_DitheredLODTransition; // 0x04(0x01)
	bool bOverride_TwoSided; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float OpacityMaskClipValue; // 0x08(0x04)
	enum class EBlendMode BlendMode; // 0x0c(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	char PrepassMasked : 1; // 0x10(0x01)
	char TwoSided : 1; // 0x10(0x01)
	char DitheredLODTransition : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	bool bOverride_bApplyMaterialClipVolumes; // 0x14(0x01)
	bool bOverride_MaterialClipVolumeTypes; // 0x15(0x01)
	bool bOverride_MaterialClipVolumeImportance; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	char bApplyMaterialClipVolumes : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct F*b8e9ab889d MaterialClipVolumeTypes; // 0x1c(0x04)
	enum class *71f1052399 MaterialClipVolumeImportance; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Engine.*8b44e564ca
// Size: 0x28 (Inherited: 0x00)
struct F*8b44e564ca {
	struct FName ParameterName; // 0x00(0x08)
	struct FLinearColor ParameterValue; // 0x08(0x10)
	struct FGuid *eac668cb87; // 0x18(0x10)
};

// ScriptStruct Engine.*d64a96c518
// Size: 0x20 (Inherited: 0x00)
struct F*d64a96c518 {
	struct FName ParameterName; // 0x00(0x08)
	struct UTexture* ParameterValue; // 0x08(0x08)
	struct FGuid *eac668cb87; // 0x10(0x10)
};

// ScriptStruct Engine.*fffe4f3fbb
// Size: 0x20 (Inherited: 0x00)
struct F*fffe4f3fbb {
	struct FName ParameterName; // 0x00(0x08)
	float ParameterValue; // 0x08(0x04)
	struct FGuid *eac668cb87; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*e1e5e1e8bc
// Size: 0x28 (Inherited: 0x00)
struct F*e1e5e1e8bc {
	struct FName ParameterName; // 0x00(0x08)
	struct UFont* FontValue; // 0x08(0x08)
	int32 FontPage; // 0x10(0x04)
	struct FGuid *eac668cb87; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*fcd664c80d
// Size: 0x28 (Inherited: 0x18)
struct F*fcd664c80d : F*6a88155380 {
	struct FLinearColor DefaultValue; // 0x18(0x10)
};

// ScriptStruct Engine.*6a88155380
// Size: 0x18 (Inherited: 0x00)
struct F*6a88155380 {
	struct FName ParameterName; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
};

// ScriptStruct Engine.*13143d2a53
// Size: 0x20 (Inherited: 0x18)
struct F*13143d2a53 : F*6a88155380 {
	float DefaultValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*5c4b944774
// Size: 0x18 (Inherited: 0x00)
struct F*5c4b944774 {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
};

// ScriptStruct Engine.*c6cc752dac
// Size: 0x14 (Inherited: 0x00)
struct F*c6cc752dac {
	struct FVector Offset; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	float Height; // 0x10(0x04)
};

// ScriptStruct Engine.PacketSimulationSettings
// Size: 0x14 (Inherited: 0x00)
struct FPacketSimulationSettings {
	int32 PktLoss; // 0x00(0x04)
	int32 PktOrder; // 0x04(0x04)
	int32 PktDup; // 0x08(0x04)
	int32 PktLag; // 0x0c(0x04)
	int32 PktLagVariance; // 0x10(0x04)
};

// ScriptStruct Engine.*5a3c4c23cd
// Size: 0x30 (Inherited: 0x00)
struct F*5a3c4c23cd {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* Archetype; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
	struct ULevel* Level; // 0x28(0x08)
};

// ScriptStruct Engine.*575744f309
// Size: 0x18 (Inherited: 0x00)
struct F*575744f309 {
	struct FString LevelName; // 0x00(0x10)
	uint32 *453c55efc1; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*0c71031120
// Size: 0x40 (Inherited: 0x00)
struct F*0c71031120 {
	struct FName *93d859adf7; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform *b9b546e629; // 0x10(0x30)
};

// ScriptStruct Engine.*ac69912133
// Size: 0x0c (Inherited: 0x00)
struct F*ac69912133 {
	int32 Count; // 0x00(0x04)
	int32 *7497bb57bd; // 0x04(0x04)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.*0889995bc8
// Size: 0x20 (Inherited: 0x00)
struct F*0889995bc8 {
	struct FName ParameterName; // 0x00(0x08)
	char *8d8826347f : 1; // 0x08(0x01)
	char *b619078ab1 : 1; // 0x08(0x01)
	char *387ddaed5c : 1; // 0x08(0x01)
	char *9c7e50871e : 1; // 0x08(0x01)
	char pad_8_4 : 4; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<int32> *469b3b9d0b; // 0x10(0x10)
};

// ScriptStruct Engine.*52567ea4cd
// Size: 0x18 (Inherited: 0x00)
struct F*52567ea4cd {
	struct FString CurveName; // 0x00(0x10)
	struct UObject* *eeda0f6038; // 0x10(0x08)
};

// ScriptStruct Engine.*fab7a05abf
// Size: 0x04 (Inherited: 0x00)
struct F*fab7a05abf {
	char *8c0d9afd56 : 1; // 0x00(0x01)
	char *452db07335 : 1; // 0x00(0x01)
	char bLock : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*881fc87473
// Size: 0x28 (Inherited: 0x00)
struct F*881fc87473 {
	enum class EParticleEventType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Frequency; // 0x04(0x04)
	int32 *e65eb8e81b; // 0x08(0x04)
	char *9e3ce3e6e3 : 1; // 0x0c(0x01)
	char *01f3d48281 : 1; // 0x0c(0x01)
	char *c46c8f134a : 1; // 0x0c(0x01)
	char *c5d388b6d6 : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName *d980392b0a; // 0x10(0x08)
	struct TArray<struct U*4d0023a102*> *448059cafc; // 0x18(0x10)
};

// ScriptStruct Engine.*e0b8298693
// Size: 0x18 (Inherited: 0x00)
struct F*e0b8298693 {
	struct FName *a64273144b; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*c3a6c65e4e
// Size: 0x04 (Inherited: 0x00)
struct F*c3a6c65e4e {
	char *067d88e8c3 : 1; // 0x00(0x01)
	char *d04bc5cb83 : 1; // 0x00(0x01)
	char *8dd4e477e9 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*da76af86ba
// Size: 0x50 (Inherited: 0x00)
struct F*da76af86ba {
	struct FName ParamName; // 0x00(0x08)
	char *8dd4e477e9 : 1; // 0x08(0x01)
	char *77ab155c53 : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	enum class *51cbf5ba73 *1395759674; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	char *956eb04f50 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct F*fc532221d4 *5f800e75ac; // 0x18(0x38)
};

// ScriptStruct Engine.*7b21c4f3d8
// Size: 0x10 (Inherited: 0x00)
struct F*7b21c4f3d8 {
	struct FName TargetName; // 0x00(0x08)
	float *33894b576b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*056d307c7f
// Size: 0x160 (Inherited: 0x00)
struct F*056d307c7f {
	struct TArray<struct FColor> *bdb8a252d4; // 0x00(0x10)
	struct TArray<struct FColor> *826e58b962; // 0x10(0x10)
	struct TArray<struct FColor> *fef33063da; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x10)
	struct FVector4 *a2701e022b; // 0x40(0x10)
	struct FVector4 *5099f088a5; // 0x50(0x10)
	struct FVector4 *68c1a6bd8c; // 0x60(0x10)
	struct FVector4 *2b81ef7ab5; // 0x70(0x10)
	struct FVector4 *ea43466165; // 0x80(0x10)
	struct FVector4 *da62db5379; // 0x90(0x10)
	struct FVector4 *02bde6b83d; // 0xa0(0x10)
	struct FVector *82fb748144; // 0xb0(0x0c)
	struct FVector *7a64cef903; // 0xbc(0x0c)
	struct FVector *66f589f95b; // 0xc8(0x0c)
	struct FVector *4b18dafd2a; // 0xd4(0x0c)
	struct FVector *2697a1ec51; // 0xe0(0x0c)
	struct FVector *71f23243fc; // 0xec(0x0c)
	struct FVector *2e3206b8fb; // 0xf8(0x0c)
	float *f60f309f93; // 0x104(0x04)
	float *63b2ec5993; // 0x108(0x04)
	float *50211b24b2; // 0x10c(0x04)
	float *c2102127fb; // 0x110(0x04)
	float *ea32cb2113; // 0x114(0x04)
	float *eae65c9e9f; // 0x118(0x04)
	float *027705cc5b; // 0x11c(0x04)
	float *7a66320d75; // 0x120(0x04)
	float *fb3f09412d; // 0x124(0x04)
	float *19497021d1; // 0x128(0x04)
	float *841de238b2; // 0x12c(0x04)
	float *d995724890; // 0x130(0x04)
	float *1003ee4a17; // 0x134(0x04)
	float *8169d35156; // 0x138(0x04)
	float *9b9487e589; // 0x13c(0x04)
	float *638a243aa0; // 0x140(0x04)
	enum class *43c2dc77ea *bbce4d12e2; // 0x144(0x01)
	enum class *5c5c218809 *8a41755083; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	struct FVector2D *4bbe52a103; // 0x148(0x08)
	char *490ffcaeba : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float *00ed6ce147; // 0x154(0x04)
	float *f76cf32bac; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
};

// ScriptStruct Engine.*0989906fcf
// Size: 0x2c0 (Inherited: 0x00)
struct F*0989906fcf {
	struct UParticleModuleRequired* *86c9bb9e83; // 0x00(0x08)
	struct UParticleModuleSpawn* *c37cd4e0ac; // 0x08(0x08)
	struct U*750747a9b2* *f19b306aea; // 0x10(0x08)
	struct TArray<struct UParticleModule*> *49e23a7ff1; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct F*d9758d621a *2cfcd9992e; // 0x30(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xa0(0x28)
	struct FFloatDistribution DragCoefficient; // 0xc8(0x28)
	struct FFloatDistribution *8b419a17c8; // 0xf0(0x28)
	struct FFloatDistribution *35cca64f48; // 0x118(0x28)
	struct FVector *82fb748144; // 0x140(0x0c)
	struct FVector *ab2a9cb932; // 0x14c(0x0c)
	float *a5d6b8a225; // 0x158(0x04)
	struct FVector *7a64cef903; // 0x15c(0x0c)
	struct FVector *66f589f95b; // 0x168(0x0c)
	struct FVector2D *491a0f85d7; // 0x174(0x08)
	float *658c1612ed; // 0x17c(0x04)
	float *f0a4f1cf25; // 0x180(0x04)
	int32 *09e599858e; // 0x184(0x04)
	enum class *43c2dc77ea *bbce4d12e2; // 0x188(0x01)
	enum class *5c5c218809 *8a41755083; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	char bEnableCollision : 1; // 0x18c(0x01)
	char pad_18C_1 : 7; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	enum class EParticleCollisionMode *bb3231f9ad; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	char *490ffcaeba : 1; // 0x194(0x01)
	char pad_194_1 : 7; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float *00ed6ce147; // 0x198(0x04)
	float *f76cf32bac; // 0x19c(0x04)
	struct FRawDistributionVector *dcc8871f8b; // 0x1a0(0x50)
	struct F*fc532221d4 *9ea100bc79; // 0x1f0(0x38)
	struct FRawDistributionVector *06b304d0fd; // 0x228(0x50)
	struct F*fc532221d4 *9d5d7034d1; // 0x278(0x38)
	char pad_2B0[0x10]; // 0x2b0(0x10)
};

// ScriptStruct Engine.*d9758d621a
// Size: 0x70 (Inherited: 0x00)
struct F*d9758d621a {
	struct UVectorField* Field; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator *d6ce7d1064; // 0x40(0x0c)
	struct FRotator *ed76c7c70f; // 0x4c(0x0c)
	struct FRotator RotationRate; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float *69d4d190a0; // 0x68(0x04)
	char *a2287d8520 : 1; // 0x6c(0x01)
	char *54870b99bc : 1; // 0x6c(0x01)
	char *f873985f9e : 1; // 0x6c(0x01)
	char *515eae2e01 : 1; // 0x6c(0x01)
	char *95b0976aeb : 1; // 0x6c(0x01)
	char pad_6C_5 : 3; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.*a5b0870671
// Size: 0x10 (Inherited: 0x00)
struct F*a5b0870671 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*713ff1230c
// Size: 0x10 (Inherited: 0x00)
struct F*713ff1230c {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*753e15f292
// Size: 0x10 (Inherited: 0x00)
struct F*753e15f292 {
	struct U*3ce513432f* *3ce513432f; // 0x00(0x08)
	float *7b5d5a514f; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*d974243b04
// Size: 0x110 (Inherited: 0x00)
struct F*d974243b04 {
	struct F*7fa5281433 *bfa3f9ff99; // 0x00(0x104)
	char pad_104[0x4]; // 0x104(0x04)
	struct FName ProfileName; // 0x108(0x08)
};

// ScriptStruct Engine.*e476ce19c8
// Size: 0x10 (Inherited: 0x00)
struct F*e476ce19c8 {
	struct TArray<DelegateProperty> Delegates; // 0x00(0x10)
};

// ScriptStruct Engine.*ae24324a53
// Size: 0x40 (Inherited: 0x00)
struct F*ae24324a53 {
	struct FString Identifier; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString *d25230c673; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// ScriptStruct Engine.*1d24f23e59
// Size: 0x30 (Inherited: 0x00)
struct F*1d24f23e59 {
	struct TArray<bool> Data; // 0x00(0x10)
	struct FString GroupName; // 0x10(0x10)
	struct FString *e9b2d141f7; // 0x20(0x10)
};

// ScriptStruct Engine.*3d3a9652a8
// Size: 0x28 (Inherited: 0x00)
struct F*3d3a9652a8 {
	struct FName Node; // 0x00(0x08)
	struct F*0012700ae0 Constraints[0x02]; // 0x08(0x20)
};

// ScriptStruct Engine.*0012700ae0
// Size: 0x10 (Inherited: 0x00)
struct F*0012700ae0 {
	struct TArray<struct F*d0e6a3470c> *38e9941dfb; // 0x00(0x10)
};

// ScriptStruct Engine.*d0e6a3470c
// Size: 0x18 (Inherited: 0x00)
struct F*d0e6a3470c {
	enum class EConstraintTransform *904e58ecff; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *81b5580bf6; // 0x08(0x08)
	float Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.Node
// Size: 0x60 (Inherited: 0x00)
struct FNode {
	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	bool *c22708a8a2; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct Engine.DestructibleParameters
// Size: 0x88 (Inherited: 0x00)
struct FDestructibleParameters {
	struct F*7e0dab3e0d DamageParameters; // 0x00(0x1c)
	struct F*4c98b4579f DebrisParameters; // 0x1c(0x2c)
	struct F*dadc55a841 AdvancedParameters; // 0x48(0x10)
	struct F*dd07180010 SpecialHierarchyDepths; // 0x58(0x14)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FDestructibleDepthParameters> DepthParameters; // 0x70(0x10)
	struct FDestructibleParametersFlag Flags; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Engine.DestructibleParametersFlag
// Size: 0x04 (Inherited: 0x00)
struct FDestructibleParametersFlag {
	char *0f363268c5 : 1; // 0x00(0x01)
	char *8af658ed1b : 1; // 0x00(0x01)
	char *4d5e3b0e60 : 1; // 0x00(0x01)
	char *29df406f97 : 1; // 0x00(0x01)
	char *9ff5fd22aa : 1; // 0x00(0x01)
	char *0fb4e372ee : 1; // 0x00(0x01)
	char *db56bcdb51 : 1; // 0x00(0x01)
	char *0f62d707bd : 1; // 0x00(0x01)
	char *bcb8288a72 : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.DestructibleDepthParameters
// Size: 0x01 (Inherited: 0x00)
struct FDestructibleDepthParameters {
	enum class *146819722f *817c229ecd; // 0x00(0x01)
};

// ScriptStruct Engine.*dd07180010
// Size: 0x14 (Inherited: 0x00)
struct F*dd07180010 {
	int32 SupportDepth; // 0x00(0x04)
	int32 MinimumFractureDepth; // 0x04(0x04)
	bool bEnableDebris; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 DebrisDepth; // 0x0c(0x04)
	int32 EssentialDepth; // 0x10(0x04)
};

// ScriptStruct Engine.*dadc55a841
// Size: 0x10 (Inherited: 0x00)
struct F*dadc55a841 {
	float DamageCap; // 0x00(0x04)
	float ImpactVelocityThreshold; // 0x04(0x04)
	float MaxChunkSpeed; // 0x08(0x04)
	float FractureImpulseScale; // 0x0c(0x04)
};

// ScriptStruct Engine.*4c98b4579f
// Size: 0x2c (Inherited: 0x00)
struct F*4c98b4579f {
	float DebrisLifetimeMin; // 0x00(0x04)
	float DebrisLifetimeMax; // 0x04(0x04)
	float DebrisMaxSeparationMin; // 0x08(0x04)
	float DebrisMaxSeparationMax; // 0x0c(0x04)
	struct FBox ValidBounds; // 0x10(0x1c)
};

// ScriptStruct Engine.*7e0dab3e0d
// Size: 0x1c (Inherited: 0x00)
struct F*7e0dab3e0d {
	float DamageThreshold; // 0x00(0x04)
	float DamageSpread; // 0x04(0x04)
	bool bEnableImpactDamage; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *deed6fdc5e; // 0x0c(0x04)
	int32 *239932f275; // 0x10(0x04)
	bool bCustomImpactResistance; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *a8a9308fc5; // 0x18(0x04)
};

// ScriptStruct Engine.*57b813e296
// Size: 0x190 (Inherited: 0x00)
struct F*57b813e296 {
	float ScreenSize; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSkeletalMeshOptimizationSettings OptimizationSettings; // 0x08(0x188)
};

// ScriptStruct Engine.*17676fbb1e
// Size: 0x10 (Inherited: 0x00)
struct F*17676fbb1e {
	int32 MaxCount; // 0x00(0x04)
	char bLimitToOwner : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	enum class EMaxConcurrentResolutionRule ResolutionRule; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float VolumeScale; // 0x0c(0x04)
};

// ScriptStruct Engine.*3da6da8223
// Size: 0x10 (Inherited: 0x00)
struct F*3da6da8223 {
	float *52678bc3f1; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USoundSubmix* SoundSubmix; // 0x08(0x08)
};

// ScriptStruct Engine.*6b89487e55
// Size: 0x08 (Inherited: 0x00)
struct F*6b89487e55 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x00)
struct FSoundGroup {
	enum class ESoundGroup SoundGroup; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString DisplayName; // 0x08(0x10)
	char bAlwaysDecompressOnLoad : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DecompressedDuration; // 0x1c(0x04)
};

// ScriptStruct Engine.*54e72426b0
// Size: 0x20 (Inherited: 0x00)
struct F*54e72426b0 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x00)
struct FPassiveSoundMixModifier {
	struct USoundMix* SoundMix; // 0x00(0x08)
	float MinVolumeThreshold; // 0x08(0x04)
	float *5cacce273b; // 0x0c(0x04)
};

// ScriptStruct Engine.*74cec90329
// Size: 0x2c (Inherited: 0x00)
struct F*74cec90329 {
	float Volume; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
	float *7863ed6e45; // 0x08(0x04)
	float *556171c30c; // 0x0c(0x04)
	float *8d20c1ce95; // 0x10(0x04)
	float *8c39424533; // 0x14(0x04)
	float *61c533411b; // 0x18(0x04)
	char *2e6520b62f : 1; // 0x1c(0x01)
	char *ae4ac8b53b : 1; // 0x1c(0x01)
	char *bef588db0d : 1; // 0x1c(0x01)
	char *1e7b61d6d6 : 1; // 0x1c(0x01)
	char *4467fcd592 : 1; // 0x1c(0x01)
	char pad_1C_5 : 3; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float *14c253b63f; // 0x20(0x04)
	char *ee8dce986d : 1; // 0x24(0x01)
	char *a3bc5e5b74 : 1; // 0x24(0x01)
	char pad_24_2 : 6; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	enum class EAudioOutputTarget *2ff61d150e; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct Engine.*b7f4b0e5c1
// Size: 0x08 (Inherited: 0x00)
struct F*b7f4b0e5c1 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*97bac0c986
// Size: 0x10 (Inherited: 0x00)
struct F*97bac0c986 {
	struct U*5062c4e189* preset; // 0x00(0x08)
	char bBypass : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*3b312c0d05
// Size: 0x18 (Inherited: 0x00)
struct F*3b312c0d05 {
	struct USoundClass* *a8c19380f3; // 0x00(0x08)
	float *7b0df8f54b; // 0x08(0x04)
	float *0458250066; // 0x0c(0x04)
	char *742996e9c5 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *b9f25d0b91; // 0x14(0x04)
};

// ScriptStruct Engine.AudioEQEffect
// Size: 0x38 (Inherited: 0x00)
struct FAudioEQEffect {
	char pad_0[0x8]; // 0x00(0x08)
	float FrequencyCenter0; // 0x08(0x04)
	float Gain0; // 0x0c(0x04)
	float Bandwidth0; // 0x10(0x04)
	float FrequencyCenter1; // 0x14(0x04)
	float Gain1; // 0x18(0x04)
	float Bandwidth1; // 0x1c(0x04)
	float FrequencyCenter2; // 0x20(0x04)
	float Gain2; // 0x24(0x04)
	float Bandwidth2; // 0x28(0x04)
	float FrequencyCenter3; // 0x2c(0x04)
	float Gain3; // 0x30(0x04)
	float Bandwidth3; // 0x34(0x04)
};

// ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x00)
struct FDistanceDatum {
	float FadeInDistanceStart; // 0x00(0x04)
	float FadeInDistanceEnd; // 0x04(0x04)
	float FadeOutDistanceStart; // 0x08(0x04)
	float FadeOutDistanceEnd; // 0x0c(0x04)
	float Volume; // 0x10(0x04)
};

// ScriptStruct Engine.*20ca22d1ea
// Size: 0x20 (Inherited: 0x00)
struct F*20ca22d1ea {
	struct FName ParameterName; // 0x00(0x08)
	float Default; // 0x08(0x04)
	float *d06b5e0c4b; // 0x0c(0x04)
	float *716d12f667; // 0x10(0x04)
	float *01cec3e680; // 0x14(0x04)
	float *8e4a070922; // 0x18(0x04)
	enum class *7149e3626c *474527ade7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x24 (Inherited: 0x00)
struct FSubsurfaceProfileStruct {
	float ScatterRadius; // 0x00(0x04)
	struct FLinearColor SubsurfaceColor; // 0x04(0x10)
	struct FLinearColor FalloffColor; // 0x14(0x10)
};

// ScriptStruct Engine.TextureLODGroup
// Size: 0x40 (Inherited: 0x00)
struct FTextureLODGroup {
	enum class TextureGroup Group; // 0x00(0x01)
	char pad_1[0xb]; // 0x01(0x0b)
	int32 LODBias; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
	int32 NumStreamedMips; // 0x14(0x04)
	enum class TextureMipGenSettings MipGenSettings; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 MinLODSize; // 0x1c(0x04)
	int32 MaxLODSize; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName MinMagFilter; // 0x28(0x08)
	struct FName MipFilter; // 0x30(0x08)
	float *6391458466; // 0x38(0x04)
	enum class ETextureDownscaleOptions *dfb62cc908; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Engine.*ae5448de9c
// Size: 0x18 (Inherited: 0x10)
struct F*ae5448de9c : F*586ec20fde {
	struct U*1fa4fa0482* *1fa4fa0482; // 0x10(0x08)
};

// ScriptStruct Engine.*586ec20fde
// Size: 0x10 (Inherited: 0x00)
struct F*586ec20fde {
	struct FName TrackName; // 0x00(0x08)
	bool *52211a08e0; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*7fbc0d4a3d
// Size: 0x18 (Inherited: 0x10)
struct F*7fbc0d4a3d : F*586ec20fde {
	struct U*1ba2d2b086* *1ba2d2b086; // 0x10(0x08)
};

// ScriptStruct Engine.*fd571370e5
// Size: 0x18 (Inherited: 0x10)
struct F*fd571370e5 : F*586ec20fde {
	struct UCurveFloat* CurveFloat; // 0x10(0x08)
};

// ScriptStruct Engine.*b277d7168d
// Size: 0x18 (Inherited: 0x10)
struct F*b277d7168d : F*586ec20fde {
	struct UCurveFloat* *ac9caf0c54; // 0x10(0x08)
};

// ScriptStruct Engine.*bdbe0e3e54
// Size: 0x68 (Inherited: 0x00)
struct F*bdbe0e3e54 {
	struct UTexture2D* Image1; // 0x00(0x08)
	struct UTexture2D* Image2; // 0x08(0x08)
	struct FVector2D Center; // 0x10(0x08)
	struct FVector2D *536551f0c5; // 0x18(0x08)
	struct FVector2D *08903f79f0; // 0x20(0x08)
	struct FVector2D *285e4367fb; // 0x28(0x08)
	struct FVector2D *bffe46a76e; // 0x30(0x08)
	struct FKey *757e4823f0; // 0x38(0x18)
	struct FKey *a8ac0e207f; // 0x50(0x18)
};

// ScriptStruct Engine.*37a6ab18ca
// Size: 0x0c (Inherited: 0x00)
struct F*37a6ab18ca {
	bool *dd378de483; // 0x00(0x01)
	bool *e96bbff9e4; // 0x01(0x01)
	bool *178135b53f; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SampleRate; // 0x04(0x04)
	float Length; // 0x08(0x04)
};

// ScriptStruct Engine.*9034ccd9d3
// Size: 0x20 (Inherited: 0x00)
struct F*9034ccd9d3 {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.*b3617be4a5
// Size: 0x20 (Inherited: 0x00)
struct F*b3617be4a5 {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.*5f7a7069d1
// Size: 0x40 (Inherited: 0x00)
struct F*5f7a7069d1 {
	struct FTransform Value; // 0x00(0x30)
	struct FName Name; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Engine.*d65d525735
// Size: 0x10 (Inherited: 0x00)
struct F*d65d525735 {
	struct FColor Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.*695257e2cc
// Size: 0x18 (Inherited: 0x00)
struct F*695257e2cc {
	struct FVector Value; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName Name; // 0x10(0x08)
};

// ScriptStruct Engine.*8c621f8799
// Size: 0x10 (Inherited: 0x00)
struct F*8c621f8799 {
	float Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0x108 (Inherited: 0x30)
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x30(0x18)
	struct FPoseLink Additive; // 0x48(0x18)
	int32 LODThreshold; // 0x60(0x04)
	float ActualAlpha; // 0x64(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float Alpha; // 0x6c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x70(0x08)
	bool bAlphaBoolEnabled; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x80(0x50)
	struct FName AlphaCurveName; // 0xd0(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xd8(0x30)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0xe0 (Inherited: 0x30)
struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	struct FPoseLink Pose; // 0x30(0x18)
	struct FName CachePoseName; // 0x48(0x08)
	float GlobalWeight; // 0x50(0x04)
	char pad_54[0x8c]; // 0x54(0x8c)
};

// ScriptStruct Engine.AnimNode_StateMachine
// Size: 0xe0 (Inherited: 0x30)
struct FAnimNode_StateMachine : FAnimNode_Base {
	int32 StateMachineIndexInClass; // 0x30(0x04)
	int32 MaxTransitionsPerFrame; // 0x34(0x04)
	bool bSkipFirstUpdateTransition; // 0x38(0x01)
	char pad_39[0xf]; // 0x39(0x0f)
	int32 CurrentState; // 0x48(0x04)
	float ElapsedTime; // 0x4c(0x04)
	char pad_50[0x90]; // 0x50(0x90)
};

// ScriptStruct Engine.*02a7713df1
// Size: 0x30 (Inherited: 0x00)
struct F*02a7713df1 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.*1e851194ac
// Size: 0xd0 (Inherited: 0x00)
struct F*1e851194ac {
	char pad_0[0x90]; // 0x00(0x90)
	struct UBlendProfile* BlendProfile; // 0x90(0x08)
	char pad_98[0x38]; // 0x98(0x38)
};

// ScriptStruct Engine.AnimNode_SubInput
// Size: 0x68 (Inherited: 0x30)
struct FAnimNode_SubInput : FAnimNode_Base {
	struct FExposedValueHandler EvaluateGraphExposedInputs; // 0x08(0x28)
	char pad_58[0x10]; // 0x58(0x10)
};

// ScriptStruct Engine.AnimNode_SubInstance
// Size: 0xd8 (Inherited: 0x30)
struct FAnimNode_SubInstance : FAnimNode_Base {
	struct FPoseLink InPose; // 0x30(0x18)
	struct UClass* InstanceClass; // 0x48(0x08)
	bool bShouldReinitialize; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FName ReinitializePropertyName; // 0x58(0x08)
	struct UAnimInstance* InstanceToRun; // 0x60(0x08)
	struct TArray<struct UProperty*> InstanceProperties; // 0x68(0x10)
	struct TArray<struct UProperty*> SubInstanceProperties; // 0x78(0x10)
	struct TArray<struct FName> SourcePropertyNames; // 0x88(0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)
	struct UBoolProperty* ReinitializeProperty; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0x78 (Inherited: 0x30)
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	enum class *7d3e28f654 DataSource; // 0x30(0x01)
	enum class *bb8b0ad3e1 EvaluatorMode; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32 FramesToCachePose; // 0x34(0x04)
	char pad_38[0x38]; // 0x38(0x38)
	int32 CacheFramesRemaining; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x80 (Inherited: 0x30)
struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x30(0x01)
	char pad_31[0x4f]; // 0x31(0x4f)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x50 (Inherited: 0x30)
struct FAnimNode_UseCachedPose : FAnimNode_Base {
	struct FPoseLink LinkToCachingNode; // 0x30(0x18)
	struct FName CachePoseName; // 0x48(0x08)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	struct FPoseLink LocalPose; // 0x30(0x18)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x30(0x18)
};

// ScriptStruct Engine.*c9cb07d424
// Size: 0x01 (Inherited: 0x00)
struct F*c9cb07d424 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*bb614fb6c5
// Size: 0x68 (Inherited: 0x58)
struct F*bb614fb6c5 : FIndexedCurve {
	struct TArray<struct F*2108d9bf3b> Keys; // 0x58(0x10)
};

// ScriptStruct Engine.*2108d9bf3b
// Size: 0x10 (Inherited: 0x00)
struct F*2108d9bf3b {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Value; // 0x08(0x08)
};

// ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x00)
struct FMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FString *e2958fea0a; // 0x08(0x10)
	struct FName MemberName; // 0x18(0x08)
	struct FGuid *a35af00483; // 0x20(0x10)
	bool *39f8b4a552; // 0x30(0x01)
	bool *ddaba3bcd3; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Engine.*c5c5115681
// Size: 0x68 (Inherited: 0x00)
struct F*c5c5115681 {
	enum class EDrawDebugItemType *fb89bc0044; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *bc3688d77b; // 0x04(0x0c)
	struct FVector *29ca3f164f; // 0x10(0x0c)
	struct FVector Center; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	float Radius; // 0x34(0x04)
	float Size; // 0x38(0x04)
	int32 Segments; // 0x3c(0x04)
	struct FColor Color; // 0x40(0x04)
	bool *f408cb8f25; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float LifeTime; // 0x48(0x04)
	float Thickness; // 0x4c(0x04)
	struct FString Message; // 0x50(0x10)
	struct FVector2D *d946ec93da; // 0x60(0x08)
};

// ScriptStruct Engine.*363248a704
// Size: 0x6a0 (Inherited: 0x520)
struct F*363248a704 : F*434fea7363 {
	char pad_520[0x180]; // 0x520(0x180)
};

// ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x58 (Inherited: 0x30)
struct FAnimNode_SingleNode : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x30(0x18)
	char pad_48[0x10]; // 0x48(0x10)
};

// ScriptStruct Engine.*d6425dff2d
// Size: 0x20 (Inherited: 0x00)
struct F*d6425dff2d {
	struct FVector4 Plane; // 0x00(0x10)
	float PlaneOffsetOutside; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Engine.*e5333a10b2
// Size: 0x70 (Inherited: 0x50)
struct F*e5333a10b2 : F*e0097e8aa6 {
	struct FVector PlaneX; // 0x50(0x0c)
	struct FVector PlaneY; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Engine.*e0097e8aa6
// Size: 0x50 (Inherited: 0x00)
struct F*e0097e8aa6 {
	struct FVector4 Plane; // 0x00(0x10)
	struct FVector2D PlaneOffset; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FVector4 PlaneRadiusXYInOut; // 0x20(0x10)
	struct FVector4 FadeRangeXYInOut; // 0x30(0x10)
	struct FVector2D UprightMulAdd; // 0x40(0x08)
	bool bAdditive; // 0x48(0x01)
	enum class *71f1052399 SoftPlaneImportance; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Engine.*8def7fd16a
// Size: 0xd0 (Inherited: 0x00)
struct F*8def7fd16a {
	char pad_0[0x4]; // 0x00(0x04)
	float BlurLevel; // 0x04(0x04)
	float DepthBlurPower; // 0x08(0x04)
	float DepthBlurBlackPoint; // 0x0c(0x04)
	float DepthBlurWhitePoint; // 0x10(0x04)
	float ScopeRadiusNear; // 0x14(0x04)
	float ScopeRadiusFar; // 0x18(0x04)
	float ScopeEllipseRatio; // 0x1c(0x04)
	char bReverseScopeMask : 1; // 0x20(0x01)
	char bReticleExtendTextureBorder : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float ReticleAngularSize; // 0x24(0x04)
	struct FVector2D ReticleTextureCenter; // 0x28(0x08)
	float ReticleGamma; // 0x30(0x04)
	struct FLinearColor ReticleTint; // 0x34(0x10)
	float LensDistortion; // 0x44(0x04)
	float LensCA; // 0x48(0x04)
	float OuterBrightness; // 0x4c(0x04)
	struct FLinearColor LensTint; // 0x50(0x10)
	float ParallaxMovementScale; // 0x60(0x04)
	float ParallaxRadiusScale; // 0x64(0x04)
	struct FVector ScopeCenterNear; // 0x68(0x0c)
	struct FVector ScopeCenterFar; // 0x74(0x0c)
	struct FVector ReticleCenter; // 0x80(0x0c)
	struct FVector ReticleUp; // 0x8c(0x0c)
	struct FVector2D ReticleRect; // 0x98(0x08)
	struct UTexture2D* ReticleTexture; // 0xa0(0x08)
	float ReticleDirtPower; // 0xa8(0x04)
	float ReticleDirtSize; // 0xac(0x04)
	struct UTexture2D* ReticleDirtTexture; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FVector4 ReticleBrightSceneVisibilityMultipliers; // 0xc0(0x10)
};


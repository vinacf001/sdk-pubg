// WidgetBlueprintGeneratedClass WorldMarkerWidget.WorldMarkerWidget_C
// Size: 0x371 (Inherited: 0x310)
struct UWorldMarkerWidget_C : U*bc4fd88fb0 {
	struct UImage* MarkerType; // 0x310(0x08)
	struct UImage* WorldMarker; // 0x318(0x08)
	struct TMap<enum class EMarkerType, struct UTexture2D*> MarkerTypeToTextureMap; // 0x320(0x50)
	enum class EMarkerType CurrentMarkerType; // 0x370(0x01)
};


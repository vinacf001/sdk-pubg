// WidgetBlueprintGeneratedClass WorldMarkerWidget.WorldMarkerWidget_C
// Size: 0x379 (Inherited: 0x318)
struct UWorldMarkerWidget_C : U*29cc67e3b5 {
	struct UImage* MarkerType; // 0x318(0x08)
	struct UImage* WorldMarker; // 0x320(0x08)
	struct TMap<enum class EMarkerType, struct UTexture2D*> MarkerTypeToTextureMap; // 0x328(0x50)
	enum class EMarkerType CurrentMarkerType; // 0x378(0x01)

	struct FLinearColor Get_MarkerType_ColorAndOpacity_Inner(); // Function WorldMarkerWidget.WorldMarkerWidget_C.Get_MarkerType_ColorAndOpacity_Inner // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x273e04
	struct FSlateBrush Get_MarkerType_Texture(); // Function WorldMarkerWidget.WorldMarkerWidget_C.Get_MarkerType_Texture // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x273e04
	void SetOpacity(); // Function WorldMarkerWidget.WorldMarkerWidget_C.SetOpacity // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FLinearColor Get_WorldMarker_ColorAndOpacity_Outline(); // Function WorldMarkerWidget.WorldMarkerWidget_C.Get_WorldMarker_ColorAndOpacity_Outline // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x273e04
};


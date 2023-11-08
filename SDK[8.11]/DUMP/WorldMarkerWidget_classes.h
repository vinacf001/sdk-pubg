// WidgetBlueprintGeneratedClass WorldMarkerWidget.WorldMarkerWidget_C
// Size: 0x371 (Inherited: 0x310)
struct UWorldMarkerWidget_C : U*477b63fdaa {
	struct UImage* MarkerType; // 0x310(0x08)
	struct UImage* WorldMarker; // 0x318(0x08)
	struct TMap<enum class EMarkerType, struct UTexture2D*> MarkerTypeToTextureMap; // 0x320(0x50)
	enum class EMarkerType CurrentMarkerType; // 0x370(0x01)

	void Get_MarkerType_ColorAndOpacity_Inner(); // Function WorldMarkerWidget.WorldMarkerWidget_C.Get_MarkerType_ColorAndOpacity_Inner // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	bool Get_MarkerType_Texture(); // Function WorldMarkerWidget.WorldMarkerWidget_C.Get_MarkerType_Texture // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	void SetOpacity(); // Function WorldMarkerWidget.WorldMarkerWidget_C.SetOpacity // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Get_WorldMarker_ColorAndOpacity_Outline(struct FLinearColor ReturnValue, float CallFunc__e95d845ce6_ReturnValue, float K2Node_Select_Default); // Function WorldMarkerWidget.WorldMarkerWidget_C.Get_WorldMarker_ColorAndOpacity_Outline // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
};


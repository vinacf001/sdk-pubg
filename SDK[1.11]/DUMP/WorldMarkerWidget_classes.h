// WidgetBlueprintGeneratedClass WorldMarkerWidget.WorldMarkerWidget_C
// Size: 0x371 (Inherited: 0x310)
struct UWorldMarkerWidget_C : U*29cc67e3b5 {
	struct UImage* MarkerType[0x08]; // 0x310(0x08)
	struct UImage* WorldMarker[0x08]; // 0x318(0x08)
	struct TMap<enum class EMarkerType, struct UTexture2D*> MarkerTypeToTextureMap[0x50]; // 0x320(0x50)
	enum class EMarkerType CurrentMarkerType; // 0x370(0x01)

	void Get_MarkerType_ColorAndOpacity_Inner(); // Function WorldMarkerWidget.WorldMarkerWidget_C.Get_MarkerType_ColorAndOpacity_Inner // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2cd4ac
	bool Get_MarkerType_Texture(); // Function WorldMarkerWidget.WorldMarkerWidget_C.Get_MarkerType_Texture // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2cd4ac
	void SetOpacity(); // Function WorldMarkerWidget.WorldMarkerWidget_C.SetOpacity // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Get_WorldMarker_ColorAndOpacity_Outline(enum class EMarkerType ___byte_Variable, float* CallFunc__6d8f337be7_ReturnValue2); // Function WorldMarkerWidget.WorldMarkerWidget_C.Get_WorldMarker_ColorAndOpacity_Outline // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2cd4ac
};


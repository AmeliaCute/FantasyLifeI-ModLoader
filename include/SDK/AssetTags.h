
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/AssetTags.ECollectionScriptingShareType
/// Size: 0x01 (1 bytes)
enum class ECollectionScriptingShareType : uint8_t
{
	ECollectionScriptingShareType__Local                                             = 0,
	ECollectionScriptingShareType__Private                                           = 1,
	ECollectionScriptingShareType__Shared                                            = 2
};

/// Class /Script/AssetTags.AssetTagsSubsystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAssetTagsSubsystem : public UEngineSubsystem
{ 
public:


	/// Functions
	// Function /Script/AssetTags.AssetTagsSubsystem.K2_GetCollectionsContainingAsset
	// TArray<FName> K2_GetCollectionsContainingAsset(FSoftObjectPath& AssetPath);                                              // [0x82fa520] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
	// TArray<FName> GetCollectionsContainingAssetPtr(class UObject* AssetPtr);                                                 // [0x82fa3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
	// TArray<FName> GetCollectionsContainingAssetData(FAssetData& AssetData);                                                  // [0x82fa220] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
	// TArray<FName> GetCollectionsContainingAsset(FName AssetPathName);                                                        // [0x82fa110] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollections
	// TArray<FName> GetCollections();                                                                                          // [0x82f9fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.GetAssetsInCollection
	// TArray<FAssetData> GetAssetsInCollection(FName Name);                                                                    // [0x82f9e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/AssetTags.AssetTagsSubsystem.CollectionExists
	// bool CollectionExists(FName Name);                                                                                       // [0x82f9d60] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)



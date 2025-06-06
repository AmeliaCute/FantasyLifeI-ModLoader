#ifndef UGDSCHARADATA_HPP
    #define UGDSCHARADATA_HPP
    
    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"

enum class EGenderType : uint8_t
{
	None                                                                = 0,
	Male                                                                = 1,
	Female                                                              = 2,
	Unknown                                                             = 3
};

class FGDCharaData : public FTableRowBase 
{
    public:
        FName           ID;
        FName           Flag;
        FName           nameId;
        FName           modelID;
        TArray<FName>   AnimLoadGroupIDList;
        FName           moveSpeed;
        FName           CraftAreaMoveSpeed;
        char            gender;
        bool            isAvatar;
        FName           iconID;
        FName           BodyIconId;
        FName           lifeIconId;
        FName           nicknameId;
        FName           VoiceOverrideID;
};

class UGDSCharaData : public UGameDataAsset
{
    public:
        TMap<FName, FGDCharaData>   m_dataMap;
};

#endif // !UGDSCHARADATA_HPP
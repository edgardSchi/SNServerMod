class CfgPatches
{
    class SN_IDCard
    {
        units[]=
        {
            "SN_Boombox"
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data"
        };
    };
};
class CfgVehicles
{
	class Inventory_Base;
	class SN_IDCard: Inventory_Base
	{
		scope=2;
		displayName="Debug IDCard";
		descriptionShort="???????";
		model="SilensNox\roleplay\IDCard\IDCard.p3d";
		lootCategory="Civillian";
		targetCategory="loot";
		weight=1;
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"SilensNox\roleplay\IDCard\Data\IDCard_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SilensNox\roleplay\IDCard\Data\IDCard.rvmat"
		};
	};
};
    
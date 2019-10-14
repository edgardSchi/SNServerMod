class CfgPatches
{
    class SN_ZaunMitSeil
    {
        units[]=
        {
            "SN_ZaunMitSeil"
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
	class SN_Roleplay_Base;
	class SN_ZaunMitSeil: SN_Roleplay_Base
	{
		scope=2;
		displayName="Zaun mit Seil";
		descriptionShort="Ein Zaun mit Seil! (Extra für Mike)";
		model="SilensNox\roleplay\ZaunmitSeil\ZaunMitSeil.p3d";
		lootCategory="Civillian";
		targetCategory="loot";
		weight=2000;
		itemSize[]={2,6};
		physLayer="item_large";
		attachments[]=
		{
			"shoulder",
			"Back",
			"Gloves"
		};
	};
};
    
class CfgPatches
{
    class SN_UniqueItems
    {
        units[]=
        {
            "NepNep"
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
	class ItemBook;
	class SN_Froschi: ItemBook
	{
		scope=2;
		displayName="Marry's Tagebuch";
		descriptionShort="Das Buch für die eigenen Buchstabenkompositionen.";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"SilensNox\roleplay\UniqueItems\Data\Diary_co.paa"
		};
	};
};
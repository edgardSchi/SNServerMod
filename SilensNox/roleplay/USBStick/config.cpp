class CfgPatches
{
    class SN_USBStick
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
	class SN_USBStick: Inventory_Base
	{
		scope=2;
		displayName="USB Stick";
		descriptionShort="Ein Typ A USB-Stick";
		model="SilensNox\roleplay\USBStick\USBStick.p3d";
		lootCategory="Civillian";
		targetCategory="loot";
		weight=5;
		itemSize[]={1,1};
		hiddenSelections[]=
		{
			"USBStick"
		};
		hiddenSelectionsTextures[]=
		{
			"SilensNox\roleplay\USBStick\Data\USBStick_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SilensNox\roleplay\USBStick\Data\USBStick.rvmat"
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SilensNox\roleplay\USBStick\Data\USBStick.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SilensNox\roleplay\USBStick\Data\USBStick.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SilensNox\roleplay\USBStick\Data\USBStick_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SilensNox\roleplay\USBStick\Data\USBStick_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SilensNox\roleplay\USBStick\Data\USBStick_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SN_USBStickPolina: SN_USBStick
	{
		scope=2;
		displayName="Seltsamer USB-Stick";
		descriptionShort="Irgendwas ist komisch mit diesen USB Stick....";
	};
};
    
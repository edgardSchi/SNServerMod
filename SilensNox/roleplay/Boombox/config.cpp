class CfgPatches
{
    class SN_Boombox
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
	class SN_Boombox: Inventory_Base
	{
		scope=2;
		displayName="Boombox";
		descriptionShort="Eine Boombox um Musik zu hören! (Extra für Boris eingebaut)";
		model="SilensNox\roleplay\Boombox\Boombox.p3d";
		lootCategory="Civillian";
		targetCategory="loot";
		weight=14000;
		itemSize[]={7,5};
		hiddenSelections[]=
		{
			"Boombox"
		};
		hiddenSelectionsTextures[]=
		{
			"SilensNox\roleplay\Boombox\Boombox_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SilensNox\roleplay\Boombox\Boombox.rvmat"
		};
		attachments[]=
		{
			"BatteryD",
			"SNCassette"
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=1.7;
			plugType=1;
			attachmentAction=1;
			updateInterval=30;
		};
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
								"SilensNox\roleplay\Boombox\Boombox.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SilensNox\roleplay\Boombox\Boombox.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SilensNox\roleplay\Boombox\Boombox_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SilensNox\roleplay\Boombox\Boombox_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SilensNox\roleplay\Boombox\Boombox_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
    
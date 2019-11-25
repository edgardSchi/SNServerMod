class CfgPatches
{
    class SN_Delme
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
	class ITEMA: Inventory_Base
	{
		
		scope=2;
		displayName="ITEMA";
		descriptionShort="???????";
		model="SilensNox\roleplay\IDCard\IDCard.p3d";
		weight=1;
		itemSize[]={1,1};
		canBeSplit=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		hiddenSelectionsTextures[]=
		{
			"SilensNox\roleplay\IDCard\Data\IDCard_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SilensNox\roleplay\IDCard\Data\IDCard.rvmat"
		};
	};
	class ITEMB: Inventory_Base
	{
		scope=2;
		displayName="ITEMB";
		descriptionShort="???????";
		model="SilensNox\roleplay\VehicleKey\VehicleKey.p3d";
		canBeSplit=1;
		varQuantityInit=1500;
		varQuantityMin=0;
		varQuantityMax=1500;
		weight=5;
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"SilensNox\roleplay\VehicleKey\Data\VehicleKey_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SilensNox\roleplay\VehicleKey\Data\VehicleKey.rvmat"
		};
	};
	class ITEMC: Inventory_Base
	{
		scope=2;
		displayName="ITEMC";
		descriptionShort="Eine Boombox um Musik zu hören! (Extra für Boris eingebaut)";
		model="SilensNox\roleplay\Boombox\Boombox.p3d";
		canBeSplit=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		weight=14000;
		itemSize[]={7,5};
		hiddenSelections[]=
		{
			"Boombox"
		};
		hiddenSelectionsTextures[]=
		{
			"SilensNox\roleplay\Boombox\Data\boom_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SilensNox\roleplay\Boombox\Data\Boombox.rvmat"
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
								"SilensNox\roleplay\Boombox\Data\Boombox.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SilensNox\roleplay\Boombox\Data\Boombox.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SilensNox\roleplay\Boombox\Data\Boombox_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SilensNox\roleplay\Boombox\Data\Boombox_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SilensNox\roleplay\Boombox\Data\Boombox_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
    
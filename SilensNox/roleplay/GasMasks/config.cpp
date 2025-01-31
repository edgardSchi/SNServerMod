class CfgPatches
{
    class SN_GasMasks
    {
        units[]=
        {
            "SN_Boombox"
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
			"DZ_Characters_Masks",
			"PMK_5A_Gas_Mask"
        };
    };
};
class CfgVehicles
{
	class Clothing;
	class Inventory_Base;
	class GasMask: Clothing
	{
		attachments[]=
		{
			"SNFilters"
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=1;
			plugType=1;
			attachmentAction=1;
			updateInterval=1;
		};
	};
	class GP5GasMask: Clothing
	{
		attachments[]=
		{
			"SNFilters"
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=1;
			plugType=1;
			attachmentAction=1;
			updateInterval=1;
		};
	};
	class PMK_5A_Gas_Mask: Clothing
	{
		attachments[]=
		{
			"SNFilters"
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=1;
			plugType=1;
			attachmentAction=1;
			updateInterval=1;
		};
	};
	class SN_GasMaskFilter_Base: Inventory_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="\DZ\characters\masks\GP5GasMask_filter.p3d";
		quantityBar=1;
		stackedUnit="w";
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		inventorySlot[]=
		{
		"SNFilters"
		};
		rotationFlags=1;
		weight=200;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.60000002;
		visibilityModifier=0.94999999;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\masks\data\GP5GasMask_white_co.paa"
		};
		class EnergyManager
		{
			hasIcon=0;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=14400;
			energyAtSpawn=14400;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
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
								"DZ\characters\masks\data\GP5GasMask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\GP5GasMask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\GP5GasMask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\GP5GasMask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\GP5GasMask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};	
	class SN_T1Filter: SN_GasMaskFilter_Base
	{
		scope=2;
		displayName="Gasmaskenfilter";
		descriptionShort="Ein Gasmaskenfilter!";
		varQuantityInit=50;
		varQuantityMax=50;
		weight=200;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\masks\data\GP5GasMask_white_co.paa"
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
								"DZ\characters\masks\data\GP5GasMask_damage.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\GP5GasMask_damage.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\GP5GasMask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\GP5GasMask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\GP5GasMask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class EnergyManager
		{
			hasIcon=0;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=14400;
			energyAtSpawn=14400;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
	};	
};
    
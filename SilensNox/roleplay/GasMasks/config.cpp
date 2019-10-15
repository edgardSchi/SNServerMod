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
			"DZ_Characters_Masks"
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
			hasIcon=0;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=1;
			plugType=15;
			attachmentAction=1;
			updateInterval=30;
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
			hasIcon=0;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=1;
			plugType=1;
			attachmentAction=1;
			updateInterval=30;
		};
	};
	class SN_GasMaskFilter_Base: Inventory_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="\DZ\characters\masks\GP5GasMask_filter.p3d";
		inventorySlot[]=
		{
		"SNFilters",
		"SNFilters1"
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
			energyStorageMax=50;
			energyAtSpawn=50;
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
		displayName="";
		descriptionShort="";
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
	};	
	class SN_T2Filter: SN_GasMaskFilter_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\masks\data\GP5GasMask_white_co.paa"
		};
	};	
};
    
class CfgPatches
{
	class SN_Optics
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Optics"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;	
	class ItemOptics;
	class Crossbow_RedpointOptic: ItemOptics
	{
		scope=2;
		displayName="$STR_cfgVehicles_Crossbow_RedpointOptic0";
		descriptionShort="$STR_cfgVehicles_Crossbow_RedpointOptic1";
		model="\DZ\weapons\attachments\optics\optic_red_point.p3d";
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot="weaponOpticsCrossbow";
		selectionFireAnim="zasleh";
		rotationFlags=16;
		reversed=0;
		weight=250;
		itemSize[]={2,1};
		dispersionModifier=-0.0089999996;
		recoilModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"reddot"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
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
								"DZ\weapons\attachments\data\lensglass_ca.paa",
								"DZ\weapons\attachments\data\red_point.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\lensglass_damaged_ca.paa",
								"DZ\weapons\attachments\data\red_point_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\lensglass_destroyed_ca.paa",
								"DZ\weapons\attachments\data\red_point_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticSightTexture="dz\weapons\attachments\data\collimdot_red_ca.paa";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=15;
			distanceZoomMax=15;
			discreteDistance[]={15,30,50,75,100};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
};
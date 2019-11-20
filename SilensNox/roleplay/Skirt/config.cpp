class CfgPatches
{
	class SN_Skirt
	{
		units[]=
		{
			"bdu_pants_Woodland"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Skirt_ColorBase;
	class Clothing;
	class SN_Skirttest: Clothing
	{
		scope=2;
		displayName="Skirt";
		descriptionShort="I CAN SEE YOUR PANTSU";
		
		hiddenSelectionsTextures[]=
		{
			"SilensNox\roleplay\Skirt\Data\Skirt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SilensNox\roleplay\Skirt\Data\Skirt.rvmat"
		};
		model="SilensNox\roleplay\Skirt\Skirt.p3d";
		class ClothingTypes
		{
			male="SilensNox\roleplay\Skirt\Skirt.p3d";
			female="SilensNox\roleplay\Skirt\Skirt.p3d";
		};
		quickBarBonus=2;
		itemSize[]={3,1};
		itemsCargoSize[]={0,0};
		weight=470;
		ragQuantity=2;
		absorbency=0.69999999;
		heatIsolation=0.30000001;
		visibilityModifier=0.94999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		inventorySlot="Hips";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
	};
};
/*
class Skirt_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_Skirt_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Skirt_ColorBase1";
		model="\DZ\characters\pants\Skirt_g.p3d";
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={3,1};
		itemsCargoSize[]={5,4};
		weight=470;
		ragQuantity=2;
		absorbency=0.69999999;
		heatIsolation=0.30000001;
		visibilityModifier=0.94999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\pants\data\Skirt.rvmat",
			"dz\characters\pants\data\Skirt.rvmat",
			"dz\characters\pants\data\Skirt.rvmat",
			""
		};
		class ClothingTypes
		{
			male="\DZ\characters\pants\Skirt_m.p3d";
			female="\DZ\characters\pants\Skirt_f.p3d";
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
								"DZ\characters\pants\Data\Skirt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\pants\Data\Skirt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\pants\Data\Skirt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\pants\Data\Skirt_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\pants\Data\Skirt_destruct.rvmat"
							}
						}
					};
				};
			};
		};
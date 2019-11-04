class CfgPatches
{
    class SN_Fixes
    {
        units[]=
        {
            "Food_BoxCerealCrunchin"
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
            "DZ_Gear_Food",
			"MunghardsWonderbread",
			"DZ_Characters",
			"DZ_Characters_Zombies",
			"MunghardsShelter",
			"DZ_Gear_Cooking",
			"DZ_Gear_Traps",
			"SN_RoleplayItems",
			"DZ_Gear_Consumables",
			"DZ_Vehicles_Parts",
			"DZ_Gear_Medical",
			"DZ_Gear_Drinks",
			"DZ_Gear_Tools",
			"OP_Lock",
			"DZ_Gear_Crafting",
			"cdub_sneaky_stashes",
			"DZ_Gear_Camping",
			"DZ_Gear_Containers",
			"DZ_Characters"
        };
    };
};
class CfgVehicles
{
    class Edible_Base;
	class DayZInfected;
	class ZombieMaleBase;
	class ZombieFemaleBase;
	class Container_Base;
	class Inventory_Base;
	class Trap_Base;
	class Bottle_Base;
	class CarScript;
	class AnimalBase;
	class dec_base;
	class Man;
	class Barrel_ColorBase: Container_Base
	{
		attachments[]=
		{
			"Lime"
		};
		class GUIInventoryAttachmentsProps
		{
			class TanLeather
			{
				name="$STR_attachment_TanLeather0";
				description="";
				attachmentSlots[]=
				{
					"Lime"
				};
				icon="cat_tan_leather";
			};
		};
	};
	class SeaChest: Container_Base
	{
		physLayer="item_large";
	};
	class SurvivorBase: Man
	{
		attachments[]=
		{
			"Head",
			"Shoulder",
			"Melee",
			"Headgear",
			"Mask",
			"Eyewear",
			"Hands",
			"LeftHand",
			"Gloves",
			"Armband",
			"Vest",
			"Body",
			"Back",
			"Hips",
			"Legs",
			"Feet"
		};
		class enfAnimSys
		{
			meshObject="dz\characters\bodies\player_testing.xob";
			graphName="dz\anims\workspaces\player\player_main\player_main.agr";
			defaultInstance="SilensNox\Animations\playermodi.asi";
			skeletonName="player_testing.xob";
			startNode="MasterControl";
		};
		class AnimEvents
		{
			class Sounds
			{
				class Back_Knife_Hide
				{
					soundset="Back_Knife_Hide_SoundSet";
					id=4000;
				};
				class Back_Knife_Show
				{
					soundset="Back_Knife_Show_SoundSet";
					id=4000;
				};
			};
		};
	};
	class flower1: dec_base
	{
		scope=2;
		displayName="Topfpflanzen";
		descriptionShort="Einmal am Tag streicheln c:";
		model="\DZ\structures\furniture\decoration\flowers\flower_01.p3d";
	};
	class flower2: dec_base
	{
		displayName="Topfpflanzen";
		descriptionShort="Einmal am Tag wässern c:";
		scope=2;
		model="\DZ\structures\furniture\decoration\flowers\flower_02.p3d";
	};
	class Cassette: Inventory_Base
	{
		inventorySlot="SNCassette";
	};
	class SurrenderDummyItem: Inventory_Base
	{
		scope=1;
		model="\DZ\data\lightpoint.p3d";
		weight=1;
		itemSize[]={500,500};
	};
	class WoodenLog: Inventory_Base
	{
		weight=20000;
	};
	class Animal_GallusGallusDomesticus: AnimalBase
	{
		class Skinning
		{
			class ObtainedSteaks
			{
				item="ChickenBreastMeat";
				count=2;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedFeathers
			{
				item="ChickenFeather";
				count=1;
				quantityMinMaxCoef[]={0.5,1};
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="SmallGuts";
				count=0;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedBones
			{
				item="Bone";
				count=1;
				quantityMinMaxCoef[]={0.2,0.30000001};
				transferToolDamageCoef=1;
			};
		};
	};
	class Animal_GallusGallusDomesticusF: AnimalBase
	{
		class Skinning
		{
			class ObtainedSteaks
			{
				item="ChickenBreastMeat";
				count=2;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedFeathers
			{
				item="ChickenFeather";
				count=1;
				quantityMinMaxCoef[]={0.5,1};
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="SmallGuts";
				count=0;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedBones
			{
				item="Bone";
				count=1;
				quantityMinMaxCoef[]={0.2,0.30000001};
				transferToolDamageCoef=1;
			};
		};
	};
	class SN_SodaCan_ColorBase: Bottle_Base
	{
		scope=0;
		model="\dz\gear\drinks\SodaCan.p3d";
		inventorySlot="Belt_Left";
		weight=15;
		itemSize[]={1,2};
		varQuantityInit=330;
		varQuantityMin=0;
		varQuantityMax=330;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=600;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
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
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
	};
	class SN_SodaCan_Pipsi: SN_SodaCan_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SodaCan_Pipsi0";
		descriptionShort="Manchmal macht es Piep...";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\drinks\Data\SodaCan_pipsi_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SN_SodaCan_Cola: SN_SodaCan_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SodaCan_Cola0";
		descriptionShort="$STR_CfgVehicles_SodaCan_Cola1";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\drinks\Data\SodaCan_cola_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SN_SodaCan_Spite: SN_SodaCan_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SodaCan_Spite0";
		descriptionShort="$STR_CfgVehicles_SodaCan_Spite1";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\drinks\Data\SodaCan_spite_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SN_SodaCan_Kvass: SN_SodaCan_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SodaCan_Kvass0";
		descriptionShort="$STR_CfgVehicles_SodaCan_Kvass1";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\drinks\Data\SodaCan_rasputin_kvass_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Gerph_Zil130: CarScript
	{
		fuelCapacity=175;
		fuelConsumption=32;
		class Cargo
		{
			itemsCargoSize[]={10,80};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class Torch: Inventory_Base
	{
		burnTimePerRag=600;
		burnTimePerFullLardDose=1800;
		forceFarBubble="true";
		slopeTolerance=0.50000001;
	};
	class OPLock: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class Shovel: Inventory_Base
	{
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
	};
	class Hammer: Inventory_Base
	{
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
	};
	class Vodka: Bottle_Base
	{
		varQuantityInit=1000;
		varQuantityMax=1000;
	};
	class DisinfectantAlcoholBase: Bottle_Base
	{
		scope=0;
	};
	class DisinfectantAlcohol: DisinfectantAlcoholBase
	{
		scope=2;
		varQuantityDestroyOnMin=0;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
	class TruckBattery: Inventory_Base
	{
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			convertEnergyToQuantity=1;
			energyStorageMax=9000;
			energyAtSpawn=9000;
			reduceMaxEnergyByDamageCoef=0.5;
			powerSocketsCount=1;
			plugType=4;
			compatiblePlugTypes[]={8};
			attachmentAction=2;
		};
	};
	class CarBattery: Inventory_Base
	{
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			convertEnergyToQuantity=1;
			energyStorageMax=3000;
			energyAtSpawn=3000;
			reduceMaxEnergyByDamageCoef=0.5;
			powerSocketsCount=1;
			plugType=4;
			compatiblePlugTypes[]={5,8,6};
			attachmentAction=2;
		};
	};
	class AircraftBattery: Inventory_Base
	{
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			convertEnergyToQuantity=1;
			energyStorageMax=3000;
			energyAtSpawn=3000;
			reduceMaxEnergyByDamageCoef=0.5;
			powerSocketsCount=1;
			plugType=4;
			compatiblePlugTypes[]={5,8,6};
			attachmentAction=2;
		};
	};
	class Battery9V: Inventory_Base
	{
		inventorySlot[]=
		{
			"BatteryD",
			"SNBattery"
		};
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=300;
			energyAtSpawn=300;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
	};
	class SmallFishTrap: Trap_Base
	{
		stackedUnit="ml";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=0;
		liquidContainerType="";
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
	};
	//Nahrung
    class BoxCerealCrunchin: Edible_Base
    {
        class Nutrition
        {
            fullnessIndex=2.5;
            energy=399;
            water=-100;
            nutritionalIndex=1;
            toxicity=0;
        };
    };
	class Rice: Edible_Base
	{
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=365;
			water=-100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Marmalade: Edible_Base
	{
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=280;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class wonderbread_mung: Edible_Base
	{
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=200;
			water=-20;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
};
class cfgLiquidDefinitions
{
	class Soda
	{
		type=600;
		displayName="Soda";
		flammability=10;
		class Nutrition
		{
			fullnessIndex=1;
			energy=50;
			water=100;
			nutritionalIndex=75;
			toxicity=0.050000001;
			digestibility=2;
		};
	};
	class Water
	{
		type=512;
		displayName="$STR_cfgLiquidDefinitions_Water0";
		flammability=-10;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=100;
			nutritionalIndex=75;
			toxicity=-0.0099999998;
			digestibility=2;
		};
	};
	class RiverWater
	{
		type=1024;
		displayName="$STR_cfgLiquidDefinitions_RiverWater0";
		flammability=-10;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=100;
			nutritionalIndex=75;
			toxicity=-0.0099999998;
			digestibility=2;
		};
	};
	class Disinfectant
	{
		type=32768;
		displayName="$STR_cfgLiquidDefinitions_Disinfectant0";
		flammability=10;
		class Nutrition
		{
			fullnessIndex=100;
			energy=-10;
			water=1;
			nutritionalIndex=55;
			toxicity=0.30000001;
			digestibility=2;
		};
	};
	class Vodka
	{
		type=2048;
		displayName="$STR_cfgLiquidDefinitions_Vodka0";
		flammability=10;
		class Nutrition
		{
			fullnessIndex=1;
			energy=231;
			water=15;
			nutritionalIndex=75;
			toxicity=0.050000001;
			digestibility=2;
		};
	};
	class Beer
	{
		type=4096;
		displayName="$STR_cfgLiquidDefinitions_Beer0";
		flammability=0;
		class Nutrition
		{
			fullnessIndex=1;
			energy=43;
			water=100;
			nutritionalIndex=75;
			toxicity=0.0099999998;
			digestibility=2;
		};
	};
	class Gasoline
	{
		type=8192;
		displayName="$STR_cfgLiquidDefinitions_Gasoline0";
		flammability=50;
		class Nutrition
		{
			fullnessIndex=100;
			energy=5;
			water=0;
			nutritionalIndex=75;
			toxicity=1;
			digestibility=2;
		};
	};
	class Diesel
	{
		type=16384;
		displayName="$STR_cfgLiquidDefinitions_Diesel0";
		flammability=50;
		class Nutrition
		{
			fullnessIndex=100;
			energy=-10;
			water=0;
			nutritionalIndex=75;
			toxicity=1;
			digestibility=2;
		};
	};
	class Saline
	{
		type=256;
		displayName="$STR_cfgLiquidDefinitions_Saline0";
		flammability=-10;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=0;
			nutritionalIndex=75;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_0Positive
	{
		type=1;
		displayName="$STR_cfgLiquidDefinitions_Blood_0Positive0";
		flammability=50;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_0Negative
	{
		type=2;
		displayName="$STR_cfgLiquidDefinitions_Blood_0Negative0";
		flammability=50;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_APositive
	{
		type=4;
		displayName="$STR_cfgLiquidDefinitions_Blood_APositive0";
		flammability=50;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_ANegative
	{
		type=8;
		displayName="$STR_cfgLiquidDefinitions_Blood_ANegative0";
		flammability=50;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_BPositive
	{
		type=16;
		displayName="$STR_cfgLiquidDefinitions_Blood_BPositive0";
		flammability=50;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_BNegative
	{
		type=32;
		displayName="$STR_cfgLiquidDefinitions_Blood_BNegative0";
		flammability=50;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_ABPositive
	{
		type=64;
		displayName="$STR_cfgLiquidDefinitions_Blood_ABPositive0";
		flammability=50;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_ABNegative
	{
		type=128;
		displayName="$STR_cfgLiquidDefinitions_Blood_ABNegative0";
		flammability=50;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
};
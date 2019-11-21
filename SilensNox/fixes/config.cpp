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
			"DZ_Characters",
			"TheRanch_Vest",
			"Mass_Food",
			"DZ_Characters_Belts"
        };
    };
};
class cfgCharacterCreation
{
	format="Survivor%1_%2";
	gender[]=
	{
		"Female",
		"Male"
	};
	personalityMale[]=
	{
		"Mirek",
		"Boris",
		"Cyril",
		"Denis",
		"Elias",
		"Francis",
		"Guo",
		"Hassan",
		"Indar",
		"Jose",
		"Kaito",
		"Lewis",
		"Manua",
		"Niki",
		"Oliver",
		"Peter",
		"Quinn",
		"Rolf",
		"Seth",
		"Taiki"
	};
	personalityFemale[]=
	{
		"Eva",
		"Frida",
		"Gabi",
		"Helga",
		"Irena",
		"Judy",
		"Keiko",
		"Linda",
		"Maria",
		"Naomi"
	};
	top[]=
	{
		"TrackSuitJacket_Red"
	};
	bottom[]=
	{
		"TrackSuitPants_Red"
	};
	shoe[]=
	{
		"AthleticShoes_Black"
	};
	maleCustom[]={};
	femaleCustom[]={};
};
class BaseFoodStageTransitions
{
	class Raw
	{
		class ToBaked
		{
			transition_to=2;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=3;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=4;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Rotten
	{
		class ToBurned
		{
			transition_to=5;
			cooking_method=1;
		};
	};
	class Baked
	{
		class ToBurned
		{
			transition_to=5;
			cooking_method=1;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Boiled
	{
		class ToBaked
		{
			transition_to=2;
			cooking_method=1;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Dried
	{
		class ToBaked
		{
			transition_to=5;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=3;
			cooking_method=2;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
	};
	class Burned
	{
	};
};
class NotCookable
{
	class Raw
	{
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
};
class MeatStageTransitions: BaseFoodStageTransitions
{
};
class FruitStageTransitions: BaseFoodStageTransitions
{
};
class AnimalCorpsesStageTransitions: BaseFoodStageTransitions
{
};
class MushroomsStageTransitions: BaseFoodStageTransitions
{
};
class FoodAnimationSources
{
	class CS_Raw
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Rotten
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Baked
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Boiled
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Dried
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Burned
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
};
class NutritionModifiers
{
	class General
	{
		base_stage="Raw";
		class Raw
		{
			nutrition_properties[]={1,1,1,1,1};
		};
		class Rotten
		{
			nutrition_properties[]={0.5,0.75,1,0.25,1};
		};
		class Baked
		{
			nutrition_properties[]={2,0.5,0.75,0.75,1};
		};
		class Boiled
		{
			nutrition_properties[]={1,1,0.80000001,0.80000001,1};
		};
		class Dried
		{
			nutrition_properties[]={4,0.1,0.5,0.80000001,1};
		};
		class Burned
		{
			nutrition_properties[]={1,0.25,0.75,0.1,1};
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
	class Trap_Base;
	class Bottle_Base;
	class CarScript;
	class AnimalBase;
	class dec_base;
	class Man;
	class PlantBase;
	class PlateCarrierVest;
	class Tripod;
	class MushroomBase;
	class Clothing;
	class Static;
	class Inventory_Base: Static
	{
		repairableWithKits[]={5};
		repairCosts[]={25};
	};
	class Clothing_Base: Inventory_Base
	{
		repairableWithKits[]={5};
		repairCosts[]={25};
	};
	class MilitaryBelt: Clothing
	{
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
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class MassMeth: Inventory_Base
	{
		itemSize[] = {2,2};
    };
	class FieldShovel: Inventory_Base
	{
		scope=2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
	};
	class FarmingHoe: Inventory_Base
	{
		scope=2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
	};
	class Apple: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,50,80,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,37.5,40,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1.75,87.5,60,1,0};
					cooking_properties[]={70,240};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1.5,62.5,80,1,0};
					cooking_properties[]={70,450};
				};
				class Dried
				{
					visual_properties[]={2,3,3};
					nutrition_properties[]={0.75,50,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={2,37.5,20,1,0};
					cooking_properties[]={100,240};
				};
			};
		};
	};
	class Plum: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,50,80,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,37.5,40,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1.75,87.5,60,1,0};
					cooking_properties[]={70,240};
				};
				class Boiled
				{
					visual_properties[]={2,2,2};
					nutrition_properties[]={1.5,62.5,80,1,0};
					cooking_properties[]={70,450};
				};
				class Dried
				{
					visual_properties[]={3,3,3};
					nutrition_properties[]={0.75,50,8,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={4,4,4};
					nutrition_properties[]={2,37.5,20,1,0};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class Pear: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,50,80,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,37.5,40,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,87.5,60,1,0};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,62.5,80,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,50,8,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,37.5,20,1,0};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class Tomato: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,300};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,500};
				};
			};
		};
	};
	class GreenBellPepper: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,300};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,500};
				};
			};
		};
	};
	class Zucchini: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,300};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,500};
				};
			};
		};
	};
	class SlicedPumpkin: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,300};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={2,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={2,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,500};
				};
			};
		};
	};
	class Potato: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,300};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,500};
				};
			};
		};
	};
	class SambucusBerry: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,50,80,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,37.5,40,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,87.5,60,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,62.5,80,1,0};
					cooking_properties[]={70,150};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,50,8,1,0};
					cooking_properties[]={70,70,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,37.5,20,1,0};
					cooking_properties[]={100,200};
				};
			};
		};
	};
	class CaninaBerry: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,50,80,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,37.5,40,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,87.5,60,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,62.5,80,1,0};
					cooking_properties[]={70,200};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,50,8,1,0};
					cooking_properties[]={70,60,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,37.5,20,1,0};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class Cannabis: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,284,293,30,1};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={1,100,293,10,1,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={70,150};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={70,300};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={70,240,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,20,40,10,1};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class HumanSteakMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,130,70,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						97.5,
						35,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,227.5,52.5,1,0};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,162.5,70,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,130,7,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,97.5,17.5,1,0,16};
					cooking_properties[]={100,150};
				};
			};
		};
	};
	class GoatSteakMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,160,70,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						120,
						35,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,280,52.5,1,0};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,200,70,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,160,7,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,120,17.5,1,0,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class MouflonSteakMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,544,334,236,1,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						1,
						250,
						222,
						35,
						1,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,537,222,129,1};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,537,222,129,1};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,390,130,180,1};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,250,90,50,1,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class BoarSteakMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,130,70,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						97.5,
						35,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,227.5,52.5,1,0};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,162.5,70,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,130,7,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,97.5,17.5,1,0,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class PigSteakMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,130,70,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						97.5,
						35,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,227.5,52.5,1,0};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,162.5,70,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,130,7,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,97.5,17.5,1,0,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class DeerSteakMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,160,70,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						120,
						35,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,280,52.5,1,0};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,200,70,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,160,7,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,120,17.5,1,0,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class WolfSteakMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,140,70,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						105,
						35,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,245,52.5,1,0};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,175,70,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,140,7,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,105,17.5,1,0,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class BearSteakMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,544,334,236,1,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						1,
						250,
						222,
						35,
						1,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,537,222,129,1};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,537,222,129,1};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,390,130,180,1};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,250,90,50,1,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class CowSteakMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,200,65,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						150,
						32.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,350,48.75,1,0};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,250,65,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,200,6.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,150,16.25,1,0,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class SheepSteakMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,160,70,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						120,
						35,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,280,52.5,1,0};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,200,70,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,160,7,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,120,17.5,1,0,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class FoxSteakMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,544,334,236,1,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						1,
						250,
						222,
						35,
						1,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,537,222,129,1};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,537,222,129,1};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,390,130,180,1};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,250,90,50,1,16};
					cooking_properties[]={70,300};
				};
			};
		};
	};
	class ChickenBreastMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,600};
				};
			};
		};
	};
	class RabbitLegMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,517,338,218,1,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						1,
						150,
						338,
						30,
						1,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,480,184,155,1};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,480,184,155,1};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,380,120,150,1};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,100,50,40,1,16};
					cooking_properties[]={70,300};
				};
			};
		};
	};
	class CarpFilletMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,800,360,184,1,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						1,
						200,
						360,
						30,
						1,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,600,222,129,1};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,560,160,150,1};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,390,130,180,1};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,180,40,50,1,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class MackerelFilletMeat: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,800,360,184,1,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						1,
						200,
						360,
						30,
						1,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,600,222,129,1};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,560,160,150,1};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,390,130,180,1};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,180,40,50,1,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class Lard: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,900,0,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						675,
						0,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,1575,0,1,0};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,1125,0,1,0};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,900,0,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,675,0,1,0,16};
					cooking_properties[]={100,300};
				};
			};
		};
	};
	class Sardines: Edible_Base
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={1,40,160,25,1};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,60,140,60,1};
					cooking_properties[]={70,360};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,60,160,60,1};
					cooking_properties[]={70,600};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={1,50,70,50,1};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={1,20,60,20,1};
					cooking_properties[]={100,300};
				};
			};
			class FoodStageTransitions: AnimalCorpsesStageTransitions
			{
			};
		};
	};
	class AgaricusMushroom: MushroomBase
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,180};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,240};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,150};
				};
			};
		};
	};
	class AmanitaMushroom: MushroomBase
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,180};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,240};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,150};
				};
			};
		};
	};
	class MacrolepiotaMushroom: MushroomBase
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,180};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,240};
				};
				class Dried
				{
					visual_properties[]={2,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={2,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,150};
				};
			};
		};
	};
	class LactariusMushroom: MushroomBase
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,180};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,240};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,150};
				};
			};
		};
	};
	class PsilocybeMushroom: MushroomBase
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,180};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,240};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,150};
				};
			};
		};
	};
	class AuriculariaMushroom: MushroomBase
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,180};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,240};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,150};
				};
			};
		};
	};
	class BoletusMushroom: MushroomBase
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,180};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,240};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,150};
				};
			};
		};
	};
	class PleurotusMushroom: MushroomBase
	{
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,95,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,15,47.5,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1.75,35,71.25,1,0};
					cooking_properties[]={70,180};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1.5,25,95,1,0};
					cooking_properties[]={70,240};
				};
				class Dried
				{
					visual_properties[]={2,3,3};
					nutrition_properties[]={0.75,20,9.5,1,0};
					cooking_properties[]={70,150,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={2,15,23.75,1,0};
					cooking_properties[]={100,150};
				};
			};
		};
	};
	class MetalPlate: Inventory_Base
	{
		varStackMax=20;
	};
	class WoodenPlank: Inventory_Base
	{
		varStackMax=20;
	};
	class Firewood: Inventory_Base
	{
		varStackMax=6;
	};
	class Iceaxe: Inventory_Base
	{
		scope=2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
	};
	class Broom: Inventory_Base
	{
		scope=2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
	};
	class Paddle: Inventory_Base
	{
		scope=2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
	};
	class SN_Tripod: Tripod
	{
		scope=2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
			"CookingTripod"
		};
	};
	class OldGunBelt: PlateCarrierVest
	{
		scope=2;
		weight=500;
	};
	class Plant_Tomato: PlantBase
	{
		scope=2;
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=3;
			CropsType="Tomato";
		};
	};
	class Plant_Pepper: PlantBase
	{
		scope=2;
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=2;
			CropsType="GreenBellPepper";
		};
	};
	class Plant_Potato: PlantBase
	{
		scope=2;
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=2;
			CropsType="Potato";
		};
	};
	class Plant_Pumpkin: PlantBase
	{
		scope=2;
		class Horticulture
		{
			GrowthStagesCount=7;
			CropsCount=1;
			CropsType="Pumpkin";
		};
	};
	class Plant_Zucchini: PlantBase
	{
		scope=2;
		class Horticulture
		{
			GrowthStagesCount=7;
			CropsCount=1;
			CropsType="Zucchini";
		};
	};
	class Plant_Cannabis: PlantBase
	{
		scope=2;
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=2;
			CropsType="Cannabis";
		};
	};
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
	class MassGoatStew: GoatSteakMeat
	{
		displayName = "Stew";
		descriptionShort = "Von wen wurde das wohl gekocht ? ... Villeicht von Froschi ? ... 'Mass'";
		itemSize[]={2,2};
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
	class WaterBottle: Bottle_Base
	{
		inventorySlot="Belt_Left";
	};
	class Vodka: Bottle_Base
	{
		varQuantityInit=1000;
		varQuantityMax=1000;
		inventorySlot="Belt_Left";
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
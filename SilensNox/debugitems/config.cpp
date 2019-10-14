class CfgPatches
{
	class SN_Debug
	{
		units[]=
		{
			"NepNep"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Zombies"
		};
	};
};	//these items are for testing/debugging uses only
class CfgVehicles
{
	class WaterBottle;
	class ZombieMaleBase;
	class Inventory_Base;
	class TacticalGloves_ColorBase;
	class HikingJacket_ColorBase;
	class HikingBootsLow_ColorBase;
	class CanvasPants_ColorBase;
	class GasMask;
	/*
	
	
	
	Stern
	Berezino 1980
	Schilder
	
	
	*/
	
	class SN_Admin01Handschuhe: TacticalGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0;
		model="NEPNEP";
		hiddenSelectionsTextures[]=
		{
			"NEPNEP.paa",
			"NEPNEP.paa",
			"NEPNEP.paa"
		};
		inventorySlot="Gloves";
	};
	class SN_Admin02Jacke: HikingJacket_ColorBase
	{
		scope=2;
		model="NEPNEP";
		hiddenSelectionsTextures[]=
		{
			"NEPNEP.paa",
			"NEPNEP.paa",
			"NEPNEP.paa"
		};
		inventorySlot="Body";
		visibilityModifier=0;
	};
	class SN_Admin03Schuhe: HikingBootsLow_ColorBase
	{
		scope=2;
		visibilityModifier=0;
		model="NEPNEP";
		hiddenSelectionsTextures[]=
		{
			"NEPNEP.paa",
			"NEPNEP.paa",
			"NEPNEP.paa"
		};
		inventorySlot="Feet";
	};
	class SN_Admin04Hose: CanvasPants_ColorBase
	{
		scope=2;
		visibilityModifier=0;
		model="NEPNEP";
		hiddenSelectionsTextures[]=
		{
			"NEPNEP.paa",
			"NEPNEP.paa",
			"NEPNEP.paa"
		};
		inventorySlot="Legs";
	};
	class SN_Admin05Gesicht: GasMask
	{
		scope=2;
		color="black";
		model="\dz\weapons_proxies\zasleh1_proxy.p3d";
		hiddenSelectionsTextures[]=
		{
			"NEPNEP.paa",
			"NEPNEP.paa",
			"NEPNEP.paa"
		};
		simulation="head";
		inventorySlot="Head";
	};
	class VodkaTEST: WaterBottle
	{
		scope=2;
		displayName="Liquid_Vodka";
		descriptionShort="Vodka";
		itemSize[]={1,1};
		varLiquidTypeInit=2048;
		varQuantityInit=1000000;
		varQuantityMin=0;
		varQuantityMax=1000000;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 333 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
	class Test1: Inventory_Base
	{
		scope=2;
		displayName="Dies ist ein Testitem c:";
		descriptionShort="Testusmustus";
		model="DZ\structures\furniture\school_equipment\flag_chernarus_pole.p3d";
		itemSize[]={2,2};
	};	
	class Test2: Test1
	{
		model="DZ\structures\specific\deadbodies\dead_pile1.p3d";
	};	
	class Test3: Test1
	{
		model="DZ\structures\specific\deadbodies\dead_pile2.p3d";
	};	
	class Test4: Test1
	{
		model="DZ\structures\specific\deadbodies\dead_pile3.p3d";
	};	
	class Test5: Test1
	{
		model="DZ\structures\specific\deadbodies\dead_pile4.p3d";
	};	
	class Test6: Test1
	{
		model="DZ\structures\furniture\school_equipment\lab_dropper.p3d";
	};	
	class Test7: Test1
	{
		model="DZ\structures\furniture\school_equipment\lab_erlenmeyer_flask.p3d";
	};	
	class Test8: Test1
	{
		model="DZ\structures\furniture\school_equipment\lab_microscope.p3d";
	};	
	class Test9: Test1
	{
		model="DZ\structures\furniture\school_equipment\lab_petri_dish.p3d";
	};	
	class Test10: Test1
	{
		model="DZ\structures\furniture\school_equipment\lab_sink.p3d";
	};	
	class Test11: Test1
	{
		model="DZ\structures\furniture\school_equipment\lab_teacher_bench.p3d";
	};	
	class Test12: Test1
	{
		model="DZ\structures\furniture\school_equipment\lab_triplebeam.p3d";
	};	
	class Test13: Test1
	{
		model="DZ\structures\furniture\school_equipment\lab_vial.p3d";
	};	
	class Test14: Test1
	{
		model="DZ\structures\furniture\school_equipment\lab_volume_beaker.p3d";
	};	
	class Test15: Test1
	{
		model="DZ\structures\furniture\school_equipment\periodic_table.p3d";
	};	
	class Test16: Test1
	{
		model="DZ\structures\furniture\school_equipment\radiator.p3d";
	};	
	class Test17: Test1
	{
		model="DZ\structures\furniture\school_equipment\school_cage.p3d";
	};	
	class Test18: Test1
	{
		model="DZ\structures\furniture\school_equipment\wall_hanger.p3d";
	};	
	class Test19: Test1
	{
		model="DZ\structures\furniture\school_equipment\vaulting_box_large.p3d";
	};	
	class Test20: Test1
	{
		model="DZ\structures\furniture\school_equipment\vaulting_box_small.p3d";
	};	
	class Autozombie: ZombieMaleBase
	{
		scope=2;
		model="\DZ\vehicles\wheeled\truck_02\truck_02.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\Hunter_old_M.rvmat"
		};
	};
	class Chickenzombie: ZombieMaleBase
	{
		scope=2;
		model="\DZ\animals\gallus_gallus_domesticus_feminam\gallus_gallus_domesticus_feminam.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\Hunter_old_M.rvmat"
		};
	};
	class Teddyzombie: ZombieMaleBase
	{
		scope=2;
		model="\dz\gear\containers\teddybear.p3d";
		hiddenSelectionsMaterials[]=
		{
			"DZ\gear\containers\data\teddybear.rvmat"
		};
	};
	class Hammerzombie: ZombieMaleBase
	{
		scope=2;
		model="\dz\gear\tools\Hammer.p3d";
		hiddenSelectionsMaterials[]=
		{
			"DZ\gear\containers\data\teddybear.rvmat"
		};
	};
	class Reifenzombie: ZombieMaleBase
	{
		scope=2;
		model="\DZ\vehicles\wheeled\OffroadHatchback\proxy\nivaWheel.p3d";
		hiddenSelectionsMaterials[]=
		{
			"DZ\gear\containers\data\teddybear.rvmat"
		};
	};
	class Fasszombie: ZombieMaleBase
	{
		scope=2;
		model="\dz\gear\cooking\barrel_holes.p3d";
		hiddenSelectionsMaterials[]=
		{
			"DZ\gear\containers\data\teddybear.rvmat"
		};
	};
	class Tierzombie: ZombieMaleBase
	{
		scope=2;
		model="\DZ\animals\sus_scrofa\sus_scrofa.p3d";
		hiddenSelectionsMaterials[]=
		{
			"DZ\gear\containers\data\teddybear.rvmat"
		};
	};
	class Liquid_Disinfectant: WaterBottle
	{
		scope=2;
		displayName="Liquid_Disinfectant";
		descriptionShort="Disinfectant";
		itemSize[]={1,1};
		varLiquidTypeInit=32768;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 333 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
	class Liquid_Vodka: WaterBottle
	{
		scope=2;
		displayName="Liquid_Vodka";
		descriptionShort="Vodka";
		itemSize[]={1,1};
		varLiquidTypeInit=2048;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 333 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
	class Liquid_Beer: WaterBottle
	{
		scope=2;
		displayName="Liquid_Beer";
		descriptionShort="Beer";
		itemSize[]={1,1};
		varLiquidTypeInit=4096;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 333 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
	class Liquid_Gasoline: WaterBottle
	{
		scope=2;
		displayName="Liquid_Gasoline";
		descriptionShort="Gasoline";
		itemSize[]={1,1};
		varLiquidTypeInit=8192;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 333 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
	class Liquid_Diesel: WaterBottle
	{
		scope=2;
		displayName="Liquid_Diesel";
		descriptionShort="Diesel";
		itemSize[]={1,1};
		varLiquidTypeInit=16384;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 333 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};
	class Liquid_Soda: WaterBottle
	{
		scope=2;
		displayName="Liquid_Soda";
		descriptionShort="Soda";
		itemSize[]={1,1};
		varLiquidTypeInit=600;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 333 + 512 + 600 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
	};

	class AlcoholSyringe : Inventory_Base
	{
		scope = 2;
		displayName = "Spritze mit Alcohol (Test)";
		descriptionShort = "Nur für Testzwecke und von Irina fernhalten.";
		model = "\dz\gear\medical\syringe_Full.p3d";
		rotationFlags = 17;
		weight = 110;
		itemSize[] = { 1,2 };
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\dz\gear\medical\data\SyringeFluid_Grey_CA.paa" };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = { {1,{"DZ\gear\medical\data\Syringe.rvmat"}},{0.7,{"DZ\gear\medical\data\Syringe.rvmat"}},{0.5,{"DZ\gear\medical\data\Syringe_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\Syringe_damage.rvmat"}},{0,{"DZ\gear\medical\data\Syringe_destruct.rvmat"}} };
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Syringe_out
				{
					soundSet = "Syringe_out_SoundSet";
					id = 201;
				};
				class Syringe_spear
				{
					soundSet = "Syringe_spear_SoundSet";
					id = 202;
				};
				class Syringe_splash
				{
					soundSet = "Syringe_splash_SoundSet";
					id = 203;
				};
			};
		};
	};
};

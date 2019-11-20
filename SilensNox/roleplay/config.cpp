class CfgPatches
{
    class SN_RoleplayItems
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
			"DZ_Gear_Medical",
			"OP_Water",
			"DZ_Gear_Consumables"
        };
    };
};
class CfgVehicles
{
	class ClearSyringe;
	class Inventory_Base;
	class Clothing;
	class WaterBottle;
	class Barrel_ColorBase;
	class CanisterGasoline;
	class Container_Base;
	class Paper;
	class SN_SpawnNote : Paper {
		displayName = "Seltsamer Zettel";
		descriptionShort = "";
	};
	class SN_Roleplay_Base: Container_Base
	{
		scope=0;
		physLayer="item_large";
		heavyItem=1;
		weight=10;
	};
	class SN_Barrel_Base: CanisterGasoline
	{
		scope=0;
		physLayer="item_large";
		displayName="Fass";
		descriptionShort="Ein Fass - Super um Flüssigkeiten zu lagern!";
		model="\sneaky_stashes\models\winebarrel\wine_barrel_001.p3d";
		weight=5000;
		itemSize[]={10,15};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit=200000;
		varQuantityMin=0;
		varQuantityMax=200000;
		isMeleeWeapon=1;
		stackedUnit="ml";
		class Cargo
		{
			itemsCargoSize[]={0,0};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class SN_Barrel_Beer: SN_Barrel_Base
	{
		scope=2;
		varLiquidTypeInit=4096;
	};
	class SN_Barrel_Diesel: SN_Barrel_Base
	{
		scope=2;
		varLiquidTypeInit=16384;
	};
	class SN_Barrel_Soda: SN_Barrel_Base
	{
		scope=2;
		varLiquidTypeInit=600;
	};
	class SN_Barrel_Vodka: SN_Barrel_Base
	{
		scope=2;
		varLiquidTypeInit=2048;
	};
	class SN_MedicalBox : SN_Roleplay_Base
	{
		scope=2;
		displayName="Laborausrüstung";
		descriptionShort="Eine Box um all deine Nützlichen dinge zu lagern! Bitte kein Loothorting :c";
		model="DZ\structures\furniture\decoration\lekarnicka\lekarnicka.p3d";
		itemSize[]={5,5};
		weight=1000;
		class Cargo
		{
			itemsCargoSize[]={5,5};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_Computer : SN_Roleplay_Base
	{
		scope=2;
		displayName="Computer";
		descriptionShort="Ein Computer - Villeicht kannst du noch irgendwas drinne verstecken ....";
		model="DZ\structures\furniture\eletrical_appliances\pc\pc.p3d";
		itemSize[]={5,5};
		weight=2500;
		class Cargo
		{
			itemsCargoSize[]={2,2};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_Waschmachine : SN_Roleplay_Base
	{
		scope=2;
		displayName="Waschmachine";
		descriptionShort="Eine große Waschmachine";
		model="DZ\structures\furniture\eletrical_appliances\washing_machine\washing_machine.p3d";
		itemSize[]={10,10};
		weight=95000;
		class Cargo
		{
			itemsCargoSize[]={5,5};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_ChernarussianFlag : SN_Roleplay_Base
	{
		scope=2;
		displayName="Flagge";
		descriptionShort="Eine Flagge";
		model="DZ\structures\furniture\school_equipment\flag_chernarus_wall.p3d";
		itemSize[]={5,2};
		weight=200;
		forceFarBubble="true";
		slopeTolerance=0.8;
		placement="vertical";
	};
	class SN_ChernarussianMap : SN_Roleplay_Base
	{
		scope=2;
		displayName="Karte";
		descriptionShort="Eine Große Karte!";
		model="DZ\structures\furniture\school_equipment\school_map.p3d";
		itemSize[]={5,2};
		weight=200;
		forceFarBubble="true";
		slopeTolerance=0.8;
		placement="vertical";
	};
	class SN_Messbecher : SN_Roleplay_Base
	{
		scope=2;
		displayName="Messbecher";
		descriptionShort="Ein Messbecher!";
		model="DZ\structures\furniture\school_equipment\lab_beaker.p3d";
		itemSize[]={2,2};
		weight=200;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={1,1};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_Labortisch : SN_Roleplay_Base
	{
		scope=2;
		displayName="Labortisch";
		descriptionShort="Ein Labortisch!";
		model="DZ\structures\furniture\school_equipment\lab_bench.p3d";
		itemSize[]={10,10};
		weight=6000;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={3,3};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_Bunsenbrenner : SN_Roleplay_Base
	{
		scope=2;
		displayName="Bunsenbrenner mit Kolbenhalter";
		descriptionShort="Ein Bunsenbrenner mit Kolbenhalter!";
		model="DZ\structures\furniture\school_equipment\lab_bunsen.p3d";
		itemSize[]={1,3};
		weight=300;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={1,1};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_GraderKolben : SN_Roleplay_Base
	{
		scope=2;
		displayName="Grader Kolben";
		descriptionShort="Ein Grader Kolben!";
		model="DZ\structures\furniture\school_equipment\lab_cylinder_beaker.p3d";
		itemSize[]={1,3};
		weight=150;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={1,1};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_FlaschemitPipette : SN_Roleplay_Base
	{
		scope=2;
		displayName="Flasche mit Pipette";
		descriptionShort="Eine Flasche mit Pipette!";
		model="DZ\structures\furniture\school_equipment\lab_dropper.p3d";
		itemSize[]={2,2};
		weight=150;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={1,1};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_Erlenmeyerkolben : SN_Roleplay_Base
	{
		scope=2;
		displayName="Erlenmeyerkolben";
		descriptionShort="Ein Erlenmeyerkolben!";
		model="DZ\structures\furniture\school_equipment\lab_erlenmeyer_flask.p3d";
		itemSize[]={1,2};
		weight=150;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={1,1};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_Mikroskop : SN_Roleplay_Base
	{
		scope=2;
		displayName="Mikroskop ";
		descriptionShort="Ein Mikroskop !";
		model="DZ\structures\furniture\school_equipment\lab_microscope.p3d";
		itemSize[]={3,3};
		weight=500;
	};
	class SN_Petrischale : SN_Roleplay_Base
	{
		scope=2;
		displayName="Petrischale";
		descriptionShort="Eine Petrischale!";
		model="DZ\structures\furniture\school_equipment\lab_petri_dish.p3d";
		itemSize[]={1,1};
		weight=150;
		physLayer="item_small";
	};
	class SN_Spuele : SN_Roleplay_Base
	{
		scope=2;
		displayName="Spüle";
		descriptionShort="Eine Spüle!";
		model="DZ\structures\furniture\school_equipment\lab_sink.p3d";
		itemSize[]={7,7};
		weight=4000;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={4,4};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_Laufgewichtswaage : SN_Roleplay_Base
	{
		scope=2;
		displayName="Laufgewichtswaage";
		descriptionShort="Eine Laufgewichtswaage!";
		model="DZ\structures\furniture\school_equipment\lab_triplebeam.p3d";
		itemSize[]={2,4};
		weight=150;
		class Cargo
		{
			itemsCargoSize[]={2,2};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_Probenbehaelter : SN_Roleplay_Base
	{
		scope=2;
		displayName="Probenbehälter";
		descriptionShort="Ein Probenbehälter!";
		model="DZ\structures\furniture\school_equipment\lab_vial.p3d";
		itemSize[]={1,3};
		weight=150;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={1,1};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_Rundkolben : SN_Roleplay_Base
	{
		scope=2;
		displayName="Rundkolben";
		descriptionShort="Ein Rundkolben!";
		model="DZ\structures\furniture\school_equipment\lab_volume_beaker.p3d";
		itemSize[]={2,2};
		weight=150;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={1,1};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
	};
	class SN_Quiver: Inventory_Base
	{
		scope=2;
		displayName="Köcher";
		descriptionShort="Ein Köcher um all deine Pfeile zu lagern!";
		model="\dz\weapons\attachments\magazine\magazine_quiver.p3d";
		rotationFlags=1;
		attachments[]=
		{
			"SNArrow1",
			"SNArrow2",
			"SNArrow3",
			"SNArrow4"
		};
		lootCategory="Crafted";
		targetCategory="loot";
		weight=150;
		itemSize[]={2,2};
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
								"dz\characters\vests\data\chest_holster.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\characters\vests\data\chest_holster.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\characters\vests\data\chest_holster_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\characters\vests\data\chest_holster_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\characters\vests\data\chest_holster_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class CigAttach: Clothing
	{
		inventorySlot[]=
		{
			"SNCIG",
			"SNCIG1",
			"SNCIG2",
			"SNCIG3",
			"SNCIG4",
			"SNCIG5",
			"SNCIG6",
			"SNCIG7",
			"SNCIG8",
			"SNCIG9",
			"SNCIG10",
			"SNCIG11",
			"SNCIG12",
			"SNCIG13",
			"SNCIG14",
			"SNCIG15",
			"SNCIG16",
			"SNCIG17",
			"SNCIG18",
			"SNCIG19",
			"mask"
		};
	};
	class SN_CigarettePack_ColorBase: Inventory_Base
	{
		displayName="Zigarettenpackung";
		descriptionShort="Zum lagern von Zigaretten/Joints/Zigarren";
		model="\dz\gear\medical\cigarette_pack.p3d";
		attachments[]=
		{
			"SNCIG",
			"SNCIG1",
			"SNCIG2",
			"SNCIG3",
			"SNCIG4",
			"SNCIG5",
			"SNCIG6",
			"SNCIG7"/*
			"SNCIG8",
			"SNCIG9",
			"SNCIG10",
			"SNCIG11",
			"SNCIG12",
			"SNCIG13",
			"SNCIG14",
			"SNCIG15",
			"SNCIG16",
			"SNCIG17",
			"SNCIG18",
			"SNCIG19"*/
		};
		itemSize[]={2,2};
		weight=50;
		absorbency=0.69999999;
		lootTag[]=
		{
			"Hygiene",
			"Civilian"
		};
		lootCategory="Medical";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
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
								"DZ\gear\medical\data\Pack_of_cigs.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\Pack_of_cigs.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\Pack_of_cigs_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\Pack_of_cigs_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\Pack_of_cigs_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SN_CigarettePack_Chernamorka: SN_CigarettePack_ColorBase
	{
		scope=2;
		displayName="Zigarettenpackung Chernamorka";
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\medical\Data\pack_of_cigs_cherno_co.paa",
			"DZ\gear\medical\Data\pack_of_cigs_cherno_co.paa"
		};
	};
	class SN_CigarettePack_Merkur: SN_CigarettePack_ColorBase
	{
		scope=2;
		displayName="Zigarettenpackung Merkur";
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\medical\Data\pack_of_cigs_merkur_co.paa",
			"DZ\gear\medical\Data\pack_of_cigs_merkur_co.paa"
		};
	};
	class SN_CigarettePack_Partyzanka: SN_CigarettePack_ColorBase
	{
		scope=2;
		displayName="Zigarettenpackung Partyzanka";
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\medical\Data\pack_of_cigs_partyzanka_co.paa",
			"DZ\gear\medical\Data\pack_of_cigs_partyzanka_co.paa"
		};
	};
	class SN_cigarette_mung_unlit: CigAttach
	{
		scope=2;
		displayName="Zigarette";
		descriptionShort="Eine Zigarette";
		model="\MunghardsItems\cigarette\cigarette_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"mask"
		};
		rotationFlags=16;
		weight=10;
		itemSize[]={1,2};
		absorbency=0;
		heatIsolation=0.13;
		visibilityModifier=0.69999999;
		noMask=0;
		class ClothingTypes
		{
			male="\MunghardsItems\cigarette\cigarette.p3d";
			female="\MunghardsItems\cigarette\cigarette.p3d";
		};
	};
	class SN_cigarette_mung_lit: Clothing
	{
		scope=2;
		displayName="Zigarette";
		descriptionShort="Eine Angezündete Zigarette";
		model="\MunghardsItems\cigarette\cigarette_g.p3d";
		inventorySlot="mask";
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"mask"
		};
		rotationFlags=16;
		weight=10;
		itemSize[]={1,2};
		absorbency=0;
		heatIsolation=0.13;
		visibilityModifier=0.69999999;
		noMask=0;
		class ClothingTypes
		{
			male="\MunghardsItems\cigarette\cigarette.p3d";
			female="\MunghardsItems\cigarette\cigarette.p3d";
		};
		stackedUnit = "w";
		quantityBar = 1;
		varQuantityInit=450;
		varQuantityMin=0;
		varQuantityMax=450;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=1;
		class EnergyManager
		{
			hasIcon = 1;
			switchOnAtSpawn = 1;
			energyAtSpawn = 450;
			energyUsagePerSecond = 1; //1
			updateInterval = 1;
			convertEnergyToQuantity = 1;
		};
	};
	class SN_joint_mung_unlit: CigAttach
	{
		scope=2;
		displayName="Joint";
		descriptionShort="Ein Joint";
		model="\MunghardsItems\joint\joint_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"mask"
		};
		rotationFlags=16;
		weight=10;
		itemSize[]={1,2};
		absorbency=0;
		heatIsolation=0.13;
		visibilityModifier=0.69999999;
		noMask=0;
		class ClothingTypes
		{
			male="\MunghardsItems\joint\joint.p3d";
			female="\MunghardsItems\joint\joint.p3d";
		};
	};
	class SN_joint_mung_lit: Clothing
	{
		scope=2;
		displayName="Joint";
		descriptionShort="Ein Joint";
		model="\MunghardsItems\joint\joint_g.p3d";
		inventorySlot="mask";
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"mask"
		};
		rotationFlags=16;
		weight=10;
		itemSize[]={1,2};
		absorbency=0;
		heatIsolation=0.13;
		visibilityModifier=0.69999999;
		noMask=0;
		class ClothingTypes
		{
			male="\MunghardsItems\joint\joint.p3d";
			female="\MunghardsItems\joint\joint.p3d";
		};
		stackedUnit = "w";
		quantityBar = 1;
		varQuantityInit=900;
		varQuantityMin=0;
		varQuantityMax=900;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=1;
		class EnergyManager
		{
			hasIcon = 1;
			switchOnAtSpawn = 1;
			energyAtSpawn = 900;
			energyUsagePerSecond = 1; //1
			updateInterval = 1;
			convertEnergyToQuantity = 1;
		};
	};
	class SN_cigar_mung_unlit: CigAttach
	{
		scope=2;
		displayName="Zigar";
		descriptionShort="Eine Zigarre";
		model="\MunghardsItems\cigar\cigar_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"mask"
		};
		rotationFlags=16;
		weight=15;
		itemSize[]={1,2};
		absorbency=0;
		heatIsolation=0.13;
		visibilityModifier=0.69999999;
		noMask=0;
		class ClothingTypes
		{
			male="\MunghardsItems\cigar\cigar.p3d";
			female="\MunghardsItems\cigar\cigar.p3d";
		};
	};
	class SN_cigar_mung_lit: Clothing
	{
		scope=2;
		displayName="Zigar";
		descriptionShort="Eine Zigarre";
		model="\MunghardsItems\cigar\cigar_g.p3d";
		inventorySlot="mask";
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"mask"
		};
		rotationFlags=16;
		weight=15;
		itemSize[]={1,2};
		absorbency=0;
		heatIsolation=0.13;
		visibilityModifier=0.69999999;
		noMask=0;
		class ClothingTypes
		{
			male="\MunghardsItems\cigar\cigar.p3d";
			female="\MunghardsItems\cigar\cigar.p3d";
		};
		stackedUnit = "w";
		quantityBar = 1;
		varQuantityInit=600;
		varQuantityMin=0;
		varQuantityMax=600;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=1;
		class EnergyManager
		{
			hasIcon = 1;
			switchOnAtSpawn = 1;
			energyAtSpawn = 600;
			energyUsagePerSecond = 1; //1
			updateInterval = 1;
			convertEnergyToQuantity = 1;
		};
	};
	class SN_HealSyringeEmpty: Inventory_Base
	{
		scope=2;
		displayName="Leere Spritze";
		descriptionShort="Eine saubere Spritze";
		model="\dz\gear\medical\syringe_empty.p3d";
		rotationFlags=17;
		weight=110;
		itemSize[]={1,2};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
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
								"DZ\gear\medical\data\Syringe.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\Syringe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\Syringe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\Syringe_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\Syringe_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Syringe_out
				{
					soundSet="Syringe_out_SoundSet";
					id=201;
				};
				class Syringe_spear
				{
					soundSet="Syringe_spear_SoundSet";
					id=202;
				};
				class Syringe_splash
				{
					soundSet="Syringe_splash_SoundSet";
					id=203;
				};
			};
		};
	};
	class SN_Healsyringe: Inventory_Base
	{
		scope=2;
		displayName="Spritze mit Medizin";
		descriptionShort="Nur für die Benutzung von Medizinern";
		model="\dz\gear\medical\syringe_Full.p3d";
		rotationFlags=17;
		weight=110;
		itemSize[]={1,2};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
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
								"DZ\gear\medical\data\Syringe.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\Syringe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\Syringe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\Syringe_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\Syringe_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Syringe_out
				{
					soundSet="Syringe_out_SoundSet";
					id=201;
				};
				class Syringe_spear
				{
					soundSet="Syringe_spear_SoundSet";
					id=202;
				};
				class Syringe_splash
				{
					soundSet="Syringe_splash_SoundSet";
					id=203;
				};
			};
		};
	};
	class InjectionVial: Inventory_Base
	{
		scope=2;
		displayName="Medizin";
		descriptionShort="Nur für die Benutzung von Medizinern";
		model="\dz\gear\medical\InjectionVial.p3d";
		itemSize[]={1,1};
		weight=50;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
	};
};
class CfgSlots
{
	class Slot_SNCIGARETTE
	{
		name="SNCIG";
		displayName="SNCIG";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_1
	{
		name="SNCIG1";
		displayName="SNCIG1";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_2
	{
		name="SNCIG2";
		displayName="SNCIG2";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_3
	{
		name="SNCIG3";
		displayName="SNCIG3";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_4
	{
		name="SNCIG4";
		displayName="SNCIG4";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_5
	{
		name="SNCIG5";
		displayName="SNCIG5";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_6
	{
		name="SNCIG6";
		displayName="SNCIG6";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_7
	{
		name="SNCIG7";
		displayName="SNCIG7";
		ghostIcon="missing";
	};
};
	/*
	class Slot_SNCIGARETTE_8
	{
		name="SNCIG8";
		displayName="SNCIG8";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_9
	{
		name="SNCIG9";
		displayName="SNCIG9";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_10
	{
		name="SNCIG10";
		displayName="SNCIG10";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_11
	{
		name="SNCIG11";
		displayName="SNCIG11";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_12
	{
		name="SNCIG12";
		displayName="SNCIG12";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_13
	{
		name="SNCIG13";
		displayName="SNCIG13";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_14
	{
		name="SNCIG14";
		displayName="SNCIG14";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_15
	{
		name="SNCIG15";
		displayName="SNCIG15";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_16
	{
		name="SNCIG16";
		displayName="SNCIG16";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_17
	{
		name="SNCIG17";
		displayName="SNCIG17";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_18
	{
		name="SNCIG18";
		displayName="SNCIG18";
		ghostIcon="missing";
	};
	class Slot_SNCIGARETTE_19
	{
		name="SNCIG19";
		displayName="SNCIG19";
		ghostIcon="missing";
	};
};
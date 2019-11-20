class CfgPatches
{
	class SN_Katana
	{
		units[]=
		{
			"BagTaloon_Blue",
			"BagTaloon_Green"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks"
		};
	};
};
class cfgVehicles
{
	class Clothing_Base;
	class Inventory_Base;
	class Clothing: Clothing_Base
	{
	};
	class SN_KatanaSheath_Hip: Clothing
	{
		scope=2;
		displayName="Katana Scheide";
		descriptionShort="HIPS";
		model="\SilensNox\weapon\Katana\KatanaSheath_g.p3d";
		inventorySlot="Hips";
		attachments[]=
		{
			"SNKatanaSlot"
		};
		itemInfo[]=
		{
			"Clothing",
			"Belt"
		};
		rotationFlags=16;
		weight=1300;
		itemSize[]={4,5};
		itemsCargoSize[]={7,6};
		absorbency=0.30000001;
		heatIsolation=0.1;
		repairableWithKits[]={5,3};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=3;
		hiddenSelections[]=
		{
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\SilensNox\weapon\Katana\KatanaSheath_m.p3d";
			female="\SilensNox\weapon\Katana\KatanaSheath.p3d";
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
								"SilensNox\weapon\Katana\Data\Katana.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SilensNox\weapon\Katana\Data\Katana.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SilensNox\weapon\Katana\Data\Katana_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SilensNox\weapon\Katana\Data\Katana_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SilensNox\weapon\Katana\Data\Katana_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SN_KatanaSheath_Back: SN_KatanaSheath_Hip
	{
		descriptionShort="BACK";
		inventorySlot="Back";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		class ClothingTypes
		{
			male="\SilensNox\weapon\Katana\KatanaSheath_m.p3d";
			female="\SilensNox\weapon\Katana\KatanaSheath.p3d";
		};
	};
	class SN_Katana: Inventory_Base
	{
		scope=2;
		displayName="Katana";
		descriptionShort="...";
		model="\SilensNox\weapon\Katana\Katana.p3d";
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"SNKatanaSlot"
		};
		RestrainUnlockType=1;
		rotationFlags=12;
		itemSize[]={2,8};
		weight=1800;
		itemBehaviour=2;
		lootTag[]=
		{
			"Historical"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Axe"
		};
		openItemSpillRange[]={20,40};
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
								"SilensNox\weapon\Katana\Data\Katana.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SilensNox\weapon\Katana\Data\Katana.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SilensNox\weapon\Katana\Data\Katana_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SilensNox\weapon\Katana\Data\Katana_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SilensNox\weapon\Katana\Data\Katana_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="sword";
		class MeleeModes
		{
			class Default
			{
				ammo="SN_KatanaSword";
				range=1.8;
			};
			class Heavy
			{
				ammo="SN_KatanaSwordHeavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="SN_KatanaSwordHeavy";
				range=3.7;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class shaving_knife_clean
				{
					soundSet="shaving_knife_clean_SoundSet";
					id=600;
				};
				class shaving_knife1
				{
					soundSet="shaving_knife1_SoundSet";
					id=601;
				};
				class shaving_knife2
				{
					soundSet="shaving_knife2_SoundSet";
					id=602;
				};
				class shaving_knife3
				{
					soundSet="shaving_knife3_SoundSet";
					id=603;
				};
				class shaving_knife4
				{
					soundSet="shaving_knife4_SoundSet";
					id=604;
				};
				class shaving_knife5
				{
					soundSet="shaving_knife5_SoundSet";
					id=605;
				};
				class shaving_knife6
				{
					soundSet="shaving_knife6_SoundSet";
					id=606;
				};
				class shaving_knife7
				{
					soundSet="shaving_knife7_SoundSet";
					id=607;
				};
				class shaving_knife8
				{
					soundSet="shaving_knife8_SoundSet";
					id=608;
				};
				class shaving_knife9
				{
					soundSet="shaving_knife9_SoundSet";
					id=609;
				};
				class shaving_knife10
				{
					soundSet="shaving_knife10_SoundSet";
					id=610;
				};
				class shaving_knife11
				{
					soundSet="shaving_knife11_SoundSet";
					id=611;
				};
				class shaving_knife12
				{
					soundSet="shaving_knife12_SoundSet";
					id=612;
				};
				class shaving_knife13
				{
					soundSet="shaving_knife13_SoundSet";
					id=613;
				};
				class shaving_knife14
				{
					soundSet="shaving_knife14_SoundSet";
					id=614;
				};
				class shaving_knife15
				{
					soundSet="shaving_knife15_SoundSet";
					id=615;
				};
				class shaving_knife16
				{
					soundSet="shaving_knife16_SoundSet";
					id=616;
				};
				class shaving_knife17
				{
					soundSet="shaving_knife17_SoundSet";
					id=617;
				};
				class shaving_knife18
				{
					soundSet="shaving_knife18_SoundSet";
					id=618;
				};
				class shaving_knife19
				{
					soundSet="shaving_knife19_SoundSet";
					id=619;
				};
				class shaving_knife20
				{
					soundSet="shaving_knife20_SoundSet";
					id=620;
				};
				class shaving_knife21
				{
					soundSet="shaving_knife21_SoundSet";
					id=621;
				};
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
			};
		};
	};
};
class CfgAmmo
{
	class MeleeSword;
	class MeleeSword_Heavy;
	class SN_KatanaSword: MeleeSword
	{
		affectSkeleton=1.4;
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=45;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=40;
			};
			additionAnimalMeleeMultiplier=5;
		};
	};
	class SN_KatanaSwordHeavy: MeleeSword_Heavy
	{
		affectSkeleton=1.4;
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=95;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=80;
			};
			additionAnimalMeleeMultiplier=5;
		};
	};
};
	
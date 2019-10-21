class CfgPatches
{
	class SN_Kunai
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class KitchenKnife;
	class SN_Kunai: KitchenKnife
	{
		scope=2;
		displayName="Kunai";
		descriptionShort="Test in Multiplayer if it goes ruined";
		model="\SilensNox\weapon\Kunai\Kunai.p3d";
		animClass="Knife";
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		itemInfo[]=
		{
			"Knife"
		};
		inventorySlot="Knife";
		RestrainUnlockType=1;
		rotationFlags=17;
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		canSkinBodies=1;
		weight=170;
		itemSize[]={1,2};
		openItemSpillRange[]={0,20};
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
								"SilensNox\weapon\Kunai\Data\Kunai.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SilensNox\weapon\Kunai\Data\Kunai.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SilensNox\weapon\Kunai\Data\Kunai_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SilensNox\weapon\Kunai\Data\Kunai_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SilensNox\weapon\Kunai\Data\Kunai_destruct.rvmat"
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
				ammo="MeleeKnife";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeKnife_Heavy";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeKnife_Heavy";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class ChoppingTree
				{
					soundSet="ChoppingTree_SoundSet";
					id=415;
				};
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
			};
		};
	};
};	
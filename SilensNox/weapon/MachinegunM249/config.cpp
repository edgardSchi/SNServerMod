class CfgPatches
{
	class SN_m249
	{
		units[]={};
		weapons[]=
		{
			"RR_M249"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class M4A1;
	class SN_M249_Base: M4A1
	{
		scope=0;
		lootTag[]=
		{
			"Military_west"
		};
		weight=7500;
		absorbency=0.1;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		discreteDistance[]={100};
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		optics=1;
		opticsFlare=0;
		value=0;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"		  
		};
		magazines[]=
		{
			"Mag_M249_Box200Rnd"
		};
		magazineSwitchTime=6.5;
		barrelArmor=3500;
		ejectType=1;
		recoilModifier[]={1,2.8,1.5};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_dry",
			0.5,
			1,
			20
		};
		reSNdAction="ReSNdAKM";
		reSNdMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_reSNd_0",
			0.80000001,
			1,
			40
		};
		hiddenSelections[]=
		{
			"camo",
			"zasleh"
		};
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"M4_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"M4_silencer_SoundSet",
					"M4_silencerTail_SoundSet",
					"M4_silencerInteriorTail_SoundSet"
				},
				
				{
					"M4_silencerHomeMade_SoundSet",
					"M4_silencerHomeMadeTail_SoundSet",
					"M4_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin2",
				0.33333001
			};
			reSNdTime=0.090000004;
			recoil="recoil_m249";
			recoilProne="recoil_m249_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro1",
					0.5,
					"beginSilenced_Pro2",
					0.5
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet="Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id=1;
				};
				class walkErc_R
				{
					soundSet="Weapon_Movement_Rifle_walkErc_R_SoundSet";
					id=2;
				};
				class runErc_L
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=3;
				};
				class runErc_R
				{
					soundSet="Weapon_Movement_Rifle_runErc_R_SoundSet";
					id=4;
				};
				class sprintErc_L
				{
					soundSet="Weapon_Movement_Rifle_sprintErc_SoundSet";
					id=5;
				};
				class sprintErc_R
				{
					soundSet="Weapon_Movement_Rifle_sprintErc_SoundSet";
					id=6;
				};
				class walkCro_L
				{
					soundSet="Weapon_Movement_Rifle_walkCro_SoundSet";
					id=21;
				};
				class walkCro_R
				{
					soundSet="Weapon_Movement_Rifle_walkCro_SoundSet";
					id=22;
				};
				class runCro_L
				{
					soundSet="Weapon_Movement_Rifle_runCro_SoundSet";
					id=23;
				};
				class runCro_R
				{
					soundSet="Weapon_Movement_Rifle_runCro_SoundSet";
					id=24;
				};
				class walkProne_L
				{
					soundSet="Weapon_Movement_Rifle_walkCro_SoundSet";
					id=31;
				};
				class walkProne_R
				{
					soundSet="Weapon_Movement_Rifle_walkCro_SoundSet";
					id=32;
				};
				class runProne_L
				{
					soundSet="Weapon_Movement_Rifle_runCro_SoundSet";
					id=33;
				};
				class runProne_R
				{
					soundSet="Weapon_Movement_Rifle_runCro_SoundSet";
					id=34;
				};
				class jumpErc_L
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=35;
				};
				class jumpErc_R
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=36;
				};
				class landFootErc_L
				{
					soundSet="Weapon_Movement_Rifle_landFootErc_SoundSet";
					id=37;
				};
				class landFootErc_R
				{
					soundSet="Weapon_Movement_Rifle_landFootErc_SoundSet";
					id=38;
				};
				class walkRasErc_L
				{
					soundSet="Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id=51;
				};
				class walkRasErc_R
				{
					soundSet="Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id=52;
				};
				class runRasErc_L
				{
					soundSet="Weapon_Movement_Rifle_runRasErc_SoundSet";
					id=53;
				};
				class runRasErc_R
				{
					soundSet="Weapon_Movement_Rifle_runRasErc_SoundSet";
					id=54;
				};
				class HandStep_L
				{
					soundSet="Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id=61;
				};
				class HandStep_R
				{
					soundSet="Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id=62;
				};
				class HandStep_Hard_L
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=63;
				};
				class HandStep_Hard_R
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=64;
				};
				class landFeetErc
				{
					soundSet="Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id=100;
				};
				class Weapon_Movement_Rifle_Walk
				{
					soundSet="Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id=101;
				};
				class Weapon_Movement_Rifle_Run
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=102;
				};
				class Weapon_Movement_Rifle_Sprint
				{
					soundSet="Weapon_Movement_Rifle_sprintErc_L_SoundSet";
					id=103;
				};
				class Weapon_Movement_Rifle_Land
				{
					soundSet="Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id=104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet="Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id=892;
				};
			};
		};
	};
	class SN_M249: SN_M249_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="\dz\weapons\firearms\m249\m249.p3d";
		attachments[]=
		{
			"weaponOptics",
			"weaponMuzzleM4",
			"weaponHandguardM249",
			"Att_Handguard_M249_Ris"		   
		};
		itemSize[]={10,4};
		dexterity=1.8;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLabels[]={1,0.69999999,0.5,0.30000001,0};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\m249\data\m249.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\m249\data\m249.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\m249\data\m249.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class cfgRecoils
{
	recoil_m249[]=
	{
		0,
		0,
		0,
		0.039999999,
		"0.036943*(0.3)",
		"0.0134348*(1.0)",
		0.079999998,
		"0.019755*(0.3)",
		"0.003056*(1.0)",
		0.090000004,
		0,
		0,
		0.14,
		"-0.003138*(0.3)",
		"-0.0005*(1.0)",
		0.079999998,
		"-0.001177*(0.3)",
		"-0.000188*(1.0)",
		0.12,
		0,
		0
	};
	recoil_m249_prone[]=
	{
		0,
		0,
		0,
		0.039999999,
		"0.036943*(0.06)",
		"0.0134348*(0.15)",
		0.079999998,
		"0.019755*(0.06)",
		"0.003056*(0.15)",
		0.090000004,
		0,
		0,
		0.14,
		"-0.003138*(0.06)",
		"-0.0005*(0.15)",
		0.079999998,
		"-0.001177*(0.06)",
		"-0.000188*(0.15)",
		0.12,
		0,
		0
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMagazine_m249_ammobox: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="\DZ\weapons\attachments\magazine\magazine_fal.p3d";
	};
	/*class ProxyButtstock_m249: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponButtstockFal";
		model="\DZ\weapons\attachments\support\buttstock_m249.p3d";
	};
	class ProxyHandguard_m249: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponHandguardM249";
		model="\DZ\weapons\attachments\support\handguard_m249.p3d";
	};
	*/
};

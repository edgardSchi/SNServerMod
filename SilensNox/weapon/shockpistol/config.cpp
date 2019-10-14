class CfgPatches
{
	class SN_Taser
	{
		units[]=
		{
			"SN_Taser"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class FNX45_Base;
	class SN_Taser_Base: FNX45_Base
	{
		scope=0;
		weight=950;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={0,0,0,0,0,0};
		ironsightsExcludingOptics[]=
		{
			"FNP45_MRDSOptic"
		};
		WeaponLength=0.634148;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"SN_Mag_ShockCartridge"
		};
		chamberableFrom[]=
		{
			"SN_Tasser_Ammunition"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\FNX45\FNX45_dry",
			0.5,
			1,
			20
		};
		reSNdMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\FNX45\FNX45_reSNd",
			0.80000001,
			1,
			20
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"FNX45_Shot_SoundSet",
				"FNX45_Tail_SoundSet",
				"FNX45_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNX45_silencerPro_SoundSet",
					"FNX45_silencerTail_SoundSet",
					"FNX45_silencerInteriorTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\FNX45\FNX45_single_1",
				1,
				1,
				600
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\FNX45\FNX45_single_2",
				1,
				1,
				600
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
			reSNdTime=0.125;
			recoil="recoil_fnx";
			recoilProne="recoil_fnx_prone";
			dispersion=0.0060000001;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\colt1911\1911Silenced",
				1,
				1,
				60
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\colt1911\1911Silenced",
				1,
				1,
				100
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet="Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id=1;
				};
				class walkErc_R
				{
					soundSet="Weapon_Movement_Pistol_walkErc_R_SoundSet";
					id=2;
				};
				class runErc_L
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=3;
				};
				class runErc_R
				{
					soundSet="Weapon_Movement_Pistol_runErc_R_SoundSet";
					id=4;
				};
				class sprintErc_L
				{
					soundSet="Weapon_Movement_Pistol_sprintErc_SoundSet";
					id=5;
				};
				class sprintErc_R
				{
					soundSet="Weapon_Movement_Pistol_sprintErc_SoundSet";
					id=6;
				};
				class walkCro_L
				{
					soundSet="Weapon_Movement_Pistol_walkCro_SoundSet";
					id=21;
				};
				class walkCro_R
				{
					soundSet="Weapon_Movement_Pistol_walkCro_SoundSet";
					id=22;
				};
				class runCro_L
				{
					soundSet="Weapon_Movement_Pistol_runCro_SoundSet";
					id=23;
				};
				class runCro_R
				{
					soundSet="Weapon_Movement_Pistol_runCro_SoundSet";
					id=24;
				};
				class walkProne_L
				{
					soundSet="Weapon_Movement_Pistol_walkCro_SoundSet";
					id=31;
				};
				class walkProne_R
				{
					soundSet="Weapon_Movement_Pistol_walkCro_SoundSet";
					id=32;
				};
				class runProne_L
				{
					soundSet="Weapon_Movement_Pistol_runCro_SoundSet";
					id=33;
				};
				class runProne_R
				{
					soundSet="Weapon_Movement_Pistol_runCro_SoundSet";
					id=34;
				};
				class jumpErc_L
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=35;
				};
				class jumpErc_R
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=36;
				};
				class landFootErc_L
				{
					soundSet="Weapon_Movement_Pistol_landFootErc_SoundSet";
					id=37;
				};
				class landFootErc_R
				{
					soundSet="Weapon_Movement_Pistol_landFootErc_SoundSet";
					id=38;
				};
				class walkRasErc_L
				{
					soundSet="Weapon_Movement_Pistol_walkRasErc_SoundSet";
					id=51;
				};
				class walkRasErc_R
				{
					soundSet="Weapon_Movement_Pistol_walkRasErc_SoundSet";
					id=52;
				};
				class runRasErc_L
				{
					soundSet="Weapon_Movement_Pistol_runRasErc_SoundSet";
					id=53;
				};
				class runRasErc_R
				{
					soundSet="Weapon_Movement_Pistol_runRasErc_SoundSet";
					id=54;
				};
				class HandStep_L
				{
					soundSet="Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id=61;
				};
				class HandStep_R
				{
					soundSet="Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id=62;
				};
				class HandStep_Hard_L
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=63;
				};
				class HandStep_Hard_R
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=64;
				};
				class landFeetErc
				{
					soundSet="Weapon_Movement_Pistol_landFeetErc_SoundSet";
					id=100;
				};
				class Weapon_Movement_Pistol_Walk
				{
					soundSet="Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id=101;
				};
				class Weapon_Movement_Pistol_Run
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=102;
				};
				class Weapon_Movement_Pistol_Sprint
				{
					soundSet="Weapon_Movement_Pistol_sprintErc_SoundSet";
					id=103;
				};
				class Weapon_Movement_Pistol_Land
				{
					soundSet="Weapon_Movement_Pistol_landFeetErc_SoundSet";
					id=104;
				};
				class pickup
				{
					soundSet="pickUpPistol_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pistol_drop_SoundSet";
					id=898;
				};
				class bodyfall_pistol
				{
					soundSet="pickUpPistol_SoundSet";
					id=13400;
				};
			};
		};
	};
	class SN_Taser: SN_Taser_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="\dz\weapons\nonlethal\shockpistol\shockpistol.p3d";
		attachments[]=
		{
			"pistolMuzzle",
			"pistolOptics",
			"pistolFlashlight"
		};
		itemSize[]={4,2};
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
								"DZ\weapons\nonlethal\shockpistol\data\shockpistol_main.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\nonlethal\shockpistol\data\shockpistol_main_damage.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\nonlethal\shockpistol\data\shockpistol_main_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\nonlethal\shockpistol\data\shockpistol_main_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\nonlethal\shockpistol\data\shockpistol_main_destruct.rvmat"
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
				class walkErc_L
				{
					soundSet="Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id=1;
				};
				class walkErc_R
				{
					soundSet="Weapon_Movement_Pistol_walkErc_R_SoundSet";
					id=2;
				};
				class runErc_L
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=3;
				};
				class runErc_R
				{
					soundSet="Weapon_Movement_Pistol_runErc_R_SoundSet";
					id=4;
				};
				class sprintErc_L
				{
					soundSet="Weapon_Movement_Pistol_sprintErc_SoundSet";
					id=5;
				};
				class sprintErc_R
				{
					soundSet="Weapon_Movement_Pistol_sprintErc_SoundSet";
					id=6;
				};
				class walkCro_L
				{
					soundSet="Weapon_Movement_Pistol_walkCro_SoundSet";
					id=21;
				};
				class walkCro_R
				{
					soundSet="Weapon_Movement_Pistol_walkCro_SoundSet";
					id=22;
				};
				class runCro_L
				{
					soundSet="Weapon_Movement_Pistol_runCro_SoundSet";
					id=23;
				};
				class runCro_R
				{
					soundSet="Weapon_Movement_Pistol_runCro_SoundSet";
					id=24;
				};
				class walkProne_L
				{
					soundSet="Weapon_Movement_Pistol_walkCro_SoundSet";
					id=31;
				};
				class walkProne_R
				{
					soundSet="Weapon_Movement_Pistol_walkCro_SoundSet";
					id=32;
				};
				class runProne_L
				{
					soundSet="Weapon_Movement_Pistol_runCro_SoundSet";
					id=33;
				};
				class runProne_R
				{
					soundSet="Weapon_Movement_Pistol_runCro_SoundSet";
					id=34;
				};
				class jumpErc_L
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=35;
				};
				class jumpErc_R
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=36;
				};
				class landFootErc_L
				{
					soundSet="Weapon_Movement_Pistol_landFootErc_SoundSet";
					id=37;
				};
				class landFootErc_R
				{
					soundSet="Weapon_Movement_Pistol_landFootErc_SoundSet";
					id=38;
				};
				class walkRasErc_L
				{
					soundSet="Weapon_Movement_Pistol_walkRasErc_SoundSet";
					id=51;
				};
				class walkRasErc_R
				{
					soundSet="Weapon_Movement_Pistol_walkRasErc_SoundSet";
					id=52;
				};
				class runRasErc_L
				{
					soundSet="Weapon_Movement_Pistol_runRasErc_SoundSet";
					id=53;
				};
				class runRasErc_R
				{
					soundSet="Weapon_Movement_Pistol_runRasErc_SoundSet";
					id=54;
				};
				class HandStep_L
				{
					soundSet="Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id=61;
				};
				class HandStep_R
				{
					soundSet="Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id=62;
				};
				class HandStep_Hard_L
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=63;
				};
				class HandStep_Hard_R
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=64;
				};
				class landFeetErc
				{
					soundSet="Weapon_Movement_Pistol_landFeetErc_SoundSet";
					id=100;
				};
				class Weapon_Movement_Pistol_Walk
				{
					soundSet="Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id=101;
				};
				class Weapon_Movement_Pistol_Run
				{
					soundSet="Weapon_Movement_Pistol_runErc_L_SoundSet";
					id=102;
				};
				class Weapon_Movement_Pistol_Sprint
				{
					soundSet="Weapon_Movement_Pistol_sprintErc_SoundSet";
					id=103;
				};
				class Weapon_Movement_Pistol_Land
				{
					soundSet="Weapon_Movement_Pistol_landFeetErc_SoundSet";
					id=104;
				};
				class pickup
				{
					soundSet="pickUpPistol_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pistol_drop_SoundSet";
					id=898;
				};
				class bodyfall_pistol
				{
					soundSet="pickUpPistol_SoundSet";
					id=13400;
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					overrideParticle="weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=7;
				overheatingDecayInterval=1;
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyShockpistol: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistol";
		model="\dz\weapons\nonlethal\shockpistol\shockpistol.p3d";
	};
};

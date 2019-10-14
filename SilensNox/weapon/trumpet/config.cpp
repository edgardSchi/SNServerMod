class CfgPatches
{
	class SN_Trumpet
	{
		units[]=
		{
			"Trumpet"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Weapons"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Shotgun_Base;
	class Mp133Shotgun;
	class SN_Trumpet_Base: Mp133Shotgun
	{
		scope=0;	  
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		chamberSize=11;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_22"
		};
		magazines[]={};
		DisplayMagazine=0;
		PPDOFProperties[]={0,0,0,0,0,0};
		WeaponLength=1.0352499;
		ejectType=0;
		recoilModifier[]={1,1,1};
		cartridgeCreateTime[]={0.55000001,0.81999999};
		reSNdSkips[]={0.25999999,0.40000001,0.52999997,0.63999999,0.73500001};
		drySound[]=
		{
			"dz\sounds\weapons\shotguns\Izh43\izh43_dry",
			0.5,
			1,
			20
		};
		reSNdMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\trumpet\trombone_reSNd",
			0.80000001,
			1,
			20
		};
		reSNdSound[]=
		{
			"dz\sounds\weapons\firearms\trumpet\trombone_pump",
			0.80000001,
			1,
			20
		};
		reSNdAction="ReSNdMP133";
		shotAction="ReSNdMP133Shot";
		hiddenSelections[]=
		{
			"camo",
		};
		modes[]=
		{
			"Single"
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle="weapon_shot_winded_smoke";
					onlyWithinHealthLabel[]={3,4};
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp133_01";
					illuminateWorld=1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
					onlyWithinHealthLabel[]={3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
					onlyWithinHealthLabel[]={3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=4;
				shotsToStartOverheating=1;
				overheatingDecayInterval=3;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
				};
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
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Trumpet_Shot_SoundSet",
				"Trumpet_Tail_SoundSet",
				"Trumpet_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Trumpet_silencerHomeMade_SoundSet",
					"Trumpet_silencerHomeMadeTail_SoundSet",
					"Trumpet_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\trombone\trombone_shot_0",
				0.80000001,
				1,
				300
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\trombone\trombone_shot_1",
				0.80000001,
				1,
				300
			};
			soundBegin[]=
			{
				"begin1",
				0.8,
				"begin2",
				0.5
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4Silenced",
				0.050000001,
				1,
				150
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
			reSNdTime=1;
			recoil="recoil_Mp133";
			recoilProne="recoil_Mp133_prone";
			dispersion=0.0015;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
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
					soundSet="Weapon_Movement_Shotgun_walkErc_L_SoundSet";
					id=1;
				};
				class walkErc_R
				{
					soundSet="Weapon_Movement_Shotgun_walkErc_R_SoundSet";
					id=2;
				};
				class runErc_L
				{
					soundSet="Weapon_Movement_Shotgun_runErc_L_SoundSet";
					id=3;
				};
				class runErc_R
				{
					soundSet="Weapon_Movement_Shotgun_runErc_R_SoundSet";
					id=4;
				};
				class sprintErc_L
				{
					soundSet="Weapon_Movement_Shotgun_sprintErc_SoundSet";
					id=5;
				};
				class sprintErc_R
				{
					soundSet="Weapon_Movement_Shotgun_sprintErc_SoundSet";
					id=6;
				};
				class walkCro_L
				{
					soundSet="Weapon_Movement_Shotgun_walkCro_SoundSet";
					id=21;
				};
				class walkCro_R
				{
					soundSet="Weapon_Movement_Shotgun_walkCro_SoundSet";
					id=22;
				};
				class runCro_L
				{
					soundSet="Weapon_Movement_Shotgun_runCro_SoundSet";
					id=23;
				};
				class runCro_R
				{
					soundSet="Weapon_Movement_Shotgun_runCro_SoundSet";
					id=24;
				};
				class walkProne_L
				{
					soundSet="Weapon_Movement_Shotgun_walkCro_SoundSet";
					id=31;
				};
				class walkProne_R
				{
					soundSet="Weapon_Movement_Shotgun_walkCro_SoundSet";
					id=32;
				};
				class runProne_L
				{
					soundSet="Weapon_Movement_Shotgun_runCro_SoundSet";
					id=33;
				};
				class runProne_R
				{
					soundSet="Weapon_Movement_Shotgun_runCro_SoundSet";
					id=34;
				};
				class jumpErc_L
				{
					soundSet="Weapon_Movement_Shotgun_runErc_L_SoundSet";
					id=35;
				};
				class jumpErc_R
				{
					soundSet="Weapon_Movement_Shotgun_runErc_L_SoundSet";
					id=36;
				};
				class landFootErc_L
				{
					soundSet="Weapon_Movement_Shotgun_landFootErc_SoundSet";
					id=37;
				};
				class landFootErc_R
				{
					soundSet="Weapon_Movement_Shotgun_landFootErc_SoundSet";
					id=38;
				};
				class walkRasErc_L
				{
					soundSet="Weapon_Movement_Shotgun_walkRasErc_SoundSet";
					id=51;
				};
				class walkRasErc_R
				{
					soundSet="Weapon_Movement_Shotgun_walkRasErc_SoundSet";
					id=52;
				};
				class runRasErc_L
				{
					soundSet="Weapon_Movement_Shotgun_runRasErc_SoundSet";
					id=53;
				};
				class runRasErc_R
				{
					soundSet="Weapon_Movement_Shotgun_runRasErc_SoundSet";
					id=54;
				};
				class HandStep_L
				{
					soundSet="Weapon_Movement_Shotgun_walkErc_L_SoundSet";
					id=61;
				};
				class HandStep_R
				{
					soundSet="Weapon_Movement_Shotgun_walkErc_L_SoundSet";
					id=62;
				};
				class HandStep_Hard_L
				{
					soundSet="Weapon_Movement_Shotgun_runErc_L_SoundSet";
					id=63;
				};
				class HandStep_Hard_R
				{
					soundSet="Weapon_Movement_Shotgun_runErc_L_SoundSet";
					id=64;
				};
				class landFeetErc
				{
					soundSet="Weapon_Movement_Shotgun_landFeetErc_SoundSet";
					id=100;
				};
				class Weapon_Movement_Shotgun_Walk
				{
					soundSet="Weapon_Movement_Shotgun_walkErc_L_SoundSet";
					id=101;
				};
				class Weapon_Movement_Shotgun_Run
				{
					soundSet="Weapon_Movement_Shotgun_runErc_L_SoundSet";
					id=102;
				};
				class Weapon_Movement_Shotgun_Sprint
				{
					soundSet="Weapon_Movement_Shotgun_sprintErc_L_SoundSet";
					id=103;
				};
				class Weapon_Movement_Shotgun_Land
				{
					soundSet="Weapon_Movement_Shotgun_landFeetErc_SoundSet";
					id=104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet="Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id=892;
				};
				class drop
				{
					soundset="rifle_drop_SoundSet";
					id=898;
				};
				class bodyfall_rifle_light
				{
					soundSet="pickUpRifleLight_SoundSet";
					id=13400;
				};
				class bodyfall_rifle
				{
					soundset="pickUpRifle_SoundSet";
					id=13401;
				};
			};
		};
	};
	class SN_Trumpet: SN_Trumpet_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="\dz\weapons\firearms\Trumpet\trumpet.p3d";
		attachments[]=
		{
			"suppressorImpro",
			"weaponOpticsHunting"
		};
		itemSize[]={7,2};
		weight=2000;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\Trumpet\data\trombone_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\Trumpet\data\trumpet.rvmat"
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
								"DZ\weapons\shotguns\Mp133\data\mp133.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\shotguns\Mp133\data\mp133_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle="weapon_shot_winded_smoke";
					onlyWithinHealthLabel[]={3,4};
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp133_01";
					illuminateWorld=1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
					onlyWithinHealthLabel[]={3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
					onlyWithinHealthLabel[]={3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=4;
				shotsToStartOverheating=1;
				overheatingDecayInterval=3;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
				};
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

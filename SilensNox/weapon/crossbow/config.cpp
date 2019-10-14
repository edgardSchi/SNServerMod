class CfgPatches
{
	class SN_Crossbow
	{
		units[]=
		{
			"SN_Crossbow",
			"SN_Crossbow_Black",
			"SN_Crossbow_Green",
		};
		weapons[]={};
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
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class Mosin9130;
	class Inventory_Base;
	class SN_Crossbow_Base: Mosin9130
	{
		scope=0;
		displayName="";
		descriptionShort="";
		animName="Mosin9130";
		weight=1500;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		PPDOFProperties[]={0,0,0,0,0,0};
		WeaponLength=1.22271;
		value=0;  
		chamberSize=1;
		chamberedRound="";
		magazines[]={};
		chamberableFrom[]=
		{
			"Ammo_SNBolt",
			"Ammo_SNT1Arrow",
			"Ammo_SNT2Arrow",
			"Ammo_SNT3Arrow"
		};
		ejectType=0;
		recoilModifier[]={1,1,1};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};				   
		drySound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_dry",
			0.5,
			1,
			20
		};
		reSNdSkips[]={0.31999999,0.41,0.5,0.58999997,0.69,0.76999998};														 
		reSNdMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_reSNding",
			0.5,
			1,
			20
		};
		reSNdSound[]=
		{
			"DZ\sounds\weapons\firearms\mosin9130\mosin_cycling",
			0.5,
			1,
			20
		};
		reSNdAction="ReSNdMosinFull";
		shotAction="ReSNdMosinShort";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\archery\crossbow\data\crossbow.rvmat"
		};
		modes[]=
		{
			"Single"
		};
		class NoiseShoot
		{
			strength=3;
			type="shot";
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"SNCrossbow_Shot_SoundSet",
				"SNCrossbow_Shot_SoundSet",
				"SNCrossbow_Shot_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"SNCrossbow_Shot_SoundSet",
					"SNCrossbow_Shot_SoundSet",
					"SNCrossbow_Shot_SoundSet"
				}
			};
			reSNdTime=1;
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=0.001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=15;
			distanceZoomMax=15;
			discreteDistance[]={15,30,50,75,100};
			discreteDistanceInitIndex=0;
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
								"DZ\weapons\archery\crossbow\data\crossbow.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\archery\crossbow\data\crossbow.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\archery\crossbow\data\crossbow_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\archery\crossbow\data\crossbow_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\archery\crossbow\data\crossbow_destruct.rvmat"
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
					soundSet="Weapon_Movement_Rifle_sprintErc_SoundSet";
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
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="";
					ignoreIfSuppressed=1;
					illuminateWorld=0;
					positionOffset[]={0.0,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=3;
				overheatingDecayInterval=4;
				class BarrelSmoke
				{
					overrideParticle="";
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="";
					overridePoint="";
				};
			};
		};
	};
	class SN_Crossbow: SN_Crossbow_Base
	{
		scope=2;
		model="\dz\weapons\archery\crossbow\crossbow.p3d";
		itemSize[]={7,5};
		attachments[]=
		{
			"weaponOpticsCrossbow"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\archery\crossbow\data\crossbow_leaves_co.paa"
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
					soundSet="Weapon_Movement_Rifle_sprintErc_SoundSet";
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
	class SN_Crossbow_Black: SN_Crossbow
	{
		scope=2;
		displayName="";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\archery\crossbow\data\crossbow_black_co.paa"
		};
	};
	class SN_Crossbow_Green: SN_Crossbow
	{
		scope=2;
		displayName="";
		descriptionShort="";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\archery\crossbow\data\crossbow_green_co.paa"
		};
	};
};
class CfgSoundSets
{
	class Pistol_silencerPro_Base_SoundSet;
	class SNCrossbow_Shot_SoundSet: Pistol_silencerPro_Base_SoundSet
	{
		soundShaders[]=
		{
			"SNCrossbow_closeShot_SoundShader",
			"SNCrossbow_midShot_SoundShader",
			"SNCrossbow_distShot_SoundShader"
		};
	};
};
class CfgSoundShaders
{
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class SNSilenced_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		volume=1;
		range=5;
		rangeCurve[]=
		{
			{0,1},
			{2,1},
			{3,0.89399999},
			{4,0.77600002}
		};
	};
	class SNCrossbow_closeShot_SoundShader: SNSilenced_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\nonlethal\dartgun\Dartgun_closure",
				1
			},
			{
				"DZ\sounds\weapons\nonlethal\dartgun\Dartgun_closure",
				1
			},
			{
				"DZ\sounds\weapons\nonlethal\dartgun\Dartgun_closure",
				1
			}
		};
	};
	class SNCrossbow_midShot_SoundShader: SNSilenced_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\nonlethal\dartgun\Dartgun_midShot",
				1
			},
			{
				"DZ\sounds\weapons\nonlethal\dartgun\Dartgun_midShot",
				1
			},
			{
				"DZ\sounds\weapons\nonlethal\dartgun\Dartgun_midShot",
				1
			}
		};
	};
	class SNCrossbow_distShot_SoundShader: SNSilenced_SoundShader
	{
		samples[]=
		{
			
			{
				"DZ\sounds\weapons\nonlethal\dartgun\Dartgun_closure",
				1
			},
			{
				"DZ\sounds\weapons\nonlethal\dartgun\Dartgun_closure",
				1
			},
			{
				"DZ\sounds\weapons\nonlethal\dartgun\Dartgun_closure",
				1
			}
		};
	};
};

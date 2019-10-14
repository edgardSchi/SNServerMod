class CfgPatches
{
	class DZ_Pistols_FNX45
	{
		units[]=
		{
			"FNX45"
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
	class FNX45;
	class SN_M9A1_Base: FNX45
	{
		scope=0;
	};
	class SN_M92FS: SN_M9A1_Base
	{
		scope=2;
		displayName="";
		descriptionShort="9x19mm";
		model="\SilensNox\weapon\M9A1\M9A1.p3d";
		attachments[]=
		{
			"pistolMuzzle",
			"pistolFlashlight"
		};
		magazines[]=
		{
			"SN_Mag_M92FS"
		};
		chamberableFrom[]=
		{
			"Ammo_9x19"
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
								"SilensNox\weapon\M9A1\M9A1.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SilensNox\weapon\M9A1\M9A1.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SilensNox\weapon\M9A1\M9A1_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SilensNox\weapon\M9A1\M9A1_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SilensNox\weapon\M9A1\M9A1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SN_M92FS22LR: SN_M92FS
	{
		scope=2;
		displayName="";
		descriptionShort=".22LR";
		model="\SilensNox\weapon\M9A1\M9A1.p3d";
		magazines[]=
		{
			"SN_Mag_M92FS22LR"
		};
		chamberableFrom[]=
		{
			"Ammo_22"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"CZ75_Shot_SoundSet",
				"CZ75_Tail_SoundSet",
				"CZ75_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"CZ75_silencerPro_SoundSet",
					"CZ75_silencerTail_SoundSet",
					"CZ75_silencerInteriorTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\CZ75\CZ75_single_0",
				1,
				1,
				600
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\CZ75\CZ75_single_1",
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
				"begin1",
				0.33333001,
				"begin2",
				0.33333001
			};
			beginSilenced_Pro1[]=
			{
				"dz\sounds\weapons\firearms\CZ75\cz75Silenced",
				1,
				1,
				60
			};
			beginSilenced_Pro2[]=
			{
				"dz\sounds\weapons\firearms\CZ75\cz75Silenced2",
				1,
				1,
				60
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\CZ75\cz75Silenced",
				1,
				1,
				100
			};
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
			reSNdTime=0.125;
			recoil="recoil_cz75";
			recoilProne="recoil_cz75_prone";
			dispersion=0.0060000001;
			magazineSlot="magazine";
		};
	};
};
class CfgMagazines
{
	class Mag_FNX45_15Rnd;
	class SN_Mag_M92FS: Mag_FNX45_15Rnd
	{
		scope=2;
		displayName="M92FS Magazin";
		descriptionShort="Ein Magazin für die M92FS - 9x19MM";
		model="\SilensNox\weapon\M9A1\M92FSMagazine.p3d";
		weight=113;
		itemSize[]={1,2};
		count=15;
		ammo="Bullet_9x19";
		ammoItems[]=
		{
			"Ammo_9x19"
		};
		tracersEvery=0;
		mass=10;
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
								"SilensNox\weapon\M9A1\M9Magazine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SilensNox\weapon\M9A1\M9Magazine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SilensNox\weapon\M9A1\M9Magazine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SilensNox\weapon\M9A1\M9Magazine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SilensNox\weapon\M9A1\M9Magazine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SN_Mag_M92FS22LR: SN_Mag_M92FS
	{
		scope=2;
		displayName="M92FS22LR Magazin";
		descriptionShort="Ein Magazin für die M92FS - 22LR";
		ammo="Bullet_22";
		ammoItems[]=
		{
			"Ammo_22"
		};
	};
};

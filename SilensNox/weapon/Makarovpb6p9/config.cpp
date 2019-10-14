class CfgPatches
{
	class SN_PB69P9
	{
		units[]={};
		weapons[]=
		{
			"SN_PB6P9"
		};
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
class cfgWeapons
{
	class MakarovIJ70;
	class SN_PB6P9_Base: MakarovIJ70
	{
		scope=0;
		weight=760;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		optics=1;
		value=0;
		chamberSize=1;
		chamberedRound="";
		hiddenSelections[]=
		{
			"camo",
			"zasleh"
		};
		magazines[]=
		{
			"Mag_MakarovPB_8Rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_380"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		drySound[]=
		{
			"DZ\sounds\weapons\firearms\PB6P9\PB6P9_dry",
			0.5,
			1,
			20
		};
		reSNdMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\ij70\Makarov_reSNd",
			0.80000001,
			1,
			20
		};
		reSNdAction="ReSNdIJ70";
		modes[]=
		{
			"Single"
		};
		class NoiseShoot
		{
			strength=40;
			type="shot";
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"PB6P9_silencerPro_SoundSet",
				"PB6P9_silencerTail_SoundSet",
				"PB6P9_silencerInteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"PB6P9_silencerPro_SoundSet",
					"PB6P9_silencerTail_SoundSet",
					"PB6P9_silencerInteriorTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\ij70\pb6p9_close_shot_01",
				1,
				1,
				60
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\ij70\pb6p9_close_shot_02",
				1,
				1,
				60
			};
			soundBegin[]=
			{
				"begin1",
				0.5,
				"begin2",
				0.5
			};
			reSNdTime=0.13;
			recoil="recoil_pb6p9";
			recoilProne="recoil_pb6p9_prone";
			dispersion=0.0060000001;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\ij70\MakarovSilenced",
				1,
				1,
				60
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\ij70\MakarovSilenced",
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
	};
	class SN_PB6P9: SN_PB6P9_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="\DZ\weapons\pistols\pb6p9\pb6p9.p3d";
		itemSize[]={4,2};
		dexterity=3.7;
		attachments[]={};
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
								"DZ\weapons\pistols\pb6p9\data\pb6p9.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\pb6p9\data\pb6p9.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\pb6p9\data\pb6p9_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\pb6p9\data\pb6p9_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\pb6p9\data\pb6p9_destruct.rvmat"
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
	recoil_pb6p9[]=
	{
		0,
		0,
		0,
		0.039999999,
		"0.036943*(0.8)",
		"0.0134348*(2.3)",
		0.079999998,
		"0.019755*(0.8)",
		"0.003056*(2.3)",
		0.090000004,
		0,
		0,
		0.14,
		"-0.003138*(0.8)",
		"-0.0005*(2.3)",
		0.079999998,
		"-0.001177*(0.8)",
		"-0.000188*(2.3)",
		0.12,
		0,
		0
	};
	recoil_pb6p9_prone[]=
	{
		0,
		0,
		0,
		0.039999999,
		"0.036943*(0.5)",
		"0.0134348*(1)",
		0.079999998,
		"0.019755*(0.5)",
		"0.003056*(1)",
		0.090000004,
		0,
		0,
		0.14,
		"-0.003138*(0.5)",
		"-0.0005*(1)",
		0.079999998,
		"-0.001177*(0.5)",
		"-0.000188*(1)",
		0.12,
		0,
		0
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMagazine_pb6p9: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="\dz\weapons\attachments\magazine\magazine_pb6p9.p3d";
	};
};
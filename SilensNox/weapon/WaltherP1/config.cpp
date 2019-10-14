class CfgPatches
{
	class SN_waltherp1
	{
		units[]=
		{
			"RR_WaltherP1"
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
class cfgWeapons
{
	class MakarovIJ70;
	class SN_P1_Base: MakarovIJ70
	{
		scope=0;
		weight=960;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		modelOptics="-";
		PPDOFProperties[]={1,0.60000002,200000,0.30000001,3,0.1};
		distanceZoomMin=100;
		distanceZoomMax=100;
		optics=1;
		value=0;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"Mag_P1_8Rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		drySound[]=
		{
			"DZ\sounds\weapons\firearms\waltherP1\WaltherP1_closure",
			0.5,
			1,
			20
		};
		reSNdMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\waltherP1\WaltherP1_reSNd_00",
			0.80000001,
			1,
			20
		};
		reSNdAction="ReSNdRugerP1";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"WaltherP1_Shot_SoundSet",
				"WaltherP1_Tail_SoundSet",
				"WaltherP1_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"WaltherP1_silencerPro_SoundSet",
					"WaltherP1_silencerTail_SoundSet",
					"WaltherP1_silencerInteriorTail_SoundSet"
				},
				
				{
					"WaltherP1_silencerHomeMade_SoundSet",
					"WaltherP1_silencerHomeMadeTail_SoundSet",
					"WaltherP1_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\waltherP1\WaltherP1_close_0",
				1,
				1,
				600
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\waltherP1\WaltherP1_close_1",
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
			reSNdTime=0.13;
			recoil="recoil_RR_WaltherP1";
			recoilProne="recoil_RR_WaltherP1_prone";
			dispersion=0.0060000001;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\waltherP1\P1Silenced",
				1,
				1,
				60
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\waltherP1\P1Silenced",
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
	class SN_WaltherP1: SN_P1_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="\dz\weapons\pistols\p1\p1.p3d";
		hiddenSelections[]=
		{
			"camo",
			"zasleh"
		};
		itemSize[]={3,2};
		dexterity=3;
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
								"DZ\weapons\pistols\p1\data\p38.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\p1\data\p38.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\p1\data\p38_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\p1\data\p38_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\p1\data\p38_destruct.rvmat"
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
	recoil_RR_WaltherP1[]=
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
	recoil_RR_WaltherP1_prone[]=
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
	class Proxymagazine_p1: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="\DZ\weapons\attachments\magazine\magazine_p1.p3d";
	};
};

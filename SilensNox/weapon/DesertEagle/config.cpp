class CfgPatches
{
	class SN_DesertEagle
	{
		units[]={};
		weapons[]=
		{
			"SN_DesertEagle_Golden"
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
	class CZ75;
	class SN_DesertEagle_Base: CZ75
	{
		scope=0;
		weight=1500;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		discreteDistance[]={100};
		discreteDistanceInitIndex=1;
		optics=1;
		value=0;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"Mag_DE_9rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_357"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\FNX45\FNX_dry",
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
		hiddenSelections[]=
		{
			"camo"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"DEG_Shot_SoundSet",
				"DEG_Tail_SoundSet",
				"DEG_InteriorTail_SoundSet"
			};
			reSNdTime=0.18000001;
			recoil="recoil_SN_DesertEagle";
			recoilProne="recoil_SN_DesertEagle_prone";
			dispersion=0.0060000001;
			magazineSlot="magazine";
			begin1[]=
			{
				"dz\sounds\weapons\firearms\magnum\magnum_single_2",
				1,
				1,
				700
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\magnum\magnum_single_1",
				1,
				1,
				700
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
		};
	};
	class SN_DesertEagle_Golden: SN_DesertEagle_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="\dz\weapons\pistols\DE\DE.p3d";
		attachments[]={};
		itemSize[]={4,3};
		dexterity=2.8;
		hiddenSelections[]=
		{
			"camo",
			"zasleh"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\pistols\DE\data\gold_DE_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\pistols\DE\data\gold_de.rvmat"
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
								"DZ\weapons\pistols\DE\data\gold_de.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\DE\data\gold_de.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\DE\data\gold_de_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\DE\data\gold_de_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\DE\data\gold_de_destruct.rvmat"
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
	recoil_SN_DesertEagle[]=
	{
		0,
		0,
		0,
		0.039999999,
		"0.036943*(1)",
		"0.0134348*(3)",
		0.079999998,
		"0.019755*(1)",
		"0.003056*(3)",
		0.090000004,
		0,
		0,
		0.14,
		"-0.003138*(1)",
		"-0.0005*(3)",
		0.079999998,
		"-0.001177*(1)",
		"-0.000188*(3)",
		0.12,
		0,
		0
	};
	recoil_SN_DesertEagle_prone[]=
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
	class ProxyMagazine_DE: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="\dz\weapons\attachments\magazine\magazine_DE.p3d";
	};
};

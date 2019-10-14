class CfgPatches
{
	class SN_colt1911
	{
		units[]=
		{
			"RR_Colt1911"
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
	class FNX45;
	class SN_Colt1911_Base: FNX45
	{
		scope=0;
		weight=1106;
		absorbency=0;
		dexterity=3.5999999;
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
			"Mag_1911_7Rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_45ACP"
		};
		magazineSwitchTime=0.23999999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\colt1911\Colt1911_dry",
			0.5,
			1,
			20
		};
		reSNdMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\colt1911\Colt1911_reSNd",
			0.80000001,
			1,
			20
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Colt1911_Shot_SoundSet",
				"Colt1911_Tail_SoundSet",
				"Colt1911_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Colt1911_silencerPro_SoundSet",
					"Colt1911_silencerTail_SoundSet",
					"Colt1911_silencerInteriorTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\colt1911\Colt1911_0",
				1,
				1,
				700
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\colt1911\Colt1911_1",
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
				"begin2",
				0.33333001
			};
			reSNdTime=0.13;
			recoil="recoil_SN_colt1911";
			recoilProne="recoil_SN_colt1911_prone";
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
	};
	class SN_Colt1911: SN_Colt1911_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		hiddenSelections[]=
		{
			"camo",
			"zasleh"
		};
		model="\dz\weapons\pistols\1911\1911.p3d";
		attachments[]=
		{
			"pistolFlashlight",
			"pistolMuzzle"
		};
		itemSize[]={4,2};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\pistols\1911\data\1911_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\pistols\1911\data\1911.rvmat"
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
								"DZ\weapons\pistols\1911\data\1911.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\1911\data\1911.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\1911\data\1911_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\1911\data\1911_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\1911\data\1911_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SN_Engraved1911: SN_Colt1911_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="\dz\weapons\pistols\1911\1911_engraved.p3d";
		attachments[]=
		{
			"pistolFlashlight",
			"pistolMuzzle"
		};
		itemSize[]={4,2};
		hiddenSelections[]=
		{
			"camo",
			"zasleh"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\pistols\1911\data\1911_engraved_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\pistols\1911\data\1911_engraved.rvmat"
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
								"DZ\weapons\pistols\1911\data\1911_engraved.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\1911\data\1911_engraved.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\1911\data\1911_engraved_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\1911\data\1911_engraved_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\pistols\1911\data\1911_engraved_destruct.rvmat"
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
	recoil_SN_colt1911[]=
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
	recoil_SN_colt1911_prone[]=
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
	class ProxyMagazine_1911: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="\dz\weapons\attachments\magazine\magazine_1911.p3d";
	};
};
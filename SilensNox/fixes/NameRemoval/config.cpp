class CfgPatches
{
    class SN_NameRemoval
    {
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
            "DZ_Weapons_Firearms_AK74",
			"DZ_Weapons_Firearms_AK101",
			"DZ_Weapons_Firearms_AKM",
			"DZ_Weapons_Firearms_cz61",
			"DZ_Weapons_Firearms_CZ527",
			"DZ_Weapons_Firearms_FAL",
			"DZ_Weapons_Firearms_IZH18",
			"DZ_Weapons_Firearms_M4",
			"DZ_Weapons_Firearms_MosinNagant",
			"DZ_Weapons_Firearms_MP5",
			"DZ_Weapons_Firearms_SKS",
			"DZ_Weapons_Firearms_SVD",
			"DZ_Weapons_Firearms_UMP",
			"DZ_Weapons_Firearms_VSS",
			"DZ_Weapons_Firearms_Winchester70",
			"DZ_Pistols_CZ75",
			"DZ_Pistols_FNX45",
			"DZ_Pistols_Glock",
			"DZ_Pistols_mkii",
			"DZ_Weapons_Shotguns_MP133",
			"Mass_Guns",
			"Munghardsgewehr43",
			"Munghardscsmcmillan",
			"Munghardsdiana_m27",
			"Munghardslebedev",
			"DZ_Vehicles_Wheeled",
			"Misho_VityazSN",
			"MoreGuns_StechkinAPS",
			"scar",
			"MoreGuns_MP7",
			"MoreGuns_Mk22",
			"MoreGuns_M16",
			"MoreGuns_M14",
			"MoreGuns_M1A",
			"MoreGuns_Kar98",
			"MoreGuns_AWM",
			"DZ_Pistols_pmm"
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
	class Rifle_Base;
	class AK74_Base;
	class AK101_Base;
	class AKM_Base;
	class CZ61_Base;
	class CZ527_Base;
	class FAL_Base;
	class Izh18_Base;
	class M4A1_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class MP5K_Base;
	class SKS_Base;
	class SVD_Base;
	class UMP45_Base;
	class VSS_Base;
	class Winchester70_Base;
	class CZ75_Base;
	class FNX45_Base;
	class Glock19_Base;
	class MKII_Base;
	class Mp133Shotgun_Base;
	class MassPPSH41_Base;
	class MassScout556_Base;
	class Massm300_Base;
	class Stevens_Base;
	class gevar_base;
	class MassSVT40_Base;
	class MassG18_Base;
	class MassM19_Base;
	class Massmini14_Base;
	class MassB52_Base;
	class PPSKN_Base;
	class MassAR15_Base;
	class MassM110_Base;
	class MassArmsan_Base;
	class Gewehr43_Base;
	class csmcmillan_Base;
	class diana_m27_Base;
	class Munghardsnagant;
	class Vityaz_Base;
	class StechkinAPS_Base;
	class Scar_Base;
	class MP7_Base;
	class Mk22_Base;
	class M16_Base;
	class M14_Base;
	class Kar98Real_Base;
	class AWMreal_Base;
	class MassType81_Base;
	class MassMP153_Base;
	class M1A_Base;
	class MakarovIJ70_Base;
	class Massm16_Base;
	//ENDRQ
	class MassM16: Massm16_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class NiphoriaM16: MassM16
	{
		scope=2;
		displayName="Hentai!";
		descriptionShort="BAKA";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"SilensNox\fixes\NameRemoval\m16hentai_co.paa"};
		hiddenSelectionsMaterials[] = {"SilensNox\fixes\NameRemoval\m16hentai.rvmat"};
	};
	class MakarovIJ70: MakarovIJ70_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class MassMP153: MassMP153_Base
	{
		scope = 2;
		displayName = "";
		descriptionShort = "";
	};
	class MassMP153Short: MassMP153_Base
	{
		scope = 2;
		displayName = "";
		descriptionShort = "";
	};
	class MassType81: MassType81_Base
	{
		scope = 2;
		displayName = "";
		descriptionShort = "$";
	};
	class AWMreal: AWMreal_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class Kar98Real: Kar98Real_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class M1A: M1A_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class M1A_Tan: M1A
	{
		displayName="";
	};
	class M1A_Green: M1A
	{
		displayName="";
	};
	class M14: M14_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class M16: M16_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class Mk22: Mk22_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class SCAR: Scar_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class Scar_Artic: SCAR
	{
		scope=2;
		displayName="";
	};
	class Scar_Desert: SCAR
	{
		scope=2;
		displayName="";
	};
	class Scar_Desert2: SCAR
	{
		scope=2;
		displayName="";
	};
	class Scar_Tanbrown: SCAR
	{
		scope=2;
		displayName="";
	};
	class Scar_Woodland: SCAR
	{
		scope=2;
		displayName="";
	};
	class MP7: MP7_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class StechkinAPS: StechkinAPS_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class VityazSN: Vityaz_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class VityazSN_TTSKO: VityazSN
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class VityazSN_UCP: VityazSN
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class VityazSN_Baroness: VityazSN
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	
	class AK74: AK74_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class AKS74U: AK74_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class AK101: AK101_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class AKM: AKM_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class AKMFroschi: AKM
	{
		scope=2;
		displayName="AKM-4 mit Buttstock und Pumpenpleuelstange";
		descriptionShort="Wenn Froschi eine waffe benennen dürfte";
	};
	class CZ61: CZ61_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class CZ527: CZ527_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class CZ527_Black: CZ527
	{
		scope=2;
		descriptionShort="";
	};
	class CZ527_Green: CZ527
	{
		scope=2;
		descriptionShort="";
	};
	class CZ527_Camo: CZ527
	{
		scope=2;
		descriptionShort="";
	};
	class FAL: FAL_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class Izh18: Izh18_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class SawedoffIzh18: Izh18
	{
		scope=2;
		displayName="";
		descriptionShort="";	
	};
	class M4A1: M4A1_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope=0;
		displayName="";
		descriptionShort="";
	};
	class SawedoffMosin9130_Base: Mosin9130_Base
	{
		scope=0;
		displayName="";
		descriptionShort="";
	};
	class MP5K: MP5K_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";	
	};
	class SKS: SKS_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class SVD: SVD_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";	
	};
	class UMP45: UMP45_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class VSS: VSS_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class Winchester70: Winchester70_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class Winchester70_Black: Winchester70
	{
		scope=2;
		descriptionShort="";
	};
	class Winchester70_Green: Winchester70
	{
		scope=2;
		descriptionShort="";
	};
	class CZ75: CZ75_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class FNX45: FNX45_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class Glock19: Glock19_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class MKII: MKII_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class Mp133Shotgun: Mp133Shotgun_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class MassPPSH41: MassPPSH41_Base
	{
		scope=2;
		displayName="";
		descriptionShort="Model Provided by Jakob0324 Animation help by Niphoria 'Mass'";
	};
	class MassPPSH41_Black: MassPPSH41
	{
		scope=2;
		color="Black";
		descriptionShort="Model Provided by Jakob0324 Animation help by Niphoria. Black spraypaint by AsorryCanadian'Mass'";
	};
	class MassPPSH41_Green: MassPPSH41
	{
		scope=2;
		color="Green";
		descriptionShort="Model Provided by Jakob0324 Animation help by Niphoria. Green spraypaint by AsorryCanadian'Mass'";
	};
	class MassPPSH41_Camo: MassPPSH41
	{
		scope=2;
		color="Camo";
		descriptionShort="Model Provided by Jakob0324 Animation help by Niphoria. Camo spraypaint by AsorryCanadian'Mass'";
	};
	class MassScout556: MassScout556_Base
	{
		scope=2;
		displayName="";
		descriptionShort="'Mass'";
	};
	class Massm300: Massm300_Base
	{
		scope=2;
		displayName="";
		descriptionShort="'Mass'";
	};
	class MassStevens301: Stevens_Base
	{
		scope=2;
		displayName="";
		descriptionShort="'Mass' Model and Textures by the incredible 'omgitstallin' ";
	};
	class MassStevens301SuperShort: MassStevens301
	{
		descriptionShort="'Mass' Model and Textures by the incredible 'omgitstallin'.";
	};	
	class MassStevens301SHORT: MassStevens301
	{
		descriptionShort="'Mass' Model and Textures by the incredible 'omgitstallin'";
	};
	class MassKivaari: gevar_base
	{
		scope=2;
		displayName="";
		descriptionShort="'Mass'";
	};
	class MassSVT40: MassSVT40_Base
	{
		scope=2;
		displayName="";
		descriptionShort="Model provided by MyloTheAverageSniper,Animation work by Niphoria 'Mass'";
	};
	class MassSVT40_Black: MassSVT40
	{
		scope=2;
		descriptionShort="Model provided by MyloTheAverageSniper, Animation work by Niphoria and paint textures by AsorryCanadian 'Mass'";
	};	
	class MassSVT40_Green: MassSVT40
	{
		scope=2;
		descriptionShort="Model provided by MyloTheAverageSniper, Animation work by Niphoria and paint textures by AsorryCanadian 'Mass'";	
	};	
	class MassSVT40_Camo: MassSVT40
	{
		scope=2;
		descriptionShort="Model provided by MyloTheAverageSniper, Animation work by Niphoria and paint textures by AsorryCanadian 'Mass'";
	};
	class MassG18: MassG18_Base
	{
		scope=2;
		displayName="";
		descriptionShort="'Mass'";
	};
	class MassM19: MassM19_Base
	{
		scope=2;
		displayName="";
		descriptionShort="Animation work by Niphoria, Model by KnechtRuprecht 'Mass'";
	};
	class Massmini14: Massmini14_Base
	{
		scope=2;
		displayName="";
		descriptionShort="'Mass'";
	};
	class MassB52: MassB52_Base
	{
		scope=2;
		displayName="";
		descriptionShort="'Mass'";
	};
	class MassPpskn: PPSKN_Base
	{
		scope=2;
		displayName="";
		descriptionShort="'Mass'";
	};
	class MassAR15: MassAR15_Base
	{
		scope=2;
		displayName="";
		descriptionShort="'Mass'";
	};
	class MassM110: MassM110_Base
	{
		scope=2;
		displayName="";
		descriptionShort="Model Provided by Jordan447, Or better known as - Chris P Bacon 'Mass'";
	};
	class Massarmsan: MassArmsan_Base
	{
		scope=2;
		displayName="";
		descriptionShort="'Mass'";
	};
	class Gewehr43_mung: Gewehr43_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class csmcmillan_mung: csmcmillan_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class diana_m27_mung: diana_m27_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class lebedev_PL15_mung: CZ75
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
	class Nagant1895_mung: FNX45_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
	};
};
/*
class CfgVehicles
{
	class Inventory_Base;
	class CarWheel;
	class HatchbackWheel: CarWheel
	{
		scope=2;
		displayName="$STR_HatchbackWheel0";
		descriptionShort="$STR_hatchbackwheel1";
	}
	class HatchbackWheel_Ruined: CarWheel
	{
		scope=2;
		displayName="$STR_HatchbackWheel0";
		descriptionShort="$STR_hatchbackwheel1";
	}
	class HatchbackDoors_Driver: CarDoor
	{
		scope=2;
		displayName="$STR_HatchbackDoors_Driver0";
		descriptionShort="$STR_HatchbackDoors_Driver1";
	}	
	class HatchbackDoors_CoDriver: HatchbackDoors_Driver
	{
		displayName="$STR_HatchbackDoors_CoDriver0";
		descriptionShort="$STR_HatchbackDoors_CoDriver1";
	}
	class HatchbackHood: CarDoor
	{
		scope=2;
		displayName="$STR_HatchbackHood0";
		descriptionShort="$STR_HatchbackHood1";
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
class CfgPatches
{
	class SN_MKII		// will be removed eventually ...
	{
		units[]=
		{
			"mkii"
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
	class Pistol_Base;
	class MKII;
	class SN_MKII_Base: MKII
	{
		scope=0;
	};
	class SN_MKII: SN_MKII_Base
	{
		scope=2;
	};
};

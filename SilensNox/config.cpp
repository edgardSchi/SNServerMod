class CfgPatches // Dont try to steal our stuff ... DMCA's are funny c:
{
	class SilensNox
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"OP_BaseItems",
			"MunghardsItems",
			"DayZExpansionChat",
			"Munghardshikingbag",
			"cdub_sneaky_stashes",
			"MedicalAttentionScipts",
			"Windstrideclothing",
			"Gerph_Zil130",
			"CrSk_VAZ_2107",
			"CrSk_BMW_525i_E34"
		};
	};
};
class CfgMods
{
	class SilensNox
	{
		dir="SilensNox";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SilensNox";
		credits="Silens Nox Team";
		author="Niphoria | Eddy";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"SilensNox/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"SilensNox/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"SilensNox/scripts/5_Mission"
				};
			};
		};
	};
};

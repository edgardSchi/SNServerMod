class CfgPatches
{
	class SilensNoxScripts
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
	class SilensNoxScripts
	{
		dir="SilensNoxScripts";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SilensNoxScripts";
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
					"SilensNoxScripts/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"SilensNoxScripts/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"SilensNoxScripts/scripts/5_Mission"
				};
			};
		};
	};
};

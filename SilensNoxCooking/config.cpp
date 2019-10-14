class CfgPatches
{
	class SilensNoxCooking
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"DZ_Data",
			"SilensNox"
		};
	};
};

class CfgMods
{
	class SilensNoxCooking
	{

		dir = "SilensNoxCooking";
		hideName = 1;
		hidePicture = 1;
		name = "SN Cooking";
		author = "Eddy";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = { "World" };
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = { "SilensNoxCooking/Scripts/4_World" };
			};
		};
	};
};
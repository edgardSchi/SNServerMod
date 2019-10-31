class CfgPatches
{
    class SN_VehicleKeys
    {
        units[]=
        {
            "SN_Boombox"
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data"
        };
    };
};
class CfgVehicles
{
	class Inventory_Base;
	class SN_KeyBase: Inventory_Base
	{
		scope=2;
		displayName="Debug Key";
		descriptionShort="???????";
		model="SilensNox\roleplay\VehicleKey\VehicleKey.p3d";
		lootCategory="Civillian";
		targetCategory="loot";
		weight=5;
		itemSize[]={1,1};
		hiddenSelectionsTextures[]=
		{
			"SilensNox\roleplay\VehicleKey\Data\VehicleKey_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SilensNox\roleplay\VehicleKey\Data\VehicleKey.rvmat"
		};
	};
	class SN_WolgaK1: SN_KeyBase
	{
		scope=2;
		displayName="Wolga Key 1";
		descriptionShort="Testkey";
		inventoryslot="SNWolgaK_1";
	};
	class SN_WolgaK2: SN_KeyBase
	{
		scope=2;
		displayName="Wolga Key 1";
		descriptionShort="Testkey";
		inventoryslot="SNWolgaK_2";
	};
	
	
	
	
	
	
	
	
	
	// VehicleStart
	class CivilianSedan;
	class SN_Wolga_01: CivilianSedan
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"CivSedanDriverDoors",
			"CivSedanCoDriverDoors",
			"CivSedanCargo1Doors",
			"CivSedanCargo2Doors",
			"CivSedanHood",
			"CivSedanTrunk",
			"CivSedanWheel_1_1",
			"CivSedanWheel_1_2",
			"CivSedanWheel_2_1",
			"CivSedanWheel_2_2",
			"SNWolgaK_1"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="$STR_attachment_Engine0";
				description="";
				icon="cat_vehicle_engine";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNWolgaK_1"
				};
			};
			class Body
			{
				name="$STR_attachment_Body0";
				description="";
				icon="cat_vehicle_body";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"CivSedanHood",
					"CivSedanTrunk",
					"CivSedanDriverDoors",
					"CivSedanCoDriverDoors",
					"CivSedanCargo1Doors",
					"CivSedanCargo2Doors"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"CivSedanWheel_1_1",
					"CivSedanWheel_1_2",
					"CivSedanWheel_2_1",
					"CivSedanWheel_2_2",
					"CivSedanWheel_Spare_1"
				};
			};
		};
	};
};
    
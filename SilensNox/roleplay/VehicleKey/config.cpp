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
		scope=0;
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
	class SNWolgaK_1: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="EB21";
		inventoryslot="SNWolgaK_1";
	};
	class SNWolgaK_2: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="SAF6";
		inventoryslot="SNWolgaK_2";
	};
	class SNWolgaK_3: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="NJA9";
		inventoryslot="SNWolgaK_3";
	};
	class SNWolgaK_4: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="JFO9";
		inventoryslot="SNWolgaK_4";
	};
	class SNWolgaK_5: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="3J2P";
		inventoryslot="SNWolgaK_5";
	};
	class SN_WolgaK6: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="930E";
		inventoryslot="SNWolgaK_6";
	};
	class SN_WolgaK7: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="LÖ6O";
		inventoryslot="SNWolgaK_7";
	};
	class SN_WolgaK8: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="QSK8";
		inventoryslot="SNWolgaK_8";
	};
	class SN_WolgaK9: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="BDHJ";
		inventoryslot="SNWolgaK_9";
	};
	class SN_WolgaK10: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="OJI4";
		inventoryslot="SNWolgaK_10";
	};
	
	class SN_NivaK1: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="OJI4";
		inventoryslot="SNNivaK_1";
	};
	class SN_NivaK2: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="OJI4";
		inventoryslot="SNNivaK_1";
	};
	class SN_NivaK3: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="OJI4";
		inventoryslot="SNNivaK_1";
	};
	class SN_NivaK4: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="OJI4";
		inventoryslot="SNNivaK_1";
	};
	class SN_NivaK5: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="OJI4";
		inventoryslot="SNNivaK_1";
	};
	class SN_NivaK6: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="OJI4";
		inventoryslot="SNNivaK_1";
	};
	class SN_NivaK7: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="OJI4";
		inventoryslot="SNNivaK_1";
	};
	class SN_NivaK8: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="OJI4";
		inventoryslot="SNNivaK_1";
	};
	class SN_NivaK9: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="OJI4";
		inventoryslot="SNNivaK_1";
	};
	class SN_NivaK10: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="OJI4";
		inventoryslot="SNNivaK_1";
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
    
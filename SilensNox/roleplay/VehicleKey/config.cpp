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
            "DZ_Data",
			"Gerph_Zil130",
			"CrSk_VAZ_2107",
			"CrSk_BMW_525i_E34"
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
	class SNWolgaK_6: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="930E";
		inventoryslot="SNWolgaK_6";
	};
	class SNWolgaK_7: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="LÖ6O";
		inventoryslot="SNWolgaK_7";
	};
	class SNWolgaK_8: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="QSK8";
		inventoryslot="SNWolgaK_8";
	};
	class SNWolgaK_9: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="BDHJ";
		inventoryslot="SNWolgaK_9";
	};
	class SNWolgaK_10: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="F5D2";
		inventoryslot="SNWolgaK_10";
	};
	
	class SNNivaK_1: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="15D6";
		inventoryslot="SNNivaK_1";
	};
	class SNNivaK_2: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="7W5R";
		inventoryslot="SNNivaK_2";
	};
	class SNNivaK_3: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="DKR4";
		inventoryslot="SNNivaK_3";
	};
	class SNNivaK_4: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="FJ32";
		inventoryslot="SNNivaK_4";
	};
	class SNNivaK_5: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="ILG5";
		inventoryslot="SNNivaK_5";
	};
	class SNNivaK_6: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="GJR4";
		inventoryslot="SNNivaK_6";
	};
	class SNNivaK_7: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="45DW";
		inventoryslot="SNNivaK_7";
	};
	class SNNivaK_8: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="8F12";
		inventoryslot="SNNivaK_8";
	};
	class SNNivaK_9: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="G45R";
		inventoryslot="SNNivaK_9";
	};
	class SNNivaK_10: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="5DWS";
		inventoryslot="SNNivaK_10";
	};
	
	class SNSkoda120K_1: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="GF4I";
		inventoryslot="SNSkoda120K_1";
	};
	class SNSkoda120K_2: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="8H4F";
		inventoryslot="SNSkoda120K_2";
	};
	class SNSkoda120K_3: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="5J4G";
		inventoryslot="SNSkoda120K_3";
	};
	class SNSkoda120K_4: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="6R3H";
		inventoryslot="SNSkoda120K_4";
	};
	class SNSkoda120K_5: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="4H23";
		inventoryslot="SNSkoda120K_5";
	};
	class SNSkoda120K_6: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="U8TG";
		inventoryslot="SNSkoda120K_6";
	};
	class SNSkoda120K_7: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="GHNJ";
		inventoryslot="SNSkoda120K_7";
	};
	class SNSkoda120K_8: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="IG4E";
		inventoryslot="SNSkoda120K_8";
	};
	class SNSkoda120K_9: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="63FE";
		inventoryslot="SNSkoda120K_9";
	};
	class SNSkoda120K_10: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="465F";
		inventoryslot="SNSkoda120K_10";
	};
	
	
	class SNGolf2K_1: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="645D";
		inventoryslot="SNGolf2K_1";
	};
	class SNGolf2K_2: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="64SF";
		inventoryslot="SNGolf2K_2";
	};
	class SNGolf2K_3: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="SFD4";
		inventoryslot="SNGolf2K_3";
	};
	class SNGolf2K_4: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="GS4R";
		inventoryslot="SNGolf2K_4";
	};
	class SNGolf2K_5: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="6FA4";
		inventoryslot="SNGolf2K_5";
	};
	class SNGolf2K_6: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="HGD6";
		inventoryslot="SNGolf2K_6";
	};
	class SNGolf2K_7: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="SG6F";
		inventoryslot="SNGolf2K_7";
	};
	class SNGolf2K_8: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="GKU6";
		inventoryslot="SNGolf2K_8";
	};
	class SNGolf2K_9: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="64HF";
		inventoryslot="SNGolf2K_9";
	};
	class SNGolf2K_10: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="46HF";
		inventoryslot="SNGolf2K_10";
	};
	
	class SNZil130K_1: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="DHF4";
		inventoryslot="SNZil130K_1";
	};
	class SNZil130K_2: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="DH87";
		inventoryslot="SNZil130K_2";
	};
	class SNZil130K_3: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="JHG3";
		inventoryslot="SNZil130K_3";
	};
	class SNZil130K_4: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="FZ31";
		inventoryslot="SNZil130K_4";
	};
	class SNZil130K_5: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="R17V";
		inventoryslot="SNZil130K_5";
	};
	class SNZil130K_6: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="B81F";
		inventoryslot="SNZil130K_6";
	};
	class SNZil130K_7: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="FH64";
		inventoryslot="SNZil130K_7";
	};
	class SNZil130K_8: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="F6JH";
		inventoryslot="SNZil130K_8";
	};
	class SNZil130K_9: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="UF61";
		inventoryslot="SNZil130K_9";
	};
	class SNZil130K_10: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="REDT";
		inventoryslot="SNZil130K_10";
	};
	
	class SNVaz2107K_1: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="ERTZ";
		inventoryslot="SNVaz2107K_1";
	};
	class SNVaz2107K_2: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="KGTC";
		inventoryslot="SNVaz2107K_2";
	};
	class SNVaz2107K_3: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="KDTM";
		inventoryslot="SNVaz2107K_3";
	};
	class SNVaz2107K_4: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="GJ15";
		inventoryslot="SNVaz2107K_4";
	};
	class SNVaz2107K_5: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="5HG3";
		inventoryslot="SNVaz2107K_5";
	};
	class SNVaz2107K_6: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="785F";
		inventoryslot="SNVaz2107K_6";
	};
	class SNVaz2107K_7: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="4JGF";
		inventoryslot="SNVaz2107K_7";
	};
	class SNVaz2107K_8: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="12GR";
		inventoryslot="SNVaz2107K_8";
	};
	class SNVaz2107K_9: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="6FJH";
		inventoryslot="SNVaz2107K_9";
	};
	class SNVaz2107K_10: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="FHRD";
		inventoryslot="SNVaz2107K_10";
	};
	
	
	class SNBMW525K_1: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="DFFJ";
		inventoryslot="SNBMW525K_1";
	};
	class SNBMW525K_2: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="FFFF";
		inventoryslot="SNBMW525K_2";
	};
	class SNBMW525K_3: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="FD43";
		inventoryslot="SNBMW525K_3";
	};
	class SNBMW525K_4: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="GDF3";
		inventoryslot="SNBMW525K_4";
	};
	class SNBMW525K_5: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="1GDF";
		inventoryslot="SNBMW525K_5";
	};
	class SNBMW525K_6: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="1F1G";
		inventoryslot="SNBMW525K_6";
	};
	class SNBMW525K_7: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="GF3D";
		inventoryslot="SNBMW525K_7";
	};
	class SNBMW525K_8: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="GF15";
		inventoryslot="SNBMW525K_8";
	};
	class SNBMW525K_9: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="3F22";
		inventoryslot="SNBMW525K_9";
	};
	class SNBMW525K_10: SN_KeyBase
	{
		scope=2;
		displayName="Schlüssel";
		descriptionShort="546D";
		inventoryslot="SNBMW525K_10";
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
	class SN_Wolga_02: CivilianSedan
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
			"SNWolgaK_2"
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
					"SNWolgaK_2"
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
	class SN_Wolga_03: CivilianSedan
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
			"SNWolgaK_3"
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
					"SNWolgaK_3"
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
	class SN_Wolga_04: CivilianSedan
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
			"SNWolgaK_4"
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
					"SNWolgaK_4"
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
	class SN_Wolga_05: CivilianSedan
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
			"SNWolgaK_5"
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
					"SNWolgaK_5"
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
	class SN_Wolga_06: CivilianSedan
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
			"SNWolgaK_6"
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
					"SNWolgaK_6"
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
	class SN_Wolga_07: CivilianSedan
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
			"SNWolgaK_7"
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
					"SNWolgaK_7"
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
	class SN_Wolga_08: CivilianSedan
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
			"SNWolgaK_8"
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
					"SNWolgaK_8"
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
	class SN_Wolga_09: CivilianSedan
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
			"SNWolgaK_9"
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
					"SNWolgaK_9"
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
	class SN_Wolga_10: CivilianSedan
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
			"SNWolgaK_10"
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
					"SNWolgaK_10"
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
	class OffroadHatchback;
	class SN_Niva_01: OffroadHatchback
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"NivaDriverDoors",
			"NivaCoDriverDoors",
			"NivaHood",
			"NivaTrunk",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"NivaWheel_Spare_1",
			"SNNivaK_1"
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
					"SNNivaK_1"
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
					"NivaHood",
					"NivaTrunk",
					"NivaDriverDoors",
					"NivaCoDriverDoors",
					"NivaWheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"NivaWheel_1_1",
					"NivaWheel_1_2",
					"NivaWheel_2_1",
					"NivaWheel_2_2"
				};
			};
		};
	};
	class SN_Niva_02: OffroadHatchback
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"NivaDriverDoors",
			"NivaCoDriverDoors",
			"NivaHood",
			"NivaTrunk",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"NivaWheel_Spare_1",
			"SNNivaK_2"
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
					"SNNivaK_2"
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
					"NivaHood",
					"NivaTrunk",
					"NivaDriverDoors",
					"NivaCoDriverDoors",
					"NivaWheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"NivaWheel_1_1",
					"NivaWheel_1_2",
					"NivaWheel_2_1",
					"NivaWheel_2_2"
				};
			};
		};
	};
	class SN_Niva_03: OffroadHatchback
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"NivaDriverDoors",
			"NivaCoDriverDoors",
			"NivaHood",
			"NivaTrunk",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"NivaWheel_Spare_1",
			"SNNivaK_3"
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
					"SNNivaK_3"
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
					"NivaHood",
					"NivaTrunk",
					"NivaDriverDoors",
					"NivaCoDriverDoors",
					"NivaWheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"NivaWheel_1_1",
					"NivaWheel_1_2",
					"NivaWheel_2_1",
					"NivaWheel_2_2"
				};
			};
		};
	};
	class SN_Niva_04: OffroadHatchback
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"NivaDriverDoors",
			"NivaCoDriverDoors",
			"NivaHood",
			"NivaTrunk",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"NivaWheel_Spare_1",
			"SNNivaK_4"
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
					"SNNivaK_4"
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
					"NivaHood",
					"NivaTrunk",
					"NivaDriverDoors",
					"NivaCoDriverDoors",
					"NivaWheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"NivaWheel_1_1",
					"NivaWheel_1_2",
					"NivaWheel_2_1",
					"NivaWheel_2_2"
				};
			};
		};
	};
	class SN_Niva_05: OffroadHatchback
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"NivaDriverDoors",
			"NivaCoDriverDoors",
			"NivaHood",
			"NivaTrunk",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"NivaWheel_Spare_1",
			"SNNivaK_5"
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
					"SNNivaK_5"
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
					"NivaHood",
					"NivaTrunk",
					"NivaDriverDoors",
					"NivaCoDriverDoors",
					"NivaWheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"NivaWheel_1_1",
					"NivaWheel_1_2",
					"NivaWheel_2_1",
					"NivaWheel_2_2"
				};
			};
		};
	};
	class SN_Niva_06: OffroadHatchback
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"NivaDriverDoors",
			"NivaCoDriverDoors",
			"NivaHood",
			"NivaTrunk",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"NivaWheel_Spare_1",
			"SNNivaK_6"
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
					"SNNivaK_6"
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
					"NivaHood",
					"NivaTrunk",
					"NivaDriverDoors",
					"NivaCoDriverDoors",
					"NivaWheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"NivaWheel_1_1",
					"NivaWheel_1_2",
					"NivaWheel_2_1",
					"NivaWheel_2_2"
				};
			};
		};
	};
	class SN_Niva_07: OffroadHatchback
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"NivaDriverDoors",
			"NivaCoDriverDoors",
			"NivaHood",
			"NivaTrunk",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"NivaWheel_Spare_1",
			"SNNivaK_7"
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
					"SNNivaK_7"
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
					"NivaHood",
					"NivaTrunk",
					"NivaDriverDoors",
					"NivaCoDriverDoors",
					"NivaWheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"NivaWheel_1_1",
					"NivaWheel_1_2",
					"NivaWheel_2_1",
					"NivaWheel_2_2"
				};
			};
		};
	};
	class SN_Niva_08: OffroadHatchback
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"NivaDriverDoors",
			"NivaCoDriverDoors",
			"NivaHood",
			"NivaTrunk",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"NivaWheel_Spare_1",
			"SNNivaK_8"
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
					"SNNivaK_8"
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
					"NivaHood",
					"NivaTrunk",
					"NivaDriverDoors",
					"NivaCoDriverDoors",
					"NivaWheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"NivaWheel_1_1",
					"NivaWheel_1_2",
					"NivaWheel_2_1",
					"NivaWheel_2_2"
				};
			};
		};
	};
	class SN_Niva_09: OffroadHatchback
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"NivaDriverDoors",
			"NivaCoDriverDoors",
			"NivaHood",
			"NivaTrunk",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"NivaWheel_Spare_1",
			"SNNivaK_9"
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
					"SNNivaK_1"
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
					"NivaHood",
					"NivaTrunk",
					"NivaDriverDoors",
					"NivaCoDriverDoors",
					"NivaWheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"NivaWheel_1_1",
					"NivaWheel_1_2",
					"NivaWheel_2_1",
					"NivaWheel_2_2"
				};
			};
		};
	};
	class SN_Niva_10: OffroadHatchback
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"NivaDriverDoors",
			"NivaCoDriverDoors",
			"NivaHood",
			"NivaTrunk",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"NivaWheel_Spare_1",
			"SNNivaK_10"
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
					"SNNivaK_10"
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
					"NivaHood",
					"NivaTrunk",
					"NivaDriverDoors",
					"NivaCoDriverDoors",
					"NivaWheel_Spare_1"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"NivaWheel_1_1",
					"NivaWheel_1_2",
					"NivaWheel_2_1",
					"NivaWheel_2_2"
				};
			};
		};
	};
	class Hatchback_02;
	class SN_Golf2_01: Hatchback_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Hatchback_02_Door_1_1",
			"Hatchback_02_Door_1_2",
			"Hatchback_02_Door_2_1",
			"Hatchback_02_Door_2_2",
			"Hatchback_02_Trunk",
			"Hatchback_02_Hood",
			"Hatchback_02_Wheel_1_1",
			"Hatchback_02_Wheel_1_2",
			"Hatchback_02_Wheel_2_1",
			"Hatchback_02_Wheel_2_2",
			"SNGolf2K_1"
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
					"SNGolf2K_1"
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
					"Hatchback_02_Door_1_1",
					"Hatchback_02_Door_1_2",
					"Hatchback_02_Door_2_1",
					"Hatchback_02_Door_2_2",
					"Hatchback_02_Hood",
					"Hatchback_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Hatchback_02_Wheel_1_1",
					"Hatchback_02_Wheel_1_2",
					"Hatchback_02_Wheel_2_1",
					"Hatchback_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Golf2_02: Hatchback_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Hatchback_02_Door_1_1",
			"Hatchback_02_Door_1_2",
			"Hatchback_02_Door_2_1",
			"Hatchback_02_Door_2_2",
			"Hatchback_02_Trunk",
			"Hatchback_02_Hood",
			"Hatchback_02_Wheel_1_1",
			"Hatchback_02_Wheel_1_2",
			"Hatchback_02_Wheel_2_1",
			"Hatchback_02_Wheel_2_2",
			"SNGolf2K_2"
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
					"SNGolf2K_2"
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
					"Hatchback_02_Door_1_1",
					"Hatchback_02_Door_1_2",
					"Hatchback_02_Door_2_1",
					"Hatchback_02_Door_2_2",
					"Hatchback_02_Hood",
					"Hatchback_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Hatchback_02_Wheel_1_1",
					"Hatchback_02_Wheel_1_2",
					"Hatchback_02_Wheel_2_1",
					"Hatchback_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Golf2_03: Hatchback_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Hatchback_02_Door_1_1",
			"Hatchback_02_Door_1_2",
			"Hatchback_02_Door_2_1",
			"Hatchback_02_Door_2_2",
			"Hatchback_02_Trunk",
			"Hatchback_02_Hood",
			"Hatchback_02_Wheel_1_1",
			"Hatchback_02_Wheel_1_2",
			"Hatchback_02_Wheel_2_1",
			"Hatchback_02_Wheel_2_2",
			"SNGolf2K_3"
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
					"SNGolf2K_3"
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
					"Hatchback_02_Door_1_1",
					"Hatchback_02_Door_1_2",
					"Hatchback_02_Door_2_1",
					"Hatchback_02_Door_2_2",
					"Hatchback_02_Hood",
					"Hatchback_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Hatchback_02_Wheel_1_1",
					"Hatchback_02_Wheel_1_2",
					"Hatchback_02_Wheel_2_1",
					"Hatchback_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Golf2_04: Hatchback_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Hatchback_02_Door_1_1",
			"Hatchback_02_Door_1_2",
			"Hatchback_02_Door_2_1",
			"Hatchback_02_Door_2_2",
			"Hatchback_02_Trunk",
			"Hatchback_02_Hood",
			"Hatchback_02_Wheel_1_1",
			"Hatchback_02_Wheel_1_2",
			"Hatchback_02_Wheel_2_1",
			"Hatchback_02_Wheel_2_2",
			"SNGolf2K_4"
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
					"SNGolf2K_4"
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
					"Hatchback_02_Door_1_1",
					"Hatchback_02_Door_1_2",
					"Hatchback_02_Door_2_1",
					"Hatchback_02_Door_2_2",
					"Hatchback_02_Hood",
					"Hatchback_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Hatchback_02_Wheel_1_1",
					"Hatchback_02_Wheel_1_2",
					"Hatchback_02_Wheel_2_1",
					"Hatchback_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Golf2_05: Hatchback_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Hatchback_02_Door_1_1",
			"Hatchback_02_Door_1_2",
			"Hatchback_02_Door_2_1",
			"Hatchback_02_Door_2_2",
			"Hatchback_02_Trunk",
			"Hatchback_02_Hood",
			"Hatchback_02_Wheel_1_1",
			"Hatchback_02_Wheel_1_2",
			"Hatchback_02_Wheel_2_1",
			"Hatchback_02_Wheel_2_2",
			"SNGolf2K_5"
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
					"SNGolf2K_5"
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
					"Hatchback_02_Door_1_1",
					"Hatchback_02_Door_1_2",
					"Hatchback_02_Door_2_1",
					"Hatchback_02_Door_2_2",
					"Hatchback_02_Hood",
					"Hatchback_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Hatchback_02_Wheel_1_1",
					"Hatchback_02_Wheel_1_2",
					"Hatchback_02_Wheel_2_1",
					"Hatchback_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Golf2_06: Hatchback_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Hatchback_02_Door_1_1",
			"Hatchback_02_Door_1_2",
			"Hatchback_02_Door_2_1",
			"Hatchback_02_Door_2_2",
			"Hatchback_02_Trunk",
			"Hatchback_02_Hood",
			"Hatchback_02_Wheel_1_1",
			"Hatchback_02_Wheel_1_2",
			"Hatchback_02_Wheel_2_1",
			"Hatchback_02_Wheel_2_2",
			"SNGolf2K_6"
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
					"SNGolf2K_6"
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
					"Hatchback_02_Door_1_1",
					"Hatchback_02_Door_1_2",
					"Hatchback_02_Door_2_1",
					"Hatchback_02_Door_2_2",
					"Hatchback_02_Hood",
					"Hatchback_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Hatchback_02_Wheel_1_1",
					"Hatchback_02_Wheel_1_2",
					"Hatchback_02_Wheel_2_1",
					"Hatchback_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Golf2_07: Hatchback_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Hatchback_02_Door_1_1",
			"Hatchback_02_Door_1_2",
			"Hatchback_02_Door_2_1",
			"Hatchback_02_Door_2_2",
			"Hatchback_02_Trunk",
			"Hatchback_02_Hood",
			"Hatchback_02_Wheel_1_1",
			"Hatchback_02_Wheel_1_2",
			"Hatchback_02_Wheel_2_1",
			"Hatchback_02_Wheel_2_2",
			"SNGolf2K_7"
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
					"SNGolf2K_7"
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
					"Hatchback_02_Door_1_1",
					"Hatchback_02_Door_1_2",
					"Hatchback_02_Door_2_1",
					"Hatchback_02_Door_2_2",
					"Hatchback_02_Hood",
					"Hatchback_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Hatchback_02_Wheel_1_1",
					"Hatchback_02_Wheel_1_2",
					"Hatchback_02_Wheel_2_1",
					"Hatchback_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Golf2_08: Hatchback_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Hatchback_02_Door_1_1",
			"Hatchback_02_Door_1_2",
			"Hatchback_02_Door_2_1",
			"Hatchback_02_Door_2_2",
			"Hatchback_02_Trunk",
			"Hatchback_02_Hood",
			"Hatchback_02_Wheel_1_1",
			"Hatchback_02_Wheel_1_2",
			"Hatchback_02_Wheel_2_1",
			"Hatchback_02_Wheel_2_2",
			"SNGolf2K_8"
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
					"SNGolf2K_8"
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
					"Hatchback_02_Door_1_1",
					"Hatchback_02_Door_1_2",
					"Hatchback_02_Door_2_1",
					"Hatchback_02_Door_2_2",
					"Hatchback_02_Hood",
					"Hatchback_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Hatchback_02_Wheel_1_1",
					"Hatchback_02_Wheel_1_2",
					"Hatchback_02_Wheel_2_1",
					"Hatchback_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Golf2_09: Hatchback_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Hatchback_02_Door_1_1",
			"Hatchback_02_Door_1_2",
			"Hatchback_02_Door_2_1",
			"Hatchback_02_Door_2_2",
			"Hatchback_02_Trunk",
			"Hatchback_02_Hood",
			"Hatchback_02_Wheel_1_1",
			"Hatchback_02_Wheel_1_2",
			"Hatchback_02_Wheel_2_1",
			"Hatchback_02_Wheel_2_2",
			"SNGolf2K_9"
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
					"SNGolf2K_9"
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
					"Hatchback_02_Door_1_1",
					"Hatchback_02_Door_1_2",
					"Hatchback_02_Door_2_1",
					"Hatchback_02_Door_2_2",
					"Hatchback_02_Hood",
					"Hatchback_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Hatchback_02_Wheel_1_1",
					"Hatchback_02_Wheel_1_2",
					"Hatchback_02_Wheel_2_1",
					"Hatchback_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Golf2_10: Hatchback_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Hatchback_02_Door_1_1",
			"Hatchback_02_Door_1_2",
			"Hatchback_02_Door_2_1",
			"Hatchback_02_Door_2_2",
			"Hatchback_02_Trunk",
			"Hatchback_02_Hood",
			"Hatchback_02_Wheel_1_1",
			"Hatchback_02_Wheel_1_2",
			"Hatchback_02_Wheel_2_1",
			"Hatchback_02_Wheel_2_2",
			"SNGolf2K_10"
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
					"SNGolf2K_10"
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
					"Hatchback_02_Door_1_1",
					"Hatchback_02_Door_1_2",
					"Hatchback_02_Door_2_1",
					"Hatchback_02_Door_2_2",
					"Hatchback_02_Hood",
					"Hatchback_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Hatchback_02_Wheel_1_1",
					"Hatchback_02_Wheel_1_2",
					"Hatchback_02_Wheel_2_1",
					"Hatchback_02_Wheel_2_2"
				};
			};
		};
	};
	class Sedan_02;
	class SN_Skoda120_01: Sedan_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"EngineBelt",
			"SparkPlug",
			"Sedan_02_Hood",
			"Sedan_02_Trunk",
			"Sedan_02_Door_1_1",
			"Sedan_02_Door_2_1",
			"Sedan_02_Door_1_2",
			"Sedan_02_Door_2_2",
			"Sedan_02_Wheel_1_1",
			"Sedan_02_Wheel_1_2",
			"Sedan_02_Wheel_2_1",
			"Sedan_02_Wheel_2_2",
			"SNSkoda120K_1"
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
					"SNSkoda120K_1"
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
					"Sedan_02_Door_1_1",
					"Sedan_02_Door_2_1",
					"Sedan_02_Door_1_2",
					"Sedan_02_Door_2_2",
					"Sedan_02_Hood",
					"Sedan_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Sedan_02_Wheel_1_1",
					"Sedan_02_Wheel_1_2",
					"Sedan_02_Wheel_2_1",
					"Sedan_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Skoda120_02: Sedan_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"EngineBelt",
			"SparkPlug",
			"Sedan_02_Hood",
			"Sedan_02_Trunk",
			"Sedan_02_Door_1_1",
			"Sedan_02_Door_2_1",
			"Sedan_02_Door_1_2",
			"Sedan_02_Door_2_2",
			"Sedan_02_Wheel_1_1",
			"Sedan_02_Wheel_1_2",
			"Sedan_02_Wheel_2_1",
			"Sedan_02_Wheel_2_2",
			"SNSkoda120K_2"
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
					"SNSkoda120K_2"
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
					"Sedan_02_Door_1_1",
					"Sedan_02_Door_2_1",
					"Sedan_02_Door_1_2",
					"Sedan_02_Door_2_2",
					"Sedan_02_Hood",
					"Sedan_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Sedan_02_Wheel_1_1",
					"Sedan_02_Wheel_1_2",
					"Sedan_02_Wheel_2_1",
					"Sedan_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Skoda120_03: Sedan_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"EngineBelt",
			"SparkPlug",
			"Sedan_02_Hood",
			"Sedan_02_Trunk",
			"Sedan_02_Door_1_1",
			"Sedan_02_Door_2_1",
			"Sedan_02_Door_1_2",
			"Sedan_02_Door_2_2",
			"Sedan_02_Wheel_1_1",
			"Sedan_02_Wheel_1_2",
			"Sedan_02_Wheel_2_1",
			"Sedan_02_Wheel_2_2",
			"SNSkoda120K_3"
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
					"SNSkoda120K_3"
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
					"Sedan_02_Door_1_1",
					"Sedan_02_Door_2_1",
					"Sedan_02_Door_1_2",
					"Sedan_02_Door_2_2",
					"Sedan_02_Hood",
					"Sedan_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Sedan_02_Wheel_1_1",
					"Sedan_02_Wheel_1_2",
					"Sedan_02_Wheel_2_1",
					"Sedan_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Skoda120_04: Sedan_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"EngineBelt",
			"SparkPlug",
			"Sedan_02_Hood",
			"Sedan_02_Trunk",
			"Sedan_02_Door_1_1",
			"Sedan_02_Door_2_1",
			"Sedan_02_Door_1_2",
			"Sedan_02_Door_2_2",
			"Sedan_02_Wheel_1_1",
			"Sedan_02_Wheel_1_2",
			"Sedan_02_Wheel_2_1",
			"Sedan_02_Wheel_2_2",
			"SNSkoda120K_4"
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
					"SNSkoda120K_4"
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
					"Sedan_02_Door_1_1",
					"Sedan_02_Door_2_1",
					"Sedan_02_Door_1_2",
					"Sedan_02_Door_2_2",
					"Sedan_02_Hood",
					"Sedan_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Sedan_02_Wheel_1_1",
					"Sedan_02_Wheel_1_2",
					"Sedan_02_Wheel_2_1",
					"Sedan_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Skoda120_05: Sedan_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"EngineBelt",
			"SparkPlug",
			"Sedan_02_Hood",
			"Sedan_02_Trunk",
			"Sedan_02_Door_1_1",
			"Sedan_02_Door_2_1",
			"Sedan_02_Door_1_2",
			"Sedan_02_Door_2_2",
			"Sedan_02_Wheel_1_1",
			"Sedan_02_Wheel_1_2",
			"Sedan_02_Wheel_2_1",
			"Sedan_02_Wheel_2_2",
			"SNSkoda120K_5"
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
					"SNSkoda120K_5"
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
					"Sedan_02_Door_1_1",
					"Sedan_02_Door_2_1",
					"Sedan_02_Door_1_2",
					"Sedan_02_Door_2_2",
					"Sedan_02_Hood",
					"Sedan_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Sedan_02_Wheel_1_1",
					"Sedan_02_Wheel_1_2",
					"Sedan_02_Wheel_2_1",
					"Sedan_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Skoda120_06: Sedan_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"EngineBelt",
			"SparkPlug",
			"Sedan_02_Hood",
			"Sedan_02_Trunk",
			"Sedan_02_Door_1_1",
			"Sedan_02_Door_2_1",
			"Sedan_02_Door_1_2",
			"Sedan_02_Door_2_2",
			"Sedan_02_Wheel_1_1",
			"Sedan_02_Wheel_1_2",
			"Sedan_02_Wheel_2_1",
			"Sedan_02_Wheel_2_2",
			"SNSkoda120K_6"
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
					"SNSkoda120K_6"
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
					"Sedan_02_Door_1_1",
					"Sedan_02_Door_2_1",
					"Sedan_02_Door_1_2",
					"Sedan_02_Door_2_2",
					"Sedan_02_Hood",
					"Sedan_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Sedan_02_Wheel_1_1",
					"Sedan_02_Wheel_1_2",
					"Sedan_02_Wheel_2_1",
					"Sedan_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Skoda120_07: Sedan_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"EngineBelt",
			"SparkPlug",
			"Sedan_02_Hood",
			"Sedan_02_Trunk",
			"Sedan_02_Door_1_1",
			"Sedan_02_Door_2_1",
			"Sedan_02_Door_1_2",
			"Sedan_02_Door_2_2",
			"Sedan_02_Wheel_1_1",
			"Sedan_02_Wheel_1_2",
			"Sedan_02_Wheel_2_1",
			"Sedan_02_Wheel_2_2",
			"SNSkoda120K_7"
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
					"SNSkoda120K_7"
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
					"Sedan_02_Door_1_1",
					"Sedan_02_Door_2_1",
					"Sedan_02_Door_1_2",
					"Sedan_02_Door_2_2",
					"Sedan_02_Hood",
					"Sedan_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Sedan_02_Wheel_1_1",
					"Sedan_02_Wheel_1_2",
					"Sedan_02_Wheel_2_1",
					"Sedan_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Skoda120_08: Sedan_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"EngineBelt",
			"SparkPlug",
			"Sedan_02_Hood",
			"Sedan_02_Trunk",
			"Sedan_02_Door_1_1",
			"Sedan_02_Door_2_1",
			"Sedan_02_Door_1_2",
			"Sedan_02_Door_2_2",
			"Sedan_02_Wheel_1_1",
			"Sedan_02_Wheel_1_2",
			"Sedan_02_Wheel_2_1",
			"Sedan_02_Wheel_2_2",
			"SNSkoda120K_8"
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
					"SNSkoda120K_8"
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
					"Sedan_02_Door_1_1",
					"Sedan_02_Door_2_1",
					"Sedan_02_Door_1_2",
					"Sedan_02_Door_2_2",
					"Sedan_02_Hood",
					"Sedan_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Sedan_02_Wheel_1_1",
					"Sedan_02_Wheel_1_2",
					"Sedan_02_Wheel_2_1",
					"Sedan_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Skoda120_09: Sedan_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"EngineBelt",
			"SparkPlug",
			"Sedan_02_Hood",
			"Sedan_02_Trunk",
			"Sedan_02_Door_1_1",
			"Sedan_02_Door_2_1",
			"Sedan_02_Door_1_2",
			"Sedan_02_Door_2_2",
			"Sedan_02_Wheel_1_1",
			"Sedan_02_Wheel_1_2",
			"Sedan_02_Wheel_2_1",
			"Sedan_02_Wheel_2_2",
			"SNSkoda120K_9"
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
					"SNSkoda120K_9"
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
					"Sedan_02_Door_1_1",
					"Sedan_02_Door_2_1",
					"Sedan_02_Door_1_2",
					"Sedan_02_Door_2_2",
					"Sedan_02_Hood",
					"Sedan_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Sedan_02_Wheel_1_1",
					"Sedan_02_Wheel_1_2",
					"Sedan_02_Wheel_2_1",
					"Sedan_02_Wheel_2_2"
				};
			};
		};
	};
	class SN_Skoda120_10: Sedan_02
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"EngineBelt",
			"SparkPlug",
			"Sedan_02_Hood",
			"Sedan_02_Trunk",
			"Sedan_02_Door_1_1",
			"Sedan_02_Door_2_1",
			"Sedan_02_Door_1_2",
			"Sedan_02_Door_2_2",
			"Sedan_02_Wheel_1_1",
			"Sedan_02_Wheel_1_2",
			"Sedan_02_Wheel_2_1",
			"Sedan_02_Wheel_2_2",
			"SNSkoda120K_10"
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
					"SNSkoda120K_10"
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
					"Sedan_02_Door_1_1",
					"Sedan_02_Door_2_1",
					"Sedan_02_Door_1_2",
					"Sedan_02_Door_2_2",
					"Sedan_02_Hood",
					"Sedan_02_Trunk"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"Sedan_02_Wheel_1_1",
					"Sedan_02_Wheel_1_2",
					"Sedan_02_Wheel_2_1",
					"Sedan_02_Wheel_2_2"
				};
			};
		};
	};
	class Gerph_Zil130;
	class SN_Zil130_01: Gerph_Zil130
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Zil130DriverDoors",
			"Zil130CoDriverDoors",
			"Zil130Hood",
			"Zil130Tailgate",
			"Zil130Wheel_1_1",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_1",
			"Zil130Wheel_2_2",
			"Zil130Wheel_Spare_1",
			"SNZil130K_1"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Zil-130 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNZil130K_1"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="Zil-130 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Zil130Hood",
					"Zil130Tailgate",
					"Zil130DriverDoors",
					"Zil130CoDriverDoors"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="Zil-130 Chassis";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_1_1",
					"Zil130Wheel_1_2",
					"Zil130Wheel_2_1",
					"Zil130Wheel_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_Spare_1"
				};
				icon="missing";
			};
		};
	};
	class SN_Zil130_02: Gerph_Zil130
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Zil130DriverDoors",
			"Zil130CoDriverDoors",
			"Zil130Hood",
			"Zil130Tailgate",
			"Zil130Wheel_1_1",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_1",
			"Zil130Wheel_2_2",
			"Zil130Wheel_Spare_1",
			"SNZil130K_2"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Zil-130 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNZil130K_2"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="Zil-130 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Zil130Hood",
					"Zil130Tailgate",
					"Zil130DriverDoors",
					"Zil130CoDriverDoors"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="Zil-130 Chassis";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_1_1",
					"Zil130Wheel_1_2",
					"Zil130Wheel_2_1",
					"Zil130Wheel_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_Spare_1"
				};
				icon="missing";
			};
		};
	};
	class SN_Zil130_03: Gerph_Zil130
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Zil130DriverDoors",
			"Zil130CoDriverDoors",
			"Zil130Hood",
			"Zil130Tailgate",
			"Zil130Wheel_1_1",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_1",
			"Zil130Wheel_2_2",
			"Zil130Wheel_Spare_1",
			"SNZil130K_3"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Zil-130 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNZil130K_3"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="Zil-130 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Zil130Hood",
					"Zil130Tailgate",
					"Zil130DriverDoors",
					"Zil130CoDriverDoors"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="Zil-130 Chassis";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_1_1",
					"Zil130Wheel_1_2",
					"Zil130Wheel_2_1",
					"Zil130Wheel_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_Spare_1"
				};
				icon="missing";
			};
		};
	};
	class SN_Zil130_04: Gerph_Zil130
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Zil130DriverDoors",
			"Zil130CoDriverDoors",
			"Zil130Hood",
			"Zil130Tailgate",
			"Zil130Wheel_1_1",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_1",
			"Zil130Wheel_2_2",
			"Zil130Wheel_Spare_1",
			"SNZil130K_4"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Zil-130 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNZil130K_4"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="Zil-130 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Zil130Hood",
					"Zil130Tailgate",
					"Zil130DriverDoors",
					"Zil130CoDriverDoors"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="Zil-130 Chassis";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_1_1",
					"Zil130Wheel_1_2",
					"Zil130Wheel_2_1",
					"Zil130Wheel_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_Spare_1"
				};
				icon="missing";
			};
		};
	};
	class SN_Zil130_05: Gerph_Zil130
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Zil130DriverDoors",
			"Zil130CoDriverDoors",
			"Zil130Hood",
			"Zil130Tailgate",
			"Zil130Wheel_1_1",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_1",
			"Zil130Wheel_2_2",
			"Zil130Wheel_Spare_1",
			"SNZil130K_5"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Zil-130 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNZil130K_5"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="Zil-130 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Zil130Hood",
					"Zil130Tailgate",
					"Zil130DriverDoors",
					"Zil130CoDriverDoors"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="Zil-130 Chassis";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_1_1",
					"Zil130Wheel_1_2",
					"Zil130Wheel_2_1",
					"Zil130Wheel_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_Spare_1"
				};
				icon="missing";
			};
		};
	};
	class SN_Zil130_06: Gerph_Zil130
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Zil130DriverDoors",
			"Zil130CoDriverDoors",
			"Zil130Hood",
			"Zil130Tailgate",
			"Zil130Wheel_1_1",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_1",
			"Zil130Wheel_2_2",
			"Zil130Wheel_Spare_1",
			"SNZil130K_6"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Zil-130 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNZil130K_6"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="Zil-130 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Zil130Hood",
					"Zil130Tailgate",
					"Zil130DriverDoors",
					"Zil130CoDriverDoors"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="Zil-130 Chassis";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_1_1",
					"Zil130Wheel_1_2",
					"Zil130Wheel_2_1",
					"Zil130Wheel_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_Spare_1"
				};
				icon="missing";
			};
		};
	};
	class SN_Zil130_07: Gerph_Zil130
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Zil130DriverDoors",
			"Zil130CoDriverDoors",
			"Zil130Hood",
			"Zil130Tailgate",
			"Zil130Wheel_1_1",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_1",
			"Zil130Wheel_2_2",
			"Zil130Wheel_Spare_1",
			"SNZil130K_7"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Zil-130 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNZil130K_7"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="Zil-130 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Zil130Hood",
					"Zil130Tailgate",
					"Zil130DriverDoors",
					"Zil130CoDriverDoors"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="Zil-130 Chassis";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_1_1",
					"Zil130Wheel_1_2",
					"Zil130Wheel_2_1",
					"Zil130Wheel_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_Spare_1"
				};
				icon="missing";
			};
		};
	};
	class SN_Zil130_08: Gerph_Zil130
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Zil130DriverDoors",
			"Zil130CoDriverDoors",
			"Zil130Hood",
			"Zil130Tailgate",
			"Zil130Wheel_1_1",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_1",
			"Zil130Wheel_2_2",
			"Zil130Wheel_Spare_1",
			"SNZil130K_8"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Zil-130 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNZil130K_8"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="Zil-130 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Zil130Hood",
					"Zil130Tailgate",
					"Zil130DriverDoors",
					"Zil130CoDriverDoors"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="Zil-130 Chassis";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_1_1",
					"Zil130Wheel_1_2",
					"Zil130Wheel_2_1",
					"Zil130Wheel_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_Spare_1"
				};
				icon="missing";
			};
		};
	};
	class SN_Zil130_09: Gerph_Zil130
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Zil130DriverDoors",
			"Zil130CoDriverDoors",
			"Zil130Hood",
			"Zil130Tailgate",
			"Zil130Wheel_1_1",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_1",
			"Zil130Wheel_2_2",
			"Zil130Wheel_Spare_1",
			"SNZil130K_9"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Zil-130 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNZil130K_9"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="Zil-130 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Zil130Hood",
					"Zil130Tailgate",
					"Zil130DriverDoors",
					"Zil130CoDriverDoors"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="Zil-130 Chassis";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_1_1",
					"Zil130Wheel_1_2",
					"Zil130Wheel_2_1",
					"Zil130Wheel_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_Spare_1"
				};
				icon="missing";
			};
		};
	};
	class SN_Zil130_10: Gerph_Zil130
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"Zil130DriverDoors",
			"Zil130CoDriverDoors",
			"Zil130Hood",
			"Zil130Tailgate",
			"Zil130Wheel_1_1",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_1",
			"Zil130Wheel_2_2",
			"Zil130Wheel_Spare_1",
			"SNZil130K_10"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Zil-130 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNZil130K_10"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="Zil-130 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"Zil130Hood",
					"Zil130Tailgate",
					"Zil130DriverDoors",
					"Zil130CoDriverDoors"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="Zil-130 Chassis";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_1_1",
					"Zil130Wheel_1_2",
					"Zil130Wheel_2_1",
					"Zil130Wheel_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"Zil130Wheel_Spare_1"
				};
				icon="missing";
			};
		};
	};
	class CrSk_VAZ_2107;
	class CrSk_VAZ_2107_White;
	class CrSk_VAZ_2107_Black;
	class CrSk_VAZ_2107_Beige;
	class SN_Vaz2107_01: CrSk_VAZ_2107
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VAZ2107_koleso_1_1",
			"VAZ2107_koleso_1_2",
			"VAZ2107_koleso_2_1",
			"VAZ2107_koleso_2_2",
			"VAZ2107_koleso_spare_1",
			"VAZ2107_dver_1_1",
			"VAZ2107_dver_2_1",
			"VAZ2107_dver_1_2",
			"VAZ2107_dver_2_2",
			"VAZ2107_bagazhnik",
			"VAZ2107_kapot",
			"CanisterGasoline",
			"SNVaz2107K_1"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="1.5L VAZ-2103 I4 Carburetor Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNVaz2107K_1"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="VAZ-2107 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"VAZ2107_dver_1_1",
					"VAZ2107_dver_2_1",
					"VAZ2107_dver_1_2",
					"VAZ2107_dver_2_2",
					"VAZ2107_bagazhnik",
					"VAZ2107_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="VAZ-2107 Chassis";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_1_1",
					"VAZ2107_koleso_1_2",
					"VAZ2107_koleso_2_1",
					"VAZ2107_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_Vaz2107_02: CrSk_VAZ_2107_White
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VAZ2107_koleso_1_1",
			"VAZ2107_koleso_1_2",
			"VAZ2107_koleso_2_1",
			"VAZ2107_koleso_2_2",
			"VAZ2107_koleso_spare_1",
			"VAZ2107_dver_1_1",
			"VAZ2107_dver_2_1",
			"VAZ2107_dver_1_2",
			"VAZ2107_dver_2_2",
			"VAZ2107_bagazhnik",
			"VAZ2107_kapot",
			"CanisterGasoline",
			"SNVaz2107K_2"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="1.5L VAZ-2103 I4 Carburetor Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNVaz2107K_2"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="VAZ-2107 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"VAZ2107_dver_1_1",
					"VAZ2107_dver_2_1",
					"VAZ2107_dver_1_2",
					"VAZ2107_dver_2_2",
					"VAZ2107_bagazhnik",
					"VAZ2107_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="VAZ-2107 Chassis";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_1_1",
					"VAZ2107_koleso_1_2",
					"VAZ2107_koleso_2_1",
					"VAZ2107_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_Vaz2107_03: CrSk_VAZ_2107_Black
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VAZ2107_koleso_1_1",
			"VAZ2107_koleso_1_2",
			"VAZ2107_koleso_2_1",
			"VAZ2107_koleso_2_2",
			"VAZ2107_koleso_spare_1",
			"VAZ2107_dver_1_1",
			"VAZ2107_dver_2_1",
			"VAZ2107_dver_1_2",
			"VAZ2107_dver_2_2",
			"VAZ2107_bagazhnik",
			"VAZ2107_kapot",
			"CanisterGasoline",
			"SNVaz2107K_3"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="1.5L VAZ-2103 I4 Carburetor Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNVaz2107K_3"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="VAZ-2107 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"VAZ2107_dver_1_1",
					"VAZ2107_dver_2_1",
					"VAZ2107_dver_1_2",
					"VAZ2107_dver_2_2",
					"VAZ2107_bagazhnik",
					"VAZ2107_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="VAZ-2107 Chassis";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_1_1",
					"VAZ2107_koleso_1_2",
					"VAZ2107_koleso_2_1",
					"VAZ2107_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_Vaz2107_04: CrSk_VAZ_2107_Beige
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VAZ2107_koleso_1_1",
			"VAZ2107_koleso_1_2",
			"VAZ2107_koleso_2_1",
			"VAZ2107_koleso_2_2",
			"VAZ2107_koleso_spare_1",
			"VAZ2107_dver_1_1",
			"VAZ2107_dver_2_1",
			"VAZ2107_dver_1_2",
			"VAZ2107_dver_2_2",
			"VAZ2107_bagazhnik",
			"VAZ2107_kapot",
			"CanisterGasoline",
			"SNVaz2107K_4"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="1.5L VAZ-2103 I4 Carburetor Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNVaz2107K_4"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="VAZ-2107 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"VAZ2107_dver_1_1",
					"VAZ2107_dver_2_1",
					"VAZ2107_dver_1_2",
					"VAZ2107_dver_2_2",
					"VAZ2107_bagazhnik",
					"VAZ2107_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="VAZ-2107 Chassis";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_1_1",
					"VAZ2107_koleso_1_2",
					"VAZ2107_koleso_2_1",
					"VAZ2107_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_Vaz2107_05: CrSk_VAZ_2107
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VAZ2107_koleso_1_1",
			"VAZ2107_koleso_1_2",
			"VAZ2107_koleso_2_1",
			"VAZ2107_koleso_2_2",
			"VAZ2107_koleso_spare_1",
			"VAZ2107_dver_1_1",
			"VAZ2107_dver_2_1",
			"VAZ2107_dver_1_2",
			"VAZ2107_dver_2_2",
			"VAZ2107_bagazhnik",
			"VAZ2107_kapot",
			"CanisterGasoline",
			"SNVaz2107K_5"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="1.5L VAZ-2103 I4 Carburetor Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNVaz2107K_5"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="VAZ-2107 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"VAZ2107_dver_1_1",
					"VAZ2107_dver_2_1",
					"VAZ2107_dver_1_2",
					"VAZ2107_dver_2_2",
					"VAZ2107_bagazhnik",
					"VAZ2107_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="VAZ-2107 Chassis";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_1_1",
					"VAZ2107_koleso_1_2",
					"VAZ2107_koleso_2_1",
					"VAZ2107_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_Vaz2107_06: CrSk_VAZ_2107_Beige
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VAZ2107_koleso_1_1",
			"VAZ2107_koleso_1_2",
			"VAZ2107_koleso_2_1",
			"VAZ2107_koleso_2_2",
			"VAZ2107_koleso_spare_1",
			"VAZ2107_dver_1_1",
			"VAZ2107_dver_2_1",
			"VAZ2107_dver_1_2",
			"VAZ2107_dver_2_2",
			"VAZ2107_bagazhnik",
			"VAZ2107_kapot",
			"CanisterGasoline",
			"SNVaz2107K_6"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="1.5L VAZ-2103 I4 Carburetor Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNVaz2107K_6"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="VAZ-2107 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"VAZ2107_dver_1_1",
					"VAZ2107_dver_2_1",
					"VAZ2107_dver_1_2",
					"VAZ2107_dver_2_2",
					"VAZ2107_bagazhnik",
					"VAZ2107_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="VAZ-2107 Chassis";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_1_1",
					"VAZ2107_koleso_1_2",
					"VAZ2107_koleso_2_1",
					"VAZ2107_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_Vaz2107_07: CrSk_VAZ_2107_Black
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VAZ2107_koleso_1_1",
			"VAZ2107_koleso_1_2",
			"VAZ2107_koleso_2_1",
			"VAZ2107_koleso_2_2",
			"VAZ2107_koleso_spare_1",
			"VAZ2107_dver_1_1",
			"VAZ2107_dver_2_1",
			"VAZ2107_dver_1_2",
			"VAZ2107_dver_2_2",
			"VAZ2107_bagazhnik",
			"VAZ2107_kapot",
			"CanisterGasoline",
			"SNVaz2107K_7"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="1.5L VAZ-2103 I4 Carburetor Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNVaz2107K_7"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="VAZ-2107 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"VAZ2107_dver_1_1",
					"VAZ2107_dver_2_1",
					"VAZ2107_dver_1_2",
					"VAZ2107_dver_2_2",
					"VAZ2107_bagazhnik",
					"VAZ2107_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="VAZ-2107 Chassis";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_1_1",
					"VAZ2107_koleso_1_2",
					"VAZ2107_koleso_2_1",
					"VAZ2107_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_Vaz2107_08: CrSk_VAZ_2107_White
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VAZ2107_koleso_1_1",
			"VAZ2107_koleso_1_2",
			"VAZ2107_koleso_2_1",
			"VAZ2107_koleso_2_2",
			"VAZ2107_koleso_spare_1",
			"VAZ2107_dver_1_1",
			"VAZ2107_dver_2_1",
			"VAZ2107_dver_1_2",
			"VAZ2107_dver_2_2",
			"VAZ2107_bagazhnik",
			"VAZ2107_kapot",
			"CanisterGasoline",
			"SNVaz2107K_8"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="1.5L VAZ-2103 I4 Carburetor Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNVaz2107K_8"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="VAZ-2107 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"VAZ2107_dver_1_1",
					"VAZ2107_dver_2_1",
					"VAZ2107_dver_1_2",
					"VAZ2107_dver_2_2",
					"VAZ2107_bagazhnik",
					"VAZ2107_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="VAZ-2107 Chassis";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_1_1",
					"VAZ2107_koleso_1_2",
					"VAZ2107_koleso_2_1",
					"VAZ2107_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_Vaz2107_09: CrSk_VAZ_2107
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VAZ2107_koleso_1_1",
			"VAZ2107_koleso_1_2",
			"VAZ2107_koleso_2_1",
			"VAZ2107_koleso_2_2",
			"VAZ2107_koleso_spare_1",
			"VAZ2107_dver_1_1",
			"VAZ2107_dver_2_1",
			"VAZ2107_dver_1_2",
			"VAZ2107_dver_2_2",
			"VAZ2107_bagazhnik",
			"VAZ2107_kapot",
			"CanisterGasoline",
			"SNVaz2107K_9"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="1.5L VAZ-2103 I4 Carburetor Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNVaz2107K_9"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="VAZ-2107 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"VAZ2107_dver_1_1",
					"VAZ2107_dver_2_1",
					"VAZ2107_dver_1_2",
					"VAZ2107_dver_2_2",
					"VAZ2107_bagazhnik",
					"VAZ2107_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="VAZ-2107 Chassis";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_1_1",
					"VAZ2107_koleso_1_2",
					"VAZ2107_koleso_2_1",
					"VAZ2107_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_Vaz2107_10: CrSk_VAZ_2107
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VAZ2107_koleso_1_1",
			"VAZ2107_koleso_1_2",
			"VAZ2107_koleso_2_1",
			"VAZ2107_koleso_2_2",
			"VAZ2107_koleso_spare_1",
			"VAZ2107_dver_1_1",
			"VAZ2107_dver_2_1",
			"VAZ2107_dver_1_2",
			"VAZ2107_dver_2_2",
			"VAZ2107_bagazhnik",
			"VAZ2107_kapot",
			"CanisterGasoline",
			"SNVaz2107K_10"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="1.5L VAZ-2103 I4 Carburetor Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNVaz2107K_10"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="VAZ-2107 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"VAZ2107_dver_1_1",
					"VAZ2107_dver_2_1",
					"VAZ2107_dver_1_2",
					"VAZ2107_dver_2_2",
					"VAZ2107_bagazhnik",
					"VAZ2107_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="VAZ-2107 Chassis";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_1_1",
					"VAZ2107_koleso_1_2",
					"VAZ2107_koleso_2_1",
					"VAZ2107_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"VAZ2107_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class CrSk_BMW_525i_E34;
	class CrSk_BMW_525i_E34_Black;
	class CrSk_BMW_525i_E34_Red;
	class CrSk_BMW_525i_E34_Beater;
	class SN_BMW525i_01: CrSk_BMW_525i_E34
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"BMWE34_koleso_1_1",
			"BMWE34_koleso_1_2",
			"BMWE34_koleso_2_1",
			"BMWE34_koleso_2_2",
			"BMWE34_koleso_spare_1",
			"BMWE34_dver_1_1",
			"BMWE34_dver_2_1",
			"BMWE34_dver_1_2",
			"BMWE34_dver_2_2",
			"BMWE34_bagazhnik",
			"BMWE34_kapot",
			"CanisterGasoline",
			"SNBMW525K_1"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="2.5L M50B25 I6 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNBMW525K_1"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="BMW 525i E34 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"BMWE34_dver_1_1",
					"BMWE34_dver_2_1",
					"BMWE34_dver_1_2",
					"BMWE34_dver_2_2",
					"BMWE34_bagazhnik",
					"BMWE34_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="BMW 525i E34 Chassis";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_1_1",
					"BMWE34_koleso_1_2",
					"BMWE34_koleso_2_1",
					"BMWE34_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_BMW525i_02: CrSk_BMW_525i_E34_Black
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"BMWE34_koleso_1_1",
			"BMWE34_koleso_1_2",
			"BMWE34_koleso_2_1",
			"BMWE34_koleso_2_2",
			"BMWE34_koleso_spare_1",
			"BMWE34_dver_1_1",
			"BMWE34_dver_2_1",
			"BMWE34_dver_1_2",
			"BMWE34_dver_2_2",
			"BMWE34_bagazhnik",
			"BMWE34_kapot",
			"CanisterGasoline",
			"SNBMW525K_2"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="2.5L M50B25 I6 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNBMW525K_2"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="BMW 525i E34 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"BMWE34_dver_1_1",
					"BMWE34_dver_2_1",
					"BMWE34_dver_1_2",
					"BMWE34_dver_2_2",
					"BMWE34_bagazhnik",
					"BMWE34_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="BMW 525i E34 Chassis";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_1_1",
					"BMWE34_koleso_1_2",
					"BMWE34_koleso_2_1",
					"BMWE34_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_BMW525i_03: CrSk_BMW_525i_E34_Red
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"BMWE34_koleso_1_1",
			"BMWE34_koleso_1_2",
			"BMWE34_koleso_2_1",
			"BMWE34_koleso_2_2",
			"BMWE34_koleso_spare_1",
			"BMWE34_dver_1_1",
			"BMWE34_dver_2_1",
			"BMWE34_dver_1_2",
			"BMWE34_dver_2_2",
			"BMWE34_bagazhnik",
			"BMWE34_kapot",
			"CanisterGasoline",
			"SNBMW525K_3"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="2.5L M50B25 I6 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNBMW525K_3"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="BMW 525i E34 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"BMWE34_dver_1_1",
					"BMWE34_dver_2_1",
					"BMWE34_dver_1_2",
					"BMWE34_dver_2_2",
					"BMWE34_bagazhnik",
					"BMWE34_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="BMW 525i E34 Chassis";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_1_1",
					"BMWE34_koleso_1_2",
					"BMWE34_koleso_2_1",
					"BMWE34_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_BMW525i_04: CrSk_BMW_525i_E34_Beater
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"BMWE34_koleso_1_1",
			"BMWE34_koleso_1_2",
			"BMWE34_koleso_2_1",
			"BMWE34_koleso_2_2",
			"BMWE34_koleso_spare_1",
			"BMWE34_dver_1_1",
			"BMWE34_dver_2_1",
			"BMWE34_dver_1_2",
			"BMWE34_dver_2_2",
			"BMWE34_bagazhnik",
			"BMWE34_kapot",
			"CanisterGasoline",
			"SNBMW525K_4"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="2.5L M50B25 I6 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNBMW525K_4"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="BMW 525i E34 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"BMWE34_dver_1_1",
					"BMWE34_dver_2_1",
					"BMWE34_dver_1_2",
					"BMWE34_dver_2_2",
					"BMWE34_bagazhnik",
					"BMWE34_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="BMW 525i E34 Chassis";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_1_1",
					"BMWE34_koleso_1_2",
					"BMWE34_koleso_2_1",
					"BMWE34_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_BMW525i_05: CrSk_BMW_525i_E34_Beater
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"BMWE34_koleso_1_1",
			"BMWE34_koleso_1_2",
			"BMWE34_koleso_2_1",
			"BMWE34_koleso_2_2",
			"BMWE34_koleso_spare_1",
			"BMWE34_dver_1_1",
			"BMWE34_dver_2_1",
			"BMWE34_dver_1_2",
			"BMWE34_dver_2_2",
			"BMWE34_bagazhnik",
			"BMWE34_kapot",
			"CanisterGasoline",
			"SNBMW525K_5"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="2.5L M50B25 I6 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNBMW525K_5"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="BMW 525i E34 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"BMWE34_dver_1_1",
					"BMWE34_dver_2_1",
					"BMWE34_dver_1_2",
					"BMWE34_dver_2_2",
					"BMWE34_bagazhnik",
					"BMWE34_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="BMW 525i E34 Chassis";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_1_1",
					"BMWE34_koleso_1_2",
					"BMWE34_koleso_2_1",
					"BMWE34_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_BMW525i_06: CrSk_BMW_525i_E34
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"BMWE34_koleso_1_1",
			"BMWE34_koleso_1_2",
			"BMWE34_koleso_2_1",
			"BMWE34_koleso_2_2",
			"BMWE34_koleso_spare_1",
			"BMWE34_dver_1_1",
			"BMWE34_dver_2_1",
			"BMWE34_dver_1_2",
			"BMWE34_dver_2_2",
			"BMWE34_bagazhnik",
			"BMWE34_kapot",
			"CanisterGasoline",
			"SNBMW525K_6"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="2.5L M50B25 I6 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNBMW525K_6"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="BMW 525i E34 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"BMWE34_dver_1_1",
					"BMWE34_dver_2_1",
					"BMWE34_dver_1_2",
					"BMWE34_dver_2_2",
					"BMWE34_bagazhnik",
					"BMWE34_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="BMW 525i E34 Chassis";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_1_1",
					"BMWE34_koleso_1_2",
					"BMWE34_koleso_2_1",
					"BMWE34_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_BMW525i_07: CrSk_BMW_525i_E34_Red
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"BMWE34_koleso_1_1",
			"BMWE34_koleso_1_2",
			"BMWE34_koleso_2_1",
			"BMWE34_koleso_2_2",
			"BMWE34_koleso_spare_1",
			"BMWE34_dver_1_1",
			"BMWE34_dver_2_1",
			"BMWE34_dver_1_2",
			"BMWE34_dver_2_2",
			"BMWE34_bagazhnik",
			"BMWE34_kapot",
			"CanisterGasoline",
			"SNBMW525K_7"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="2.5L M50B25 I6 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNBMW525K_7"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="BMW 525i E34 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"BMWE34_dver_1_1",
					"BMWE34_dver_2_1",
					"BMWE34_dver_1_2",
					"BMWE34_dver_2_2",
					"BMWE34_bagazhnik",
					"BMWE34_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="BMW 525i E34 Chassis";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_1_1",
					"BMWE34_koleso_1_2",
					"BMWE34_koleso_2_1",
					"BMWE34_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_BMW525i_08: CrSk_BMW_525i_E34_Black
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"BMWE34_koleso_1_1",
			"BMWE34_koleso_1_2",
			"BMWE34_koleso_2_1",
			"BMWE34_koleso_2_2",
			"BMWE34_koleso_spare_1",
			"BMWE34_dver_1_1",
			"BMWE34_dver_2_1",
			"BMWE34_dver_1_2",
			"BMWE34_dver_2_2",
			"BMWE34_bagazhnik",
			"BMWE34_kapot",
			"CanisterGasoline",
			"SNBMW525K_8"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="2.5L M50B25 I6 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNBMW525K_8"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="BMW 525i E34 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"BMWE34_dver_1_1",
					"BMWE34_dver_2_1",
					"BMWE34_dver_1_2",
					"BMWE34_dver_2_2",
					"BMWE34_bagazhnik",
					"BMWE34_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="BMW 525i E34 Chassis";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_1_1",
					"BMWE34_koleso_1_2",
					"BMWE34_koleso_2_1",
					"BMWE34_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_BMW525i_09: CrSk_BMW_525i_E34_Beater
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"BMWE34_koleso_1_1",
			"BMWE34_koleso_1_2",
			"BMWE34_koleso_2_1",
			"BMWE34_koleso_2_2",
			"BMWE34_koleso_spare_1",
			"BMWE34_dver_1_1",
			"BMWE34_dver_2_1",
			"BMWE34_dver_1_2",
			"BMWE34_dver_2_2",
			"BMWE34_bagazhnik",
			"BMWE34_kapot",
			"CanisterGasoline",
			"SNBMW525K_9"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="2.5L M50B25 I6 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNBMW525K_9"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="BMW 525i E34 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"BMWE34_dver_1_1",
					"BMWE34_dver_2_1",
					"BMWE34_dver_1_2",
					"BMWE34_dver_2_2",
					"BMWE34_bagazhnik",
					"BMWE34_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="BMW 525i E34 Chassis";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_1_1",
					"BMWE34_koleso_1_2",
					"BMWE34_koleso_2_1",
					"BMWE34_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class SN_BMW525i_10: CrSk_BMW_525i_E34
	{
		scope=2;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"BMWE34_koleso_1_1",
			"BMWE34_koleso_1_2",
			"BMWE34_koleso_2_1",
			"BMWE34_koleso_2_2",
			"BMWE34_koleso_spare_1",
			"BMWE34_dver_1_1",
			"BMWE34_dver_2_1",
			"BMWE34_dver_1_2",
			"BMWE34_dver_2_2",
			"BMWE34_bagazhnik",
			"BMWE34_kapot",
			"CanisterGasoline",
			"SNBMW525K_10"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="2.5L M50B25 I6 Engine";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"SNBMW525K_10"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="BMW 525i E34 Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"BMWE34_dver_1_1",
					"BMWE34_dver_2_1",
					"BMWE34_dver_1_2",
					"BMWE34_dver_2_2",
					"BMWE34_bagazhnik",
					"BMWE34_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="BMW 525i E34 Chassis";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_1_1",
					"BMWE34_koleso_1_2",
					"BMWE34_koleso_2_1",
					"BMWE34_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Items";
				description="";
				attachmentSlots[]=
				{
					"BMWE34_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
};
    
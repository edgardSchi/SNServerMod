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
};
    
class CfgPatches		// i dont get why this has to be in its own conifg
{
	class SN_Slots
	{
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};
class CfgVehicles
{
	class RifleCore;
	class PistolCore;
	class Inventory_Base;
	class Rifle_Base: RifleCore
	{
		inventorySlot[]=
		{
			"shoulder2"
		};
	};	
	/*class Pistol_Base: PistolCore
	{
		inventorySlot[]=
		{
			"Shoulder"
		};
	};*/
};
class CfgSlots
{
	class Slot_SNArrow
	{
		name="SNArrow";
		displayName="SNArrow";
	};
	class Slot_SNArrow_1
	{
		name="SNArrow1";
		displayName="SNArrow1";
	};
	class Slot_SNArrow_2
	{
		name="SNArrow2";
		displayName="SNArrow2";
	};
	class Slot_SNArrow_3
	{
		name="SNArrow3";
		displayName="SNArrow3";
	};
	class Slot_SNCass
	{
		name="SNCassette";
		displayName="SNCassette";
		ghostIcon="missing";
	};
	class Slot_shoulder2
    {
        name="shoulder2";
        displayName="shoulder2";
        ghostIcon="shoulderright";
    };
	class Slot_SNPistol
	{
		name="SNPistol";
		displayName="SNPistol";
		ghostIcon="pistol";
	};
	class Slot_SNMelee
	{
		name="SNMelee";
		displayName="SNMelee";
		ghostIcon="knife";
	};
	class Slot_SNFruits_1
	{
		name="SNFruits_1";
		displayName="SNFruits_1";
		ghostIcon="plant";
	};
	class Slot_SNFruits_2
	{
		name="SNFruits_2";
		displayName="SNFruits_2";
		ghostIcon="plant";
	};
	class Slot_SNFruits_3
	{
		name="SNFruits_3";
		displayName="SNFruits_3";
		ghostIcon="plant";
	};
	class Slot_SNFruits_4
	{
		name="SNFruits_4";
		displayName="SNFruits_4";
		ghostIcon="plant";
	};
	class Slot_SNFruits_5
	{
		name="SNFruits_5";
		displayName="SNFruits_5";
		ghostIcon="plant";
	};
	class Slot_SNFruitsBig_1
	{
		name="SNFruitsBig_1";
		displayName="SNFruitsBig_1";
		ghostIcon="plant";
	};
	class Slot_SNFruitsBig_2
	{
		name="SNFruitsBig_2";
		displayName="SNFruitsBig_2";
		ghostIcon="plant";
	};
	class Slot_SNFruitsBig_3
	{
		name="SNFruitsBig_3";
		displayName="SNFruitsBig_3";
		ghostIcon="plant";
	};
	class Slot_SNKatanaSlot
	{
		name="SNKatanaSlot";
		displayName="SNKatanaSlot";
		ghostIcon="knife";
	};
	class Slot_SNFilters
	{
		name="SNFilters";
		displayName="SNFilters";
		ghostIcon="barbedwiredown";
	};
	
	// Vehicle Keys
	
	// Niva
	class Slot_SNNivaK_1
	{
		name="SNNivaK_1";
		displayName="SNNivaK_1";
		ghostIcon="missing";
	};
	class Slot_SNNivaK_2
	{
		name="SNNivaK_2";
		displayName="SNNivaK_2";
		ghostIcon="missing";
	};
	class Slot_SNNivaK_3
	{
		name="SNNivaK_3";
		displayName="SNNivaK_3";
		ghostIcon="missing";
	};
	class Slot_SNNivaK_4
	{
		name="SNNivaK_4";
		displayName="SNNivaK_4";
		ghostIcon="missing";
	};
	class Slot_SNNivaK_5
	{
		name="SNNivaK_5";
		displayName="SNNivaK_5";
		ghostIcon="missing";
	};
	class Slot_SNNivaK_6
	{
		name="SNNivaK_6";
		displayName="SNNivaK_6";
		ghostIcon="missing";
	};
	class Slot_SNNivaK_7
	{
		name="SNNivaK_7";
		displayName="SNNivaK_7";
		ghostIcon="missing";
	};
	class Slot_SNNivaK_8
	{
		name="SNNivaK_8";
		displayName="SNNivaK_8";
		ghostIcon="missing";
	};
	class Slot_SNNivaK_9
	{
		name="SNNivaK_9";
		displayName="SNNivaK_9";
		ghostIcon="missing";
	};
	class Slot_SNNivaK_10
	{
		name="SNNivaK_10";
		displayName="SNNivaK_10";
		ghostIcon="missing";
	};
	
	// Gaz-Wolga 24
	
	class Slot_SNWolgaK_1
	{
		name="SNWolgaK_1";
		displayName="SNWolgaK_1";
		ghostIcon="missing";
	};
	class Slot_SNWolgaK_2
	{
		name="SNWolgaK_2";
		displayName="SNWolgaK_2";
		ghostIcon="missing";
	};
	class Slot_SNWolgaK_3
	{
		name="SNWolgaK_3";
		displayName="SNWolgaK_3";
		ghostIcon="missing";
	};
	class Slot_SNWolgaK_4
	{
		name="SNWolgaK_4";
		displayName="SNWolgaK_4";
		ghostIcon="missing";
	};
	class Slot_SNWolgaK_5
	{
		name="SNWolgaK_5";
		displayName="SNWolgaK_5";
		ghostIcon="missing";
	};
	class Slot_SNWolgaK_6
	{
		name="SNWolgaK_6";
		displayName="SNWolgaK_6";
		ghostIcon="missing";
	};
	class Slot_SNWolgaK_7
	{
		name="SNWolgaK_7";
		displayName="SNWolgaK_7";
		ghostIcon="missing";
	};
	class Slot_SNWolgaK_8
	{
		name="SNWolgaK_8";
		displayName="SNWolgaK_8";
		ghostIcon="missing";
	};
	class Slot_SNWolgaK_9
	{
		name="SNWolgaK_9";
		displayName="SNWolgaK_9";
		ghostIcon="missing";
	};
	class Slot_SNWolgaK_10
	{
		name="SNWolgaK_10";
		displayName="SNWolgaK_10";
		ghostIcon="missing";
	};
	
	// Skoda 120
	
	class Slot_SNSkoda120K_1
	{
		name="SNSkoda120K_1";
		displayName="SNSkoda120K_1";
		ghostIcon="missing";
	};
	class Slot_SNSkoda120K_2
	{
		name="SNSkoda120K_2";
		displayName="SNSkoda120K_2";
		ghostIcon="missing";
	};
	class Slot_SNSkoda120K_3
	{
		name="SNSkoda120K_3";
		displayName="SNSkoda120K_3";
		ghostIcon="missing";
	};
	class Slot_SNSkoda120K_4
	{
		name="SNSkoda120K_4";
		displayName="SNSkoda120K_4";
		ghostIcon="missing";
	};
	class Slot_SNSkoda120K_5
	{
		name="SNSkoda120K_5";
		displayName="SNSkoda120K_5";
		ghostIcon="missing";
	};
	class Slot_SNSkoda120K_6
	{
		name="SNSkoda120K_6";
		displayName="SNSkoda120K_6";
		ghostIcon="missing";
	};
	class Slot_SNSkoda120K_7
	{
		name="SNSkoda120K_7";
		displayName="SNSkoda120K_7";
		ghostIcon="missing";
	};
	class Slot_SNSkoda120K_8
	{
		name="SNSkoda120K_8";
		displayName="SNSkoda120K_8";
		ghostIcon="missing";
	};
	class Slot_SNSkoda120K_9
	{
		name="SNSkoda120K_9";
		displayName="SNSkoda120K_9";
		ghostIcon="missing";
	};
	class Slot_SNSkoda120K_10
	{
		name="SNSkoda120K_10";
		displayName="SNSkoda120K_10";
		ghostIcon="missing";
	};
	
	// Golf 2
	
	class Slot_SNGolf2K_1
	{
		name="SNGolf2K_1";
		displayName="SNGolf2K_1";
		ghostIcon="missing";
	};
	class Slot_SNGolf2K_2
	{
		name="SNGolf2K_2";
		displayName="SNGolf2K_2";
		ghostIcon="missing";
	};
	class Slot_SNGolf2K_3
	{
		name="SNGolf2K_3";
		displayName="SNGolf2K_3";
		ghostIcon="missing";
	};
	class Slot_SNGolf2K_4
	{
		name="SNGolf2K_4";
		displayName="SNGolf2K_4";
		ghostIcon="missing";
	};
	class Slot_SNGolf2K_5
	{
		name="SNGolf2K_5";
		displayName="SNGolf2K_5";
		ghostIcon="missing";
	};
	class Slot_SNGolf2K_6
	{
		name="SNGolf2K_6";
		displayName="SNGolf2K_6";
		ghostIcon="missing";
	};
	class Slot_SNGolf2K_7
	{
		name="SNGolf2K_7";
		displayName="SNGolf2K_7";
		ghostIcon="missing";
	};
	class Slot_SNGolf2K_8
	{
		name="SNGolf2K_8";
		displayName="SNGolf2K_8";
		ghostIcon="missing";
	};
	class Slot_SNGolf2K_9
	{
		name="SNGolf2K_9";
		displayName="SNGolf2K_9";
		ghostIcon="missing";
	};
	class Slot_SNGolf2K_10
	{
		name="SNGolf2K_10";
		displayName="SNGolf2K_10";
		ghostIcon="missing";
	};
	
	// ZIl 130
	
	class Slot_SNZil130K_1
	{
		name="SNZil130K_1";
		displayName="SNZil130K_1";
		ghostIcon="missing";
	};
	class Slot_SNZil130K_2
	{
		name="SNZil130K_2";
		displayName="SNZil130K_2";
		ghostIcon="missing";
	};
	class Slot_SNZil130K_3
	{
		name="SNZil130K_3";
		displayName="SNZil130K_3";
		ghostIcon="missing";
	};
	class Slot_SNZil130K_4
	{
		name="SNZil130K_4";
		displayName="SNZil130K_4";
		ghostIcon="missing";
	};
	class Slot_SNZil130K_5
	{
		name="SNZil130K_5";
		displayName="SNZil130K_5";
		ghostIcon="missing";
	};
	class Slot_SNZil130K_6
	{
		name="SNZil130K_6";
		displayName="SNZil130K_6";
		ghostIcon="missing";
	};
	class Slot_SNZil130K_7
	{
		name="SNZil130K_7";
		displayName="SNZil130K_7";
		ghostIcon="missing";
	};
	class Slot_SNZil130K_8
	{
		name="SNZil130K_8";
		displayName="SNZil130K_8";
		ghostIcon="missing";
	};
	class Slot_SNZil130K_9
	{
		name="SNZil130K_9";
		displayName="SNZil130K_9";
		ghostIcon="missing";
	};
	class Slot_SNZil130K_10
	{
		name="SNZil130K_10";
		displayName="SNZil130K_10";
		ghostIcon="missing";
	};
	
	// VAZ 2107
	
	class Slot_SNVaz2107K_1
	{
		name="SNVaz2107K_1";
		displayName="SNVaz2107K_1";
		ghostIcon="missing";
	};
	class Slot_SNVaz2107K_2
	{
		name="SNVaz2107K_2";
		displayName="SNVaz2107K_2";
		ghostIcon="missing";
	};
	class Slot_SNVaz2107K_3
	{
		name="SNVaz2107K_3";
		displayName="SNVaz2107K_3";
		ghostIcon="missing";
	};
	class Slot_SNVaz2107K_4
	{
		name="SNVaz2107K_4";
		displayName="SNVaz2107K_4";
		ghostIcon="missing";
	};
	class Slot_SNVaz2107K_5
	{
		name="SNVaz2107K_5";
		displayName="SNVaz2107K_5";
		ghostIcon="missing";
	};
	class Slot_SNVaz2107K_6
	{
		name="SNVaz2107K_6";
		displayName="SNVaz2107K_6";
		ghostIcon="missing";
	};
	class Slot_SNVaz2107K_7
	{
		name="SNVaz2107K_7";
		displayName="SNVaz2107K_7";
		ghostIcon="missing";
	};
	class Slot_SNVaz2107K_8
	{
		name="SNVaz2107K_8";
		displayName="SNVaz2107K_8";
		ghostIcon="missing";
	};
	class Slot_SNVaz2107K_9
	{
		name="SNVaz2107K_9";
		displayName="SNVaz2107K_9";
		ghostIcon="missing";
	};
	class Slot_SNVaz2107K_10
	{
		name="SNVaz2107K_10";
		displayName="SNVaz2107K_10";
		ghostIcon="missing";
	};
	
	// BMW525
	
	class Slot_SNBMW525K_1
	{
		name="SNBMW525K_1";
		displayName="SNBMW525K_1";
		ghostIcon="missing";
	};
	class Slot_SNBMW525K_2
	{
		name="SNBMW525K_2";
		displayName="SNBMW525K_2";
		ghostIcon="missing";
	};
	class Slot_SNBMW525K_3
	{
		name="SNBMW525K_3";
		displayName="SNBMW525K_3";
		ghostIcon="missing";
	};
	class Slot_SNBMW525K_4
	{
		name="SNBMW525K_4";
		displayName="SNBMW525K_4";
		ghostIcon="missing";
	};
	class Slot_SNBMW525K_5
	{
		name="SNBMW525K_5";
		displayName="SNBMW525K_5";
		ghostIcon="missing";
	};
	class Slot_SNBMW525K_6
	{
		name="SNBMW525K_6";
		displayName="SNBMW525K_6";
		ghostIcon="missing";
	};
	class Slot_SNBMW525K_7
	{
		name="SNBMW525K_7";
		displayName="SNBMW525K_7";
		ghostIcon="missing";
	};
	class Slot_SNBMW525K_8
	{
		name="SNBMW525K_8";
		displayName="SNBMW525K_8";
		ghostIcon="missing";
	};
	class Slot_SNBMW525K_9
	{
		name="SNBMW525K_9";
		displayName="SNBMW525K_9";
		ghostIcon="missing";
	};
	class Slot_SNBMW525K_10
	{
		name="SNBMW525K_10";
		displayName="SNBMW525K_10";
		ghostIcon="missing";
	};
	
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySNWaffe: ProxyAttachment
	{
		scope=2;
		inventorySlot="shoulder2";
		model="SilensNox\roleplay\Proxies\SNWaffe.p3d";
	};
	class ProxySNPistol: ProxyAttachment
	{
		scope=2;
		inventorySlot="SNPistol";
		model="SilensNox\roleplay\Proxies\SNPistol.p3d";
	};
	class ProxySNFruits_1: ProxyAttachment
	{
		scope=2;
		inventorySlot="SNFruits_1";
		model="SilensNox\roleplay\Proxies\SNFruits_1.p3d";
	};
	class ProxySNFruits_2: ProxyAttachment
	{
		scope=2;
		inventorySlot="SNFruits_1";
		model="SilensNox\roleplay\Proxies\SNFruits_2.p3d";
	};
	class ProxySNFruits_3: ProxyAttachment
	{
		scope=2;
		inventorySlot="SNFruits_3";
		model="SilensNox\roleplay\Proxies\SNFruits_3.p3d";
	};
	class ProxySNFruits_4: ProxyAttachment
	{
		scope=2;
		inventorySlot="SNFruits_4";
		model="SilensNox\roleplay\Proxies\SNFruits_4.p3d";
	};
	class ProxySNFruits_5: ProxyAttachment
	{
		scope=2;
		inventorySlot="SNFruits_5";
		model="SilensNox\roleplay\Proxies\SNFruits_5.p3d";
	};
	class ProxySNFruitsBig_1: ProxyAttachment
	{
		scope=2;
		inventorySlot="SNFruitsBig_1";
		model="SilensNox\roleplay\Proxies\SNFruitsBig_1.p3d";
	};
	class ProxySNFruitsBig_2: ProxyAttachment
	{
		scope=2;
		inventorySlot="SNFruitsBig_2";
		model="SilensNox\roleplay\Proxies\SNFruitsBig_2.p3d";
	};
	class ProxySNFruitsBig_3: ProxyAttachment
	{
		scope=2;
		inventorySlot="SNFruitsBig_3";
		model="SilensNox\roleplay\Proxies\SNFruitsBig_3.p3d";
	};
	class ProxySNBackpack: ProxyAttachment
	{
		scope=2
		inventorySlot="Back";
		model="SilensNox\roleplay\Proxies\SNBackpack.p3d";
	}
	class ProxySNGloves: ProxyAttachment
	{
		scope=2
		inventorySlot="Gloves";
		model="SilensNox\roleplay\Proxies\SNGloves.p3d";
	}
	class ProxySNKatana: ProxyAttachment
	{
		scope=2;
		inventorySlot="SNKatanaSlot";
		model="SilensNox\roleplay\Proxies\SNKatana.p3d";
	}
};

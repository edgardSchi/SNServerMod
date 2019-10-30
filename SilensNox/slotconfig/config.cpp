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

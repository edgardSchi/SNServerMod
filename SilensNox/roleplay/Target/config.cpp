class CfgPatches
{
    class SN_target
    {
        units[]=
        {
            "SN_Target"
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
			"DZ_Gear_Food",
			"DZ_Gear_Containers"
        };
    };
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class Container_Base;
	class SN_Target: Container_Base
	{
		scope=2;
		displayName="Ziel";
		descriptionShort="NEP NEP";
		model="SilensNox\roleplay\Target\target.p3d";
		lootCategory="Civillian";
		targetCategory="loot";
		class Cargo
		{
			itemsCargoSize[]={2,2};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{
		};
		class GUIInventoryAttachmentsProps
		{
			/*class SNAppleAtt
			{
				name="Apfel";
				description="Original Zielübung seit 20,000BC!";
				attachmentSlots[]=
				{
					"SNtargetApple"
				};
				icon="cat_fp_cooking";
			};
			class SNTeddyAtt
			{
				name="Teddy";
				description="Willst du wirklich einen Teddy opfern ? :c";
				attachmentSlots[]=
				{
					"SNtargetBear"
				};
				icon="cat_fp_kindling";
			};*/
		};
		itemBehaviour=1;
		weight=1;
		itemSize[]={6,6};
		hiddenSelections[]=
		{
			"target"
		};
		hiddenSelectionsTextures[]=
		{
			"SilensNox\roleplay\Target\Data\Boombox_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SilensNox\roleplay\Target\Data\Boombox.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};		
	};
	class Apple: Edible_Base
	{
		inventorySlot[]=
		{
			"SNtargetApple"
		};
	};
	class Bear_ColorBase: Container_Base
	{
		inventorySlot[]=
		{
			"SNtargetBear"
		};
	};
};
    
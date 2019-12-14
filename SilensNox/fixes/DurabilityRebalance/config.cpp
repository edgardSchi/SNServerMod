class CfgPatches
{
	class SN_Durabilityrebalance
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee_Blade",
			"DZ_Weapons_Melee_Blunt",
			"DZ_Weapons_Melee_Powered",
			"DZ_Weapons_Muzzles",
			"DZ_Gear_Tools"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class ItemSuppressor;
	class FishingRod_Base_New;
	class BrassKnuckles_ColorBase;
	class Powered_Base;
	class WoodAxe: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
				};
			};
		};
	};
	class Hatchet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
				};
			};
		};
	};
	class FirefighterAxe: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=450;
				};
			};
		};
	};
	class Cleaver: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
				};
			};
		};
	};
	class CombatKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
				};
			};
		};
	};
	class HuntingKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
				};
			};
		};
	};
	class Machete: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
				};
			};
		};
	};
	class Pitchfork: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
				};
			};
		};
	};
	class Pickaxe: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
	};
	class Sword: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
	};
	class BaseballBat: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
				};
			};
		};
	};
	class NailedBaseballBat: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=225;
				};
			};
		};
	};
	class PipeWrench: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
				};
			};
		};
	};
	class BrassKnuckles_Dull: BrassKnuckles_ColorBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
				};
			};
		};
	};
	class BrassKnuckles_Shiny: BrassKnuckles_ColorBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
				};
			};
		};
	};
	class TelescopicBaton: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
				};
			};
		};
	};
	class NewHockeyStick: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
				};
			};
		};
	};
	class PoliceBaton: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
				};
			};
		};
	};
	class Chainsaw: Powered_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=375;
				};
			};
		};
	};
	class CattleProd: Powered_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
				};
			};
		};
	};
	class StunBaton: Powered_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
				};
			};
		};
	};
	class AK_Bayonet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
				};
			};
		};
	};
	class M9A1_Bayonet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
				};
			};
		};
	};
	class Mosin_Bayonet: Inventory_Base
	{
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
	class SKS_Bayonet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
				};
			};
		};
	};
	class Mosin_Compensator: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
				};
			};
		};
	};
	class MP5_Compensator: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
				};
			};
		};
	};
	class M4_Suppressor: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8;
				};
			};
		};
	};
	class AK_Suppressor: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=6;
				};
			};
		};
	};
	class Flashlight: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class CanOpener: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
				};
			};
		};
	};
	class Pliers: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=450;
				};
			};
		};
	};
	class Lockpick: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
				};
			};
		};
	};
	class Shovel: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
				};
			};
		};
	};
	class FieldShovel: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
				};
			};
		};
	};
	class Hammer: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
				};
			};
		};
	};
	class MeatTenderizer: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class Wrench: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
				};
			};
		};
	};
	class LugWrench: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
				};
			};
		};
	};
	class Pipe: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
				};
			};
		};
	};
	class Sickle: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class Hacksaw: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
				};
			};
		};
	};
	class StoneKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
				};
			};
		};
	};
	class Mace: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
				};
			};
		};
	};
	class FarmingHoe: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
				};
			};
		};
	};
	class ImprovisedFishingRod: FishingRod_Base_New
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=75;
				};
			};
		};
	};
	class FishingRod: FishingRod_Base_New
	{
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
	class SledgeHammer: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
				};
			};
		};
	};
	class Broom: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
				};
			};
		};
	};
	class Paddle: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
				};
			};
		};
	};
	class HandSaw: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
				};
			};
		};
	};
};
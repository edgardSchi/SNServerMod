class CfgPatches
{
	class SN_Ammo
	{
		ammo[]=
		{
			"Bullet_22"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Projectiles"
		};
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Shotgun_Base;
	class Bullet_SNBolt: Bullet_Base
	{
		scope=2;
		lootCategory="Crafted";
		cartridge="FxCartridge_SN_Bolt";
		spawnPileType="Ammo_SNBolt";
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=0.60000002;
		tracerStartTime=9.9999997e-006;
		tracerEndTime=1;
		deflecting=0;
		caliber=0.69999999;
		airFriction=-0.00076899998;
		typicalSpeed=100;
		initSpeed=100;
		model="\dz\weapons\projectiles\arrow_hunting_flying.p3d";
		weight=0.0024999999;
		soundFly[]={};
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=60;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=80;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_SNT1Arrow: Bullet_Base
	{
		scope=2;
		lootCategory="Crafted";
		cartridge="FxCartridge_SN_T1Arrow";
		spawnPileType="Ammo_SNT1Arrow";
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=0.60000002;
		tracerStartTime=9.9999997e-006;
		tracerEndTime=1;
		deflecting=0;
		caliber=0.69999999;
		airFriction=-0.00076899998;
		typicalSpeed=40;
		initSpeed=40;
		model="\dz\weapons\projectiles\arrow_hunting_flying.p3d";
		weight=0.0024999999;
		soundFly[]={};
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=40;
				armorDamage=0.3;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=40;
				armorDamage=0.5;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_SNT2Arrow: Bullet_Base
	{
		scope=2;
		lootCategory="Crafted";
		cartridge="FxCartridge_SN_T2Arrow";
		spawnPileType="Ammo_SNT2Arrow";
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=0.60000002;
		tracerStartTime=9.9999997e-006;
		tracerEndTime=1;
		deflecting=0;
		caliber=0.69999999;
		airFriction=-0.00076899998;
		typicalSpeed=80;
		initSpeed=80;
		model="\dz\weapons\projectiles\arrow_hunting_flying.p3d";
		weight=0.0024999999;
		soundFly[]={};
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=50;
				armorDamage=0.6;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=50;
				armorDamage=0.8;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_SNT3Arrow: Bullet_Base
	{
		scope=2;
		lootCategory="Crafted";
		cartridge="FxCartridge_SN_T3Arrow";
		spawnPileType="Ammo_SNT3Arrow";
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=0.60000002;
		tracerStartTime=9.9999997e-006;
		tracerEndTime=1;
		deflecting=0;
		caliber=0.69999999;
		airFriction=-0.00076899998;
		typicalSpeed=90;
		initSpeed=90;
		model="\dz\weapons\projectiles\arrow_hunting_flying.p3d";
		weight=0.0024999999;
		soundFly[]={};
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=70;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=60;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_22: Bullet_Base
	{
		scope=2;
		lootCategory="Crafted";
		cartridge="FxCartridge_22";
		spawnPileType="Ammo_22";
		hit=4.5;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=0.60000002;
		tracerStartTime=-1;
		tracerEndTime=1;
		deflecting=30;
		caliber=0.69999999;
		airFriction=-0.00076899998;
		typicalSpeed=380;
		initSpeed=380;
		weight=0.0024999999;
		soundFly[]={};
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=18;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=22;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_SNBolt: Ammunition_Base
	{
		scope=2;
		displayName="Armbrustbolzen";
		descriptionShort="Ein Bolzen";
		model="\dz\weapons\projectiles\arrow_hunting.p3d";
		inventorySlot[]=
		{
			"SNArrow1",
			"SNArrow2",
			"SNArrow3",
			"SNArrow4"
		};
		rotationFlags=34;
		itemSize[]={1,2};
		iconCartridge=2;
		weight=22;
		count=10;
		ammo="Bullet_SNBolt";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\projectiles\data\arrows.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\projectiles\data\arrows.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\projectiles\data\arrows_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\projectiles\data\arrows_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\projectiles\data\arrows_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Ammo_SNT1Arrow: Ammunition_Base
	{
		scope=2;
		displayName="Angespitzter Stock";
		descriptionShort="Ein Stock der Angespitzt wurde - als Pfeil eher schlecht ...";
		model="\dz\weapons\projectiles\arrow_crude_simple.p3d";
		inventorySlot[]=
		{
			"SNArrow1",
			"SNArrow2",
			"SNArrow3",
			"SNArrow4"
		};
		rotationFlags=34;
		itemSize[]={1,3};
		iconCartridge=2;
		weight=20;
		count=15;
		ammo="Bullet_SNT1Arrow";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Ammo_SNT2Arrow: Ammunition_Base
	{
		scope=2;
		displayName="Pfeile";
		descriptionShort="Jetzt sieht es doch schon mal aus wie ein Pfeil...";
		model="\dz\weapons\projectiles\arrow_crafted_simple.p3d";
		inventorySlot[]=
		{
			"SNArrow1",
			"SNArrow2",
			"SNArrow3",
			"SNArrow4"
		};
		rotationFlags=34;
		itemSize[]={1,3};
		iconCartridge=2;
		weight=25;
		count=15;
		ammo="Bullet_SNT2Arrow";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Ammo_SNT3Arrow: Ammunition_Base
	{
		scope=2;
		displayName="Pfeil mit Spitze";
		descriptionShort="Besser als das wird es nicht...";
		model="\dz\weapons\projectiles\arrow_crafted_advanced.p3d";
		inventorySlot[]=
		{
			"SNArrow1",
			"SNArrow2",
			"SNArrow3",
			"SNArrow4"
		};
		rotationFlags=34;
		itemSize[]={1,3};
		iconCartridge=2;
		weight=30;
		count=15;
		ammo="Bullet_SNT3Arrow";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\projectiles\data\arrow_composite_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};

class cfgAmmoTypes
{
	class AType_Bullet_SNBolt
	{
		name="Bullet_SNBolt";
	};
	class AType_Bullet_SNT1Arrow
	{
		name="Bullet_SNT1Arrow";
	};
	class AType_Bullet_SNT2Arrow
	{
		name="Bullet_SNT2Arrow";
	};
	class AType_Bullet_SNT3Arrow
	{
		name="Bullet_SNT3Arrow";
	};
};
class CfgVehicles
{
	class All;
	class Strategic;
	class ThingEffect;
	class FxCartridge;
	class FxCartridge_Small;
	class FxCartridge_SN_Bolt: FxCartridge
	{
		model="\dz\weapons\projectiles\arrow_hunting_flying.p3d";
	};
	class FxCartridge_SN_T1Arrow: FxCartridge
	{
		model="\dz\weapons\projectiles\arrow_crude_simple.p3d";
	};
	class FxCartridge_SN_T2Arrow: FxCartridge
	{
		model="\dz\weapons\projectiles\arrow_crafted_simple.p3d";
	};
	class FxCartridge_SN_T3Arrow: FxCartridge
	{
		model="\dz\weapons\projectiles\arrow_crafted_advanced.p3d";
	};
};

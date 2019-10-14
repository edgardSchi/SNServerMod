class LOA_SodaCan_ColorBase : Bottle_Base
{
	override string GetEmptyingLoopSoundsetHard()
	{
		return "pour_HardGround_Canteen_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetSoft()
	{
		return "pour_SoftGround_Canteen_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetWater()
	{
		return "pour_Water_Canteen_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetHard()
	{
		return "pour_End_HardGround_Canteen_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetSoft()
	{
		return "pour_End_SoftGround_Canteen_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetWater()
	{
		return "pour_End_Water_Canteen_SoundSet";
	}
	
	override bool IsContainer()
	{
		return true;
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if ( !super.CanPutInCargo(parent) ) {return false;}	
		if ( !(parent.IsKindOf("LOA_SodaCan_ColorBase"))/* && !(parent.IsKindOf("Container_Base"))*/)
		{
			return true;
		}
		
		return false;
	}
	
	override bool IsOpen()
	{
		return true;
	}
	
	/*override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionWorldLiquidActionSwitch);
		AddAction(ActionFillFuel);
		AddAction(ActionFillCoolant);
		AddAction(ActionFillGeneratorTank);
		AddAction(ActionExtinguishFireplaceByLiquid);
		AddAction(ActionFillBottleBase);
		AddAction(ActionWaterGardenSlot);
		AddAction(ActionWaterPlant);
		AddAction(ActionForceDrink);
		AddAction(ActionPourLiquid);
		AddAction(ActionDrainLiquid);
		AddAction(ActionEmptyBottleBase);
		AddAction(ActionWashHandsItem);
		AddAction(ActionDrink);
	}*/
};

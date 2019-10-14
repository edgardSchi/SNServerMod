class LOA_Barrel_Base: Bottle_Base
{
	
	
	void LOA_Barrel_Base()
	{
		m_LiquidEmptyRate = 2000;
	}
	
	void ~LOA_Barrel_Base()
	{

	}
	
	override bool IsContainer()
	{
		return true;
	}
	
	override string GetPouringSoundset()
	{
		return "emptyVessle_CanisterGasoline_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetHard()
	{
		return "pour_HardGround_GasolineCanister_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetSoft()
	{
		return "pour_SoftGround_GasolineCanister_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetWater()
	{
		return "pour_Water_GasolineCanister_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetHard()
	{
		return "pour_End_HardGround_GasolineCanister_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetSoft()
	{
		return "pour_End_SoftGround_GasolineCanister_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetWater()
	{
		return "pour_End_Water_GasolineCanister_SoundSet";
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}	
		if ( !(parent.IsKindOf("LOA_Barrel_Base"))/* && !(parent.IsKindOf("Container_Base"))*/)
		{
			return true;
		}
		
		return false;
	}
	
	override bool IsOpen()
	{
		return true;
	}

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
		AddAction(ActionWorldLiquidActionSwitch);
		RemoveAction(ActionFillCoolant);
		RemoveAction(ActionFillFuel);
		RemoveAction(ActionFillGeneratorTank);
		RemoveAction(ActionExtinguishFireplaceByLiquid);
		AddAction(ActionFillBottleBase);
		AddAction(ActionWaterGardenSlot);
		AddAction(ActionWaterPlant);
		AddAction(ActionForceDrink);
		AddAction(ActionPourLiquid);
		AddAction(ActionDrainLiquid);
		AddAction(ActionEmptyBottleBase);
		RemoveAction(ActionDrink);
		
		

		
	}

}
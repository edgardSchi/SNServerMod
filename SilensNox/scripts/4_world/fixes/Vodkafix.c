modded class Vodka: Bottle_Base
{
	void Vodka()
	{

	}
	
	void ~Vodka()
	{
		
	}
	
	override bool IsContainer()
	{
		return true;
	}
	
	override string GetPouringSoundset()
	{
		return "emptyVessle_WaterBottle_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetHard()
	{
		return "pour_HardGround_WatterBottle_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetSoft()
	{
		return "pour_SoftGround_WatterBottle_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetWater()
	{
		return "pour_Water_WatterBottle_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetHard()
	{
		return "pour_End_HardGround_WatterBottle_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetSoft()
	{
		return "pour_End_SoftGround_WatterBottle_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetWater()
	{
		return "pour_End_Water_WatterBottle_SoundSet";
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}	
		if ( !(parent.IsKindOf("WatterBottle"))/* && !(parent.IsKindOf("Container_Base"))*/)
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
		
		RemoveAction(ActionWashHandsItem);
	}
}
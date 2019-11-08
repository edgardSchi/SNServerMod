class SN_ZaunMitSeil extends Inventory_Base
{
	//void SN_Target
	//{
	//}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}
	
	override bool IsHeavyBehaviour() 
    {
        return true;
    }
    
    override bool IsTwoHandedBehaviour() 
    {
        return true;
    }
	
	override void OnPlacementComplete( Man player )
	{		
		super.OnPlacementComplete( player );
	}

	override bool IsDeployable()
	{
		return true;
	}
	
	override string GetDeploySoundset()
	{
		return "putDown_FenceKit_SoundSet";
	}
	
	override string GetLoopDeploySoundset()
	{
		return "BarbedWire_Deploy_loop_SoundSet";
	}
}
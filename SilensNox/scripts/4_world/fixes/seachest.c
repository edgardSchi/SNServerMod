modded class SeaChest: Container_Base
{
	override bool IsTwoHandedBehaviour() 
    {
        return true;
    }
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}
	
	override void OnPlacementComplete( Man player )
	{		
		super.OnPlacementComplete( player );
	}

	override bool IsDeployable()
	{
		return true;
	}
}
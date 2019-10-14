class LOA_Target extends Inventory_Base
{
	//void LOA_Target
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
		return "placeCarTent_SoundSet";
	}
	
	override string GetLoopDeploySoundset()
	{
		return "cartent_deploy_SoundSet";
	}
}
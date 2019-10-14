class LOA_Boombox extends LOA_Target
{
	//void LOA_Target
	//{
	//}
	/*override void SetActions()
	{
		Maybe a future update ...
		super.SetActions();
		AddAction(ActionTurnOnTransmitter);
		AddAction(ActionTurnOffTransmitter);
		AddAction(ActionTurnOnTransmitterOnGround);
		AddAction(ActionTurnOffTransmitterOnGround);
	}*/    
	override bool IsHeavyBehaviour() 
    {
        return false;
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
		return "placeHescoBox_SoundSet";
	}
	
	override string GetLoopDeploySoundset()
	{
		return "hescobox_deploy_SoundSet";
	}
}
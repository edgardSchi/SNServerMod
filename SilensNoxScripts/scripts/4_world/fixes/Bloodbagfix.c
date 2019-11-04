modded class BloodBagIV extends BloodContainerBase
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionGiveBloodTarget);
		RemoveAction(ActionGiveBloodSelf);
		//AddAction(ActionGiveBloodSelf);
	}
}
modded class Defibrillator
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionTurnOffWhileInHands);
		AddAction(ActionDefibrilateTarget);
		RemoveAction(ActionDefibrilateSelf); // Damit sich gewisse leute nicht mehr selbst defibrillieren ...
	}
}
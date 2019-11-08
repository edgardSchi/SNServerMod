class SN_Healsyringe: Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionHealOtherSyringe);
		//AddAction(ActionHealSelfSyringe);
	}	
}
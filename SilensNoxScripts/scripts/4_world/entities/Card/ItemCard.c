//Class for handling Card state by Eddy
class ItemCard extends InventoryItemSuper {

	protected string m_Playername = "";
    protected string m_RPID = "";

    override void OnItemLocationChanged(EntityAI old_owner, EntityAI new_owner)
	{
		super.OnItemLocationChanged(old_owner,new_owner);
		
		SetCardStateOpen(false, PlayerBase.Cast(old_owner));
	}
	
	//! displays open/closed selections; 1 == opened
	void SetCardStateOpen(bool state, PlayerBase player)
	{
		if (player)
		{
			player.SetCardOpen(state);
			if (state)
				player.OnItemInHandsChanged();
		}
		
		if (state)
		{
			ShowSelection("map_opened");
			HideSelection("map_closed");
		}
		else
		{
			ShowSelection("map_closed");
			HideSelection("map_opened");
		}
	}
	

	string GetPlayername() {
		return m_Playername;
	}

	string GetRPID() {
		return m_RPID;
	}
}
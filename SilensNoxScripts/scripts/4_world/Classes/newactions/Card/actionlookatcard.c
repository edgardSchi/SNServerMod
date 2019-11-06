//Action for looking at an ID card by Eddy
class ActionLookAtCard: ActionSingleUseBase {

    void ActionLookAtCard() {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_VIEWNOTE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_PRONE;
    }

    override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override bool HasTarget()
	{
		return false;
	}

	override string GetText()
	{
		return "#read";
	}

	override void OnStartClient( ActionData action_data )
	{
		LookAtCard(action_data);
	}
	
	override void OnStartServer( ActionData action_data )
	{
		LookAtCard(action_data);
	}

	void LookAtCard(ActionData action_data) {
		SN_IDCard card = SN_IDCard.Cast(action_data.m_Player.GetItemInHands());
		action_data.m_Player.SetCard(card);
		action_data.m_Player.enterIDCardMenu = true;
	}
}
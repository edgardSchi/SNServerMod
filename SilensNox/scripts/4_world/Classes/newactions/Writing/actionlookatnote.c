//Action for looking at papers card by Eddy
class ActionLookAtNote: ActionSingleUseBase {

    void ActionLookAtNote() {
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
		action_data.m_Player.enterSNNoteMenu = true;
	}
}
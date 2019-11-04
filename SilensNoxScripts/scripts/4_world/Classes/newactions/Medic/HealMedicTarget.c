class ActionHealOtherSyringe: ActionContinuousBase
{
	void ActionHealOtherSyringe()
	{
		m_CallbackClass = ActionGiveSalineTargetCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_SALINEBLOODBAGTARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
	}
		
	override string GetText()
	{
		return "Injektion verabreichen (person)";
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		ntarget.AddHealth("GlobalHealth", "Health", 30);
		action_data.m_MainItem.Delete();
	}
};
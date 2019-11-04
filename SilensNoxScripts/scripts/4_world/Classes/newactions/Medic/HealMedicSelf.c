class ActionHealSelfSyringe: ActionContinuousBase	
{
	void ActionHealSelfSyringe()
	{
		m_CallbackClass = ActionGiveSalineSelfCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		DayZPlayerConstants.CMD_ACTIONFB_SALINEBLOODBAG;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "Injektion verabreichen (selbst)";
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
		action_data.m_Player.AddHealth("GlobalHealth", "Health", 30);
		action_data.m_MainItem.Delete();
	}
};
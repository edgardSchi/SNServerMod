class ActionRauchenCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(4.0);
	}
};


class ActionRauchen: ActionContinuousBase	
{
	void ActionRauchen()
	{
		m_CallbackClass = ActionRauchenCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_TAKETEMPSELF;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_TAKETEMPSELF;
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
		
	override bool HasProneException()
	{
		return true;
	}
	
	override string GetText()
	{
		return "Eine Smoken";
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		float energy = 0;
		if (action_data.m_MainItem.HasEnergyManager())
		{
			energy = action_data.m_MainItem.GetCompEM().GetEnergy();
			energy = energy - 20;
			action_data.m_MainItem.GetCompEM().SetEnergy(energy);
		}
		if ( action_data.m_MainItem && action_data.m_MainItem.GetQuantity() <= 0.01 )
		{
			action_data.m_MainItem.SetQuantity(0);
		}
	}
};
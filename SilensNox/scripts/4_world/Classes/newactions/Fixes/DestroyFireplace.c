class ActionDestroyFireplaceCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(10);
	}
};

class ActionDestroyFireplace: ActionContinuousBase
{	
	void ActionDestroyFireplace()
	{
		m_CallbackClass = ActionDestroyFireplaceCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DRINKWELL;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
	}

	override string GetText()
	{
		return "Asche Wegpusten";
	}
	
	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
	
		FireplaceBase fireplace_target = FireplaceBase.Cast( target.GetObject() );
		
		if ( fireplace_target ) // && !fireplace_target.IsBurning() 
		{
			return true;
		}
		
		return true;
	}

	override void OnStartClient(ActionData action_data)
	{
		action_data.m_Player.GetItemAccessor().HideItemInHands(true);
	}
	
	override void OnStartServer(ActionData action_data)
	{
		action_data.m_Player.GetItemAccessor().HideItemInHands(true);
	}

	override void OnEndClient(ActionData action_data)
	{
		action_data.m_Player.GetItemAccessor().HideItemInHands(false);
	}

	override void OnEndAnimationLoopServer( ActionData action_data )
	{
		if(action_data.m_Player.HasBloodyHands())
		{
			action_data.m_Player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
		}
	}
	override void OnEndServer( ActionData action_data )
	{
		OnFinishProgressServer(action_data);
		action_data.m_Player.GetItemAccessor().HideItemInHands(false);
		GetGame().ObjectDelete( action_data.m_Target.GetObject() );
	}
};
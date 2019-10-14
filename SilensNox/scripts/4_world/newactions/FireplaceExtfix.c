modded class ActionExtinguishFireplaceByLiquid: ActionContinuousBase
{
	void ActionExtinguishFireplaceByLiquid()
	{
		m_CallbackClass = ActionExtinguishFireplaceByLiquidCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_EMPTY_VESSEL;
		m_FullBody = true;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_MEDIUM;
	}
	
	override void CreateConditionComponents()  
	{
		
		m_ConditionItem = new CCINotRuinedAndEmpty;
		m_ConditionTarget = new CCTDummy;
	}
		
	override string GetText()
	{
		return "#extinguish";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object target_object = target.GetObject();
		if ( target_object.IsFireplace() )
		{
			FireplaceBase fireplace_target = FireplaceBase.Cast( target_object );
			
			if ( fireplace_target.CanExtinguishFire() && !item.IsDamageDestroyed() && (item.GetLiquidType() & GROUP_LIQUID_BLOOD) ) 
			{
				return true;
			}		
		}
		
		return false;
	}
	
	override void OnEndServer( ActionData action_data )
	{	
		Object target_object = action_data.m_Target.GetObject();
		FireplaceBase fireplace_target = FireplaceBase.Cast( target_object );

		//reset fire state
		fireplace_target.RefreshFireState();
	}	
}
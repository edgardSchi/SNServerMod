modded class ActionWringClothesCB : ActionContinuousBaseCB
{
	protected const float QUANTITY_WRINGLED_PER_SECOND = 0.02;
	private const float TIME_TO_REPEAT = 5.50;
	override void CreateActionComponent()
	{
		//m_ActionData.m_ActionComponent = new CAContinuousWringClothes(QUANTITY_WRINGLED_PER_SECOND, UATimeSpent.WASH_HANDS);
		m_ActionData.m_ActionComponent = new CAContinuousWringClothes(UATimeSpent.WASH_HANDS, TIME_TO_REPEAT);
	}
};

modded class ActionWringClothes: ActionContinuousBase
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (player.IsInWater()) 
		{
			return false;
		}
		else
		{
			return true;
		}
		
		//! wet+ items (so they will stay damp after wringing)
		if ( item && item.GetWet() >= 0.25 )
		{
			return true;	
		}
		else
		{	
			return true;		
		}
	}	
	
	
	override void OnExecuteServer( ActionData action_data )
	{
		Param1<float> nacdata = Param1<float>.Cast( action_data.m_ActionComponent.GetACData() );		
		float delta = nacdata.param1;
		action_data.m_MainItem.AddWet( -delta );
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		Param1<float> nacdata = Param1<float>.Cast( action_data.m_ActionComponent.GetACData() );		
		float delta = nacdata.param1;
		action_data.m_MainItem.AddWet( -delta );
		
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
	}	
};
modded class CAContinuousQuantityEdible : CAContinuousQuantityRepeat
{
	protected float 	m_InitItemQuantity;
	protected float 	m_SpentQuantityTotal;
	
	void CAContinuousQuantityEdible( float quantity_used_per_second, float time_to_repeat )
	{
		m_QuantityUsedPerSecond = quantity_used_per_second;
		m_DefaultTimeToRepeat = time_to_repeat;
		m_InitItemQuantity = -1;
		m_SpentQuantityTotal = 0;
	}
	
	override void Setup( ActionData action_data )
	{
		super.Setup( action_data );
		
		if (m_InitItemQuantity < 0)
		{
			m_InitItemQuantity = action_data.m_MainItem.GetQuantity();
		}
	}
	
	override void CalcAndSetQuantity( ActionData action_data )
	{	
		//Print("Munch!");
		if ( m_SpentUnits )
		{
			m_SpentUnits.param1 = m_SpentQuantity;
			SetACData(m_SpentUnits);
			
			m_SpentQuantityTotal += m_SpentQuantity;
		}
		//m_SpentQuantity = Math.Floor(m_SpentQuantity);

		ItemBase container;
		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		if ( ntarget )
		{
			if ( GetGame().IsServer() && GetGame().IsMultiplayer()) 
			{
				//action_data.m_MainItem.Consume(targetObject, m_SpentQuantity);
				ntarget.Consume(action_data.m_MainItem, m_SpentQuantity, EConsumeType.ITEM_CONTINUOUS);
				
				/*if(container.GetLiquidType() == LIQUID_VODKA || container.GetLiquidType() == LIQUID_BEER) {
					CallAlcoholManager(ntarget, true);
				}*/

				
			}
		}
		else
		{
			if ( GetGame().IsServer() || GetGame().IsClient()) 
			{
				//action_data.m_MainItem.Consume(action_data.m_Player, m_SpentQuantity);
				action_data.m_Player.Consume(action_data.m_MainItem, m_SpentQuantity, EConsumeType.ITEM_CONTINUOUS);
				
				if(container.GetLiquidType() == LIQUID_VODKA || container.GetLiquidType() == LIQUID_BEER) {
					CallAlcoholManager(action_data.m_Player, false);
				}
			}
		}

	}
	
	void CallAlcoholManager(PlayerBase target, bool rpc) {
		ItemBase container; // Niphoria edit - putt the effect in here

		float amount = 0;

		if(container.GetLiquidType() == LIQUID_VODKA) {
			amount = m_SpentQuantity * 4;
		} else if (container.GetLiquidType() == LIQUID_BEER) {
			amount = m_SpentQuantity * 2;
		}

		if(rpc) {
			CachedObjectsParams.PARAM1_FLOAT.param1 = amount;

			GetGame().RPCSingleParam(target, LOA_RPC.RPC_PLAYER_DRUNK, CachedObjectsParams.PARAM1_FLOAT, true, target.GetIdentity());
			return;
		}

		if(amount != 0 && !target.GetAlcoholManager()) {
			target.SpawnAlcoholManager(amount);
		} else if (amount != 0) {
			target.GetAlcoholManager().AddAlcohol(amount);
		}
	}
	
	override float GetProgress()
	{
		//return super.GetProgress();
		if (m_SpentQuantity > 0)
		{
			return Math.Clamp((1 - (m_InitItemQuantity - m_SpentQuantity - m_SpentQuantityTotal ) / m_InitItemQuantity), 0, 1);
		}
		else
		{
			return Math.Clamp((1 - (m_InitItemQuantity - m_SpentQuantityTotal ) / m_InitItemQuantity), 0, 1);
		}
	}
};

/*modded class ActionDrink
{
	void ActionDrink()
	{
		m_CallbackClass = ActionDrinkCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_DRINK;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_DRINK;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINotRuinedAndEmpty;
		m_ConditionTarget = new CCTSelf;
	}

	override bool IsDrink()
	{
		return true;
	}
	
	override bool HasTarget()
	{
		return false;
	}
	
	override string GetText()
	{
		return "#drink";
	}
	
	override void OnEndServer( ActionData action_data )
	{	
		if ( action_data.m_MainItem && action_data.m_MainItem.GetQuantity() <= 0.01 )
		{
			action_data.m_MainItem.SetQuantity(0);
		}
		
		EntityAI item = action_data.m_MainItem;
		PlayerBase player = action_data.m_Player;
		PluginTransmissionAgents plugin = PluginTransmissionAgents.Cast( GetPlugin(PluginTransmissionAgents) );
		plugin.TransmitAgents(player, item, AGT_UACTION_TO_ITEM);
		
		ItemBase container;
		if ( container.GetLiquidType() == LIQUID_VODKA)
		{
			//PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
			player.SpawnDrunkEffect();
		}
		if ( container.GetLiquidType() == LIQUID_BEER)
		{
			//PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
			//player.SpawnDrunkEffect();
			action_data.m_Player.AddHealth("GlobalHealth", "Health", -30);
		}


	}
};
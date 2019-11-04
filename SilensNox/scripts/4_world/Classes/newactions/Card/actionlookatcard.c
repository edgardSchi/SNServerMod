/*class ActionLookAtCardCB : HumanCommandActionCallback {

    protected ref ActionData			m_ActionData; //needs to be reffed for the destructor use
	bool 								m_MapFolding;
	bool 								m_HasReceivedEvent;
	bool 								m_CancelCondition;

    void ActionLookAtCardCB()
	{
		RegisterAnimationEvent("ActionExec", UA_ANIM_EVENT);
		EnableStateChangeCallback();
		EnableCancelCondition( true );
	}

    void ~ActionLookAtCardCB()
	{
		if (GetGame().IsClient() && !GetGame().GetUIManager().GetMenu())
		{
			GetGame().GetMission().PlayerControlEnable();
		}
		
		if (!m_ActionData || !m_ActionData.m_Player )
			return;
		
		ItemCard card = ItemCard.Cast(m_ActionData.m_Player.GetItemInHands());
		if (card && m_ActionData.m_Player.IsCardOpen())
		{
			card.SetCardStateOpen(false, m_ActionData.m_Player);
		}
	}

    void SetActionData(ActionData action_data )
	{
		m_ActionData = action_data;
	}
			
	bool CancelCondition( bool pEnable )
	{		
		return m_CancelCondition;
	}
	
	override void OnStateChange(int pOldState, int pCurrentState)
	{
		if (!m_ActionData || !m_ActionData.m_Player)
			return;
		
		if ( ( pOldState == STATE_LOOP_IN && pCurrentState == STATE_LOOP_LOOP ) && !m_HasReceivedEvent )
		{
			m_CancelCondition = true;
		}
		
		if ( ( pOldState == STATE_LOOP_IN && pCurrentState == STATE_LOOP_LOOP ) && m_HasReceivedEvent )
		{
			m_CancelCondition = false; 
		}
	}

    override void OnAnimationEvent(int pEventID)
	{
		if (!m_ActionData || !m_ActionData.m_Player)
			return;
		
		switch (pEventID)
		{
			case UA_ANIM_EVENT: 
				m_HasReceivedEvent = true;
				PerformCardChange();
			break;
		}
	}

    override void OnFinish(bool pCanceled)	
	{
		if ( m_ActionData && m_ActionData.m_Player )
		{
			//if ( pCanceled ) 
			//{
				if ( m_ActionData && m_ActionData.m_ActionComponent )
					m_ActionData.m_State = m_ActionData.m_ActionComponent.Interrupt(m_ActionData);
				if ( (!GetGame().IsMultiplayer() || GetGame().IsClient()) && GetGame().GetUIManager() && GetGame().GetUIManager().IsMenuOpen(MENU_CARD) )
				{
					GetGame().GetUIManager().FindMenu(MENU_CARD).Close();
                    GetGame().GetInput().ResetGameFocus();
                    PlayerBase.Cast(GetGame().GetPlayer()).RemoveCard();
				}
			//}
			
			ActionLookAtCard action = ActionLookAtCard.Cast(m_ActionData.m_Action);
			
			if(action)
				action.End(m_ActionData);
		}
	}

    void PerformCardChange()
	{
		if (m_ActionData.m_Player.IsSwimming() || m_ActionData.m_Player.IsClimbing() || m_ActionData.m_Player.IsFalling() || m_ActionData.m_Player.IsClimbingLadder() || m_ActionData.m_Player.IsUnconscious() || m_ActionData.m_Player.IsRestrained())
			return;
		
		if ( m_CancelCondition ) { return; };
		
		ItemCard card = ItemCard.Cast(m_ActionData.m_Player.GetItemInHands());
		if (card && !m_ActionData.m_Player.IsCardOpen() && !m_MapFolding)
		{
			card.SetCardStateOpen(true,m_ActionData.m_Player);
	
			if (!GetGame().IsMultiplayer() || GetGame().IsClient())
			{
				UIManager 	m_UIManager;
				m_UIManager = GetGame().GetUIManager();
				m_UIManager.CloseAll();
				m_UIManager.EnterScriptedMenu(MENU_CARD, NULL);
                GetGame().GetInput().ChangeGameFocus( 1 );
                //CardMenu.Cast(m_UIManager.FindMenu(MENU_CARD)).SetCard(card);
                PlayerBase.Cast(GetGame().GetPlayer()).SetCard(card);
			}
		}
		else if (card && m_ActionData.m_Player.IsCardOpen())
		{
			card.SetCardStateOpen(false,m_ActionData.m_Player);
			m_MapFolding = true;
		}
	}
}

class ActionLookAtCard: ActionBase
{
	void ActionLookAtCard()
	{
	}
	
	override bool IsInstant()
	{
		return false;
	}
	
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "Karte anschauen";
	}

	override bool HasTarget()
	{
		return false;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (player.m_lookAtCardActionCB || player.IsCardOpen())
		{
			return false;
		}

		return true;
	}
	
	override int GetActionCategory()
	{
		return AC_SINGLE_USE;
	}
	
	override void OnStartClient( ActionData action_data )
	{
		OpenCard( action_data );
	}
	
	override void OnStartServer( ActionData action_data )
	{
		OpenCard( action_data );       
	}
	
	override void OnEndRequest(ActionData action_data)
	{
		if ( action_data.m_Player.m_lookAtCardActionCB )
			action_data.m_Player.m_lookAtCardActionCB.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
		
		action_data.m_State = UA_FINISHED;
	}
	
	void OpenCard( ActionData action_data )
	{
		if (!action_data.m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
		{
			action_data.m_Player.m_lookAtCardActionCB = ActionLookAtCardCB.Cast(action_data.m_Player.AddCommandModifier_Action(DayZPlayerConstants.CMD_ACTIONMOD_VIEWMAP,ActionLookAtCardCB));
		}
		else
		{
			action_data.m_Player.m_lookAtCardActionCB = ActionLookAtCardCB.Cast(action_data.m_Player.StartCommand_Action(DayZPlayerConstants.CMD_ACTIONFB_VIEWMAP,ActionLookAtCardCB,GetStanceMask(action_data.m_Player)));
		}
		
		// sets player for associated callback to use
		if (action_data.m_Player.m_lookAtCardActionCB)
		{
			action_data.m_Player.m_lookAtCardActionCB.SetActionData(action_data);
		}
	}
};*/

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

	override void OnExecuteClient( ActionData action_data )
	{
		//display note
		action_data.m_Player.enterIDCardMenu = true;
	}
	
	override void OnExecuteServer( ActionData action_data )
	{
		SN_IDCard card = SN_IDCard.Cast(action_data.m_MainItem);
		//PaperParams params = new PaperParams(paper_item.m_AdvancedText);
		//WritePaperParams params = new WritePaperParams("", action_data.m_Player.m_penColor,action_data.m_Player.m_handwriting);
		card.RPCSingleParam(ERPCs.RPC_READ_NOTE, new WritePaperParams("", "",0), true);
	}
}
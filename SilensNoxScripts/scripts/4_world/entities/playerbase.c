modded class PlayerBase {
    
    //ActionLookAtCardCB m_lookAtCardActionCB;
    bool m_CardOpen;
    bool m_CardCloseRequestProcessed;
    bool enterIDCardMenu = false;

    ItemCard m_Card = null;

    /*override void CommandHandler(float pDt, int pCurrentCommandID, bool pCurrentCommandFinished) {
        super.CommandHandler(pDt, pCurrentCommandID, pCurrentCommandFinished);

        if ( (!GetGame().IsMultiplayer() || GetGame().IsClient()) && IsCardOpen() && !m_CardCloseRequestProcessed)
		{
			if ( m_lookAtCardActionCB && !GetGame().GetUIManager().IsMenuOpen(MENU_CARD) )
			{
				CloseCard();
				m_CardCloseRequestProcessed = true;
			}
		}
    } */

    void SetCard(ItemCard card) {
        m_Card = card;
    }

    ItemCard GetCard() {
        return m_Card;
    }

    void RemoveCard() {
        m_Card = null;
    }

    /*void CloseCard() {
        if (m_lookAtCardActionCB)
		{
			ScriptInputUserData ctx = new ScriptInputUserData;
			if ( ctx.CanStoreInputUserData() )
			{
				if ( GetGame().IsMultiplayer() && GetGame().IsClient() )
				{
					m_lookAtCardActionCB.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
					ctx.Write(INPUT_UDT_STANDARD_ACTION_END_REQUEST);
					ctx.Write(DayZPlayerConstants.CMD_ACTIONINT_END);
					ctx.Send();
				}
				else if ( !GetGame().IsMultiplayer() )
				{
					m_lookAtCardActionCB.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
				}
			}
		}
		
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			if ( !GetGame().GetUIManager().GetMenu() )
				GetGame().GetMission().PlayerControlEnable();
			if (GetGame().GetUIManager().IsMenuOpen(MENU_CARD)) {

                GetGame().GetUIManager().FindMenu(MENU_CARD).Close();
                GetGame().GetInput().ResetGameFocus();
            }

		}
    } */

    void SetCardOpen(bool state) {
        m_CardOpen = state;
        m_CardCloseRequestProcessed = !state;
    }

    bool IsCardOpen() {
        return m_CardOpen;
    }
}
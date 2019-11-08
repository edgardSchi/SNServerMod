modded class MissionGameplay {

    ref CardMenu m_CardMenu;

    private ref CardMenu GetCardMenu() {
		if ( !m_CardMenu ) {
            m_CardMenu.Init();
			m_CardMenu = new ref CardMenu;
		}

		return m_CardMenu;
	}

    override void OnUpdate(float timeslice) {
        super.OnUpdate(timeslice);

        UIScriptedMenu menu = m_UIManager.GetMenu();
        CardMenu card_menu = CardMenu.Cast(m_UIManager.FindMenu(MENU_CARD));
        Man player = GetGame().GetPlayer();
		PlayerBase playerPB = PlayerBase.Cast(player);
        if(playerPB.enterIDCardMenu) {
            playerPB.enterIDCardMenu = false;
            GetGame().GetUIManager().ShowScriptedMenu(GetCardMenu(), NULL);
        }
        
    }
}
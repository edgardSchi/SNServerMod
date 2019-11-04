modded class MissionGameplay {

    override void OnUpdate(float timeslice) {
        super.OnUpdate(timeslice);

        UIScriptedMenu menu = m_UIManager.GetMenu();
        CardMenu card_menu = CardMenu.Cast(m_UIManager.FindMenu(MENU_CARD));
        Man player = GetGame().GetPlayer();
		PlayerBase playerPB = PlayerBase.Cast(player);
        if(playerPB.enterIDCardMenu) {
            playerPB.enterIDCardMenu = false;
            card_menu = CardMenu.Cast(GetUIManager().EnterScriptedMenu(MENU_CARD, menu));
        }
        
    }
}
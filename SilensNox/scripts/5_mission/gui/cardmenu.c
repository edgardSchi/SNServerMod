//Menu for displaying the IDCard by Eddy
class CardMenu extends UIScriptedMenu {
    
    override Widget Init() {
        layoutRoot = GetGame().GetWorkspace().CreateWidgets("SilensNox/gui/card_menu.layout");

        PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
        SN_IDCard card = SN_IDCard.Cast(player.GetItemInHands());
        if(card) {
            SetCard(card);
        }
        return layoutRoot;
    }

    void SetCard(SN_IDCard card) {
        if (card)
		{
			CardMenu.UpdateItemInfo(layoutRoot, card);
		}
    }

    override void Update( float timeslice )
	{
		super.Update( timeslice );
		
		if( GetGame() && GetGame().GetInput() && GetGame().GetInput().LocalPress("UAUIBack", false) )
		{
			/*PlayerBase player = PlayerBase.Cast(g_Game.GetPlayer());
			if( player )
				player.CloseMap();*/
			Close();
            GetGame().GetInput().ResetGameFocus();
            PlayerBase.Cast(GetGame().GetPlayer()).RemoveCard();
		}
	}

    override bool OnClick(Widget w, int x, int y, int button)
	{
		super.OnClick(w, x, y, button);
		
		switch (w.GetUserID())
		{
			case IDC_CANCEL:
				Close();
                GetGame().GetInput().ResetGameFocus();
                PlayerBase.Cast(GetGame().GetPlayer()).RemoveCard();
				return true;
		}

		return false;
	}

    static void UpdateItemInfo(Widget root_widget, SN_IDCard card) {
        if (!root_widget || !card) return;
	
        WidgetTrySetText(root_widget, "PlayerNameWidget", card.GetPlayername(), 0);
    }

    static void WidgetTrySetText(Widget root_widget, string widget_name, string text, int color = 0)
	{
		TextWidget widget = TextWidget.Cast( root_widget.FindAnyWidget(widget_name) );
		RichTextWidget rt_widget = RichTextWidget.Cast( root_widget.FindAnyWidget(widget_name) );
		if (widget)
		{
			widget.SetText(text);
			Widget widget_background = root_widget.FindAnyWidget(widget_name+"Background");
			if (widget_background)
			{
				if (color != 0)
				{
					widget_background.Show( true );
					widget_background.SetColor(color | 0x7F000000);
				}
				else
				{
					widget_background.Show( false );
				}
			}
		}
		if( rt_widget )
		{
			rt_widget.Update();
		}
    }
}
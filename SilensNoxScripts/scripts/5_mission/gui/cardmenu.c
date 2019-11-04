class CardMenu extends UIScriptedMenu {
    
    override Widget Init() {
        layoutRoot = GetGame().GetWorkspace().CreateWidgets("SilensNox/gui/card_menu.layout");

        /*PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
        ItemCard card = ItemCard.Cast(player.GetCard());
        if(card) {
            SetCard(card);
        }*/ 
        return layoutRoot;
    }

    void SetCard(ItemCard card) {
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

    static void UpdateItemInfo(Widget root_widget, ItemCard card) {
        if (!root_widget || !card) return;
	
        WidgetTrySetText(root_widget, "PlayerNameWidget", card.GetPlayername());
        PrintMessageToPlayer("Trying to update widget text");
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

    static void PrintMessageToPlayer(string txt) {
		
	    PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());	
		
	    if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
	    {
		    player.MessageImportant( txt);
	    } else 
	    {
    	    GetGame().GetMission().OnEvent( ChatMessageEventTypeID, new ChatMessageEventParams( CCDirect, "", txt, "" ) );
	    }
		
	}
}
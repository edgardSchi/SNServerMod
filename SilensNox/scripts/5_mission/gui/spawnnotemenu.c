//Menu for displaying the spawn note by Eddy
class SpawnNoteMenu extends UIScriptedMenu {
    
    override Widget Init() {
        layoutRoot = GetGame().GetWorkspace().CreateWidgets("SilensNox/gui/spawn_note_menu.layout");

        return layoutRoot;
    }


    override void Update( float timeslice )
	{
		super.Update( timeslice );
		
		if( GetGame() && GetGame().GetInput() && GetGame().GetInput().LocalPress("UAUIBack", false) )
		{
			Close();
            GetGame().GetInput().ResetGameFocus();
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
				return true;
		}

		return false;
	}

}
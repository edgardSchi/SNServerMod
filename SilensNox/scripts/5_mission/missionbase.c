modded class MissionBase {

    override UIScriptedMenu CreateScriptedMenu(int id) {
        UIScriptedMenu menu = NULL;

		switch (id)
		{
		case MENU_MAIN:
#ifdef PLATFORM_CONSOLE			
			menu = new MainMenuConsole;
#else
			menu = new MainMenu;
#endif
			break;
		case MENU_INGAME:
#ifdef PLATFORM_CONSOLE
			menu = new InGameMenuXbox;
#else
			menu = new InGameMenu;
#endif
			break;
		case MENU_CHARACTER:
			menu = new CharacterCreationMenu;
			break;
		case MENU_OPTIONS:
			menu = new OptionsMenu;
			break;
//		case MENU_***: removed - can be recycled to something else
//			menu = new ***;
//			break;
		case MENU_STARTUP:
			menu = new StartupMenu;
			break;
		case MENU_LOADING:
			menu = new LoadingMenu;
			break;
		case MENU_INVENTORY:
			menu = new InventoryMenu;
			break;
		case MENU_INSPECT:
			menu = new InspectMenuNew;
			break;
		case MENU_EARLYACCESS:
			menu = new EarlyAccessMenu;
			break;
		case MENU_SCRIPTCONSOLE:
			menu = new ScriptConsole;
			break;
		case MENU_SCRIPTCONSOLE_DIALOG_PRESET_NAME:
			menu = new ScriptConsoleNewPresetDialog;
			break;
		case MENU_SCRIPTCONSOLE_DIALOG_PRESET_RENAME:
			menu = new ScriptConsoleRenamePresetDialog;
			break;
		case MENU_CHAT_INPUT:
			menu = new ChatInputMenu;
			break;
		case MENU_CONTROLS_PRESET:
			menu = new PresetsMenu;
			break;
		case MENU_NOTE:
			menu = new NoteMenu;
			break;
		case MENU_MAP:
			menu = new MapMenu;
			break;
		case MENU_BOOK:
			menu = new BookMenu;
			break;
		case MENU_SCENE_EDITOR:
			menu = new SceneEditorMenu;
			break;
		case MENU_HELP_SCREEN:
			menu = new HelpScreen;
			break;
		case MENU_GESTURES:
			menu = new GesturesMenu;
			break;	
		case MENU_LOGOUT:
			menu = new LogoutMenu;
			break;
		case MENU_TITLE_SCREEN:
			menu = new TitleScreenMenu;
			break;
		case MENU_XBOX_CONTROLS:
			menu = new ControlsXbox;
			break;
		case MENU_RADIAL_QUICKBAR:
			menu = new RadialQuickbarMenu;
			break;			
		case MENU_SERVER_BROWSER:
			menu = new ServerBrowserMenuNew;
			break;
		case MENU_LOGIN_QUEUE:
			menu = new LoginQueueBase;
			break;
		case MENU_LOGIN_TIME:
			menu = new LoginTimeBase;
			break;
		case MENU_CAMERA_TOOLS:
			menu = new CameraToolsMenu;
			break;
		case MENU_VIDEO:
			menu = new MainMenuVideo;
			break;
		case MENU_KEYBINDINGS:
			menu = new KeybindingsMenu;
			break;
		case MENU_TUTORIAL:
			menu = new TutorialsMenu;
			break;
		case MENU_CREDITS:
			menu = new CreditsMenu;
			break;
		case MENU_INVITE_TIMER:
			menu = new InviteMenu;
			break;
        case MENU_CARD:
            menu = new CardMenu;
            break;
		}

		if (menu)
		{
			menu.SetID(id);
		}
		
		if ( id == MENU_CHAT_INPUT )
		{
			menu = new ExpansionChatInputMenu;
		}

		if (menu)
		{
			menu.SetID(id);
		}

		return menu;
    }
}
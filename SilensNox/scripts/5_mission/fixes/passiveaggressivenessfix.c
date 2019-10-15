const string SN_IP = "176.57.168.220";
const int PORT = 2602;

modded class MainMenu
{
	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets( "SilensNox/gui/main_menu.layout" );
		
		m_Play						= layoutRoot.FindAnyWidget( "play" );
		m_ChooseServer				= layoutRoot.FindAnyWidget( "choose_server" );
		m_CustomizeCharacter		= layoutRoot.FindAnyWidget( "customize_character" );
		m_PlayVideo					= layoutRoot.FindAnyWidget( "play_video" );
		m_Tutorials					= layoutRoot.FindAnyWidget( "tutorials" );
		m_TutorialButton			= layoutRoot.FindAnyWidget( "tutorial_button" );
		m_MessageButton				= layoutRoot.FindAnyWidget( "message_button" );
		m_SettingsButton			= layoutRoot.FindAnyWidget( "settings_button" );
		m_Exit						= layoutRoot.FindAnyWidget( "exit_button" );
		//m_NewsFeedClose				= layoutRoot.FindAnyWidget( "news_feed_close" );
		m_PrevCharacter				= layoutRoot.FindAnyWidget( "prev_character" );
		m_NextCharacter				= layoutRoot.FindAnyWidget( "next_character" );

		m_Version					= TextWidget.Cast( layoutRoot.FindAnyWidget( "version" ) );
		m_ModdedWarning				= TextWidget.Cast( layoutRoot.FindAnyWidget( "ModdedWarning" ) );
		m_CharacterRotationFrame	= layoutRoot.FindAnyWidget( "character_rotation_frame" );
		
		m_LastPlayedTooltip			= layoutRoot.FindAnyWidget( "last_server_info" );
		m_LastPlayedTooltip.Show(false);
		m_LastPlayedTooltipLabel	= m_LastPlayedTooltip.FindAnyWidget( "last_server_info_label" );
		m_LastPlayedTooltipIP		= TextWidget.Cast( m_LastPlayedTooltip.FindAnyWidget( "last_server_info_ip" ) );
		m_LastPlayedTooltipPort		= TextWidget.Cast( m_LastPlayedTooltip.FindAnyWidget( "last_server_info_port" ) );
		
		m_LastPlayedTooltipTimer	= new WidgetFadeTimer();
		
		m_Newsfeed					= new MainMenuNewsfeed( layoutRoot.FindAnyWidget( "news_feed_root" ) );
		m_Stats						= new MainMenuStats( layoutRoot.FindAnyWidget( "character_stats_root" ) );
		
		m_Mission					= MissionMainMenu.Cast( GetGame().GetMission() );
		
		m_LastFocusedButton = 		m_Play;

		m_ScenePC					= m_Mission.GetIntroScenePC();
		
		if( m_ScenePC )
		{
			m_ScenePC.ResetIntroCamera();
		}
		
		m_PlayVideo.Show( false );
		
		m_PlayerName				= TextWidget.Cast( layoutRoot.FindAnyWidget("character_name_text") );
		
		// Set Version
		string version;
		GetGame().GetVersion( version );
		m_Version.SetText( "#main_menu_version" + " " + version );
		
		GetGame().GetUIManager().ScreenFadeOut(0);

		SetFocus( null );
		
		Refresh();
		
		LoadMods();
		
		GetDayZGame().GetBacklit().MainMenu_OnShow();
	
		g_Game.SetLoadState( DayZLoadState.MAIN_MENU_CONTROLLER_SELECT );
		
		return layoutRoot;
	}
	
	
	
	void ConnectToSN() {
      g_Game.ConnectFromServerBrowser( SN_IP, PORT, "" );
    }

    override void Play()
    {
        if (m_ScenePC && m_ScenePC.GetIntroCharacter())
        {
            //saves new, unplayed demounit for further use
            if (CanSaveCharacterSetup())
            {
                m_ScenePC.GetIntroCharacter().SaveCharacterSetup();
            }
        }

        GetGame().GetCallQueue(CALL_CATEGORY_GUI).CallByName(this, "ConnectToSN");
    }

    override bool OnMouseEnter( Widget w, int x, int y )
	{
		if( w == m_Play )
		{
			string ip = "";
			int port = 0;
			 
			if(m_ScenePC && !m_ScenePC.GetIntroCharacter().IsDefaultCharacter())
			{
				int charID = m_ScenePC.GetIntroCharacter().GetCharacterID();
				m_ScenePC.GetIntroCharacter().GetLastPlayedServer(charID, ip, port);
				
				m_LastPlayedTooltipIP.SetText( "Auf den SN" );
				m_LastPlayedTooltipPort.SetText( "Server verbinden" );
				
				m_LastPlayedTooltipTimer.FadeIn( m_LastPlayedTooltip, 0.3, true );
			}
		}
		
		if( IsFocusable( w ) )
		{
			ColorHighlight( w );
			return true;
		}
		return false;
	}

	override void LoadMods()
	{
		ref array<ref ModInfo> modArray = new array<ref ModInfo>;
		
		GetGame().GetModInfos( modArray );
		modArray.Remove( modArray.Count() - 1 );
		modArray.Invert();
		
		if( m_ModsSimple )
			delete m_ModsSimple;
		if( m_ModsDetailed )
			delete m_ModsDetailed;
		
		if( modArray.Count() > 0 )
		{
			m_ModdedWarning.Show( false );
			m_ModsTooltip = new ModsMenuTooltip(layoutRoot);
			m_ModsDetailed = new ModsMenuDetailed(modArray, layoutRoot.FindAnyWidget("ModsDetailed"), m_ModsTooltip, this);
			
			m_ModsSimple = new ModsMenuSimple(modArray, layoutRoot.FindAnyWidget("ModsSimple"), m_ModsDetailed);
		}
	}
}
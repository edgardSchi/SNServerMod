modded class MissionGameplay extends MissionBase
{
	ref ExpansionChatInputMenu chat;
	
	//! Chat widgets
	ImageWidget m_ChatChannel;
	TextWidget m_ChatChannelName;
	float m_ShowAlpha;
	float m_ShowDelay;
	bool m_AnimateShowChannel;

	//! Number of channels
	static const int	m_NumberOfChannels = 0;

	// ------------------------------------------------------------
	void MissionGameplay()
    {
		g_ChatBase = null;
        GetExpansionChatBase();
    }
	
	// ------------------------------------------------------------
	// AnimateShowChannel
	// ------------------------------------------------------------
	void AnimateShowChannel()
	{
		m_ChatChannel.Show(true);
		m_ChatChannelName.Show(true);
		
		if (m_ShowAlpha < 0.75)
			m_ShowAlpha += 0.01;
		else 
		{
			if (m_ShowDelay < 100)
				m_ShowDelay += 1;
			else
			{
				m_HideAlpha = 0.75;
				m_AnimateHideChannel = true;
				m_AnimateShowChannel = false;
			}
		}
		
		m_ChatChannel.SetAlpha(m_ShowAlpha);
		m_ChatChannelName.SetAlpha(m_ShowAlpha * 1.6);
	}
	
	float m_HideAlpha;
	float m_HideDelay;
	bool m_AnimateHideChannel;
	
	// ------------------------------------------------------------
	// AnimateHideChannel
	// ------------------------------------------------------------
	void AnimateHideChannel()
	{
		m_ShowDelay = 0;
		
		if (m_HideAlpha > 0.01)
			m_HideAlpha -= 0.01;
		else 
		{
			m_AnimateHideChannel = false;
			
			m_ChatChannel.Show(false);
			m_ChatChannelName.Show(false);
		}
		
		m_ChatChannel.SetAlpha(m_HideAlpha);
		m_ChatChannelName.SetAlpha(m_HideAlpha * 1.75);
	}
	
	static int Channel = 0;
	
	// ------------------------------------------------------------
	// GetChatChannel
	// ------------------------------------------------------------
	int GetChatChannel()
	{
		if (Channel == 0)
			return CCDirect;

		return 0;
	}
	
	// ------------------------------------------------------------
	// SwitchChannel
	// ------------------------------------------------------------
	void SwitchChannel()
	{
		Channel++;
		if (Channel > m_NumberOfChannels)
			Channel = 0;
		
		UpdateChannelText( m_ChatChannelName );
	}
	
	// ------------------------------------------------------------
	// UpdateChannelText
	// ------------------------------------------------------------
	static void UpdateChannelText(TextWidget channelText)
	{
		if ( channelText )
		{
			switch (Channel)
			{
				case 0:
				{
					channelText.SetText("Direct communication");
					channelText.SetColor(EXP_DIRECT_TEXT_COLOUR);
				}
				break;
				
				/*case 1:
				{
					channelText.SetText("Side channel");
					channelText.SetColor(EXP_GLOBAL_TEXT_COLOUR);
				}
				break;*/
			}
		}
	}
	
	override void OnInit()
	{
		// Vanilla
        super.OnInit();
		
		if ( m_HudRootWidget )
		{
			m_HudRootWidget.Unlink();
		}

		if ( !m_HudRootWidget )
		{
			m_HudRootWidget	= GetGame().GetWorkspace().CreateWidgets("DayZExpansionChat/scripts/gui/day_z_expansion_hud.layout");

			m_HudRootWidget.Show(false);
			
			m_Chat.Init(m_HudRootWidget.FindAnyWidget("ChatFrameWidget"));

			m_ActionMenu.Init( m_HudRootWidget.FindAnyWidget("ActionsPanel"), TextWidget.Cast( m_HudRootWidget.FindAnyWidget("DefaultActionWidget") ) );

			m_Hud.Init( m_HudRootWidget.FindAnyWidget("HudPanel") );

			m_MicrophoneIcon		= ImageWidget.Cast( m_HudRootWidget.FindAnyWidget("mic") );
			m_MicrophoneIcon.Show(false);

			m_ChatChannel			= Widget.Cast( m_HudRootWidget.FindAnyWidget("ChatChannelPanel") );
			m_ChatChannelName		= TextWidget.Cast( m_HudRootWidget.FindAnyWidget("ChatChannelName") );

			m_ChatChannel.SetAlpha(0);
			m_ChatChannelName.SetAlpha(0);

			m_ChatChannel.Show(false);
			m_ChatChannelName.Show(false);

			if (m_ChatChannelName)
				UpdateChannelText(m_ChatChannelName);
		}
	}
	
	float TimerSlice;
	bool m_ChatIsOpen;
	
	// ------------------------------------------------------------
	// Override ShowChat
	// ------------------------------------------------------------
	override void ShowChat()
	{
		m_ChatChannelHideTimer.Stop();
		m_ChatChannelFadeTimer.Stop();
		m_UIManager.EnterScriptedMenu(MENU_CHAT_INPUT, NULL);

		PlayerControlDisable(INPUT_EXCLUDE_ALL);
	}
	
	// ------------------------------------------------------------
	// Override OnUpdate
	// ------------------------------------------------------------
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);
		
		Man ex_player = GetGame().GetPlayer();
		Input ex_input = GetGame().GetInput();
		UIScriptedMenu ex_menu = m_UIManager.GetMenu();

		if (ex_player && ex_player.GetPlayerState() == EPlayerStates.ALIVE && !ex_player.IsUnconscious() )
		{
			if (ex_input.LocalHold("UAChat", false))
			{
				chat = ExpansionChatInputMenu.Cast( m_UIManager.FindMenu(MENU_CHAT) );		
				if( ex_menu == NULL )
				{
					ShowChat();
				}
			}
		}
		
		// FPS Fix
		TimerSlice += timeslice;
		if (!m_ChatIsOpen && TimerSlice >= 0.01)
		{
			if (m_AnimateShowChannel)
			{
				AnimateShowChannel();
			}
			else if (m_AnimateHideChannel)
			{
				AnimateHideChannel();
			}
			TimerSlice = 0;	
		}
	}
	
	override void OnKeyPress(int key)
	{
		super.OnKeyPress(key);

		switch(key)
		{
			case KeyCode.KC_Z:
			{
				if ( !GetGame().GetUIManager().IsMenuOpen( MENU_CHAT_INPUT ) )
				{
					m_ShowAlpha = 0;
					m_AnimateShowChannel = true;
					
					SwitchChannel();	
				}
			}
			break;
		}
	}
}
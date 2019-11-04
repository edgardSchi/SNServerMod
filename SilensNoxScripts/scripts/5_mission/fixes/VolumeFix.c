// Made by Eddy - Thank you Eddy-sama
modded class MissionGameplay {

	override void UpdateVoiceLevelWidgets(int level)
	{
		for( int n = 0; n < m_VoiceLevelsWidgets.Count(); n++ )
		{
			int voiceKey = m_VoiceLevelsWidgets.GetKey(n);
			ImageWidget voiceWidget = m_VoiceLevelsWidgets.Get(n);
			
			// stop fade timer since it will be refreshed
			ref WidgetFadeTimer timer = m_VoiceLevelTimers.Get(n);		
			timer.Stop();
		
			// show widgets according to the level
			if( voiceKey <= level )
			{
				voiceWidget.SetAlpha(1.0); // reset from possible previous fade out 
				voiceWidget.Show(true);				
				
				if( !m_VoNActive && !GetUIManager().FindMenu(MENU_CHAT_INPUT) ) 	
					timer.FadeOut(voiceWidget, 3.0);	
			}
			else
				voiceWidget.Show(false);
		}
		
         switch(level) {
			case 0: 
				PrintMessageToPlayer("Leise");
			break;
					
			case 1:
				PrintMessageToPlayer("Normal");
			break;
					
			case 2:
				PrintMessageToPlayer("Laut");
			break;
					
			default:
				Print("Voice level not found!");
			break;
				}
		
		// fade out microphone icon when switching levels without von on
		if( !m_VoNActive )
		{
		  	if( !GetUIManager().FindMenu(MENU_CHAT_INPUT) )
			{
				m_MicrophoneIcon.SetAlpha(1.0); 
				m_MicrophoneIcon.Show(true);
				
				m_MicFadeTimer.FadeOut(m_MicrophoneIcon, 3.0);
			}
		}
		else
		{
			// stop mic icon fade timer when von is activated
			m_MicFadeTimer.Stop();
		}
	}
	
	
	void PrintMessageToPlayer(string txt) {
		
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
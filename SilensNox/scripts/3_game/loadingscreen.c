// Script by https://steamcommunity.com/sharedfiles/filedetails/?id=1848020079&searchtext= ( SimpleCustomLoadingScreen)   - modified by Niphoria
modded class LoadingScreen 
{
	
	void LoadingScreen(DayZGame game) 
	{
		Class.CastTo(m_ImageLogoMid, m_WidgetRoot.FindAnyWidget("ImageLogoMid"));
		Class.CastTo(m_ImageLogoCorner, m_WidgetRoot.FindAnyWidget("ImageLogoCorner"));
		m_ImageLogoMid.Show(false);
		m_ImageLogoCorner.Show(false);		
		m_ImageBackground.LoadImageFile(0, "SilensNox/icons/ServerImage.paa");
		m_ImageBackground.LoadMaskTexture("");
		ProgressAsync.SetUserData(m_ImageBackground);
		m_ModdedWarning.Show(false);
	}

	override void Show()
	{
		Widget lIcon = m_ImageBackground;
		Widget pText = m_ProgressLoading;
		m_ProgressText.SetText("");
		m_ProgressLoading.SetCurrent( 0.0 );
		m_ImageBackground.SetMaskProgress( 0.0 );
		
		if ( !m_WidgetRoot.IsVisible() )
		{
			if ( m_DayZGame.GetUIManager().IsDialogVisible() )
			{
				m_DayZGame.GetUIManager().HideDialog();
			}
			
			if ( m_DayZGame.GetMissionState() == DayZGame.MISSION_STATE_MAINMENU )
			{
				m_ImageWidgetBackground.Show( true );		
				m_TextWidgetStatus.Show(true);
			}
			else
			{
				m_ImageWidgetBackground.Show( true );
				m_TextWidgetStatus.Show(false);
			}
			
			m_WidgetRoot.Show( true );
			m_TextWidgetTitle.SetText( "" );
			m_TextWidgetStatus.SetText( "" );
		}
		
		ProgressAsync.SetProgressData(pText);
		ProgressAsync.SetUserData(lIcon);
	}
}

modded class LoginQueueBase {
	
	override Widget Init() {
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadMaskTexture("");
		imageWidgetBackground.LoadImageFile(0, "SilensNox/icons/ServerImage.paa");
		return w;
	}
}

modded class LoginTimeBase {
	
	override Widget Init() {
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadMaskTexture("");
		imageWidgetBackground.LoadImageFile(0, "SilensNox/icons/ServerImage.paa");
		return w;
	}	
}
modded class DayZGame // Removes the mod warning ingame
{
	static bool		m_IsModded;
	void DayZGame()
	{	
		m_Backlit = new Backlit();
		m_Backlit.OnInit(this);
		
		array<ref ModInfo> mods = new array<ref ModInfo>;
		GetModInfos( mods );
		m_IsModded = (mods.Count() > 100000);
	}
}
modded class PlantBase
{
	void Init( GardenBase garden_base, float fertility, float harvesting_efficiency, float water )
	{
		m_GardenBase = garden_base;
		
		float divided = (float) (43200) / fertility;
		m_FullMaturityTime = divided;
		
		divided = (float)(43200) * fertility;
		m_SpoilAfterFullMaturityTime = divided;

		divided = (float)((float)m_FullMaturityTime / ((float)m_GrowthStagesCount - 2.0));
		m_StateChangeTime = divided;

		float count = m_CropsCount * fertility * harvesting_efficiency;
		m_CropsCount = (int)Math.Ceil( count );

		m_PlantMaterialMultiplier = 0.1 * harvesting_efficiency;
		
		float rain_intensity = GetGame().GetWeather().GetRain().GetActual();
		if ( rain_intensity > 0.0 )
		{
			CheckWater();
		}
		else
		{
			CheckWater();
			
			if ( NeedsWater() )
			{
				SetPlantState(STATE_DRY);
				
				if (GetGame().IsServer())
				{
					m_DeleteDryPlantTimer = new Timer( CALL_CATEGORY_SYSTEM );
					m_DeleteDryPlantTimer.Run( m_DeleteDryPlantTime, this, "DeleteDryPlantTick", NULL, false );
				}
			}
		}
	}
}
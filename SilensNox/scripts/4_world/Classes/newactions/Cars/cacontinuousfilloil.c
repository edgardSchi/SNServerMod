modded class CAContinuousFillOil: ActionContinuousBase {

    override void CalcAndSetQuantity( ActionData action_data )
	{

		m_SpentQuantity_total += m_SpentQuantity;
	
		if ( m_SpentUnits )
		{
			m_SpentUnits.param1 = m_SpentQuantity;
			SetACData(m_SpentUnits);
		}
		
		
		if ( GetGame().IsServer() || GetGame().IsMultiplayer())
		{
			if ( action_data.m_MainItem ) // Item EngineOil gets deleted after full consumption
				action_data.m_MainItem.AddQuantity( -m_SpentQuantity );
			
			Car car = Car.Cast(action_data.m_Target.GetObject());	
			car.Fill( CarFluid.OIL, (m_SpentQuantity * 0.001) );

            float currentHealth = car.GetHealth("Engine", "Health");
            car.SetHealth("Engine", "Health", m_SpentQuantity + car.GetHealth("Engine", "Health"));		//Repair Engine
			car.SetHealth("FuelTank", "Health", m_SpentQuantity + car.GetHealth("FuelTank", "Health"));	//Repair Tank
			

			car.SetSynchDirty();
		}
		
		m_SpentQuantity = 0;
	}

}
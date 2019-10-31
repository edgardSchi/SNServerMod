modded class CarScript
{
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		if ( GetGame().IsServer() )
		{
			//int slot_id = InventorySlots.GetSlotIdFromString(slot_name);
			if ( IsScriptedLightsOn() )
			{
				if ( slot_name == "CarBattery" || slot_name == "TruckBattery" )
				{
					ToggleHeadlights();
				}
			}

			if ( EngineIsOn() )
			{
				//EngineBelt
				if ( slot_name == "GlowPlug" || slot_name == "SparkPlug" || slot_name == "CarBattery" || slot_name == "TruckBattery" || slot_name == "SNWolgaK_1" || slot_name == "SNWolgaK_2" || slot_name == "SNWolgaK_3" || slot_name == "SNWolgaK_4" || slot_name == "SNWolgaK_5" || slot_name == "SNWolgaK_6" || slot_name == "SNWolgaK_7" || slot_name == "SNWolgaK_8" || slot_name == "SNWolgaK_9" || slot_name == "SNWolgaK_10" )
					EngineStop();
			}
			
			if ( slot_name == "CarBattery" )
				m_BatteryHealth = -1;
					
			if ( slot_name == "TruckBattery" )
				m_BatteryHealth = -1;

			if ( slot_name == "SparkPlug" )
				m_PlugHealth = -1;
			
			if ( slot_name == "GlowPlug" )
				m_PlugHealth = -1;

			if ( slot_name == "CarRadiator" )
			{
				LeakAll( CarFluid.COOLANT );
				SetHealth( "Radiator", "Health", 0);
			}

			Synchronize();
		}
		
		UpdateHeadlightState();
		UpdateLights();
	}
	
	
	
	
	override void EOnPostSimulate(IEntity other, float timeSlice)
	{

		//First of all check if the car should stop the engine
		if ( GetGame().IsServer() && EngineIsOn() )
		{
			if ( GetFluidFraction(CarFluid.FUEL) <= 0 || m_EngineHealth <= 0 )
				EngineStop();

			CheckVitalItem( IsVitalCarBattery(), "CarBattery" );
			CheckVitalItem( IsVitalTruckBattery(), "TruckBattery" );
			CheckVitalItem( IsVitalSparkPlug(), "SparkPlug" );
			CheckVitalItem( IsVitalGlowPlug(), "GlowPlug" );
			// Wolga
			CheckVitalItem( IsVitalKeyWolga1(), "SNWolgaK_1" );
			CheckVitalItem( IsVitalKeyWolga2(), "SNWolgaK_2" );
			CheckVitalItem( IsVitalKeyWolga3(), "SNWolgaK_3" );
			CheckVitalItem( IsVitalKeyWolga4(), "SNWolgaK_4" );
			CheckVitalItem( IsVitalKeyWolga5(), "SNWolgaK_5" );
			CheckVitalItem( IsVitalKeyWolga6(), "SNWolgaK_6" );
			CheckVitalItem( IsVitalKeyWolga7(), "SNWolgaK_7" );
			CheckVitalItem( IsVitalKeyWolga8(), "SNWolgaK_8" );
			CheckVitalItem( IsVitalKeyWolga9(), "SNWolgaK_9" );
			CheckVitalItem( IsVitalKeyWolga10(), "SNWolgaK_10" );
			// Niva
			CheckVitalItem( IsVitalKeyKeyNiva1(), "SNNivaK_1" );
			CheckVitalItem( IsVitalKeyKeyNiva2(), "SNNivaK_2" );
			CheckVitalItem( IsVitalKeyKeyNiva3(), "SNNivaK_3" );
			CheckVitalItem( IsVitalKeyKeyNiva4(), "SNNivaK_4" );
			CheckVitalItem( IsVitalKeyKeyNiva5(), "SNNivaK_5" );
			CheckVitalItem( IsVitalKeyKeyNiva6(), "SNNivaK_6" );
			CheckVitalItem( IsVitalKeyKeyNiva7(), "SNNivaK_7" );
			CheckVitalItem( IsVitalKeyKeyNiva8(), "SNNivaK_8" );
			CheckVitalItem( IsVitalKeyKeyNiva9(), "SNNivaK_9" );
			CheckVitalItem( IsVitalKeyKeyNiva10(), "SNNivaK_10" );
			// Skoda 120
			CheckVitalItem( IsVitalKeySkoda1(), "SNSkoda120K_1" );
			CheckVitalItem( IsVitalKeySkoda2(), "SNSkoda120K_2" );
			CheckVitalItem( IsVitalKeySkoda3(), "SNSkoda120K_3" );
			CheckVitalItem( IsVitalKeySkoda4(), "SNSkoda120K_4" );
			CheckVitalItem( IsVitalKeySkoda5(), "SNSkoda120K_5" );
			CheckVitalItem( IsVitalKeySkoda6(), "SNSkoda120K_6" );
			CheckVitalItem( IsVitalKeySkoda7(), "SNSkoda120K_7" );
			CheckVitalItem( IsVitalKeySkoda8(), "SNSkoda120K_8" );
			CheckVitalItem( IsVitalKeySkoda9(), "SNSkoda120K_9" );
			CheckVitalItem( IsVitalKeySkoda10(), "SNSkoda120K_10" );
			
			// Golf 2
			
			// engine belt is not needed right now
			//CheckVitalItem( IsVitalEngineBelt(), "EngineBelt" );
		}
	}
	bool IsVitalKeySkoda1()
	{
		return false;
	}
	
	bool IsVitalKeySkoda2()
	{
		return false;
	}
	
	bool IsVitalKeySkoda3()
	{
		return false;
	}
	
	bool IsVitalKeySkoda4()
	{
		return false;
	}
	
	bool IsVitalKeySkoda5()
	{
		return false;
	}
	
	bool IsVitalKeySkoda6()
	{
		return false;
	}
	
	bool IsVitalKeySkoda7()
	{
		return false;
	}
	
	bool IsVitalKeySkoda8()
	{
		return false;
	}
	
	bool IsVitalKeySkoda9()
	{
		return false;
	}
	
	bool IsVitalKeySkoda10()
	{
		return false;
	}
	
	bool IsVitalKeyWolga1()
	{
		return false;
	}
	
	bool IsVitalKeyWolga2()
	{
		return false;
	}
	
	bool IsVitalKeyWolga3()
	{
		return false;
	}
	
	bool IsVitalKeyWolga4()
	{
		return false;
	}
	
	bool IsVitalKeyWolga5()
	{
		return false;
	}
	
	bool IsVitalKeyWolga6()
	{
		return false;
	}
	
	bool IsVitalKeyWolga7()
	{
		return false;
	}
	
	bool IsVitalKeyWolga8()
	{
		return false;
	}
	
	bool IsVitalKeyWolga9()
	{
		return false;
	}
	
	bool IsVitalKeyWolga10()
	{
		return false;
	}
	
	bool IsVitalKeyKeyNiva1()
	{
		return false;
	}
	
	bool IsVitalKeyKeyNiva2()
	{
		return false;
	}
	
	bool IsVitalKeyKeyNiva3()
	{
		return false;
	}
	
	bool IsVitalKeyKeyNiva4()
	{
		return false;
	}
	
	bool IsVitalKeyKeyNiva5()
	{
		return false;
	}
	
	bool IsVitalKeyKeyNiva6()
	{
		return false;
	}
	
	bool IsVitalKeyKeyNiva7()
	{
		return false;
	}
	
	bool IsVitalKeyKeyNiva8()
	{
		return false;
	}
	
	bool IsVitalKeyKeyNiva9()
	{
		return false;
	}
	
	bool IsVitalKeyKeyNiva10()
	{
		return false;
	}
	
	
}
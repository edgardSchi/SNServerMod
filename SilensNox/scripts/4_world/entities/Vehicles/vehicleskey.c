// This is modded by Niphoria and Eddy
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
				if ( slot_name == "GlowPlug" || slot_name == "SparkPlug" || slot_name == "CarBattery" || slot_name == "TruckBattery")
					EngineStop();
			}

			//check if key was removed
			if(GetKeySlot() != "") {
				if(slot_name == GetKey()) {
					EngineStop();
				}
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

	string GetKey() {
        return "";
    }

	string GetKeySlot() {
		return "";
	}

	override void EOnPostSimulate(IEntity other, float timeSlice) {
        super.EOnPostSimulate(other, timeSlice);

        if ( GetGame().IsServer() && EngineIsOn() )
			{
				if ( GetFluidFraction(CarFluid.FUEL) <= 0 || m_EngineHealth <= 0 )
					EngineStop();

                if(GetKey() != "") {
                    CheckVitalItem( true, GetKey() );
                }
				
			}
    }

    override bool CanReleaseAttachment( EntityAI attachment ) {
        if(attachment.GetType() == GetKey()) {
            return true;
        }

        super.CanReleaseAttachment(attachment);

        return true;
    }

}
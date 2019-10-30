modded class GasMask {

    override void EEItemAttached(EntityAI item, string slot_name) {
		super.EEItemAttached(item, slot_name);
		
        if(GetCompEM().CanWork() && GetCompEM().CanSwitchOn()) {
            GetCompEM().SwitchOn();
        } 

        //GetCompEM().SwitchOn();
	}

}

modded class GP5GasMask {

    override void EEItemAttached(EntityAI item, string slot_name) {
		super.EEItemAttached(item, slot_name);
		
        if(GetCompEM().CanWork() && GetCompEM().CanSwitchOn()) {
            GetCompEM().SwitchOn();
        } 
    }

}
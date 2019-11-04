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

class PMK_5A_Gas_Mask extends GP5GasMask
{

    override void EEItemAttached(EntityAI item, string slot_name) {
		super.EEItemAttached(item, slot_name);
		
        if(GetCompEM().CanWork() && GetCompEM().CanSwitchOn()) {
            GetCompEM().SwitchOn();
        } 
    }

}

class stalker_gasmask_white_mung extends GP5GasMask 
{

    override void EEItemAttached(EntityAI item, string slot_name) {
		super.EEItemAttached(item, slot_name);
		
        if(GetCompEM().CanWork() && GetCompEM().CanSwitchOn()) {
            GetCompEM().SwitchOn();
        } 
    }

}

class stalker_gasmask_black_mung extends GP5GasMask 
{

    override void EEItemAttached(EntityAI item, string slot_name) {
		super.EEItemAttached(item, slot_name);
		
        if(GetCompEM().CanWork() && GetCompEM().CanSwitchOn()) {
            GetCompEM().SwitchOn();
        } 
    }

}

class mag3_gasmask_mung extends GP5GasMask 
{

    override void EEItemAttached(EntityAI item, string slot_name) {
		super.EEItemAttached(item, slot_name);
		
        if(GetCompEM().CanWork() && GetCompEM().CanSwitchOn()) {
            GetCompEM().SwitchOn();
        } 
    }

}
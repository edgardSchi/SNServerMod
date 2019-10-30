modded class BiohazzardMdfr {

    private float maskProtection = 50;

    override protected void OnTick(PlayerBase player, float deltaT)
	{
		int count = player.GetSingleAgentCount(MedicalAttentionAgents.UNKNOWN_TOXINE);
		int countMax = PluginTransmissionAgents.GetAgentMaxCount(MedicalAttentionAgents.UNKNOWN_TOXINE);



		float protection = (float)player.m_SuitProtectionLevel / 100;

        if(PlayerIsWearingGasMask(player)) {

            if(!GasMaskHasFilter(player)) {
                protection = protection - maskProtection / 100;
            }
            
        }

		if (protection > 1)
		{
			protection = 1;
		}

		float accumulationRate = 0;

		if (protection == 1)
		{
			accumulationRate = 0.278; //PluginTransmissionAgents.GetDieOffSpeed(MedicalAttentionAgents.UNKNOWN_TOXINE);
		}
		else // protection < 1
		{
			float accumulationTime = Math.Lerp(MAGlobals.Get().g_ToxinAccumulationTimeMin, MAGlobals.Get().g_ToxinAccumulationTimeMax, protection) * 60;
			accumulationRate = (float)countMax / accumulationTime + 0.278;
		}

		float amount = accumulationRate * deltaT;

		if (count + amount > countMax)
		{
			amount = countMax - count;
		}
		player.InsertAgent(MedicalAttentionAgents.UNKNOWN_TOXINE, amount);

		// Obsolete
		float damage = MAGlobals.Get().g_BiohazardDamage * (1 - protection);
		player.AddHealth("GlobalHealth", "Health" , damage * deltaT * -1);
	}

    bool PlayerIsWearingGasMask(PlayerBase player) {
        EntityAI attachment;
        Class.CastTo(attachment, player.GetInventory().FindAttachment(InventorySlots.MASK))

        if(attachment && (attachment.GetType() == "GasMask" || attachment.GetType() == "GP5GasMask")) {
            return true;
        }

        return false;
    }

    bool GasMaskHasFilter(PlayerBase player) {
        EntityAI attachment;
        Class.CastTo(attachment, player.GetInventory().FindAttachment(InventorySlots.MASK))

        if(attachment && (attachment.GetType() == "GasMask" || attachment.GetType() == "GP5GasMask")) {
            EntityAI filter = attachment.GetInventory().GetAttachmentFromIndex(0);

            if(filter && filter.GetCompEM().GetEnergy() > 0) {
                return true;
            }

            return false;
        }

        return false;
    }

}


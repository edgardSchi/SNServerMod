modded class UnknownToxineMdfr
{
	override protected void OnTick(PlayerBase player, float deltaT)
	{
		float chance = Math.Lerp((float)1/25, (float)1/10, player.GetSingleAgentCountNormalized(MedicalAttentionAgents.UNKNOWN_TOXINE));

		if (Math.RandomFloat01() < chance)
		{
			SymptomBase symptom = player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);

			if( symptom )
			{
				symptom.SetDuration(2);
				
				int count = player.GetSingleAgentCount(MedicalAttentionAgents.UNKNOWN_TOXINE);
				int countMax = PluginTransmissionAgents.GetAgentMaxCount(MedicalAttentionAgents.UNKNOWN_TOXINE);

				player.AddHealth("","Blood", (float)-300 * count / countMax);
			}
		}
	}
}

modded class FeverMdfr
{
	override bool ActivateCondition(PlayerBase player)
	{
		if (!MAGlobals.Get().g_FeverActive)
		{
			return false;
		}

		return player.GetModifiersManager().IsModifierActive(eModifiers.MDF_INFLUENZA) || player.GetModifiersManager().IsModifierActive(eModifiers.MDF_WOUND_INFECTION) || player.GetModifiersManager().IsModifierActive(MedicalAttentionModifiers.MDF_UNKNOWN_TOXINE);
	}
}

modded class PoisonedNotfr
{

	override void DisplayBadge()
	{
		
		DisplayElementBadge dis_elm = DisplayElementBadge.Cast(GetVirtualHud().GetElement(eDisplayElements.DELM_BADGE_POISONED));
		
		if( dis_elm )
		{
			dis_elm.SetLevel(eBadgeLevel.NONE);
		}
	}
}
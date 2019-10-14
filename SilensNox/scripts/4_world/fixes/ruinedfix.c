modded class ItemBase extends InventoryItem
{
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if ( parent )
		{
			if ( parent.IsInherited(DayZInfected) )
				return true;
		}
		
		return true;
	}	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !IsRuined() )
			return true;
		return true;
	}
}
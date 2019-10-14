modded class Trap_SmallFish extends TrapSpawnBase
{
	void Trap_SmallFish()
	{
		m_InitWaitTime = Math.RandomFloat(160,360);
		m_BaitNeeded = false;

		m_AnimationPhaseSet = "inventory";
		m_AnimationPhaseTriggered = "placing";

		m_WaterSurfaceForSetup = true;

		m_CatchesPond = new multiMap<string, float>;
		
		m_CatchesSea = new multiMap<string, float>;
		m_CatchesSea.Insert("Sardines",1);
		m_CatchesSea.Insert("Sardines",1);
		m_CatchesSea.Insert("Sardines",1);
		
		m_CatchesGroundAnimal = new multiMap<string, float>;
	}
	
	/*override bool IsOneHandedBehaviour()
	{
		return true;
	}*/
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
				
		if ( IsPlaceSound() )
		{
			PlayPlaceSound();
		}
	}
	
	// ITEM CANNOT BE TAKEN WHEN CONTAINS CARGO
	/*override*/ bool CanPutInInventory ( EntityAI  player ) 
	{
		return IsTakeable();
	}

	override bool CanPutIntoHands ( EntityAI player ) 
	{
		if( !super.CanPutIntoHands( parent ) )
		{
			return false;
		}
		return IsTakeable();
	}

	override bool CanRemoveFromHands ( EntityAI player ) 
	{
		return IsTakeable();
	}

	override bool CanReceiveItemIntoCargo( EntityAI child )
	{
		if ( GetHierarchyRootPlayer() == NULL )
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	override bool CanReleaseCargo( EntityAI child )
	{
		if ( GetHierarchyRootPlayer() == NULL )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionWorldLiquidActionSwitch);
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
		AddAction(ActionFillGeneratorTank);
		AddAction(ActionExtinguishFireplaceByLiquid);
		AddAction(ActionFillBottleBase);
		AddAction(ActionWaterGardenSlot);
		AddAction(ActionWaterPlant);
		AddAction(ActionForceDrink);
		AddAction(ActionPourLiquid);
		AddAction(ActionDrainLiquid);
		AddAction(ActionEmptyBottleBase);
		AddAction(ActionDrink);
	}
}
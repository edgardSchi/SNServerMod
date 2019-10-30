modded class ActionFillOil {
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	

		if( !target || !IsTransport(target) )
			return false;

		if( item.GetQuantity() <= 0 )
			return false;

		Car car = Car.Cast( target.GetObject() );
		if( !car )
			return false;
		
		/*if( car.GetFluidFraction( CarFluid.OIL ) >= 0.98 )  // we dont need that
			return false;*/

        //Cannot fill car, if it is full health
        if(car.GetHealth("Engine", "Health") == car.GetMaxHealth("Engine", "") || car.GetHealth("FuelTank", "") == car.GetMaxHealth("FuelTank", "")) {
            return false;
        }

		float distance = Math.AbsFloat(vector.Distance(car.GetPosition(), player.GetPosition()));

		CarScript carS = CarScript.Cast(car);
		if( distance <= /*carS.GetActionDistanceFuel()*/ 5 )
		{
			array<string> selections = new array<string>;
			target.GetObject().GetActionComponentNameList(target.GetComponentIndex(), selections);

			for (int s = 0; s < selections.Count(); s++)
			{
				if ( selections[s] == carS.GetActionCompNameOil() )
				{
					return true;
				}
			}
		}
		return false;
	}
}
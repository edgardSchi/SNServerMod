/*
 * Modified Cooking class for a better cooking system
 *
 * Author: Eddy
*/
const int TIME_THRESHOLD = 20;

modded class Cooking {

	int updateCounter = 0;

	int m_UpdateCounter = 0;
	int m_LastCargoCount = 0;
	bool startCooking = false;
	bool isCooking = false;
	
	private CookingRecipeBase targetRecipe;

	private ItemBase cookingEquipment;

	//TODO: Check for multiple ingredients
	override int CookWithEquipment(ItemBase cooking_equipment, float cooking_time_coef = 1) {
		
		
		cookingEquipment = cooking_equipment;
		float cook_equip_temp = GetCookingEquipment().GetTemperature();

		int cargoCount  = GetCookingEquipment().GetInventory().GetCargo().GetItemCount();
		
		//reset process counter if item gets added or removed
		if (m_LastCargoCount != cargoCount) {
			m_LastCargoCount = cargoCount;
			m_UpdateCounter = 0;
			Print("Counter reset!");
		}
		
		for(int i = 0; i < cargoCount; i++) {
			//TODO: Check if items can be cooked
		}

		//Start cooking if equipment is not empty and the cooking process is not running
		if(!EquipmentEmpty() && !isCooking && !startCooking) {
			CheckForValidRecipe();
			startCooking = true;
		}

		//start the cooking process
		if(startCooking && !isCooking) {
			m_UpdateCounter = 0;
			isCooking = true;
			Print("Started cooking...");
		}

		if(isCooking == true) {

			//Cooking is done || 60 seconds for testing purposes
			if(m_UpdateCounter >= targetRecipe.GetCookingTime()) {
				DeleteIngredients();
				
				//Spawn new item in cooking equipment || Tomato for testing purposes
				GetCookingEquipment().GetInventory().CreateInInventory(targetRecipe.GetProduct());
				Print("Cooking finished");
				isCooking = false;
				startCooking = false;
			}
		}

		m_UpdateCounter++;
		
		return 0;
	}

	ItemBase GetCookingEquipment() {
		return cookingEquipment;
	}

	bool EquipmentEmpty() {
		if(GetCookingEquipment().GetInventory().GetCargo().GetItemCount() == 0 && GetCookingEquipment().GetQuantity() <= 0) {
			return true;
		} else {
			return false;
		}
	}

	//Placeholder function || TODO: implement the actual logic 
	bool CheckForValidRecipe() {
		TStringArray ingredients = new TStringArray;
		ItemBase equipment = GetCookingEquipment();
		for (int i = 0; i < equipment.GetInventory().GetCargo().GetItemCount(); i++)
		{
			ItemBase inItem;
			if ( Class.CastTo(inItem, equipment.GetInventory().GetCargo().GetItem(i)) )
			{
				//Print("Item in equipment: " + inItem.GetType());
				ingredients.Insert(inItem.GetType());
			}
		}
		
		CookingRecipeManager crm = GetPluginManager().GetPluginByType(CookingRecipeManager);
		Print("Ingredients NULL?: " + (ingredients == null));
		CookingRecipeManager.GetMatchingRecipe(ingredients); //gets the recipe
				
		return (targetRecipe != null);
				
	}
	
	//Clear cooking equipment
	void DeleteIngredients() {
		ItemBase equipment = GetCookingEquipment();
		for (int i = 0; i < equipment.GetInventory().GetCargo().GetItemCount(); i++)
		{
			ItemBase inItem;
			if ( Class.CastTo(inItem, equipment.GetInventory().GetCargo().GetItem(i)) )
			{
				inItem.Delete();
			}
		}
	}

};
class Craft545x39FilledCasing extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Fill 545x39 Casing";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 5;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"ITEMA");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"ITEMB");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("ITEMC");//add results here

		m_ResultSetFullQuantity[0] = true;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -1;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return true;
	}

    override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
    {
        /*ItemBase ingredient1;
        Class.CastTo(ingredient1, ingredients[0]);
        ingredient1.AddQuantity(-0);
        
        Debug.Log("Recipe Do method called","recipes");*/
		
		ItemBase CASING;
		ItemBase POWDER;
		ItemBase OUTCOME;
		Class.CastTo(CASING, ingredients[0]);
		Class.CastTo(POWDER, ingredients[1]);
		Class.CastTo(OUTCOME, results.Get(0));
		
		
		int		casing_required = 1;
		int		powder_required = 5;
		
		int		max_casing_stack = 50;
		int		max_powder_stack = 1500;
		
		float	current_casing = CASING.GetQuantity();
		float	current_powder = POWDER.GetQuantity();
		
		float	bullet_outcome = 0;
		
		for(int i = 0; i < current_casing; i++)
		{
			bullet_outcome = i++;
		}
		
		
		OUTCOME.AddQuantity( bullet_outcome );
		
		
		/*
		ItemBase result;
		Class.CastTo(result, results.Get(0));
		ItemBase ingredient2 = ingredients[1];
		int quantity = ingredient2.ConfigGetFloat("ragQuantity");
		
		result.SetQuantity(quantity);
		
		
		float 	rags_health 	= CASING.GetHealth("","");
		int 	rags_quantity 	= CASING.GetQuantity();
		
		float 	rags_combined_damage = (100 - rags_health) * rags_quantity;
		
		int 	liquid_quantity = POWDER.GetQuantity();
		int 	liquid_required = rags_combined_damage * 2;
		
		float 	used_ratio = 0;
		float	heal = 0;
		
		if( liquid_quantity > liquid_required )
		{
			POWDER.AddQuantity(-liquid_required);
			heal = 	rags_combined_damage / rags_quantity;
		}
		else
		{
			POWDER.SetQuantity(0);
			used_ratio = liquid_quantity / liquid_required;
			heal = 	(rags_combined_damage / rags_quantity) * used_ratio;
			
		}
		heal = Math.Clamp(heal, 0, (70 - rags_health));
		CASING.AddHealth("", "",heal);
		
		
		*/
		
    }
};

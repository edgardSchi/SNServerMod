// Made by Niphoria by the help from Eddy for the NewDawnDayZ Server
/*class Craft545x39FilledCasing extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Fill 545x39 Casing";
		m_IsInstaRecipe = false;
		m_AnimationLength = 1;
		m_Specialty = -0.02;
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		
		m_MinQuantityIngredient[0] = 1; // Add how much casing is needed to craft ONE bullet
		m_MaxQuantityIngredient[0] = -1; 
		
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3; 
		
		m_MinQuantityIngredient[1] = 5; // Add how much powder is needed to craft ONE bullet
		m_MaxQuantityIngredient[1] = -1;
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"ITEMA");//Add the Casing in here
		
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = -1; // Add how much casing is needed to craft ONE bullet
		m_IngredientDestroy[0] = false;
		m_IngredientUseSoftSkills[0] = false;
		
		//ingredient 2
		InsertIngredient(1,"ITEMB");//Add the Powder in here
		
		m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = -5;// Add how much powder is needed to craft ONE bullet
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("ITEMC");//add results here

		m_ResultSetFullQuantity[0] = false;
		m_ResultSetQuantity[0] = 1;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -2;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -1;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		ItemBase CASING;
		Class.CastTo(CASING, ingredients[0]);
		float	current_casing = CASING.GetQuantity();
		
		if( current_casing == 2)
		{
			return false;
		}
		else
		{
		return true;
		}
	}

    override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
    {

		
		ItemBase CASING;
		ItemBase POWDER;
		ItemBase OUTCOME;
		Class.CastTo(CASING, ingredients[0]);
		Class.CastTo(POWDER, ingredients[1]);
		Class.CastTo(OUTCOME, results.Get(0));
		
		
		int		casing_required = 1; // Add how much casing is needed to craft ONE bullet
		int		powder_required = 5; // Add how much powder is needed to craft ONE bullet
		
		float	current_casing = CASING.GetQuantity();
		float	current_powder = POWDER.GetQuantity();
		
		float	bullet_outcome = 0;
		
		for(int i = 0; i < current_casing; i++)
		{
			if((i + 1) * powder_required <= current_powder)
			{
				bullet_outcome++;
			}
		}
		
		CASING.AddQuantity( -bullet_outcome * casing_required );
		POWDER.AddQuantity( -bullet_outcome * powder_required );
		
		
		if( bullet_outcome < 1)
		{
			bullet_outcome++;
			OUTCOME.SetQuantity( bullet_outcome );
		}

    }
};
class Craft545x39FilledCasing2 extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Fill 545x39 Casing";
		m_IsInstaRecipe = false;
		m_AnimationLength = 1;
		m_Specialty = -0.02;
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		
		m_MinQuantityIngredient[0] = 2; // Add how much casing is needed to craft TWO bullet
		m_MaxQuantityIngredient[0] = 2; // Add how much casing is needed to craft TWO bullet
		
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;
		
		m_MinQuantityIngredient[1] = 10; // Add how much Gunpowder is needed to craft TWO bullet
		m_MaxQuantityIngredient[1] = -1;
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"ITEMA");//Add the Casing in here
		
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = -2; // Add how much casing is needed to craft TWO bullet
		m_IngredientDestroy[0] = false;
		m_IngredientUseSoftSkills[0] = false;
		
		//ingredient 2
		InsertIngredient(1,"ITEMB");//Add the Powder in here
		
		m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = -10;// Add how much powder is needed to craft TWO bullet
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("ITEMC");//add results here

		m_ResultSetFullQuantity[0] = false;
		m_ResultSetQuantity[0] = 2;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -2;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -1;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return true;
	}

    override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
    {
		
	}
};
class Decraft9x19 extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Pull apart 9x19 ammo";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = 25;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 1;//-1 = disable check
		m_MaxQuantityIngredient[1] = 1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Ammo_9x19");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Pliers");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -33;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("Tips9X19");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 22;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -1;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
		
		AddResult("Casing9X19");//add results here

		m_ResultSetFullQuantity[1] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[1] = 12;//-1 = do nothing
		m_ResultSetHealth[1] = -1;//-1 = do nothing
		m_ResultInheritsHealth[1] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[1] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[1] = -1;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[1] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
		
		AddResult("Gunpowder");//add results here

		m_ResultSetFullQuantity[2] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[2] = 160;//-1 = do nothing
		m_ResultSetHealth[2] = -1;//-1 = do nothing
		m_ResultInheritsHealth[2] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[2] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[2] = -1;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[2] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[2] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
		
		
		
		
		
		ItemBase BULLET;



		Class.CastTo(BULLET, ingredients[0]);



		Class.CastTo(OUTCOME, results.Get(0));
		
		
		int		casing_required = 1; // Add how much casing is needed to craft ONE bullet
		int		powder_required = 5; // Add how much powder is needed to craft ONE bullet
		
		float	current_bullet = BULLET.GetQuantity();
		
		float	bullet_outcome = 0;
		
		for(int i = 0; i < current_casing; i++)
		{
			if((i + 1) * powder_required <= current_powder)
			{
				bullet_outcome++;
			}
		}
		
		CASING.AddQuantity( -bullet_outcome * casing_required );
		POWDER.AddQuantity( -bullet_outcome * powder_required );
		
		
		if( bullet_outcome < 1)
		{
			bullet_outcome++;
			OUTCOME.SetQuantity( bullet_outcome );
		}
		
	}
};



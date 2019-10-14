/*
 * Base class for adding a cooking recipe
 *
 * Author: Eddy
*/
class CookingRecipeBase {

	private ref TStringArray m_Ingredients;
	protected string m_Name;
	private int m_CookingTime;
	private string m_Product;
	private Liquid m_RequiredLiquid;
	private float m_RequiredLiquidAmount;
	
	//Added by niphoria uncomment if it breaks something ;_;
	private string m_ProductStage;
	protected string m_Stage;
	////////////////////////////////////////////////////////

	void CookingRecipeBase() {

		m_Ingredients = new TStringArray;

		m_Name = "Recipe Base";
		m_CookingTime = 60;
		
		Init();
		
		
	}
	
	private void SortIngredients() {
		
	}

	protected void Init();
	
	protected void SetCookingTime(int time) {
		m_CookingTime = time;
	}
	
	protected void SetRequiredLiquid(Liquid liquid, float amount) {
		m_RequiredLiquid = liquid;
		m_RequiredLiquidAmount = amount;
	}
	
	protected void AddIngredient(string item) {
		m_Ingredients.Insert(item);
	}

	protected void SetProduct(string name) {
		m_Product = name;
	}
	
	protected void SetProductState(string stage)
	{
		m_ProductStage = stage
	}
	
	//item_to_cook.ChangeFoodStage( new_stage_type );  ||  ChangeFoodStage( FoodStageType.ROTTEN );   - should be useful for you
	
	int GetCookingTime() {
		return m_CookingTime;
	}
	
	string GetProduct() {
		return m_Name;
	}
	
	string GetProductStage()
	{
		return m_Stage
	}
	
	TStringArray GetIngredients() {
		return m_Ingredients;
	}
	
	string GetName() {
		return m_Name;
	}
	
	Liquid GetRequiredLiquid() {
		return m_RequiredLiquid;
	}
	
	float GetRequiredLiquidAmount() {
		return m_RequiredLiquidAmount;
	}

};
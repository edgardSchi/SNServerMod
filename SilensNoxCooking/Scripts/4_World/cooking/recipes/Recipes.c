/*
 * List of classes for recipes
 *
 * Author: Eddy
*/

class CookStew : CookingRecipeBase
{
	override void Init() {
		m_Name = "CookMassStew";
		
		SetCookingTime(15); // 600
		
		AddIngredient("Tomato");
		AddIngredient("Tomato");
		AddIngredient("Potato");
		AddIngredient("GoatSteakMeat");
		
		SetRequiredLiquid(LIQUID_WATER, 1000); // throws incompatible parameter back
		SetProduct("MassGoatStew");
	}
}
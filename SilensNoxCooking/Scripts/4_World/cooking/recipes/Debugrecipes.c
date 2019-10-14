/*
 * List of classes for debugging and testing
 *
 * Author: Eddy
*/

class DefaultRecipe : CookingRecipeBase {
	override void Init() {
		m_Name = "DefaultRecipe";
		
		SetCookingTime(30);
		
		
		SetProduct("Apple");
	}
}


class TestRecipe : CookingRecipeBase {

	
	override void Init() {
		m_Name = "TestRecipe";
		
		SetCookingTime(30);
		
		AddIngredient("Tomato");
		AddIngredient("Banana");
		
		SetProduct("Potato");
	}
}

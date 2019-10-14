/*
 * Class for managing recipes for the expanded cooking system
 *
 * Author: Eddy
*/

class CookingRecipeManager extends PluginBase {
	
	private static ref array<CookingRecipeBase> recipes  = new array<CookingRecipeBase>;;

	void CookingRecipeManager() {
		
		LoadRecipes();
	}
	
	private void LoadRecipes() {
		AddRecipe(new TestRecipe());

	}
	
	private void AddRecipe(CookingRecipeBase recipe) {
		recipes.Insert(recipe);
	}
	
	static CookingRecipeBase GetMatchingRecipe(TStringArray ingredients) {
		int check = 0;
		foreach(CookingRecipeBase recipe : recipes) {
			check = 0;
			if(recipe == null) {
				Print("Recipe is null!");
			} else {
				Print("Recipe is not null!");
			}
			if(recipe.GetIngredients().Count() == ingredients.Count()) { //throws error, because recipe is null
				for(int i = 0; i < recipe.GetIngredients().Count(); i++) {
					for(int j = 0; j < ingredients.Count(); i++) {
						if(recipe.GetIngredients()[i] == ingredients[j]) {
							check++;							
						}
					}

				}
			}
			if(check == recipe.GetIngredients().Count()) {
				return recipe; //returns the recipe if a valid one is found
			}
		}
		
		return new DefaultRecipe(); //Apple for default product
	}
		
}
/*
 * Adds the CookingRecipeManager as a plugin which can be loaded from within other scripts
 *
 * Author: Eddy
*/

modded class PluginManager {

    override void Init() {
        super.Init();

        RegisterPlugin( "CookingRecipeManager",	true, true);
        GetGame().GetUpdateQueue(CALL_CATEGORY_GAMEPLAY).Insert(this.MainOnUpdate);
    }
}
enum SNGestureCategories: GestureCategories
{
	CATEGORY_6
}


modded class GesturesMenu
{
	override void OnMenuRelease() //here .... cuz dayz ....
	{
		//execute on release (mouse only)
		if ( RadialMenu.GetInstance().IsUsingMouse() )
		{
			ExecuteSelectedItem();
		}
	}
	override void GetGestureItems( out ref array<ref GestureMenuItem> gesture_items, GestureCategories category )
	{
		super.GetGestureItems(gesture_items, category);
		
		if ( category == GestureCategories.CATEGORIES )
		{
			gesture_items.Insert( new GestureMenuItem( GestureCategories.CATEGORY_5, "Körperemotes", 						GestureCategories.CATEGORIES ) );
			gesture_items.Insert( new GestureMenuItem( SNGestureCategories.CATEGORY_6, "Körperhaltung", 						GestureCategories.CATEGORIES ) );
		}
		
		else if ( category == GestureCategories.CATEGORY_5 )
		{
			gesture_items.Insert( new GestureMenuItem( ID_EMOTE_COUGH, 					"Husten",						 	GestureCategories.CATEGORY_5 ) );
			gesture_items.Insert( new GestureMenuItem( ID_EMOTE_SNEEZE, 				"Niesen", 							GestureCategories.CATEGORY_5 ) );
			gesture_items.Insert( new GestureMenuItem( ID_EMOTE_LAUGHFREAKY,		 	"Verrückt Lachen",					GestureCategories.CATEGORY_5 ) );
			gesture_items.Insert( new GestureMenuItem( ID_EMOTE_SHIVER, 				"Zittern",					 		GestureCategories.CATEGORY_5 ) );
			gesture_items.Insert( new GestureMenuItem( ID_EMOTE_WIPEFACE, 				"Stirn Abwischen",					GestureCategories.CATEGORY_5 ) );
			//gesture_items.Insert( new GestureMenuItem( ID_EMOTE_GUNSHOULDER, 			"Waffe auf Schulter", 				GestureCategories.CATEGORY_5 ) );
			gesture_items.Insert( new GestureMenuItem( ID_EMOTE_BLOODYHANDS,			"Blutige Hände",					GestureCategories.CATEGORY_5 ) );
			
		}
		
		else if ( category == SNGestureCategories.CATEGORY_6 )
		{
			gesture_items.Insert( new GestureMenuItem( ID_EMOTE_HEALTHY, 				"Gesund",						 	SNGestureCategories.CATEGORY_6 ) );
			gesture_items.Insert( new GestureMenuItem( ID_EMOTE_WORN, 					"Schmerzend", 						SNGestureCategories.CATEGORY_6 ) );
			gesture_items.Insert( new GestureMenuItem( ID_EMOTE_DAMAGED,		 		"Verletzt",							SNGestureCategories.CATEGORY_6 ) );
			gesture_items.Insert( new GestureMenuItem( ID_EMOTE_BADLYDAMAGED, 			"Stark Verletzt",					SNGestureCategories.CATEGORY_6 ) );
			gesture_items.Insert( new GestureMenuItem( ID_EMOTE_RUINED, 				"Fasst Tod",						SNGestureCategories.CATEGORY_6 ) );
			
		}
	}
}	
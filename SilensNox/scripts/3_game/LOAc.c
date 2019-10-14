
const int ID_EMOTE_GUNSHOULDER 		= 65;
const int ID_EMOTE_COUGH			= 66;
const int ID_EMOTE_SNEEZE			= 67;
const int ID_EMOTE_LAUGHFREAKY		= 68;
const int ID_EMOTE_SHIVER			= 69;
const int ID_EMOTE_WIPEFACE			= 70;

const int ID_EMOTE_HEALTHY 			= 71;
const int ID_EMOTE_WORN				= 72;
const int ID_EMOTE_DAMAGED			= 73;
const int ID_EMOTE_BADLYDAMAGED		= 74;
const int ID_EMOTE_RUINED			= 75;

const int ID_EMOTE_BLOODYHANDS		= 76;


/*enum LOAPlayerConstants
{
	CMD_GESTUREFB_GUN_ON_SHOULDER		= 4002;
};*/



modded class GameConstants
{
	/**
	 * \defgroup Configurations for StaminaHandler class
	 * \desc Configurations for StaminaHandler class
	 * @{
	 */
		// unit = currently percent (stamina max is 100)
	const int 	STAMINA_DRAIN_STANDING_SPRINT_PER_SEC = 4; //in units (how much sprint depletes stamina)
	const int 	STAMINA_DRAIN_CROUCHED_SPRINT_PER_SEC = 1; //in units (how much sprint in crouch depletes stamina)
	const int 	STAMINA_DRAIN_PRONE_SPRINT_PER_SEC = 3; //in units (how much sprint in prone depletes stamina)
	const int	STAMINA_DRAIN_SWIM_FAST_PER_SEC = 5; //in units (how much fast swimming depletes stamina)
	const int	STAMINA_DRAIN_LADDER_FAST_PER_SEC = 8; //in units (how much fast ladder climb depletes stamina)
	
	const float	STAMINA_DRAIN_HOLD_BREATH = 0.2; //in units (how much holding breath depletes stamina)
	const float	STAMINA_DRAIN_JUMP = 20;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_MELEE_LIGHT = 5; //in units (how much light melee punch depletes stamina)
	const float	STAMINA_DRAIN_MELEE_HEAVY = 25; //in units (how much heavy melee punch depletes stamina)
	const float	STAMINA_DRAIN_MELEE_EVADE = 8; // in units (how much evade depletes stamina)
		
	const int 	STAMINA_GAIN_JOG_PER_SEC = 2; //in units (how much of stamina units is gained while jogging)
	const int 	STAMINA_GAIN_WALK_PER_SEC = 4; //in units (how much of stamina units is gained while walking)
	const int 	STAMINA_GAIN_IDLE_PER_SEC = 5; //in units (how much of stamina units is gained while iddling)
	const int	STAMINA_GAIN_SWIM_PER_SEC = 1; //in units (how much of stamina units is gained while slowly swim)
	const int	STAMINA_GAIN_LADDER_PER_SEC = 1; //in units (how much of stamina units is gained while slowly swim)
	const float STAMINA_GAIN_BONUS_CAP = 3.0; //in units (tells how much extra units can be added at best to stamina regain)
	
	const float STAMINA_KG_TO_STAMINAPERCENT_PENALTY = 1.75; //in units (by how many  units is max stamina bar reduced for each 1 kg of load weight)
	const float STAMINA_MIN_CAP = 5; //in units (overload won't reduce max stamina bar under this value)
	const float STAMINA_HOLD_BREATH_THRESHOLD = 10; // in units
	const float STAMINA_JUMP_THRESHOLD = 20; // in units
	const float STAMINA_MELEE_HEAVY_THRESHOLD = STAMINA_DRAIN_MELEE_HEAVY; // in units (how many units we need to make a heavy hit in melee)
	const float STAMINA_MELEE_EVADE_THRESHOLD = 8; // in units
	const float STAMINA_REGEN_COOLDOWN_DEPLETION = 0.45; // in secs (how much time we will spend in cooldown before the stamina will starts with regeneration)
	const float STAMINA_REGEN_COOLDOWN_EXHAUSTION = 0.5;
	const float STAMINA_WEIGHT_LIMIT_THRESHOLD = 6000; //! in grams (weight where the player is not penalized by stamina)
	const float STAMINA_KG_TO_GRAMS = 1000; //for kg to g conversion
	const float STAMINA_SYNC_RATE = 1; //in secs
	const float STAMINA_MAX = 100;
	/** @}*/
	
	/**
	 * \defgroup Configurations for Environment class
	 * \desc Configurations for Environment class
	 * @{
	 */
	const float ENVIRO_TICK_RATE 						= 2;		//! in secs. how often should enviro effet process
	const float	ENVIRO_TICKS_TO_WETNESS_CALCULATION 	= 2;	  	//! each X (ticks) is processed wetness on items on player
	const float ENVIRO_TICK_ROOF_RC_CHECK 				= 10;	  	//! in secs. how often we should check if player is under the roof (raycast)
	const float ENVIRO_WET_INCREMENT 					= 0.01;	  	//! amount of wetness added to items wet value each tick if is raining
	const float ENVIRO_DRY_INCREMENT 					= 0.0005; 	//! amount of wetness subtracted from items wet value each tick if is not raining due to player heat
	const float ENVIRO_SUN_INCREMENT 					= 0.002;	//! amount of wetness subtracted from items wet value each tick if is not raining due to sun
	const float ENVIRO_CLOUD_DRY_EFFECT 				= 0.1;		//! how many % of ENVIRO_SUN_INCREMENT is reduced by cloudy sky
	const float ENVIRO_CLOUDS_TEMP_EFFECT 				= 0.1;		//! how many % of environment temperature can be lowered by clouds
	const float ENVIRO_FOG_TEMP_EFFECT 					= 0.2;		//! how many % of environment temperature can be lowered by fog
	const float ENVIRO_WET_PENALTY 						= 0.5;		//! at which state of item wetness (0-1) will heat isolation start having negative effect on heat comfort of item
	const float ENVIRO_WET_PASSTHROUGH_COEF 			= 0.1;		//! how many times slower is wetting/drying items in backpacks
	const float ENVIRO_ITEM_HEAT_TRANSFER_COEF 			= 0.01;		//! converts temperature of items to entities heatcomfort gain
	const float ENVIRO_WATER_TEMPERATURE_COEF 			= 0.5;		//! how many time is water colder than air
	const float ENVIRO_DEFAULT_ENTITY_HEAT 				= 0.5;		//! heat entity generates if not moving
	const float ENVIRO_TEMPERATURE_HEIGHT_REDUCTION 	= 0.0065;	//! amount of ?C reduced for each 100 meteres of height above water level
	const float ENVIRO_TEMPERATURE_INSIDE_COEF 			= 1.25;		//! increases temp in interiors
	const float ENVIRO_TEMPERATURE_UNDERROOF_COEF		= 1.1;
	const float ENVIRO_WIND_EFFECT 						= 1;		//! amount of % wind affect drying/wetting
	const float ENVIRO_HIGH_NOON 						= 12;		//! when is sun highest on sky
	
	const float ENVIRO_HEATCOMFORT_HEADPARTS_WEIGHT		= 0.3;		//! how much this head parts (clothing) affects final heatcomfort
	const float ENVIRO_HEATCOMFORT_BODYPARTS_WEIGHT		= 1.0;		//! how much this body parts (clothing) affects final heatcomfort
	const float ENVIRO_HEATCOMFORT_FEETPARTS_WEIGHT		= 0.5;		//! how much this feet parts (clothing) affects final heatcomfort
	const float ENVIRO_LOW_TEMP_LIMIT					= -40;		//! lowest temperature(deg Celsius) where the player gets lowest possible heat comfort (-1)
	const float ENVIRO_HIGH_TEMP_LIMIT					= 50;		//! highest temperature(deg Celsius) where the player gets highest possible heat comfort (1)
	const float ENVIRO_PLAYER_COMFORT_TEMP				= 18;		//! comfort temperature of environment for the player
	
	//! impact of item wetness to the heat isolation
	const float ENVIRO_ISOLATION_WETFACTOR_DRY			= 1.0;
	const float ENVIRO_ISOLATION_WETFACTOR_DAMP			= 0.7;
	const float ENVIRO_ISOLATION_WETFACTOR_WET			= 0.5;
	const float ENVIRO_ISOLATION_WETFACTOR_SOAKED		= 0.3;
	const float ENVIRO_ISOLATION_WETFACTOR_DRENCHED 	= 0.0;
	//! impact of item health (state) to the heat isolation
	const float ENVIRO_ISOLATION_HEALTHFACTOR_PRISTINE  = 1.0;
	const float ENVIRO_ISOLATION_HEALTHFACTOR_WORN		= 0.75;
	const float ENVIRO_ISOLATION_HEALTHFACTOR_DAMAGED	= 0.5;
	const float ENVIRO_ISOLATION_HEALTHFACTOR_B_DAMAGED = 0.25;
	const float ENVIRO_ISOLATION_HEALTHFACTOR_RUINED  	= 0.25;
	//! impact of item health (state) to absorbency
	const float ENVIRO_ABSORBENCY_HEALTHFACTOR_PRISTINE  = 1.0;
	const float ENVIRO_ABSORBENCY_HEALTHFACTOR_WORN		 = 0.90;
	const float ENVIRO_ABSORBENCY_HEALTHFACTOR_DAMAGED	 = 0.5;
	const float ENVIRO_ABSORBENCY_HEALTHFACTOR_B_DAMAGED = 0.25;
	const float ENVIRO_ABSORBENCY_HEALTHFACTOR_RUINED  	 = 0.25;
	/** @}*/
	
	/**
	 * \defgroup Cars Fluids 
	 * \desc Constants for car fluids
	 * @{
	 */
	const int CARS_FLUIDS_TICK 		= 1;
	const int CARS_LEAK_TICK_MIN 	= 0.02;
	const int CARS_LEAK_TICK_MAX 	= 0.05;
	const int CARS_LEAK_THRESHOLD	= 0.5;
	/** @}*/
	
	/**
	 * \defgroup Item Health States (ItemBase.GetHealthLevel)
	 * \desc Constants for Item Health States
	 * @{
	 */
	const int STATE_RUINED 		 	= 4;
	const int STATE_BADLY_DAMAGED 	= 3;
	const int STATE_DAMAGED 	  	= 2;
	const int STATE_WORN 		  	= 1;
	const int STATE_PRISTINE 	  	= 0;
	/** @}*/
		
	/**
	 * \defgroup Item Wetness States (ItemBase.GetWet)
	 * \desc Constants for Item Wetness States
	 * @{
	 */
	const float STATE_DRENCHED		= 0.8;
	const float STATE_SOAKING_WET	= 0.5;
	const float STATE_WET			= 0.25;
	const float STATE_DAMP			= 0.05;
	const float STATE_DRY			= 0;
	/** @}*/
	
	/**
	 * \defgroup Barel related functions constants
	 * \desc Barel related functions constants
	 * @{
	 */
	const int BAREL_LIME_PER_PELT = 100; //grams per pelt 
	const int BAREL_BLEACH_PER_CLOTH = 50; //ml per item
	const float BAREL_LIME_PER_PLANT = 50; //grams per gram
	/** @}*/
	
	/**
	 * \defgroup FOV settings
	 * \desc Constats for setting of DayZPlayerCamera FOV
	 */
	
	//! FOV (vertical angle/2) in radians. Take care to modify also in "basicDefines.hpp"
	const float DZPLAYER_CAMERA_FOV_EYEZOOM		= 0.3926;	// 45deg
	const float DZPLAYER_CAMERA_FOV_IRONSIGHTS	= 0.5236;	// 60deg
	
	const string DEFAULT_CHARACTER_NAME = "#str_cfgvehicles_survivor0"; //experiment, used to be "Survivor"
	
	const int DEFAULT_CHARACTER_MENU_ID = -1;
}
const int LIQUID_SODA = 600;
/*
// BEWARE ALL INDIVIDUAL LIQUID TYPES ARE ALSO REPRESENTED CONFIG-SIDE AND MUST MATCH(all changes must be made on both sides)
// NOTE ANY NUMBER HERE MUST BE A 0 OR ANY POWER OF TWO, THERE IS A MAXIMUM OF 32 INDIVIDUAL LIQUID TYPES POSSIBLE

const int LIQUID_BLOOD_0_P	= 1;
const int LIQUID_BLOOD_0_N	= 2;
const int LIQUID_BLOOD_A_P	= 4;
const int LIQUID_BLOOD_A_N	= 8;
const int LIQUID_BLOOD_B_P	= 16;
const int LIQUID_BLOOD_B_N	= 32;
const int LIQUID_BLOOD_AB_P	= 64;
const int LIQUID_BLOOD_AB_N = 128;
const int LIQUID_SALINE 	= 256;

const int LIQUID_WATER = 512;
const int LIQUID_RIVERWATER = 1024;
const int LIQUID_VODKA = 2048;
const int LIQUID_BEER = 4096;
const int LIQUID_GASOLINE = 8192;
const int LIQUID_DIESEL = 16384;
const int LIQUID_DISINFECTANT = 32768;

// these are groups which do not have to correspond with configs
const int GROUP_LIQUID_BLOOD = 255;
const int GROUP_LIQUID_ALL = -1;//-1 = all bits to 1
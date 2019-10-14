modded class FireplaceBase
{
	const float PARAM_SMALL_FIRE_TEMPERATURE 		= 150;		//! maximum fireplace temperature of a small fire (degree Celsius)
	const float PARAM_NORMAL_FIRE_TEMPERATURE 		= 1000;		//! maximum fireplace temperature of a normal fire (degree Celsius)
	const float PARAM_MIN_FIRE_TEMPERATURE 			= 40;		//! minimum fireplace temperature under which the fireplace is inactive (degree Celsius)
	const float	PARAM_TEMPERATURE_INCREASE 			= 30;		//! how much will temperature increase when fireplace is burning (degree Celsius)
	const float	PARAM_TEMPERATURE_DECREASE 			= 10;		//! how much will temperature decrease when fireplace is cooling (degree Celsius)
	const float	PARAM_MAX_WET_TO_IGNITE 			= 0.2;		//! maximum wetness value when the fireplace can be ignited
	const float PARAM_MIN_TEMP_TO_REIGNITE 			= 100;		//! minimum fireplace temperature under which the fireplace can be reignited using air only (degree Celsius)
	const float	PARAM_IGNITE_RAIN_THRESHOLD 		= 0.05;		//! maximum rain value when the fireplace can be ignited
	const float	PARAM_BURN_WET_THRESHOLD 			= 0.40;		//! maximum wetness value when the fireplace is able to burn
	const float	PARAM_WET_INCREASE_COEF 			= 0.02;		//! value for calculating of  wetness that fireplace gain when raining
	const float	PARAM_WET_HEATING_DECREASE_COEF 	= 0.01;		//! value for calculating wetness loss during heating process
	const float	PARAM_WET_COOLING_DECREASE_COEF 	= 0.002;	//! value for calculating wetness loss during cooling process
	const float	PARAM_FIRE_CONSUM_RATE_AMOUNT		= 1.0;		//! base value of fire consumption rate (how many base energy will be spent on each update)
	const float	PARAM_BURN_DAMAGE_COEF				= 0.05;		//! value for calculating damage on items located in fireplace cargo
	const float	PARAM_ITEM_HEAT_TEMP_INCREASE_COEF	= 10;		//! value for calculating temperature increase on each heat update interval (degree Celsius)
	const float	PARAM_ITEM_HEAT_MIN_TEMP			= 40;		//! minimum temperature for items that can be heated in fireplace cargo or as attachments (degree Celsius)
	const float PARAM_MAX_ITEM_HEAT_TEMP_INCREASE	= 200;		//! maximum value of temperature of items in fireplace when heating (degree Celsius)
	const float PARAM_HEAT_RADIUS 					= 3.0;		//! radius in which objects are heated by fire
	const float PARAM_HEAT_THROUGH_AIR_COEF			= 0.035;	//! value for calculation of heat transfered from fireplace through air to player (environment)
	//! 
	const int 	MIN_STONES_TO_BUILD_OVEN			= 8;		//! minimum amount of stones for oven
	const int 	MAX_TEMPERATURE_TO_DISMANTLE_OVEN	= 40;		//! maximum temperature for dismantling oven
	//
	const float TEMPERATURE_LOSS_MP_DEFAULT			= 1.0;
	const float FUEL_BURN_RATE_DEFAULT				= 0.15;
	const float TEMPERATURE_LOSS_MP_STONES			= 0.83;		//20% boost
	const float FUEL_BURN_RATE_STONES				= 0.11;
	const float TEMPERATURE_LOSS_MP_OVEN			= 0.67;		//50% boost
	const float FUEL_BURN_RATE_OVEN					= 0.07;
	
	//! cooking
	const float PARAM_COOKING_TEMP_THRESHOLD		= 100;		//! temperature threshold for starting coooking process (degree Celsius)
	const float PARAM_COOKING_EQUIP_MAX_TEMP		= 250;		//! maximum temperature of attached cooking equipment (degree Celsius)
	const float PARAM_COOKING_EQUIP_TEMP_INCREASE	= 10;		//! how much will temperature increase when attached on burning fireplace (degree Celsius)
	//! 
	const int 	TIMER_HEATING_UPDATE_INTERVAL 		= 2;		//! update interval duration of heating process (seconds)
	const int 	TIMER_COOLING_UPDATE_INTERVAL 		= 2;		//! update interval duration of cooling process (seconds)
}

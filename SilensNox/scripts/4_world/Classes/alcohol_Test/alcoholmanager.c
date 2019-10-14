
//Vodka 70%
//Bier 

enum LOA_RPC{
    RPC_PLAYER_DRUNK
}

const float BLACKOUT_MIN = 2800.0;
const float BLACKOUT_MAX = 3600.0; 
const float PROCESS_PER_SECOND = 1;
const float DEATH_MINIMUM = 500;

const float LIMPING_THRESHOLD = 0.2;
const float LIMPING_THRESHOLD_WORN = 0.3;
const float LIMPING_THRESHOLD_DAMAGED = 0.5;
const float LIMPING_THRESHOLD_BADLY_DAMAGED = 0.7;
const float LIMPING_THRESHOLD_RUINED = 0.8;

class AlcoholManager {


    private float m_MaxAmountUntilBlackout;

    private float m_AmountInBlood = 0;
    ref DrunkEffect m_DrunkEffect;

    private InjuryAnimationHandler iaHandler;

    private PlayerBase m_Player;

    ref Timer soberTimer;

    void AlcoholManager(PlayerBase player, float alcohol) {
        m_Player = player;
        
        m_AmountInBlood = alcohol;
        m_MaxAmountUntilBlackout = Math.RandomFloatInclusive(BLACKOUT_MIN, BLACKOUT_MAX);

        SpawnDrunkEffect();

        soberTimer = new Timer();
        soberTimer.Run(1, this, "ProcessAlcohol", null, true);

        
    }

    void ~AlcoholManager() {

        Print("Deleting alcoholmanager...");

        m_Player = null;
        m_AmountInBlood = 0;
        m_MaxAmountUntilBlackout = 0;
        soberTimer = null;
        m_DrunkEffect = null;

        m_DrunkEffect.RemoveAll();
    }

    void AddAlcohol(float amount) {

        if(!m_DrunkEffect) {
            SpawnDrunkEffect();
        }

        m_AmountInBlood += amount;

        float c = Math.RandomFloat01();
        

        if(Math.RandomFloat01() > 0.95) {
            Vomit();
        }

        if(m_AmountInBlood >= m_MaxAmountUntilBlackout) {
            m_Player.SetHealth("", "Shock", 0);
        }

        if(m_AmountInBlood >= m_MaxAmountUntilBlackout + DEATH_MINIMUM) {
            m_Player.SetSuicide(true);
        }
    }

    void ProcessAlcohol() {
        m_AmountInBlood -= PROCESS_PER_SECOND;

        if(m_AmountInBlood <= 0) {
            delete this;
            return;
        }
    }

    bool IsSober() {
        if(m_AmountInBlood == 0) {
            return true;
        } else {
            return false;
        }
    }

    void Update() {
        float percentage = m_AmountInBlood / m_MaxAmountUntilBlackout;
        UpdateEffect(percentage);
        UpdateLimping(percentage);
    }

    void UpdateEffect(float value) {
        m_DrunkEffect.Update(value);
    }

    void SpawnDrunkEffect() {
        m_DrunkEffect = new DrunkEffect();
    }

    void OnRPC(int rpc_type, ParamsReadContext ctx) {

        if(rpc_type == LOA_RPC.RPC_PLAYER_DRUNK) {       
            ctx.Read(CachedObjectsParams.PARAM1_FLOAT);
		    float addedAlcohol = CachedObjectsParams.PARAM1_FLOAT.param1;

            AddAlcohol(addedAlcohol);
        }

    }

    void UpdateLimping(float currentValue) {
        if (currentValue >= LIMPING_THRESHOLD_RUINED) {
			if(m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsServer() || !GetGame().IsMultiplayer()) {
				m_Player.m_InjuryHandler.SetInjuryCommandParams(true, eInjuryHandlerLevels.RUINED);
			}	
		} else if (currentValue >= LIMPING_THRESHOLD_BADLY_DAMAGED && currentValue < LIMPING_THRESHOLD_RUINED) {
			if(m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsServer() || !GetGame().IsMultiplayer()) {
				m_Player.m_InjuryHandler.SetInjuryCommandParams(true, eInjuryHandlerLevels.BADLY_DAMAGED);
			}	
		} else if (currentValue >= LIMPING_THRESHOLD_DAMAGED && currentValue < LIMPING_THRESHOLD_BADLY_DAMAGED) {
			if(m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsServer() || !GetGame().IsMultiplayer()) {
				m_Player.m_InjuryHandler.SetInjuryCommandParams(true, eInjuryHandlerLevels.DAMAGED);
			}	
		} else if (currentValue >= LIMPING_THRESHOLD_WORN && currentValue < LIMPING_THRESHOLD_BADLY_DAMAGED) {
            if(m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsServer() || !GetGame().IsMultiplayer()) {
				m_Player.m_InjuryHandler.SetInjuryCommandParams(true, eInjuryHandlerLevels.WORN);
			}
		} else if (currentValue < LIMPING_THRESHOLD) {
			if(m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsServer() || !GetGame().IsMultiplayer()) {
				m_Player.m_InjuryHandler.SetInjuryCommandParams(true, eInjuryHandlerLevels.PRISTINE);
			}	
		}
    }

    void Vomit() {
        Print("Vomit has been called!");
        if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsMultiplayer() )
		{
			ref SymptomBase symptom = m_Player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
	        			
			if ( symptom )
			{ 
			    symptom.SetDuration(Math.RandomIntInclusive(4,8));
			}
		}
    }
}
modded class EmoteManager
{
	
	/*override void CreateBleedingEffect(int Callback_ID)
	{
		if (GetGame().IsServer() && m_Player.IsAlive())
		{
			switch (Callback_ID)
			{
				case DayZPlayerConstants.CMD_SUICIDEFB_1HD :
					m_Player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("Neck");
				break;
				
				case DayZPlayerConstants.CMD_SUICIDEFB_FIREAXE :
					m_Player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("LeftForeArmRoll");
				break;
				
				case DayZPlayerConstants.CMD_SUICIDEFB_PITCHFORK :
					m_Player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("Spine2");
				break;
				
				case DayZPlayerConstants.CMD_SUICIDEFB_SWORD :
					m_Player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("Spine2");
				break;
				
				case DayZPlayerConstants.CMD_SUICIDEFB_SPEAR :
					m_Player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("Head");
				break;
				
				case DayZPlayerConstants.CMD_SUICIDEFB_WOODAXE :
					m_Player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("LeftForeArmRoll");
				break;
				
				default :
					Print("EmoteManager.c | CreateBleedingEffect | WRONG ID");
				break;
			}
		}
	}*/
	
	override void HideItemInHands()
	{
		m_item = m_Player.GetItemInHands();
		if(m_Callback && m_item)
		{
			m_Player.GetItemAccessor().HideItemInHands(false);
			m_ItemToHands = true;
		}
	}
	
	override bool PlayEmote( int id )
	{
		if (!CanPlayEmote(id))
		{
			return false;
		}
		m_PreviousGestureID = m_CurrentGestureID;
		m_CurrentGestureID = id;
		if( id > 0)
		{
			switch ( id )
			{			
				
				case ID_EMOTE_GREETING :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_GREETING,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_GREETING,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
			
				case ID_EMOTE_SOS :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE)) 	CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SOS,DayZPlayerConstants.STANCEMASK_ERECT,true);
					HideItemInHands();
				break;
			
				case ID_EMOTE_HEART :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_HEART,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_HEART,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
					HideItemInHands();
				break;
			
				case ID_EMOTE_TAUNT :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_TAUNT,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_TAUNT,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
			
				case ID_EMOTE_LYINGDOWN :
					vector water_info = HumanCommandSwim.WaterLevelCheck( m_Player, m_Player.GetPosition() - (m_Player.GetDirection() * 0.9) ); //checks behind player, where the head ends up being
					//Print("depth: " + water_info[0]);
					if ( water_info[0] < WATER_DEPTH ) //is player able to lay down without "drowning"?
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_LYINGDOWN,DayZPlayerConstants.STANCEMASK_CROUCH,true);
						HideItemInHands();
					}
				break;
			
				case ID_EMOTE_TAUNTKISS :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_TAUNTKISS,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_TAUNTKISS,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
			
				case ID_EMOTE_POINT :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_POINT,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_POINT,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
					//m_bEmoteIsPlaying = false;
				break;
				
				case ID_EMOTE_TAUNTELBOW :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_TAUNTELBOW,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					HideItemInHands();
				break;
				
				case ID_EMOTE_THUMB :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_THUMB,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_THUMB,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_THUMBDOWN :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_THUMBDOWN,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_THUMBDOWN,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_THROAT :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_THROAT,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_THROAT,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
			
				case ID_EMOTE_SUICIDE :
					int suicideID = DayZPlayerConstants.CMD_SUICIDEFB_UNARMED;
					int m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
					string suicideStr;
					ItemBase weapon;
					weapon = m_Player.GetItemInHands();
					//suicideID = DayZPlayerConstants.CMD_SUICIDEFB_UNARMED; //unarmed suicide...optional?
					if (weapon)
					{
						if (weapon.ConfigIsExisting("suicideAnim"))
						{
							suicideStr = weapon.ConfigGetString("suicideAnim");
						}
						
						if (weapon.IsKindOf("Pistol_Base"))
						{
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_PISTOL;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
							//! switch to shoot from weapons instead of camera
							m_Player.OverrideShootFromCamera(false);
						}

						else if (weapon.IsKindOf("Rifle_Base"))
						{
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_RIFLE;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
							//! switch to shoot from weapons instead of camera
							m_Player.OverrideShootFromCamera(false);
						}
						
						else if (suicideStr == "onehanded"){
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_1HD;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
						}
						
						else if (suicideStr == "fireaxe"){
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_FIREAXE;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
						}
						
						else if (suicideStr == "pitchfork"){
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_PITCHFORK;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
						}
						
						else if (suicideStr == "sword"){
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_SWORD;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
						}
						
						else if (suicideStr == "spear"){
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_SPEAR;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
						}
						
						else if (suicideStr == "woodaxe"){
							suicideID = DayZPlayerConstants.CMD_SUICIDEFB_WOODAXE;
							m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
						}
					
						else //item in hands is not eligible for suicide
							suicideID = -1;
					}
			
					if (suicideID > -1)
					{
						CreateEmoteCallback(EmoteCB, suicideID, m_StanceMask, true);
						//m_Callback.RegisterAnimationEvent("Death",1);
					}
				break;
			
				case ID_EMOTE_DANCE:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE)) 	CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_DANCE,DayZPlayerConstants.STANCEMASK_ERECT,true);
					HideItemInHands();
				break;
				
				case ID_EMOTE_SALUTE:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE)) 	CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SALUTE,DayZPlayerConstants.STANCEMASK_ERECT,true);
					HideItemInHands();
				break;
				
				case ID_EMOTE_TIMEOUT:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_TIMEOUT,DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH,false);
						HideItemInHands();
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_TIMEOUT,DayZPlayerConstants.STANCEMASK_PRONE,true);
						HideItemInHands();
					}
					
				break;
				
				case ID_EMOTE_DABBING:
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_DABBING,DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH,false);
					HideItemInHands();
				break;
				
				case ID_EMOTE_FACEPALM:
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_FACEPALM,DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH,false);
					//HideItemInHands();
				break;
				
				case ID_EMOTE_CLAP:
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_CLAP,DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH,false);
					HideItemInHands();
				break;
				
				case ID_EMOTE_SILENT:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_SILENCE,DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH,false);
						//HideItemInHands();
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SILENCE,DayZPlayerConstants.STANCEMASK_PRONE,true);
						//HideItemInHands();
					}
				break;
				
				case ID_EMOTE_WATCHING:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_WATCHING,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_WATCHING,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_HOLD:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_HOLD,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_HOLD,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_LISTENING:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_LISTENING,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_LISTENING,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_POINTSELF:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_POINTSELF,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_POINTSELF,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_LOOKATME:
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_LOOKATME,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_LOOKATME,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_TAUNTTHINK :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_TAUNTTHINK,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_TAUNTTHINK,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_MOVE :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_MOVE,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_MOVE,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_DOWN :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_DOWN,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_DOWN,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_COME :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_COME,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_COME,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_SURRENDER :
					if ( !m_IsSurrendered )
					{
						PlaySurrenderInOut(true);
					}
					else if ( m_IsSurrendered )
					{
						if ( m_Player.GetItemInHands() )
							//m_Player.GetHumanInventory().LocalDestroyEntity(m_Player.GetItemInHands());		
							m_Player.GetItemInHands().Delete();
					}
				break;
				
				case ID_EMOTE_CAMPFIRE :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_CAMPFIRE,DayZPlayerConstants.STANCEMASK_CROUCH,true);
					HideItemInHands();
				break;
				
				case ID_EMOTE_SITA :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SITA,DayZPlayerConstants.STANCEMASK_CROUCH,true);
				break;
				
				case ID_EMOTE_SITB :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SITB,DayZPlayerConstants.STANCEMASK_CROUCH,true);
				break;
				
				case ID_EMOTE_RPS :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_RPS,DayZPlayerConstants.STANCEMASK_ERECT,false);
				break;
				
				case ID_EMOTE_RPS_R :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_RPS,DayZPlayerConstants.STANCEMASK_ERECT,false);
				break;
				
				case ID_EMOTE_RPS_P :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_RPS,DayZPlayerConstants.STANCEMASK_ERECT,false);
				break;
				
				case ID_EMOTE_RPS_S :
					CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_RPS,DayZPlayerConstants.STANCEMASK_ERECT,false);
				break;
				
				case ID_EMOTE_NOD :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_NODHEAD,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_NODHEAD,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_SHAKE :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_SHAKEHEAD,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SHAKEHEAD,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_SHRUG :
					if (!m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREMOD_SHRUG,DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT,false);
					}
					else
					{
						CreateEmoteCallback(EmoteCB,DayZPlayerConstants.CMD_GESTUREFB_SHRUG,DayZPlayerConstants.STANCEMASK_PRONE,true);
					}
				break;
				
				case ID_EMOTE_VOMIT :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsMultiplayer() )
					{
						ref SymptomBase symptom = m_Player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
	        			
			            if ( symptom )
			            { 
			                symptom.SetDuration(Math.RandomIntInclusive(4,8));
			            }
					}
				break;
				
				case ID_EMOTE_WIPEFACE :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsMultiplayer() )
					{
						symptom = m_Player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_HOT);
						
					}
				break;
				
				case ID_EMOTE_SHIVER :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsMultiplayer() )
					{
						symptom = m_Player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_FREEZE);
	        			
					}
				break;
				
				case ID_EMOTE_LAUGHFREAKY :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsMultiplayer() )
					{
						symptom = m_Player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
	        			
					}
				break;
				
				case ID_EMOTE_SNEEZE :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsMultiplayer() )
					{
						symptom = m_Player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_SNEEZE);
	        			
					}
				break;
				
				case ID_EMOTE_COUGH :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsMultiplayer() )
					{
						symptom = m_Player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
	        			
					}
				break;		

				case ID_EMOTE_HEALTHY :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsServer() || !GetGame().IsMultiplayer() ) {
						m_Player.m_InjuryHandler.SetInjuryCommandParams(true, eInjuryHandlerLevels.PRISTINE);
					}
						
				break;

				case ID_EMOTE_WORN :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsServer() || !GetGame().IsMultiplayer() ) {
						m_Player.m_InjuryHandler.SetInjuryCommandParams(true, eInjuryHandlerLevels.WORN);						
					}
					
				break;

				case ID_EMOTE_DAMAGED :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsServer() || !GetGame().IsMultiplayer() ) {
						m_Player.m_InjuryHandler.SetInjuryCommandParams(true, eInjuryHandlerLevels.DAMAGED);					
					}
					
				break;

				case ID_EMOTE_BADLYDAMAGED :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsServer() || !GetGame().IsMultiplayer() ) {
						m_Player.m_InjuryHandler.SetInjuryCommandParams(true, eInjuryHandlerLevels.BADLY_DAMAGED);						
					}
					
				break;

				case ID_EMOTE_RUINED :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsServer() || !GetGame().IsMultiplayer() ) {
						m_Player.m_InjuryHandler.SetInjuryCommandParams(true, eInjuryHandlerLevels.RUINED);						
					}
					
				break;

				case ID_EMOTE_BLOODYHANDS :
					if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER || !GetGame().IsServer() || !GetGame().IsMultiplayer() ) {
						m_Player.SetBloodyHands(true);
					}
				break;
				
				default :
					Print("EmoteManager.c | PlayEmote | WRONG ID");
					m_bEmoteIsPlaying = false;
					return false;
				break;
			}
		}
		if ( m_bEmoteIsPlaying )
		{
			m_Player.SetInventorySoftLock(false);
			if(m_Callback.m_IsFullbody)
			{
				SetEmoteLockState(true);
			}
		}
		
		return true;
		
	}
};
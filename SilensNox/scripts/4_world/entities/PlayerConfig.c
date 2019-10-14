modded class PlayerBase
{
    override void Init()
    {
		if ( !GetGame().IsServer() || !GetGame().IsMultiplayer() )
		{
			DayzPlayerItemBehaviorCfg     fireArmsItemBehaviour = new DayzPlayerItemBehaviorCfg;
			fireArmsItemBehaviour.SetFirearms();

			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_Ruger1022_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ak101.asi", fireArmsItemBehaviour, "dz/anims/anm/player/ik/weapons/ak101.anm", "dz/anims/anm/player/reloads/AK101/w_AK101_states.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_Trumpet_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mp133.asi", fireArmsItemBehaviour, "dz/anims/anm/player/ik/weapons/mp133.anm","dz/anims/anm/player/reloads/MP133/w_mp133_states.anm");
			
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_Crossbow_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mosin1903.asi", fireArmsItemBehaviour, "dz/anims/anm/player/ik/weapons/mosin9130.anm","dz/anims/anm/player/reloads/Mosin_1903/w_mosin1903_states.anm");
			
			
			
			////////////////////////////////////////////////////////////////////////////////////
			/*DayzPlayerItemBehaviorCfg 	pistolItemBehaviour = new DayzPlayerItemBehaviorCfg;
			pistolItemBehaviour.SetPistols();*/
			

			////////////////////////////////////////////////////////////////////////////////////
			DayzPlayerItemBehaviorCfg     toolsOneHanded = new DayzPlayerItemBehaviorCfg;
			toolsOneHanded.SetToolsOneHanded();
			
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_USBStick", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, 						"dz/anims/anm/player/ik/gear/9v_battery.anm");
			
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_SodaCan_ColorBase", "dz/anims/workspaces/player/player_main/props/player_main_1h_sodacan.asi", toolsOneHanded,	"dz/anims/anm/player/ik/gear/soda_can.anm");	
			
			GetDayZPlayerType().AddItemInHandsProfileIK("Healsyringe", "dz/anims/workspaces/player/player_main/props/player_main_1h_syringe.asi", toolsOneHanded,						"dz/anims/anm/player/ik/gear/Syringe_Full.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("HealSyringeEmpty", "dz/anims/workspaces/player/player_main/props/player_main_1h_syringe.asi", toolsOneHanded,						"dz/anims/anm/player/ik/gear/Syringe_Full.anm");
			
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_cigar_mung_lit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/thermometer.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_joint_mung_lit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/thermometer.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_cigarette_mung_lit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/thermometer.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_cigar_mung_unlit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/thermometer.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_joint_mung_unlit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/thermometer.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_cigarette_mung_unlit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/thermometer.anm");
			
			GetDayZPlayerType().AddItemInHandsProfileIK("Ammo_LOABolt", 			"dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,					"dz/anims/anm/player/ik/gear/arrow_bolt.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("Ammo_LOAT1Arrow", 			"dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,					"dz/anims/anm/player/ik/gear/arrow_hunting.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("Ammo_LOAT2Arrow", 			"dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,					"dz/anims/anm/player/ik/gear/arrow_hunting.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("Ammo_LOAT3Arrow", 			"dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,					"dz/anims/anm/player/ik/gear/arrow_hunting.anm");
			
			////////////////////////////////////////////////////////////////////////////////////
			DayzPlayerItemBehaviorCfg 	twoHanded = new DayzPlayerItemBehaviorCfg;
			twoHanded.SetTwoHanded();
			
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_Boombox", "dz/anims/workspaces/player/player_main/player_main_2h.asi", twoHanded,							"dz/anims/anm/player/ik/vehicles/BatteryTruck.anm"); 
			
			
			////////////////////////////////////////////////////////////////////////////////////
			DayzPlayerItemBehaviorCfg 	heavyItemBehaviour = new DayzPlayerItemBehaviorCfg;
			heavyItemBehaviour.SetHeavyItems();
	
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_Barrel_Base", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour,			"dz/anims/anm/player/ik/heavy/55galDrum.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("LOA_ZaunMitSeil", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", heavyItemBehaviour,			"dz/anims/anm/player/ik/vehicles/v3s/v3s_driverdoor.anm");
		}
		super.Init();	
    }
}

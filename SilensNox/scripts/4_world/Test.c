modded class PlayerBase
{
    //KillerDeclarations
    PlayerBase pb_Killer;
    PlayerIdentity pi_Killer;
    string s_KillerName, PlainKillerID;

    //VictimDeclaration
    PlayerBase pb_Victim;
    PlayerIdentity pi_Victim;
    string s_VictimName, PlainVictimID;
    
    //Position Declaration
    vector vKillerPos;
    vector vVictimPos;

    int iKillRange //Postpone that

    override void EEKilled(Object killer) //Thats The Function to Detect Kills
    {
        bool GotKilledWithSilencedWeapon = false;

        EntityAI KillerWeapon = pb_Killer.GetHumanInventory().GetEntityInHands();
        EntityAI weaponSilencer;                                                                                                                                                // = KillerWeapon.GetInventory().GetAttachmentFromIndex(3);
        int AttachmentsAttached = KillerWeapon.GetInventory().AttachmentCount(); //For the ForLoop
        //-------Player Declarations-----------------
        pb_Killer = PlayerBase.Cast(killer);
        pb_Victim = PlayerBase.Cast(this);
        pi_Killer = pb_Killer.GetIdentity();
        pi_Victim = pb_Victim.GetIdentity();

        //-------KillLog Declarations----------------
        PlainVictimID = pi_Victim.GetPlainId();
        PlainKillerID = pi_Killer.GetPlainId();
        //---------
        s_KillerName = pi_Killer.GetName();
        s_VictimName = pi_Victim.GetName();
        //---------
        vKillerPos = pb_Killer.GetPosition();
        vVictimPos = pb_Victim.GetPosition();


        if (Object.Cast(killer).IsWeapon()) // GUNLOG
        {
            for (int silCount = 0; silCount < AttachmentsAttached; silCount++)
            {
                weaponSilencer = KillerWeapon.GetInventory().GetAttachmentFromIndex(silCount);

                if (weaponSilencer.IsKindOf("ItemSuppressor"))
                {
                    GotKilledWithSilencedWeapon = true;
                }
            }

            if (GotKilledWithSilencedWeapon)
            {
                GetGame().AdminLog( " pvpKill," + "Pos=" + vVictimPos  + ",Steam64ID=" + PlainVictimID + "," + s_VictimName + ",Steam64ID=" + PlainKillerID  + "," + s_KillerName + ",Pos=" + vKillerPos + ",suppressed_" + KillerWeapon.GetDisplayName() );
            }

            else
            {
                GetGame().AdminLog( " pvpKill," + "Pos=" + vVictimPos  + ",Steam64ID=" + PlainVictimID + "," + s_VictimName + ",Steam64ID=" + PlainKillerID  + "," + s_KillerName + ",Pos=" + vKillerPos + ",unsuppressed_" + KillerWeapon.GetDisplayName() );
            }
        }

        //------- Deleting The Entitys to avoid Server Crashes
        KillerWeapon = NULL;
        weaponSilencer = NULL;
    }
}
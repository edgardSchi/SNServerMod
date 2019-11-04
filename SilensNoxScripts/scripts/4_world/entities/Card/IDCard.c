class SN_IDCard extends ItemCard {

    override void SetActions() {
        super.SetActions();

        AddAction(ActionLookAtCard);
    }

    override void EOnInit(IEntity other, int extra) {
        m_Playername = GetGame().GetPlayer().GetIdentity().GetName();
        m_RPID = "Test ID";

        PrintMessageToPlayer("Playername: " + m_Playername);
        PrintMessageToPlayer("ID: " + m_RPID);
    }

    override void OnStoreSave(ParamsWriteContext ctx) {
        super.OnStoreSave(ctx);

        ctx.Write( m_Playername );

        ctx.Write( m_RPID) ;
    }

    override bool OnStoreLoad(ParamsReadContext ctx, int version) {
        super.OnStoreLoad(ctx, version);

        if( !ctx.Read( m_Playername) ) {
            m_Playername = "Undifined name";
            return false;
        }

        if( !ctx.Read( m_RPID ) ) {
            m_RPID = "Undifined id";
            return false;
        }

        return true;
    }

    override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext  ctx) {
        super.OnRPC(sender, rpc_type, ctx);

        if (rpc_type == ERPCs.RPC_READ_NOTE)
		{
			if (!GetGame().IsServer() && GetGame().IsMultiplayer())
			{
				PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
				//PlayerBase player = PlayerBase.Cast(GetParent());
				if ( player && player.GetInventory().HasEntityInInventory(this) ) 	player.enterIDCardMenu = true;
			}
        }
    }

    void PrintMessageToPlayer(string txt) {
		
	    PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());	
		
	    if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
	    {
		    player.MessageImportant( txt);
	    } else 
	    {
    	    GetGame().GetMission().OnEvent( ChatMessageEventTypeID, new ChatMessageEventParams( CCDirect, "", txt, "" ) );
	    }
		
	}

}
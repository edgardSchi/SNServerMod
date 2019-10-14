

modded class PlayerBase {

	ref DrunkEffect m_DrunkEffect;
	ref AlcoholManager m_AlcoholManager;
	
	void SpawnAlcoholManager(float value) {
		//m_DrunkEffect = new DrunkEffect(this);
		m_AlcoholManager = new AlcoholManager(this, value);
	}
	
	AlcoholManager GetAlcoholManager() {
		return m_AlcoholManager;
	}
	
    override void EOnPostFrame(IEntity other, int extra) {

        super.EOnPostFrame(other, extra);

		if(GetAlcoholManager()) {
			GetAlcoholManager().Update();
		}
		
    }


	override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx) {
		super.OnRPC(sender, rpc_type, ctx);

		if(rpc_type == LOA_RPC.RPC_PLAYER_DRUNK) {
			if(!GetAlcoholManager()) {
				SpawnAlcoholManager(0);
				GetAlcoholManager().OnRPC(rpc_type, ctx);
			} else {
				GetAlcoholManager().OnRPC(rpc_type, ctx);
			}
		}
	}
}
class SN_cigarette_mung_lit : Clothing
{
	Particle 				m_SmokeParticle;
	bool attached = false;
	vector 					m_ParticleLocalPos = Vector(0, 0, 0);
		
	
	void SN_cigarette_mung_lit()
	{	
		init();	
	}

	void init()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // client side
			{
					m_SmokeParticle = Particle.PlayOnObject(ParticleList.CAMP_NORMAL_SMOKE, this, m_ParticleLocalPos, Vector(0,0,0), true);
					m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.01);
					m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.03);
			}
		//smokeupdate();				
	}
	
	void ~SN_cigarette_mung_lit()
	{
		StopAllParticles();
	}

	void StopAllParticles()
	{
		if (m_SmokeParticle)
		{
			m_SmokeParticle.Stop();
		}
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionRauchen);
	}	
}
class SN_joint_mung_lit : SN_cigarette_mung_lit {}
class SN_cigar_mung_lit : SN_cigarette_mung_lit {}
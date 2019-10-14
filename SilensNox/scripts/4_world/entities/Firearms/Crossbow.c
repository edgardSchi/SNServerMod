class LOA_Crossbow_Base extends BoltActionRifle_InnerMagazine_Base
{
	void LOA_Crossbow_Base ()
	{
	}
	
};
class LOA_Crossbow extends LOA_Crossbow_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CrossbowRecoil(this);
		//return new MosinRecoil(this);
	}
}
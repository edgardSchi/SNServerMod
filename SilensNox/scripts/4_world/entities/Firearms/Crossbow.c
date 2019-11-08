class SN_Crossbow_Base extends BoltActionRifle_InnerMagazine_Base
{
	void SN_Crossbow_Base ()
	{
	}
	
};
class SN_Crossbow extends SN_Crossbow_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CrossbowRecoil(this);
		//return new MosinRecoil(this);
	}
}
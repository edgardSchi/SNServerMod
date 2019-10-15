class SN_M92FS22LR : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SN_M92FS22LRRecoil(this);
	}
};
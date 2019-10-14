class LOA_M92FS22LR : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new LOA_M92FS22LRRecoil(this);
	}
};
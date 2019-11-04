class SN_Ruger1022 : AKM_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SporterRecoil(this);
	}
	
	override float GetChanceToJam()
	{
		float chanceToJam = super.GetChanceToJam();
		Magazine mag = GetMagazine(GetCurrentMuzzle());
		
		if(mag)
		{
			chanceToJam = chanceToJam + ((0.05 - chanceToJam) * mag.GetChanceToJam());
		}
		else
		{
			chanceToJam = chanceToJam + ((0.05 - chanceToJam) * 0.1);
		}
		
		return chanceToJam;
	}
}
class SN_Trumpet : Mp133Shotgun_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new Trumpetrecoil(this);
	}
	
	override float GetChanceToJam()
	{
		float chanceToJam = super.GetChanceToJam();
		Magazine mag = GetMagazine(GetCurrentMuzzle());
		
		if(mag)
		{
			chanceToJam = chanceToJam + ((0.05 - chanceToJam) * mag.GetChanceToJam());
		}
		else
		{
			chanceToJam = chanceToJam + ((0.05 - chanceToJam) * 0.1);
		}
		
		return chanceToJam;
	}
}
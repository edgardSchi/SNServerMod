
modded class PPEffects {

    static void SetDrunkEffect(float value) {

        /*float hitEffectColor[4];
		hitEffectColor[0] = 0;
		hitEffectColor[1] = 0;
		hitEffectColor[2] = 0;
		hitEffectColor[3] = Math.Lerp(Math.Clamp(m_ColorValueTotal[0],0,1), 1, value);

		m_MatColors.SetParam("OverlayColor", hitEffectColor);
		m_MatColors.SetParam("OverlayFactor", 0.75);*/
	
		if(value <= 1) {
			SetVignette(value + 0.7, 0, 0, 0);
		}
		

        //Material matHDR = GetGame().GetWorld().GetMaterial("Graphics/Materials/postprocess/filmgrain");
        //matHDR.SetParam();
    }

    static void SetGrain(float value) {

        Material mat_grain = GetGame().GetWorld().GetMaterial("graphics/materials/postprocess/filmgrain");
		
		if (mat_grain)
		{
			mat_grain.SetParam("Intensity", value);
			mat_grain.SetParam("Sharpness", 0.5);
			mat_grain.SetParam("GrainSize", 2);
		}
    }
}
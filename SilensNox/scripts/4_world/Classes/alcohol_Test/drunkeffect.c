

class DrunkEffect {

	bool isLimping = false;
	
	ref Timer limpingTimer;
	
	float currentValue;

	int limpingCounter = 10;
	

	void DrunkEffect() {
	}
	
	void ~DrunkEffect() {
		delete limpingTimer;
		//RemoveLimping(); //causes crash
		RemoveAll();
	}
    
	void Update(float value) {
		
		currentValue = value;
		SetVisuals(value);		
		
		if(!limpingTimer) {
			limpingTimer = new Timer();
			limpingTimer.Run(limpingCounter, this, "SetLimping", null, true);
		}
		
	}
	
	void SetBlind() {
		PPEffects.EnableBurlapSackBlindness();	
		
		ref Timer eyesClosedTimer = new Timer();
		eyesClosedTimer.Run(2, this, "SetVisuals", null, false);
	}
	
	void SetVisuals(float value) {
		PPEffects.SetDrunkEffect(value);	
	}
	
	void RemoveAll() {
		PPEffects.ResetAll();
	}
}
modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);

		actions.Insert(ActionHealSelfSyringe);
		actions.Insert(ActionHealOtherSyringe);
		actions.Insert(ActionRauchen);
		actions.Insert(ActionKatanaSheathHip);
		actions.Insert(ActionKatanaSheathBack);
		actions.Insert(ActionLookAtNote);

		actions.Insert(ActionLookAtCard);
	}
}
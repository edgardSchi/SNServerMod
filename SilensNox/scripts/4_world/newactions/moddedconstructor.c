modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);

		actions.Insert(ActionHealSelfSyringe);
		actions.Insert(ActionHealOtherSyringe);
		actions.Insert(ActionRauchen);
	}
}
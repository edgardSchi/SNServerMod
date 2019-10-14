class CfgPatches
{
    class SN_UniqueItems
    {
        units[]=
        {
            "NepNep"
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data"
        };
    };
};
class cfgWeapons
{
	class Mosin9130_Black;
	class SN_Mosin_Zimti: Mosin9130_Black
	{
		scope=2;
		displayName="Babayaga";
		descriptionShort="Demchenko's Knöchelfetzer, Stock aus feuergehärtetem Wurzelholz geschnitzt, Verschluß aus Werkzeugstahl kaltgeschmiedet, handgemachter Korntunnel, Gravur auf dem Kolben: Erniedrige dich, um andere zu erhöhen";
		weight=5250;
	}
}
		
	
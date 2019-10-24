#include "SpaceShips/Transporter.h"
int Transporter::count=0;
Transporter::Transporter(/* args */)
{
    regularCrewFactory* Fact = new regularCrewFactory();
    transporterCrew = Fact->ProduceRegularCrew();
    type = "Transporter";

    //---- ID for ship---------
        ID = Transporter::count++;
}

Transporter::~Transporter()
{
}

///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Transporter::printComponent(){

}
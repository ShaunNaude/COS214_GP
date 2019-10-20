#include "SpaceShips/Transporter.h"
Transporter::Transporter(/* args */)
{
    regularCrewFactory* Fact = new regularCrewFactory();
    transporterCrew = Fact->ProduceRegularCrew();
    type = "Transporter";
}

Transporter::~Transporter()
{
}

///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Transporter::printComponent(){

}
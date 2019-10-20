#include "SpaceShips/Frigate.h"
Frigate::Frigate(/* args */)
{
    regularCrewFactory* Fact = new regularCrewFactory();
    frigateCrew = Fact->ProduceRegularCrew();
}

Frigate::~Frigate()
{
}

///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Frigate::printComponent(){

}
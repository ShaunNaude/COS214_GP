#include "SpaceShips/Frigate.h"
int Frigate::count=0;
Frigate::Frigate(/* args */)
{
    regularCrewFactory* Fact = new regularCrewFactory();
    frigateCrew = Fact->ProduceRegularCrew();
    type = "Frigate";

    //---- ID for ship---------
        ID = Frigate::count++;
}

Frigate::~Frigate()
{
}

///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Frigate::printComponent(){

}
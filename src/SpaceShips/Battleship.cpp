#include "SpaceShips/Battleship.h"

int Battleship::count=0;

Battleship::Battleship(/* args */)
{
    regularCrewFactory* Fact = new regularCrewFactory();
    battleShipCrew = Fact->ProduceRegularCrew();
    type = "Battleship";

    //---- ID for ship---------
        ID = Battleship::count++;
}

Battleship::~Battleship()
{
}
///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Battleship::printComponent(){

}
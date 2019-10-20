#include "SpaceShips/Battleship.h"

Battleship::Battleship(/* args */)
{
    regularCrewFactory* Fact = new regularCrewFactory();
    battleShipCrew = Fact->ProduceRegularCrew();
}

Battleship::~Battleship()
{
}
///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Battleship::printComponent(){

}
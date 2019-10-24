#include "SpaceShips/Battleship.h"
#include "ManningTheSpaceships/Crew.h"

int Battleship::count=0;

Battleship::Battleship(/* args */)
{
    regularCrewFactory* Fact = new regularCrewFactory();
    battleShipCrew = Fact->ProduceRegularCrew();
    type = "Battleship";

    this->crew = battleShipCrew;
  
    

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

void Battleship::receiveMsg(string msg)
{
    cout<<this->type<<"-"<<ID<<" Has received message: "<<msg<<endl;
}


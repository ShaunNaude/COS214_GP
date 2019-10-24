#include "SpaceShips/Fighter.h"
int Fighter::count=0;
/**This class is the template used to create an Fighter spaceships.
 * 
 * 
 */
Fighter::Fighter(/* args */)
{
    combatCrewFactory* fact = new combatCrewFactory();
    fighterCrew = fact->ProduceCombatCrew();
    type = "Fighter";
    this->crew = fighterCrew;

    //---- ID for ship---------
        ID = Fighter::count++;
}

Fighter::~Fighter()
{
}

///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Fighter::printComponent(){

}

void Fighter::receiveMsg(string msg)
{
    cout<<this->type<<"-"<<ID<<" Has received message: "<<msg<<endl;
}

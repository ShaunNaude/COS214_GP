#include "SpaceShips/Fighter.h"
/**This class is the template used to create an Fighter spaceships.
 * 
 * 
 */
Fighter::Fighter(/* args */)
{
    combatCrewFactory* fact = new combatCrewFactory();
    fighterCrew = fact->ProduceCombatCrew();
}

Fighter::~Fighter()
{
}

///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Fighter::printComponent(){

}
#include "SpaceshipBlueprints.h"
/**This class is the abstract factory class and is used to define an abstract blueprint.
*It gives access to all the different blueprints used to create different spaceships.
*It also has all the virtual create methods which are inherited by the concrete blueprints.
*/
SpaceshipBlueprints::SpaceshipBlueprints(/* args */)
{
}

SpaceshipBlueprints::~SpaceshipBlueprints()
{
}

Spaceships* SpaceshipBlueprints::createSpaceship(){
    
}
#ifndef SPACESHIPBLUEPRINTS_H
#define SPACESHIPBLUEPRINTS_H
#include "Battleship.h"
#include "Exploration_vessel.h"
#include "Fighter.h"
#include "Frigate.h"
#include "Transporter.h"
#include <iostream>
#include <string>

using namespace std;

/**This class is the abstract factory class and is used to define an abstract blueprint.
*It gives access to all the different blueprints used to create different spaceships.
*It also has all the virtual create methods which are inherited by the concrete blueprints.
*/

class SpaceshipBlueprints
{
private:
    /* data */
public:
    ///SpaceshipBlueprints constructor.
    SpaceshipBlueprints(/* args */);
    ///SpaceshipBlueprints destructor.
    ~SpaceshipBlueprints();
    /**pure virtual function to be implemented in the concrete blueprints which will allow 
     *the space station to create space ships.
    */
    virtual Spaceships* createSpaceship() = 0;
};

#endif
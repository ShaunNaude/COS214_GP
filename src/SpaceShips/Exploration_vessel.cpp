#include "SpaceShips/Exploration_vessel.h"
/**This class is the template used to create an exploration vessel.
 * 
 * 
 */
///Exploration vessel constructor
Exploration_vessel::Exploration_vessel(/* args */)
{
    ///set initial stats on creation
   setMaxSpeed(4000);
   setDisplacement(0);
   setPower(20);
   setThrust(60);
   setStallSpeed(200);
   setCandPCapacity(5);
   setEnergy(1000);

}
///Exploration vessel destructor
Exploration_vessel::~Exploration_vessel()
{
}

///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Exploration_vessel::printComponent(){

}
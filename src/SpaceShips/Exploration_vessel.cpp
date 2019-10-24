#include "SpaceShips/Exploration_vessel.h"
int Exploration_vessel::count=0;
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
   type = "Exploration";

   regularCrewFactory* Fact = new regularCrewFactory();
     ExplorationCrew = Fact->ProduceRegularCrew();
  

    //---- ID for ship---------
        ID = Exploration_vessel::count++;


}
///Exploration vessel destructor
Exploration_vessel::~Exploration_vessel()
{
}

///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Exploration_vessel::printComponent(){

}
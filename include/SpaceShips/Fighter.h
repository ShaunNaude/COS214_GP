#ifndef FIGHTER_H
#define FIGHTER_H
#include "SpaceShips/Spaceships.h"
#include "ManningTheSpaceships/combatCrewFactory.h"
#include "ManningTheSpaceships/combatCrew.h"

/**
 * This class is a Concrete product in the abstract factory design pattern.
 * */

class Fighter:public Spaceships
{
private:
    ///reference to the regular crew that is on the ship
    combatCrew* fighterCrew;
    /**
     * static counter that will keep track of how many Fighters are currently in use
     * */
    static int count;
    ///every Fighter will have a unique identifier.
    int ID;
public:
    ///generic Constructor
    Fighter();
    ///generic Destructor
    ~Fighter();
    ///Decorator function
    void printComponent();
    ///This method is used to receive transmission from the radio.
    void receiveMsg(string);
};

#endif